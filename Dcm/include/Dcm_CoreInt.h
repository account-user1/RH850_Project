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
/**        \file  Dcm_CoreInt.h
 *        \brief  Private data type definition and interface of DCM
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
#if !defined(DCM_COREINT_H)
# define DCM_COREINT_H
/* ----------------------------------------------
 ~&&&   Versions
---------------------------------------------- */

/* Implementation version */
# define DCM_COREINT_MAJOR_VERSION                                   7u
# define DCM_COREINT_MINOR_VERSION                                   1u
# define DCM_COREINT_PATCH_VERSION                                   0u
/* ----------------------------------------------
 ~&&&   Switches
---------------------------------------------- */
# if (DCM_BSW_ENV_ASR_VERSION_4XX_ENABLED == STD_ON) || \
     (DCM_BSW_ENV_ASR_VERSION_3XX_ENABLED == STD_ON) || \
     (DCM_BSW_ENV_ASR_VERSION_401_ENABLED == STD_ON)                                                                                                 /* COV_DCM_SUPPORT_PARTIALLY TX tx xf xf */
/* everything OK */
# else
#  error "Unknown Autosar BSW environment version!"
# endif
# if (DCM_SVC_86_SUPPORT_ENABLED == STD_ON) || \
     (DCM_DIAG_VIRTUAL_REQUEST_ENABLED == STD_ON)                                                                                                    /* COV_DCM_UNSUPPORTED TF xf tf */
#  define DCM_NET_INTERNAL_REQ_ENABLED                               STD_ON
# else
#  define DCM_NET_INTERNAL_REQ_ENABLED                               STD_OFF
# endif

# if (DCM_NET_MULTI_PROTOCOL_ENABLED == STD_ON) || \
     (DCM_NET_MONITOR_FOREIGN_N_TA_ENABLED    == STD_ON)                                                                                             /* COV_DCM_UNSUPPORTED XF xf xf */
#  define DCM_NET_TASK_RX_ENABLED                                    STD_ON
# else
#  define DCM_NET_TASK_RX_ENABLED                                    STD_OFF
# endif
# if (DCM_MODEMGR_SUPPORT_ENABLED == STD_ON)                                                                                                         /* COV_DCM_SUPPORT_ALWAYS TX */
#  if (DCM_MODE_CTRLDTCSETTING_MONITOR_ENABLED == STD_ON) || \
      (DCM_MODE_COMMCTRL_MONITOR_ENABLED == STD_ON)
#   define DCM_MODEMGR_MONITORING_ENABLED                            STD_ON
#  else
#   define DCM_MODEMGR_MONITORING_ENABLED                            STD_OFF
#  endif
# endif /* (DCM_MODEMGR_SUPPORT_ENABLED == STD_ON) */
# if (DCM_DEMAPIMGR_SUPPORT_ENABLED == STD_ON)
#  if (DCM_SVC_14_SUPPORT_ENABLED == STD_ON)
#   define DCM_DEMAPI_UDS_CLEAR_DTC_ENABLED                          STD_ON
#  else
#   define DCM_DEMAPI_UDS_CLEAR_DTC_ENABLED                          STD_OFF
#  endif

#  if (DCM_SVC_04_SUPPORT_ENABLED == STD_ON)                                                                                                         /* COV_DCM_UNSUPPORTED XF */
#   define DCM_DEMAPI_OBD_CLEAR_DTC_ENABLED                          STD_ON
#  else
#   define DCM_DEMAPI_OBD_CLEAR_DTC_ENABLED                          STD_OFF
#  endif

#  if (DCM_SVC_19_01_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_07_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_11_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_12_SUPPORT_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_READ_DTC_CNT_BY_STATUS_MASK_ENABLED     STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_READ_DTC_CNT_BY_STATUS_MASK_ENABLED     STD_OFF
#  endif

#  if (DCM_SVC_19_02_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_0A_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_0F_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_13_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_15_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_17_SUPPORT_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_READ_DTC_BY_STATUS_MASK_ENABLED         STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_READ_DTC_BY_STATUS_MASK_ENABLED         STD_OFF
#  endif

#  if (DCM_SVC_19_06_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_10_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_19_SUPPORT_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_READ_DTC_EXT_DATA_BY_DTC_NUM_ENABLED    STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_READ_DTC_EXT_DATA_BY_DTC_NUM_ENABLED    STD_OFF
#  endif

#  if (DCM_SVC_19_0B_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_0C_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_0D_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_0E_SUPPORT_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_READ_DTC_BY_OCCUR_TIME_ENABLED          STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_READ_DTC_BY_OCCUR_TIME_ENABLED          STD_OFF
#  endif

#  if (DCM_SVC_19_04_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_18_SUPPORT_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_READ_DTC_FFR_BY_DTC_ENABLED             STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_READ_DTC_FFR_BY_DTC_ENABLED             STD_OFF
#  endif

/* DEM API usage optimization */
#  if (DCM_DEMAPI_SVC_19_READ_DTC_CNT_BY_STATUS_MASK_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_READ_DTC_BY_STATUS_MASK_ENABLED     == STD_ON) || \
      (DCM_SVC_19_08_SUPPORT_ENABLED                  == STD_ON) || \
      (DCM_SVC_19_14_SUPPORT_ENABLED                  == STD_ON)
#   define DCM_DEMAPI_SVC_19_GETNUMFILTEREDDTC_ENABLED               STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_GETNUMFILTEREDDTC_ENABLED               STD_OFF
#  endif

#  if (DCM_DEMAPI_SVC_19_READ_DTC_CNT_BY_STATUS_MASK_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_READ_DTC_BY_STATUS_MASK_ENABLED     == STD_ON)
#   define DCM_SVC_19_SETDTCFILTER_INFO_CLASS_ENABLED                STD_ON
#  else
#   define DCM_SVC_19_SETDTCFILTER_INFO_CLASS_ENABLED                STD_OFF
#  endif

#  if (DCM_SVC_19_09_SUPPORT_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_GETSEVERITYOFDTC_ENABLED                STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_GETSEVERITYOFDTC_ENABLED                STD_OFF
#  endif

