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
/**        \file  Com.c
 *        \brief  MICROSAR Communication source file
 *
 *      \details  This is the implementation of the MICROSAR Communication module.
 *                The basic software module is based on the AUTOSAR Communication specification.
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

/** this define can be used to mock an API with a redefine. */
#define COM_SOURCE
/** compatibility define for COM_SOURCE. */
#define V_IL_ASRCOMCFG5_COMPONENT_SOURCE

/**********************************************************************************************************************
   LOCAL MISRA / PCLINT JUSTIFICATION
**********************************************************************************************************************/
/* *INDENT-OFF* */
/* PRQA S 0850 EOF */ /* MD_MSR_19.8 */
/* PRQA S 0857, 0639 EOF */ /* MD_MSR_1.1_857, MD_MSR_1.1_639 */
/* PRQA S 3109 EOF */ /* MD_MSR_14.3 */
/* PRQA S 3453 EOF */ /* MD_MSR_19.7 */
/* PRQA S 0777 EOF */ /* MD_Com_0777 */
/* PRQA S 3355, 3356, 3358, 3359 EOF */ /* MD_CSL_3355_3356_3358_3359  */
/* PRQA S 2018 EOF */ /* MD_CSL_2018 */
/* *INDENT-ON* */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com.h"
#include "Com_Lcfg.h"
#if(COM_USE_INIT_POINTER == STD_ON)
# include "EcuM_Error.h"
#endif
#include "SchM_Com.h"

/**********************************************************************************************************************
  VERSION CHECK
**********************************************************************************************************************/
#if ((COM_SW_MAJOR_VERSION != 11U) || (COM_SW_MINOR_VERSION != 0U) || (COM_SW_PATCH_VERSION != 0U))
# error "Vendor specific version numbers of Com.c and Com.h are inconsistent"
#endif

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**
  \defgroup  Com_GetConstValueXIntXXOffsets Com XInt Value Offsets
  \brief  These defines are used to calculate the filter specific offset to Com_GetConstValueXIntXX.
  \details  -
    \{
*/
#define COM_SIGNAL_F_PARAM_MASK           0U  /**< the offset to get the mask value */
#define COM_SIGNAL_F_PARAM_X              1U  /**< the offset to get the x value */
#define COM_SIGNAL_F_PARAM_MIN            0U  /**< the offset to get the min value */
#define COM_SIGNAL_F_PARAM_MAX            1U  /**< the offset to get the max value */
/**
  \}
*/

#if (COM_GWTXPDUDESCRIPTIONINFOUSEDOFRXPDUINFO == STD_ON)
typedef enum
{
  COM_TRANSMIT_TRIGGER_NOTFULFILLED,
  COM_TRANSMIT_TRIGGER,
  COM_TRANSMIT_TRIGGERWITHOUTREP
} Com_GwDescriptionTriggerType;
#endif

#if (COM_GWTXPDUDESCRIPTIONINFOUSEDOFRXPDUINFO == STD_ON)
/**
  \defgroup  Com_IsGwDestinationDescriptionTypeX Bit Flags
  \brief  These bit masks are used to retrieve the desired property out of GwDestinationDescriptionType
  \details  -
    \{
*/
# define COM_IMMEDIATE_MASK_TYPEOFGWDESCRIPTIONACCESSINFO      8U/**< bit mask to retrieve the immediate flag */
# define COM_TRIGGERED_MASK_TYPEOFGWDESCRIPTIONACCESSINFO      4U/**< bit mask to retrieve the triggered flag */
# define COM_ONCHANGE_MASK_TYPEOFGWDESCRIPTIONACCESSINFO       2U/**< bit mask to retrieve the onchange flag */
# define COM_WITHOUTREP_MASK_TYPEOFGWDESCRIPTIONACCESSINFO     1U/**< bit mask to retrieve the without repetition flag */
/**
  \}
*/
#endif

#if (COM_TXSIGGRPINFO == STD_ON)
/**
  \defgroup  Com_SigGrpEventFlagBits  Com Tx Signal Group Event Flags
  \brief  These defines are used to get and set flags in Com_SigGrpEventFlag.
  \details  -
    \{
*/
# define COM_TX_SIGIF_GROUPEVENTFLAG        1U  /**< indicates a trigger (trigger flag)*/
# define COM_TX_SIGIF_GROUPREPETITION       2U  /**< indicates repetitions (repetition flag)*/
# define COM_TX_SIGIF_GROUPEVENTREPETITION  3U  /**< indicates a trigger with repetition */

# define COM_TX_SIGIF_TRIGGERED_BIT          1U
# define COM_TX_SIGIF_WITHOUT_REPETITION_BIT 2U
# define COM_TX_SIGIF_ON_CHANGE_BIT          4U
/**
  \}
*/
#endif

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/
#if (COM_RXTOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_LMgt_RxIpduDmActive
**********************************************************************************************************************/
/*! \brief    This function evaluates the Deadline Monitoring state of the Rx I-Pdu.
    \details  -
    \param    ComRxToutObjtId  ID of Rx Timeout object.
    \return   boolean
              true:   The Deadline Monitoring is enabled for at least one mapped I-Pdu Group
              false:  The Deadline Monitoring is disabled for all mapped I-Pdu Groups
**********************************************************************************************************************/
# define Com_LMgt_RxIpduDmActive(ComRxToutObjtId)       ((Com_GetRxPduDmState(ComRxToutObjtId) & COM_ACTIVE_RXPDUDMSTATE) == COM_ACTIVE_RXPDUDMSTATE)

/**********************************************************************************************************************
  Com_LMgt_ActivateRxIpduDm
**********************************************************************************************************************/
/*! \brief    This function enables the Deadline Monitoring for the Rx I-Pdu.
    \details  -
    \param    ComRxToutObjtId  ID of Rx Timeout object.
**********************************************************************************************************************/
# define Com_LMgt_ActivateRxIpduDm(ComRxToutObjtId)        Com_SetRxPduDmState(ComRxToutObjtId, COM_ACTIVE_RXPDUDMSTATE)

/**********************************************************************************************************************
  Com_LMgt_DeactivateRxIpduDm
**********************************************************************************************************************/
/*! \brief    This function disables the Deadline Monitoring for the Rx I-Pdu.
              To avoid data inconsistency ensure the Deadline Monitoring is
              enabled for the Rx I-Pdu by calling Com_LMgt_RxIpduDmActive().
    \details  -
    \param    ComRxToutObjtId  ID of Rx Timeout object.
**********************************************************************************************************************/
# define Com_LMgt_DeactivateRxIpduDm(ComRxToutObjtId)  Com_SetRxPduDmState((ComRxToutObjtId), COM_INACTIVE_RXPDUDMSTATE)

/**********************************************************************************************************************
  Com_LMgt_HasTimeoutOccurred
**********************************************************************************************************************/
/*! \brief    This function evaluates if a Timeout has occurred.
    \details  -
    \param    ComRxToutObjtId  ID of Rx Timeout object.
    \return   boolean
              true:   A timeout has occurred.
              false:  No timeout has occurred.
**********************************************************************************************************************/
# define Com_LMgt_HasTimeoutOccurred(ComRxToutObjtId)  (boolean) ((COM_OCCURRED_RXPDUDMSTATE == Com_GetRxPduDmState(ComRxToutObjtId)) ? TRUE : FALSE)

/**********************************************************************************************************************
  Com_LMgt_TimeoutOccurred
**********************************************************************************************************************/
/*! \brief    This function sets the Rx Deadline Monitoring State to Occurred.
    \details  -
    \param    ComRxToutObjtId  ID of Rx Timeout object.
**********************************************************************************************************************/
# define Com_LMgt_TimeoutOccurred(ComRxToutObjtId)  Com_SetRxPduDmState((ComRxToutObjtId), COM_OCCURRED_RXPDUDMSTATE)

/**********************************************************************************************************************
  Com_LMgt_RemoveOccurredFlag
**********************************************************************************************************************/
/*! \brief    This function removes the OCCURRED flag form the Rx Deadline Monitoring State.
    \details  -
    \param    ComRxToutObjtId  ID of Rx Timeout object.
**********************************************************************************************************************/
# define Com_LMgt_RemoveOccurredFlag(ComRxToutObjtId)  Com_SetRxPduDmState((ComRxToutObjtId), (Com_GetRxPduDmState(ComRxToutObjtId) & COM_CLEAR_OCCURRED_FLAG_RXPDUDMSTATE))

#endif

/**********************************************************************************************************************
  Com_Signal_BitOffsetFromBitPos
**********************************************************************************************************************/
/*! \brief    This function converts an absolute signal position to the corresponding bit offset in byte.
    \details  -
    \param    pos  absolute bit position
    \return   uint8
              bit index in the byte, where the signal starts (0..7)
**********************************************************************************************************************/
#define Com_Signal_BitOffsetFromBitPos(pos)  (COM_CAST2UINT8((pos) & 7U))

/**********************************************************************************************************************
  Com_NBITNBYTE_GetEndiannesIndex
**********************************************************************************************************************/
/*! \brief    This method return negative Index if bus signal is big endian, otherwise index is returned.
    \details  -
    \param    bufferIndex         TxBuffer index
    \param    isBusBigEndian      flag, if bus is big endian.
    \return   bufferIndex if bus is little endian
              (- bufferIndex) if bus is big endian.
 ****************************************************************************************************************/
#define Com_NBITNBYTE_GetEndiannesIndex(bufferIndex, isBusBigEndian) (((isBusBigEndian) == TRUE) ? (-(bufferIndex)) : (bufferIndex))

#if (COM_GWTXPDUDESCRIPTIONINFOUSEDOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_IsGwDestinationDescriptionTypeImmediate
**********************************************************************************************************************/
/*! \brief    This function checks if the type of the gateway description is immediate.
    \details  -
    \param    DescriptionType - Type of description
    \return   boolean
                TRUE if type of description is immediate.
                FALSE otherwise
**********************************************************************************************************************/
# define Com_IsGwDestinationDescriptionTypeImmediate(DescriptionType)       (boolean) ((((DescriptionType) & COM_IMMEDIATE_MASK_TYPEOFGWDESCRIPTIONACCESSINFO) == COM_IMMEDIATE_MASK_TYPEOFGWDESCRIPTIONACCESSINFO) ? TRUE : FALSE)
/**********************************************************************************************************************
  Com_IsGwDestinationDescriptionTypeTriggered
**********************************************************************************************************************/
/*! \brief    This function checks if the description has a TRIGGERED* transferProperty
    \details  -
    \param    DescriptionType - Type of description
    \return   boolean
                TRUE if a TRIGGERED* transferProperty is configured
                FALSE otherwise
**********************************************************************************************************************/
# define Com_IsGwDestinationDescriptionTypeTriggered(DescriptionType)       (((DescriptionType) & COM_TRIGGERED_MASK_TYPEOFGWDESCRIPTIONACCESSINFO) == COM_TRIGGERED_MASK_TYPEOFGWDESCRIPTIONACCESSINFO)
/**********************************************************************************************************************
  Com_IsGwDestinationDescriptionTypeOnChange
**********************************************************************************************************************/
/*! \brief    This function checks if the description has an ONCHANGE* transferProperty
    \details  -
    \param    DescriptionType - Type of description
    \return   boolean
                TRUE if an ONCHANGE* transferProperty is configured
                FALSE otherwise
**********************************************************************************************************************/
# define Com_IsGwDestinationDescriptionTypeOnChange(DescriptionType)        (((DescriptionType) & COM_ONCHANGE_MASK_TYPEOFGWDESCRIPTIONACCESSINFO) == COM_ONCHANGE_MASK_TYPEOFGWDESCRIPTIONACCESSINFO)
/**********************************************************************************************************************
  Com_IsGwDestinationDescriptionTypeWithoutRepetion
**********************************************************************************************************************/
/*! \brief    This function checks if the description has an WITHOUTREPETITION* transferProperty
    \details  -
    \param    DescriptionType - Type of description
    \return   boolean
                TRUE if a WITHOUTREPETITION* transferProperty is configured
                FALSE otherwise
**********************************************************************************************************************/
# define Com_IsGwDestinationDescriptionTypeWithoutRepetion(DescriptionType)  (((DescriptionType) & COM_WITHOUTREP_MASK_TYPEOFGWDESCRIPTIONACCESSINFO) == COM_WITHOUTREP_MASK_TYPEOFGWDESCRIPTIONACCESSINFO)
#endif

#if (COM_GWTIMEOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_GwTout_TimeoutHasOccurred
**********************************************************************************************************************/
/*! \brief    This function checks if a gateway timeout has occurred
    \details  -
    \param    gwToutId - Index of GwTimeoutInfo
    \return   boolean
                true if timeout counter is zero
                false otherwise
**********************************************************************************************************************/
# define Com_GwTout_TimeoutHasOccurred(gwToutId)  (Com_GetGwRoutingTimeoutCounter(gwToutId) == 0)
/**********************************************************************************************************************
  Com_GwTout_TimeoutIsActive
**********************************************************************************************************************/
/*! \brief    This function checks if a gateway timer is still active
    \details  -
    \param    gwToutId - Index of GwTimeoutInfo
    \return   boolean
                true if timeout counter is greater than zero
                false otherwise
**********************************************************************************************************************/
# define Com_GwTout_TimeoutIsActive(gwToutId)     (Com_GetGwRoutingTimeoutCounter(gwToutId) > 0)
#endif

/**********************************************************************************************************************
  Com_TxModeHdlr_IsPeriodicTxMode
**********************************************************************************************************************/
/*! \brief    This function checks if the current tx mode of the passed Tx ComIPdu is periodic
    \details  -
    \return   boolean
                TRUE if current tx mode is periodic
                FALSE otherwise
**********************************************************************************************************************/
#if ((COM_PERIODICOFTXMODETRUE == STD_ON) && (COM_PERIODICOFTXMODEFALSE == STD_ON))
# define Com_TxModeHdlr_IsPeriodicTxMode(TxPduId)           ((Com_IsCurrentTxMode(TxPduId)) ? (Com_IsPeriodicOfTxModeTrue(Com_GetTxModeTrueIdxOfTxModeInfo(TxPduId))) : (Com_IsPeriodicOfTxModeFalse(Com_GetTxModeFalseIdxOfTxModeInfo(TxPduId))))
#elif (COM_PERIODICOFTXMODETRUE == STD_ON)
# define Com_TxModeHdlr_IsPeriodicTxMode(TxPduId)           ((Com_IsCurrentTxMode(TxPduId)) ? (Com_IsPeriodicOfTxModeTrue(Com_GetTxModeTrueIdxOfTxModeInfo(TxPduId))) : FALSE)
#elif (COM_PERIODICOFTXMODEFALSE == STD_ON)
# define Com_TxModeHdlr_IsPeriodicTxMode(TxPduId)           ((Com_IsCurrentTxMode(TxPduId)) ? FALSE : (Com_IsPeriodicOfTxModeFalse(Com_GetTxModeFalseIdxOfTxModeInfo(TxPduId))))
#endif

/**********************************************************************************************************************
  Com_TxModeHdlr_GetCurrentTimePeriod
**********************************************************************************************************************/
/*! \brief    This function returns the configured time period of the current tx mode.
    \details  -
    \return   uint8
                configured time period of the current tx mode.
**********************************************************************************************************************/
#if ((COM_PERIODICOFTXMODETRUE == STD_ON) && (COM_PERIODICOFTXMODEFALSE == STD_ON))
# define Com_TxModeHdlr_GetCurrentTimePeriod(TxPduId)           ((Com_IsCurrentTxMode(TxPduId)) ? (Com_GetTimePeriodOfTxModeTrue(Com_GetTxModeTrueIdxOfTxModeInfo(TxPduId))) : (Com_GetTimePeriodOfTxModeFalse(Com_GetTxModeFalseIdxOfTxModeInfo(TxPduId))))
#elif (COM_PERIODICOFTXMODETRUE == STD_ON)
# define Com_TxModeHdlr_GetCurrentTimePeriod(TxPduId)           ((Com_IsCurrentTxMode(TxPduId)) ? (Com_GetTimePeriodOfTxModeTrue(Com_GetTxModeTrueIdxOfTxModeInfo(TxPduId))) : 0U)
#elif (COM_PERIODICOFTXMODEFALSE == STD_ON)
# define Com_TxModeHdlr_GetCurrentTimePeriod(TxPduId)           ((Com_IsCurrentTxMode(TxPduId)) ? 0U : (Com_GetTimePeriodOfTxModeFalse(Com_GetTxModeFalseIdxOfTxModeInfo(TxPduId))))
#endif

/**********************************************************************************************************************
  Com_TxModeHdlr_GetCurrentTimeOffset
**********************************************************************************************************************/
/*! \brief    This function returns the configured time offset (time between the start of the I-PDU by
 *            Com_IpduGroupControl and the first transmission request) of the current tx mode.
    \details  -
    \return   uint8
                configured time offset of the current tx mode.
**********************************************************************************************************************/
#if ((COM_TIMEOFFSETOFTXMODETRUE == STD_ON) && (COM_TIMEOFFSETOFTXMODEFALSE == STD_ON))
# define Com_TxModeHdlr_GetCurrentTimeOffset(TxPduId)           ((Com_IsCurrentTxMode(TxPduId)) ? (Com_GetTimeOffsetOfTxModeTrue(Com_GetTxModeTrueIdxOfTxModeInfo(TxPduId))) : (Com_GetTimeOffsetOfTxModeFalse(Com_GetTxModeFalseIdxOfTxModeInfo(TxPduId))))
#elif (COM_TIMEOFFSETOFTXMODETRUE == STD_ON)
# define Com_TxModeHdlr_GetCurrentTimeOffset(TxPduId)           ((Com_IsCurrentTxMode(TxPduId)) ? (Com_GetTimeOffsetOfTxModeTrue(Com_GetTxModeTrueIdxOfTxModeInfo(TxPduId))) : 1U)
#elif (COM_TIMEOFFSETOFTXMODEFALSE == STD_ON)
# define Com_TxModeHdlr_GetCurrentTimeOffset(TxPduId)           ((Com_IsCurrentTxMode(TxPduId)) ? 1U : (Com_GetTimeOffsetOfTxModeFalse(Com_GetTxModeFalseIdxOfTxModeInfo(TxPduId))))
#else
# define Com_TxModeHdlr_GetCurrentTimeOffset(TxPduId)           1U
#endif

#if (COM_ARRAYACCESSUSEDOFTXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxSigIf_IsTxSigGrpInfoTriggered
**********************************************************************************************************************/
/*! \brief    This function checks if the transferProperty of the provided signal group can trigger a transmission (
 *            not PENDING).
 *  \details  -
    \param    ComTxSigGrpInfoObj - Id of SignalGroup
    \return   boolean
                TRUE if no SignalGroup can trigger transmission
                FALSE otherwise
**********************************************************************************************************************/
# define Com_TxSigIf_IsTxSigGrpInfoTriggered(ComTxSigGrpInfoObj)  ((Com_GetTransferPropertyOfTxSigGrpInfo(ComTxSigGrpInfoObj) & COM_TX_SIGIF_TRIGGERED_BIT) == COM_TX_SIGIF_TRIGGERED_BIT)
/**********************************************************************************************************************
  Com_TxSigIf_IsTxSigGrpInfoOnChange
**********************************************************************************************************************/
/*! \brief    This function checks if provided signal group has any *ON_CHANGE transferProperty.
 *  \details  -
    \param    ComTxSigGrpInfoObj - Id of SignalGroup
    \return   boolean
                TRUE if no SignalGroup has ON-CHANGE transferProperty.
                FALSE otherwise
**********************************************************************************************************************/
# define Com_TxSigIf_IsTxSigGrpInfoOnChange(ComTxSigGrpInfoObj)  ((Com_GetTransferPropertyOfTxSigGrpInfo(ComTxSigGrpInfoObj) & COM_TX_SIGIF_ON_CHANGE_BIT) == COM_TX_SIGIF_ON_CHANGE_BIT)
/**********************************************************************************************************************
  Com_TxSigIf_IsTxSigGrpInfoWithoutRepetition
**********************************************************************************************************************/
/*! \brief    This function checks if provided signal group does not permit repetitive transmission (transferProperty is
 *            is *WITHOUTREPETITION) .
 *  \details  -
    \param    ComTxSigGrpInfoObj - Id of SignalGroup
    \return   boolean
                TRUE if no SignalGroup does not permit repetitive transmission.
                FALSE otherwise
**********************************************************************************************************************/
# define Com_TxSigIf_IsTxSigGrpInfoWithoutRepetition(ComTxSigGrpInfoObj)  ((Com_GetTransferPropertyOfTxSigGrpInfo(ComTxSigGrpInfoObj) & COM_TX_SIGIF_WITHOUT_REPETITION_BIT) == COM_TX_SIGIF_WITHOUT_REPETITION_BIT)
#endif

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/*! \brief    Union used for sign extension
    \details  -  */
typedef union uSignExt8Bit
{                               /* PRQA S 0750 */ /* MD_MSR_18.4 */
  uint8 unsignedAccess;
  sint8 signedAccess;
} uSignExt8BitType;

/*! \brief    Union used for sign extension
    \details  - */
typedef union uSignExt16Bit
{                               /* PRQA S 0750 */ /* MD_MSR_18.4 */
  uint8 unsignedAccess[2];
  sint16 signedAccess;
} uSignExt16BitType;

/*! \brief    Union used for sign extension
    \details  -                             */
typedef union uSignExt32Bit
{                               /* PRQA S 0750 */ /* MD_MSR_18.4 */
  uint8 unsignedAccess[4];
  sint32 signedAccess;
} uSignExt32BitType;

/*! \brief    Union used for sign extension
    \details  - */
typedef union uSignExt64Bit
{                               /* PRQA S 0750 */ /* MD_MSR_18.4 */
  uint8 unsignedAccess[8];
  sint64 signedAccess;
} uSignExt64BitType;

/*! \brief  type to indicate the process state.
    \details  - */
typedef enum
{
  VALID,
  INVALID,
  FILTERED
} Com_RxSigProcessState;

/*!
    \brief    Struct used for caching function ptr callbacks.
    \details  - */
typedef struct
{
  P2VAR(uint32, AUTOMATIC, COM_APPL_VAR) ptrToCache;
  uint32 cacheIndex;
  uint32 cacheSize;
} FctPtrCacheStrct;

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

#if(COM_USE_INIT_POINTER == STD_ON)
# define COM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# include "MemMap.h"    /* PRQA S 5087 */       /* MD_MSR_19.1 */

P2CONST(Com_ConfigType, COM_VAR_ZERO_INIT, COM_PBCFG) Com_ConfigDataPtr = NULL_PTR;

# define COM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# include "MemMap.h"    /* PRQA S 5087 */       /* MD_MSR_19.1 */
#endif

/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define COM_START_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_19.1 */

#if (COM_RXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_LMgt_InitRxIpdu
**********************************************************************************************************************/
/*! \brief    This function initializes a rx I-PDU.
    \details  -
    \param    ComPduId Handle of the I-PDU.
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_LMgt_InitRxIpdu(PduIdType ComPduId);
#endif

#if (COM_TXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_LMgt_InitTxIpdu
**********************************************************************************************************************/
/*! \brief    This function initializes a tx I-PDU.
    \details  -
    \param    ComPduId Handle of the I-PDU.
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_LMgt_InitTxIpdu(Com_TxPduInfoIterType ComPduId);
#endif

#if ((COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON)||(COM_RXPDUGRPACTIVE == STD_ON))
/**********************************************************************************************************************
  Com_LMgt_DeactivateRxPdu
**********************************************************************************************************************/
/*! \brief    This function deactivates the given Rx I-PDU.
    \details  -
    \param    ComPduId Handle of the I-PDU.
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_LMgt_DeactivateRxPdu(PduIdType ComPduId);
#endif

#if ((COM_PDUGRPVECTOR == STD_ON) && (COM_RXPDUINFO == STD_ON) && (COM_RXPDUGRPINFO == STD_ON))
/**********************************************************************************************************************
  Com_IpduGroupControl_UpdateRxComIPduState
**********************************************************************************************************************/
/*! \brief    This function evaluates requested active state of the I-PDU
    \details  -
    \param    ipduGroupVector I-PDU group vector containing the activation state (stopped = 0/ started = 1)
                              for all I-PDU groups.
    \param    initialize      flag to request initialization of the I-PDUs which are newly started
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_IpduGroupControl_UpdateRxComIPduState(Com_IpduGroupVector ipduGroupVector, boolean initialize);
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_RXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_SetRxPduGrpStateToStop
**********************************************************************************************************************/
/*! \brief    This function sets the Rx-PDU-Group-State to FALSE, if the state of all referenced IPDU groups is
 *            equal to COM_INACTIVE_IPDUGROUPSTATE
    \details  -
    \param    subIpduGroupId  ComIPduGroup handle id
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SetRxPduGrpStateToStop(Com_IpduGroupIdType subIpduGroupId);
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_TXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_SetTxPduGrpStateToStop
**********************************************************************************************************************/
/*! \brief    This function sets the Tx-PDU-Group-State to FALSE, if the state of all referenced IPDU groups is
 *            equal to COM_INACTIVE_IPDUGROUPSTATE
    \details  -
    \param    subIpduGroupId  ComIPduGroup handle id
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SetTxPduGrpStateToStop(Com_IpduGroupIdType subIpduGroupId);
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_RXPDUINFO == STD_ON))

/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_RxPduGrpStateToStop_EnterExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function enters the rx IPduGroups exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxPduGrpStateToStop_EnterExclusiveArea(void);     /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_RxPduGrpStateToStop_ExitExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function exits the rx IPduGroups exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxPduGrpStateToStop_ExitExclusiveArea(void);      /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_RxPduGrpStateToStop_ThresholdCheck
**********************************************************************************************************************/
/*! \brief    This function checks if the ISR Lock must be opened
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxPduGrpStateToStop_ThresholdCheck(void);

#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_TXPDUINFO == STD_ON))

/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_TxPduGrpStateToStop_EnterExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function enters the tx IPduGroups exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxPduGrpStateToStop_EnterExclusiveArea(void);     /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_TxPduGrpStateToStop_ExitExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function exits the tx IPduGroups exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxPduGrpStateToStop_ExitExclusiveArea(void);      /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_TxPduGrpStateToStop_ThresholdCheck
**********************************************************************************************************************/
/*! \brief    This function checks if the ISR Lock must be opened
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxPduGrpStateToStop_ThresholdCheck(void);

#endif

#if ((COM_PDUGRPVECTOR == STD_ON) && (COM_TXPDUINFO == STD_ON) && (COM_TXPDUGRPINFO == STD_ON))
/**********************************************************************************************************************
 Com_IpduGroupControl_SetRequestedActiveState
**********************************************************************************************************************/
/*! \brief    This function sets the requested active state if needed.
    \details  -
    \param    ComTxPduId          ID of the I-PDU
    \param    initialize            flag to request initialization of the I-PDUs which are newly started
    \param    bRequestedActiveState   Active state of the I-PDU
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_IpduGroupControl_SetRequestedActiveState(Com_TxPduInfoIterType ComTxPduId, boolean initialize, boolean bRequestedActiveState);

/**********************************************************************************************************************
  Com_IpduGroupControl_EvaluateActiveState
**********************************************************************************************************************/
/*! \brief    This function evaluates requested active state of the I-PDU
    \details  -
    \param    ComTxPduId          ID of the I-PDU
    \param    ipduGroupVector     I-PDU group vector containing the activation state (stopped = 0/ started = 1)
                                  for all I-PDU groups.
    \return   bRequestedActiveState   Active state of the I-PDU. An I-PDU is active if and only if at least one I-PDU group is active it belongs to.
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_IpduGroupControl_EvaluateActiveState(Com_IpduGroupVector ipduGroupVector, Com_TxPduInfoIterType ComTxPduId);

#endif

#if ((COM_PDUGRPVECTOR == STD_ON ) && (COM_RXTOUTINFO == STD_ON) && (COM_RXPDUGRPINFO == STD_ON))
/**********************************************************************************************************************
  Com_ReceptionDMControl_EvaluateActiveState
**********************************************************************************************************************/
/*! \brief    This function evaluates requested active state of the I-PDU
    \details  -
    \param    ComRxPduId          ID of the I-PDU
    \param    ipduGroupVector     ipduGroupVector I-PDU group vector containing the requested deadline monitoring state
                                  (disabled = 0/ enabled = 1) for all I-PDU groups.
    \return   bRequestedActiveState   Active state of the I-PDU. An I-PDU is active if and only if at least one I-PDU group is active it belongs to.
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_RxPduDmStateType, COM_CODE) Com_ReceptionDMControl_EvaluateActiveState(Com_IpduGroupVector ipduGroupVector, PduIdType ComRxPduId);
#endif

#if ((COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON) && (COM_RXPDUGRPINFO == STD_ON))
/**********************************************************************************************************************
  Com_ReceptionDMControl_SetDmState
**********************************************************************************************************************/
/*! \brief    This service enables or disables I-PDU group Deadline Monitoring. The group Deadline Monitoring is started
 *            on activation. All I-PDUs, that have not changed their deadline monitoring state, are not processed..
    \details  -
    \param    ComRxPduId -  ID of the RX-PDU
    \param    bRequestedActiveState - true if at least one of the IPDU-Groups of ComRxPduId is active
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_ReceptionDMControl_SetDmState(PduIdType ComRxPduId, Com_RxPduDmStateType bRequestedActiveState);
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_IPDUGROUPINFO == STD_ON) && (COM_RXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_IpduGroupStartRx
**********************************************************************************************************************/
/*! \brief    Starts a preconfigured I-PDU Rx-subgroup.
    \details  -
    \param    subIpduGroupId ID of I-PDU subgroup to be started
    \param    Initialize  Flag to request initialization of the data in the I-PDUs of this I-PDU group
    \return   none
    \context  The function must be called on task level and must not be interrupted
              by other Com_IpduGroupStart and Com_IpduGroupStop calls.
    \warning  A call to Com_IpduGroupStartRx shall not be interrupted by another call to Com_IpduGroupStart, Com_EnableReceptionDM,
              Com_DisableReceptionDM or a call to Com_IpduGroupStop.
    \pre      -
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_IpduGroupStartRx(Com_IpduGroupIdType subIpduGroupId, boolean Initialize);
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_IPDUGROUPINFO == STD_ON) && (COM_TXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_IpduGroupStartTx
**********************************************************************************************************************/
/*! \brief    Starts a preconfigured I-PDU Tx-subgroup.
    \details  -
    \param    subIpduGroupId ID of I-PDU subgroup to be started
    \param    Initialize  Flag to request initialization of the data in the I-PDUs of this I-PDU group
    \return   none
    \context  The function must be called on task level and must not be interrupted
              by other Com_IpduGroupStart and Com_IpduGroupStop calls.
    \warning  A call to Com_IpduGroupStartTx shall not be interrupted by another call to Com_IpduGroupStart, Com_EnableReceptionDM,
              Com_DisableReceptionDM or a call to Com_IpduGroupStop.
    \pre      -
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_IpduGroupStartTx(Com_IpduGroupIdType subIpduGroupId, boolean Initialize);
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_IPDUGROUPINFO == STD_ON) && (COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_EnableReceptionDMsubGroup
**********************************************************************************************************************/
/*! \brief    Enables the reception deadline monitoring for the I-PDUs within the given I-PDU subgroup.
    \details  -
    \param    subIpduGroupId ID of I-PDU subgroup where reception DM shall be enabled.
    \return   none
    \context  The function must be called on task level within the context of Com_EnableReceptionDM.
    \warning  A call to Com_EnableReceptionDMsubGroup shall not be interrupted by another call to Com_EnableReceptionDM,
              Com_IpduGroupStop, Com_DisableReceptionDM or a call to Com_IpduGroupStart.
    \pre      -
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_EnableReceptionDMsubGroup(Com_IpduGroupIdType subIpduGroupId);

/**********************************************************************************************************************
  Com_DisableReceptionDMsubGroup
**********************************************************************************************************************/
/*! \brief    Disables the reception deadline monitoring for the I-PDUs within the given I-PDU subgroup.
    \details  -
    \param    subIpduGroupId ID of I-PDU subgroup where reception DM shall be disabled.
    \return   none
    \context  The function must be called on task level within the context of Com_DisableReceptionDM.
    \warning  A call to Com_DisableReceptionDMsubGroup shall not be interrupted by another call to Com_DisableReceptionDM, Com_IpduGroupStop,
              Com_EnableReceptionDM or a call to Com_IpduGroupStart.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_DisableReceptionDMsubGroup(Com_IpduGroupIdType subIpduGroupId);
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_IPDUGROUPINFO == STD_ON))
/**********************************************************************************************************************
  Com_IpduGroupStopSubGroup
**********************************************************************************************************************/
/*! \brief    Stops a preconfigured I-PDU subgroup.
              For example, cyclic I-PDUs will be stopped after the call of Com_IpduGroupStop().
    \details  -
    \param    subIpduGroupId ID of I-PDU aubgroup to be stopped
    \return   none
    \context  The function must be called on task level within the context of Com_IpduGroupStop.
    \warning  A call to Com_IpduGroupStopSubGroup shall not be interrupted by another call to Com_IpduGroupStop, Com_EnableReceptionDM,
              Com_DisableReceptionDM or a call to Com_IpduGroupStart.
    \pre      -
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_IpduGroupStopSubGroup(Com_IpduGroupIdType subIpduGroupId);
#endif

#if (COM_TXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_InitTx
**********************************************************************************************************************/
/*! \brief    This function initializes Tx IPdus and related parameters.
    \details  -
    \return   none
    \context  The function must be called on task level and has not to be interrupted
              by other administrative function calls.
    \warning  Com_InitTx shall not pre-empt any COM function.
              The rest of the system must guarantee that Com_InitTx is not called in such a way.
    \pre      -
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_InitTx(void);
#endif

#if (COM_RXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_InitRx
**********************************************************************************************************************/
/*! \brief    This function initializes Rx IPdus and related parameters.
    \details  -
    \return   none
    \context  The function must be called on task level and has not to be interrupted
              by other administrative function calls.
    \warning  Com_InitRx shall not pre-empt any COM function.
              The rest of the system must guarantee that Com_InitRx is not called in such a way.
    \pre      -
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_InitRx(void);
#endif

#if ((COM_RXPDUINFO == STD_ON) && ((COM_RXPDUGRPINFO == STD_ON) || (COM_IPDUGROUPINFO == STD_ON)))

/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_RxIPduGroup_EnterExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function enters the rx IPduGroups exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxIPduGroup_EnterExclusiveArea(void);     /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_RxIPduGroup_ExitExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function exits the rx IPduGroups exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxIPduGroup_ExitExclusiveArea(void);      /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_RxIPduGroup_ThresholdCheck
**********************************************************************************************************************/
/*! \brief    This function checks if the ISR Lock must be opened
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxIPduGroup_ThresholdCheck(void);

#endif

#if ((COM_TXPDUINFO == STD_ON) && ((COM_TXPDUGRPINFO == STD_ON) || (COM_IPDUGROUPINFO == STD_ON)))

/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_TxIPduGroup_EnterExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function enters the tx IPduGroups exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxIPduGroup_EnterExclusiveArea(void);     /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_TxIPduGroup_ExitExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function exits the tx IPduGroups exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxIPduGroup_ExitExclusiveArea(void);      /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_TxIPduGroup_ThresholdCheck
**********************************************************************************************************************/
/*! \brief    This function checks if the ISR Lock must be opened
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxIPduGroup_ThresholdCheck(void);

#endif

#if (COM_TXSIGGRPINFOINDENDIDXOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_SignalGroup_InitTxIpdu
**********************************************************************************************************************/
/*! \brief    This function initializes a tx I-PDU in Com_Signal.
    \details  -
    \param    ComPduId Handle of the I-PDU.
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGroup_InitTxIpdu(Com_TxPduInfoIterType ComPduId);
#endif

#if ((COM_FILTERINFOUSEDOFTXSIGINFO == STD_ON) || (COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON))
/**********************************************************************************************************************
  Com_TxSignal_EvaluateFilter
**********************************************************************************************************************/
/*! \brief    This function evaluates the state of the signal and group signal filters.
    \details  -
    \param    idxTxSigInfo        Index of TxSigInfo
    \param    idxFilterInfo       Index of filter information table
    \param    newValuePtr         Pointer to the memory where the new signal value is located
    \return   boolean             TRUE, if filter condition is passed, FALSE otherwise.
    \context  The function can be called on interrupt and task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_TxSignal_EvaluateFilter(Com_SignalIdType idxTxSigInfo, uint32 idxFilterInfo, P2CONST(void, AUTOMATIC, AUTOMATIC) newValuePtr);
#endif

#if (COM_TXBUFFERUSEDOFTXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_Signal_WriteSignal
**********************************************************************************************************************/
/*! \brief    This method writes a signal to the TxIPdu buffer or group signal to shadow buffer.
    \details  -
    \param    SignalId            ID of the signal or group signal to be written to
    \param    SignalApplSourcePtr Pointer to application memory where the signal is located
    \return   none
    \context  The function can be called on interrupt and task level.
    \note     Interrupts must have been locked by the calling function. This function does not provide a sign
               conversion to be compatible with gateway use case.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_WriteSignal(Com_SignalIdType SignalId, P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) SignalApplSourcePtr);
#endif

#if (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON)
/**********************************************************************************************************************
  Com_Signal_ReadSignalApplTypeSpecific
**********************************************************************************************************************/
/*! \brief    This method reads the signal value ApplType specific form the source buffer.
    \details  -
    \param    rxAccessInfoId     ID of the Rx AccessInfo
    \param    SignalApplDestPtr  Pointer where the signal is written to
    \param    SignalBusSourcePtr Pointer to the first byte of the signal in the source memory
    \param    destLength         length of the destination buffer in bytes.
    \return   none
    \context  The function can be called on interrupt and task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignalApplTypeSpecific(Com_RxAccessInfoIterType rxAccessInfoId,
                                                                        P2VAR(uint8, AUTOMATIC, COM_APPL_VAR) SignalApplDestPtr,
                                                                        P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr, uint32 destLength);
#endif

#if ((COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_ReadGroupSignalFromShadowBuffer
**********************************************************************************************************************/
/*! \brief    This function copies the value of the shadow buffer to the related ComGroupSignal buffer.
    \details  -
    \param    idxRxAccessInfo Index of RxAccessInfo.
    \return   none
    \context  This function is called in the context of Com_ReadSignalGroupData.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_ReadGroupSignalFromShadowBuffer(Com_RxAccessInfoIterType idxRxAccessInfo);
#endif

#if(COM_BUFFERUSEDOFRXACCESSINFO == STD_ON)
/**********************************************************************************************************************
  Com_Signal_SetRxSigBufferValue
**********************************************************************************************************************/
/*! \brief    This function copies the Simple ApplType dependent constant source value to the destination buffer RxSigBufferBuffer.
    \details  -
    \param    idxRxAccessInfo   Index of RxAccessInfo
    \param    idxDestValue      Destination index of the buffer RxSigBufferBuffer
    \param    idxSrcValue       Source index of constant source value
    \return   none
    \context  This function can be called on task and on interrupt level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_SetRxSigBufferValue(Com_RxAccessInfoIterType idxRxAccessInfo, uint32_least idxDestValue, uint32_least idxSrcValue);
#endif

#if(COM_RXSIGBUFFERARRAYBASED == STD_ON)
/**********************************************************************************************************************
  Com_Signal_SetRxSigBufferArrayBasedValue
**********************************************************************************************************************/
/*! \brief    This function copies the ArrayBased ApplType dependent constant source value to the destination buffer RxSigBufferArrayBased.
    \details  -
    \param    idxRxAccessInfo   Index of RxAccessInfo
    \param    idxDestValue      Destination index of the buffer RxSigBufferBuffer
    \param    idxSrcValue       Source index of constant source value
    \param    length            Valid amount of bytes to be copied.
    \return   none
    \context  This function can be called on task and on interrupt level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_SetRxSigBufferArrayBasedValue(Com_RxAccessInfoIterType idxRxAccessInfo, Com_RxSigBufferArrayBasedIterType idxDestValue,
                                                                           Com_ConstValueArrayBasedIterType idxSrcValue, PduLengthType length);
#endif

#if ((COM_RXACCESSINFO == STD_ON)&& (CPU_BYTE_ORDER == LOW_BYTE_FIRST) &&(COM_EXISTS_NBITNBYTE_BUSACCOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_Signal_ReadSignal_LB_NBITNBYTE
**********************************************************************************************************************/
/*! \brief    This method reads a signal from the indicated buffer (i.e. ipdu buffer or shadow buffer)
              Unused bits are set to 0.
    \details  -
    \param    SignalId        ID of the signal to be read
    \param    SignalApplDestPtr   Pointer where the signal is written to
    \param    SignalBusSourcePtr Pointer to the first byte of the signal in the source memory
    \param    signalStartBit  bit index in the byte, where the signal starts (0..7)
    \param    destLength      destination buffer length
    \return   none
    \context  The function is called in the context of Com_Signal_ReadSignal.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignal_LB_NBITNBYTE(Com_RxAccessInfoIterType SignalId, P2VAR(uint8, AUTOMATIC, COM_APPL_VAR) SignalApplDestPtr,
                                                                     P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr, Com_BitPositionOfRxAccessInfoType signalStartBit, uint32 destLength);
#endif

#if ((COM_RXACCESSINFO == STD_ON)&& (CPU_BYTE_ORDER == LOW_BYTE_FIRST) &&(COM_EXISTS_NBITNBYTE_SW_BUSACCOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_Signal_ReadSignal_LB_SW_NBITNBYTE
**********************************************************************************************************************/
/*! \brief    This method reads a signal from the indicated buffer (i.e. ipdu buffer or shadow buffer)
              Unused bits are set to 0. Endianness conversion is performed.
    \details  -
    \param    SignalId        ID of the signal to be read
    \param    SignalApplDestPtr   Pointer where the signal is written to
    \param    SignalBusSourcePtr  Pointer to the first byte of the signal in the source memory
    \param    signalStartBit  bit index in the byte, where the signal starts (0..7)
    \param    destLength      destination buffer length
    \return   none
    \context  The function is called in the context of Com_Signal_ReadSignal.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignal_LB_SW_NBITNBYTE(Com_RxAccessInfoIterType SignalId, P2VAR(uint8, AUTOMATIC, COM_APPL_VAR) SignalApplDestPtr,
                                                                        P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr,
                                                                        Com_BitPositionOfRxAccessInfoType signalStartBit, uint32 destLength);
#endif

#if ((COM_RXACCESSINFO == STD_ON)&& (CPU_BYTE_ORDER == HIGH_BYTE_FIRST) &&(COM_EXISTS_NBITNBYTE_BUSACCOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_Signal_ReadSignal_HB_NBITNBYTE
**********************************************************************************************************************/
/*! \brief    This method reads a signal from the indicated buffer (i.e. ipdu buffer or shadow buffer)
              Unused bits are set to 0.
    \details  -
    \param    rxAccessInfoId      ID of the signal to be read
    \param    SignalApplDestPtr   Pointer where the signal is written to
    \param    SignalBusSourcePtr  Pointer to the first byte of the signal in the source memory
    \param    signalStartBit  bit index in the byte, where the signal starts (0..7)
    \param    destLength      destination buffer length
    \return   none
    \context  The function is called in the context of Com_Signal_ReadSignal.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignal_HB_NBITNBYTE(Com_RxAccessInfoIterType rxAccessInfoId, P2VAR(uint8, AUTOMATIC, COM_APPL_VAR) SignalApplDestPtr,
                                                                     P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr, Com_BitPositionOfRxAccessInfoType signalStartBit, uint32 destLength);
#endif

#if ((COM_RXACCESSINFO == STD_ON)&& (CPU_BYTE_ORDER == HIGH_BYTE_FIRST) &&(COM_EXISTS_NBITNBYTE_SW_BUSACCOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_Signal_ReadSignal_HB_SW_NBITNBYTE
**********************************************************************************************************************/
/*! \brief    This method reads a signal from the indicated buffer (i.e. ipdu buffer or shadow buffer)
              Unused bits are set to 0. Endianness conversion is performed.
    \details  -
    \param    rxAccessInfoId      ID of the signal to be read
    \param    SignalApplDestPtr   Pointer where the signal is written to
    \param    SignalBusSourcePtr  Pointer to the first byte of the signal in the source memory
    \param    signalStartBit  bit index in the byte, where the signal starts (0..7)
    \param    destLength      destination buffer length
    \return   none
    \context  The function is called in the context of Com_Signal_ReadSignal.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignal_HB_SW_NBITNBYTE(Com_RxAccessInfoIterType rxAccessInfoId, P2VAR(uint8, AUTOMATIC, COM_APPL_VAR) SignalApplDestPtr,
                                                                        P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr, Com_BitPositionOfRxAccessInfoType signalStartBit,
                                                                        uint32 destLength);
#endif

#if ((COM_TXBUFFERUSEDOFTXSIGINFO == STD_ON)  && ((COM_EXISTS_NBYTE_BUSACCOFTXSIGINFO == STD_ON) || (COM_EXISTS_NBYTE_SW_BUSACCOFTXSIGINFO == STD_ON) || (COM_EXISTS_ARRAY_BASED_BUSACCOFTXSIGINFO == STD_ON)))
/**********************************************************************************************************************
  Com_Signal_GetTxBufferLength
**********************************************************************************************************************/
/*! \brief    This method returns the Tx Buffer Length of the Signal in bytes.
    \details  -
    \param    SignalId            ID of the signal to be written to
    \return   Com_TxBufferLengthOfTxSigInfoType
    \context  The function should be called within the context of Com_Signal_WriteSignal
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_TxBufferLengthOfTxSigInfoType, COM_CODE) Com_Signal_GetTxBufferLength(Com_SignalIdType SignalId);
#endif

#if ((COM_TXBUFFERUSEDOFTXSIGINFO == STD_ON) && (CPU_BYTE_ORDER == HIGH_BYTE_FIRST))
/**********************************************************************************************************************
  Com_Signal_getLSBSignalApplSourcePtr
**********************************************************************************************************************/
/*! \brief    This method returns the LSB pointer to application memory where the signal is located. This function should
 *            only be used if the configured byte order equals high byte order.
    \details  -
    \param    SignalApplSourcePtr Pointer to application memory where the signal is located
    \param    SignalId Id of Signal
    \return   const uint8*
    \context  The function should be called within the context of Com_Signal_WriteSignal
**********************************************************************************************************************/
LOCAL_INLINE FUNC(P2CONST(uint8, AUTOMATIC, COM_APPL_DATA), COM_CODE) Com_Signal_getLSBSignalApplSourcePtr(Com_SignalIdType SignalId, P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) SignalApplSourcePtr);
#endif

#if ((COM_TXBUFFERUSEDOFTXSIGINFO == STD_ON) && ((COM_EXISTS_NBITNBYTE_BUSACCOFTXSIGINFO == STD_ON) || (COM_EXISTS_NBITNBYTE_SW_BUSACCOFTXSIGINFO == STD_ON)))
/**********************************************************************************************************************
  Com_Signal_WriteSignal_NBITNBYTE
**********************************************************************************************************************/
/*! \brief    This method writes a signal to the indicated buffer (i.e. ipdu buffer or shadow buffer)
    \details  -
    \param    SignalId
    \param    SignalBusDestPtr    Valid pointer to TxBuffer, where the source signal is written to. Pointer has always
                                  to point on LSB.
    \param    SignalApplSourcePtr Pointer to application memory where the signal is located
    \param    signalStartBit      bit index in the byte, where the signal starts (0..7)
    \param    isBusBigEndian      flag, if bus is big endian.
    \return   none
    \context  The function should be called in the context of Com_Signal_WriteSignal
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_WriteSignal_NBITNBYTE(Com_SignalIdType SignalId,
                                                                   P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) SignalApplSourcePtr,
                                                                   Com_BitPositionOfTxSigInfoType signalStartBit, P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusDestPtr, boolean isBusBigEndian);
#endif

/**********************************************************************************************************************
*  Com_Signal_<ApplType>_EvaluateFilter
*********************************************************************************************************************/
/** \defgroup    Com_Signal_ApplType_EvaluateFilter  Com ApplType specific filter evaluation
    \{
    \brief    This method evaluated the the filter state appl type specific
    \details  -
    \param    idxFilterInfo    index of related filter info
    \param    newValue         new value
    \param    oldValue         old value
    \param    timeOutOccurred  indicates whether a timeout occured
    \return   boolean
*********************************************************************************************************************/

/* jet: ComSignalEvaluateFilter snippet */
#if (COM_FILTERINFO_UINT8 == STD_ON)
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt8_EvaluateFilter(Com_FilterInfo_UInt8IterType idxFilterInfo, uint8 newValue, uint8 oldValue, boolean timeOutOccurred);
#endif

/* jet: ComSignalEvaluateFilter snippet */
#if (COM_FILTERINFO_SINT8 == STD_ON)
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt8_EvaluateFilter(Com_FilterInfo_SInt8IterType idxFilterInfo, sint8 newValue, sint8 oldValue, boolean timeOutOccurred);
#endif

/* jet: ComSignalEvaluateFilter snippet */
#if (COM_FILTERINFO_UINT16 == STD_ON)
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt16_EvaluateFilter(Com_FilterInfo_UInt16IterType idxFilterInfo, uint16 newValue, uint16 oldValue, boolean timeOutOccurred);
#endif

/* jet: ComSignalEvaluateFilter snippet */
#if (COM_FILTERINFO_SINT16 == STD_ON)
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt16_EvaluateFilter(Com_FilterInfo_SInt16IterType idxFilterInfo, sint16 newValue, sint16 oldValue, boolean timeOutOccurred);
#endif

/* jet: ComSignalEvaluateFilter snippet */
#if (COM_FILTERINFO_UINT32 == STD_ON)
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt32_EvaluateFilter(Com_FilterInfo_UInt32IterType idxFilterInfo, uint32 newValue, uint32 oldValue, boolean timeOutOccurred);
#endif

/* jet: ComSignalEvaluateFilter snippet */
#if (COM_FILTERINFO_SINT32 == STD_ON)
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt32_EvaluateFilter(Com_FilterInfo_SInt32IterType idxFilterInfo, sint32 newValue, sint32 oldValue, boolean timeOutOccurred);
#endif

/* jet: ComSignalEvaluateFilter snippet */
#if (COM_FILTERINFO_UINT64 == STD_ON)
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt64_EvaluateFilter(Com_FilterInfo_UInt64IterType idxFilterInfo, uint64 newValue, uint64 oldValue, boolean timeOutOccurred);
#endif

/* jet: ComSignalEvaluateFilter snippet */
#if (COM_FILTERINFO_SINT64 == STD_ON)
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt64_EvaluateFilter(Com_FilterInfo_SInt64IterType idxFilterInfo, sint64 newValue, sint64 oldValue, boolean timeOutOccurred);
#endif

/** \} */
/**********************************************************************************************************************
*  Com_Signal_<ApplType>_EvaluateFilter
*********************************************************************************************************************/
/*! \brief    This method evaluated the the filter state appl type specific
    \details  -
    \param    idxFilterInfo    index of related filter info
    \param    newValuePtr      pointer to new value
    \param    oldValuePtr      pointer old value
    \param    length           number bytes to be evaluated.
    \param    timeOutOccurred  indicates whether a timeout occured
    \return   boolean
*********************************************************************************************************************/
#if (COM_FILTERINFO_UINT8_N == STD_ON)
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt8_N_EvaluateFilter(Com_FilterInfo_UInt8_NIterType idxFilterInfo, P2CONST(uint8, AUTOMATIC, AUTOMATIC) newValuePtr,
                                                                       P2CONST(uint8, AUTOMATIC, AUTOMATIC) oldValuePtr, PduLengthType length, boolean timeOutOccurred);
#endif

/**********************************************************************************************************************
*  Com_Signal_ReadSignalSignExtension_<ApplType>
*********************************************************************************************************************/
/** \defgroup    Com_Signal_ReadSignalSignExtension_ApplType  Com ApplType Specific Rx Signal Signedness Conversion
* \{
    \brief    This method performs the Sign extension for signals
    \details  -
    \param    idxAccessInfo     index of ComSignal
    \param    signExtValue      ApplType specific stack value that will be sign extended
    \return   none
**********************************************************************************************************************/
#if ((COM_SIGNEXTREQUIREDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT8_APPLTYPEOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignalSignExtension_SINT8(Com_RxAccessInfoIterType idxAccessInfo, P2VAR(uSignExt8BitType, AUTOMATIC, COM_APPL_VAR) signExtValue);      /* PRQA S 0779 */ /* MD_MSR_5.1 */
#endif
#if ((COM_SIGNEXTREQUIREDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT16_APPLTYPEOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignalSignExtension_SINT16(Com_RxAccessInfoIterType idxAccessInfo, P2VAR(uSignExt16BitType, AUTOMATIC, COM_APPL_VAR) signExtValue);    /* PRQA S 0779 */ /* MD_MSR_5.1 */
#endif
#if ((COM_SIGNEXTREQUIREDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT32_APPLTYPEOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignalSignExtension_SINT32(Com_RxAccessInfoIterType idxAccessInfo, P2VAR(uSignExt32BitType, AUTOMATIC, COM_APPL_VAR) signExtValue);    /* PRQA S 0779 */ /* MD_MSR_5.1 */
#endif
#if ((COM_SIGNEXTREQUIREDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT64_APPLTYPEOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignalSignExtension_SINT64(Com_RxAccessInfoIterType idxAccessInfo, P2VAR(uSignExt64BitType, AUTOMATIC, COM_APPL_VAR) signExtValue);    /* PRQA S 0779 */ /* MD_MSR_5.1 */
#endif
/** \} */

/**********************************************************************************************************************
*  Com_Signal_ReadSignal_<ApplType>
*********************************************************************************************************************/
/** \defgroup    Com_Signal_ReadSignal_ApplType  Com ApplType specific read signal
* \{
    \brief       Reads the related Signal value from the passed PDU buffer.
    \details  -
    \param       idxRxAccessInfo      index of ComSignal.
    \param       SignalBusSourcePtr buffer the value is read from.
    \return      ApplType specific read value
**********************************************************************************************************************/
/* jet: ComSignalReadSignal snippet */
#if ((COM_EXISTS_UINT8_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_Signal_ReadSignal_UInt8(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr);
#endif
/* jet: ComSignalReadSignal snippet */
#if ((COM_EXISTS_SINT8_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(sint8, COM_CODE) Com_Signal_ReadSignal_SInt8(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr);
#endif
/* jet: ComSignalReadSignal snippet */
#if ((COM_EXISTS_UINT16_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(uint16, COM_CODE) Com_Signal_ReadSignal_UInt16(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr);
#endif
/* jet: ComSignalReadSignal snippet */
#if ((COM_EXISTS_SINT16_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(sint16, COM_CODE) Com_Signal_ReadSignal_SInt16(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr);
#endif
/* jet: ComSignalReadSignal snippet */
#if ((COM_EXISTS_UINT32_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(uint32, COM_CODE) Com_Signal_ReadSignal_UInt32(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr);
#endif
/* jet: ComSignalReadSignal snippet */
#if ((COM_EXISTS_SINT32_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(sint32, COM_CODE) Com_Signal_ReadSignal_SInt32(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr);
#endif
/* jet: ComSignalReadSignal snippet */
#if ((COM_EXISTS_UINT64_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(uint64, COM_CODE) Com_Signal_ReadSignal_UInt64(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr);
#endif
/* jet: ComSignalReadSignal snippet */
#if ((COM_EXISTS_SINT64_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(sint64, COM_CODE) Com_Signal_ReadSignal_SInt64(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr);
#endif
/** \} */

/**********************************************************************************************************************
*  Com_Signal_<ApplType>_NewIsWithIn
*********************************************************************************************************************/
/** \defgroup    Com_Signal_ApplType_NewIsWithIn  Com ApplType Specific New Is Within Filter Evaluation
* \{
    \brief       Checks if the new value is within the configured range.
    \details  -
    \param       idxFilterInfo      index of filter info
    \param       newValue           new value
    \return      filter result
**********************************************************************************************************************/

/* jet: ComSignalNewIsWithIn snippet */
#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT8 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT8 == STD_ON))
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt8_NewIsWithIn(Com_FilterInfo_UInt8IterType idxFilterInfo, uint8 newValue);
#endif

/* jet: ComSignalNewIsWithIn snippet */
#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT8 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT8 == STD_ON))
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt8_NewIsWithIn(Com_FilterInfo_SInt8IterType idxFilterInfo, sint8 newValue);
#endif

/* jet: ComSignalNewIsWithIn snippet */
#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT16 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT16 == STD_ON))
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt16_NewIsWithIn(Com_FilterInfo_UInt16IterType idxFilterInfo, uint16 newValue);
#endif

/* jet: ComSignalNewIsWithIn snippet */
#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT16 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT16 == STD_ON))
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt16_NewIsWithIn(Com_FilterInfo_SInt16IterType idxFilterInfo, sint16 newValue);
#endif

/* jet: ComSignalNewIsWithIn snippet */
#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT32 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT32 == STD_ON))
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt32_NewIsWithIn(Com_FilterInfo_UInt32IterType idxFilterInfo, uint32 newValue);
#endif

/* jet: ComSignalNewIsWithIn snippet */
#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT32 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT32 == STD_ON))
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt32_NewIsWithIn(Com_FilterInfo_SInt32IterType idxFilterInfo, sint32 newValue);
#endif

/* jet: ComSignalNewIsWithIn snippet */
#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT64 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT64 == STD_ON))
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt64_NewIsWithIn(Com_FilterInfo_UInt64IterType idxFilterInfo, uint64 newValue);
#endif

/* jet: ComSignalNewIsWithIn snippet */
#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT64 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT64 == STD_ON))
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt64_NewIsWithIn(Com_FilterInfo_SInt64IterType idxFilterInfo, sint64 newValue);
#endif

/** \} */

#if (COM_RXTOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDlMon_MainFunctionRx
**********************************************************************************************************************/
/*! \brief    This function initiates the Rx Deadline Monitoring processing.
    \details  -
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_MainFunctionRx(void);

/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_RxDlMon_EnterExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function enters the rx deadline monitoring exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_EnterExclusiveArea(void); /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_RxDlMon_ExitExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function exits the rx deadline monitoring exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_ExitExclusiveArea(void);  /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_RxDlMon_ThresholdCheck
**********************************************************************************************************************/
/*! \brief    This function checks if the ISR Lock must be opened
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_ThresholdCheck(void);

#endif

#if (COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDlMon_InitRxIpdu
**********************************************************************************************************************/
/*! \brief    This function initializes the Rx deadline monitoring parameters of the passed Rx ComIPdu
    \details  -
    \param    ComPduId Handle of the I-PDU.
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_InitRxIpdu(PduIdType ComPduId);
#endif

#if (COM_RXTOUTINFOUSEDOFRXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDlMon_SigEvent
**********************************************************************************************************************/
/*! \brief    This function reloads the timeout counter value of the passed Rx ComSignal
    \details  -
    \param    idxRxSigInfo Handle Id of Rx ComSignal
    \return   none
    \context  This function can be called on Task or on Interrupt level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_SigEvent(Com_RxSigInfoIterType idxRxSigInfo);
#endif

#if (COM_RXTOUTINFOUSEDOFRXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDlMon_SigGrpEvent
**********************************************************************************************************************/
/*! \brief    This function reloads the timeout counter value of the passed Rx ComSignalGroup
    \details  -
    \param    idxRxSigGrpInfo Handle Id of Rx ComSignalGroup
    \return   none
    \context  This function can be called on Task or on Interrupt level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_SigGrpEvent(Com_RxSigGrpInfoIterType idxRxSigGrpInfo);
#endif

#if (COM_RXACCESSINFOREPLACESIGINDENDIDXOFRXTOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDlMon_SignalTimeoutAction
**********************************************************************************************************************/
/*! \brief    This function sets all related ComSignal replace values of passed timeout pdu.
    \details  -
    \param    idxRxTOutInfo RxToutInfo handle id
    \return   none
    \context  This function is called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_SignalTimeoutAction(Com_SizeOfRxTOutInfoType idxRxTOutInfo);
#endif

#if (COM_RXACCESSINFOREPLACEGRPSIGINDENDIDXOFRXTOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDlMon_GroupSignalTimeoutAction
**********************************************************************************************************************/
/*! \brief    This function sets all related ComGroupSignal replace values of passed timeout pdu.
    \details  -
    \param    idxRxTOutInfo RxToutInfo handle id
    \return   none
    \context  This function is called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_GroupSignalTimeoutAction(Com_SizeOfRxTOutInfoType idxRxTOutInfo);
#endif

#if (COM_CBKRXTOUTFUNCPTRINDUSEDOFRXTOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDlMon_CallTimeOutNotifications
**********************************************************************************************************************/
/*! \brief    This function calls the related timeout notification functions.
    \details  -
    \param    idxRxTOutInfo RxToutInfo handle id
    \return   none
    \context  This function is called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_CallTimeOutNotifications(Com_SizeOfRxTOutInfoType idxRxTOutInfo);
#endif
/**********************************************************************************************************************
  Com_RxInv_Sig_<ApplType>_EvaluateInvalidValue
**********************************************************************************************************************/
/**
 * \defgroup    Com_RxInv_Sig_ApplType_EvaluateInvalidValue  Com ApplType Specific Invalid Value Evaluation
 * \{
 * \brief    Checks if the received value is an invalid value
 * \details  -
    \param    idxRxAccessInfo index of Rx SigInfo
 * \param    tmpNewValue received value
 * \return   Com_RxSigProcessState
**********************************************************************************************************************/

/* jet: ComRxEvaluateInvValue snippet */
#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT8_APPLTYPEOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_UInt8_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, uint8 tmpNewValue);
#endif

/* jet: ComRxEvaluateInvValue snippet */
#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT8_APPLTYPEOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_SInt8_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, sint8 tmpNewValue);
#endif

/* jet: ComRxEvaluateInvValue snippet */
#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT16_APPLTYPEOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_UInt16_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, uint16 tmpNewValue);
#endif

/* jet: ComRxEvaluateInvValue snippet */
#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT16_APPLTYPEOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_SInt16_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, sint16 tmpNewValue);
#endif

/* jet: ComRxEvaluateInvValue snippet */
#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT32_APPLTYPEOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_UInt32_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, uint32 tmpNewValue);
#endif

/* jet: ComRxEvaluateInvValue snippet */
#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT32_APPLTYPEOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_SInt32_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, sint32 tmpNewValue);
#endif

/* jet: ComRxEvaluateInvValue snippet */
#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT64_APPLTYPEOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_UInt64_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, uint64 tmpNewValue);
#endif

/* jet: ComRxEvaluateInvValue snippet */
#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT64_APPLTYPEOFRXACCESSINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_SInt64_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, sint64 tmpNewValue);
#endif
/** \} */

#if ((COM_CONSTVALUEARRAYBASEDINVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxInv_Sig_UInt8_N_EvaluateInvalidValue
**********************************************************************************************************************/
/**
 * \brief    Checks if the received value is an invalid value
 * \details  -
    \param    idxRxAccessInfo index of Rx AccessInfo
 * \param    newValue pointer to new value
 * \return   Com_RxSigProcessState
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_UInt8_N_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, AUTOMATIC) newValue);
#endif

#if ((COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON) && (COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO == STD_ON))  /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf_tf */
/**********************************************************************************************************************
  Com_RxInv_Sig_UInt8_Dyn_EvaluateInvalidValue
**********************************************************************************************************************/
/**
 * \brief    Checks if the received value is an invalid value
 * \details  -
    \param    idxRxAccessInfo index of Rx AccessInfo
 * \param    newValue pointer to new value
 * \param    sduLength new dynamic length
 * \return   Com_RxSigProcessState
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_UInt8_Dyn_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, AUTOMATIC) newValue,
                                                                                                PduLengthType sduLength);
#endif

#if (COM_INVEVENTOFRXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxInv_SigGrp
**********************************************************************************************************************/
/*! \brief    This function evaluates whether any new value of the a ComGroupSignals is an invalid value
    \details  -
    \param    idxRxSigGrpInfo index of Rx SigGrpInfo
    \param    fctPtrCacheStrctPtr  pointer containing all function pointer cache informations (location, size index)
    \return   Com_RxSigProcessState
    \context  This function can be called on task and on interrupt level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_SigGrp(Com_RxSigGrpInfoIterType idxRxSigGrpInfo, P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr);
#endif

#if (COM_INVEVENTOFRXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxInv_GrpSigHasInvalidValue
**********************************************************************************************************************/
/*! \brief    This function checks if an invalid value has been assigned to the group signal
    \details  -
    \param    idxRxAccessInfo Index of group signal
    \return   Com_RxSigProcessState
    \context  This function can be called on task and on interrupt level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_GrpSigHasInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo);
#endif

#if (COM_INVEVENTOFRXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxInv_SigGrpPerfomInvalidAction
**********************************************************************************************************************/
/*! \brief    This function performs the configured invalid action (replace/notify)
    \details  -
    \param    idxRxSigGrpInfo - Index of RxSigGrpInfo
    \param    fctPtrCacheStrctPtr -  Pointer containing all information of function pointer cache (size, location, index)
    \return   none
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxInv_SigGrpPerfomInvalidAction(Com_RxSigGrpInfoIterType idxRxSigGrpInfo, P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr);
#endif

#if (((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) || (COM_CONSTVALUEARRAYBASEDINVVALUEUSEDOFRXACCESSINFO == STD_ON)) && (COM_RXSIGINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxInv_Sig_PerformInvalidAction
**********************************************************************************************************************/
/*! \brief    This function performs the configured invalid action (replace/notify)
    \details  -
    \param    idxRxSigInfo - Index of RxSigInfo
    \param    fctPtrCacheStrctPtr - Pointer to function pointer struct containing all cache managment attributes
                                    (Cache location, size, index).
    \return   none
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxInv_Sig_PerformInvalidAction(Com_RxSigInfoIterType idxRxSigInfo, P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr);
#endif
#if (COM_RXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxIndication_Processing
**********************************************************************************************************************/
/*! \brief    This function is called by Com_RxIndication_Processing after an I-PDU has been received.
    \details  -
    \param    RxPduId      ID of I-PDU that has been received. Identifies the data that has been received.
                              Range: 0..(maximum number of I-PDU IDs received by AUTOSAR COM) - 1
    \param    PduInfoPtr      Payload information of the received I-PDU (pointer to data and data length).
    \return   none
    \context  This function should be called in the context of Com_RxIndication
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxIndication_Processing(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
#endif

#if (COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON)     /* COV_COM_VAR_ELISA_STD_OFF_XF */
/**********************************************************************************************************************
  Com_TpRxIndication_Processing
**********************************************************************************************************************/
/*! \brief    This function is called by Com_TpRxIndication after a TP I-PDU has been received.
    \details  -
    \param    PduId      ID of I-PDU that has been received. Identifies the data that has been received.
                         Range: 0..(maximum number of I-PDU IDs received by AUTOSAR COM) - 1
    \param    Result     Indicates whether the message was received successfully.
    \return   none
    \context  This function is called within the context of Com_TpRxIndication
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TpRxIndication_Processing(PduIdType PduId, Std_ReturnType Result);
#endif
#if ((COM_RECEIVE_SIGNAL_MACRO_API == STD_OFF) && (COM_RXACCESSINFO == STD_ON) && ((COM_BUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO == STD_ON)))  /* COV_COM_VAR_ELISA_STD_OFF_TF_tx_tf_tf_tf */
/**********************************************************************************************************************
  Com_ReceiveSignal_GetRxSigBuffer
**********************************************************************************************************************/
/*! \brief    The function Com_ReceiveSignal_GetRxSigBuffer updates the signal data referenced by SignalDataPtr
              with the data in the signal object identified by SignalId.
    \details  -
    \param    idxRxAccessInfo             Id of signal or group signal to be received.
    \param    SignalDataPtr               Reference to the signal data in which to store the received data.
    \return   status
              E_OK                        service has been accepted
              COM_SERVICE_NOT_AVAILABLE   due to stopped I-PDU group.
    \context  This function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_ReceiveSignal_GetRxSigBuffer(Com_SignalIdType idxRxAccessInfo, P2VAR(void, AUTOMATIC, COM_APPL_VAR) SignalDataPtr);
#endif

#if ((COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_ReadSignalGroupData
**********************************************************************************************************************/
/*! \brief    The function Com_ReadSignalGroupData copies the received signal group to the shadow buffer.
    \details  -
    \param    SignalGroupId               Id of signal group to be received.
    \return   none
    \context  The function must be called within the context of the service Com_ReceiveSignalGroup.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_ReadSignalGroupData(Com_SignalGroupIdType SignalGroupId);
#endif

#if ((COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO == STD_ON))        /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
/**********************************************************************************************************************
  Com_GetRxDynamicLength
**********************************************************************************************************************/
/*! \brief    This function returns the current dynamic signal length, dependent on the passed SDU length.
    \details  -
    \param    sduLength                   SDU length
    \param    rxAccessInfoIdx             RxAccessInfo index
    \return   PduLengthType               current dynamic signal length.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(PduLengthType, COM_CODE) Com_GetRxDynamicLength(PduLengthType sduLength, Com_RxAccessInfoIterType rxAccessInfoIdx);
#endif

#if (COM_GWINFOENDIDXOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_SignalGw_InitRxIpdu
**********************************************************************************************************************/
/*! \brief    This function initializes a rx I-PDU in Com_SignalGw.
    \details  -
    \param    ComPduId Handle of the I-PDU.
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_InitRxIpdu(PduIdType ComPduId);
#endif

#if (COM_GWINFOUSEDOFRXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_SignalGw_SigEvent
**********************************************************************************************************************/
/*! \brief    This function sets a signal routing event flag for the passed ComSignal.
    \details  -
    \param    idxRxSigInfo Index of RxSigInfo
    \return   none
    \context  This function is called in the context of Com_RxProcessing_RxPduSigEvent
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_SigEvent(Com_RxSigInfoIterType idxRxSigInfo);
#endif

#if (COM_GWINFOUSEDOFRXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_SignalGw_SigGrpEvent
**********************************************************************************************************************/
/*! \brief    This function sets a signal routing event flag for the passed ComSignalGroup.
    \details  -
    \param    idxRxSigGrpInfo Index of RxSigGrpInfo
    \return   none
    \context  This function is called in the context of Com_RxProcessing_RxPduSigGrpEvent
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_SigGrpEvent(Com_RxSigGrpInfoIterType idxRxSigGrpInfo);
#endif

#if (COM_GWSIGMAPPINGENDIDXOFGWINFO == STD_ON)
/**********************************************************************************************************************
  Com_MainFunction_SignalRoutings
**********************************************************************************************************************/
/*! \brief    This function processes the routing of the passed ComSignal GwInfo.
    \details  -
    \param    idxGwInfo  Index of GwInfo
    \return   none
    \context  This function is called in the context of Com_MainFunction_SignalRoutings
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_MainFunction_SignalRoutings(Com_GwInfoIterType idxGwInfo);
#endif

#if (COM_GWSIGGRPMAPPINGENDIDXOFGWINFO == STD_ON)
/**********************************************************************************************************************
  Com_MainFunction_SignalGroupRoutings
**********************************************************************************************************************/
/*! \brief    This function processes the routing of the passed ComSignalGroup GwInfo
    \details  -
    \param    idxGwInfo  Index of GwInfo
    \return   none
    \context  This function is called in the context of Com_MainFunction_SignalRoutings
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_MainFunction_SignalGroupRoutings(Com_GwInfoIterType idxGwInfo);
#endif

#if (COM_GWINFO == STD_ON)

/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_SignalGw_EnterExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function enters the gw signal routing exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_EnterExclusiveArea(void);        /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_SignalGw_ExitExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function exits the gw signal routing exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_ExitExclusiveArea(void); /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_SignalGw_ThresholdCheck
**********************************************************************************************************************/
/*! \brief    This function checks if the ISR Lock must be opened
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_ThresholdCheck(void);

#endif

#if (COM_GWEVENTCACHE == STD_ON)
/**********************************************************************************************************************
  Com_MainFunction_GwDescription
**********************************************************************************************************************/
/*! \brief    This function processes deferred gateway description events that are queued in the gateway Event Cache
 *            in reverse order.
    \details  -
    \return   void
    \context  This function is called in the context of Com_MainFunction_SignalRoutings
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_MainFunction_GwDescription(void);
#endif

#if (COM_GWEVENTCACHE == STD_ON)

/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_GwDescription_EnterExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function enters the gw description routing exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_GwDescription_EnterExclusiveArea(void);   /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_GwDescription_ExitExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function exits the gw description routing exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_GwDescription_ExitExclusiveArea(void);    /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_GwDescription_ThresholdCheck
**********************************************************************************************************************/
/*! \brief    This function checks if the ISR Lock must be opened
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_GwDescription_ThresholdCheck(void);

#endif

#if (COM_RXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_InitRxIpdu
**********************************************************************************************************************/
/*! \brief    This function initializes a rx I-PDU in Com_RxProcessing.
    \details  -
    \param    ComRxPduId Handle of the I-PDU.
    \return   none
    \context  This function can be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_InitRxIpdu(PduIdType ComRxPduId);
#endif

#if (COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDeferredPduProcessing
**********************************************************************************************************************/
/*! \brief    This function shall perform the processing of the AUTOSAR COM receive processing that are not directly
              initiated by the calls from the RTE and PDU-R.
    \details  -
    \return   none
    \context  This function can be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDeferredPduProcessing(void);
#endif

#if (COM_RXCBKFUNCPTR == STD_ON)

/* jet: ComNotificationCache snippet */
/**********************************************************************************************************************
  Com_ProcessRxFctPtrCache
**********************************************************************************************************************/
/*! \brief    This function calles all Rx cached function pointer.
    \details  -
    \param    fctPtrCacheStrctPtr    Pointert to Struct that contains informations (cache location, cache size, cache index)
                                     about cache which should be processed.
    \return   none
    \context  The function is called in task or interrupt context.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_ProcessRxFctPtrCache(P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr);      /* PRQA S 0779 */ /* MD_MSR_5.1 */

#endif

#if (COM_RXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxIndication_ProcessPdu
**********************************************************************************************************************/
/*! \brief    This function processes the PDU immediate or copies the received PDU in the deferred buffer, depending
 *            on the IPdu Signal Processing parameter.
    \details  -
    \param    ComPduId Handle of the I-PDU.
    \param    PduInfoPtr   contains the SDU buffer and the SDU length
    \return   none
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxIndication_ProcessPdu(PduIdType ComPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
#endif

#if (COM_RXSIGINFOENDIDXOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_RxPduSigEvent
**********************************************************************************************************************/
/*! \brief    This function processes all related Rx ComSignals of the received ComIPdu.
    \details  -
    \param    comRxPduInfoIdx index of the received ComIPdu
    \param    PduInfoPtr   contains the SDU buffer and the SDU length
    \param    fctPtrCacheStrctPtr contains function ptr cache informations (cache location, size, index)
    \return   none
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_RxPduSigEvent(PduIdType comRxPduInfoIdx, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr,
                                                                 P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr);
#endif

#if (COM_RXSIGGRPINFOINDENDIDXOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_RxPduSigGrpEvent
**********************************************************************************************************************/
/*! \brief    This function processes all related Rx ComSignalGroups of the received ComIPdu.
    \details  -
    \param    comRxPduInfoIdx index of the received ComIPdu
    \param    PduInfoPtr   contains the SDU buffer and the SDU length
    \param    fctPtrCacheStrctPtr contains function ptr cache informations (cache location, size, index)
    \return   none
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_RxPduSigGrpEvent(PduIdType comRxPduInfoIdx, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr,
                                                                    P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr);
#endif

#if ((COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_TMPBUFFERUSEDOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxProcessing_ReadGrpSignal
**********************************************************************************************************************/
/*! \brief    This function extracts the ComGroupSignal data of the passed Sdu data and copies it to the related temp shadow buffer
    \details  -
    \param    PduInfoPtr contains the SDU buffer and the SDU length
    \param    idxRxAccessInfo   Rx Group Signal handle
    \return   none
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_ReadGrpSignal(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo);
#endif

#if ((COM_RXSIGGRPINFOINDENDIDXOFRXPDUINFO == STD_ON) && (COM_FILTEREVENTOFRXSIGGRPINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxProcessing_RxSignalGroupFilterCheck
**********************************************************************************************************************/
/*! \brief    This function evaluates the filter of the passed ComSignalGroup
    \details  -
    \param    idxRxSigGrpInfo   Handle Id of ComSignalGroup
    \return   boolean TRUE if the filter is passed, otherwise FALSE.
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxProcessing_RxSignalGroupFilterCheck(Com_RxSigGrpInfoIterType idxRxSigGrpInfo);
#endif

#if ((COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxProcessing_ExtractToShdwBffr
**********************************************************************************************************************/
/*! \brief    This function copies the temp shadow buffer of the passed ComSignalGroup to the shadow buffer.
    \details  -
    \param    idxRxSigGrpInfo   Handle Id of ComSignalGroup
    \param    PduInfoPtr        contains the SDU buffer and the SDU length.
    \return   none
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_ExtractToShdwBffr(Com_RxSigGrpInfoIterType idxRxSigGrpInfo, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
#endif

#if ((COM_RXSIGGRPINFOINDENDIDXOFRXPDUINFO == STD_ON) && (COM_UBMASKUSEDOFRXSIGGRPINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxProcessing_CheckSigGrpUB
**********************************************************************************************************************/
/*! \brief    This function evaluates if the ComSignalGroup was updated.
    \details  -
    \param    PduInfoPtr        contains the SDU buffer and the SDU length.
    \param    idxRxSigGrpInfo   Handle Id of ComSignalGroup
    \return   boolean TRUE if the ComSignalGroup was updated, otherwise FALSE.
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_RxProcessing_CheckSigGrpUB(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxSigGrpInfoIterType idxRxSigGrpInfo);
#endif

#if ((COM_RXSIGINFOENDIDXOFRXPDUINFO == STD_ON) && (COM_UBMASKUSEDOFRXSIGINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxProcessing_CheckSigUB
**********************************************************************************************************************/
/*! \brief    This function evaluates if the ComSignal was updated.
    \details  -
    \param    idxRxSigInfo       Index of RxSigInfo
    \param    PduInfoPtr         contains the SDU buffer and the SDU length.
    \return   boolean TRUE if the ComSignalGroup was updated, otherwise FALSE.
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_RxProcessing_CheckSigUB(Com_RxSigInfoIterType idxRxSigInfo, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
#endif

#if (COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessDeferredPDU
**********************************************************************************************************************/
/*! \brief    This function processes a deferred PDU.
    \details  -
    \param    idxRxPduInfo        Index of the PDU that should be processed.
    \param    deferredfctPtrCacheStrctPtr Pointer to struct,
                                          which contains all informations for deferred function pointer caching.
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessDeferredPDU(PduIdType idxRxPduInfo, P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) deferredfctPtrCacheStrctPtr);
#endif

#if (COM_RXSIGGRPINFOINDENDIDXOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_ProcessSigGrpEvent
**********************************************************************************************************************/
/*! \brief    This function processes the passed ComSignalGroup.
    \details  -
    \param    comRxPduInfoIdx     Index of RxPduInfo
    \param    PduInfoPtr          contains the SDU buffer and the SDU length.
    \param    idxRxSigGrpInfo     Index of RxSigGrpInfo.
    \param    fctPtrCacheStrctPtr Pointer to function ptr cache containing all informations (location, size, index)
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_ProcessSigGrpEvent(PduIdType comRxPduInfoIdx, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxSigGrpInfoIterType idxRxSigGrpInfo,
                                                                      P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr);
#endif

#if (COM_RXDEFERREDFCTPTRCACHE == STD_ON)

/* jet: ComCacheOrCallCbkFctPtr snippet */
/**********************************************************************************************************************
  Com_CacheOrCallRxDeferredCbkFctPtr
**********************************************************************************************************************/
/*! \brief     This function caches the the provided index of function pointer
 *             in the Rx Deferred function pointer cache. If the cache is full,
 *             all cached function pointers are called and the cache is cleared.
 *   \details  -
 *   \param    cbkFuncPtrIdx       Index of function pointer that should be cached or called.
 *   \param    fctPtrCacheStrctPtr Pointer to struct which contains all information about the cache (size, index, location)
 *   \return   none
 *   \context  The function is called in task or interrupt context.
 **********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_CacheOrCallRxDeferredCbkFctPtr(Com_RxCbkFuncPtrIterType cbkFuncPtrIdx, P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr);

#endif

#if (COM_RXIMMEDIATEFCTPTRCACHE == STD_ON)

/* jet: ComCacheOrCallCbkFctPtr snippet */
/**********************************************************************************************************************
  Com_CacheOrCallRxImmediateCbkFctPtr
**********************************************************************************************************************/
/*! \brief     This function caches the the provided index of function pointer
 *             in the Rx Immediate function pointer cache. If the cache is full,
 *             all cached function pointers are called and the cache is cleared.
 *   \details  -
 *   \param    cbkFuncPtrIdx       Index of function pointer that should be cached or called.
 *   \param    fctPtrCacheStrctPtr Pointer to struct which contains all information about the cache (size, index, location)
 *   \return   none
 *   \context  The function is called in task or interrupt context.
 **********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_CacheOrCallRxImmediateCbkFctPtr(Com_RxCbkFuncPtrIterType cbkFuncPtrIdx, P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr);

#endif

#if (COM_RXCBKFUNCPTR == STD_ON)
/**********************************************************************************************************************
  Com_CacheOrCallRxCbkFctPtr
**********************************************************************************************************************/
/*! \brief    This caches or calles the function pointer in immediate or deferred cache.
    \details  -
    \param    cbkFuncPtrIdx       Index of function pointer that should be cached or called.
    \param    comRxPduInfoIdx     Pdu Id
    \param    fctPtrCacheStrctPtr contains all information of function pointer cache (location, size, index)
    \return   none
    \context  The function is called in task or interrupt context.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_CacheOrCallRxCbkFctPtr(Com_RxCbkFuncPtrIterType cbkFuncPtrIdx, PduIdType comRxPduInfoIdx, P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr);
#endif

#if ((COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_TMPBUFFERUSEDOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxProcessing_ReadSignalGroup
**********************************************************************************************************************/
/*! \brief    This function reads the signal group data for a given Signal Group Index from given PDU.
    \details  -
    \param    PduInfoPtr          contains the SDU buffer and the SDU length.
    \param    idxRxSigGrpInfo     Index of RxSigGrpInfo.
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_ReadSignalGroup(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxSigGrpInfoIterType idxRxSigGrpInfo);
#endif

#if(COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_EnterExclusiveArea_Deferred
**********************************************************************************************************************/
/*! \brief    This function enters the rx deferred exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_EnterExclusiveArea_Deferred(void);   /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_RxProcessing_ExitExclusiveArea_Deferred
**********************************************************************************************************************/
/*! \brief    This function exits the rx deferred exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_ExitExclusiveArea_Deferred(void);    /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_RxProcessing_ThresholdCheck_Deferred
**********************************************************************************************************************/
/*! \brief    This function checks if the ISR Lock must be opened
    \details  -
    \param    fctPtrCacheStrctPtr Deferred function pointer cache which should be processed if ISR Lock will be opened.
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_ThresholdCheck_Deferred(P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr);
#endif

#if (COM_RXDEFERREDEVENTCACHE == STD_ON)
/**********************************************************************************************************************
  Com_RxIndication_CacheDeferredEvent
**********************************************************************************************************************/
/*! \brief    This function caches the ID of the received Rx deferred PDU to avoid the iteration through all
 *            RxPdus while processing deferred IPdus
    \details  -
    \param    ComPduId            Rx ComIPdu handle Id
    \return   none
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxIndication_CacheDeferredEvent(Com_RxDeferredEventCacheType ComPduId);
#endif

#if (COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_IsDeferredProcessingRequested
**********************************************************************************************************************/
/*! \brief    This function checks if the PduGroup that belongs to the PduId is active and if the Pdu with given Id has
 *            been received.
    \details  -
    \param    idxRxPduInfo            Rx ComIPdu handle Id
    \return   boolean
              FALSE if sanity check fails, otherwise TRUE.
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_RxProcessing_IsDeferredProcessingRequested(Com_SizeOfRxPduInfoType idxRxPduInfo);
#endif

#if (COM_GWEVENTCACHE == STD_ON)
/**********************************************************************************************************************
  Com_RxIndication_CacheDeferredDescriptionGwEvent
**********************************************************************************************************************/
/*! \brief    This function caches a deferred gateway description event.
    \details  -
    \param    ComPduId            Handle of the I-PDU.
    \return   none
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxIndication_CacheDeferredDescriptionGwEvent(PduIdType ComPduId);
#endif

#if (COM_GWTXPDUDESCRIPTIONINFOUSEDOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_GwDescriptionEvent
**********************************************************************************************************************/
/*! \brief    This function handles the gateway description events and initiates the transmission if the conditions of
 *            the configured transfer properties are satisfied.
    \details  -
    \param    rxComPduId          Handle of the rx I-PDU.
    \param    PduInfoPtr          contains the SDU buffer and the SDU length
    \return   none
    \context  This function can be called on interrupt level or task level.
              by Com_MainFunction_GwDescription for deferred rxComPdus
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_GwDescriptionEvent(PduIdType rxComPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);

/**********************************************************************************************************************
  Com_RxProcessing_ProcessDestinationDescription
**********************************************************************************************************************/
/*! \brief    This function processes a gateway destination description. More precisely, it copies the configured bits
 *            from the source to destination buffer if the transfer property conditions are satisfied.
    \details  -
    \param    rxPduBuffer          Buffer of rxPdu that is received on gateway description event.
    \param    gwDescrAccessIdx     Index of Com_GwDescriptionAccessInfo, which contains all informations of the description
    \return   Com_GwDescriptionTriggerType
                      COM_TRANSMIT_TRIGGER_NOTFULFILLED  transfer property conditions are not fulfilled
                      COM_TRANSMIT_TRIGGER               transfer property conditions are fulfilled and repetitions
                                                         are required
                      COM_TRANSMIT_TRIGGERWITHOUTREP     transfer property conditions are fulfilled and repetitions
                                                         are not required
    \context  This function can be called on interrupt level or task level.
    \trace    CREQ-115135
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_GwDescriptionTriggerType, COM_CODE) Com_RxProcessing_ProcessDestinationDescription(P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) rxPduBuffer,
                                                                                                         Com_GwDescriptionAccessInfoEndIdxOfGwTxPduDescriptionInfoType gwDescrAccessIdx);

/**********************************************************************************************************************
  Com_GwDescriptionCopyBuffer
**********************************************************************************************************************/
/*! \brief    This function copies the received content from source to destination buffer.
    \details  -
    \param    rxPduBuffer          Buffer of rxPdu that is received on gateway description event.
    \param    gwDescrAccessIdx     Index of Com_GwDescriptionAccessInfo, which contains all informations of the description
    \return   boolean
                    TRUE                 if content of destination buffer has changed.
                    FALSE                otherwise
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_GwDescriptionCopyBuffer(P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) rxPduBuffer, Com_GwDescriptionAccessInfoEndIdxOfGwTxPduDescriptionInfoType gwDescrAccessIdx);

# if ((COM_DIRECTOFTXMODETRUE == STD_ON) || (COM_DIRECTOFTXMODEFALSE == STD_ON))
/**********************************************************************************************************************
  Com_RxProcessing_GwDescriptionTransmit
**********************************************************************************************************************/
/*! \brief    This function initiates the transmission of txPdu on gateway description event
    \details  -
    \param    txPduID                 Valid ID of TxPdu that should be sent
    \param    isImmediate             true, if TxPdu should be sent immediately, otherwise transmission will be triggered
                                      in next main function cycle
    \param    withoutRepetitionFlag   true, if no repetitions are required
    \return   none
    \context  This function can be called on interrupt level or task level.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_GwDescriptionTransmit(PduIdType txPduID, boolean isImmediate, boolean withoutRepetitionFlag);
# endif
#endif

#if (COM_EXISTS_DIRECT_COPYTYPEOFGWDESCRIPTIONACCESSINFO == STD_ON)
/**********************************************************************************************************************
  Com_GwDescription_DirectCopy
**********************************************************************************************************************/
/*! \brief    This function directly copies the content from source to destination buffer.
    \details  -
    \param    gwDescrAccessIdx          Gateway description access idx.
    \param    sourceBuffer              Received source buffer referenced by source description.
    \param    destinationBuffer         Tx Buffer where the received content is copied to.
    \param    txBufferLength            Length of destinationBuffer
    \return   boolean
                  TRUE                  if any bytes of destination have changed
                  FALSE                 otherwise
    \pre      Caller has to ensure that sourceBuffer and destinationBuffer point to start byte of source and destination description.
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_GwDescription_DirectCopy(Com_GwDescriptionAccessInfoEndIdxOfGwTxPduDescriptionInfoType gwDescrAccessIdx,
                                                                  P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) sourceBuffer,
                                                                  P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) destinationBuffer, Com_TxBufferLengthOfGwDescriptionAccessInfoType txBufferLength);
#endif

#if (COM_EXISTS_RIGHTSHIFT_COPYTYPEOFGWDESCRIPTIONACCESSINFO == STD_ON)
/**********************************************************************************************************************
  Com_GwDescription_RightShiftCopy
**********************************************************************************************************************/
/*! \brief    This function shifts the content of source buffer to the right and copies it to the destination buffer.
    \details  -
    \param    sourceBuffer              Source buffer.
    \param    destinationBuffer         Destination buffer.
    \param    destinationBufferSize     Size of Destination Buffer.
    \param    sourceStartBitIndex       Bit index within byte zero of source, where the content starts.
    \param    bitOffset                 Offset to be shifted right.
    \param    bitLength                 Number of bits to be copied.
    \param    isBigEndian               true, if GwDescription is type of BIG_ENDIAN
    \return   boolean
                  TRUE                  if any bytes of destination have changed
                  FALSE                 otherwise
    \pre      For BigEndian description routing, caller has to ensure that sourceBuffer and destinationBuffer point to end byte of source and destination description.
              For LittleEndian description routing, caller has to ensure that sourceBuffer and destinationBuffer point to start byte of source and destination description.
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_GwDescription_RightShiftCopy(P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) sourceBuffer,
                                                                      P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) destinationBuffer,
                                                                      uint16 destinationBufferSize, uint8 sourceStartBitIndex, uint8 bitOffset, uint16 bitLength, boolean isBigEndian);
#endif

#if (COM_EXISTS_LEFTSHIFT_COPYTYPEOFGWDESCRIPTIONACCESSINFO == STD_ON)
/**********************************************************************************************************************
  Com_GwDescription_LeftShiftCopy
**********************************************************************************************************************/
/*! \brief    This function shifts the content of source buffer to the left and copies it to the destination buffer.
    \details  -
    \param    sourceBuffer              Source buffer.
    \param    destinationBuffer         Destination buffer.
    \param    destinationBufferSize     Size of Destination Buffer.
    \param    sourceStartBitIndex       Bit index within byte zero of source, where the content starts.
    \param    bitOffset                 Offset to be shifted left.
    \param    bitLength                 Number of bits to be copied.
    \param    isBigEndian               true, if GwDescription is type of BIG_ENDIAN
    \return   boolean
                  TRUE                  if any bytes of destination have changed
                  FALSE                 otherwise
    \pre      For BigEndian description routing, caller has to ensure that sourceBuffer and destinationBuffer point to end byte of source and destination description.
              For LittleEndian description routing, caller has to ensure that sourceBuffer and destinationBuffer point to start byte of source and destination description.
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_GwDescription_LeftShiftCopy(P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) sourceBuffer,
                                                                     P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) destinationBuffer,
                                                                     uint16 destinationBufferSize, uint8 sourceStartBitIndex, uint8 bitOffset, uint16 bitLength, boolean isBigEndian);
#endif

#if (COM_RXUBMASKUSEDOFGWDESCRIPTIONACCESSINFO  == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_CheckGwDescriptionUB
**********************************************************************************************************************/
/*! \brief    This function evaluates if the source description was updated.
    \details  -
    \param    gwDescrAccessIdx        Index of RxSigInfo
    \param    PduInfoPtr              contains the SDU buffer and the SDU length.
    \return   boolean
                TRUE                  if the source description was updated
                FALSE                 otherwise
    \context  This function can be called on interrupt level or task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_RxProcessing_CheckGwDescriptionUB(Com_GwDescriptionAccessInfoEndIdxOfGwTxPduDescriptionInfoType gwDescrAccessIdx,
                                                                           P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
#endif

#if (COM_RXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxSignalProcessing
**********************************************************************************************************************/
/*! \brief    This function processes the reception of one specific Rx Access Info event.
    \details  -
    \param    PduInfoPtr              received PDU.
    \param    idxRxAccessInfo         Rx Access Info index.
    \return   Com_RxSigProcessState
                          VALID       the signal value is valid
                          INVALID     the signal value is invalid
                          FILTERED    the signal value is does not pass the filter
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIdxOfRxSigInfoType idxRxAccessInfo);
#endif

/**********************************************************************************************************************
*  Com_RxSignalProcessing_<ApplType>
*********************************************************************************************************************/
/** \defgroup    Com_RxSignalProcessing_ApplType    Com ApplType Specific Rx Signal Processing
 * \{
 * \brief    This method reads the signal value form the PDU buffer performs the invalid check and evaluates the filter state.
 * \details  -
    \param    PduInfoPtr              received PDU.
 * \param    idxRxAccessInfo         Rx Access Info index.
 * \return   Com_RxSigProcessState
 *                        VALID       the signal value is valid
 *                        INVALID     the signal value is invalid
 *                        FILTERED    the signal value is does not pass the filter
**********************************************************************************************************************/

#if ((COM_EXISTS_UINT8_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_UINT8(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo);
#endif

#if ((COM_EXISTS_SINT8_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_SINT8(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo);
#endif

#if ((COM_EXISTS_UINT16_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_UINT16(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo);
#endif

#if ((COM_EXISTS_SINT16_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_SINT16(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo);
#endif

#if ((COM_EXISTS_UINT32_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_UINT32(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo);
#endif

#if ((COM_EXISTS_SINT32_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_SINT32(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo);
#endif

#if ((COM_EXISTS_UINT64_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_UINT64(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo);
#endif

#if ((COM_EXISTS_SINT64_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_SINT64(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo);
#endif
#if((COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_UINT8_N(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo);
#endif

#if ((COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO == STD_ON))        /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_UINT8_DYN(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo);
#endif
/** \} */
#if (COM_TXBUFFERUSEDOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxBuffer_InitTxIpdu
**********************************************************************************************************************/
/*! \brief    This function initializes a tx I-PDU in Com_TxBuffer.
    \details  -
    \param    ComPduId Handle of the I-PDU.
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxBuffer_InitTxIpdu(Com_TxPduInfoIterType ComPduId);
#endif

#if (COM_CONSTVALUEUINT8UBCLEARMASKENDIDXOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxBuffer_ClearUpdateBits
**********************************************************************************************************************/
/*! \brief    This method sets the update bits to 0.
    \details  -
    \param    ComTxPduId    ID of Tx I-PDU.
    \return   none
    \context  The function can be called on interrupt and task level.
***********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxBuffer_ClearUpdateBits(PduIdType ComTxPduId);
#endif

#if (COM_TXSIGGRPMASK == STD_ON)
/**********************************************************************************************************************
  Com_TxBuffer_WriteSignalGroup
**********************************************************************************************************************/
/*! \brief    This method reads from the signal group buffer and writes the data to the Idpu buffer.
    \details  -
    \param    SignalGroupId  ID of Tx signal group.
    \param    ShadowBufferPtr Reference to the signal group buffer.
    \return   none
    \context  The function can be called on interrupt and task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxBuffer_WriteSignalGroup(Com_SignalGroupIdType SignalGroupId, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) ShadowBufferPtr);
#endif

#if (COM_TXTOUTCNT == STD_ON)
/**********************************************************************************************************************
  Com_TxDlMon_Init
**********************************************************************************************************************/
/*! \brief    This function initializes the Com_TxDlMon.
    \details  -
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_Init(void);
#endif

#if (COM_TXTOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxDlMon_MainFunctionTx
**********************************************************************************************************************/
/*! \brief    This function performs the Tx Deadline Monitoring.
    \details  -
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_MainFunctionTx(void);
#endif

#if(COM_TXTOUTINFO == STD_ON)

/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_TxDlMon_EnterExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function enters the tx deadline monitoring exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_EnterExclusiveArea(void); /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_TxDlMon_ExitExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function exits the tx deadline monitoring exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_ExitExclusiveArea(void);  /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_TxDlMon_ThresholdCheck
**********************************************************************************************************************/
/*! \brief    This function checks if the ISR Lock must be opened
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_ThresholdCheck(void);

#endif

#if (COM_TXTOUTINFOUSEDOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxDlMon_TxConfirmation
**********************************************************************************************************************/
/*! \brief    This function stops the tx deadline monitoring after a succesful transmission.
    \details  -
    \param    TxPduId Handle of the I-PDU.
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_TxConfirmation(PduIdType TxPduId);
#endif

#if (COM_TXTOUTINFOUSEDOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxDlMon_IPduGroupStart
**********************************************************************************************************************/
/*! \brief    This function initializes the tx timeout values of the passed tx I-PDU
    \details  -
    \param    TxPduId Handle of the I-PDU.
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_IPduGroupStart(Com_TxPduInfoIterType TxPduId);
#endif

#if ((COM_TXMODEINFO == STD_ON) && (COM_TXTOUTINFOUSEDOFTXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_TxDlMon_SwitchIpduTxMode
**********************************************************************************************************************/
/*! \brief    This function reset the tx timeout counter of the passed tx I-PDU
    \details  -
    \param    TxPduId Handle of the I-PDU.
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_SwitchIpduTxMode(PduIdType TxPduId);
#endif

#if ((COM_TXTOUTINFOUSEDOFTXSIGINFO == STD_ON)||(COM_TXTOUTINFOUSEDOFTXSIGGRPINFO == STD_ON))
/**********************************************************************************************************************
  Com_TxDlMon_Event
**********************************************************************************************************************/
/*! \brief    This function reloads the tx timeout counter if the timeout is in NORMAL mode, if the tx timeout is in
              NONE mode the timeout counter is set to 0.
    \details  -
    \param    TxPduId Handle of the I-PDU.
    \param    idxTxTOutInfo Handle of the I-PDU.
    \return   none
    \context  This function is called on Task or on interrupt level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_Event(PduIdType TxPduId, Com_SizeOfTxTOutInfoType idxTxTOutInfo);
#endif

#if (COM_CBKTXTOUTFUNCPTRINDUSEDOFTXTOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxDlMon_TxCallCbkTout
**********************************************************************************************************************/
/*! \brief    This function calls the TxTout callback functions.
 *  \details  -
    \param    idxTxTOutInfo  Index of TxTOutInfo
    \return   none
    \context  The function must be called in the context of Com_TxDlMon_MainFunctionTx.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_TxCallCbkTout(Com_SizeOfTxTOutInfoType idxTxTOutInfo);
#endif

#if (COM_GWTIMEOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_GwTout_HandleCounter
**********************************************************************************************************************/
/*! \brief    This function handles the GW timeout counter. On a timeout event the cyclic transmission is stopped.
    \details  -
    \return   none
    \context  This function is called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_GwTout_HandleCounter(void);

/**********************************************************************************************************************
  Com_GwTout_InitCounter
**********************************************************************************************************************/
/*! \brief    This function initializes the GW timeout counter for a given Pdu. On a timeout event the cyclic transmission is stopped.
 *  \details  -
    \param    ComPduId    ComIPdu handle id
    \return   none
    \context  This function is called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_GwTout_InitCounter(PduIdType ComPduId);
#endif
#if ((COM_INVVALUEUSEDOFTXSIGINFO == STD_ON) || (COM_CONSTVALUEARRAYBASEDINVVALUEUSEDOFTXSIGINFO == STD_ON))
/**********************************************************************************************************************
  Com_InvalidateSignal_SendSignal
**********************************************************************************************************************/
/*! \brief    This function calls Com_SendSignal according to the configured ApplType.
    \details  -
    \param    idxTxSigInfo ID of signal or group signal to be invalidated.
    \return   uint8
              E_OK                        service has been accepted
              COM_SERVICE_NOT_AVAILABLE   corresponding I-PDU group was stopped
                                          (or service failed due to development error)
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_InvalidateSignal_SendSignal(Com_SignalIdType idxTxSigInfo);
#endif
#if (COM_TXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxLLIf_InitTxIpdu
**********************************************************************************************************************/
/*! \brief    This function initializes a tx I-PDU in Com_TxLLIf.
    \details  -
    \param    ComPduId Handle of the I-PDU.
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxLLIf_InitTxIpdu(Com_TxPduInfoIterType ComPduId);

# if ((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) || (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON) || (COM_EXISTS_TRANSMIT_CLRUBOFTXPDUINFO == STD_ON) || (COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON))     /* COV_COM_VAR_ELISA_STD_OFF_TF_xf_tf_tf_tf */
/**********************************************************************************************************************
Com_TxLLIf_SetTxAttributes
**********************************************************************************************************************/
/*! \brief    This function adjusts Tx-Parameter like Update-Bit, Delay Time Counter, Tp Connection State and
 *            Com_WaitingForConfirmation Parameter if the status of transmit request has been accepted.
    \details  -
    \param    status        Status if transmit request has been accepted or not
    \param    ComTxPduId    Valid ID of Tx I-PDU to be transmitted.
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxLLIf_SetTxAttributes(PduIdType ComTxPduId, Std_ReturnType status);
# endif
#endif

#if ((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) && (COM_CANCELLATIONSUPPORTOFTXPDUINFO == STD_ON))         /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf */
/**********************************************************************************************************************
  Com_TxLLIf_CancelTransmit
**********************************************************************************************************************/
/*! \brief    This function wraps the call of PduR_ComCancelTransmit(), if configured, for the given Tx I-PDU.
              If required, the ID is converted to the PduR handle space.
    \details  -
    \param    ComTxPduId    ID of I-PDU to be transmitted.
    \return   none
    \context  This function is called in the context of Com_TxDlMon_MainFunctionTx
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxLLIf_CancelTransmit(PduIdType ComTxPduId);
#endif

#if (COM_TXPDUCALLOUTFUNCPTRUSEDOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxLLIf_GetTxPduCalloutFuncPtr
**********************************************************************************************************************/
/*! \brief    This function returns the result of Tx Pdu Callout.
    \details  -
    \param    ComTxPduId    ID of I-PDU to be transmitted.
    \param    PduInfo       Pointer to the SDU buffer and the SDU length.
    \return   boolean       callout result
    \context  The function must be called on task level.
    \trace    CREQ-103167
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_TxLLIf_GetTxPduCalloutFuncPtr(PduIdType ComTxPduId, P2VAR(PduInfoType, AUTOMATIC, AUTOMATIC) PduInfo);
#endif

#if (COM_TRIGGER_TRANSMIT_API == STD_ON)
/**********************************************************************************************************************
  Com_TriggerTransmit_Process
**********************************************************************************************************************/
/*! \brief    Within this function, the upper layer module
              (called module) shall copy its data into the buffer provided by PduInfoPtr->SduDataPtr and
              update the length of the actual copied data in PduInfoPtr->SduLength.
    \details  -
    \param          TxPduId      ID of the SDU that is requested to be transmitted.
    \param[in,out]  PduInfoPtr   Contains a pointer to a buffer (SduDataPtr) to where the SDU
                                 data shall be copied, and the available buffer size in SduLengh.
                                 On return, the service will indicate the length of the copied SDU
                                 data in SduLength.
    \return         E_OK         SDU has been copied and SduLength indicates the number of copied bytes.
    \return         E_NOT_OK     No data has been copied, because
                                 Com is not initialized
                                 or TxPduId is not valid
                                 or PduInfoPtr is NULL_PTR
                                 or SduDataPtr is NULL_PTR
                                 or SduLength is to small.
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, COM_CODE) Com_TriggerTransmit_Process(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) PduInfoPtr);
#endif

#if((COM_TRANSPORT_PROTOCOL == STD_ON) || (COM_TX_CONFIRMATION_API == STD_ON))  /* COV_COM_VAR_ELISA_STD_OFF_TF_xf_tf */
/**********************************************************************************************************************
  Com_TxConfirmation_Process
**********************************************************************************************************************/
/*! \brief    The lower layer communication interface module confirms the transmission of an I-PDU.
    \details  -
    \param    TxPduId       ID of the I-PDU that has been transmitted.
    \return   none
    \context  The function must be called within the context of Com_TxConfirmation
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxConfirmation_Process(PduIdType TxPduId);
#endif

#if ((COM_TXBUFFERMETADATAUSEDOFTXPDUINFO == STD_ON) && (COM_TXPDUINITVALUEMETADATAUSEDOFTXPDUINFO == STD_ON) && (COM_TXPDUINFO == STD_ON))     /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf_tf */
/**********************************************************************************************************************
  Com_TxLLIf_CpyInitMetaDataToBffr
**********************************************************************************************************************/
/*! \brief    This function copies the initial meta data to TxBuffer.
    \details  -
    \param    ComTxPduId    ID of I-PDU to be transmitted.
    \return   none
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxLLIf_CpyInitMetaDataToBffr(PduIdType ComTxPduId);
#endif

#if (COM_TXMODEINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxModeHdlr_InitTxIpdu
**********************************************************************************************************************/
/*! \brief    This function initializes a Tx I-PDU in Com_TxModeHdlr.
    \details  -
    \param    ComPduId Handle of the Tx I-PDU.
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_InitTxIpdu(PduIdType ComPduId);

# if ((COM_PERIODICOFTXMODETRUE == STD_ON) || (COM_PERIODICOFTXMODEFALSE == STD_ON) || (COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON) || (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON))
/**********************************************************************************************************************
  Com_TxModeHdlr_MainFunctionTx_CycleCounter
**********************************************************************************************************************/
/*! \brief    This function iterates over all Tx ComIPdus and processes the cyclic transmission.
    \details  -
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_MainFunctionTx_CycleCounter(void);

/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_TxModeHdlr_EnterExclusiveArea_CycleCounter
**********************************************************************************************************************/
/*! \brief    This function enters the tx cyclic processing exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_EnterExclusiveArea_CycleCounter(void); /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_TxModeHdlr_ExitExclusiveArea_CycleCounter
**********************************************************************************************************************/
/*! \brief    This function exits the tx cyclic processing exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_ExitExclusiveArea_CycleCounter(void);  /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_TxModeHdlr_ThresholdCheck_CycleCounter
**********************************************************************************************************************/
/*! \brief    This function checks if the ISR Lock must be opened
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_ThresholdCheck_CycleCounter(void);

# endif

/**********************************************************************************************************************
  Com_TxModeHdlr_MainFunctionTx_Transmit
**********************************************************************************************************************/
/*! \brief    This function iterates over all Tx ComIPdus and process the related transmit requests.
    \details  -
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_MainFunctionTx_Transmit(void);

/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_TxModeHdlr_EnterExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function enters the tx processing exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_EnterExclusiveArea(void);      /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_TxModeHdlr_ExitExclusiveArea
**********************************************************************************************************************/
/*! \brief    This function exits the tx processing exclusive area.
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_ExitExclusiveArea(void);       /* PRQA S 0779 */ /* MD_MSR_5.1 */

/**********************************************************************************************************************
  Com_TxModeHdlr_ThresholdCheck
**********************************************************************************************************************/
/*! \brief    This function checks if the ISR Lock must be opened
    \details  -
    \trace    DSGN-COM_ISRTHRESHOLD_CONCEPT
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_ThresholdCheck(void);

/**********************************************************************************************************************
  Com_TxModeHdlr_MainFunctionTx_ProcessTransmit
**********************************************************************************************************************/
/*! \brief    This function process the transmit requests of provided ComTxPduId.
    \details  -
    \param    ComTxPduId    ID of Tx I-PDU.
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_MainFunctionTx_ProcessTransmit(PduIdType ComTxPduId);

# if ((COM_MINIMUMDELAYOFTXMODEINFO == STD_ON) || (COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON))
/**********************************************************************************************************************
  Com_TxModeHdlr_Confirmation
**********************************************************************************************************************/
/*! \brief    This method serves to start the delay time counter of the dependent I-PDU.
    \details  -
    \param    ComTxPduId    ID of Tx I-PDU.
    \return   TRUE:   report the confirmation to the upper layer
              FALSE:  don't report the confirmation (used in Direct N-Times transmissions)
    \context  The function can be called on interrupt and task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_TxModeHdlr_Confirmation(CONST(PduIdType, AUTOMATIC) ComTxPduId);
# endif

/**********************************************************************************************************************
  Com_TxModeHdlr_InitTxMode
**********************************************************************************************************************/
/*! \brief    This method initializes the transmission mode parameters (e.g. cycle counter). It is called each time
              the active tx mode changes.
    \details  -
    \param    ComTxPduId    ID of Tx I-PDU.
    \return   none
    \context  The function can be called on interrupt and task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_InitTxMode(CONST(PduIdType, AUTOMATIC) ComTxPduId);

# if (COM_FILTERINFOUSEDOFTXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxModeHdlr_UpdateTMS
**********************************************************************************************************************/
/*! \brief    This method manages the I-PDU transmission mode selection.
    \details  -
    \param    idxTxModeInfo    ID of Tx I-PDU.
    \return   none
    \context  The function can be called on interrupt and task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_UpdateTMS(CONST(PduIdType, AUTOMATIC) idxTxModeInfo);
# endif

/**********************************************************************************************************************
  Com_TxModeHdlr_StopTxIpdus
**********************************************************************************************************************/
/*! \brief    This method cancels outstanding transmission requests of an I-PDU and reloads the time offset counter.
    \details  -
    \param    ComTxPduId  ID of Tx I-PDU.
    \return   none
    \context  The function can be called on interrupt and task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_StopTxIpdus(CONST(PduIdType, AUTOMATIC) ComTxPduId);
#endif

#if (COM_TXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxModeHdlr_TriggerIpduSendOnceDeferred
**********************************************************************************************************************/
/*! \brief    This method sets the internal transmit request flag and the I-PDU is transmitted once.
              The I-PDU Transmit request is performed with the next call of Com_TxModeHdlr_MainFunction.
    \details  -
    \param    ComTxPduId  ID of Tx I-PDU.
    \return   none
    \context  This function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_TriggerIpduSendOnceDeferred(CONST(PduIdType, AUTOMATIC) ComTxPduId);
#endif

#if ((COM_TXMODEINFO == STD_ON) && ((COM_PERIODICOFTXMODETRUE == STD_ON) || (COM_PERIODICOFTXMODEFALSE == STD_ON) || (COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON) || (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON)))
/**********************************************************************************************************************
  Com_TxModeHdlr_SetTransmitRequestAndCycleCnt
**********************************************************************************************************************/
/*! \brief    This function processes the cyclic transmission for the passed ComTxPdu.
    \details  -
    \brief    ComTxPduID ID of Tx I-PDU.
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_SetTransmitRequestAndCycleCnt(PduIdType ComTxPduId);
#endif
#if ((COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)||(COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_TxNHdlr_InitTxIpdu
**********************************************************************************************************************/
/*! \brief    This function initializes a tx I-PDU in Com_TxNHdlr.
    \details  -
    \param    ComPduId Handle of the I-PDU.
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxNHdlr_InitTxIpdu(Com_TxPduInfoIterType ComPduId);
#endif

#if (COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxNHdlr_MainFunctionTx
**********************************************************************************************************************/
/*! \brief    This function calls all deferred Tx notification functions.
    \details  -
    \return   none
    \context  The function must be called on task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxNHdlr_MainFunctionTx(void);
#endif

#if (COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxNHdlr_StopTxIpdu
**********************************************************************************************************************/
/*! \brief    This function calls all error notifications of the passed ComIPdu if a transmit of the PDU was not confirmed yet.
    \details  -
    \param    ComPduId Handle of the I-PDU.
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxNHdlr_StopTxIpdu(Com_TxPduInfoIterType ComPduId);
#endif

#if ((COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)|| (COM_CBKTXACKIMFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)|| (COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_TxNHdlr_Confirmation
**********************************************************************************************************************/
/*! \brief    This method sets the internal confirmation flag or calls the confirmation callback function.
    \details  -
    \param    ComPduId    ID of Tx I-PDU.
    \return   none
    \context  The function can be called on interrupt and task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxNHdlr_Confirmation(PduIdType ComPduId);
#endif

#if ((COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUEUSEDOFTXSIGINFO == STD_ON) || (COM_FILTERINITVALUEIDXOFTXSIGINFO == STD_ON))
/**********************************************************************************************************************
  Com_GetOldValuePtr
**********************************************************************************************************************/
/*! \brief    This method delivers a pointer to Com_TxFilterOldValueX according to Com_GetFilterInitValueIdxOfTxSigInfo(idxTxSigInfo)
    \details  -
    \param    idxTxSigInfo      Index of Tx Signal Info
    \return   P2CONST(void, AUTOMATIC, AUTOMATIC), COM_CODE)
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(P2CONST(void, AUTOMATIC, AUTOMATIC), COM_CODE) Com_GetOldValuePtr(Com_SignalIdType idxTxSigInfo);
#endif

#if ((COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUEUSEDOFTXSIGINFO == STD_ON) || (COM_FILTERINITVALUEIDXOFTXSIGINFO == STD_ON))
/**********************************************************************************************************************
  Com_SetTxFilterOldValueX
**********************************************************************************************************************/
/*! \brief    This method sets the Com_TxFilterOldValueX
    \details  -
    \param    idxTxSigInfo      Index of Tx Signal Info
    \param    SignalDataPtr     Reference to the signal data to be transmitted.
    \param    Length        Length of the dynamic length signal.
    \return   void
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SetTxFilterOldValueX(Com_SignalIdType idxTxSigInfo, P2CONST(void, AUTOMATIC, COM_APPL_DATA) SignalDataPtr, uint16 Length);
#endif

#if ((COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON) || (COM_TRIGGEREDOFTXSIGINFO == STD_ON))
/**********************************************************************************************************************
  Com_SendSignal_TriggerDeferredIpduSend
**********************************************************************************************************************/
/*! \brief    This method either calls Com_TxModeHdlr_TriggerDeferredIpduSend or Com_SetSigGrpEventFlag.
    \details  -
    \param    idxTxPduInfo      Index of TxPduInfo
    \param    idxTxSigInfo      Index of TxSigInfo
    \param    newValuePtr       reference to the new signal value
    \return   void
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SendSignal_TriggerDeferredIpduSend(Com_SignalIdType idxTxSigInfo
# if (COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON)
                                                                         , P2CONST(void, AUTOMATIC, AUTOMATIC) newValuePtr
# endif
                                                                         , PduIdType idxTxPduInfo);
#endif

#if (COM_TXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_SendSignal_WriteSignal
**********************************************************************************************************************/
/*! \brief    This method updates the signal or group signal object identified by SignalId
              with the signal data referenced by the SignalDataPtr parameter. The Length parameter is evaluated for
              dynamic length signals.
    \details  -
    \param    idxTxPduInfo    Index of Tx Signal Info +
    \param    idxTxSigInfo    Reference to the signal data to be transmitted.+
    \param    Length          Signal length, only required for dynamic length signals.
    \param    SignalDataPtr
    \return   void
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SendSignal_WriteSignal(Com_SignalIdType idxTxSigInfo, P2CONST(void, AUTOMATIC, COM_APPL_DATA) SignalDataPtr, uint16 Length
# if(((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO == STD_ON)) || (COM_UBMASKUSEDOFTXSIGINFO == STD_ON))        /* COV_COM_VAR_ELISA_STD_OFF_TF_xf_tf_tf */
                                                             , PduIdType idxTxPduInfo
# endif
  );
#endif

#if (COM_TXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_SendSignalGroup_TriggerEventProcessing
**********************************************************************************************************************/
/*! \brief    This method sets the internal transmit request flag and the I-PDU is transmitted once or multiple.
    \details  -
    \param    idxTxSigGrpInfo
    \param    idxTxPduInfo
    \return   E_OK                        if service is accepted.
              COM_SERVICE_NOT_AVAILABLE   corresponding I-PDU group was stopped
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_SendSignalGroup_TriggerEventProcessing(
# if ((COM_TXTOUTINFOUSEDOFTXSIGGRPINFO == STD_ON)||(COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON) || (COM_TRIGGEREDOFTXSIGINFO == STD_ON))
                                                                               Com_SignalIdType idxTxSigGrpInfo,
# endif
                                                                               PduIdType idxTxPduInfo);
#endif

#if ( (COM_TXSIGGRPINFOUSEDOFTXSIGINFO == STD_ON) && ((COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON) || (COM_TRIGGEREDOFTXSIGINFO == STD_ON)))
/**********************************************************************************************************************
  Com_SendSignal_SetSigGrpEventFlag
**********************************************************************************************************************/
/*! \brief    This method wraps the function Com_SetSigGrpEventFlag in dependency of the input parameter TriggerWithoutRepetition
    \details  -
    \param    TriggerWithoutRepetition      TRUE if signal or group signal has any '*_WITHOUT_REPETITION' transfer property
    \param    idxTxSigGrpInfo               Index of the Tx SigGrpInfo
    \return   none
    \context  The function must be called on Task level.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SendSignal_SetSigGrpEventFlag(Com_TxSigGrpInfoIdxOfTxSigInfoType idxTxSigGrpInfo, boolean TriggerWithoutRepetition);
#endif

#if (COM_TXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_SendSignalGroup_Processing
**********************************************************************************************************************/
/*! \brief    The service Com_SendSignalGroup_Processing copies the content of the associated shadow buffer to
              the associated I-PDU buffer.
              Prior to this call, all group signals should be updated in the shadow buffer
              by the call of Com_SendSignal.
    \details  -
    \param    idxTxSigGrpInfo    ID of signal group to be send.
    \param    ShadowBufferPtr    Pointer to Shadow Buffer
    \return   uint8
              E_OK                        service has been accepted
              COM_SERVICE_NOT_AVAILABLE   corresponding I-PDU group was stopped
              (or service failed due to development error)
    \context  This function should be called by Com_SendSignalGroup only.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_SendSignalGroup_Processing(Com_SignalIdType idxTxSigGrpInfo, P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) ShadowBufferPtr);
#endif

#if (COM_TXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_SendSignal_Processing
**********************************************************************************************************************/
/*! \brief    The function Com_SendSignal_Processing updates the signal or group signal object
              with the signal data referenced by the SignalDataPtr parameter. The Length parameter is evaluated for
              dynamic length signals.
    \details  -
    \param    SignalDataPtr Reference to the signal data to be transmitted.
    \param    Length        Length of the dynamic length signal.
    \param    idxTxSigInfo  Index of signal or group signal to be sent.
    \return   uint8
              E_OK                        service has been accepted
              COM_SERVICE_NOT_AVAILABLE   corresponding I-PDU group was stopped
                                          (or service failed due to development error)
              COM_BUSY                    in case the TP-Buffer is locked for large data types handling
    \context  The function is called within the context of Com_SendDynSignal
    \warning  If the method is used on a microcontroller like the Tms320 DSP and the datatype uint8 is unsigned short
              the 8 MSB bits of the variable shall never be set.
              If the method is used on a microcontroller like the S12X and the datatype is uint16, sint16, uint32
              or sint32 the SignalDataPtr must be word aligned.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_SendSignal_Processing(Com_SignalIdType idxTxSigInfo, P2CONST(void, AUTOMATIC, COM_APPL_DATA) SignalDataPtr, uint16 Length);
#endif

#if (COM_TXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_SendSignal_SetTOutAndSendDeferredIpdu
**********************************************************************************************************************/
/*! \brief    This function calls Com_TxDlMon_Event if Tx Timeout monitoring is configured. Depending on the configured
 *            transfer property the transmission of the I-PDU is initiated (Triggered or Triggered on Change)
    \details  -
    \param    idxTxPduInfo ID of Tx I-PDU.
    \param    idxTxSigInfo Index of signal or group signal to be sent.
    \param    newValuePtr Pointer to the new value
    \return   none
    \context  The function is called within the context of Com_SendDynSignal
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SendSignal_SetTOutAndSendDeferredIpdu(Com_SignalIdType idxTxSigInfo
# if (COM_ONCHANGEIDXOFTXSIGINFO == STD_ON)
                                                                            , P2CONST(void, AUTOMATIC, AUTOMATIC) newValuePtr
# endif
                                                                            , PduIdType idxTxPduInfo);
#endif

#if (COM_FILTERINFOUSEDOFTXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_SendSignal_CheckFilter
**********************************************************************************************************************/
/*! \brief    If the Tx-Signal is configured to be filtered, this function evaluates the filters and updates the filter
 *            state.
    \details  -
    \param    idxTxSigInfo  ID of the Tx signal.
    \param    newValuePtr Pointer to the new value
    \param    idxTxPduInfo  ID of Tx I-PDU.
    \return   none
    \context  The function is called within the context of Com_SendDynSignal
    \pre      -
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SendSignal_CheckFilter(Com_SignalIdType idxTxSigInfo, P2CONST(void, AUTOMATIC, AUTOMATIC) newValuePtr, PduIdType idxTxPduInfo);
#endif

#if ((COM_ARRAYACCESSUSEDOFTXSIGGRPINFO == STD_ON) && ((COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON) || (COM_TRIGGEREDOFTXSIGINFO == STD_ON)) && ((COM_TXSIGGRPONCHANGEMASKONCHANGEUSEDOFTXSIGGRPINFO == STD_ON) || (COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPUSEDOFTXSIGGRPINFO == STD_ON)))
/**********************************************************************************************************************
  Com_SendSignalGroupArrayHasChanged
**********************************************************************************************************************/
/*! \brief    This function checks if the content of the SignalGroup in the group array  has changed.
    \details  -
    \param    SignalGroupArrayPtr         Reference to the signal group array
    \param    maskPtr                     Pointer to OnChange Mask
    \param    pIpduBuf                    Pointer to iPduBuffer
    \param    MaskLength                  Length of the mask
    \return   uint8
              true                        if content has changed
              false                       otherwise
    \context  The function is called within the context of Com_SendSignalGroupArray
**********************************************************************************************************************/
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_SendSignalGroupArrayHasChanged(P2CONST(uint8, AUTOMATIC, COM_APPL_VAR) SignalGroupArrayPtr,
                                                                      P2CONST(uint8, AUTOMATIC, COM_PBCFG) maskPtr, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) pIpduBuf, uint32 MaskLength);
#endif

#if (COM_ARRAYACCESSUSEDOFTXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_SendSignalGroupArray_Processing
**********************************************************************************************************************/
/*! \brief    The service Com_SendSignalGroupArray copies the content of the provided SignalGroupArrayPtr to the
 *            associated I-PDU. The provided data shall correspond to the array representation of the signal group.
    \details  -
    \param    SignalGroupId               Id of signal group to be sent.
    \param    SignalGroupArrayPtr         Reference to the signal group array.
    \return   uint8
              E_OK                        service has been accepted
              COM_SERVICE_NOT_AVAILABLE   corresponding I-PDU group was stopped (or service failed due to development
                                          error)
              COM_BUSY                    in case the TP-Buffer is locked for large data types handling
    \context  The function can be called on interrupt and task level.
    \pre      The configuration switch ComEnableSignalGroupArrayApi has to be enabled.
**********************************************************************************************************************/
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_SendSignalGroupArray_Processing(Com_SignalGroupIdType SignalGroupId, P2CONST(uint8, AUTOMATIC, COM_APPL_VAR) SignalGroupArrayPtr);
#endif

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

#if ((COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON)||(COM_RXPDUGRPACTIVE == STD_ON))
/**********************************************************************************************************************
  Com_LMgt_DeactivateRxPdu
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_LMgt_DeactivateRxPdu(PduIdType ComPduId)
{
# if (COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON)
  {
    /* #10 Iterate over all related timeout handling state machines and deactivate timeout handling */
    Com_RxTOutInfoIndStartIdxOfRxPduInfoType idxRxTOutInfoInd = Com_GetRxTOutInfoIndStartIdxOfRxPduInfo(ComPduId);
    for(; idxRxTOutInfoInd < Com_GetRxTOutInfoIndEndIdxOfRxPduInfo(ComPduId); idxRxTOutInfoInd++)
    {
      Com_LMgt_DeactivateRxIpduDm(Com_GetRxTOutInfoInd(idxRxTOutInfoInd));      /* SBSW_COM_CSL02 */
    }
  }
# endif
# if (COM_RXPDUGRPACTIVE == STD_ON)     /* COV_COM_VAR_DEPENDENT_SWITCH */
  /* #20 Deactivate the Pdu Group state of the passed ComIPdu */
  Com_SetRxPduGrpActive(ComPduId, FALSE);       /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif
}
#endif

#if (COM_RXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_LMgt_InitRxIpdu
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_LMgt_InitRxIpdu(PduIdType ComPduId)
{
  /* #10 Initialize the signal buffers */
  Com_RxProcessing_InitRxIpdu(ComPduId);
# if (COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON)
  /* #20 Initialize the Rx Timeout handling parameters */
  Com_RxDlMon_InitRxIpdu(ComPduId);
# endif
# if (COM_GWINFOENDIDXOFRXPDUINFO == STD_ON)
  /* #30 Initialize the Signal Gateway parameters */
  Com_SignalGw_InitRxIpdu(ComPduId);
# endif
# if (COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON)    /* COV_COM_VAR_ELISA_STD_OFF_XF */
  /* #40 If the ComIPdu is a TP Pdu initialize the TP Pdu parameters */
  if(Com_GetTypeOfRxPduInfo(ComPduId) == COM_TP_TYPEOFRXPDUINFO)        /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_RxTpInfoIdxOfRxPduInfoType rxTpPduInfoIdx = Com_GetRxTpInfoIdxOfRxPduInfo(ComPduId);
    Com_SetRxTpWrittenBytesCounter(rxTpPduInfoIdx, 0);  /* SBSW_COM_CSL02 */
    Com_SetRxTpConnectionState(rxTpPduInfoIdx, COM_READY_RXTPCONNECTIONSTATE);  /* SBSW_COM_CSL02 */
  }
# endif
# if (COM_GENERATED_DESCRIPTION_ROUTING == STD_ON)      /* COV_COM_VAR_ELISA_STD_OFF_XF */
#  if (COM_DEFERREDGWMAPPINGINFOUSEDOFRXPDUINFO == STD_ON)      /* COV_COM_VAR_ELISA_STD_OFF_XF */
  /* #50 If generated description routing code is used and the ComIPdu is a deferred gateway description source ComIPdu, reset the gwMappingEvent flag */
  if(Com_IsDeferredGwMappingInfoUsedOfRxPduInfo(ComPduId))
  {
    Com_SetDeferredGwMappingEvent(Com_GetDeferredGwMappingInfoIdxOfRxPduInfo(ComPduId), 0);     /* SBSW_COM_CSL02 */
  }
#  endif
# endif
}
#endif

#if (COM_TXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_LMgt_InitTxIpdu
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_LMgt_InitTxIpdu(Com_TxPduInfoIterType ComPduId)
{
# if (COM_TXSIGGRPINFOINDENDIDXOFTXPDUINFO == STD_ON)
  /* #10 Initialize SignalGroup parameters */
  Com_SignalGroup_InitTxIpdu(ComPduId);
# endif

  /* #20 Initialize ComIPdu length */
  Com_TxLLIf_InitTxIpdu(ComPduId);

# if (COM_TXBUFFERUSEDOFTXPDUINFO == STD_ON)
  /* #30 Initialize the ComIPdu TxBuffer */
  Com_TxBuffer_InitTxIpdu(ComPduId);
# endif

  /* #40 Initialize filter states and Tx mode parameter */
  Com_TxModeHdlr_InitTxIpdu((PduIdType) ComPduId);

# if ((COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)||(COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON))
  /* #50 Initialize HandleDeferred and WaitForConfirmation flags */
  Com_TxNHdlr_InitTxIpdu(ComPduId);
# endif
}
#endif

#if ((COM_PDUGRPVECTOR == STD_ON) && (COM_RXPDUINFO == STD_ON) && (COM_RXPDUGRPINFO == STD_ON))
/**********************************************************************************************************************
  Com_IpduGroupControl_UpdateRxComIPduState
**********************************************************************************************************************/
/*! Internal comment removed.
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
**********************************************************************************************************************/
/* PRQA  S 3673 1 */ /* MD_Com_3673_AsrProto */
LOCAL_INLINE FUNC(void, COM_CODE) Com_IpduGroupControl_UpdateRxComIPduState(Com_IpduGroupVector ipduGroupVector, boolean initialize)
{
  Com_RxPduInfoIterType ComRxPduId;

  Com_RxIPduGroup_EnterExclusiveArea();

  /* #10 Iterate over all Rx ComIPdus and evaluate the current state */
  for(ComRxPduId = 0; ComRxPduId < Com_GetSizeOfRxPduInfo(); ComRxPduId++)
  {
    /* Evaluate requested active state of the I-PDU */
    boolean bRequestedActiveState = FALSE;
    Com_PduGrpVectorEndIdxOfRxPduGrpInfoType pduGrpVectorIdx = Com_GetPduGrpVectorStartIdxOfRxPduGrpInfo(ComRxPduId);
    {
      /* #20 Iterate over all related ComIPduGroups of the current ComRxPdu */
      uint8_least iByteIndex = 0;
      for(; (pduGrpVectorIdx < Com_GetPduGrpVectorEndIdxOfRxPduGrpInfo(ComRxPduId)) && (bRequestedActiveState == FALSE); pduGrpVectorIdx++)     /* COV_COM_IPDU_GROUP_STATE_ACTIVE */
      {
        /* #30 If at least one related ComIPduGroup is active the requested state is active */
        if((ipduGroupVector[iByteIndex] & Com_GetPduGrpVector(pduGrpVectorIdx)) != 0U)
        {
          /* An I-PDU is active if and only if at least one I-PDU group is active it belongs to */
          bRequestedActiveState = TRUE;
        }
        iByteIndex++;
      }
    }
    /* COM615 For all I-PDUs that do not change their activation state, the function Com_IpduGroupControl shall do nothing. */
    /* #40 If the requested state is not equal to the current state */
    if((Com_IsRxPduGrpActive(ComRxPduId)) != bRequestedActiveState)
    {
      /* COM613 Second, the function Com_IpduGroupControl shall start or stop all I-PDUs that change theire activation state because of this call of Com_IpduGroupControl respectively. */
      /* #50 If the requested state is activated */
      if(bRequestedActiveState != FALSE)
      {
        /* Start Rx I-PDU */
        /* #60 If the ComIPdu should be initialized, initialize the Rx ComIPdu parameters */
        if(initialize == TRUE)  /* COV_COM_UPDATE_IPDU_STATE */
        {
          /* COM614 If a previously stopped I-PDU gets started by the operation specified in COM613 and the parameter initialize is set to true, then the function Com_IpduGroupControl shall (re-)initialize this I-PDU before it is started. */
          Com_LMgt_InitRxIpdu((PduIdType) ComRxPduId);
        }
        /* #70 Set the state of the Rx ComIPdu to active */
        Com_SetRxPduGrpActive(ComRxPduId, TRUE);        /* SBSW_COM_CSL02 */
# if (COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON)
        {
          /* #80 Iterate over all related Rx timeout state machines and set them to active */
          Com_RxTOutInfoIndStartIdxOfRxPduInfoType idxRxTOutInfoInd = Com_GetRxTOutInfoIndStartIdxOfRxPduInfo(ComRxPduId);
          for(; idxRxTOutInfoInd < Com_GetRxTOutInfoIndEndIdxOfRxPduInfo(ComRxPduId); idxRxTOutInfoInd++)
          {
            Com_LMgt_ActivateRxIpduDm(Com_GetRxTOutInfoInd(idxRxTOutInfoInd));  /* SBSW_COM_CSL02 */
          }
        }
# endif
      }
      /* #90 Otherwise set the Rx ComIPdu state to inactive and deactivate all related Rx Timeout state machines */
      else
      {
        Com_SetRxPduGrpActive(ComRxPduId, FALSE);       /* SBSW_COM_CSL02 */
# if (COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON)
        {
          Com_RxTOutInfoIndStartIdxOfRxPduInfoType idxRxTOutInfoInd = Com_GetRxTOutInfoIndStartIdxOfRxPduInfo(ComRxPduId);
          for(; idxRxTOutInfoInd < Com_GetRxTOutInfoIndEndIdxOfRxPduInfo(ComRxPduId); idxRxTOutInfoInd++)
          {
            Com_LMgt_DeactivateRxIpduDm(Com_GetRxTOutInfoInd(idxRxTOutInfoInd));        /* SBSW_COM_CSL02 */
          }
        }
# endif
      }
    }
    Com_RxIPduGroup_ThresholdCheck();
  }
  Com_RxIPduGroup_ExitExclusiveArea();
}
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_RXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_SetRxPduGrpStateToStop
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SetRxPduGrpStateToStop(Com_IpduGroupIdType subIpduGroupId)
{
  /* #10 Iterate over all related Rx ComIPdu of the passed ComIPduGroup */
  Com_RxPduInfoIndEndIdxOfIPduGroupInfoType rxPduIndId = Com_GetRxPduInfoIndStartIdxOfIPduGroupInfo(subIpduGroupId);

  Com_RxPduGrpStateToStop_EnterExclusiveArea();
  for(; rxPduIndId < Com_GetRxPduInfoIndEndIdxOfIPduGroupInfo(subIpduGroupId); rxPduIndId++)
  {
    boolean canBeStopped = TRUE;
    Com_RxPduInfoIndType rxPduId = Com_GetRxPduInfoInd(rxPduIndId);

    /* #20 Iterate over all related ComIPdu Groups */
    Com_IPduGroupInfoOfRxPduInfoIndEndIdxOfRxPduInfoType referencedIPduGroupInd = Com_GetIPduGroupInfoOfRxPduInfoIndStartIdxOfRxPduInfo(rxPduId);
    for(; referencedIPduGroupInd < Com_GetIPduGroupInfoOfRxPduInfoIndEndIdxOfRxPduInfo(rxPduId); referencedIPduGroupInd++)
    {
      Com_IPduGroupInfoOfRxPduInfoIndType referencedIPduGroup = Com_GetIPduGroupInfoOfRxPduInfoInd(referencedIPduGroupInd);
      /* #30 If at least one related ComIPdu Group is active, the ComIPdu remains active */
      if(Com_GetIPduGroupState(referencedIPduGroup) != COM_INACTIVE_IPDUGROUPSTATE)     /* COV_COM_IPDU_GROUP_ASR3_XF */
      {
        canBeStopped = FALSE;
        break;
      }
    }
    /* #40 If all related ComIPdu Groups are stopped the ComIPdu Group state is set to inactive */
    if(canBeStopped == TRUE)    /* COV_COM_IPDU_GROUP_ASR3_TX */
    {
      Com_SetRxPduGrpActive((PduIdType) rxPduId, FALSE);        /* SBSW_COM_CSL02 */
# if (COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON)
      {
        /* #50 Iterate over all related Rx Timeout state machines and deactivate them */
        Com_RxTOutInfoIndStartIdxOfRxPduInfoType idxRxTOutInfoInd = Com_GetRxTOutInfoIndStartIdxOfRxPduInfo(rxPduId);
        for(; idxRxTOutInfoInd < Com_GetRxTOutInfoIndEndIdxOfRxPduInfo(rxPduId); idxRxTOutInfoInd++)
        {
          Com_LMgt_DeactivateRxIpduDm(Com_GetRxTOutInfoInd(idxRxTOutInfoInd));  /* SBSW_COM_CSL02 */
        }
      }
# endif
    }

    Com_RxPduGrpStateToStop_ThresholdCheck();
  }
  Com_RxPduGrpStateToStop_ExitExclusiveArea();
}
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_TXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_SetTxPduGrpStateToStop
**********************************************************************************************************************/
/*! Internal comment removed.
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
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SetTxPduGrpStateToStop(Com_IpduGroupIdType subIpduGroupId)
{
  Com_TxPduInfoIndEndIdxOfIPduGroupInfoType txPduIndId = Com_GetTxPduInfoIndStartIdxOfIPduGroupInfo(subIpduGroupId);
  Com_TxPduGrpStateToStop_EnterExclusiveArea();
  /* #10 Iterate over all related Tx ComIPdu of the passed ComIPduGroup */
  for(; txPduIndId < Com_GetTxPduInfoIndEndIdxOfIPduGroupInfo(subIpduGroupId); txPduIndId++)
  {
    boolean canBeStopped = TRUE;
    Com_TxPduInfoIndType txPduId = Com_GetTxPduInfoInd(txPduIndId);

    /* #20 Iterate over all related ComIPdu Groups */
    Com_IPduGroupInfoOfTxPduInfoIndEndIdxOfTxPduInfoType referencedIPduGroupInd = Com_GetIPduGroupInfoOfTxPduInfoIndStartIdxOfTxPduInfo(txPduId);
    for(; referencedIPduGroupInd < Com_GetIPduGroupInfoOfTxPduInfoIndEndIdxOfTxPduInfo(txPduId); referencedIPduGroupInd++)
    {
      Com_IPduGroupInfoOfTxPduInfoIndType referencedIPduGroup = Com_GetIPduGroupInfoOfTxPduInfoInd(referencedIPduGroupInd);
      /* #30 If at least one related ComIPdu Group is active, the ComIPdu remains active */
      if(Com_GetIPduGroupState(referencedIPduGroup) != COM_INACTIVE_IPDUGROUPSTATE)
      {
        canBeStopped = FALSE;
        break;
      }
    }
    /* #40 If all related ComIPdu Groups are stopped */
    if(canBeStopped == TRUE)
    {
      /* #50 Set the Tx Mode related parameters to the initial value */
      Com_TxModeHdlr_StopTxIpdus((PduIdType) txPduId);
# if (COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
      /* #60 If the transmission of a ComIPdu was not confirmed, set WaitForConfirmation flags to the initial value and call any configured error notification */
      if(Com_IsWaitingForConfirmation(txPduId))
      {
        Com_TxPduGrpStateToStop_ExitExclusiveArea();

        Com_TxNHdlr_StopTxIpdu(txPduId);

        Com_TxPduGrpStateToStop_EnterExclusiveArea();
      }
# endif
# if (COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
      /* #65 Clear HandleTxPduDeffered flag */
      Com_SetHandleTxPduDeferred(txPduId, FALSE);       /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif
      /* #70 Set the Tx ComIPdu Group state to inactive */
      Com_SetTxPduGrpActive((PduIdType) txPduId, FALSE);        /* SBSW_COM_CSL02 */
    }
    Com_TxPduGrpStateToStop_ThresholdCheck();
  }
  Com_TxPduGrpStateToStop_ExitExclusiveArea();
}
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_RXPDUINFO == STD_ON))
/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_RxPduGrpStateToStop_EnterExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxPduGrpStateToStop_EnterExclusiveArea(void)
{
  /* #10 Enter the rx IPduGroups exclusive area */
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
}

/**********************************************************************************************************************
  Com_RxPduGrpStateToStop_ExitExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxPduGrpStateToStop_ExitExclusiveArea(void)
{
  /* #05 Reload the counter with the threshold value */
  Com_SetRxIPduGroupStopISRLockCounter(Com_GetRxIPduGroupStopISRLockThreshold());
  /* #10 Exit the rx IPduGroups exclusive area */
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
}

/**********************************************************************************************************************
  Com_RxPduGrpStateToStop_ThresholdCheck
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxPduGrpStateToStop_ThresholdCheck(void)
{
  if(Com_GetRxIPduGroupStopISRLockCounter() > 0)
  {
    Com_DecRxIPduGroupStopISRLockCounter();
  }
  else
  {
    Com_RxPduGrpStateToStop_ExitExclusiveArea();
    Com_RxPduGrpStateToStop_EnterExclusiveArea();
  }
}

#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_TXPDUINFO == STD_ON))
/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_TxPduGrpStateToStop_EnterExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxPduGrpStateToStop_EnterExclusiveArea(void)
{
  /* #10 Enter the tx IPduGroups exclusive area */
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();
}

/**********************************************************************************************************************
  Com_TxPduGrpStateToStop_ExitExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxPduGrpStateToStop_ExitExclusiveArea(void)
{
  /* #05 Reload the counter with the threshold value */
  Com_SetTxIPduGroupStopISRLockCounter(Com_GetTxIPduGroupStopISRLockThreshold());
  /* #10 Exit the tx IPduGroups exclusive area */
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
}

/**********************************************************************************************************************
  Com_TxPduGrpStateToStop_ThresholdCheck
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxPduGrpStateToStop_ThresholdCheck(void)
{
  if(Com_GetTxIPduGroupStopISRLockCounter() > 0)
  {
    Com_DecTxIPduGroupStopISRLockCounter();
  }
  else
  {
    Com_TxPduGrpStateToStop_ExitExclusiveArea();
    Com_TxPduGrpStateToStop_EnterExclusiveArea();
  }
}

#endif

#if ((COM_PDUGRPVECTOR == STD_ON) && (COM_TXPDUINFO == STD_ON) && (COM_TXPDUGRPINFO == STD_ON))
/**********************************************************************************************************************
 Com_IpduGroupControl_SetRequestedActiveState
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_IpduGroupControl_SetRequestedActiveState(Com_TxPduInfoIterType ComTxPduId, boolean initialize, boolean bRequestedActiveState)
{
  /* #10 If the requested state is not equal to the current state */
  if((Com_IsTxPduGrpActive(ComTxPduId)) != bRequestedActiveState)
  {
    /* COM613 Second, the function Com_IpduGroupControl shall start or stop all I-PDUs that change theire activation state because of this call of Com_IpduGroupControl respectively. */
    /* #20 If the requested state is activated */
    if(bRequestedActiveState == TRUE)
    {
      /* Start Tx I-PDU */
      /* #30 If the ComIPdu should be initialized, initialize the Tx ComIPdu parameters */
      if(initialize == TRUE)
      {
        /* COM614 If a previously stopped I-PDU gets started by the operation specified in COM613 and the parameter initialize is set to true, then the function Com_IpduGroupControl shall (re-)initialize this I-PDU before it is started. */
        Com_LMgt_InitTxIpdu(ComTxPduId);
      }
# if (COM_TXTOUTINFOUSEDOFTXPDUINFO == STD_ON)
      /* #40 Start the Tx deadline monitoring */
      Com_TxDlMon_IPduGroupStart(ComTxPduId);
# endif
      /* #45 Initialize gateway counter */
# if (COM_GWTIMEOUTINFO == STD_ON)
      Com_GwTout_InitCounter((PduIdType) ComTxPduId);
# endif
      /* #50 Set the Tx ComIPdu Group state to active */
      Com_SetTxPduGrpActive(ComTxPduId, TRUE);  /* SBSW_COM_CSL02 */
    }
    /* #60 Otherwise stop the Tx ComIPdu, set the Tx ComIPdu state to inactive and clear HandleTxPduDeffered flag */
    else
    {
      Com_TxModeHdlr_StopTxIpdus((PduIdType) ComTxPduId);

# if (COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
      if(Com_IsWaitingForConfirmation(ComTxPduId))
      {
        Com_TxIPduGroup_ExitExclusiveArea();

        Com_TxNHdlr_StopTxIpdu(ComTxPduId);

        Com_TxIPduGroup_EnterExclusiveArea();
      }
# endif

# if (COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
      Com_SetHandleTxPduDeferred(ComTxPduId, FALSE);    /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif

      Com_SetTxPduGrpActive(ComTxPduId, FALSE); /* SBSW_COM_CSL02 */
    }
  }
}

/**********************************************************************************************************************
  Com_IpduGroupControl_EvaluateActiveState
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
/* PRQA  S 3673 1 */ /* MD_Com_3673_AsrProto */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_IpduGroupControl_EvaluateActiveState(Com_IpduGroupVector ipduGroupVector, Com_TxPduInfoIterType ComTxPduId)
{
  boolean bRequestedActiveState = FALSE;
  Com_PduGrpVectorEndIdxOfTxPduGrpInfoType pduGrpVectorIdx = Com_GetPduGrpVectorStartIdxOfTxPduGrpInfo(ComTxPduId);
  /* #10 Iterate over all ComIPdu related ComIPduGroup states and evaluate the current state of the passed ComIPdu */
  uint8_least iByteIndex = 0;
  for(; ((pduGrpVectorIdx < Com_GetPduGrpVectorEndIdxOfTxPduGrpInfo(ComTxPduId)) && (bRequestedActiveState == FALSE)); pduGrpVectorIdx++)       /* COV_COM_IPDU_GROUP_STATE_ACTIVE */
  {
    if((ipduGroupVector[iByteIndex] & Com_GetPduGrpVector(pduGrpVectorIdx)) != 0U)
    {
      /* An I-PDU is active if and only if at least one I-PDU group is active it belongs to */
      bRequestedActiveState = TRUE;
    }
    iByteIndex++;
  }
  return bRequestedActiveState;
}

#endif

#if ((COM_PDUGRPVECTOR == STD_ON ) && (COM_RXTOUTINFO == STD_ON) && (COM_RXPDUGRPINFO == STD_ON))
/**********************************************************************************************************************
  Com_ReceptionDMControl_EvaluateActiveState
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
/* PRQA  S 3673 1 */ /* MD_Com_3673_AsrProto */
LOCAL_INLINE FUNC(Com_RxPduDmStateType, COM_CODE) Com_ReceptionDMControl_EvaluateActiveState(Com_IpduGroupVector ipduGroupVector, PduIdType ComRxPduId)
{
  Com_RxPduDmStateType bRequestedActiveState = COM_INACTIVE_RXPDUDMSTATE;
  Com_PduGrpVectorEndIdxOfRxPduGrpInfoType pduGrpVectorIdx = Com_GetPduGrpVectorStartIdxOfRxPduGrpInfo(ComRxPduId);

  /* #10 Iterate over all ComIPdu related ComIPduGroup states and evaluate the current reception deadline monitoring state of the passed ComIPdu */
  uint8_least iByteIndex = 0;
  for(; ((pduGrpVectorIdx < Com_GetPduGrpVectorEndIdxOfRxPduGrpInfo(ComRxPduId)) && (bRequestedActiveState == COM_INACTIVE_RXPDUDMSTATE)); pduGrpVectorIdx++)   /* COV_COM_IPDU_GROUP_STATE_ACTIVE */
  {
    if((ipduGroupVector[iByteIndex] & Com_GetPduGrpVector(pduGrpVectorIdx)) != 0U)
    {
      /* An I-PDU is active if and only if at least one I-PDU group is active it belongs to */
      bRequestedActiveState = COM_ACTIVE_RXPDUDMSTATE;
    }
    iByteIndex++;
  }
  return bRequestedActiveState;
}
#endif

#if ((COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON) && (COM_RXPDUGRPINFO == STD_ON))
/**********************************************************************************************************************
  Com_ReceptionDMControl_SetDmState
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_ReceptionDMControl_SetDmState(PduIdType ComRxPduId, Com_RxPduDmStateType bRequestedActiveState)
{

  Com_RxTOutInfoIndStartIdxOfRxPduInfoType idxRxTOutInfoInd = Com_GetRxTOutInfoIndStartIdxOfRxPduInfo(ComRxPduId);
  /* #10 Iterate over all ComIPdu related reception deadline monitoring states */
  for(; idxRxTOutInfoInd < Com_GetRxTOutInfoIndEndIdxOfRxPduInfo(ComRxPduId); idxRxTOutInfoInd++)
  {
    /* COM618 For all I-PDUs that do not change their deadline monitoring state the function, Com_ReceptionDMControl shall do nothing. */
    Com_RxTOutInfoIndType idxRxTOutInfo = Com_GetRxTOutInfoInd(idxRxTOutInfoInd);
    /* #20 If the current state differs the passed state */
    if((Com_GetRxPduDmState(idxRxTOutInfo) & COM_PURE_DM_STATE_MASK_RXPDUDMSTATE) != bRequestedActiveState)
    {
      /* COM617 Second, the function Com_ReceptionDMControl shall start or stop the reception deadline monitoring for all I-PDUs that change their reception deadline monitoring state because of this call of Com_ReceptionDMControl respectively. */

      /* Start Deadline Monitoring */
      /* #30 If the passed state is ACTIVE, set the timeout counter to the first timeout value */
      if(bRequestedActiveState == COM_ACTIVE_RXPDUDMSTATE)
      {
        Com_SetRxTOutCnt(idxRxTOutInfo, Com_GetFirstFactorOfRxTOutInfo(idxRxTOutInfo)); /* SBSW_COM_CSL02 */
      }
      /* #40 Set the timeout state to the passed state */
      Com_SetRxPduDmState(idxRxTOutInfo, bRequestedActiveState);        /* SBSW_COM_CSL02 */
    }
  }
}
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_IPDUGROUPINFO == STD_ON) &&  (COM_RXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_IpduGroupStartRx
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_IpduGroupStartRx(Com_IpduGroupIdType subIpduGroupId, boolean Initialize)
{
  /* #10 Iterate over all related Rx ComIPdus */
  Com_RxPduInfoIndEndIdxOfIPduGroupInfoType rxPduIndId = Com_GetRxPduInfoIndStartIdxOfIPduGroupInfo(subIpduGroupId);

  Com_RxIPduGroup_EnterExclusiveArea();

  for(; rxPduIndId < Com_GetRxPduInfoIndEndIdxOfIPduGroupInfo(subIpduGroupId); rxPduIndId++)
  {
    Com_RxPduInfoIndType rxPduId = Com_GetRxPduInfoInd(rxPduIndId);
    /* #20 If the ComIPdu state is inactive */
    if(!Com_IsRxPduGrpActive(rxPduId))  /* COV_COM_IPDU_GROUP_ASR3_TX */
    {
      /* #30 If Initialize is TRUE, initialize the Rx ComIPdu */
      if(Initialize == TRUE)
      {
        /* COM614 If a previously stopped I-PDU gets started by the operation specified in COM613 and the parameter initialize is set to true, then the function Com_IpduGroupControl shall (re-)initialize this I-PDU before it is started. */
        Com_LMgt_InitRxIpdu((PduIdType) rxPduId);
      }
      /* #40 Set the ComIPdu state to active */
      Com_SetRxPduGrpActive((PduIdType) rxPduId, TRUE); /* SBSW_COM_CSL02 */

# if (COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON)
      {
        /* #50 Iterate over all related Rx deadline monitoring state machines and activate them */
        Com_RxTOutInfoIndStartIdxOfRxPduInfoType idxRxTOutInfoInd = Com_GetRxTOutInfoIndStartIdxOfRxPduInfo(rxPduId);
        for(; idxRxTOutInfoInd < Com_GetRxTOutInfoIndEndIdxOfRxPduInfo(rxPduId); idxRxTOutInfoInd++)
        {
          Com_LMgt_ActivateRxIpduDm(Com_GetRxTOutInfoInd(idxRxTOutInfoInd));    /* SBSW_COM_CSL02 */
        }
      }
# endif
    }
    Com_RxIPduGroup_ThresholdCheck();
  }
  Com_RxIPduGroup_ExitExclusiveArea();
}
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_IPDUGROUPINFO == STD_ON) && (COM_TXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_IpduGroupStartTx
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_IpduGroupStartTx(Com_IpduGroupIdType subIpduGroupId, boolean Initialize)
{
  /* #10 Iterate over all related Tx ComIPdus */
  Com_TxPduInfoIndEndIdxOfIPduGroupInfoType txPduIndId = Com_GetTxPduInfoIndStartIdxOfIPduGroupInfo(subIpduGroupId);

  Com_TxIPduGroup_EnterExclusiveArea();

  for(; txPduIndId < Com_GetTxPduInfoIndEndIdxOfIPduGroupInfo(subIpduGroupId); txPduIndId++)
  {
    Com_TxPduInfoIndType txPduId = Com_GetTxPduInfoInd(txPduIndId);
    /* #20 If the ComIPdu state is inactive */
    if(!Com_IsTxPduGrpActive(txPduId))
    {
      /* #30 If Initialize is TRUE, initialize the Tx ComIPdu */
      if(Initialize == TRUE)
      {
        /* COM614 If a previously stopped I-PDU gets started by the operation specified in COM613 and the parameter initialize is set to true, then the function Com_IpduGroupControl shall (re-)initialize this I-PDU before it is started. */
        Com_LMgt_InitTxIpdu(txPduId);
      }
      /* #40 Set the deadline monitoring state, initialize gateway timeout counter and the ComIPdu state to active */
# if (COM_TXTOUTINFOUSEDOFTXPDUINFO == STD_ON)
      Com_TxDlMon_IPduGroupStart(txPduId);
# endif
# if (COM_GWTIMEOUTINFO == STD_ON)
      Com_GwTout_InitCounter((PduIdType) txPduId);
# endif
      Com_SetTxPduGrpActive((PduIdType) txPduId, TRUE); /* SBSW_COM_CSL02 */
    }

    Com_TxIPduGroup_ThresholdCheck();
  }

  Com_TxIPduGroup_ExitExclusiveArea();
}
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_IPDUGROUPINFO == STD_ON) && (COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_EnableReceptionDMsubGroup
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_EnableReceptionDMsubGroup(Com_IpduGroupIdType subIpduGroupId)
{
  /* #10 If the current deadline monitoring state is DMINACTIVE set the state to DMACTIVE */
  if(Com_GetIPduGroupState(subIpduGroupId) == COM_ACTIVE_DMINACTIVE_IPDUGROUPSTATE)
  {
    Com_SetIPduGroupState(subIpduGroupId, COM_ACTIVE_DMACTIVE_IPDUGROUPSTATE);  /* SBSW_COM_ARRAY_WRITEACCESS_CSL */
    {
      /* #20 Iterate over all related Rx ComIPdus */
      Com_RxPduInfoIndEndIdxOfIPduGroupInfoType rxPduIndId = Com_GetRxPduInfoIndStartIdxOfIPduGroupInfo(subIpduGroupId);
      for(; rxPduIndId < Com_GetRxPduInfoIndEndIdxOfIPduGroupInfo(subIpduGroupId); rxPduIndId++)
      {
        Com_RxPduInfoIndType rxPduId = Com_GetRxPduInfoInd(rxPduIndId);
        /* #30 Iterate over all related Rx deadline monitoring state machines */
        Com_RxTOutInfoIndStartIdxOfRxPduInfoType idxRxTOutInfoInd = Com_GetRxTOutInfoIndStartIdxOfRxPduInfo(rxPduId);
        for(; idxRxTOutInfoInd < Com_GetRxTOutInfoIndEndIdxOfRxPduInfo(rxPduId); idxRxTOutInfoInd++)
        {
          Com_RxTOutInfoIndType idxRxTOutInfo = Com_GetRxTOutInfoInd(idxRxTOutInfoInd);
          /* #40 If the Rx deadline monitoring is INACTIVE, activate the Rx deadline monitoring */
          if((Com_GetRxPduDmState(idxRxTOutInfo) & COM_PURE_DM_STATE_MASK_RXPDUDMSTATE) == COM_INACTIVE_RXPDUDMSTATE)   /* COV_COM_IPDU_GROUP_DM_ASR3_TX */
          {
            Com_SetRxTOutCnt(idxRxTOutInfo, Com_GetFirstFactorOfRxTOutInfo(idxRxTOutInfo));     /* SBSW_COM_CSL02 */
            Com_SetRxPduDmState(idxRxTOutInfo, COM_ACTIVE_RXPDUDMSTATE);        /* SBSW_COM_CSL02 */
          }
        }
      }
    }
  }
}
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_IPDUGROUPINFO == STD_ON) && (COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_DisableReceptionDMsubGroup
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_DisableReceptionDMsubGroup(Com_IpduGroupIdType subIpduGroupId)
{
  /* #10 If the current deadline monitoring state is DMACTIVE set the state to DMINACTIVE */
  if(Com_GetIPduGroupState(subIpduGroupId) == COM_ACTIVE_DMACTIVE_IPDUGROUPSTATE)
  {
    Com_SetIPduGroupState(subIpduGroupId, COM_ACTIVE_DMINACTIVE_IPDUGROUPSTATE);        /* SBSW_COM_ARRAY_WRITEACCESS_CSL */
    {
      /* #20 Iterate over all related Rx ComIPdus */
      Com_RxPduInfoIndEndIdxOfIPduGroupInfoType rxPduIndId = Com_GetRxPduInfoIndStartIdxOfIPduGroupInfo(subIpduGroupId);
      for(; rxPduIndId < Com_GetRxPduInfoIndEndIdxOfIPduGroupInfo(subIpduGroupId); rxPduIndId++)
      {
        boolean canBeStopped = TRUE;
        Com_RxPduInfoIndType rxPduId = Com_GetRxPduInfoInd(rxPduIndId);
        /* #30 Iterate over all related ComIPduGroups */
        Com_IPduGroupInfoOfRxPduInfoIndEndIdxOfRxPduInfoType referencedIPduGroupInd = Com_GetIPduGroupInfoOfRxPduInfoIndStartIdxOfRxPduInfo(rxPduId);
        for(; referencedIPduGroupInd < Com_GetIPduGroupInfoOfRxPduInfoIndEndIdxOfRxPduInfo(rxPduId); referencedIPduGroupInd++)
        {
          /* #40 If at least one ComIPduGroup state is DMACTIVE the deadline monitoring states remain active */
          Com_IPduGroupInfoOfRxPduInfoIndType referencedIPduGroup = Com_GetIPduGroupInfoOfRxPduInfoInd(referencedIPduGroupInd);
          if(Com_GetIPduGroupState(referencedIPduGroup) == COM_ACTIVE_DMACTIVE_IPDUGROUPSTATE)
          {
            canBeStopped = FALSE;
            break;
          }
        }
        /* #50 If all ComIPduGroups are in state DMINACTIVE */
        if(canBeStopped == TRUE)
        {
          /* #60 Iterate all Rx deadline monitoring states and deactivate them */
          Com_RxTOutInfoIndStartIdxOfRxPduInfoType idxRxTOutInfoInd = Com_GetRxTOutInfoIndStartIdxOfRxPduInfo(rxPduId);
          for(; idxRxTOutInfoInd < Com_GetRxTOutInfoIndEndIdxOfRxPduInfo(rxPduId); idxRxTOutInfoInd++)
          {
            Com_LMgt_DeactivateRxIpduDm(Com_GetRxTOutInfoInd(idxRxTOutInfoInd));        /* SBSW_COM_CSL02 */
          }
        }
      }
    }
  }
}
#endif

#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_IPDUGROUPINFO == STD_ON))
/**********************************************************************************************************************
  Com_IpduGroupStopSubGroup
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_IpduGroupStopSubGroup(Com_IpduGroupIdType subIpduGroupId)
{
  /* #10 If the ComIPduGroup is ACTIVE set the ComIPduGroup to INACTIVE and stop its SubIPduGroups */
  if(Com_GetIPduGroupState(subIpduGroupId) != COM_INACTIVE_IPDUGROUPSTATE)
  {
    Com_SetIPduGroupState(subIpduGroupId, COM_INACTIVE_IPDUGROUPSTATE); /* SBSW_COM_ARRAY_WRITEACCESS_CSL */
# if (COM_RXPDUINFO == STD_ON)
    Com_SetRxPduGrpStateToStop(subIpduGroupId);
# endif
# if (COM_TXPDUINFO == STD_ON)
    Com_SetTxPduGrpStateToStop(subIpduGroupId);
# endif
  }
}
#endif

#if (COM_TXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_InitTx
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *    -
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_InitTx(void)
{
  Com_TxPduInfoIterType ComTxPduId = 0;
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();
  /* #10 Iterate over all Tx ComIPdus and initialize all related parameters */
  for(; ComTxPduId < Com_GetSizeOfTxPduInfo(); ComTxPduId++)
  {
# if (COM_INVALIDHNDOFTXPDUINFO == STD_ON)
    if(!Com_IsInvalidHndOfTxPduInfo(ComTxPduId))
# endif
    {
# if ((COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON))
      Com_SetRepCnt(ComTxPduId, 0U);    /* SBSW_COM_CSL02 */
      Com_SetRepCycleCnt(ComTxPduId, 0U);       /* SBSW_COM_CSL02 */
# endif
      Com_LMgt_InitTxIpdu(ComTxPduId);
      /* The Ipdu must be activated after all initialization tasks of this Ipdu! */
# if (COM_TXPDUGRPACTIVE == STD_ON)     /* COV_COM_VAR_FEAT_SUBSET_TX */
      Com_SetTxPduGrpActive(ComTxPduId, FALSE); /* SBSW_COM_CSL02 */
# endif
    }
  }
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
}
#endif

#if (COM_RXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_InitRx
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_InitRx(void)
{
  Com_RxPduInfoIterType ComRxPduId = 0;
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
  /* #10 Iterate over all Rx ComIPdus and initialize all related parameters */
  for(; ComRxPduId < Com_GetSizeOfRxPduInfo(); ComRxPduId++)
  {
# if (COM_INVALIDHNDOFRXPDUINFO == STD_ON)
    if(!Com_IsInvalidHndOfRxPduInfo(ComRxPduId))
# endif
    {
      Com_LMgt_InitRxIpdu((PduIdType) ComRxPduId);

      /* The Ipdu must be deactivated after all initialization tasks of this Ipdu! */
# if ((COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON)||(COM_RXPDUGRPACTIVE == STD_ON))   /* COV_COM_VAR_DEPENDENT_SWITCH_TX_tf_tx */
      Com_LMgt_DeactivateRxPdu((PduIdType) ComRxPduId);
# endif
    }
  }
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
}
#endif

#if ((COM_RXPDUINFO == STD_ON) && ((COM_RXPDUGRPINFO == STD_ON) || (COM_IPDUGROUPINFO == STD_ON)))
/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_RxIPduGroup_EnterExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxIPduGroup_EnterExclusiveArea(void)
{
  /* #10 Enter the rx IPduGroups exclusive area */
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
}

/**********************************************************************************************************************
  Com_RxIPduGroup_ExitExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxIPduGroup_ExitExclusiveArea(void)
{
  /* #05 Reload the counter with the threshold value */
  Com_SetRxIPduGroupISRLockCounter(Com_GetRxIPduGroupISRLockThreshold());
  /* #10 Exit the rx IPduGroups exclusive area */
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
}

/**********************************************************************************************************************
  Com_RxIPduGroup_ThresholdCheck
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxIPduGroup_ThresholdCheck(void)
{
  if(Com_GetRxIPduGroupISRLockCounter() > 0)    /* COV_COM_THRESHOLD_TX */
  {
    Com_DecRxIPduGroupISRLockCounter();
  }
  else
  {
    Com_RxIPduGroup_ExitExclusiveArea();
    Com_RxIPduGroup_EnterExclusiveArea();
  }
}

#endif

#if ((COM_TXPDUINFO == STD_ON) && ((COM_TXPDUGRPINFO == STD_ON) || (COM_IPDUGROUPINFO == STD_ON)))
/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_TxIPduGroup_EnterExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxIPduGroup_EnterExclusiveArea(void)
{
  /* #10 Enter the tx IPduGroups exclusive area */
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();
}

/**********************************************************************************************************************
  Com_TxIPduGroup_ExitExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxIPduGroup_ExitExclusiveArea(void)
{
  /* #05 Reload the counter with the threshold value */
  Com_SetTxIPduGroupISRLockCounter(Com_GetTxIPduGroupISRLockThreshold());
  /* #10 Exit the tx IPduGroups exclusive area */
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
}

/**********************************************************************************************************************
  Com_TxIPduGroup_ThresholdCheck
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxIPduGroup_ThresholdCheck(void)
{
  if(Com_GetTxIPduGroupISRLockCounter() > 0)    /* COV_COM_THRESHOLD_TX */
  {
    Com_DecTxIPduGroupISRLockCounter();
  }
  else
  {
    Com_TxIPduGroup_ExitExclusiveArea();
    Com_TxIPduGroup_EnterExclusiveArea();
  }
}

#endif

#if (COM_TXSIGGRPINFOINDENDIDXOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_SignalGroup_InitTxIpdu
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGroup_InitTxIpdu(Com_TxPduInfoIterType ComPduId)
{
  /* COM484: initialize Tx shadow buffer */
  /* #10 Initialize all related Tx ComSignalGroup shadow buffer of the passed ComIPdu */
  Com_TxSigGrpInfoIndEndIdxOfTxPduInfoType idxTxSigGrpInfoInd = Com_GetTxSigGrpInfoIndStartIdxOfTxPduInfo(ComPduId);
  for(; idxTxSigGrpInfoInd < Com_GetTxSigGrpInfoIndEndIdxOfTxPduInfo(ComPduId); idxTxSigGrpInfoInd++)
  {
    Com_TxSigGrpInfoIndType sigGrpHnd = Com_GetTxSigGrpInfoInd(idxTxSigGrpInfoInd);

# if (COM_TXBUFFERUSEDOFTXSIGGRPINFO == STD_ON)
    if(Com_IsTxBufferUsedOfTxSigGrpInfo(sigGrpHnd))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      /* Com_TxBuffer_IpduInitValue contains the initial values for all I-PDUs. It is only required to copy the initial values that are relevant for the signal group buffer. */
      VStdMemCpyRomToRam(Com_GetAddrTxBuffer(Com_GetTxBufferStartIdxOfTxSigGrpInfo(sigGrpHnd)), Com_GetAddrTxPduInitValue(Com_GetTxPduInitValueStartIdxOfTxPduInfo(ComPduId) + Com_GetPduOffsetOfTxSigGrpInfo(sigGrpHnd)), (uint16_least) Com_GetTxBufferLengthOfTxSigGrpInfo(sigGrpHnd));      /* SBSW_COM_MEM_CPY_RAM2RAM */
    }
# endif

    /* #20 Clear the ComSignalGroup event flag */
    Com_SetSigGrpEventFlag(sigGrpHnd, 0U);      /* SBSW_COM_CSL03 */
  }
}
#endif

/**********************************************************************************************************************
  Com_Signal_<ApplType>_NewIsWithIn
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT8 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT8 == STD_ON))
/* jet: ComSignalNewIsWithIn snippet */
/* see pattern Com_Signal_<ApplType>_NewIsWithIn */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt8_NewIsWithIn(Com_FilterInfo_UInt8IterType idxFilterInfo, uint8 newValue)
{
  boolean filterState = FALSE;

  uint8 filterMin = Com_GetFilterMinOfFilterInfo_UInt8(idxFilterInfo);
  uint8 filterMax = Com_GetFilterMaxOfFilterInfo_UInt8(idxFilterInfo);

  if((filterMin <= newValue) && (newValue <= filterMax))
  {
    filterState = TRUE;
  }

  return filterState;
}
#endif

#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT8 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT8 == STD_ON))
/* jet: ComSignalNewIsWithIn snippet */
/* see pattern Com_Signal_<ApplType>_NewIsWithIn */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt8_NewIsWithIn(Com_FilterInfo_SInt8IterType idxFilterInfo, sint8 newValue)
{
  boolean filterState = FALSE;

  sint8 filterMin = Com_GetFilterMinOfFilterInfo_SInt8(idxFilterInfo);
  sint8 filterMax = Com_GetFilterMaxOfFilterInfo_SInt8(idxFilterInfo);

  if((filterMin <= newValue) && (newValue <= filterMax))
  {
    filterState = TRUE;
  }

  return filterState;
}
#endif

#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT16 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT16 == STD_ON))
/* jet: ComSignalNewIsWithIn snippet */
/* see pattern Com_Signal_<ApplType>_NewIsWithIn */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt16_NewIsWithIn(Com_FilterInfo_UInt16IterType idxFilterInfo, uint16 newValue)
{
  boolean filterState = FALSE;

  uint16 filterMin = Com_GetFilterMinOfFilterInfo_UInt16(idxFilterInfo);
  uint16 filterMax = Com_GetFilterMaxOfFilterInfo_UInt16(idxFilterInfo);

  if((filterMin <= newValue) && (newValue <= filterMax))
  {
    filterState = TRUE;
  }

  return filterState;
}
#endif

#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT16 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT16 == STD_ON))
/* jet: ComSignalNewIsWithIn snippet */
/* see pattern Com_Signal_<ApplType>_NewIsWithIn */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt16_NewIsWithIn(Com_FilterInfo_SInt16IterType idxFilterInfo, sint16 newValue)
{
  boolean filterState = FALSE;

  sint16 filterMin = Com_GetFilterMinOfFilterInfo_SInt16(idxFilterInfo);
  sint16 filterMax = Com_GetFilterMaxOfFilterInfo_SInt16(idxFilterInfo);

  if((filterMin <= newValue) && (newValue <= filterMax))
  {
    filterState = TRUE;
  }

  return filterState;
}
#endif

#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT32 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT32 == STD_ON))
/* jet: ComSignalNewIsWithIn snippet */
/* see pattern Com_Signal_<ApplType>_NewIsWithIn */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt32_NewIsWithIn(Com_FilterInfo_UInt32IterType idxFilterInfo, uint32 newValue)
{
  boolean filterState = FALSE;

  uint32 filterMin = Com_GetFilterMinOfFilterInfo_UInt32(idxFilterInfo);
  uint32 filterMax = Com_GetFilterMaxOfFilterInfo_UInt32(idxFilterInfo);

  if((filterMin <= newValue) && (newValue <= filterMax))
  {
    filterState = TRUE;
  }

  return filterState;
}
#endif

#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT32 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT32 == STD_ON))
/* jet: ComSignalNewIsWithIn snippet */
/* see pattern Com_Signal_<ApplType>_NewIsWithIn */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt32_NewIsWithIn(Com_FilterInfo_SInt32IterType idxFilterInfo, sint32 newValue)
{
  boolean filterState = FALSE;

  sint32 filterMin = Com_GetFilterMinOfFilterInfo_SInt32(idxFilterInfo);
  sint32 filterMax = Com_GetFilterMaxOfFilterInfo_SInt32(idxFilterInfo);

  if((filterMin <= newValue) && (newValue <= filterMax))
  {
    filterState = TRUE;
  }

  return filterState;
}
#endif

#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT64 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT64 == STD_ON))
/* jet: ComSignalNewIsWithIn snippet */
/* see pattern Com_Signal_<ApplType>_NewIsWithIn */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt64_NewIsWithIn(Com_FilterInfo_UInt64IterType idxFilterInfo, uint64 newValue)
{
  boolean filterState = FALSE;

  uint64 filterMin = Com_GetFilterMinOfFilterInfo_UInt64(idxFilterInfo);
  uint64 filterMax = Com_GetFilterMaxOfFilterInfo_UInt64(idxFilterInfo);

  if((filterMin <= newValue) && (newValue <= filterMax))
  {
    filterState = TRUE;
  }

  return filterState;
}
#endif

#if   ((COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT64 == STD_ON) || (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT64 == STD_ON))
/* jet: ComSignalNewIsWithIn snippet */
/* see pattern Com_Signal_<ApplType>_NewIsWithIn */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt64_NewIsWithIn(Com_FilterInfo_SInt64IterType idxFilterInfo, sint64 newValue)
{
  boolean filterState = FALSE;

  sint64 filterMin = Com_GetFilterMinOfFilterInfo_SInt64(idxFilterInfo);
  sint64 filterMax = Com_GetFilterMaxOfFilterInfo_SInt64(idxFilterInfo);

  if((filterMin <= newValue) && (newValue <= filterMax))
  {
    filterState = TRUE;
  }

  return filterState;
}
#endif

/**********************************************************************************************************************
  Com_Signal_<ApplType>_EvaluateFilter
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
#if (COM_FILTERINFO_UINT8 == STD_ON)
/* see pattern Com_Signal_<ApplType>_EvaluateFilter */
/* jet: ComSignalEvaluateFilter snippet */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt8_EvaluateFilter(Com_FilterInfo_UInt8IterType idxFilterInfo, uint8 newValue, uint8 oldValue, boolean timeOutOccurred)
{
  boolean filterState = FALSE;

  switch (Com_GetFilterAlgoOfFilterInfo_UInt8(idxFilterInfo))
  {
# if (COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT8 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT8:
    {
      uint8 filterMask = Com_GetFilterMaskOfFilterInfo_UInt8(idxFilterInfo);
      uint8 filterX = Com_GetFilterXOfFilterInfo_UInt8(idxFilterInfo);
      if((uint8) (((uint8) newValue) & filterMask) != filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT8 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT8:
    {
#  if (COM_RXTOUTINFO == STD_ON)
      if(timeOutOccurred == FALSE)      /* COV_COM_MASKED_NEW_DIFFERS_MASKED_OLD_TX */
#  endif
      {
        uint8 filterMask = Com_GetFilterMaskOfFilterInfo_UInt8(idxFilterInfo);
        if((uint8) (((uint8) newValue) & filterMask) != (uint8) (((uint8) oldValue) & filterMask))
        {
          filterState = TRUE;
        }
      }
#  if (COM_RXTOUTINFO == STD_ON)
      else
      {
        filterState = TRUE;
      }
#  endif
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT8 == STD_ON)
    case COM_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT8:
    {
      uint8 filterMask = Com_GetFilterMaskOfFilterInfo_UInt8(idxFilterInfo);
      uint8 filterX = Com_GetFilterXOfFilterInfo_UInt8(idxFilterInfo);
      if((uint8) (((uint8) newValue) & filterMask) == filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT8 == STD_ON)
    case COM_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT8:
    {
      if(Com_Signal_UInt8_NewIsWithIn(idxFilterInfo, newValue) == FALSE)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT8 == STD_ON)
    case COM_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT8:
    {
      filterState = Com_Signal_UInt8_NewIsWithIn(idxFilterInfo, newValue);
      break;
    }
# endif
# if (COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_UINT8 == STD_ON)
    case COM_NEVER_FILTERALGOOFFILTERINFO_UINT8:
    {
      filterState = FALSE;
      break;
    }
# endif
    default:   /* COV_COM_MISRA */
      break;
  }

  COM_DUMMY_STATEMENT(oldValue);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(timeOutOccurred); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return filterState;
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif

#if (COM_FILTERINFO_SINT8 == STD_ON)
/* see pattern Com_Signal_<ApplType>_EvaluateFilter */
/* jet: ComSignalEvaluateFilter snippet */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt8_EvaluateFilter(Com_FilterInfo_SInt8IterType idxFilterInfo, sint8 newValue, sint8 oldValue, boolean timeOutOccurred)
{
  boolean filterState = FALSE;

  switch (Com_GetFilterAlgoOfFilterInfo_SInt8(idxFilterInfo))
  {
# if (COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT8 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT8:
    {
      uint8 filterMask = Com_GetFilterMaskOfFilterInfo_SInt8(idxFilterInfo);
      sint8 filterX = Com_GetFilterXOfFilterInfo_SInt8(idxFilterInfo);
      if((sint8) (((uint8) newValue) & filterMask) != filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT8 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT8:
    {
#  if (COM_RXTOUTINFO == STD_ON)
      if(timeOutOccurred == FALSE)      /* COV_COM_MASKED_NEW_DIFFERS_MASKED_OLD_TX */
#  endif
      {
        uint8 filterMask = Com_GetFilterMaskOfFilterInfo_SInt8(idxFilterInfo);
        if((sint8) (((uint8) newValue) & filterMask) != (sint8) (((uint8) oldValue) & filterMask))
        {
          filterState = TRUE;
        }
      }
#  if (COM_RXTOUTINFO == STD_ON)
      else
      {
        filterState = TRUE;
      }
#  endif
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT8 == STD_ON)
    case COM_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT8:
    {
      uint8 filterMask = Com_GetFilterMaskOfFilterInfo_SInt8(idxFilterInfo);
      sint8 filterX = Com_GetFilterXOfFilterInfo_SInt8(idxFilterInfo);
      if((sint8) (((uint8) newValue) & filterMask) == filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT8 == STD_ON)
    case COM_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT8:
    {
      if(Com_Signal_SInt8_NewIsWithIn(idxFilterInfo, newValue) == FALSE)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT8 == STD_ON)
    case COM_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT8:
    {
      filterState = Com_Signal_SInt8_NewIsWithIn(idxFilterInfo, newValue);
      break;
    }
# endif
# if (COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_SINT8 == STD_ON)
    case COM_NEVER_FILTERALGOOFFILTERINFO_SINT8:
    {
      filterState = FALSE;
      break;
    }
# endif
    default:   /* COV_COM_MISRA */
      break;
  }

  COM_DUMMY_STATEMENT(oldValue);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(timeOutOccurred); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return filterState;
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif

#if (COM_FILTERINFO_UINT16 == STD_ON)
/* see pattern Com_Signal_<ApplType>_EvaluateFilter */
/* jet: ComSignalEvaluateFilter snippet */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt16_EvaluateFilter(Com_FilterInfo_UInt16IterType idxFilterInfo, uint16 newValue, uint16 oldValue, boolean timeOutOccurred)
{
  boolean filterState = FALSE;

  switch (Com_GetFilterAlgoOfFilterInfo_UInt16(idxFilterInfo))
  {
# if (COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT16 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT16:
    {
      uint16 filterMask = Com_GetFilterMaskOfFilterInfo_UInt16(idxFilterInfo);
      uint16 filterX = Com_GetFilterXOfFilterInfo_UInt16(idxFilterInfo);
      if((uint16) (((uint16) newValue) & filterMask) != filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT16 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT16:
    {
#  if (COM_RXTOUTINFO == STD_ON)
      if(timeOutOccurred == FALSE)      /* COV_COM_MASKED_NEW_DIFFERS_MASKED_OLD_TX */
#  endif
      {
        uint16 filterMask = Com_GetFilterMaskOfFilterInfo_UInt16(idxFilterInfo);
        if((uint16) (((uint16) newValue) & filterMask) != (uint16) (((uint16) oldValue) & filterMask))
        {
          filterState = TRUE;
        }
      }
#  if (COM_RXTOUTINFO == STD_ON)
      else
      {
        filterState = TRUE;
      }
#  endif
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT16 == STD_ON)
    case COM_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT16:
    {
      uint16 filterMask = Com_GetFilterMaskOfFilterInfo_UInt16(idxFilterInfo);
      uint16 filterX = Com_GetFilterXOfFilterInfo_UInt16(idxFilterInfo);
      if((uint16) (((uint16) newValue) & filterMask) == filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT16 == STD_ON)
    case COM_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT16:
    {
      if(Com_Signal_UInt16_NewIsWithIn(idxFilterInfo, newValue) == FALSE)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT16 == STD_ON)
    case COM_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT16:
    {
      filterState = Com_Signal_UInt16_NewIsWithIn(idxFilterInfo, newValue);
      break;
    }
# endif
# if (COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_UINT16 == STD_ON)
    case COM_NEVER_FILTERALGOOFFILTERINFO_UINT16:
    {
      filterState = FALSE;
      break;
    }
# endif
    default:   /* COV_COM_MISRA */
      break;
  }

  COM_DUMMY_STATEMENT(oldValue);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(timeOutOccurred); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return filterState;
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif

#if (COM_FILTERINFO_SINT16 == STD_ON)
/* see pattern Com_Signal_<ApplType>_EvaluateFilter */
/* jet: ComSignalEvaluateFilter snippet */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt16_EvaluateFilter(Com_FilterInfo_SInt16IterType idxFilterInfo, sint16 newValue, sint16 oldValue, boolean timeOutOccurred)
{
  boolean filterState = FALSE;

  switch (Com_GetFilterAlgoOfFilterInfo_SInt16(idxFilterInfo))
  {
# if (COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT16 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT16:
    {
      uint16 filterMask = Com_GetFilterMaskOfFilterInfo_SInt16(idxFilterInfo);
      sint16 filterX = Com_GetFilterXOfFilterInfo_SInt16(idxFilterInfo);
      if((sint16) (((uint16) newValue) & filterMask) != filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT16 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT16:
    {
#  if (COM_RXTOUTINFO == STD_ON)
      if(timeOutOccurred == FALSE)      /* COV_COM_MASKED_NEW_DIFFERS_MASKED_OLD_TX */
#  endif
      {
        uint16 filterMask = Com_GetFilterMaskOfFilterInfo_SInt16(idxFilterInfo);
        if((sint16) (((uint16) newValue) & filterMask) != (sint16) (((uint16) oldValue) & filterMask))
        {
          filterState = TRUE;
        }
      }
#  if (COM_RXTOUTINFO == STD_ON)
      else
      {
        filterState = TRUE;
      }
#  endif
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT16 == STD_ON)
    case COM_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT16:
    {
      uint16 filterMask = Com_GetFilterMaskOfFilterInfo_SInt16(idxFilterInfo);
      sint16 filterX = Com_GetFilterXOfFilterInfo_SInt16(idxFilterInfo);
      if((sint16) (((uint16) newValue) & filterMask) == filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT16 == STD_ON)
    case COM_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT16:
    {
      if(Com_Signal_SInt16_NewIsWithIn(idxFilterInfo, newValue) == FALSE)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT16 == STD_ON)
    case COM_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT16:
    {
      filterState = Com_Signal_SInt16_NewIsWithIn(idxFilterInfo, newValue);
      break;
    }
# endif
# if (COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_SINT16 == STD_ON)
    case COM_NEVER_FILTERALGOOFFILTERINFO_SINT16:
    {
      filterState = FALSE;
      break;
    }
# endif
    default:   /* COV_COM_MISRA */
      break;
  }

  COM_DUMMY_STATEMENT(oldValue);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(timeOutOccurred); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return filterState;
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif

#if (COM_FILTERINFO_UINT32 == STD_ON)
/* see pattern Com_Signal_<ApplType>_EvaluateFilter */
/* jet: ComSignalEvaluateFilter snippet */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt32_EvaluateFilter(Com_FilterInfo_UInt32IterType idxFilterInfo, uint32 newValue, uint32 oldValue, boolean timeOutOccurred)
{
  boolean filterState = FALSE;

  switch (Com_GetFilterAlgoOfFilterInfo_UInt32(idxFilterInfo))
  {
# if (COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT32 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT32:
    {
      uint32 filterMask = Com_GetFilterMaskOfFilterInfo_UInt32(idxFilterInfo);
      uint32 filterX = Com_GetFilterXOfFilterInfo_UInt32(idxFilterInfo);
      if((uint32) (((uint32) newValue) & filterMask) != filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT32 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT32:
    {
#  if (COM_RXTOUTINFO == STD_ON)
      if(timeOutOccurred == FALSE)      /* COV_COM_MASKED_NEW_DIFFERS_MASKED_OLD_TX */
#  endif
      {
        uint32 filterMask = Com_GetFilterMaskOfFilterInfo_UInt32(idxFilterInfo);
        if((uint32) (((uint32) newValue) & filterMask) != (uint32) (((uint32) oldValue) & filterMask))
        {
          filterState = TRUE;
        }
      }
#  if (COM_RXTOUTINFO == STD_ON)
      else
      {
        filterState = TRUE;
      }
#  endif
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT32 == STD_ON)
    case COM_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT32:
    {
      uint32 filterMask = Com_GetFilterMaskOfFilterInfo_UInt32(idxFilterInfo);
      uint32 filterX = Com_GetFilterXOfFilterInfo_UInt32(idxFilterInfo);
      if((uint32) (((uint32) newValue) & filterMask) == filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT32 == STD_ON)
    case COM_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT32:
    {
      if(Com_Signal_UInt32_NewIsWithIn(idxFilterInfo, newValue) == FALSE)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT32 == STD_ON)
    case COM_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT32:
    {
      filterState = Com_Signal_UInt32_NewIsWithIn(idxFilterInfo, newValue);
      break;
    }
# endif
# if (COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_UINT32 == STD_ON)
    case COM_NEVER_FILTERALGOOFFILTERINFO_UINT32:
    {
      filterState = FALSE;
      break;
    }
# endif
    default:   /* COV_COM_MISRA */
      break;
  }

  COM_DUMMY_STATEMENT(oldValue);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(timeOutOccurred); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return filterState;
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif

#if (COM_FILTERINFO_SINT32 == STD_ON)
/* see pattern Com_Signal_<ApplType>_EvaluateFilter */
/* jet: ComSignalEvaluateFilter snippet */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt32_EvaluateFilter(Com_FilterInfo_SInt32IterType idxFilterInfo, sint32 newValue, sint32 oldValue, boolean timeOutOccurred)
{
  boolean filterState = FALSE;

  switch (Com_GetFilterAlgoOfFilterInfo_SInt32(idxFilterInfo))
  {
# if (COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT32 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT32:
    {
      uint32 filterMask = Com_GetFilterMaskOfFilterInfo_SInt32(idxFilterInfo);
      sint32 filterX = Com_GetFilterXOfFilterInfo_SInt32(idxFilterInfo);
      if((sint32) (((uint32) newValue) & filterMask) != filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT32 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT32:
    {
#  if (COM_RXTOUTINFO == STD_ON)
      if(timeOutOccurred == FALSE)      /* COV_COM_MASKED_NEW_DIFFERS_MASKED_OLD_TX */
#  endif
      {
        uint32 filterMask = Com_GetFilterMaskOfFilterInfo_SInt32(idxFilterInfo);
        if((sint32) (((uint32) newValue) & filterMask) != (sint32) (((uint32) oldValue) & filterMask))
        {
          filterState = TRUE;
        }
      }
#  if (COM_RXTOUTINFO == STD_ON)
      else
      {
        filterState = TRUE;
      }
#  endif
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT32 == STD_ON)
    case COM_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT32:
    {
      uint32 filterMask = Com_GetFilterMaskOfFilterInfo_SInt32(idxFilterInfo);
      sint32 filterX = Com_GetFilterXOfFilterInfo_SInt32(idxFilterInfo);
      if((sint32) (((uint32) newValue) & filterMask) == filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT32 == STD_ON)
    case COM_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT32:
    {
      if(Com_Signal_SInt32_NewIsWithIn(idxFilterInfo, newValue) == FALSE)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT32 == STD_ON)
    case COM_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT32:
    {
      filterState = Com_Signal_SInt32_NewIsWithIn(idxFilterInfo, newValue);
      break;
    }
# endif
# if (COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_SINT32 == STD_ON)
    case COM_NEVER_FILTERALGOOFFILTERINFO_SINT32:
    {
      filterState = FALSE;
      break;
    }
# endif
    default:   /* COV_COM_MISRA */
      break;
  }

  COM_DUMMY_STATEMENT(oldValue);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(timeOutOccurred); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return filterState;
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif

#if (COM_FILTERINFO_UINT64 == STD_ON)
/* see pattern Com_Signal_<ApplType>_EvaluateFilter */
/* jet: ComSignalEvaluateFilter snippet */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt64_EvaluateFilter(Com_FilterInfo_UInt64IterType idxFilterInfo, uint64 newValue, uint64 oldValue, boolean timeOutOccurred)
{
  boolean filterState = FALSE;

  switch (Com_GetFilterAlgoOfFilterInfo_UInt64(idxFilterInfo))
  {
# if (COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT64 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT64:
    {
      uint64 filterMask = Com_GetFilterMaskOfFilterInfo_UInt64(idxFilterInfo);
      uint64 filterX = Com_GetFilterXOfFilterInfo_UInt64(idxFilterInfo);
      if((uint64) (((uint64) newValue) & filterMask) != filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT64 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT64:
    {
#  if (COM_RXTOUTINFO == STD_ON)
      if(timeOutOccurred == FALSE)      /* COV_COM_MASKED_NEW_DIFFERS_MASKED_OLD_TX */
#  endif
      {
        uint64 filterMask = Com_GetFilterMaskOfFilterInfo_UInt64(idxFilterInfo);
        if((uint64) (((uint64) newValue) & filterMask) != (uint64) (((uint64) oldValue) & filterMask))
        {
          filterState = TRUE;
        }
      }
#  if (COM_RXTOUTINFO == STD_ON)
      else
      {
        filterState = TRUE;
      }
#  endif
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT64 == STD_ON)
    case COM_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT64:
    {
      uint64 filterMask = Com_GetFilterMaskOfFilterInfo_UInt64(idxFilterInfo);
      uint64 filterX = Com_GetFilterXOfFilterInfo_UInt64(idxFilterInfo);
      if((uint64) (((uint64) newValue) & filterMask) == filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT64 == STD_ON)
    case COM_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT64:
    {
      if(Com_Signal_UInt64_NewIsWithIn(idxFilterInfo, newValue) == FALSE)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT64 == STD_ON)
    case COM_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT64:
    {
      filterState = Com_Signal_UInt64_NewIsWithIn(idxFilterInfo, newValue);
      break;
    }
# endif
# if (COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_UINT64 == STD_ON)
    case COM_NEVER_FILTERALGOOFFILTERINFO_UINT64:
    {
      filterState = FALSE;
      break;
    }
# endif
    default:   /* COV_COM_MISRA */
      break;
  }

  COM_DUMMY_STATEMENT(oldValue);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(timeOutOccurred); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return filterState;
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif

#if (COM_FILTERINFO_SINT64 == STD_ON)
/* see pattern Com_Signal_<ApplType>_EvaluateFilter */
/* jet: ComSignalEvaluateFilter snippet */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_SInt64_EvaluateFilter(Com_FilterInfo_SInt64IterType idxFilterInfo, sint64 newValue, sint64 oldValue, boolean timeOutOccurred)
{
  boolean filterState = FALSE;

  switch (Com_GetFilterAlgoOfFilterInfo_SInt64(idxFilterInfo))
  {
# if (COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT64 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT64:
    {
      uint64 filterMask = Com_GetFilterMaskOfFilterInfo_SInt64(idxFilterInfo);
      sint64 filterX = Com_GetFilterXOfFilterInfo_SInt64(idxFilterInfo);
      if((sint64) (((uint64) newValue) & filterMask) != filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT64 == STD_ON)
    case COM_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT64:
    {
#  if (COM_RXTOUTINFO == STD_ON)
      if(timeOutOccurred == FALSE)      /* COV_COM_MASKED_NEW_DIFFERS_MASKED_OLD_TX */
#  endif
      {
        uint64 filterMask = Com_GetFilterMaskOfFilterInfo_SInt64(idxFilterInfo);
        if((sint64) (((uint64) newValue) & filterMask) != (sint64) (((uint64) oldValue) & filterMask))
        {
          filterState = TRUE;
        }
      }
#  if (COM_RXTOUTINFO == STD_ON)
      else
      {
        filterState = TRUE;
      }
#  endif
      break;
    }
# endif
# if (COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT64 == STD_ON)
    case COM_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT64:
    {
      uint64 filterMask = Com_GetFilterMaskOfFilterInfo_SInt64(idxFilterInfo);
      sint64 filterX = Com_GetFilterXOfFilterInfo_SInt64(idxFilterInfo);
      if((sint64) (((uint64) newValue) & filterMask) == filterX)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT64 == STD_ON)
    case COM_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT64:
    {
      if(Com_Signal_SInt64_NewIsWithIn(idxFilterInfo, newValue) == FALSE)
      {
        filterState = TRUE;
      }
      break;
    }
# endif
# if (COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT64 == STD_ON)
    case COM_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT64:
    {
      filterState = Com_Signal_SInt64_NewIsWithIn(idxFilterInfo, newValue);
      break;
    }
# endif
# if (COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_SINT64 == STD_ON)
    case COM_NEVER_FILTERALGOOFFILTERINFO_SINT64:
    {
      filterState = FALSE;
      break;
    }
# endif
    default:   /* COV_COM_MISRA */
      break;
  }

  COM_DUMMY_STATEMENT(oldValue);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(timeOutOccurred); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return filterState;
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif

#if (COM_FILTERINFO_UINT8_N == STD_ON)
/* see pattern Com_Signal_<ApplType>_EvaluateFilter */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_Signal_UInt8_N_EvaluateFilter(Com_FilterInfo_UInt8_NIterType idxFilterInfo, P2CONST(uint8, AUTOMATIC, AUTOMATIC) newValuePtr,
                                                                       P2CONST(uint8, AUTOMATIC, AUTOMATIC) oldValuePtr, PduLengthType length, boolean timeOutOccurred)
{
  boolean filterState = FALSE;

  switch (Com_GetFilterAlgoOfFilterInfo_UInt8_N(idxFilterInfo))
  {
      /* Currently FILTERINFO_UINT8_N only exists when TriggeredOnChange or MASKED_NEW_DIFFERS_MASKED_OLD */
# if (COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT8_N == STD_ON)        /* COV_COM_VAR_DEPENDENT_SWITCH */
    case COM_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT8_N:
    {
#  if (COM_RXTOUTINFO == STD_ON)
      if(timeOutOccurred == FALSE)
#  endif
      {
        PduLengthType i = 0;
        filterState = FALSE;
        for(; i < length; i++)
        {
          if(((P2CONST(uint8, AUTOMATIC, AUTOMATIC)) newValuePtr)[i] != (((P2CONST(uint8, AUTOMATIC, AUTOMATIC)) oldValuePtr)[i]))
          {
            filterState = TRUE;
            break;
          }
        }
      }
#  if (COM_RXTOUTINFO == STD_ON)
      else
      {
        filterState = TRUE;
      }
#  endif
      break;
    }
# endif
    default:   /* COV_COM_MISRA */
      break;
  }

  COM_DUMMY_STATEMENT(timeOutOccurred); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return filterState;
}
#endif

#if ((COM_FILTERINFOUSEDOFTXSIGINFO == STD_ON) || (COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON))
/**********************************************************************************************************************
  Com_TxSignal_EvaluateFilter
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_TxSignal_EvaluateFilter(Com_SignalIdType idxTxSigInfo, uint32 idxFilterInfo, P2CONST(void, AUTOMATIC, AUTOMATIC) newValuePtr)
{
  /* #10 Evaluate the filter state using the filter algorithm of the passed FilterInfo */
  boolean filterState = FALSE;
  switch (Com_GetApplTypeOfTxSigInfo(idxTxSigInfo))
  {
/* jet: ComSignalEvaluateFilterCase snippet */
# if ((COM_FILTERINFO_UINT8 == STD_ON) &&(COM_EXISTS_UINT8_APPLTYPEOFTXSIGINFO == STD_ON))
    case (COM_UINT8_APPLTYPEOFTXSIGINFO):
    {
      uint8 oldValue = 0;
#  if (COM_FILTERINITVALUEUSEDOFTXSIGINFO == STD_ON)
      if(Com_IsFilterInitValueUsedOfTxSigInfo(idxTxSigInfo))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        P2CONST(uint8, AUTOMATIC, AUTOMATIC) oldValuePtr = Com_GetOldValuePtr(idxTxSigInfo);
        oldValue = *oldValuePtr;
      }
#  endif
      filterState = Com_Signal_UInt8_EvaluateFilter((Com_FilterInfo_UInt8IterType) idxFilterInfo, *((P2CONST(uint8, AUTOMATIC, AUTOMATIC)) newValuePtr), oldValue, FALSE);
      break;
    }
# endif

/* jet: ComSignalEvaluateFilterCase snippet */
# if ((COM_FILTERINFO_SINT8 == STD_ON) &&(COM_EXISTS_SINT8_APPLTYPEOFTXSIGINFO == STD_ON))
    case (COM_SINT8_APPLTYPEOFTXSIGINFO):
    {
      sint8 oldValue = 0;
#  if (COM_FILTERINITVALUEUSEDOFTXSIGINFO == STD_ON)
      if(Com_IsFilterInitValueUsedOfTxSigInfo(idxTxSigInfo))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        P2CONST(sint8, AUTOMATIC, AUTOMATIC) oldValuePtr = Com_GetOldValuePtr(idxTxSigInfo);
        oldValue = *oldValuePtr;
      }
#  endif
      filterState = Com_Signal_SInt8_EvaluateFilter((Com_FilterInfo_SInt8IterType) idxFilterInfo, *((P2CONST(sint8, AUTOMATIC, AUTOMATIC)) newValuePtr), oldValue, FALSE);
      break;
    }
# endif

/* jet: ComSignalEvaluateFilterCase snippet */
# if ((COM_FILTERINFO_UINT16 == STD_ON) &&(COM_EXISTS_UINT16_APPLTYPEOFTXSIGINFO == STD_ON))
    case (COM_UINT16_APPLTYPEOFTXSIGINFO):
    {
      uint16 oldValue = 0;
#  if (COM_FILTERINITVALUEUSEDOFTXSIGINFO == STD_ON)
      if(Com_IsFilterInitValueUsedOfTxSigInfo(idxTxSigInfo))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        P2CONST(uint16, AUTOMATIC, AUTOMATIC) oldValuePtr = Com_GetOldValuePtr(idxTxSigInfo);
        oldValue = *oldValuePtr;
      }
#  endif
      filterState = Com_Signal_UInt16_EvaluateFilter((Com_FilterInfo_UInt16IterType) idxFilterInfo, *((P2CONST(uint16, AUTOMATIC, AUTOMATIC)) newValuePtr), oldValue, FALSE);
      break;
    }
# endif

/* jet: ComSignalEvaluateFilterCase snippet */
# if ((COM_FILTERINFO_SINT16 == STD_ON) &&(COM_EXISTS_SINT16_APPLTYPEOFTXSIGINFO == STD_ON))
    case (COM_SINT16_APPLTYPEOFTXSIGINFO):
    {
      sint16 oldValue = 0;
#  if (COM_FILTERINITVALUEUSEDOFTXSIGINFO == STD_ON)
      if(Com_IsFilterInitValueUsedOfTxSigInfo(idxTxSigInfo))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        P2CONST(sint16, AUTOMATIC, AUTOMATIC) oldValuePtr = Com_GetOldValuePtr(idxTxSigInfo);
        oldValue = *oldValuePtr;
      }
#  endif
      filterState = Com_Signal_SInt16_EvaluateFilter((Com_FilterInfo_SInt16IterType) idxFilterInfo, *((P2CONST(sint16, AUTOMATIC, AUTOMATIC)) newValuePtr), oldValue, FALSE);
      break;
    }
# endif

/* jet: ComSignalEvaluateFilterCase snippet */
# if ((COM_FILTERINFO_UINT32 == STD_ON) &&(COM_EXISTS_UINT32_APPLTYPEOFTXSIGINFO == STD_ON))
    case (COM_UINT32_APPLTYPEOFTXSIGINFO):
    {
      uint32 oldValue = 0;
#  if (COM_FILTERINITVALUEUSEDOFTXSIGINFO == STD_ON)
      if(Com_IsFilterInitValueUsedOfTxSigInfo(idxTxSigInfo))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        P2CONST(uint32, AUTOMATIC, AUTOMATIC) oldValuePtr = Com_GetOldValuePtr(idxTxSigInfo);
        oldValue = *oldValuePtr;
      }
#  endif
      filterState = Com_Signal_UInt32_EvaluateFilter((Com_FilterInfo_UInt32IterType) idxFilterInfo, *((P2CONST(uint32, AUTOMATIC, AUTOMATIC)) newValuePtr), oldValue, FALSE);
      break;
    }
# endif

/* jet: ComSignalEvaluateFilterCase snippet */
# if ((COM_FILTERINFO_SINT32 == STD_ON) &&(COM_EXISTS_SINT32_APPLTYPEOFTXSIGINFO == STD_ON))
    case (COM_SINT32_APPLTYPEOFTXSIGINFO):
    {
      sint32 oldValue = 0;
#  if (COM_FILTERINITVALUEUSEDOFTXSIGINFO == STD_ON)
      if(Com_IsFilterInitValueUsedOfTxSigInfo(idxTxSigInfo))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        P2CONST(sint32, AUTOMATIC, AUTOMATIC) oldValuePtr = Com_GetOldValuePtr(idxTxSigInfo);
        oldValue = *oldValuePtr;
      }
#  endif
      filterState = Com_Signal_SInt32_EvaluateFilter((Com_FilterInfo_SInt32IterType) idxFilterInfo, *((P2CONST(sint32, AUTOMATIC, AUTOMATIC)) newValuePtr), oldValue, FALSE);
      break;
    }
# endif

/* jet: ComSignalEvaluateFilterCase snippet */
# if ((COM_FILTERINFO_UINT64 == STD_ON) &&(COM_EXISTS_UINT64_APPLTYPEOFTXSIGINFO == STD_ON))
    case (COM_UINT64_APPLTYPEOFTXSIGINFO):
    {
      uint64 oldValue = 0;
#  if (COM_FILTERINITVALUEUSEDOFTXSIGINFO == STD_ON)
      if(Com_IsFilterInitValueUsedOfTxSigInfo(idxTxSigInfo))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        P2CONST(uint64, AUTOMATIC, AUTOMATIC) oldValuePtr = Com_GetOldValuePtr(idxTxSigInfo);
        oldValue = *oldValuePtr;
      }
#  endif
      filterState = Com_Signal_UInt64_EvaluateFilter((Com_FilterInfo_UInt64IterType) idxFilterInfo, *((P2CONST(uint64, AUTOMATIC, AUTOMATIC)) newValuePtr), oldValue, FALSE);
      break;
    }
# endif

/* jet: ComSignalEvaluateFilterCase snippet */
# if ((COM_FILTERINFO_SINT64 == STD_ON) &&(COM_EXISTS_SINT64_APPLTYPEOFTXSIGINFO == STD_ON))
    case (COM_SINT64_APPLTYPEOFTXSIGINFO):
    {
      sint64 oldValue = 0;
#  if (COM_FILTERINITVALUEUSEDOFTXSIGINFO == STD_ON)
      if(Com_IsFilterInitValueUsedOfTxSigInfo(idxTxSigInfo))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        P2CONST(sint64, AUTOMATIC, AUTOMATIC) oldValuePtr = Com_GetOldValuePtr(idxTxSigInfo);
        oldValue = *oldValuePtr;
      }
#  endif
      filterState = Com_Signal_SInt64_EvaluateFilter((Com_FilterInfo_SInt64IterType) idxFilterInfo, *((P2CONST(sint64, AUTOMATIC, AUTOMATIC)) newValuePtr), oldValue, FALSE);
      break;
    }
# endif

# if ((COM_FILTERINFO_UINT8_N == STD_ON) && (COM_EXISTS_UINT8_N_APPLTYPEOFTXSIGINFO == STD_ON))
    case (COM_UINT8_N_APPLTYPEOFTXSIGINFO):
    {
      P2CONST(uint8, AUTOMATIC, AUTOMATIC) oldValuePtr = NULL_PTR;
      /* Currently FILTERINFO_UINT8_N only exists when TriggeredOnChange or MASKED_NEW_DIFFERS_MASKED_OLD */
#  if (COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUEUSEDOFTXSIGINFO == STD_ON) /* COV_COM_VAR_DEPENDENT_SWITCH */
      if(Com_IsTxFilterInitValueArrayBasedFilterInitValueUsedOfTxSigInfo(idxTxSigInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        oldValuePtr = Com_GetOldValuePtr(idxTxSigInfo);
      }
#  endif
      filterState = Com_Signal_UInt8_N_EvaluateFilter((Com_FilterInfo_UInt8_NIterType) idxFilterInfo, ((P2CONST(uint8, AUTOMATIC, AUTOMATIC)) newValuePtr), oldValuePtr, (PduLengthType) Com_GetTxFilterInitValueArrayBasedFilterInitValueLengthOfTxSigInfo(idxTxSigInfo), FALSE);      /* SBSW_COM_COMST_PTR */
      break;
    }
# endif
    default:   /* COV_COM_MISRA */
      break;
  }

  COM_DUMMY_STATEMENT(idxFilterInfo);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(newValuePtr);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(idxTxSigInfo);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return filterState;
}       /* PRQA S 6030, 6050 */ /* MD_MSR_STCYC, MD_MSR_STCAL */
#endif

#if (COM_TXBUFFERUSEDOFTXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_Signal_WriteSignal
**********************************************************************************************************************/
/*! Internal comment removed.
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
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_WriteSignal(Com_SignalIdType SignalId, P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) SignalApplSourcePtr)
{
# if ((COM_EXISTS_NBIT_BUSACCOFTXSIGINFO == STD_ON) || (COM_EXISTS_NBITNBYTE_BUSACCOFTXSIGINFO == STD_ON) || (COM_EXISTS_NBITNBYTE_SW_BUSACCOFTXSIGINFO == STD_ON))
  Com_BitPositionOfTxSigInfoType signalStartBit = Com_Signal_BitOffsetFromBitPos(Com_GetBitPositionOfTxSigInfo(SignalId));
# endif

# if (CPU_BYTE_ORDER == HIGH_BYTE_FIRST)
  /* #10 Set the source pointer to the least significant byte, if the CPU byte order is HIGH_BYTE_FIRST */
  SignalApplSourcePtr = Com_Signal_getLSBSignalApplSourcePtr(SignalId, SignalApplSourcePtr);    /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */
# endif

  /* #20 Switch the Bus access type */
  switch (Com_GetBusAccOfTxSigInfo(SignalId))
  {
# if (COM_EXISTS_NBIT_BUSACCOFTXSIGINFO == STD_ON)
    case (COM_NBIT_BUSACCOFTXSIGINFO): /* COV_COM_N_BIT_X */
    {
      /* #30 In case of NBIT, copy the specific bits from the source pointer to the destination pointer */
      uint8 signalBusDest = Com_GetTxBuffer(Com_GetTxBufferStartIdxOfTxSigInfo(SignalId));

      uint8 mask = COM_CAST2UINT8((COM_CAST2UINT8(~(COM_CAST2UINT8(255U << Com_GetBitLengthOfTxSigInfo(SignalId))))) << signalStartBit);
      signalBusDest &= COM_CAST2UINT8(~mask);
      signalBusDest |= COM_CAST2UINT8(*SignalApplSourcePtr << signalStartBit) & mask;

      Com_SetTxBuffer(Com_GetTxBufferStartIdxOfTxSigInfo(SignalId), signalBusDest);     /* SBSW_COM_CSL03 */
      break;
    }
# endif
# if (COM_EXISTS_BYTE_BUSACCOFTXSIGINFO == STD_ON)
    case (COM_BYTE_BUSACCOFTXSIGINFO):
    {
      /* #40 In case of BYTE, set the source pointer to the destination pointer */
      Com_SetTxBuffer(Com_GetTxBufferStartIdxOfTxSigInfo(SignalId), *SignalApplSourcePtr);      /* SBSW_COM_CSL03 */
      break;
    }
# endif
# if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
#  if ((COM_EXISTS_NBYTE_BUSACCOFTXSIGINFO == STD_ON) || (COM_EXISTS_ARRAY_BASED_BUSACCOFTXSIGINFO == STD_ON))
#   if (COM_EXISTS_ARRAY_BASED_BUSACCOFTXSIGINFO == STD_ON)
    case (COM_ARRAY_BASED_BUSACCOFTXSIGINFO):
#   endif
#   if (COM_EXISTS_NBYTE_BUSACCOFTXSIGINFO == STD_ON)
    case (COM_NBYTE_BUSACCOFTXSIGINFO):
#   endif
    {
      Com_TxBufferEndIdxOfTxSigInfoType i;
      /* Pointer points to LSB of little endian signal, therefore start index is used */
      P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusDestPtr = Com_GetAddrTxBuffer(Com_GetTxBufferStartIdxOfTxSigInfo(SignalId));
      /* #50 In case of NBYTE or ARRAY_BASED, copy N source bytes from position I to destination bytes at position I, if the CPU byte order is LOW_BYTE_FIRST */

    /* *INDENT-OFF* */
    /* ------------------------------- Intel (appl) to Intel (bus) AND Byte Arrays (Intel Hw) -------------------------
       - Writing Intel Signals on Intel Hw.
       - Writing Byte Arrays (no swap):
       - Writing Intel Byte Arrays */
    /* *INDENT-ON* */
      for(i = 0; i < Com_Signal_GetTxBufferLength(SignalId); i++)
      {
        SignalBusDestPtr[i] = SignalApplSourcePtr[i];   /* SBSW_COM_TXBUFFER_CSL03 */
      }
      break;
    }
#  endif
#  if (COM_EXISTS_NBYTE_SW_BUSACCOFTXSIGINFO == STD_ON)
    case (COM_NBYTE_SW_BUSACCOFTXSIGINFO):
    {
    /*------------------------------- Intel (appl) to Motorola (bus)------------------------------------------------*/
      /* Pointer points to LSB of big endian signal, therefore end index is used */
      P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusDestPtr = Com_GetAddrTxBuffer(Com_GetTxBufferEndIdxOfTxSigInfo(SignalId) - 1);
      /* #60 In case of NBYTE_SW, copy N source bytes from position I to destination bytes at position -I, if the CPU byte order is LOW_BYTE_FIRST */
      sint16_least i;
      /* ------------------------------- Intel (appl) to Motorola (bus) ---------------------------------------------- */
      for(i = 0; i < ((sint16_least) Com_Signal_GetTxBufferLength(SignalId)); i++)
      {
        SignalBusDestPtr[-i] = SignalApplSourcePtr[i];  /* SBSW_COM_TXBUFFER_CSL03 */
      }
      break;
    }
#  endif
#  if (COM_EXISTS_NBITNBYTE_BUSACCOFTXSIGINFO == STD_ON)
    case (COM_NBITNBYTE_BUSACCOFTXSIGINFO):    /* COV_COM_NBITNBYTE_X */
    {
      /* #70 In case of NBITNBYTE, copy N bits and N bytes from the source pointer to the destination pointer, if the CPU byte order is LOW_BYTE_FIRST */
      /* Pointer points to LSB of little endian signal, therefore start index is used */
      P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusDestPtr = Com_GetAddrTxBuffer(Com_GetTxBufferStartIdxOfTxSigInfo(SignalId));
      Com_Signal_WriteSignal_NBITNBYTE(SignalId, SignalApplSourcePtr, signalStartBit, SignalBusDestPtr, FALSE); /* SBSW_COM_VALID_PTR_BY_COMSTACK_01 */
      break;
    }
#  endif
#  if (COM_EXISTS_NBITNBYTE_SW_BUSACCOFTXSIGINFO == STD_ON)
    case (COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO):
    {
      /* #80 In case of NBITNBYTE_SW, copy N bits and N bytes from the source pointer to the destination pointer and perform endianness conversion, if the CPU byte order is LOW_BYTE_FIRST */
      /* Pointer points to LSB of big endian signal, therefore end index is used */
      P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusDestPtr = Com_GetAddrTxBuffer(Com_GetTxBufferEndIdxOfTxSigInfo(SignalId) - 1);
      Com_Signal_WriteSignal_NBITNBYTE(SignalId, SignalApplSourcePtr, signalStartBit, SignalBusDestPtr, TRUE);  /* SBSW_COM_VALID_PTR_BY_COMSTACK_01 */
      break;
    }
#  endif
# else /* (CPU_BYTE_ORDER == HIGH_BYTE_FIRST) */
#  if ((COM_EXISTS_NBYTE_BUSACCOFTXSIGINFO == STD_ON) || (COM_EXISTS_ARRAY_BASED_BUSACCOFTXSIGINFO == STD_ON))
#   if (COM_EXISTS_ARRAY_BASED_BUSACCOFTXSIGINFO == STD_ON)
    case (COM_ARRAY_BASED_BUSACCOFTXSIGINFO):
#   endif
#   if (COM_EXISTS_NBYTE_BUSACCOFTXSIGINFO == STD_ON)
    case (COM_NBYTE_BUSACCOFTXSIGINFO):
#   endif
    {
      sint16_least i;
      /* Pointer points to LSB of big endian signal, pointer points to last byte of actual txBuffer. */
      P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusDestPtr = Com_GetAddrTxBuffer((Com_GetTxBufferStartIdxOfTxSigInfo(SignalId) + Com_Signal_GetTxBufferLength(SignalId)) - 1);
      /* #90 In case of NBYTE, if the CPU byte order is HIGH_BYTE_FIRST */
    /* *INDENT-OFF* */
    /* ---------------------- Motorola (appl) to Motorola (bus) AND Byte Arrays (Motorola Hw)--------------------------
       - Writing Motorola Signals on Motorola Hw.
       - Writing Byte Arrays (no swap):
       - Writing Motorola Byte Arrays
       - Also allows writing of Intel Byte Arrays (StartBit is not lsb -> is msb in this case) */
    /* *INDENT-ON* */
      /* #100 If the ApplType is UINT8_N or UINT8_DYN set the source pointer to the last byte */
#   if (((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO == STD_ON)) || (COM_EXISTS_UINT8_N_APPLTYPEOFTXSIGINFO == STD_ON))        /* COV_COM_VAR_ELISA_STD_OFF_TF_xf_tf_tf */
      switch (Com_GetApplTypeOfTxSigInfo(SignalId))
      {
#    if (COM_EXISTS_UINT8_N_APPLTYPEOFTXSIGINFO == STD_ON)      /* COV_COM_VAR_FEAT_SUBSET_TX */
        case COM_UINT8_N_APPLTYPEOFTXSIGINFO:
#    endif
#    if ((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO == STD_ON))       /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
        case COM_UINT8_DYN_APPLTYPEOFTXSIGINFO:
#    endif
          SignalApplSourcePtr = &SignalApplSourcePtr[Com_Signal_GetTxBufferLength(SignalId) - 1];
          break;
        default:       /* COV_COM_MISRA */
          break;
      }
#   endif

      /* #120 Copy source to destination, if the CPU byte order is HIGH_BYTE_FIRST */
      for(i = 0; i < ((sint16_least) Com_Signal_GetTxBufferLength(SignalId)); i++)
      {
        SignalBusDestPtr[-i] = SignalApplSourcePtr[-i]; /* SBSW_COM_TXBUFFER_CSL03 */
      }
      break;
    }
#  endif
#  if (COM_EXISTS_NBYTE_SW_BUSACCOFTXSIGINFO == STD_ON)
    case (COM_NBYTE_SW_BUSACCOFTXSIGINFO):
    {
      /* ------------------------------- Motorola (appl) to Intel (bus)------------------------------------------------ */
      /* #130 In case of NBYTE_SW, Copy source -I to destination I, if the CPU byte order is HIGH_BYTE_FIRST */
      sint16_least i;
      P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusDestPtr = Com_GetAddrTxBuffer(Com_GetTxBufferStartIdxOfTxSigInfo(SignalId));
      /* ------------------------------- Motorola (appl) to Intel (bus) ---------------------------------------------- */
      for(i = 0; i < ((sint16_least) Com_Signal_GetTxBufferLength(SignalId)); i++)
      {
        SignalBusDestPtr[i] = SignalApplSourcePtr[-i];  /* SBSW_COM_TXBUFFER_CSL03 */
      }
      break;
    }
#  endif
#  if (COM_EXISTS_NBITNBYTE_BUSACCOFTXSIGINFO == STD_ON)
    case (COM_NBITNBYTE_BUSACCOFTXSIGINFO):
    {
      /* #140 In case of NBITNBYTE, copy N bits and N bytes from the source pointer to the destination pointer, if the CPU byte order is HIGH_BYTE_FIRST */
      P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusDestPtr = Com_GetAddrTxBuffer(Com_GetTxBufferEndIdxOfTxSigInfo(SignalId) - 1);
      Com_Signal_WriteSignal_NBITNBYTE(SignalId, SignalApplSourcePtr, signalStartBit, SignalBusDestPtr, TRUE);  /* SBSW_COM_VALID_PTR_BY_COMSTACK_01 */
      break;
    }
#  endif
#  if (COM_EXISTS_NBITNBYTE_SW_BUSACCOFTXSIGINFO == STD_ON)
    case (COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO):
    {
      /* #150 In case of NBITNBYTE_SW, copy N bits and N bytes from the source pointer to the destination pointer and perform endianness conversion, if the CPU byte order is HIGH_BYTE_FIRST */
      P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusDestPtr = Com_GetAddrTxBuffer(Com_GetTxBufferStartIdxOfTxSigInfo(SignalId));
      Com_Signal_WriteSignal_NBITNBYTE(SignalId, SignalApplSourcePtr, signalStartBit, SignalBusDestPtr, FALSE); /* SBSW_COM_VALID_PTR_BY_COMSTACK_01 */

      break;
    }
#  endif
# endif
    default:   /* COV_COM_MISRA */
      break;
  }
}
#endif

#if (COM_RXACCESSINFO == STD_ON)
/**********************************************************************************************************************
  Com_Signal_ReadSignal_<ApplType>
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 **********************************************************************************************************************/
# if ((COM_EXISTS_UINT8_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
/* see pattern  Com_Signal_ReadSignal_<ApplType> */
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_Signal_ReadSignal_UInt8(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr)
{
  uint8 tmpNewValue = 0;
  Com_Signal_ReadSignalApplTypeSpecific(idxRxAccessInfo, &tmpNewValue, SignalBusSourcePtr, 1);  /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */
  return tmpNewValue;
}
# endif

# if ((COM_EXISTS_SINT8_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
/* see pattern  Com_Signal_ReadSignal_<ApplType> */
LOCAL_INLINE FUNC(sint8, COM_CODE) Com_Signal_ReadSignal_SInt8(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr)
{
  uSignExt8BitType tmpNewValue; /* PRQA S 0759 */ /* MD_MSR_18.4 */
  tmpNewValue.signedAccess = 0;
  Com_Signal_ReadSignalApplTypeSpecific(idxRxAccessInfo, &(tmpNewValue.unsignedAccess), SignalBusSourcePtr, 1); /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */

#  if (COM_SIGNEXTREQUIREDOFRXACCESSINFO == STD_ON)
  if(Com_IsSignExtRequiredOfRxAccessInfo(idxRxAccessInfo))
  {
    Com_Signal_ReadSignalSignExtension_SINT8(idxRxAccessInfo, &tmpNewValue);    /* SBSW_COM_FCTCALL_STACKPTR */
  }
#  endif

  return tmpNewValue.signedAccess;
}
# endif

# if ((COM_EXISTS_UINT16_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
/* see pattern  Com_Signal_ReadSignal_<ApplType> */
LOCAL_INLINE FUNC(uint16, COM_CODE) Com_Signal_ReadSignal_UInt16(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr)
{
  uint16 tmpNewValue = 0;
  uint8 *startBytePtr = &((P2VAR(uint8, AUTOMATIC, COM_APPL_VAR)) (P2VAR(void, AUTOMATIC, COM_APPL_VAR)) & tmpNewValue)[0];
  Com_Signal_ReadSignalApplTypeSpecific(idxRxAccessInfo, startBytePtr, SignalBusSourcePtr, 2);  /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC_AND_STACKPTR */

  return tmpNewValue;
}
# endif

# if ((COM_EXISTS_SINT16_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
/* see pattern  Com_Signal_ReadSignal_<ApplType> */
LOCAL_INLINE FUNC(sint16, COM_CODE) Com_Signal_ReadSignal_SInt16(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr)
{
  uSignExt16BitType tmpNewValue;        /* PRQA S 0759 */ /* MD_MSR_18.4 */
  tmpNewValue.signedAccess = 0;
  Com_Signal_ReadSignalApplTypeSpecific(idxRxAccessInfo, &(tmpNewValue.unsignedAccess[0]), SignalBusSourcePtr, 2);      /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC_AND_STACKPTR */

#  if (COM_SIGNEXTREQUIREDOFRXACCESSINFO == STD_ON)
  if(Com_IsSignExtRequiredOfRxAccessInfo(idxRxAccessInfo))
  {
    Com_Signal_ReadSignalSignExtension_SINT16(idxRxAccessInfo, &tmpNewValue);   /* SBSW_COM_FCTCALL_STACKPTR */
  }
#  endif

  return tmpNewValue.signedAccess;
}
# endif

# if ((COM_EXISTS_UINT32_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
/* see pattern  Com_Signal_ReadSignal_<ApplType> */
LOCAL_INLINE FUNC(uint32, COM_CODE) Com_Signal_ReadSignal_UInt32(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr)
{
  uint32 tmpNewValue = 0;
  uint8 *startBytePtr = &((P2VAR(uint8, AUTOMATIC, COM_APPL_VAR)) (P2VAR(void, AUTOMATIC, COM_APPL_VAR)) & tmpNewValue)[0];
  Com_Signal_ReadSignalApplTypeSpecific(idxRxAccessInfo, startBytePtr, SignalBusSourcePtr, 4);  /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC_AND_STACKPTR */

  return tmpNewValue;
}
# endif

# if ((COM_EXISTS_SINT32_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
/* see pattern  Com_Signal_ReadSignal_<ApplType> */
LOCAL_INLINE FUNC(sint32, COM_CODE) Com_Signal_ReadSignal_SInt32(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr)
{
  uSignExt32BitType tmpNewValue;        /* PRQA S 0759 */ /* MD_MSR_18.4 */
  tmpNewValue.signedAccess = 0;

  Com_Signal_ReadSignalApplTypeSpecific(idxRxAccessInfo, &(tmpNewValue.unsignedAccess[0]), SignalBusSourcePtr, 4);      /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC_AND_STACKPTR */

#  if (COM_SIGNEXTREQUIREDOFRXACCESSINFO == STD_ON)
  if(Com_IsSignExtRequiredOfRxAccessInfo(idxRxAccessInfo))
  {
    Com_Signal_ReadSignalSignExtension_SINT32(idxRxAccessInfo, &tmpNewValue);   /* SBSW_COM_FCTCALL_STACKPTR */
  }
#  endif

  return tmpNewValue.signedAccess;
}
# endif
# if ((COM_EXISTS_UINT64_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
/* see pattern  Com_Signal_ReadSignal_<ApplType> */
LOCAL_INLINE FUNC(uint64, COM_CODE) Com_Signal_ReadSignal_UInt64(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr)
{
  uint64 tmpNewValue = 0;
  uint8 *startBytePtr = &((P2VAR(uint8, AUTOMATIC, COM_APPL_VAR)) (P2VAR(void, AUTOMATIC, COM_APPL_VAR)) & tmpNewValue)[0];
  Com_Signal_ReadSignalApplTypeSpecific(idxRxAccessInfo, startBytePtr, SignalBusSourcePtr, 8);  /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC_AND_STACKPTR */

  return tmpNewValue;
}
# endif

# if ((COM_EXISTS_SINT64_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
/* see pattern  Com_Signal_ReadSignal_<ApplType> */
LOCAL_INLINE FUNC(sint64, COM_CODE) Com_Signal_ReadSignal_SInt64(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr)
{
  uSignExt64BitType tmpNewValue;        /* PRQA S 0759 */ /* MD_MSR_18.4 */
  tmpNewValue.signedAccess = 0;

  Com_Signal_ReadSignalApplTypeSpecific(idxRxAccessInfo, &(tmpNewValue.unsignedAccess[0]), SignalBusSourcePtr, 8);      /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC_AND_STACKPTR */

#  if (COM_SIGNEXTREQUIREDOFRXACCESSINFO == STD_ON)
  if(Com_IsSignExtRequiredOfRxAccessInfo(idxRxAccessInfo))
  {
    Com_Signal_ReadSignalSignExtension_SINT64(idxRxAccessInfo, &tmpNewValue);   /* SBSW_COM_FCTCALL_STACKPTR */
  }
#  endif

  return tmpNewValue.signedAccess;
}
# endif

# if (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON)
/**********************************************************************************************************************
  Com_Signal_ReadSignalApplTypeSpecific
**********************************************************************************************************************/
/*! Internal comment removed.
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
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignalApplTypeSpecific(Com_RxAccessInfoIterType rxAccessInfoId,
                                                                        P2VAR(uint8, AUTOMATIC, COM_APPL_VAR) SignalApplDestPtr,
                                                                        P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr, uint32 destLength)
{
#  if ((COM_EXISTS_NBIT_BUSACCOFRXACCESSINFO == STD_ON) || (COM_EXISTS_NBITNBYTE_BUSACCOFRXACCESSINFO == STD_ON) || (COM_EXISTS_NBITNBYTE_SW_BUSACCOFRXACCESSINFO == STD_ON))
  Com_BitPositionOfRxAccessInfoType signalStartBit = Com_Signal_BitOffsetFromBitPos(Com_GetBitPositionOfRxAccessInfo(rxAccessInfoId));
#  endif
#  if (CPU_BYTE_ORDER == HIGH_BYTE_FIRST)
  SignalApplDestPtr = &SignalApplDestPtr[destLength - 1];
#  endif
  switch (Com_GetBusAccOfRxAccessInfo(rxAccessInfoId))
  {
#  if (COM_EXISTS_NBIT_BUSACCOFRXACCESSINFO == STD_ON)
    case (COM_NBIT_BUSACCOFRXACCESSINFO):
    {
      *SignalApplDestPtr = COM_CAST2UINT8((*SignalBusSourcePtr) >> signalStartBit) & COM_CAST2UINT8(255U >> (8 - Com_GetBitLengthOfRxAccessInfo(rxAccessInfoId)));      /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
      break;
    }
#  endif
#  if (COM_EXISTS_BYTE_BUSACCOFRXACCESSINFO == STD_ON)
    case (COM_BYTE_BUSACCOFRXACCESSINFO):
    {
      *SignalApplDestPtr = COM_CAST2UINT8(*SignalBusSourcePtr); /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
      break;
    }
#  endif
#  if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
#   if (COM_EXISTS_NBYTE_BUSACCOFRXACCESSINFO == STD_ON)
    case (COM_NBYTE_BUSACCOFRXACCESSINFO):
    {
      VStdLib_MemCpy_s(SignalApplDestPtr, (VStdLib_CntType) destLength, SignalBusSourcePtr, (VStdLib_CntType) Com_GetByteLengthOfRxAccessInfo(rxAccessInfoId)); /* SBSW_COM_VSTDLIB_SAFE */
      break;
    }
#   endif
#   if (COM_EXISTS_NBYTE_SW_BUSACCOFRXACCESSINFO == STD_ON)
    case (COM_NBYTE_SW_BUSACCOFRXACCESSINFO):
    {
      if(Com_GetByteLengthOfRxAccessInfo(rxAccessInfoId) <= destLength) /* COV_COM_SILENT_TX */
      {
        sint16_least i;
        /* ------------------------------- Motorola (bus) to Intel (appl) -------------------------------------------- */
        for(i = (sint16_least) (Com_GetByteLengthOfRxAccessInfo(rxAccessInfoId) - 1); i >= 0; i--)
        {
          SignalApplDestPtr[i] = COM_CAST2UINT8(SignalBusSourcePtr[-i]);        /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
        }
      }
      break;
    }
#   endif
#   if (COM_EXISTS_NBITNBYTE_BUSACCOFRXACCESSINFO == STD_ON)
    case (COM_NBITNBYTE_BUSACCOFRXACCESSINFO):
    {
      Com_Signal_ReadSignal_LB_NBITNBYTE(rxAccessInfoId, SignalApplDestPtr, SignalBusSourcePtr, signalStartBit, destLength);    /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC_AND_STACKPTR */
      break;
    }
#   endif
#   if (COM_EXISTS_NBITNBYTE_SW_BUSACCOFRXACCESSINFO == STD_ON)
    case (COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO):
    {
      Com_Signal_ReadSignal_LB_SW_NBITNBYTE(rxAccessInfoId, SignalApplDestPtr, SignalBusSourcePtr, signalStartBit, destLength); /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC_AND_STACKPTR */
      break;
    }
#   endif
#  else/* (CPU_BYTE_ORDER == HIGH_BYTE_FIRST) */
#   if (COM_EXISTS_NBYTE_BUSACCOFRXACCESSINFO == STD_ON)
    case (COM_NBYTE_BUSACCOFRXACCESSINFO):
    {
      if(Com_GetByteLengthOfRxAccessInfo(rxAccessInfoId) <= destLength) /* COV_COM_SILENT_TX */
      {
        sint16_least i;
        /* ------------------------------- Motorola (bus) to Motorola (appl) -------------------------------------------- */
        for(i = (sint16_least) (Com_GetByteLengthOfRxAccessInfo(rxAccessInfoId) - 1); i >= 0; i--)
        {
          SignalApplDestPtr[-i] = SignalBusSourcePtr[-i];       /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
        }
      }
      break;
    }
#   endif
#   if (COM_EXISTS_NBYTE_SW_BUSACCOFRXACCESSINFO == STD_ON)
    case (COM_NBYTE_SW_BUSACCOFRXACCESSINFO):
    {
      if(Com_GetByteLengthOfRxAccessInfo(rxAccessInfoId) <= destLength) /* COV_COM_SILENT_TX */
      {
        sint16_least i;
        /* ------------------------------- Intel(bus) to Motorola (appl) -------------------------------------------- */
        for(i = (sint16_least) (Com_GetByteLengthOfRxAccessInfo(rxAccessInfoId) - 1); i >= 0; i--)
        {
          SignalApplDestPtr[-i] = SignalBusSourcePtr[i];        /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
        }
      }
      break;
    }
#   endif
#   if (COM_EXISTS_NBITNBYTE_BUSACCOFRXACCESSINFO == STD_ON)
    case (COM_NBITNBYTE_BUSACCOFRXACCESSINFO):
    {
      Com_Signal_ReadSignal_HB_NBITNBYTE(rxAccessInfoId, SignalApplDestPtr, SignalBusSourcePtr, signalStartBit, destLength);    /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC_AND_STACKPTR */
      break;
    }
#   endif
#   if (COM_EXISTS_NBITNBYTE_SW_BUSACCOFRXACCESSINFO == STD_ON)
    case (COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO):
    {
      Com_Signal_ReadSignal_HB_SW_NBITNBYTE(rxAccessInfoId, SignalApplDestPtr, SignalBusSourcePtr, signalStartBit, destLength); /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC_AND_STACKPTR */
      break;
    }
#   endif
#  endif
    default:   /* COV_COM_MISRA */
      break;
  }
  COM_DUMMY_STATEMENT(destLength);      /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
# endif

# if ((COM_SIGNEXTREQUIREDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT8_APPLTYPEOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
 Com_Signal_ReadSignalSignExtension_SINT8
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignalSignExtension_SINT8(Com_RxAccessInfoIterType idxAccessInfo, P2VAR(uSignExt8BitType, AUTOMATIC, COM_APPL_VAR) signExtValue)
{
  uint8 signMask, msbMask;
  Com_BitLengthOfRxAccessInfoType tmp = Com_GetBitLengthOfRxAccessInfo(idxAccessInfo) - 1;
  uint8 signBitPos = Com_Signal_BitOffsetFromBitPos(tmp);

  signMask = COM_CAST2UINT8(1U << signBitPos);
  msbMask = COM_CAST2UINT8(255U << signBitPos);

  /* #10 if required, perform sign extension */
  if(0 != (signMask & signExtValue->unsignedAccess))
  {     /* negative value */
    signExtValue->unsignedAccess |= msbMask;    /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
  }
}
# endif

# if ((COM_SIGNEXTREQUIREDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT16_APPLTYPEOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
 Com_Signal_ReadSignalSignExtension_SINT16
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignalSignExtension_SINT16(Com_RxAccessInfoIterType idxAccessInfo, P2VAR(uSignExt16BitType, AUTOMATIC, COM_APPL_VAR) signExtValue)     /* PRQA S 3673 */ /* MD_Com_3673 */
{
  uint8 signMask, msbMask;
  Com_BitLengthOfRxAccessInfoType tmp = Com_GetBitLengthOfRxAccessInfo(idxAccessInfo) - 1;
  Com_BitLengthOfRxAccessInfoType signMSBOffset = tmp >> 3;
  uint8 signBitPos = Com_Signal_BitOffsetFromBitPos(tmp);
  uint8 *destPtr;
#  if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
  destPtr = &(signExtValue->unsignedAccess[0]);
#  endif
#  if (CPU_BYTE_ORDER == HIGH_BYTE_FIRST)
  destPtr = &(signExtValue->unsignedAccess[1]);
#  endif

  signMask = COM_CAST2UINT8(1U << signBitPos);
  msbMask = COM_CAST2UINT8(255U << signBitPos);
  /* #10 if required, perform sign extension */
#  if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
  /* Implementation for Intel Plattforms */
  if(0 != (signMask & destPtr[signMSBOffset]))
  {     /* negative value */
    if(0 == signMSBOffset)      /* COV_COM_SIGNMSBOFFSET */
    {   /* signal smaller or equal 8 bit */
      *destPtr |= msbMask;      /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
      destPtr[1] = 255U;        /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
    }
    else
    {
      destPtr[1] |= msbMask;    /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
    }
  }
#  else  /* (CPU_BYTE_ORDER == HIGH_BYTE_FIRST) */
  if(0 != (signMask & destPtr[0 - signMSBOffset]))
  {     /* negative value */
    destPtr[0 - signMSBOffset] |= msbMask;      /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
    if(0 == signMSBOffset)      /* COV_COM_SIGNMSBOFFSET */
    {   /* signal smaller or equal 8 bit */
      destPtr[-1] = 255U;       /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
    }
  }
#  endif
}
# endif

# if ((COM_SIGNEXTREQUIREDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT32_APPLTYPEOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
 Com_Signal_ReadSignalSignExtension_SINT32
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignalSignExtension_SINT32(Com_RxAccessInfoIterType idxAccessInfo, P2VAR(uSignExt32BitType, AUTOMATIC, COM_APPL_VAR) signExtValue)     /* PRQA S 3673 */ /* MD_Com_3673 */
{
  uint8 signMask, msbMask;
  Com_BitLengthOfRxAccessInfoType tmp = Com_GetBitLengthOfRxAccessInfo(idxAccessInfo) - 1;
  Com_BitLengthOfRxAccessInfoType signMSBOffset = tmp >> 3;
  uint8 signBitPos = Com_Signal_BitOffsetFromBitPos(tmp);
  uint8 *destPtr;
#  if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
  destPtr = &(signExtValue->unsignedAccess[0]);
#  endif
#  if (CPU_BYTE_ORDER == HIGH_BYTE_FIRST)
  destPtr = &(signExtValue->unsignedAccess[3]);
#  endif

  signMask = COM_CAST2UINT8(1U << signBitPos);
  msbMask = COM_CAST2UINT8(255U << signBitPos);

  /* #10 if required, perform sign extension */
#  if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
  /* Implementation for Intel Plattforms */
  {
    sint16_least i;
    if(0 != (signMask & destPtr[signMSBOffset]))
    {   /* negative value */
      destPtr[signMSBOffset] |= msbMask;        /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
      for(i = (sint16_least) (signMSBOffset + 1); i < 4; i++)
      {
        destPtr[i] = 255U;      /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
      }
    }
  }
#  else/* (CPU_BYTE_ORDER == HIGH_BYTE_FIRST) */
  {
    sint16_least i;
    if(0 != (signMask & destPtr[0 - signMSBOffset]))
    {   /* negative value */
      destPtr[0 - signMSBOffset] |= msbMask;    /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
      for(i = (sint16_least) (signMSBOffset + 1); i < 4; i++)
      {
        destPtr[-i] = 255U;     /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
      }
    }
  }
#  endif
}
# endif

# if ((COM_SIGNEXTREQUIREDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT64_APPLTYPEOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
 Com_Signal_ReadSignalSignExtension_SINT64
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignalSignExtension_SINT64(Com_RxAccessInfoIterType idxAccessInfo, P2VAR(uSignExt64BitType, AUTOMATIC, COM_APPL_VAR) signExtValue)     /* PRQA S 3673 */ /* MD_Com_3673 */
{
  uint8 signMask, msbMask;
  Com_BitLengthOfRxAccessInfoType tmp = Com_GetBitLengthOfRxAccessInfo(idxAccessInfo) - 1;
  Com_BitLengthOfRxAccessInfoType signMSBOffset = tmp >> 3;
  uint8 signBitPos = Com_Signal_BitOffsetFromBitPos(tmp);
  uint8 *destPtr;
#  if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
  destPtr = &(signExtValue->unsignedAccess[0]);
#  endif
#  if (CPU_BYTE_ORDER == HIGH_BYTE_FIRST)
  destPtr = &(signExtValue->unsignedAccess[7]);
#  endif

  signMask = COM_CAST2UINT8(1U << signBitPos);
  msbMask = COM_CAST2UINT8(255U << signBitPos);

  /* #10 if required, perform sign extension */
#  if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
  /* Implementation for Intel Plattforms */
  {
    sint16_least i;
    if(0 != (signMask & destPtr[signMSBOffset]))
    {   /* negative value */
      destPtr[signMSBOffset] |= msbMask;        /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
      for(i = (sint16_least) (signMSBOffset + 1); i < 8; i++)
      {
        destPtr[i] = 255U;      /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
      }
    }
  }
#  else/* (CPU_BYTE_ORDER == HIGH_BYTE_FIRST) */
  {
    sint16_least i;
    if(0 != (signMask & destPtr[0 - signMSBOffset]))
    {   /* negative value */
      destPtr[0 - signMSBOffset] |= msbMask;    /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
      for(i = (sint16_least) (signMSBOffset + 1); i < 8; i++)
      {
        destPtr[-i] = 255U;     /* SBSW_COM_WRITEACCESS_STACKPTR_01 */
      }
    }
  }
#  endif
}
# endif

# if ((COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_ReadGroupSignalFromShadowBuffer
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_ReadGroupSignalFromShadowBuffer(Com_RxAccessInfoIterType idxRxAccessInfo)
{
  /* #10 Copy the shadow buffer to the ComGroupSignal buffer, the destination buffer depends on the ComGroupSignal ApplType */
#  if (COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsBufferUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
    {
#   if ((COM_TMPRXSHDBUFFERUINT8 == STD_ON) && (COM_EXISTS_UINT8_APPLTYPEOFRXACCESSINFO == STD_ON))
      case COM_UINT8_APPLTYPEOFRXACCESSINFO:
      {
        Com_SetRxSigBufferUInt8(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetRxSigBufferUInt8(Com_GetShdBufferIdxOfRxAccessInfo(idxRxAccessInfo)));  /* SBSW_COM_CSL03 */
        break;
      }
#   endif
#   if (COM_TMPRXSHDBUFFERSINT8 == STD_ON)
      case COM_SINT8_APPLTYPEOFRXACCESSINFO:
      {
        Com_SetRxSigBufferSInt8(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetRxSigBufferSInt8(Com_GetShdBufferIdxOfRxAccessInfo(idxRxAccessInfo)));  /* SBSW_COM_CSL03 */
        break;
      }
#   endif
#   if (COM_TMPRXSHDBUFFERUINT16 == STD_ON)
      case COM_UINT16_APPLTYPEOFRXACCESSINFO:
      {
        Com_SetRxSigBufferUInt16(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetRxSigBufferUInt16(Com_GetShdBufferIdxOfRxAccessInfo(idxRxAccessInfo)));        /* SBSW_COM_CSL03 */
        break;
      }
#   endif
#   if (COM_TMPRXSHDBUFFERSINT16 == STD_ON)
      case COM_SINT16_APPLTYPEOFRXACCESSINFO:
      {
        Com_SetRxSigBufferSInt16(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetRxSigBufferSInt16(Com_GetShdBufferIdxOfRxAccessInfo(idxRxAccessInfo)));        /* SBSW_COM_CSL03 */
        break;
      }
#   endif
#   if (COM_TMPRXSHDBUFFERUINT32 == STD_ON)
      case COM_UINT32_APPLTYPEOFRXACCESSINFO:
      {
        Com_SetRxSigBufferUInt32(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetRxSigBufferUInt32(Com_GetShdBufferIdxOfRxAccessInfo(idxRxAccessInfo)));        /* SBSW_COM_CSL03 */
        break;
      }
#   endif
#   if (COM_TMPRXSHDBUFFERSINT32 == STD_ON)
      case COM_SINT32_APPLTYPEOFRXACCESSINFO:
      {
        Com_SetRxSigBufferSInt32(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetRxSigBufferSInt32(Com_GetShdBufferIdxOfRxAccessInfo(idxRxAccessInfo)));        /* SBSW_COM_CSL03 */
        break;
      }
#   endif
#   if (COM_TMPRXSHDBUFFERUINT64 == STD_ON)
      case COM_UINT64_APPLTYPEOFRXACCESSINFO:
      {
        Com_SetRxSigBufferUInt64(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetRxSigBufferUInt64(Com_GetShdBufferIdxOfRxAccessInfo(idxRxAccessInfo)));        /* SBSW_COM_CSL03 */
        break;
      }
#   endif
#   if (COM_TMPRXSHDBUFFERSINT64 == STD_ON)
      case COM_SINT64_APPLTYPEOFRXACCESSINFO:
      {
        Com_SetRxSigBufferSInt64(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetRxSigBufferSInt64(Com_GetShdBufferIdxOfRxAccessInfo(idxRxAccessInfo)));        /* SBSW_COM_CSL03 */
        break;
      }
#   endif
      default: /* COV_COM_MISRA */
        break;
    }
  }
#  endif
#  if (COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsRxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
    {
#   if (COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON)    /* COV_COM_VAR_FEAT_SUBSET_TX */
      case COM_UINT8_N_APPLTYPEOFRXACCESSINFO:
      {
        VStdMemCpyRamToRam(Com_GetAddrRxSigBufferArrayBased(Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(idxRxAccessInfo)), Com_GetAddrRxSigBufferArrayBased(Com_GetRxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo(idxRxAccessInfo)), Com_GetRxSigBufferArrayBasedBufferLengthOfRxAccessInfo(idxRxAccessInfo));       /* SBSW_COM_CSL03 */
        break;
      }
#   endif
#   if ((COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO == STD_ON))     /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
      case COM_UINT8_DYN_APPLTYPEOFRXACCESSINFO:
      {
        Com_RxTpInfoIdxOfRxPduInfoType rxTpPduInfoIdx = Com_GetRxTpInfoIdxOfRxPduInfo(Com_GetRxPduInfoIdxOfRxAccessInfo(idxRxAccessInfo));
        Com_SetRxDynSignalLength(rxTpPduInfoIdx, Com_GetRxDynSignalTmpLengthForSignalGroups(rxTpPduInfoIdx));
        VStdMemCpyRamToRam(Com_GetAddrRxSigBufferArrayBased(Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(idxRxAccessInfo)),
                           Com_GetAddrRxSigBufferArrayBased(Com_GetRxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo(idxRxAccessInfo)), Com_GetRxDynSignalTmpLengthForSignalGroups(rxTpPduInfoIdx));
        break;
      }
#   endif

      default: /* COV_COM_MISRA */
        break;
    }
  }
#  endif
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
# endif

# if (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON)
/**********************************************************************************************************************
  Com_Signal_SetRxSigBufferValue
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_SetRxSigBufferValue(Com_RxAccessInfoIterType idxRxAccessInfo, uint32_least idxDestValue, uint32_least idxSrcValue)
{
  /* #10 Copy the constant value at the position of the passed source index to the passed destination index, the source and destination buffer depends on the ApplType of the passed signal */
  switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
  {
#  if ((COM_RXSIGBUFFERUINT8 == STD_ON) && (COM_EXISTS_UINT8_APPLTYPEOFRXACCESSINFO == STD_ON))
    case COM_UINT8_APPLTYPEOFRXACCESSINFO:
    {
      Com_SetRxSigBufferUInt8(idxDestValue, Com_GetConstValueUInt8(idxSrcValue));       /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
      break;
    }
#  endif
#  if (COM_RXSIGBUFFERSINT8 == STD_ON)
    case COM_SINT8_APPLTYPEOFRXACCESSINFO:

    {
      Com_SetRxSigBufferSInt8(idxDestValue, Com_GetConstValueSInt8(idxSrcValue));       /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
      break;
    }
#  endif
#  if (COM_RXSIGBUFFERUINT16 == STD_ON)
    case COM_UINT16_APPLTYPEOFRXACCESSINFO:
    {
      Com_SetRxSigBufferUInt16(idxDestValue, Com_GetConstValueUInt16(idxSrcValue));     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
      break;
    }
#  endif
#  if (COM_RXSIGBUFFERSINT16 == STD_ON)
    case COM_SINT16_APPLTYPEOFRXACCESSINFO:
    {
      Com_SetRxSigBufferSInt16(idxDestValue, Com_GetConstValueSInt16(idxSrcValue));     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
      break;
    }
#  endif
#  if (COM_RXSIGBUFFERUINT32 == STD_ON)
    case COM_UINT32_APPLTYPEOFRXACCESSINFO:
    {
      Com_SetRxSigBufferUInt32(idxDestValue, Com_GetConstValueUInt32(idxSrcValue));     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
      break;
    }
#  endif
#  if (COM_RXSIGBUFFERSINT32 == STD_ON)
    case COM_SINT32_APPLTYPEOFRXACCESSINFO:
    {
      Com_SetRxSigBufferSInt32(idxDestValue, Com_GetConstValueSInt32(idxSrcValue));     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
      break;
    }
#  endif
#  if (COM_RXSIGBUFFERUINT64 == STD_ON)
    case COM_UINT64_APPLTYPEOFRXACCESSINFO:
    {
      Com_SetRxSigBufferUInt64(idxDestValue, Com_GetConstValueUInt64(idxSrcValue));     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
      break;
    }
#  endif
#  if (COM_RXSIGBUFFERSINT64 == STD_ON)
    case COM_SINT64_APPLTYPEOFRXACCESSINFO:
    {
      Com_SetRxSigBufferSInt64(idxDestValue, Com_GetConstValueSInt64(idxSrcValue));     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
      break;
    }
#  endif
    default:   /* COV_COM_MISRA */
      break;
  }
  COM_DUMMY_STATEMENT(idxDestValue);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
# endif

# if(COM_RXSIGBUFFERARRAYBASED == STD_ON)
/**********************************************************************************************************************
  Com_Signal_SetRxSigBufferArrayBasedValue
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_SetRxSigBufferArrayBasedValue(Com_RxAccessInfoIterType idxRxAccessInfo, Com_RxSigBufferArrayBasedIterType idxDestValue,
                                                                           Com_ConstValueArrayBasedIterType idxSrcValue, PduLengthType length)
{
  /* #10 Copy the constant value at the position of the passed source index to the passed destination index, the source and destination buffer depends on the ApplType of the passed signal */
  switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
  {
#  if ((COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO == STD_ON))      /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
    case COM_UINT8_DYN_APPLTYPEOFRXACCESSINFO:
    {
      Com_RxTpInfoIdxOfRxPduInfoType rxTpPduInfoIdx = Com_GetRxTpInfoIdxOfRxPduInfo(Com_GetRxPduInfoIdxOfRxAccessInfo(idxRxAccessInfo));
      Com_SetRxDynSignalLength(rxTpPduInfoIdx, length);
#   if (COM_RXDYNSIGNALTMPLENGTHFORSIGNALGROUPS == STD_ON)
      Com_SetRxDynSignalTmpLengthForSignalGroups(rxTpPduInfoIdx, length);
#   endif
      VStdMemCpyRomToRam(Com_GetAddrRxSigBufferArrayBased(idxDestValue), Com_GetAddrConstValueArrayBased(idxSrcValue), length); /* SBSW_COM_WRITEACCESS_LENGTH */
      break;
    }
#  endif
#  if ((COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON))   /* COV_COM_VAR_FEAT_SUBSET_TX */
    case COM_UINT8_N_APPLTYPEOFRXACCESSINFO:
    {
      VStdMemCpyRomToRam(Com_GetAddrRxSigBufferArrayBased(idxDestValue), Com_GetAddrConstValueArrayBased(idxSrcValue), length); /* SBSW_COM_WRITEACCESS_LENGTH */
      break;
    }
#  endif
    default:   /* COV_COM_MISRA */
      break;
  }
  COM_DUMMY_STATEMENT(idxDestValue);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
# endif

#endif

#if ((COM_RXACCESSINFO == STD_ON)&& (CPU_BYTE_ORDER == LOW_BYTE_FIRST) &&(COM_EXISTS_NBITNBYTE_BUSACCOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_Signal_ReadSignal_LB_NBITNBYTE
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignal_LB_NBITNBYTE(Com_RxAccessInfoIterType SignalId, P2VAR(uint8, AUTOMATIC, COM_APPL_VAR) SignalApplDestPtr,
                                                                     P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr, Com_BitPositionOfRxAccessInfoType signalStartBit, uint32 destLength)
{
  /* #5 This function is used if the CPU byte order is LOW_BYTE_FIRST */
  uint16_least nFullBytes = 0;
  Com_BitLengthOfRxAccessInfoType nBitsToWrite;
  /* ------------------------------- Intel (bus) to Intel (appl) ----------------------------------------------- */
  nBitsToWrite = Com_GetBitLengthOfRxAccessInfo(SignalId);
  /* #10 If more than 8 bits have to be copied */
  if(Com_GetBitLengthOfRxAccessInfo(SignalId) > 8)      /* COV_COM_NBITNBYTE */
  {
    sint16_least i;
    nFullBytes = (uint16_least) (nBitsToWrite >> 3);
    if(((uint32) nFullBytes) <= destLength)     /* COV_COM_SILENT_TX */
    {
      /* #20 Copy all full bytes, byte align the source byte before it is copied */
      for(i = (sint16_least) (nFullBytes - 1); i >= 0; i--)
      {
        SignalApplDestPtr[i] = COM_CAST2UINT8(SignalBusSourcePtr[i] >> signalStartBit); /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
        SignalApplDestPtr[i] |= COM_CAST2UINT8(SignalBusSourcePtr[i + 1] << (8 - signalStartBit));      /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
        nBitsToWrite -= 8;
      }
    }
    else
    {
      nFullBytes = 0;
    }
  }

  /* At this point less than 8bits have to be written - eventually none. In this case unassigned memory might be accessed. Write the remaining data to the last byte in application RAM. Data might come from two message bytes */
  /* #30 If the signal not only has full bytes, copy the remaining bits to the destination buffer */
  if(0 != nBitsToWrite) /* COV_COM_NBITNBYTE_COPY_REMAININGBITS */
  {
    uint8 tmpByte;
    tmpByte = COM_CAST2UINT8(SignalBusSourcePtr[nFullBytes] >> signalStartBit);
    tmpByte |= COM_CAST2UINT8(SignalBusSourcePtr[nFullBytes + 1] << (8 - signalStartBit));

    SignalApplDestPtr[nFullBytes] = tmpByte & COM_CAST2UINT8(~(COM_CAST2UINT8(255U << nBitsToWrite)));  /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
  }
}
#endif

#if ((COM_RXACCESSINFO == STD_ON)&& (CPU_BYTE_ORDER == LOW_BYTE_FIRST) &&(COM_EXISTS_NBITNBYTE_SW_BUSACCOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_Signal_ReadSignal_LB_SW_NBITNBYTE
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignal_LB_SW_NBITNBYTE(Com_RxAccessInfoIterType SignalId, P2VAR(uint8, AUTOMATIC, COM_APPL_VAR) SignalApplDestPtr,
                                                                        P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr,
                                                                        Com_BitPositionOfRxAccessInfoType signalStartBit, uint32 destLength)
{
  /* #5 This function is used if the CPU byte order is LOW_BYTE_FIRST */
  sint16_least nFullBytes = 0;
  Com_BitLengthOfRxAccessInfoType nBitsToWrite;

  /* ------------------------------- Motorola (bus) to Intel (appl) -------------------------------------------- */
  nBitsToWrite = Com_GetBitLengthOfRxAccessInfo(SignalId);
  /* #10 If more than 8 bits have to be copied */
  if(Com_GetBitLengthOfRxAccessInfo(SignalId) > 8)      /* COV_COM_NBITNBYTE */
  {
    sint16_least i;
    nFullBytes = (sint16_least) (nBitsToWrite >> 3);
    if(((uint32) nFullBytes) <= destLength)     /* COV_COM_SILENT_TX */
    {
      for(i = (sint16_least) (nFullBytes - 1); i >= 0; i--)
      {
        /* #20 Copy all full bytes, byte align the source byte before it is copied and perform endianess conversion */
        SignalApplDestPtr[i] = COM_CAST2UINT8(SignalBusSourcePtr[-i] >> signalStartBit);        /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
        SignalApplDestPtr[i] |= COM_CAST2UINT8(SignalBusSourcePtr[-i - 1] << (8 - signalStartBit));     /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
        nBitsToWrite -= 8;
      }
    }
    else
    {
      nFullBytes = 0;
    }
  }

  /* At this point less than 8bits have to be written - eventually none. In this case unassigned memory might be accessed. Write the remaining data to the last byte in application RAM. Data might come from two message bytes */
  /* #30 If the signal not only has full bytes, copy the remaining bits to the destination buffer and perform endianess conversion */
  if(0 != nBitsToWrite) /* COV_COM_NBITNBYTE_COPY_REMAININGBITS */
  {
    uint8 tmpByte;
    tmpByte = COM_CAST2UINT8(SignalBusSourcePtr[0 - nFullBytes] >> signalStartBit);
    tmpByte |= COM_CAST2UINT8(SignalBusSourcePtr[-1 - nFullBytes] << (8 - signalStartBit));

    SignalApplDestPtr[nFullBytes] = tmpByte & COM_CAST2UINT8(~(COM_CAST2UINT8(255U << nBitsToWrite)));  /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
  }
}
#endif

#if ((COM_RXACCESSINFO == STD_ON)&& (CPU_BYTE_ORDER == HIGH_BYTE_FIRST) &&(COM_EXISTS_NBITNBYTE_BUSACCOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_Signal_ReadSignal_HB_NBITNBYTE
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignal_HB_NBITNBYTE(Com_RxAccessInfoIterType rxAccessInfoId, P2VAR(uint8, AUTOMATIC, COM_APPL_VAR) SignalApplDestPtr,
                                                                     P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr, Com_BitPositionOfRxAccessInfoType signalStartBit, uint32 destLength)
{
  /* #5 This function is used if the CPU byte order is HIGH_BYTE_FIRST */
  sint16_least nFullBytes = 0;
  Com_BitLengthOfRxAccessInfoType nBitsToWrite;
  /* ------------------------------- Motorola (bus) to Motorola (appl) ----------------------------------------- */
  nBitsToWrite = Com_GetBitLengthOfRxAccessInfo(rxAccessInfoId);
  /* #10 If more than 8 bits have to be copied */
  if(Com_GetBitLengthOfRxAccessInfo(rxAccessInfoId) > 8)        /* COV_COM_NBITNBYTE */
  {
    sint16_least i;
    nFullBytes = (sint16_least) (nBitsToWrite >> 3);
    if(((uint32) nFullBytes) <= destLength)     /* COV_COM_NBITNBYTE_TX_01 */
    {
      for(i = (sint16_least) (nFullBytes - 1); i >= 0; i--)     /* COV_COM_NBITNBYTE_XX */
      {
        /* #20 Copy all full bytes, byte align the source byte before it is copied */
        SignalApplDestPtr[-i] = COM_CAST2UINT8(SignalBusSourcePtr[-i] >> signalStartBit);       /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
        SignalApplDestPtr[-i] |= COM_CAST2UINT8(SignalBusSourcePtr[-i - 1] << (8 - signalStartBit));    /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
        nBitsToWrite -= 8;
      }
    }
    else
    {
      nFullBytes = 0;
    }
  }

  /* At this point less than 8bits have to be written - eventually none. In this case unassigned memory might be accessed. Write the remaining data to the last byte in application RAM. Data might come from two message bytes */
  /* #30 If the signal not only has full bytes, copy the remaining bits to the destination buffer */
  if(0 != nBitsToWrite) /* COV_COM_NBITNBYTE_COPY_REMAININGBITS */
  {
    uint8 tmpByte;
    tmpByte = COM_CAST2UINT8(SignalBusSourcePtr[0 - nFullBytes] >> signalStartBit);
    tmpByte |= COM_CAST2UINT8(SignalBusSourcePtr[-1 - nFullBytes] << (8 - signalStartBit));
    SignalApplDestPtr[0 - nFullBytes] = tmpByte & COM_CAST2UINT8(~(COM_CAST2UINT8(255U << nBitsToWrite)));      /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
  }
}
#endif

#if ((COM_RXACCESSINFO == STD_ON)&& (CPU_BYTE_ORDER == HIGH_BYTE_FIRST) &&(COM_EXISTS_NBITNBYTE_SW_BUSACCOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_Signal_ReadSignal_HB_SW_NBITNBYTE
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_ReadSignal_HB_SW_NBITNBYTE(Com_RxAccessInfoIterType rxAccessInfoId, P2VAR(uint8, AUTOMATIC, COM_APPL_VAR) SignalApplDestPtr,
                                                                        P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr, Com_BitPositionOfRxAccessInfoType signalStartBit,
                                                                        uint32 destLength)
{
  /* #5 This function is used if the CPU byte order is HIGH_BYTE_FIRST */
  sint16_least nFullBytes = 0;
  Com_BitLengthOfRxAccessInfoType nBitsToWrite;
  /* ------------------------------- Intel (bus) to Motorola (appl) -------------------------------------------- */
  nBitsToWrite = Com_GetBitLengthOfRxAccessInfo(rxAccessInfoId);
  /* #10 If more than 8 bits have to be copied */
  if(Com_GetBitLengthOfRxAccessInfo(rxAccessInfoId) > 8)        /* COV_COM_NBITNBYTE */
  {
    sint16_least i;
    nFullBytes = (sint16_least) (nBitsToWrite >> 3);
    if(((uint32) nFullBytes) <= destLength)     /* COV_COM_NBITNBYTE_TX_01 */
    {
      for(i = (sint16_least) (nFullBytes - 1); i >= 0; i--)     /* COV_COM_NBITNBYTE_XX */
      {
        /* #20 Copy all full bytes, byte align the source byte before it is copied and perform endianess conversion */
        SignalApplDestPtr[-i] = COM_CAST2UINT8(SignalBusSourcePtr[i] >> signalStartBit);        /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
        SignalApplDestPtr[-i] |= COM_CAST2UINT8(SignalBusSourcePtr[i + 1] << (8 - signalStartBit));     /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
        nBitsToWrite -= 8;
      }
    }
    else
    {
      nFullBytes = 0;
    }
  }

  /* At this point less than 8bits have to be written - eventually none. In this case unassigned memory might be accessed. Write the remaining data to the last byte in application RAM. Data might come from two message bytes */
  /* #30 If the signal not only has full bytes, copy the remaining bits to the destination buffer and perform endianess conversion */
  if(0 != nBitsToWrite) /* COV_COM_NBITNBYTE_COPY_REMAININGBITS */
  {
    uint8 tmpByte;
    tmpByte = COM_CAST2UINT8(SignalBusSourcePtr[nFullBytes] >> signalStartBit);
    tmpByte |= COM_CAST2UINT8(SignalBusSourcePtr[nFullBytes + 1] << (8 - signalStartBit));
    SignalApplDestPtr[0 - nFullBytes] = tmpByte & COM_CAST2UINT8(~(COM_CAST2UINT8(255U << nBitsToWrite)));      /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
  }
}
#endif

#if ((COM_TXBUFFERUSEDOFTXSIGINFO == STD_ON)  && ((COM_EXISTS_NBYTE_BUSACCOFTXSIGINFO == STD_ON) || (COM_EXISTS_NBYTE_SW_BUSACCOFTXSIGINFO == STD_ON) || (COM_EXISTS_ARRAY_BASED_BUSACCOFTXSIGINFO == STD_ON)))
/**********************************************************************************************************************
  Com_Signal_GetTxBufferLength
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_TxBufferLengthOfTxSigInfoType, COM_CODE) Com_Signal_GetTxBufferLength(Com_SignalIdType SignalId)
{
  Com_TxBufferLengthOfTxSigInfoType txBufferLength;
# if ((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO == STD_ON))  /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
  /* #10 If the passed signal is a dynamic length signal return the current dynamic byte length */
  if(Com_GetApplTypeOfTxSigInfo(SignalId) == COM_UINT8_DYN_APPLTYPEOFTXSIGINFO)
  {
    Com_TxTpInfoIdxOfTxPduInfoType txTpPduInfoIdx = Com_GetTxTpInfoIdxOfTxPduInfo(Com_GetTxPduInfoIdxOfTxSigInfo(SignalId));
    txBufferLength = (Com_TxBufferLengthOfTxSigInfoType) Com_GetTxDynSignalLength(txTpPduInfoIdx);
  }
  /* #20 Otherwise use the static Tx Buffer Length */
  else
# endif
  {
    txBufferLength = Com_GetTxBufferLengthOfTxSigInfo(SignalId);
  }

  return txBufferLength;
}
#endif

#if ((COM_TXBUFFERUSEDOFTXSIGINFO == STD_ON) && (CPU_BYTE_ORDER == HIGH_BYTE_FIRST))
/**********************************************************************************************************************
  Com_Signal_getLSBSignalApplSourcePtr
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(P2CONST(uint8, AUTOMATIC, COM_APPL_DATA), COM_CODE) Com_Signal_getLSBSignalApplSourcePtr(Com_SignalIdType SignalId, P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) SignalApplSourcePtr)
{

  /* *INDENT-OFF* */
  /* Motorola plattform specific implementation
     We start writing with the lsb (writing from right to left). To do so it is required to know
     the byte of the lsb. This is not the SignalApplSourcePtr as this one always points to the leftmost
     byte. For motorola systems, this is the byte of the msb.
     Reason: Easier code generation + it is easier to start writing with the lsb and counting
     bits "downwards" to the msb. SignalBusDestPtr points always to the lsb of motorola or intel bus
     signals. */
  /* *INDENT-ON* */

  switch (Com_GetApplTypeOfTxSigInfo(SignalId))
  {
# if (COM_EXISTS_UINT16_APPLTYPEOFTXSIGINFO == STD_ON)
    case COM_UINT16_APPLTYPEOFTXSIGINFO:
      SignalApplSourcePtr = &SignalApplSourcePtr[1];
      break;
# endif
# if (COM_EXISTS_SINT16_APPLTYPEOFTXSIGINFO == STD_ON)
    case COM_SINT16_APPLTYPEOFTXSIGINFO:
      SignalApplSourcePtr = &SignalApplSourcePtr[1];
      break;
# endif
# if (COM_EXISTS_UINT32_APPLTYPEOFTXSIGINFO == STD_ON)
    case COM_UINT32_APPLTYPEOFTXSIGINFO:
      SignalApplSourcePtr = &SignalApplSourcePtr[3];
      break;
# endif
# if (COM_EXISTS_SINT32_APPLTYPEOFTXSIGINFO == STD_ON)
    case COM_SINT32_APPLTYPEOFTXSIGINFO:
      SignalApplSourcePtr = &SignalApplSourcePtr[3];
      break;
# endif
# if (COM_EXISTS_UINT64_APPLTYPEOFTXSIGINFO == STD_ON)
    case COM_UINT64_APPLTYPEOFTXSIGINFO:
      SignalApplSourcePtr = &SignalApplSourcePtr[7];
      break;
# endif
# if (COM_EXISTS_SINT64_APPLTYPEOFTXSIGINFO == STD_ON)
    case COM_SINT64_APPLTYPEOFTXSIGINFO:
      SignalApplSourcePtr = &SignalApplSourcePtr[7];
      break;
# endif
# if (COM_EXISTS_SINT8_APPLTYPEOFTXSIGINFO == STD_ON)
    case COM_SINT8_APPLTYPEOFTXSIGINFO:
# endif
# if (COM_EXISTS_UINT8_APPLTYPEOFTXSIGINFO == STD_ON)
    case COM_UINT8_APPLTYPEOFTXSIGINFO:
# endif
# if (COM_EXISTS_UINT8_N_APPLTYPEOFTXSIGINFO == STD_ON)
    case COM_UINT8_N_APPLTYPEOFTXSIGINFO:
# endif
# if (COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO == STD_ON)
    case COM_UINT8_DYN_APPLTYPEOFTXSIGINFO:
# endif
    default:   /* COV_COM_MISRA */
      break;
  }

  COM_DUMMY_STATEMENT(SignalId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return SignalApplSourcePtr;
}
#endif

#if ((COM_TXBUFFERUSEDOFTXSIGINFO == STD_ON) && ((COM_EXISTS_NBITNBYTE_BUSACCOFTXSIGINFO == STD_ON) || (COM_EXISTS_NBITNBYTE_SW_BUSACCOFTXSIGINFO == STD_ON)))
/**********************************************************************************************************************
  Com_Signal_WriteSignal_NBITNBYTE
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 ********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_Signal_WriteSignal_NBITNBYTE(Com_SignalIdType SignalId,   /* COV_WRITESIGNAL_NBITNBYTE_XX */
                                                                   P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) SignalApplSourcePtr, Com_BitPositionOfTxSigInfoType signalStartBit,
                                                                   P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusDestPtr, boolean isBusBigEndian)
{
  uint8 mask;
  uint8 tmpByte;
  sint16_least i;

  uint16 maskCounter = 8 - signalStartBit;
  Com_BitLengthOfTxSigInfoType signalBitCount = Com_GetBitLengthOfTxSigInfo(SignalId);

  /* #10 Write LSB of the passed signal */
  *SignalBusDestPtr &= COM_CAST2UINT8(~COM_CAST2UINT8(255U << signalStartBit)); /* SBSW_COM_VALID_PTR_BY_COMSTACK_01 */
  *SignalBusDestPtr |= COM_CAST2UINT8(*SignalApplSourcePtr << signalStartBit);  /* SBSW_COM_VALID_PTR_BY_COMSTACK_01 */

  /* #20 If more than 8 bits have to be copied */
  for(i = 1; i < (sint16_least) ((Com_GetTxBufferLengthOfTxSigInfo(SignalId) - 1)); i++)        /* COV_WRITESIGNAL_NBITNBYTE_XX */
  {
    /* #30 Copy all full bytes, byte align the source byte before it is copied */
# if (CPU_BYTE_ORDER == HIGH_BYTE_FIRST)
    tmpByte = COM_CAST2UINT8(SignalApplSourcePtr[-i + 1] >> (8 - signalStartBit));
    tmpByte |= COM_CAST2UINT8(SignalApplSourcePtr[-i] << signalStartBit);
# else
    tmpByte = COM_CAST2UINT8(SignalApplSourcePtr[i - 1] >> (8 - signalStartBit));
    tmpByte |= COM_CAST2UINT8(SignalApplSourcePtr[i] << signalStartBit);
# endif

# if ((COM_EXISTS_NBITNBYTE_BUSACCOFTXSIGINFO == STD_ON) && (COM_EXISTS_NBITNBYTE_SW_BUSACCOFTXSIGINFO == STD_ON))
    /* If little endian and big endian signals exist */
    SignalBusDestPtr[Com_NBITNBYTE_GetEndiannesIndex(i, isBusBigEndian)] = tmpByte;     /* SBSW_COM_VALID_PTR_BY_COMSTACK_02 */ /* COV_COM_NBITNBYTE_ENDIANNESS */
# elif (((CPU_BYTE_ORDER == HIGH_BYTE_FIRST)&&(COM_EXISTS_NBITNBYTE_BUSACCOFTXSIGINFO == STD_ON)) || ((CPU_BYTE_ORDER == LOW_BYTE_FIRST) && (COM_EXISTS_NBITNBYTE_SW_BUSACCOFTXSIGINFO == STD_ON)))
    /* #40 If bus signal is big endian, write with negative loop index as pointer is pointing to LSB (last byte). */
    SignalBusDestPtr[-i] = tmpByte;     /* SBSW_COM_VALID_PTR_BY_COMSTACK_02 */
# else
    /* #50 If bus signal is little endian, write with positive loop index as pointer is pointing to LSB (first byte). */
    SignalBusDestPtr[i] = tmpByte;      /* SBSW_COM_VALID_PTR_BY_COMSTACK_02 */
# endif
    maskCounter += 8;
  }

# if (CPU_BYTE_ORDER == HIGH_BYTE_FIRST)
  tmpByte = COM_CAST2UINT8(SignalApplSourcePtr[-i + 1] >> (8 - signalStartBit));
  tmpByte |= COM_CAST2UINT8(SignalApplSourcePtr[-i] << signalStartBit);
# else
  tmpByte = COM_CAST2UINT8(SignalApplSourcePtr[i - 1] >> (8 - signalStartBit));
  tmpByte |= COM_CAST2UINT8(SignalApplSourcePtr[i] << signalStartBit);
# endif

  mask = COM_CAST2UINT8(255U >> (8 - (signalBitCount - maskCounter)));

# if ((COM_EXISTS_NBITNBYTE_BUSACCOFTXSIGINFO == STD_ON) && (COM_EXISTS_NBITNBYTE_SW_BUSACCOFTXSIGINFO == STD_ON))
  i = (sint16_least) Com_NBITNBYTE_GetEndiannesIndex(i, isBusBigEndian);        /* COV_COM_NBITNBYTE_ENDIANNESS */
# elif (((CPU_BYTE_ORDER == HIGH_BYTE_FIRST)&&(COM_EXISTS_NBITNBYTE_BUSACCOFTXSIGINFO == STD_ON)) || ((CPU_BYTE_ORDER == LOW_BYTE_FIRST) && (COM_EXISTS_NBITNBYTE_SW_BUSACCOFTXSIGINFO == STD_ON)))
  /* For big endian bus signals */
  i = -i;
# endif
  /* #60 Copy the remaining bits of last byte to the destination buffer */
  SignalBusDestPtr[i] = (SignalBusDestPtr[i] & COM_CAST2UINT8(~mask)) | (tmpByte & mask);       /* SBSW_COM_VALID_PTR_BY_COMSTACK_02 */

  COM_DUMMY_STATEMENT(isBusBigEndian);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif
#if (COM_RXTOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDlMon_MainFunctionRx
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_MainFunctionRx(void)
{
  /* Reception Deadline Monitoring.  */
  Com_SizeOfRxTOutInfoType idxRxTOutInfo;

  Com_RxDlMon_EnterExclusiveArea();
  /* #10 Iterate over all Rx deadline monitorings */
  for(idxRxTOutInfo = 0; idxRxTOutInfo < Com_GetSizeOfRxTOutInfo(); idxRxTOutInfo++)
  {
    /* #20 If the Rx deadline monitoring state machine is active and the timeout counter is greater zero, decrement the timeout counter */
    if(Com_LMgt_RxIpduDmActive(idxRxTOutInfo))
    {
      if(0 < Com_GetRxTOutCnt(idxRxTOutInfo))   /* COV_COM_RX_TOUT_CNT */
      {
        Com_DecRxTOutCnt(idxRxTOutInfo);        /* SBSW_COM_CSL02 */

        /* #30 If a timeout expired, reload the timeout counter */
        if(Com_GetRxTOutCnt(idxRxTOutInfo) == 0)
        {
          Com_SetRxTOutCnt(idxRxTOutInfo, Com_GetFactorOfRxTOutInfo(idxRxTOutInfo) - 1);        /* SBSW_COM_CSL02 */

          /* #40 Set the rx timeout state to timeout occurred */
          Com_LMgt_TimeoutOccurred(idxRxTOutInfo);      /* SBSW_COM_CSL02 */
# if (COM_RXACCESSINFOREPLACESIGINDENDIDXOFRXTOUTINFO == STD_ON)
          /* #50 Do the timeout action for related ComSignals */
          Com_RxDlMon_SignalTimeoutAction(idxRxTOutInfo);
# endif
# if (COM_RXACCESSINFOREPLACEGRPSIGINDENDIDXOFRXTOUTINFO == STD_ON)
          /* #60 Do the timeout action for related ComSignalGroups */
          Com_RxDlMon_GroupSignalTimeoutAction(idxRxTOutInfo);
# endif

# if (COM_CBKRXTOUTFUNCPTRINDUSEDOFRXTOUTINFO == STD_ON)
          /* #70 Call related timeout notification functions */
          Com_RxDlMon_CallTimeOutNotifications(idxRxTOutInfo);
# endif

        }
      }
    }
    Com_RxDlMon_ThresholdCheck();
  }
  Com_RxDlMon_ExitExclusiveArea();
}
#endif

#if(COM_RXTOUTINFO == STD_ON)
/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_RxDlMon_EnterExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_EnterExclusiveArea(void)
{
  /* #10 Enter the rx deadline monitoring exclusive area */
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
}

/**********************************************************************************************************************
  Com_RxDlMon_ExitExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_ExitExclusiveArea(void)
{
  /* #05 Reload the counter with the threshold value */
  Com_SetRxDeadlineMonitoringISRLockCounter(Com_GetRxDeadlineMonitoringISRLockThreshold());
  /* #10 Exit the rx deadline monitoring exclusive area */
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
}

/**********************************************************************************************************************
  Com_RxDlMon_ThresholdCheck
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_ThresholdCheck(void)
{
  if(Com_GetRxDeadlineMonitoringISRLockCounter() > 0)
  {
    Com_DecRxDeadlineMonitoringISRLockCounter();
  }
  else
  {
    Com_RxDlMon_ExitExclusiveArea();
    Com_RxDlMon_EnterExclusiveArea();
  }
}

#endif

#if (COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDlMon_InitRxIpdu
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_InitRxIpdu(PduIdType ComPduId)
{
  /* #10 Iterate over all related timeout data sets */
  Com_RxTOutInfoIndStartIdxOfRxPduInfoType idxRxTOutInfoInd = Com_GetRxTOutInfoIndStartIdxOfRxPduInfo(ComPduId);
  for(; idxRxTOutInfoInd < Com_GetRxTOutInfoIndEndIdxOfRxPduInfo(ComPduId); idxRxTOutInfoInd++)
  {
    /* #20 Set the Rx timeout counter value to the first timeout and set the deadline monitoring state machine to ACTIVE */
    Com_SetRxTOutCnt(Com_GetRxTOutInfoInd(idxRxTOutInfoInd), Com_GetFirstFactorOfRxTOutInfo(Com_GetRxTOutInfoInd(idxRxTOutInfoInd)));   /* SBSW_COM_CSL02 */
    Com_SetRxPduDmState(Com_GetRxTOutInfoInd(idxRxTOutInfoInd), COM_ACTIVE_RXPDUDMSTATE);       /* SBSW_COM_CSL02 */
  }
}
#endif

#if (COM_RXTOUTINFOUSEDOFRXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDlMon_SigEvent
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_SigEvent(Com_RxSigInfoIterType idxRxSigInfo)
{
  /* #10 If the passed Rx ComSignal has a timeout, reload the timeout value */
  if(Com_IsRxTOutInfoUsedOfRxSigInfo(idxRxSigInfo))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_RxTOutInfoIdxOfRxSigInfoType idxRxTOutInfo = Com_GetRxTOutInfoIdxOfRxSigInfo(idxRxSigInfo);
    Com_SetRxTOutCnt(idxRxTOutInfo, Com_GetFactorOfRxTOutInfo(idxRxTOutInfo));  /* SBSW_COM_CSL02 */
  }
}
#endif

#if (COM_RXTOUTINFOUSEDOFRXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDlMon_SigGrpEvent
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_SigGrpEvent(Com_RxSigGrpInfoIterType idxRxSigGrpInfo)
{
  /* #10 If the passed Rx ComSignalGroup has a timeout, reload the timeout value */
  if(Com_IsRxTOutInfoUsedOfRxSigGrpInfo(idxRxSigGrpInfo))       /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_RxTOutInfoIdxOfRxSigGrpInfoType idxRxTOutInfo = Com_GetRxTOutInfoIdxOfRxSigGrpInfo(idxRxSigGrpInfo);
    Com_SetRxTOutCnt(idxRxTOutInfo, Com_GetFactorOfRxTOutInfo(idxRxTOutInfo));  /* SBSW_COM_CSL02 */
  }
}
#endif

#if (COM_RXACCESSINFOREPLACESIGINDENDIDXOFRXTOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDlMon_SignalTimeoutAction
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_SignalTimeoutAction(Com_SizeOfRxTOutInfoType idxRxTOutInfo)
{
  /* #10 Iterate over all related ComSignals with timeout replace value */
  Com_RxAccessInfoReplaceSigIndEndIdxOfRxTOutInfoType idxRxAccessInfoReplaceSigInd = Com_GetRxAccessInfoReplaceSigIndStartIdxOfRxTOutInfo(idxRxTOutInfo);
  for(; idxRxAccessInfoReplaceSigInd < Com_GetRxAccessInfoReplaceSigIndEndIdxOfRxTOutInfo(idxRxTOutInfo); idxRxAccessInfoReplaceSigInd++)
  {
    /* #20 Set the ComSignal buffer to the timeout replace value */
    Com_RxAccessInfoIterType idxRxAccessInfo = Com_GetRxAccessInfoReplaceSigInd(idxRxAccessInfoReplaceSigInd);
/* jet: SetRxSigBufferValue snippet */
# if ((COM_RXDATATIMEOUTSUBSTITUTIONVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
    if(Com_IsRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo(idxRxAccessInfo) && Com_IsBufferUsedOfRxAccessInfo(idxRxAccessInfo))      /* COV_COM_DLMON_SIGNALTIMEOUTACTION_TX */
    {
      Com_Signal_SetRxSigBufferValue(idxRxAccessInfo, Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetRxDataTimeoutSubstitutionValueIdxOfRxAccessInfo(idxRxAccessInfo));
    }
# endif
# if ((COM_CONSTVALUEARRAYBASEDRXDATATIMEOUTSUBSTITUTIONVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO == STD_ON))
    if(Com_IsConstValueArrayBasedRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo(idxRxAccessInfo) && Com_IsRxSigBufferArrayBasedBufferUsedOfRxAccessInfo(idxRxAccessInfo))     /* COV_COM_DLMON_SIGNALTIMEOUTACTION_DYN_TX */
    {
      Com_Signal_SetRxSigBufferArrayBasedValue(idxRxAccessInfo, Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(idxRxAccessInfo),
                                               Com_GetConstValueArrayBasedRxDataTimeoutSubstitutionValueStartIdxOfRxAccessInfo(idxRxAccessInfo),
                                               (PduLengthType) Com_GetConstValueArrayBasedRxDataTimeoutSubstitutionValueLengthOfRxAccessInfo(idxRxAccessInfo));
    }
# endif

# if (COM_GWINFOUSEDOFRXACCESSINFO  == STD_ON)
    /* #30 If the ComSignal is routed, set the related Gateway Event flag to forward the Rx timeout value to Tx side */
    if(Com_IsGwInfoUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      Com_SetGwEvent(Com_GetGwInfoIdxOfRxAccessInfo(idxRxAccessInfo), TRUE);    /* SBSW_COM_CSL02 */
    }
# endif
  }
}
#endif

#if (COM_RXACCESSINFOREPLACEGRPSIGINDENDIDXOFRXTOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDlMon_GroupSignalTimeoutAction
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_GroupSignalTimeoutAction(Com_SizeOfRxTOutInfoType idxRxTOutInfo)
{
  /* #10 Iterate over all related ComGroupSignals with timeout replace value */
  Com_RxAccessInfoReplaceGrpSigIndEndIdxOfRxTOutInfoType idxRxAccessInfoReplaceGrpSigInd = Com_GetRxAccessInfoReplaceGrpSigIndStartIdxOfRxTOutInfo(idxRxTOutInfo);
  for(; idxRxAccessInfoReplaceGrpSigInd < Com_GetRxAccessInfoReplaceGrpSigIndEndIdxOfRxTOutInfo(idxRxTOutInfo); idxRxAccessInfoReplaceGrpSigInd++)
  {
    /* #20 Set the ComGroupSignal shadow buffer to the timeout replace value */
    Com_RxAccessInfoIterType idxRxAccessInfo = Com_GetRxAccessInfoReplaceGrpSigInd(idxRxAccessInfoReplaceGrpSigInd);
    /* jet: SetRxSigBufferValue snippet */
# if ((COM_RXDATATIMEOUTSUBSTITUTIONVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON))
    if(Com_IsRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo(idxRxAccessInfo) && Com_IsShdBufferUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_DLMON_SIGNALTIMEOUTACTION_TX */
    {
      Com_Signal_SetRxSigBufferValue(idxRxAccessInfo, Com_GetShdBufferIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetRxDataTimeoutSubstitutionValueIdxOfRxAccessInfo(idxRxAccessInfo));
    }
# endif
# if ((COM_CONSTVALUEARRAYBASEDRXDATATIMEOUTSUBSTITUTIONVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON))
    if(Com_IsConstValueArrayBasedRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo(idxRxAccessInfo) && Com_IsRxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo(idxRxAccessInfo))  /* COV_COM_DLMON_SIGNALTIMEOUTACTION_DYN_TX */
    {
      Com_Signal_SetRxSigBufferArrayBasedValue(idxRxAccessInfo, Com_GetRxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo(idxRxAccessInfo),
                                               Com_GetConstValueArrayBasedRxDataTimeoutSubstitutionValueStartIdxOfRxAccessInfo(idxRxAccessInfo),
                                               (PduLengthType) Com_GetConstValueArrayBasedRxDataTimeoutSubstitutionValueLengthOfRxAccessInfo(idxRxAccessInfo));
    }
# endif

# if (COM_GWINFOUSEDOFRXACCESSINFO  == STD_ON)
    /* #30 If the ComGroupSignal is routed, set the related Gateway Event flag to forward the Rx timeout value to Tx side */
    if(Com_IsGwInfoUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      Com_SetGwEvent(Com_GetGwInfoIdxOfRxAccessInfo(idxRxAccessInfo), TRUE);    /* SBSW_COM_CSL02 */
    }
# endif
  }
}
#endif

#if (COM_CBKRXTOUTFUNCPTRINDUSEDOFRXTOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDlMon_CallTimeOutNotifications
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDlMon_CallTimeOutNotifications(Com_SizeOfRxTOutInfoType idxRxTOutInfo)
{
  /* #10 Iterate over all related timeout notification functions and call them */
  Com_CbkRxTOutFuncPtrIndEndIdxOfRxTOutInfoType idxIndRxTOutFuncPtr = Com_GetCbkRxTOutFuncPtrIndStartIdxOfRxTOutInfo(idxRxTOutInfo);

  Com_RxDlMon_ExitExclusiveArea();
  for(; idxIndRxTOutFuncPtr < Com_GetCbkRxTOutFuncPtrIndEndIdxOfRxTOutInfo(idxRxTOutInfo); idxIndRxTOutFuncPtr++)
  {
    Com_GetCbkRxTOutFuncPtr(Com_GetCbkRxTOutFuncPtrInd(idxIndRxTOutFuncPtr)) ();        /* SBSW_COM_FCT_PTR_CALL_CSL03 */
  }
  Com_RxDlMon_EnterExclusiveArea();
}
#endif
#if (((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) || (COM_CONSTVALUEARRAYBASEDINVVALUEUSEDOFRXACCESSINFO == STD_ON)) && (COM_RXSIGINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxInv_Sig_PerformInvalidAction
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxInv_Sig_PerformInvalidAction(Com_RxSigInfoIterType idxRxSigInfo /* COV_COM_PERFORMINVALIDACTION_X */
                                                                     , P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr)
{
  /* #10 If an invalid notification is configured cache or call it, otherwise replace the current value with the initial value */
  Com_RxAccessInfoIdxOfRxSigInfoType idxRxAccessInfo = Com_GetRxAccessInfoIdxOfRxSigInfo(idxRxSigInfo);
# if (COM_RXCBKFUNCPTRINVACKUSEDOFRXSIGINFO == STD_ON)
  if(Com_IsRxCbkFuncPtrInvAckUsedOfRxSigInfo(idxRxSigInfo))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_CacheOrCallRxCbkFctPtr((Com_RxCbkFuncPtrIterType) Com_GetRxCbkFuncPtrInvAckIdxOfRxSigInfo(idxRxSigInfo), (PduIdType) Com_GetRxPduInfoIdxOfRxAccessInfo(idxRxAccessInfo), fctPtrCacheStrctPtr);  /* SBSW_COM_FCTPTR_CACHE_PTR */
  }
  else
# endif
  {
    /* jet: SetRxSigBufferValue snippet */
# if ((COM_INITVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
    if(Com_IsInitValueUsedOfRxAccessInfo(idxRxAccessInfo) && Com_IsBufferUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_PERFORMINVALIDACTION */
    {
      Com_Signal_SetRxSigBufferValue(idxRxAccessInfo, Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetInitValueIdxOfRxAccessInfo(idxRxAccessInfo));
    }
# endif
# if ((COM_CONSTVALUEARRAYBASEDINITVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO == STD_ON))
    if(Com_IsConstValueArrayBasedInitValueUsedOfRxAccessInfo(idxRxAccessInfo) && Com_IsRxSigBufferArrayBasedBufferUsedOfRxAccessInfo(idxRxAccessInfo))  /* COV_COM_PERFORMINVALIDACTION_ARRAYBASED */
    {
      Com_Signal_SetRxSigBufferArrayBasedValue(idxRxAccessInfo, Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(idxRxAccessInfo),
                                               Com_GetConstValueArrayBasedInitValueStartIdxOfRxAccessInfo(idxRxAccessInfo),
                                               (PduLengthType) Com_GetConstValueArrayBasedInitValueLengthOfRxAccessInfo(idxRxAccessInfo));
    }
# endif

    COM_DUMMY_STATEMENT(fctPtrCacheStrctPtr);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  }
}
#endif

/**********************************************************************************************************************
  Com_RxInv_Sig_<ApplType>_EvaluateInvalidValue
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/

#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT8_APPLTYPEOFRXACCESSINFO == STD_ON))
/* jet: ComRxEvaluateInvValue snippet */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_UInt8_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, uint8 tmpNewValue)
{
  Com_RxSigProcessState processState = VALID;

  if(Com_IsInvValueUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    if(tmpNewValue == Com_GetConstValueUInt8(Com_GetInvValueIdxOfRxAccessInfo(idxRxAccessInfo)))
    {
      processState = INVALID;
    }
  }
  return processState;
}
#endif

#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT8_APPLTYPEOFRXACCESSINFO == STD_ON))
/* jet: ComRxEvaluateInvValue snippet */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_SInt8_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, sint8 tmpNewValue)
{
  Com_RxSigProcessState processState = VALID;

  if(Com_IsInvValueUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    if(tmpNewValue == Com_GetConstValueSInt8(Com_GetInvValueIdxOfRxAccessInfo(idxRxAccessInfo)))
    {
      processState = INVALID;
    }
  }
  return processState;
}
#endif

#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT16_APPLTYPEOFRXACCESSINFO == STD_ON))
/* jet: ComRxEvaluateInvValue snippet */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_UInt16_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, uint16 tmpNewValue)
{
  Com_RxSigProcessState processState = VALID;

  if(Com_IsInvValueUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    if(tmpNewValue == Com_GetConstValueUInt16(Com_GetInvValueIdxOfRxAccessInfo(idxRxAccessInfo)))
    {
      processState = INVALID;
    }
  }
  return processState;
}
#endif

#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT16_APPLTYPEOFRXACCESSINFO == STD_ON))
/* jet: ComRxEvaluateInvValue snippet */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_SInt16_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, sint16 tmpNewValue)
{
  Com_RxSigProcessState processState = VALID;

  if(Com_IsInvValueUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    if(tmpNewValue == Com_GetConstValueSInt16(Com_GetInvValueIdxOfRxAccessInfo(idxRxAccessInfo)))
    {
      processState = INVALID;
    }
  }
  return processState;
}
#endif

#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT32_APPLTYPEOFRXACCESSINFO == STD_ON))
/* jet: ComRxEvaluateInvValue snippet */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_UInt32_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, uint32 tmpNewValue)
{
  Com_RxSigProcessState processState = VALID;

  if(Com_IsInvValueUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    if(tmpNewValue == Com_GetConstValueUInt32(Com_GetInvValueIdxOfRxAccessInfo(idxRxAccessInfo)))
    {
      processState = INVALID;
    }
  }
  return processState;
}
#endif

#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT32_APPLTYPEOFRXACCESSINFO == STD_ON))
/* jet: ComRxEvaluateInvValue snippet */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_SInt32_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, sint32 tmpNewValue)
{
  Com_RxSigProcessState processState = VALID;

  if(Com_IsInvValueUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    if(tmpNewValue == Com_GetConstValueSInt32(Com_GetInvValueIdxOfRxAccessInfo(idxRxAccessInfo)))
    {
      processState = INVALID;
    }
  }
  return processState;
}
#endif

#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT64_APPLTYPEOFRXACCESSINFO == STD_ON))
/* jet: ComRxEvaluateInvValue snippet */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_UInt64_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, uint64 tmpNewValue)
{
  Com_RxSigProcessState processState = VALID;

  if(Com_IsInvValueUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    if(tmpNewValue == Com_GetConstValueUInt64(Com_GetInvValueIdxOfRxAccessInfo(idxRxAccessInfo)))
    {
      processState = INVALID;
    }
  }
  return processState;
}
#endif

#if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_SINT64_APPLTYPEOFRXACCESSINFO == STD_ON))
/* jet: ComRxEvaluateInvValue snippet */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_SInt64_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, sint64 tmpNewValue)
{
  Com_RxSigProcessState processState = VALID;

  if(Com_IsInvValueUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    if(tmpNewValue == Com_GetConstValueSInt64(Com_GetInvValueIdxOfRxAccessInfo(idxRxAccessInfo)))
    {
      processState = INVALID;
    }
  }
  return processState;
}
#endif

#if ((COM_CONSTVALUEARRAYBASEDINVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxInv_Sig_UInt8_N_EvaluateInvalidValue
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_UInt8_N_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, AUTOMATIC) newValue)
{
  Com_ConstValueArrayBasedIterType bufferIdx = 0;
  Com_RxSigProcessState processState = VALID;
  /* #10 Iterate over all buffer parts and evaluate if they are all invalid */
  if(Com_IsConstValueArrayBasedInvValueUsedOfRxAccessInfo(idxRxAccessInfo))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    processState = INVALID;
    for(; bufferIdx < Com_GetConstValueArrayBasedInvValueLengthOfRxAccessInfo(idxRxAccessInfo); bufferIdx++)
    {
      if(newValue[bufferIdx] != Com_GetConstValueArrayBased(bufferIdx + Com_GetConstValueArrayBasedInvValueStartIdxOfRxAccessInfo(idxRxAccessInfo)))
      {
        processState = VALID;
        break;
      }
    }
  }
  return processState;
}
#endif

#if ((COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON) && (COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO == STD_ON))  /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf_tf */
/**********************************************************************************************************************
  Com_RxInv_Sig_UInt8_Dyn_EvaluateInvalidValue
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_Sig_UInt8_Dyn_EvaluateInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo, P2CONST(uint8, AUTOMATIC, AUTOMATIC) newValue,
                                                                                                PduLengthType sduLength)
{
  Com_ConstValueArrayBasedIterType bufferIdx = 0;
  Com_RxSigProcessState processState = VALID;

  if(Com_IsConstValueArrayBasedInvValueUsedOfRxAccessInfo(idxRxAccessInfo))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    if(Com_GetRxDynamicLength(sduLength, idxRxAccessInfo) == Com_GetConstValueArrayBasedInvValueLengthOfRxAccessInfo(idxRxAccessInfo))
    {
      processState = INVALID;
      for(; bufferIdx < Com_GetConstValueArrayBasedInvValueLengthOfRxAccessInfo(idxRxAccessInfo); bufferIdx++)
      {
        if(newValue[bufferIdx] != Com_GetConstValueArrayBased(bufferIdx + Com_GetConstValueArrayBasedInvValueStartIdxOfRxAccessInfo(idxRxAccessInfo)))
        {
          processState = VALID;
          break;
        }
      }
    }
  }

  return processState;
}
#endif

#if (COM_INVEVENTOFRXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxInv_SigGrpPerfomInvalidAction
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxInv_SigGrpPerfomInvalidAction(Com_RxSigGrpInfoIterType idxRxSigGrpInfo, P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr)
{
  /* #10 If the invalid action is notify, cache or call the invalid notification */
# if (COM_RXCBKFUNCPTRINVACKUSEDOFRXSIGGRPINFO == STD_ON)
  if(Com_IsRxCbkFuncPtrInvAckUsedOfRxSigGrpInfo(idxRxSigGrpInfo))       /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_CacheOrCallRxCbkFctPtr((Com_RxCbkFuncPtrIterType) Com_GetRxCbkFuncPtrInvAckIdxOfRxSigGrpInfo(idxRxSigGrpInfo), (PduIdType) Com_GetRxPduInfoIdxOfRxSigGrpInfo(idxRxSigGrpInfo), fctPtrCacheStrctPtr);    /* SBSW_COM_FCTPTR_CACHE_PTR */
  }
  /* #20 Otherwise, iterate over all related ComGroupSignals and perform replace action. */
  else
# endif
  {
    Com_RxAccessInfoIterType rxAccessInfoIndidx = Com_GetRxAccessInfoGrpSigIndStartIdxOfRxSigGrpInfo(idxRxSigGrpInfo);
    for(; rxAccessInfoIndidx < Com_GetRxAccessInfoGrpSigIndEndIdxOfRxSigGrpInfo(idxRxSigGrpInfo); rxAccessInfoIndidx++)
    {
      Com_RxAccessInfoIterType idxRxAccessInfo = Com_GetRxAccessInfoGrpSigInd(rxAccessInfoIndidx);
      /* jet: SetRxSigBufferValue snippet */
# if ((COM_INITVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON))
      if(Com_IsInitValueUsedOfRxAccessInfo(idxRxAccessInfo) && Com_IsShdBufferUsedOfRxAccessInfo(idxRxAccessInfo))      /* COV_COM_PERFORMINVALIDACTION_GROUPSIGNAL */
      {
        Com_Signal_SetRxSigBufferValue(idxRxAccessInfo, Com_GetShdBufferIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetInitValueIdxOfRxAccessInfo(idxRxAccessInfo));
      }
# endif
# if ((COM_CONSTVALUEARRAYBASEDINITVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON))
      if(Com_IsConstValueArrayBasedInitValueUsedOfRxAccessInfo(idxRxAccessInfo) && Com_IsRxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo(idxRxAccessInfo))     /* COV_COM_PERFORMINVALIDACTION_ARRAYBASED_GROUPSIGNAL */
      {
        Com_Signal_SetRxSigBufferArrayBasedValue(idxRxAccessInfo, Com_GetRxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo(idxRxAccessInfo),
                                                 Com_GetConstValueArrayBasedInitValueStartIdxOfRxAccessInfo(idxRxAccessInfo),
                                                 (PduLengthType) Com_GetConstValueArrayBasedInitValueLengthOfRxAccessInfo(idxRxAccessInfo));
      }
# endif

    }
    COM_DUMMY_STATEMENT(fctPtrCacheStrctPtr);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  }
}
#endif

#if (COM_INVEVENTOFRXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxInv_SigGrp
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_SigGrp(Com_RxSigGrpInfoIterType idxRxSigGrpInfo, P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr)
{
  Com_RxSigProcessState processState = VALID;
  /* #10 If the passed ComSignalGroup has any invalid action configured */
  if(Com_IsInvEventOfRxSigGrpInfo(idxRxSigGrpInfo))
  {
    {
      /* #20 Iterate over all related ComGroupSignals and evaluate whether the current shadow buffer value contains an invalid value */
      Com_RxAccessInfoIterType rxAccessInfoIndidx = Com_GetRxAccessInfoGrpSigIndStartIdxOfRxSigGrpInfo(idxRxSigGrpInfo);
      for(; rxAccessInfoIndidx < Com_GetRxAccessInfoGrpSigIndEndIdxOfRxSigGrpInfo(idxRxSigGrpInfo); rxAccessInfoIndidx++)
      {
        processState = Com_RxInv_GrpSigHasInvalidValue(Com_GetRxAccessInfoGrpSigInd(rxAccessInfoIndidx));
        if(processState == INVALID)
        {
          /* #30 If any ComGroupSignal has an invalid value in its shadow buffer, perform the invalid action */
          Com_RxInv_SigGrpPerfomInvalidAction(idxRxSigGrpInfo, fctPtrCacheStrctPtr);    /* SBSW_COM_FCTPTR_CACHE_PTR */
          break;
        }
      }
    }
  }
  return processState;
}
#endif

#if (COM_INVEVENTOFRXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxInv_GrpSigHasInvalidValue
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxInv_GrpSigHasInvalidValue(Com_RxAccessInfoIterType idxRxAccessInfo)
{
  Com_RxSigProcessState processState = VALID;

# if(COM_TMPBUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsTmpBufferUsedOfRxAccessInfo(idxRxAccessInfo))        /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_TmpBufferIdxOfRxAccessInfoType idxTmpBuffer = Com_GetTmpBufferIdxOfRxAccessInfo(idxRxAccessInfo);
    switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
    {
/* jet: GeneralSwitchCasePerApplType snippet */
#  if (COM_TMPRXSHDBUFFERUINT8 == STD_ON)
      case COM_UINT8_APPLTYPEOFRXACCESSINFO:
      {
        processState = Com_RxInv_Sig_UInt8_EvaluateInvalidValue(idxRxAccessInfo, Com_GetTmpRxShdBufferUInt8(idxTmpBuffer));
        break;
      }
#  endif
#  if (COM_TMPRXSHDBUFFERSINT8 == STD_ON)
      case COM_SINT8_APPLTYPEOFRXACCESSINFO:
      {
        processState = Com_RxInv_Sig_SInt8_EvaluateInvalidValue(idxRxAccessInfo, Com_GetTmpRxShdBufferSInt8(idxTmpBuffer));
        break;
      }
#  endif
#  if (COM_TMPRXSHDBUFFERUINT16 == STD_ON)
      case COM_UINT16_APPLTYPEOFRXACCESSINFO:
      {
        processState = Com_RxInv_Sig_UInt16_EvaluateInvalidValue(idxRxAccessInfo, Com_GetTmpRxShdBufferUInt16(idxTmpBuffer));
        break;
      }
#  endif
#  if (COM_TMPRXSHDBUFFERSINT16 == STD_ON)
      case COM_SINT16_APPLTYPEOFRXACCESSINFO:
      {
        processState = Com_RxInv_Sig_SInt16_EvaluateInvalidValue(idxRxAccessInfo, Com_GetTmpRxShdBufferSInt16(idxTmpBuffer));
        break;
      }
#  endif
#  if (COM_TMPRXSHDBUFFERUINT32 == STD_ON)
      case COM_UINT32_APPLTYPEOFRXACCESSINFO:
      {
        processState = Com_RxInv_Sig_UInt32_EvaluateInvalidValue(idxRxAccessInfo, Com_GetTmpRxShdBufferUInt32(idxTmpBuffer));
        break;
      }
#  endif
#  if (COM_TMPRXSHDBUFFERSINT32 == STD_ON)
      case COM_SINT32_APPLTYPEOFRXACCESSINFO:
      {
        processState = Com_RxInv_Sig_SInt32_EvaluateInvalidValue(idxRxAccessInfo, Com_GetTmpRxShdBufferSInt32(idxTmpBuffer));
        break;
      }
#  endif
#  if (COM_TMPRXSHDBUFFERUINT64 == STD_ON)
      case COM_UINT64_APPLTYPEOFRXACCESSINFO:
      {
        processState = Com_RxInv_Sig_UInt64_EvaluateInvalidValue(idxRxAccessInfo, Com_GetTmpRxShdBufferUInt64(idxTmpBuffer));
        break;
      }
#  endif
#  if (COM_TMPRXSHDBUFFERSINT64 == STD_ON)
      case COM_SINT64_APPLTYPEOFRXACCESSINFO:
      {
        processState = Com_RxInv_Sig_SInt64_EvaluateInvalidValue(idxRxAccessInfo, Com_GetTmpRxShdBufferSInt64(idxTmpBuffer));
        break;
      }
#  endif
      default: /* COV_COM_MISRA */
        break;
    }
  }
# endif

# if ((COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_CONSTVALUEARRAYBASEDINVVALUEUSEDOFRXACCESSINFO == STD_ON))
  if(Com_IsTmpRxShdBufferArrayBasedTmpBufferUsedOfRxAccessInfo(idxRxAccessInfo))        /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_TmpRxShdBufferArrayBasedTmpBufferEndIdxOfRxAccessInfoType idxTmpBuffer = Com_GetTmpRxShdBufferArrayBasedTmpBufferStartIdxOfRxAccessInfo(idxRxAccessInfo);
    switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
    {
      case COM_UINT8_N_APPLTYPEOFRXACCESSINFO:
      {
        processState = Com_RxInv_Sig_UInt8_N_EvaluateInvalidValue(idxRxAccessInfo, Com_GetAddrTmpRxShdBufferArrayBased(idxTmpBuffer));  /* SBSW_COM_VALID_PTR_BY_COMSTACK_01 */
        break;
      }

      default: /* COV_COM_MISRA */
        break;
    }
  }
# endif
  return processState;
}       /* PRQA S 6050, 6030 */ /* MD_MSR_STCAL */ /* MD_MSR_STCYC */
#endif

#if (COM_RXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxIndication_Processing
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxIndication_Processing(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
  /* #10 If the ComIPdu is active */
  if(Com_IsRxPduGrpActive(RxPduId))
  {
    /* \trace CREQ-103160 */
# if (COM_RXPDUCALLOUTFUNCPTRUSEDOFRXPDUINFO == STD_ON)
    /* Rx I-PDU callout.  */
    boolean CalloutResult;
    /* #20 If the passed Rx ComIPdu uses a callout function */
    if(Com_IsRxPduCalloutFuncPtrUsedOfRxPduInfo(RxPduId))       /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      Com_RxPduCalloutFuncPtrIdxOfRxPduInfoType idx = Com_GetRxPduCalloutFuncPtrIdxOfRxPduInfo(RxPduId);
      /* #30 Call the callout with the PduInfo (if ASR 4.1.x callouts are enabled) or with the SduDataPtr */
#  if (COM_IPDUCALLOUT_USEPDUINFOPTR == STD_ON)
      CalloutResult = Com_GetRxPduCalloutFuncPtr(idx) (RxPduId, (P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA)) PduInfoPtr);   /* SBSW_COM_FCT_PTR_CALL_CSL03 */
#  else
      CalloutResult = Com_GetRxPduCalloutFuncPtr(idx) (RxPduId, (P2CONST(uint8, AUTOMATIC, COM_APPL_DATA)) PduInfoPtr->SduDataPtr);     /* SBSW_COM_FCT_PTR_CALL_CSL03 */
#  endif
    }
    else
    {
      CalloutResult = TRUE;
    }

    /* #40 If the callout result is positive */
    if(CalloutResult == TRUE)
# endif
    {
# if (COM_GENERATED_DESCRIPTION_ROUTING == STD_ON)      /* COV_COM_VAR_ELISA_STD_OFF_XF */
      /* #50 Call the Com_RxGwIndication to process the ComDescription routings */
      Com_RxGwIndication(RxPduId, PduInfoPtr);  /* SBSW_COM_FCTCALL_WITH_P2CONST */
# endif
      /* #60 Call Com_RxIndication_ProcessPdu to process the passed Rx ComIPdu */
      Com_RxIndication_ProcessPdu(RxPduId, PduInfoPtr); /* SBSW_COM_FCTCALL_WITH_P2CONST */
    }   /* Rx I-PDU callout */
# if ((COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON) && (COM_RXPDUCALLOUTFUNCPTRUSEDOFRXPDUINFO == STD_ON))    /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
    /* #70 Otherwise and if the Rx ComIPdu is a TP Pdu, reset the TP dependent values */
    else
    {
      if(Com_GetTypeOfRxPduInfo(RxPduId) == COM_TP_TYPEOFRXPDUINFO)     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        Com_RxTpInfoIdxOfRxPduInfoType rxTpPduInfoIdx = Com_GetRxTpInfoIdxOfRxPduInfo(RxPduId);
        Com_SetRxTpWrittenBytesCounter(rxTpPduInfoIdx, 0);
        Com_SetRxTpSduLength(rxTpPduInfoIdx, 0);
        Com_SetRxTpConnectionState(rxTpPduInfoIdx, COM_READY_RXTPCONNECTIONSTATE);
      }
    }   /* Rx I-PDU callout */
# endif
  }     /* Active check */
}
#endif

#if (COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON)     /* COV_COM_VAR_ELISA_STD_OFF_XF */
/**********************************************************************************************************************
  Com_TpRxIndication_Processing
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TpRxIndication_Processing(PduIdType PduId, Std_ReturnType Result)
{
  uint8 receptionResult = E_OK;
  Com_RxTpInfoIdxOfRxPduInfoType rxTpPduInfoIdx = Com_GetRxTpInfoIdxOfRxPduInfo(PduId);

  /* #10 If the passed Result is negative OR expected length does not match the received length OR the current TP state is NOT equal WAITING_FOR_INDICATION OR RECEPTION_STARTED, the reception of the Rx TP ComIPdu failed */
  if(Result != E_OK)
  {
    receptionResult = E_NOT_OK;
  }
  else if(Com_GetRxTpSduLength(rxTpPduInfoIdx) != Com_GetRxTpWrittenBytesCounter(rxTpPduInfoIdx))
  {
    receptionResult = E_NOT_OK;
  }
  else if((Com_GetRxTpConnectionState(rxTpPduInfoIdx) != COM_WAITING_FOR_INDICATION_RXTPCONNECTIONSTATE) && (Com_GetRxTpConnectionState(rxTpPduInfoIdx) != COM_RECEPTION_STARTED_RXTPCONNECTIONSTATE))
  {
    receptionResult = E_NOT_OK;
  }
  /* #20 Otherwise the Rx TP ComIPdu reception was successful */
  else
  {
    /* #30 Call Com_RxIndication with the completely received Rx TP ComIPdu */
    PduInfoType rxPduInfo;
    rxPduInfo.SduDataPtr = Com_GetAddrRxTpBuffer(Com_GetRxTpBufferStartIdxOfRxTpInfo(rxTpPduInfoIdx));
    rxPduInfo.SduLength = Com_GetRxTpSduLength(rxTpPduInfoIdx);

    Com_RxIndication_Processing(PduId, &rxPduInfo);     /* SBSW_COM_FCTCALL_WITH_P2CONST */
# if (COM_EXISTS_IMMEDIATE_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
    /* #40 If the Rx TP ComIPdu is processed immediate, reset the Rx TP ComIPdu parameters */
#  if (COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
    if(!Com_IsHandleRxPduDeferredUsedOfRxPduInfo(PduId))        /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
#  endif
    {
      Com_SetRxTpWrittenBytesCounter(rxTpPduInfoIdx, 0);        /* SBSW_COM_CSL02 */
      Com_SetRxTpSduLength(rxTpPduInfoIdx, 0);  /* SBSW_COM_CSL02 */
      Com_SetRxTpConnectionState(rxTpPduInfoIdx, COM_READY_RXTPCONNECTIONSTATE);        /* SBSW_COM_CSL02 */
    }
# endif
  }

  /* #50 If the Rx TP ComIPdu reception failed, reset the Rx TP ComIPdu parameters */
  if(receptionResult != E_OK)
  {
    Com_SetRxTpWrittenBytesCounter(rxTpPduInfoIdx, 0);  /* SBSW_COM_CSL02 */
    Com_SetRxTpSduLength(rxTpPduInfoIdx, 0);    /* SBSW_COM_CSL02 */
    Com_SetRxTpConnectionState(rxTpPduInfoIdx, COM_READY_RXTPCONNECTIONSTATE);  /* SBSW_COM_CSL02 */
  }
}
#endif

#if ((COM_RECEIVE_SIGNAL_MACRO_API == STD_OFF) && (COM_RXACCESSINFO == STD_ON) && ((COM_BUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO == STD_ON)))  /* COV_COM_VAR_ELISA_STD_OFF_TF_tx_tf_tf_tf */
/**********************************************************************************************************************
  Com_ReceiveSignal_GetRxSigBuffer
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_ReceiveSignal_GetRxSigBuffer(Com_SignalIdType idxRxAccessInfo, P2VAR(void, AUTOMATIC, COM_APPL_VAR) SignalDataPtr)
{
  uint8 retVal = E_OK;

  /* #10 If the passed ComSignal uses a buffer, copy the currently stored value to passed SignalDataPtr */
  /* Hint: the switching is performed in two separate switch cases. */
# if (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsBufferUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_BufferIdxOfRxAccessInfoType idxBuffer = Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo);
    switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
    {
#  if (COM_EXISTS_UINT8_APPLTYPEOFRXACCESSINFO == STD_ON)
      case COM_UINT8_APPLTYPEOFRXACCESSINFO:
      {
        *((P2VAR(uint8, AUTOMATIC, COM_APPL_VAR)) SignalDataPtr) = Com_GetRxSigBufferUInt8(idxBuffer);  /* SBSW_COM_PTR_API */
        break;
      }
#  endif
#  if (COM_EXISTS_SINT8_APPLTYPEOFRXACCESSINFO == STD_ON)
      case COM_SINT8_APPLTYPEOFRXACCESSINFO:
      {
        *((P2VAR(sint8, AUTOMATIC, COM_APPL_VAR)) SignalDataPtr) = Com_GetRxSigBufferSInt8(idxBuffer);  /* SBSW_COM_PTR_API */
        break;
      }
#  endif
#  if (COM_EXISTS_UINT16_APPLTYPEOFRXACCESSINFO == STD_ON)
      case COM_UINT16_APPLTYPEOFRXACCESSINFO:
      {
        *((P2VAR(uint16, AUTOMATIC, COM_APPL_VAR)) SignalDataPtr) = Com_GetRxSigBufferUInt16(idxBuffer);        /* SBSW_COM_PTR_API */
        break;
      }
#  endif
#  if (COM_EXISTS_SINT16_APPLTYPEOFRXACCESSINFO == STD_ON)
      case COM_SINT16_APPLTYPEOFRXACCESSINFO:
      {
        *((P2VAR(sint16, AUTOMATIC, COM_APPL_VAR)) SignalDataPtr) = Com_GetRxSigBufferSInt16(idxBuffer);        /* SBSW_COM_PTR_API */
        break;
      }
#  endif
#  if (COM_EXISTS_UINT32_APPLTYPEOFRXACCESSINFO == STD_ON)
      case COM_UINT32_APPLTYPEOFRXACCESSINFO:
      {
        SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
        *((P2VAR(uint32, AUTOMATIC, COM_APPL_VAR)) SignalDataPtr) = Com_GetRxSigBufferUInt32(idxBuffer);        /* SBSW_COM_PTR_API */
        SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
        break;
      }
#  endif
#  if (COM_EXISTS_SINT32_APPLTYPEOFRXACCESSINFO == STD_ON)
      case COM_SINT32_APPLTYPEOFRXACCESSINFO:
      {
        SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
        *((P2VAR(sint32, AUTOMATIC, COM_APPL_VAR)) SignalDataPtr) = Com_GetRxSigBufferSInt32(idxBuffer);        /* SBSW_COM_PTR_API */
        SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
        break;
      }
#  endif
#  if (COM_EXISTS_UINT64_APPLTYPEOFRXACCESSINFO == STD_ON)
      case COM_UINT64_APPLTYPEOFRXACCESSINFO:
      {
        SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
        *((P2VAR(uint64, AUTOMATIC, COM_APPL_VAR)) SignalDataPtr) = Com_GetRxSigBufferUInt64(idxBuffer);        /* SBSW_COM_PTR_API */
        SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
        break;
      }
#  endif
#  if (COM_EXISTS_SINT64_APPLTYPEOFRXACCESSINFO == STD_ON)
      case COM_SINT64_APPLTYPEOFRXACCESSINFO:
      {
        SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
        *((P2VAR(sint64, AUTOMATIC, COM_APPL_VAR)) SignalDataPtr) = Com_GetRxSigBufferSInt64(idxBuffer);        /* SBSW_COM_PTR_API */
        SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
        break;
      }
#  endif
      default: /* COV_COM_MISRA */
        retVal = COM_SERVICE_NOT_AVAILABLE;
        break;
    }
  }
# endif
# if ((COM_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON))
  if(Com_IsRxSigBufferArrayBasedBufferUsedOfRxAccessInfo(idxRxAccessInfo))      /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_RxSigBufferArrayBasedIterType idxBuffer = Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(idxRxAccessInfo);
    switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
    {
      case COM_UINT8_N_APPLTYPEOFRXACCESSINFO:
      {
        SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
        VStdMemCpyRamToRam((P2VAR(uint8, AUTOMATIC, COM_APPL_VAR)) SignalDataPtr, Com_GetAddrRxSigBufferArrayBased(idxBuffer), Com_GetRxSigBufferArrayBasedBufferLengthOfRxAccessInfo(idxRxAccessInfo));        /* SBSW_COM_PTR_API */
        SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
        break;
      }
      default: /* COV_COM_MISRA */
        retVal = COM_SERVICE_NOT_AVAILABLE;
        break;
    }
  }
# endif
  return retVal;
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif

#if ((COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_ReadSignalGroupData
 **********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 **********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_ReadSignalGroupData(Com_SignalGroupIdType SignalGroupId)
{
  /* #10 Copy the values of all ComGroupSignals of the passed ComSignalsGroup from the shadow buffer to the ComGroupSignal buffer */
  Com_RxAccessInfoIterType rxAccessInfoIndidx = Com_GetRxAccessInfoGrpSigIndStartIdxOfRxSigGrpInfo(SignalGroupId);
  for(; rxAccessInfoIndidx < Com_GetRxAccessInfoGrpSigIndEndIdxOfRxSigGrpInfo(SignalGroupId); rxAccessInfoIndidx++)
  {
    Com_RxAccessInfoIterType idxRxAccessInfo = Com_GetRxAccessInfoGrpSigInd(rxAccessInfoIndidx);
    Com_ReadGroupSignalFromShadowBuffer(idxRxAccessInfo);
  }
}
#endif

#if ((COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO == STD_ON))        /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
/**********************************************************************************************************************
  Com_GetRxDynamicLength
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(PduLengthType, COM_CODE) Com_GetRxDynamicLength(PduLengthType sduLength, Com_RxAccessInfoIterType rxAccessInfoIdx)
{
  return sduLength - Com_GetStartByteInPduPositionOfRxAccessInfo(rxAccessInfoIdx);
}
#endif

#if (COM_GWINFOENDIDXOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_SignalGw_InitRxIpdu
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_InitRxIpdu(PduIdType ComPduId)
{
  /* #10 Reset all gateway event flags of the passed ComIPdu */
  Com_GwInfoEndIdxOfRxPduInfoType idxGwInfo = Com_GetGwInfoStartIdxOfRxPduInfo(ComPduId);
  for(; idxGwInfo < Com_GetGwInfoEndIdxOfRxPduInfo(ComPduId); idxGwInfo++)
  {
    Com_SetGwEvent(idxGwInfo, FALSE);   /* SBSW_COM_CSL02 */
  }
}
#endif

#if (COM_GWSIGMAPPINGENDIDXOFGWINFO == STD_ON)
/**********************************************************************************************************************
  Com_MainFunction_SignalRoutings
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_MainFunction_SignalRoutings(Com_GwInfoIterType idxGwInfo)
{
  /* #10 Iterate over all signal depending gateway mappings of the passed gateway info */
  Com_GwSigMappingEndIdxOfGwInfoType idxGwSigMapping = Com_GetGwSigMappingStartIdxOfGwInfo(idxGwInfo);
  for(; idxGwSigMapping < Com_GetGwSigMappingEndIdxOfGwInfo(idxGwInfo); idxGwSigMapping++)
  {
    Com_SignalIdType idxRxAccessInfo = (Com_SignalIdType) Com_GetRxAccessInfoIdxOfGwSigMapping(idxGwSigMapping);

    Com_SignalIdType txSigId = Com_GetTxSigIdOfGwSigMapping(idxGwSigMapping);
# if (COM_GWTIMEOUTINFO == STD_ON)
    /* #20 Start cyclic transmission for periodic I-PDUs with a configured GW Timeout and reload gw Timeout counter */
    Com_GwTout_Event((PduIdType) Com_GetTxPduInfoIdxOfTxSigInfo(txSigId));
# endif
# if (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON)
    if(Com_IsBufferUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_SIGNAL_ROUTE */
    {
      Com_BufferIdxOfRxAccessInfoType idxBuffer;
#  if (COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON)
      if(Com_IsShdBufferUsedOfRxAccessInfo(idxRxAccessInfo))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        idxBuffer = Com_GetShdBufferIdxOfRxAccessInfo(idxRxAccessInfo);
      }
      else
#  endif
      {
        idxBuffer = Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo);
      }
      /* #30 Send signal with the received value, the source buffer of the value depends on the signal ApplType */
      /* Hint: the ApplType specific switching is performed in two separate switch cases. */
      /* #40 If the signal is a ComGroupSignal the shadow buffer is used, otherwise the normal signal buffer is used */
      switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
      {
/* jet: GeneralSwitchCasePerApplType snippet */
#  if (COM_RXSIGBUFFERUINT8 == STD_ON)
        case COM_UINT8_APPLTYPEOFRXACCESSINFO:
        {
          (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferUInt8(idxBuffer), 0); /* SBSW_COM_FCTCALL_WITH_P2CONST */
          break;
        }
#  endif
#  if (COM_RXSIGBUFFERSINT8 == STD_ON)
        case COM_SINT8_APPLTYPEOFRXACCESSINFO:
        {
          (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferSInt8(idxBuffer), 0); /* SBSW_COM_FCTCALL_WITH_P2CONST */
          break;
        }
#  endif
#  if (COM_RXSIGBUFFERUINT16 == STD_ON)
        case COM_UINT16_APPLTYPEOFRXACCESSINFO:
        {
          (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferUInt16(idxBuffer), 0);        /* SBSW_COM_FCTCALL_WITH_P2CONST */
          break;
        }
#  endif
#  if (COM_RXSIGBUFFERSINT16 == STD_ON)
        case COM_SINT16_APPLTYPEOFRXACCESSINFO:
        {
          (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferSInt16(idxBuffer), 0);        /* SBSW_COM_FCTCALL_WITH_P2CONST */
          break;
        }
#  endif
#  if (COM_RXSIGBUFFERUINT32 == STD_ON)
        case COM_UINT32_APPLTYPEOFRXACCESSINFO:
        {
          (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferUInt32(idxBuffer), 0);        /* SBSW_COM_FCTCALL_WITH_P2CONST */
          break;
        }
#  endif
#  if (COM_RXSIGBUFFERSINT32 == STD_ON)
        case COM_SINT32_APPLTYPEOFRXACCESSINFO:
        {
          (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferSInt32(idxBuffer), 0);        /* SBSW_COM_FCTCALL_WITH_P2CONST */
          break;
        }
#  endif
#  if (COM_RXSIGBUFFERUINT64 == STD_ON)
        case COM_UINT64_APPLTYPEOFRXACCESSINFO:
        {
          (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferUInt64(idxBuffer), 0);        /* SBSW_COM_FCTCALL_WITH_P2CONST */
          break;
        }
#  endif
#  if (COM_RXSIGBUFFERSINT64 == STD_ON)
        case COM_SINT64_APPLTYPEOFRXACCESSINFO:
        {
          (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferSInt64(idxBuffer), 0);        /* SBSW_COM_FCTCALL_WITH_P2CONST */
          break;
        }
#  endif
        default:       /* COV_COM_MISRA */
          break;
      }
    }
    else
# endif
# if ((COM_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON))
    if(Com_IsRxSigBufferArrayBasedBufferUsedOfRxAccessInfo(idxRxAccessInfo))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      Com_RxSigBufferArrayBasedIterType idxBuffer;
#  if (COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON)
      if(Com_IsRxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo(idxRxAccessInfo))       /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        idxBuffer = Com_GetRxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo(idxRxAccessInfo);
      }
      else
#  endif
      {
        idxBuffer = Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(idxRxAccessInfo);
      }

      switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
      {
        case COM_UINT8_N_APPLTYPEOFRXACCESSINFO:
        {
          (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferArrayBased(idxBuffer), 0);    /* SBSW_COM_FCTCALL_WITH_P2CONST */
          break;
        }
        default:       /* COV_COM_MISRA */
          break;
      }
    }
    else
# endif
    {
      (void) Com_SendSignal_Processing(txSigId, NULL_PTR, 0);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
    }
    COM_DUMMY_STATEMENT(idxRxAccessInfo);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  }
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif

#if (COM_GWSIGGRPMAPPINGENDIDXOFGWINFO == STD_ON)
/**********************************************************************************************************************
  Com_MainFunction_SignalGroupRoutings
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_MainFunction_SignalGroupRoutings(Com_GwInfoIterType idxGwInfo)
{
  P2CONST(uint8, AUTOMATIC, COM_APPL_VAR) shdBuffer = NULL_PTR;
  /* #10 Iterate over all signal group depending gateway mappings of the passed gateway info */
  Com_GwSigGrpMappingEndIdxOfGwInfoType idxGwSigGrpMapping = Com_GetGwSigGrpMappingStartIdxOfGwInfo(idxGwInfo);
  for(; idxGwSigGrpMapping < Com_GetGwSigGrpMappingEndIdxOfGwInfo(idxGwInfo); idxGwSigGrpMapping++)
  {
    Com_SignalGroupIdType txSigGrpId = Com_GetTxSigGrpIdOfGwSigGrpMapping(idxGwSigGrpMapping);
    Com_GwGrpSigMappingEndIdxOfGwSigGrpMappingType idxGwGrpSigMapping = Com_GetGwGrpSigMappingStartIdxOfGwSigGrpMapping(idxGwSigGrpMapping);

# if (COM_GWTIMEOUTINFO == STD_ON)
    /* #20 Start cyclic transmission for periodic I-PDUs with a configured GW Timeout and reload gw Timeout counter */
    Com_GwTout_Event((PduIdType) Com_GetTxPduInfoIdxOfTxSigGrpInfo(txSigGrpId));
# endif

    /* #30 Iterate over all related group signal mappings */
    for(; idxGwGrpSigMapping < Com_GetGwGrpSigMappingEndIdxOfGwSigGrpMapping(idxGwSigGrpMapping); idxGwGrpSigMapping++)
    {
      Com_SignalIdType idxRxAccessInfo = (Com_SignalIdType) Com_GetRxAccessInfoIdxOfGwGrpSigMapping(idxGwGrpSigMapping);
      Com_SignalIdType txSigId = Com_GetTxSigIdOfGwGrpSigMapping(idxGwGrpSigMapping);
# if (COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON)
      if(Com_IsShdBufferUsedOfRxAccessInfo(idxRxAccessInfo))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        Com_ShdBufferIdxOfRxAccessInfoType idxShdBuffer = Com_GetShdBufferIdxOfRxAccessInfo(idxRxAccessInfo);

        /* #40 Send signal with the value of the related shadow buffer, the buffer depends on the ApplType of the ComGroupSignal */
        switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
        {
/* jet: GeneralSwitchCasePerApplType snippet */
#  if (COM_RXSIGBUFFERUINT8 == STD_ON)
          case COM_UINT8_APPLTYPEOFRXACCESSINFO:
          {
            (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferUInt8(idxShdBuffer), 0);    /* SBSW_COM_FCTCALL_WITH_P2CONST */
            break;
          }
#  endif
#  if (COM_RXSIGBUFFERSINT8 == STD_ON)
          case COM_SINT8_APPLTYPEOFRXACCESSINFO:
          {
            (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferSInt8(idxShdBuffer), 0);    /* SBSW_COM_FCTCALL_WITH_P2CONST */
            break;
          }
#  endif
#  if (COM_RXSIGBUFFERUINT16 == STD_ON)
          case COM_UINT16_APPLTYPEOFRXACCESSINFO:
          {
            (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferUInt16(idxShdBuffer), 0);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
            break;
          }
#  endif
#  if (COM_RXSIGBUFFERSINT16 == STD_ON)
          case COM_SINT16_APPLTYPEOFRXACCESSINFO:
          {
            (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferSInt16(idxShdBuffer), 0);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
            break;
          }
#  endif
#  if (COM_RXSIGBUFFERUINT32 == STD_ON)
          case COM_UINT32_APPLTYPEOFRXACCESSINFO:
          {
            (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferUInt32(idxShdBuffer), 0);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
            break;
          }
#  endif
#  if (COM_RXSIGBUFFERSINT32 == STD_ON)
          case COM_SINT32_APPLTYPEOFRXACCESSINFO:
          {
            (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferSInt32(idxShdBuffer), 0);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
            break;
          }
#  endif
#  if (COM_RXSIGBUFFERUINT64 == STD_ON)
          case COM_UINT64_APPLTYPEOFRXACCESSINFO:
          {
            (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferUInt64(idxShdBuffer), 0);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
            break;
          }
#  endif
#  if (COM_RXSIGBUFFERSINT64 == STD_ON)
          case COM_SINT64_APPLTYPEOFRXACCESSINFO:
          {
            (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferSInt64(idxShdBuffer), 0);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
            break;
          }
#  endif
          default:     /* COV_COM_MISRA */
            break;
        }
      }
      else
# endif
# if ((COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON))
      if(Com_IsRxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo(idxRxAccessInfo))       /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        Com_RxSigBufferArrayBasedIterType idxShdBuffer = Com_GetRxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo(idxRxAccessInfo);
        switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
        {
          case COM_UINT8_N_APPLTYPEOFRXACCESSINFO:
          {
            (void) Com_SendSignal_Processing(txSigId, Com_GetAddrRxSigBufferArrayBased(idxShdBuffer), 0);       /* SBSW_COM_FCTCALL_WITH_P2CONST */
            break;
          }
          default:     /* COV_COM_MISRA */
            break;
        }
      }
      else
# endif
      {
        (void) Com_SendSignal_Processing(txSigId, NULL_PTR, 0); /* SBSW_COM_FCTCALL_WITH_P2CONST */
      }
      COM_DUMMY_STATEMENT(idxRxAccessInfo);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
    }
    /* #50 Call Com_SendSignalGroup for the related signal group with the respective shadowBuffer */
# if (COM_TXBUFFERUSEDOFTXSIGGRPINFO == STD_ON)
    if(Com_IsTxBufferUsedOfTxSigGrpInfo(txSigGrpId))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      shdBuffer = Com_GetAddrTxBuffer(Com_GetTxBufferStartIdxOfTxSigGrpInfo(txSigGrpId));
    }
# endif
    (void) Com_SendSignalGroup_Processing(txSigGrpId, shdBuffer);       /* SBSW_COM_FCTCALL_WITH_P2CONST */
  }
}       /* PRQA S 6030, 6080 */ /* MD_MSR_STCYC, MD_MSR_STMIF */
#endif

#if (COM_GWINFOUSEDOFRXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_SignalGw_SigEvent
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_SigEvent(Com_RxSigInfoIterType idxRxSigInfo)
{
  /* #10 If the passed signal is routed, set the related gateway event flag */
  if(Com_IsGwInfoUsedOfRxSigInfo(idxRxSigInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_SetGwEvent(Com_GetGwInfoIdxOfRxSigInfo(idxRxSigInfo), TRUE);    /* SBSW_COM_CSL02 */
  }
}
#endif

#if (COM_GWINFOUSEDOFRXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_SignalGw_SigGrpEvent
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_SigGrpEvent(Com_RxSigGrpInfoIterType idxRxSigGrpInfo)
{
  /* #10 If the passed signal group is routed, set the related gateway event flag */
  if(Com_IsGwInfoUsedOfRxSigGrpInfo(idxRxSigGrpInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_SetGwEvent(Com_GetGwInfoIdxOfRxSigGrpInfo(idxRxSigGrpInfo), TRUE);      /* SBSW_COM_CSL02 */
  }
}
#endif

#if (COM_GWEVENTCACHE == STD_ON)
/**********************************************************************************************************************
  Com_MainFunction_GwDescription
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_MainFunction_GwDescription(void)
{
  /* #10 Iterate over all ComIPdus inside the cache */
  Com_GwDescription_EnterExclusiveArea();

  while(Com_GetGwEventCacheIndex() > 0)
  {
    PduIdType rxPdu;

    Com_HandleRxDeferredGwDescriptionIterType gwDeferredHandleSize;

    Com_DecGwEventCacheIndex();

    rxPdu = Com_GetGwEventCache(Com_GetGwEventCacheIndex());

    gwDeferredHandleSize = Com_GetHandleRxDeferredGwDescription(Com_GetHandleRxDeferredGwDescriptionIdxOfRxPduInfo(rxPdu));

    /* #20 If gw flag has not been reset */
    if(gwDeferredHandleSize > 0)
    {
      PduInfoType PduInfo;

      PduInfo.SduLength = (PduLengthType) (gwDeferredHandleSize - 1);
      PduInfo.SduDataPtr = Com_GetAddrRxDefPduBuffer(Com_GetRxDefPduBufferStartIdxOfRxPduInfo(rxPdu));

      /* #30 Process gateway description */
      Com_RxProcessing_GwDescriptionEvent(rxPdu, &PduInfo);     /* SBSW_COM_FCTCALL_STACKPTR */
    }

    /* #40 Reset deferred gw description flag */
    Com_SetHandleRxDeferredGwDescription(Com_GetHandleRxDeferredGwDescriptionIdxOfRxPduInfo(rxPdu), 0); /* SBSW_COM_CSL03 */

    Com_GwDescription_ThresholdCheck();
  }

  Com_GwDescription_ExitExclusiveArea();
}
#endif

#if (COM_GWEVENTCACHE == STD_ON)
/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_GwDescription_EnterExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_GwDescription_EnterExclusiveArea(void)
{
  /* #10 Enter the gw description routing exclusive area */
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_BOTH();
}

/**********************************************************************************************************************
  Com_GwDescription_ExitExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_GwDescription_ExitExclusiveArea(void)
{
  /* #05 Reload the counter with the threshold value */
  Com_SetGatewayDescriptionProcessingISRLockCounter(Com_GetGatewayDescriptionProcessingISRLockThreshold());
  /* #10 Exit the gw description routing exclusive area */
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_BOTH();
}

/**********************************************************************************************************************
  Com_GwDescription_ThresholdCheck
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_GwDescription_ThresholdCheck(void)
{
  if(Com_GetGatewayDescriptionProcessingISRLockCounter() > 0)
  {
    Com_DecGatewayDescriptionProcessingISRLockCounter();
  }
  else
  {
    Com_GwDescription_ExitExclusiveArea();
    Com_GwDescription_EnterExclusiveArea();
  }
}

#endif

#if (COM_RXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_InitRxIpdu
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_InitRxIpdu(PduIdType ComRxPduId)
{
  /* Initialize signal buffer */
# if (COM_RXACCESSINFOINDENDIDXOFRXPDUINFO == STD_ON)
  {
    /* #10 Iterate over all ComSignals and ComGroupSignals and initialize the corresponding buffers and shadow buffers */
    Com_RxAccessInfoIndEndIdxOfRxPduInfoType com_RxAccessInfoIndIdx = Com_GetRxAccessInfoIndStartIdxOfRxPduInfo(ComRxPduId);
    for(; com_RxAccessInfoIndIdx < Com_GetRxAccessInfoIndEndIdxOfRxPduInfo(ComRxPduId); com_RxAccessInfoIndIdx++)
    {
      Com_RxAccessInfoIterType com_RxAccessInfoIdx = Com_GetRxAccessInfoInd(com_RxAccessInfoIndIdx);
      /* jet: SetRxSigBufferValue snippet */
#  if ((COM_INITVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON))
      if(Com_IsInitValueUsedOfRxAccessInfo(com_RxAccessInfoIdx) && Com_IsBufferUsedOfRxAccessInfo(com_RxAccessInfoIdx)) /* COV_COM_RXPROCESSING_TX */
      {
        Com_Signal_SetRxSigBufferValue(com_RxAccessInfoIdx, Com_GetBufferIdxOfRxAccessInfo(com_RxAccessInfoIdx), Com_GetInitValueIdxOfRxAccessInfo(com_RxAccessInfoIdx));
      }
#  endif
#  if ((COM_CONSTVALUEARRAYBASEDINITVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO == STD_ON))
      if(Com_IsConstValueArrayBasedInitValueUsedOfRxAccessInfo(com_RxAccessInfoIdx) && Com_IsRxSigBufferArrayBasedBufferUsedOfRxAccessInfo(com_RxAccessInfoIdx))        /* COV_COM_RXPROCESSING_TX */
      {
        Com_Signal_SetRxSigBufferArrayBasedValue(com_RxAccessInfoIdx, Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(com_RxAccessInfoIdx),
                                                 Com_GetConstValueArrayBasedInitValueStartIdxOfRxAccessInfo(com_RxAccessInfoIdx),
                                                 (PduLengthType) Com_GetConstValueArrayBasedInitValueLengthOfRxAccessInfo(com_RxAccessInfoIdx));
      }
#  endif

#  if (COM_ISGROUPSIGNALOFRXACCESSINFO == STD_ON)
      if(Com_IsIsGroupSignalOfRxAccessInfo(com_RxAccessInfoIdx))        /* COV_COM_RXPROCESSING */
      {
        /* jet: SetRxSigBufferValue snippet */
#   if ((COM_INITVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON))
        if(Com_IsInitValueUsedOfRxAccessInfo(com_RxAccessInfoIdx) && Com_IsShdBufferUsedOfRxAccessInfo(com_RxAccessInfoIdx))    /* COV_COM_RXPROCESSING_SHADOWSIGNAL */
        {
          Com_Signal_SetRxSigBufferValue(com_RxAccessInfoIdx, Com_GetShdBufferIdxOfRxAccessInfo(com_RxAccessInfoIdx), Com_GetInitValueIdxOfRxAccessInfo(com_RxAccessInfoIdx));
        }
#   endif
#   if ((COM_CONSTVALUEARRAYBASEDINITVALUEUSEDOFRXACCESSINFO == STD_ON) && (COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON))
        if(Com_IsConstValueArrayBasedInitValueUsedOfRxAccessInfo(com_RxAccessInfoIdx) && Com_IsRxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo(com_RxAccessInfoIdx))   /* COV_COM_RXPROCESSING_SHADOWSIGNAL */
        {
          Com_Signal_SetRxSigBufferArrayBasedValue(com_RxAccessInfoIdx, Com_GetRxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo(com_RxAccessInfoIdx),
                                                   Com_GetConstValueArrayBasedInitValueStartIdxOfRxAccessInfo(com_RxAccessInfoIdx),
                                                   (PduLengthType) Com_GetConstValueArrayBasedInitValueLengthOfRxAccessInfo(com_RxAccessInfoIdx));
        }
#   endif

      }
#  endif
    }
  }
# endif
# if(COM_ARRAYACCESSUSEDOFRXSIGGRPINFO == STD_ON)
  {
    /* #20 Iterate over all ComSignalGroups and if ArrayAccess is used initialize the corresponding shadow buffer */
    Com_RxSigGrpInfoIndIterType com_SignalGroupIndId = Com_GetRxSigGrpInfoIndStartIdxOfRxPduInfo(ComRxPduId);
    for(; com_SignalGroupIndId < Com_GetRxSigGrpInfoIndEndIdxOfRxPduInfo(ComRxPduId); com_SignalGroupIndId++)
    {
      Com_RxSigGrpInfoIterType com_SignalGroupId = Com_GetRxSigGrpInfoInd(com_SignalGroupIndId);
      if(Com_IsArrayAccessUsedOfRxSigGrpInfo(com_SignalGroupId))        /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        Com_RxSigBufferUInt8IterType idxShdBufferIdx = Com_GetRxSigBufferUInt8StartIdxOfRxSigGrpInfo(com_SignalGroupId);
        Com_ConstValueUInt8IterType intialValueStartIdx = Com_GetConstValueUInt8StartIdxOfRxSigGrpInfo(com_SignalGroupId);

        VStdMemCpyRamToRam(Com_GetAddrRxSigBufferUInt8(idxShdBufferIdx), Com_GetAddrConstValueUInt8(intialValueStartIdx), Com_GetRxSigBufferUInt8LengthOfRxSigGrpInfo(com_SignalGroupId));      /* SBSW_COM_CSL01 */
      }
    }
  }
# endif
# if (COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
  /* #30 If the Rx ComIPdu is handled deferred, reset the "Handle Deferred" flag */
  if(Com_IsHandleRxPduDeferredUsedOfRxPduInfo(ComRxPduId))      /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_SetHandleRxPduDeferred(Com_GetHandleRxPduDeferredIdxOfRxPduInfo(ComRxPduId), 0);        /* SBSW_COM_CSL03 */

#  if (COM_GWEVENTCACHE == STD_ON)
    /* #40 If a gateway description exists, reset the gateway description handle */
    if(Com_IsGwTxPduDescriptionInfoUsedOfRxPduInfo(ComRxPduId)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      Com_SetHandleRxDeferredGwDescription(Com_GetHandleRxDeferredGwDescriptionIdxOfRxPduInfo(ComRxPduId), 0);  /* SBSW_COM_CSL03 */
    }
#  endif
  }
# endif
}       /* PRQA S 6010 */ /* MD_MSR_STPTH */
#endif

#if (COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxDeferredPduProcessing
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxDeferredPduProcessing(void)
{
  /* Deferred Signal Processing.  */
  Com_SizeOfRxPduInfoType idxRxPduInfo;

  FctPtrCacheStrct deferredFctPtrCacheStrct;

# if (COM_RXDEFERREDFCTPTRCACHE == STD_ON)
  deferredFctPtrCacheStrct.ptrToCache = Com_GetAddrRxDeferredFctPtrCache(0);
  deferredFctPtrCacheStrct.cacheSize = Com_GetSizeOfRxDeferredFctPtrCache();
# else
  deferredFctPtrCacheStrct.ptrToCache = NULL_PTR;
  deferredFctPtrCacheStrct.cacheSize = 0;
# endif
  deferredFctPtrCacheStrct.cacheIndex = 0;

# if (COM_RXDEFERREDEVENTCACHE == STD_ON)
  /* #10 If all received deferred processed events fitted into the deferred event cache */
  if(Com_GetRxNextEventCacheEnty() != COM_NO_HANDLERXPDUDEFERREDIDXOFRXPDUINFO)
  {
    Com_RxProcessing_EnterExclusiveArea_Deferred();
    /* #20 Iterate over all stored deferred events, and process them */
    while(Com_GetRxNextEventCacheEnty() > 0)
    {
      Com_DecRxNextEventCacheEnty();
      idxRxPduInfo = Com_GetRxDeferredEventCache(Com_GetRxNextEventCacheEnty());
      if(Com_IsRxPduGrpActive(idxRxPduInfo))
      {
        if(0 < Com_GetHandleRxPduDeferred(Com_GetHandleRxPduDeferredIdxOfRxPduInfo(idxRxPduInfo)))      /* COV_COM_DEFERRED_EVENTCACHE_RUNTIMECHECK */
        {
          Com_RxProcessDeferredPDU((PduIdType) idxRxPduInfo, &deferredFctPtrCacheStrct);        /* SBSW_COM_FCTPTR_CACHE_PTR */
        }
      }
      Com_RxProcessing_ThresholdCheck_Deferred(&deferredFctPtrCacheStrct);      /* SBSW_COM_FCTPTR_CACHE_PTR_1 */
    }
    Com_RxProcessing_ExitExclusiveArea_Deferred();
  }
  /* #30 Otherwise iterate over all Rx ComIPdus and If a "process deferred" flag is set, process that Rx ComIPdu */
  else
# endif
  {
    Com_RxProcessing_EnterExclusiveArea_Deferred();
    for(idxRxPduInfo = 0; idxRxPduInfo < Com_GetSizeOfRxPduInfo(); idxRxPduInfo++)
    {
      if(Com_RxProcessing_IsDeferredProcessingRequested(idxRxPduInfo) == TRUE)
      {
        Com_RxProcessDeferredPDU((PduIdType) idxRxPduInfo, &deferredFctPtrCacheStrct);  /* SBSW_COM_FCTPTR_CACHE_PTR_1 */
      } /* Is HandleRxPduDeferred Used */
      Com_RxProcessing_ThresholdCheck_Deferred(&deferredFctPtrCacheStrct);      /* SBSW_COM_FCTPTR_CACHE_PTR_1 */
    }
    Com_RxProcessing_ExitExclusiveArea_Deferred();
# if (COM_RXDEFERREDEVENTCACHE == STD_ON)
    Com_SetRxNextEventCacheEnty(0);
# endif
  }
# if (COM_RXDEFERREDFCTPTRCACHE == STD_ON)
  /* #40 Call all cached notification and invalid notification functions. */
  Com_ProcessRxFctPtrCache(&deferredFctPtrCacheStrct);  /* SBSW_COM_FCTPTR_CACHE_PTR_1 */
# endif
}
#endif

#if (COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessDeferredPDU
**********************************************************************************************************************/
/*! Internal comment removed.
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
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessDeferredPDU(PduIdType idxRxPduInfo, P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) deferredfctPtrCacheStrctPtr)
{
  PduInfoType PduInfo;

  /* #10 Create a PduInfoType with the stored SduLength and the stored deferred Pdu data buffer */
  PduInfo.SduLength = Com_GetHandleRxPduDeferred(Com_GetHandleRxPduDeferredIdxOfRxPduInfo(idxRxPduInfo)) - 1;

  switch (Com_GetTypeOfRxPduInfo(idxRxPduInfo))
  {
# if (COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON)    /* COV_COM_VAR_ELISA_STD_OFF_XF */
    case COM_TP_TYPEOFRXPDUINFO:
    {
      /* #20 If the Rx ComIPdu is a Tp Pdu use the Tp buffer as SduDataPtr */
      Com_RxTpInfoIdxOfRxPduInfoType rxTpPduInfoIdx = Com_GetRxTpInfoIdxOfRxPduInfo(idxRxPduInfo);
      PduInfo.SduDataPtr = Com_GetAddrRxTpBuffer(Com_GetRxTpBufferStartIdxOfRxTpInfo(rxTpPduInfoIdx));
      break;
    }
# endif
# if (COM_EXISTS_NORMAL_TYPEOFRXPDUINFO == STD_ON)      /* COV_COM_VAR_FEAT_SUBSET_TX */
    case COM_NORMAL_TYPEOFRXPDUINFO:
    {
      /* #35 Use the normal deferred Pdu buffer if present, else use NULL_PTR */
      PduInfo.SduDataPtr = NULL_PTR;
#  if (COM_RXDEFPDUBUFFERUSEDOFRXPDUINFO == STD_ON)
      if(Com_IsRxDefPduBufferUsedOfRxPduInfo(idxRxPduInfo))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        PduInfo.SduDataPtr = Com_GetAddrRxDefPduBuffer(Com_GetRxDefPduBufferStartIdxOfRxPduInfo(idxRxPduInfo));
      }
#  endif
      break;
    }
# endif
    default:   /* COV_COM_MISRA */
      break;
  }

  /* #40 Reset the "Handle Deferred" flag */
  Com_SetHandleRxPduDeferred(Com_GetHandleRxPduDeferredIdxOfRxPduInfo(idxRxPduInfo), 0);        /* SBSW_COM_CSL03 */

# if (COM_RXSIGINFOENDIDXOFRXPDUINFO == STD_ON)
  /* #50 Do Rx ComSignal processing for the passed Rx ComIPdu */
  Com_RxProcessing_RxPduSigEvent(idxRxPduInfo, &PduInfo, deferredfctPtrCacheStrctPtr);  /* SBSW_COM_FCTCALL_STACKPTR */
# endif
# if (COM_RXSIGGRPINFOINDENDIDXOFRXPDUINFO == STD_ON)
  /* #60 Do Rx ComSignalGroup processing for the passed Rx ComIPdu */
  Com_RxProcessing_RxPduSigGrpEvent(idxRxPduInfo, &PduInfo, deferredfctPtrCacheStrctPtr);       /* SBSW_COM_FCTCALL_STACKPTR */
# endif

# if (COM_RXTOUTINFOUSEDOFRXPDUINFO == STD_ON)
  /* #70 If the passed Rx ComIPdu has a timeout, remove the timeout occurred flag */
  if(Com_IsRxTOutInfoUsedOfRxPduInfo(idxRxPduInfo))     /* COV_COM_RXDEFERRED_TIMEOUT */
  {
    Com_LMgt_RemoveOccurredFlag(Com_GetRxTOutInfoIdxOfRxPduInfo(idxRxPduInfo)); /* SBSW_COM_CSL02 */
  }
# endif

# if (COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON)    /* COV_COM_VAR_ELISA_STD_OFF_XF */
  /* #80 If the Rx ComIPdu is a Tp pdu, reset the tp parameter */
  if(Com_GetTypeOfRxPduInfo(idxRxPduInfo) == COM_TP_TYPEOFRXPDUINFO)    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_RxTpInfoIdxOfRxPduInfoType rxTpPduInfoIdx = Com_GetRxTpInfoIdxOfRxPduInfo(idxRxPduInfo);
    Com_SetRxTpWrittenBytesCounter(rxTpPduInfoIdx, 0);  /* SBSW_COM_CSL02 */
    Com_SetRxTpConnectionState(rxTpPduInfoIdx, COM_READY_RXTPCONNECTIONSTATE);  /* SBSW_COM_CSL02 */
  }
# endif
  COM_DUMMY_STATEMENT(PduInfo); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (COM_RXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxIndication_ProcessPdu
**********************************************************************************************************************/
/*! Internal comment removed.
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
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxIndication_ProcessPdu(PduIdType ComPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
  PduIdType comRxPduInfoIdx = ComPduId;
# if (COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
  /* #10 If the passed Rx ComIPdu is handled deferred */
  if(Com_IsHandleRxPduDeferredUsedOfRxPduInfo(comRxPduInfoIdx)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
#  if (COM_RXDEFPDUBUFFERUSEDOFRXPDUINFO == STD_ON)
    switch (Com_GetTypeOfRxPduInfo(comRxPduInfoIdx))
    {
#   if(COM_EXISTS_NORMAL_TYPEOFRXPDUINFO == STD_ON)     /* COV_COM_VAR_FEAT_SUBSET_TX */
      case COM_NORMAL_TYPEOFRXPDUINFO:
        /* #20 If the passed Rx ComIPdu is not a TP Pdu and no NULL_PTR, copy the passed Sdu data to the deferred Pdu buffer */
        if(PduInfoPtr->SduDataPtr != NULL_PTR)
        {
          VStdMemCpyRamToRam(Com_GetAddrRxDefPduBuffer(Com_GetRxDefPduBufferStartIdxOfRxPduInfo(comRxPduInfoIdx)), (P2CONST(uint8, AUTOMATIC, COM_APPL_DATA)) PduInfoPtr->SduDataPtr, (uint16_least) Com_GetRxDefPduBufferLengthOfRxPduInfo(comRxPduInfoIdx));  /* SBSW_COM_MEM_CPY_RAM2RAM */
        }
        break;
#   endif
#   if(COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON)   /* COV_COM_VAR_ELISA_STD_OFF_XF */
      case COM_TP_TYPEOFRXPDUINFO:
        break;
#   endif
      default: /* COV_COM_MISRA */
        break;
    }
#  endif
#  if (COM_RXDEFERREDEVENTCACHE == STD_ON)
    /* #30 If the passed ComIPdu is not cached yet, add the Rx ComIPdu to the deferred event cache */
    if(Com_GetHandleRxPduDeferred(Com_GetHandleRxPduDeferredIdxOfRxPduInfo(comRxPduInfoIdx)) == 0)      /* COV_COM_RXDEFERRED_PROCESSING */
    {
      Com_RxIndication_CacheDeferredEvent((Com_RxDeferredEventCacheType) comRxPduInfoIdx);
    }
#  endif
    /* #40 Store the passed Sdu length in the handle deferred buffer */
    Com_SetHandleRxPduDeferred(Com_GetHandleRxPduDeferredIdxOfRxPduInfo(comRxPduInfoIdx), (PduInfoPtr->SduLength + 1)); /* SBSW_COM_CSL03 */
#  if(COM_GWEVENTCACHE == STD_ON)
    Com_RxIndication_CacheDeferredDescriptionGwEvent(comRxPduInfoIdx);
#  endif
    SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
  }
# endif
# if ((COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON) && (COM_EXISTS_IMMEDIATE_SIGNALPROCESSINGOFRXPDUINFO == STD_ON))
  else
# endif
# if (COM_EXISTS_IMMEDIATE_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
    /* #50 Otherwise process the Rx ComIPdu immediate */
  {
    FctPtrCacheStrct immediateFctPtrCacheStrct;

#  if (COM_RXIMMEDIATEFCTPTRCACHE == STD_ON)
    uint32 fctPtrCache[COM_RXIMMEDIATEFCTPTRCACHESIZE];
    immediateFctPtrCacheStrct.ptrToCache = fctPtrCache;
    immediateFctPtrCacheStrct.cacheSize = COM_RXIMMEDIATEFCTPTRCACHESIZE;
#  else
    immediateFctPtrCacheStrct.ptrToCache = NULL_PTR;
    immediateFctPtrCacheStrct.cacheSize = 0;
#  endif
    immediateFctPtrCacheStrct.cacheIndex = 0;

    SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
#  if (COM_RXSIGINFOENDIDXOFRXPDUINFO == STD_ON)
    /* #60 Do Rx ComSignal processing */
    Com_RxProcessing_RxPduSigEvent(comRxPduInfoIdx, PduInfoPtr, &immediateFctPtrCacheStrct);    /* SBSW_COM_FCTCALL_WITH_P2CONST */ /* SBSW_COM_FCTPTR_CACHE_PTR_1 */
#  endif
#  if (COM_RXSIGGRPINFOINDENDIDXOFRXPDUINFO == STD_ON)
    /* #70 Do Rx ComSignalGroup processing */
    Com_RxProcessing_RxPduSigGrpEvent(comRxPduInfoIdx, PduInfoPtr, &immediateFctPtrCacheStrct); /* SBSW_COM_FCTCALL_WITH_P2CONST */ /* SBSW_COM_FCTPTR_CACHE_PTR_1 */
#  endif
#  if (COM_GWTXPDUDESCRIPTIONINFOUSEDOFRXPDUINFO == STD_ON)
    /* #75 If rxPdu has any configured GwDescriptions, do gateway description processing */
    if(Com_IsGwTxPduDescriptionInfoUsedOfRxPduInfo(comRxPduInfoIdx))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();

      Com_RxProcessing_GwDescriptionEvent(comRxPduInfoIdx,      /* SBSW_COM_FCTCALL_WITH_P2CONST */
                                          PduInfoPtr);

      SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
    }
#  endif

#  if (COM_RXTOUTINFOUSEDOFRXPDUINFO == STD_ON)
    /* #80 If the passed Rx ComIPdu has a timeout, remove the timeout occurred flag */
    if(Com_IsRxTOutInfoUsedOfRxPduInfo(comRxPduInfoIdx))        /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      Com_LMgt_RemoveOccurredFlag(Com_GetRxTOutInfoIdxOfRxPduInfo(comRxPduInfoIdx));    /* SBSW_COM_CSL02 */
    }
#  endif
    SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();

#  if (COM_RXIMMEDIATEFCTPTRCACHE == STD_ON)
    /* #90 Call all cached notification or invalid notifications and clear the immediate function pointer cache */
    Com_ProcessRxFctPtrCache(&immediateFctPtrCacheStrct);       /* SBSW_COM_FCTPTR_CACHE_PTR_1 */
#  endif

    COM_DUMMY_STATEMENT(immediateFctPtrCacheStrct);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  }     /* Immediate signal processing */
# endif
}       /* PRQA S 6050 */ /* MD_MSR_STCAL */
#endif

#if (COM_RXCBKFUNCPTR == STD_ON)
/* jet: ComNotificationCache snippet */
/**********************************************************************************************************************
  Com_ProcessRxFctPtrCache
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_ProcessRxFctPtrCache(P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr)
{
  while(fctPtrCacheStrctPtr->cacheIndex > 0)
  {
    Com_RxCbkFuncPtrIterType cbkFctPtrIdx;

    fctPtrCacheStrctPtr->cacheIndex = fctPtrCacheStrctPtr->cacheIndex - 1;      /* SBSW_COM_FCTPTR_CACHE_PTR_2 */
    cbkFctPtrIdx = (Com_RxCbkFuncPtrIterType) fctPtrCacheStrctPtr->ptrToCache[fctPtrCacheStrctPtr->cacheIndex];

    Com_GetRxCbkFuncPtr(cbkFctPtrIdx) ();       /* SBSW_COM_FCT_PTR_CALL_CSL03 */
  }
}

#endif

#if (COM_GWTXPDUDESCRIPTIONINFOUSEDOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_GwDescriptionEvent
**********************************************************************************************************************/
/*! Internal comment removed.
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
 **********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_GwDescriptionEvent(PduIdType rxComPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
  Com_GwTxPduDescriptionInfoEndIdxOfRxPduInfoType gwTxPduIdx = Com_GetGwTxPduDescriptionInfoStartIdxOfRxPduInfo(rxComPduId);
  /* #20 Iterate over all corresponding destination TxPDUs */
  for(; gwTxPduIdx < Com_GetGwTxPduDescriptionInfoEndIdxOfRxPduInfo(rxComPduId); gwTxPduIdx++)
  {
    Com_GwDescriptionAccessInfoEndIdxOfGwTxPduDescriptionInfoType gwDescrAccessIdx = Com_GetGwDescriptionAccessInfoStartIdxOfGwTxPduDescriptionInfo(gwTxPduIdx);

    Com_TxPduInfoIdxOfGwDescriptionAccessInfoType txPduID = Com_GetTxPduInfoIdxOfGwDescriptionAccessInfo(gwDescrAccessIdx);

    boolean gwDescriptionUpdated = FALSE;
    boolean sendTrigger = FALSE;
    boolean withoutRepetitionFlag = TRUE;

    /* #30 Process all descriptions that correspond to the same destination txPdu */
    for(; gwDescrAccessIdx < Com_GetGwDescriptionAccessInfoEndIdxOfGwTxPduDescriptionInfo(gwTxPduIdx); gwDescrAccessIdx++)
    {
      /* #31 Check if the source description is fully contained in received buffer */
      if(PduInfoPtr->SduLength >= Com_GetValidDlcOfGwDescriptionAccessInfo(gwDescrAccessIdx))
      {
# if (COM_RXUBMASKUSEDOFGWDESCRIPTIONACCESSINFO == STD_ON)
        /* #35 Check if the source description was updated */
        if(Com_RxProcessing_CheckGwDescriptionUB(gwDescrAccessIdx, PduInfoPtr) == TRUE) /* SBSW_COM_FCTCALL_WITH_P2CONST */
# endif
        {
          switch (Com_RxProcessing_ProcessDestinationDescription(PduInfoPtr->SduDataPtr, gwDescrAccessIdx))     /* SBSW_COM_FCTCALL_WITH_P2CONST */
          {
            case COM_TRANSMIT_TRIGGERWITHOUTREP:
              sendTrigger = TRUE;       /* #40 Set transmit flag if at least one description fulfills the transmit condition */
              break;
            case COM_TRANSMIT_TRIGGER:
              sendTrigger = TRUE;
              withoutRepetitionFlag = FALSE;    /* #50 Set repetition flag if at least one description requires repetitve transmit */
              break;
            default:   /* COV_COM_MISRA */
              break;
          }

          gwDescriptionUpdated = TRUE;
        }
      }
    }

# if (COM_GWTIMEOUTINFO == STD_ON)
    /* #55 If any gateway description belonging to same source and destination Pdu was updated */
    if(gwDescriptionUpdated == TRUE)
    {
      /* #60 Handle Gw Timeout if configured */
      Com_GwTout_Event((PduIdType) txPduID);
    }
# endif
# if ((COM_DIRECTOFTXMODETRUE == STD_ON) || (COM_DIRECTOFTXMODEFALSE == STD_ON))
    /* #70 If transmit condition is fulfilled (transmit flag is set) */
    if(sendTrigger == TRUE)
    {
      Com_TypeOfGwDescriptionAccessInfoType typeOfDescription = Com_GetTypeOfGwDescriptionAccessInfo(Com_GetGwDescriptionAccessInfoStartIdxOfGwTxPduDescriptionInfo(gwTxPduIdx));
      /* #80 Trigger the transmission of the PDU */
      Com_RxProcessing_GwDescriptionTransmit((PduIdType) txPduID, Com_IsGwDestinationDescriptionTypeImmediate(typeOfDescription), withoutRepetitionFlag);       /* COV_COM_IMMEDIATE_DESTINATION_DESCRIPTION */
    }
# endif
    COM_DUMMY_STATEMENT(withoutRepetitionFlag); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
    COM_DUMMY_STATEMENT(sendTrigger);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
    COM_DUMMY_STATEMENT(gwDescriptionUpdated);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  }
}       /* PRQA S 6080, 6030 */ /* MD_MSR_STMIF, MD_MSR_STCYC */

/**********************************************************************************************************************
  Com_RxProcessing_ProcessDestinationDescription
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 ********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_GwDescriptionTriggerType, COM_CODE) Com_RxProcessing_ProcessDestinationDescription(P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) rxPduBuffer,
                                                                                                         Com_GwDescriptionAccessInfoEndIdxOfGwTxPduDescriptionInfoType gwDescrAccessIdx)
{
  Com_GwDescriptionTriggerType retVal = COM_TRANSMIT_TRIGGER_NOTFULFILLED;

  Com_TypeOfGwDescriptionAccessInfoType descriptionType = Com_GetTypeOfGwDescriptionAccessInfo(gwDescrAccessIdx);

  boolean triggerCondition = TRUE;

  /* #10 Copy configured bytes into destination txPduBuffers */
  boolean hasContentChanged = Com_GwDescriptionCopyBuffer(rxPduBuffer, gwDescrAccessIdx);       /* SBSW_COM_FCTCALL_WITH_P2CONST */

  if(Com_IsGwDestinationDescriptionTypeOnChange(descriptionType))       /* TRIGGERED ON CHANGE */
  {
    triggerCondition = hasContentChanged;
  }

  /* #20 If transferProperty is not type of ON-CHANGE or content of description has changed */
  if(triggerCondition == TRUE)
  {
    /* #30 Set TRIGGERED and WITHOUTREPETITION FLAG if transfer property is TriggeredWithoutRepetition or TriggeredOnChangeWithoutRepetition */
    if(Com_IsGwDestinationDescriptionTypeWithoutRepetion(descriptionType))
    {
      retVal = COM_TRANSMIT_TRIGGERWITHOUTREP;
    }
    /* #40 otherwise set TRIGGERED FLAG if transfer property is Triggered */
    else if(Com_IsGwDestinationDescriptionTypeTriggered(descriptionType))
    {
      retVal = COM_TRANSMIT_TRIGGER;
    }
    else
    {
      /* #50 otherwise transfer property is assumed to be PENDING */
      retVal = COM_TRANSMIT_TRIGGER_NOTFULFILLED;
    }
  }

# if (COM_TXUBMASKUSEDOFGWDESCRIPTIONACCESSINFO == STD_ON)
  /* #60 If the destination description has a configured UB, set UB in the Tx ComIPdu Buffer. */
  if(Com_IsTxUbMaskUsedOfGwDescriptionAccessInfo(gwDescrAccessIdx))
  {
    Com_TxBufferEndIdxOfTxPduInfoType ubIdx = Com_GetTxBufferUbIdxOfGwDescriptionAccessInfo(gwDescrAccessIdx);
    Com_SetTxBuffer(ubIdx, (Com_GetTxBuffer(ubIdx) | Com_GetConstValueUInt8(Com_GetTxUbMaskIdxOfGwDescriptionAccessInfo(gwDescrAccessIdx))));   /* SBSW_COM_CSL03 */
  }
# endif

  return retVal;
}

 /**********************************************************************************************************************
  Com_GwDescriptionCopyBuffer
 *********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 ********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_GwDescriptionCopyBuffer(P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) rxPduBuffer, Com_GwDescriptionAccessInfoEndIdxOfGwTxPduDescriptionInfoType gwDescrAccessIdx)
{
  boolean hasContentChanged = FALSE;

  P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) destinationBuffer;
  boolean isBigEndian;

  P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) sourceBuffer = &(rxPduBuffer[Com_GetSourceStartBytePositionOfGwDescriptionAccessInfo(gwDescrAccessIdx)]);
  uint8 sourceStartBitIndex = Com_GetGwSourceStartBitIndexOfGwDescriptionAccessInfo(gwDescrAccessIdx);
  uint8 bitOffset = Com_GetBitOffsetOfGwDescriptionAccessInfo(gwDescrAccessIdx);

  Com_TxBufferLengthOfGwDescriptionAccessInfoType destinationBufferSize = Com_GetTxBufferLengthOfGwDescriptionAccessInfo(gwDescrAccessIdx);

# if (COM_EXISTS_BIG_ENDIAN_ENDIANNESSOFGWDESCRIPTIONACCESSINFO == STD_ON)
  if(Com_GetEndiannessOfGwDescriptionAccessInfo(gwDescrAccessIdx) == COM_BIG_ENDIAN_ENDIANNESSOFGWDESCRIPTIONACCESSINFO)
  {
    destinationBuffer = Com_GetAddrTxBuffer(Com_GetTxBufferEndIdxOfGwDescriptionAccessInfo(gwDescrAccessIdx) - 1);
    isBigEndian = TRUE;
  }
  else
# endif
  {
    destinationBuffer = Com_GetAddrTxBuffer(Com_GetTxBufferStartIdxOfGwDescriptionAccessInfo(gwDescrAccessIdx));
    isBigEndian = FALSE;
  }

  switch (Com_GetCopyTypeOfGwDescriptionAccessInfo(gwDescrAccessIdx))
  {     /* #10 If source and destination description are bit aligned respective to their relative start bit position, copy directly the desired bytes. */
# if (COM_EXISTS_DIRECT_COPYTYPEOFGWDESCRIPTIONACCESSINFO == STD_ON)
    case COM_DIRECT_COPYTYPEOFGWDESCRIPTIONACCESSINFO:
    {
      /* Assume direct copy is always little endian. */
      hasContentChanged = Com_GwDescription_DirectCopy(gwDescrAccessIdx, sourceBuffer, destinationBuffer, destinationBufferSize);       /* SBSW_COM_GW_DESCRIPTION_COPYBUFFER */
      break;
    }
# endif
# if (COM_EXISTS_RIGHTSHIFT_COPYTYPEOFGWDESCRIPTIONACCESSINFO == STD_ON)
      /* #20 Otherwise if relative start bit index of source is bigger than destination, perform right shift copy operation. */
    case COM_RIGHTSHIFT_COPYTYPEOFGWDESCRIPTIONACCESSINFO:
    {
      hasContentChanged = Com_GwDescription_RightShiftCopy(sourceBuffer, destinationBuffer, (uint16) destinationBufferSize, sourceStartBitIndex, bitOffset, Com_GetBitSizeOfGwDescriptionAccessInfo(gwDescrAccessIdx), isBigEndian);    /* SBSW_COM_GW_DESCRIPTION_COPYBUFFER */
      break;
    }
# endif
# if (COM_EXISTS_LEFTSHIFT_COPYTYPEOFGWDESCRIPTIONACCESSINFO == STD_ON)
      /* #30 Otherwise perform left shift copy operation. */
    case COM_LEFTSHIFT_COPYTYPEOFGWDESCRIPTIONACCESSINFO:
    {
      hasContentChanged = Com_GwDescription_LeftShiftCopy(sourceBuffer, destinationBuffer, (uint16) destinationBufferSize, sourceStartBitIndex, bitOffset, Com_GetBitSizeOfGwDescriptionAccessInfo(gwDescrAccessIdx), isBigEndian);     /* SBSW_COM_GW_DESCRIPTION_COPYBUFFER */
      break;
    }
# endif
    default:   /* COV_COM_MISRA */
      break;
  }

  COM_DUMMY_STATEMENT(sourceStartBitIndex);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(bitOffset);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(isBigEndian);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return hasContentChanged;
}

# if ((COM_DIRECTOFTXMODETRUE == STD_ON) || (COM_DIRECTOFTXMODEFALSE == STD_ON))
/**********************************************************************************************************************
  Com_RxProcessing_GwDescriptionTransmit
**********************************************************************************************************************/
/*! Internal comment removed.
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
 ***********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_GwDescriptionTransmit(PduIdType txPduID, boolean isImmediate, boolean withoutRepetitionFlag)
{

  /* #10 If txPdu should be processed immediately and minimum delay time has elapsed */
  if((isImmediate == TRUE)
#  if (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON)
     && (Com_GetDelayTimeCnt(txPduID) == 0U)
#  endif
    )   /* COV_COM_IMMEDIATE_DESTINATION_DESCRIPTION */
  {
    /* #20 If TxPdu is active */
    if(Com_IsTxPduGrpActive(txPduID))
    {
      /* #30 If Tx Pdu is in DIRECT or MIXED TxModeMode */
      if(Com_TxModeHdlr_IsDirectTxMode(txPduID) == TRUE)
      {
#  if ((COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON))
        /* #40 Reload repetition counter and repetition cycle counter, if repetitions are required */
        if(withoutRepetitionFlag == FALSE)
        {
          Com_SetRepCnt(txPduID, Com_TxModeHdlr_GetCurRepCnt(txPduID)); /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
          Com_SetRepCycleCnt(txPduID, Com_TxModeHdlr_GetCurrentRepetitionPeriod(txPduID));      /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
        }
#  endif
        /* #45 Set eventbased trigger Flag if configured */
#  if (COM_DIRECTTRIGGER == STD_ON)
        Com_SetDirectTrigger(txPduID, TRUE);    /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
#  endif

        /* #50 Trigger transmit */
#  if (COM_RETRY_FAILED_TRANSMIT_REQUESTS == STD_ON)
        /* #60 If transmission was not successful and retry failed transmit feature is configured */
        if(Com_TxLLIf_Transmit(txPduID) != E_OK)
        {
          /* #70 Schedule deferred transmission in next main function cycle */
          Com_TxModeHdlr_TriggerDeferredIpduSend(txPduID, withoutRepetitionFlag);
        }
#  else
        (void) Com_TxLLIf_Transmit(txPduID);
#  endif
      }
    }
  }
  /* #80 otherwise trigger deferred transmission in next main function cycle */
  else
  {
    Com_TxModeHdlr_TriggerDeferredIpduSend(txPduID, withoutRepetitionFlag);
  }
}
# endif
#endif

#if (COM_RXUBMASKUSEDOFGWDESCRIPTIONACCESSINFO  == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_CheckGwDescriptionUB
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_RxProcessing_CheckGwDescriptionUB(Com_GwDescriptionAccessInfoEndIdxOfGwTxPduDescriptionInfoType gwDescrAccessIdx,
                                                                           P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
  boolean retVal = TRUE;
  /* #10 If the source description has an UpdateBit */
  if(Com_IsRxUbMaskUsedOfGwDescriptionAccessInfo(gwDescrAccessIdx))
  {
    /* #20 If the configured UpdateBit was not received mark the source description as updated */
    /* <= because a length is compared with an index */
    if(PduInfoPtr->SduLength <= Com_GetRxUbIdxOfGwDescriptionAccessInfo(gwDescrAccessIdx))
    {
      /* Update-bit not received */
      retVal = TRUE;
    }
    /* #30 If the UpdateBit is not set, mark the source description as not updated */
    else if(0 == (PduInfoPtr->SduDataPtr[Com_GetRxUbIdxOfGwDescriptionAccessInfo(gwDescrAccessIdx)] & Com_GetConstValueUInt8(Com_GetRxUbMaskIdxOfGwDescriptionAccessInfo(gwDescrAccessIdx))))
    {
      /* Update-bit not set */
      retVal = FALSE;
    }
    /* #40 Otherwise mark the source description as updated */
    else
    {
      /* Update-bit set */
      retVal = TRUE;
    }
  }
  return retVal;
}
#endif

#if (COM_EXISTS_DIRECT_COPYTYPEOFGWDESCRIPTIONACCESSINFO == STD_ON)
/**********************************************************************************************************************
   Com_GwDescription_DirectCopy
 *********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 ********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_GwDescription_DirectCopy(Com_GwDescriptionAccessInfoEndIdxOfGwTxPduDescriptionInfoType gwDescrAccessIdx,
                                                                  P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) sourceBuffer,
                                                                  P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) destinationBuffer, Com_TxBufferLengthOfGwDescriptionAccessInfoType txBufferLength)
{
  boolean destinationHasChanged = FALSE;

  uint8 byteToBeCopied;

  Com_SourceDescriptionMaskType mask = Com_GetSourceDescriptionMask(Com_GetSourceDescriptionMaskIdxOfGwDescriptionAccessInfo(gwDescrAccessIdx));

  /* #10 Copy configured bytes into destination txPduBuffers and return true if any of the destination bytes has changed it's content. */

  byteToBeCopied = (destinationBuffer[0] & COM_CAST2UINT8(~mask)) | (sourceBuffer[0] & mask);

  if(destinationBuffer[0] != byteToBeCopied)
  {
    destinationBuffer[0] = byteToBeCopied;      /* SBSW_COM_CSL03 */
    destinationHasChanged = TRUE;
  }

# if (COM_SOURCEDESCRIPTIONMASKENDMASKUSEDOFGWDESCRIPTIONACCESSINFO == TRUE)
  if(txBufferLength > 1)
  {
    Com_TxBufferLengthOfGwDescriptionAccessInfoType byteIdx;
    Com_SourceDescriptionMaskType endMask = Com_GetSourceDescriptionMask(Com_GetSourceDescriptionMaskEndMaskIdxOfGwDescriptionAccessInfo(gwDescrAccessIdx));
    /* Intermediate bytes can be copied directly. */
    for(byteIdx = 1; byteIdx < (txBufferLength - 1); byteIdx++)
    {
      if(destinationBuffer[byteIdx] != sourceBuffer[byteIdx])
      {
        destinationBuffer[byteIdx] = sourceBuffer[byteIdx];     /* SBSW_COM_CSL03 */
        destinationHasChanged = TRUE;
      }
    }

    /* Last byte has to be masked to avoid overwriting bits that do not belong to gateway description. */
    byteToBeCopied = (destinationBuffer[byteIdx] & COM_CAST2UINT8(~endMask)) | (sourceBuffer[byteIdx] & endMask);

    if(destinationBuffer[byteIdx] != sourceBuffer[byteIdx])
    {
      destinationBuffer[byteIdx] = byteToBeCopied;      /* SBSW_COM_CSL03 */
      destinationHasChanged = TRUE;
    }
  }
# else
  COM_DUMMY_STATEMENT(txBufferLength);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif

  return destinationHasChanged;
}
#endif

#if (COM_EXISTS_RIGHTSHIFT_COPYTYPEOFGWDESCRIPTIONACCESSINFO == STD_ON)
/*********************************************************************************************************************
   Com_GwDescription_RightShiftCopy
 *********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 ********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_GwDescription_RightShiftCopy(P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) sourceBuffer,
                                                                      P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) destinationBuffer,
                                                                      uint16 destinationBufferSize, uint8 sourceStartBitIndex, uint8 bitOffset, uint16 bitLength, boolean isBigEndian)
{

  sint32 i = 1;

  uint16 remainingBits;
  uint8 destinationStartBitIndex = COM_CAST2UINT8(sourceStartBitIndex - bitOffset);

  uint8 sourceEndBitIndex = COM_CAST2UINT8((sourceStartBitIndex + bitLength) - 1) % 8;
  uint8 destinationEndBitIndex = COM_CAST2UINT8((destinationStartBitIndex + bitLength) - 1) % 8;

  uint8 destinationMask = COM_CAST2UINT8(255U << destinationStartBitIndex);
  uint8 sourceMask_i = COM_CAST2UINT8(255U << sourceStartBitIndex);
  uint8 sourceMask_iP1 = COM_CAST2UINT8(~sourceMask_i);

  uint8 byteToCopy = 0;

  boolean destinationHasChanged = FALSE;

  if((destinationStartBitIndex + bitLength) <= 8)
  {
    /* Destination description covers single byte. Truncate leading bits of destination mask. */
    destinationMask &= COM_CAST2UINT8(255U >> COM_CAST2UINT8(8 - (destinationStartBitIndex + bitLength)));
    remainingBits = 0;
  }
  else
  {
    /* Description covers multiple bytes. No truncation of mask is required. */
    uint8 bitToBeCopiedToFirstByte = COM_CAST2UINT8(8 - destinationStartBitIndex);
    remainingBits = (uint16) (bitLength - bitToBeCopiedToFirstByte);
  }

  if((sourceStartBitIndex + bitLength) <= 8)
  {
    /* Source description covers single byte.  Truncate leading bits of source mask */
    sourceMask_i &= COM_CAST2UINT8(255U >> COM_CAST2UINT8(7 - sourceEndBitIndex));
    byteToCopy = COM_CAST2UINT8((sourceBuffer[0] & sourceMask_i) >> bitOffset);
  }
  else
  {
    /* Source description covers multiple bytes. */
    uint8 bitsOf_i = COM_CAST2UINT8(8 - sourceStartBitIndex);
    uint8 posOf_iP1 = destinationStartBitIndex + bitsOf_i;

    if(bitLength < bitOffset)
    {
      sourceMask_iP1 = COM_CAST2UINT8(~COM_CAST2UINT8(255U << (sourceEndBitIndex + 1)));
    }

    byteToCopy = COM_CAST2UINT8((sourceBuffer[0] & sourceMask_i) >> bitOffset);
    byteToCopy |= COM_CAST2UINT8((sourceBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] & sourceMask_iP1) << posOf_iP1);
  }

  byteToCopy = (destinationBuffer[0] & COM_CAST2UINT8(~destinationMask)) | (byteToCopy & destinationMask);

  if(destinationBuffer[0] != byteToCopy)
  {
    destinationHasChanged = TRUE;
    destinationBuffer[0] = byteToCopy;  /* SBSW_COM_CSL03 */
  }

  sourceMask_i = COM_CAST2UINT8(255U << bitOffset);
  sourceMask_iP1 = COM_CAST2UINT8(~sourceMask_i);

  while((remainingBits > 7) && (i < destinationBufferSize))     /* COV_COM_GWDESCRIPTION_RTCHECK */
  {
    /* Copy full bytes without truncation. */
    byteToCopy = COM_CAST2UINT8((sourceBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] & sourceMask_i) >> bitOffset);
    byteToCopy |= COM_CAST2UINT8((sourceBuffer[Com_NBITNBYTE_GetEndiannesIndex(i + 1, isBigEndian)] & sourceMask_iP1) << COM_CAST2UINT8(8 - bitOffset));

    if(destinationBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] != byteToCopy)
    {
      destinationHasChanged = TRUE;
      destinationBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] = byteToCopy;  /* SBSW_COM_GWDESCRIPTION_RTCHECK */
    }

    i++;
    remainingBits = (uint16) (remainingBits - 8);
  }

  if((remainingBits > 0) && (i < destinationBufferSize))        /* COV_COM_GWDESCRIPTION_RTCHECK */
  {     /* if source covers multiple bytes */
    destinationMask = COM_CAST2UINT8(255U >> COM_CAST2UINT8(7 - destinationEndBitIndex));
    if(destinationEndBitIndex > sourceEndBitIndex)
    {
      /* Copy i and i+1 */
      sourceMask_iP1 = COM_CAST2UINT8(~(255U << (sourceEndBitIndex + 1)));
      byteToCopy = COM_CAST2UINT8((sourceBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] & sourceMask_i) >> bitOffset);
      byteToCopy |= COM_CAST2UINT8((sourceBuffer[Com_NBITNBYTE_GetEndiannesIndex(i + 1, isBigEndian)] & sourceMask_iP1) << COM_CAST2UINT8(8 - bitOffset));
    }
    else
    {
      /* Copy only i */
      byteToCopy = COM_CAST2UINT8((sourceBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] & sourceMask_i) >> bitOffset);
    }

    byteToCopy = (destinationBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] & COM_CAST2UINT8(~destinationMask)) | (byteToCopy & destinationMask);
    if(destinationBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] != byteToCopy)
    {
      destinationHasChanged = TRUE;
      destinationBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] = byteToCopy;  /* SBSW_COM_GWDESCRIPTION_RTCHECK */
    }
  }

  return destinationHasChanged;
}       /* PRQA S 6010, 6060 */ /* MD_MSR_STPTH */ /* MD_MSR_STPAR */
#endif

#if (COM_EXISTS_LEFTSHIFT_COPYTYPEOFGWDESCRIPTIONACCESSINFO == STD_ON)
/*********************************************************************************************************************
   Com_GwDescription_LeftShiftCopy
 *********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 ********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_GwDescription_LeftShiftCopy(P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) sourceBuffer,
                                                                     P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) destinationBuffer,
                                                                     uint16 destinationBufferSize, uint8 sourceStartBitIndex, uint8 bitOffset, uint16 bitLength, boolean isBigEndian)
{
  boolean destinationHasChanged = FALSE;

  uint8 byteToBeCopied;

  sint32 i = 1;

  uint8 destinationStartBitIndex = sourceStartBitIndex + bitOffset;

  uint8 sourceEndBitIndex = COM_CAST2UINT8((sourceStartBitIndex + bitLength) - 1) % 8;
  uint8 destinationEndBitIndex = COM_CAST2UINT8((destinationStartBitIndex + bitLength) - 1) % 8;

  uint16 remainingBits = bitLength;

  uint8 snippetMask = COM_CAST2UINT8(255U >> bitOffset);

  uint8 destinationMask = COM_CAST2UINT8(255U << destinationStartBitIndex);

  uint8 sourceMask = COM_CAST2UINT8(255U << sourceStartBitIndex) & COM_CAST2UINT8(255U >> bitOffset);

  if((destinationStartBitIndex + bitLength) <= 8)
  {
    /* Destination description covers single byte. Destinations mask needs to be truncated. */
    destinationMask &= COM_CAST2UINT8(255U >> COM_CAST2UINT8(7 - destinationEndBitIndex));
    sourceMask = COM_CAST2UINT8(destinationMask >> bitOffset);

    remainingBits = 0;
  }
  else
  {
    /* Destination description covers multiple bytes. */
    remainingBits = COM_CAST2UINT8(remainingBits - COM_CAST2UINT8(8 - destinationStartBitIndex));
  }

  byteToBeCopied = (destinationBuffer[0] & COM_CAST2UINT8(~destinationMask)) | COM_CAST2UINT8((sourceBuffer[0] & sourceMask) << bitOffset);

  if(*destinationBuffer != byteToBeCopied)
  {
    destinationHasChanged = TRUE;
    *destinationBuffer = byteToBeCopied;        /* SBSW_COM_CSL03 */
  }

  while((remainingBits > 7) && (i < destinationBufferSize))     /* COV_COM_GWDESCRIPTION_RTCHECK */
  {
    /* Copy full bytes to destination description. Fill leading part of destination with trailing bits of i-th source byte and copy trailing part of destination with leading bits of (i-1)-th source byte. */
    byteToBeCopied = COM_CAST2UINT8((sourceBuffer[Com_NBITNBYTE_GetEndiannesIndex(i - 1, isBigEndian)] & COM_CAST2UINT8(~snippetMask)) >> COM_CAST2UINT8(8 - bitOffset));
    byteToBeCopied |= COM_CAST2UINT8((sourceBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] & snippetMask) << bitOffset);

    if(destinationBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] != byteToBeCopied)
    {
      destinationHasChanged = TRUE;
      destinationBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] = byteToBeCopied;      /* SBSW_COM_GWDESCRIPTION_RTCHECK */
    }

    i++;
    remainingBits = COM_CAST2UINT8(remainingBits - 8);
  }

  if((remainingBits > 0) && (i < destinationBufferSize))        /* COV_COM_GWDESCRIPTION_RTCHECK */
  {     /* if source covers multiple bytes */
    uint8 finalByteMask;
    destinationMask = COM_CAST2UINT8(255U << (destinationEndBitIndex + 1));

    byteToBeCopied = destinationBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)];
    if(destinationEndBitIndex < sourceEndBitIndex)
    {
      /* Next Byte */
      finalByteMask = COM_CAST2UINT8(COM_CAST2UINT8(255U >> COM_CAST2UINT8(8 - remainingBits)) << COM_CAST2UINT8((1 + sourceEndBitIndex) - remainingBits));
    }
    else
    {
      /* Same byte */
      uint8 sourceMaske = COM_CAST2UINT8(255U >> COM_CAST2UINT8(7 - sourceEndBitIndex));
      finalByteMask = COM_CAST2UINT8(~snippetMask);
      byteToBeCopied = (byteToBeCopied & destinationMask) | COM_CAST2UINT8((sourceBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] & sourceMaske) << bitOffset);

      destinationMask = COM_CAST2UINT8(255U << bitOffset);
    }
    byteToBeCopied = (byteToBeCopied & destinationMask) | COM_CAST2UINT8((sourceBuffer[Com_NBITNBYTE_GetEndiannesIndex(i - 1, isBigEndian)] & finalByteMask) >> COM_CAST2UINT8(8 - bitOffset));

    if(destinationBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] != byteToBeCopied)
    {
      destinationHasChanged = TRUE;
      destinationBuffer[Com_NBITNBYTE_GetEndiannesIndex(i, isBigEndian)] = byteToBeCopied;      /* SBSW_COM_GWDESCRIPTION_RTCHECK */
    }
  }

  return destinationHasChanged;
}       /* PRQA S 6060 */ /* MD_MSR_STPAR */
#endif

#if (COM_GWEVENTCACHE == STD_ON)
/**********************************************************************************************************************
  Com_RxIndication_CacheDeferredDescriptionGwEvent
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxIndication_CacheDeferredDescriptionGwEvent(PduIdType ComPduId)
{
  /* #10 If a gateway description exists for this PDU */
  if(Com_IsGwTxPduDescriptionInfoUsedOfRxPduInfo(ComPduId))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    /* #20 If PDU Id is not already cached */
    if(Com_GetHandleRxDeferredGwDescription(Com_GetHandleRxDeferredGwDescriptionIdxOfRxPduInfo(ComPduId)) == 0)
    {
      /* #30 If cache is not full */
      if(Com_GetGwEventCacheIndex() < Com_GetSizeOfGwEventCache())
      {
        /* #40 Store PDU Id in cache, increase gateway cache index */
        Com_SetGwEventCache(Com_GetGwEventCacheIndex(), ComPduId);      /* SBSW_COM_GWCACHING */
        Com_IncGwEventCacheIndex();
      }
    }

    /* #50 Mark pdu a cached by storing current length + 1 */
    Com_SetHandleRxDeferredGwDescription(Com_GetHandleRxDeferredGwDescriptionIdxOfRxPduInfo(ComPduId), Com_GetHandleRxPduDeferred(Com_GetHandleRxPduDeferredIdxOfRxPduInfo(ComPduId))); /* SBSW_COM_CSL03 */
  }
}
#endif

#if (COM_RXDEFERREDEVENTCACHE == STD_ON)
/**********************************************************************************************************************
  Com_RxIndication_CacheDeferredEvent
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxIndication_CacheDeferredEvent(Com_RxDeferredEventCacheType ComPduId)
{
  /* #10 If an entry is free in the deferred event cache, store the passed ComIPdu in the next free cache entry */
  if(Com_GetRxNextEventCacheEnty() < Com_GetSizeOfRxDeferredEventCache())
  {
    Com_SetRxDeferredEventCache(Com_GetRxNextEventCacheEnty(), ComPduId);       /* SBSW_COM_ARRAY_WRITEACCESS */
    Com_IncRxNextEventCacheEnty();
  }
  /* #20 Otherwise mark the cache as overflowed */
  else
  {
    Com_SetRxNextEventCacheEnty(COM_NO_HANDLERXPDUDEFERREDIDXOFRXPDUINFO);
  }
}
#endif

#if (COM_RXSIGINFOENDIDXOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_RxPduSigEvent
**********************************************************************************************************************/
/*! Internal comment removed.
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
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_RxPduSigEvent(PduIdType comRxPduInfoIdx, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr,
                                                                 P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr)
{
  /* #10 Iterate over all Rx ComSignals of the passed Rx ComIPdu and do Rx ComSignal based processing */
  Com_RxSigInfoIterType idxRxSigInfo = Com_GetRxSigInfoStartIdxOfRxPduInfo(comRxPduInfoIdx);
  for(; idxRxSigInfo < Com_GetRxSigInfoEndIdxOfRxPduInfo(comRxPduInfoIdx); idxRxSigInfo++)
  {
    /* #20 If the Rx ComSignal is completely contained in the passed Sdu data length */
    if(PduInfoPtr->SduLength >= Com_GetValidDlcOfRxSigInfo(idxRxSigInfo))       /* COV_COM_VALIDDLC */
    {
# if (COM_UBMASKUSEDOFRXSIGINFO == STD_ON)
      /* #30 Check if the ComSignal was updated */
      boolean process = Com_RxProcessing_CheckSigUB(idxRxSigInfo, PduInfoPtr);  /* SBSW_COM_FCTCALL_WITH_P2CONST */
      if(process == TRUE)
# endif
      {
# if (COM_RXTOUTINFOUSEDOFRXSIGINFO == STD_ON)
        /* #40 Set configured timeout event */
        Com_RxDlMon_SigEvent(idxRxSigInfo);
# endif

# if (COM_GWINFOUSEDOFRXSIGINFO == STD_ON)
        /* #50 Set configured routing event */
        Com_SignalGw_SigEvent(idxRxSigInfo);
# endif
        /* #60 Do Rx Signal Processing */
        {
          Com_RxSigProcessState rxSigProcessingState = Com_RxSignalProcessing(PduInfoPtr, Com_GetRxAccessInfoIdxOfRxSigInfo(idxRxSigInfo));     /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */
          switch (rxSigProcessingState)
          {
            case VALID:
            {
# if ((COM_RXTOUTINFOUSEDOFRXSIGINFO == STD_ON) && (COM_UBMASKUSEDOFRXSIGINFO == STD_ON))
              /* #70 If the ComSignal has a timeout and an UpdateBit, remove the timeout occurred flag */
              if(Com_IsRxTOutInfoUsedOfRxSigInfo(idxRxSigInfo) && Com_IsUbMaskUsedOfRxSigInfo(idxRxSigInfo))    /* COV_COM_TIMEOUT_AND_UB */
              {
                Com_LMgt_RemoveOccurredFlag(Com_GetRxTOutInfoIdxOfRxSigInfo(idxRxSigInfo));     /* SBSW_COM_CSL02 */
              }
# endif
# if (COM_RXCBKFUNCPTRACKIDXOFRXSIGINFO == STD_ON)
              /* #80 If the passed Rx ComSignal uses a notification function, cache or call that function */
              if(Com_IsRxCbkFuncPtrAckUsedOfRxSigInfo(idxRxSigInfo))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
              {
                Com_CacheOrCallRxCbkFctPtr((Com_RxCbkFuncPtrIterType) Com_GetRxCbkFuncPtrAckIdxOfRxSigInfo(idxRxSigInfo), comRxPduInfoIdx, fctPtrCacheStrctPtr);        /* SBSW_COM_FCTPTR_CACHE_PTR */
              }
# endif
            }
              break;
# if ((COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON) || (COM_CONSTVALUEARRAYBASEDINVVALUEUSEDOFRXACCESSINFO == STD_ON))
              /* #90 If the signal value is the invalid value, perform the invalid action */
            case INVALID:      /* COV_COM_SIGNALINVALIDATION */
            {
              Com_RxInv_Sig_PerformInvalidAction(idxRxSigInfo, fctPtrCacheStrctPtr);    /* SBSW_COM_FCTPTR_CACHE_PTR */
            }
              break;
# endif
            default:   /* COV_COM_MISRA */
              /* do nothing */
              break;
          }
        }
      } /* Update-bit check */
    }   /* DLC check */
  }     /* Signal loop */
  COM_DUMMY_STATEMENT(fctPtrCacheStrctPtr);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (COM_RXDEFERREDFCTPTRCACHE == STD_ON)
/* jet: ComCacheOrCallCbkFctPtr snippet */
/**********************************************************************************************************************
  Com_CacheOrCallRxDeferredCbkFctPtr
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_CacheOrCallRxDeferredCbkFctPtr(Com_RxCbkFuncPtrIterType cbkFuncPtrIdx, P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr)
{
  /* #10 If RxDeferredFctPtrCache is not full, cache the function pointer index. */
  if(fctPtrCacheStrctPtr->cacheIndex < fctPtrCacheStrctPtr->cacheSize)
  {
    fctPtrCacheStrctPtr->ptrToCache[fctPtrCacheStrctPtr->cacheIndex] = (uint32) cbkFuncPtrIdx;  /* SBSW_COM_FCTPTR_CACHE_PTR_3 */
    fctPtrCacheStrctPtr->cacheIndex = fctPtrCacheStrctPtr->cacheIndex + 1;      /* SBSW_COM_FCTPTR_CACHE_PTR_2 */
  }
  /* #20 Otherwise, call all cached function callbacks. */
  else
  {
    Com_RxProcessing_ExitExclusiveArea_Deferred();
    Com_GetRxCbkFuncPtr((Com_RxCbkFuncPtrIterType) cbkFuncPtrIdx) ();   /* SBSW_COM_FCT_PTR_CALL_CSL03 */
    Com_ProcessRxFctPtrCache(fctPtrCacheStrctPtr);      /* SBSW_COM_FCTPTR_CACHE_PTR */
    Com_RxProcessing_EnterExclusiveArea_Deferred();
  }
}

#endif

#if (COM_RXIMMEDIATEFCTPTRCACHE == STD_ON)
/* jet: ComCacheOrCallCbkFctPtr snippet */
/**********************************************************************************************************************
  Com_CacheOrCallRxImmediateCbkFctPtr
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_CacheOrCallRxImmediateCbkFctPtr(Com_RxCbkFuncPtrIterType cbkFuncPtrIdx, P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr)
{
  /* #10 If RxImmediateFctPtrCache is not full, cache the function pointer index. */
  if(fctPtrCacheStrctPtr->cacheIndex < fctPtrCacheStrctPtr->cacheSize)  /* COV_COM_CACHEORCALL_IMMEDIATE */
  {
    fctPtrCacheStrctPtr->ptrToCache[fctPtrCacheStrctPtr->cacheIndex] = (uint32) cbkFuncPtrIdx;  /* SBSW_COM_FCTPTR_CACHE_PTR_3 */
    fctPtrCacheStrctPtr->cacheIndex = fctPtrCacheStrctPtr->cacheIndex + 1;      /* SBSW_COM_FCTPTR_CACHE_PTR_2 */
  }
  /* #20 Otherwise, call all cached function callbacks. */
  else
  {
    SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
    Com_GetRxCbkFuncPtr((Com_RxCbkFuncPtrIterType) cbkFuncPtrIdx) ();   /* SBSW_COM_FCT_PTR_CALL_CSL03 */
    Com_ProcessRxFctPtrCache(fctPtrCacheStrctPtr);      /* SBSW_COM_FCTPTR_CACHE_PTR */
    SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
  }
}

#endif

#if (COM_RXCBKFUNCPTR == STD_ON)
/**********************************************************************************************************************
  Com_CacheOrCallRxCbkFctPtr
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_CacheOrCallRxCbkFctPtr(Com_RxCbkFuncPtrIterType cbkFuncPtrIdx, PduIdType comRxPduInfoIdx, P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr)
{
# if ((COM_RXDEFERREDFCTPTRCACHE == STD_ON) && (COM_RXIMMEDIATEFCTPTRCACHE == STD_ON))
  /* #10 If callback function pointer should be processed deferred */
  if(Com_IsHandleRxPduDeferredUsedOfRxPduInfo(comRxPduInfoIdx))
  {
# endif
# if (COM_RXDEFERREDFCTPTRCACHE == STD_ON)
    /* #20 Cache index of function ptr in deferred function pointer cache or call all function pointer if cache is full. */
    Com_CacheOrCallRxDeferredCbkFctPtr(cbkFuncPtrIdx, fctPtrCacheStrctPtr);     /* SBSW_COM_FCTPTR_CACHE_PTR */
# endif
# if ((COM_RXDEFERREDFCTPTRCACHE == STD_ON) && (COM_RXIMMEDIATEFCTPTRCACHE == STD_ON))
  }
  /* #30 Otherwise */
  else
# endif
  {
# if (COM_RXIMMEDIATEFCTPTRCACHE == STD_ON)
    /* #40 Cache index of function ptr in immediate function pointer cache or call all function pointer if cache is full. */
    Com_CacheOrCallRxImmediateCbkFctPtr(cbkFuncPtrIdx, fctPtrCacheStrctPtr);    /* SBSW_COM_FCTPTR_CACHE_PTR */
# endif
  }

  COM_DUMMY_STATEMENT(comRxPduInfoIdx); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if ((COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_TMPBUFFERUSEDOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxProcessing_ReadGrpSignal
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_ReadGrpSignal(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo)   /* COV_COM_GROUPSIG_ARRAYBASED */
{
# if(COM_TMPBUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsTmpBufferUsedOfRxAccessInfo(idxRxAccessInfo))        /* COV_COM_ZEROBIT */
  {
    Com_TmpBufferIdxOfRxAccessInfoType idxTmpBuffer = Com_GetTmpBufferIdxOfRxAccessInfo(idxRxAccessInfo);
    switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
    {
/* jet: GeneralSwitchCasePerApplType snippet */
#  if (COM_TMPRXSHDBUFFERUINT8 == STD_ON)
      case COM_UINT8_APPLTYPEOFRXACCESSINFO:   /* COV_COM_GROUPSIG_ARRAYBASED */
      {
        uint8 signalValue = Com_Signal_ReadSignal_UInt8(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));        /* SBSW_COM_FCTCALL_WITH_P2CONST */
        Com_SetTmpRxShdBufferUInt8(idxTmpBuffer, signalValue);  /* SBSW_COM_CSL03 */
        break;
      }
#  endif
#  if (COM_TMPRXSHDBUFFERSINT8 == STD_ON)
      case COM_SINT8_APPLTYPEOFRXACCESSINFO:   /* COV_COM_GROUPSIG_ARRAYBASED */
      {
        sint8 signalValue = Com_Signal_ReadSignal_SInt8(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));        /* SBSW_COM_FCTCALL_WITH_P2CONST */
        Com_SetTmpRxShdBufferSInt8(idxTmpBuffer, signalValue);  /* SBSW_COM_CSL03 */
        break;
      }
#  endif
#  if (COM_TMPRXSHDBUFFERUINT16 == STD_ON)
      case COM_UINT16_APPLTYPEOFRXACCESSINFO:  /* COV_COM_GROUPSIG_ARRAYBASED */
      {
        uint16 signalValue = Com_Signal_ReadSignal_UInt16(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));      /* SBSW_COM_FCTCALL_WITH_P2CONST */
        Com_SetTmpRxShdBufferUInt16(idxTmpBuffer, signalValue); /* SBSW_COM_CSL03 */
        break;
      }
#  endif
#  if (COM_TMPRXSHDBUFFERSINT16 == STD_ON)
      case COM_SINT16_APPLTYPEOFRXACCESSINFO:  /* COV_COM_GROUPSIG_ARRAYBASED */
      {
        sint16 signalValue = Com_Signal_ReadSignal_SInt16(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));      /* SBSW_COM_FCTCALL_WITH_P2CONST */
        Com_SetTmpRxShdBufferSInt16(idxTmpBuffer, signalValue); /* SBSW_COM_CSL03 */
        break;
      }
#  endif
#  if (COM_TMPRXSHDBUFFERUINT32 == STD_ON)
      case COM_UINT32_APPLTYPEOFRXACCESSINFO:  /* COV_COM_GROUPSIG_ARRAYBASED */
      {
        uint32 signalValue = Com_Signal_ReadSignal_UInt32(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));      /* SBSW_COM_FCTCALL_WITH_P2CONST */
        Com_SetTmpRxShdBufferUInt32(idxTmpBuffer, signalValue); /* SBSW_COM_CSL03 */
        break;
      }
#  endif
#  if (COM_TMPRXSHDBUFFERSINT32 == STD_ON)
      case COM_SINT32_APPLTYPEOFRXACCESSINFO:  /* COV_COM_GROUPSIG_ARRAYBASED */
      {
        sint32 signalValue = Com_Signal_ReadSignal_SInt32(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));      /* SBSW_COM_FCTCALL_WITH_P2CONST */
        Com_SetTmpRxShdBufferSInt32(idxTmpBuffer, signalValue); /* SBSW_COM_CSL03 */
        break;
      }
#  endif
#  if (COM_TMPRXSHDBUFFERUINT64 == STD_ON)
      case COM_UINT64_APPLTYPEOFRXACCESSINFO:  /* COV_COM_GROUPSIG_ARRAYBASED */
      {
        uint64 signalValue = Com_Signal_ReadSignal_UInt64(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));      /* SBSW_COM_FCTCALL_WITH_P2CONST */
        Com_SetTmpRxShdBufferUInt64(idxTmpBuffer, signalValue); /* SBSW_COM_CSL03 */
        break;
      }
#  endif
#  if (COM_TMPRXSHDBUFFERSINT64 == STD_ON)
      case COM_SINT64_APPLTYPEOFRXACCESSINFO:  /* COV_COM_GROUPSIG_ARRAYBASED */
      {
        sint64 signalValue = Com_Signal_ReadSignal_SInt64(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));      /* SBSW_COM_FCTCALL_WITH_P2CONST */
        Com_SetTmpRxShdBufferSInt64(idxTmpBuffer, signalValue); /* SBSW_COM_CSL03 */
        break;
      }
#  endif
      default: /* COV_COM_MISRA */
        break;
    }
  }
# endif
# if (COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsTmpRxShdBufferArrayBasedTmpBufferUsedOfRxAccessInfo(idxRxAccessInfo))        /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
    {
#  if (COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON)     /* COV_COM_VAR_FEAT_SUBSET_TX */
      case COM_UINT8_N_APPLTYPEOFRXACCESSINFO:
      {
        P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr;
        SignalBusSourcePtr = &(PduInfoPtr->SduDataPtr[Com_GetStartByteInPduPositionOfRxAccessInfo(idxRxAccessInfo)]);
        VStdMemCpyRamToRam(Com_GetAddrTmpRxShdBufferArrayBased(Com_GetTmpRxShdBufferArrayBasedTmpBufferStartIdxOfRxAccessInfo(idxRxAccessInfo)), SignalBusSourcePtr, Com_GetTmpRxShdBufferArrayBasedTmpBufferLengthOfRxAccessInfo(idxRxAccessInfo));    /* SBSW_COM_CSL02 */
        break;
      }
#  endif
#  if ((COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO == STD_ON))      /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
      case COM_UINT8_DYN_APPLTYPEOFRXACCESSINFO:
      {
        P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalBusSourcePtr;
        PduLengthType dynLength;
        SignalBusSourcePtr = &(PduInfoPtr->SduDataPtr[Com_GetStartByteInPduPositionOfRxAccessInfo(idxRxAccessInfo)]);
        dynLength = Com_GetRxDynamicLength(PduInfoPtr->SduLength, idxRxAccessInfo);
        if(dynLength <= Com_GetTmpRxShdBufferArrayBasedTmpBufferLengthOfRxAccessInfo(idxRxAccessInfo))
        {
          VStdLib_MemCpy_s(Com_GetAddrTmpRxShdBufferArrayBased(Com_GetTmpRxShdBufferArrayBasedTmpBufferStartIdxOfRxAccessInfo(idxRxAccessInfo)), (VStdLib_CntType) Com_GetTmpRxShdBufferArrayBasedTmpBufferLengthOfRxAccessInfo(idxRxAccessInfo), SignalBusSourcePtr, (VStdLib_CntType) dynLength);     /* SBSW_COM_VSTDLIB_SAFE */
        }
        break;
      }
#  endif
      default: /* COV_COM_MISRA */
        break;
    }
  }
# endif
}       /* PRQA S 6050, 6030 */ /* MD_MSR_STCAL, MD_MSR_STCYC */
#endif

#if (COM_RXSIGGRPINFOINDENDIDXOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_RxPduSigGrpEvent
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_RxPduSigGrpEvent(PduIdType comRxPduInfoIdx, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr,
                                                                    P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr)
{
  /* #10 Iterate over all ComSignalGroups related to the passed ComIPdu and do ComSignalGroup based processing */
  Com_RxSigGrpInfoIterType idxRxSigGrpInfoInd = Com_GetRxSigGrpInfoIndStartIdxOfRxPduInfo(comRxPduInfoIdx);
  for(; idxRxSigGrpInfoInd < Com_GetRxSigGrpInfoIndEndIdxOfRxPduInfo(comRxPduInfoIdx); idxRxSigGrpInfoInd++)
  {
    Com_RxSigGrpInfoIterType idxRxSigGrpInfo = Com_GetRxSigGrpInfoInd(idxRxSigGrpInfoInd);

    /* #20 If ComSignalGroup is completely contained in received data length */
    if(PduInfoPtr->SduLength >= Com_GetValidDlcOfRxSigGrpInfo(idxRxSigGrpInfo)) /* COV_COM_VALIDDLC */
    {
# if (COM_UBMASKUSEDOFRXSIGGRPINFO == STD_ON)
      /* #30 Check if the ComSignal was updated */
      boolean process = Com_RxProcessing_CheckSigGrpUB(PduInfoPtr, idxRxSigGrpInfo);    /* SBSW_COM_FCTCALL_WITH_P2CONST */
      if(process == TRUE)
# endif
      {
# if (COM_RXTOUTINFOUSEDOFRXSIGGRPINFO == STD_ON)
        /* #40 Set configured timeout event */
        Com_RxDlMon_SigGrpEvent(idxRxSigGrpInfo);
# endif

# if (COM_GWINFOUSEDOFRXSIGGRPINFO == STD_ON)
        /* #50 Set configured routing event */
        Com_SignalGw_SigGrpEvent(idxRxSigGrpInfo);
# endif
        /* #60 Do Rx ComSignalGroup processing */
        Com_RxProcessing_ProcessSigGrpEvent(comRxPduInfoIdx, PduInfoPtr, idxRxSigGrpInfo, fctPtrCacheStrctPtr); /* SBSW_COM_FCTCALL_WITH_P2CONST */
      } /* Update-bit check */
    }   /* DLC check */
  }     /* Signal Group loop */
}       /* Signal group processing */
#endif

#if ((COM_RXSIGGRPINFOINDENDIDXOFRXPDUINFO == STD_ON) && (COM_FILTEREVENTOFRXSIGGRPINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxProcessing_RxSignalGroupFilterCheck
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxProcessing_RxSignalGroupFilterCheck(Com_RxSigGrpInfoIterType idxRxSigGrpInfo)
{
  Com_RxSigProcessState retVal = VALID;
# if ((COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON)||((COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON)))
  boolean hasToutOccurred = FALSE;
#  if (COM_RXTOUTINFOUSEDOFRXSIGGRPINFO == STD_ON)
  /* #10 If the ComSignalGroup has a Timeout, check if that timeout has occurred */
  if(Com_IsRxTOutInfoUsedOfRxSigGrpInfo(idxRxSigGrpInfo))       /* COV_COM_FEATURE_RX_TOUT_RX_FILTER_USED_XX */
  {
    hasToutOccurred = Com_LMgt_HasTimeoutOccurred(Com_GetRxTOutInfoIdxOfRxSigGrpInfo(idxRxSigGrpInfo));
  }
#  endif
# endif
  {
    Com_RxAccessInfoIndIterType RxAccessInfoIndidx = Com_GetRxAccessInfoGrpSigIndStartIdxOfRxSigGrpInfo(idxRxSigGrpInfo);
    boolean filterState = FALSE;
    /* #20 Iterate over all ComGroupSignals of the passed ComSignalGroup */
    for(; RxAccessInfoIndidx < Com_GetRxAccessInfoGrpSigIndEndIdxOfRxSigGrpInfo(idxRxSigGrpInfo); RxAccessInfoIndidx++)
    {
      Com_RxAccessInfoIterType idxRxAccessInfo = Com_GetRxAccessInfoGrpSigInd(RxAccessInfoIndidx);
      /* #30 If Filter is configured and shadow buffer is used */
      if(Com_IsFilterInfoUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
# if (COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON)
        if(Com_IsShdBufferUsedOfRxAccessInfo(idxRxAccessInfo))  /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
        {
          /* #40 Check filter state according to configured filter algorithm and the configured signal ApplType */
          /* Hint: the ApplType specific switching is performed in two separate switch cases */
          Com_ShdBufferIdxOfRxAccessInfoType idxShdBuffer = Com_GetShdBufferIdxOfRxAccessInfo(idxRxAccessInfo);
          Com_TmpBufferIdxOfRxAccessInfoType idxTmpBuffer = Com_GetTmpBufferIdxOfRxAccessInfo(idxRxAccessInfo);
          switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
          {
/* jet: GeneralSwitchCasePerApplType snippet*/
#  if ((COM_TMPRXSHDBUFFERUINT8 == STD_ON) && (COM_FILTERINFO_UINT8 == STD_ON))
            case COM_UINT8_APPLTYPEOFRXACCESSINFO:
            {
              filterState =
                Com_Signal_UInt8_EvaluateFilter((Com_FilterInfo_UInt8IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetTmpRxShdBufferUInt8(idxTmpBuffer),
                                                Com_GetRxSigBufferUInt8(idxShdBuffer), hasToutOccurred);
              break;
            }
#  endif
#  if ((COM_TMPRXSHDBUFFERSINT8 == STD_ON) && (COM_FILTERINFO_SINT8 == STD_ON))
            case COM_SINT8_APPLTYPEOFRXACCESSINFO:
            {
              filterState =
                Com_Signal_SInt8_EvaluateFilter((Com_FilterInfo_SInt8IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetTmpRxShdBufferSInt8(idxTmpBuffer),
                                                Com_GetRxSigBufferSInt8(idxShdBuffer), hasToutOccurred);
              break;
            }
#  endif
#  if ((COM_TMPRXSHDBUFFERUINT16 == STD_ON) && (COM_FILTERINFO_UINT16 == STD_ON))
            case COM_UINT16_APPLTYPEOFRXACCESSINFO:
            {
              filterState =
                Com_Signal_UInt16_EvaluateFilter((Com_FilterInfo_UInt16IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetTmpRxShdBufferUInt16(idxTmpBuffer),
                                                 Com_GetRxSigBufferUInt16(idxShdBuffer), hasToutOccurred);
              break;
            }
#  endif
#  if ((COM_TMPRXSHDBUFFERSINT16 == STD_ON) && (COM_FILTERINFO_SINT16 == STD_ON))
            case COM_SINT16_APPLTYPEOFRXACCESSINFO:
            {
              filterState =
                Com_Signal_SInt16_EvaluateFilter((Com_FilterInfo_SInt16IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetTmpRxShdBufferSInt16(idxTmpBuffer),
                                                 Com_GetRxSigBufferSInt16(idxShdBuffer), hasToutOccurred);
              break;
            }
#  endif
#  if ((COM_TMPRXSHDBUFFERUINT32 == STD_ON) && (COM_FILTERINFO_UINT32 == STD_ON))
            case COM_UINT32_APPLTYPEOFRXACCESSINFO:
            {
              filterState =
                Com_Signal_UInt32_EvaluateFilter((Com_FilterInfo_UInt32IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetTmpRxShdBufferUInt32(idxTmpBuffer),
                                                 Com_GetRxSigBufferUInt32(idxShdBuffer), hasToutOccurred);
              break;
            }
#  endif
#  if ((COM_TMPRXSHDBUFFERSINT32 == STD_ON) && (COM_FILTERINFO_SINT32 == STD_ON))
            case COM_SINT32_APPLTYPEOFRXACCESSINFO:
            {
              filterState =
                Com_Signal_SInt32_EvaluateFilter((Com_FilterInfo_SInt32IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetTmpRxShdBufferSInt32(idxTmpBuffer),
                                                 Com_GetRxSigBufferSInt32(idxShdBuffer), hasToutOccurred);
              break;
            }
#  endif
#  if ((COM_TMPRXSHDBUFFERUINT64 == STD_ON) && (COM_FILTERINFO_UINT64 == STD_ON))
            case COM_UINT64_APPLTYPEOFRXACCESSINFO:
            {
              filterState =
                Com_Signal_UInt64_EvaluateFilter((Com_FilterInfo_UInt64IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetTmpRxShdBufferUInt64(idxTmpBuffer),
                                                 Com_GetRxSigBufferUInt64(idxShdBuffer), hasToutOccurred);
              break;
            }
#  endif
#  if ((COM_TMPRXSHDBUFFERSINT64 == STD_ON) && (COM_FILTERINFO_SINT64 == STD_ON))
            case COM_SINT64_APPLTYPEOFRXACCESSINFO:
            {
              filterState =
                Com_Signal_SInt64_EvaluateFilter((Com_FilterInfo_SInt64IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetTmpRxShdBufferSInt64(idxTmpBuffer),
                                                 Com_GetRxSigBufferSInt64(idxShdBuffer), hasToutOccurred);
              break;
            }
#  endif
            default:   /* COV_COM_MISRA */
              break;
          }
        }
# endif
# if ((COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON))
        if(Com_IsRxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo(idxRxAccessInfo))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
        {
          Com_RxSigBufferArrayBasedIterType idxShdBuffer = Com_GetRxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo(idxRxAccessInfo);
          Com_TmpRxShdBufferArrayBasedTmpBufferEndIdxOfRxAccessInfoType idxTmpBuffer = Com_GetTmpRxShdBufferArrayBasedTmpBufferStartIdxOfRxAccessInfo(idxRxAccessInfo);

          switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
          {

            case COM_UINT8_N_APPLTYPEOFRXACCESSINFO:
              filterState = Com_Signal_UInt8_N_EvaluateFilter((Com_FilterInfo_UInt8_NIterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), Com_GetAddrTmpRxShdBufferArrayBased(idxTmpBuffer), Com_GetAddrRxSigBufferArrayBased(idxShdBuffer), (PduLengthType) Com_GetRxSigBufferArrayBasedShdBufferLengthOfRxAccessInfo(idxRxAccessInfo), hasToutOccurred);    /* SBSW_COM_FCTCALL_WITH_P2CONST */
              break;

            default:   /* COV_COM_MISRA */
              break;
          }
        }
# endif
# if ((COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON)||((COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON) && (COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON)))
        /* #50 If Filter evaluates to TRUE, stop evaluating remaining group signals. */
        if(filterState == TRUE)
        {
          break;
        }
# endif
      }
    }
    /* #60 If any of the group signal filters evaluates to TRUE, return VALID */
    /* #70 Otherwise return FILTERED */
    if(filterState == FALSE)    /* COV_COM_FILTER_STATE */
    {
      retVal = FILTERED;
    }
  }
  return retVal;
}       /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */
#endif

#if ((COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxProcessing_ExtractToShdwBffr
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_ExtractToShdwBffr(Com_RxSigGrpInfoIterType idxRxSigGrpInfo, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
  /* #10 Iterate over all ComGroupSignals of the passed ComSignalGroup */
  Com_RxAccessInfoIndIterType RxAccessInfoIndidx = Com_GetRxAccessInfoGrpSigIndStartIdxOfRxSigGrpInfo(idxRxSigGrpInfo);
  for(; RxAccessInfoIndidx < Com_GetRxAccessInfoGrpSigIndEndIdxOfRxSigGrpInfo(idxRxSigGrpInfo); RxAccessInfoIndidx++)
  {
    Com_RxAccessInfoIterType idxRxAccessInfo = Com_GetRxAccessInfoGrpSigInd(RxAccessInfoIndidx);
    /* #20 Copy the value of the temp shadow buffer to the shadow buffer */
    /* Hint: The ApplType specific switching is performed in two separate switch cases */
# if (COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON)
    if(Com_IsShdBufferUsedOfRxAccessInfo(idxRxAccessInfo))      /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      Com_TmpBufferIdxOfRxAccessInfoType idxTmpBuffer = Com_GetTmpBufferIdxOfRxAccessInfo(idxRxAccessInfo);
      Com_ShdBufferIdxOfRxAccessInfoType idxShdBuffer = Com_GetShdBufferIdxOfRxAccessInfo(idxRxAccessInfo);

      switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
      {
/* jet: GeneralSwitchCasePerApplType snippet*/
#  if (COM_TMPRXSHDBUFFERUINT8 == STD_ON)
        case COM_UINT8_APPLTYPEOFRXACCESSINFO:
        {
          Com_SetRxSigBufferUInt8(idxShdBuffer, Com_GetTmpRxShdBufferUInt8(idxTmpBuffer));      /* SBSW_COM_CSL03 */
          break;
        }
#  endif
#  if (COM_TMPRXSHDBUFFERSINT8 == STD_ON)
        case COM_SINT8_APPLTYPEOFRXACCESSINFO:
        {
          Com_SetRxSigBufferSInt8(idxShdBuffer, Com_GetTmpRxShdBufferSInt8(idxTmpBuffer));      /* SBSW_COM_CSL03 */
          break;
        }
#  endif
#  if (COM_TMPRXSHDBUFFERUINT16 == STD_ON)
        case COM_UINT16_APPLTYPEOFRXACCESSINFO:
        {
          Com_SetRxSigBufferUInt16(idxShdBuffer, Com_GetTmpRxShdBufferUInt16(idxTmpBuffer));    /* SBSW_COM_CSL03 */
          break;
        }
#  endif
#  if (COM_TMPRXSHDBUFFERSINT16 == STD_ON)
        case COM_SINT16_APPLTYPEOFRXACCESSINFO:
        {
          Com_SetRxSigBufferSInt16(idxShdBuffer, Com_GetTmpRxShdBufferSInt16(idxTmpBuffer));    /* SBSW_COM_CSL03 */
          break;
        }
#  endif
#  if (COM_TMPRXSHDBUFFERUINT32 == STD_ON)
        case COM_UINT32_APPLTYPEOFRXACCESSINFO:
        {
          Com_SetRxSigBufferUInt32(idxShdBuffer, Com_GetTmpRxShdBufferUInt32(idxTmpBuffer));    /* SBSW_COM_CSL03 */
          break;
        }
#  endif
#  if (COM_TMPRXSHDBUFFERSINT32 == STD_ON)
        case COM_SINT32_APPLTYPEOFRXACCESSINFO:
        {
          Com_SetRxSigBufferSInt32(idxShdBuffer, Com_GetTmpRxShdBufferSInt32(idxTmpBuffer));    /* SBSW_COM_CSL03 */
          break;
        }
#  endif
#  if (COM_TMPRXSHDBUFFERUINT64 == STD_ON)
        case COM_UINT64_APPLTYPEOFRXACCESSINFO:
        {
          Com_SetRxSigBufferUInt64(idxShdBuffer, Com_GetTmpRxShdBufferUInt64(idxTmpBuffer));    /* SBSW_COM_CSL03 */
          break;
        }
#  endif
#  if (COM_TMPRXSHDBUFFERSINT64 == STD_ON)
        case COM_SINT64_APPLTYPEOFRXACCESSINFO:
        {
          Com_SetRxSigBufferSInt64(idxShdBuffer, Com_GetTmpRxShdBufferSInt64(idxTmpBuffer));    /* SBSW_COM_CSL03 */
          break;
        }
#  endif
        default:       /* COV_COM_MISRA */
          break;
      }
    }
# endif
# if (COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON)
    if(Com_IsRxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      Com_TmpRxShdBufferArrayBasedTmpBufferEndIdxOfRxAccessInfoType idxTmpBuffer = Com_GetTmpRxShdBufferArrayBasedTmpBufferStartIdxOfRxAccessInfo(idxRxAccessInfo);
      Com_RxSigBufferArrayBasedIterType idxShdBuffer = Com_GetRxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo(idxRxAccessInfo);

      switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
      {
#  if (COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON)     /* COV_COM_VAR_FEAT_SUBSET_TX */
        case COM_UINT8_N_APPLTYPEOFRXACCESSINFO:
        {
          VStdMemCpyRamToRam(Com_GetAddrRxSigBufferArrayBased(idxShdBuffer), Com_GetAddrTmpRxShdBufferArrayBased(idxTmpBuffer), (PduLengthType) Com_GetRxSigBufferArrayBasedShdBufferLengthOfRxAccessInfo(idxRxAccessInfo));    /* SBSW_COM_MEM_CPY_RAM2RAM */
          break;
        }
#  endif
#  if ((COM_RXDYNSIGNALTMPLENGTHFORSIGNALGROUPS == STD_ON) && (COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO == STD_ON))       /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf_tf */
        case COM_UINT8_DYN_APPLTYPEOFRXACCESSINFO:
        {
          Com_RxTpInfoIdxOfRxPduInfoType rxTpPduInfoIdx = Com_GetRxTpInfoIdxOfRxPduInfo(Com_GetRxPduInfoIdxOfRxAccessInfo(idxRxAccessInfo));
          Com_SetRxDynSignalTmpLengthForSignalGroups(rxTpPduInfoIdx, Com_GetRxDynamicLength(PduInfoPtr->SduLength, idxRxAccessInfo));
          VStdMemCpyRamToRam(Com_GetAddrRxSigBufferArrayBased(idxShdBuffer), Com_GetAddrTmpRxShdBufferArrayBased(idxTmpBuffer), Com_GetRxDynSignalTmpLengthForSignalGroups(rxTpPduInfoIdx));    /* SBSW_COM_CSL01 */
          break;
        }
#  endif
        default:       /* COV_COM_MISRA */
          break;
      }
    }
# endif
  }

  COM_DUMMY_STATEMENT_CONST(PduInfoPtr);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif

#if ((COM_RXSIGGRPINFOINDENDIDXOFRXPDUINFO == STD_ON) && (COM_UBMASKUSEDOFRXSIGGRPINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxProcessing_CheckSigGrpUB
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_RxProcessing_CheckSigGrpUB(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxSigGrpInfoIterType idxRxSigGrpInfo)
{
  boolean retVal = TRUE;
  /* #10 If the ComSignalGroup has an UpdateBit */
  if(Com_IsUbMaskUsedOfRxSigGrpInfo(idxRxSigGrpInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    /* #20 If the configured UpdateBit was not received mark the ComSignalGroup as updated */
    if(PduInfoPtr->SduLength <= Com_GetUbIdxOfRxSigGrpInfo(idxRxSigGrpInfo))
    {
      /* Update-bit not received */
      retVal = TRUE;
    }
    /* #30 If the UpdateBit is not set, mark the ComSignalGroup as not updated */
    else if(0 == (PduInfoPtr->SduDataPtr[Com_GetUbIdxOfRxSigGrpInfo(idxRxSigGrpInfo)] & Com_GetConstValueUInt8(Com_GetUbMaskIdxOfRxSigGrpInfo(idxRxSigGrpInfo))))
    {
      /* Update-bit not set */
      retVal = FALSE;
    }
    /* #40 Otherwise mark the ComSignalGroup as updated */
    else
    {
      /* Update-bit set */
      retVal = TRUE;
    }
  }
  return retVal;
}
#endif

#if ((COM_RXSIGINFOENDIDXOFRXPDUINFO == STD_ON) && (COM_UBMASKUSEDOFRXSIGINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxProcessing_CheckSigUB
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_RxProcessing_CheckSigUB(Com_RxSigInfoIterType idxRxSigInfo, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
  boolean retVal = TRUE;
  /* #10 If the ComSignal has an UpdateBit */
  if(Com_IsUbMaskUsedOfRxSigInfo(idxRxSigInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    /* #20 If the configured UpdateBit was not received mark the ComSignal as updated */
    /* <= because a length is compared with an index */
    if(PduInfoPtr->SduLength <= Com_GetUbIdxOfRxSigInfo(idxRxSigInfo))
    {
      /* Update-bit not received */
      retVal = TRUE;
    }
    /* #30 If the UpdateBit is not set, mark the ComSignal as not updated */
    else if(0 == (PduInfoPtr->SduDataPtr[Com_GetUbIdxOfRxSigInfo(idxRxSigInfo)] & Com_GetConstValueUInt8(Com_GetUbMaskIdxOfRxSigInfo(idxRxSigInfo))))
    {
      /* Update-bit not set */
      retVal = FALSE;
    }
    /* #40 Otherwise mark the ComSignal as updated */
    else
    {
      /* Update-bit set */
      retVal = TRUE;
    }
  }
  return retVal;
}
#endif

#if (COM_RXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxSignalProcessing
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIdxOfRxSigInfoType idxRxAccessInfo)
{
  Com_RxSigProcessState processState = VALID;

  /* #10 process the passed signal signal type dependent */
  switch (Com_GetApplTypeOfRxAccessInfo(idxRxAccessInfo))
  {
/* jet: GeneralSwitchCasePerApplType snippet*/
# if (COM_EXISTS_UINT8_APPLTYPEOFRXACCESSINFO == STD_ON)
    case COM_UINT8_APPLTYPEOFRXACCESSINFO:
    {
      processState = Com_RxSignalProcessing_UINT8(PduInfoPtr, idxRxAccessInfo); /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */
      break;
    }
# endif
# if (COM_EXISTS_SINT8_APPLTYPEOFRXACCESSINFO == STD_ON)
    case COM_SINT8_APPLTYPEOFRXACCESSINFO:
    {
      processState = Com_RxSignalProcessing_SINT8(PduInfoPtr, idxRxAccessInfo); /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */
      break;
    }
# endif
# if (COM_EXISTS_UINT16_APPLTYPEOFRXACCESSINFO == STD_ON)
    case COM_UINT16_APPLTYPEOFRXACCESSINFO:
    {
      processState = Com_RxSignalProcessing_UINT16(PduInfoPtr, idxRxAccessInfo);        /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */
      break;
    }
# endif
# if (COM_EXISTS_SINT16_APPLTYPEOFRXACCESSINFO == STD_ON)
    case COM_SINT16_APPLTYPEOFRXACCESSINFO:
    {
      processState = Com_RxSignalProcessing_SINT16(PduInfoPtr, idxRxAccessInfo);        /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */
      break;
    }
# endif
# if (COM_EXISTS_UINT32_APPLTYPEOFRXACCESSINFO == STD_ON)
    case COM_UINT32_APPLTYPEOFRXACCESSINFO:
    {
      processState = Com_RxSignalProcessing_UINT32(PduInfoPtr, idxRxAccessInfo);        /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */
      break;
    }
# endif
# if (COM_EXISTS_SINT32_APPLTYPEOFRXACCESSINFO == STD_ON)
    case COM_SINT32_APPLTYPEOFRXACCESSINFO:
    {
      processState = Com_RxSignalProcessing_SINT32(PduInfoPtr, idxRxAccessInfo);        /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */
      break;
    }
# endif
# if (COM_EXISTS_UINT64_APPLTYPEOFRXACCESSINFO == STD_ON)
    case COM_UINT64_APPLTYPEOFRXACCESSINFO:
    {
      processState = Com_RxSignalProcessing_UINT64(PduInfoPtr, idxRxAccessInfo);        /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */
      break;
    }
# endif
# if (COM_EXISTS_SINT64_APPLTYPEOFRXACCESSINFO == STD_ON)
    case COM_SINT64_APPLTYPEOFRXACCESSINFO:
    {
      processState = Com_RxSignalProcessing_SINT64(PduInfoPtr, idxRxAccessInfo);        /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */
      break;
    }
# endif
# if(COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON)
    case COM_UINT8_N_APPLTYPEOFRXACCESSINFO:   /* COV_COM_APPLTYPEOFRXACCESSINFO */
      processState = Com_RxSignalProcessing_UINT8_N(PduInfoPtr, idxRxAccessInfo);       /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */
      break;
# endif
# if ((COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO == STD_ON))       /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
    case COM_UINT8_DYN_APPLTYPEOFRXACCESSINFO:
      processState = Com_RxSignalProcessing_UINT8_DYN(PduInfoPtr, idxRxAccessInfo);     /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */
      break;
# endif
    default:   /* COV_COM_MISRA */
      break;
  }
  return processState;
}       /* PRQA S 6050 */ /* MD_MSR_STCAL */
#endif

/**********************************************************************************************************************
  Com_RxSignalProcessing_<ApplType>
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
/* jet: ComRxSignalProcessing */
#if ((COM_EXISTS_UINT8_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
/* see pattern Com_RxSignalProcessing_<ApplType> */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_UINT8(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo)
{
  Com_RxSigProcessState processState = VALID;
# if (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsBufferUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    uint8 tmpNewValue = Com_Signal_ReadSignal_UInt8(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));    /* SBSW_COM_FCTCALL_WITH_P2CONST */

#  if (COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON)
    processState = Com_RxInv_Sig_UInt8_EvaluateInvalidValue(idxRxAccessInfo, tmpNewValue);      /* SBSW_COM_FCTCALL_STACKPTR */
    if(processState == VALID)   /* COV_COM_INVALIDATION_TX */
#  endif
#  if ((COM_FILTERINFOUSEDOFRXACCESSINFO == STD_ON) && (COM_FILTERINFO_UINT8 == STD_ON))
    {
      if(Com_IsFilterInfoUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        boolean filterState;
        boolean hasToutOccurred = FALSE;
#   if (COM_RXTOUTINFOUSEDOFRXACCESSINFO == STD_ON)
        if(Com_IsRxTOutInfoUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_RX_TOUT_INFO_USED_XX */
        {
          hasToutOccurred = Com_LMgt_HasTimeoutOccurred(Com_GetRxTOutInfoIdxOfRxAccessInfo(idxRxAccessInfo));
        }
#   endif
        filterState = Com_Signal_UInt8_EvaluateFilter((Com_FilterInfo_UInt8IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), tmpNewValue, Com_GetRxSigBufferUInt8(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo)), hasToutOccurred);      /* SBSW_COM_FCTCALL_WITH_P2CONST */
        if(filterState == FALSE)
        {
          processState = FILTERED;
        }
      }
    }
    if(processState == VALID)
#  endif
    {
      Com_BufferIdxOfRxAccessInfoType idxBuffer = Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo);
      Com_SetRxSigBufferUInt8(idxBuffer, tmpNewValue);  /* SBSW_COM_CSL03 */
    }
  }
# endif

  COM_DUMMY_STATEMENT_CONST(PduInfoPtr);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(idxRxAccessInfo); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return processState;
}
#endif
/* jet: ComRxSignalProcessing */
#if ((COM_EXISTS_SINT8_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
/* see pattern Com_RxSignalProcessing_<ApplType> */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_SINT8(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo)
{
  Com_RxSigProcessState processState = VALID;
# if (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsBufferUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    sint8 tmpNewValue = Com_Signal_ReadSignal_SInt8(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));    /* SBSW_COM_FCTCALL_WITH_P2CONST */

#  if (COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON)
    processState = Com_RxInv_Sig_SInt8_EvaluateInvalidValue(idxRxAccessInfo, tmpNewValue);      /* SBSW_COM_FCTCALL_STACKPTR */
    if(processState == VALID)   /* COV_COM_INVALIDATION_TX */
#  endif
#  if ((COM_FILTERINFOUSEDOFRXACCESSINFO == STD_ON) && (COM_FILTERINFO_SINT8 == STD_ON))
    {
      if(Com_IsFilterInfoUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        boolean filterState;
        boolean hasToutOccurred = FALSE;
#   if (COM_RXTOUTINFOUSEDOFRXACCESSINFO == STD_ON)
        if(Com_IsRxTOutInfoUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_RX_TOUT_INFO_USED_XX */
        {
          hasToutOccurred = Com_LMgt_HasTimeoutOccurred(Com_GetRxTOutInfoIdxOfRxAccessInfo(idxRxAccessInfo));
        }
#   endif
        filterState = Com_Signal_SInt8_EvaluateFilter((Com_FilterInfo_SInt8IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), tmpNewValue, Com_GetRxSigBufferSInt8(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo)), hasToutOccurred);      /* SBSW_COM_FCTCALL_WITH_P2CONST */
        if(filterState == FALSE)
        {
          processState = FILTERED;
        }
      }
    }
    if(processState == VALID)
#  endif
    {
      Com_BufferIdxOfRxAccessInfoType idxBuffer = Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo);
      Com_SetRxSigBufferSInt8(idxBuffer, tmpNewValue);  /* SBSW_COM_CSL03 */
    }
  }
# endif

  COM_DUMMY_STATEMENT_CONST(PduInfoPtr);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(idxRxAccessInfo); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return processState;
}
#endif
/* jet: ComRxSignalProcessing */
#if ((COM_EXISTS_UINT16_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
/* see pattern Com_RxSignalProcessing_<ApplType> */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_UINT16(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo)
{
  Com_RxSigProcessState processState = VALID;
# if (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsBufferUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    uint16 tmpNewValue = Com_Signal_ReadSignal_UInt16(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));  /* SBSW_COM_FCTCALL_WITH_P2CONST */

#  if (COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON)
    processState = Com_RxInv_Sig_UInt16_EvaluateInvalidValue(idxRxAccessInfo, tmpNewValue);     /* SBSW_COM_FCTCALL_STACKPTR */
    if(processState == VALID)   /* COV_COM_INVALIDATION_TX */
#  endif
#  if ((COM_FILTERINFOUSEDOFRXACCESSINFO == STD_ON) && (COM_FILTERINFO_UINT16 == STD_ON))
    {
      if(Com_IsFilterInfoUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        boolean filterState;
        boolean hasToutOccurred = FALSE;
#   if (COM_RXTOUTINFOUSEDOFRXACCESSINFO == STD_ON)
        if(Com_IsRxTOutInfoUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_RX_TOUT_INFO_USED_XX */
        {
          hasToutOccurred = Com_LMgt_HasTimeoutOccurred(Com_GetRxTOutInfoIdxOfRxAccessInfo(idxRxAccessInfo));
        }
#   endif
        filterState = Com_Signal_UInt16_EvaluateFilter((Com_FilterInfo_UInt16IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), tmpNewValue, Com_GetRxSigBufferUInt16(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo)), hasToutOccurred);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
        if(filterState == FALSE)
        {
          processState = FILTERED;
        }
      }
    }
    if(processState == VALID)
#  endif
    {
      Com_BufferIdxOfRxAccessInfoType idxBuffer = Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo);
      Com_SetRxSigBufferUInt16(idxBuffer, tmpNewValue); /* SBSW_COM_CSL03 */
    }
  }
# endif

  COM_DUMMY_STATEMENT_CONST(PduInfoPtr);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(idxRxAccessInfo); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return processState;
}
#endif
/* jet: ComRxSignalProcessing */
#if ((COM_EXISTS_SINT16_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
/* see pattern Com_RxSignalProcessing_<ApplType> */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_SINT16(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo)
{
  Com_RxSigProcessState processState = VALID;
# if (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsBufferUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    sint16 tmpNewValue = Com_Signal_ReadSignal_SInt16(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));  /* SBSW_COM_FCTCALL_WITH_P2CONST */

#  if (COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON)
    processState = Com_RxInv_Sig_SInt16_EvaluateInvalidValue(idxRxAccessInfo, tmpNewValue);     /* SBSW_COM_FCTCALL_STACKPTR */
    if(processState == VALID)   /* COV_COM_INVALIDATION_TX */
#  endif
#  if ((COM_FILTERINFOUSEDOFRXACCESSINFO == STD_ON) && (COM_FILTERINFO_SINT16 == STD_ON))
    {
      if(Com_IsFilterInfoUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        boolean filterState;
        boolean hasToutOccurred = FALSE;
#   if (COM_RXTOUTINFOUSEDOFRXACCESSINFO == STD_ON)
        if(Com_IsRxTOutInfoUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_RX_TOUT_INFO_USED_XX */
        {
          hasToutOccurred = Com_LMgt_HasTimeoutOccurred(Com_GetRxTOutInfoIdxOfRxAccessInfo(idxRxAccessInfo));
        }
#   endif
        filterState = Com_Signal_SInt16_EvaluateFilter((Com_FilterInfo_SInt16IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), tmpNewValue, Com_GetRxSigBufferSInt16(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo)), hasToutOccurred);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
        if(filterState == FALSE)
        {
          processState = FILTERED;
        }
      }
    }
    if(processState == VALID)
#  endif
    {
      Com_BufferIdxOfRxAccessInfoType idxBuffer = Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo);
      Com_SetRxSigBufferSInt16(idxBuffer, tmpNewValue); /* SBSW_COM_CSL03 */
    }
  }
# endif

  COM_DUMMY_STATEMENT_CONST(PduInfoPtr);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(idxRxAccessInfo); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return processState;
}
#endif
/* jet: ComRxSignalProcessing */
#if ((COM_EXISTS_UINT32_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
/* see pattern Com_RxSignalProcessing_<ApplType> */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_UINT32(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo)
{
  Com_RxSigProcessState processState = VALID;
# if (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsBufferUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    uint32 tmpNewValue = Com_Signal_ReadSignal_UInt32(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));  /* SBSW_COM_FCTCALL_WITH_P2CONST */

#  if (COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON)
    processState = Com_RxInv_Sig_UInt32_EvaluateInvalidValue(idxRxAccessInfo, tmpNewValue);     /* SBSW_COM_FCTCALL_STACKPTR */
    if(processState == VALID)   /* COV_COM_INVALIDATION_TX */
#  endif
#  if ((COM_FILTERINFOUSEDOFRXACCESSINFO == STD_ON) && (COM_FILTERINFO_UINT32 == STD_ON))
    {
      if(Com_IsFilterInfoUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        boolean filterState;
        boolean hasToutOccurred = FALSE;
#   if (COM_RXTOUTINFOUSEDOFRXACCESSINFO == STD_ON)
        if(Com_IsRxTOutInfoUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_RX_TOUT_INFO_USED_XX */
        {
          hasToutOccurred = Com_LMgt_HasTimeoutOccurred(Com_GetRxTOutInfoIdxOfRxAccessInfo(idxRxAccessInfo));
        }
#   endif
        filterState = Com_Signal_UInt32_EvaluateFilter((Com_FilterInfo_UInt32IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), tmpNewValue, Com_GetRxSigBufferUInt32(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo)), hasToutOccurred);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
        if(filterState == FALSE)
        {
          processState = FILTERED;
        }
      }
    }
    if(processState == VALID)
#  endif
    {
      Com_BufferIdxOfRxAccessInfoType idxBuffer = Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo);
      Com_SetRxSigBufferUInt32(idxBuffer, tmpNewValue); /* SBSW_COM_CSL03 */
    }
  }
# endif

  COM_DUMMY_STATEMENT_CONST(PduInfoPtr);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(idxRxAccessInfo); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return processState;
}
#endif
/* jet: ComRxSignalProcessing */
#if ((COM_EXISTS_SINT32_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
/* see pattern Com_RxSignalProcessing_<ApplType> */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_SINT32(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo)
{
  Com_RxSigProcessState processState = VALID;
# if (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsBufferUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    sint32 tmpNewValue = Com_Signal_ReadSignal_SInt32(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));  /* SBSW_COM_FCTCALL_WITH_P2CONST */

#  if (COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON)
    processState = Com_RxInv_Sig_SInt32_EvaluateInvalidValue(idxRxAccessInfo, tmpNewValue);     /* SBSW_COM_FCTCALL_STACKPTR */
    if(processState == VALID)   /* COV_COM_INVALIDATION_TX */
#  endif
#  if ((COM_FILTERINFOUSEDOFRXACCESSINFO == STD_ON) && (COM_FILTERINFO_SINT32 == STD_ON))
    {
      if(Com_IsFilterInfoUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        boolean filterState;
        boolean hasToutOccurred = FALSE;
#   if (COM_RXTOUTINFOUSEDOFRXACCESSINFO == STD_ON)
        if(Com_IsRxTOutInfoUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_RX_TOUT_INFO_USED_XX */
        {
          hasToutOccurred = Com_LMgt_HasTimeoutOccurred(Com_GetRxTOutInfoIdxOfRxAccessInfo(idxRxAccessInfo));
        }
#   endif
        filterState = Com_Signal_SInt32_EvaluateFilter((Com_FilterInfo_SInt32IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), tmpNewValue, Com_GetRxSigBufferSInt32(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo)), hasToutOccurred);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
        if(filterState == FALSE)
        {
          processState = FILTERED;
        }
      }
    }
    if(processState == VALID)
#  endif
    {
      Com_BufferIdxOfRxAccessInfoType idxBuffer = Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo);
      Com_SetRxSigBufferSInt32(idxBuffer, tmpNewValue); /* SBSW_COM_CSL03 */
    }
  }
# endif

  COM_DUMMY_STATEMENT_CONST(PduInfoPtr);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(idxRxAccessInfo); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return processState;
}
#endif
/* jet: ComRxSignalProcessing */
#if ((COM_EXISTS_UINT64_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
/* see pattern Com_RxSignalProcessing_<ApplType> */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_UINT64(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo)
{
  Com_RxSigProcessState processState = VALID;
# if (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsBufferUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    uint64 tmpNewValue = Com_Signal_ReadSignal_UInt64(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));  /* SBSW_COM_FCTCALL_WITH_P2CONST */

#  if (COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON)
    processState = Com_RxInv_Sig_UInt64_EvaluateInvalidValue(idxRxAccessInfo, tmpNewValue);     /* SBSW_COM_FCTCALL_STACKPTR */
    if(processState == VALID)   /* COV_COM_INVALIDATION_TX */
#  endif
#  if ((COM_FILTERINFOUSEDOFRXACCESSINFO == STD_ON) && (COM_FILTERINFO_UINT64 == STD_ON))
    {
      if(Com_IsFilterInfoUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        boolean filterState;
        boolean hasToutOccurred = FALSE;
#   if (COM_RXTOUTINFOUSEDOFRXACCESSINFO == STD_ON)
        if(Com_IsRxTOutInfoUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_RX_TOUT_INFO_USED_XX */
        {
          hasToutOccurred = Com_LMgt_HasTimeoutOccurred(Com_GetRxTOutInfoIdxOfRxAccessInfo(idxRxAccessInfo));
        }
#   endif
        filterState = Com_Signal_UInt64_EvaluateFilter((Com_FilterInfo_UInt64IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), tmpNewValue, Com_GetRxSigBufferUInt64(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo)), hasToutOccurred);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
        if(filterState == FALSE)
        {
          processState = FILTERED;
        }
      }
    }
    if(processState == VALID)
#  endif
    {
      Com_BufferIdxOfRxAccessInfoType idxBuffer = Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo);
      Com_SetRxSigBufferUInt64(idxBuffer, tmpNewValue); /* SBSW_COM_CSL03 */
    }
  }
# endif

  COM_DUMMY_STATEMENT_CONST(PduInfoPtr);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(idxRxAccessInfo); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return processState;
}
#endif
/* jet: ComRxSignalProcessing */
#if ((COM_EXISTS_SINT64_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
/* see pattern Com_RxSignalProcessing_<ApplType> */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_SINT64(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo)
{
  Com_RxSigProcessState processState = VALID;
# if (COM_BUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsBufferUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    sint64 tmpNewValue = Com_Signal_ReadSignal_SInt64(idxRxAccessInfo, &(PduInfoPtr->SduDataPtr[Com_GetBytePositionOfRxAccessInfo(idxRxAccessInfo)]));  /* SBSW_COM_FCTCALL_WITH_P2CONST */

#  if (COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON)
    processState = Com_RxInv_Sig_SInt64_EvaluateInvalidValue(idxRxAccessInfo, tmpNewValue);     /* SBSW_COM_FCTCALL_STACKPTR */
    if(processState == VALID)   /* COV_COM_INVALIDATION_TX */
#  endif
#  if ((COM_FILTERINFOUSEDOFRXACCESSINFO == STD_ON) && (COM_FILTERINFO_SINT64 == STD_ON))
    {
      if(Com_IsFilterInfoUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        boolean filterState;
        boolean hasToutOccurred = FALSE;
#   if (COM_RXTOUTINFOUSEDOFRXACCESSINFO == STD_ON)
        if(Com_IsRxTOutInfoUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_RX_TOUT_INFO_USED_XX */
        {
          hasToutOccurred = Com_LMgt_HasTimeoutOccurred(Com_GetRxTOutInfoIdxOfRxAccessInfo(idxRxAccessInfo));
        }
#   endif
        filterState = Com_Signal_SInt64_EvaluateFilter((Com_FilterInfo_SInt64IterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), tmpNewValue, Com_GetRxSigBufferSInt64(Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo)), hasToutOccurred);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
        if(filterState == FALSE)
        {
          processState = FILTERED;
        }
      }
    }
    if(processState == VALID)
#  endif
    {
      Com_BufferIdxOfRxAccessInfoType idxBuffer = Com_GetBufferIdxOfRxAccessInfo(idxRxAccessInfo);
      Com_SetRxSigBufferSInt64(idxBuffer, tmpNewValue); /* SBSW_COM_CSL03 */
    }
  }
# endif

  COM_DUMMY_STATEMENT_CONST(PduInfoPtr);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(idxRxAccessInfo); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return processState;
}
#endif
#if((COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO == STD_ON) && (COM_RXSIGINFO == STD_ON))
/* see pattern Com_RxSignalProcessing_<ApplType> */
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_UINT8_N(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo)  /* COV_COM_APPLTYPEOFRXACCESSINFO */
{
  Com_RxSigProcessState processState = VALID;

  if(Com_IsRxSigBufferArrayBasedBufferUsedOfRxAccessInfo(idxRxAccessInfo))      /* COV_COM_ARRAY_BASED_BUFFER */
  {
    P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) newValuePtr = &(PduInfoPtr->SduDataPtr[Com_GetStartByteInPduPositionOfRxAccessInfo(idxRxAccessInfo)]);
# if (COM_CONSTVALUEARRAYBASEDINVVALUEUSEDOFRXACCESSINFO == STD_ON)
    processState = Com_RxInv_Sig_UInt8_N_EvaluateInvalidValue(idxRxAccessInfo, newValuePtr);    /* SBSW_COM_FCTCALL_WITH_P2CONST */
    if(processState == VALID)
# endif
# if ((COM_FILTERINFOUSEDOFRXACCESSINFO == STD_ON) && (COM_FILTERINFO_UINT8_N == STD_ON))
    {
      if(Com_IsFilterInfoUsedOfRxAccessInfo(idxRxAccessInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        boolean filterState;
        boolean hasToutOccurred = FALSE;
#  if (COM_RXTOUTINFOUSEDOFRXACCESSINFO == STD_ON)
        if(Com_IsRxTOutInfoUsedOfRxAccessInfo(idxRxAccessInfo)) /* COV_COM_FEATURE_RX_TOUT_INFO_USED_XX */
        {
          hasToutOccurred = Com_LMgt_HasTimeoutOccurred(Com_GetRxTOutInfoIdxOfRxAccessInfo(idxRxAccessInfo));
        }
#  endif
        filterState = Com_Signal_UInt8_N_EvaluateFilter((Com_FilterInfo_UInt8_NIterType) Com_GetFilterInfoIdxOfRxAccessInfo(idxRxAccessInfo), newValuePtr, Com_GetAddrRxSigBufferArrayBased(Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(idxRxAccessInfo)), (PduLengthType) Com_GetRxSigBufferArrayBasedBufferLengthOfRxAccessInfo(idxRxAccessInfo), hasToutOccurred);      /* SBSW_COM_FCTCALL_WITH_P2CONST */
        if(filterState == FALSE)
        {
          processState = FILTERED;
        }
      }
    }
    if(processState == VALID)
# endif
    {
      Com_RxSigBufferArrayBasedIterType idxBuffer = Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(idxRxAccessInfo);
      VStdMemCpyRamToRam(Com_GetAddrRxSigBufferArrayBased(idxBuffer), newValuePtr, Com_GetRxSigBufferArrayBasedBufferLengthOfRxAccessInfo(idxRxAccessInfo));    /* SBSW_COM_MEM_CPY_RAM2RAM */
    }
  }

  COM_DUMMY_STATEMENT_CONST(PduInfoPtr);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(idxRxAccessInfo); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return processState;
}
#endif

#if ((COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO == STD_ON))        /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
/**********************************************************************************************************************
  Com_RxSignalProcessing_UINT8_DYN
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Com_RxSigProcessState, COM_CODE) Com_RxSignalProcessing_UINT8_DYN(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxAccessInfoIterType idxRxAccessInfo)
{
  Com_RxSigProcessState processState = VALID;
# if (COM_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO == STD_ON)
  if(Com_IsRxSigBufferArrayBasedBufferUsedOfRxAccessInfo(idxRxAccessInfo))      /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) newValuePtr;
    newValuePtr = &(PduInfoPtr->SduDataPtr[Com_GetStartByteInPduPositionOfRxAccessInfo(idxRxAccessInfo)]);

#  if (COM_INVVALUEUSEDOFRXACCESSINFO == STD_ON)
    processState = Com_RxInv_Sig_UInt8_Dyn_EvaluateInvalidValue(idxRxAccessInfo, newValuePtr, PduInfoPtr->SduLength);   /* SBSW_COM_FCTCALL_STACKPTR */
    if(processState == VALID)
#  endif
    {
      Com_RxSigBufferArrayBasedIterType idxBuffer = Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(idxRxAccessInfo);
      Com_RxTpInfoIdxOfRxPduInfoType rxTpPduInfoIdx = Com_GetRxTpInfoIdxOfRxPduInfo(Com_GetRxPduInfoIdxOfRxAccessInfo(idxRxAccessInfo));
      Com_SetRxDynSignalLength(rxTpPduInfoIdx, Com_GetRxDynamicLength(PduInfoPtr->SduLength, idxRxAccessInfo));

      VStdMemCpyRamToRam(Com_GetAddrRxSigBufferArrayBased(idxBuffer), newValuePtr, Com_GetRxDynSignalLength(rxTpPduInfoIdx));   /* SBSW_COM_CSL01_STACKPTR */
    }
  }
# endif

  COM_DUMMY_STATEMENT_CONST(PduInfoPtr);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(idxRxAccessInfo); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return processState;
}
#endif

#if (COM_RXSIGGRPINFOINDENDIDXOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_ProcessSigGrpEvent
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_ProcessSigGrpEvent(PduIdType comRxPduInfoIdx,
                                                                      P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxSigGrpInfoIterType idxRxSigGrpInfo,
                                                                      P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr)
{
# if ((COM_INVEVENTOFRXSIGGRPINFO == STD_ON) || (COM_FILTEREVENTOFRXSIGGRPINFO == STD_ON))
  Com_RxSigProcessState process = VALID;
# endif
# if ((COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_TMPBUFFERUSEDOFRXACCESSINFO == STD_ON))
  /* #10 Read the passed ComSignalGroup values form the passed ComIPdu */
  Com_RxProcessing_ReadSignalGroup(PduInfoPtr, idxRxSigGrpInfo);        /* SBSW_COM_FCTCALL_WITH_P2CONST */
# endif
# if (COM_INVEVENTOFRXSIGGRPINFO == STD_ON)
  /* #20 Evaluate whether any new value of the related ComGroupSignals is an invalid value */
  process = Com_RxInv_SigGrp(idxRxSigGrpInfo, fctPtrCacheStrctPtr);     /* SBSW_COM_FCTPTR_CACHE_PTR */
  /* #30 If the new value of all related ComGroupSignal is valid */
  if(process == VALID)
# endif
  {
# if (COM_FILTEREVENTOFRXSIGGRPINFO == STD_ON)
    /* #40 Evaluate the current filter state */
    if(Com_IsFilterEventOfRxSigGrpInfo(idxRxSigGrpInfo))        /* COV_COM_FILTER_ALWAYS_PRESENT */
    {
      process = Com_RxProcessing_RxSignalGroupFilterCheck(idxRxSigGrpInfo);
    }
    if(process == VALID)
# endif
    {
      /* #60 If no ComSignalGroup Array Access is used, extract group signal data to the shadow buffer */
# if ((COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON))
#  if (COM_ARRAYACCESSUSEDOFRXSIGGRPINFO == STD_ON)
      if(!Com_IsArrayAccessUsedOfRxSigGrpInfo(idxRxSigGrpInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
#  endif
      {
        Com_RxProcessing_ExtractToShdwBffr(idxRxSigGrpInfo, PduInfoPtr);        /* SBSW_COM_FCTCALL_WITH_P2CONST */
      }
# endif

# if ((COM_RXTOUTINFOUSEDOFRXSIGGRPINFO == STD_ON) && (COM_UBMASKIDXOFRXSIGGRPINFO == STD_ON))
      /* #70 If the ComSiganlGroup has a timeout and an UpdateBit, remove the timeout occurred flag */
      if(Com_IsRxTOutInfoUsedOfRxSigGrpInfo(idxRxSigGrpInfo) && Com_IsUbMaskUsedOfRxSigGrpInfo(idxRxSigGrpInfo))        /* COV_COM_FEATURE_RX_TOUT_WITH_UB */
      {
        Com_LMgt_RemoveOccurredFlag(Com_GetRxTOutInfoIdxOfRxSigGrpInfo(idxRxSigGrpInfo));       /* SBSW_COM_CSL02 */
      }
# endif
# if (COM_RXCBKFUNCPTRACKIDXOFRXSIGGRPINFO == STD_ON)
      /* #80 Cache or Call the related Rx notification functions */
      if(Com_IsRxCbkFuncPtrAckUsedOfRxSigGrpInfo(idxRxSigGrpInfo))      /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        Com_CacheOrCallRxCbkFctPtr((Com_RxCbkFuncPtrIterType) Com_GetRxCbkFuncPtrAckIdxOfRxSigGrpInfo(idxRxSigGrpInfo), comRxPduInfoIdx, fctPtrCacheStrctPtr);  /* SBSW_COM_FCTPTR_CACHE_PTR */
      }
# endif
    }
  }

  COM_DUMMY_STATEMENT(comRxPduInfoIdx); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT_CONST(PduInfoPtr);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(idxRxSigGrpInfo); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(fctPtrCacheStrctPtr);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if ((COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_TMPBUFFERUSEDOFRXACCESSINFO == STD_ON))
/**********************************************************************************************************************
  Com_RxProcessing_ReadSignalGroup
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_ReadSignalGroup(P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr, Com_RxSigGrpInfoIterType idxRxSigGrpInfo)
{
# if (COM_ARRAYACCESSUSEDOFRXSIGGRPINFO == STD_ON)
  /* #10 If ComSignalGroup Array Access is used, copy the passed ComSignalGroup data to the shadow buffer */
  if(Com_IsArrayAccessUsedOfRxSigGrpInfo(idxRxSigGrpInfo))      /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_RxSigBufferUInt8IterType ShdBufferStartIndex = Com_GetRxSigBufferUInt8StartIdxOfRxSigGrpInfo(idxRxSigGrpInfo);
    P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) SignalSourcePtr = &(PduInfoPtr->SduDataPtr[Com_GetStartBytePositionOfRxSigGrpInfo(idxRxSigGrpInfo)]);
    VStdMemCpyRamToRam(Com_GetAddrRxSigBufferUInt8(ShdBufferStartIndex), SignalSourcePtr, Com_GetRxSigBufferUInt8LengthOfRxSigGrpInfo(idxRxSigGrpInfo));        /* SBSW_COM_CSL02 */
  }
  /* #20 Otherwise copy the passed values of all related ComGroupSignals to there shadow buffer */
  else
# endif
  {
    Com_RxAccessInfoIndIterType RxAccessInfoIndidx = Com_GetRxAccessInfoGrpSigIndStartIdxOfRxSigGrpInfo(idxRxSigGrpInfo);
    for(; RxAccessInfoIndidx < Com_GetRxAccessInfoGrpSigIndEndIdxOfRxSigGrpInfo(idxRxSigGrpInfo); RxAccessInfoIndidx++)
    {
      Com_RxProcessing_ReadGrpSignal(PduInfoPtr, Com_GetRxAccessInfoGrpSigInd(RxAccessInfoIndidx));     /* SBSW_COM_FCTCALL_WITH_P2CONST */
    }
  }
}
#endif

#if(COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_EnterExclusiveArea_Deferred
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_EnterExclusiveArea_Deferred(void)
{
  /* #10 Enter the rx deferred exclusive area */
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
}

/**********************************************************************************************************************
  Com_RxProcessing_ExitExclusiveArea_Deferred
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_ExitExclusiveArea_Deferred(void)
{
  /* #05 Reload the counter with the threshold value */
  Com_SetRxDeferredProcessingISRLockCounter(Com_GetRxDeferredProcessingISRLockThreshold());
  /* #10 Exit the rx deferred exclusive area */
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
}

/**********************************************************************************************************************
  Com_RxProcessing_ThresholdCheck_Deferred
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_RxProcessing_ThresholdCheck_Deferred(P2VAR(FctPtrCacheStrct, AUTOMATIC, COM_APPL_DATA) fctPtrCacheStrctPtr)
{
  if(Com_GetRxDeferredProcessingISRLockCounter() > 0)
  {
    Com_DecRxDeferredProcessingISRLockCounter();
  }
  else
  {
    Com_RxProcessing_ExitExclusiveArea_Deferred();
# if (COM_RXDEFERREDFCTPTRCACHE == STD_ON)
    Com_ProcessRxFctPtrCache(fctPtrCacheStrctPtr);      /* SBSW_COM_FCTPTR_CACHE_PTR */
# endif
    Com_RxProcessing_EnterExclusiveArea_Deferred();
  }

  COM_DUMMY_STATEMENT(fctPtrCacheStrctPtr);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_RxProcessing_IsDeferredProcessingRequested
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_RxProcessing_IsDeferredProcessingRequested(Com_SizeOfRxPduInfoType idxRxPduInfo)
{
  /* #10 Evaluate if deferred processing needs to be performed for the passed Rx ComIPdu */
  boolean retVal = FALSE;
  if(Com_IsHandleRxPduDeferredUsedOfRxPduInfo(idxRxPduInfo))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    if(Com_IsRxPduGrpActive(idxRxPduInfo))
    {
      if(0 < Com_GetHandleRxPduDeferred(Com_GetHandleRxPduDeferredIdxOfRxPduInfo(idxRxPduInfo)))        /* COV_COM_RX_PROCESSING_SINGLEPDU */
      {
        retVal = TRUE;
      }
    }
  }

  return retVal;
}
#endif

#if (COM_TXBUFFERUSEDOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxBuffer_InitTxIpdu
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxBuffer_InitTxIpdu(Com_TxPduInfoIterType ComPduId)
{
  /* #10 Copy the initial values to the Tx ComIPdu buffer */
  VStdMemCpyRomToRam(Com_GetAddrTxBuffer(Com_GetTxBufferStartIdxOfTxPduInfo(ComPduId)), Com_GetAddrTxPduInitValue(Com_GetTxPduInitValueStartIdxOfTxPduInfo(ComPduId)), Com_GetTxBufferLengthOfTxPduInfo(ComPduId));     /* SBSW_COM_MEM_CPY_RAM2RAM */
# if  (COM_TXPDUINITVALUEMETADATAUSEDOFTXPDUINFO == STD_ON)     /* COV_COM_VAR_ELISA_STD_OFF_XF */
  /* #20 Copy the meta data init values to the Tx ComIPdu buffer */
  VStdMemCpyRomToRam(Com_GetAddrTxBuffer(Com_GetTxBufferMetaDataStartIdxOfTxPduInfo(ComPduId)), Com_GetAddrTxPduInitValue(Com_GetTxPduInitValueMetaDataStartIdxOfTxPduInfo(ComPduId)), Com_GetTxBufferMetaDataLengthOfTxPduInfo(ComPduId));     /* SBSW_COM_MEM_CPY_RAM2RAM */
# endif
}
#endif

#if (COM_CONSTVALUEUINT8UBCLEARMASKENDIDXOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxBuffer_ClearUpdateBits
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxBuffer_ClearUpdateBits(PduIdType ComTxPduId)
{
  Com_TxBufferIterType txBufferIdx = Com_GetTxBufferStartIdxOfTxPduInfo(ComTxPduId);

  /* #10 If the passed Tx ComIPdu has a pdu buffer, clear all related UpdateBits in that buffer */
  Com_ConstValueUInt8UbClearMaskEndIdxOfTxPduInfoType idxConstValueUInt8 = Com_GetConstValueUInt8UbClearMaskStartIdxOfTxPduInfo(ComTxPduId);
  for(; idxConstValueUInt8 < Com_GetConstValueUInt8UbClearMaskEndIdxOfTxPduInfo(ComTxPduId); idxConstValueUInt8++)
  {
    Com_SetTxBuffer(txBufferIdx, Com_GetTxBuffer(txBufferIdx) & Com_GetConstValueUInt8(idxConstValueUInt8));    /* SBSW_COM_ARRAY_WRITEACCESS_CSL */
    txBufferIdx++;
  }
}
#endif

#if (COM_TXSIGGRPMASK == STD_ON)
/**********************************************************************************************************************
  Com_TxBuffer_WriteSignalGroup
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxBuffer_WriteSignalGroup(Com_SignalGroupIdType SignalGroupId, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) ShadowBufferPtr)
{
  if(ShadowBufferPtr != NULL_PTR)       /* COV_COM_SILENT_TX */
  {
    Com_TxBufferSigGrpInTxIPDUEndIdxOfTxSigGrpInfoType i;
    P2CONST(uint8, AUTOMATIC, COM_PBCFG) maskPtr = Com_GetAddrTxSigGrpMask(Com_GetTxSigGrpMaskStartIdxOfTxSigGrpInfo(SignalGroupId));
    P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) pIpduBuf = Com_GetAddrTxBuffer(Com_GetTxBufferSigGrpInTxIPDUStartIdxOfTxSigGrpInfo(SignalGroupId));
    /* #10 Copy the shadow buffer to the Tx ComIPdu buffer, mask out the required bits */
    for(i = 0; i < Com_GetTxBufferSigGrpInTxIPDULengthOfTxSigGrpInfo(SignalGroupId); i++)
    {
      pIpduBuf[i] = (pIpduBuf[i] & COM_CAST2UINT8(~maskPtr[i])) | (ShadowBufferPtr[i] & maskPtr[i]);    /* SBSW_COM_CSL03 */
    }
  }
}
#endif

#if (COM_TXTOUTCNT == STD_ON)
/**********************************************************************************************************************
  Com_TxDlMon_Init
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_Init(void)
{
  /* #10 Initialize all tx timeout counter with 0 */
  Com_TxTOutCntIterType ComTxToutIdx;
  for(ComTxToutIdx = 0; ComTxToutIdx < Com_GetSizeOfTxTOutCnt(); ComTxToutIdx++)
  {
    Com_SetTxTOutCnt(ComTxToutIdx, 0);  /* SBSW_COM_CSL01 */
  }
}
#endif

#if (COM_TXTOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxDlMon_MainFunctionTx
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_MainFunctionTx(void)
{
  Com_SizeOfTxTOutInfoType idxTxTOutInfo;

  Com_TxDlMon_EnterExclusiveArea();

  /* #10 Iterate over all tx timeout infos */
  for(idxTxTOutInfo = 0; idxTxTOutInfo < Com_GetSizeOfTxTOutInfo(); idxTxTOutInfo++)
  {
    Com_TxPduInfoIdxOfTxTOutInfoType idxTxPduInfo = Com_GetTxPduInfoIdxOfTxTOutInfo(idxTxTOutInfo);

    /* #20 If the Tx ComIPdu is active and the current timeout counter value is greater 0 */
    if(Com_IsTxPduGrpActive(idxTxPduInfo))
    {
      if(0 < Com_GetTxTOutCnt(idxTxTOutInfo))   /* COV_COM_TX_PROCESSING_NONE_MODE */
      {
        /* #30 Decrement the timeout counter value */
        Com_DecTxTOutCnt(idxTxTOutInfo);        /* SBSW_COM_CSL02 */
        /* #40 If the timeout counter value is equal 0 */
        if(Com_GetTxTOutCnt(idxTxTOutInfo) == 0)
        {
          /* #50 Set the repetition counter and the MDT counter to 0 */
# if ((COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON))
          Com_SetRepCnt(idxTxPduInfo, 0);       /* SBSW_COM_CSL02 */
# endif
# if (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON)
          Com_SetDelayTimeCnt(idxTxPduInfo, 0); /* SBSW_COM_CSL02 */
# endif

# if ((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) && (COM_CANCELLATIONSUPPORTOFTXPDUINFO == STD_ON))        /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf */
          /* #60 Do transmit cancellation */
          Com_TxLLIf_CancelTransmit((PduIdType) idxTxPduInfo);
# endif

# if (COM_CBKTXTOUTFUNCPTRINDUSEDOFTXTOUTINFO == STD_ON)
          Com_TxDlMon_ExitExclusiveArea();
          /* #70 Call the configured timeout notifications */
          Com_TxDlMon_TxCallCbkTout(idxTxTOutInfo);
          Com_TxDlMon_EnterExclusiveArea();
# endif
        }
      } /* Timer active check */
    }   /* I-PDU active check */
    Com_TxDlMon_ThresholdCheck();
  }     /* Tx Timeout object loop */

  Com_TxDlMon_ExitExclusiveArea();
}
#endif

#if(COM_TXTOUTINFO == STD_ON)
/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_TxDlMon_EnterExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_EnterExclusiveArea(void)
{
  /* #10 Enter the tx deadline monitoring exclusive area */
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();
}

/**********************************************************************************************************************
  Com_TxDlMon_ExitExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_ExitExclusiveArea(void)
{
  /* #05 Reload the counter with the threshold value */
  Com_SetTxDeadlineMonitoringISRLockCounter(Com_GetTxDeadlineMonitoringISRLockThreshold());
  /* #10 Exit the tx deadline monitoring exclusive area */
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
}

/**********************************************************************************************************************
  Com_TxDlMon_ThresholdCheck
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_ThresholdCheck(void)
{
  if(Com_GetTxDeadlineMonitoringISRLockCounter() > 0)   /* COV_COM_THRESHOLD_TX */
  {
    Com_DecTxDeadlineMonitoringISRLockCounter();
  }
  else
  {
    Com_TxDlMon_ExitExclusiveArea();
    Com_TxDlMon_EnterExclusiveArea();
  }
}

#endif

#if (COM_TXTOUTINFOUSEDOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxDlMon_TxConfirmation
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_TxConfirmation(PduIdType TxPduId)
{
  /* #10 If the passed Tx ComIPdu has a related tx timeout */
  if(Com_IsTxTOutInfoUsedOfTxPduInfo(TxPduId))
  {
    Com_TxTOutInfoIdxOfTxPduInfoType idxTxTOutInfo = Com_GetTxTOutInfoIdxOfTxPduInfo(TxPduId);
# if (COM_NONEMODEOFTXTOUTINFO == STD_ON)
    /* #20 If the tx timeout is in None mode and the current timeout counter value is greater 0, set the tx timeout counter to the configured tx timeout factor */
    if(Com_IsNoneModeOfTxTOutInfo(idxTxTOutInfo))       /* COV_COM_TX_PROCESSING_NONE_MODE */
    {
      if(Com_GetTxTOutCnt(idxTxTOutInfo) > 0)
      {
        Com_SetTxTOutCnt(idxTxTOutInfo, Com_GetFactorOfTxTOutInfo(idxTxTOutInfo));      /* SBSW_COM_CSL02 */
      }
    }
    /* #30 Otherwise the tx timeout is in Normal mode, in this case set the tx timeout counter to 0 */
    else
# endif
    {
      Com_SetTxTOutCnt(idxTxTOutInfo, 0);       /* SBSW_COM_CSL02 */
    }
  }
}
#endif

#if (COM_TXTOUTINFOUSEDOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxDlMon_IPduGroupStart
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_IPduGroupStart(Com_TxPduInfoIterType TxPduId)
{
  /* #10 If the passed Tx ComIPdu has a related tx timeout */
  if(Com_IsTxTOutInfoUsedOfTxPduInfo(TxPduId))  /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_TxTOutInfoIdxOfTxPduInfoType idxTxTOutInfo = Com_GetTxTOutInfoIdxOfTxPduInfo(TxPduId);
# if (COM_NONEMODEOFTXTOUTINFO == STD_ON)
    /* #20 If the tx timeout is in None mode, set the tx timeout counter to the configured tx timeout factor */
    if(Com_IsNoneModeOfTxTOutInfo(idxTxTOutInfo))       /* COV_COM_TX_PROCESSING_NONE_MODE */
    {
      Com_SetTxTOutCnt(idxTxTOutInfo, Com_GetFactorOfTxTOutInfo(idxTxTOutInfo));        /* SBSW_COM_CSL02 */
    }
    /* #30 Otherwise the tx timeout is in Normal mode, in this case set the tx timeout counter to 0 */
    else
# endif
    {
      Com_SetTxTOutCnt(idxTxTOutInfo, 0);       /* SBSW_COM_CSL02 */
    }
  }
}
#endif

#if ((COM_TXMODEINFO == STD_ON) && (COM_TXTOUTINFOUSEDOFTXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_TxDlMon_SwitchIpduTxMode
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_SwitchIpduTxMode(PduIdType TxPduId)
{
  /* #10 If the passed Tx ComIPdu has a related tx timeout and the tx timeout is in Normal mode */
  if(Com_IsTxTOutInfoUsedOfTxPduInfo(TxPduId))
  {
    Com_TxTOutInfoIdxOfTxPduInfoType idxTxTOutInfo = Com_GetTxTOutInfoIdxOfTxPduInfo(TxPduId);
# if (COM_NONEMODEOFTXTOUTINFO == STD_ON)
    if(!Com_IsNoneModeOfTxTOutInfo(idxTxTOutInfo))      /* COV_COM_TX_PROCESSING_NONE_MODE */
# endif
    {
      boolean hasCyclicOrDirectTxModePart = FALSE;

# if ((COM_PERIODICOFTXMODETRUE == STD_ON) || (COM_PERIODICOFTXMODEFALSE == STD_ON))
      hasCyclicOrDirectTxModePart |= Com_TxModeHdlr_IsPeriodicTxMode(TxPduId);
# endif
# if ((COM_DIRECTOFTXMODETRUE == STD_ON) || (COM_DIRECTOFTXMODEFALSE == STD_ON))
      hasCyclicOrDirectTxModePart |= Com_TxModeHdlr_IsDirectTxMode(TxPduId);
# endif

      /* #20 If the passed Tx ComIPdu is in a cyclic or in direct transmission mode, set the tx timeout counter to 0 */
      if(FALSE == hasCyclicOrDirectTxModePart)
      {
        Com_SetTxTOutCnt(idxTxTOutInfo, 0);     /* SBSW_COM_CSL02 */
      }
    }
  }
}
#endif

#if ((COM_TXTOUTINFOUSEDOFTXSIGINFO == STD_ON)||(COM_TXTOUTINFOUSEDOFTXSIGGRPINFO == STD_ON))
/**********************************************************************************************************************
  Com_TxDlMon_Event
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_Event(PduIdType TxPduId, Com_SizeOfTxTOutInfoType idxTxTOutInfo)
{
  boolean hasCyclicOrDirectTxModePart = FALSE;

# if ((COM_PERIODICOFTXMODETRUE == STD_ON) || (COM_PERIODICOFTXMODEFALSE == STD_ON))
  hasCyclicOrDirectTxModePart |= Com_TxModeHdlr_IsPeriodicTxMode(TxPduId);
# endif
# if ((COM_DIRECTOFTXMODETRUE == STD_ON) || (COM_DIRECTOFTXMODEFALSE == STD_ON))
  hasCyclicOrDirectTxModePart |= Com_TxModeHdlr_IsDirectTxMode(TxPduId);
# endif

  /* #10 If the passed Tx ComIPdu is in a cyclic or in direct transmission mode */
  if(TRUE == hasCyclicOrDirectTxModePart)
  {
    boolean resetCounter = (boolean) ((0 == Com_GetTxTOutCnt(idxTxTOutInfo)) ? TRUE : FALSE);
# if ((COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON))
    resetCounter |= (boolean) ((Com_TxModeHdlr_GetCurRepCnt(TxPduId) > 0) ? TRUE : FALSE);      /* COV_COM_TX_REP_CNT */
# endif

    /* #20 If the tx timeout counter is equal 0 or the current repetition count is greater 0, set the tx timeout counter to the configured tx timeout factor */
    if(TRUE == resetCounter)
    {
      Com_SetTxTOutCnt(idxTxTOutInfo, Com_GetFactorOfTxTOutInfo(idxTxTOutInfo));        /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
    }
  }
  /* #30 Otherwise set the tx timeout counter to 0 */
  else
  {
    Com_SetTxTOutCnt(idxTxTOutInfo, 0); /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
  }
}
#endif

#if (COM_CBKTXTOUTFUNCPTRINDUSEDOFTXTOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxDlMon_TxCallCbkTout
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxDlMon_TxCallCbkTout(Com_SizeOfTxTOutInfoType idxTxTOutInfo)
{
  /* #10 Call all related tx timeout notification functions */
  Com_CbkTxTOutFuncPtrIndEndIdxOfTxTOutInfoType idxIndTxTOutFuncPtr = Com_GetCbkTxTOutFuncPtrIndStartIdxOfTxTOutInfo(idxTxTOutInfo);
  for(; idxIndTxTOutFuncPtr < Com_GetCbkTxTOutFuncPtrIndEndIdxOfTxTOutInfo(idxTxTOutInfo); idxIndTxTOutFuncPtr++)
  {
    Com_GetCbkTxTOutFuncPtr(Com_GetCbkTxTOutFuncPtrInd(idxIndTxTOutFuncPtr)) ();        /* SBSW_COM_FCT_PTR_CALL_CSL03 */
  }
}
#endif

#if (COM_GWTIMEOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_GwTout_HandleCounter
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_GwTout_HandleCounter(void)
{
  Com_SizeOfGwTimeoutInfoType gwToutHndl;
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();
  /* #10 Iterate over all gateway timeout infos */
  for(gwToutHndl = 0; gwToutHndl < Com_GetSizeOfGwTimeoutInfo(); gwToutHndl++)
  {
    /* #20 If the tx pdu is active and the timeout is active, decrement the gateway timeout counter */
    if(Com_IsTxPduGrpActive((Com_GetTxPduInfoIdxOfGwTimeoutInfo(gwToutHndl))))
    {
      if(Com_GwTout_TimeoutIsActive(gwToutHndl))
      {
        Com_DecGwRoutingTimeoutCounter(gwToutHndl);     /* SBSW_COM_CSL02 */
        /* #30 If a gateway timeout occurred, stop the cyclic transmission */
        if(Com_GwTout_TimeoutHasOccurred(gwToutHndl))
        {
          Com_TxModeHdlr_StopCyclicTransmission(Com_GetTxPduInfoIdxOfGwTimeoutInfo(gwToutHndl));
        }
      }
    }
  }
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
}

/**********************************************************************************************************************
  Com_GwTout_InitCounter
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_GwTout_InitCounter(PduIdType ComPduId)
{
  /* #10 If the passed ComIPdu has a configured gateway timeout, initialize the timeout counter with 1 */
  if(Com_IsGwTimeoutInfoUsedOfTxPduInfo(ComPduId))      /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_SetGwRoutingTimeoutCounter(Com_GetGwTimeoutInfoIdxOfTxPduInfo(ComPduId), 1);    /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
  }
}
#endif

#if ((COM_INVVALUEUSEDOFTXSIGINFO == STD_ON) || (COM_CONSTVALUEARRAYBASEDINVVALUEUSEDOFTXSIGINFO == STD_ON))
/**********************************************************************************************************************
  Com_InvalidateSignal_SendSignal
 **********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 **********************************************************************************************************************/
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_InvalidateSignal_SendSignal(Com_SignalIdType idxTxSigInfo)       /* COV_COM_SIGNALINVALIDATION_ARRAYACCESS */
{
  uint8 retVal = COM_SERVICE_NOT_AVAILABLE;
  /* #10 Send signal with the invalid value, the invalid value is stored in an ApplType dependent buffer */
# if (COM_INVVALUEUSEDOFTXSIGINFO == STD_ON)
  if(Com_IsInvValueUsedOfTxSigInfo(idxTxSigInfo))       /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_InvValueIdxOfTxSigInfoType idxInvValue = Com_GetInvValueIdxOfTxSigInfo(idxTxSigInfo);
    switch (Com_GetApplTypeOfTxSigInfo(idxTxSigInfo))
    {
/* jet: GeneralSwitchCasePerApplType snippet */
#  if ((COM_CONSTVALUEUINT8 == STD_ON) && (COM_EXISTS_UINT8_APPLTYPEOFTXSIGINFO == STD_ON))
      case COM_UINT8_APPLTYPEOFTXSIGINFO:
      {
        retVal = Com_SendSignal_Processing(idxTxSigInfo, Com_GetAddrConstValueUInt8(idxInvValue), 0);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
        break;
      }
#  endif
#  if ((COM_CONSTVALUESINT8 == STD_ON) && (COM_EXISTS_SINT8_APPLTYPEOFTXSIGINFO == STD_ON))
      case COM_SINT8_APPLTYPEOFTXSIGINFO:
      {
        retVal = Com_SendSignal_Processing(idxTxSigInfo, Com_GetAddrConstValueSInt8(idxInvValue), 0);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
        break;
      }
#  endif
#  if ((COM_CONSTVALUEUINT16 == STD_ON) && (COM_EXISTS_UINT16_APPLTYPEOFTXSIGINFO == STD_ON))
      case COM_UINT16_APPLTYPEOFTXSIGINFO:
      {
        retVal = Com_SendSignal_Processing(idxTxSigInfo, Com_GetAddrConstValueUInt16(idxInvValue), 0);  /* SBSW_COM_FCTCALL_WITH_P2CONST */
        break;
      }
#  endif
#  if ((COM_CONSTVALUESINT16 == STD_ON) && (COM_EXISTS_SINT16_APPLTYPEOFTXSIGINFO == STD_ON))
      case COM_SINT16_APPLTYPEOFTXSIGINFO:
      {
        retVal = Com_SendSignal_Processing(idxTxSigInfo, Com_GetAddrConstValueSInt16(idxInvValue), 0);  /* SBSW_COM_FCTCALL_WITH_P2CONST */
        break;
      }
#  endif
#  if ((COM_CONSTVALUEUINT32 == STD_ON) && (COM_EXISTS_UINT32_APPLTYPEOFTXSIGINFO == STD_ON))
      case COM_UINT32_APPLTYPEOFTXSIGINFO:
      {
        retVal = Com_SendSignal_Processing(idxTxSigInfo, Com_GetAddrConstValueUInt32(idxInvValue), 0);  /* SBSW_COM_FCTCALL_WITH_P2CONST */
        break;
      }
#  endif
#  if ((COM_CONSTVALUESINT32 == STD_ON) && (COM_EXISTS_SINT32_APPLTYPEOFTXSIGINFO == STD_ON))
      case COM_SINT32_APPLTYPEOFTXSIGINFO:
      {
        retVal = Com_SendSignal_Processing(idxTxSigInfo, Com_GetAddrConstValueSInt32(idxInvValue), 0);  /* SBSW_COM_FCTCALL_WITH_P2CONST */
        break;
      }
#  endif
#  if ((COM_CONSTVALUEUINT64 == STD_ON) && (COM_EXISTS_UINT64_APPLTYPEOFTXSIGINFO == STD_ON))
      case COM_UINT64_APPLTYPEOFTXSIGINFO:
      {
        retVal = Com_SendSignal_Processing(idxTxSigInfo, Com_GetAddrConstValueUInt64(idxInvValue), 0);  /* SBSW_COM_FCTCALL_WITH_P2CONST */
        break;
      }
#  endif
#  if ((COM_CONSTVALUESINT64 == STD_ON) && (COM_EXISTS_SINT64_APPLTYPEOFTXSIGINFO == STD_ON))
      case COM_SINT64_APPLTYPEOFTXSIGINFO:
      {
        retVal = Com_SendSignal_Processing(idxTxSigInfo, Com_GetAddrConstValueSInt64(idxInvValue), 0);  /* SBSW_COM_FCTCALL_WITH_P2CONST */
        break;
      }
#  endif
      default: /* COV_COM_MISRA */
        break;
    }
  }
# endif

# if ((COM_CONSTVALUEARRAYBASEDINVVALUEUSEDOFTXSIGINFO == STD_ON) && (COM_EXISTS_UINT8_N_APPLTYPEOFTXSIGINFO == STD_ON))
  if(Com_IsConstValueArrayBasedInvValueUsedOfTxSigInfo(idxTxSigInfo))   /* COV_COM_SIGNALINVALIDATION_ARRAYACCESS_01 */
  {
    Com_ConstValueArrayBasedInvValueEndIdxOfTxSigInfoType idxInvValue = Com_GetConstValueArrayBasedInvValueStartIdxOfTxSigInfo(idxTxSigInfo);
    switch (Com_GetApplTypeOfTxSigInfo(idxTxSigInfo))
    {
      case COM_UINT8_N_APPLTYPEOFTXSIGINFO:    /* COV_COM_SIGNALINVALIDATION_ARRAYACCESS */
      {
        retVal = Com_SendSignal_Processing(idxTxSigInfo, Com_GetAddrConstValueArrayBased(idxInvValue), 0);      /* SBSW_COM_FCTCALL_WITH_P2CONST */
      }
        break;
      default: /* COV_COM_MISRA */
        break;
    }
  }
# endif

  return retVal;
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif

#if (COM_TXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxLLIf_InitTxIpdu
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxLLIf_InitTxIpdu(Com_TxPduInfoIterType ComPduId)
{
# if(COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON)     /* COV_COM_VAR_ELISA_STD_OFF_XF */
  /* #10 If I-Pdu is TP Pdu */
  if(Com_IsTxTpInfoUsedOfTxPduInfo(ComPduId))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    /* #20 Initialize TP variables of one ComIPdu */
    Com_TxTpInfoIdxOfTxPduInfoType txTpPduInfoIdx = Com_GetTxTpInfoIdxOfTxPduInfo(ComPduId);
    Com_SetTxTpConnectionState(txTpPduInfoIdx, COM_READY_TXTPCONNECTIONSTATE);  /* SBSW_COM_CSL02 */
    Com_SetTxTpWrittenBytesCounter(txTpPduInfoIdx, 0);  /* SBSW_COM_CSL02 */
#  if (COM_TXSIGINFODYNSIGUSEDOFTXTPINFO == STD_ON)
    /* #30 If ComIPdu contains a dynamic length signal */
    if(Com_IsTxSigInfoDynSigUsedOfTxTpInfo(txTpPduInfoIdx))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {

      /* #40 Initialize the ComIpdu length with the initial dynamic length */
      Com_SetTxSduLength(ComPduId, Com_GetStartByteInPduPositionOfTxSigInfo(Com_GetTxSigInfoDynSigIdxOfTxTpInfo(txTpPduInfoIdx)) + Com_GetDynamicInitialLengthOfTxTpInfo(txTpPduInfoIdx));      /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
      Com_SetTxTmpTpPduLength(txTpPduInfoIdx, Com_GetStartByteInPduPositionOfTxSigInfo(Com_GetTxSigInfoDynSigIdxOfTxTpInfo(txTpPduInfoIdx)) + Com_GetDynamicInitialLengthOfTxTpInfo(txTpPduInfoIdx));
      Com_SetTxDynSignalLength(txTpPduInfoIdx, Com_GetDynamicInitialLengthOfTxTpInfo(txTpPduInfoIdx));
    }
    /* #50 otherwise */
    else
#  endif
    {
      /* #60 Initialize the ComIpdu length with the initial fixed length */
#  if (COM_TXSIGINFODYNSIGUSEDOFTXTPINFO == STD_ON)
      Com_SetTxTmpTpPduLength(txTpPduInfoIdx, Com_GetBufferSizeOfTxTpInfo(txTpPduInfoIdx));
#  endif
      Com_SetTxSduLength(ComPduId, (Com_TxSduLengthType) Com_GetBufferSizeOfTxTpInfo(txTpPduInfoIdx));  /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
    }
  }
  /* #70 otherwise */
  else
# endif
  {
    /* #80 Initialize the ComIpdu length with the initial fixed length */
# if (COM_TXBUFFERUSEDOFTXPDUINFO == STD_ON)
    Com_SetTxSduLength(ComPduId, (Com_TxSduLengthType) Com_GetTxBufferLengthOfTxPduInfo(ComPduId));     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# else
    Com_SetTxSduLength(ComPduId, 0);    /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif
  }
}
#endif

#if ((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) && (COM_CANCELLATIONSUPPORTOFTXPDUINFO == STD_ON))         /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf */
/**********************************************************************************************************************
  Com_TxLLIf_CancelTransmit
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxLLIf_CancelTransmit(PduIdType ComTxPduId)
{
  /* #10 If cancellation support is confiured for the ComIPdu */
  if(Com_IsCancellationSupportOfTxPduInfo(ComTxPduId))
  {
    /* #20 Cancel the transmission by a call of PduR_ComCancelTransmit */
    (void) PduR_ComCancelTransmit(Com_GetExternalIdOfTxPduInfo(ComTxPduId));
  }
}
#endif

#if ((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) || (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON) || (COM_EXISTS_TRANSMIT_CLRUBOFTXPDUINFO == STD_ON) || (COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON))      /* COV_COM_VAR_ELISA_STD_OFF_TF_xf_tf_tf_tf */
/**********************************************************************************************************************
Com_TxLLIf_SetTxAttributes
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *

**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxLLIf_SetTxAttributes(PduIdType ComTxPduId, Std_ReturnType status)
{
  /* #10 If the value of status is positive */
  if(status == E_OK)
  {
# if (COM_EXISTS_TRANSMIT_CLRUBOFTXPDUINFO == STD_ON)
    /* #20 If the Update Bit clear context is TRANSMIT, clear the Update Bits */
    if(COM_TRANSMIT_CLRUBOFTXPDUINFO == Com_GetClrUbOfTxPduInfo(ComTxPduId))
    {
      Com_TxBuffer_ClearUpdateBits(ComTxPduId);
    }
# endif
# if (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON)
#  if (COM_DIRECTTRIGGER == STD_ON)
    if(Com_IsDirectTrigger(ComTxPduId)) /* COV_COM_DIRECTTRIGGER */
#  endif
    {
      /* #30 Reload the Minimum Delay timer */
      Com_SetDelayTimeCnt(ComTxPduId, Com_GetMinimumDelayOfTxModeInfo(ComTxPduId));     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
    }
# endif
  }
# if ((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) || (COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON))     /* COV_COM_VAR_ELISA_STD_OFF_TF_xf_tf */
  /* #40 Otherwise */
  else
  {
#  if (COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON)   /* COV_COM_VAR_ELISA_STD_OFF_XF */
    /* #50 If the ComIPdu is a TP PDU, set the state to READY */
    if(Com_IsTxTpInfoUsedOfTxPduInfo(ComTxPduId))       /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      Com_SetTxTpConnectionState(Com_GetTxTpInfoIdxOfTxPduInfo(ComTxPduId), COM_READY_TXTPCONNECTIONSTATE);     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
    }
#  endif
#  if (COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON) /* COV_COM_VAR_FEAT_SUBSET_TX */
    /* #60 Clear the WaintingForConfirmation flag */
    Com_SetWaitingForConfirmation(ComTxPduId, FALSE);   /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
#  endif
  }
# endif
}
#endif

#if (COM_TXPDUCALLOUTFUNCPTRUSEDOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
Com_TxLLIf_GetTxPduCalloutFuncPtr
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *

**********************************************************************************************************************/
/* PRQA  S 3673 1 */ /* MD_Com_3673_AsrProto */
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_TxLLIf_GetTxPduCalloutFuncPtr(PduIdType ComTxPduId, P2VAR(PduInfoType, AUTOMATIC, AUTOMATIC) PduInfo)
{
  boolean CalloutResult = TRUE;
  /* #10 If the ComIPdu has a configured callout */
  if(Com_IsTxPduCalloutFuncPtrUsedOfTxPduInfo(ComTxPduId))      /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    /* #20 Call the callout with the PduInfo (if ASR 4.1.x callouts are enabled) or with the SduDataPtr */
    Com_TxPduCalloutFuncPtrIdxOfTxPduInfoType idx = Com_GetTxPduCalloutFuncPtrIdxOfTxPduInfo(ComTxPduId);
# if (COM_IPDUCALLOUT_USEPDUINFOPTR == STD_ON)
    CalloutResult = Com_GetTxPduCalloutFuncPtr(idx) (ComTxPduId, PduInfo);      /* SBSW_COM_FCT_PTR_CALL_CSL03 */
# else
    CalloutResult = Com_GetTxPduCalloutFuncPtr(idx) (ComTxPduId, (P2VAR(uint8, AUTOMATIC, AUTOMATIC)) PduInfo->SduDataPtr);     /* SBSW_COM_FCT_PTR_CALL_CSL03 */
# endif
  }
  return CalloutResult;
}
#endif

#if (COM_TRIGGER_TRANSMIT_API == STD_ON)
/**********************************************************************************************************************
  Com_TriggerTransmit_Process
**********************************************************************************************************************/
/*! Internal comment removed.
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
**********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, COM_CODE) Com_TriggerTransmit_Process(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) PduInfoPtr)
{
  uint8 retVal = E_NOT_OK;
  PduInfoType PduInfo;
# if (COM_TXPDUINFO == STD_ON)  /* COV_COM_VAR_DEPENDENT_SWITCH */
  /* #05 If the PDU length fits into the passed buffer */
  if(PduInfoPtr->SduLength >= Com_GetTxSduLength(TxPduId))
  {
    PduInfo.SduDataPtr = NULL_PTR;
    /* #10 If the ComIPdu is not a Zero Byte PDU, set the SduDataPtr to PDU buffer address otherwise set the SduDataPtr to NULL_PTR */
    if(Com_IsTxBufferUsedOfTxPduInfo(TxPduId))  /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      PduInfo.SduDataPtr = Com_GetAddrTxBuffer(Com_GetTxBufferStartIdxOfTxPduInfo(TxPduId));
    }

    /* #20 Set the SduLength to the current TxSduLength */
    PduInfo.SduLength = (PduLengthType) Com_GetTxSduLength(TxPduId);

    SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();

    /* \trace CREQ-103166 */
#  if  (COM_TXPDUTTCALLOUTFUNCPTRUSEDOFTXPDUINFO == STD_ON)
    /* #30 If a IPdu trigger transmit callout is configured */
    if(Com_IsTxPduTTCalloutFuncPtrUsedOfTxPduInfo(TxPduId))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      /* #40 Call the trigger transmit callout with the PduInfo (if ASR 4.1.x callouts are enabled) or with the SduDataPtr */
      Com_TxPduTTCalloutFuncPtrIdxOfTxPduInfoType idx = Com_GetTxPduTTCalloutFuncPtrIdxOfTxPduInfo(TxPduId);
#   if (COM_IPDUCALLOUT_USEPDUINFOPTR == STD_ON)
      (void) Com_GetTxPduTTCalloutFuncPtr(idx) (TxPduId, (P2VAR(PduInfoType, AUTOMATIC, AUTOMATIC)) & PduInfo); /* SBSW_COM_FCT_PTR_CALL_CSL03 */
#   else
      (void) Com_GetTxPduTTCalloutFuncPtr(idx) (TxPduId, (P2VAR(uint8, AUTOMATIC, AUTOMATIC)) PduInfo.SduDataPtr);      /* SBSW_COM_FCT_PTR_CALL_CSL03 */
#   endif
    }
#  endif

    /* #50 Copy the PDU buffer data to the provided pointer */
    VStdLib_MemCpy_s(PduInfoPtr->SduDataPtr, Com_GetTxBufferLengthOfTxPduInfo(TxPduId), PduInfo.SduDataPtr, PduInfo.SduLength); /* SBSW_COM_VSTDLIB_SAFE */

#  if (COM_EXISTS_TRIGGER_TRANSMIT_CLRUBOFTXPDUINFO == STD_ON)
    /* #60 If the Update Bit clear context is TRIGGER_TRANSMIT, clear the Update Bits */
    if(COM_TRIGGER_TRANSMIT_CLRUBOFTXPDUINFO == Com_GetClrUbOfTxPduInfo(TxPduId))
    {
      Com_TxBuffer_ClearUpdateBits(TxPduId);
    }
#  endif
    SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
    /* #70 Set the provided SduLength pointer to the value of the current SduLength */
    PduInfoPtr->SduLength = PduInfo.SduLength;  /* SBSW_COM_PTR_API */
    /* #80 Return E_OK If the ComIPduGroup is active */
    if(Com_IsTxPduGrpActive(TxPduId))
    {
      retVal = E_OK;
    }
  }
# endif

  COM_DUMMY_STATEMENT(TxPduId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(PduInfoPtr);      /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return retVal;
}
#endif

#if((COM_TRANSPORT_PROTOCOL == STD_ON) || (COM_TX_CONFIRMATION_API == STD_ON))  /* COV_COM_VAR_ELISA_STD_OFF_TF_xf_tf */
/**********************************************************************************************************************
  Com_TxConfirmation_Process
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxConfirmation_Process(PduIdType TxPduId)
{
  boolean doNotificationProcessing = FALSE;

  SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();

# if ((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) && (COM_EXISTS_CONFIRMATION_CLRUBOFTXPDUINFO == STD_ON))  /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
  if(COM_CONFIRMATION_CLRUBOFTXPDUINFO == Com_GetClrUbOfTxPduInfo(TxPduId))
  {
    Com_TxBuffer_ClearUpdateBits(TxPduId);
  }
# endif

  if(Com_IsTxPduGrpActive(TxPduId))
  {
# if ((COM_MINIMUMDELAYOFTXMODEINFO == STD_ON) || (COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON))
    if(Com_TxModeHdlr_Confirmation(TxPduId) == TRUE)    /* COV_COM_REPETITIVE_TRANSMISSION */
# endif
    {
      doNotificationProcessing = TRUE;
# if (COM_TXTOUTINFOUSEDOFTXPDUINFO == STD_ON)

      Com_TxDlMon_TxConfirmation(TxPduId);
# endif
    }
  }

  SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();

# if ((COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)||(COM_CBKTXACKIMFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)||(COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO == STD_ON))
  if(doNotificationProcessing == TRUE)  /* COV_COM_TXCONFIRMATION_TX */
  {
    Com_TxNHdlr_Confirmation(TxPduId);
  }
# else
  COM_DUMMY_STATEMENT(doNotificationProcessing);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif

  COM_DUMMY_STATEMENT(TxPduId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if ((COM_TXBUFFERMETADATAUSEDOFTXPDUINFO == STD_ON) && (COM_TXPDUINITVALUEMETADATAUSEDOFTXPDUINFO == STD_ON) && (COM_TXPDUINFO == STD_ON))     /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf_tf */
/**********************************************************************************************************************
Com_TxLLIf_CpyInitMetaDataToBffr
**********************************************************************************************************************/
/*! Internal comment removed.
 *

**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxLLIf_CpyInitMetaDataToBffr(PduIdType ComTxPduId)
{
  /* #10 Copy the meta data initial value to the Tx PDU buffer */
  P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) pTxPduBuffer = Com_GetAddrTxBuffer(Com_GetTxBufferMetaDataStartIdxOfTxPduInfo(ComTxPduId));
  P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) pInitValues = Com_GetAddrTxPduInitValue(Com_GetTxPduInitValueMetaDataStartIdxOfTxPduInfo(ComTxPduId));
  uint8_least metaDataLength = Com_GetMetaDataLengthOfTxPduInfo(ComTxPduId);
  uint8_least idxMetaData;
  for(idxMetaData = 0; idxMetaData < metaDataLength; idxMetaData++)
  {
    pTxPduBuffer[idxMetaData] = pInitValues[idxMetaData];
  }
}
#endif

#if (COM_TXMODEINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxModeHdlr_InitTxIpdu
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_InitTxIpdu(PduIdType ComPduId)
{
# if (COM_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO == STD_ON)
  {
    /* #10 Iterate overall related tx filter infos and set the old filter value to the initial value, the buffer is ApplType specific */
    Com_TxSigInfoFilterInitValueIndEndIdxOfTxModeInfoType idxTxSigInfoFilterInitValueInd = Com_GetTxSigInfoFilterInitValueIndStartIdxOfTxModeInfo(ComPduId);
    for(; idxTxSigInfoFilterInitValueInd < Com_GetTxSigInfoFilterInitValueIndEndIdxOfTxModeInfo(ComPduId); idxTxSigInfoFilterInitValueInd++)
    {
      Com_SignalIdType idxTxSigInfo = (Com_SignalIdType) Com_GetTxSigInfoFilterInitValueInd(idxTxSigInfoFilterInitValueInd);
#  if(COM_FILTERINITVALUEUSEDOFTXSIGINFO == STD_ON)
      if(Com_IsFilterInitValueUsedOfTxSigInfo(idxTxSigInfo))    /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        Com_FilterInitValueIdxOfTxSigInfoType idxTxFilterOldValue = Com_GetFilterInitValueIdxOfTxSigInfo(idxTxSigInfo);
        switch (Com_GetApplTypeOfTxSigInfo(idxTxSigInfo))
        {
/* jet: GeneralSwitchCasePerApplType snippet */
#   if (COM_TXFILTERINITVALUEUINT8 == STD_ON)
          case COM_UINT8_APPLTYPEOFTXSIGINFO:
          {
            Com_SetTxFilterOldValueUInt8(idxTxFilterOldValue, Com_GetTxFilterInitValueUInt8(idxTxFilterOldValue));      /* SBSW_COM_CSL02 */
            break;
          }
#   endif
#   if (COM_TXFILTERINITVALUESINT8 == STD_ON)
          case COM_SINT8_APPLTYPEOFTXSIGINFO:
          {
            Com_SetTxFilterOldValueSInt8(idxTxFilterOldValue, Com_GetTxFilterInitValueSInt8(idxTxFilterOldValue));      /* SBSW_COM_CSL02 */
            break;
          }
#   endif
#   if (COM_TXFILTERINITVALUEUINT16 == STD_ON)
          case COM_UINT16_APPLTYPEOFTXSIGINFO:
          {
            Com_SetTxFilterOldValueUInt16(idxTxFilterOldValue, Com_GetTxFilterInitValueUInt16(idxTxFilterOldValue));    /* SBSW_COM_CSL02 */
            break;
          }
#   endif
#   if (COM_TXFILTERINITVALUESINT16 == STD_ON)
          case COM_SINT16_APPLTYPEOFTXSIGINFO:
          {
            Com_SetTxFilterOldValueSInt16(idxTxFilterOldValue, Com_GetTxFilterInitValueSInt16(idxTxFilterOldValue));    /* SBSW_COM_CSL02 */
            break;
          }
#   endif
#   if (COM_TXFILTERINITVALUEUINT32 == STD_ON)
          case COM_UINT32_APPLTYPEOFTXSIGINFO:
          {
            Com_SetTxFilterOldValueUInt32(idxTxFilterOldValue, Com_GetTxFilterInitValueUInt32(idxTxFilterOldValue));    /* SBSW_COM_CSL02 */
            break;
          }
#   endif
#   if (COM_TXFILTERINITVALUESINT32 == STD_ON)
          case COM_SINT32_APPLTYPEOFTXSIGINFO:
          {
            Com_SetTxFilterOldValueSInt32(idxTxFilterOldValue, Com_GetTxFilterInitValueSInt32(idxTxFilterOldValue));    /* SBSW_COM_CSL02 */
            break;
          }
#   endif
#   if (COM_TXFILTERINITVALUEUINT64 == STD_ON)
          case COM_UINT64_APPLTYPEOFTXSIGINFO:
          {
            Com_SetTxFilterOldValueUInt64(idxTxFilterOldValue, Com_GetTxFilterInitValueUInt64(idxTxFilterOldValue));    /* SBSW_COM_CSL02 */
            break;
          }
#   endif
#   if (COM_TXFILTERINITVALUESINT64 == STD_ON)
          case COM_SINT64_APPLTYPEOFTXSIGINFO:
          {
            Com_SetTxFilterOldValueSInt64(idxTxFilterOldValue, Com_GetTxFilterInitValueSInt64(idxTxFilterOldValue));    /* SBSW_COM_CSL02 */
            break;
          }
#   endif
          default:     /* COV_COM_MISRA */
            break;
        }
      }
#  endif
#  if ((COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUEUSEDOFTXSIGINFO == STD_ON) && (COM_EXISTS_UINT8_N_APPLTYPEOFTXSIGINFO == STD_ON))
      if(Com_IsTxFilterInitValueArrayBasedFilterInitValueUsedOfTxSigInfo(idxTxSigInfo)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        switch (Com_GetApplTypeOfTxSigInfo(idxTxSigInfo))
        {
          case COM_UINT8_N_APPLTYPEOFTXSIGINFO:
          {
            Com_TxFilterInitValueArrayBasedIterType bufferIdx = Com_GetTxFilterInitValueArrayBasedFilterInitValueStartIdxOfTxSigInfo(idxTxSigInfo);
            VStdMemCpyRamToRam(Com_GetAddrTxFilterOldValueArrayBased(bufferIdx), Com_GetAddrTxFilterInitValueArrayBased(bufferIdx), Com_GetTxFilterInitValueArrayBasedFilterInitValueLengthOfTxSigInfo(idxTxSigInfo));  /* SBSW_COM_CSL03 */
            break;
          }
          default:     /* COV_COM_MISRA */
            break;
        }
      }
#  endif
    }
  }
# endif
# if (COM_FILTERINFOIDXOFTXSIGINFO == STD_ON)
  {
    /* #20 Iterate overall related tx filter states and set them to their initial state */
    Com_TxFilterInitStateEndIdxOfTxModeInfoType idxTxFilterInitState = Com_GetTxFilterInitStateStartIdxOfTxModeInfo(ComPduId);
    for(; idxTxFilterInitState < Com_GetTxFilterInitStateEndIdxOfTxModeInfo(ComPduId); idxTxFilterInitState++)
    {
      Com_SetTxFilterState(idxTxFilterInitState, Com_IsTxFilterInitState(idxTxFilterInitState));        /* SBSW_COM_CSL02 */
    }
  }
# endif
  /* #30 Set the initial Tx Mode of the passed Tx ComIPdu, initialize that mode and Remove the transmit request */
  Com_SetCurrentTxMode(ComPduId, Com_IsInitModeOfTxModeInfo(ComPduId)); /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
  Com_TxModeHdlr_InitTxMode(ComPduId);
  Com_SetTransmitRequest(ComPduId, FALSE);      /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */

# if ((COM_PERIODICOFTXMODETRUE == STD_ON) || (COM_PERIODICOFTXMODEFALSE == STD_ON))
  /* #40 If the current tx mode is a cyclic tx mode, set the cycle counter to the start delay time */
  if(Com_IsCyclicSendRequest(ComPduId)) /* COV_COM_CYCLIC_SEND_REQUEST */
  {
    Com_SetCycleTimeCnt(ComPduId, (Com_CycleTimeCntType) Com_TxModeHdlr_GetCurrentTimeOffset(ComPduId));        /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */ /* COV_COM_SETCYCLETIMECOUNT */
  }
# endif
# if (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON)
  /* #50 Set the minimum delay counter to 0 */
  Com_SetDelayTimeCnt(ComPduId, 0U);    /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif
  /* #60 Clear eventbased trigger Flag if configured */
# if (COM_DIRECTTRIGGER == STD_ON)
  Com_SetDirectTrigger(ComPduId, FALSE);        /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif
}       /* PRQA S 6010, 6030 */ /* MD_MSR_STPTH, MD_MSR_STCYC */
#endif

#if ((COM_PERIODICOFTXMODETRUE == STD_ON) || (COM_PERIODICOFTXMODEFALSE == STD_ON) || (COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON) || (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON))
/**********************************************************************************************************************
  Com_TxModeHdlr_MainFunctionTx_CycleCounter
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_MainFunctionTx_CycleCounter(void)
{
  PduIdType ComTxPduId;

  Com_TxModeHdlr_EnterExclusiveArea_CycleCounter();
  /* #10 Iterate over all Tx Pdu Infos */
  for(ComTxPduId = 0; ComTxPduId < Com_GetSizeOfTxPduInfo(); ComTxPduId++)
  {
# if (COM_INVALIDHNDOFTXPDUINFO == STD_ON)
    if(!Com_IsInvalidHndOfTxPduInfo(ComTxPduId))
# endif
    {
      /* #20 If the Tx ComIPdu is active, process the cyclic transmission mode, the repetition counter and the MDT counter */
      if(Com_IsTxPduGrpActive(ComTxPduId))
      {
        Com_TxModeHdlr_SetTransmitRequestAndCycleCnt(ComTxPduId);
      }
    }
    Com_TxModeHdlr_ThresholdCheck_CycleCounter();
  }
  Com_TxModeHdlr_ExitExclusiveArea_CycleCounter();
}

/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_TxModeHdlr_EnterExclusiveArea_CycleCounter
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_EnterExclusiveArea_CycleCounter(void)
{
  /* #10 Enter the tx cyclic processing exclusive area */
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();
}

/**********************************************************************************************************************
  Com_TxModeHdlr_ExitExclusiveArea_CycleCounter
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_ExitExclusiveArea_CycleCounter(void)
{
  /* #05 Reload the counter with the threshold value */
  Com_SetTxCyclicProcessingISRLockCounter(Com_GetTxCyclicProcessingISRLockThreshold());
  /* #10 Exit the tx cyclic processing exclusive area */
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
}

/**********************************************************************************************************************
  Com_TxModeHdlr_ThresholdCheck_CycleCounter
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_ThresholdCheck_CycleCounter(void)
{
  if(Com_GetTxCyclicProcessingISRLockCounter() > 0)
  {
    Com_DecTxCyclicProcessingISRLockCounter();
  }
  else
  {
    Com_TxModeHdlr_ExitExclusiveArea_CycleCounter();
    Com_TxModeHdlr_EnterExclusiveArea_CycleCounter();
  }
}

#endif

#if (COM_TXMODEINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxModeHdlr_MainFunctionTx_Transmit
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_MainFunctionTx_Transmit(void)
{
  PduIdType ComTxPduId;
  Com_TxModeHdlr_EnterExclusiveArea();
  /* #10 Iterate over all Tx ComIPdus and process the related transmit requests */
  for(ComTxPduId = 0; ComTxPduId < Com_GetSizeOfTxPduInfo(); ComTxPduId++)
  {
# if (COM_INVALIDHNDOFTXPDUINFO == STD_ON)
    if(!Com_IsInvalidHndOfTxPduInfo(ComTxPduId))
# endif
    {
      Com_TxModeHdlr_MainFunctionTx_ProcessTransmit(ComTxPduId);
    }
    Com_TxModeHdlr_ThresholdCheck();
  }
  Com_TxModeHdlr_ExitExclusiveArea();
}

/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_TxModeHdlr_EnterExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_EnterExclusiveArea(void)
{
  /* #10 Enter the tx processing exclusive area */
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();
}

/**********************************************************************************************************************
  Com_TxModeHdlr_ExitExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_ExitExclusiveArea(void)
{
  /* #05 Reload the counter with the threshold value */
  Com_SetTxProcessingISRLockCounter(Com_GetTxProcessingISRLockThreshold());
  /* #10 Exit the tx processing exclusive area */
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
}

/**********************************************************************************************************************
  Com_TxModeHdlr_ThresholdCheck
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_ThresholdCheck(void)
{
  if(Com_GetTxProcessingISRLockCounter() > 0)   /* COV_COM_THRESHOLD_TX */
  {
    Com_DecTxProcessingISRLockCounter();
  }
  else
  {
    Com_TxModeHdlr_ExitExclusiveArea();
    Com_TxModeHdlr_EnterExclusiveArea();
  }
}

#endif

#if (COM_TXMODEINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxModeHdlr_MainFunctionTx_ProcessTransmit
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_MainFunctionTx_ProcessTransmit(PduIdType ComTxPduId)
{
  /* #10 If the passed Tx ComIPdu is active, the MDT has expired and a transmit request is set */
  if(Com_IsTxPduGrpActive(ComTxPduId))
  {

# if (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON)
    /* Delay Time and Transmission Handling */
    if(Com_GetDelayTimeCnt(ComTxPduId) == 0U)
# endif
    {
      if(Com_IsTransmitRequest(ComTxPduId))
      {
        /* #20 Trigger the transmission by a call of Com_TxLLIf_Transmit check if the return of Com_TxLLIf_Transmit is positive, if ComRetryFailedTransmitRequest is enabled */
# if (COM_RETRY_FAILED_TRANSMIT_REQUESTS == STD_ON)
        if(Com_TxLLIf_Transmit(ComTxPduId) == E_OK)
# else
        (void) Com_TxLLIf_Transmit(ComTxPduId);
# endif
        {
          /* #30 Reset the transmit request */
          Com_SetTransmitRequest(ComTxPduId, FALSE);    /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
        }
      }
    }
  }
}
#endif

#if (COM_TXMODEINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxModeHdlr_InitTxMode
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_InitTxMode(CONST(PduIdType, AUTOMATIC) ComTxPduId)
{
# if ((COM_PERIODICOFTXMODETRUE == STD_ON) || (COM_PERIODICOFTXMODEFALSE == STD_ON))
  /* #10 If the current tx mode of the passed Tx ComIPdu is periodic */
  if(Com_TxModeHdlr_IsPeriodicTxMode(ComTxPduId) == TRUE)
  {
    /* #20 Enable the cyclic send request and trigger the first transmission within the next Com_MainfunctionTx call */
#  if (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON)
    Com_SetCyclicSendRequest(ComTxPduId, TRUE); /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
    Com_SetTransmitRequest(ComTxPduId, TRUE);   /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
    Com_SetCycleTimeCnt(ComTxPduId, (Com_CycleTimeCntType) (Com_TxModeHdlr_GetCurrentTimePeriod(ComTxPduId) + Com_GetDelayTimeCnt(ComTxPduId) + 1));    /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */ /* COV_COM_SETCYCLETIMECOUNT */
#  else
    Com_SetCyclicSendRequest(ComTxPduId, TRUE); /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
    Com_SetCycleTimeCnt(ComTxPduId, (Com_CycleTimeCntType) 1U); /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
#  endif
  }
  /* #30 Otherwise disable the cyclic send request and remove the transmit request flag */
  else
  {
    Com_SetCyclicSendRequest(ComTxPduId, FALSE);        /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
    Com_SetTransmitRequest(ComTxPduId, FALSE);  /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
  }
# else
  Com_SetTransmitRequest(ComTxPduId, FALSE);    /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif

# if ((COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON))
  /* #40 Set the repetition counter to 0 */
  Com_SetRepCnt(ComTxPduId, 0U);        /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif
}

# if (COM_FILTERINFOUSEDOFTXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxModeHdlr_UpdateTMS
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_UpdateTMS(CONST(PduIdType, AUTOMATIC) idxTxModeInfo)
{
  boolean newTxMode = FALSE;
  Com_TxFilterInitStateEndIdxOfTxModeInfoType filterIndex = Com_GetTxFilterInitStateStartIdxOfTxModeInfo(idxTxModeInfo);

  /* #10 Iterate over all related filter states, if at least one filter state is true, the Tx Mode true is active. Otherwise the Tx Mode false is active */
  for(; filterIndex < Com_GetTxFilterInitStateEndIdxOfTxModeInfo(idxTxModeInfo); filterIndex++)
  {
    if(Com_IsTxFilterState(filterIndex))
    {
      newTxMode = TRUE;
      break;
    }
  }

  /* #20 If the Tx Mode has changed */
  if(Com_IsCurrentTxMode(idxTxModeInfo) != newTxMode)   /* COV_COM_TX_FILTER */
  {
    /* #30 Update the current Tx Mode with the new Tx Mode, initialize the new Tx Mode and trigger a deferred transmission without repetitions */
    Com_SetCurrentTxMode(idxTxModeInfo, newTxMode);     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
    Com_TxModeHdlr_InitTxMode(idxTxModeInfo);
#  if ((COM_DIRECTOFTXMODETRUE == STD_ON) || (COM_DIRECTOFTXMODEFALSE == STD_ON))
    /* COM582: If a change of the TMS causes a change of the transmission mode to the transmission mode DIRECT an immediate, respecting the MDT, direct/ n-times transmission to the underlying layer shall be initiated. */
    Com_TxModeHdlr_TriggerDeferredIpduSend(idxTxModeInfo, FALSE);
#  endif
  }
}
# endif

# if ((COM_MINIMUMDELAYOFTXMODEINFO == STD_ON) || (COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON))
/**********************************************************************************************************************
  Com_TxModeHdlr_Confirmation
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, COM_CODE) Com_TxModeHdlr_Confirmation(CONST(PduIdType, AUTOMATIC) ComTxPduId)
{
  boolean retVal = TRUE;

#  if (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON)
  /* #10 Reload the minimum delay time counter of the passed Tx ComIPdu */

#   if (COM_DIRECTTRIGGER == STD_ON)
  if(Com_IsDirectTrigger(ComTxPduId))
#   endif
  {
    Com_SetDelayTimeCnt(ComTxPduId, Com_GetMinimumDelayOfTxModeInfo(ComTxPduId));       /* SBSW_COM_IDXPARAM_INTERNALFCT_DET_CSL02 */
#   if (COM_DIRECTTRIGGER == STD_ON)
    Com_SetDirectTrigger(ComTxPduId, FALSE);    /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
#   endif
  }
#  endif
#  if ((COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON))

  /* #20 Check if the all requested transmits have been performed and this is the final Tx Confirmation */
  if(0U < Com_GetRepCnt(ComTxPduId))    /* COV_COM_REPETITIONS */
  {
    Com_DecRepCnt(ComTxPduId);  /* SBSW_COM_IDXPARAM_INTERNALFCT_DET_CSL02 */
    if(0U < Com_GetRepCnt(ComTxPduId))  /* COV_COM_REPETITIONS_1 */
    {
      /* this is the first or an intermediate confirmation for an N-Times transmission return false to avoid notification of the upper layer */
      retVal = FALSE;
    }
  }
#  endif
  return retVal;
}
# endif

/**********************************************************************************************************************
  Com_TxModeHdlr_StopTxIpdus
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_StopTxIpdus(CONST(PduIdType, AUTOMATIC) ComTxPduId)
{
  /* #10 Reset transmit request, set repetition counter and repetition cycle counter to 0 */
  Com_SetTransmitRequest(ComTxPduId, FALSE);    /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# if ((COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON))
  Com_SetRepCnt(ComTxPduId, 0U);        /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
  Com_SetRepCycleCnt(ComTxPduId, 0U);   /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif
# if ((COM_PERIODICOFTXMODETRUE == STD_ON) || (COM_PERIODICOFTXMODEFALSE == STD_ON))
  /* #20 reload the time offset counter and set minimum delay time to 0. If the I-PDU is started again, the time offset is already set */
  Com_SetCycleTimeCnt(ComTxPduId, (Com_CycleTimeCntType) Com_TxModeHdlr_GetCurrentTimeOffset(ComTxPduId));      /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */ /* COV_COM_TIMEOFFSET */
# endif

# if (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON)
  Com_SetDelayTimeCnt(ComTxPduId, 0U);  /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif
}
#endif

#if (COM_TXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxModeHdlr_TriggerIpduSendOnceDeferred
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_TriggerIpduSendOnceDeferred(CONST(PduIdType, AUTOMATIC) ComTxPduId)
{
  /* #10 If the passed Tx ComIPdu is active */
  if(Com_IsTxPduGrpActive(ComTxPduId))
  {
    /* #20 Set eventbased trigger Flag if configured */
# if (COM_DIRECTTRIGGER == STD_ON)
    Com_SetDirectTrigger(ComTxPduId, TRUE);     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif

    /* #30 Set the related transmit request */
    Com_SetTransmitRequest(ComTxPduId, TRUE);   /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
  }
}
#endif

#if ((COM_TXMODEINFO == STD_ON) && ((COM_PERIODICOFTXMODETRUE == STD_ON) || (COM_PERIODICOFTXMODEFALSE == STD_ON) || (COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON) || (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON)))
/**********************************************************************************************************************
  Com_TxModeHdlr_SetTransmitRequestAndCycleCnt
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxModeHdlr_SetTransmitRequestAndCycleCnt(PduIdType ComTxPduId)
{
# if ((COM_PERIODICOFTXMODETRUE == STD_ON) || (COM_PERIODICOFTXMODEFALSE == STD_ON))
  /* #10 If the passed Tx ComIPdu is in a cyclic Pdu, decrement the cycle counter */
  if(Com_IsCyclicSendRequest(ComTxPduId))
  {
    Com_DecCycleTimeCnt(ComTxPduId);    /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
    /* #20 If the cycle counter is 0, set the transmit flag and reload the cycle counter */
    if(0U == Com_GetCycleTimeCnt(ComTxPduId))
    {
      Com_SetTransmitRequest(ComTxPduId, TRUE); /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
      Com_SetCycleTimeCnt(ComTxPduId, (Com_CycleTimeCntType) Com_TxModeHdlr_GetCurrentTimePeriod(ComTxPduId));  /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */ /* COV_COM_SETCYCLETIMECOUNT */
    }
  }
# endif
# if ((COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON))
  /* #30 If the repetition count is greater 0, decrement the repetition cycle counter */
  if(0U < Com_GetRepCnt(ComTxPduId))    /* COV_COM_NONTRIGGERED_REPETITION */
  {
    Com_DecRepCycleCnt(ComTxPduId);     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
    /* #40 If the repetition cycle counter is equal 0, set a transmit request and reload the repetition cycle counter */
    if(0U == Com_GetRepCycleCnt(ComTxPduId))
    {
      Com_SetTransmitRequest(ComTxPduId, TRUE); /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
      /* reload the repetition cycle time counter */
      Com_SetRepCycleCnt(ComTxPduId, Com_TxModeHdlr_GetCurrentRepetitionPeriod(ComTxPduId));    /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
    }
  }
# endif
# if (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON)

  /* #50 If the minimum delay time counter is greater 0, decrement the minimum delay time counter */
  if(Com_GetDelayTimeCnt(ComTxPduId) != 0U)
  {
    Com_DecDelayTimeCnt(ComTxPduId);    /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
  }
# endif
}
#endif

#if (COM_GWTIMEOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxModeHdlr_StopCyclicTransmission
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TxModeHdlr_StopCyclicTransmission(CONST(PduIdType, AUTOMATIC) ComTxPduId)
{
  /* #10 Stop the cyclic transmission */
  Com_TxModeHdlr_StopTxIpdus(ComTxPduId);
  Com_SetCyclicSendRequest(ComTxPduId, FALSE);  /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
}

/**********************************************************************************************************************
  Com_TxModeHdlr_StartCyclicTransmission
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TxModeHdlr_StartCyclicTransmission(CONST(PduIdType, AUTOMATIC) ComTxPduId)
{
  /* #10 Enable the cyclic send transmission */
  Com_SetCyclicSendRequest(ComTxPduId, TRUE);   /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
  Com_SetCycleTimeCnt(ComTxPduId, 1u);  /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
}
#endif

#if ((((COM_DIRECTOFTXMODETRUE == STD_ON) || (COM_DIRECTOFTXMODEFALSE == STD_ON)) && ((COM_FILTERINFOUSEDOFTXSIGINFO == STD_ON) || (COM_GWTXPDUDESCRIPTIONINFOUSEDOFRXPDUINFO == STD_ON) || (COM_GENERATED_DESCRIPTION_ROUTING == STD_ON)))|| (COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON)||(COM_TRIGGEREDOFTXSIGINFO == STD_ON))    /* COV_COM_VAR_ELISA_STD_OFF_TF_tf_tf_tf_tf_xf_tf_tf */
/**********************************************************************************************************************
  Com_TxModeHdlr_TriggerDeferredIpduSend
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TxModeHdlr_TriggerDeferredIpduSend(CONST(PduIdType, AUTOMATIC) ComTxPduId, boolean TriggerWithoutRepetition)
{
  /* #10 If the passed Tx ComIPdu is active and the current tx mode is direct */
  if(Com_IsTxPduGrpActive(ComTxPduId))  /* COV_COM_TXIPDUGROUP_ACTIVE */
  {
    if(Com_TxModeHdlr_IsDirectTxMode(ComTxPduId) == TRUE)       /* COV_COM_ISDIRECT_TXMODE */
    {
      /* #20 Set eventbased trigger Flag if configured */
# if (COM_DIRECTTRIGGER == STD_ON)
      Com_SetDirectTrigger(ComTxPduId, TRUE);   /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif
# if ((COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON))
      /* #30 If the passed Tx ComIPdu is triggered without repetitions, set the transmit request */
      if(TriggerWithoutRepetition == TRUE)      /* COV_COM_DEFERREDIPDUSEND */
      {
        Com_SetTransmitRequest(ComTxPduId, TRUE);       /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
      }
      /* #40 Otherwise, set the repetition count to the tx mode dependent repetition count value */
      else
      {
        Com_SetRepCnt(ComTxPduId, Com_TxModeHdlr_GetCurRepCnt(ComTxPduId));     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
        /* #50 If the repetition count is greater 0, set the repetition cycle counter to 1. Otherwise set the transmit request */
        if(0U < Com_GetRepCnt(ComTxPduId))      /* COV_COM_ZERO_REPETITION */
        {
          /* trigger first transmission of n repetitive transmissions */
          Com_SetRepCycleCnt(ComTxPduId, 1U);   /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
        }
        else
# endif
        {
          Com_SetTransmitRequest(ComTxPduId, TRUE);     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
        }
# if ((COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON))
      }
# endif
    }
  }
  COM_DUMMY_STATEMENT(TriggerWithoutRepetition);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if ((COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)||(COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_TxNHdlr_InitTxIpdu
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxNHdlr_InitTxIpdu(Com_TxPduInfoIterType ComPduId)
{
# if (COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
  /* #10 Set HandleTxPduDeferred flag to its initial value */
  Com_SetHandleTxPduDeferred(ComPduId, FALSE);  /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif
# if (COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
  /* #20 Set WaitingForConfirmation flag to its initial value */
  Com_SetWaitingForConfirmation(ComPduId, FALSE);       /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif
}
#endif

#if (COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxModeHdlr_MainFunctionTx
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxNHdlr_MainFunctionTx(void)
{
  PduIdType ComPduId;
  /* #10 Iterate over all messages and check if a deferred transmission is pending for this message */
  for(ComPduId = 0; ComPduId < Com_GetSizeOfTxPduInfo(); ComPduId++)
  {
# if (COM_INVALIDHNDOFTXPDUINFO == STD_ON)
    /* #20 Check that ComPduId is a valid HandleId */
    if(!Com_IsInvalidHndOfTxPduInfo(ComPduId))
# endif
    {
      /* #30 If the Handle Deferred flag is set */
      if(Com_IsHandleTxPduDeferred(ComPduId))
      {
        Com_SetHandleTxPduDeferred(ComPduId, FALSE);    /* SBSW_COM_CSL02 */
        {
          /* #40 Call all related notification function of this ComIPdu */
          Com_CbkTxAckDefFuncPtrIndEndIdxOfTxPduInfoType notiIndIndex = Com_GetCbkTxAckDefFuncPtrIndStartIdxOfTxPduInfo(ComPduId);
          for(; notiIndIndex < Com_GetCbkTxAckDefFuncPtrIndEndIdxOfTxPduInfo(ComPduId); notiIndIndex++)
          {
            Com_GetCbkTxAckDefFuncPtr(Com_GetCbkTxAckDefFuncPtrInd(notiIndIndex)) ();   /* SBSW_COM_FCT_PTR_CALL_CSL03 */
          }
        }
      }
    }
  }
}
#endif

#if (COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
/**********************************************************************************************************************
  Com_TxNHdlr_StopTxIpdu
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxNHdlr_StopTxIpdu(Com_TxPduInfoIterType ComPduId)
{
  /* #10 Call all related error notification function of this ComIPdu */
  Com_CbkTxErrFuncPtrIndEndIdxOfTxPduInfoType notiIndIndex = Com_GetCbkTxErrFuncPtrIndStartIdxOfTxPduInfo(ComPduId);
  for(; notiIndIndex < Com_GetCbkTxErrFuncPtrIndEndIdxOfTxPduInfo(ComPduId); notiIndIndex++)
  {
    Com_GetCbkTxErrFuncPtr(Com_GetCbkTxErrFuncPtrInd(notiIndIndex)) (); /* SBSW_COM_FCT_PTR_CALL_CSL03 */
  }
  Com_SetWaitingForConfirmation(ComPduId, FALSE);       /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
}
#endif

#if ((COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON) || (COM_CBKTXACKIMFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)||(COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO == STD_ON))
/**********************************************************************************************************************
  Com_TxNHdlr_Confirmation
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_TxNHdlr_Confirmation(PduIdType ComPduId)
{
# if (COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
  /* #10 Clear notification flag */
  Com_SetWaitingForConfirmation(ComPduId, FALSE);       /* SBSW_COM_IDXPARAM_INTERNALFCT_DET_CSL02 */
# endif

# if (COM_CBKTXACKIMFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
  {
    /* #20 Call all related notification function of this ComIPdu */
    Com_CbkTxAckImFuncPtrIndEndIdxOfTxPduInfoType notiIndIndex = Com_GetCbkTxAckImFuncPtrIndStartIdxOfTxPduInfo(ComPduId);
    for(; notiIndIndex < Com_GetCbkTxAckImFuncPtrIndEndIdxOfTxPduInfo(ComPduId); notiIndIndex++)
    {
      Com_GetCbkTxAckImFuncPtr(Com_GetCbkTxAckImFuncPtrInd(notiIndIndex)) ();   /* SBSW_COM_FCT_PTR_CALL_CSL03 */
    }
  }
# endif
# if (COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
  /* #30 If the notification functions are handled deferred, set the HandleTxPduDeferred flag */
  if(Com_IsCbkTxAckDefFuncPtrIndUsedOfTxPduInfo(ComPduId))      /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_SetHandleTxPduDeferred(ComPduId, TRUE); /* SBSW_COM_IDXPARAM_INTERNALFCT_DET_CSL02 */
  }
# endif
}
#endif

/**********************************************************************************************************************
  Com_GetOldValuePtr
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
#if ((COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUEUSEDOFTXSIGINFO == STD_ON) || (COM_FILTERINITVALUEIDXOFTXSIGINFO == STD_ON))
LOCAL_INLINE FUNC(P2CONST(void, AUTOMATIC, AUTOMATIC), COM_CODE) Com_GetOldValuePtr(Com_SignalIdType idxTxSigInfo)
{
  P2CONST(void, AUTOMATIC, AUTOMATIC) oldValuePtr = NULL_PTR;
  /* #10 Get the old value pointer of the ApplType related buffer */
# if(COM_FILTERINITVALUEUSEDOFTXSIGINFO == STD_ON)
  if(Com_IsFilterInitValueUsedOfTxSigInfo(idxTxSigInfo))        /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_FilterInitValueIdxOfTxSigInfoType idxTxFilterOldValue = Com_GetFilterInitValueIdxOfTxSigInfo(idxTxSigInfo);

    switch (Com_GetApplTypeOfTxSigInfo(idxTxSigInfo))
    {
/* jet: GeneralSwitchCasePerApplType snippet */
#  if (COM_TXFILTERINITVALUEUINT8 == STD_ON)
      case COM_UINT8_APPLTYPEOFTXSIGINFO:
      {
        oldValuePtr = (P2CONST(void, AUTOMATIC, AUTOMATIC)) Com_GetAddrTxFilterOldValueUInt8(idxTxFilterOldValue);
        break;
      }
#  endif
#  if (COM_TXFILTERINITVALUESINT8 == STD_ON)
      case COM_SINT8_APPLTYPEOFTXSIGINFO:
      {
        oldValuePtr = (P2CONST(void, AUTOMATIC, AUTOMATIC)) Com_GetAddrTxFilterOldValueSInt8(idxTxFilterOldValue);
        break;
      }
#  endif
#  if (COM_TXFILTERINITVALUEUINT16 == STD_ON)
      case COM_UINT16_APPLTYPEOFTXSIGINFO:
      {
        oldValuePtr = (P2CONST(void, AUTOMATIC, AUTOMATIC)) Com_GetAddrTxFilterOldValueUInt16(idxTxFilterOldValue);
        break;
      }
#  endif
#  if (COM_TXFILTERINITVALUESINT16 == STD_ON)
      case COM_SINT16_APPLTYPEOFTXSIGINFO:
      {
        oldValuePtr = (P2CONST(void, AUTOMATIC, AUTOMATIC)) Com_GetAddrTxFilterOldValueSInt16(idxTxFilterOldValue);
        break;
      }
#  endif
#  if (COM_TXFILTERINITVALUEUINT32 == STD_ON)
      case COM_UINT32_APPLTYPEOFTXSIGINFO:
      {
        oldValuePtr = (P2CONST(void, AUTOMATIC, AUTOMATIC)) Com_GetAddrTxFilterOldValueUInt32(idxTxFilterOldValue);
        break;
      }
#  endif
#  if (COM_TXFILTERINITVALUESINT32 == STD_ON)
      case COM_SINT32_APPLTYPEOFTXSIGINFO:
      {
        oldValuePtr = (P2CONST(void, AUTOMATIC, AUTOMATIC)) Com_GetAddrTxFilterOldValueSInt32(idxTxFilterOldValue);
        break;
      }
#  endif
#  if (COM_TXFILTERINITVALUEUINT64 == STD_ON)
      case COM_UINT64_APPLTYPEOFTXSIGINFO:
      {
        oldValuePtr = (P2CONST(void, AUTOMATIC, AUTOMATIC)) Com_GetAddrTxFilterOldValueUInt64(idxTxFilterOldValue);
        break;
      }
#  endif
#  if (COM_TXFILTERINITVALUESINT64 == STD_ON)
      case COM_SINT64_APPLTYPEOFTXSIGINFO:
      {
        oldValuePtr = (P2CONST(void, AUTOMATIC, AUTOMATIC)) Com_GetAddrTxFilterOldValueSInt64(idxTxFilterOldValue);
        break;
      }
#  endif
      default: /* COV_COM_MISRA */
        break;
    }
  }
# endif

# if ((COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUEUSEDOFTXSIGINFO == STD_ON) && ((COM_EXISTS_UINT8_N_APPLTYPEOFTXSIGINFO == STD_ON) || ((COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO == STD_ON) && (COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON))))   /* COV_COM_VAR_ELISA_STD_OFF_TF_tf_tf_tf_xf */

  switch (Com_GetApplTypeOfTxSigInfo(idxTxSigInfo))
  {
#  if (COM_EXISTS_UINT8_N_APPLTYPEOFTXSIGINFO == STD_ON)        /* COV_COM_VAR_FEAT_SUBSET_TX */
    case COM_UINT8_N_APPLTYPEOFTXSIGINFO:
#  endif
#  if ((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO == STD_ON)) /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
    case COM_UINT8_DYN_APPLTYPEOFTXSIGINFO:
#  endif
    {
      oldValuePtr = (P2CONST(void, AUTOMATIC, AUTOMATIC)) Com_GetAddrTxFilterOldValueArrayBased(Com_GetTxFilterInitValueArrayBasedFilterInitValueStartIdxOfTxSigInfo(idxTxSigInfo));
    }
      break;
    default:   /* COV_COM_MISRA */
      break;
  }
# endif
  return oldValuePtr;
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif

#if ((COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUEUSEDOFTXSIGINFO == STD_ON) || (COM_FILTERINITVALUEIDXOFTXSIGINFO == STD_ON))
/**********************************************************************************************************************
  Com_SetTxFilterOldValueX
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SetTxFilterOldValueX(Com_SignalIdType idxTxSigInfo, P2CONST(void, AUTOMATIC, COM_APPL_DATA) SignalDataPtr, uint16 Length)
{
  /* #10 Copy the passed value to the ApplType related old value buffer */
# if (COM_FILTERINITVALUEUSEDOFTXSIGINFO == STD_ON)
  if(Com_IsFilterInitValueUsedOfTxSigInfo(idxTxSigInfo))        /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_FilterInitValueIdxOfTxSigInfoType idxTxFilterOldValue = Com_GetFilterInitValueIdxOfTxSigInfo(idxTxSigInfo);
    switch (Com_GetApplTypeOfTxSigInfo(idxTxSigInfo))
    {
/* jet: GeneralSwitchCasePerApplType snippet */
#  if (COM_TXFILTERINITVALUEUINT8 == STD_ON)
      case COM_UINT8_APPLTYPEOFTXSIGINFO:
      {
        Com_SetTxFilterOldValueUInt8(idxTxFilterOldValue, *((P2CONST(uint8, AUTOMATIC, COM_APPL_DATA)) SignalDataPtr)); /* SBSW_COM_CSL02 */
        break;
      }
#  endif
#  if (COM_TXFILTERINITVALUESINT8 == STD_ON)
      case COM_SINT8_APPLTYPEOFTXSIGINFO:
      {
        Com_SetTxFilterOldValueSInt8(idxTxFilterOldValue, *((P2CONST(sint8, AUTOMATIC, COM_APPL_DATA)) SignalDataPtr)); /* SBSW_COM_CSL02 */
        break;
      }
#  endif
#  if (COM_TXFILTERINITVALUEUINT16 == STD_ON)
      case COM_UINT16_APPLTYPEOFTXSIGINFO:
      {
        Com_SetTxFilterOldValueUInt16(idxTxFilterOldValue, *((P2CONST(uint16, AUTOMATIC, COM_APPL_DATA)) SignalDataPtr));       /* SBSW_COM_CSL02 */
        break;
      }
#  endif
#  if (COM_TXFILTERINITVALUESINT16 == STD_ON)
      case COM_SINT16_APPLTYPEOFTXSIGINFO:
      {
        Com_SetTxFilterOldValueSInt16(idxTxFilterOldValue, *((P2CONST(sint16, AUTOMATIC, COM_APPL_DATA)) SignalDataPtr));       /* SBSW_COM_CSL02 */
        break;
      }
#  endif
#  if (COM_TXFILTERINITVALUEUINT32 == STD_ON)
      case COM_UINT32_APPLTYPEOFTXSIGINFO:
      {
        Com_SetTxFilterOldValueUInt32(idxTxFilterOldValue, *((P2CONST(uint32, AUTOMATIC, COM_APPL_DATA)) SignalDataPtr));       /* SBSW_COM_CSL02 */
        break;
      }
#  endif
#  if (COM_TXFILTERINITVALUESINT32 == STD_ON)
      case COM_SINT32_APPLTYPEOFTXSIGINFO:
      {
        Com_SetTxFilterOldValueSInt32(idxTxFilterOldValue, *((P2CONST(sint32, AUTOMATIC, COM_APPL_DATA)) SignalDataPtr));       /* SBSW_COM_CSL02 */
        break;
      }
#  endif
#  if (COM_TXFILTERINITVALUEUINT64 == STD_ON)
      case COM_UINT64_APPLTYPEOFTXSIGINFO:
      {
        Com_SetTxFilterOldValueUInt64(idxTxFilterOldValue, *((P2CONST(uint64, AUTOMATIC, COM_APPL_DATA)) SignalDataPtr));       /* SBSW_COM_CSL02 */
        break;
      }
#  endif
#  if (COM_TXFILTERINITVALUESINT64 == STD_ON)
      case COM_SINT64_APPLTYPEOFTXSIGINFO:
      {
        Com_SetTxFilterOldValueSInt64(idxTxFilterOldValue, *((P2CONST(sint64, AUTOMATIC, COM_APPL_DATA)) SignalDataPtr));       /* SBSW_COM_CSL02 */
        break;
      }
#  endif
      default: /* COV_COM_MISRA */
        break;
    }
  }
# endif

# if ((COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUEUSEDOFTXSIGINFO == STD_ON) && ((COM_EXISTS_UINT8_N_APPLTYPEOFTXSIGINFO == STD_ON) || ((COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO == STD_ON) && (COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON))))   /* COV_COM_VAR_ELISA_STD_OFF_TF_tf_tf_tf_xf */

  if(Com_IsTxFilterInitValueArrayBasedFilterInitValueUsedOfTxSigInfo(idxTxSigInfo))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    switch (Com_GetApplTypeOfTxSigInfo(idxTxSigInfo))
    {
#  if (COM_EXISTS_UINT8_N_APPLTYPEOFTXSIGINFO == STD_ON)        /* COV_COM_VAR_FEAT_SUBSET_TX */
      case COM_UINT8_N_APPLTYPEOFTXSIGINFO:
      {
        Com_TxFilterInitValueArrayBasedIterType bufferIdx = Com_GetTxFilterInitValueArrayBasedFilterInitValueStartIdxOfTxSigInfo(idxTxSigInfo);
        VStdMemCpyRamToRam(Com_GetAddrTxFilterOldValueArrayBased(bufferIdx), (P2CONST(uint8, AUTOMATIC, COM_APPL_DATA)) SignalDataPtr, Com_GetTxFilterInitValueArrayBasedFilterInitValueLengthOfTxSigInfo(idxTxSigInfo));       /* SBSW_COM_CSL03 */
        break;
      }
#  endif
#  if ((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO == STD_ON)) /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
      case COM_UINT8_DYN_APPLTYPEOFTXSIGINFO:
      {
        if(Length <= Com_GetTxFilterInitValueArrayBasedFilterInitValueLengthOfTxSigInfo(idxTxSigInfo))
        {
          Com_TxFilterInitValueArrayBasedIterType bufferIdx = Com_GetTxFilterInitValueArrayBasedFilterInitValueStartIdxOfTxSigInfo(idxTxSigInfo);
          VStdMemCpyRamToRam(Com_GetAddrTxFilterOldValueArrayBased(bufferIdx), (P2CONST(uint8, AUTOMATIC, COM_APPL_DATA)) SignalDataPtr, Length);       /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
        }
        break;
      }
#  endif
      default: /* COV_COM_MISRA */
        break;
    }
  }
# endif

  COM_DUMMY_STATEMENT(Length);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}       /* PRQA S 6030 */ /* MD_MSR_STCYC */
#endif

#if ((COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON) || (COM_TRIGGEREDOFTXSIGINFO == STD_ON))
/**********************************************************************************************************************
  Com_SendSignal_TriggerDeferredIpduSend
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SendSignal_TriggerDeferredIpduSend(Com_SignalIdType idxTxSigInfo
# if (COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON)
                                                                         , P2CONST(void, AUTOMATIC, AUTOMATIC) newValuePtr
# endif
                                                                         , PduIdType idxTxPduInfo)
{
  boolean TriggerWithoutRepetition = FALSE;
  /* #10 If the passed Tx ComSignal has a configured WITHOUT_REPETITION transfer property, the transmission is performed without repetitions */
# if (COM_WITHOUTREPOFTXSIGINFO == STD_ON)
  if(Com_IsWithoutRepOfTxSigInfo(idxTxSigInfo))
  {
    TriggerWithoutRepetition = TRUE;
  }
# endif
# if (COM_TRIGGEREDOFTXSIGINFO == STD_ON)
  /* #20 If the passed Tx ComSignal has a triggered transfer property */
  if(Com_IsTriggeredOfTxSigInfo(idxTxSigInfo))
  {
    /* #30 If the passed signal is contained in a ComSignalGroup, set the signal group event flag */
#  if (COM_TXSIGGRPINFOUSEDOFTXSIGINFO == STD_ON)
    if(Com_IsTxSigGrpInfoUsedOfTxSigInfo(idxTxSigInfo)) /* COV_COM_SIGGRP_CHECK */
    {
      Com_SendSignal_SetSigGrpEventFlag(Com_GetTxSigGrpInfoIdxOfTxSigInfo(idxTxSigInfo), TriggerWithoutRepetition);
    }
    /* #40 Otherwise trigger the deferred ComIPdu transmission */
    else
#  endif
    {
      Com_TxModeHdlr_TriggerDeferredIpduSend(idxTxPduInfo, TriggerWithoutRepetition);
    }
  }
  else
# endif
# if (COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON)
    /* #50 If the passed Tx ComSignal has a triggered on change transfer property and if the value has changed */
  if(Com_IsOnChangeUsedOfTxSigInfo(idxTxSigInfo))       /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_OnChangeIdxOfTxSigInfoType idxFilterInfo = Com_GetOnChangeIdxOfTxSigInfo(idxTxSigInfo);

    if(TRUE == Com_TxSignal_EvaluateFilter(idxTxSigInfo, (uint32) idxFilterInfo, newValuePtr))  /* SBSW_COM_FCTCALL_WITH_P2CONST */
    {
#  if (COM_TXSIGGRPINFOUSEDOFTXSIGINFO == STD_ON)
      /* #60 If the passed signal is contained in a ComSignalGroup, set the signal group event flag */
      if(Com_IsTxSigGrpInfoUsedOfTxSigInfo(idxTxSigInfo))       /* COV_COM_TRIGGERED_ONCHG_SIGGRP */
      {
        Com_SendSignal_SetSigGrpEventFlag(Com_GetTxSigGrpInfoIdxOfTxSigInfo(idxTxSigInfo), TriggerWithoutRepetition);
      }
      /* #70 Otherwise trigger the deferred ComIPdu transmission */
      else
#  endif
      {
        Com_TxModeHdlr_TriggerDeferredIpduSend(idxTxPduInfo, TriggerWithoutRepetition);
      }
    }
  }
  else
# endif
  {
    /* #80 If the Signal has PENDING transfer property, do nothing */
  }
  COM_DUMMY_STATEMENT(TriggerWithoutRepetition);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if ((COM_TXSIGGRPINFOUSEDOFTXSIGINFO == STD_ON) && ((COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON) || (COM_TRIGGEREDOFTXSIGINFO == STD_ON)))
/**********************************************************************************************************************
  Com_SendSignal_SetSigGrpEventFlag
 **********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 **********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SendSignal_SetSigGrpEventFlag(Com_TxSigGrpInfoIdxOfTxSigInfoType idxTxSigGrpInfo, boolean TriggerWithoutRepetition)
{
# if (COM_WITHOUTREPOFTXSIGINFO == STD_ON)
  /* #10 If the passed Tx ComSignalGroup has a _WITHOUT_REPETITION transfer property, set the TRANSMIT signal group event flag */
  if(TriggerWithoutRepetition == TRUE)
  {
    Com_SetSigGrpEventFlag(idxTxSigGrpInfo,     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
                           (Com_GetSigGrpEventFlag(idxTxSigGrpInfo) | COM_TX_SIGIF_GROUPEVENTFLAG));
  }
  /* #20 Otherwise, set the TRANSMIT and WITH_REPETITION signal group event flags */
  else
# endif
  {
    Com_SetSigGrpEventFlag(idxTxSigGrpInfo,     /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
                           (Com_GetSigGrpEventFlag(idxTxSigGrpInfo) | COM_TX_SIGIF_GROUPEVENTREPETITION));
  }

  COM_DUMMY_STATEMENT(TriggerWithoutRepetition);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (COM_TXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_SendSignal_WriteSignal
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SendSignal_WriteSignal(Com_SignalIdType idxTxSigInfo, P2CONST(void, AUTOMATIC, COM_APPL_DATA) SignalDataPtr, uint16 Length
# if(((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO == STD_ON)) || (COM_UBMASKUSEDOFTXSIGINFO == STD_ON))        /* COV_COM_VAR_ELISA_STD_OFF_TF_xf_tf_tf */
                                                             , PduIdType idxTxPduInfo
# endif
  )
{
# if (COM_TXSIGGRPINFOUSEDOFTXSIGINFO == STD_ON)
  /* #10 If the passed signal is a ComGroupSignal */
  if(Com_IsTxSigGrpInfoUsedOfTxSigInfo(idxTxSigInfo))   /* COV_COM_SIGGRP_CHECK */
  {
#  if ((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO == STD_ON)) /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
    if(Com_IsTxTpInfoUsedOfTxPduInfo(idxTxPduInfo))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      /* #20 If the passed ComGroupSignal is a dynamic length signal, update the temp length of the related ComIPdu */
      if(Com_GetApplTypeOfTxSigInfo(idxTxSigInfo) == COM_UINT8_DYN_APPLTYPEOFTXSIGINFO)
      {
        Com_TxTpInfoIdxOfTxPduInfoType txTpPduInfoIdx = Com_GetTxTpInfoIdxOfTxPduInfo(idxTxPduInfo);
#   if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
        Com_SetTxTmpTpPduLength(txTpPduInfoIdx, Com_GetBytePositionOfTxSigInfo(idxTxSigInfo) + Length);
#   else
       /* (CPU_BYTE_ORDER == HIGH_BYTE_FIRST) */
        Com_SetTxTmpTpPduLength(txTpPduInfoIdx, Com_GetStartByteInPduPositionOfTxSigInfo(idxTxSigInfo) + Length);
#   endif
        Com_SetTxDynSignalLength(txTpPduInfoIdx, Length);
      }
    }
#  endif
#  if (COM_TXBUFFERUSEDOFTXSIGGRPINFO == STD_ON)
    /* #30 If a shadow buffer is used, copy the passed signal data to the shadow buffer */
    if(Com_IsTxBufferUsedOfTxSigGrpInfo(Com_GetTxSigGrpInfoIdxOfTxSigInfo(idxTxSigInfo)))       /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      Com_Signal_WriteSignal(idxTxSigInfo, (P2CONST(uint8, AUTOMATIC, COM_APPL_DATA)) SignalDataPtr);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
    }
#  endif
  }
  /* #40 Otherwise, if the passed signal is a ComSignal */
  else
# endif
  {
# if (COM_UBMASKUSEDOFTXSIGINFO == STD_ON)
    /* #50 If the passed ComSignal has an UpdateBit, set the UpdateBit in the Tx ComIPdu buffer */
    if(Com_IsUbMaskUsedOfTxSigInfo(idxTxSigInfo))       /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      Com_TxBufferEndIdxOfTxPduInfoType ubIdx = Com_GetTxBufferStartIdxOfTxPduInfo(idxTxPduInfo) + Com_GetUbIdxOfTxSigInfo(idxTxSigInfo);
      uint8 temp = Com_GetTxBuffer(ubIdx);
      Com_SetTxBuffer(ubIdx, (temp | Com_GetConstValueUInt8(Com_GetUbMaskIdxOfTxSigInfo(idxTxSigInfo))));       /* SBSW_COM_ARRAY_WRITEACCESS_CSL */
    }
# endif
# if ((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO == STD_ON))  /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf */
    if(Com_IsTxTpInfoUsedOfTxPduInfo(idxTxPduInfo))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      /* #60 If the passed ComSignal is a dynamic length signal, update the temp and the normal Tx ComIPdu length */
      if(Com_GetApplTypeOfTxSigInfo(idxTxSigInfo) == COM_UINT8_DYN_APPLTYPEOFTXSIGINFO)
      {
        Com_TxTpInfoIdxOfTxPduInfoType txTpPduInfoIdx = Com_GetTxTpInfoIdxOfTxPduInfo(idxTxPduInfo);
#  if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
        Com_SetTxSduLength(idxTxPduInfo, Com_GetBytePositionOfTxSigInfo(idxTxSigInfo) + Length);
#  else  /* (CPU_BYTE_ORDER == HIGH_BYTE_FIRST) */
        Com_SetTxSduLength(idxTxPduInfo, Com_GetStartByteInPduPositionOfTxSigInfo(idxTxSigInfo) + Length);
#  endif
        Com_SetTxDynSignalLength(txTpPduInfoIdx, Length);
      }
    }
# endif
    /* #70 If the bit size of the ComSignal is greater 0, copy the passed signal data to the Tx ComIPdu buffer */
# if (COM_TXBUFFERUSEDOFTXSIGINFO == STD_ON)
    if(Com_IsTxBufferUsedOfTxSigInfo(idxTxSigInfo))     /* COV_COM_WRITESIGNAL_TXBUFFER */ /* PRQA S 3685 */ /* MD_Com_3685 */
    {
      Com_Signal_WriteSignal(idxTxSigInfo,      /* SBSW_COM_FCTCALL_WITH_P2CONST */
                             (P2CONST(uint8, AUTOMATIC, COM_APPL_DATA)) SignalDataPtr);
    }
# endif
  }

  COM_DUMMY_STATEMENT(Length);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalDataPtr);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (COM_TXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_SendSignalGroup_TriggerEventProcessing
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_SendSignalGroup_TriggerEventProcessing(
# if ((COM_TXTOUTINFOUSEDOFTXSIGGRPINFO == STD_ON)||(COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON) || (COM_TRIGGEREDOFTXSIGINFO == STD_ON))
                                                                               Com_SignalIdType idxTxSigGrpInfo,
# endif
                                                                               PduIdType idxTxPduInfo)
{
  uint8 retVal = E_OK;
  /* #10 If the passed Tx ComIPdu is active */
  if(Com_IsTxPduGrpActive(idxTxPduInfo))
  {
# if (COM_TXTOUTINFOUSEDOFTXSIGGRPINFO == STD_ON)
    /* #20 If the passed Tx ComSignalGroup has a timeout, load the timeout value */
    if(Com_IsTxTOutInfoUsedOfTxSigGrpInfo(idxTxSigGrpInfo))
    {   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      Com_TxDlMon_Event(idxTxPduInfo, Com_GetTxTOutInfoIdxOfTxSigGrpInfo(idxTxSigGrpInfo));
    }
# endif
# if ((COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON) || (COM_TRIGGEREDOFTXSIGINFO == STD_ON))
    /* #30 If at least one related ComGroupSignal was triggered, set the deferred transmit event */
    if(0U < Com_GetSigGrpEventFlag(idxTxSigGrpInfo))    /* COV_COM_ONLY_TRIGGERED_SIGGRP */ /* PRQA S 3689 */ /* MD_Com_3689 */
    {
      boolean TriggerWithoutRepetition;
#  if (COM_WITHOUTREPOFTXSIGINFO == STD_ON)
      /* #40 If at least one ComGroupSignal with TRIGGERED transfer property was triggered, trigger the transmission with repetitions */
      if((Com_GetSigGrpEventFlag(idxTxSigGrpInfo) & COM_TX_SIGIF_GROUPREPETITION) == 0U)
      {
        TriggerWithoutRepetition = TRUE;
      }
      else
#  endif
      {
        TriggerWithoutRepetition = FALSE;
      }

      Com_TxModeHdlr_TriggerDeferredIpduSend(idxTxPduInfo, TriggerWithoutRepetition);
      Com_SetSigGrpEventFlag(idxTxSigGrpInfo, 0U);      /* SBSW_COM_IDXPARAM_INTERNALFCT_DET_CSL02 */ /* PRQA S 3689 */ /* MD_Com_3689 */
    }
# endif
    /* #50 Return E_OK */
  }
  /* #60 Otherwise, return COM_SERVICE_NOT_AVAILABLE */
  else
  {
    retVal = COM_SERVICE_NOT_AVAILABLE;
  }
  return retVal;
}
#endif

#if (COM_TXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_SendSignalGroup_Processing
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_SendSignalGroup_Processing(Com_SignalIdType idxTxSigGrpInfo, P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) ShadowBufferPtr)
{
  Com_TxPduInfoIdxOfTxSigGrpInfoType idxTxPduInfo = Com_GetTxPduInfoIdxOfTxSigGrpInfo(idxTxSigGrpInfo);
  uint8 retVal = E_OK;

# if (COM_TXFILTERINITSTATEUSEDOFTXMODEINFO == STD_ON)
  /* #10 If the passed Tx ComSignalGroup has filter, update the transition mode state */
  if(Com_IsTxFilterInitStateUsedOfTxModeInfo(idxTxPduInfo))     /* COV_COM_NO_GRPSIG_FILTER_PRESENT */
  {
    Com_TxModeHdlr_UpdateTMS((PduIdType) idxTxPduInfo);
  }
# endif
# if (COM_UBMASKUSEDOFTXSIGGRPINFO == STD_ON)
  /* #20 If the passed Tx ComSingalGroup has an UpdateBit, set the UpdateBit in the related Tx ComIPdu buffer */
  if(Com_IsUbMaskUsedOfTxSigGrpInfo(idxTxSigGrpInfo))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_TxBufferEndIdxOfTxPduInfoType ubIdx = Com_GetTxBufferStartIdxOfTxPduInfo(idxTxPduInfo) + Com_GetUbIdxOfTxSigGrpInfo(idxTxSigGrpInfo);
    uint8 temp = Com_GetTxBuffer(ubIdx);
    Com_SetTxBuffer(ubIdx, (temp | Com_GetConstValueUInt8(Com_GetUbMaskIdxOfTxSigGrpInfo(idxTxSigGrpInfo))));   /* SBSW_COM_ARRAY_WRITEACCESS_CSL */
  }
# endif

# if (COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON)    /* COV_COM_VAR_ELISA_STD_OFF_XF */
  if(Com_IsTxTpInfoUsedOfTxPduInfo(idxTxPduInfo))       /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    /* #30 If the passed Tx ComIPdu is a Tp Pdu and the Tp ComIPdu is in READY state, update the shadow and set the Tx ComIPdu length to the stored temp length for dynamic length signals */
    Com_TxTpInfoIdxOfTxPduInfoType txTpPduInfoIdx = Com_GetTxTpInfoIdxOfTxPduInfo(idxTxPduInfo);
    if(Com_GetTxTpConnectionState(txTpPduInfoIdx) == COM_READY_TXTPCONNECTIONSTATE)
    {
#  if (COM_TXSIGGRPMASK == STD_ON)
      Com_TxBuffer_WriteSignalGroup(idxTxSigGrpInfo, ShadowBufferPtr);  /* SBSW_COM_FCTCALL_WITH_P2CONST */
#  endif
#  if (COM_TXSIGINFODYNSIGUSEDOFTXTPINFO == STD_ON)
      if(Com_IsTxSigInfoDynSigUsedOfTxTpInfo(txTpPduInfoIdx))
      {
        Com_SetTxSduLength(idxTxPduInfo, Com_GetTxTmpTpPduLength(txTpPduInfoIdx));
      }
#  endif
    }
    /* #40 Otherwise, return COM_BUSY */
    else
    {
      retVal = COM_BUSY;
    }
  }
  else
# endif
  {
# if (COM_TXSIGGRPMASK == STD_ON)
    /* #50 Copy the shadow buffer to the related Tx ComIPdu buffer */
    Com_TxBuffer_WriteSignalGroup(idxTxSigGrpInfo, ShadowBufferPtr);    /* SBSW_COM_FCTCALL_WITH_P2CONST */
# endif
  }
# if (COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON)    /* COV_COM_VAR_ELISA_STD_OFF_XF */
  if(retVal == E_OK)
# endif
  {
    /* #60 Do trigger event processing */
    retVal = Com_SendSignalGroup_TriggerEventProcessing(
# if ((COM_TXTOUTINFOUSEDOFTXSIGGRPINFO == STD_ON)||(COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON) || (COM_TRIGGEREDOFTXSIGINFO == STD_ON))
                                                         idxTxSigGrpInfo,
# endif
                                                         (PduIdType) idxTxPduInfo);
  }

  COM_DUMMY_STATEMENT(ShadowBufferPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return retVal;
}
#endif

#if (COM_TXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_SendSignal_Processing
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_SendSignal_Processing(Com_SignalIdType idxTxSigInfo, P2CONST(void, AUTOMATIC, COM_APPL_DATA) SignalDataPtr, uint16 Length)
{
  uint8 retVal = E_OK;

  Com_TxPduInfoIdxOfTxSigInfoType idxTxPduInfo = Com_GetTxPduInfoIdxOfTxSigInfo(idxTxSigInfo);

# if ((COM_FILTERINFOUSEDOFTXSIGINFO == STD_ON) || (COM_ONCHANGEIDXOFTXSIGINFO == STD_ON))
  P2CONST(void, AUTOMATIC, AUTOMATIC) newValuePtr = (P2CONST(void, AUTOMATIC, AUTOMATIC)) SignalDataPtr;
# endif

# if (COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON)    /* COV_COM_VAR_ELISA_STD_OFF_XF */
  /* #10 If the passed Tx ComIPdu is a Tp Pdu, check if the Tp connection is in READY state, if not return COM_BUSY */
  if(Com_IsTxTpInfoUsedOfTxPduInfo(idxTxPduInfo))       /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_TxTpInfoIdxOfTxPduInfoType txTpPduInfoIdx = Com_GetTxTpInfoIdxOfTxPduInfo(idxTxPduInfo);
    if(Com_GetTxTpConnectionState(txTpPduInfoIdx) != COM_READY_TXTPCONNECTIONSTATE)
    {
      retVal = COM_BUSY;
    }
  }
  if(retVal == E_OK)
# endif
  {
# if (COM_FILTERINFOUSEDOFTXSIGINFO == STD_ON)
    /* #30 Check the filter state of the passed Tx ComSignal and update the transition mode state if required */
    Com_SendSignal_CheckFilter(idxTxSigInfo, newValuePtr, (PduIdType) idxTxPduInfo);    /* SBSW_COM_FCTCALL_WITH_P2CONST */
# endif
    /* #40 Write the passed signal data */
    Com_SendSignal_WriteSignal(idxTxSigInfo, SignalDataPtr, Length      /* SBSW_COM_FCTCALL_WITH_P2CONST */
# if(((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO == STD_ON)) || (COM_UBMASKUSEDOFTXSIGINFO == STD_ON) )       /* COV_COM_VAR_ELISA_STD_OFF_TF_xf_tf_tf */
                               , (PduIdType) idxTxPduInfo
# endif
      );

    /* #50 If the Tx ComIPdu is active, evaluate the trigger conditions, otherwise return COM_SERVICE_NOT_AVAILABLE */
    if(Com_IsTxPduGrpActive(idxTxPduInfo))
    {
      Com_SendSignal_SetTOutAndSendDeferredIpdu(idxTxSigInfo    /* SBSW_COM_FCTCALL_WITH_P2CONST */
# if (COM_ONCHANGEIDXOFTXSIGINFO == STD_ON)
                                                , newValuePtr
# endif
                                                , (PduIdType) idxTxPduInfo);
    }
    else
    {
      retVal = COM_SERVICE_NOT_AVAILABLE;
    }

# if ((COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUEUSEDOFTXSIGINFO == STD_ON) || (COM_FILTERINITVALUEIDXOFTXSIGINFO == STD_ON))
    /* #60 Update the filter old value */
    Com_SetTxFilterOldValueX(idxTxSigInfo, SignalDataPtr, Length);      /* SBSW_COM_FCTCALL_WITH_P2CONST */
# endif
  }     /* retVal not busy check */

  return retVal;
}
#endif

#if (COM_TXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_SendSignal_SetTOutAndSendDeferredIpdu
 **********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 **********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SendSignal_SetTOutAndSendDeferredIpdu(Com_SignalIdType idxTxSigInfo
# if (COM_ONCHANGEIDXOFTXSIGINFO == STD_ON)
                                                                            , P2CONST(void, AUTOMATIC, AUTOMATIC) newValuePtr
# endif
                                                                            , PduIdType idxTxPduInfo)
{
# if (COM_TXTOUTINFOUSEDOFTXSIGINFO == STD_ON)
  /* #10 If the passed Tx ComSignal has a timeout, process the timeout event */
  if(Com_IsTxTOutInfoUsedOfTxSigInfo(idxTxSigInfo))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_TxDlMon_Event(idxTxPduInfo, Com_GetTxTOutInfoIdxOfTxSigInfo(idxTxSigInfo));
  }
# endif
# if ((COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON) || (COM_TRIGGEREDOFTXSIGINFO == STD_ON))
  {
    /* #20 Evaluate the transfer property and trigger the transmission, if required */
    Com_SendSignal_TriggerDeferredIpduSend(idxTxSigInfo /* SBSW_COM_FCTCALL_WITH_P2CONST */
#  if (COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON)
                                           , newValuePtr
#  endif
                                           , idxTxPduInfo);
  }
# endif

  COM_DUMMY_STATEMENT(idxTxPduInfo);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(idxTxSigInfo);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (COM_FILTERINFOUSEDOFTXSIGINFO == STD_ON)
/**********************************************************************************************************************
  Com_SendSignal_CheckFilter
 **********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 ***********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SendSignal_CheckFilter(Com_SignalIdType idxTxSigInfo, P2CONST(void, AUTOMATIC, AUTOMATIC) newValuePtr, PduIdType idxTxPduInfo)
{
  /* #10 If the passed Tx ComSignal has filter */
  if(Com_IsFilterInfoUsedOfTxSigInfo(idxTxSigInfo))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    Com_FilterInfoIdxOfTxSigInfoType idxFilterInfo = Com_GetFilterInfoIdxOfTxSigInfo(idxTxSigInfo);

    /* #20 Evaluate the filter state */
    boolean filterState = Com_TxSignal_EvaluateFilter(idxTxSigInfo, (uint32) idxFilterInfo, newValuePtr);       /* SBSW_COM_FCTCALL_WITH_P2CONST */

    boolean oldFilterState = Com_IsTxFilterState(Com_GetTxFilterInitStateIdxOfTxSigInfo(idxTxSigInfo));

    /* #30 Update the tx filter state */
    Com_SetTxFilterState(Com_GetTxFilterInitStateIdxOfTxSigInfo(idxTxSigInfo), filterState);    /* SBSW_COM_CSL02 */

    /* #40 If the passed signal is not a group signal and the passed filter state is different to the current filter state, update the transition mode state */

# if (COM_TXSIGGRPINFOUSEDOFTXSIGINFO == STD_ON)
    if(!Com_IsTxSigGrpInfoUsedOfTxSigInfo(idxTxSigInfo))        /* COV_COM_SIGGRP_FILTER */
# endif
    {
      if(oldFilterState != filterState) /* COV_COM_FILTERSTATE */
      {
        Com_TxModeHdlr_UpdateTMS(idxTxPduInfo);
      }
    }
  }
}
#endif

#if ((COM_ARRAYACCESSUSEDOFTXSIGGRPINFO == STD_ON) && ((COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON) || (COM_TRIGGEREDOFTXSIGINFO == STD_ON)) && ((COM_TXSIGGRPONCHANGEMASKONCHANGEUSEDOFTXSIGGRPINFO == STD_ON) || (COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPUSEDOFTXSIGGRPINFO == STD_ON)))
/**********************************************************************************************************************
  Com_SendSignalGroupArrayHasChanged
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_SendSignalGroupArrayHasChanged(P2CONST(uint8, AUTOMATIC, COM_APPL_VAR) SignalGroupArrayPtr,
                                                                      P2CONST(uint8, AUTOMATIC, COM_PBCFG) maskPtr, P2CONST(uint8, AUTOMATIC, COM_VAR_NOINIT) pIpduBuf, uint32 MaskLength)
{
  boolean retVal = FALSE;
  uint32 i;
  /* #10 Bytewise comparison of signal group array and ipdu-buffer, if any change has occurred */
  for(i = 0; i < MaskLength; i++)
  {
    /* Bits that to do not belong to a group signal with a certain transfer property are masked out with the provided mask. */
    if((pIpduBuf[i] & maskPtr[i]) != (SignalGroupArrayPtr[i] & maskPtr[i]))
    {
      retVal = TRUE;
      break;
    }
  }
  return retVal;
}
#endif

#if (COM_ARRAYACCESSUSEDOFTXSIGGRPINFO == STD_ON)
/**********************************************************************************************************************
  Com_SendSignalGroupArray_Processing
**********************************************************************************************************************/
/*! Internal comment removed.
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
**********************************************************************************************************************/
LOCAL_INLINE FUNC(uint8, COM_CODE) Com_SendSignalGroupArray_Processing(Com_SignalGroupIdType SignalGroupId, P2CONST(uint8, AUTOMATIC, COM_APPL_VAR) SignalGroupArrayPtr)
{
# if ((COM_ONCHANGEUSEDOFTXSIGINFO == STD_ON) || (COM_TRIGGEREDOFTXSIGINFO == STD_ON))
  /* #10 If TRIGGERED BIT is set for the signal group */
  if(Com_TxSigIf_IsTxSigGrpInfoTriggered(SignalGroupId))        /* COV_COM_ONLY_TRIGGERED_SIGGRP */
  {
    boolean doTrigger = FALSE;
    boolean withoutRepetition = TRUE;   /* Will only be evaluated for COM_WITHOUTREPOFTXSIGINFO == STD_ON */

    /* #20 If transmission property of signal group equals TRIGGERED_ON_CHANGE or TRIGGERED_ON_CHANGE_WITHOUT_REPETITION */
    if(Com_TxSigIf_IsTxSigGrpInfoOnChange(SignalGroupId))       /* COV_COM_TRIGGERED_ONCHG_SIGGRP */
    {
#  if ((COM_TXSIGGRPONCHANGEMASKONCHANGEUSEDOFTXSIGGRPINFO == STD_ON) || (COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPUSEDOFTXSIGGRPINFO == STD_ON))
      Com_TxPduInfoIdxOfTxSigGrpInfoType ipdu = Com_GetTxPduInfoIdxOfTxSigGrpInfo(SignalGroupId);
#  endif

#  if (COM_TXSIGGRPONCHANGEMASKONCHANGEUSEDOFTXSIGGRPINFO == STD_ON)    /* Evaluate onChange */
      /* #30 If signal group contains group signals with transmission property TRIGGERED_ON_CHANGE (if COM_TXSIGGRPONCHANGEMASKONCHANGEUSEDOFTXSIGGRPINFO is enabled) */
      if(Com_IsTxSigGrpOnChangeMaskOnChangeUsedOfTxSigGrpInfo(SignalGroupId))   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        /* Get the indirection to the mask to evaluate if any of the contained group signals has changed */
        P2CONST(uint8, AUTOMATIC, COM_PBCFG) maskPtr = Com_GetAddrTxSigGrpOnChangeMask(Com_GetTxSigGrpOnChangeMaskOnChangeStartIdxOfTxSigGrpInfo(SignalGroupId));

        /* Calculate the position of the first group signal with the transmission property TRIGGERED_ON_CHANGE within the ipdu buffer to compare the stored values */
        P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) pIpduBuf = Com_GetAddrTxBuffer(Com_GetTxBufferStartIdxOfTxPduInfo(ipdu) + Com_GetSigGroupOnChangeStartPositionOfTxSigGrpInfo(SignalGroupId));

        /* Get the length of the triggered on change mask */
        Com_TxSigGrpOnChangeMaskOnChangeLengthOfTxSigGrpInfoType MaskLength = Com_GetTxSigGrpOnChangeMaskOnChangeLengthOfTxSigGrpInfo(SignalGroupId);

        /* #40 Perform check if any group signal with transmission property TRIGGERED_ON_CHANGE has changed and set transmission initiation flag accordingly */
        doTrigger = Com_SendSignalGroupArrayHasChanged(&(SignalGroupArrayPtr[Com_GetSigGroupOnChangeOffsetOfTxSigGrpInfo(SignalGroupId)]), maskPtr, pIpduBuf, MaskLength);      /* SBSW_COM_COMST_PTR */
      }
#  endif

#  if (COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPUSEDOFTXSIGGRPINFO == STD_ON)  /* Evaluate onChangeWithoutRepetition */
      /* #50 If no group signal with transmission property TRIGGERED_ON_CHANGE has changed (if COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPUSEDOFTXSIGGRPINFO is enabled) */
      if(doTrigger == FALSE)
      {
        /* #60 If signal group contains any group signal with transmission property TRIGGERED_ON_CHANGE_WITHOUT_REPETITION */
        if(Com_IsTxSigGrpOnChangeMaskOnChangeWithoutRepUsedOfTxSigGrpInfo(SignalGroupId))       /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
        {
          /* Get the indirection to the mask to evaluate if any of the contained group signals with transmission property TRIGGERED_ON_CHANGE_WITHOUT_REPETITION has changed */
          P2CONST(uint8, AUTOMATIC, COM_PBCFG) maskPtr = Com_GetAddrTxSigGrpOnChangeMask(Com_GetTxSigGrpOnChangeMaskOnChangeWithoutRepStartIdxOfTxSigGrpInfo(SignalGroupId));

          /* Calculate the position of the first group signal with the transmission property TRIGGERED_ON_CHANGE_WITHOUT_REPETITION within the ipdu buffer to compare the stored values */
          P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) pIpduBuf =
            Com_GetAddrTxBuffer(Com_GetTxBufferStartIdxOfTxPduInfo(ipdu) + Com_GetSigGroupOnChangeWithoutRepStartPositionOfTxSigGrpInfo(SignalGroupId));

          /* Get the length of the triggered on change without repetition mask */
          Com_TxSigGrpOnChangeMaskOnChangeWithoutRepLengthOfTxSigGrpInfoType MaskLength = Com_GetTxSigGrpOnChangeMaskOnChangeWithoutRepLengthOfTxSigGrpInfo(SignalGroupId);

          /* #70 Perform check if any group signal with transmission property TRIGGERED_ON_CHANGE_WITHOUT_REPETITION has changed and set transmission initiation flag accordingly */
          doTrigger = Com_SendSignalGroupArrayHasChanged(&(SignalGroupArrayPtr[Com_GetSigGroupOnChangeWithoutRepOffsetOfTxSigGrpInfo(SignalGroupId)]), maskPtr, pIpduBuf, MaskLength);  /* SBSW_COM_COMST_PTR */
        }
      }
      else
#  endif
      {
#  if (COM_WITHOUTREPOFTXSIGINFO == STD_ON)
        /* #80 Otherwise set the without repetition flag to false to indicate that transmission should be performed with configured amount of repetitions */
        withoutRepetition = FALSE;
#  endif
      }
    }
    /* #90 Otherwise transmission property is assumed to be TRIGGERED or TRIGGERED_WITHOUT_REPETITION */
    else
    {
      /* set transmission initiation flag to true */
      doTrigger = TRUE;
#  if (COM_WITHOUTREPOFTXSIGINFO == STD_ON)
      /* set without repetition flag accordingly to the configured transmission property (if configured) */
      withoutRepetition = Com_TxSigIf_IsTxSigGrpInfoWithoutRepetition(SignalGroupId);
#  endif
    }

    /* #100 If transmission is requested, set group event flag */
    if(doTrigger == TRUE)       /* COV_COM_ONLY_TRIGGERED_SIGGRP */
    {
      Com_SendSignal_SetSigGrpEventFlag((Com_TxSigGrpInfoIdxOfTxSigInfoType) SignalGroupId, withoutRepetition);
    }
  }
# endif
  /* #110 Copy the content of the associated signal group array to the associated I-PDU buffer (if COM_TXSIGGRPMASK enabled). */
  return Com_SendSignalGroup_Processing(SignalGroupId, SignalGroupArrayPtr);    /* SBSW_COM_FCTCALL_WITH_P2CONST */
}
#endif

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  Com_Init
**********************************************************************************************************************/
/*! Internal comment removed.
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
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_Init(P2CONST(Com_ConfigType, AUTOMATIC, COM_INIT_DATA) config)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

#if(COM_USE_INIT_POINTER == STD_ON)
  Com_ConfigDataPtr = config;
#endif
/* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of all input parameters */
  if(Com_IsInitialized())
  {
    errorId = COM_E_INIT_FAILED;
  }
#if(COM_USE_INIT_POINTER == STD_ON)
  /* Check validity of Config pointer */
  else if(Com_ConfigDataPtr == NULL_PTR)
  {
# if(COM_USE_ECUM_BSW_ERROR_HOOK == STD_ON)     /* COV_COM_VAR_DEPENDENT_SWITCH */
    EcuM_BswErrorHook(COM_MODULE_ID, ECUM_BSWERROR_NULLPTR);
# endif
    errorId = COM_E_PARAM_POINTER;
  }
# if (COM_FINALMAGICNUMBER == STD_ON)   /* COV_COM_VAR_DEPENDENT_SWITCH */
  else if(Com_GetFinalMagicNumber() != COM_FINAL_MAGIC_NUMBER)
  {
#  if(COM_USE_ECUM_BSW_ERROR_HOOK == STD_ON)    /* COV_COM_VAR_DEPENDENT_SWITCH */
    EcuM_BswErrorHook(COM_MODULE_ID, ECUM_BSWERROR_MAGICNUMBER);
#  endif
    errorId = COM_E_PARAM_POINTER;
    Com_ConfigDataPtr = NULL_PTR;
  }
# endif
  else
#endif
  {
#if (COM_RXPDUINFO == STD_ON)
    {
      /* #20 Initialize all Rx ComIPdus and related parameters */
      Com_InitRx();
    }
#endif
#if (COM_TXPDUINFO == STD_ON)
    {
      /* #30 Initialize all Tx ComIPdus and related parameters */
      Com_InitTx();
    }
# if (COM_TXTOUTCNT == STD_ON)
    /* #40 Initialize all Tx deadline monitoring parameters */
    Com_TxDlMon_Init();
# endif
#endif

#if (COM_IPDUGROUPSTATE == STD_ON)
    {
      /* #50 Iterate all ComIPduGroups and set them to INACTIVE */
      Com_SizeOfIPduGroupStateType comIPduGroupId = 0;
      for(; comIPduGroupId < Com_GetSizeOfIPduGroupState(); comIPduGroupId++)
      {
        Com_SetIPduGroupState(comIPduGroupId, COM_INACTIVE_IPDUGROUPSTATE);     /* SBSW_COM_CSL01 */
      }
    }
#endif

    /* #60 Initialize timing domain divisors (if configured) */
#if (COM_TXCYCLECOUNTERDIVISOR == STD_ON)
    Com_SetTxCycleCounterDivisorCounter(1);
#endif
#if (COM_TXDLMONDIVISOR == STD_ON)
    Com_SetTxDlMonDivisorCounter(1);
#endif
#if (COM_RXDLMONDIVISOR == STD_ON)
    Com_SetRxDlMonDivisorCounter(1);
#endif
#if (COM_RXDEFERREDEVENTCACHE == STD_ON)
    /* #70 Initialize next event cache entry (if configured) */
    Com_SetRxNextEventCacheEnty(0);
#endif
#if (COM_GWEVENTCACHE == STD_ON)
    /* #80 Initialize gateway event cache index (if configured) */
    Com_SetGwEventCacheIndex(0);
#endif

    /* #85 Initialize ISR lock counter */
#if (COM_GWEVENTCACHE == STD_ON)
    Com_SetGatewayDescriptionProcessingISRLockCounter(Com_GetGatewayDescriptionProcessingISRLockThreshold());
#endif
#if (COM_GWINFO == STD_ON)
    Com_SetGatewayProcessingISRLockCounter(Com_GetGatewayProcessingISRLockThreshold());
#endif
#if ((COM_RXPDUINFO == STD_ON) && ((COM_RXPDUGRPINFO == STD_ON) || (COM_IPDUGROUPINFO == STD_ON)))
    Com_SetRxIPduGroupISRLockCounter(Com_GetRxIPduGroupISRLockThreshold());
#endif
#if ((COM_TXPDUINFO == STD_ON) && ((COM_TXPDUGRPINFO == STD_ON) || (COM_IPDUGROUPINFO == STD_ON)))
    Com_SetTxIPduGroupISRLockCounter(Com_GetTxIPduGroupISRLockThreshold());
#endif
#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_TXPDUINFO == STD_ON))
    Com_SetTxIPduGroupStopISRLockCounter(Com_GetTxIPduGroupStopISRLockThreshold());
#endif
#if ((COM_PDUGRPVECTOR == STD_OFF) && (COM_RXPDUINFO == STD_ON))
    Com_SetRxIPduGroupStopISRLockCounter(Com_GetRxIPduGroupStopISRLockThreshold());
#endif
#if(COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
    Com_SetRxDeferredProcessingISRLockCounter(Com_GetRxDeferredProcessingISRLockThreshold());
#endif
#if(COM_RXTOUTINFO == STD_ON)
    Com_SetRxDeadlineMonitoringISRLockCounter(Com_GetRxDeadlineMonitoringISRLockThreshold());
#endif
#if(COM_TXTOUTINFO == STD_ON)
    Com_SetTxDeadlineMonitoringISRLockCounter(Com_GetTxDeadlineMonitoringISRLockThreshold());
#endif
#if ((COM_PERIODICOFTXMODETRUE == STD_ON) || (COM_PERIODICOFTXMODEFALSE == STD_ON) || (COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON) || (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON))
    Com_SetTxCyclicProcessingISRLockCounter(Com_GetTxCyclicProcessingISRLockThreshold());
#endif
#if (COM_TXMODEINFO == STD_ON)
    Com_SetTxProcessingISRLockCounter(Com_GetTxProcessingISRLockThreshold());
#endif

    /* #90 Set the component state to INITIALIZED */
    /* Com must be enabled after all subcomponents are initialized */
    Com_SetInitialized(TRUE);
  }

  /* ----- Development Error Report --------------------------------------- */
#if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_PRECOMPILE */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_Init, errorId);
  }
#endif

  COM_DUMMY_STATEMENT(config);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}

/**********************************************************************************************************************
  Com_InitMemory
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_InitMemory(void)
{
  /* #10 Initialize all component _INIT_ variables. */
  Com_SetInitialized(FALSE);
#if(COM_USE_INIT_POINTER == STD_ON)
  Com_ConfigDataPtr = NULL_PTR;
#endif
}

/**********************************************************************************************************************
  Com_DeInit
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_DeInit(void)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
  /** \note COM130 only specifies that the inter-ECU communication shall be stopped */
#if (COM_IPDUGROUPINFO == STD_ON)
    {
      /* #20 Iterate over all ComIPduGroups and stop them by a call of Com_IpduGroupStop (if ComOptimizedIPduGroupHandling is enabled) */
      Com_IpduGroupIdType comIPduGroupId = 0;
      for(; comIPduGroupId < Com_GetSizeOfIPduGroupInfo(); comIPduGroupId++)
      {
# if(COM_INVALIDHNDOFIPDUGROUPINFO == STD_ON)
        if(!Com_IsInvalidHndOfIPduGroupInfo(comIPduGroupId))
# endif
        {
          Com_IpduGroupStop(comIPduGroupId);
        }
      }
    }
#endif
#if ((COM_PDUGRPVECTOR == STD_ON) && ((COM_RXPDUGRPINFO == STD_ON) || (COM_TXPDUGRPINFO == STD_ON)))
    /* #30 Stop all ComIPduGroups by a call of Com_IpduGroupControl (if ComOptimizedIPduGroupHandling is disabled) */
    {
      Com_IpduGroupVector clearIpduGroupVector;
      Com_ClearIpduGroupVector(clearIpduGroupVector);   /* SBSW_COM_FCTCALL_STACKPTR */
      Com_IpduGroupControl(clearIpduGroupVector, FALSE);        /* SBSW_COM_FCTCALL_STACKPTR */
    }
#endif
    Com_SetInitialized(FALSE);
  }

  /* ----- Development Error Report --------------------------------------- */
#if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_DeInit, errorId);
  }
#endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}

#if (COM_PDUGRPVECTOR == STD_ON)
/**********************************************************************************************************************
  Com_IpduGroupControl
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_IpduGroupControl(Com_IpduGroupVector ipduGroupVector, boolean initialize)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
# if ((COM_RXPDUINFO == STD_ON) && (COM_RXPDUGRPINFO == STD_ON))
    {
      /* #30 Update the states of all related Rx ComIPdus */
      Com_IpduGroupControl_UpdateRxComIPduState(ipduGroupVector, initialize);   /* SBSW_COM_PTR_API_VALID_PTR */
    }
# endif
# if ((COM_TXPDUINFO == STD_ON) && (COM_TXPDUGRPINFO == STD_ON))
    {
      /* #40 Iterate over all Tx ComIPdus and set the requested state */
      Com_TxPduInfoIterType ComTxPduId;

      Com_TxIPduGroup_EnterExclusiveArea();

      for(ComTxPduId = 0; ComTxPduId < Com_GetSizeOfTxPduInfo(); ComTxPduId++)
      {
        /* Evaluate requested active state of the I-PDU */
        boolean bRequestedActiveState = Com_IpduGroupControl_EvaluateActiveState(ipduGroupVector, ComTxPduId);  /* SBSW_COM_PTR_API_VALID_PTR */

        /* COM615 For all I-PDUs that do not change their activation state, the function Com_IpduGroupControl shall do nothing. */
        Com_IpduGroupControl_SetRequestedActiveState(ComTxPduId, initialize, bRequestedActiveState);

        Com_TxIPduGroup_ThresholdCheck();
      }

      Com_TxIPduGroup_ExitExclusiveArea();
    }
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_IpduGroupControl, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (COM_PDUGRPVECTOR == STD_ON)
/**********************************************************************************************************************
  Com_ReceptionDMControl
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
/* PRQA  S 3673 1 */ /* MD_Com_3673_AsrProto */
FUNC(void, COM_CODE) Com_ReceptionDMControl(Com_IpduGroupVector ipduGroupVector)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())      /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    errorId = COM_E_UNINIT;
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
# if ((COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON) && (COM_RXPDUGRPINFO == STD_ON))
    {
      {
        /* #20 Iterate over all Rx ComIpdus and set the requested deadline monitoring state */
        PduIdType ComRxPduId;
        for(ComRxPduId = 0; ComRxPduId < Com_GetSizeOfRxPduInfo(); ComRxPduId++)
        {
          /* Evaluate requested active state of the I-PDU */
          Com_RxPduDmStateType bRequestedActiveState = Com_ReceptionDMControl_EvaluateActiveState(ipduGroupVector, ComRxPduId); /* SBSW_COM_PTR_API_VALID_PTR */
          Com_ReceptionDMControl_SetDmState(ComRxPduId, bRequestedActiveState);
        }
      }
    }
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_ReceptionDMControl, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(ipduGroupVector); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (COM_PDUGRPVECTOR == STD_OFF)
/**********************************************************************************************************************
  Com_IpduGroupStart
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_IpduGroupStart(Com_IpduGroupIdType IpduGroupId, boolean Initialize)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )  /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
#  if (COM_IPDUGROUPINFO == STD_ON)     /* COV_COM_VAR_DEPENDENT_SWITCH */
  else if(IpduGroupId >= Com_GetSizeOfIPduGroupInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if(COM_INVALIDHNDOFIPDUGROUPINFO == STD_ON)
  else if(Com_IsInvalidHndOfIPduGroupInfo(IpduGroupId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
# endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
# if (COM_IPDUGROUPINFO == STD_ON)      /* COV_COM_VAR_DEPENDENT_SWITCH */
    /* #30 Iterate over all related SubIPduGroups */
    Com_IPduGroupInfoToSubIPduGroupsIndEndIdxOfIPduGroupInfoType subIpduGroupInd = Com_GetIPduGroupInfoToSubIPduGroupsIndStartIdxOfIPduGroupInfo(IpduGroupId);
    for(; subIpduGroupInd < Com_GetIPduGroupInfoToSubIPduGroupsIndEndIdxOfIPduGroupInfo(IpduGroupId); subIpduGroupInd++)
    {
      Com_IpduGroupIdType subIpduGroupId = (Com_IpduGroupIdType) Com_GetIPduGroupInfoToSubIPduGroupsInd(subIpduGroupInd);
      /* #40 If SubIPduGroup is INACTIVE, activate the SubIPduGroup and start the related Rx and Tx ComIPdus */
      if(Com_GetIPduGroupState(subIpduGroupId) == COM_INACTIVE_IPDUGROUPSTATE)
      {
        Com_SetIPduGroupState(subIpduGroupId, COM_ACTIVE_DMACTIVE_IPDUGROUPSTATE);      /* SBSW_COM_CSL03 */
#  if (COM_RXPDUINFO == STD_ON)
        Com_IpduGroupStartRx(subIpduGroupId, Initialize);
#  endif
#  if (COM_TXPDUINFO == STD_ON)
        Com_IpduGroupStartTx(subIpduGroupId, Initialize);
#  endif
      }
    }
# else
    errorId = COM_E_PARAM;
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_IpduGroupControl, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(IpduGroupId);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(Initialize);      /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (COM_PDUGRPVECTOR == STD_OFF)
/**********************************************************************************************************************
  Com_IpduGroupStop
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_IpduGroupStop(Com_IpduGroupIdType IpduGroupId)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )  /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
#  if (COM_IPDUGROUPINFO == STD_ON)     /* COV_COM_VAR_DEPENDENT_SWITCH */
  else if(IpduGroupId >= Com_GetSizeOfIPduGroupInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if(COM_INVALIDHNDOFIPDUGROUPINFO == STD_ON)
  else if(Com_IsInvalidHndOfIPduGroupInfo(IpduGroupId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
# endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
# if (COM_IPDUGROUPINFO == STD_ON)      /* COV_COM_VAR_DEPENDENT_SWITCH */
    /* #30 Iterate over all related SubIPduGroups and stop them */
    Com_IPduGroupInfoToSubIPduGroupsIndEndIdxOfIPduGroupInfoType subIpduGroupInd = Com_GetIPduGroupInfoToSubIPduGroupsIndStartIdxOfIPduGroupInfo(IpduGroupId);
    for(; subIpduGroupInd < Com_GetIPduGroupInfoToSubIPduGroupsIndEndIdxOfIPduGroupInfo(IpduGroupId); subIpduGroupInd++)
    {
      Com_IpduGroupIdType subIpduGroupId = (Com_IpduGroupIdType) Com_GetIPduGroupInfoToSubIPduGroupsInd(subIpduGroupInd);
      Com_IpduGroupStopSubGroup(subIpduGroupId);
    }
# else
    errorId = COM_E_PARAM;
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_IpduGroupControl, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(IpduGroupId);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (COM_PDUGRPVECTOR == STD_OFF)
/**********************************************************************************************************************
  Com_EnableReceptionDM
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_EnableReceptionDM(Com_IpduGroupIdType IpduGroupId)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )  /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
#  if (COM_IPDUGROUPINFO == STD_ON)     /* COV_COM_VAR_DEPENDENT_SWITCH */
  else if(IpduGroupId >= Com_GetSizeOfIPduGroupInfo())  /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    errorId = COM_E_PARAM;
  }
#   if(COM_INVALIDHNDOFIPDUGROUPINFO == STD_ON)
  else if(Com_IsInvalidHndOfIPduGroupInfo(IpduGroupId)) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
# endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
# if (COM_IPDUGROUPINFO == STD_ON)      /* COV_COM_VAR_DEPENDENT_SWITCH */
#  if (COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON)
    /* #30 Iterate over all related SubIpduGroups and enable the Rx deadline monitoring */
    Com_IPduGroupInfoToSubIPduGroupsIndEndIdxOfIPduGroupInfoType subIpduGroupInd = Com_GetIPduGroupInfoToSubIPduGroupsIndStartIdxOfIPduGroupInfo(IpduGroupId);
    for(; subIpduGroupInd < Com_GetIPduGroupInfoToSubIPduGroupsIndEndIdxOfIPduGroupInfo(IpduGroupId); subIpduGroupInd++)
    {
      Com_IpduGroupIdType subIpduGroupId = (Com_IpduGroupIdType) Com_GetIPduGroupInfoToSubIPduGroupsInd(subIpduGroupInd);
      Com_EnableReceptionDMsubGroup(subIpduGroupId);
    }
#  endif
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_ReceptionDMControl, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(IpduGroupId);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (COM_PDUGRPVECTOR == STD_OFF)
/**********************************************************************************************************************
  Com_DisableReceptionDM
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_DisableReceptionDM(Com_IpduGroupIdType IpduGroupId)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )  /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
#  if (COM_IPDUGROUPINFO == STD_ON)     /* COV_COM_VAR_DEPENDENT_SWITCH */
  else if(IpduGroupId >= Com_GetSizeOfIPduGroupInfo())  /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    errorId = COM_E_PARAM;
  }
#   if(COM_INVALIDHNDOFIPDUGROUPINFO == STD_ON)
  else if(Com_IsInvalidHndOfIPduGroupInfo(IpduGroupId)) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
# endif
  else
  {
# if (COM_IPDUGROUPINFO == STD_ON)      /* COV_COM_VAR_DEPENDENT_SWITCH */
#  if (COM_RXTOUTINFOINDENDIDXOFRXPDUINFO == STD_ON)
    /* ----- Implementation ----------------------------------------------- */
    /* #30 Iterate over all related SubIPduGroups and disable the Rx deadline monitoring */
    Com_IPduGroupInfoToSubIPduGroupsIndEndIdxOfIPduGroupInfoType subIpduGroupInd = Com_GetIPduGroupInfoToSubIPduGroupsIndStartIdxOfIPduGroupInfo(IpduGroupId);
    for(; subIpduGroupInd < Com_GetIPduGroupInfoToSubIPduGroupsIndEndIdxOfIPduGroupInfo(IpduGroupId); subIpduGroupInd++)
    {
      Com_IpduGroupIdType subIpduGroupId = (Com_IpduGroupIdType) Com_GetIPduGroupInfoToSubIPduGroupsInd(subIpduGroupInd);
      Com_DisableReceptionDMsubGroup(subIpduGroupId);
    }
#  endif
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_ReceptionDMControl, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(IpduGroupId);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

/**********************************************************************************************************************
  Com_MainFunctionRx
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_MainFunctionRx(void)
{
#if ((COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)||(COM_RXTOUTINFO == STD_ON))
  /* #10 Check if COM is initialized */
  if(Com_IsInitialized())
  {
# if (COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)
    {
      /* #20 Do deferred processing */
      Com_RxDeferredPduProcessing();
    }
# endif
# if (COM_RXTOUTINFO == STD_ON)
    /* #30 Use Rx deadline monitoring timing domain (if configured) */
#  if(COM_RXDLMONDIVISOR == STD_ON)
    Com_DecRxDlMonDivisorCounter();
    if(Com_GetRxDlMonDivisorCounter() == 0)
#  endif
    {
#  if(COM_RXDLMONDIVISOR == STD_ON)
      Com_SetRxDlMonDivisorCounter(Com_GetRxDlMonDivisor());
#  endif
      /* #40 Do Rx deadline monitoring */
      Com_RxDlMon_MainFunctionRx();
    }
# endif
  }
#endif
}

/**********************************************************************************************************************
  Com_MainFunctionTx
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 ***********************************************************************************************************************/
FUNC(void, COM_CODE) Com_MainFunctionTx(void)
{
#if (COM_TXMODEINFO == STD_ON)
  /* #10 Check if COM is initialized */
  if(Com_IsInitialized())
  {
    /* Tx deadline monitoring */
# if ((COM_GWTIMEOUTINFO == STD_ON) || (COM_TXTOUTINFO == STD_ON))
#  if (COM_TXDLMONDIVISOR == STD_ON)
    /* #20 Use Tx deadline monitoring timing domain */
    Com_DecTxDlMonDivisorCounter();
    if(Com_GetTxDlMonDivisorCounter() == 0)
#  endif
    {
#  if (COM_TXDLMONDIVISOR == STD_ON)
      Com_SetTxDlMonDivisorCounter(Com_GetTxDlMonDivisor());
#  endif
#  if (COM_TXTOUTINFO == STD_ON)
      /* #30 Do Tx deadline monitoring */
      Com_TxDlMon_MainFunctionTx();
#  endif
#  if (COM_GWTIMEOUTINFO == STD_ON)
      /* #40 Handle GwTimeout, if configured. */
      Com_GwTout_HandleCounter();
#  endif
    }
# endif

    /* Tx Counter Handling */
# if (COM_TXCYCLECOUNTERDIVISOR == STD_ON)
    /* #50 Use Tx Mode timing domain */
    Com_DecTxCycleCounterDivisorCounter();
    if(Com_GetTxCycleCounterDivisorCounter() == 0)
# endif
    {
# if (COM_TXCYCLECOUNTERDIVISOR == STD_ON)
      Com_SetTxCycleCounterDivisorCounter(Com_GetTxCycleCounterDivisor());
# endif
# if ((COM_PERIODICOFTXMODETRUE == STD_ON) || (COM_PERIODICOFTXMODEFALSE == STD_ON) || (COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON) || (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON))
      /* #60 Do TxMode processing */
      Com_TxModeHdlr_MainFunctionTx_CycleCounter();
# endif
    }
    /* #70 Process transmit request and initiate transition */
    Com_TxModeHdlr_MainFunctionTx_Transmit();

# if (COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
    /* #80 Process deferred Tx Confirmations */
    Com_TxNHdlr_MainFunctionTx();
# endif
  }
#endif
}

/**********************************************************************************************************************
  Com_GetConfigurationId
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
FUNC(uint32, COM_CODE) Com_GetConfigurationId(void)
{
/* ----- Local Variables ---------------------------------------------- */
  uint32 retVal;
  uint8 errorId = COM_E_NO_ERROR;

/* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
    retVal = 0UL;
  }
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #20 Get current configuration Id */
    retVal = Com_GetConfigId();
  }

  /* ----- Development Error Report --------------------------------------- */
#if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_GetConfigurationId, errorId);
  }
#endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}

/**********************************************************************************************************************
  Com_GetStatus
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
FUNC(Com_StatusType, COM_CODE) Com_GetStatus(void)
{
  /* #10 Return the current COM module status */
  return (Com_IsInitialized()? COM_INIT : COM_UNINIT);
}

#if (COM_VERSION_INFO_API == STD_ON)
/**********************************************************************************************************************
  Com_GetVersionInfo
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, COM_APPL_VAR) versioninfo)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check plausibility of all input parameters */
# if (COM_DEV_ERROR_DETECT == STD_ON )  /* COV_COM_VAR_ELISA_STD_ON_TX */
  if(versioninfo == NULL_PTR)
  {
    errorId = COM_E_PARAM_POINTER;
  }
  else
# endif
  {
    /* #20 Write component data to versioninfo */
    versioninfo->vendorID = COM_VENDOR_ID;      /* SBSW_COM_PTR_API */
    versioninfo->moduleID = COM_MODULE_ID;      /* SBSW_COM_PTR_API */

    versioninfo->sw_major_version = COM_SW_MAJOR_VERSION;       /* SBSW_COM_PTR_API */
    versioninfo->sw_minor_version = COM_SW_MINOR_VERSION;       /* SBSW_COM_PTR_API */
    versioninfo->sw_patch_version = COM_SW_PATCH_VERSION;       /* SBSW_COM_PTR_API */
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_GetVersionInfo, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

/**********************************************************************************************************************
  Com_TriggerIPDUSend
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TriggerIPDUSend(PduIdType PduId)
{
/* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

/* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
#if (COM_DEV_ERROR_DETECT == STD_ON )   /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
# if (COM_TXPDUINFO == STD_ON)
  else if(PduId >= Com_GetSizeOfTxPduInfo())
  {
    errorId = COM_E_PARAM;
  }
#  if (COM_INVALIDHNDOFTXPDUINFO == STD_ON)
  else if(Com_IsInvalidHndOfTxPduInfo(PduId))
  {
    errorId = COM_E_PARAM;
  }
#  endif
# endif
#endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
#if (COM_TXPDUINFO == STD_ON)
    /* #30 Set the deferred transmit flag to initiate a transmission within the Com_MainFunctionTx */
    Com_TxModeHdlr_TriggerIpduSendOnceDeferred(PduId);
#else
    errorId = COM_E_PARAM;
#endif
  }

  /* ----- Development Error Report --------------------------------------- */
#if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_TriggerIPDUSend, errorId);
  }
#endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(PduId);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}

#if (COM_TRIGGER_IPDU_SEND_WITH_META_DATA_API == STD_ON)        /* COV_COM_VAR_ELISA_STD_OFF_XF */
/**********************************************************************************************************************
  Com_TriggerIPDUSendWithMetaData
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TriggerIPDUSendWithMetaData(PduIdType PduId, P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) MetaData)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )
  /* #20 Check plausibility of input parameters */
#  if (COM_TXPDUINFO == STD_ON)
  else if(PduId >= Com_GetSizeOfTxPduInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if (COM_INVALIDHNDOFTXPDUINFO == STD_ON)
  else if(Com_IsInvalidHndOfTxPduInfo(PduId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
  else if(MetaData == NULL_PTR)
  {
    errorId = COM_E_PARAM_POINTER;
  }
# endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
# if (COM_TXBUFFERMETADATAUSEDOFTXPDUINFO == STD_ON)
    /* #30 Copy the passed meta data to the Tx ComIPdu buffer and trigger a deferred transmission */
    P2VAR(uint8, AUTOMATIC, COM_VAR_NOINIT) pTxPduBuffer = Com_GetAddrTxBuffer(Com_GetTxBufferMetaDataStartIdxOfTxPduInfo(PduId));
    uint8_least metaDataLength = Com_GetMetaDataLengthOfTxPduInfo(PduId);
    uint8_least idxMetaData;
    for(idxMetaData = 0; idxMetaData < metaDataLength; idxMetaData++)
    {
      pTxPduBuffer[idxMetaData] = MetaData[idxMetaData];
    }
    Com_TxModeHdlr_TriggerIpduSendOnceDeferred(PduId);
# else
    errorId = COM_E_PARAM;
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_TriggerIPDUSendWithMetaData, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(PduId);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(MetaData);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (COM_PDUGRPVECTOR == STD_ON)
/**********************************************************************************************************************
  Com_ClearIpduGroupVector
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_ClearIpduGroupVector(Com_IpduGroupVector ipduGroupVector)
{
  VStdMemSet(&ipduGroupVector[0], 0U, COM_LMGT_MAXIPDUGROUPVECTORBYTECNT);      /* SBSW_COM_PTR_API_VALID_PTR */
}
#endif

#if (COM_PDUGRPVECTOR == STD_ON)
/**********************************************************************************************************************
  Com_SetIpduGroup
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_SetIpduGroup(Com_IpduGroupVector ipduGroupVector, Com_IpduGroupIdType ipduGroupId, boolean bitval)
{
  /* ----- Local Variables ---------------------------------------------- */

  uint8 errorId = COM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )  /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
  else if(ipduGroupId > COM_SUPPORTED_IPDU_GROUPS)
  {
    errorId = COM_E_PARAM;
  }
# endif
  else
  {
    /* #30 If the passed ComIPduGroup shall be disabled, disable the ComIPduGroup within the passed ComIPduGroup vector */
    if((bitval) == FALSE)
    {
      (ipduGroupVector)[(ipduGroupId) >> 3] &=  /* SBSW_COM_PTR_API_VALID_PTR */
        COM_CAST2UINT8(~(COM_CAST2UINT8(1U << ((ipduGroupId) & (Com_IpduGroupIdType) 7U))));
    }
    /* #40 Otherwise enable the ComIPduGroup within the passed ComIPduGroup vector */
    else
    {
      (ipduGroupVector)[(ipduGroupId) >> 3] |=  /* SBSW_COM_PTR_API_VALID_PTR */
        COM_CAST2UINT8(1U << ((ipduGroupId) & (Com_IpduGroupIdType) 7U));
    }
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_SetIpduGroup, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (COM_COMMUNICATION_INTERFACE == STD_ON)     /* COV_COM_VAR_ELISA_STD_ON_TX */
/**********************************************************************************************************************
  Com_RxIndication
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_RxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */

  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )  /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
#  if (COM_RXPDUINFO == STD_ON)
  else if(RxPduId >= Com_GetSizeOfRxPduInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if(COM_INVALIDHNDOFRXPDUINFO == STD_ON)
  else if(Com_IsInvalidHndOfRxPduInfo(RxPduId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
  else if(PduInfoPtr == NULL_PTR)
  {
    errorId = COM_E_PARAM_POINTER;
  }
  else if((PduInfoPtr->SduDataPtr == NULL_PTR) && (PduInfoPtr->SduLength > 0))
  {
    errorId = COM_E_PARAM_POINTER;
  }
# endif
  else
  {
# if (COM_RXPDUINFO == STD_ON)
    /* ----- Implementation ----------------------------------------------- */
    /* #30 Do Rx Indication processing */
    Com_RxIndication_Processing(RxPduId, PduInfoPtr);   /* SBSW_COM_FCTCALL_WITH_P2CONST */
# else
    errorId = COM_E_PARAM;
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_RxIndication, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(RxPduId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT_CONST(PduInfoPtr);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (COM_TRANSPORT_PROTOCOL == STD_ON)  /* COV_COM_VAR_ELISA_STD_OFF_XF */
/**********************************************************************************************************************
  Com_CopyRxData
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
/* PRQA  S 3673 1 */ /* MD_Com_3673_AsrProto */
FUNC(BufReq_ReturnType, COM_CODE) Com_CopyRxData(PduIdType PduId, CONSTP2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPointer, P2VAR(PduLengthType, AUTOMATIC, COM_APPL_VAR) RxBufferSizePtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  BufReq_ReturnType bufReq_status = BUFREQ_E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )
  /* #20 Check plausibility of input parameters */
#  if (COM_RXPDUINFO == STD_ON)
  else if(PduId >= Com_GetSizeOfRxPduInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if (COM_INVALIDHNDOFRXPDUINFO == STD_ON)
  else if(Com_IsInvalidHndOfRxPduInfo(PduId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#   if (COM_EXISTS_NORMAL_TYPEOFRXPDUINFO == STD_ON)
  else if(Com_GetTypeOfRxPduInfo(PduId) == COM_NORMAL_TYPEOFRXPDUINFO)  /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
  else if(PduInfoPointer == NULL_PTR)
  {
    errorId = COM_E_PARAM_POINTER;
  }
  else if(RxBufferSizePtr == NULL_PTR)
  {
    errorId = COM_E_PARAM_POINTER;
  }
  else if(!Com_IsRxPduGrpActive(PduId))
  {
    errorId = COM_SERVICE_NOT_AVAILABLE;
  }
# endif
  else
  {
# if (COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON)
    /* ----- Implementation ----------------------------------------------- */
    Com_RxTpInfoIdxOfRxPduInfoType rxTpPduInfoIdx = Com_GetRxTpInfoIdxOfRxPduInfo(PduId);
    /* #30 If the transmission was just started and no bytes were copied jet, set the Rx Tp ComIPdu state to COPYING */
    if((Com_GetRxTpWrittenBytesCounter(rxTpPduInfoIdx) == 0) && (Com_GetRxTpConnectionState(rxTpPduInfoIdx) == COM_RECEPTION_STARTED_RXTPCONNECTIONSTATE))
    {
      Com_SetRxTpConnectionState(rxTpPduInfoIdx, COM_COPYING_RXTPCONNECTIONSTATE);      /* SBSW_COM_CSL02 */
    }
    /* #40 If the current Rx Tp ComIPdu state is COPYING AND the passed data fits into the buffer */
    if(Com_GetRxTpConnectionState(rxTpPduInfoIdx) == COM_COPYING_RXTPCONNECTIONSTATE)
    {
      if(PduInfoPointer->SduLength <= (Com_GetRxTpSduLength(rxTpPduInfoIdx) - Com_GetRxTpWrittenBytesCounter(rxTpPduInfoIdx)))
      {
        /* #50 Copy the passed bytes to the buffer, update the written bytes counter and set the passed RxBufferSizePtr value to the remaining receive buffer size */
        VStdMemCpyRamToRam(Com_GetAddrRxTpBuffer(Com_GetRxTpBufferStartIdxOfRxTpInfo(rxTpPduInfoIdx) + Com_GetRxTpWrittenBytesCounter(rxTpPduInfoIdx)), PduInfoPointer->SduDataPtr, PduInfoPointer->SduLength); /* SBSW_COM_WRITEACCESS_STACKPTR_CONFIG_LENGTH */
        Com_SetRxTpWrittenBytesCounter(rxTpPduInfoIdx, (Com_GetRxTpWrittenBytesCounter(rxTpPduInfoIdx) + PduInfoPointer->SduLength));   /* SBSW_COM_CSL02 */
        *RxBufferSizePtr = (Com_GetBufferSizeOfRxTpInfo(rxTpPduInfoIdx) - Com_GetRxTpWrittenBytesCounter(rxTpPduInfoIdx));      /* SBSW_COM_PTR_API */

        /* #60 If the expected amount of bytes is received, set Rx Tp ComIPdu state to WAITING_FOR_INDICATION */
        if(Com_GetRxTpSduLength(rxTpPduInfoIdx) == Com_GetRxTpWrittenBytesCounter(rxTpPduInfoIdx))
        {
          Com_SetRxTpConnectionState(rxTpPduInfoIdx, COM_WAITING_FOR_INDICATION_RXTPCONNECTIONSTATE);   /* SBSW_COM_CSL02 */
        }
        bufReq_status = BUFREQ_OK;
      }
      else
      {
        errorId = COM_E_PARAM;
      }
    }
    /* #70 Otherwise set the Rx Tp ComIPdu state to READY */
    else
    {
      Com_SetRxTpConnectionState(rxTpPduInfoIdx, COM_READY_RXTPCONNECTIONSTATE);        /* SBSW_COM_CSL02 */
      errorId = COM_E_PARAM;
    }
# else
    errorId = COM_E_PARAM;
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_CopyRxData, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(PduId);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(RxBufferSizePtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT_CONST(PduInfoPointer);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return bufReq_status;
}       /* PRQA S 6080, 6030 */ /* MD_MSR_STMIF, MD_MSR_STCYC */
#endif

#if (COM_TRANSPORT_PROTOCOL == STD_ON)  /* COV_COM_VAR_ELISA_STD_OFF_XF */
/**********************************************************************************************************************
  Com_StartOfReception
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, COM_CODE) Com_StartOfReception(PduIdType ComRxPduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) TpSduInfoPtr, PduLengthType TpSduLength,
                                                       P2VAR(PduLengthType, AUTOMATIC, COM_APPL_VAR) RxBufferSizePtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  BufReq_ReturnType bufReq_status = BUFREQ_E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */

  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )
  /* #20 Check plausibility of input parameters */
#  if (COM_RXPDUINFO == STD_ON)
  else if(ComRxPduId >= Com_GetSizeOfRxPduInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if (COM_INVALIDHNDOFRXPDUINFO == STD_ON)
  else if(Com_IsInvalidHndOfRxPduInfo(ComRxPduId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#   if (COM_EXISTS_NORMAL_TYPEOFRXPDUINFO == STD_ON)
  else if(Com_GetTypeOfRxPduInfo(ComRxPduId) == COM_NORMAL_TYPEOFRXPDUINFO)     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
  else if(RxBufferSizePtr == NULL_PTR)
  {
    errorId = COM_E_PARAM_POINTER;
  }
  else if(!Com_IsRxPduGrpActive(ComRxPduId))
  {
    errorId = COM_SERVICE_NOT_AVAILABLE;
  }
# endif
  else
  {
# if (COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON)
    /* ----- Implementation ----------------------------------------------- */
    Com_RxTpInfoIdxOfRxPduInfoType rxTpPduInfoIdx = Com_GetRxTpInfoIdxOfRxPduInfo(ComRxPduId);
    /* #30 If the current state of the passed Rx Tp ComIPdu is READY */
    if(Com_GetRxTpConnectionState(rxTpPduInfoIdx) == COM_READY_RXTPCONNECTIONSTATE)
    {
      /* #40 If the passed TpSduLength fits into the current available buffer */
      if(TpSduLength <= (Com_GetBufferSizeOfRxTpInfo(rxTpPduInfoIdx) - Com_GetRxTpWrittenBytesCounter(rxTpPduInfoIdx)))
      {
        /* #50 Store the passed TpSduLength, set the passed RxBufferSizePtr to the available buffer size and set the Rx Tp ComIPdu state to RECEPTION_STARTED */
        Com_SetRxTpSduLength(rxTpPduInfoIdx, TpSduLength);      /* SBSW_COM_CSL02 */
        *RxBufferSizePtr = Com_GetBufferSizeOfRxTpInfo(rxTpPduInfoIdx) - Com_GetRxTpWrittenBytesCounter(rxTpPduInfoIdx);        /* SBSW_COM_PTR_API */
        Com_SetRxTpConnectionState(rxTpPduInfoIdx, COM_RECEPTION_STARTED_RXTPCONNECTIONSTATE);  /* SBSW_COM_CSL02 */

        bufReq_status = BUFREQ_OK;
      }
      /* #60 Otherwise set the passed RxBufferSizePtr to the available buffer size */
      else
      {
        *RxBufferSizePtr = Com_GetBufferSizeOfRxTpInfo(rxTpPduInfoIdx) - Com_GetRxTpWrittenBytesCounter(rxTpPduInfoIdx);        /* SBSW_COM_PTR_API */
        errorId = COM_E_PARAM;
        bufReq_status = BUFREQ_E_OVFL;
      }
    }
    /* #70 Otherwise set the Rx Tp ComIPdu state to READY */
    else
    {
      Com_SetRxTpConnectionState(rxTpPduInfoIdx, COM_READY_RXTPCONNECTIONSTATE);        /* SBSW_COM_CSL02 */
      errorId = COM_E_PARAM;
    }
# else
    errorId = COM_E_PARAM;
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_StartOfReception, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(ComRxPduId);      /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(TpSduInfoPtr);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(TpSduLength);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(RxBufferSizePtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return bufReq_status;
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (COM_TRANSPORT_PROTOCOL == STD_ON)  /* COV_COM_VAR_ELISA_STD_OFF_XF */
/**********************************************************************************************************************
  Com_TpRxIndication
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TpRxIndication(PduIdType PduId, Std_ReturnType Result)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )
  /* #20 Check plausibility of input parameters */
#  if(COM_RXPDUINFO == STD_ON)
  else if(PduId >= Com_GetSizeOfRxPduInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if (COM_INVALIDHNDOFRXPDUINFO == STD_ON)
  else if(Com_IsInvalidHndOfRxPduInfo(PduId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#   if (COM_EXISTS_NORMAL_TYPEOFRXPDUINFO == STD_ON)
  else if(Com_GetTypeOfRxPduInfo(PduId) == COM_NORMAL_TYPEOFRXPDUINFO)  /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
# endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
# if(COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON)
    /* #30 Process the passed Rx Tp ComIPdu */
    Com_TpRxIndication_Processing(PduId, Result);
# else
    errorId = COM_E_PARAM;
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_TpRxIndication, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(PduId);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(Result);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (COM_RECEIVE_SIGNAL_MACRO_API == STD_OFF)   /* COV_COM_VAR_ELISA_STD_OFF_TX */
/**********************************************************************************************************************
  Com_ReceiveSignal
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(uint8, COM_CODE) Com_ReceiveSignal(Com_SignalIdType SignalId, P2VAR(void, AUTOMATIC, COM_APPL_VAR) SignalDataPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  uint8 retVal = COM_SERVICE_NOT_AVAILABLE;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON)   /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
#  if (COM_RXACCESSINFO == STD_ON)
  else if(SignalId >= Com_GetSizeOfRxAccessInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if (COM_INVALIDHNDOFRXACCESSINFO == STD_ON)
  else if(Com_IsInvalidHndOfRxAccessInfo(SignalId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
  else if(SignalDataPtr == NULL_PTR)
  {
    errorId = COM_E_PARAM_POINTER;
  }
# endif
  else
  {
# if (COM_RXACCESSINFO == STD_ON)
    /* ----- Implementation ----------------------------------------------- */
#  if ((COM_BUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO == STD_ON))
    /* #30 Copy the stored ComSignal value to the passed SignalDataPtr */
    retVal = Com_ReceiveSignal_GetRxSigBuffer(SignalId, SignalDataPtr); /* SBSW_COM_PTR_API */
#  else
    retVal = E_OK;
#  endif

    /* #40 If the related ComIPduGroup is stopped, COM_SERVICE_NOT_AVAILABLE will be returned */
    if(!Com_IsRxPduGrpActive(Com_GetRxPduInfoIdxOfRxAccessInfo(SignalId)))
    {
      retVal = COM_SERVICE_NOT_AVAILABLE;
    }
# else
    errorId = COM_E_PARAM;
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_ReceiveSignal, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalDataPtr);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (COM_TRANSPORT_PROTOCOL == STD_ON)  /* COV_COM_VAR_ELISA_STD_OFF_XF */
/**********************************************************************************************************************
  Com_ReceiveDynSignal
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(uint8, COM_CODE) Com_ReceiveDynSignal(Com_SignalIdType SignalId, P2VAR(void, AUTOMATIC, COM_APPL_VAR) SignalDataPtr, P2VAR(uint16, AUTOMATIC, COM_APPL_VAR) Length)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  uint8 retVal = COM_SERVICE_NOT_AVAILABLE;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
  /* #20 Check plausibility of input parameters */
# if (COM_DEV_ERROR_DETECT == STD_ON )
#  if (COM_RXACCESSINFO == STD_ON)
  else if(SignalId >= Com_GetSizeOfRxAccessInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if (COM_INVALIDHNDOFRXACCESSINFO == STD_ON)
  else if(Com_IsInvalidHndOfRxAccessInfo(SignalId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
#  if (COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO == STD_ON)
  else if(Com_GetApplTypeOfRxAccessInfo(SignalId) != COM_UINT8_DYN_APPLTYPEOFRXACCESSINFO)
  {
    errorId = COM_E_PARAM;
  }
#  endif
#  if (COM_EXISTS_NORMAL_TYPEOFRXPDUINFO == STD_ON)
  else if(Com_GetTypeOfRxPduInfo(Com_GetRxPduInfoIdxOfRxAccessInfo(SignalId)) == COM_NORMAL_TYPEOFRXPDUINFO)
  {
    errorId = COM_E_PARAM;
  }
#  endif
  else if(SignalDataPtr == NULL_PTR)
  {
    errorId = COM_E_PARAM_POINTER;
  }
  else if(Length == NULL_PTR)
  {
    errorId = COM_E_PARAM_POINTER;
  }
# endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
# if ((COM_RXTPINFOUSEDOFRXPDUINFO == STD_ON) && (COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO == STD_ON))
    Com_RxPduInfoIdxOfRxAccessInfoType ComPduId = Com_GetRxPduInfoIdxOfRxAccessInfo(SignalId);
    /* #30 If the dynamic ComSignal fits into the passed buffer */

    Com_RxTpInfoIdxOfRxPduInfoType rxTpPduInfoIdx = Com_GetRxTpInfoIdxOfRxPduInfo(ComPduId);
    PduLengthType dynSignalLength = Com_GetRxDynSignalLength(rxTpPduInfoIdx);
    if(*Length >= dynSignalLength)
    {
      /* #40 Copy the dynamic ComSignal value to the passed signal data location and set the passed Length pointer to the current dynamic ComSignal length */
      SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
      VStdMemCpyRamToRam((P2VAR(uint8, AUTOMATIC, COM_APPL_VAR)) SignalDataPtr, Com_GetAddrRxSigBufferArrayBased(Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(SignalId)), dynSignalLength); /* SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH */
      *Length = (uint16) dynSignalLength;
      SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
      if(Com_IsRxPduGrpActive(ComPduId))
      {
        retVal = E_OK;
      }
    }
    else
    {
      errorId = COM_E_PARAM;
      *Length = (uint16) dynSignalLength;
      retVal = E_NOT_OK;
    }
# else
    errorId = COM_E_PARAM;
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_ReceiveDynSignal, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalDataPtr);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(Length);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (COM_ENABLE_SIGNAL_GROUP_ARRAY_API == STD_ON)
/**********************************************************************************************************************
  Com_ReceiveSignalGroupArray
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(uint8, COM_CODE) Com_ReceiveSignalGroupArray(Com_SignalGroupIdType SignalGroupId, P2VAR(uint8, AUTOMATIC, COM_APPL_VAR) SignalGroupArrayPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  uint8 retVal = COM_SERVICE_NOT_AVAILABLE;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )  /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
#  if(COM_RXSIGGRPINFO == STD_ON)
  else if(SignalGroupId >= Com_GetSizeOfRxSigGrpInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if(COM_INVALIDHNDOFRXSIGGRPINFO == STD_ON)
  else if(Com_IsInvalidHndOfRxSigGrpInfo(SignalGroupId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
  else if(SignalGroupArrayPtr == NULL_PTR)      /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    errorId = COM_E_PARAM_POINTER;
  }
# endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
# if(COM_ARRAYACCESSUSEDOFRXSIGGRPINFO == STD_ON)
    /* #30 Initiate the reception of the signal group array */
    Com_RxPduInfoIdxOfRxSigGrpInfoType ComPduId = Com_GetRxPduInfoIdxOfRxSigGrpInfo(SignalGroupId);
    Com_RxSigBufferUInt8IterType idxShdBufferIdx = Com_GetRxSigBufferUInt8StartIdxOfRxSigGrpInfo(SignalGroupId);

    /* #40 If the belonging RxPduGroup is active, set the return value to E_OK */
    if(Com_IsRxPduGrpActive(ComPduId))
    {
      retVal = E_OK;
    }
    /* #50 Enter exclusive area */
    SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
    {
      /* #60 copy data from shadow buffer to the signal group array */
      VStdMemCpyRamToRam(SignalGroupArrayPtr, Com_GetAddrRxSigBufferUInt8(idxShdBufferIdx), Com_GetRxSigBufferUInt8LengthOfRxSigGrpInfo(SignalGroupId));        /* SBSW_COM_CSL01 */
    }
    /* #70 Exit exclusive area */
    SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
# else
    errorId = COM_E_PARAM;
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_ReceiveSignalGroupArray, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalGroupId);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalGroupArrayPtr);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

/**********************************************************************************************************************
  Com_ReceiveSignalGroup
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(uint8, COM_CODE) Com_ReceiveSignalGroup(Com_SignalGroupIdType SignalGroupId)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  uint8 retVal = COM_SERVICE_NOT_AVAILABLE;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
#if (COM_DEV_ERROR_DETECT == STD_ON )   /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
# if(COM_RXSIGGRPINFO == STD_ON)
  else if(SignalGroupId >= Com_GetSizeOfRxSigGrpInfo())
  {
    errorId = COM_E_PARAM;
  }
#  if(COM_INVALIDHNDOFRXSIGGRPINFO == STD_ON)
  else if(Com_IsInvalidHndOfRxSigGrpInfo(SignalGroupId))
  {
    errorId = COM_E_PARAM;
  }
#  endif
# endif
#endif
  else
  {
#if(COM_RXSIGGRPINFO == STD_ON)
    /* ----- Implementation ----------------------------------------------- */
    Com_RxPduInfoIdxOfRxSigGrpInfoType ComPduId = Com_GetRxPduInfoIdxOfRxSigGrpInfo(SignalGroupId);
    retVal = E_OK;

    /* #30 If the related ComIPduGroup is stopped, COM_SERVICE_NOT_AVAILABLE will be returned */
    if(!Com_IsRxPduGrpActive(ComPduId)) /* COV_COM_ONLYARRAYACCESS_PRESENT */
    {
      retVal = COM_SERVICE_NOT_AVAILABLE;
    }

# if ((COM_SHDBUFFERUSEDOFRXACCESSINFO == STD_ON) || (COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO == STD_ON))
    SchM_Enter_Com_COM_EXCLUSIVE_AREA_RX();
    /* #40 Read the Rx ComSignalGroup data */
    {
      Com_ReadSignalGroupData(SignalGroupId);
    }
    SchM_Exit_Com_COM_EXCLUSIVE_AREA_RX();
# endif
#else
    errorId = COM_E_PARAM;
#endif
  }

  /* ----- Development Error Report --------------------------------------- */
#if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_ReceiveSignalGroup, errorId);
  }
#endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalGroupId);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}

#if (COM_MAIN_FUNCTION_ROUTE_SIGNALS_API == STD_ON)
/**********************************************************************************************************************
  Com_MainFunctionRouteSignals
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_MainFunctionRouteSignals(void)
{
  if(Com_IsInitialized())
  {
    /* #10 Do description routing, if GENERATED_DESCRIPTION_ROUTING is on use the generated description routing function, otherwise use the static function */
# if (COM_GENERATED_DESCRIPTION_ROUTING == STD_ON)      /* COV_COM_VAR_ELISA_STD_OFF_XF */
    Com_RxGwMainFunctionRoute();
# elif (COM_GWEVENTCACHE == STD_ON)
    Com_MainFunction_GwDescription();
# endif

# if (COM_GWINFO == STD_ON)
    {
      Com_GwInfoIterType idxGwInfo;

      Com_SignalGw_EnterExclusiveArea();
      /* #20 Iterate over all gateway event flags */
      for(idxGwInfo = 0; idxGwInfo < Com_GetSizeOfGwInfo(); idxGwInfo++)
      {
        /* #30 If a gateway event flag is set */
        if(Com_IsGwEvent(idxGwInfo))
        {
          Com_SetGwEvent(idxGwInfo, FALSE);     /* SBSW_COM_CSL02 */

#  if (COM_GWSIGMAPPINGENDIDXOFGWINFO == STD_ON)
          /* #40 Do normal signal routings */
          Com_MainFunction_SignalRoutings(idxGwInfo);
#  endif

#  if (COM_GWSIGGRPMAPPINGENDIDXOFGWINFO == STD_ON)
          /* #50 Do normal signal group routings */
          Com_MainFunction_SignalGroupRoutings(idxGwInfo);
#  endif
        }
        Com_SignalGw_ThresholdCheck();
      }
      Com_SignalGw_ExitExclusiveArea();
    }
# endif
  }
}
#endif

#if (COM_GWINFO == STD_ON)
/* jet: ComISRThreshold snippet */
/**********************************************************************************************************************
  Com_SignalGw_EnterExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_EnterExclusiveArea(void)
{
  /* #10 Enter the gw signal routing exclusive area */
  SchM_Enter_Com_COM_EXCLUSIVE_AREA_BOTH();
}

/**********************************************************************************************************************
  Com_SignalGw_ExitExclusiveArea
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_ExitExclusiveArea(void)
{
  /* #05 Reload the counter with the threshold value */
  Com_SetGatewayProcessingISRLockCounter(Com_GetGatewayProcessingISRLockThreshold());
  /* #10 Exit the gw signal routing exclusive area */
  SchM_Exit_Com_COM_EXCLUSIVE_AREA_BOTH();
}

/**********************************************************************************************************************
  Com_SignalGw_ThresholdCheck
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, COM_CODE) Com_SignalGw_ThresholdCheck(void)
{
  if(Com_GetGatewayProcessingISRLockCounter() > 0)      /* COV_COM_THRESHOLD_TX */
  {
    Com_DecGatewayProcessingISRLockCounter();
  }
  else
  {
    Com_SignalGw_ExitExclusiveArea();
    Com_SignalGw_EnterExclusiveArea();
  }
}

#endif

#if (COM_GWTIMEOUTINFO == STD_ON)
/**********************************************************************************************************************
  Com_GwTout_Event
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_GwTout_Event(PduIdType ComTxPduId)
{
  /* #10 If the passed ComIPdu has a configured gateway timeout and the Tx ComIPdu is active */
  if(Com_IsTxPduGrpActive((PduIdType) ComTxPduId))
  {
    if(Com_IsGwTimeoutInfoUsedOfTxPduInfo(ComTxPduId))  /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      /* #20 If the current tx mode is periodic */
      Com_GwTimeoutInfoIdxOfTxPduInfoType gwToutId = Com_GetGwTimeoutInfoIdxOfTxPduInfo(ComTxPduId);
      if(Com_TxModeHdlr_IsPeriodicTxMode(ComTxPduId) == TRUE)   /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        /* #30 If the gateway timeout occurred (gateway timeout counter value == 0), start the cyclic transmission of the passed Tx ComIPdu */
        if(Com_GwTout_TimeoutHasOccurred(gwToutId))
        {
          Com_TxModeHdlr_StartCyclicTransmission(ComTxPduId);
        }
        /* #40 Reload the gateway timeout counter with the gateway timeout factor */
        Com_SetGwRoutingTimeoutCounter(gwToutId, Com_GetGwRoutingTimeoutFactorOfGwTimeoutInfo(gwToutId));       /* SBSW_COM_CSL02 */
      }
      /* #50 Otherwise set the gateway routing timeout to 0 */
      else
      {
        Com_SetGwRoutingTimeoutCounter(gwToutId, 0);    /* SBSW_COM_CSL02 */
      }
    }
  }
}
#endif

/**********************************************************************************************************************
  Com_InvalidateSignal
 **********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 **********************************************************************************************************************/
FUNC(uint8, COM_CODE) Com_InvalidateSignal(Com_SignalIdType SignalId)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  uint8 retVal = COM_SERVICE_NOT_AVAILABLE;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
#if (COM_DEV_ERROR_DETECT == STD_ON )   /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
# if (COM_TXSIGINFO == STD_ON )
  else if(SignalId >= Com_GetSizeOfTxSigInfo()) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    errorId = COM_E_PARAM;
  }
#  if (COM_INVALIDHNDOFTXSIGINFO == STD_ON)
  else if(Com_IsInvalidHndOfTxSigInfo(SignalId))        /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    errorId = COM_E_PARAM;
  }
#  endif
# endif
#endif
  else
  {
#if (COM_INVVALUEUSEDOFTXSIGINFO == STD_ON)
    SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();
    /* ----- Implementation ----------------------------------------------- */
    /* #30 If the passed ComSignal has an configured invalid value, set the value of the passed ComSignal to the invalid value */
    retVal = Com_InvalidateSignal_SendSignal(SignalId);
    SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
#else
    errorId = COM_E_PARAM;
#endif
  }

  /* ----- Development Error Report --------------------------------------- */
#if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_InvalidateSignal, errorId);
  }
#endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}

/**********************************************************************************************************************
  Com_InvalidateSignalGroup
 **********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 **********************************************************************************************************************/
FUNC(uint8, COM_CODE) Com_InvalidateSignalGroup(Com_SignalGroupIdType SignalGroupId)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  uint8 retVal = COM_SERVICE_NOT_AVAILABLE;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
#if (COM_DEV_ERROR_DETECT == STD_ON )   /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
# if (COM_TXSIGGRPINFO == STD_ON )
  else if(SignalGroupId >= Com_GetSizeOfTxSigGrpInfo()) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    errorId = COM_E_PARAM;
  }
#  if (COM_INVALIDHNDOFTXSIGGRPINFO == STD_ON)
  else if(Com_IsInvalidHndOfTxSigGrpInfo(SignalGroupId))        /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    errorId = COM_E_PARAM;
  }
#  endif
# endif
#endif
  else
  {
#if (COM_TXSIGINFOINVVALUEINDENDIDXOFTXSIGGRPINFO == STD_ON )
    /* ----- Implementation ----------------------------------------------- */
    /* #30 Iterate overall ComGroupSignal of the passed ComSignalGroup and set the ComGroupSignal value to the invalid value */
    Com_TxSigInfoInvValueIndEndIdxOfTxSigGrpInfoType idxTxSigInfoInvValueInd = Com_GetTxSigInfoInvValueIndStartIdxOfTxSigGrpInfo(SignalGroupId);
    for(; idxTxSigInfoInvValueInd < Com_GetTxSigInfoInvValueIndEndIdxOfTxSigGrpInfo(SignalGroupId); idxTxSigInfoInvValueInd++)
    {
      Com_SignalIdType idxTxSigInfo = (Com_SignalIdType) Com_GetTxSigInfoInvValueInd(idxTxSigInfoInvValueInd);

      SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();

      (void) Com_InvalidateSignal_SendSignal(idxTxSigInfo);

      SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
    }
    /* #40 Call Com_SendSignalGroup to copy the invalid values form the shadow buffer to the tx pdu buffer */
    retVal = Com_SendSignalGroup(SignalGroupId);
#else
    errorId = COM_E_PARAM;
#endif
  }

  /* ----- Development Error Report --------------------------------------- */
#if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_InvalidateSignalGroup, errorId);
  }
#endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalGroupId);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}

#if (COM_TX_CONFIRMATION_API == STD_ON)
/**********************************************************************************************************************
  Com_TxConfirmation
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TxConfirmation(PduIdType TxPduId)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )  /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
#  if (COM_TXPDUINFO == STD_ON) /* COV_COM_VAR_DEPENDENT_SWITCH */
  else if(TxPduId >= Com_GetSizeOfTxPduInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if (COM_INVALIDHNDOFTXPDUINFO == STD_ON)
  else if(Com_IsInvalidHndOfTxPduInfo(TxPduId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
# endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #30 Do confirmation processing */
    Com_TxConfirmation_Process(TxPduId);
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_TxConfirmation, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(TxPduId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (COM_TRANSPORT_PROTOCOL == STD_ON)  /* COV_COM_VAR_ELISA_STD_OFF_XF */
/**********************************************************************************************************************
  Com_CopyTxData
**********************************************************************************************************************/
/*! Internal comment removed.
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
**********************************************************************************************************************/
/* PRQA  S 3673 1 */ /* MD_Com_3673_AsrProto */
FUNC(BufReq_ReturnType, COM_CODE) Com_CopyTxData(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) PduInfoPtr, P2VAR(RetryInfoType, AUTOMATIC, COM_APPL_VAR) RetryInfoPtr,
                                                 P2VAR(PduLengthType, AUTOMATIC, COM_APPL_VAR) TxDataCntPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )
  /* #20 Check plausibility of input parameters */
#  if (COM_TXPDUINFO == STD_ON)
  else if(PduId >= Com_GetSizeOfTxPduInfo())
  {
    errorId = COM_E_PARAM_POINTER;
  }
#   if (COM_INVALIDHNDOFTXPDUINFO == STD_ON)
  else if(Com_IsInvalidHndOfTxPduInfo(PduId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#   if (COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON)
  else if(!Com_IsTxTpInfoUsedOfTxPduInfo(PduId))        /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
  else if(PduInfoPtr == NULL_PTR)
  {
    errorId = COM_E_PARAM_POINTER;
  }
  else if(TxDataCntPtr == NULL_PTR)
  {
    errorId = COM_E_PARAM_POINTER;
  }
# endif
  else if(!Com_IsTxPduGrpActive(PduId))
  {
    errorId = COM_SERVICE_NOT_AVAILABLE;
  }
  else
  {
# if (COM_TXTPINFOIDXOFTXPDUINFO == STD_ON)
    /* ----- Implementation ----------------------------------------------- */
    Com_TxTpInfoIdxOfTxPduInfoType txTpPduInfoIdx = Com_GetTxTpInfoIdxOfTxPduInfo(PduId);
    /* #30 If it is the first Com_CopyTxData call of a segmented transmission set the state to COPYING */
    if((Com_GetTxTpConnectionState(txTpPduInfoIdx) == COM_TRANSMISSION_STARTED_TXTPCONNECTIONSTATE) && (Com_GetTxTpWrittenBytesCounter(txTpPduInfoIdx) == 0))
    {
      Com_SetTxTpConnectionState(txTpPduInfoIdx, COM_COPYING_TXTPCONNECTIONSTATE);      /* SBSW_COM_CSL02 */
    }
    /* #40 If connection is in COPYING state */
    if(Com_GetTxTpConnectionState(txTpPduInfoIdx) == COM_COPYING_TXTPCONNECTIONSTATE)
    {
      /* #50 If passed SduLength fits in Tx PDU buffer */
      if(PduInfoPtr->SduLength <= (Com_GetTxSduLength(PduId) - Com_GetTxTpWrittenBytesCounter(txTpPduInfoIdx)))
      {
        /* #60 Copy the provided data segment to the Tx PDU buffer and increment the WrittenBytesCouter by the passed SduLength */
        VStdMemCpyRamToRam(PduInfoPtr->SduDataPtr, Com_GetAddrTxBuffer(Com_GetTxBufferStartIdxOfTxTpInfo(txTpPduInfoIdx) + Com_GetTxTpWrittenBytesCounter(txTpPduInfoIdx)), PduInfoPtr->SduLength);     /* SBSW_COM_MEM_CPY_RAM2RAM */
        Com_SetTxTpWrittenBytesCounter(txTpPduInfoIdx, (Com_GetTxTpWrittenBytesCounter(txTpPduInfoIdx) + PduInfoPtr->SduLength));       /* SBSW_COM_CSL02 */

        /* #70 Set the passed TxDataCntPtr to number of remaining bytes in the Tx PDU buffer */
        *TxDataCntPtr = (Com_GetTxSduLength(PduId) - Com_GetTxTpWrittenBytesCounter(txTpPduInfoIdx));   /* SBSW_COM_PTR_API */

        /* #80 If all bytes are transmitted set the state to WAITING_FOR_CONFIRMATION */
        if(0 == *TxDataCntPtr)
        {

          Com_SetTxTpConnectionState(txTpPduInfoIdx, COM_WAITING_FOR_CONFIRMATION_TXTPCONNECTIONSTATE); /* SBSW_COM_CSL02 */
        }
        retVal = BUFREQ_OK;
      }
      /* #90 Otherwise set the passed TxDataCntPtr to number of remaining bytes in the Tx PDU buffer */
      else
      {
        *TxDataCntPtr = (Com_GetTxSduLength(PduId) - Com_GetTxTpWrittenBytesCounter(txTpPduInfoIdx));   /* SBSW_COM_PTR_API */
        errorId = COM_E_PARAM;
      }
    }
    /* #100 Otherwise set the state to READY */
    else
    {
      Com_SetTxTpConnectionState(txTpPduInfoIdx, COM_READY_TXTPCONNECTIONSTATE);        /* SBSW_COM_CSL02 */
      errorId = COM_E_PARAM;
    }
# else
    errorId = COM_E_PARAM;
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_CopyTxData, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(PduId);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(PduInfoPtr);      /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(RetryInfoPtr);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(TxDataCntPtr);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}       /* PRQA S 6080, 6030 */ /* MD_MSR_STMIF, MD_MSR_STCYC */
#endif

#if(COM_TRANSPORT_PROTOCOL == STD_ON)   /* COV_COM_VAR_ELISA_STD_OFF_XF */
/**********************************************************************************************************************
  Com_TpTxConfirmation
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TpTxConfirmation(PduIdType PduId, Std_ReturnType Result)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )
  /* #20 Check plausibility of input parameters */
#  if (COM_TXPDUINFO == STD_ON)
  else if(PduId >= Com_GetSizeOfTxPduInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if (COM_INVALIDHNDOFTXPDUINFO == STD_ON)
  else if(Com_IsInvalidHndOfTxPduInfo(PduId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#   if (COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON)
  else if(!Com_IsTxTpInfoUsedOfTxPduInfo(PduId))        /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
# endif
  else if(!Com_IsTxPduGrpActive(PduId))
  {
    errorId = COM_SERVICE_NOT_AVAILABLE;
  }
  else
  {
# if (COM_TXTPINFOIDXOFTXPDUINFO == STD_ON)
    /* ----- Implementation ----------------------------------------------- */
    Com_TxTpInfoIdxOfTxPduInfoType txTpPduInfoIdx = Com_GetTxTpInfoIdxOfTxPduInfo(PduId);

    /* #30 If the passed Result is E_OK and the state is WAITING_FOR_CONFIRMATION or TRANSMISSION_STARTED */
    if((Result == E_OK)
       && ((Com_GetTxTpConnectionState(txTpPduInfoIdx) == COM_WAITING_FOR_CONFIRMATION_TXTPCONNECTIONSTATE)
           || (Com_GetTxTpConnectionState(txTpPduInfoIdx) == COM_TRANSMISSION_STARTED_TXTPCONNECTIONSTATE)))
    {
      /* #40 Call the normal Com_TxConfirmation */
      Com_TxConfirmation_Process(PduId);
    }

    /* #50 Prepare the TP parameters for the start of a new transmission */
    Com_SetTxTpConnectionState(txTpPduInfoIdx, COM_READY_TXTPCONNECTIONSTATE);  /* SBSW_COM_CSL02 */
    Com_SetTxTpWrittenBytesCounter(txTpPduInfoIdx, 0);  /* SBSW_COM_CSL02 */
# else
    errorId = COM_E_PARAM;
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_TpTxConfirmation, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(PduId);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(Result);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (COM_TRIGGER_TRANSMIT_API == STD_ON)
/**********************************************************************************************************************
  Com_TriggerTransmit
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(Std_ReturnType, COM_CODE) Com_TriggerTransmit(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) PduInfoPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  uint8 retVal = E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )  /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
#  if (COM_TXPDUINFO == STD_ON) /* COV_COM_VAR_DEPENDENT_SWITCH */
  else if(TxPduId >= Com_GetSizeOfTxPduInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if (COM_INVALIDHNDOFTXPDUINFO == STD_ON)
  else if(Com_IsInvalidHndOfTxPduInfo(TxPduId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
  else if(PduInfoPtr == NULL_PTR)
  {
    errorId = COM_E_PARAM_POINTER;
  }
  else if((PduInfoPtr->SduDataPtr == NULL_PTR) && (PduInfoPtr->SduLength > 0))
  {
    errorId = COM_E_PARAM_POINTER;
  }
# endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #30 Do Trigger Transmit processing */
    retVal = Com_TriggerTransmit_Process(TxPduId, PduInfoPtr);  /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR)
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_TriggerTransmit, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(TxPduId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(PduInfoPtr);      /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (COM_TXPDUINFO == STD_ON)
/**********************************************************************************************************************
Com_TxLLIf_Transmit
**********************************************************************************************************************/
/*! Internal comment removed.
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

**********************************************************************************************************************/
FUNC(Std_ReturnType, COM_CODE) Com_TxLLIf_Transmit(PduIdType ComTxPduId)
{
  /* ----- Local Variables ---------------------------------------------- */
  Std_ReturnType retVal = E_OK; /* PRQA S 3197 */ /* MD_Com_3197 */

  PduInfoType PduInfo;

# if (COM_TXPDUCALLOUTFUNCPTRUSEDOFTXPDUINFO == STD_ON)
  boolean CalloutResult;
# endif

  PduInfo.SduDataPtr = NULL_PTR;

# if (COM_TXBUFFERUSEDOFTXPDUINFO == STD_ON)
  /* #10 If the ComIPdu is no zero byte PDU */
  if(Com_IsTxBufferUsedOfTxPduInfo(ComTxPduId)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
#  if (COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON && COM_TXBUFFERMETADATAUSEDOFTXPDUINFO == STD_ON)  /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf */
    /* For TP transmission with meta data, point to meta data */
    /* #20 If the ComIPdu is a TP PDU AND has configured meta data */
    if(Com_IsTxTpInfoUsedOfTxPduInfo(ComTxPduId) && Com_IsTxBufferMetaDataUsedOfTxPduInfo(ComTxPduId))
    {
      /* #30 Set the SduDataPtr to the meta data */
      PduInfo.SduDataPtr = Com_GetAddrTxBuffer(Com_GetTxBufferMetaDataStartIdxOfTxPduInfo(ComTxPduId));
    }
    /* #40 otherwise */
    else
#  endif
    {
      /* #50 Set the SduDataPtr to the PDU data buffer */
      PduInfo.SduDataPtr = Com_GetAddrTxBuffer(Com_GetTxBufferStartIdxOfTxPduInfo(ComTxPduId));
    }
  }
  /* #60 otherwise set the SduDataPtr to NULL_PTR */
# endif

# if (COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON)    /* COV_COM_VAR_ELISA_STD_OFF_XF */
  /* #80 If the ComIPdu is a TP PDU */
  if(Com_IsTxTpInfoUsedOfTxPduInfo(ComTxPduId)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
  {
    /* #90 Set the SduLength, if the ComIPdu is in READY state. Otherwise set state to READY */
    Com_TxTpInfoIdxOfTxPduInfoType txTpPduInfoIdx = Com_GetTxTpInfoIdxOfTxPduInfo(ComTxPduId);
    if(Com_GetTxTpConnectionState(txTpPduInfoIdx) == COM_READY_TXTPCONNECTIONSTATE)
    {
      PduInfo.SduLength = (PduLengthType) Com_GetTxSduLength(ComTxPduId);
    }
    else
    {
      Com_SetTxTpConnectionState(txTpPduInfoIdx, COM_READY_TXTPCONNECTIONSTATE);        /* SBSW_COM_CSL02 */
      retVal = E_NOT_OK;
    }
  }
  /* #100 otherwise */
  else
# endif
  {
    /* #110 Set the SduLength to the current TxSduLength or to the PDU length with meta data length (If meta data feature is enabled) */
# if (COM_TXBUFFERMETADATAUSEDOFTXPDUINFO == STD_ON && COM_TXPDUINITVALUEMETADATAUSEDOFTXPDUINFO == STD_ON)     /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf */
    /* meta data exists and it is not TP, use length with meta data */
    PduInfo.SduLength = Com_GetPduWithMetaDataLengthOfTxPduInfo(ComTxPduId);
# else
    /* no meta data exists or it is TP, use IPduLength */
    PduInfo.SduLength = (PduLengthType) Com_GetTxSduLength(ComTxPduId);
# endif
  }
# if (COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON)    /* COV_COM_VAR_ELISA_STD_OFF_XF */
  /* #120 If the ComIPdu is not a TP PDU or was initially already in READY state */
  if(retVal == E_OK)
# endif
  {
# if (COM_TXPDUCALLOUTFUNCPTRUSEDOFTXPDUINFO == STD_ON)
    /* #130 Call the configured callout function */
    CalloutResult = Com_TxLLIf_GetTxPduCalloutFuncPtr(ComTxPduId, &PduInfo);    /* SBSW_COM_FCTCALL_STACKPTR */

    /* #140 If the callout return value is positive */
    if(CalloutResult == TRUE)
# endif
    {
# if (COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON)    /* COV_COM_VAR_ELISA_STD_OFF_XF */
      /* #150 If the ComIPdu is a TP PDU set the state variable to TRANSMISSION_STARTED */
      if(Com_IsTxTpInfoUsedOfTxPduInfo(ComTxPduId))     /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
      {
        Com_SetTxTpConnectionState(Com_GetTxTpInfoIdxOfTxPduInfo(ComTxPduId), COM_TRANSMISSION_STARTED_TXTPCONNECTIONSTATE);    /* SBSW_COM_CSL02 */
      }
# endif
# if (COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON)
      /* #160 Set the WaitingForConfirmation flag */
      Com_SetWaitingForConfirmation(ComTxPduId, TRUE);  /* SBSW_COM_IDXPARAM_INTERNALFCT_CSL02 */
# endif
      /* #170 Initiate the transmit of a ComIPdu by a call of PduR_ComTransmit */
      retVal = PduR_ComTransmit(Com_GetExternalIdOfTxPduInfo(ComTxPduId), &PduInfo);    /* SBSW_COM_FCTCALL_STACKPTR */
# if (COM_TXBUFFERMETADATAUSEDOFTXPDUINFO == STD_ON && COM_TXPDUINITVALUEMETADATAUSEDOFTXPDUINFO == STD_ON)     /* COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf */
      /* write default meta data to buffer, ignoring the result of the transmission */
      {
        /* #180 Set the meta data buffer back to the meta data initial value (If meta data feature is enabled) */
        Com_TxLLIf_CpyInitMetaDataToBffr(ComTxPduId);
      }
# endif

# if ((COM_TXTPINFOUSEDOFTXPDUINFO == STD_ON) || (COM_MINIMUMDELAYOFTXMODEINFO == STD_ON) || (COM_EXISTS_TRANSMIT_CLRUBOFTXPDUINFO == STD_ON) || (COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO == STD_ON))     /* COV_COM_VAR_ELISA_STD_OFF_TF_xf_tf_tf_tf */
      /* #190 Set ComIPdu Attributes depending on the value of retVal */
      Com_TxLLIf_SetTxAttributes(ComTxPduId, retVal);
# endif
    }
  }
  return retVal;
}
#endif

/**********************************************************************************************************************
  Com_SwitchIpduTxMode
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_SwitchIpduTxMode(PduIdType PduId, boolean Mode)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
#if (COM_DEV_ERROR_DETECT == STD_ON )   /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
# if (COM_TXMODEINFO == STD_ON)
  else if(PduId >= Com_GetSizeOfTxModeInfo())
  {
    errorId = COM_E_PARAM;
  }
#  if (COM_INVALIDHNDOFTXMODEINFO == STD_ON)
  else if(Com_IsInvalidHndOfTxModeInfo(PduId))
  {
    errorId = COM_E_PARAM;
  }
#  endif
# endif
#endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
#if (COM_TXMODEINFO == STD_ON)
    /* #30 If the passed tx mode differs form the current tx mode, update the current tx mode value and initialize the new tx mode */
    if(Com_IsCurrentTxMode(PduId) != Mode)
    {
      Com_SetCurrentTxMode(PduId, Mode);        /* SBSW_COM_CSL02 */ /* SBSW_COM_DETCHECK_INDEX */
      Com_TxModeHdlr_InitTxMode(PduId);
# if (COM_TXTOUTINFOUSEDOFTXPDUINFO == STD_ON)
      /* #40 Reset the tx timeout counter */
      Com_TxDlMon_SwitchIpduTxMode(PduId);
# endif
    }
#else
    errorId = COM_E_PARAM;
#endif
  }

  /* ----- Development Error Report --------------------------------------- */
#if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_SwitchIpduTxMode, errorId);
  }
#endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(PduId);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(Mode);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}

/* jet: ComSendSignal snippet */
#if (COM_TRANSPORT_PROTOCOL == STD_ON)  /* COV_COM_VAR_ELISA_STD_OFF_XF */
/**********************************************************************************************************************
  Com_SendDynSignal
 **********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 **********************************************************************************************************************/
FUNC(uint8, COM_CODE) Com_SendDynSignal(Com_SignalIdType SignalId, P2CONST(void, AUTOMATIC, COM_APPL_DATA) SignalDataPtr, uint16 Length)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  uint8 retVal = COM_SERVICE_NOT_AVAILABLE;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check plausibility of input parameters */
#  if (COM_TXSIGINFO == STD_ON)
  else if(SignalId >= Com_GetSizeOfTxSigInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if (COM_INVALIDHNDOFTXSIGINFO == STD_ON)
  else if(Com_IsInvalidHndOfTxSigInfo(SignalId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
  else if(Length > Com_GetByteLengthOfTxSigInfo(SignalId))
  {
    errorId = COM_E_PARAM;
  }
#  endif
  else if(SignalDataPtr == NULL_PTR)
  {
    errorId = COM_E_PARAM_POINTER;
  }
# endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
# if (COM_TXSIGINFO == STD_ON)
    SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();
    /* #30 Process the passed Tx ComSignal */
    retVal = Com_SendSignal_Processing(SignalId, SignalDataPtr, Length);        /* SBSW_COM_FCTCALL_WITH_P2CONST */
    SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
# else
    errorId = COM_E_PARAM;
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_SendDynSignal, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(Length);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalDataPtr);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

/* jet: ComSendSignal snippet */
/**********************************************************************************************************************
  Com_SendSignal
 **********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 **********************************************************************************************************************/
FUNC(uint8, COM_CODE) Com_SendSignal(Com_SignalIdType SignalId, P2CONST(void, AUTOMATIC, COM_APPL_DATA) SignalDataPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  uint8 retVal = COM_SERVICE_NOT_AVAILABLE;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
#if (COM_DEV_ERROR_DETECT == STD_ON)    /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
# if (COM_TXSIGINFO == STD_ON)
  else if(SignalId >= Com_GetSizeOfTxSigInfo())
  {
    errorId = COM_E_PARAM;
  }
#  if (COM_INVALIDHNDOFTXSIGINFO == STD_ON)
  else if(Com_IsInvalidHndOfTxSigInfo(SignalId))
  {
    errorId = COM_E_PARAM;
  }
#  endif
# endif
  else if(SignalDataPtr == NULL_PTR)
  {
    errorId = COM_E_PARAM_POINTER;
  }
#endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
#if (COM_TXSIGINFO == STD_ON)
    SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();
    /* #30 Process the passed Tx ComSignal */
    retVal = Com_SendSignal_Processing(SignalId, SignalDataPtr, 0);     /* SBSW_COM_FCTCALL_WITH_P2CONST */
    SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
#else
    errorId = COM_E_PARAM;
#endif
  }

  /* ----- Development Error Report --------------------------------------- */
#if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_SendSignal, errorId);
  }
#endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalDataPtr);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
  Com_SendSignalGroup
 **********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
 *
 **********************************************************************************************************************/
FUNC(uint8, COM_CODE) Com_SendSignalGroup(Com_SignalGroupIdType SignalGroupId)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  uint8 retVal = COM_SERVICE_NOT_AVAILABLE;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
#if (COM_DEV_ERROR_DETECT == STD_ON )   /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
# if (COM_TXSIGGRPINFO == STD_ON)
  else if(SignalGroupId >= Com_GetSizeOfTxSigGrpInfo()) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    errorId = COM_E_PARAM;
  }
#  if (COM_INVALIDHNDOFTXSIGGRPINFO == STD_ON)
  else if(Com_IsInvalidHndOfTxSigGrpInfo(SignalGroupId))
  {
    errorId = COM_E_PARAM;
  }
#  endif
# endif
#endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
#if (COM_TXSIGGRPINFO == STD_ON)
    P2CONST(uint8, AUTOMATIC, COM_APPL_VAR) shdBuffer = NULL_PTR;
# if (COM_TXBUFFERUSEDOFTXSIGGRPINFO == STD_ON)
    /* #30 If the ComSignalGroup has a shadow buffer, get the address of this shadow buffer */
    if(Com_IsTxBufferUsedOfTxSigGrpInfo(SignalGroupId)) /* COV_COM_FEATURE_ALWAYS_TRUE_TX */
    {
      shdBuffer = Com_GetAddrTxBuffer(Com_GetTxBufferStartIdxOfTxSigGrpInfo(SignalGroupId));
    }
# endif
    SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();
    /* #40 Process the passed ComSignalGroup */
    retVal = Com_SendSignalGroup_Processing(SignalGroupId, shdBuffer);  /* SBSW_COM_FCTCALL_WITH_P2CONST */
    SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
#else
    errorId = COM_E_PARAM;
#endif
  }

  /* ----- Development Error Report --------------------------------------- */
#if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_SendSignalGroup, errorId);
  }
#endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalGroupId);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */

#if (COM_ENABLE_SIGNAL_GROUP_ARRAY_API == STD_ON)
/**********************************************************************************************************************
  Com_SendSignalGroupArray
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
 *
 *
**********************************************************************************************************************/
FUNC(uint8, COM_CODE) Com_SendSignalGroupArray(Com_SignalGroupIdType SignalGroupId, P2CONST(uint8, AUTOMATIC, COM_APPL_VAR) SignalGroupArrayPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = COM_E_NO_ERROR;
  uint8 retVal = COM_SERVICE_NOT_AVAILABLE;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if component is initialized */
  if(!Com_IsInitialized())
  {
    errorId = COM_E_UNINIT;
  }
# if (COM_DEV_ERROR_DETECT == STD_ON )  /* COV_COM_VAR_ELISA_STD_ON_TX */
  /* #20 Check plausibility of input parameters */
#  if (COM_TXSIGGRPINFO == STD_ON)
  else if(SignalGroupId >= Com_GetSizeOfTxSigGrpInfo())
  {
    errorId = COM_E_PARAM;
  }
#   if(COM_INVALIDHNDOFTXSIGGRPINFO == STD_ON)
  else if(Com_IsInvalidHndOfTxSigGrpInfo(SignalGroupId))
  {
    errorId = COM_E_PARAM;
  }
#   endif
#  endif
  else if(SignalGroupArrayPtr == NULL_PTR)      /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    errorId = COM_E_PARAM_POINTER;
  }
# endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
# if(COM_ARRAYACCESSUSEDOFTXSIGGRPINFO == STD_ON)
    SchM_Enter_Com_COM_EXCLUSIVE_AREA_TX();

    retVal = Com_SendSignalGroupArray_Processing(SignalGroupId, SignalGroupArrayPtr);   /* SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC */

    SchM_Exit_Com_COM_EXCLUSIVE_AREA_TX();
# else
    errorId = COM_E_PARAM;
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (COM_DEV_ERROR_REPORT == STD_ON)
  if(errorId != COM_E_NO_ERROR) /* COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT */
  {
    Com_LMgt_CallDetErrorContinue(COMServiceId_SendSignalGroupArray, errorId);
  }
# endif

  COM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalGroupId);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  COM_DUMMY_STATEMENT(SignalGroupArrayPtr);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */

  return retVal;
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if ((COM_REPCNTOFTXMODETRUE == STD_ON) || (COM_REPCNTOFTXMODEFALSE == STD_ON))
/**********************************************************************************************************************
  Com_TxModeHdlr_GetCurRepCnt
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
FUNC(Com_RepCntType, COM_CODE) Com_TxModeHdlr_GetCurRepCnt(PduIdType TxPduId)
{
  /* #10 Return the current repetition count depending on the current active tx mode */
# if ((COM_REPCNTOFTXMODETRUE == STD_ON) && (COM_REPCNTOFTXMODEFALSE == STD_ON))
  Com_RepCntType retVal = Com_IsCurrentTxMode(TxPduId) ? (Com_RepCntType) Com_GetRepCntOfTxModeTrue(Com_GetTxModeTrueIdxOfTxModeInfo(TxPduId)) : (Com_RepCntType) Com_GetRepCntOfTxModeFalse(Com_GetTxModeFalseIdxOfTxModeInfo(TxPduId));       /* COV_COM_FEATURE_A_AND_FEATURE_B */
# elif (COM_REPCNTOFTXMODETRUE == STD_ON)
  Com_RepCntType retVal = Com_IsCurrentTxMode(TxPduId) ? (Com_RepCntType) Com_GetRepCntOfTxModeTrue(Com_GetTxModeTrueIdxOfTxModeInfo(TxPduId)) : 0U;
# else
  Com_RepCntType retVal = Com_IsCurrentTxMode(TxPduId) ? 0U : (Com_RepCntType) Com_GetRepCntOfTxModeFalse(Com_GetTxModeFalseIdxOfTxModeInfo(TxPduId));
# endif
  return retVal;
}
#endif

#if ((COM_REPPERIODOFTXMODETRUE == STD_ON) || (COM_REPPERIODOFTXMODEFALSE == STD_ON))
/**********************************************************************************************************************
  Com_TxModeHdlr_GetCurrentRepetitionPeriod
**********************************************************************************************************************/
/*! Internal comment removed.
 *
 *
**********************************************************************************************************************/
FUNC(Com_RepCycleCntType, COM_CODE) Com_TxModeHdlr_GetCurrentRepetitionPeriod(PduIdType TxPduId)
{
  /* #10 Return the current repetition period factor depending on the current active tx mode */
# if ((COM_REPPERIODOFTXMODETRUE == STD_ON) && (COM_REPPERIODOFTXMODEFALSE == STD_ON))
  Com_RepCycleCntType retVal = Com_IsCurrentTxMode(TxPduId) ? (Com_RepCycleCntType) Com_GetRepPeriodOfTxModeTrue(Com_GetTxModeTrueIdxOfTxModeInfo(TxPduId)) : (Com_RepCycleCntType) Com_GetRepPeriodOfTxModeFalse(Com_GetTxModeFalseIdxOfTxModeInfo(TxPduId));  /* COV_COM_FEATURE_A_AND_FEATURE_B */
# elif (COM_REPPERIODOFTXMODETRUE == STD_ON)
  Com_RepCycleCntType retVal = Com_IsCurrentTxMode(TxPduId) ? (Com_RepCycleCntType) Com_GetRepPeriodOfTxModeTrue(Com_GetTxModeTrueIdxOfTxModeInfo(TxPduId)) : 0U;
# else
  Com_RepCycleCntType retVal = Com_IsCurrentTxMode(TxPduId) ? 0U : (Com_RepCycleCntType) Com_GetRepPeriodOfTxModeFalse(Com_GetTxModeFalseIdxOfTxModeInfo(TxPduId));
# endif
  return retVal;
}
#endif

#define COM_STOP_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_19.1 */

/**********************************************************************************************************************
   GLOBAL MISRA / PCLINT JUSTIFICATION
**********************************************************************************************************************/

/* *INDENT-OFF* */
/* module specific MISRA deviations:
   MD_Com_0777_IPduCallouts:
     Reason:     The name(s) of the callout functions are configurable by the user.
     Risk:       Compiler warning / error.
     Prevention: Verified during compile time. If the compiler reports an error the callout names must be corrected to
                 be unique within the first 6 characters.

   MD_Com_0777:
     Reason:     Identifiers do not differ within the specified number of significant characters, due to naming conventions.
     Risk:       Compiler warning / error.
     Prevention: Verified during compile time.

   MD_Com_3673_AsrProto:
     Reason:     Function prototype is based on AUTOSAR specification. No optimization possible.
     Risk:       Unexpected value modification.
     Prevention: Covered by code review.

   MD_Com_3197:
     Reason:     The returnvalue retVal is not written by the code in all possible code preprocessing variants.
                 Due to this, the default return value E_OK.
     Risk:       Compiler warning.
     Prevention: Not required.

   MD_Com_0612
     Reason:     The size of a object exceeds 32767 bytes. This check is due to some older compilers
                 do not support objects with more than 32767 bytes.
     Risk:       A compiler might not correctly translate the software what might result in incorrect code.
     Prevention: Each delivery is integrated and tested on the real target system. In addition, preproces-
                 sors and compilers used in current MICROSAR projects are not expected to suffer from
                 this (historic) limitation.
                 Compiler selection and validation is done by ECU supplier.

   MD_Com_0342:
     Reason:     Glue operator needed for optimized code implementation style. ISO C compatible compilers are mandatory.
     Risk:       Compile errors.
     Prevention: ISO C compatible compilers are mandatory.

   MD_Com_3685
     Reason:     Code is unreachable due to missing missing precompile optimisation PRQA asserts 3685.
                 ComGroupSignals without ComSignals
     Risk:       No risk
     Prevention: No prevention necessary

   MD_Com_3689
     Reason:     Code is unreachable due to missing missing precompile optimisation PRQA asserts 3689.
                 ComSignalGroups without TriggerEvent
     Risk:       No risk
     Prevention: No prevention necessary

   MD_Com_3673
     Reason:     The pointer parameter is not modified and so the pointer could be of type 'pointer to const'.
     Risk:       No risk
     Prevention: No prevention necessary

*/
/* *INDENT-ON* */
/* *INDENT-OFF* */
/* SBSW_JUSTIFICATION_BEGIN
  \ID SBSW_COM_CSL01
    \DESCRIPTION    Index Access is using ComStackLib
    \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib.

  \ID SBSW_COM_CSL01_STACKPTR
    \DESCRIPTION    Index Access is using ComStackLib
    \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib and a the passed pointer belongs to a stack variable and is therefore always valid.

  \ID SBSW_COM_CSL02
    \DESCRIPTION    Access of Table1, via indirection over Table2
                    with same index using ComStackLib.
    \COUNTERMEASURE \N Qualified use-case CSL02 of ComStackLib

  \ID SBSW_COM_CSL03
    \DESCRIPTION    Access to Table1 via indirection over Table2.
    \COUNTERMEASURE \N Qualified use-case CSL03 of ComStackLib

  \ID SBSW_COM_TXBUFFER_CSL03
    \DESCRIPTION    Write access to TxBuffer over pointer.
    \COUNTERMEASURE \N The relation between TxSigInfo and TxBuffer is modeled through sorted ComStackLib indirection, therefore
                       out of bounds access is not possible. The array access index runs in between the indirection size.
                       For dynamic signals the access index is limited by the dynamic length which itself is checked in Com_SendDynSignal
                       against the actual indirection size.

   \ID SBSW_COM_VSTDLIB_SAFE
    \DESCRIPTION    Pointer is passed as function argument.
    \COUNTERMEASURE \N The VStdLib_MemCpy_s guarantees that the destination pointer is not overwritten.

  \ID SBSW_COM_FCT_PTR_CALL_CSL03
    \DESCRIPTION    Function pointer call from Table1 via indirection over Table2.
    \COUNTERMEASURE \N Qualified use-case CSL03 of ComStackLib

  \ID SBSW_COM_MEM_CPY
    \DESCRIPTION    Function call to copy data to RAM
    \COUNTERMEASURE \R Buffer boundary is checked before copy operation.

  \ID SBSW_COM_MEM_CPY_RAM2RAM
    \DESCRIPTION    Function call to copy data from RAM to RAM.
    \COUNTERMEASURE \N The address of the destination and the amount of bytes to be copied are
                       retrieved through ComStackLib indirection access macros.

  \ID SBSW_COM_DETCHECK_INDEX
    \DESCRIPTION    Memory location is written with passed index.
    \COUNTERMEASURE \R The DET checks at runtime that the passed index does not violate boundaries of the written memory location.

  \ID SBSW_COM_FCTCALL_WITH_P2CONST
    \DESCRIPTION    Pointer is passed as function argument to read memory location.
    \COUNTERMEASURE \N Called function expects a P2CONST pointer, therefore write-access is not possible.

  \ID SBSW_COM_FCTCALL_STACKPTR
    \DESCRIPTION    Pointer is passed as function argument.
    \COUNTERMEASURE \N The passed pointer belongs to a stack variable and is therefore always valid.

  \ID SBSW_COM_WRITEACCESS_STACKPTR
    \DESCRIPTION    Write access on pointer after appl-type specific cast.
    \COUNTERMEASURE \N Caller ensures by checking the appl-type at runtime that the cast is valid.
                       The passed pointer belongs to a stack variable and is therefore always valid.

   \ID SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC
    \DESCRIPTION A pointer is written or passed to a function. The pointer can possibly be used to write to the corresponding memory location.
    \COUNTERMEASURE \N The call sequence ensures that the pointer is valid.

   \ID SBSW_COM_VALID_PTR_ENSURED_BY_CALLING_FUNC_AND_STACKPTR
    \DESCRIPTION A pointer is written or passed to a function. The pointer can possibly be used to write to the corresponding memory location.
    \COUNTERMEASURE \N The calling function ensures that the pointer is valid. The second pointer belongs to a stack variable and is derived from the first.

  \ID SBSW_COM_WRITEACCESS_STACKPTR_01
    \DESCRIPTION    Write access on pointer.
    \COUNTERMEASURE \N Pointer points to stack variable and is therefore always valid.

  \ID SBSW_COM_WRITEACCESS_STACKPTR_WITH_LENGTH
    \DESCRIPTION    Write access on pointer.
    \COUNTERMEASURE \R The passed length parameter ensures that no memory is overwritten.

  \ID SBSW_COM_WRITEACCESS_LENGTH
    \DESCRIPTION    Write access on pointer.
    \COUNTERMEASURE \N Boundaries of pointer are ensured by provided length. Caller ensures validity of length and pointer.

  \ID SBSW_COM_WRITEACCESS_STACKPTR_CONFIG_LENGTH
    \DESCRIPTION    Write access on pointer.
    \COUNTERMEASURE \R The bytes to be copied are checked against the buffer size to ensures that no memory is overwritten.

  \ID SBSW_COM_PTR_API
    \DESCRIPTION Function call with pointer as argument.
    \COUNTERMEASURE \N The caller of the COM-API must ensure the validity of the passed pointer.
                       The DET of the COM-API verifies that the pointer is not equal to NULL_PTR.

  \ID SBSW_COM_PTR_API_VALID_PTR
    \DESCRIPTION Function call with pointer as argument.
    \COUNTERMEASURE \N The caller of the COM-API must ensure the validity of the passed pointer.

  \ID SBSW_COM_VALID_PTR_BY_COMSTACK_01
    \DESCRIPTION    Function call with pointer as argument.
    \COUNTERMEASURE \N Caller ensures by using ComStackLib access macros the validity of the passed pointer.

  \ID SBSW_COM_VALID_PTR_BY_COMSTACK_02
    \DESCRIPTION    Write access to RAM pointer in for loop.
    \COUNTERMEASURE \N Address of pointer is retrieved by ComStackLib. The start and stop index of ComStackLib indirection ensure validity of pointer boundaries.

  \ID SBSW_COM_IDXPARAM_INTERNALFCT_CSL02
    \DESCRIPTION    The index is passed to an internal function as parameter and is used within the function to write to a memory location.
    \COUNTERMEASURE \N The index is read by the calling function using the ComStackLib macros. The ComStackLib ensures the validity of the index through a size relation.

  \ID SBSW_COM_IDXPARAM_INTERNALFCT_DET_CSL02
    \DESCRIPTION    The index is passed to an internal function as parameter and is used within the function to write to a memory location.
    \COUNTERMEASURE \N The top most COM calling function ensures that the passed index is not out of bounds.
                       The ComStackLib ensures the validity of the index through a size relation.

  \ID SBSW_COM_ARRAY_WRITEACCESS
    \DESCRIPTION    The memory location is used for an array write access.
    \COUNTERMEASURE \R Index is validated at runtime.

  \ID SBSW_COM_ARRAY_WRITEACCESS_CSL
    \DESCRIPTION    The memory location is used for an array write access.
    \COUNTERMEASURE \R Index is validated by the Com_Set<ArrayName> function at runtime. The ComStackLib ensures that the Com_Set<ArrayName> validates that only valid memory is written.

  \ID SBSW_COM_GWCACHING
    \DESCRIPTION    Array write access on GwEventCache ram array.
    \COUNTERMEASURE \R Index is checked against size of cache at runtime.

  \ID SBSW_COM_COMST_PTR
    \DESCRIPTION   Pointer is passed to a function.
    \COUNTERMEASURE \N The pointer is a pointer to a constant value and will not be written to.

  \ID SBSW_COM_FCTPTR_CACHE_PTR
    \DESCRIPTION Function call with pointer as argument. Cache struct pointer is passed to a function.
    \COUNTERMEASURE \N The caller of the API must ensure the validity of the passed pointer. Pointer always points to a stack struct.

  \ID SBSW_COM_FCTPTR_CACHE_PTR_1
    \DESCRIPTION Function call with pointer as argument. Cache struct pointer is passed to a function.
    \COUNTERMEASURE \N Pointer always points to a stack struct, which itself contains pointer which point to either stack or heap arrays.
                     Pointed arrays should always accessed by using the pointer access parameters (size and index) contained in the provided struct, which ensures
                     consistency of memory. Access of array is always done in same task or interrupt context.

  \ID SBSW_COM_FCTPTR_CACHE_PTR_2
    \DESCRIPTION Pointer write access. Modification of cache index.
    \COUNTERMEASURE \N The caller of the API must ensure the validity of the passed pointer. Pointer always points to a stack information struct.

  \ID SBSW_COM_FCTPTR_CACHE_PTR_3
    \DESCRIPTION Array write access on function pointer cache (stack or heap).
    \COUNTERMEASURE \R Index is checked against cache size at runtime.

  \ID SBSW_COM_GW_DESCRIPTION_COPYBUFFER
    \DESCRIPTION Function call with const pointer and var pointer.
    \COUNTERMEASURE \N Pointer of source buffer is P2CONST, therefore only a read access is possible. Destination pointer is retrieved to ComStackLib Indirection (CSL03).

  \ID SBSW_COM_GWDESCRIPTION_RTCHECK
    \DESCRIPTION Array write access on destination buffer.
    \COUNTERMEASURE \R Index is checked against destinationBufferSize at runtime.

SBSW_JUSTIFICATION_END */
/* *INDENT-ON* */
/* *INDENT-OFF* */
/* COV_JUSTIFICATION_BEGIN

  \ID COV_COM_FEATURE_ALWAYS_TRUE_TX
    \ACCEPT TX
    \REASON Depending on the configuration the feature check can always be true. In this case the compiler removes the check.

  \ID COV_COM_FEATURE_ALWAYS_TRUE_TF_tf_tx
    \ACCEPT TF tf tx
    \ACCEPT TX tx tx
    \REASON Depending on the configuration the feature check can always be true. In this case the compiler removes the check.

   \ID COV_COM_FEATURE_ALWAYS_FALSE_XF
    \ACCEPT XF
    \REASON Depending on the configuration the feature check can always be false. In this case the compiler removes the check.

   \ID COV_COM_FEATURE_RX_TOUT_INFO_USED_XX
    \ACCEPT XF
    \ACCEPT TX
    \REASON Depending on the configuration the feature check can always be false or always true. The function are ApplType specific the preprocessor switch is ApplType independent.

   \ID COV_COM_FEATURE_RX_TOUT_RX_FILTER_USED_XX
    \ACCEPT XF
    \ACCEPT TX
    \REASON Depending on the configuration the feature check can always be false or always true. The Rx Timeout and the Rx Filter are two independent features and must not be configured combined.

   \ID COV_COM_FEATURE_RX_TOUT_WITH_UB
    \ACCEPT XF tf xf
    \REASON Depending on the configuration the feature check can always be false or always true. The Rx Timeout and the Rx UpdateBit are two independent features and must not be configured combined.

   \ID COV_COM_FEATURE_A_AND_FEATURE_B
    \ACCEPT TX
    \REASON Depending on the configuration the feature check can always be false or always true. Feature A and Feature B must not be configured for the same object.

   \ID COV_COM_SILENT_TX
    \ACCEPT TX
    \REASON This checks ensures that no incorrect memory is overwritten. This should never happen in normal configurations.

   \ID COV_COM_IPDU_GROUP_ASR3_XF
    \ACCEPT XF
    \REASON Statement can only evaluate to true for Rx I-PDUs where referred I-PDU Group has a I-PDU sub-Group.

    \ID COV_COM_IPDU_GROUP_ASR3_TX
    \ACCEPT TX
    \REASON Statement can only evaluate to false for Rx I-PDUs where referred I-PDU Group has a I-PDU sub-Group.

    \ID COV_COM_IPDU_GROUP_DM_ASR3_TX
    \ACCEPT TX
    \REASON Runtime check should never be false.

    \ID COV_COM_MASKED_NEW_DIFFERS_MASKED_OLD_TX
    \ACCEPT TX
    \REASON Condition may never be false if this filter is used on Tx side only.

  \ID COV_COM_THRESHOLD_TX
    \ACCEPT TX
    \REASON May always be true if number of iterated elements is less than or equal the configured threshold.

   \ID COV_COM_RXPROCESSING_TX
    \ACCEPT TF tf tx
    \ACCEPT TX tx tx
    \REASON Second condition never evaluates to false when first condition is true. Second condition only evaluates to false if only zero bit signals/groupSignals are present.

  \ID COV_COM_RXPROCESSING
    \ACCEPT TX
    \REASON May always be true if only groupSignals are present.

  \ID COV_COM_RXPROCESSING_SHADOWSIGNAL
    \ACCEPT TF tf tf
    \ACCEPT TX tx tx
    \ACCEPT TF tx tf
    \ACCEPT TF tf tx
    \REASON The condition targeting the shadow buffer can only evaluate to false for zero bit group signals or signal groups with array based access. An initial value can only be absent for zero bit group signals and dynamic lenght signals.

   \ID COV_COM_PERFORMINVALIDACTION_X
    \ACCEPT X
    \REASON May not be called if only SignalGroups with invalid action are configured.

   \ID COV_COM_INVALIDATION_TX
    \ACCEPT TX
    \REASON May not be called if only groupSignals with invalid values are configured.

   \ID COV_COM_PERFORMINVALIDACTION
    \ACCEPT TF tf tx
    \ACCEPT TX tx tx
    \ACCEPT XX
    \REASON Second condition never evaluates to false as this condition is already checked in the sequence flow. TX_tx_tx occurs if only signals with invalid action are present. May never be called if the enclosing condition evaluates to false.

   \ID COV_COM_PERFORMINVALIDACTION_ARRAYBASED
    \ACCEPT TF tf tx
    \ACCEPT TX tx tx
    \REASON Second condition never evaluates to false as this condition is already checked in the sequence flow. TX_tx_tx occurs if only array based signals with invalid action are present.

   \ID COV_COM_PERFORMINVALIDACTION_GROUPSIGNAL
    \ACCEPT TF tf tx
    \ACCEPT TX tx tx
    \REASON Second condition never evaluates to false as this condition is already checked in the sequence flow. TX_tx_tx occurs if only GroupSignals with invalid action are present. May never be called if the enclosing condition evaluates to false.

   \ID COV_COM_PERFORMINVALIDACTION_ARRAYBASED_GROUPSIGNAL
    \ACCEPT TF tf tx
    \ACCEPT TX tx tx
    \REASON Second condition never evaluates to false as this condition is already checked in the sequence flow. TX_tx_tx occurs if only array based GroupSignals with invalid action are present.

   \ID COV_COM_DLMON_SIGNALTIMEOUTACTION_TX
    \ACCEPT TF tf tx
    \ACCEPT TX tx tx
    \REASON May evaluate to TX if only Signals/GroupSignals with a configured timeout are present. The last condition will never evaluate to false as buffer is always present for signals/GroupSignals other than zero bit signals/GroupSignals.

   \ID COV_COM_RXDEFERRED_TIMEOUT
    \ACCEPT XF
    \REASON May always be false if all ComIPdus which are monitored are immediate PDUs.

   \ID COV_COM_RXDEFERRED_PROCESSING
    \ACCEPT TX
    \REASON May always be true if all ComIPdus are deferred PDUs.

   \ID COV_COM_VALIDDLC
    \ACCEPT TX
    \REASON May always be true if only zero bit signals/GroupSignals are configured.

   \ID COV_COM_TIMEOFFSET
    \ACCEPT TX
    \REASON May always be true if time offset is only configured for TxModeTrue.

   \ID COV_COM_UPDATE_IPDU_STATE
    \ACCEPT TX
    \REASON May always be true if only rxSignlals/groupSignals without handleId are configured.

   \ID COV_COM_SIGNALINVALIDATION
    \ACCEPT X
    \REASON May never be true if only groupSignals with invalid values are present.

  \ID COV_COM_SIGNALINVALIDATION_ARRAYACCESS
    \ACCEPT X
    \REASON May never be true if only groupSignals with array access and with invalid values are present.

  \ID COV_COM_ONLYARRAYACCESS_PRESENT
    \ACCEPT XF
    \REASON May not evaluate to TRUE if no signal groups without array access are present.

  \ID COV_COM_DEFERRED_EVENTCACHE_RUNTIMECHECK
    \ACCEPT TX
    \REASON Check for safety purpose. Shall evaluate to false in normal use case.

   \ID COV_COM_SIGNALINVALIDATION_ARRAYACCESS_01
    \ACCEPT XX
    \REASON Will never be evaluated if only groupSignals with array access and with invalid values are present.

   \ID COV_COM_CACHEORCALL_IMMEDIATE
    \ACCEPT TX
    \REASON May always be true if received immediate ComIPdu has less or equal signals and/or signalGroups with configured notification callbacks than configured cache size.

   \ID COV_COM_DLMON_SIGNALTIMEOUTACTION_DYN_TX
    \ACCEPT TF tf tx
    \ACCEPT TX tx tx
    \REASON May evaluate to TX if only Signals/GroupSignals with a configured timeout are present. The last condition can only evaluate to false for dynamic length signals.

   \ID COV_COM_N_BIT_X
    \ACCEPT X
    \REASON Not reachable if only zero bit signals are present with n bit bus access type.

   \ID COV_COM_NBITNBYTE_X
    \ACCEPT X
    \REASON Not reachable if only groupSignals have the bus access type NBITNBYTE, whose enclosing signal group has array access enabled.

   \ID COV_COM_NBITNBYTE
    \ACCEPT TX
    \ACCEPT XF
    \REASON Condition only evaluates to false if Rx signal/groupSignal with bit size is < 9, where the byte layout overlaps at least two bytes.

   \ID COV_COM_NBITNBYTE_COPY_REMAININGBITS
    \ACCEPT TX
    \ACCEPT XF
    \REASON Depending on the signal layout this condition may always be FALSE or always TRUE, if the last byte to be copied is always or never a full byte.

   \ID COV_COM_NBITNBYTE_TX_01
    \ACCEPT TX
    \ACCEPT XX
    \REASON This condition shall never evaluate to false, runtime check is only provided on safety purpose. May evaluate to XX if enclosing encapsulation evaluates to false.

   \ID COV_COM_DIRECTTRIGGER
    \ACCEPT TX
    \REASON Will always be true if no periodic/mixed I-PDUs are configured.

   \ID COV_COM_REPETITIVE_TRANSMISSION
    \ACCEPT TX
    \REASON May always be true if only MDT is configured and no repetitions.

   \ID COV_COM_NONTRIGGERED_REPETITION
    \ACCEPT XF
    \REASON May always be FALSE if repetitions are configured for non-event based TxModeModes.

   \ID COV_COM_ZERO_REPETITION
    \ACCEPT TX
    \ACCEPT XF
    \REASON For full coverage, ComTxIPdus with and without repetitions need to be configured.

   \ID COV_COM_SETCYCLETIMECOUNT
    \ACCEPT TX
    \ACCEPT XF
    \ACCEPT XX
    \REASON May always be true/false if txModeMode has no cyclic content in both txModes. May never be evaluated, if enclosing condition always evaluates to FALSE.

   \ID COV_COM_NBITNBYTE_GET_ENDIANNES_TX
    \ACCEPT TX
    \REASON May not be fully covered if SignalGroup array access is enabled.

  \ID COV_COM_NBITNBYTE_ENDIANNESS
    \ACCEPT TX
    \REASON May always be true, if all signals are big endian signals.

   \ID COV_WRITESIGNAL_NBITNBYTE_XX
    \ACCEPT XX
    \ACCEPT X
    \REASON May evaluate to XX if only GroupSignals have an overlapping layout respective to the byte boundaries, whose enclosing SignalGroup has array access enabled.

   \ID COV_COM_NBITNBYTE_XX
    \ACCEPT XX
    \REASON May evaluate to XX if enclosing encapsulation evaluates to false.

   \ID COV_COM_SIGNMSBOFFSET
    \ACCEPT XF
    \ACCEPT TX
    \REASON Only reachable if SINT16 Rx signal/groupSignal is present with bit size < 9.

  \ID COV_COM_IPDU_GROUP_STATE_ACTIVE
    \ACCEPT TF tf tx
    \REASON Depending on the configuration the last sub condition will always be true.

  \ID COV_COM_GROUPSIG_ARRAYBASED
    \ACCEPT X
    \REASON May not be called if only signalGroups with array access are present.

  \ID COV_COM_FILTER_STATE
    \ACCEPT TX
    \REASON May not be FALSE if signalGroups with array access are present.

  \ID COV_COM_TX_FILTER
    \ACCEPT TX
    \REASON May not be FALSE if I-PDU has only one signal.

  \ID COV_COM_FILTER_ALWAYS_PRESENT
    \ACCEPT TX
    \REASON May always be true if all signalGroups have at least one groupSignal with configured filter.

  \ID COV_COM_TXIPDUGROUP_ACTIVE
    \ACCEPT TX
    \REASON Can only evaluate to false if filter are configured.

   \ID COV_COM_ISDIRECT_TXMODE
    \ACCEPT TX
    \REASON Can only evaluate to false if mixed or periodic or none I-PDUs are configured.

  \ID COV_COM_APPLTYPEOFRXACCESSINFO
    \ACCEPT X
    \REASON May not be called if only groupSignals with specific appl type are present.

  \ID COV_COM_ZEROBIT
    \ACCEPT XX
    \ACCEPT TX
    \REASON XX: May not be called if only signalGroups with array access are present. TX: Can evaluate to false if zero bit groupSignals are present.

  \ID COV_COM_ARRAY_BASED_BUFFER
    \ACCEPT TX
    \ACCEPT XX
    \REASON Can only evaluate to false for dynamic length signals. May not be called if enclosing condition always evaluates to false.

  \ID COV_COM_RX_PROCESSING_SINGLEPDU
    \ACCEPT TX
    \REASON May not evaluate to false if only one Rx deferred I-PDU is present.

  \ID COV_COM_TX_PROCESSING_NONE_MODE
    \ACCEPT TX
    \ACCEPT XF
    \REASON May not be fully covered if only tx I-PDUs with TxModeMode NONE with a configured timeout are present.

  \ID COV_COM_RX_TOUT_CNT
    \ACCEPT TX
    \REASON Depending on the configuration the condition will always be true. Only in configuration with a first timeout equal to 0 the condition can evaluate to false.

  \ID COV_COM_TX_REP_CNT
    \ACCEPT TX
    \ACCEPT XF
    \REASON Can only be fully covered in configurations with signals/signalGroups with configured repetition count and tx timeout.

  \ID COV_COM_TXCONFIRMATION_TX
    \ACCEPT TX
    \REASON Due to configuration (no minimum delay time, no repetitions), the state may always be TRUE.

  \ID COV_COM_SIGGRP_CHECK
    \ACCEPT XF
    \ACCEPT TX
    \REASON May always evaluate to FALSE, if only signal groups with enabled array access are present. May always evaluate to TRUE in configurations where only signal groups are present.

  \ID COV_COM_TRIGGERED_ONCHG_SIGGRP
    \ACCEPT XF
    \ACCEPT TX
    \REASON Depending on configuration this condition may always be true/false if all/no group signals have transferProperty TRIGGERED_ON_CHANGE(_WITHOUT_REPETITION).

  \ID COV_COM_WRITESIGNAL_TXBUFFER
    \ACCEPT TX
    \ACCEPT XF
    \REASON May always be TRUE, if all ComSignals are ZeroBit Signals. May always be FALSE if there are no zero bit ComSignals present.

  \ID COV_COM_ONLY_TRIGGERED_SIGGRP
    \ACCEPT TX
    \REASON Always evaluates to TRUE if only triggered signal groups are present.

  \ID COV_COM_NO_GRPSIG_FILTER_PRESENT
    \ACCEPT XF
    \REASON May evaluate to FALSE, if no group signals with configured filter are present.

  \ID COV_COM_SIGGRP_FILTER
    \ACCEPT XF
    \ACCEPT TX
    \REASON May always evaluate to FALSE, if only group signals with filters are present but not signals. May always evaluate to TRUE if only signals with filters are present but no group signals.

  \ID COV_COM_FILTERSTATE
    \ACCEPT XX
    \REASON May not get evaluated if first conditions fails (if only group signals with filter are present).

  \ID COV_COM_PRECOMPILE
    \ACCEPT XF
    \REASON Condition is always FALSE for a PRECOMPILE configuration.

  \ID COV_COM_ONLY_DET_FUNCTIONALITY_PRESENT
    \ACCEPT TX
    \REASON Condition is always true if the actual functionality of this API is not configured.

  \ID COV_COM_CYCLIC_SEND_REQUEST
    \ACCEPT XF
    \ACCEPT TX
    \REASON Condition may always be false if only TxModeFalse has got a cyclic portion and the initial TxMode is always TxModeTrue. May always be true, if the initial TxMode is always in a cyclic TxModeMode.

  \ID COV_COM_TIMEOUT_AND_UB
    \ACCEPT XF tf xf
    \REASON Condition may not be fully covered when no signals/groups with timeout and update bit are configured.

  \ID COV_COM_REPETITIONS
    \ACCEPT XF
    \REASON May never be true if repetitions are configured but no triggered signal is present.

  \ID COV_COM_DEFERREDIPDUSEND
    \ACCEPT XF
    \REASON May always be false, if not WITHOUT_REPETITION TransferProperty is configured.

  \ID COV_COM_REPETITIONS_1
    \ACCEPT X
    \REASON May never be covered if enclosing condition always evaluates to false.

  \ID COV_COM_IMMEDIATE_DESTINATION_DESCRIPTION
    \ACCEPT TX
    \REASON May always be true, if all GwDestinationDescriptions are of type IMMEDIATE.

  \ID COV_COM_SIGNAL_ROUTE
    \ACCEPT TX
    \ACCEPT XF
    \REASON May always be true, if only buffer is always used. May always be false, in configuration where only UINT8_N or zero bit gateway signals are used.

  \ID COV_COM_GWDESCRIPTION_RTCHECK
   \ACCEPT TF tf tx
   \REASON Last condition shall never evaluate to false. SBSW RT check to avoid overwriting buffer.

  \ID COV_COM_MISRA
    \ACCEPT X
    \ACCEPT TX
    \REASON [MSR_COV_MISRA]

  \ID COV_COM_VAR_ELISA_STD_ON_TX
    \ACCEPT TX
    \REASON Feature must always be enabled for SafeBsw secured by the Elisa plugin.

  \ID COV_COM_VAR_ELISA_STD_OFF_XF
    \ACCEPT XF
    \REASON Feature must always be disabled for SafeBsw secured by the Elisa plugin.

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_xf_tf
    \ACCEPT TF xf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_tf_xf
    \ACCEPT TF tf xf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf
    \ACCEPT XF xf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf
    \ACCEPT XF xf xf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_xf_tf_tf
    \ACCEPT TF xf tf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf_tf
    \ACCEPT XF xf tf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_xf_xf_tf
    \ACCEPT TF xf xf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf_tf
    \ACCEPT XF xf xf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf_xf
    \ACCEPT XF xf xf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_xf_tf_tf_tf
    \ACCEPT TF xf tf tf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_XF_xf_tf_tf_tf
    \ACCEPT XF xf tf tf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_xf_xf_tf_tf
    \ACCEPT TF xf xf tf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf_tf_tf
    \ACCEPT XF xf xf tf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_xf_xf_xf_tf
    \ACCEPT TF xf xf xf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf_xf_tf
    \ACCEPT XF xf xf xf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_XF_xf_xf_xf_xf
    \ACCEPT TF xf xf xf xf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_ON_TX
    \ACCEPT TX
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TX
    \ACCEPT TX
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_tx_tf
    \ACCEPT TF tx tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TX_tx_tf
    \ACCEPT TX tx tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TX_tx_tx
    \ACCEPT TX tx tx
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_tx_tf_tf
    \ACCEPT TF tx tf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TX_tx_tf_tf
    \ACCEPT TX tx tf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_tx_tx_tf
    \ACCEPT TF tx tx tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TX_tx_tx_tf
    \ACCEPT TX tx tx tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TX_tx_tx_tx
    \ACCEPT TX tx tx tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_tx_tf_tf_tf
    \ACCEPT TF tx tf tf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TX_tx_tf_tf_tf
    \ACCEPT TX tx tf tf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_tx_tx_tf_tf
    \ACCEPT TF tx tx tf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TX_tx_tx_tf_tf
    \ACCEPT TX tx tx tf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_tx_tx_tx_tf
    \ACCEPT TF tx tx tx tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TX_tx_tx_tx_tf
    \ACCEPT TX tx tx tx tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TX_tx_tx_tx_tx
    \ACCEPT TF tx tx tx tx
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_tf_tf_tf_xf
    \ACCEPT TF tf tf tf xf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_ELISA_STD_OFF_TF_tf_tf_tf_tf_xf_tf_tf
    \ACCEPT TF tf tf tf tf xf tf tf
    \REASON see COV_COM_VAR_ELISA_STD_OFF

  \ID COV_COM_VAR_DEPENDENT_SWITCH
    \ACCEPT TX
    \REASON The nested switch depends on a previous switch.

  \ID COV_COM_VAR_DEPENDENT_SWITCH_TX_tf_tx
    \ACCEPT TX tf tx
    \REASON The nested switch depends on a previous switch.

  \ID COV_COM_VAR_FEAT_SUBSET_TX
    \ACCEPT TX
    \REASON The nested switch can not evaluate to FALSE in current safe feature subset if the enclosing condition evaluates to TRUE.

COV_JUSTIFICATION_END */
/* *INDENT-ON* */

/**********************************************************************************************************************
  END OF FILE: Com.c
**********************************************************************************************************************/
