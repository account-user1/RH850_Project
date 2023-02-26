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
 *            Module: EcuM
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: EcuM_Init_Cfg.c
 *   Generation Time: 2018-01-24 11:34:48
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


#define ECUM_INIT_CFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
# include "EcuM_Init_PBcfg.h" 
 

 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_Init_Includes>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/
/* In the following is the generated EcuM_GlobalConfigRoot. It contains supported BSW modules which
 * have configuration variant post-build-loadable. 
 */

#if (ECUM_USE_GENERATED_GLOBAL_CONFIG == STD_ON)

#define ECUM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(EcuM_GlobalPCConfigType, ECUM_CONST) EcuM_GlobalPcConfig[2] =
{
  {
    BswM_Config_ECU1_Ptr, 
    EcuM_Config_ECU1_Ptr, 
    Can_Config_ECU1_Ptr, 
    CanIf_Config_ECU1_Ptr, 
    &CanXcp_Config_ECU1
  }, 
  {
    BswM_Config_ECU2_Ptr, 
    EcuM_Config_ECU2_Ptr, 
    Can_Config_ECU2_Ptr, 
    CanIf_Config_ECU2_Ptr, 
    &CanXcp_Config_ECU2
  }
};

#define ECUM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif

#define ECUM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_GlobalPcConfigRoot>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/* In this section a custom EcuM_GlobalConfigRoot can be defined. Use generated EcuM_GlobalConfigRoot as template.
 *
 * Caution: If a custom EcuM_GlobalConfigRoot is used, the EcuM_GlobalConfigType must be adapted in EcuM_Init_PBcfg.h!
 */


//PSR IM patch - the EcuM_GlobalConfigRoot is not generating, so need to add manually
CONST(EcuM_GlobalConfigRootType, ECUM_CONST) EcuM_GlobalConfigRoot =
{
  {
    BswM_Config_ECU1_Ptr, 
    EcuM_Config_ECU1_Ptr, 
    Can_Config_ECU1_Ptr, 
    CanIf_Config_ECU1_Ptr, 
    &CanXcp_Config_ECU1
  }, 
  {
    BswM_Config_ECU2_Ptr, 
    EcuM_Config_ECU2_Ptr, 
    Can_Config_ECU2_Ptr, 
    CanIf_Config_ECU2_Ptr, 
    &CanXcp_Config_ECU2
  }
};


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define ECUM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

 

#if 0
#endif


/**********************************************************************************************************************
 *  END OF FILE: ECUM_INIT_PBCFG_SOURCE.C
 *********************************************************************************************************************/
 