#  if (DCM_DEMAPI_SVC_19_READ_DTC_FFR_BY_DTC_ENABLED          == STD_ON) || \
      (DCM_SVC_19_05_SUPPORT_ENABLED                   == STD_ON) || \
      (DCM_SVC_19_09_SUPPORT_ENABLED                   == STD_ON) || \
      (DCM_DEMAPI_SVC_19_READ_DTC_BY_OCCUR_TIME_ENABLED       == STD_ON) || \
      (DCM_DEMAPI_SVC_19_READ_DTC_EXT_DATA_BY_DTC_NUM_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_GETSTATUSOFDTC_ENABLED                  STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_GETSTATUSOFDTC_ENABLED                  STD_OFF
#  endif

#  if (DCM_DEMAPI_SVC_19_READ_DTC_EXT_DATA_BY_DTC_NUM_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_GETSIZEOFEXTRECORD_ENABLED              STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_GETSIZEOFEXTRECORD_ENABLED              STD_OFF
#  endif

#  if (DCM_DEMAPI_SVC_19_READ_DTC_EXT_DATA_BY_DTC_NUM_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_GETEXTRECORD_ENABLED                    STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_GETEXTRECORD_ENABLED                    STD_OFF
#  endif

#  if (DCM_DEMAPI_SVC_19_READ_DTC_FFR_BY_DTC_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_GETSIZEOFFFRECORD_ENABLED               STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_GETSIZEOFFFRECORD_ENABLED               STD_OFF
#  endif

#  if (DCM_DEMAPI_SVC_19_READ_DTC_FFR_BY_DTC_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_GETFFRECORD_ENABLED                     STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_GETFFRECORD_ENABLED                     STD_OFF
#  endif

#  if (DCM_DEMAPI_SVC_19_READ_DTC_FFR_BY_DTC_ENABLED          == STD_ON) || \
      (DCM_DEMAPI_SVC_19_READ_DTC_EXT_DATA_BY_DTC_NUM_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_ANYABLERECORDUPDATE_ENABLED             STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_ANYABLERECORDUPDATE_ENABLED             STD_OFF
#  endif

#  if (DCM_DEMAPI_SVC_19_READ_DTC_BY_STATUS_MASK_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_READ_DTC_CNT_BY_STATUS_MASK_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_READ_DTC_BY_OCCUR_TIME_ENABLED == STD_ON) || \
      (DCM_SVC_19_14_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_08_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_09_SUPPORT_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_GETDTCSAM_ENABLED                       STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_GETDTCSAM_ENABLED                       STD_OFF
#  endif

#  if (DCM_SVC_19_42_SUPPORT_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_GETDTCSEVAM_ENABLED                     STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_GETDTCSEVAM_ENABLED                     STD_OFF
#  endif

#  if (DCM_DEMAPI_SVC_19_READ_DTC_BY_STATUS_MASK_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_READ_DTC_CNT_BY_STATUS_MASK_ENABLED == STD_ON) || \
      (DCM_SVC_19_14_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_08_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_42_SUPPORT_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_SETDTCFILTER_ENABLED                    STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_SETDTCFILTER_ENABLED                    STD_OFF
#  endif

#  if (DCM_DEMAPI_SVC_19_READ_DTC_BY_STATUS_MASK_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_GETNEXTFILTEREDDTC_ENABLED              STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_GETNEXTFILTEREDDTC_ENABLED              STD_OFF
#  endif

#  if (DCM_OBDDTCMGR_SUPPORT_ENABLED == STD_ON)                                                                                                      /* COV_DCM_UNSUPPORTED XF */
#   define DCM_DEMAPI_OBD_GETNEXTFILTEREDDTC_ENABLED                 STD_ON
#  else
#   define DCM_DEMAPI_OBD_GETNEXTFILTEREDDTC_ENABLED                 STD_OFF
#  endif

#  if (DCM_SVC_19_08_SUPPORT_ENABLED == STD_ON) || \
      (DCM_SVC_19_42_SUPPORT_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_GETNEXTFILTEREDDTCANDSEV_ENABLED        STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_GETNEXTFILTEREDDTCANDSEV_ENABLED        STD_OFF
#  endif

#  if (DCM_SVC_19_14_SUPPORT_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_GETNEXTFILTEREDDTCANDFDC_ENABLED        STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_GETNEXTFILTEREDDTCANDFDC_ENABLED        STD_OFF
#  endif

#  if (DCM_SVC_19_03_SUPPORT_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_GETNEXTFILTEREDRECORD_ENABLED           STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_GETNEXTFILTEREDRECORD_ENABLED           STD_OFF
#  endif

#  if (DCM_SVC_19_03_SUPPORT_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_SETFFRECORDFILTER_ENABLED               STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_SETFFRECORDFILTER_ENABLED               STD_OFF
#  endif

#  if (DCM_DEMAPI_SVC_19_READ_DTC_BY_OCCUR_TIME_ENABLED == STD_ON)
#   define DCM_DEMAPI_SVC_19_GETDTCOCCURTIME_ENABLED                 STD_ON
#  else
#   define DCM_DEMAPI_SVC_19_GETDTCOCCURTIME_ENABLED                 STD_OFF
#  endif

#  if (DCM_OBDDTCMGR_SUPPORT_ENABLED == STD_ON)                                                                                                      /* COV_DCM_UNSUPPORTED XF */
#   define DCM_DEMAPI_OBD_SETDTCFILTER_ENABLED                       STD_ON
#  else
#   define DCM_DEMAPI_OBD_SETDTCFILTER_ENABLED                       STD_OFF
#  endif

#  if (DCM_DEMAPI_UDS_CLEAR_DTC_ENABLED == STD_ON) || \
      (DCM_DEMAPI_OBD_CLEAR_DTC_ENABLED == STD_ON)                                                                                                   /* COV_DCM_UNSUPPORTED TF tf xf */
#   define DCM_DEMAPI_CLEAR_DTC_ENABLED                              STD_ON
#  else
#   define DCM_DEMAPI_CLEAR_DTC_ENABLED                              STD_OFF
#  endif

#  if (DCM_DEMAPI_CLEAR_DTC_ENABLED == STD_ON) || \
      (DCM_DEMAPI_OBD_SETDTCFILTER_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_SETDTCFILTER_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_SETFFRECORDFILTER_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_GETDTCOCCURTIME_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_GETDTCSAM_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_ANYABLERECORDUPDATE_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_GETSTATUSOFDTC_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_GETSIZEOFFFRECORD_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_GETSIZEOFEXTRECORD_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_GETSEVERITYOFDTC_ENABLED == STD_ON)  || \
      (DCM_DEMAPI_SVC_19_GETFFRECORD_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_GETEXTRECORD_ENABLED == STD_ON)                                                                                             /* COV_DCM_UNSUPPORTED TF tf xf tf tf tf tf tf tf tf tf tf tf tf */
#   define DCM_DEMAPI_RETVAL_TO_NRC_MAP_ENABLED                      STD_ON
#  else
#   define DCM_DEMAPI_RETVAL_TO_NRC_MAP_ENABLED                      STD_OFF
#  endif

#  if (DCM_DEMAPI_OBD_GETNEXTFILTEREDDTC_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_GETNEXTFILTEREDDTC_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_GETNEXTFILTEREDDTCANDSEV_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_GETNEXTFILTEREDDTCANDFDC_ENABLED == STD_ON) || \
      (DCM_DEMAPI_SVC_19_GETNEXTFILTEREDRECORD_ENABLED == STD_ON)                                                                                    /* COV_DCM_UNSUPPORTED TF xf tf tf tf tf */
#   define DCM_DEMAPI_GETNEXTFILTEREDITEM_ENABLED                    STD_ON
#  else
#   define DCM_DEMAPI_GETNEXTFILTEREDITEM_ENABLED                    STD_OFF
#  endif
# endif /* (DCM_DEMAPIMGR_SUPPORT_ENABLED == STD_ON) */
# if (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
#  if (DCM_SVC_2E_SUPPORT_ENABLED == STD_ON)
#   define DCM_DIDMGR_OPTYPE_WRITE_ENABLED                           STD_ON
#  else
#   define DCM_DIDMGR_OPTYPE_WRITE_ENABLED                           STD_OFF
#  endif

#  if (DCM_DIDMGR_OPCLS_READ_ASYNC_ENABLED == STD_ON) || \
      (DCM_DIDMGR_OPCLS_READ_SYNC_ENABLED  == STD_ON)
#   define DCM_DIDMGR_OPTYPE_READ_ENABLED                            STD_ON
#  else
#   define DCM_DIDMGR_OPTYPE_READ_ENABLED                            STD_OFF
#  endif

#  if (DCM_DIDMGR_OPCLS_READ_ASYNC_ENABLED == STD_ON) || \
      (DCM_DIDMGR_OPCLS_READ_SYNC_ENABLED  == STD_ON)
#   define DCM_DIDMGR_OPTYPE_READ_CHECKCOND_ENABLED                  STD_ON
#  else
#   define DCM_DIDMGR_OPTYPE_READ_CHECKCOND_ENABLED                  STD_OFF
#  endif

#  if (DCM_SVC_24_SUPPORT_ENABLED == STD_ON)
#   define DCM_DIDMGR_OPTYPE_GETSCALINGINFO_ENABLED                  STD_ON
#  else
#   define DCM_DIDMGR_OPTYPE_GETSCALINGINFO_ENABLED                  STD_OFF
#  endif

#  if (DCM_SVC_2C_SUPPORT_ENABLED == STD_ON)
#   define DCM_DIDMGR_OPTYPE_DEFINE_ENABLED                          STD_ON
#  else
#   define DCM_DIDMGR_OPTYPE_DEFINE_ENABLED                          STD_OFF
#  endif

#  if (DCM_DIDMGR_OPTYPE_IO_RETCTRL2ECU_ENABLED   == STD_ON) || \
      (DCM_DIDMGR_OPTYPE_IO_RST2DEFAULT_ENABLED   == STD_ON) || \
      (DCM_DIDMGR_OPTYPE_IO_FRZCURSTATE_ENABLED   == STD_ON) || \
      (DCM_DIDMGR_OPTYPE_IO_SHRTTERMADJ_ENABLED   == STD_ON)
#   define DCM_DIDMGR_OPTYPE_IO_ANY_ENABLED                          STD_ON
#  else
#   define DCM_DIDMGR_OPTYPE_IO_ANY_ENABLED                          STD_OFF
#  endif

#  if (DCM_DIDMGR_MSIG_OPTYPE_IO_RETCTRL2ECU_ENABLED   == STD_ON) || \
      (DCM_DIDMGR_MSIG_OPTYPE_IO_RST2DEFAULT_ENABLED   == STD_ON) || \
      (DCM_DIDMGR_MSIG_OPTYPE_IO_FRZCURSTATE_ENABLED   == STD_ON) || \
      (DCM_DIDMGR_MSIG_OPTYPE_IO_SHRTTRMADJ_ENABLED   == STD_ON)
#   define DCM_DIDMGR_MSIG_OPTYPE_IO_ANY_ENABLED                     STD_ON
#  else
#   define DCM_DIDMGR_MSIG_OPTYPE_IO_ANY_ENABLED                     STD_OFF
#  endif

#  if (DCM_SVC_2C_SUPPORT_ENABLED == STD_ON) && \
      ((DCM_SVC_2C_02_SUPPORT_ENABLED  == STD_ON) || \
      ((DCM_SVC_2C_01_SUPPORT_ENABLED == STD_ON) && (DCM_DIDMGR_STATIC_DID_ASYNC_SUPPORT_ENABLED == STD_ON)))
#   define DCM_DIDMGR_DYNDID_ASYNC_SUPPORT_ENABLED                   STD_ON
#  else
#   define DCM_DIDMGR_DYNDID_ASYNC_SUPPORT_ENABLED                   STD_OFF
#  endif

#  if (DCM_DIDMGR_OPCLS_WRITE_LEN_SYNC_NRES_ERROR_ENABLED  == STD_ON) || \
      (DCM_DIDMGR_OPCLS_WRITE_LEN_ASYNC_NRES_ERROR_ENABLED == STD_ON) || \
      (DCM_DIDMGR_OPCLS_WRITE_RANGE_ENABLED == STD_ON) || \
      (DCM_DIDMGR_OPCLS_WRITE_LEN_SYNC_RES_ERROR_ENABLED == STD_ON)
#   define DCM_DIDMGR_WRITE_DYNLEN_DID_SUPPORT_ENABLED               STD_ON
#  else
#   define DCM_DIDMGR_WRITE_DYNLEN_DID_SUPPORT_ENABLED               STD_OFF
#  endif

#  if (DCM_DIDMGR_DYNDID_SRCITEM_CHECK_STATE_ENABLED == STD_ON) && \
      (DCM_DIDMGR_DYNDID_CLR_ON_STATE_CHG_ENABLED    == STD_OFF)
#   define DCM_DIDMGR_DYNDID_DEEP_CHECK_ON_READ_ENABLED              STD_ON
#  else
#   define DCM_DIDMGR_DYNDID_DEEP_CHECK_ON_READ_ENABLED              STD_OFF
#  endif

#  if (DCM_DIDMGR_MULTISIGNAL_ENABLED == STD_ON) || \
      (DCM_DIDMGR_OPCLS_READ_PAGED_ENABLED == STD_ON)
#   define DCM_DIDMGR_OPTYPECONTEXT_READ_ENABLED                     STD_ON
#  else
#   define DCM_DIDMGR_OPTYPECONTEXT_READ_ENABLED                     STD_OFF
#  endif

#  if (DCM_DIDMGR_RANGE_SUPPORT_ENABLED   == STD_ON) || \
      (DCM_DIDMGR_EXTENDED_LOOKUP_ENABLED == STD_ON)
#   define DCM_DIDMGR_ASYNC_LOOKUP_ENABLED                           STD_ON
#  else
#   define DCM_DIDMGR_ASYNC_LOOKUP_ENABLED                           STD_OFF
#  endif

#  if (DCM_DIDMGR_ASYNC_LOOKUP_ENABLED == STD_ON)
#   define DCM_DIDMGR_OPTYPECONTEXT_LOOKUP_ENABLED                   STD_ON
#  else
#   define DCM_DIDMGR_OPTYPECONTEXT_LOOKUP_ENABLED                   STD_OFF
#  endif

#  if (DCM_DIDMGR_IO_MASKRECORD_ENABLED == STD_ON)
#   define DCM_DIDMGR_OPTYPECONTEXT_IO_ENABLED                       STD_ON
#  else
#   define DCM_DIDMGR_OPTYPECONTEXT_IO_ENABLED                       STD_OFF
#  endif

#  if(DCM_DIDMGR_MSIG_OPTYPE_GETSCALINGINFO_ENABLED == STD_ON)
#   define DCM_DIDMGR_OPTYPECONTEXT_GETSCALING_ENABLED               STD_ON
#  else
#   define DCM_DIDMGR_OPTYPECONTEXT_GETSCALING_ENABLED               STD_OFF
#  endif

#  if (DCM_DIDMGR_OPTYPECONTEXT_IO_ENABLED == STD_ON) || \
      (DCM_DIDMGR_OPTYPECONTEXT_READ_ENABLED == STD_ON) || \
      (DCM_DIDMGR_OPTYPECONTEXT_GETSCALING_ENABLED == STD_ON) || \
      (DCM_DIDMGR_OPTYPECONTEXT_LOOKUP_ENABLED == STD_ON)
#   define DCM_DIDMGR_OPTYPECONTEXT_SHARED_ENABLED                   STD_ON
#  else
#   define DCM_DIDMGR_OPTYPECONTEXT_SHARED_ENABLED                   STD_OFF
#  endif

#  if (DCM_DIDMGR_MULTISIGNAL_ENABLED == STD_ON) || \
      (DCM_DIDMGR_OPTYPECONTEXT_SHARED_ENABLED == STD_ON)
#   define DCM_DIDMGR_OPTYPECONTEXT_ENABLED                          STD_ON
#  else
#   define DCM_DIDMGR_OPTYPECONTEXT_ENABLED                          STD_OFF
#  endif

#  if (DCM_DIDMGR_OPCLS_READ_PAGED_ENABLED == STD_ON) && \
      (DCM_DIDMGR_OPCLS_READ_VID_ENABLED == STD_ON) && \
      (DCM_DCM_AR_VERSION >= DCM_DCM_AR_VERSION_422)
#   error "Paged DIDs are not allowed if any OBD2 VID DIDs as per AR4.2.2 are enabled!"
#  endif

#  if (DCM_DIDMGR_RANGE_SUPPORT_ENABLED == STD_ON) && \
      (DCM_DIDMGR_OPCLS_READ_PAGED_ENABLED == STD_ON)
#   error "DID ranges are not allowed if any paged DID is configured!"
#  endif

#  if (DCM_DIDMGR_OPCLS_READ_PAGED_ENABLED == STD_ON) || \
      (DCM_DIAG_CANCEL_OP_ENABLED == STD_ON)
#   define DCM_DIDMGR_CANCEL_OP_READ_ENABLED                         STD_ON
#  else
#   define DCM_DIDMGR_CANCEL_OP_READ_ENABLED                         STD_OFF
#  endif

#  if (DCM_DIDMGR_CANCEL_OP_READ_ENABLED == STD_ON) || \
      (DCM_DIAG_CANCEL_OP_ENABLED == STD_ON)
#   define DCM_DIDMGR_CANCEL_OP_ENABLED                              STD_ON
#  else
#   define DCM_DIDMGR_CANCEL_OP_ENABLED                              STD_OFF
#  endif

#  if (DCM_DIDMGR_OPCLS_READ_PAGED_ENABLED == STD_ON)
#   define DCM_DIDMGR_PAGED_DID_SUPPORT_ENABLED                      STD_ON
#  else
#   define DCM_DIDMGR_PAGED_DID_SUPPORT_ENABLED                      STD_OFF
#  endif
# endif /* (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON) */
/* ----------------------------------------------
 ~&&&   Defines
---------------------------------------------- */
# define DCM_UTIRTLMTR_CTR_TYPE                                      uint8_least
# define DCM_UTIRTLMTR_CTR_NAME                                      lRtLimiterCntr

# if(DCM_RUNTIME_USAGE_LIMIT_ENABLED == STD_ON)
#  if (DCM_RUNTIME_USAGE_LIMIT_SINGLE_LOOP_ENABLED == STD_ON)
#   define DCM_UTIRTLMTR_CTR_DEF                                     /* not used */
#   define DCM_UTIRTLMTR_CTR_INIT                                    /* not used */
#   define DCM_UTIRTLMTR_CTR_NEXT                                    /* not used */
#   define DCM_UTIRTLMTR_CTR_HANDLE_NO_BREAK(retVariable, retValue)  {(retVariable) = (retValue);}                                                   /* PRQA S 3412, 3458 */ /* MD_MSR_19.4 */
#   define DCM_UTIRTLMTR_CTR_HANDLE_AND_BREAK(retVariable, retValue) {(retVariable) = (retValue); break;}                                            /* PRQA S 3412, 3458 */ /* MD_MSR_19.4 */
#  else /* Limit > 1 */
#   define DCM_UTIRTLMTR_CTR_DEF                                     DCM_UTIRTLMTR_CTR_TYPE DCM_UTIRTLMTR_CTR_NAME;                                  /* PRQA S 3412 */ /* MD_MSR_19.4 */
#   define DCM_UTIRTLMTR_CTR_INIT                                    DCM_UTIRTLMTR_CTR_NAME = DCM_RUNTIME_USAGE_ITERATIONS;                          /* PRQA S 3412 */ /* MD_MSR_19.4 */
#   define DCM_UTIRTLMTR_CTR_NEXT                                    --DCM_UTIRTLMTR_CTR_NAME;                                                       /* PRQA S 3412 */ /* MD_MSR_19.4 */
#   define DCM_UTIRTLMTR_CTR_HANDLE_NO_BREAK(retVariable, retValue)  if(DCM_UTIRTLMTR_CTR_NAME == 0u) { (retVariable) = (retValue); }                /* PRQA S 3412, 3458 */ /* MD_MSR_19.4 */
#   define DCM_UTIRTLMTR_CTR_HANDLE_AND_BREAK(retVariable, retValue) if(DCM_UTIRTLMTR_CTR_NAME == 0u) { (retVariable) = (retValue); break; }         /* PRQA S 3412, 3458 */ /* MD_MSR_19.4 */
#  endif
# else
#  define DCM_UTIRTLMTR_CTR_DEF                                      /* not used */
#  define DCM_UTIRTLMTR_CTR_INIT                                     /* not used */
#  define DCM_UTIRTLMTR_CTR_NEXT                                     /* not used */
#  define DCM_UTIRTLMTR_CTR_HANDLE_NO_BREAK(retVariable, retValue)   /* not used */
#  define DCM_UTIRTLMTR_CTR_HANDLE_AND_BREAK(retVariable, retValue)  /* not used */
# endif
/* *** Debug stuff *** */
# define DCM_DEBUG_UNINITPATTERN                                     (uint8)0x00u
# define DCM_DEBUG_INITPATTERN                                       (uint8)0x01u
# define DCM_DEBUG_BUFFEROVFLPATTERN                                 (uint16)0xBEDAu
# if (DCM_VARMGR_MODE_POSTBUILD_LOAD_ENABLED == STD_ON)
/* limited to 32 for a bit mask usage (i.e. task events) */
#  define DCM_NET_MAX_NUM_EVENT_TRANSP_OBJECTS                       32u
# else
#  define DCM_NET_MAX_NUM_EVENT_TRANSP_OBJECTS                       DCM_NET_MAX_NUM_TRANSP_OBJECTS_CONST
# endif

/* network variant abstraction */
# if (DCM_VARMGR_MULTI_COM_ENABLED == STD_ON)
#  define Dcm_NetCfgGetNumRxPduIds(comVariant)                       ((comVariant)->NumRxPduIds)                                                     /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetNumTxPduIds(comVariant)                       ((comVariant)->NumTxPduIds)                                                     /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetMinCanTpRxPduId(comVariant)                   ((comVariant)->CanTpRxPduIdMin)                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetMaxCanTpRxPduId(comVariant)                   ((comVariant)->CanTpRxPduIdMax)                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetNumCanRxPduIds(comVariant)                    ((comVariant)->NumCanTpRxPduIds)                                                /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetNumPerTxObjects(comVariant)                   ((comVariant)->NumPerTxObjects)                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetNumConnections(comVariant)                    ((comVariant)->NumConnections)                                                  /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetNumProtocols(comVariant)                      ((comVariant)->NumProtocols)                                                    /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetNumComMChannels(comVariant)                   ((comVariant)->NumComMChannels)                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetNumBuffers(comVariant)                        ((comVariant)->NumBuffers)                                                      /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetNumTranspObjects(comVariant)                  ((comVariant)->NumTranspObjects)                                                /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetNumAllComMChannels(comVariant)                ((comVariant)->NumAllComMChannels)                                              /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Dcm_NetCfgGetRxPduInfo(comVariant)                         ((comVariant)->RxPduIdTable)                                                    /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetConnectionInfo(comVariant)                    ((comVariant)->ConnectionTable)                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetProtocolInfo(comVariant)                      ((comVariant)->ProtocolTable)                                                   /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetNetConnComMChannelMap(comVariant)             ((comVariant)->NetConnComMChannelMap)                                           /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetNetworkHdlLookUp(comVariant)                  ((comVariant)->NetworkHandleLookUpTable)                                        /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetTxPdu2ConnMap(comVariant)                     ((comVariant)->TxPduIdMap)                                                      /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetPerTxPdu2RsrsMap(comVariant)                  ((comVariant)->PerTxPduIdMap)                                                   /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetPerTxPduIdInfo(comVariant)                    ((comVariant)->PerTxPduIdTable)                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetComCtrlChannelListAll(comVariant)             ((comVariant)->ComCtrlChannelListAll)                                           /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_NetCfgGetNetAllComMChannelMap(comVariant)              ((comVariant)->NetAllComMChannelMap)                                            /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Dcm_NetCfgGetNumRxPduIds(comVariant)                       DCM_NET_NUM_RX_PDUIDS
#  define Dcm_NetCfgGetNumTxPduIds(comVariant)                       DCM_NET_NUM_TX_PDUIDS
#  define Dcm_NetCfgGetMinCanTpRxPduId(comVariant)                   DCM_NET_CANTP_RX_PDUID_MIN
#  define Dcm_NetCfgGetMaxCanTpRxPduId(comVariant)                   DCM_NET_CANTP_RX_PDUID_MAX
#  define Dcm_NetCfgGetNumCanRxPduIds(comVariant)                    DCM_NET_NUM_CANTP_RX_PDUIDS
#  define Dcm_NetCfgGetNumPerTxObjects(comVariant)                   DCM_NET_MAX_NUM_PERIODIC_TX_OBJ
#  define Dcm_NetCfgGetNumConnections(comVariant)                    DCM_NET_MAX_NUM_CONNECTIONS
#  define Dcm_NetCfgGetNumProtocols(comVariant)                      DCM_NET_NUM_PROTOCOLS
#  define Dcm_NetCfgGetNumComMChannels(comVariant)                   DCM_NET_MAX_NUM_COMM_CHANNELS
#  define Dcm_NetCfgGetNumBuffers(comVariant)                        DCM_NET_NUM_BUFFERS
#  define Dcm_NetCfgGetNumTranspObjects(comVariant)                  DCM_NET_MAX_NUM_TRANSP_OBJECTS
#  define Dcm_NetCfgGetNumAllComMChannels(comVariant)                DCM_NET_MAX_NUM_ALL_COMM_CHANNELS

#  define Dcm_NetCfgGetRxPduInfo(comVariant)                         Dcm_CfgNetRxPduInfo
#  define Dcm_NetCfgGetConnectionInfo(comVariant)                    Dcm_CfgNetConnectionInfo
#  define Dcm_NetCfgGetProtocolInfo(comVariant)                      Dcm_CfgNetProtocolInfo
#  define Dcm_NetCfgGetNetConnComMChannelMap(comVariant)             Dcm_CfgNetConnComMChannelMap
#  define Dcm_NetCfgGetNetworkHdlLookUp(comVariant)                  Dcm_CfgNetNetworkHandleLookUpTable
#  define Dcm_NetCfgGetTxPdu2ConnMap(comVariant)                     Dcm_CfgNetTxPduInfo
#  define Dcm_NetCfgGetPerTxPdu2RsrsMap(comVariant)                  Dcm_CfgNetPeriodicTxPduInfo
#  define Dcm_NetCfgGetPerTxPduIdInfo(comVariant)                    Dcm_CfgNetPeriodicTxPduIds
#  define Dcm_NetCfgGetComCtrlChannelListAll(comVariant)             Dcm_CfgNetComCtrlChannelListAll
#  define Dcm_NetCfgGetNetAllComMChannelMap(comVariant)              Dcm_CfgNetAllComMChannelMap
# endif
# define DCM_NET_COMM_STATE_FLAG_RX_DIS                              ((Dcm_NetComMStateType)0x00u )
# define DCM_NET_COMM_STATE_FLAG_TX_DIS                              ((Dcm_NetComMStateType)0x00u )
# define DCM_NET_COMM_STATE_FLAG_TX_EN                               ((Dcm_NetComMStateType)0x01u )
# define DCM_NET_COMM_STATE_FLAG_RX_EN                               ((Dcm_NetComMStateType)0x02u )

# define DCM_NET_COMM_STATE_COMPOSER(rx,tx)                          ((Dcm_NetComMStateType)((rx)|(tx)))                                             /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define DCM_NET_COMM_STATE_RX_DIS_TX_DIS                            (DCM_NET_COMM_STATE_COMPOSER(DCM_NET_COMM_STATE_FLAG_RX_DIS,DCM_NET_COMM_STATE_FLAG_TX_DIS))
# define DCM_NET_COMM_STATE_RX_DIS_TX_EN                             (DCM_NET_COMM_STATE_COMPOSER(DCM_NET_COMM_STATE_FLAG_RX_DIS,DCM_NET_COMM_STATE_FLAG_TX_EN))
# define DCM_NET_COMM_STATE_RX_EN_TX_DIS                             (DCM_NET_COMM_STATE_COMPOSER(DCM_NET_COMM_STATE_FLAG_RX_EN, DCM_NET_COMM_STATE_FLAG_TX_DIS))
# define DCM_NET_COMM_STATE_RX_EN_TX_EN                              (DCM_NET_COMM_STATE_COMPOSER(DCM_NET_COMM_STATE_FLAG_RX_EN, DCM_NET_COMM_STATE_FLAG_TX_EN))
# define DCM_REPEATER_EXT_CNTXT_SVC86                                (Dcm_RepeaterSvcContextHandleType)0
# define DCM_STATE_VALUE_SESSION_INIT                                ((Dcm_CfgStateGroupMemType)0x01u)
# define DCM_STATE_VALUE_SECURITY_INIT                               ((Dcm_CfgStateGroupMemType)0x01u)
/* Number of tasks per type */
# define DCM_TSK_NUM_TIMER                                           1
# define DCM_TSK_NUM_NET_TX                                          1
# define DCM_TSK_NUM_DIAG_TX                                         1

# if (DCM_NET_TASK_RX_ENABLED == STD_ON)                                                                                                             /* COV_DCM_UNSUPPORTED XF */
#  define DCM_TSK_NUM_NET_RX                                         1
# else
#  define DCM_TSK_NUM_NET_RX                                         0 /* just a bridge */
# endif

# if (DCM_SVC_86_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
#  if defined (DCM_EXT_TSK_NUM_ROE)
#   define DCM_TSK_NUM_ROE                                           DCM_EXT_TSK_NUM_ROE
#   if defined (DCM_EXT_TSK_ATR_ROE_EXEC)
#    define DCM_TSK_ATR_ROE_EXEC                                     DCM_EXT_TSK_ATR_ROE_EXEC
#   else
#    error "Missing DCM extension value: DCM_EXT_TSK_ATR_ROE_EXEC!"
#   endif
#  else
#   error "Missing DCM extension value: DCM_EXT_TSK_NUM_ROE!"
#  endif

#  if defined (DCM_EXT_TSK_EV_ROE_MSB)
#   define DCM_TSK_EV_ROE_MSB                                        DCM_EXT_TSK_EV_ROE_MSB
#  else
#   error "Missing DCM extension value: DCM_EXT_TSK_EV_ROE_MSB!"
#  endif
# else
#  define DCM_TSK_NUM_ROE                                            0
#  define DCM_TSK_EV_ROE_MSB                                         0x00u
# endif /*(DCM_SVC_86_SUPPORT_ENABLED == STD_ON)*/

# if(DCM_PAGED_BUFFER_ENABLED == STD_ON)
#  define DCM_TSK_NUM_PGDBUF                                         1
# else
#  define DCM_TSK_NUM_PGDBUF                                         0 /* just a bridge */
# endif
# define DCM_TSK_NUM_DIAG_WORK                                       1
# if (DCM_SVC_27_SUPPORT_ENABLED == STD_ON) && \
     (DCM_STATE_SEC_RETRY_ENABLED == STD_ON) && \
     (DCM_STATE_SEC_ATT_CNTR_EXT_STORAGE_ENABLED == STD_ON)                                                                                          /* COV_DCM_UNSUPPORTED XF xf xf xf */
#  define DCM_TSK_NUM_SVC27                                          1
# else
#  define DCM_TSK_NUM_SVC27                                          0 /* just a bridge */
# endif
# if (DCM_DIAG_JUMPFROMFBL_ENABLED == STD_ON)
#  define DCM_TSK_NUM_DIAG_FBLRES                                    1
# else
#  define DCM_TSK_NUM_DIAG_FBLRES                                    0 /* just a bridge */
# endif
# if (DCM_MODEMGR_MONITORING_ENABLED == STD_ON)
#  define DCM_TSK_NUM_MODE_MONITOR                                   1
# else
#  define DCM_TSK_NUM_MODE_MONITOR                                   0 /* just a bridge */
# endif
# if (DCM_SVC_2A_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
#  define DCM_TSK_NUM_SVC2A_SCHEDULER                                1
# else
#  define DCM_TSK_NUM_SVC2A_SCHEDULER                                0 /* just a bridge */
# endif
# define DCM_TSK_NUM_DIAG_RX                                         1

# if (DCM_NET_MONITOR_FOREIGN_N_TA_ENABLED == STD_ON)                                                                                                /* COV_DCM_UNSUPPORTED XF */
#  define DCM_TSK_NUM_NET_TA_MONITOR                                 1
# else
#  define DCM_TSK_NUM_NET_TA_MONITOR                                 0 /* just a bridge */
# endif

# if (DCM_DIAG_STATE_RECOVERY_ENABLED == STD_ON)                                                                                                     /* COV_DCM_UNSUPPORTED XF */
#  define DCM_TSK_NUM_DIAG_RECOVERY                                  1
# else
#  define DCM_TSK_NUM_DIAG_RECOVERY                                  0 /* just a bridge */
# endif

# if (DCM_DIAG_GARB_COL_ENABLED == STD_ON)                                                                                                           /* COV_DCM_UNSUPPORTED XF */
#  define DCM_TSK_NUM_DIAG_GARB_COL                                  1
# else
#  define DCM_TSK_NUM_DIAG_GARB_COL                                  0 /* just a bridge */
# endif

# define DCM_TSK_NUM_TASKS                                           ((Dcm_TskTaskIdMemType)( DCM_TSK_NUM_TIMER \
                                                                     + DCM_TSK_NUM_DIAG_RX \
                                                                     + DCM_TSK_NUM_MODE_MONITOR \
                                                                     + DCM_TSK_NUM_DIAG_FBLRES \
                                                                     + DCM_TSK_NUM_DIAG_WORK \
                                                                     + DCM_TSK_NUM_PGDBUF \
                                                                     + DCM_TSK_NUM_SVC27 \
                                                                     + DCM_TSK_NUM_ROE \
                                                                     + DCM_TSK_NUM_DIAG_TX \
                                                                     + DCM_TSK_NUM_NET_TX \
                                                                     + DCM_TSK_NUM_NET_RX \
                                                                     + DCM_TSK_NUM_SVC2A_SCHEDULER \
                                                                     + DCM_TSK_NUM_NET_TA_MONITOR \
                                                                     + DCM_TSK_NUM_DIAG_RECOVERY \
                                                                     + DCM_TSK_NUM_DIAG_GARB_COL) )
/* Task IDs */
# define DCM_TSK_ID_DIAG_RECOVERY                                    ((Dcm_TskTaskIdMemType)(0 + 0))
# define DCM_TSK_ID_NET_TA_MONITOR                                   ((Dcm_TskTaskIdMemType)(DCM_TSK_ID_DIAG_RECOVERY + DCM_TSK_NUM_DIAG_RECOVERY))
# define DCM_TSK_ID_NET_RX                                           ((Dcm_TskTaskIdMemType)(DCM_TSK_ID_NET_TA_MONITOR + DCM_TSK_NUM_NET_TA_MONITOR))
# define DCM_TSK_ID_TIMER                                            ((Dcm_TskTaskIdMemType)(DCM_TSK_ID_NET_RX + DCM_TSK_NUM_NET_RX))
# define DCM_TSK_ID_DIAG_RX                                          ((Dcm_TskTaskIdMemType)(DCM_TSK_ID_TIMER + DCM_TSK_NUM_TIMER))
# define DCM_TSK_ID_MODE_MONITOR                                     ((Dcm_TskTaskIdMemType)(DCM_TSK_ID_DIAG_RX + DCM_TSK_NUM_DIAG_RX))
# define DCM_TSK_ID_DIAG_FBLRES                                      ((Dcm_TskTaskIdMemType)(DCM_TSK_ID_MODE_MONITOR + DCM_TSK_NUM_MODE_MONITOR))
# define DCM_TSK_ID_SVC27                                            ((Dcm_TskTaskIdMemType)(DCM_TSK_ID_DIAG_FBLRES + DCM_TSK_NUM_DIAG_FBLRES))
# define DCM_TSK_ID_DIAG_WORK                                        ((Dcm_TskTaskIdMemType)(DCM_TSK_ID_SVC27 + DCM_TSK_NUM_SVC27))
# define DCM_TSK_ID_PGDBUF                                           ((Dcm_TskTaskIdMemType)(DCM_TSK_ID_DIAG_WORK + DCM_TSK_NUM_DIAG_WORK))
# define DCM_TSK_ID_ROE                                              ((Dcm_TskTaskIdMemType)(DCM_TSK_ID_PGDBUF + DCM_TSK_NUM_PGDBUF))
# define DCM_TSK_ID_DIAG_GARB_COL                                    ((Dcm_TskTaskIdMemType)(DCM_TSK_ID_ROE + DCM_TSK_NUM_ROE))
# define DCM_TSK_ID_DIAG_TX                                          ((Dcm_TskTaskIdMemType)(DCM_TSK_ID_DIAG_GARB_COL + DCM_TSK_NUM_DIAG_GARB_COL))
# define DCM_TSK_ID_SVC2A_SCHEDULER                                  ((Dcm_TskTaskIdMemType)(DCM_TSK_ID_DIAG_TX + DCM_TSK_NUM_DIAG_TX))
# define DCM_TSK_ID_NET_TX                                           ((Dcm_TskTaskIdMemType)(DCM_TSK_ID_SVC2A_SCHEDULER + DCM_TSK_NUM_SVC2A_SCHEDULER))

/* Timer task */
# define DCM_TSK_EV_TIMER_ACTIVE                                     ((Dcm_TskTaskEvMemType)0x01u)
/* Most significant bit in the event mask */
# define DCM_TSK_EV_TIMER_MSB                                        0x01u

/* DiagRx Task */
# define DCM_TSK_EV_DIAG_RX_TMR_P2_TO                                ((Dcm_TskTaskEvMemType)0x01u)
# define DCM_TSK_EV_DIAG_RX_NEW_REQ                                  ((Dcm_TskTaskEvMemType)0x02u)

/* Most significant bit in the event mask */
# define DCM_TSK_EV_DIAG_RX_MSB                                      0x02u

/* DiagWorker Task */
# define DCM_TSK_EV_DIAG_WORK_TX_END_FINAL                           ((Dcm_TskTaskEvMemType)0x01u)
# define DCM_TSK_EV_DIAG_WORK_TX_END_RCRRP                           ((Dcm_TskTaskEvMemType)0x02u)
# define DCM_TSK_EV_DIAG_WORK_EXT_SET2DEF                            ((Dcm_TskTaskEvMemType)0x04u)
# define DCM_TSK_EV_DIAG_WORK_INT_SET2DEF                            ((Dcm_TskTaskEvMemType)0x08u)
# define DCM_TSK_EV_DIAG_WORK_REPEAT                                 ((Dcm_TskTaskEvMemType)0x10u)
# define DCM_TSK_EV_DIAG_WORK_NEW_REQ                                ((Dcm_TskTaskEvMemType)0x20u)
# define DCM_TSK_EV_DIAG_WORK_CANCEL_OP                              ((Dcm_TskTaskEvMemType)0x40u)
# define DCM_TSK_EV_DIAG_WORK_KILL_JOBS                              ((Dcm_TskTaskEvMemType)0x80u)

/* Most significant bit in the event mask */
# define DCM_TSK_EV_DIAG_WORK_MSB                                    0x80u

/* Service 0x27 Task */
# define DCM_TSK_EV_SVC_27_ATTEMPT_CNTR_READ                         ((Dcm_TskTaskEvMemType)0x01u)
# define DCM_TSK_EV_SVC_27_ATTEMPT_CNTR_WRITE                        ((Dcm_TskTaskEvMemType)0x02u)

/* Most significant bit in the event mask */
# define DCM_TSK_EV_SVC_27_MSB                                       0x02u

/* PagedBuffer Task */
# if (DCM_TSK_NUM_PGDBUF > 0)
#  define DCM_TSK_EV_PGDBUF_UPDATE_PAGE                              ((Dcm_TskTaskEvMemType)0x01u)
/* Most significant bit in the event mask */
#  define DCM_TSK_EV_PGDBUF_MSB                                      0x01u
# else
#  define DCM_TSK_EV_PGDBUF_MSB                                      0x00u
# endif

/* DiagRecovery Task */
# if (DCM_TSK_NUM_DIAG_RECOVERY > 0)                                                                                                                 /* COV_DCM_UNSUPPORTED XF */
#  define DCM_TSK_EV_DIAG_RECOVERY_GETSTATE                          ((Dcm_TskTaskEvMemType)0x01u)
#  define DCM_TSK_EV_DIAG_RECOVERY_FINISH                            ((Dcm_TskTaskEvMemType)0x02u)
/* Most significant bit in the event mask */
#  define DCM_TSK_EV_DIAG_RECOVERY_MSB                               0x02u
# else
#  define DCM_TSK_EV_DIAG_RECOVERY_MSB                               0x00u
# endif

/* DiagFblRes Task */
# if (DCM_TSK_NUM_DIAG_FBLRES > 0)
#  define DCM_TSK_EV_DIAG_FBLRES_SEND                                ((Dcm_TskTaskEvMemType)0x01u)
#  define DCM_TSK_EV_DIAG_FBLRES_CANCEL                              ((Dcm_TskTaskEvMemType)0x02u)
#  define DCM_TSK_EV_DIAG_FBLRES_WAITTXCOMM                          ((Dcm_TskTaskEvMemType)0x04u)
#  define DCM_TSK_EV_DIAG_FBLRES_RSTFLAGS                            ((Dcm_TskTaskEvMemType)0x08u)
#  define DCM_TSK_EV_DIAG_FBLRES_TXCONF                              ((Dcm_TskTaskEvMemType)0x10u)
/* Most significant bit in the event mask */
#  define DCM_TSK_EV_DIAG_FBLRES_MSB                                 0x10u
# else
#  define DCM_TSK_EV_DIAG_FBLRES_MSB                                 0x00u
# endif

/* DiagTx Task */
# define DCM_TSK_EV_DIAG_TX_SEND_LINEAR                              ((Dcm_TskTaskEvMemType)0x01u)
# define DCM_TSK_EV_DIAG_TX_SEND_PAGED                               ((Dcm_TskTaskEvMemType)0x02u)
# define DCM_TSK_EV_DIAG_TX_SEND_RCRRP                               ((Dcm_TskTaskEvMemType)0x04u)
/* Most significant bit in the event mask */
# define DCM_TSK_EV_DIAG_TX_MSB                                      0x04u

/* NetTx Task */
# define DCM_TSK_EV_NET_TX_SEND                                      ((Dcm_TskTaskEvMemType)0x01u)
/* Most significant bit in the event mask */
# define DCM_TSK_EV_NET_TX_MSB                                       0x01u

/* NetPrio Task */
# define DCM_TSK_EV_NET_RX_PROT_RX                                   ((Dcm_TskTaskEvMemType)0x01u)

# if (DCM_TSK_NUM_NET_RX > 0)                                                                                                                        /* COV_DCM_UNSUPPORTED XF */
/* Most significant bit in the event mask */
#  define DCM_TSK_EV_NET_RX_MSB                                      (0x01UL << (DCM_NET_MAX_NUM_EVENT_TRANSP_OBJECTS - 1))
#  define DCM_TSK_EV_NET_RX_MASK                                     ((Dcm_TskTaskEvMemType)(DCM_TSK_EV_MASK >> (DCM_TSK_EV_NUM_BITS - (DCM_NET_MAX_NUM_EVENT_TRANSP_OBJECTS - 1))))
# else
#  define DCM_TSK_EV_NET_RX_MSB                                      0x00u
# endif

/* DiagGarbCol Task - identical  to Dcm_NetRxTask() */
# define DCM_TSK_EV_DIAG_GARB_COL_MSB                                DCM_TSK_EV_NET_RX_MSB
# define DCM_TSK_EV_DIAG_GARB_COL_MASK                               DCM_TSK_EV_NET_RX_MASK


/* ModeMonitor Task */
# if (DCM_TSK_NUM_MODE_MONITOR > 0)
#  define DCM_TSK_EV_MODE_MON_SVC85                                  ((Dcm_TskTaskEvMemType)0x01u)
#  define DCM_TSK_EV_MODE_MON_SVC28                                  ((Dcm_TskTaskEvMemType)0x02u)
/* Most significant bit in the event mask */
#  define DCM_TSK_EV_MODE_MON_MSB                                    0x02u
# else
#  define DCM_TSK_EV_MODE_MON_MSB                                    0x00u
# endif


/* Svc2A scheduler processor task */
# if (DCM_TSK_NUM_SVC2A_SCHEDULER > 0)                                                                                                               /* COV_DCM_UNSUPPORTED XF */
#  define DCM_TSK_EV_SVC2A_SCHEDULER_PROCESS                         ((Dcm_TskTaskEvMemType)0x01u)
#  define DCM_TSK_EV_SVC2A_SCHEDULER_TMR_UPD                         ((Dcm_TskTaskEvMemType)0x02u)
/* Most significant bit in the event mask */
#  define DCM_TSK_EV_SVC2A_SCHEDULER_MSB                             0x02u
# else
#  define DCM_TSK_EV_SVC2A_SCHEDULER_MSB                             0x00u
# endif


/* Summary of all tasks' event MSB used to calculated the optimal event mask data type */
# define DCM_TSK_EV_SUM_OF_MSB                                       (DCM_TSK_EV_TIMER_MSB | \
                                                                     DCM_TSK_EV_ROE_MSB | \
                                                                     DCM_TSK_EV_DIAG_RX_MSB | \
                                                                     DCM_TSK_EV_DIAG_WORK_MSB | \
                                                                     DCM_TSK_EV_SVC_27_MSB | \
                                                                     DCM_TSK_EV_PGDBUF_MSB | \
                                                                     DCM_TSK_EV_DIAG_FBLRES_MSB |\
                                                                     DCM_TSK_EV_DIAG_TX_MSB | \
                                                                     DCM_TSK_EV_NET_TX_MSB | \
                                                                     DCM_TSK_EV_MODE_MON_MSB | \
                                                                     DCM_TSK_EV_SVC2A_SCHEDULER_MSB | \
                                                                     DCM_TSK_EV_NET_RX_MSB | \
                                                                     DCM_TSK_EV_DIAG_GARB_COL_MSB)

# if (DCM_TSK_EV_SUM_OF_MSB < 0x100u)                                                                                                                /* COV_DCM_SUPPORT_ALWAYS TX */
#  define DCM_TSK_EV_MASK                                            ((Dcm_TskTaskEvMemType)0xFFu)
#  define DCM_TSK_EV_NUM_BITS                                        8u
# else
#  if (DCM_TSK_EV_SUM_OF_MSB < 0x10000UL)
#   define DCM_TSK_EV_MASK                                           ((Dcm_TskTaskEvMemType)0xFFFFu)
#   define DCM_TSK_EV_NUM_BITS                                       16u
#  else
#   define DCM_TSK_EV_MASK                                           ((Dcm_TskTaskEvMemType)0xFFFFFFFFUL)
#   define DCM_TSK_EV_NUM_BITS                                       32u
#  endif
# endif

# define DCM_TSK_EV_ALL_EVENTS                                       DCM_TSK_EV_MASK

/* Tasks MBS */
# define DCM_TSK_EV_MSB                                              (Dcm_UtiGetBitFromIndex(Dcm_TskTaskEvMemType,  (DCM_TSK_EV_NUM_BITS-1)))
/* Timer Ids */
# define DCM_TMR_ID_P2                                               ((Dcm_TmrTimerIdMemType)(0 + 0))
# define DCM_TMR_ID_S3                                               ((Dcm_TmrTimerIdMemType)(DCM_TMR_ID_P2 + DCM_TMR_NUM_P2))
# define DCM_TMR_ID_FBLRES                                           ((Dcm_TmrTimerIdMemType)(DCM_TMR_ID_S3 + DCM_TMR_NUM_S3))
# define DCM_TMR_ID_SECURITY_0                                       ((Dcm_TmrTimerIdMemType)(DCM_TMR_ID_FBLRES + DCM_TMR_NUM_FBLRES))
# define DCM_TMR_ID_SECURITY_1                                       ((Dcm_TmrTimerIdMemType)(DCM_TMR_ID_SECURITY_0 + DCM_TMR_NUM_SECURITY_0))
# define DCM_TMR_ID_PERIODIC_TX                                      ((Dcm_TmrTimerIdMemType)(DCM_TMR_ID_SECURITY_1 + DCM_TMR_NUM_SECURITY_1))
# define DCM_TMR_ID_SVC2A_SCHEDULER                                  ((Dcm_TmrTimerIdMemType)(DCM_TMR_ID_PERIODIC_TX + DCM_TMR_NUM_PERIODIC_TX))
# define DCM_TMR_ID_SVC86_INTERMESSAGETIME                           ((Dcm_TmrTimerIdMemType)(DCM_TMR_ID_SVC2A_SCHEDULER + DCM_TMR_NUM_SVC2A_SCHEDULER))
# define DCM_TMR_ID_KEEP_ALIVE                                       ((Dcm_TmrTimerIdMemType)(DCM_TMR_ID_SVC86_INTERMESSAGETIME + DCM_TMR_NUM_SVC86_INTERMESSAGETIME))


/* Number of timers per type */
# define DCM_TMR_NUM_P2                                              1u
# define DCM_TMR_NUM_S3                                              1u
# if (DCM_DIAG_JUMPFROMFBL_ENABLED == STD_ON)
#  define DCM_TMR_NUM_FBLRES                                         1u
# else
#  define DCM_TMR_NUM_FBLRES                                         0u
# endif
# if (DCM_STATE_SEC_RETRY_ENABLED == STD_ON)                                                                                                         /* COV_DCM_UNSUPPORTED XF */
#  define DCM_TMR_NUM_SECURITY_0                                     1u
# else
#  define DCM_TMR_NUM_SECURITY_0                                     0u
# endif
# if (DCM_STATE_SEC_TIMER_1_ENABLED == STD_ON)                                                                                                       /* COV_DCM_UNSUPPORTED XF */
#  define DCM_TMR_NUM_SECURITY_1                                     1u
# else
#  define DCM_TMR_NUM_SECURITY_1                                     0u
# endif
# if (DCM_NET_PERIODIC_TX_ENABLED == STD_ON)                                                                                                         /* COV_DCM_UNSUPPORTED XF */
#  define DCM_TMR_NUM_PERIODIC_TX                                    1u
# else
#  define DCM_TMR_NUM_PERIODIC_TX                                    0u
# endif
# if (DCM_SVC_2A_SUPPORT_ENABLED == STD_ON) && \
     (DCM_SPLIT_TASKS_ENABLED    == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF xf tf */
#  define DCM_TMR_NUM_SVC2A_SCHEDULER                                1u
# else
#  define DCM_TMR_NUM_SVC2A_SCHEDULER                                0u
# endif
# if (DCM_SVC_86_TIMER_ENABLED == STD_ON)                                                                                                            /* COV_DCM_UNSUPPORTED XF */
#  define DCM_TMR_NUM_SVC86_INTERMESSAGETIME                         1u
# else
#  define DCM_TMR_NUM_SVC86_INTERMESSAGETIME                         0u
# endif
# if (DCM_NET_KEEP_ALIVE_TIME_ENABLED == STD_ON)                                                                                                     /* COV_DCM_UNSUPPORTED XF */
#  define DCM_TMR_NUM_KEEP_ALIVE                                     1u
# else
#  define DCM_TMR_NUM_KEEP_ALIVE                                     0u
# endif

# define DCM_TMR_NUM_TIMERS                                          ( DCM_TMR_NUM_P2 \
                                                                     + DCM_TMR_NUM_S3 \
                                                                     + DCM_TMR_NUM_FBLRES \
                                                                     + DCM_TMR_NUM_SECURITY_0 \
                                                                     + DCM_TMR_NUM_SECURITY_1 \
                                                                     + DCM_TMR_NUM_PERIODIC_TX \
                                                                     + DCM_TMR_NUM_SVC2A_SCHEDULER \
                                                                     + DCM_TMR_NUM_SVC86_INTERMESSAGETIME \
                                                                     + DCM_TMR_NUM_KEEP_ALIVE)
# define DCM_TMR_NUM_TIMERS_CASTED                                   ((Dcm_TmrTimerIdMemType) DCM_TMR_NUM_TIMERS)
# if (DCM_DEMAPIMGR_SUPPORT_ENABLED == STD_ON)
#  define DCM_DTC_BIT_DONT_CARE                                      ((uint8)0x00u)
#  define DCM_DTC_BIT_TST_FLD                                        ((uint8)0x01u)
#  define DCM_DTC_BIT_TST_FLD_CYCL                                   ((uint8)0x02u)
#  define DCM_DTC_BIT_PNDG_DTC                                       ((uint8)0x04u)
#  define DCM_DTC_BIT_CONF_DTC                                       ((uint8)0x08u)
#  define DCM_DTC_BIT_TST_NOT_COMPL_CLR                              ((uint8)0x10u)
#  define DCM_DTC_BIT_TST_FLD_CLR                                    ((uint8)0x20u)
#  define DCM_DTC_BIT_TST_NOT_COMPL_CYCL                             ((uint8)0x40u)
#  define DCM_DTC_BIT_WARN_IND_REQ                                   ((uint8)0x80u)
# endif /* (DCM_DEMAPIMGR_SUPPORT_ENABLED == STD_ON) */
# define DCM_DIAG_STATE_IDLE                                         ((Dcm_DiagProcessorStateType)0x00u)
# define DCM_DIAG_STATE_PROCESS                                      ((Dcm_DiagProcessorStateType)0x01u)
# define DCM_DIAG_STATE_ON_TX                                        ((Dcm_DiagProcessorStateType)0x02u)
# define DCM_DIAG_STATE_POST_PROCESS                                 ((Dcm_DiagProcessorStateType)0x04u)
# if (DCM_SVC_86_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
#  if (DCM_DCM_AR_VERSION == DCM_DCM_AR_VERSION_403)
#   define DCM_ROE_AR_STATE_ACTIVE                                   DCM_ROE_ACTIVE
#   define DCM_ROE_AR_STATE_INACTIVE                                 DCM_ROE_UNACTIVE
#   define Dcm_RoEOnEventStateChange(eventId, state)                 ((void)Dcm_ActivateEvent((eventId), (state)))                                   /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  elif (DCM_DCM_AR_VERSION == DCM_DCM_AR_VERSION_421) || \
        (DCM_DCM_AR_VERSION == DCM_DCM_AR_VERSION_422)
#   define DCM_ROE_AR_STATE_ACTIVE                                   RTE_MODE_DcmResponseOnEvent_EVENT_STARTED
#   define DCM_ROE_AR_STATE_INACTIVE                                 RTE_MODE_DcmResponseOnEvent_EVENT_STOPPED
#   define DCM_ROE_AR_STATE_CLEARED                                  RTE_MODE_DcmResponseOnEvent_EVENT_CLEARED
#   define Dcm_RoEOnEventStateChange(eventId, state)                 (Dcm_ModeSwitchRoE((state)))                                                    /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   error "Not supported AR version for RoE!"
#  endif
# endif /* (DCM_SVC_86_SUPPORT_ENABLED == STD_ON) */
/* ----------------------------------------------
 ~&&&   Function-like macros
---------------------------------------------- */
/* Operations */
# define DCM_UTI_LOOP_FOR_EVER                                       for(;;)                                                                         /* PRQA S 3412 */ /* MD_MSR_19.4 */

# define DCM_UTI_VAR_DEF_NAKED(varType, varName)                     varType varName                                                                 /* PRQA S 3453, 3410 */ /* MD_MSR_19.7, MD_Dcm_AbstractTokenReplacment_3410 */
# define DCM_UTI_VAR_DEF(varType, varName)                           DCM_UTI_VAR_DEF_NAKED(varType, varName);                                        /* PRQA S 3412 */ /* MD_MSR_19.4 */
# define DCM_UTI_PARAM_DEF(paramType, paramName)                     DCM_UTI_VAR_DEF_NAKED(paramType, paramName)                                     /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define DCM_UTI_VAR_ASSIGNMENT(varName, value)                      (varName) = (value);                                                            /* PRQA S 3412 */ /* MD_MSR_19.4 */
# define DCM_UTI_VAR_INC(varName)                                    ++(varName);                                                                    /* PRQA S 3412 */ /* MD_MSR_19.4 */
# define DCM_UTI_LOOP_FOR_UP(iterator, iteratorBegin, iteratorEnd)   for((iterator) = (iteratorBegin); (iterator) < (iteratorEnd); ++(iterator))     /* PRQA S 3412 */ /* MD_MSR_19.4 */
# define DCM_UTI_BIT_SCAN_LOOP(bitSet)                               for(;(bitSet) != 0; (bitSet) >>= 1u)                                            /* PRQA S 3412 */ /* MD_MSR_19.4 */

# define Dcm_UtiNextItemByPtr(ptr, step)                             ((ptr)=&(ptr)[(step)])                                                          /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Dcm_UtiPromotedSum(promoType, add1, add2)                   ((promoType)(((promoType)(add1)) + ((promoType)(add2))))                        /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Dcm_UtiIsAdditionSafe(promoType, baseValue, add2)           (Dcm_UtiPromotedSum(promoType,(baseValue),(add2)) > ((promoType)(baseValue)))   /* PRQA S 3453 */ /* MD_MSR_19.7 */

/* Generic atomic bit register type operations */
# define Dcm_UtiBitOpSet(bitRegisterType, bitRegister, bits)         ((bitRegister) |= (bitRegisterType)(bits))                                      /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiBitOpClr(bitRegisterType, bitRegister, bits)         ((bitRegister) &= (bitRegisterType)(~(bits)))                                   /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiBitOpTest(bitRegisterType, bitRegister, bits)        (((bitRegister) & (bitRegisterType)(bits)) != 0)                                /* PRQA S 3453 */ /* MD_MSR_19.7 */

/* Use macro instead of a function to avoid different memory pointer types! */
# define Dcm_UtiMemCopy(srcPtr, tgtPtr, length)                      {Dcm_CfgNetBufferSizeOptType memIter = (Dcm_CfgNetBufferSizeOptType)(length);while(memIter != 0u){--memIter; (tgtPtr)[memIter] = (srcPtr)[memIter];}} /* PRQA S 3453, 3458 */ /* MD_MSR_19.7, MD_MSR_19.4 */
# define Dcm_UtiByteMemCopy(srcPtr, tgtPtr, numBytes)                Dcm_UtiMemCopy((Dcm_Uint8VarDataPtrType)(srcPtr),(Dcm_Uint8VarDataPtrType)(tgtPtr), (numBytes)) /* PRQA S 3453, 3458 */ /* MD_MSR_19.7, MD_MSR_19.4 */
# define Dcm_UtiConstByteMemCopy(srcPtr, tgtPtr, numBytes)           Dcm_UtiMemCopy((Dcm_Uint8ConstDataPtrType)(srcPtr),(Dcm_Uint8VarDataPtrType)(tgtPtr), (numBytes)) /* PRQA S 3453, 3458 */ /* MD_MSR_19.7, MD_MSR_19.4 */
# define Dcm_UtiMemSetUintX(tgtPtr, uintType, uintValue, elements)   {Dcm_CfgNetBufferSizeOptType memIter = (Dcm_CfgNetBufferSizeOptType)(elements);while(memIter != 0u){--memIter; (tgtPtr)[memIter] = (uintType)(uintValue);}} /* PRQA S 3453, 3458 */ /* MD_MSR_19.7, MD_MSR_19.4 */


# define Dcm_UtiMemSet(memAddr, uintValue, memSize, memLoc)          {uint16_least memIter; for(memIter = 0; memIter < (uint16_least)(memSize); ++memIter) {((P2VAR(uint8, TYPEDEF, memLoc))(memAddr))[memIter] = (uint8)(uintValue);}} /* PRQA S 3453, 3458 */ /* MD_MSR_19.7, MD_MSR_19.4 */

# if (DCM_DEV_RAM_SHREDDER_ENABLED == STD_ON)
#  define Dcm_UtiRamShredder(ramObject, memLoc)                      Dcm_UtiRamShredderByPoniter(&(ramObject), sizeof(ramObject)/sizeof(uint8), memLoc) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Dcm_UtiRamShredderArray(memAddr, baseType, numEl, memLoc)  {uint16_least arrayIter; for(arrayIter = 0; arrayIter < (uint16_least)(numEl); ++arrayIter) { Dcm_UtiRamShredderByPoniter(&((memAddr)[arrayIter]),sizeof(baseType), memLoc);}} /* PRQA S 3453, 3458 */ /* MD_MSR_19.7, MD_MSR_19.4 */
#  define Dcm_UtiRamShredderByPoniter(memAddr, memSize, memLoc)      Dcm_UtiMemSet((P2VAR(uint8, TYPEDEF, memLoc))(memAddr), 0xAAu, memSize, memLoc) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Dcm_UtiRamShredder(ramObject, memLoc)                      /* not used */
#  define Dcm_UtiRamShredderArray(memAddr, baseType, numEl, memLoc)  /* not used */
#  define Dcm_UtiRamShredderByPoniter(memAddr, memSize, memLoc)      /* not used */
# endif

# if (DCM_UTI_STRUCT_ASSIGNMENT_ENABLED == STD_ON)
#  define Dcm_UtiAssignStruct(strLhs, strRhs, strType)               ((strLhs) = (strRhs))                                                           /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Dcm_UtiAssignStruct(strLhs, strRhs, strType)               Dcm_UtiByteMemCopy(&(strRhs), &(strLhs), sizeof(strType))                       /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# define Dcm_UtiGetNumBitsOfXintType(xintType)                       ((uint8)( sizeof(xintType) * 8u ))                                              /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiGetMaskFromXintType(uintType, numBits)               ( (uintType)(((uintType)((1uL << ((numBits)-1)) -1uL)) | ((uintType)( 1uL << ((numBits)-1)))) ) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/* Utility used to determine the maximum unsigned value that can be stored in a data type */
# define Dcm_UtiMaxValueOfUintType(uintType)                         (Dcm_UtiGetMaskFromXintType(uintType,Dcm_UtiGetNumBitsOfXintType(uintType)))    /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiMaxValueOfSintType(sintType)                         ( (sintType)( (sintType)((1uL << (Dcm_UtiGetNumBitsOfXintType(sintType)-1)) -1uL)) ) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Dcm_UtiGetBitFromIndex(bitsetBaseType, bitIdx)              ((bitsetBaseType)(((bitsetBaseType)0x01u)<<(bitIdx)))                           /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Dcm_UtiIsPowerOfTwo(bitsetBaseType, bitSet)                 (((bitSet) != 0) && (((bitSet) & ((bitsetBaseType)((bitSet) - 1))) == 0))       /* PRQA S 3453 */ /* MD_MSR_19.7 */


# define Dcm_UtiBitSetGetRowIdx(bitsetBaseType, bit)                 ( (bit) / Dcm_UtiGetNumBitsOfXintType(bitsetBaseType) )                         /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiBitSetGetColIdx(bitsetBaseType, bit)                 ( (bit) % Dcm_UtiGetNumBitsOfXintType(bitsetBaseType) )                         /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiBitSetBitAt(bitsetBaseType, bit)                     ( (bitsetBaseType)(Dcm_UtiGetBitFromIndex(bitsetBaseType, Dcm_UtiBitSetGetColIdx(bitsetBaseType, (bit))) ) ) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiBitSetAtRow(bitSet, bitsetBaseType, bit)             ( (bitSet)[ Dcm_UtiBitSetGetRowIdx(bitsetBaseType, (bit)) ] )                   /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Dcm_UtiBitSetCalcSize(bitsetBaseType, bits)                 ( ( ((bits) - 1u) / Dcm_UtiGetNumBitsOfXintType(bitsetBaseType) ) + 1u )        /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiBitSetTestBit(bitsetBaseType, bitSet, bit)           ( Dcm_UtiBitOpTest(bitsetBaseType, Dcm_UtiBitSetAtRow((bitSet), bitsetBaseType, (bit)), Dcm_UtiBitSetBitAt(bitsetBaseType, (bit))) ) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiBitSetSetBit(bitsetBaseType, bitSet, bit)            ( Dcm_UtiBitOpSet( bitsetBaseType, Dcm_UtiBitSetAtRow((bitSet), bitsetBaseType, (bit)), Dcm_UtiBitSetBitAt(bitsetBaseType, (bit))) ) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiBitSetClrBit(bitsetBaseType, bitSet, bit)            ( Dcm_UtiBitOpClr( bitsetBaseType, Dcm_UtiBitSetAtRow((bitSet), bitsetBaseType, (bit)), Dcm_UtiBitSetBitAt(bitsetBaseType, (bit))) ) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/* Utility for set/unset bits in a bit field */
# define Dcm_UtiGenericBitSetCalcSize(bits)                          (Dcm_UtiBitSetCalcSize(Dcm_UtiBitSetBaseType, (bits)))                          /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiGenericBitSetTestBit(bitSet, bit)                    (Dcm_UtiBitSetTestBit(Dcm_UtiBitSetBaseType, (bitSet), (bit)))                  /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiGenericBitSetSetBit(bitSet, bit)                     (Dcm_UtiBitSetSetBit(Dcm_UtiBitSetBaseType, (bitSet), (bit)))                   /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiGenericBitSetClrBit(bitSet, bit)                     (Dcm_UtiBitSetClrBit(Dcm_UtiBitSetBaseType, (bitSet), (bit)))                   /* PRQA S 3453 */ /* MD_MSR_19.7 */

/* Maths */
# define Dcm_UtiMathMin(a, b)                                        (((a)<=(b))?(a):(b))                                                            /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiGetNumElementsOfTable(table, baseType)               (sizeof(table)/sizeof(baseType))                                                /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Dcm_UtiStackType(baseType, size)                            struct { baseType Stack[(size)]; Dcm_UtiStackCntrType StackTop; }               /* PRQA S 3412, 3453, 3410 */ /* MD_MSR_19.4, MD_MSR_19.7, MD_Dcm_AbstractTokenReplacment_3410 */

# define Dcm_UtiStackInit(stackVar)                                  ((stackVar).StackTop=-1)                                                        /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiStackPush(stackVar, value)                           ((stackVar).Stack[++((stackVar).StackTop)]=(value))                             /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiStackPop(stackVar)                                   (--((stackVar).StackTop))                                                       /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiStackTop(stackVar)                                   ((stackVar).Stack[(stackVar).StackTop])                                         /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiStackIsFull(stackVar, stackBaseType)                 (((stackVar).StackTop) >= (Dcm_UtiStackCntrType)(Dcm_UtiGetNumElementsOfTable((stackVar).Stack, stackBaseType) - 1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiStackIsEmpty(stackVar)                               (((stackVar).StackTop) < 0)                                                     /* PRQA S 3453 */ /* MD_MSR_19.7 */
# if (DCM_BSW_ENV_ASR_VERSION_3XX_ENABLED == STD_ON)                                                                                                 /* COV_DCM_UNSUPPORTED XF */
#  define Dcm_DebugCallDetReportError(apiId, errId)                  (Det_ReportError((uint16)(DCM_MODULE_ID), (uint8)0, (uint8)(apiId), (uint8)(errId))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* (DCM_BSW_ENV_ASR_VERSION_3XX_ENABLED == STD_ON) */
# if (DCM_BSW_ENV_ASR_VERSION_4XX_ENABLED == STD_ON) || \
     (DCM_BSW_ENV_ASR_VERSION_401_ENABLED == STD_ON)                                                                                                 /* COV_DCM_SUPPORT_PARTIALLY TX tx xf */
#  define Dcm_DebugCallDetReportError(apiId, errId)                  ((void)Det_ReportError((uint16)(DCM_MODULE_ID), (uint8)0, (uint8)(apiId), (uint8)(errId))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* (DCM_BSW_ENV_ASR_VERSION_4XX_ENABLED == STD_ON) || \
 (DCM_BSW_ENV_ASR_VERSION_401_ENABLED == STD_ON) */
/* *** Assertions *** */
# if(DCM_DEV_ERROR_REPORT == STD_ON)
/* If DET is enabled, a MISRA-C:2004 analysis will yield deviations to the rules:
 *  - 14.3 Before pre-processing, a null statement shall only occur on a line by itself; it may be followed by a comment provided that the first character following the null statement is a white-space character.
 *  - 14.7 A function shall have a single point of exit at the end of the function
 *  - 19.4 C macros shall only expand to a braced initializer, a constant, a parenthesized expression, a type qualifier, a storage class specifier, or a do-while-zero construct
 *  - 19.7 A function should be used in preference to a function-like macro.
 *  These deviations are caused by design of the runtime/resource optimized DET handling and are globally justified.
*/
#  define Dcm_DebugReportError(apiId, errId)                         (Dcm_DebugCallDetReportError((apiId), (errId)))                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Dcm_DebugReportError(apiId, errId)                         /* not used */
# endif /* (DCM_DEV_ERROR_REPORT == STD_ON) */

/* Common API checks */
# define Dcm_DebugApiCheckRte(cond, apiId, errId)                    /* Not used */
# define Dcm_DebugApiCheckRteAlways(apiId, errId)                    /* Not used */
# define Dcm_DebugApiCheckRteReturnVoid(cond, apiId, errId)          /* Not used */
# define Dcm_DebugApiCheckRteReturnValue(cond, exitCode, apiId, errId) /* Not used */

# if(DCM_DEBUG_ERROR_DETECT == STD_ON)                                                                                                               /* COV_DCM_DEV_DEBUG XF */
#  define Dcm_DebugAssertAlways(apiId, errId)                        { Dcm_DebugAssertReport((apiId),(errId)); }
#  define Dcm_DebugAssert(cond, apiId, errId)                        if(!(cond)) Dcm_DebugAssertAlways((apiId), (errId))
# else
/* maximum code efficiency - no run-time checks needed */
#  define Dcm_DebugAssert(cond, apiId, errId)                        /* not used */
#  define Dcm_DebugAssertAlways(apiId, errId)                        /* not used */
# endif /* (DCM_DEBUG_ERROR_DETECT == STD_ON) */
# define Dcm_TskIsLocalEventSet(evReg, ev)                           (Dcm_UtiBitOpTest(Dcm_TskTaskEvOptType, (evReg), (ev)))                         /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_TskSetLocalEvent(evReg, ev)                             (Dcm_UtiBitOpSet( Dcm_TskTaskEvOptType, (evReg), (ev)))                         /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_TskClrLocalEvent(evReg, ev)                             (Dcm_UtiBitOpClr( Dcm_TskTaskEvOptType, (evReg), (ev)))                         /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define DCM_TSK_EVENT_SCAN_LOOP(evReg)                              DCM_UTI_BIT_SCAN_LOOP(evReg)                                                    /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_TmrMillisecondsToTicks(ms)                              ((Dcm_TmrTimerCntrMemType)((ms)/DCM_TASK_CYCLE_MS))                             /* PRQA S 3453 */ /* MD_MSR_19.7 */
# if (DCM_DEMAPIMGR_SUPPORT_ENABLED == STD_ON)
#  define Dcm_DemApiSetNegResponse(demResult, demRsl2NrcMap)         (Dcm_SetNegResponse(Dcm_DemApiGetNrcForDemRetValue((demResult), (demRsl2NrcMap)))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  if (DCM_DEM_API_403_ENABLED == STD_ON)                                                                                                            /* COV_DCM_UNSUPPORTED XF */
/* return values */
#   define DCM_DEM_RET_FFBYRECORD_OK                                 DEM_GET_FFBYRECORD_OK
#   define DCM_DEM_RET_FFBYRECORD_NO_DTC                             DEM_GET_FFBYRECORD_NO_DTC_FOR_RECORD

/* Dem_ReturnGetSizeOfExtendedDataRecordByDTCType */
#   define DCM_DEM_RET_SIZEOFEDR_OK                                  DEM_GET_SIZEOFEDRBYDTC_OK
#   define DCM_DEM_RET_SIZEOFEDR_W_DTC                               DEM_GET_SIZEOFEDRBYDTC_W_DTC
#   define DCM_DEM_RET_SIZEOFEDR_W_ORIGIN                            DEM_GET_SIZEOFEDRBYDTC_W_DTCOR
#   define DCM_DEM_RET_SIZEOFEDR_W_RNUM                              DEM_GET_SIZEOFEDRBYDTC_W_RNUM
#   define DCM_DEM_RET_SIZEOFEDR_PENDING                             DEM_GET_SIZEOFEDRBYDTC_PENDING


/* Dem_ReturnGetSizeOfFreezeFrameByDTCType */
#   define DCM_DEM_RET_SIZEOFFFR_OK                                  DEM_GET_SIZEOFFF_OK
#   define DCM_DEM_RET_SIZEOFFFR_W_DTC                               DEM_GET_SIZEOFFF_WRONG_DTC
#   define DCM_DEM_RET_SIZEOFFFR_W_ORIGIN                            DEM_GET_SIZEOFFF_WRONG_DTCOR
#   define DCM_DEM_RET_SIZEOFFFR_W_RNUM                              DEM_GET_SIZEOFFF_WRONG_RNUM
#   define DCM_DEM_RET_SIZEOFFFR_PENDING                             DEM_GET_SIZEOFFF_PENDING

/* Dem_ReturnGetNextFilteredDTCType */
#   define DCM_DEM_RET_FILTERED_OK                                   DEM_FILTERED_OK
#   define DCM_DEM_RET_FILTERED_NO_ITEMS                             DEM_FILTERED_NO_MATCHING_DTC
#   define DCM_DEM_RET_FILTERED_PENDING                              DEM_FILTERED_PENDING
/*
Shall not be used:
#define DCM_DEM_RET_FILTERED_BUFFER_TOO_SMALL
*/

/* Dem_ReturnClearDTCType */
#   define DCM_DEM_RET_CLEAR_OK                                      DEM_CLEAR_OK
#   define DCM_DEM_RET_CLEAR_W_DTC                                   DEM_CLEAR_WRONG_DTC
#   define DCM_DEM_RET_CLEAR_W_ORIGIN                                DEM_CLEAR_WRONG_DTCORIGIN
#   define DCM_DEM_RET_CLEAR_FAILED                                  DEM_CLEAR_FAILED
#   define DCM_DEM_RET_CLEAR_PENDING                                 DEM_CLEAR_PENDING
/*
Shall not be used:
#define DCM_DEM_RET_CLEAR_BUSY
#define DCM_DEM_RET_CLEAR_MEMORY_ERROR
*/


/* types */
#   define Dcm_DemReturnGetNextFilteredItemType                      Dem_ReturnGetNextFilteredDTCType
#   define Dcm_DemReturnGetSizeOfFFRByDTCType                        Dem_ReturnGetSizeOfFreezeFrameByDTCType
#   define Dcm_DemReturnGetSizeOfEDRByDTCType                        Dem_ReturnGetSizeOfExtendedDataRecordByDTCType
#   define Dcm_DemReturnGetFreezeFrameDataByRecordType               Dem_ReturnGetFreezeFrameDataByRecordType

/* functions - generic rename */
#   define Dcm_DemAPI(name)                                          Dem_ ## name                                                                    /* PRQA S 0342 */ /* MD_Dcm_Consistency_0342 */

/* functions - special cases */
#   define Dcm_DemAPI_CancelOperation                                Dem_DcmCancelOperation
#   define Dcm_DemAPI_GetOBDFreezeFrameData(recNum, dtcOrigin, dtc, buffer, bufferSize) (Dem_GetFreezeFrameDataByRecord((recNum), (dtcOrigin), (dtc), (buffer), (bufferSize))) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  elif (DCM_DEM_API_412_ENABLED == STD_ON) || \
        (DCM_DEM_API_421_ENABLED == STD_ON)                                                                                                          /* COV_DCM_SUPPORT_RESTRICTED TX tf tf */
/* return values */
#   define DCM_DEM_RET_FFBYRECORD_OK                                 E_OK
#   define DCM_DEM_RET_FFBYRECORD_NO_DTC                             E_NOT_OK

/* Dem_ReturnGetSizeOfDataByDTCType (ED) */
#   define DCM_DEM_RET_SIZEOFEDR_OK                                  DEM_GETSIZEBYDTC_OK
#   define DCM_DEM_RET_SIZEOFEDR_W_DTC                               DEM_GETSIZEBYDTC_WRONG_DTC
#   define DCM_DEM_RET_SIZEOFEDR_W_ORIGIN                            DEM_GETSIZEBYDTC_WRONG_DTCORIGIN
#   define DCM_DEM_RET_SIZEOFEDR_W_RNUM                              DEM_GETSIZEBYDTC_WRONG_RECNUM
#   define DCM_DEM_RET_SIZEOFEDR_PENDING                             DEM_GETSIZEBYDTC_PENDING


/* Dem_ReturnGetSizeOfDataByDTCType (FF) */
#   define DCM_DEM_RET_SIZEOFFFR_OK                                  DEM_GETSIZEBYDTC_OK
#   define DCM_DEM_RET_SIZEOFFFR_W_DTC                               DEM_GETSIZEBYDTC_WRONG_DTC
#   define DCM_DEM_RET_SIZEOFFFR_W_ORIGIN                            DEM_GETSIZEBYDTC_WRONG_DTCORIGIN
#   define DCM_DEM_RET_SIZEOFFFR_W_RNUM                              DEM_GETSIZEBYDTC_WRONG_RECNUM
#   define DCM_DEM_RET_SIZEOFFFR_PENDING                             DEM_GETSIZEBYDTC_PENDING


/* Dem_ReturnGetNextFilteredElementType */
#   define DCM_DEM_RET_FILTERED_OK                                   DEM_FILTERED_OK
#   define DCM_DEM_RET_FILTERED_NO_ITEMS                             DEM_FILTERED_NO_MATCHING_ELEMENT
#   define DCM_DEM_RET_FILTERED_PENDING                              DEM_FILTERED_PENDING
#   define DCM_DEM_RET_FILTERED_BUFFER_TOO_SMALL                     DEM_FILTERED_BUFFER_TOO_SMALL


/* Dem_ReturnClearDTCType */
#   define DCM_DEM_RET_CLEAR_OK                                      DEM_CLEAR_OK
#   define DCM_DEM_RET_CLEAR_W_DTC                                   DEM_CLEAR_WRONG_DTC
#   define DCM_DEM_RET_CLEAR_W_ORIGIN                                DEM_CLEAR_WRONG_DTCORIGIN
#   define DCM_DEM_RET_CLEAR_FAILED                                  DEM_CLEAR_FAILED
#   define DCM_DEM_RET_CLEAR_PENDING                                 DEM_CLEAR_PENDING
#   define DCM_DEM_RET_CLEAR_BUSY                                    DEM_CLEAR_BUSY
/* Keep temporary DEM AR 4.2.1 compatibility */
#   if (DCM_DEM_API_421_ENABLED == STD_ON)
#    define DCM_DEM_RET_CLEAR_MEMORY_ERROR                           DEM_CLEAR_MEMORY_ERROR
#   else
 /* shall not be used */
#   endif

/* types */
#   define Dcm_DemReturnGetNextFilteredItemType                      Dem_ReturnGetNextFilteredElementType
#   define Dcm_DemReturnGetSizeOfFFRByDTCType                        Dem_ReturnGetSizeOfDataByDTCType
#   define Dcm_DemReturnGetSizeOfEDRByDTCType                        Dem_ReturnGetSizeOfDataByDTCType
#   define Dcm_DemReturnGetFreezeFrameDataByRecordType               Std_ReturnType


/* functions - generic rename */
#   define Dcm_DemAPI(name)                                          Dem_Dcm ## name                                                                 /* PRQA S 0342 */ /* MD_Dcm_Consistency_0342 */

/* functions - special cases */
#   define Dcm_DemAPI_CancelOperation                                Dem_DcmCancelOperation
#   define Dcm_DemAPI_GetOBDFreezeFrameData(recNum, dtcOrigin, dtc, buffer, bufferSize) (Dem_DcmGetOBDFreezeFrameData((dtc), (buffer), (bufferSize))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   error "Unknown DEM AR API interface!"
#  endif
# endif /* (DCM_DEMAPIMGR_SUPPORT_ENABLED == STD_ON) */
# define Dcm_DiagUpdateReqLength(msgContextPtr, step)                ((msgContextPtr)->reqDataLen -= (Dcm_MsgLenType)(step))                         /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_DiagMoveOnReq(msgContextPtr, step)                      (Dcm_UtiNextItemByPtr((msgContextPtr)->reqData, (step)))                        /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Dcm_DiagMoveOnReqWithLength(msgContextPtr, step)            { \
                                                                     Dcm_DiagMoveOnReq((msgContextPtr), (step)); \
                                                                     Dcm_DiagUpdateReqLength((msgContextPtr), (step)); \
                                                                     }                                                                               /* PRQA S 3412, 3458 */ /* MD_MSR_19.4 */


# define Dcm_DiagUpdateResLength(msgContextPtr, step)                ((msgContextPtr)->resDataLen += (Dcm_MsgLenType)(step))                         /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_DiagUpdateResLengthAll(msgContextPtr, step)             { \
                                                                     Dcm_DiagUpdateResLength((msgContextPtr), (step)); \
                                                                     (msgContextPtr)->resMaxDataLen -= (Dcm_MsgLenType)(step); \
                                                                     }                                                                               /* PRQA S 3412, 3458 */ /* MD_MSR_19.4 */
