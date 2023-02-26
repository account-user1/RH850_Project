/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Dcm
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dcm_Lcfg.h
 *   Generation Time: 2018-04-06 17:12:01
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1601056_D00
 *      Tool Version: DaVinci Configurator (beta) 5.14.21 SP3
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/



#if !defined(DCM_LCFG_H)
# define DCM_LCFG_H
/* ----------------------------------------------
 ~&&&   Includes
---------------------------------------------- */
# if ((DCM_SVC_85_SUPPORT_ENABLED == STD_ON) && (DCM_DEM_API_403_ENABLED == STD_ON)) /* COV_DCM_SUPPORT_PARTIALLY XF tf xf */
#  include "Dem.h"
# endif /* ((DCM_SVC_85_SUPPORT_ENABLED == STD_ON) && (DCM_DEM_API_403_ENABLED == STD_ON)) */
# if ((DCM_SVC_85_SUPPORT_ENABLED == STD_ON) && ((DCM_DEM_API_412_ENABLED == STD_ON) || (DCM_DEM_API_421_ENABLED == STD_ON)))
#  include "Dem_Dcm.h"
# endif /* ((DCM_SVC_85_SUPPORT_ENABLED == STD_ON) && ((DCM_DEM_API_412_ENABLED == STD_ON) || (DCM_DEM_API_421_ENABLED == STD_ON))) */
/* ----------------------------------------------
 ~&&&   Versions
---------------------------------------------- */

/* Implementation version */
# define DCM_LCFG_MAJOR_VERSION                                                 7u
# define DCM_LCFG_MINOR_VERSION                                                 1u
# define DCM_LCFG_PATCH_VERSION                                                 0u
/* ----------------------------------------------
 ~&&&   Typedefs Exported Level 2
---------------------------------------------- */
# if (DCM_MODEMGR_SUPPORT_ENABLED == STD_ON) /* COV_DCM_SUPPORT_ALWAYS TX */
typedef uint8 Dcm_ModeRuleRefType;
typedef P2FUNC(boolean, DCM_CODE, Dcm_ModeRuleFuncType) (Dcm_Ptr2LocalU8Type);
# endif /* (DCM_MODEMGR_SUPPORT_ENABLED == STD_ON) */
# if (DCM_OBDUDSIDMGR_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
typedef uint8       Dcm_ObdIdMgrHandleMemType;
typedef uint8_least Dcm_ObdIdMgrHandleOptType;
# endif /* (DCM_OBDUDSIDMGR_SUPPORT_ENABLED == STD_ON) */
/* ----------------------------------------------
 ~&&&   Typedefs
---------------------------------------------- */
typedef uint16 Dcm_CfgNetBufferSizeMemType; /* Depends on the largest configured buffer size */
typedef uint16_least Dcm_CfgNetBufferSizeOptType; /* Depends on the largest configured buffer size */
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_NetProtocolIndicationFuncType) (Dcm_ProtocolType);

struct DCM_CFGNETPROTOCOLNOTIFICATIONINFOTYPE_TAG
{
  Dcm_NetProtocolIndicationFuncType    StartFunc;
};
typedef struct DCM_CFGNETPROTOCOLNOTIFICATIONINFOTYPE_TAG Dcm_CfgNetProtocolNotificationInfoType;
typedef uint8        Dcm_CfgNetProtRefMemType;
typedef uint8_least  Dcm_CfgNetProtRefOptType;

typedef uint8        Dcm_CfgNetBufferRefMemType;
typedef uint8_least  Dcm_CfgNetBufferRefOptType;

typedef uint8        Dcm_CfgNetNetIdRefMemType;
typedef uint8_least  Dcm_CfgNetNetIdRefOptType;

typedef uint8        Dcm_CfgNetTObjHandleMemType;
typedef uint8_least  Dcm_CfgNetTObjHandleOptType;

typedef uint8        Dcm_CfgNetPTxObjHandleMemType;
typedef uint8_least  Dcm_CfgNetPTxObjHandleOptType;

typedef uint8        Dcm_CfgNetProtPrioType;
typedef uint16       Dcm_CfgNetProtLengthType;

typedef uint8        Dcm_CfgNetPerTxPduIdRefMemType;
typedef uint8_least  Dcm_CfgNetPerTxPduIdRefOptType;

typedef uint8        Dcm_CfgNetConnPropertiesType;


struct DCM_CFGNETBUFFERINFOTYPE_TAG
{
  Dcm_PbConstMsgType            BufferPtr;  /* Points to the buffer described by this type */
  Dcm_CfgNetBufferSizeMemType   Size;       /* Size of the buffer described by this type */
};
typedef struct DCM_CFGNETBUFFERINFOTYPE_TAG Dcm_CfgNetBufferInfoType;

struct DCM_CFGNETRXPDUINFOTYPE_TAG
{
  boolean                   IsFuncReq;     /* FALSE = physical, TRUE = functional*/
  Dcm_NetConnRefMemType     ConnRef;       /* Reference to the corresponding connection */
};
typedef struct DCM_CFGNETRXPDUINFOTYPE_TAG Dcm_CfgNetRxPduInfoType;

struct DCM_CFGNETCONNECTIONTYPE_TAG
{
  uint16                          ClientSrcAddr;/* The testers source identifier */
#if (DCM_NET_PERIODIC_TX_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
  Dcm_TmrTimerCntrMemType         PeriodicTxConfTimeout;
#endif
  PduIdType                       TxPduIdMain;  /* The PduId of the diagnostic response */
  Dcm_CfgNetNetIdRefMemType       NetworkIdRef; /* Specifies the communication channel */
  Dcm_CfgNetProtRefMemType        ProtRef;

#if (DCM_NET_PERIODIC_TX_CONN_SPECIFIC_NUM_TX_OBJ_ENABLED  == STD_ON)                                                                                /* COV_DCM_UNSUPPORTED XF */
  Dcm_CfgNetPerTxPduIdRefMemType  PeriodicTxRef;
  Dcm_CfgNetPTxObjHandleMemType   NumPeriodicTxPduIds;
#endif
#if (DCM_NET_CONN_ECUC_ADDRESS_ENABLED == STD_ON)                                                                                                    /* COV_DCM_UNSUPPORTED XF */
  uint8                           EcuAddress;
#endif
#if (DCM_NET_CONN_PROPERTIES_ENABLED == STD_ON)                                                                                                      /* COV_DCM_UNSUPPORTED XF */
  Dcm_CfgNetConnPropertiesType    Properties;
#endif
};
typedef struct DCM_CFGNETCONNECTIONTYPE_TAG Dcm_CfgNetConnectionInfoType;

struct DCM_CFGNETPROTOCOLTYPE_TAG
{
  Dcm_DiagP2TimingsType       SrvAdjTime;       /* The protocol specific p2 times */
  Dcm_CfgNetProtLengthType    MaxLength;
  Dcm_ProtocolType            Id;               /* The protocol type */
#if (DCM_NET_PROTOCOL_PRIORITISATION_ENABLED == STD_ON)                                                                                              /* COV_DCM_UNSUPPORTED XF */
  Dcm_CfgNetProtPrioType      Priority;
#endif
  boolean                     HasRespPendOnBoot;/* Specifies whether RCR-RP shall be sent prior jump to the boot-loader */
  Dcm_CfgNetBufferRefMemType  RxTxBufferRef;    /* Request reception/response transmission buffer descriptor reference */
};
typedef struct DCM_CFGNETPROTOCOLTYPE_TAG Dcm_CfgNetProtocolInfoType;
typedef uint8  Dcm_NetTransportObjectStateType;
typedef uint8  Dcm_NetTransportObjectFlagType;
typedef uint8  Dcm_NetResponseType;
typedef uint8  Dcm_NetComMStateType;

struct DCM_NETBUFFERCONTEXTTYPE_TAG
{
  volatile uint8  IsInUseCnt;
};
typedef struct DCM_NETBUFFERCONTEXTTYPE_TAG Dcm_NetBufferContextType;

struct DCM_NETTRANSPORTOBJECTTYPE_TAG
{
  Dcm_MsgType                     RxData;
  Dcm_CfgNetBufferSizeMemType     RxLength;
  Dcm_CfgNetBufferSizeMemType     BuffPos;
  PduIdType                       RxPduId;
  Dcm_NetResponseType             ResType;
  Dcm_CfgNetTObjHandleMemType     Handle;
#if(DCM_NET_MULTI_CONNECT_ENABLED == STD_ON)
  Dcm_NetConnRefMemType           ConnId;
#endif
#if (DCM_NET_MULTI_BUFFER_ENABLED == STD_ON)                                                                                                         /* COV_DCM_UNSUPPORTED XF */
  Dcm_CfgNetBufferRefMemType      BufferHdl;
#endif
volatile Dcm_NetTransportObjectStateType State;
  Dcm_NetTransportObjectFlagType  Flags;
  Dcm_MsgItemType                 AddBuffer[DCM_NET_TOBJ_ADDBUFFER_SIZE];/* buffer for RCRRP and BRR responses */
  PduInfoType                     BuffInfo;    /* info structure of buffer which is used by PduR */
};
typedef struct DCM_NETTRANSPORTOBJECTTYPE_TAG Dcm_NetTransportObjectType;

