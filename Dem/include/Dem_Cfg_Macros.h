
/* ********************************************************************************************************************
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
 *         File:  Dem_Cfg_Macros.h
 *      Project:  MICROSAR Diagnostic Event Manager (Dem)
 *       Module:  Configuration
 *    Generator:  -
 *
 *  Description:  Macro definitions of configuration subcomponent
 *
 *********************************************************************************************************************/

/* ********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Stefan Huebner                vishrs        Vector Informatik GmbH
 *  Alexander Ditte               visade        Vector Informatik GmbH
 *  Matthias Heil                 vismhe        Vector Informatik GmbH
 *  Thomas Dedler                 visdth        Vector Informatik GmbH
 *  Anna Bosch                    visanh        Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                           Refer to Dem.c
 *
 *********************************************************************************************************************/

#if !defined (DEM_CFG_MACROS_H)
#define DEM_CFG_MACROS_H

/* ********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/* ********************************************************************************************************************
 * CONFIGURATION DEFAULTS
 *********************************************************************************************************************/

#if !defined (DEM_CFG_AGING_START_CLEARS_OBD_FF)                                                                                 /* COV_MSR_COMPATIBILITY TX */
/*! Define whether the OBD freezeframe is cleared when an event ages before confirmation completes. */
# define DEM_CFG_AGING_START_CLEARS_OBD_FF       STD_ON
#endif

#if !defined (DEM_CFG_SUPPORT_NVM_POLLING)                                                                                       /* COV_MSR_COMPATIBILITY TX */
/*! Define whether to poll the NvM job results instead of relying on job end notifications */
# define DEM_CFG_SUPPORT_NVM_POLLING             STD_OFF
#endif

#if !defined (DEM_CFG_IUMPR_RESET_PENDING_RATIO)                                                                                 /* COV_MSR_COMPATIBILITY TX */
/*! Number of ratios which are processed at most before critical section 'DiagMonitor' is left for a short time. */
# define DEM_CFG_IUMPR_RESET_PENDING_RATIO       50
#endif

/* ********************************************************************************************************************
 *  PRECOMPILE CONSTANT EVALUATION
 *********************************************************************************************************************/
/*! Define whether the event healing target is defined by a global macro */
#define DEM_CFG_ISCONST_HEALINGTARGET            DEM_CFG_ISDEF_HEALINGTARGETOFEVENTTABLE
/*! Define the global event healing target */
#define DEM_CFG_CONST_HEALINGTARGET              DEM_CFG_EQ2_HEALINGTARGETOFEVENTTABLE

/*! Define whether the event latch failed option is defined by a global macro */
#define DEM_CFG_ISCONST_LATCHTESTFAILED          DEM_CFG_ISDEF_EVENTLATCHTFOFEVENTTABLE
/*! Define the global event latch failed option */
#define DEM_CFG_CONST_LATCHTESTFAILED            DEM_CFG_EQ2_EVENTLATCHTFOFEVENTTABLE

/*! Define whether the event trip count is defined by a global macro */
#define DEM_CFG_ISCONST_TRIPTARGET               DEM_CFG_ISDEF_EVENTFAILURECYCLECOUNTERTHRESHOLDOFEVENTTABLE
/*! Define the global event trip count */
#define DEM_CFG_CONST_TRIPTARGET                 DEM_CFG_EQ2_EVENTFAILURECYCLECOUNTERTHRESHOLDOFEVENTTABLE

#if (DEM_CFG_SUPPORT_EVENTAVAILABLE == STD_ON)
/*! Define whether the event availability is stored non volatile */
# define DEM_FEATURE_NEED_EVENTAVAILABLE_NV      DEM_CFG_SUPPORT_EVENTAVAILABLE_NV
#else
/*! Define whether the event availability is stored non volatile */
# define DEM_FEATURE_NEED_EVENTAVAILABLE_NV      STD_OFF
#endif

#if (DEM_CFG_SUPPORT_EVENTAVAILABLE == STD_ON)
/*! Define whether a default event availability is provided */
# define DEM_FEATURE_NEED_EVENTAVAILABLE_DEFAULT DEM_CFG_SUPPORT_EVENTAVAILABLE_DEFAULT
#else
/*! Define whether a default event availability is provided */
# define DEM_FEATURE_NEED_EVENTAVAILABLE_DEFAULT STD_OFF
#endif