# define Dcm_DiagMoveOnRes(msgContextPtr, step)                      (Dcm_UtiNextItemByPtr((msgContextPtr)->resData, (step)))                        /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Dcm_DiagMoveOnResWithLength(msgContextPtr, step)            { \
                                                                     Dcm_DiagMoveOnRes((msgContextPtr), (step)); \
                                                                     Dcm_DiagUpdateResLength((msgContextPtr), (step)); \
                                                                     }                                                                               /* PRQA S 3412, 3458 */ /* MD_MSR_19.4 */
# define Dcm_DiagMoveOnResWithLengthAll(msgContextPtr, step)         { \
                                                                     Dcm_DiagMoveOnRes((msgContextPtr), (step)); \
                                                                     Dcm_DiagUpdateResLengthAll((msgContextPtr), (step)); \
                                                                     }                                                                               /* PRQA S 3412, 3458 */ /* MD_MSR_19.4 */

# define Dcm_DiagHandleApplNrc(stdResult, pErrorCode, defaultNrc)    { \
                                                                     if( ((stdResult) == DCM_E_NOT_OK) \
                                                                     &&(*(pErrorCode) == DCM_E_POSITIVERESPONSE) ) \
                                                                     { \
                                                                     *(pErrorCode) = (defaultNrc); \
                                                                     Dcm_DebugReportError(DCM_SID_INTERNAL, DCM_E_PARAM); \
                                                                     } \
                                                                     }                                                                               /* PRQA S 3412, 3458 */ /* MD_MSR_19.4 */
