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
 *              File: WdgM_PBcfg.c
 *   Generation Time: 2017-08-22 10:51:41
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

#define WDGM_PBCFG_C


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "WdgM.h"


/**********************************************************************************************************************
 *  VERSION INFORMATION AND CHECK
 *********************************************************************************************************************/

#define WDGM_PBCFG_C_MAJOR_VERSION (2u) 
#define WDGM_PBCFG_C_MINOR_VERSION (0u) 
#define WDGM_PBCFG_C_PATCH_VERSION (3u) 

/* Check the version of WdgM header file */
#if ( (WDGM_SW_MAJOR_VERSION != (5u)) \
   || (WDGM_SW_MINOR_VERSION != (1u)) )
# error "Version numbers of WdgM_PBcfg.c and WdgM.h are inconsistent!"
#endif

/* Check the version of WdgM PBCfg header file */
#if ( (WDGM_PBCFG_MAJOR_VERSION != WDGM_PBCFG_C_MAJOR_VERSION) \
   || (WDGM_PBCFG_MINOR_VERSION != WDGM_PBCFG_C_MINOR_VERSION) \
   || (WDGM_PBCFG_PATCH_VERSION != WDGM_PBCFG_C_PATCH_VERSION) )
# error "Version numbers of WdgM_PBcfg.c and WdgM_PBcfg.h are inconsistent!"
#endif

#if !defined (WDGM_LOCAL) /* COV_WDGM_COMPATIBILITY */
# define WDGM_LOCAL static
#endif

#define WDGM_GLOBAL_SHARED_START_SEC_VAR_NOINIT_UNSPECIFIED 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
/* RAM section for global shared data */ 
WDGM_LOCAL WdgM_DataGSType StatusGS_core0; 
WDGM_LOCAL WdgM_EntityGSType EntityGS [WDGM_NR_OF_ENTITIES]; 
WDGM_LOCAL WdgM_GlobalTransitionFlagGSType GlobalTransitionFlagsGS [WDGM_NR_OF_GLOBAL_TRANSITIONS]; 
#define WDGM_GLOBAL_SHARED_STOP_SEC_VAR_NOINIT_UNSPECIFIED 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 


#define WDGM_SE0_START_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
/* RAM section for supervisedEntity 'SE_10msBSW_Appl10' */ 
WDGM_LOCAL WdgM_EntityStatusLType EntityStatusL_0; 
#define WDGM_SE0_STOP_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
 
#define WDGM_SE0_START_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
/* Local Alive Counters for checkpoint 'ChkPt_10msBSW_Appl10_End' in 'SE_10msBSW_Appl10' */ 
WDGM_LOCAL WdgM_AliveCounterLType Alive_CounterL_0; 
#define WDGM_SE0_STOP_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
 
#define WDGM_SE1_START_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
/* RAM section for supervisedEntity 'SE_2ms_Appl10' */ 
WDGM_LOCAL WdgM_EntityStatusLType EntityStatusL_1; 
#define WDGM_SE1_STOP_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
 
#define WDGM_SE1_START_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
/* Local Alive Counters for checkpoint 'ChkPt_2ms_Appl10_Strt' in 'SE_2ms_Appl10' */ 
WDGM_LOCAL WdgM_AliveCounterLType Alive_CounterL_1; 
#define WDGM_SE1_STOP_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
 
#define WDGM_SE2_START_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
/* RAM section for supervisedEntity 'SE_4ms_Appl10' */ 
WDGM_LOCAL WdgM_EntityStatusLType EntityStatusL_2; 
#define WDGM_SE2_STOP_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
 
#define WDGM_SE2_START_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
/* Local Alive Counters for checkpoint 'ChkPt_4ms_Appl10_Strt' in 'SE_4ms_Appl10' */ 
WDGM_LOCAL WdgM_AliveCounterLType Alive_CounterL_2; 
#define WDGM_SE2_STOP_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
 
#define WDGM_SE3_START_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
/* RAM section for supervisedEntity 'SE_10ms_Appl10' */ 
WDGM_LOCAL WdgM_EntityStatusLType EntityStatusL_3; 
#define WDGM_SE3_STOP_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
 
#define WDGM_SE3_START_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
/* Local Alive Counters for checkpoint 'ChkPt_10ms_Appl10_Strt' in 'SE_10ms_Appl10' */ 
WDGM_LOCAL WdgM_AliveCounterLType Alive_CounterL_3; 
#define WDGM_SE3_STOP_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
 
#define WDGM_SE4_START_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
/* RAM section for supervisedEntity 'SE_100ms_Appl10' */ 
WDGM_LOCAL WdgM_EntityStatusLType EntityStatusL_4; 
#define WDGM_SE4_STOP_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
 