#if (DEM_CFG_SUPPORT_EVENTSUPPRESSION == STD_ON) || (DEM_CFG_SUPPORT_DTCSUPPRESSION == STD_ON)
/*! Define whether event or DTC suppression are supported */
# define DEM_FEATURE_NEED_SUPPRESSION            STD_ON
#else
/*! Define whether event or DTC suppression are supported */
# define DEM_FEATURE_NEED_SUPPRESSION            STD_OFF
#endif

#if ((DEM_CFG_SUPPORT_DEBOUNCE_TIME_HR == STD_ON) || (DEM_CFG_SUPPORT_DEBOUNCE_TIME_LR == STD_ON))
/*! Define whether time based debouncing is supported */
# define DEM_FEATURE_NEED_DEBOUNCE_TIME          STD_ON
#else
/*! Define whether time based debouncing is supported */
# define DEM_FEATURE_NEED_DEBOUNCE_TIME          STD_OFF
#endif

#if ((DEM_FEATURE_NEED_DEBOUNCE_TIME == STD_ON) || (DEM_CFG_SUPPORT_DEBOUNCE_COUNTER == STD_ON))
/*! Define whether debouncing is supported */
# define DEM_FEATURE_NEED_DEBOUNCE               STD_ON
#else
/*! Define whether debouncing is supported */
# define DEM_FEATURE_NEED_DEBOUNCE               STD_OFF
#endif

#if ( (DEM_CFG_DATA_MAX_FDC_SINCE_LAST_CLEAR == STD_ON) \
   || (DEM_CFG_SUPPORT_TRIGGER_FDC_FIRST_IN_CYCLE == STD_ON) \
   || (DEM_CFG_STORAGE_AT_FDC == STD_ON) )
/*! Define whether FDC threshold triggers are supported */
# define DEM_FEATURE_NEED_FDC_TRIP               STD_ON
#else
/*! Define whether FDC threshold triggers are supported */
# define DEM_FEATURE_NEED_FDC_TRIP               STD_OFF
#endif
/*! Define whether preconfirmed FDC threshold triggers are supported */
#define DEM_FEATURE_NEED_EVENT_PRECONFIRMED      STD_OFF

#if (DEM_CFG_ISCONST_LATCHTESTFAILED == STD_ON)
# if (DEM_CFG_CONST_LATCHTESTFAILED == TRUE)
/*! Define whether latched fail safe is supported */
#  define DEM_FEATURE_NEED_LATCHTESTFAILED       STD_ON
# else
/*! Define whether latched fail safe is supported */
#  define DEM_FEATURE_NEED_LATCHTESTFAILED       STD_OFF
# endif
#else
/*! Define whether latched fail safe is supported */
# define DEM_FEATURE_NEED_LATCHTESTFAILED        STD_ON
#endif

#if ( (DEM_CFG_AGING_AFTER_HEALING == STD_ON)         \
   || (DEM_CFG_AGING_AFTER_HEALING_ALL_DTC == STD_ON) )
/*! Define whether aging after healing is supported */
# define DEM_FEATURE_NEED_AGING_AFTER_HEALING    STD_ON
/*! Define whether aging after healing is supported for MIL only */
# define DEM_FEATURE_NEED_AGING_AFTER_HEALING_MIL_ONLY   STD_OFF
#else
# if (DEM_CFG_SUPPORT_OBDII == STD_ON) || (DEM_CFG_SUPPORT_WWHOBD == STD_ON)
/*! Define whether aging after healing is supported */
#  define DEM_FEATURE_NEED_AGING_AFTER_HEALING   STD_ON
/*! Define whether aging after healing is supported for MIL only */
#  define DEM_FEATURE_NEED_AGING_AFTER_HEALING_MIL_ONLY  STD_ON
# else
/*! Define whether aging after healing is supported */
#  define DEM_FEATURE_NEED_AGING_AFTER_HEALING   STD_OFF
/*! Define whether aging after healing is supported for MIL only */
#  define DEM_FEATURE_NEED_AGING_AFTER_HEALING_MIL_ONLY  STD_OFF
# endif
#endif

#if (DEM_CFG_AGING_START_TRIGGER_PASSED == STD_ON) || (DEM_CFG_AGING_00_START_TRIGGER_PASSED == STD_ON)
/*! Define whether aging starts with a passed trigger */
# define DEM_FEATURE_NEED_AGING_TRIGGER_PASSED   STD_ON
#else
/*! Define whether aging starts with a passed trigger */
# define DEM_FEATURE_NEED_AGING_TRIGGER_PASSED   STD_OFF
#endif