/* ----------------------------------------------
 ~&&&   Typedefs
---------------------------------------------- */
typedef sint16       Dcm_UtiStackCntrType;
typedef uint8_least  Dcm_UtiBitSetBaseType;
typedef P2FUNC (Std_ReturnType, DCM_CODE, Dcm_RepeaterProxyFuncType) (Dcm_OpStatusType, Dcm_MsgContextPtrType);
typedef uint8 Dcm_RepeaterSvcContextHandleType;
typedef uint8        Dcm_TskTaskIdMemType;
typedef uint8_least  Dcm_TskTaskIdOptType;

# if (DCM_TSK_EV_NUM_BITS <= 8)                                                                                                                      /* COV_DCM_SUPPORT_ALWAYS TX */
typedef uint8        Dcm_TskTaskEvMemType;
typedef uint8_least  Dcm_TskTaskEvOptType;
# else
#  if (DCM_TSK_EV_NUM_BITS <= 16)
typedef uint16        Dcm_TskTaskEvMemType;
typedef uint16_least  Dcm_TskTaskEvOptType;
#  else                                                                                                                                              /* COV_DCM_UNSUPPORTED XF */
typedef uint32        Dcm_TskTaskEvMemType;
typedef uint32_least  Dcm_TskTaskEvOptType;
#  endif
# endif
typedef P2VAR(Dcm_TskTaskEvOptType, TYPEDEF, AUTOMATIC) Dcm_TskTaskEvPtrType;
typedef uint8        Dcm_TmrTimerIdMemType;
typedef uint8_least  Dcm_TmrTimerIdOptType;

