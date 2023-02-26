/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Dcm_CoreTypes.h
 *        \brief  Public data type definition interface of DCM
 *
 *      \details  MICROSAR DCM based on AR 4.0.3
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
#if !defined(DCM_CORETYPES_H)
# define DCM_CORETYPES_H
/* ----------------------------------------------
 ~&&&   Versions
---------------------------------------------- */

/* Implementation version */
# define DCM_CORETYPES_MAJOR_VERSION                                 7u
# define DCM_CORETYPES_MINOR_VERSION                                 1u
# define DCM_CORETYPES_PATCH_VERSION                                 0u
/* ----------------------------------------------
 ~&&&   Switches
---------------------------------------------- */
# if (DCM_MEMMGR_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
#  if (DCM_SVC_23_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_2C_02_SUPPORT_ENABLED == STD_ON)
#   define DCM_MEMMGR_MEMOP_READ_ENABLED                             STD_ON
#  else
#   define DCM_MEMMGR_MEMOP_READ_ENABLED                             STD_OFF
#  endif

#  if (DCM_SVC_3D_SUPPORT_ENABLED == STD_ON)
#   define DCM_MEMMGR_MEMOP_WRITE_ENABLED                            STD_ON
#  else
#   define DCM_MEMMGR_MEMOP_WRITE_ENABLED                            STD_OFF
#  endif
# endif /* (DCM_MEMMGR_SUPPORT_ENABLED == STD_ON) */
# if ((DCM_BSW_ENV_ASR_VERSION_4XX_ENABLED == STD_ON) || \
     (DCM_BSW_ENV_ASR_VERSION_401_ENABLED == STD_ON) )                                                                                               /* COV_DCM_SUPPORT_PARTIALLY TX tx xf */
#  define DCM_BSW_ENV_ASR_VERSION_4_ANY_ENABLED                      STD_ON
# else
#  define DCM_BSW_ENV_ASR_VERSION_4_ANY_ENABLED                      STD_OFF
# endif

# if (DCM_DIDMGR_NVM_READ_ENABLED == STD_ON) || \
     (DCM_EXT_NEED_API_UTINVMREAD_ENABLED == STD_ON)                                                                                                 /* COV_DCM_UNSUPPORTED XF xf xf*/
#  define DCM_UTI_NVM_READ_ENABLED                                   STD_ON
# else
#  define DCM_UTI_NVM_READ_ENABLED                                   STD_OFF
# endif

# if (DCM_DIDMGR_NVM_WRITE_ENABLED == STD_ON) || \
     (DCM_EXT_NEED_API_UTINVMSWCDATAWRITE_ENABLED == STD_ON)                                                                                         /* COV_DCM_UNSUPPORTED XF xf xf */
#  define DCM_UTI_NVM_SWCDATA_WRITE_ENABLED                          STD_ON
# else
#  define DCM_UTI_NVM_SWCDATA_WRITE_ENABLED                          STD_OFF
# endif

# if (DCM_UTI_NVM_SWCDATA_WRITE_ENABLED  == STD_ON) || \
     (DCM_EXT_NEED_API_UTINVMWRITE_ENABLED == STD_ON)                                                                                                /* COV_DCM_UNSUPPORTED XF xf xf */
#  define DCM_UTI_NVM_WRITE_ENABLED                                  STD_ON
# else
#  define DCM_UTI_NVM_WRITE_ENABLED                                  STD_OFF
# endif
# if defined (DCM_DEBUG_ERROR_DETECT)                                                                                                                /* COV_DCM_DEV_DEBUG XF */
#  if (DCM_DEBUG_ERROR_DETECT != STD_ON) && \
      (DCM_DEBUG_ERROR_DETECT != STD_OFF)
#   error "Invalid value for DCM_DEBUG_ERROR_DETECT! Shall be STD_ON or STD_OFF!"
#  endif
# else
#  define DCM_DEBUG_ERROR_DETECT                                     STD_OFF
# endif
# if(DCM_NET_MULTI_PERIODIC_TX_OBJ_ENABLED == STD_ON)                                                                                                /* COV_DCM_UNSUPPORTED XF */
#  define DCM_NET_PTXOBJ_SOFT_TIMER_ENABLED                          STD_ON
# else
#  define DCM_NET_PTXOBJ_SOFT_TIMER_ENABLED                          STD_OFF
# endif