#if ( (DEM_CFG_AGING_START_TRIGGER_PASSED == STD_OFF) \
   || (DEM_CFG_AGING_00_START_TRIGGER_PASSED == STD_OFF) \
   || (DEM_FEATURE_NEED_AGING_AFTER_HEALING == STD_ON) )
/*! Define whether aging starts with a new aging cycle */
# define DEM_FEATURE_NEED_AGING_TRIGGER_CYCLE    STD_ON
#else
/*! Define whether aging starts with a new aging cycle */
# define DEM_FEATURE_NEED_AGING_TRIGGER_CYCLE    STD_OFF
#endif

#if (DEM_CFG_PROCESS_CDTC_ALL_DTC == STD_ON)
/*! Define whether aging counters are allocated for unstored confirmed DTCs */
# define DEM_FEATURE_NEED_AGING_REALLOCATION     STD_ON
#else
/*! Define whether aging counters are allocated for unstored confirmed DTCs */
# define DEM_FEATURE_NEED_AGING_REALLOCATION     STD_OFF
#endif

#if (DEM_CFG_VARIANT_POSTBUILD_SELECTABLE == STD_ON)
# if (DEM_CFG_ISCONST_AVAILABLEINVARIANT == STD_ON)
/*! Define the global compile time event availability */
#  define DEM_CFG_CONST_EVENTINVARIANT           DEM_CFG_EQ2_EVENTAVAILABLEINVARIANT
#  if (FALSE == DEM_CFG_CONST_EVENTINVARIANT)
#   error "It is not supported to disable all events in all variants"
#  endif
# else
/*! Define the global compile time event availability */
#  define DEM_CFG_CONST_EVENTINVARIANT           TRUE
# endif
#else
# if (DEM_CFG_ISCONST_AVAILABLEINVARIANT != STD_ON)
#   error "Disabling events per variant is only supported in postbuild selectable configurations"
# endif
#endif

#if (DEM_CFG_USE_NVM == STD_ON)
# if ( (DEM_CFG_CLEAR_NV_END_RESPONSE == STD_ON) \
    || (DEM_CFG_SUPPORT_NVM_IMMEDIATE == STD_ON) \
    || (DEM_CFG_SUPPORT_NVM_APPL_SYNCHRONIZE == STD_ON) \
    )
/*! Define whether NVM immediate updates are supported */
#  define DEM_FEATURE_NEED_NVM_IMMEDIATE         STD_ON
# else
/*! Define whether NVM immediate updates are supported */
#  define DEM_FEATURE_NEED_NVM_IMMEDIATE         STD_OFF
# endif
#else
/*! Define whether NVM immediate updates are supported */
# define DEM_FEATURE_NEED_NVM_IMMEDIATE          STD_OFF
#endif

#if (DEM_CFG_SUPPORT_OPCYCLE_STORAGE == STD_ON) && (DEM_CFG_SUPPORT_OPCYCLE_AUTOMATIC_END == STD_ON)
/*! Define whether stopping operation cycles at shutdown is automatic */
# define DEM_FEATURE_NEED_CYCLEAUTOMATICEND      STD_ON
#else
/*! Define whether stopping operation cycles at shutdown is automatic */
# define DEM_FEATURE_NEED_CYCLEAUTOMATICEND      STD_OFF
#endif

#if (DEM_CFG_DATA_MAX_FDC_DURING_CURRENT_CYCLE == STD_ON) || (DEM_CFG_DATA_MAX_FDC_SINCE_LAST_CLEAR == STD_ON)
/*! Define whether the maximum debounce value is tracked */
# define DEM_FEATURE_NEED_MAX_DEBOUNCE_VALUE     STD_ON
#else
/*! Define whether the maximum debounce value is tracked */
# define DEM_FEATURE_NEED_MAX_DEBOUNCE_VALUE     STD_OFF
#endif

#if ( (DEM_CFG_SUPPORT_NVM_WRITELIMIT == STD_ON) \
   || (DEM_CFG_DATA_OCCCTR == STD_ON) \
   || (DEM_CFG_DATA_OCCCTR_2BYTE == STD_ON) \
   || (DEM_CFG_SUPPORT_J1939 == STD_ON) )                                                                                        /* COV_MSR_UNSUPPORTED TF tf tf tf xf */