#define WDGM_SE4_START_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
/* Local Alive Counters for checkpoint 'ChkPt_100ms_Appl10_Strt' in 'SE_100ms_Appl10' */ 
WDGM_LOCAL WdgM_AliveCounterLType Alive_CounterL_4; 
#define WDGM_SE4_STOP_SEC_VAR_NOINIT_32BIT_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
 
 
#define WDGM_GLOBAL_START_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 
 
/* Global Status for Supervised Entities */ 
WDGM_LOCAL WdgM_EntityStatusGType EntityStatusG_0; 
WDGM_LOCAL WdgM_EntityStatusGType EntityStatusG_1; 
WDGM_LOCAL WdgM_EntityStatusGType EntityStatusG_2; 
WDGM_LOCAL WdgM_EntityStatusGType EntityStatusG_3; 
WDGM_LOCAL WdgM_EntityStatusGType EntityStatusG_4; 
 
/* Global Alive Counters for checkpoint 'ChkPt_10msBSW_Appl10_End' in supervised entity 'SE_10msBSW_Appl10' */ 
WDGM_LOCAL WdgM_AliveCounterGType Alive_CounterG_0; 
 
/* Global Alive Counters for checkpoint 'ChkPt_2ms_Appl10_Strt' in supervised entity 'SE_2ms_Appl10' */ 
WDGM_LOCAL WdgM_AliveCounterGType Alive_CounterG_1; 
 
/* Global Alive Counters for checkpoint 'ChkPt_4ms_Appl10_Strt' in supervised entity 'SE_4ms_Appl10' */ 
WDGM_LOCAL WdgM_AliveCounterGType Alive_CounterG_2; 
 
/* Global Alive Counters for checkpoint 'ChkPt_10ms_Appl10_Strt' in supervised entity 'SE_10ms_Appl10' */ 
WDGM_LOCAL WdgM_AliveCounterGType Alive_CounterG_3; 
 
/* Global Alive Counters for checkpoint 'ChkPt_100ms_Appl10_Strt' in supervised entity 'SE_100ms_Appl10' */ 
WDGM_LOCAL WdgM_AliveCounterGType Alive_CounterG_4; 
 
/* RAM section for Global Status */ 
WDGM_LOCAL WdgM_DataGType StatusG_core0; 
 
/* Global variables */ 
WDGM_LOCAL WdgM_GlobalVariablesType GlobalVariables_core0; 
 
#define WDGM_GLOBAL_STOP_SEC_VAR_NOINIT_UNSPECIFIED_CORE0_PRIVATE 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 


#define WDGM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

WDGM_LOCAL const WdgM_TransitionType WdgMTransition[WDGM_NR_OF_LOCAL_TRANSITIONS] =
{
  {
    WdgMConf_WdgMSupervisedEntity_SE_10msBSW_Appl10 /*  EntitySourceId  */ , 
    WdgMConf_WdgMCheckpoint_ChkPt_10msBSW_Appl10_Strt /*  CheckpointSourceId  */ , 
    0u /*  WdgMDeadlineMin  */ , 
    0u /*  WdgMDeadlineMax  */ 
  } /*  [0]  */ , 
  {
    WdgMConf_WdgMSupervisedEntity_SE_2ms_Appl10 /*  EntitySourceId  */ , 
    WdgMConf_WdgMCheckpoint_ChkPt_2ms_Appl10_Strt /*  CheckpointSourceId  */ , 
    0u /*  WdgMDeadlineMin  */ , 
    0u /*  WdgMDeadlineMax  */ 
  } /*  [1]  */ , 
  {
    WdgMConf_WdgMSupervisedEntity_SE_4ms_Appl10 /*  EntitySourceId  */ , 
    WdgMConf_WdgMCheckpoint_ChkPt_4ms_Appl10_Strt /*  CheckpointSourceId  */ , 
    0u /*  WdgMDeadlineMin  */ , 
    0u /*  WdgMDeadlineMax  */ 
  } /*  [2]  */ , 
  {
    WdgMConf_WdgMSupervisedEntity_SE_10ms_Appl10 /*  EntitySourceId  */ , 
    WdgMConf_WdgMCheckpoint_ChkPt_10ms_Appl10_Strt /*  CheckpointSourceId  */ , 
    0u /*  WdgMDeadlineMin  */ , 
    0u /*  WdgMDeadlineMax  */ 
  } /*  [3]  */ , 
  {
    WdgMConf_WdgMSupervisedEntity_SE_100ms_Appl10 /*  EntitySourceId  */ , 
    WdgMConf_WdgMCheckpoint_ChkPt_100ms_Appl10_Strt /*  CheckpointSourceId  */ , 
    0u /*  WdgMDeadlineMin  */ , 
    0u /*  WdgMDeadlineMax  */ 
  } /*  [4]  */ 
};