struct DCM_NETCOMMCONTEXT_TAG
{
  Dcm_NetComMStateType   ComState;
  Dcm_NetConnRefMemType  RegisteredNetworks;
};
typedef struct DCM_NETCOMMCONTEXT_TAG Dcm_NetComMContextType;

#if (DCM_NET_PERIODIC_TX_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
struct DCM_NETPERIODICTXOBJECTTYPE_TAG
{
           PduInfoType             TxPduInfo;
# if(DCM_NET_PTXOBJ_SOFT_TIMER_ENABLED == STD_ON)
  volatile Dcm_TmrTimerCntrMemType Timer; /* can be changed within an ISR */
# endif
           Dcm_MsgItemType         TxBuffer[DCM_NET_PERIODIC_BUFFER_SIZE];
           boolean                 IsReserved;
};
typedef struct DCM_NETPERIODICTXOBJECTTYPE_TAG Dcm_NetPeriodicTxObjectType;
#endif
#if (DCM_VARMGR_MULTI_COM_ENABLED == STD_ON)
struct DCM_NETVARIANTINFOTYPE_TAG
{
  P2CONST(Dcm_CfgNetRxPduInfoType, AUTOMATIC, DCM_PBCFG)       RxPduIdTable;
  P2CONST(Dcm_CfgNetConnectionInfoType, AUTOMATIC, DCM_PBCFG)  ConnectionTable;
  P2CONST(Dcm_CfgNetProtocolInfoType, AUTOMATIC, DCM_PBCFG)    ProtocolTable;
  P2CONST(Dcm_CfgNetNetIdRefMemType, AUTOMATIC, DCM_PBCFG)     NetConnComMChannelMap;
# if (DCM_BSW_ENV_ASR_VERSION_4_ANY_ENABLED == STD_ON)                                                                                               /* COV_DCM_UNSUPPORTED TX */
  P2CONST(NetworkHandleType, AUTOMATIC, DCM_PBCFG)             NetworkHandleLookUpTable;
# endif
  P2CONST(NetworkHandleType, AUTOMATIC, DCM_PBCFG)             NetAllComMChannelMap;
# if (DCM_NET_COMCTRL_ALLNET_SUPPORT_ENABLED == STD_ON)
  P2CONST(NetworkHandleType, AUTOMATIC, DCM_PBCFG)             ComCtrlChannelListAll;
# endif

  P2CONST(Dcm_NetConnRefMemType, AUTOMATIC, DCM_PBCFG)         TxPduIdMap;
  P2CONST(Dcm_CfgNetPTxObjHandleMemType, AUTOMATIC, DCM_PBCFG) PerTxPduIdMap;
  P2CONST(PduIdType, AUTOMATIC, DCM_PBCFG)                     PerTxPduIdTable;
# if (DCM_NET_MONITOR_FOREIGN_N_TA_ENABLED == STD_ON)                                                                                                /* COV_DCM_UNSUPPORTED XF */
  P2CONST(PduIdType, AUTOMATIC, DCM_PBCFG)                     CanTp2DcmRxPduIdMap;
# endif

  PduIdType                     NumRxPduIds;
  PduIdType                     NumTxPduIds;
# if (DCM_NET_MONITOR_FOREIGN_N_TA_ENABLED == STD_ON)                                                                                                /* COV_DCM_UNSUPPORTED XF */
  PduIdType                     CanTpRxPduIdMin;
  PduIdType                     CanTpRxPduIdMax;
  PduIdType                     NumCanTpRxPduIds; /* <! Specifies the number of used CanTpRcPduIds in case none are used = 0, at least one - > 0 >*/
# endif
  NetworkHandleType             NumComMChannels;
  NetworkHandleType             NumAllComMChannels;
  Dcm_CfgNetPTxObjHandleMemType NumPerTxObjects;
  Dcm_NetConnRefMemType         NumConnections;
  Dcm_CfgNetProtRefMemType      NumProtocols;
  Dcm_CfgNetBufferRefMemType    NumBuffers;
  Dcm_CfgNetTObjHandleMemType   NumTranspObjects;
};
typedef struct DCM_NETVARIANTINFOTYPE_TAG Dcm_CfgNetVariantInfoType;
#endif

#if (DCM_VARMGR_MODE_POSTBUILD_LOAD_ENABLED == STD_ON)
struct DCM_NETRAMVARIANTINFOTYPE_TAG
{
# if (DCM_NET_PERIODIC_TX_ENABLED == STD_ON)                                                                                                         /* COV_DCM_UNSUPPORTED XF */
  P2VAR(Dcm_NetPeriodicTxObjectType, AUTOMATIC, DCM_RAM_PBCFG) PeriodicTxObjects;
# endif
  P2VAR(Dcm_NetComMContextType, AUTOMATIC, DCM_RAM_PBCFG)      ComMContexts;
# if(DCM_NET_MONITOR_FOREIGN_N_TA_ENABLED == STD_OFF)                                                                                                /* COV_DCM_UNSUPPORTED TX */
  P2VAR(Dcm_CfgNetTObjHandleMemType, AUTOMATIC, DCM_RAM_PBCFG) ConnId2TObjIdMap;
# endif
  P2VAR(Dcm_NetTransportObjectType, AUTOMATIC, DCM_RAM_PBCFG)  TranspObjects;
  P2VAR(Dcm_NetBufferContextType, AUTOMATIC, DCM_RAM_PBCFG)    BufferContexts;
# if (DCM_MODE_COMMCTRL_ENABLED == STD_ON)
  P2VAR(Dcm_CommunicationModeType, AUTOMATIC, DCM_RAM_PBCFG)   ComCtrlChannels;
# endif
};
typedef struct DCM_NETRAMVARIANTINFOTYPE_TAG Dcm_CfgNetRamVariantInfoType;

struct DCM_NETROMVARIANTINFOTYPE_TAG
{
  P2CONST(Dcm_CfgNetBufferInfoType, AUTOMATIC, DCM_PBCFG)      BufferInfo;
};
typedef struct DCM_NETROMVARIANTINFOTYPE_TAG Dcm_CfgNetRomVariantInfoType;
#endif
typedef uint8 Dcm_CfgModeMgrRuleRefMemType; /* Depends on the mode rule table size */
typedef uint8_least Dcm_CfgModeMgrRuleRefOptType; /* Depends on the mode rule table size */
typedef uint8 Dcm_CfgStateGroupMemType; /* Depends on the state group with largest number of states */
typedef uint8_least Dcm_CfgStateGroupOptType; /* Depends on the state group with largest number of states */
typedef uint8 Dcm_CfgStateRefMemType; /* Depends on the total number of diagnostic service state/mode filters */
typedef uint8_least Dcm_CfgStateRefOptType; /* Depends on the total number of diagnostic service state/mode filters */
typedef uint8 Dcm_CfgStateSecurityFixedByteRefMemType; /* Depends on the total number of security fixed byte values in non-default security levels */
typedef uint8_least Dcm_CfgStateSecurityFixedByteRefOptType; /* Depends on the total number of security fixed byte values in non-default security levels */ /* PRQA S 0779 */ /* MD_Dcm_Understand_0779 */
struct DCM_CFGSTATEPRECONDITIONTYPE_TAG
{
  Dcm_CfgStateGroupMemType Session;
#if (DCM_STATE_SECURITY_ENABLED == STD_ON)
  Dcm_CfgStateGroupMemType Security;
#endif
};
typedef struct DCM_CFGSTATEPRECONDITIONTYPE_TAG Dcm_CfgStateDiagStateInfoType;

struct DCM_CFGSTATEPRECONDITIONINFOTYPE_TAG
{
#if(DCM_MODEMGR_CHECK_SUPPORT_ENABLED == STD_ON)
  Dcm_CfgModeMgrRuleRefMemType         ModeRuleRef;
#endif
  Dcm_CfgStateDiagStateInfoType        States;
};
typedef struct DCM_CFGSTATEPRECONDITIONINFOTYPE_TAG Dcm_CfgStatePreconditionInfoType;