/*! Define whether the Occurrence Counter is tracked */
# define DEM_FEATURE_NEED_OCC_COUNTER            STD_ON
#else
/*! Define whether the Occurrence Counter is tracked */
# define DEM_FEATURE_NEED_OCC_COUNTER            STD_OFF
#endif
/*! Define whether the DemSc callbacks are supported */
#define DEM_FEATURE_NEED_DEMSC_CALLBACKS         STD_OFF

#if (DEM_CFG_DATA_OVFLIND == STD_ON)
/*! Define whether the Overflow indication is tracked */
# define DEM_FEATURE_NEED_OVFLIND                STD_ON
#else
/*! Define whether the Overflow indication is tracked */
# define DEM_FEATURE_NEED_OVFLIND                DEM_CFG_SUPPORT_OVFLIND_API
#endif

/*! Define whether an OEM specific snapshot record storage trigger is required */
#define DEM_FEATURE_NEED_SREC_OEMTRIGGER         STD_OFF

#if ((DEM_CFG_SUPPORT_OBDII == STD_ON) || (DEM_CFG_SUPPORT_WWHOBD == STD_ON))                                                    /* COV_MSR_UNSUPPORTED XF xf xf */
/*! Define whether common OBD features are supported */
# define DEM_FEATURE_NEED_OBD  STD_ON
#else
/*! Define whether common OBD features are supported */
# define DEM_FEATURE_NEED_OBD STD_OFF
#endif

#if (DEM_FEATURE_NEED_OBD == STD_ON) && (DEM_CFG_SUPPORT_IUMPR == STD_ON)                                                        /* COV_MSR_UNSUPPORTED XF xf xf */
/*! Define whether IUMPR features are supported */
# define DEM_FEATURE_NEED_IUMPR                  STD_ON
#else
/*! Define whether IUMPR features are supported */
# define DEM_FEATURE_NEED_IUMPR                  STD_OFF
#endif

#if (DEM_FEATURE_NEED_OBD == STD_ON) && (DEM_CFG_SUPPORT_MIL_GROUP == STD_ON)                                                    /* COV_MSR_UNSUPPORTED XF xf xf */
/*! Define whether MIL GROUPS features are supported */
# define DEM_FEATURE_NEED_MIL_GROUPS             STD_ON
#else
/*! Define whether MIL GROUPS features are supported */
# define DEM_FEATURE_NEED_MIL_GROUPS             STD_OFF
#endif

#if ( (DEM_FEATURE_NEED_OBD == STD_ON)    \
   && ( (DEM_CFG_SUPPORT_PID21 == STD_ON) \
     || (DEM_CFG_SUPPORT_PID31 == STD_ON) \
     || (DEM_CFG_SUPPORT_PERMANENTDTC_ACTIVATION_DISTANCE == STD_ON) ) )                                                         /* COV_MSR_UNSUPPORTED XF xf xf xf xf */
/*! Define whether OBD features need the current odometer */
# define DEM_FEATURE_NEED_OBD_ODOMETER           STD_ON
#else
/*! Define whether OBD features need the current odometer */
# define DEM_FEATURE_NEED_OBD_ODOMETER           STD_OFF
#endif

#if ( (DEM_FEATURE_NEED_OBD == STD_ON)      \
   && ( (DEM_CFG_SUPPORT_PID21 == STD_ON)   \
     || (DEM_CFG_SUPPORT_PID4D == STD_ON) ) )                                                                                    /* COV_MSR_UNSUPPORTED XF xf xf xf */
/*! Define whether the global MIL state must be tracked */
# define DEM_FEATURE_NEED_GLOBAL_MIL_STATE       STD_ON
#else
/*! Define whether the global MIL state must be tracked */
# define DEM_FEATURE_NEED_GLOBAL_MIL_STATE       STD_OFF
#endif

#if ( ( (DEM_FEATURE_NEED_OBD == STD_ON) \
     || (DEM_CFG_SUPPORT_J1939 == STD_ON)) \
   && ( (DEM_CFG_SUPPORT_MIL == STD_ON) \
     || (DEM_CFG_SUPPORT_RSL == STD_ON) \
     || (DEM_CFG_SUPPORT_AWL == STD_ON) \
     || (DEM_CFG_SUPPORT_PL == STD_ON)) )                                                                                        /* COV_MSR_UNSUPPORTED XF xf xf xf xf xf xf */