WDGM_LOCAL const WdgM_GlobalTransitionType WdgMGlobalTransition[WDGM_NR_OF_GLOBAL_TRANSITIONS] =
{
  {
    WdgMConf_WdgMSupervisedEntity_SE_10ms_Appl10 /*  EntitySourceId  */ , 
    WdgMConf_WdgMCheckpoint_ChkPt_10ms_Appl10_End /*  CheckpointSourceId  */ , 
    0u /*  WdgMDeadlineMin  */ , 
    0u /*  WdgMDeadlineMax  */ , 
    0u /*  GlobalTransitionFlagId  */ 
  } /*  [0]  */ 
};

WDGM_LOCAL const WdgM_TransitionIdType StartsGlobalTransition_SE_10ms_Appl10_ChkPt_10ms_Appl10_End[1] = 
{
  0u /*  [0]  */ 
}; 


WDGM_LOCAL const WdgM_CheckPointType WdgMCheckPoint[WDGM_NR_OF_CHECKPOINTS] =
{
  {
    WdgMConf_WdgMCheckpoint_ChkPt_10msBSW_Appl10_Strt /*  WdgMCheckpointId  */ , 
    FALSE /*  WdgMIsEndCheckpoint  */ , 
    FALSE /*  WdgMIsEndCheckpointGlobal  */ , 
    0u /*  WdgMExpectedAliveIndications  */ , 
    0u /*  WdgMMinMargin  */ , 
    0u /*  WdgMMaxMargin  */ , 
    0u /*  WdgMSupervisionReferenceCycle  */ , 
    NULL_PTR /*  WdgMAliveLRef  */ , 
    NULL_PTR /*  WdgMAliveGRef  */ , 
    FALSE /*  WdgMDeadlineMonitoring  */ , 
    0u /*  WdgMOutgoingDeadlineMax  */ , 
    0u /*  NrOfLocalTransitions  */ , 
    NULL_PTR /*  WdgMLocalTransitionRef  */ , 
    1u /*  NrOfGlobalTransitions  */ , 
    &WdgMGlobalTransition[0] /*  WdgMGlobalTransitionsRef  */ , 
    FALSE /*  WdgMStartsAGlobalTransition  */ , 
    0u /*  NrOfStartedGlobalTransitions  */ , 
    NULL_PTR /*  WdgMStartedGlobalTransitionIds  */ 
  } /*  [0]  */ , 
  {
    WdgMConf_WdgMCheckpoint_ChkPt_10msBSW_Appl10_End /*  WdgMCheckpointId  */ , 
    TRUE /*  WdgMIsEndCheckpoint  */ , 
    FALSE /*  WdgMIsEndCheckpointGlobal  */ , 
    2u /*  WdgMExpectedAliveIndications  */ , 
    0u /*  WdgMMinMargin  */ , 
    0u /*  WdgMMaxMargin  */ , 
    5u /*  WdgMSupervisionReferenceCycle  */ , 
    &Alive_CounterL_0 /*  WdgMAliveLRef  */ , 
    &Alive_CounterG_0 /*  WdgMAliveGRef  */ , 
    FALSE /*  WdgMDeadlineMonitoring  */ , 
    0u /*  WdgMOutgoingDeadlineMax  */ , 
    1u /*  NrOfLocalTransitions  */ , 
    &WdgMTransition[0] /*  WdgMLocalTransitionRef  */ , 
    0u /*  NrOfGlobalTransitions  */ , 
    NULL_PTR /*  WdgMGlobalTransitionsRef  */ , 
    FALSE /*  WdgMStartsAGlobalTransition  */ , 
    0u /*  NrOfStartedGlobalTransitions  */ , 
    NULL_PTR /*  WdgMStartedGlobalTransitionIds  */ 
  } /*  [1]  */ , 
  {
    WdgMConf_WdgMCheckpoint_ChkPt_2ms_Appl10_Strt /*  WdgMCheckpointId  */ , 
    FALSE /*  WdgMIsEndCheckpoint  */ , 
    FALSE /*  WdgMIsEndCheckpointGlobal  */ , 
    2u /*  WdgMExpectedAliveIndications  */ , 
    0u /*  WdgMMinMargin  */ , 
    0u /*  WdgMMaxMargin  */ , 
    1u /*  WdgMSupervisionReferenceCycle  */ , 
    &Alive_CounterL_1 /*  WdgMAliveLRef  */ , 
    &Alive_CounterG_1 /*  WdgMAliveGRef  */ , 
    FALSE /*  WdgMDeadlineMonitoring  */ , 
    0u /*  WdgMOutgoingDeadlineMax  */ , 
    0u /*  NrOfLocalTransitions  */ , 
    NULL_PTR /*  WdgMLocalTransitionRef  */ , 
    0u /*  NrOfGlobalTransitions  */ , 
    NULL_PTR /*  WdgMGlobalTransitionsRef  */ , 
    FALSE /*  WdgMStartsAGlobalTransition  */ , 
    0u /*  NrOfStartedGlobalTransitions  */ , 
    NULL_PTR /*  WdgMStartedGlobalTransitionIds  */ 
  } /*  [2]  */ , 
  {
    WdgMConf_WdgMCheckpoint_ChkPt_2ms_Appl10_End /*  WdgMCheckpointId  */ , 
    TRUE /*  WdgMIsEndCheckpoint  */ , 
    FALSE /*  WdgMIsEndCheckpointGlobal  */ , 
    0u /*  WdgMExpectedAliveIndications  */ , 
    0u /*  WdgMMinMargin  */ , 
    0u /*  WdgMMaxMargin  */ , 
    0u /*  WdgMSupervisionReferenceCycle  */ , 
    NULL_PTR /*  WdgMAliveLRef  */ , 
    NULL_PTR /*  WdgMAliveGRef  */ , 
    FALSE /*  WdgMDeadlineMonitoring  */ , 
    0u /*  WdgMOutgoingDeadlineMax  */ , 
    1u /*  NrOfLocalTransitions  */ , 
    &WdgMTransition[1] /*  WdgMLocalTransitionRef  */ , 
    0u /*  NrOfGlobalTransitions  */ , 
    NULL_PTR /*  WdgMGlobalTransitionsRef  */ , 
    FALSE /*  WdgMStartsAGlobalTransition  */ , 
    0u /*  NrOfStartedGlobalTransitions  */ , 
    NULL_PTR /*  WdgMStartedGlobalTransitionIds  */ 
  } /*  [3]  */ , 
  {
    WdgMConf_WdgMCheckpoint_ChkPt_GlobalFinal /*  WdgMCheckpointId  */ , 
    FALSE /*  WdgMIsEndCheckpoint  */ , 
    TRUE /*  WdgMIsEndCheckpointGlobal  */ , 
    0u /*  WdgMExpectedAliveIndications  */ , 
    0u /*  WdgMMinMargin  */ , 
    0u /*  WdgMMaxMargin  */ , 
    0u /*  WdgMSupervisionReferenceCycle  */ , 
    NULL_PTR /*  WdgMAliveLRef  */ , 
    NULL_PTR /*  WdgMAliveGRef  */ , 
    FALSE /*  WdgMDeadlineMonitoring  */ , 
    0u /*  WdgMOutgoingDeadlineMax  */ , 
    0u /*  NrOfLocalTransitions  */ , 
    NULL_PTR /*  WdgMLocalTransitionRef  */ , 
    0u /*  NrOfGlobalTransitions  */ , 
    NULL_PTR /*  WdgMGlobalTransitionsRef  */ , 
    FALSE /*  WdgMStartsAGlobalTransition  */ , 
    0u /*  NrOfStartedGlobalTransitions  */ , 
    NULL_PTR /*  WdgMStartedGlobalTransitionIds  */ 
  } /*  [4]  */ , 
  {
    WdgMConf_WdgMCheckpoint_ChkPt_4ms_Appl10_Strt /*  WdgMCheckpointId  */ , 
    FALSE /*  WdgMIsEndCheckpoint  */ , 
    FALSE /*  WdgMIsEndCheckpointGlobal  */ , 
    1u /*  WdgMExpectedAliveIndications  */ , 
    0u /*  WdgMMinMargin  */ , 
    0u /*  WdgMMaxMargin  */ , 
    1u /*  WdgMSupervisionReferenceCycle  */ , 
    &Alive_CounterL_2 /*  WdgMAliveLRef  */ , 
    &Alive_CounterG_2 /*  WdgMAliveGRef  */ , 
    FALSE /*  WdgMDeadlineMonitoring  */ , 
    0u /*  WdgMOutgoingDeadlineMax  */ , 
    0u /*  NrOfLocalTransitions  */ , 
    NULL_PTR /*  WdgMLocalTransitionRef  */ , 
    0u /*  NrOfGlobalTransitions  */ , 
    NULL_PTR /*  WdgMGlobalTransitionsRef  */ , 
    FALSE /*  WdgMStartsAGlobalTransition  */ , 
    0u /*  NrOfStartedGlobalTransitions  */ , 
    NULL_PTR /*  WdgMStartedGlobalTransitionIds  */ 
  } /*  [5]  */ , 
  {
    WdgMConf_WdgMCheckpoint_ChkPt_4ms_Appl10_End /*  WdgMCheckpointId  */ , 
    TRUE /*  WdgMIsEndCheckpoint  */ , 
    FALSE /*  WdgMIsEndCheckpointGlobal  */ , 
    0u /*  WdgMExpectedAliveIndications  */ , 
    0u /*  WdgMMinMargin  */ , 
    0u /*  WdgMMaxMargin  */ , 
    0u /*  WdgMSupervisionReferenceCycle  */ , 
    NULL_PTR /*  WdgMAliveLRef  */ , 
    NULL_PTR /*  WdgMAliveGRef  */ , 
    FALSE /*  WdgMDeadlineMonitoring  */ , 
    0u /*  WdgMOutgoingDeadlineMax  */ , 
    1u /*  NrOfLocalTransitions  */ , 
    &WdgMTransition[2] /*  WdgMLocalTransitionRef  */ , 
    0u /*  NrOfGlobalTransitions  */ , 
    NULL_PTR /*  WdgMGlobalTransitionsRef  */ , 
    FALSE /*  WdgMStartsAGlobalTransition  */ , 
    0u /*  NrOfStartedGlobalTransitions  */ , 
    NULL_PTR /*  WdgMStartedGlobalTransitionIds  */ 
  } /*  [6]  */ , 
  {
    WdgMConf_WdgMCheckpoint_ChkPt_10ms_Appl10_Strt /*  WdgMCheckpointId  */ , 
    FALSE /*  WdgMIsEndCheckpoint  */ , 
    FALSE /*  WdgMIsEndCheckpointGlobal  */ , 
    2u /*  WdgMExpectedAliveIndications  */ , 
    0u /*  WdgMMinMargin  */ , 
    0u /*  WdgMMaxMargin  */ , 
    5u /*  WdgMSupervisionReferenceCycle  */ , 
    &Alive_CounterL_3 /*  WdgMAliveLRef  */ , 
    &Alive_CounterG_3 /*  WdgMAliveGRef  */ , 
    FALSE /*  WdgMDeadlineMonitoring  */ , 
    0u /*  WdgMOutgoingDeadlineMax  */ , 
    0u /*  NrOfLocalTransitions  */ , 
    NULL_PTR /*  WdgMLocalTransitionRef  */ , 
    0u /*  NrOfGlobalTransitions  */ , 
    NULL_PTR /*  WdgMGlobalTransitionsRef  */ , 
    FALSE /*  WdgMStartsAGlobalTransition  */ , 
    0u /*  NrOfStartedGlobalTransitions  */ , 
    NULL_PTR /*  WdgMStartedGlobalTransitionIds  */ 
  } /*  [7]  */ , 
  {
    WdgMConf_WdgMCheckpoint_ChkPt_10ms_Appl10_End /*  WdgMCheckpointId  */ , 
    TRUE /*  WdgMIsEndCheckpoint  */ , 
    FALSE /*  WdgMIsEndCheckpointGlobal  */ , 
    0u /*  WdgMExpectedAliveIndications  */ , 
    0u /*  WdgMMinMargin  */ , 
    0u /*  WdgMMaxMargin  */ , 
    0u /*  WdgMSupervisionReferenceCycle  */ , 
    NULL_PTR /*  WdgMAliveLRef  */ , 
    NULL_PTR /*  WdgMAliveGRef  */ , 
    FALSE /*  WdgMDeadlineMonitoring  */ , 
    0u /*  WdgMOutgoingDeadlineMax  */ , 
    1u /*  NrOfLocalTransitions  */ , 
    &WdgMTransition[3] /*  WdgMLocalTransitionRef  */ , 
    0u /*  NrOfGlobalTransitions  */ , 
    NULL_PTR /*  WdgMGlobalTransitionsRef  */ , 
    TRUE /*  WdgMStartsAGlobalTransition  */ , 
    1u /*  NrOfStartedGlobalTransitions  */ , 
    StartsGlobalTransition_SE_10ms_Appl10_ChkPt_10ms_Appl10_End /*  WdgMStartedGlobalTransitionIds  */ 
  } /*  [8]  */ , 
  {
    WdgMConf_WdgMCheckpoint_ChkPt_100ms_Appl10_Strt /*  WdgMCheckpointId  */ , 
    FALSE /*  WdgMIsEndCheckpoint  */ , 
    FALSE /*  WdgMIsEndCheckpointGlobal  */ , 
    1u /*  WdgMExpectedAliveIndications  */ , 
    0u /*  WdgMMinMargin  */ , 
    0u /*  WdgMMaxMargin  */ , 
    25u /*  WdgMSupervisionReferenceCycle  */ , 
    &Alive_CounterL_4 /*  WdgMAliveLRef  */ , 
    &Alive_CounterG_4 /*  WdgMAliveGRef  */ , 
    FALSE /*  WdgMDeadlineMonitoring  */ , 
    0u /*  WdgMOutgoingDeadlineMax  */ , 
    0u /*  NrOfLocalTransitions  */ , 
    NULL_PTR /*  WdgMLocalTransitionRef  */ , 
    0u /*  NrOfGlobalTransitions  */ , 
    NULL_PTR /*  WdgMGlobalTransitionsRef  */ , 
    FALSE /*  WdgMStartsAGlobalTransition  */ , 
    0u /*  NrOfStartedGlobalTransitions  */ , 
    NULL_PTR /*  WdgMStartedGlobalTransitionIds  */ 
  } /*  [9]  */ , 
  {
    WdgMConf_WdgMCheckpoint_ChkPt_100ms_Appl10_End /*  WdgMCheckpointId  */ , 
    TRUE /*  WdgMIsEndCheckpoint  */ , 
    FALSE /*  WdgMIsEndCheckpointGlobal  */ , 
    0u /*  WdgMExpectedAliveIndications  */ , 
    0u /*  WdgMMinMargin  */ , 
    0u /*  WdgMMaxMargin  */ , 
    0u /*  WdgMSupervisionReferenceCycle  */ , 
    NULL_PTR /*  WdgMAliveLRef  */ , 
    NULL_PTR /*  WdgMAliveGRef  */ , 
    FALSE /*  WdgMDeadlineMonitoring  */ , 
    0u /*  WdgMOutgoingDeadlineMax  */ , 
    1u /*  NrOfLocalTransitions  */ , 
    &WdgMTransition[4] /*  WdgMLocalTransitionRef  */ , 
    0u /*  NrOfGlobalTransitions  */ , 
    NULL_PTR /*  WdgMGlobalTransitionsRef  */ , 
    FALSE /*  WdgMStartsAGlobalTransition  */ , 
    0u /*  NrOfStartedGlobalTransitions  */ , 
    NULL_PTR /*  WdgMStartedGlobalTransitionIds  */ 
  } /*  [10]  */ 
};