# if (DCM_NET_SUPPRESS_ON_FUNC_REQ_ENABLED == STD_ON)  || \
     (DCM_NET_CONNECTION_WITHOUT_TX_ENABLED == STD_ON)                                                                                               /* COV_DCM_UNSUPPORTED TF xf tf */
#  define DCM_NET_CONN_PROPERTIES_ENABLED                            STD_ON
# else
#  define DCM_NET_CONN_PROPERTIES_ENABLED                            STD_OFF
# endif

# if (DCM_NET_MONITOR_FOREIGN_N_TA_ENABLED == STD_ON) && \
     (DCM_VARMGR_MULTI_COM_ENABLED == STD_ON)                                                                                                        /* COV_DCM_UNSUPPORTED XF xf tf */
#  define DCM_NET_CONN_ECUC_ADDRESS_ENABLED                          STD_ON
# else
#  define DCM_NET_CONN_ECUC_ADDRESS_ENABLED                          STD_OFF
# endif

# if (DCM_NET_PROTOCOL_PRIORITISATION_ENABLED == STD_ON) || \
     (DCM_NET_MONITOR_FOREIGN_N_TA_ENABLED    == STD_ON)                                                                                             /* COV_DCM_UNSUPPORTED XF xf xf */
#  define DCM_NET_PROCESSING_CANCELLATION_ENABLED                    STD_ON
# else
#  define DCM_NET_PROCESSING_CANCELLATION_ENABLED                    STD_OFF
# endif
# if(DCM_STATE_SESSION_NOTIFICATION_ENABLED == STD_ON) || \
    (DCM_STATE_SECURITY_NOTIFICATION_ENABLED == STD_ON)
#  define DCM_STATE_ANY_NOTIFICATION_ENABLED                         STD_ON
# else
#  define DCM_STATE_ANY_NOTIFICATION_ENABLED                         STD_OFF
# endif

# if (DCM_STATE_SECURITY_ENABLED == STD_ON) && \
     (DCM_SVC_27_SUPPORT_ENABLED == STD_OFF)                                                                                                         /* COV_DCM_SUPPORT_PARTIALLY TF tf tx */
#  define DCM_STATE_SECURITY_EXT_SETTER_ENABLED                      STD_ON
# else
#  define DCM_STATE_SECURITY_EXT_SETTER_ENABLED                      STD_OFF
# endif

# if (DCM_STATE_SECURITY_FIXED_BYTES_ENABLED == STD_ON) || \
     (DCM_STATE_SECURITY_EXT_SETTER_ENABLED == STD_ON)                                                                                               /* COV_DCM_SUPPORT_PARTIALLY TF xf tf */
#  define DCM_STATE_SECURITY_LOOKUP_ENABLED                          STD_ON
# else
#  define DCM_STATE_SECURITY_LOOKUP_ENABLED                          STD_OFF
# endif
# if(DCM_DIAG_OEM_NOTIFICATION_ENABLED == STD_ON) || \
    (DCM_DIAG_SYS_NOTIFICATION_ENABLED == STD_ON)
#  define DCM_DIAG_ANY_NOTIFICATION_ENABLED                          STD_ON
# else
#  define DCM_DIAG_ANY_NOTIFICATION_ENABLED                          STD_OFF
# endif

# if (DCM_DIAG_RCRRP_LIMIT_ENABLED == STD_ON) || \
     (DCM_NET_PROCESSING_CANCELLATION_ENABLED == STD_ON)                                                                                             /* COV_DCM_UNSUPPORTED TF tf xf */
#  define DCM_DIAG_CANCEL_OP_ENABLED                                 STD_ON
# else
#  define DCM_DIAG_CANCEL_OP_ENABLED                                 STD_OFF
# endif

# if (DCM_NET_PROTOCOL_PRIORITISATION_ENABLED == STD_ON) && \
     (DCM_SPLIT_TASKS_ENABLED == STD_ON)                                                                                                             /* COV_DCM_UNSUPPORTED XF xf tf */