/*! Define whether indicators with special requirements are supported */
# define DEM_FEATURE_NEED_SPECIAL_INDICATORS     STD_ON
#else
/*! Define whether indicators with special requirements are supported */
# define DEM_FEATURE_NEED_SPECIAL_INDICATORS     STD_OFF
#endif

#if (DEM_CFG_SUPPORT_USER_INDICATORS == STD_ON) || (DEM_FEATURE_NEED_SPECIAL_INDICATORS == STD_ON)                              /* COV_MSR_UNSUPPORTED TF tf xf */
/*! Define whether indicators are supported */
# define DEM_FEATURE_NEED_INDICATORS             STD_ON
#else
/*! Define whether indicators are supported */
# define DEM_FEATURE_NEED_INDICATORS             STD_OFF
#endif

/*! Define whether J1939 freeze frames are stored */
#define DEM_FEATURE_NEED_J1939_FREEZEFRAME       STD_OFF

#if ( (DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL == STD_ON) || (DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL == STD_ON) )
/*! Define whether time series snapshots are stored */
# define DEM_FEATURE_NEED_TIME_SERIES            STD_ON
# if ( (DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST == STD_ON) || (DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST == STD_ON) )
/*! Define whether fast rate time series snapshots are stored */
#  define DEM_FEATURE_NEED_TIME_SERIES_FAST      STD_ON
# else
/*! Define whether fast rate time series snapshots are stored */
#  define DEM_FEATURE_NEED_TIME_SERIES_FAST      STD_OFF
# endif
# if ( (DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL == STD_ON) || (DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST == STD_ON) )
/*! Define whether time series snapshots store future samples */
#  define DEM_FEATURE_NEED_TIME_SERIES_FUTURE    STD_ON
# else
/*! Define whether time series snapshots store future samples */
#  define DEM_FEATURE_NEED_TIME_SERIES_FUTURE    STD_OFF
# endif
# if ( (DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL == STD_ON) || (DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST == STD_ON) )
/*! Define whether time series snapshots store past samples */
#  define DEM_FEATURE_NEED_TIME_SERIES_PAST      STD_ON
# else
/*! Define whether time series snapshots store past samples */
#  define DEM_FEATURE_NEED_TIME_SERIES_PAST      STD_OFF
# endif
#else
/*! Define whether time series snapshots are stored */
# define DEM_FEATURE_NEED_TIME_SERIES            STD_OFF
/*! Define whether fast rate time series snapshots are stored */
# define DEM_FEATURE_NEED_TIME_SERIES_FAST       STD_OFF
/*! Define whether time series snapshots store future samples */
# define DEM_FEATURE_NEED_TIME_SERIES_FUTURE     STD_OFF
/*! Define whether time series snapshots store past samples */
# define DEM_FEATURE_NEED_TIME_SERIES_PAST       STD_OFF
#endif

#if (DEM_CFG_AGING_AFTER_HEALING_ALL_DTC == STD_ON) || (DEM_FEATURE_NEED_INDICATORS == STD_ON)
/*! Define whether DTC healing is required */
# define DEM_FEATURE_NEED_HEALING                STD_ON
#else
/*! Define whether DTC healing is required */
# define DEM_FEATURE_NEED_HEALING                STD_OFF
#endif