struct DCM_CFGSTATESESSIONINFOTYPE_TAG
{
  Dcm_DiagP2TimingsType                     P2ServerTime;
  Rte_ModeType_DcmDiagnosticSessionControl  Mode;
  uint8                                     Value;
};
typedef struct DCM_CFGSTATESESSIONINFOTYPE_TAG Dcm_CfgStateSessionInfoType;

struct DCM_CFGSTATESECURITYINFOTYPE_TAG
{
#if (DCM_STATE_SEC_RETRY_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
  Dcm_TmrTimerCntrMemType          DelayTimeInvKey;
# if (DCM_STATE_SEC_DELAY_ON_BOOT_ENABLED == STD_ON)
  Dcm_TmrTimerCntrMemType          DelayTimeOnBoot;
# endif
# if(DCM_STATE_SEC_DELAY_TIME_ON_FAILED_GET_ATT_CNTR_ENABLED == STD_ON)
  Dcm_TmrTimerCntrMemType          ReloadTime;
  boolean                          ReloadOnZeroDelay;
# endif
  uint8                            NumAttempts;
#endif
  uint8                            Value;
#if (DCM_MODE_SECURITY_ACCESS_ENABLED == STD_ON)
  Rte_ModeType_DcmSecurityAccess   Mode;
#endif
};
typedef struct DCM_CFGSTATESECURITYINFOTYPE_TAG Dcm_CfgStateSecurityInfoType;

typedef P2FUNC(void, DCM_CALLOUT_CODE, Dcm_StateChangeIndicationFuncType)(uint8, uint8);
struct DCM_CFGSTATENOTIFICATIONINFOTYPE_TAG
{
  Dcm_StateChangeIndicationFuncType      OnChgFunc;
};
typedef struct DCM_CFGSTATENOTIFICATIONINFOTYPE_TAG Dcm_CfgStateNotificationInfoType;
typedef P2CONST(Dcm_CfgStateNotificationInfoType, TYPEDEF, DCM_CONST) Dcm_CfgStateNotificationInfoPtrType;
typedef uint8 Dcm_CfgDidMgrOpHandleMemType;
typedef uint8_least Dcm_CfgDidMgrOpHandleOptType;
typedef uint8 Dcm_CfgDidMgrDidOpClassHandleMemType;
typedef uint8_least Dcm_CfgDidMgrDidOpClassHandleOptType;
typedef uint8 Dcm_CfgDidMgrDidInfoRefType;
typedef uint8 Dcm_CfgDidMgrAbstractOpRefType;
typedef uint8 Dcm_CfgDidMgrCombinedOpRefType;
typedef uint8 Dcm_CfgDidMgrDynDidHandleMemType;
typedef uint8_least Dcm_CfgDidMgrDynDidHandleOptType;
typedef uint8 Dcm_CfgDidMgrDynDidSrcItemIdxMemType;
typedef uint8_least Dcm_CfgDidMgrDynDidSrcItemIdxOptType;
typedef uint8 Dcm_CfgDidMgrIoDidHandleMemType;
typedef uint8_least Dcm_CfgDidMgrIoDidHandleOptType;
typedef uint8 Dcm_CfgDidMgrSignalRefMemType;
typedef uint8_least Dcm_CfgDidMgrSignalRefOptType;
typedef uint8 Dcm_CfgDidMgrSignalOpClassRefMemType;
typedef uint8_least Dcm_CfgDidMgrSignalOpClassRefOptType;
typedef uint8 Dcm_CfgDidMgrSignalIterMemType;
typedef uint8_least Dcm_CfgDidMgrSignalIterOptType;
typedef uint8 Dcm_CfgDidMgrScalingRefMemType;
typedef uint8_least Dcm_CfgDidMgrScalingRefOptType;
typedef uint8 Dcm_CfgDidMgrIoDidCemrLengthMemType;
typedef uint8_least Dcm_CfgDidMgrIoDidCemrLengthOptType;
typedef uint8 Dcm_CfgDidMgrSupportedDIDRefType;
typedef uint16 Dcm_DidMgrDidLengthType;
typedef Dcm_CfgNetBufferSizeMemType Dcm_CfgDidMgrOptimizedDidLengthType;
typedef uint8 Dcm_CfgDidMgrIoCtrlSRHandlersRefMemType; /* depends on the number of IO DIDs with S/R Interface */
typedef uint8_least Dcm_CfgDidMgrIoCtrlSRHandlersRefOptType; /* depends on the number of IO DIDs with S/R Interface */                               /* PRQA S 0779 */ /* MD_Dcm_Understand_0779 */
# if (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
typedef Dcm_DidOpType      Dcm_DidMgrOpMemType;
typedef Dcm_DidOpOptType   Dcm_DidMgrOpOptType;
typedef uint8         Dcm_DidMgrOpCallMemType;
typedef uint8_least   Dcm_DidMgrOpCallOptType;
typedef uint8   Dcm_DidMgrOpClassType;
typedef P2VAR(Dcm_DidMgrDidLengthType,TYPEDEF,DCM_VAR_NOINIT) Dcm_DidMgrDidLengthPtrType;

typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_DidMgrOpFuncType) (void);

#if (DCM_DIDMGR_MULTISIGNAL_ENABLED == STD_ON)
struct DCM_CFGDIDMGRSIGNALINFOTYPE_TAG
{
  Dcm_CfgDidMgrOptimizedDidLengthType Offset;
  Dcm_CfgNetBufferSizeMemType         Length;
};
typedef struct DCM_CFGDIDMGRSIGNALINFOTYPE_TAG Dcm_CfgDidMgrSignalInfoType;
#endif

struct DCM_DIDMGRDIDINFOTYPE_TAG
{
#if (DCM_DIDMGR_DYNLEN_DID_SUPPORT_ENABLED == STD_ON)
  Dcm_CfgDidMgrOptimizedDidLengthType  MinLength;/* contains the minimum length (on DIDs with dynamic length) or the complete (max) length on static DIDs */
#endif
  Dcm_CfgDidMgrOptimizedDidLengthType  Length; /* contains the maximum (on DIDs with dynamic length) or the complete length on static DIDs */
  Dcm_CfgDidMgrOpHandleMemType         OpBaseIdx;
#if (DCM_DIDMGR_OP_INFO_ANY_ENABLED == STD_ON)
  Dcm_CfgDidMgrAbstractOpRefType       OpRef;
#endif
  Dcm_DidMgrOpMemType                  Operations;
#if (DCM_DIDMGR_MULTISIGNAL_ENABLED == STD_ON)
  Dcm_CfgDidMgrSignalRefMemType        SignalRef;
#endif
};
typedef struct DCM_DIDMGRDIDINFOTYPE_TAG Dcm_CfgDidMgrDidInfoType;

#if (DCM_DIDMGR_SR_IO_CONTROL_ENABLED == STD_ON)
# if (DCM_DIDMGR_SR_IO_SHORT_TERM_ADJUSTMENT_ENABLED == STD_ON)
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_DidMgrIoCtrlReqCtrlStateWriteFuncType)(Dcm_ReadOnlyMsgType);
# endif
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_DidMgrIoCtrlReqUnderCtrlReadFuncType)(P2VAR(uint32, AUTOMATIC, DCM_VAR_NOINIT));
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_DidMgrIoCtrlReqUnderCtrlWriteFuncType)(uint32);
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_DidMgrIoCtrlReqIoOpReqWriteFuncType)(uint8
                                                                                 ,uint32);
typedef P2FUNC(boolean, DCM_CODE, Dcm_DidMgrIoCtrlResIsUpdatedFuncType)(void);
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_DidMgrIoCtrlResReadFuncType)(P2VAR(Dcm_IOOperationResponseType, AUTOMATIC, DCM_VAR_NOINIT));

struct DCM_DIDMGRIOCTRLSRHANDLERSTYPE
{
# if (DCM_DIDMGR_SR_IO_SHORT_TERM_ADJUSTMENT_ENABLED == STD_ON)
  Dcm_DidMgrIoCtrlReqCtrlStateWriteFuncType  IoCtrlReqCtrlStateWrite;
# endif
  Dcm_DidMgrIoCtrlReqUnderCtrlReadFuncType   IoCtrlReqUnderControlRead;
  Dcm_DidMgrIoCtrlReqUnderCtrlWriteFuncType  IoCtrlReqUnderControlWrite;
  Dcm_DidMgrIoCtrlReqIoOpReqWriteFuncType    IoCtrlReqIoOpReqWrite;
  Dcm_DidMgrIoCtrlResIsUpdatedFuncType       IoCtrlResIsUpdated;
  Dcm_DidMgrIoCtrlResReadFuncType            IoCtrlResRead;
};
typedef struct DCM_DIDMGRIOCTRLSRHANDLERSTYPE Dcm_DidMgrIoCtrlSRHandlersType;
typedef CONSTP2CONST(Dcm_DidMgrIoCtrlSRHandlersType, TYPEDEF, DCM_CONST) Dcm_DidMgrIoCtrlSRHandlersConstPtrType;
#endif