#  define DCM_DIAG_GARB_COL_ENABLED                                  STD_ON
# else
#  define DCM_DIAG_GARB_COL_ENABLED                                  STD_OFF
# endif
# if (DCM_VARMGR_MULTI_SVC_EXCLUSIVE_ENABLED  == STD_ON) || \
     (DCM_VARMGR_MULTI_SVC_INCLUSIVE_ENABLED  == STD_ON)                                                                                             /* COV_DCM_UNSUPPORTED XF xf xf */
#  define DCM_VARMGR_MULTI_SVC_ANY_ENABLED                           STD_ON
# else
#  define DCM_VARMGR_MULTI_SVC_ANY_ENABLED                           STD_OFF
# endif
# if (DCM_SVC_10_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_SUPPORT_ALWAYS TX */
#  if (DCM_SVC_10_JMP2BOOT_ENABLED == STD_ON)
#   if (DCM_SVC_10_RST2BOOT_HIS_ENABLED == STD_ON)
    /* never reached code since ECU is reset prior response transmission */
#   else
#    define DCM_SVC_10_RESET_AFTER_RESPONSE                          STD_ON
#   endif
#  endif

#  if defined(DCM_SVC_10_RESET_AFTER_RESPONSE)
/* already exists */
#  else
#   define DCM_SVC_10_RESET_AFTER_RESPONSE                           STD_OFF
#  endif
# endif /* (DCM_SVC_10_SUPPORT_ENABLED == STD_ON) */
/* ----------------------------------------------
 ~&&&   Defines
---------------------------------------------- */
# if (DCM_MEMMGR_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
#  define DCM_MEMMGR_OP_RSLT_OK                                      ((Dcm_MemMgrOpResultType)0x00u)
#  define DCM_MEMMGR_OP_RSLT_PENDING                                 ((Dcm_MemMgrOpResultType)0x01u)
#  define DCM_MEMMGR_OP_RSLT_FAILED                                  ((Dcm_MemMgrOpResultType)0x02u)
#  define DCM_MEMMGR_OP_RSLT_FORCE_RCRRP                             ((Dcm_MemMgrOpResultType)0x03u)
#  define DCM_READ_OK                                                DCM_MEMMGR_OP_RSLT_OK
#  define DCM_READ_PENDING                                           DCM_MEMMGR_OP_RSLT_PENDING
#  define DCM_READ_FAILED                                            DCM_MEMMGR_OP_RSLT_FAILED
#  define DCM_READ_FORCE_RCRRP                                       DCM_MEMMGR_OP_RSLT_FORCE_RCRRP
#  define DCM_WRITE_OK                                               DCM_MEMMGR_OP_RSLT_OK
#  define DCM_WRITE_PENDING                                          DCM_MEMMGR_OP_RSLT_PENDING
#  define DCM_WRITE_FAILED                                           DCM_MEMMGR_OP_RSLT_FAILED
#  define DCM_WRITE_FORCE_RCRRP                                      DCM_MEMMGR_OP_RSLT_FORCE_RCRRP
# endif /* (DCM_MEMMGR_SUPPORT_ENABLED == STD_ON) */
/* Used a re-definable constant to have better debugging support at customer side.
 * When needed, override this macro in a user configuration file: "#define DCM_LOCAL_INLINE".
 */
# if !defined (DCM_LOCAL_INLINE)                                                                                                                     /* COV_DCM_MACRO_OVERRIDE */
#  define DCM_LOCAL_INLINE                                           LOCAL_INLINE
# endif

/* Used a re-definable constant to have better debugging support at customer side.
 * When needed, override this macro in a user configuration file: "#define DCM_LOCAL".
 */
# if !defined (DCM_LOCAL)                                                                                                                            /* COV_DCM_MACRO_OVERRIDE */
#  define DCM_LOCAL                                                  static
# endif
# if (DCM_VARMGR_MODE_POSTBUILD_LOAD_ENABLED == STD_ON)
#  define DCM_CONST_PBCFG                                            DCM_PBCFG
#  define DCM_RAM_PBCFG                                              DCM_VAR_PBCFG
# else
#  define DCM_CONST_PBCFG                                            DCM_CONST
#  define DCM_RAM_PBCFG                                              DCM_VAR_NOINIT
# endif

