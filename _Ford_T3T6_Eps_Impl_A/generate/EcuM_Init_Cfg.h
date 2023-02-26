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
 *              File: EcuM_Init_Cfg.h
 *   Generation Time: 2018-04-09 13:27:49
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

#if !defined (ECUM_INIT_CFG_H)
# define ECUM_INIT_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_Init_Includes>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#include "BswM.h" 
#include "EcuM.h" 
#include "Can.h" 
#include "CanIf.h" 
#include "CanXcp.h" 
#include "Dio.h" 
#include "Fls.h" 
#include "Port.h" 
#include "Spi.h" 
/* TODO: Nexteer patch - generating incorrect header file name with IM update. Actual header file in Wdg BSW component is Wdg_59_Driver.h
#include "Wdg.h" */

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/* In the following is the generated EcuM_GlobalConfigType. It contains supported BSW modules which
 * have configuration variant post-build-loadable. 
 */

#if (ECUM_USE_GENERATED_GLOBAL_CONFIG == STD_ON)

typedef struct
{
  CONSTP2CONST(BswM_ConfigType, TYPEDEF, BSWM_INIT_DATA) CfgPtr_BswM_Init;
  CONSTP2CONST(EcuM_PbConfigType, TYPEDEF, ECUM_INIT_DATA) CfgPtr_EcuM_Init;
  CONSTP2CONST(Can_ConfigType, TYPEDEF, CAN_INIT_DATA) CfgPtr_Can_Init;
  CONSTP2CONST(CanIf_ConfigType, TYPEDEF, CANIF_INIT_DATA) CfgPtr_CanIf_Init;
  CONSTP2CONST(CanXcp_ConfigType, TYPEDEF, CANXCP_PBCFG) CfgPtr_CanXcp_Init;
} EcuM_GlobalPCConfigType;


typedef EcuM_GlobalPCConfigType EcuM_GlobalConfigType;

typedef P2CONST(EcuM_GlobalConfigType, AUTOMATIC, ECUM_CONST) EcuM_GlobalConfigRefType;

typedef struct
{
  EcuM_GlobalConfigType ECU1;
  EcuM_GlobalConfigType ECU2;
} EcuM_GlobalConfigRootType;


#endif


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_GlobalConfigType>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/* In this section a custom EcuM_GlobalConfigType can be defined. Use generated EcuM_GlobalConfigType as template.
 *
 * Caution: EcuM must be always in variant post-build if one of the BSW module is in variant post-build.
 *          Do not change the name of the member EcuM. If the BswM is in variant post-build 
 *          it is also not allowed to change the name of the struct member. This two modules 
 *          are accessed during initialization via this names.
 */


//PSR IM patch - the EcuM_GlobalConfigRoot is not generating, so need to add manually
extern CONST(EcuM_GlobalConfigRootType, ECUM_CONST) EcuM_GlobalConfigRoot;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
#define ECUM_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Global pointer to access the global variant data, do not remove and do not change the name */
 
extern P2CONST(EcuM_GlobalConfigType, ECUM_VAR_NOINIT, ECUM_CONST) EcuM_GlobalPCConfig_Ptr;

#define ECUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define ECUM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 

extern CONST(EcuM_GlobalPCConfigType, ECUM_CONST) EcuM_GlobalPcConfig[2]; 

#define ECUM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 



#if 0
#endif




#endif
/**********************************************************************************************************************
 *  END OF FILE: ECUM_INIT_PBCFG.H
 *********************************************************************************************************************/