# if (DCM_TMR_NUM_TIMERS <= 8u)                                                                                                                      /* COV_DCM_SUPPORT_ALWAYS TX */
typedef uint8        Dcm_TmrMaskMemType;
typedef uint8_least  Dcm_TmrMaskOptType;
# elif (DCM_TMR_NUM_TIMERS <= 16u)
typedef uint16        Dcm_TmrMaskMemType;
typedef uint16_least  Dcm_TmrMaskOptType;
# elif (DCM_TMR_NUM_TIMERS <= 32u)
typedef uint32        Dcm_TmrMaskMemType;
typedef uint32_least  Dcm_TmrMaskOptType;
# else
#  error "Too many system timers!"
# endif
typedef Dcm_CfgNetBufferSizeMemType Dcm_DiagSubServiceLengthType;
typedef uint8_least Dcm_DiagSubServiceRefOptType;
typedef P2VAR(Dcm_DiagSubServiceRefOptType, TYPEDEF, DCM_VAR_NOINIT)  Dcm_DiagSubServiceRefOptPtrType;
typedef uint8 Dcm_DiagProcessorStateType;
/* ----------------------------------------------
 ~&&&   Module internal API function declarations
---------------------------------------------- */
# define DCM_START_SEC_CODE
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/**********************************************************************************************************************
 *  Dcm_UtiLookUpUint8()
 *********************************************************************************************************************/
