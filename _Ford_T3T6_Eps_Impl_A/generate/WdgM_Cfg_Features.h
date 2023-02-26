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
 *            Module: WdgM
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: WdgM_Cfg_Features.h
 *   Generation Time: 2017-07-07 17:17:19
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

#if !defined (WDGM_CFG_FEATURES_H)
# define WDGM_CFG_FEATURES_H

/**********************************************************************************************************************
 *  VERSION INFORMATION
 *********************************************************************************************************************/
#define WDGM_CFG_FEATURE_MAJOR_VERSION (2u) 
#define WDGM_CFG_FEATURE_MINOR_VERSION (0u) 
#define WDGM_CFG_FEATURE_PATCH_VERSION (3u) 


/**********************************************************************************************************************
 *  AUTOSAR feature defines
 *********************************************************************************************************************/
# define WDGM_VERSION_INFO_API                STD_OFF 
# define WDGM_DEV_ERROR_DETECT                STD_ON 
# define WDGM_DEFENSIVE_BEHAVIOR              STD_ON 
# define WDGM_IMMEDIATE_RESET                 STD_ON 
# define WDGM_OFF_MODE_ENABLED                STD_OFF 



/**********************************************************************************************************************
 *  WDGM-specific feature defines (user-defined)
 *********************************************************************************************************************/
# define WDGM_USE_OS_SUSPEND_INTERRUPT        STD_ON 
# define WDGM_TIMEBASE_SOURCE         WDGM_INTERNAL_SOFTWARE_TICK 
# define WDGM_SECOND_RESET_PATH               STD_ON 
# define WDGM_TICK_OVERRUN_CORRECTION         STD_ON 
# define WDGM_ENTITY_DEACTIVATION_ENABLED     STD_ON 
# define WDGM_STATE_CHANGE_NOTIFICATION       STD_OFF 
# define WDGM_USE_RTE                         STD_ON 
# define WDGM_DEM_SUPERVISION_REPORT          STD_OFF 
# define WDGM_FIRSTCYCLE_ALIVECOUNTER_RESET   STD_ON 
# define WDGM_AUTOSAR_DEBUGGING               STD_OFF 
# define WDGM_DEM_REPORT                      STD_OFF 


/**********************************************************************************************************************
 *  WDGM-specific feature defines (automatically computed)
 *********************************************************************************************************************/
# define WDGM_GLOBAL_TRANSITIONS              STD_ON 
# define WDGM_AUTOSAR_3_1_X_COMPATIBILITY     STD_OFF 
# define WDGM_MULTIPLE_TRIGGER_MODES          STD_OFF 
# define WDGM_AUTOSAR_4_x                     STD_ON 


/**********************************************************************************************************************
 *  WDGM-specific feature defines for multi-core systems
 *  (all automatically computed except for OS core identification usage)
 *********************************************************************************************************************/
# define WDGM_MULTICORE_USAGE                 STD_OFF 


/**********************************************************************************************************************
 *  INCLUDES for Dem
 *********************************************************************************************************************/
/* Intentionally left empty. Preprocessor switch WDGM_DEM_REPORT is STD_OFF */ 



#endif /* WDGM_CFG_FEATURES_H */

/**********************************************************************************************************************
 *  END OF FILE: WdgM_Cfg_Features.h
 *********************************************************************************************************************/