struct DCM_DIDMGROPINFOTYPE_TAG
{
  Dcm_CfgStateRefMemType                 ExecCondRef;
  Dcm_CfgDidMgrDidOpClassHandleMemType   OpTypeBaseIdx;
  Dcm_DidMgrOpCallMemType                CallTypes;
};
typedef struct DCM_DIDMGROPINFOTYPE_TAG Dcm_CfgDidMgrOpInfoType;

struct DCM_CFGDIDMGRDIDOPCLASSINFOTYPE_TAG
{
  Dcm_CfgDidMgrSignalOpClassRefMemType  OpClassRef;
};
typedef struct DCM_CFGDIDMGRDIDOPCLASSINFOTYPE_TAG Dcm_CfgDidMgrDidOpClassInfoType;

struct DCM_CFGDIDMGRSIGNALOPCLASSINFOTYPE_TAG
{
  Dcm_DidMgrOpFuncType      OpFunc;   /* generic function pointer that will be casted to the concrete operation later at run-time */
  Dcm_DidMgrOpClassType     FuncClass;
};
typedef struct DCM_CFGDIDMGRSIGNALOPCLASSINFOTYPE_TAG Dcm_CfgDidMgrSignalOpClassInfoType;

#if (DCM_DIDMGR_OP_INFO_SCALING_ENABLED == STD_ON)
struct DCM_CFGDIDMGROPINFOSCALINGTYPE_TAG
{
  Dcm_CfgDidMgrScalingRefMemType ScalingInfoRef;
};
typedef struct DCM_CFGDIDMGROPINFOSCALINGTYPE_TAG Dcm_CfgDidMgrOpInfoScalingType;
#endif

#if (DCM_DIDMGR_OP_INFO_IOCONTROL_ENABLED == STD_ON)
struct DCM_CFGDIDMGRIOCONTROLINFOTYPE_TAG
{
# if (DCM_DIDMGR_OPTYPE_IO_RETCTRL2ECU_ENABLED == STD_ON)
  Dcm_CfgDidMgrDidOpClassHandleMemType  RetCtrlToEcuOpRef;
# endif
# if (DCM_DIDMGR_IODID_EXEC_PRECOND_LIMIT_ENABLED == STD_ON)
  Dcm_CfgStateRefMemType                CtrlExecCondRef;
# endif
# if (DCM_DIDMGR_IO_MASKRECORD_ENABLED == STD_ON)
  Dcm_CfgDidMgrIoDidCemrLengthMemType   CtrlEnblMaskLength;
# endif
};
typedef struct DCM_CFGDIDMGRIOCONTROLINFOTYPE_TAG Dcm_CfgDidMgrOpInfoIoControlType;
#endif

#if (DCM_DIDMGR_OP_INFO_DEFINE_ENABLED == STD_ON)
struct DCM_CFGDIDMGRDYNDEFINEINFOTYPE_TAG
{
# if (DCM_DIDMGR_PERIODICDYNDID_ENABLED == STD_ON)
  uint16                                  Did;
# endif
# if (DCM_DIDMGR_DYNDID_CLR_ON_STATE_CHG_ENABLED == STD_ON)
  Dcm_CfgStateRefMemType                  ReadExecCondRef;
# endif
# if (DCM_DIDMGR_DYNDID_VAR_NUM_ITEMS_ENABLED == STD_ON)
  Dcm_CfgDidMgrDynDidSrcItemIdxMemType    SrcItemRef;
  uint8                                   NumItems;
# endif
};
typedef struct DCM_CFGDIDMGRDYNDEFINEINFOTYPE_TAG Dcm_CfgDidMgrOpInfoDefineType;
#endif

#if (DCM_DIDMGR_OP_INFO_COMBINED_ENABLED == STD_ON)
struct DCM_CFGDIDMGROPINFOCOMBINEDTYPE_TAG
{
  Dcm_CfgDidMgrCombinedOpRefType OpRefIoControl;
  Dcm_CfgDidMgrCombinedOpRefType OpRefScaling;
};
typedef struct DCM_CFGDIDMGROPINFOCOMBINEDTYPE_TAG Dcm_CfgDidMgrOpInfoCombinedType;
#endif

#if (DCM_DIDMGR_RANGE_SUPPORT_ENABLED == STD_ON)
typedef Dcm_UtiU16RangeType Dcm_CfgDidMgrDidRangeType;
#endif
# endif /* (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON) */
typedef uint8 Dcm_CfgRidMgrOpHandleMemType;
typedef uint8_least Dcm_CfgRidMgrOpHandleOptType;
typedef uint8 Dcm_CfgRidMgrSupportedRIDRefType;
typedef uint8 Dcm_CfgRidMgrRoutineInfoByteMemType;
# if (DCM_RIDMGR_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
typedef uint8   Dcm_RidMgrOpType;
typedef uint8   Dcm_RidMgrOpCallType;
typedef uint8   Dcm_RidMgrDynLenMaskType;
typedef uint16  Dcm_RidMgrRidLengthType; /* all service ports do use 16bit length parameter */
typedef P2VAR(Dcm_RidMgrRidLengthType, TYPEDEF, DCM_VAR_NOINIT) Dcm_RidMgrRidLengthPtrType;

typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_RidMgrOpFuncType)(void);

struct DCM_RIDMGRRIDINFOTYPE_TAG
{
  Dcm_CfgRidMgrOpHandleMemType         OpBaseIdx;
  Dcm_CfgStateRefMemType               ExecCondRef;
  Dcm_RidMgrOpType                     Operations;
#if (DCM_RIDMGR_SUPPORT_ROUTINEINFOBYTE_ENABLED == STD_ON)
  Dcm_CfgRidMgrRoutineInfoByteMemType  RoutineInfoByte;
#endif
};
typedef struct DCM_RIDMGRRIDINFOTYPE_TAG Dcm_CfgRidMgrRidInfoType;

struct DCM_RIDMGROPINFOTYPE_TAG
{
  Dcm_RidMgrOpFuncType         OpFunc;
  Dcm_RidMgrRidLengthType      ReqLength;       /* Note: request length includes also RID + SF!!  */
#if (DCM_RIDMGR_DYN_REQ_LEN_ENABLED == STD_ON)
  Dcm_RidMgrRidLengthType      ReqMinLength;    /* Note: min request length DOES NOT INCLUDE  also RID + SF!! Only the minimum length (i.e. without the only possible last dynamic length signal ) */
#endif
  Dcm_RidMgrRidLengthType      ResLength; /* minimum length if dynamic! Note: length includes also RID + SF!! If no response data  -> 3 */
  Dcm_RidMgrOpCallType         OpType;
#if (DCM_RIDMGR_DYN_LEN_ENABLED == STD_ON)
  Dcm_RidMgrDynLenMaskType     DynLenMask;
#endif
};
typedef struct DCM_RIDMGROPINFOTYPE_TAG Dcm_CfgRidMgrOpInfoType;
# endif /* (DCM_RIDMGR_SUPPORT_ENABLED == STD_ON) */
typedef uint8 Dcm_CfgMemMgrMemAddrType;
typedef uint32 Dcm_CfgMemMgrReqAddrType;
typedef uint32 Dcm_CfgMemMgrReqSizeType;
typedef uint8 Dcm_CfgMemMgrStateRefType;
typedef uint8 Dcm_CfgMemMgrMemMapIdxMemType;
typedef uint8_least Dcm_CfgMemMgrMemMapIdxOptType;
# if (DCM_MEMMGR_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
struct DCM_CFGMEMMGRMEMMAPINFOTYPE_TAG
{
  Dcm_CfgMemMgrMemAddrType     StartAddr;
  Dcm_CfgMemMgrMemAddrType     EndAddr;
  Dcm_CfgMemMgrStateRefType    ExecCondRefs[DCM_MEMMGR_NUM_MEMORY_OPERATIONS_CONST];
};
typedef struct DCM_CFGMEMMGRMEMMAPINFOTYPE_TAG Dcm_CfgMemMgrMemMapInfoType;

typedef P2CONST(Dcm_CfgMemMgrMemMapInfoType, TYPEDEF, DCM_CONST) Dcm_CfgMemMgrMemMapInfoPtrType;