/* Post build loadable abstraction */
# if (DCM_VARMGR_MODE_POSTBUILD_LOAD_ENABLED == STD_ON)
#  define DCM_PB_RAM_DATA_DECL(dataType, dataName, dataSize)         /* to be used PB configuration roots */
# else
#  define DCM_PB_RAM_DATA_DECL(dataType, dataName, dataSize)         dataType dataName[dataSize];                                                    /* PRQA S 3412, 3410 */ /* MD_MSR_19.4, MD_Dcm_StructMemberAbstr_3410 */
# endif
# if (DCM_SPLIT_TASKS_ENABLED == STD_ON)
#  define DCM_VOLATILE_ON_SPLITTASK                                  volatile
# else
#  define DCM_VOLATILE_ON_SPLITTASK                                  /* not used */
# endif
/*******************************
 ***  DCM generic return codes
 *******************************/
# define DCM_E_OK                                                    ((Std_ReturnType)E_OK)
# define DCM_E_NOT_OK                                                ((Std_ReturnType)E_NOT_OK)

# define DCM_E_PROTOCOL_NOT_ALLOWED                                  ((Std_ReturnType)5)

# define DCM_E_ROE_NOT_ACCEPTED                                      ((Std_ReturnType)6)
# define DCM_E_PERIODICID_NOT_ACCEPTED                               ((Std_ReturnType)7)

# define DCM_E_REQUEST_NOT_ACCEPTED                                  ((Std_ReturnType)8)
# define DCM_E_PENDING                                               ((Std_ReturnType)10)
# define DCM_E_COMPARE_KEY_FAILED                                    ((Std_ReturnType)11)


# define DCM_E_FORCE_RCRRP                                           ((Std_ReturnType)12)
/* Vendor specific return values */
# define DCM_E_PROCESSINGDONE                                        ((Std_ReturnType)40)
# define DCM_E_LOOP                                                  ((Std_ReturnType)41)
# define DCM_E_BUFFERTOOLOW                                          ((Std_ReturnType)42)
/* Deprecated!
#define DCM_E_NOCOMMMODE                                             ((Std_ReturnType)43)
*/
# define DCM_E_PENDING_LIMITER                                       ((Std_ReturnType)44)
# define DCM_E_LOOKUP_MATCH_FOUND                                    ((Std_ReturnType)45)
# if (DCM_BSW_ENV_ASR_VERSION_3XX_ENABLED == STD_ON)                                                                                                 /* COV_DCM_UNSUPPORTED XF */
#  define DCM_NET_TOBJ_ADDBUFFER_SIZE                                10u
# endif /* (DCM_BSW_ENV_ASR_VERSION_3XX_ENABLED == STD_ON) */
# if (DCM_BSW_ENV_ASR_VERSION_4XX_ENABLED == STD_ON) || \
     (DCM_BSW_ENV_ASR_VERSION_401_ENABLED == STD_ON)                                                                                                 /* COV_DCM_SUPPORT_PARTIALLY TX tx xf */
/* Override generated DCM version by the MSR one from compiler.h */
#  if defined(MSR_PDUR_API_AR_VERSION)                                                                                                               /* COV_DCM_UNSUPPORTED XF */
#   undef DCM_PDUR_API_AR_VERSION                                                                                                                    /* PRQA S 0841 */ /* MD_Dcm_Understand_0841 */
#   define DCM_PDUR_API_AR_VERSION                                   MSR_PDUR_API_AR_VERSION
#  endif

#  define DCM_PDUR_API_401_ENABLED                                   STD_OFF
#  define DCM_PDUR_API_403_ENABLED                                   STD_OFF
#  define DCM_PDUR_API_412_ENABLED                                   STD_OFF