WDGM_LOCAL const WdgM_SupervisedEntityType WdgMSupervisedEntity[WDGM_NR_OF_ENTITIES] =
{
  {
    WdgMConf_WdgMSupervisedEntity_SE_10msBSW_Appl10 /*  WdgMSupervisedEntity  */ , 
    TRUE /*  WdgMEnableEntityDeactivation  */ , 
    WdgMConf_WdgMCheckpoint_ChkPt_10msBSW_Appl10_Strt /*  WdgMCheckpointLocInitialId  */ , 
    2u /*  NrOfCheckpoints  */ , 
    &WdgMCheckPoint[0] /*  WdgMCheckpointRef  */ , 
    WDGM_LOCAL_STATUS_OK /*  WdgMInitialStatus  */ , 
    0u /*  WdgMFailedSupervisionRefCycleTol  */ , 
    0u /*  WdgMFailedDeadlineRefCycleTol  */ , 
    0u /*  WdgMDeadlineReferenceCycle  */ , 
    0u /*  WdgMFailedProgramFlowRefCycleTol  */ , 
    0u /*  WdgMProgramFlowReferenceCycle  */ , 
    TRUE /*  WdgMProgramFlowMonitoring  */ , 
    WDGM_INVALID_OSAPPLICATION /*  OSApplication  */ , 
    NULL_PTR /*  WdgM_LocalStateChangeCbk  */ , 
    &EntityStatusL_0 /*  EntityStatusLRef  */ , 
    &EntityStatusG_0 /*  EntityStatusGRef  */ , 
    0u /*  WdgMEntityCoreId  */ 
  } /*  [0]  */ , 
  {
    WdgMConf_WdgMSupervisedEntity_SE_2ms_Appl10 /*  WdgMSupervisedEntity  */ , 
    TRUE /*  WdgMEnableEntityDeactivation  */ , 
    WdgMConf_WdgMCheckpoint_ChkPt_2ms_Appl10_Strt /*  WdgMCheckpointLocInitialId  */ , 
    3u /*  NrOfCheckpoints  */ , 
    &WdgMCheckPoint[2] /*  WdgMCheckpointRef  */ , 
    WDGM_LOCAL_STATUS_OK /*  WdgMInitialStatus  */ , 
    0u /*  WdgMFailedSupervisionRefCycleTol  */ , 
    0u /*  WdgMFailedDeadlineRefCycleTol  */ , 
    0u /*  WdgMDeadlineReferenceCycle  */ , 
    0u /*  WdgMFailedProgramFlowRefCycleTol  */ , 
    0u /*  WdgMProgramFlowReferenceCycle  */ , 
    TRUE /*  WdgMProgramFlowMonitoring  */ , 
    WDGM_INVALID_OSAPPLICATION /*  OSApplication  */ , 
    NULL_PTR /*  WdgM_LocalStateChangeCbk  */ , 
    &EntityStatusL_1 /*  EntityStatusLRef  */ , 
    &EntityStatusG_1 /*  EntityStatusGRef  */ , 
    0u /*  WdgMEntityCoreId  */ 
  } /*  [1]  */ , 
  {
    WdgMConf_WdgMSupervisedEntity_SE_4ms_Appl10 /*  WdgMSupervisedEntity  */ , 
    TRUE /*  WdgMEnableEntityDeactivation  */ , 
    WdgMConf_WdgMCheckpoint_ChkPt_4ms_Appl10_Strt /*  WdgMCheckpointLocInitialId  */ , 
    2u /*  NrOfCheckpoints  */ , 
    &WdgMCheckPoint[5] /*  WdgMCheckpointRef  */ , 
    WDGM_LOCAL_STATUS_OK /*  WdgMInitialStatus  */ , 
    0u /*  WdgMFailedSupervisionRefCycleTol  */ , 
    0u /*  WdgMFailedDeadlineRefCycleTol  */ , 
    0u /*  WdgMDeadlineReferenceCycle  */ , 
    0u /*  WdgMFailedProgramFlowRefCycleTol  */ , 
    0u /*  WdgMProgramFlowReferenceCycle  */ , 
    TRUE /*  WdgMProgramFlowMonitoring  */ , 
    WDGM_INVALID_OSAPPLICATION /*  OSApplication  */ , 
    NULL_PTR /*  WdgM_LocalStateChangeCbk  */ , 
    &EntityStatusL_2 /*  EntityStatusLRef  */ , 
    &EntityStatusG_2 /*  EntityStatusGRef  */ , 
    0u /*  WdgMEntityCoreId  */ 
  } /*  [2]  */ , 
  {
    WdgMConf_WdgMSupervisedEntity_SE_10ms_Appl10 /*  WdgMSupervisedEntity  */ , 
    TRUE /*  WdgMEnableEntityDeactivation  */ , 
    WdgMConf_WdgMCheckpoint_ChkPt_10ms_Appl10_Strt /*  WdgMCheckpointLocInitialId  */ , 
    2u /*  NrOfCheckpoints  */ , 
    &WdgMCheckPoint[7] /*  WdgMCheckpointRef  */ , 
    WDGM_LOCAL_STATUS_OK /*  WdgMInitialStatus  */ , 
    0u /*  WdgMFailedSupervisionRefCycleTol  */ , 
    0u /*  WdgMFailedDeadlineRefCycleTol  */ , 
    0u /*  WdgMDeadlineReferenceCycle  */ , 
    0u /*  WdgMFailedProgramFlowRefCycleTol  */ , 
    0u /*  WdgMProgramFlowReferenceCycle  */ , 
    TRUE /*  WdgMProgramFlowMonitoring  */ , 
    WDGM_INVALID_OSAPPLICATION /*  OSApplication  */ , 
    NULL_PTR /*  WdgM_LocalStateChangeCbk  */ , 
    &EntityStatusL_3 /*  EntityStatusLRef  */ , 
    &EntityStatusG_3 /*  EntityStatusGRef  */ , 
    0u /*  WdgMEntityCoreId  */ 
  } /*  [3]  */ , 
  {
    WdgMConf_WdgMSupervisedEntity_SE_100ms_Appl10 /*  WdgMSupervisedEntity  */ , 
    TRUE /*  WdgMEnableEntityDeactivation  */ , 
    WdgMConf_WdgMCheckpoint_ChkPt_100ms_Appl10_Strt /*  WdgMCheckpointLocInitialId  */ , 
    2u /*  NrOfCheckpoints  */ , 
    &WdgMCheckPoint[9] /*  WdgMCheckpointRef  */ , 
    WDGM_LOCAL_STATUS_OK /*  WdgMInitialStatus  */ , 
    0u /*  WdgMFailedSupervisionRefCycleTol  */ , 
    0u /*  WdgMFailedDeadlineRefCycleTol  */ , 
    0u /*  WdgMDeadlineReferenceCycle  */ , 
    0u /*  WdgMFailedProgramFlowRefCycleTol  */ , 
    0u /*  WdgMProgramFlowReferenceCycle  */ , 
    TRUE /*  WdgMProgramFlowMonitoring  */ , 
    WDGM_INVALID_OSAPPLICATION /*  OSApplication  */ , 
    NULL_PTR /*  WdgM_LocalStateChangeCbk  */ , 
    &EntityStatusL_4 /*  EntityStatusLRef  */ , 
    &EntityStatusG_4 /*  EntityStatusGRef  */ , 
    0u /*  WdgMEntityCoreId  */ 
  } /*  [4]  */ 
};