struct DCM_CFGMEMMGRMEMIDINFOTYPE_TAG
{
  Dcm_CfgMemMgrMemMapInfoPtrType MemMapTable;
  Dcm_CfgMemMgrMemMapIdxMemType  Size;
};
typedef struct DCM_CFGMEMMGRMEMIDINFOTYPE_TAG Dcm_CfgMemMgrMemIdInfoType;
# endif /* (DCM_MEMMGR_SUPPORT_ENABLED == STD_ON) */
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_DiagIndicationFuncType) (Dcm_MsgItemType, Dcm_ReadOnlyMsgType, uint16, uint8, uint16, Dcm_NegativeResponseCodePtrType);
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_DiagConfirmationFuncType) (Dcm_MsgItemType, uint8, uint16, Dcm_ConfirmationStatusType);

typedef P2FUNC(void, DCM_CODE, Dcm_DiagSvcInitFuncType) (void);
typedef P2FUNC(Std_ReturnType, DCM_CALLOUT_CODE, Dcm_DiagSvcProcessorFuncType) (Dcm_OpStatusType, Dcm_MsgContextPtrType);
typedef P2FUNC(void, DCM_CALLOUT_CODE, Dcm_DiagSvcConfirmationFuncType) (Dcm_ConfirmationStatusType);

typedef uint8 DcmCfg_DiagServicePropertiesType;

struct DCM_CFGDIAGSERVICEINFOTYPE_TAG
{
  Dcm_DiagSvcProcessorFuncType      ProcFunc;
  DcmCfg_DiagServicePropertiesType  Props;
  uint8                             MinLength;
  uint8                             ConfFuncRef;
#if (DCM_DIAG_FAST_POST_PROCESSING_ENABLED == STD_ON)                                                                                                /* COV_DCM_SUPPORT_ALWAYS TX */
  uint8                             FastConfFuncRef;
#endif
};
typedef struct DCM_CFGDIAGSERVICEINFOTYPE_TAG Dcm_CfgDiagServiceInfoType;


struct DCM_CFGDIAGSERVICENOFICATIONINFOTYPE_TAG
{
  Dcm_DiagIndicationFuncType      IndFunc;
  Dcm_DiagConfirmationFuncType    ConfFunc;
};
typedef struct DCM_CFGDIAGSERVICENOFICATIONINFOTYPE_TAG Dcm_CfgDiagNotificationInfoType;

typedef P2CONST(Dcm_CfgDiagNotificationInfoType, TYPEDEF, DCM_CONST) Dcm_CfgDiagNotificationInfoPtrType;
typedef uint8 Dcm_CfgVarMgrDiagVariantIdMemType; /* Depends on the total number of configuration variants */
typedef uint8_least Dcm_CfgVarMgrDiagVariantIdOptType; /* Depends on the total number of configuration variants */
typedef uint8 Dcm_CfgVarMgrBitSetBaseType; /* Depends on the total number of diagnostic variants */
typedef Dcm_CfgVarMgrBitSetBaseType Dcm_CfgVarMgrBitSetType[1]; /* A set of variants */
#if (DCM_VARMGR_MULTI_COM_ENABLED == STD_ON)
typedef P2CONST(Dcm_CfgNetVariantInfoType, TYPEDEF, DCM_CONST_PBCFG)  Dcm_CfgVarMgrComVariantType;
#endif

#if (DCM_DIAG_MULTI_SVC_TABLE_ENABLED == STD_ON)                                                                                                     /* COV_DCM_UNSUPPORTED XF */
struct DCM_CFGVARMGRBRIDGEVARIANTTYPE_TAG
{
  P2CONST(Dcm_CfgDiagSvc2ProtMapMemType, AUTOMATIC, DCM_CONST_PBCFG) Svc2ProtocolMap;
};
typedef struct DCM_CFGVARMGRBRIDGEVARIANTTYPE_TAG Dcm_CfgVarMgrBridgeVariantType;
#endif

#if (DCM_VARMGR_MODE_POSTBUILD_LOAD_ENABLED == STD_ON)
struct DCM_CFGVARMGRRAMVARIANTTYPE_TAG
{
  Dcm_CfgNetRamVariantInfoType  NetworkRam;
};
typedef struct DCM_CFGVARMGRRAMVARIANTTYPE_TAG Dcm_CfgVarMgrRamVariantType;

# if (DCM_VARMGR_MODE_POSTBUILD_LOAD_ENABLED == STD_ON)
struct DCM_DIAGROMVARIANTINFOTYPE_TAG
{
  P2CONST(Dcm_CfgVarMgrBitSetType, AUTOMATIC, DCM_CONST_PBCFG) VariantFilter;
};
typedef struct DCM_DIAGROMVARIANTINFOTYPE_TAG Dcm_CfgDiagRomVariantInfoType;
# endif

struct DCM_CFGVARMGRROMVARIANTTYPE_TAG
{
  Dcm_CfgNetRomVariantInfoType  NetworkRom;
# if (DCM_VARMGR_MULTI_SVC_ANY_ENABLED == STD_ON)
  Dcm_CfgDiagRomVariantInfoType DiagRom;
# endif
};
typedef struct DCM_CFGVARMGRROMVARIANTTYPE_TAG Dcm_CfgVarMgrRomVariantType;

typedef P2CONST(Dcm_CfgVarMgrRamVariantType, TYPEDEF, DCM_CONST_PBCFG) Dcm_CfgVarMgrRamVariantPtrType;
typedef P2CONST(Dcm_CfgVarMgrRomVariantType, TYPEDEF, DCM_CONST_PBCFG) Dcm_CfgVarMgrRomVariantPtrType;
#endif
struct DCM_CONFIGTYPE_TAG
{
#if (DCM_VARMGR_SUPPORT_ENABLED == STD_ON)
# if (DCM_VARMGR_MULTI_COM_ENABLED == STD_ON)                                                                                                        /* COV_DCM_SUPPORT_ALWAYS TX */
  Dcm_CfgVarMgrComVariantType       ComVariant;
# endif
# if (DCM_DIAG_MULTI_SVC_TABLE_ENABLED == STD_ON)                                                                                                    /* COV_DCM_UNSUPPORTED XF */
  Dcm_CfgVarMgrBridgeVariantType    BridgeVariant;  /* a loadable/selectable bridge between COM and CFG variants */
# endif
# if (DCM_VARMGR_MULTI_SVC_ANY_ENABLED == STD_ON)                                                                                                    /* COV_DCM_UNSUPPORTED XF */
  Dcm_CfgVarMgrDiagVariantIdMemType DiagVariantId;
# endif
# if (DCM_VARMGR_MODE_POSTBUILD_LOAD_ENABLED == STD_ON)
  Dcm_CfgVarMgrRamVariantPtrType    RamVariant; /* relocatable PB RAM */
  Dcm_CfgVarMgrRomVariantPtrType    RomVariant; /* relocatable PB ROM */
# endif
  /* Generally required elements */
# if (DCM_VARMGR_MODE_POSTBUILD_LOAD_ENABLED == STD_ON)
  uint16                            GenOutputType;      /* Generator Output Compatibility Version */
  uint16                            FinalMagicNumber;   /* Configuration structure magic number   */
# endif
#else
  uint8 NoConfig; /* not used for now */
#endif
};
typedef struct DCM_CONFIGTYPE_TAG Dcm_ConfigType;

typedef P2CONST(Dcm_ConfigType, TYPEDEF, DCM_CONST_PBCFG) Dcm_ConfigPtrType;
# if (DCM_SVC_01_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_Svc01OpFuncType)(Dcm_MsgType);
struct DCM_CFGSVC01DATAINFOTYPE_TAG
{
  Dcm_Svc01OpFuncType   OpFunc;
  uint16                Length; /* PID + data = 1 + data */
};
typedef struct DCM_CFGSVC01DATAINFOTYPE_TAG Dcm_CfgSvc01ServiceInfoType;
# endif /* (DCM_SVC_01_SUPPORT_ENABLED == STD_ON) */
typedef uint8 Dcm_CfgSvc06Mid2TidRefMemType;
typedef uint8_least Dcm_CfgSvc06Mid2TidRefOptType;
# if (DCM_SVC_06_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc06MidTidOpFuncType) (Dcm_OpStatusType         /*opStatus*/
                                                                         ,Dcm_Uint16VarDataPtrType /*testValue*/
                                                                         ,Dcm_Uint16VarDataPtrType /*minValue*/
                                                                         ,Dcm_Uint16VarDataPtrType /*maxValue*/
                                                                         ,Dcm_Uint8VarDataPtrType  /*status*/);