/*! \brief          Searches a byte table for an element.
 *  \details        -
 *  \param[in]      lookUpTable    Pointer to the table to be scanned
 *  \param[in]      value          Value to be found (first element is table-size!)
 *  \return         -1             Look up failed (no match)
 *  \return         >=0            Success, index of the matched position
 *  \context        ISR1|ISR2|TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Table pointer must not be NULL_PTR.
 *********************************************************************************************************************/
FUNC(sint16_least, DCM_CODE) Dcm_UtiLookUpUint8(Dcm_Uint8ConstDataPtrType lookUpTable, uint8 value);

# if(DCM_UTI_NVM_READ_ENABLED == STD_ON)                                                                                                             /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_UtiNvMRead()
 *********************************************************************************************************************/
/*! \brief          Reads a NvM data block
 *  \details        -
 *  \param[in]      opStatus     The operation status
 *  \param[out]     data         Data buffer for the result
 *  \param[in]      blockId      Id of the NvRam block
 *  \return         DCM_E_OK        Read operation finished successfully.
 *  \return         DCM_E_NOT_OK    Read operation finished with error or got cancelled.
 *  \return         DCM_E_PENDING   Read operation needs more time to be accomplished.
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    FALSE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_UtiNvMRead(Dcm_OpStatusType                opStatus
                                             ,Dcm_GenericDcmRamNoInitPtrType  data
                                             ,uint16                          blockId);
# endif

# if(DCM_UTI_NVM_WRITE_ENABLED == STD_ON)                                                                                                            /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_UtiNvMWrite()
 *********************************************************************************************************************/