WDGM_LOCAL const WdgM_TriggerModeType WdgMTriggerMode_core0[WDGM_NR_OF_WATCHDOGS_CORE0 * WDGM_NR_OF_TRIGGER_MODES_CORE0] = 
{
  {
    2u /*  WdgMTriggerWindowStart  */ , 
    1u /*  WdgMTicksPerSecond[Hz]=250 , WdgMTriggerWindowStartTicks  */ , 
    7u /*   (condition value)  WdgMTriggerTimeout  */ , 
    2u /*  WdgMTicksPerSecond[Hz]=250 , WdgMTriggerTimeoutTicks  */ , 
    WDGIF_SLOW_MODE /*  WdgMWatchdogMode  */ , 
    0u /*  WdgMDeviceIndex  */ 
  } /*  WdgMTriggerModeId 0  */ 
}; 
 
WDGM_LOCAL const WdgM_WatchdogDeviceType WdgMWatchdogDevice0[WDGM_NR_OF_WATCHDOGS_CORE0] = 
{
  {
    &WdgMTriggerMode_core0[0] /*  WdgMTriggerModeRef  */ 
  } /*  [0]  */ 
}; 


WDGM_LOCAL const WdgM_CallersType WdgMAllowedCallers[WDGM_NR_OF_ALLOWED_CALLERS] =
{
  {
    0u /*  WdgMAllowedCaller  */ 
  } /*  [0]  */ 
};