struct DCM_CFGSVC06SERVICEINFOTYPE_TAG
{
  Dcm_Svc06MidTidOpFuncType  OpFunc;
  uint8                      Uasid;
  uint8                      Tid;
};
typedef struct DCM_CFGSVC06SERVICEINFOTYPE_TAG Dcm_CfgSvc06MidTidInfoType;
# endif /* (DCM_SVC_06_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_08_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc08OpFuncType) (Dcm_MsgType, Dcm_ReadOnlyMsgType);

struct DCM_CFGSVC08SERVICEINFOTYPE_TAG
{
  Dcm_Svc08OpFuncType OpFunc;
  uint16              ReqDataLen; /* TID + data = 1 + data */
  uint16              ResDataLen; /* TID + data = 1 + data */
};
typedef struct DCM_CFGSVC08SERVICEINFOTYPE_TAG Dcm_CfgSvc08ServiceInfoType;
# endif /* (DCM_SVC_08_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_09_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc09OpFuncType) (Dcm_OpStatusType
                                                                   ,Dcm_MsgType
#if (DCM_DCM_AR_VERSION >= DCM_DCM_AR_VERSION_422)
                                                                   ,Dcm_Uint8VarDataPtrType
#endif
                                                                   );

struct DCM_CFGSVC09SERVICEINFOTYPE_TAG
{
  Dcm_Svc09OpFuncType OpFunc;
  uint8               Length; /* Data Size */
};
typedef struct DCM_CFGSVC09SERVICEINFOTYPE_TAG Dcm_CfgSvc09ServiceInfoType;
# endif /* (DCM_SVC_09_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_10_SUPPORT_ENABLED == STD_ON) /* COV_DCM_SUPPORT_ALWAYS TX */
struct DCM_CFGSVC10SUBFUNCINFOTYPE_TAG
{
  Dcm_Svc10P2TimingsType   ResponseTime;
#if (DCM_SVC_10_JMP2BOOT_ENABLED == STD_ON)
  Dcm_Svc10SessionBootType BootType;
#endif
};
typedef struct DCM_CFGSVC10SUBFUNCINFOTYPE_TAG Dcm_CfgSvc10SubFuncInfoType;
# endif /* (DCM_SVC_10_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_11_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
struct DCM_CFGSVC11SUBFUNCINFOTYPE_TAG
{
  Dcm_DiagSvcProcessorFuncType      SubSvcFunc;
};
typedef struct DCM_CFGSVC11SUBFUNCINFOTYPE_TAG Dcm_CfgSvc11SubFuncInfoType;
# endif /* (DCM_SVC_11_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_19_SUPPORT_ENABLED == STD_ON)
struct DCM_CFGSVC19SUBFUNCINFOTYPE_TAG
{
  Dcm_DiagSvcProcessorFuncType      SubSvcFunc;
  uint8                             ReqLength; /*SF + data */
};
typedef struct DCM_CFGSVC19SUBFUNCINFOTYPE_TAG Dcm_CfgSvc19SubFuncInfoType;
# endif /* (DCM_SVC_19_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_27_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc27GetSeedFuncType)(void);

#if (DCM_DCM_AR_VERSION == DCM_DCM_AR_VERSION_403)
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc27CompareKeyFuncType)(Dcm_ReadOnlyMsgType
                                                                          ,Dcm_OpStatusType);
#else
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc27CompareKeyFuncType)(Dcm_ReadOnlyMsgType
                                                                          ,Dcm_OpStatusType
                                                                          ,Dcm_NegativeResponseCodePtrType);
#endif

#if (DCM_STATE_SEC_ATT_CNTR_EXT_STORAGE_ENABLED == STD_ON)
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc27GetAttemptCntrFuncType)(Dcm_OpStatusType
                                                                              ,P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT));

typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc27SetAttemptCntrFuncType)(Dcm_OpStatusType
                                                                              ,uint8);
#endif

struct DCM_CFGSVC27SUBFUNCINFOTYPE_TAG
{
  Dcm_DiagSvcProcessorFuncType      SubSvcFunc;
  Dcm_CfgNetBufferSizeMemType       ReqLength; /* for seed: SF + ADR_size, for key: SF + key_size*/
  Dcm_CfgNetBufferSizeMemType       ResLength; /* for seed: SF + seed_size, for key: SF */
};
typedef struct DCM_CFGSVC27SUBFUNCINFOTYPE_TAG Dcm_CfgSvc27SubFuncInfoType;

struct DCM_CFGSVC27SECLEVELINFOTYPE_TAG
{
  Dcm_Svc27GetSeedFuncType         GetSeedFunc;
  Dcm_Svc27CompareKeyFuncType      CompareKeyFunc;
#if (DCM_STATE_SEC_ATT_CNTR_EXT_STORAGE_ENABLED == STD_ON)
  Dcm_Svc27GetAttemptCntrFuncType  GetAttemptCntrFunc;
  Dcm_Svc27SetAttemptCntrFuncType  SetAttemptCntrFunc;
#endif
};
typedef struct DCM_CFGSVC27SECLEVELINFOTYPE_TAG Dcm_CfgSvc27SecLevelInfoType;
# endif /* (DCM_SVC_27_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_2C_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
struct DCM_CFGSVC2CSUBFUNCINFOTYPE_TAG
{
  Dcm_DiagSvcProcessorFuncType      SubSvcFunc;
  Dcm_CfgNetBufferSizeMemType       MinReqLength;
};
typedef struct DCM_CFGSVC2CSUBFUNCINFOTYPE_TAG Dcm_CfgSvc2CSubFuncInfoType;
# endif /* (DCM_SVC_2C_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_85_SUPPORT_ENABLED == STD_ON)
typedef P2FUNC(Dem_ReturnControlDTCSettingType, DEM_CODE, Dcm_DemControlDtcSettingFuncType) (Dem_DTCGroupType, Dem_DTCKindType);
struct DCM_CFGSVC85SUBFUNCINFOTYPE_TAG
{
  Dcm_DemControlDtcSettingFuncType  DemFunc;
  Rte_ModeType_DcmControlDtcSetting Mode;
};
typedef struct DCM_CFGSVC85SUBFUNCINFOTYPE_TAG Dcm_CfgSvc85SubFuncInfoType;
# endif /* (DCM_SVC_85_SUPPORT_ENABLED == STD_ON) */
/* ----------------------------------------------
 ~&&&   Module internal API function declarations
---------------------------------------------- */
# define DCM_START_SEC_CODE
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
# if (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
#if (DCM_DIDMGR_NVM_READ_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_DidMgrReadNvMSignal()
 *********************************************************************************************************************/
/*! \brief          Handler to read out a NvRam Block.
 *  \details        -
 *  \param[in]      opStatus    The operation status
 *  \param[out]     data        Response data buffer
 *  \param[in]      blockId     Id of the NvRam block
 *  \return         Operation result
 *  \context        TASK
 *  \reentrant      FALSE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_DidMgrNvMReadSignal(Dcm_OpStatusType opStatus
                                                      ,Dcm_MsgType data
                                                      ,uint16 blockId);
#endif

#if (DCM_DIDMGR_NVM_WRITE_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_DidMgrNvMWriteSignal()
 *********************************************************************************************************************/
