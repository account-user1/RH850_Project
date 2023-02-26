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
 *              File: WdgM_PBcfg.h
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

#if !defined (WDGM_PBCFG_H)
# define WDGM_PBCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
# include "WdgM_Cfg.h"


/**********************************************************************************************************************
 *  VERSION INFORMATION AND CHECK
 *********************************************************************************************************************/

#define WDGM_PBCFG_MAJOR_VERSION (2u) 
#define WDGM_PBCFG_MINOR_VERSION (0u) 
#define WDGM_PBCFG_PATCH_VERSION (3u) 

/* Check the version of WdgM Cfg header file */
#if ( (WDGM_CFG_TYPES_HDR_MAJOR_VERSION != (5u)) \
   || (WDGM_CFG_TYPES_HDR_MINOR_VERSION != (1u)) )
# error "Version numbers of WdgM_PBcfg.h and WdgM_Cfg.h are inconsistent!"
#endif

# define WDGM_NR_OF_CHECKPOINTS           (11u) 
# define WDGM_NR_OF_ENTITIES              (5u) 
# define WDGM_NR_OF_ALLOWED_CALLERS       (1u) 
# define WDGM_NR_OF_GLOBAL_TRANSITIONS    (1u) 
# define WDGM_NR_OF_LOCAL_TRANSITIONS     (5u) 
# define WDGM_NR_OF_WATCHDOGS_CORE0       (1u) 
# define WDGM_NR_OF_TRIGGER_MODES_CORE0   (1u) 

/* Checkpoints for supervised entity 'SE_10msBSW_Appl10' */ 
# define WdgMConf_WdgMCheckpoint_ChkPt_10msBSW_Appl10_Strt (0u) 
# define WdgMConf_WdgMCheckpoint_ChkPt_10msBSW_Appl10_End (1u) 
/* Checkpoints for supervised entity 'SE_2ms_Appl10' */ 
# define WdgMConf_WdgMCheckpoint_ChkPt_2ms_Appl10_Strt (0u) 
# define WdgMConf_WdgMCheckpoint_ChkPt_2ms_Appl10_End (1u) 
# define WdgMConf_WdgMCheckpoint_ChkPt_GlobalFinal (2u) 
/* Checkpoints for supervised entity 'SE_4ms_Appl10' */ 
# define WdgMConf_WdgMCheckpoint_ChkPt_4ms_Appl10_Strt (0u) 
# define WdgMConf_WdgMCheckpoint_ChkPt_4ms_Appl10_End (1u) 
/* Checkpoints for supervised entity 'SE_10ms_Appl10' */ 
# define WdgMConf_WdgMCheckpoint_ChkPt_10ms_Appl10_Strt (0u) 
# define WdgMConf_WdgMCheckpoint_ChkPt_10ms_Appl10_End (1u) 
/* Checkpoints for supervised entity 'SE_100ms_Appl10' */ 
# define WdgMConf_WdgMCheckpoint_ChkPt_100ms_Appl10_Strt (0u) 
# define WdgMConf_WdgMCheckpoint_ChkPt_100ms_Appl10_End (1u) 
 

# define WdgMConf_WdgMSupervisedEntity_SE_10msBSW_Appl10 (0u) 
# define WdgMConf_WdgMSupervisedEntity_SE_2ms_Appl10 (1u) 
# define WdgMConf_WdgMSupervisedEntity_SE_4ms_Appl10 (2u) 
# define WdgMConf_WdgMSupervisedEntity_SE_10ms_Appl10 (3u) 
# define WdgMConf_WdgMSupervisedEntity_SE_100ms_Appl10 (4u) 

extern const WdgM_ConfigType WdgMConfig_Mode0_core0; 

/* Callback routines for core 0 */ 
/* No local state callback for supervised entity 'SE_10msBSW_Appl10' configured */ 
/* No local state callback for supervised entity 'SE_2ms_Appl10' configured */ 
/* No local state callback for supervised entity 'SE_4ms_Appl10' configured */ 
/* No local state callback for supervised entity 'SE_10ms_Appl10' configured */ 
/* No local state callback for supervised entity 'SE_100ms_Appl10' configured */ 
/* No global state callback configured */ 


#endif /* WDGM_PBCFG_H*/

/**********************************************************************************************************************
 *  END OF FILE: WdgM_PBcfg.h
 *********************************************************************************************************************/