#if (DEM_CFG_ISCONST_TRIPTARGET == STD_ON)
# if (DEM_CFG_CONST_TRIPTARGET == 0)
/*! Define whether single trip DTCs are supported */
#  define DEM_FEATURE_NEED_SINGLETRIP            STD_ON
/*! Define whether two trip DTCs are supported */
#  define DEM_FEATURE_NEED_TWOTRIP               STD_OFF
/*! Define whether >2 trip DTCs are supported */
#  define DEM_FEATURE_NEED_MULTITRIP             STD_OFF
# elif (DEM_CFG_CONST_TRIPTARGET == 1)
/*! Define whether single trip DTCs are supported */
#  define DEM_FEATURE_NEED_SINGLETRIP            STD_OFF
/*! Define whether two trip DTCs are supported */
#  define DEM_FEATURE_NEED_TWOTRIP               STD_ON
/*! Define whether >2 trip DTCs are supported */
#  define DEM_FEATURE_NEED_MULTITRIP             STD_OFF
# else
/*! Define whether single trip DTCs are supported */
#  define DEM_FEATURE_NEED_SINGLETRIP            STD_OFF
/*! Define whether two trip DTCs are supported */
#  define DEM_FEATURE_NEED_TWOTRIP               STD_OFF
/*! Define whether >2 trip DTCs are supported */
#  define DEM_FEATURE_NEED_MULTITRIP             STD_ON
# endif
#else
# if (DEM_CFG_SUPPORT_MULTITRIP == STD_ON)
/*! Define whether single trip DTCs are supported */
#  define DEM_FEATURE_NEED_SINGLETRIP            STD_OFF
/*! Define whether two trip DTCs are supported */
#  define DEM_FEATURE_NEED_TWOTRIP               STD_OFF
/*! Define whether >2 trip DTCs are supported */
#  define DEM_FEATURE_NEED_MULTITRIP             STD_ON
# else
/*! Define whether single trip DTCs are supported */
#  define DEM_FEATURE_NEED_SINGLETRIP            STD_ON
/*! Define whether two trip DTCs are supported */
#  define DEM_FEATURE_NEED_TWOTRIP               STD_ON
/*! Define whether >2 trip DTCs are supported */
#  define DEM_FEATURE_NEED_MULTITRIP             STD_OFF
# endif
#endif

#if (DEM_FEATURE_NEED_HEALING == STD_ON)
# if (DEM_CFG_ISCONST_HEALINGTARGET == STD_ON)
#  if (DEM_CFG_CONST_HEALINGTARGET == 0)
/*! Define whether DTC healing with passed is required */
#   define DEM_FEATURE_NEED_IMMEDIATEHEAL        STD_ON
/*! Define whether DTC healing with pending DTC is required */
#   define DEM_FEATURE_NEED_SINGLEHEAL           STD_OFF
/*! Define whether DTC healing with healing counter is required */
#   define DEM_FEATURE_NEED_MULTIHEAL            STD_OFF
#  elif (DEM_CFG_CONST_HEALINGTARGET == 1)
/*! Define whether DTC healing with passed is required */
#   define DEM_FEATURE_NEED_IMMEDIATEHEAL        STD_OFF
/*! Define whether DTC healing with pending DTC is required */
#   define DEM_FEATURE_NEED_SINGLEHEAL           STD_ON
/*! Define whether DTC healing with healing counter is required */
#   define DEM_FEATURE_NEED_MULTIHEAL            STD_OFF
#  else
/*! Define whether DTC healing with passed is required */
#   define DEM_FEATURE_NEED_IMMEDIATEHEAL        STD_OFF
/*! Define whether DTC healing with pending DTC is required */
#   define DEM_FEATURE_NEED_SINGLEHEAL           STD_OFF
/*! Define whether DTC healing with healing counter is required */
#   define DEM_FEATURE_NEED_MULTIHEAL            STD_ON
#  endif
# else
/*! Define whether DTC healing with passed is required */
#  define DEM_FEATURE_NEED_IMMEDIATEHEAL         STD_ON
/*! Define whether DTC healing with pending DTC is required */
#  define DEM_FEATURE_NEED_SINGLEHEAL            STD_OFF
/*! Define whether DTC healing with healing counter is required */
#  define DEM_FEATURE_NEED_MULTIHEAL             STD_ON
# endif
#else
/*! Define whether DTC healing with passed is required */
# define DEM_FEATURE_NEED_IMMEDIATEHEAL          STD_OFF
/*! Define whether DTC healing with pending DTC is required */
# define DEM_FEATURE_NEED_SINGLEHEAL             STD_OFF
/*! Define whether DTC healing with healing counter is required */
# define DEM_FEATURE_NEED_MULTIHEAL              STD_OFF
#endif

#if ((DEM_FEATURE_NEED_MULTITRIP == STD_ON) || (DEM_FEATURE_NEED_MULTIHEAL == STD_ON))
/*! Define whether DTCs have a trip counter */
# define DEM_FEATURE_NEED_TRIPCOUNTER            STD_ON
#else
/*! Define whether DTCs have a trip counter */
# define DEM_FEATURE_NEED_TRIPCOUNTER            STD_OFF
#endif