#  if defined(DCM_PDUR_API_AR_VERSION)                                                                                                               /* COV_DCM_SUPPORT_ALWAYS TX */
#   if (DCM_PDUR_API_AR_VERSION == 0x401u)                                                                                                           /* COV_DCM_UNSUPPORTED XF */
#    undef DCM_PDUR_API_401_ENABLED                                                                                                                  /* PRQA S 0841 */ /* MD_Dcm_Understand_0841 */
#    define DCM_PDUR_API_401_ENABLED                                 STD_ON
#   elif (DCM_PDUR_API_AR_VERSION == 0x403u)                                                                                                         /* COV_DCM_UNSUPPORTED XF */
#    undef DCM_PDUR_API_403_ENABLED                                                                                                                  /* PRQA S 0841 */ /* MD_Dcm_Understand_0841 */
#    define DCM_PDUR_API_403_ENABLED                                 STD_ON
#   elif (DCM_PDUR_API_AR_VERSION == 0x412u)                                                                                                         /* COV_DCM_SUPPORT_ALWAYS TX */
#    undef DCM_PDUR_API_412_ENABLED                                                                                                                  /* PRQA S 0841 */ /* MD_Dcm_Understand_0841 */
#    define DCM_PDUR_API_412_ENABLED                                 STD_ON
#   else
#    error "Not supported DCM/MSR PduR version! No PduR BSWMD file in your MSR project?"
#   endif
#  else
#   error "Missing DCM_PDUR_API_AR_VERSION! Mixing new BSW with old generation tool?"
#  endif

/* size of buffer for RCRRP and BRRP in transport object */
#  define DCM_NET_TOBJ_ADDBUFFER_SIZE                                3u
# endif /* (DCM_BSW_ENV_ASR_VERSION_4XX_ENABLED == STD_ON) || \
 (DCM_BSW_ENV_ASR_VERSION_401_ENABLED == STD_ON) */
# if (DCM_BSW_ENV_ASR_VERSION_3XX_ENABLED == STD_ON)                                                                                                 /* COV_DCM_UNSUPPORTED XF */
#  define DCM_NO_RESET                                               ((Dcm_ResetModeType)0)
#  define DCM_HARD_RESET                                             ((Dcm_ResetModeType)1)
#  define DCM_KEY_ON_OFF_RESET                                       ((Dcm_ResetModeType)2)
#  define DCM_SOFT_RESET                                             ((Dcm_ResetModeType)3)
#  define DCM_ENABLE_RAPID_POWER_SHUTDOWN_RESET                      ((Dcm_ResetModeType)4)
#  define DCM_DISABLE_RAPID_POWER_SHUTDOWN_RESET                     ((Dcm_ResetModeType)5)
#  define DCM_BOOTLOADER_RESET                                       ((Dcm_ResetModeType)6)
#  define DCM_SS_BOOTLOADER_RESET                                    ((Dcm_ResetModeType)7)
#  define DCM_RESET_EXECUTION                                        ((Dcm_ResetModeType)8)
# endif /* (DCM_BSW_ENV_ASR_VERSION_3XX_ENABLED == STD_ON) */
# if (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
/* DID operation types - bitmapped which gives the application the opportunity to "OR" multiple operations per DID */
#  define DCM_DID_OP_READ                                            ((Dcm_DidOpType)0x01u)
#  define DCM_DID_OP_WRITE                                           ((Dcm_DidOpType)0x02u)
#  define DCM_DID_OP_IO                                              ((Dcm_DidOpType)0x04u)
#  define DCM_DID_OP_SCALINGINFO                                     ((Dcm_DidOpType)0x08u)
#  define DCM_DID_OP_DEFINE                                          ((Dcm_DidOpType)0x10u)
# endif /* (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON) */
# define DCM_COLD_START                                              ((Dcm_EcuStartModeType)0x00u)/* normal start */
# define DCM_WARM_START                                              ((Dcm_EcuStartModeType)0x01u)/* start after FBL programming finished */