const WdgM_ConfigType WdgMConfig_Mode0_core0 = 
{
  5u /*  WdgMConfigMajorVersion  */ , 
  1u /*  WdgMConfigMinorVersion  */ , 
  0u /*  WdgMConfigId  */ , 
  0u /*  WdgMInitialTriggerModeId  */ , 
  0u /*  WdgMExpiredSupervisionCycleTol  */ , 
  WdgMConf_WdgMSupervisedEntity_SE_10ms_Appl10 /*  WdgMGlobInitialEntityId  */ , 
  WdgMConf_WdgMCheckpoint_ChkPt_10ms_Appl10_End /*  WdgMGlobInitialCheckpointId  */ , 
  WDGM_NR_OF_GLOBAL_TRANSITIONS /*  NrOfGlobalTransitions  */ , 
  WdgMGlobalTransition /*  WdgMGlobalTransitions  */ , 
  WDGM_NR_OF_WATCHDOGS_CORE0 /*  NrOfWatchdogDevices  */ , 
  WDGM_NR_OF_TRIGGER_MODES_CORE0 /*  NrOfTriggerModes  */ , 
  WdgMWatchdogDevice0 /*  WdgMWatchdogDeviceRef  */ , 
  WDGM_NR_OF_ALLOWED_CALLERS /*  NrOfAllowedCallers  */ , 
  WdgMAllowedCallers /*  WdgMCallersRef  */ , 
  WDGM_NR_OF_ENTITIES /*  NrOfSupervisedEntities  */ , 
  WdgMSupervisedEntity /*  WdgMSupervisedEntityRef  */ , 
  &StatusG_core0 /*  DataGRef  */ , 
  &StatusGS_core0 /*  DataGSRef  */ , 
  EntityGS /*  EntityGSRef  */ , 
  GlobalTransitionFlagsGS /*  GlobalTransitionFlagsGSRef  */ , 
  NULL_PTR /*  WdgM_GlobalStateChangeCbk  */ , 
  &GlobalVariables_core0 /*  WdgMGlobalVariables  */ , 
  0u /*  WdgMModeCoreAssignment  */ , 
  39u /*  WdgMConfigChecksum  */ 
}; 
 

#define WDGM_STOP_SEC_CONST_UNSPECIFIED 
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  END OF FILE: WdgM_PBcfg.c
 *********************************************************************************************************************/