/*! \brief          Writes a NvM data block
 *  \details        -
 *  \param[in]      opStatus     The operation status
 *  \param[in]      data         Data buffer of the content to be written
 *  \param[in]      blockId      Id of the NvRam block
 *  \return         DCM_E_OK        Write operation finished successfully.
 *  \return         DCM_E_NOT_OK    Write operation finished with error or got cancelled.
 *  \return         DCM_E_PENDING   Write operation needs more time to be accomplished.
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    FALSE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_UtiNvMWrite(Dcm_OpStatusType                     opStatus
                                              ,Dcm_GenericDcmConstRamNoInitPtrType  data
                                              ,uint16                               blockId);
# endif

# if(DCM_UTI_NVM_SWCDATA_WRITE_ENABLED == STD_ON)                                                                                                    /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_UtiNvMSwcDataWrite()
 *********************************************************************************************************************/
/*! \brief          Writes a NvM data block that is used by a SW-C.
 *  \details        -
 *  \param[in]      opStatus     The operation status
 *  \param[in]      data         Data buffer of the content to be written
 *  \param[in]      blockId      Id of the NvRam block
 *  \return         DCM_E_OK        Write operation finished successfully.
 *  \return         DCM_E_NOT_OK    Write operation finished with error or got cancelled.
 *  \return         DCM_E_PENDING   Write operation needs more time to be accomplished.
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    FALSE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_UtiNvMSwcDataWrite(Dcm_OpStatusType                     opStatus
                                                     ,Dcm_GenericDcmConstRamNoInitPtrType  data
                                                     ,uint16                               blockId);
# endif
# if(DCM_EXT_NEED_API_DEBUGISMODULEINITIALIZED_ENABLED == STD_ON)                                                                                    /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_DebugIsModuleInitialized()
 *********************************************************************************************************************/