# if !defined (DCM_E_PANIC_NRC)                                                                                                                      /* COV_DCM_MACRO_OVERRIDE */
#  define DCM_E_PANIC_NRC                                            DCM_E_GENERALREJECT
# endif
# if (DCM_SVC_28_SUPPORT_ENABLED == STD_ON)
#  define DCM_SVC_28_NETWORK_ALL                                     ((NetworkHandleType)0xFFu)
#  define DCM_SVC_28_NETWORK_CURRENT                                 ((NetworkHandleType)0xFEu)
# endif /* (DCM_SVC_28_SUPPORT_ENABLED == STD_ON) */
/* ----------------------------------------------
 ~&&&   Typedefs
---------------------------------------------- */
# if (DCM_MEMMGR_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
typedef uint8 Dcm_MemMgrOpResultType;
typedef Dcm_MemMgrOpResultType Dcm_ReturnReadMemoryType;
typedef Dcm_MemMgrOpResultType Dcm_ReturnWriteMemoryType;
# endif /* (DCM_MEMMGR_SUPPORT_ENABLED == STD_ON) */
/*******************************
 ***  DCM common types
 *******************************/
typedef uint8                                                 Dcm_IdContextType;
typedef unsigned int                                          Dcm_BitType;
typedef uint8                                                 Dcm_MsgItemType;
typedef P2VAR(Dcm_MsgItemType, TYPEDEF, DCM_VAR_NOINIT)       Dcm_MsgType;
typedef P2CONST(Dcm_MsgItemType, TYPEDEF, DCM_VAR_NOINIT)     Dcm_ReadOnlyMsgType;
typedef CONSTP2VAR(Dcm_MsgItemType, TYPEDEF, DCM_VAR_NOINIT)  Dcm_ConstMsgType;
typedef CONSTP2VAR(Dcm_MsgItemType, TYPEDEF, DCM_RAM_PBCFG)   Dcm_PbConstMsgType;
typedef P2VAR(Dcm_MsgItemType, TYPEDEF, DCM_APPL_DATA)        Dcm_ApplMsgType;
typedef uint32                                                Dcm_MsgLenType;
typedef P2VAR(void, TYPEDEF, DCM_VAR_NOINIT)                  Dcm_GenericDcmRamNoInitPtrType;
typedef P2CONST(void, TYPEDEF, DCM_VAR_NOINIT)                Dcm_GenericDcmConstRamNoInitPtrType;

typedef P2VAR(uint8, TYPEDEF, AUTOMATIC)                      Dcm_Ptr2LocalU8Type;
typedef P2VAR(uint16, TYPEDEF, AUTOMATIC)                     Dcm_Ptr2LocalU16Type;
typedef P2VAR(Dcm_MsgLenType, TYPEDEF, DCM_VAR_NOINIT)        Dcm_MsgLenPtrType;

typedef P2VAR(uint8, TYPEDEF, DCM_VAR_NOINIT)                 Dcm_Uint8VarDataPtrType;
typedef P2VAR(uint16, TYPEDEF, DCM_VAR_NOINIT)                Dcm_Uint16VarDataPtrType;
typedef P2VAR(uint32, TYPEDEF, DCM_VAR_NOINIT)                Dcm_Uint32VarDataPtrType;

typedef CONSTP2CONST(uint8, TYPEDEF, DCM_CONST)               Dcm_Uint8ConstDataConstPtrType;
typedef CONSTP2CONST(uint16, TYPEDEF, DCM_CONST)              Dcm_Uint16ConstDataConstPtrType;
typedef CONSTP2CONST(uint32, TYPEDEF, DCM_CONST)              Dcm_Uint32ConstDataConstPtrType;
typedef CONSTP2CONST(uint32, TYPEDEF, DCM_CAL_PRM)            Dcm_Uint32CalibDataConstPtrType;

typedef P2CONST(uint8, TYPEDEF, DCM_CONST)                    Dcm_Uint8ConstDataPtrType;
typedef P2CONST(uint32, TYPEDEF, DCM_CONST)                   Dcm_Uint32ConstDataPtrType;
typedef P2CONST(uint32, TYPEDEF, DCM_CAL_PRM)                 Dcm_Uint32CalibDataPtrType;

typedef Std_ReturnType                                        Dcm_StatusType;