/*! \brief          Handler to write a NvRam block.
 *  \details        -
 *  \param[in]      data         Request data buffer
 *  \param[in]      opStatus     The operation status
 *  \param[out]     errorCode    The NRC
 *  \param[in]      blockId      Id of the NvRam block
 *  \return         Operation result
 *  \context        TASK
 *  \reentrant      FALSE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_DidMgrNvMWriteSignal(Dcm_ReadOnlyMsgType data
                                                       ,Dcm_OpStatusType opStatus
                                                       ,Dcm_NegativeResponseCodePtrType errorCode
                                                       ,uint16 blockId);
#endif

#if (DCM_DIDMGR_SR_IO_CONTROL_ENABLED == STD_ON)
/**********************************************************************************************************************
*  Dcm_DidMgrIoCtrlSRHandler_Control()
*********************************************************************************************************************/
/*! \brief          Handler for IO Dids with S/R Interface
 *  \details        Handler for IO Dids with S/R Interface and operation type resetToDefault (0x01), freezeCurrentState(0x02)
 *                  or shortTermAdjustment (0x03)
 *  \param[in]      srEntryIndex    Index to table with corresponding RTE S/R callouts
 *  \param[in]      ioOperation     IO Operation type (InputOutputControlParameter of Service 0x02F)
 *  \param[in]      reqData         Request data containing the controlState in case of IO Operation shortTermAdjustment (0x03)
 *  \param[in]      opStatus        The operation status
 *  \param[in]      cemr            Control Enable Mask Record
 *  \param[out]     errorCode       The NRC
 *  \return         Operation result
 *  \context        TASK
 *  \reentrant      FALSE
 *  \pre            -
*********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_DidMgrIoCtrlSRHandler_Control(Dcm_CfgDidMgrIoCtrlSRHandlersRefOptType srEntryIndex
                                                                ,uint8 ioOperation
                                                                ,Dcm_ReadOnlyMsgType reqData
                                                                ,Dcm_OpStatusType opStatus
                                                                ,uint32 cemr
                                                                ,Dcm_NegativeResponseCodePtrType  errorCode);
#endif

#if (DCM_DIDMGR_SR_IO_CONTROL_ENABLED == STD_ON)
/**********************************************************************************************************************
*  Dcm_DidMgrIoCtrlSRHandler_Reset()
*********************************************************************************************************************/
/*! \brief          Handler for IO Dids with S/R Interface
 *  \details        Handler for IO Dids with S/R Interface and operation type retrunControlToEcu (0x00)
 *  \param[in]      srEntryIndex    Index to table with corresponding RTE S/R callouts
 *  \param[in]      cemr            Control Enable Mask Record
 *  \param[out]     errorCode       The NRC
 *  \return         Operation result
 *  \context        TASK
 *  \reentrant      FALSE
 *  \pre            -
*********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_DidMgrIoCtrlSRHandler_Reset(Dcm_CfgDidMgrIoCtrlSRHandlersRefOptType srEntryIndex
                                                              ,uint32 cemr
                                                              ,Dcm_NegativeResponseCodePtrType errorCode);
#endif
# endif /* (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON) */
# if (DCM_OBDUDSIDMGR_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_ObdIdMgrReadSupportedId()
 *********************************************************************************************************************/
/*! \brief          OBD Service "supported ID" reader.
 *  \details        -
 *  \param[in]      maskValue    The mask value
 *  \param[in]      resData      The response data
 *  \return         E_OK         This value is always returned
 *  \context        TASK
 *  \reentrant      TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_ObdIdMgrReadSupportedId(Dcm_ObdIdMgrMaskValueTableType maskValue
                                                          ,Dcm_MsgType resData);

#if (DCM_VARMGR_MULTI_SVC_ANY_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_ObdIdMgrGetDidAvailabilityMask()
 *********************************************************************************************************************/
/*! \brief          OBD availability DID (AID) mask value provider.
 *  \details        Calculates the 32bit mask value for PBS/PBL/CALIBRATABLE_OBD and pre-compile
 *  \param[in]      DidLookUpRefStart    The index of the first element in the DID look-up table the AID shall report.
 *  \param[in]      DidLookUpRefEnd      The index of the last element in the DID look-up table the AID shall report.
 *  \param[in]      maskValue            The offline generated/calibratable mask value
 *  \return         The 32 bit bitmap value
 *  \context        ISR1|ISR2|TASK
 *  \reentrant      TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(uint32, DCM_CODE) Dcm_ObdIdMgrGetDidAvailabilityMask(uint16 DidLookUpRefStart
                                                         ,uint16 DidLookUpRefEnd
                                                         ,Dcm_ObdIdMgrMaskValueTableType maskValue);
#else
/* Just return the offline calculated/calibrated mask. */
# define Dcm_ObdIdMgrGetDidAvailabilityMask(DidLookUpRefStart, DidLookUpRefEnd, maskValue) (maskValue)                                               /* PRQA S 3453 */ /* MD_MSR_19.7 */
#endif

#if (DCM_VARMGR_MULTI_SVC_ANY_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_ObdIdMgrGetRidAvailabilityMask()
 *********************************************************************************************************************/
/*! \brief          OBD availability RID (AID) mask value provider.
 *  \details        Calculates the 32bit mask value for PBS/PBL/CALIBRATABLE_OBD and pre-compile
 *  \param[in]      RidLookUpRefStart    The index of the first element in the RID look-up table the AID shall report.
 *  \param[in]      RidLookUpRefEnd      The index of the last element in the RID look-up table the AID shall report.
 *  \param[in]      maskValue            The offline generated/calibratable mask value
 *  \return         The 32 bit bitmap value
 *  \context        ISR1|ISR2|TASK
 *  \reentrant      TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(uint32, DCM_CODE) Dcm_ObdIdMgrGetRidAvailabilityMask(uint16 RidLookUpRefStart
                                                         ,uint16 RidLookUpRefEnd
                                                         ,Dcm_ObdIdMgrMaskValueTableType maskValue);
#else
/* Just return the offline calculated/calibrated mask. */
# define Dcm_ObdIdMgrGetRidAvailabilityMask(RidLookUpRefStart, RidLookUpRefEnd, maskValue) (maskValue)                                               /* PRQA S 3453 */ /* MD_MSR_19.7 */
#endif

#if (DCM_OBDUDSIDMGR_UDSMID_SUPPORT_BY_DCM_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_ObdIdMgrReadUdsMid()
 *********************************************************************************************************************/
/*! \brief          OBD Service "supported ID" reader.
 *  \details        -
 *  \param[in]      handle      The handle
 *  \param[in]      opStatus    The operation status
 *  \param[in]      resData     The response data
 *  \return         Operation result
 *  \context        TASK
 *  \reentrant      TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_ObdIdMgrReadUdsMid(Dcm_ObdIdMgrHandleMemType handle
                                                     ,Dcm_OpStatusType opStatus
                                                     ,Dcm_MsgType resData);
#endif
# endif /* (DCM_OBDUDSIDMGR_SUPPORT_ENABLED == STD_ON) */
FUNC(void, DCM_CODE) Dcm_Service27Init(void);
FUNC(void, DCM_CODE) Dcm_Service2FInit(void);
# if (DCM_SVC_2C_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
#if (DCM_DIDMGR_DYNDID_SRCITEM_CHECK_COND_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_Svc2CDefMgrConditionCheckRead()
 *********************************************************************************************************************/
/*! \brief          Common DynDID check read condition operation.
 *  \details        -
 *  \param[in]      dynDidHandle    DynDID reference to be read
 *  \param[in]      opStatus        Current operation status
 *  \param[out]     errorCode       Returns an error if any
 *  \return         Next action to perform
 *  \context        TASK
 *  \reentrant      FALSE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_Svc2CDefMgrConditionCheckRead(Dcm_CfgDidMgrDynDidHandleMemType dynDidHandle
                                                                ,Dcm_OpStatusType opStatus
                                                                ,Dcm_NegativeResponseCodePtrType errorCode);
#endif
/**********************************************************************************************************************
 *  Dcm_Svc2CDefMgrConditionCheckRead()
 *********************************************************************************************************************/
/*! \brief          Common DynDID reader operation.
 *  \details        -
 *  \param[in]      dynDidHandle    DynDID reference to be read
 *  \param[in]      opStatus        Current operation status
 *  \param[out]     data            Pointer to data to be filled in
 *  \return         Next action to perform
 *  \context        TASK
 *  \reentrant      FALSE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_Svc2CDefMgrRead(Dcm_CfgDidMgrDynDidHandleMemType dynDidHandle
                                                  ,Dcm_OpStatusType opStatus
                                                  ,Dcm_MsgType data);

/**********************************************************************************************************************
 *  Dcm_Svc2CDefMgrReadDataLength()
 *********************************************************************************************************************/
/*! \brief          Common DynDID reader operation.
 *  \details        -
 *  \param[in]      dynDidHandle    DynDID reference to be read
 *  \param[out]     dataLength      Returns the current DynDID length
 *  \return         Next action to perform
 *  \context        TASK
 *  \reentrant      FALSE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_Svc2CDefMgrReadDataLength(Dcm_CfgDidMgrDynDidHandleMemType dynDidHandle
                                                            ,Dcm_DidMgrDidLengthPtrType dataLength);
# endif /* (DCM_SVC_2C_SUPPORT_ENABLED == STD_ON) */
# define DCM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* ----------------------------------------------
 ~&&&   Call-back function declarations
---------------------------------------------- */
# define DCM_START_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
FUNC(void, DCM_CALLOUT_CODE) DcmDspSessionCallback(Dcm_SesCtrlType formerState, Dcm_SesCtrlType newState);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service10Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service11Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Srv14ClrDiagcInfo(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service19Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service22Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service27Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service2EProcessor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service2FProcessor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service31Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service3EProcessor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service85Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service10PostProcessor(Dcm_ConfirmationStatusType status);
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service10FastPostProcessor(Dcm_ConfirmationStatusType status);
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service11PostProcessor(Dcm_ConfirmationStatusType status);
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service11FastPostProcessor(Dcm_ConfirmationStatusType status);
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service19PostProcessor(Dcm_ConfirmationStatusType status);
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service27PostProcessor(Dcm_ConfirmationStatusType status);
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service2FPostProcessor(Dcm_ConfirmationStatusType status);
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service85PostProcessor(Dcm_ConfirmationStatusType status);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) EcuReset_Hard(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service19_01Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service19_02Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service19_06Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service19_0AProcessor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service27KeyProcessor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service27SeedProcessor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext);
# define DCM_STOP_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* ----------------------------------------------
 ~&&&   ROM 8-Bit