#if ((DEM_CFG_SUPPORT_ERECS == STD_ON) || (DEM_CFG_SUPPORT_SRECS == STD_ON))
# if ( (DEM_CFG_DATA_CYCLES_SINCE_FIRST_FAILED == STD_ON) \
    || (DEM_CFG_DATA_CYCLES_SINCE_LAST_FAILED == STD_ON) )
/*! Define whether DTCs store cycle counters */
#  define DEM_FEATURE_NEED_CYCLE_COUNTERS        STD_ON
# else
/*! Define whether DTCs store cycle counters */
#  define DEM_FEATURE_NEED_CYCLE_COUNTERS        STD_OFF
# endif
#else
/*! Define whether DTCs store cycle counters */
# define DEM_FEATURE_NEED_CYCLE_COUNTERS         STD_OFF
#endif

#if ( (DEM_CFG_SUPPORT_ERECS == STD_ON) \
   || (DEM_CFG_SUPPORT_SRECS == STD_ON) \
   || (DEM_FEATURE_NEED_TIME_SERIES == STD_ON) )
/*! Define whether DTC statistics are configured */
# define DEM_FEATURE_NEED_STATISTICAL_DATA STD_ON
#else
/*! Define whether DTC statistics are configured */
# define DEM_FEATURE_NEED_STATISTICAL_DATA STD_OFF
#endif

#if (DEM_FEATURE_NEED_STATISTICAL_DATA == STD_ON)
# if ( (DEM_FEATURE_NEED_CYCLE_COUNTERS == STD_ON) \
    || (DEM_CFG_DATA_AGINGCTR == STD_ON)           \
    || (DEM_CFG_DATA_AGINGCTR_INVERTED == STD_ON) )
/*! Define whether aging cycle calculations are required */
#  define DEM_FEATURE_NEED_AGING_CYCLE_DISTANCE  STD_ON
# else
/*! Define whether aging cycle calculations are required */
#  define DEM_FEATURE_NEED_AGING_CYCLE_DISTANCE  STD_OFF
# endif
#else
/*! Define whether aging cycle calculations are required */
# define DEM_FEATURE_NEED_AGING_CYCLE_DISTANCE   STD_OFF
#endif

#if (DEM_CFG_SUPPORT_DCM == STD_ON) && (DEM_CFG_PROCESS_CDTC_STOREDONLY == STD_ON)
/*! Define whether chronological reporting is required */
# define DEM_FEATURE_NEED_REPORT_CHRONOLOGICALLY STD_ON
#else
/*! Define whether chronological reporting is required */
# define DEM_FEATURE_NEED_REPORT_CHRONOLOGICALLY STD_OFF
#endif

/*! Define whether the enging run time must be tracked */
#define DEM_FEATURE_NEED_ENGINE_RUN_TIME         STD_OFF

#if (DEM_CFG_SUPPORT_API_VERSION_4_2_1 == STD_ON)
/*! Define whether enable conditions will notify monitors (init monitor callbacks) */
# define DEM_FEATURE_NEED_NOTIFY_ENABLE_CONDITION      DEM_CFG_NOTIFY_ENABLECONDITION
/*! Define whether enable conditions are enabled on the task */
# define DEM_FEATURE_NEED_DEFERRED_ENABLE_CONDITIONS   STD_ON
#else
/*! Define whether enable conditions will notify monitors (init monitor callbacks) */
# define DEM_FEATURE_NEED_NOTIFY_ENABLE_CONDITION      STD_OFF
/*! Define whether enable conditions are enabled on the task */
# define DEM_FEATURE_NEED_DEFERRED_ENABLE_CONDITIONS   STD_OFF
#endif

#if (DEM_CFG_SAFE_BSW_MODE == STD_ON)
/*! Define whether additional run-time checks are enabled */
# define DEM_DEV_RUNTIME_CHECKS                  STD_ON
#else
/*! Define whether additional run-time checks are enabled */
# define DEM_DEV_RUNTIME_CHECKS                  STD_OFF
#endif

#if (DEM_DEV_RUNTIME_CHECKS == STD_ON)
# if !defined (DEM_DEV_DISABLE_ON_RUNTIME_ERRORS)
/*! Define whether failed run-time checks un-initialize the Dem */
#  define DEM_DEV_DISABLE_ON_RUNTIME_ERRORS      STD_ON
# endif
#else
/*! Define whether failed run-time checks un-initialize the Dem */
# define DEM_DEV_DISABLE_ON_RUNTIME_ERRORS       STD_OFF
#endif

#endif