struct DCM_UTIRANGEU16TYPE_TAG
{
  uint16 LowerLimit;
  uint16 UpperLimit;
};
typedef struct DCM_UTIRANGEU16TYPE_TAG Dcm_UtiU16RangeType;
typedef uint8 Dcm_DetErrorCodeType;
typedef uint8 Dcm_DetApiIdType;
# if (DCM_BSW_ENV_ASR_VERSION_3XX_ENABLED == STD_ON)                                                                                                 /* COV_DCM_UNSUPPORTED XF */
#  define Dcm_NetArEnvNotifResultType                                NotifResultType
# endif /* (DCM_BSW_ENV_ASR_VERSION_3XX_ENABLED == STD_ON) */
# if (DCM_BSW_ENV_ASR_VERSION_4XX_ENABLED == STD_ON) || \
     (DCM_BSW_ENV_ASR_VERSION_401_ENABLED == STD_ON)                                                                                                 /* COV_DCM_SUPPORT_PARTIALLY TX tx xf */
#  if (DCM_PDUR_API_401_ENABLED == STD_ON)                                                                                                           /* COV_DCM_UNSUPPORTED XF */
#   define Dcm_NetArEnvNotifResultType                               NotifResultType
#  elif (DCM_PDUR_API_403_ENABLED == STD_ON)                                                                                                         /* COV_DCM_UNSUPPORTED XF */
#   define Dcm_NetArEnvNotifResultType                               NotifResultType
#  elif (DCM_PDUR_API_412_ENABLED == STD_ON)                                                                                                         /* COV_DCM_SUPPORT_ALWAYS TX */
#   define Dcm_NetArEnvNotifResultType                               Std_ReturnType
#  else
#   error "Unsupported PduR version!"
#  endif
# endif /* (DCM_BSW_ENV_ASR_VERSION_4XX_ENABLED == STD_ON) || \
 (DCM_BSW_ENV_ASR_VERSION_401_ENABLED == STD_ON) */
typedef uint8        Dcm_NetConnRefMemType;
typedef uint8_least  Dcm_NetConnRefOptType;
# if (DCM_BSW_ENV_ASR_VERSION_3XX_ENABLED == STD_ON)                                                                                                 /* COV_DCM_UNSUPPORTED XF */
typedef uint8 Dcm_ResetModeType;
# endif /* (DCM_BSW_ENV_ASR_VERSION_3XX_ENABLED == STD_ON) */
typedef uint8       Dcm_StateIndexMemType;
typedef uint8_least Dcm_StateIndexOptType;
typedef uint16 Dcm_TmrTimerCntrMemType;
typedef uint16_least Dcm_TmrTimerCntrOptType;
# if (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
typedef uint8       Dcm_DidOpMemType;
typedef uint8_least Dcm_DidOpOptType;

typedef Dcm_DidOpMemType Dcm_DidOpType;
# endif /* (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON) */
# if (DCM_OBDUDSIDMGR_SUPPORT_ENABLED == STD_ON)                                                                                                     /* COV_DCM_UNSUPPORTED XF */
#  if (DCM_OBDUDSIDMGR_CALIBRATION_ENABLED == STD_ON)
typedef Dcm_Uint32CalibDataPtrType      Dcm_ObdMaskConstDataPtrType;
#  else
typedef Dcm_Uint32ConstDataPtrType      Dcm_ObdMaskConstDataPtrType;
#  endif

typedef uint32 Dcm_ObdIdMgrMaskValueTableType;
# endif /* (DCM_OBDUDSIDMGR_SUPPORT_ENABLED == STD_ON) */
typedef uint8 Dcm_EcuStartModeType;

struct DCM_PROGCONDITIONSTYPE_TAG
{
  uint16  TesterSourceAddr; /* AR 4.0.3 specifics the client ID to be a U8 for this API, but the connection configuration has a 16 Bit value! */
  uint8   ProtocolId;
  uint8   Sid;
  uint8   SubFuncId;
  boolean ReprogrammingRequest;
  boolean ApplUpdated;
  boolean ResponseRequired;
};
typedef struct DCM_PROGCONDITIONSTYPE_TAG Dcm_ProgConditionsType;

typedef P2VAR(Dcm_ProgConditionsType, TYPEDEF, DCM_VAR_NOINIT) Dcm_ProgConditionsPtrType;