---------------------------------------------- */
# define DCM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* TxPduId to DCM connection map */
extern CONST(Dcm_NetConnRefMemType, DCM_CONST) Dcm_CfgNetTxPduInfo[2];
/* Map of DCM relevant network handles */
extern CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetConnComMChannelMap[1];
/* Security Fixed Byte values */
extern CONST(uint8, DCM_CONST) Dcm_CfgStateSecurityFixedBytes[24];
/* Look up table of DCM service identifiers */
extern CONST(uint8, DCM_CONST) Dcm_CfgDiagSvcIdLookUpTable[12];
/* Service 0x10 look up table  */
extern CONST(uint8, DCM_CONST) Dcm_CfgSvc10SubFuncLookUpTable[5];
/* Service 0x11 look up table  */
extern CONST(uint8, DCM_CONST) Dcm_CfgSvc11SubFuncLookUpTable[2];
/* Service 0x19 look up table  */
extern CONST(uint8, DCM_CONST) Dcm_CfgSvc19SubFuncLookUpTable[5];
/* Service 0x27 look up table  */
extern CONST(uint8, DCM_CONST) Dcm_CfgSvc27SubFuncLookUpTable[5];
/* Service 0x3E look up table  */
extern CONST(uint8, DCM_CONST) Dcm_CfgSvc3ESubFuncLookUpTable[2];
/* Look up table of service 0x85 */
extern CONST(uint8, DCM_CONST) Dcm_CfgSvc85SubFuncLookUpTable[3];
# define DCM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* ----------------------------------------------
 ~&&&   ROM 16-Bit
---------------------------------------------- */
# define DCM_START_SEC_CONST_16
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* DID look up table  */
extern CONST(uint16, DCM_CONST) Dcm_CfgDidMgrDidLookUpTable[72];
/* RID look up table  */
extern CONST(uint16, DCM_CONST) Dcm_CfgRidMgrRidLookUpTable[28];
# define DCM_STOP_SEC_CONST_16
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* ----------------------------------------------
 ~&&&   ROM of unspecified size
---------------------------------------------- */
# define DCM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* DCM buffer descriptor */
extern CONST(Dcm_CfgNetBufferInfoType, DCM_CONST) Dcm_CfgNetBufferInfo[1];
/* RxPduId map */
extern CONST(Dcm_CfgNetRxPduInfoType, DCM_CONST) Dcm_CfgNetRxPduInfo[4];
/* DCM connection descriptor */
extern CONST(Dcm_CfgNetConnectionInfoType, DCM_CONST) Dcm_CfgNetConnectionInfo[2];
/* DCM protocol descriptor */
extern CONST(Dcm_CfgNetProtocolInfoType, DCM_CONST) Dcm_CfgNetProtocolInfo[1];
/* Map of all relevant for DCM network handles */
extern CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetAllComMChannelMap[1];
/* Look up table of DCM relevant network handles */
extern CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetNetworkHandleLookUpTable[2];
/* Precondition mode rules */
extern CONST(Dcm_ModeRuleFuncType, DCM_CONST) Dcm_CfgModeMgrRules[2];
/* Diagnostic service execution conditions */
extern CONST(Dcm_CfgStatePreconditionInfoType, DCM_CONST) Dcm_CfgStatePreconditions[7];
/* Session state properties */
extern CONST(Dcm_CfgStateSessionInfoType, DCM_CONST) Dcm_CfgStateSessionInfo[4];
/* Security Access state properties */
extern CONST(Dcm_CfgStateSecurityInfoType, DCM_CONST) Dcm_CfgStateSecurityInfo[2];
/* Security level specific end index into Dcm_CfgStateSecurityFixedBytes[] (last +1) */
extern CONST(Dcm_CfgStateSecurityFixedByteRefMemType, DCM_CONST) Dcm_CfgStateSecurityFixedByteInfo[3];
/* Session state change notification(s) */
extern CONST(Dcm_CfgStateNotificationInfoType, DCM_CONST) Dcm_CfgStateSessionNotificationInfo[2];
/* DID ranges look up */
extern CONST(Dcm_CfgDidMgrDidRangeType, DCM_CONST) Dcm_CfgDidMgrDidRanges[4];
/* DID ranges to DID info map */
extern CONST(Dcm_CfgDidMgrDidInfoRefType, DCM_CONST) Dcm_CfgDidMgrRangeDidInfoRefs[3];
/* DID properties */
extern CONST(Dcm_CfgDidMgrDidInfoType, DCM_CONST) Dcm_CfgDidMgrDidInfo[71];
/* DID operation properties */
extern CONST(Dcm_CfgDidMgrOpInfoType, DCM_CONST) Dcm_CfgDidMgrOpInfo[110];
/* DID signal operation classes */
extern CONST(Dcm_CfgDidMgrSignalOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrSignalOpClassInfo[181];
/* IO control DID operation properties */
extern CONST(Dcm_CfgDidMgrOpInfoIoControlType, DCM_CONST) Dcm_CfgDidMgrOpInfoIoControl[3];
/* RID properties */
extern CONST(Dcm_CfgRidMgrRidInfoType, DCM_CONST) Dcm_CfgRidMgrRidInfo[27];
/* RID operation properties */
extern CONST(Dcm_CfgRidMgrOpInfoType, DCM_CONST) Dcm_CfgRidMgrOpInfo[40];
/* DCM service initializers */
extern CONST(Dcm_DiagSvcInitFuncType, DCM_CONST) Dcm_CfgDiagSvcInitializers[3];
/* DCM service properties */
extern CONST(Dcm_CfgDiagServiceInfoType, DCM_CONST) Dcm_CfgDiagServiceInfo[11];
/* Indirection from diag service info to execution pre conditions */
extern CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgDiagSvcIdExecPrecondTable[11];
/* DCM service post processors */
extern CONST(Dcm_DiagSvcConfirmationFuncType, DCM_CONST) Dcm_CfgDiagSvcPostProcessors[9];
/* OEM notification functions */
extern CONST(Dcm_CfgDiagNotificationInfoType, DCM_CONST) Dcm_CfgDiagOemNotificationInfo[2];
/* Service 0x10 sub-service properties table  */
extern CONST(Dcm_CfgSvc10SubFuncInfoType, DCM_CONST) Dcm_CfgSvc10SubFuncInfo[4];
/* Indirection from service 0x10 sub functions to execution pre conditions */
extern CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc10SubFuncExecPrecondTable[4];
/* Service 0x11 sub-service properties table  */
extern CONST(Dcm_CfgSvc11SubFuncInfoType, DCM_CONST) Dcm_CfgSvc11SubFuncInfo[1];
/* Indirection from service 0x11 sub functions to execution pre conditions */
extern CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc11SubFuncExecPrecondTable[1];
/* Service 0x19 sub-service properties table  */
extern CONST(Dcm_CfgSvc19SubFuncInfoType, DCM_CONST) Dcm_CfgSvc19SubFuncInfo[4];
/* Indirection from service 0x19 sub functions to execution pre conditions */
extern CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc19SubFuncExecPrecondTable[4];
/* Service 0x27 sub-service properties table  */
extern CONST(Dcm_CfgSvc27SubFuncInfoType, DCM_CONST) Dcm_CfgSvc27SubFuncInfo[4];
/* Service 0x27 security level properties table  */
extern CONST(Dcm_CfgSvc27SecLevelInfoType, DCM_CONST) Dcm_CfgSvc27SecLevelInfo[2];
/* Indirection from service 0x27 sub functions to execution pre conditions */
extern CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc27SubFuncExecPrecondTable[4];
/* Indirection from service 0x3E sub functions to execution pre conditions */
extern CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc3ESubFuncExecPrecondTable[1];
/* Indirection from service 0x85 sub functions to execution pre conditions */
extern CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc85SubFuncExecPrecondTable[2];
/* DCM service 0x85 properties */
extern CONST(Dcm_CfgSvc85SubFuncInfoType, DCM_CONST) Dcm_CfgSvc85SubFuncInfo[2];
# define DCM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
#endif /* !defined(DCM_LCFG_H) */
/* ********************************************************************************************************************
 * END OF FILE: Dcm_Lcfg.h
 * ******************************************************************************************************************** */