/*! \brief          Checks whether the DCM is initialized.
 *  \details        -
 *  \return         TRUE     The module is initialized
 *  \return         FALSE    The module is not initialized
 *  \context        ISR1|ISR2|TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(boolean, DCM_CODE) Dcm_DebugIsModuleInitialized(void);
# endif
# if (DCM_NET_INTERNAL_REQ_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_NetRxIndInternal()
 *********************************************************************************************************************/
/*! \brief          Provides a means for virtual/internal diagnostic request.
 *  \details        This API is generally used for RoE (SID 0x86) purposes.
 *  \param[in]      rxPduId            The RxPDUID of the request
 *  \param[in]      data               The data of the request
 *  \param[in]      length             The length of the request
 *  \return         DCM_E_OK           Reception was successful
 *  \return         DCM_E_NOT_OK       Reception was not successful
 *  \context        ISR1|ISR2|TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_NetRxIndInternal(PduIdType     rxPduId
                                                   ,Dcm_MsgType   data
                                                   ,PduLengthType length);
# endif

# if (DCM_EXT_NEED_API_NETGETCOMSTATE_ENABLED == STD_ON)                                                                                             /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_NetGetComState()
 *********************************************************************************************************************/
/*! \brief          Returns the communication state for the given RxPduId.
 *  \details        -
 *  \param[in]      rxPduId    The RxPDUID of the request
 *  \return         The communication state
 *  \context        ISR1|ISR2
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Dcm_NetComMStateType, DCM_CODE) Dcm_NetGetComState(PduIdType rxPduId);
# endif
/**********************************************************************************************************************
 *  Dcm_RepeaterSetCallee()
 *********************************************************************************************************************/
/*! \brief          Starts polling a repeater proxy.
 *  \details        -
 *  \param[in]      pProxy    The proxy callee
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_RepeaterSetCallee(Dcm_RepeaterProxyFuncType pProxy);

# if (DCM_REPEATER_EXT_CONTEXT_GETTER_ENABLED == STD_ON)                                                                                             /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_RepeaterGetExtSvcContext()
 *********************************************************************************************************************/
/*! \brief          Returns the service context for a specific service context handle.
 *  \details        -
 *  \param[in]      handle    Abstract service handle
 *  \return         The service context
 *  \context        ISR1|ISR2
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Dcm_GenericDcmRamNoInitPtrType, DCM_CODE) Dcm_RepeaterGetExtSvcContext(Dcm_RepeaterSvcContextHandleType handle);
# endif
# if (DCM_MODEMGR_SUPPORT_ENABLED == STD_ON)                                                                                                         /* COV_DCM_SUPPORT_ALWAYS TX */
#  if (DCM_MODE_ROE_ENABLED == STD_ON)                                                                                                               /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_ModeSwitchRoE()
 *********************************************************************************************************************/
/*! \brief          Mode switching for RoE activation state change.
 *  \details        -
 *  \param[in]      mode    The mode
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_ModeSwitchRoE(Rte_ModeType_DcmResponseOnEvent mode);
#  endif
# endif /* (DCM_MODEMGR_SUPPORT_ENABLED == STD_ON) */
# if (DCM_TSK_NUM_ROE > 0)                                                                                                                           /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_ExtSvc86Task()
 *********************************************************************************************************************/
/*! \brief          Service 0x86 task.
 *  \details        Low priority task of the RoE sub-module.
 *  \param[in]      ev         The active event(s) of the task
 *  \param[in,out]  pPostEv    The event(s) to be processed next task activation
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_ExtSvc86Task(Dcm_TskTaskEvOptType ev
                                     ,Dcm_TskTaskEvPtrType pPostEv);
# endif

/**********************************************************************************************************************
 *  Dcm_TskClrEvent()
 *********************************************************************************************************************/
/*! \brief          Clears event(s) of a task.
 *  \details        Clears the given events for a specific task.
 *  \param[in]      taskId    The task handle
 *  \param[in]      ev        The event(s) to be cleared
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_TskClrEvent(Dcm_TskTaskIdOptType taskId
                                    ,Dcm_TskTaskEvMemType ev);

/**********************************************************************************************************************
 *  Dcm_TskSetEvent()
 *********************************************************************************************************************/
/*! \brief          Notifies a task for events.
 *  \details        Sets an event for a specific task.
 *  \param[in]      taskId    The task handle
 *  \param[in]      ev        The event(s) to be cleared
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_TskSetEvent(Dcm_TskTaskIdOptType taskId
                                    ,Dcm_TskTaskEvMemType ev);
/**********************************************************************************************************************
 *  Dcm_TmrStopTimer()
 *********************************************************************************************************************/
/*! \brief          Stops a timer.
 *  \details        Stops a timer with the given timer ID.
 *  \param[in]      timerId    The timer handle
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_TmrStopTimer(Dcm_TmrTimerIdOptType timerId);

/**********************************************************************************************************************
 *  Dcm_TmrStopTimer()
 *********************************************************************************************************************/
/*! \brief          Starts a timer with a given time value.
 *  \details        Starts a timer with the given timer ID with the given time value.
 *  \param[in]      timerId      The timer handle
 *  \param[in]      timeTicks    The concrete time to elapse
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_TmrStartTimer(Dcm_TmrTimerIdOptType timerId
                                      ,Dcm_TmrTimerCntrMemType timeTicks);
/* --- Timer notification functions -------------------------------------------------------------------------------- */
# if (DCM_TMR_NUM_SVC86_INTERMESSAGETIME > 0)                                                                                                        /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_ExtOnTimeoutSvc86InterMessageTime()
 *********************************************************************************************************************/
/*! \brief          Service 0x86 timer function to trigger sampling for onDTCStatusChange events.
 *  \details        -
 *  \return         Returns always 0
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Dcm_TmrTimerCntrMemType, DCM_CODE) Dcm_ExtOnTimeoutSvc86InterMessageTime(void);
# endif
# if (DCM_EXT_NEED_API_DIAGGETACTIVITYSTATE_ENABLED == STD_ON)                                                                                       /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_DiagGetActivityState()
 *********************************************************************************************************************/
/*! \brief          Returns the DCM diagnostic sub-module activity state.
 *  \details        -
 *  \return         The current activity state
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Dcm_DiagProcessorStateType, DCM_CODE) Dcm_DiagGetActivityState(void);
# endif
# if (DCM_EXT_NEED_API_VARMGRGETACTIVECOMVARIANT_ENABLED == STD_ON)                                                                                  /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_VarMgrGetActiveComVariant()
 *********************************************************************************************************************/
/*! \brief          Returns currently set variant.
 *  \details        Returns currently active communication variant.
 *  \return         Operation result
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC (Dcm_CfgVarMgrComVariantType, DCM_CODE) Dcm_VarMgrGetActiveComVariant(void);
# endif
# if (DCM_SVC_86_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
#  if (DCM_SVC_86_RST_ON_DSC_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_ExtSvc86OnChangeSession()
 *********************************************************************************************************************/
/*! \brief          Service 0x86 utility function to notify RoE about a session change.
 *  \details        -
 *  \param[in]      oldSession    The old session
 *  \param[in]      newSession    The old session
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_ExtSvc86OnChangeSession(Dcm_CfgStateGroupOptType oldSession
                                                ,Dcm_CfgStateGroupOptType newSession);
#  endif
# endif /* (DCM_SVC_86_SUPPORT_ENABLED == STD_ON) */
# define DCM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
#endif /* !defined(DCM_COREINT_H) */
/* ********************************************************************************************************************
 * END OF FILE: Dcm_CoreInt.h
 * ******************************************************************************************************************** */