struct DCM_DIAGP2TIMINGSTYPE_TAG
{
  Dcm_TmrTimerCntrMemType P2;
  Dcm_TmrTimerCntrMemType P2Star;
};
typedef struct DCM_DIAGP2TIMINGSTYPE_TAG Dcm_DiagP2TimingsType;

/* Additional information about a request */
struct DCMMSGADDINFO_TAG
{
  Dcm_BitType reqType               :1; /* 0: physical 1: functional */
  Dcm_BitType suppressPosResponse   :1; /* 0: do not suppress positive response, 1: do suppress positive response  */
};
typedef struct DCMMSGADDINFO_TAG Dcm_MsgAddInfoType;

/* Context information of a request */
struct DCMMSGCONTEXT_TAG
{
  Dcm_MsgLenType     reqDataLen;
  Dcm_MsgLenType     resDataLen;
  Dcm_MsgLenType     resMaxDataLen;
  Dcm_MsgType        reqData;
  Dcm_MsgType        resData;
  Dcm_MsgAddInfoType msgAddInfo;
  PduIdType          rxPduId;
  Dcm_IdContextType  idContext;
};
typedef struct DCMMSGCONTEXT_TAG Dcm_MsgContextType;

typedef P2VAR(Dcm_MsgContextType, TYPEDEF, DCM_VAR_NOINIT) Dcm_MsgContextPtrType;
typedef P2CONST(Dcm_MsgContextType, TYPEDEF, DCM_VAR_NOINIT) Dcm_ReadOnlyMsgContextPtrType;
typedef P2VAR(Dcm_NegativeResponseCodeType, TYPEDEF, DCM_VAR_NOINIT) Dcm_NegativeResponseCodePtrType;

# if (DCM_DIAG_STATE_RECOVERY_ENABLED == STD_ON)                                                                                                     /* COV_DCM_UNSUPPORTED XF */
struct DCM_RECOVERYINFOTYPE_TAG
{
#  if (DCM_MODE_CTRLDTCSETTING_ENABLED == STD_ON)
#   if (DCM_SVC_85_DTC_GRP_ENABLED == STD_ON)
  uint32                     ControlDTCSettingDTCGroup;
#   endif
  boolean                    ControlDTCSettingDisabled;
#  endif
  boolean                    ComMChannelState[DCM_NET_MAX_NUM_COMM_CHANNELS_CONST];
#  if (DCM_MODE_COMMCTRL_ENABLED == STD_ON)
  Dcm_CommunicationModeType  CommControlState[DCM_NET_MAX_NUM_ALL_COMM_CHANNELS_CONST];
#  endif
  Dcm_StateIndexMemType      SessionLevel;
#  if (DCM_STATE_SECURITY_ENABLED == STD_ON)
  Dcm_StateIndexMemType      SecurityLevel;
#  endif
#  if (DCM_NET_PROTECT_SESSION_OF_CLIENT_ENABLED == STD_ON)
  Dcm_NetConnRefMemType      SessionConnection;
#  endif
  uint32                     Signature; /* Signature placed at the end for better reliability of its value */
};
typedef struct DCM_RECOVERYINFOTYPE_TAG Dcm_RecoveryInfoType;
# endif
# if (DCM_SVC_10_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_SUPPORT_ALWAYS TX */
#  define DCM_SVC10_BOOT_TYPE_NONE                                   (Dcm_Svc10SessionBootType)0
#  define DCM_SVC10_BOOT_TYPE_OEM                                    (Dcm_Svc10SessionBootType)1
#  define DCM_SVC10_BOOT_TYPE_SYS                                    (Dcm_Svc10SessionBootType)2
typedef uint8 Dcm_Svc10SessionBootType;

struct DCM_SVC10P2TIMINGSTYPE_TAG
{
  uint16 P2;
  uint16 P2Star;
};
typedef struct DCM_SVC10P2TIMINGSTYPE_TAG Dcm_Svc10P2TimingsType;
# endif /* (DCM_SVC_10_SUPPORT_ENABLED == STD_ON) */
#endif /* !defined(DCM_CORETYPES_H) */
/* ********************************************************************************************************************
 * END OF FILE: Dcm_CoreTypes.h
 * ******************************************************************************************************************** */
