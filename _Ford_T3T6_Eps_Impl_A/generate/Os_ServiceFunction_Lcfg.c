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
 *            Module: Os
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_ServiceFunction_Lcfg.c
 *   Generation Time: 2018-04-13 16:37:25
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

/* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_SERVICEFUNCTION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_ServiceFunction_Cfg.h"
#include "Os_ServiceFunction_Lcfg.h"
#include "Os_ServiceFunction.h"

/* Os kernel module dependencies */
#include "Os_Application_Lcfg.h"
#include "Os_Common_Types.h"
#include "Os_Lcfg.h"
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os.h"

/* Os hal dependencies */
#include "Os_Hal_Context_Lcfg.h"
#include "Os_Hal_Context.h"

/* User file includes */
#include "TrustedFunction.h"


/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/*! Data type for packing user variables for: ApplXcpWrCmn */
typedef struct
{
  MTABYTEPTR Arg1; /* IN - addr */
  vuint8 Arg2; /* IN - size */
  const BYTEPTR Arg3; /* IN - data */
} Os_ApplXcpWrCmnPackageType;

/*! Data type for packing user variables for: CritRegInitChk */
typedef struct
{
  uint8 Returnvalue;
} Os_CritRegInitChkPackageType;

/*! Data type for packing user variables for: CritRegPerChk */
typedef struct
{
  uint8 Returnvalue;
} Os_CritRegPerChkPackageType;

/*! Data type for packing user variables for: DtsInin */
typedef struct
{
  uint32 Arg1; /* IN - CrcHwIdxInReg */
  uint32 Arg2; /* IN - CrcHwIdxOutReg */
} Os_DtsIninPackageType;

/*! Data type for packing user variables for: Spi_AsyncTransmit */
typedef struct
{
  Spi_SequenceType Arg1; /* IN - Sequence */
  Std_ReturnType Returnvalue;
} Os_Spi_AsyncTransmitPackageType;

/*! Data type for packing user variables for: Trusted_EcuM_ShutdownOS */
typedef struct
{
  Std_ReturnType Arg1; /* IN - ErrCode */
} Os_Trusted_EcuM_ShutdownOSPackageType;


/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Dynamic service function data: NtWrapS_CmnMfgSrv_CallSvc10 */
OS_LOCAL OS_BITARRAY_DECLARE(OsCfg_Service_NtWrapS_CmnMfgSrv_CallSvc10_BitField_Dyn, OS_CFG_NUM_SERVICE_NTWRAPS_CMNMFGSRV_CALLSVC10_STACKS, OS_VAR_NOINIT);
OS_LOCAL VAR(Os_BitArrayType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_CmnMfgSrv_CallSvc10_BitArray_Dyn;
OS_LOCAL VAR(Os_ServiceStackPoolType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_CmnMfgSrv_CallSvc10_StackPool_Dyn;

/*! Dynamic service function data: NtWrapS_NvM_EraseNvBlock */
OS_LOCAL OS_BITARRAY_DECLARE(OsCfg_Service_NtWrapS_NvM_EraseNvBlock_BitField_Dyn, OS_CFG_NUM_SERVICE_NTWRAPS_NVM_ERASENVBLOCK_STACKS, OS_VAR_NOINIT);
OS_LOCAL VAR(Os_BitArrayType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_EraseNvBlock_BitArray_Dyn;
OS_LOCAL VAR(Os_ServiceStackPoolType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_EraseNvBlock_StackPool_Dyn;

/*! Dynamic service function data: NtWrapS_NvM_GetDataIndex */
OS_LOCAL OS_BITARRAY_DECLARE(OsCfg_Service_NtWrapS_NvM_GetDataIndex_BitField_Dyn, OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETDATAINDEX_STACKS, OS_VAR_NOINIT);
OS_LOCAL VAR(Os_BitArrayType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_GetDataIndex_BitArray_Dyn;
OS_LOCAL VAR(Os_ServiceStackPoolType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_GetDataIndex_StackPool_Dyn;

/*! Dynamic service function data: NtWrapS_NvM_GetErrorStatus */
OS_LOCAL OS_BITARRAY_DECLARE(OsCfg_Service_NtWrapS_NvM_GetErrorStatus_BitField_Dyn, OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETERRORSTATUS_STACKS, OS_VAR_NOINIT);
OS_LOCAL VAR(Os_BitArrayType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_GetErrorStatus_BitArray_Dyn;
OS_LOCAL VAR(Os_ServiceStackPoolType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_GetErrorStatus_StackPool_Dyn;

/*! Dynamic service function data: NtWrapS_NvM_InvalidateNvBlock */
OS_LOCAL OS_BITARRAY_DECLARE(OsCfg_Service_NtWrapS_NvM_InvalidateNvBlock_BitField_Dyn, OS_CFG_NUM_SERVICE_NTWRAPS_NVM_INVALIDATENVBLOCK_STACKS, OS_VAR_NOINIT);
OS_LOCAL VAR(Os_BitArrayType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_InvalidateNvBlock_BitArray_Dyn;
OS_LOCAL VAR(Os_ServiceStackPoolType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_InvalidateNvBlock_StackPool_Dyn;

/*! Dynamic service function data: NtWrapS_NvM_ReadBlock */
OS_LOCAL OS_BITARRAY_DECLARE(OsCfg_Service_NtWrapS_NvM_ReadBlock_BitField_Dyn, OS_CFG_NUM_SERVICE_NTWRAPS_NVM_READBLOCK_STACKS, OS_VAR_NOINIT);
OS_LOCAL VAR(Os_BitArrayType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_ReadBlock_BitArray_Dyn;
OS_LOCAL VAR(Os_ServiceStackPoolType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_ReadBlock_StackPool_Dyn;

/*! Dynamic service function data: NtWrapS_NvM_SetBlockProtection */
OS_LOCAL OS_BITARRAY_DECLARE(OsCfg_Service_NtWrapS_NvM_SetBlockProtection_BitField_Dyn, OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETBLOCKPROTECTION_STACKS, OS_VAR_NOINIT);
OS_LOCAL VAR(Os_BitArrayType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_SetBlockProtection_BitArray_Dyn;
OS_LOCAL VAR(Os_ServiceStackPoolType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_SetBlockProtection_StackPool_Dyn;

/*! Dynamic service function data: NtWrapS_NvM_SetDataIndex */
OS_LOCAL OS_BITARRAY_DECLARE(OsCfg_Service_NtWrapS_NvM_SetDataIndex_BitField_Dyn, OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETDATAINDEX_STACKS, OS_VAR_NOINIT);
OS_LOCAL VAR(Os_BitArrayType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_SetDataIndex_BitArray_Dyn;
OS_LOCAL VAR(Os_ServiceStackPoolType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_SetDataIndex_StackPool_Dyn;

/*! Dynamic service function data: NtWrapS_NvM_SetRamBlockStatus */
OS_LOCAL OS_BITARRAY_DECLARE(OsCfg_Service_NtWrapS_NvM_SetRamBlockStatus_BitField_Dyn, OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETRAMBLOCKSTATUS_STACKS, OS_VAR_NOINIT);
OS_LOCAL VAR(Os_BitArrayType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_SetRamBlockStatus_BitArray_Dyn;
OS_LOCAL VAR(Os_ServiceStackPoolType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_SetRamBlockStatus_StackPool_Dyn;

/*! Dynamic service function data: NtWrapS_NvM_WriteBlock */
OS_LOCAL OS_BITARRAY_DECLARE(OsCfg_Service_NtWrapS_NvM_WriteBlock_BitField_Dyn, OS_CFG_NUM_SERVICE_NTWRAPS_NVM_WRITEBLOCK_STACKS, OS_VAR_NOINIT);
OS_LOCAL VAR(Os_BitArrayType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_WriteBlock_BitArray_Dyn;
OS_LOCAL VAR(Os_ServiceStackPoolType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_NvM_WriteBlock_StackPool_Dyn;

/*! Dynamic service function data: NtWrapS_Rte_Call_CopyCalPageReq_Oper */
OS_LOCAL OS_BITARRAY_DECLARE(OsCfg_Service_NtWrapS_Rte_Call_CopyCalPageReq_Oper_BitField_Dyn, OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER_STACKS, OS_VAR_NOINIT);
OS_LOCAL VAR(Os_BitArrayType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_Rte_Call_CopyCalPageReq_Oper_BitArray_Dyn;
OS_LOCAL VAR(Os_ServiceStackPoolType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_Rte_Call_CopyCalPageReq_Oper_StackPool_Dyn;

/*! Dynamic service function data: NtWrapS_Rte_Call_SetCalPageReq_Oper */
OS_LOCAL OS_BITARRAY_DECLARE(OsCfg_Service_NtWrapS_Rte_Call_SetCalPageReq_Oper_BitField_Dyn, OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER_STACKS, OS_VAR_NOINIT);
OS_LOCAL VAR(Os_BitArrayType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_Rte_Call_SetCalPageReq_Oper_BitArray_Dyn;
OS_LOCAL VAR(Os_ServiceStackPoolType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_Rte_Call_SetCalPageReq_Oper_StackPool_Dyn;

/*! Dynamic service function data: NtWrapS_SyncCrc_GetAvlCrcHwUnit */
OS_LOCAL OS_BITARRAY_DECLARE(OsCfg_Service_NtWrapS_SyncCrc_GetAvlCrcHwUnit_BitField_Dyn, OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT_STACKS, OS_VAR_NOINIT);
OS_LOCAL VAR(Os_BitArrayType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_SyncCrc_GetAvlCrcHwUnit_BitArray_Dyn;
OS_LOCAL VAR(Os_ServiceStackPoolType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_SyncCrc_GetAvlCrcHwUnit_StackPool_Dyn;

/*! Dynamic service function data: NtWrapS_SyncCrc_RelsCrcHwUnit */
OS_LOCAL OS_BITARRAY_DECLARE(OsCfg_Service_NtWrapS_SyncCrc_RelsCrcHwUnit_BitField_Dyn, OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_RELSCRCHWUNIT_STACKS, OS_VAR_NOINIT);
OS_LOCAL VAR(Os_BitArrayType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_SyncCrc_RelsCrcHwUnit_BitArray_Dyn;
OS_LOCAL VAR(Os_ServiceStackPoolType, OS_VAR_NOINIT) OsCfg_Service_NtWrapS_SyncCrc_RelsCrcHwUnit_StackPool_Dyn;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#define OS_START_SEC_CODE
#include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_Adcf0OutpInin
 *********************************************************************************************************************/
/*! \brief        Unpacking part of call stub for service functions.
 *  \details      Since the service of CallTrustedFunction() is very generic, it is needed to define a stub-interface
 *                which does the packing and unpacking of the arguments. This function performs the unpacking.
 *                It's signature matches the AUTOSAR trusted function interface.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_Adcf0OutpInin
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
);

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_ApplXcpWrCmn
 *********************************************************************************************************************/
/*! \brief        Unpacking part of call stub for service functions.
 *  \details      Since the service of CallTrustedFunction() is very generic, it is needed to define a stub-interface
 *                which does the packing and unpacking of the arguments. This function performs the unpacking.
 *                It's signature matches the AUTOSAR trusted function interface.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_ApplXcpWrCmn
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
);

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_CritRegInitChk
 *********************************************************************************************************************/
/*! \brief        Unpacking part of call stub for service functions.
 *  \details      Since the service of CallTrustedFunction() is very generic, it is needed to define a stub-interface
 *                which does the packing and unpacking of the arguments. This function performs the unpacking.
 *                It's signature matches the AUTOSAR trusted function interface.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_CritRegInitChk
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
);

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_CritRegPerChk
 *********************************************************************************************************************/
/*! \brief        Unpacking part of call stub for service functions.
 *  \details      Since the service of CallTrustedFunction() is very generic, it is needed to define a stub-interface
 *                which does the packing and unpacking of the arguments. This function performs the unpacking.
 *                It's signature matches the AUTOSAR trusted function interface.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_CritRegPerChk
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
);

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_DmaRegInin
 *********************************************************************************************************************/
/*! \brief        Unpacking part of call stub for service functions.
 *  \details      Since the service of CallTrustedFunction() is very generic, it is needed to define a stub-interface
 *                which does the packing and unpacking of the arguments. This function performs the unpacking.
 *                It's signature matches the AUTOSAR trusted function interface.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_DmaRegInin
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
);

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_DtsClnUp
 *********************************************************************************************************************/
/*! \brief        Unpacking part of call stub for service functions.
 *  \details      Since the service of CallTrustedFunction() is very generic, it is needed to define a stub-interface
 *                which does the packing and unpacking of the arguments. This function performs the unpacking.
 *                It's signature matches the AUTOSAR trusted function interface.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_DtsClnUp
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
);

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_DtsInin
 *********************************************************************************************************************/
/*! \brief        Unpacking part of call stub for service functions.
 *  \details      Since the service of CallTrustedFunction() is very generic, it is needed to define a stub-interface
 *                which does the packing and unpacking of the arguments. This function performs the unpacking.
 *                It's signature matches the AUTOSAR trusted function interface.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_DtsInin
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
);

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_Fls_MainFunction
 *********************************************************************************************************************/
/*! \brief        Unpacking part of call stub for service functions.
 *  \details      Since the service of CallTrustedFunction() is very generic, it is needed to define a stub-interface
 *                which does the packing and unpacking of the arguments. This function performs the unpacking.
 *                It's signature matches the AUTOSAR trusted function interface.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_Fls_MainFunction
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
);

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_IpgInin
 *********************************************************************************************************************/
/*! \brief        Unpacking part of call stub for service functions.
 *  \details      Since the service of CallTrustedFunction() is very generic, it is needed to define a stub-interface
 *                which does the packing and unpacking of the arguments. This function performs the unpacking.
 *                It's signature matches the AUTOSAR trusted function interface.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_IpgInin
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
);

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_NvM_MainFunction
 *********************************************************************************************************************/
/*! \brief        Unpacking part of call stub for service functions.
 *  \details      Since the service of CallTrustedFunction() is very generic, it is needed to define a stub-interface
 *                which does the packing and unpacking of the arguments. This function performs the unpacking.
 *                It's signature matches the AUTOSAR trusted function interface.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_NvM_MainFunction
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
);

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_Spi_AsyncTransmit
 *********************************************************************************************************************/
/*! \brief        Unpacking part of call stub for service functions.
 *  \details      Since the service of CallTrustedFunction() is very generic, it is needed to define a stub-interface
 *                which does the packing and unpacking of the arguments. This function performs the unpacking.
 *                It's signature matches the AUTOSAR trusted function interface.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_Spi_AsyncTransmit
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
);

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_Trusted_EcuM_ShutdownOS
 *********************************************************************************************************************/
/*! \brief        Unpacking part of call stub for service functions.
 *  \details      Since the service of CallTrustedFunction() is very generic, it is needed to define a stub-interface
 *                which does the packing and unpacking of the arguments. This function performs the unpacking.
 *                It's signature matches the AUTOSAR trusted function interface.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_Trusted_EcuM_ShutdownOS
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
);

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_Uart0CfgAndUseInin
 *********************************************************************************************************************/
/*! \brief        Unpacking part of call stub for service functions.
 *  \details      Since the service of CallTrustedFunction() is very generic, it is needed to define a stub-interface
 *                which does the packing and unpacking of the arguments. This function performs the unpacking.
 *                It's signature matches the AUTOSAR trusted function interface.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_Uart0CfgAndUseInin
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
);

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_Uart1CfgAndUseInin
 *********************************************************************************************************************/
/*! \brief        Unpacking part of call stub for service functions.
 *  \details      Since the service of CallTrustedFunction() is very generic, it is needed to define a stub-interface
 *                which does the packing and unpacking of the arguments. This function performs the unpacking.
 *                It's signature matches the AUTOSAR trusted function interface.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_Uart1CfgAndUseInin
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
);

#define OS_STOP_SEC_CODE
#include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Trusted function configuration data: Adcf0OutpInin */
CONST(Os_ServiceTfConfigType, OS_CONST) OsCfg_Service_Adcf0OutpInin =
{
  /* .Base     = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl0,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl0,
    /* .ServiceType      = */ OS_SERVICE_TRUSTEDFUNCTION
  },
  /* .Callback = */ TRUSTED_Os_ServiceCallee_Adcf0OutpInin,
  /* .Context  = */ NULL_PTR
};

/*! Trusted function configuration data: ApplXcpWrCmn */
CONST(Os_ServiceTfConfigType, OS_CONST) OsCfg_Service_ApplXcpWrCmn =
{
  /* .Base     = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl0,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl0,
    /* .ServiceType      = */ OS_SERVICE_TRUSTEDFUNCTION
  },
  /* .Callback = */ TRUSTED_Os_ServiceCallee_ApplXcpWrCmn,
  /* .Context  = */ NULL_PTR
};

/*! Trusted function configuration data: CritRegInitChk */
CONST(Os_ServiceTfConfigType, OS_CONST) OsCfg_Service_CritRegInitChk =
{
  /* .Base     = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl0,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl0,
    /* .ServiceType      = */ OS_SERVICE_TRUSTEDFUNCTION
  },
  /* .Callback = */ TRUSTED_Os_ServiceCallee_CritRegInitChk,
  /* .Context  = */ NULL_PTR
};

/*! Trusted function configuration data: CritRegPerChk */
CONST(Os_ServiceTfConfigType, OS_CONST) OsCfg_Service_CritRegPerChk =
{
  /* .Base     = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl0,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl0,
    /* .ServiceType      = */ OS_SERVICE_TRUSTEDFUNCTION
  },
  /* .Callback = */ TRUSTED_Os_ServiceCallee_CritRegPerChk,
  /* .Context  = */ NULL_PTR
};

/*! Trusted function configuration data: DmaRegInin */
CONST(Os_ServiceTfConfigType, OS_CONST) OsCfg_Service_DmaRegInin =
{
  /* .Base     = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl0,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl0,
    /* .ServiceType      = */ OS_SERVICE_TRUSTEDFUNCTION
  },
  /* .Callback = */ TRUSTED_Os_ServiceCallee_DmaRegInin,
  /* .Context  = */ NULL_PTR
};

/*! Trusted function configuration data: DtsClnUp */
CONST(Os_ServiceTfConfigType, OS_CONST) OsCfg_Service_DtsClnUp =
{
  /* .Base     = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl0,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl0,
    /* .ServiceType      = */ OS_SERVICE_TRUSTEDFUNCTION
  },
  /* .Callback = */ TRUSTED_Os_ServiceCallee_DtsClnUp,
  /* .Context  = */ NULL_PTR
};

/*! Trusted function configuration data: DtsInin */
CONST(Os_ServiceTfConfigType, OS_CONST) OsCfg_Service_DtsInin =
{
  /* .Base     = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl0,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl0,
    /* .ServiceType      = */ OS_SERVICE_TRUSTEDFUNCTION
  },
  /* .Callback = */ TRUSTED_Os_ServiceCallee_DtsInin,
  /* .Context  = */ NULL_PTR
};

/*! Trusted function configuration data: Fls_MainFunction */
CONST(Os_ServiceTfConfigType, OS_CONST) OsCfg_Service_Fls_MainFunction =
{
  /* .Base     = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl0,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl0,
    /* .ServiceType      = */ OS_SERVICE_TRUSTEDFUNCTION
  },
  /* .Callback = */ TRUSTED_Os_ServiceCallee_Fls_MainFunction,
  /* .Context  = */ NULL_PTR
};

/*! Trusted function configuration data: IpgInin */
CONST(Os_ServiceTfConfigType, OS_CONST) OsCfg_Service_IpgInin =
{
  /* .Base     = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl0,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl0,
    /* .ServiceType      = */ OS_SERVICE_TRUSTEDFUNCTION
  },
  /* .Callback = */ TRUSTED_Os_ServiceCallee_IpgInin,
  /* .Context  = */ NULL_PTR
};

/*! Trusted function configuration data: NvM_MainFunction */
CONST(Os_ServiceTfConfigType, OS_CONST) OsCfg_Service_NvM_MainFunction =
{
  /* .Base     = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl0,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl0,
    /* .ServiceType      = */ OS_SERVICE_TRUSTEDFUNCTION
  },
  /* .Callback = */ TRUSTED_Os_ServiceCallee_NvM_MainFunction,
  /* .Context  = */ NULL_PTR
};

/*! Trusted function configuration data: Spi_AsyncTransmit */
CONST(Os_ServiceTfConfigType, OS_CONST) OsCfg_Service_Spi_AsyncTransmit =
{
  /* .Base     = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl0,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl0,
    /* .ServiceType      = */ OS_SERVICE_TRUSTEDFUNCTION
  },
  /* .Callback = */ TRUSTED_Os_ServiceCallee_Spi_AsyncTransmit,
  /* .Context  = */ NULL_PTR
};

/*! Trusted function configuration data: Trusted_EcuM_ShutdownOS */
CONST(Os_ServiceTfConfigType, OS_CONST) OsCfg_Service_Trusted_EcuM_ShutdownOS =
{
  /* .Base     = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl0,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl0,
    /* .ServiceType      = */ OS_SERVICE_TRUSTEDFUNCTION
  },
  /* .Callback = */ TRUSTED_Os_ServiceCallee_Trusted_EcuM_ShutdownOS,
  /* .Context  = */ NULL_PTR
};

/*! Trusted function configuration data: Uart0CfgAndUseInin */
CONST(Os_ServiceTfConfigType, OS_CONST) OsCfg_Service_Uart0CfgAndUseInin =
{
  /* .Base     = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl0,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl0,
    /* .ServiceType      = */ OS_SERVICE_TRUSTEDFUNCTION
  },
  /* .Callback = */ TRUSTED_Os_ServiceCallee_Uart0CfgAndUseInin,
  /* .Context  = */ NULL_PTR
};

/*! Trusted function configuration data: Uart1CfgAndUseInin */
CONST(Os_ServiceTfConfigType, OS_CONST) OsCfg_Service_Uart1CfgAndUseInin =
{
  /* .Base     = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl0,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl0,
    /* .ServiceType      = */ OS_SERVICE_TRUSTEDFUNCTION
  },
  /* .Callback = */ TRUSTED_Os_ServiceCallee_Uart1CfgAndUseInin,
  /* .Context  = */ NULL_PTR
};

/*! Non-trusted function stacks array: NtWrapS_CmnMfgSrv_CallSvc10 */
OS_LOCAL CONST(Os_ServiceStackConfigType, OS_CONST)
  OsCfg_Service_NtWrapS_CmnMfgSrv_CallSvc10_Stacks[OS_CFG_NUM_SERVICE_NTWRAPS_CMNMFGSRV_CALLSVC10_STACKS] =
{
  {
    /* .Stack     = */ &OsCfg_Stack_NtWrapS_CmnMfgSrv_CallSvc100,
    /* .HwConfig  = */ &OsCfg_Hal_Stack_NtWrapS_CmnMfgSrv_CallSvc100,
    /* .PoolIndex = */ 0
  }
};

/*! Non-trusted function stack pool configuration data: NtWrapS_CmnMfgSrv_CallSvc10 */
OS_LOCAL CONST(Os_ServiceStackPoolConfigType, OS_CONST) OsCfg_Service_NtWrapS_CmnMfgSrv_CallSvc10_StackPool =
{
  /* .Dyn             = */ &OsCfg_Service_NtWrapS_CmnMfgSrv_CallSvc10_StackPool_Dyn,
  /* .AvailabilityMap = */
  {
    /* .Dyn       = */ &OsCfg_Service_NtWrapS_CmnMfgSrv_CallSvc10_BitArray_Dyn,
    /* .Data      = */ OsCfg_Service_NtWrapS_CmnMfgSrv_CallSvc10_BitField_Dyn,
    /* .Size      = */ OS_BITARRAY_SIZE(OS_CFG_NUM_SERVICE_NTWRAPS_CMNMFGSRV_CALLSVC10_STACKS),
    /* .BitLength = */ OS_BITARRAY_LENGTH(OS_CFG_NUM_SERVICE_NTWRAPS_CMNMFGSRV_CALLSVC10_STACKS)
  },
  /* .Stacks          = */ OsCfg_Service_NtWrapS_CmnMfgSrv_CallSvc10_Stacks,
  /* .StackCount      = */ OS_CFG_NUM_SERVICE_NTWRAPS_CMNMFGSRV_CALLSVC10_STACKS,
  /* .AccessCounter   = */
  {
    OS_CFG_NUM_SERVICE_NTWRAPS_CMNMFGSRV_CALLSVC10_STACKS_APPL0,
    OS_CFG_NUM_SERVICE_NTWRAPS_CMNMFGSRV_CALLSVC10_STACKS_APPL10,
    OS_CFG_NUM_SERVICE_NTWRAPS_CMNMFGSRV_CALLSVC10_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0
  }
};

/*! Non-trusted function configuration data: NtWrapS_CmnMfgSrv_CallSvc10 */
CONST(Os_ServiceNtfConfigType, OS_CONST) OsCfg_Service_NtWrapS_CmnMfgSrv_CallSvc10 =
{
  /* .Base      = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl10,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl10,
    /* .ServiceType      = */ OS_SERVICE_NONTRUSTEDFUNCTION
  },
  /* .Callback  = */ NONTRUSTED_NtWrapS_CmnMfgSrv_CallSvc10,
  /* .Context   = */ &OsCfg_Hal_Context_NtWrapS_CmnMfgSrv_CallSvc10,
  /* .StackPool = */ &OsCfg_Service_NtWrapS_CmnMfgSrv_CallSvc10_StackPool
};

/*! Non-trusted function stacks array: NtWrapS_NvM_EraseNvBlock */
OS_LOCAL CONST(Os_ServiceStackConfigType, OS_CONST)
  OsCfg_Service_NtWrapS_NvM_EraseNvBlock_Stacks[OS_CFG_NUM_SERVICE_NTWRAPS_NVM_ERASENVBLOCK_STACKS] =
{
  {
    /* .Stack     = */ &OsCfg_Stack_NtWrapS_NvM_EraseNvBlock0,
    /* .HwConfig  = */ &OsCfg_Hal_Stack_NtWrapS_NvM_EraseNvBlock0,
    /* .PoolIndex = */ 0
  }
};

/*! Non-trusted function stack pool configuration data: NtWrapS_NvM_EraseNvBlock */
OS_LOCAL CONST(Os_ServiceStackPoolConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_EraseNvBlock_StackPool =
{
  /* .Dyn             = */ &OsCfg_Service_NtWrapS_NvM_EraseNvBlock_StackPool_Dyn,
  /* .AvailabilityMap = */
  {
    /* .Dyn       = */ &OsCfg_Service_NtWrapS_NvM_EraseNvBlock_BitArray_Dyn,
    /* .Data      = */ OsCfg_Service_NtWrapS_NvM_EraseNvBlock_BitField_Dyn,
    /* .Size      = */ OS_BITARRAY_SIZE(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_ERASENVBLOCK_STACKS),
    /* .BitLength = */ OS_BITARRAY_LENGTH(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_ERASENVBLOCK_STACKS)
  },
  /* .Stacks          = */ OsCfg_Service_NtWrapS_NvM_EraseNvBlock_Stacks,
  /* .StackCount      = */ OS_CFG_NUM_SERVICE_NTWRAPS_NVM_ERASENVBLOCK_STACKS,
  /* .AccessCounter   = */
  {
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_ERASENVBLOCK_STACKS_APPL0,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_ERASENVBLOCK_STACKS_APPL10,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_ERASENVBLOCK_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0
  }
};

/*! Non-trusted function configuration data: NtWrapS_NvM_EraseNvBlock */
CONST(Os_ServiceNtfConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_EraseNvBlock =
{
  /* .Base      = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl10,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl10,
    /* .ServiceType      = */ OS_SERVICE_NONTRUSTEDFUNCTION
  },
  /* .Callback  = */ NONTRUSTED_NtWrapS_NvM_EraseNvBlock,
  /* .Context   = */ &OsCfg_Hal_Context_NtWrapS_NvM_EraseNvBlock,
  /* .StackPool = */ &OsCfg_Service_NtWrapS_NvM_EraseNvBlock_StackPool
};

/*! Non-trusted function stacks array: NtWrapS_NvM_GetDataIndex */
OS_LOCAL CONST(Os_ServiceStackConfigType, OS_CONST)
  OsCfg_Service_NtWrapS_NvM_GetDataIndex_Stacks[OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETDATAINDEX_STACKS] =
{
  {
    /* .Stack     = */ &OsCfg_Stack_NtWrapS_NvM_GetDataIndex0,
    /* .HwConfig  = */ &OsCfg_Hal_Stack_NtWrapS_NvM_GetDataIndex0,
    /* .PoolIndex = */ 0
  }
};

/*! Non-trusted function stack pool configuration data: NtWrapS_NvM_GetDataIndex */
OS_LOCAL CONST(Os_ServiceStackPoolConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_GetDataIndex_StackPool =
{
  /* .Dyn             = */ &OsCfg_Service_NtWrapS_NvM_GetDataIndex_StackPool_Dyn,
  /* .AvailabilityMap = */
  {
    /* .Dyn       = */ &OsCfg_Service_NtWrapS_NvM_GetDataIndex_BitArray_Dyn,
    /* .Data      = */ OsCfg_Service_NtWrapS_NvM_GetDataIndex_BitField_Dyn,
    /* .Size      = */ OS_BITARRAY_SIZE(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETDATAINDEX_STACKS),
    /* .BitLength = */ OS_BITARRAY_LENGTH(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETDATAINDEX_STACKS)
  },
  /* .Stacks          = */ OsCfg_Service_NtWrapS_NvM_GetDataIndex_Stacks,
  /* .StackCount      = */ OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETDATAINDEX_STACKS,
  /* .AccessCounter   = */
  {
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETDATAINDEX_STACKS_APPL0,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETDATAINDEX_STACKS_APPL10,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETDATAINDEX_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0
  }
};

/*! Non-trusted function configuration data: NtWrapS_NvM_GetDataIndex */
CONST(Os_ServiceNtfConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_GetDataIndex =
{
  /* .Base      = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl10,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl10,
    /* .ServiceType      = */ OS_SERVICE_NONTRUSTEDFUNCTION
  },
  /* .Callback  = */ NONTRUSTED_NtWrapS_NvM_GetDataIndex,
  /* .Context   = */ &OsCfg_Hal_Context_NtWrapS_NvM_GetDataIndex,
  /* .StackPool = */ &OsCfg_Service_NtWrapS_NvM_GetDataIndex_StackPool
};

/*! Non-trusted function stacks array: NtWrapS_NvM_GetErrorStatus */
OS_LOCAL CONST(Os_ServiceStackConfigType, OS_CONST)
  OsCfg_Service_NtWrapS_NvM_GetErrorStatus_Stacks[OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETERRORSTATUS_STACKS] =
{
  {
    /* .Stack     = */ &OsCfg_Stack_NtWrapS_NvM_GetErrorStatus0,
    /* .HwConfig  = */ &OsCfg_Hal_Stack_NtWrapS_NvM_GetErrorStatus0,
    /* .PoolIndex = */ 0
  }
};

/*! Non-trusted function stack pool configuration data: NtWrapS_NvM_GetErrorStatus */
OS_LOCAL CONST(Os_ServiceStackPoolConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_GetErrorStatus_StackPool =
{
  /* .Dyn             = */ &OsCfg_Service_NtWrapS_NvM_GetErrorStatus_StackPool_Dyn,
  /* .AvailabilityMap = */
  {
    /* .Dyn       = */ &OsCfg_Service_NtWrapS_NvM_GetErrorStatus_BitArray_Dyn,
    /* .Data      = */ OsCfg_Service_NtWrapS_NvM_GetErrorStatus_BitField_Dyn,
    /* .Size      = */ OS_BITARRAY_SIZE(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETERRORSTATUS_STACKS),
    /* .BitLength = */ OS_BITARRAY_LENGTH(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETERRORSTATUS_STACKS)
  },
  /* .Stacks          = */ OsCfg_Service_NtWrapS_NvM_GetErrorStatus_Stacks,
  /* .StackCount      = */ OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETERRORSTATUS_STACKS,
  /* .AccessCounter   = */
  {
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETERRORSTATUS_STACKS_APPL0,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETERRORSTATUS_STACKS_APPL10,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETERRORSTATUS_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0
  }
};

/*! Non-trusted function configuration data: NtWrapS_NvM_GetErrorStatus */
CONST(Os_ServiceNtfConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_GetErrorStatus =
{
  /* .Base      = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl10,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl10,
    /* .ServiceType      = */ OS_SERVICE_NONTRUSTEDFUNCTION
  },
  /* .Callback  = */ NONTRUSTED_NtWrapS_NvM_GetErrorStatus,
  /* .Context   = */ &OsCfg_Hal_Context_NtWrapS_NvM_GetErrorStatus,
  /* .StackPool = */ &OsCfg_Service_NtWrapS_NvM_GetErrorStatus_StackPool
};

/*! Non-trusted function stacks array: NtWrapS_NvM_InvalidateNvBlock */
OS_LOCAL CONST(Os_ServiceStackConfigType, OS_CONST)
  OsCfg_Service_NtWrapS_NvM_InvalidateNvBlock_Stacks[OS_CFG_NUM_SERVICE_NTWRAPS_NVM_INVALIDATENVBLOCK_STACKS] =
{
  {
    /* .Stack     = */ &OsCfg_Stack_NtWrapS_NvM_InvalidateNvBlock0,
    /* .HwConfig  = */ &OsCfg_Hal_Stack_NtWrapS_NvM_InvalidateNvBlock0,
    /* .PoolIndex = */ 0
  }
};

/*! Non-trusted function stack pool configuration data: NtWrapS_NvM_InvalidateNvBlock */
OS_LOCAL CONST(Os_ServiceStackPoolConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_InvalidateNvBlock_StackPool =
{
  /* .Dyn             = */ &OsCfg_Service_NtWrapS_NvM_InvalidateNvBlock_StackPool_Dyn,
  /* .AvailabilityMap = */
  {
    /* .Dyn       = */ &OsCfg_Service_NtWrapS_NvM_InvalidateNvBlock_BitArray_Dyn,
    /* .Data      = */ OsCfg_Service_NtWrapS_NvM_InvalidateNvBlock_BitField_Dyn,
    /* .Size      = */ OS_BITARRAY_SIZE(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_INVALIDATENVBLOCK_STACKS),
    /* .BitLength = */ OS_BITARRAY_LENGTH(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_INVALIDATENVBLOCK_STACKS)
  },
  /* .Stacks          = */ OsCfg_Service_NtWrapS_NvM_InvalidateNvBlock_Stacks,
  /* .StackCount      = */ OS_CFG_NUM_SERVICE_NTWRAPS_NVM_INVALIDATENVBLOCK_STACKS,
  /* .AccessCounter   = */
  {
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_INVALIDATENVBLOCK_STACKS_APPL0,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_INVALIDATENVBLOCK_STACKS_APPL10,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_INVALIDATENVBLOCK_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0
  }
};

/*! Non-trusted function configuration data: NtWrapS_NvM_InvalidateNvBlock */
CONST(Os_ServiceNtfConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_InvalidateNvBlock =
{
  /* .Base      = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl10,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl10,
    /* .ServiceType      = */ OS_SERVICE_NONTRUSTEDFUNCTION
  },
  /* .Callback  = */ NONTRUSTED_NtWrapS_NvM_InvalidateNvBlock,
  /* .Context   = */ &OsCfg_Hal_Context_NtWrapS_NvM_InvalidateNvBlock,
  /* .StackPool = */ &OsCfg_Service_NtWrapS_NvM_InvalidateNvBlock_StackPool
};

/*! Non-trusted function stacks array: NtWrapS_NvM_ReadBlock */
OS_LOCAL CONST(Os_ServiceStackConfigType, OS_CONST)
  OsCfg_Service_NtWrapS_NvM_ReadBlock_Stacks[OS_CFG_NUM_SERVICE_NTWRAPS_NVM_READBLOCK_STACKS] =
{
  {
    /* .Stack     = */ &OsCfg_Stack_NtWrapS_NvM_ReadBlock0,
    /* .HwConfig  = */ &OsCfg_Hal_Stack_NtWrapS_NvM_ReadBlock0,
    /* .PoolIndex = */ 0
  }
};

/*! Non-trusted function stack pool configuration data: NtWrapS_NvM_ReadBlock */
OS_LOCAL CONST(Os_ServiceStackPoolConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_ReadBlock_StackPool =
{
  /* .Dyn             = */ &OsCfg_Service_NtWrapS_NvM_ReadBlock_StackPool_Dyn,
  /* .AvailabilityMap = */
  {
    /* .Dyn       = */ &OsCfg_Service_NtWrapS_NvM_ReadBlock_BitArray_Dyn,
    /* .Data      = */ OsCfg_Service_NtWrapS_NvM_ReadBlock_BitField_Dyn,
    /* .Size      = */ OS_BITARRAY_SIZE(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_READBLOCK_STACKS),
    /* .BitLength = */ OS_BITARRAY_LENGTH(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_READBLOCK_STACKS)
  },
  /* .Stacks          = */ OsCfg_Service_NtWrapS_NvM_ReadBlock_Stacks,
  /* .StackCount      = */ OS_CFG_NUM_SERVICE_NTWRAPS_NVM_READBLOCK_STACKS,
  /* .AccessCounter   = */
  {
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_READBLOCK_STACKS_APPL0,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_READBLOCK_STACKS_APPL10,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_READBLOCK_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0
  }
};

/*! Non-trusted function configuration data: NtWrapS_NvM_ReadBlock */
CONST(Os_ServiceNtfConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_ReadBlock =
{
  /* .Base      = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl10,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl10,
    /* .ServiceType      = */ OS_SERVICE_NONTRUSTEDFUNCTION
  },
  /* .Callback  = */ NONTRUSTED_NtWrapS_NvM_ReadBlock,
  /* .Context   = */ &OsCfg_Hal_Context_NtWrapS_NvM_ReadBlock,
  /* .StackPool = */ &OsCfg_Service_NtWrapS_NvM_ReadBlock_StackPool
};

/*! Non-trusted function stacks array: NtWrapS_NvM_SetBlockProtection */
OS_LOCAL CONST(Os_ServiceStackConfigType, OS_CONST)
  OsCfg_Service_NtWrapS_NvM_SetBlockProtection_Stacks[OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETBLOCKPROTECTION_STACKS] =
{
  {
    /* .Stack     = */ &OsCfg_Stack_NtWrapS_NvM_SetBlockProtection0,
    /* .HwConfig  = */ &OsCfg_Hal_Stack_NtWrapS_NvM_SetBlockProtection0,
    /* .PoolIndex = */ 0
  }
};

/*! Non-trusted function stack pool configuration data: NtWrapS_NvM_SetBlockProtection */
OS_LOCAL CONST(Os_ServiceStackPoolConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_SetBlockProtection_StackPool =
{
  /* .Dyn             = */ &OsCfg_Service_NtWrapS_NvM_SetBlockProtection_StackPool_Dyn,
  /* .AvailabilityMap = */
  {
    /* .Dyn       = */ &OsCfg_Service_NtWrapS_NvM_SetBlockProtection_BitArray_Dyn,
    /* .Data      = */ OsCfg_Service_NtWrapS_NvM_SetBlockProtection_BitField_Dyn,
    /* .Size      = */ OS_BITARRAY_SIZE(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETBLOCKPROTECTION_STACKS),
    /* .BitLength = */ OS_BITARRAY_LENGTH(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETBLOCKPROTECTION_STACKS)
  },
  /* .Stacks          = */ OsCfg_Service_NtWrapS_NvM_SetBlockProtection_Stacks,
  /* .StackCount      = */ OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETBLOCKPROTECTION_STACKS,
  /* .AccessCounter   = */
  {
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETBLOCKPROTECTION_STACKS_APPL0,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETBLOCKPROTECTION_STACKS_APPL10,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETBLOCKPROTECTION_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0
  }
};

/*! Non-trusted function configuration data: NtWrapS_NvM_SetBlockProtection */
CONST(Os_ServiceNtfConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_SetBlockProtection =
{
  /* .Base      = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl10,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl10,
    /* .ServiceType      = */ OS_SERVICE_NONTRUSTEDFUNCTION
  },
  /* .Callback  = */ NONTRUSTED_NtWrapS_NvM_SetBlockProtection,
  /* .Context   = */ &OsCfg_Hal_Context_NtWrapS_NvM_SetBlockProtection,
  /* .StackPool = */ &OsCfg_Service_NtWrapS_NvM_SetBlockProtection_StackPool
};

/*! Non-trusted function stacks array: NtWrapS_NvM_SetDataIndex */
OS_LOCAL CONST(Os_ServiceStackConfigType, OS_CONST)
  OsCfg_Service_NtWrapS_NvM_SetDataIndex_Stacks[OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETDATAINDEX_STACKS] =
{
  {
    /* .Stack     = */ &OsCfg_Stack_NtWrapS_NvM_SetDataIndex0,
    /* .HwConfig  = */ &OsCfg_Hal_Stack_NtWrapS_NvM_SetDataIndex0,
    /* .PoolIndex = */ 0
  }
};

/*! Non-trusted function stack pool configuration data: NtWrapS_NvM_SetDataIndex */
OS_LOCAL CONST(Os_ServiceStackPoolConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_SetDataIndex_StackPool =
{
  /* .Dyn             = */ &OsCfg_Service_NtWrapS_NvM_SetDataIndex_StackPool_Dyn,
  /* .AvailabilityMap = */
  {
    /* .Dyn       = */ &OsCfg_Service_NtWrapS_NvM_SetDataIndex_BitArray_Dyn,
    /* .Data      = */ OsCfg_Service_NtWrapS_NvM_SetDataIndex_BitField_Dyn,
    /* .Size      = */ OS_BITARRAY_SIZE(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETDATAINDEX_STACKS),
    /* .BitLength = */ OS_BITARRAY_LENGTH(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETDATAINDEX_STACKS)
  },
  /* .Stacks          = */ OsCfg_Service_NtWrapS_NvM_SetDataIndex_Stacks,
  /* .StackCount      = */ OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETDATAINDEX_STACKS,
  /* .AccessCounter   = */
  {
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETDATAINDEX_STACKS_APPL0,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETDATAINDEX_STACKS_APPL10,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETDATAINDEX_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0
  }
};

/*! Non-trusted function configuration data: NtWrapS_NvM_SetDataIndex */
CONST(Os_ServiceNtfConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_SetDataIndex =
{
  /* .Base      = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl10,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl10,
    /* .ServiceType      = */ OS_SERVICE_NONTRUSTEDFUNCTION
  },
  /* .Callback  = */ NONTRUSTED_NtWrapS_NvM_SetDataIndex,
  /* .Context   = */ &OsCfg_Hal_Context_NtWrapS_NvM_SetDataIndex,
  /* .StackPool = */ &OsCfg_Service_NtWrapS_NvM_SetDataIndex_StackPool
};

/*! Non-trusted function stacks array: NtWrapS_NvM_SetRamBlockStatus */
OS_LOCAL CONST(Os_ServiceStackConfigType, OS_CONST)
  OsCfg_Service_NtWrapS_NvM_SetRamBlockStatus_Stacks[OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETRAMBLOCKSTATUS_STACKS] =
{
  {
    /* .Stack     = */ &OsCfg_Stack_NtWrapS_NvM_SetRamBlockStatus0,
    /* .HwConfig  = */ &OsCfg_Hal_Stack_NtWrapS_NvM_SetRamBlockStatus0,
    /* .PoolIndex = */ 0
  }
};

/*! Non-trusted function stack pool configuration data: NtWrapS_NvM_SetRamBlockStatus */
OS_LOCAL CONST(Os_ServiceStackPoolConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_SetRamBlockStatus_StackPool =
{
  /* .Dyn             = */ &OsCfg_Service_NtWrapS_NvM_SetRamBlockStatus_StackPool_Dyn,
  /* .AvailabilityMap = */
  {
    /* .Dyn       = */ &OsCfg_Service_NtWrapS_NvM_SetRamBlockStatus_BitArray_Dyn,
    /* .Data      = */ OsCfg_Service_NtWrapS_NvM_SetRamBlockStatus_BitField_Dyn,
    /* .Size      = */ OS_BITARRAY_SIZE(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETRAMBLOCKSTATUS_STACKS),
    /* .BitLength = */ OS_BITARRAY_LENGTH(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETRAMBLOCKSTATUS_STACKS)
  },
  /* .Stacks          = */ OsCfg_Service_NtWrapS_NvM_SetRamBlockStatus_Stacks,
  /* .StackCount      = */ OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETRAMBLOCKSTATUS_STACKS,
  /* .AccessCounter   = */
  {
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETRAMBLOCKSTATUS_STACKS_APPL0,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETRAMBLOCKSTATUS_STACKS_APPL10,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETRAMBLOCKSTATUS_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0
  }
};

/*! Non-trusted function configuration data: NtWrapS_NvM_SetRamBlockStatus */
CONST(Os_ServiceNtfConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_SetRamBlockStatus =
{
  /* .Base      = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl10,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl10,
    /* .ServiceType      = */ OS_SERVICE_NONTRUSTEDFUNCTION
  },
  /* .Callback  = */ NONTRUSTED_NtWrapS_NvM_SetRamBlockStatus,
  /* .Context   = */ &OsCfg_Hal_Context_NtWrapS_NvM_SetRamBlockStatus,
  /* .StackPool = */ &OsCfg_Service_NtWrapS_NvM_SetRamBlockStatus_StackPool
};

/*! Non-trusted function stacks array: NtWrapS_NvM_WriteBlock */
OS_LOCAL CONST(Os_ServiceStackConfigType, OS_CONST)
  OsCfg_Service_NtWrapS_NvM_WriteBlock_Stacks[OS_CFG_NUM_SERVICE_NTWRAPS_NVM_WRITEBLOCK_STACKS] =
{
  {
    /* .Stack     = */ &OsCfg_Stack_NtWrapS_NvM_WriteBlock0,
    /* .HwConfig  = */ &OsCfg_Hal_Stack_NtWrapS_NvM_WriteBlock0,
    /* .PoolIndex = */ 0
  }
};

/*! Non-trusted function stack pool configuration data: NtWrapS_NvM_WriteBlock */
OS_LOCAL CONST(Os_ServiceStackPoolConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_WriteBlock_StackPool =
{
  /* .Dyn             = */ &OsCfg_Service_NtWrapS_NvM_WriteBlock_StackPool_Dyn,
  /* .AvailabilityMap = */
  {
    /* .Dyn       = */ &OsCfg_Service_NtWrapS_NvM_WriteBlock_BitArray_Dyn,
    /* .Data      = */ OsCfg_Service_NtWrapS_NvM_WriteBlock_BitField_Dyn,
    /* .Size      = */ OS_BITARRAY_SIZE(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_WRITEBLOCK_STACKS),
    /* .BitLength = */ OS_BITARRAY_LENGTH(OS_CFG_NUM_SERVICE_NTWRAPS_NVM_WRITEBLOCK_STACKS)
  },
  /* .Stacks          = */ OsCfg_Service_NtWrapS_NvM_WriteBlock_Stacks,
  /* .StackCount      = */ OS_CFG_NUM_SERVICE_NTWRAPS_NVM_WRITEBLOCK_STACKS,
  /* .AccessCounter   = */
  {
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_WRITEBLOCK_STACKS_APPL0,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_WRITEBLOCK_STACKS_APPL10,
    OS_CFG_NUM_SERVICE_NTWRAPS_NVM_WRITEBLOCK_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0
  }
};

/*! Non-trusted function configuration data: NtWrapS_NvM_WriteBlock */
CONST(Os_ServiceNtfConfigType, OS_CONST) OsCfg_Service_NtWrapS_NvM_WriteBlock =
{
  /* .Base      = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl10,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl10,
    /* .ServiceType      = */ OS_SERVICE_NONTRUSTEDFUNCTION
  },
  /* .Callback  = */ NONTRUSTED_NtWrapS_NvM_WriteBlock,
  /* .Context   = */ &OsCfg_Hal_Context_NtWrapS_NvM_WriteBlock,
  /* .StackPool = */ &OsCfg_Service_NtWrapS_NvM_WriteBlock_StackPool
};

/*! Non-trusted function stacks array: NtWrapS_Rte_Call_CopyCalPageReq_Oper */
OS_LOCAL CONST(Os_ServiceStackConfigType, OS_CONST)
  OsCfg_Service_NtWrapS_Rte_Call_CopyCalPageReq_Oper_Stacks[OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER_STACKS] =
{
  {
    /* .Stack     = */ &OsCfg_Stack_NtWrapS_Rte_Call_CopyCalPageReq_Oper0,
    /* .HwConfig  = */ &OsCfg_Hal_Stack_NtWrapS_Rte_Call_CopyCalPageReq_Oper0,
    /* .PoolIndex = */ 0
  }
};

/*! Non-trusted function stack pool configuration data: NtWrapS_Rte_Call_CopyCalPageReq_Oper */
OS_LOCAL CONST(Os_ServiceStackPoolConfigType, OS_CONST) OsCfg_Service_NtWrapS_Rte_Call_CopyCalPageReq_Oper_StackPool =
{
  /* .Dyn             = */ &OsCfg_Service_NtWrapS_Rte_Call_CopyCalPageReq_Oper_StackPool_Dyn,
  /* .AvailabilityMap = */
  {
    /* .Dyn       = */ &OsCfg_Service_NtWrapS_Rte_Call_CopyCalPageReq_Oper_BitArray_Dyn,
    /* .Data      = */ OsCfg_Service_NtWrapS_Rte_Call_CopyCalPageReq_Oper_BitField_Dyn,
    /* .Size      = */ OS_BITARRAY_SIZE(OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER_STACKS),
    /* .BitLength = */ OS_BITARRAY_LENGTH(OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER_STACKS)
  },
  /* .Stacks          = */ OsCfg_Service_NtWrapS_Rte_Call_CopyCalPageReq_Oper_Stacks,
  /* .StackCount      = */ OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER_STACKS,
  /* .AccessCounter   = */
  {
    OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER_STACKS_APPL0,
    OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER_STACKS_APPL10,
    OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0
  }
};

/*! Non-trusted function configuration data: NtWrapS_Rte_Call_CopyCalPageReq_Oper */
CONST(Os_ServiceNtfConfigType, OS_CONST) OsCfg_Service_NtWrapS_Rte_Call_CopyCalPageReq_Oper =
{
  /* .Base      = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl10,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl10,
    /* .ServiceType      = */ OS_SERVICE_NONTRUSTEDFUNCTION
  },
  /* .Callback  = */ NONTRUSTED_NtWrapS_Rte_Call_CopyCalPageReq_Oper,
  /* .Context   = */ &OsCfg_Hal_Context_NtWrapS_Rte_Call_CopyCalPageReq_Oper,
  /* .StackPool = */ &OsCfg_Service_NtWrapS_Rte_Call_CopyCalPageReq_Oper_StackPool
};

/*! Non-trusted function stacks array: NtWrapS_Rte_Call_SetCalPageReq_Oper */
OS_LOCAL CONST(Os_ServiceStackConfigType, OS_CONST)
  OsCfg_Service_NtWrapS_Rte_Call_SetCalPageReq_Oper_Stacks[OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER_STACKS] =
{
  {
    /* .Stack     = */ &OsCfg_Stack_NtWrapS_Rte_Call_SetCalPageReq_Oper0,
    /* .HwConfig  = */ &OsCfg_Hal_Stack_NtWrapS_Rte_Call_SetCalPageReq_Oper0,
    /* .PoolIndex = */ 0
  }
};

/*! Non-trusted function stack pool configuration data: NtWrapS_Rte_Call_SetCalPageReq_Oper */
OS_LOCAL CONST(Os_ServiceStackPoolConfigType, OS_CONST) OsCfg_Service_NtWrapS_Rte_Call_SetCalPageReq_Oper_StackPool =
{
  /* .Dyn             = */ &OsCfg_Service_NtWrapS_Rte_Call_SetCalPageReq_Oper_StackPool_Dyn,
  /* .AvailabilityMap = */
  {
    /* .Dyn       = */ &OsCfg_Service_NtWrapS_Rte_Call_SetCalPageReq_Oper_BitArray_Dyn,
    /* .Data      = */ OsCfg_Service_NtWrapS_Rte_Call_SetCalPageReq_Oper_BitField_Dyn,
    /* .Size      = */ OS_BITARRAY_SIZE(OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER_STACKS),
    /* .BitLength = */ OS_BITARRAY_LENGTH(OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER_STACKS)
  },
  /* .Stacks          = */ OsCfg_Service_NtWrapS_Rte_Call_SetCalPageReq_Oper_Stacks,
  /* .StackCount      = */ OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER_STACKS,
  /* .AccessCounter   = */
  {
    OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER_STACKS_APPL0,
    OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER_STACKS_APPL10,
    OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0
  }
};

/*! Non-trusted function configuration data: NtWrapS_Rte_Call_SetCalPageReq_Oper */
CONST(Os_ServiceNtfConfigType, OS_CONST) OsCfg_Service_NtWrapS_Rte_Call_SetCalPageReq_Oper =
{
  /* .Base      = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl10,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl10,
    /* .ServiceType      = */ OS_SERVICE_NONTRUSTEDFUNCTION
  },
  /* .Callback  = */ NONTRUSTED_NtWrapS_Rte_Call_SetCalPageReq_Oper,
  /* .Context   = */ &OsCfg_Hal_Context_NtWrapS_Rte_Call_SetCalPageReq_Oper,
  /* .StackPool = */ &OsCfg_Service_NtWrapS_Rte_Call_SetCalPageReq_Oper_StackPool
};

/*! Non-trusted function stacks array: NtWrapS_SyncCrc_GetAvlCrcHwUnit */
OS_LOCAL CONST(Os_ServiceStackConfigType, OS_CONST)
  OsCfg_Service_NtWrapS_SyncCrc_GetAvlCrcHwUnit_Stacks[OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT_STACKS] =
{
  {
    /* .Stack     = */ &OsCfg_Stack_NtWrapS_SyncCrc_GetAvlCrcHwUnit0,
    /* .HwConfig  = */ &OsCfg_Hal_Stack_NtWrapS_SyncCrc_GetAvlCrcHwUnit0,
    /* .PoolIndex = */ 0
  }
};

/*! Non-trusted function stack pool configuration data: NtWrapS_SyncCrc_GetAvlCrcHwUnit */
OS_LOCAL CONST(Os_ServiceStackPoolConfigType, OS_CONST) OsCfg_Service_NtWrapS_SyncCrc_GetAvlCrcHwUnit_StackPool =
{
  /* .Dyn             = */ &OsCfg_Service_NtWrapS_SyncCrc_GetAvlCrcHwUnit_StackPool_Dyn,
  /* .AvailabilityMap = */
  {
    /* .Dyn       = */ &OsCfg_Service_NtWrapS_SyncCrc_GetAvlCrcHwUnit_BitArray_Dyn,
    /* .Data      = */ OsCfg_Service_NtWrapS_SyncCrc_GetAvlCrcHwUnit_BitField_Dyn,
    /* .Size      = */ OS_BITARRAY_SIZE(OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT_STACKS),
    /* .BitLength = */ OS_BITARRAY_LENGTH(OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT_STACKS)
  },
  /* .Stacks          = */ OsCfg_Service_NtWrapS_SyncCrc_GetAvlCrcHwUnit_Stacks,
  /* .StackCount      = */ OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT_STACKS,
  /* .AccessCounter   = */
  {
    OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT_STACKS_APPL0,
    OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT_STACKS_APPL10,
    OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0
  }
};

/*! Non-trusted function configuration data: NtWrapS_SyncCrc_GetAvlCrcHwUnit */
CONST(Os_ServiceNtfConfigType, OS_CONST) OsCfg_Service_NtWrapS_SyncCrc_GetAvlCrcHwUnit =
{
  /* .Base      = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl10,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl10,
    /* .ServiceType      = */ OS_SERVICE_NONTRUSTEDFUNCTION
  },
  /* .Callback  = */ NONTRUSTED_NtWrapS_SyncCrc_GetAvlCrcHwUnit,
  /* .Context   = */ &OsCfg_Hal_Context_NtWrapS_SyncCrc_GetAvlCrcHwUnit,
  /* .StackPool = */ &OsCfg_Service_NtWrapS_SyncCrc_GetAvlCrcHwUnit_StackPool
};

/*! Non-trusted function stacks array: NtWrapS_SyncCrc_RelsCrcHwUnit */
OS_LOCAL CONST(Os_ServiceStackConfigType, OS_CONST)
  OsCfg_Service_NtWrapS_SyncCrc_RelsCrcHwUnit_Stacks[OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_RELSCRCHWUNIT_STACKS] =
{
  {
    /* .Stack     = */ &OsCfg_Stack_NtWrapS_SyncCrc_RelsCrcHwUnit0,
    /* .HwConfig  = */ &OsCfg_Hal_Stack_NtWrapS_SyncCrc_RelsCrcHwUnit0,
    /* .PoolIndex = */ 0
  }
};

/*! Non-trusted function stack pool configuration data: NtWrapS_SyncCrc_RelsCrcHwUnit */
OS_LOCAL CONST(Os_ServiceStackPoolConfigType, OS_CONST) OsCfg_Service_NtWrapS_SyncCrc_RelsCrcHwUnit_StackPool =
{
  /* .Dyn             = */ &OsCfg_Service_NtWrapS_SyncCrc_RelsCrcHwUnit_StackPool_Dyn,
  /* .AvailabilityMap = */
  {
    /* .Dyn       = */ &OsCfg_Service_NtWrapS_SyncCrc_RelsCrcHwUnit_BitArray_Dyn,
    /* .Data      = */ OsCfg_Service_NtWrapS_SyncCrc_RelsCrcHwUnit_BitField_Dyn,
    /* .Size      = */ OS_BITARRAY_SIZE(OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_RELSCRCHWUNIT_STACKS),
    /* .BitLength = */ OS_BITARRAY_LENGTH(OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_RELSCRCHWUNIT_STACKS)
  },
  /* .Stacks          = */ OsCfg_Service_NtWrapS_SyncCrc_RelsCrcHwUnit_Stacks,
  /* .StackCount      = */ OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_RELSCRCHWUNIT_STACKS,
  /* .AccessCounter   = */
  {
    OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_RELSCRCHWUNIT_STACKS_APPL0,
    OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_RELSCRCHWUNIT_STACKS_APPL10,
    OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_RELSCRCHWUNIT_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0
  }
};

/*! Non-trusted function configuration data: NtWrapS_SyncCrc_RelsCrcHwUnit */
CONST(Os_ServiceNtfConfigType, OS_CONST) OsCfg_Service_NtWrapS_SyncCrc_RelsCrcHwUnit =
{
  /* .Base      = */
  {
    /* .OwnerApplication = */ &OsCfg_App_Appl10,
    /* .MpAccessRights   = */ &OsCfg_Mp_Appl10,
    /* .ServiceType      = */ OS_SERVICE_NONTRUSTEDFUNCTION
  },
  /* .Callback  = */ NONTRUSTED_NtWrapS_SyncCrc_RelsCrcHwUnit,
  /* .Context   = */ &OsCfg_Hal_Context_NtWrapS_SyncCrc_RelsCrcHwUnit,
  /* .StackPool = */ &OsCfg_Service_NtWrapS_SyncCrc_RelsCrcHwUnit_StackPool
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for trusted functions. */
CONSTP2CONST(Os_ServiceTfConfigType, OS_CONST, OS_CONST)
  OsCfg_TrustedFunctionRefs[OS_TRUSTEDFUNCTIONID_COUNT + 1] =
{
  &OsCfg_Service_Adcf0OutpInin,
  &OsCfg_Service_ApplXcpWrCmn,
  &OsCfg_Service_CritRegInitChk,
  &OsCfg_Service_CritRegPerChk,
  &OsCfg_Service_DmaRegInin,
  &OsCfg_Service_DtsClnUp,
  &OsCfg_Service_DtsInin,
  &OsCfg_Service_Fls_MainFunction,
  &OsCfg_Service_IpgInin,
  &OsCfg_Service_NvM_MainFunction,
  &OsCfg_Service_Spi_AsyncTransmit,
  &OsCfg_Service_Trusted_EcuM_ShutdownOS,
  &OsCfg_Service_Uart0CfgAndUseInin,
  &OsCfg_Service_Uart1CfgAndUseInin,
  NULL_PTR
};

/*! Object reference table for non-trusted functions. */
CONSTP2CONST(Os_ServiceNtfConfigType, OS_CONST, OS_CONST)
  OsCfg_NonTrustedFunctionRefs[OS_NONTRUSTEDFUNCTIONID_COUNT + 1] =
{
  &OsCfg_Service_NtWrapS_CmnMfgSrv_CallSvc10,
  &OsCfg_Service_NtWrapS_NvM_EraseNvBlock,
  &OsCfg_Service_NtWrapS_NvM_GetDataIndex,
  &OsCfg_Service_NtWrapS_NvM_GetErrorStatus,
  &OsCfg_Service_NtWrapS_NvM_InvalidateNvBlock,
  &OsCfg_Service_NtWrapS_NvM_ReadBlock,
  &OsCfg_Service_NtWrapS_NvM_SetBlockProtection,
  &OsCfg_Service_NtWrapS_NvM_SetDataIndex,
  &OsCfg_Service_NtWrapS_NvM_SetRamBlockStatus,
  &OsCfg_Service_NtWrapS_NvM_WriteBlock,
  &OsCfg_Service_NtWrapS_Rte_Call_CopyCalPageReq_Oper,
  &OsCfg_Service_NtWrapS_Rte_Call_SetCalPageReq_Oper,
  &OsCfg_Service_NtWrapS_SyncCrc_GetAvlCrcHwUnit,
  &OsCfg_Service_NtWrapS_SyncCrc_RelsCrcHwUnit,
  NULL_PTR
};

#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

#define OS_START_SEC_CODE
#include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_Adcf0OutpInin
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_Adcf0OutpInin
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
)
{
  Adcf0OutpInin();

  OS_IGNORE_UNREF_PARAM(FunctionParams);                                             /* PRQA S 3112 */ /* MD_Os_3112 */
  OS_IGNORE_UNREF_PARAM(FunctionIndex);                                              /* PRQA S 3112 */ /* MD_Os_3112 */
}

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_ApplXcpWrCmn
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_ApplXcpWrCmn
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
)
{
  P2VAR(Os_ApplXcpWrCmnPackageType, AUTOMATIC, OS_VAR_NOINIT) package;
  package = (P2VAR(Os_ApplXcpWrCmnPackageType, AUTOMATIC, OS_VAR_NOINIT)) FunctionParams;

  ApplXcpWrCmn
  (
    package->Arg1,
    package->Arg2,
    package->Arg3
  );

  OS_IGNORE_UNREF_PARAM(FunctionIndex);                                              /* PRQA S 3112 */ /* MD_Os_3112 */
}

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_CritRegInitChk
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_CritRegInitChk
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
)
{
  P2VAR(Os_CritRegInitChkPackageType, AUTOMATIC, OS_VAR_NOINIT) package;
  package = (P2VAR(Os_CritRegInitChkPackageType, AUTOMATIC, OS_VAR_NOINIT)) FunctionParams;

  package->Returnvalue = CritRegInitChk
  (
  );

  OS_IGNORE_UNREF_PARAM(FunctionIndex);                                              /* PRQA S 3112 */ /* MD_Os_3112 */
}

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_CritRegPerChk
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_CritRegPerChk
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
)
{
  P2VAR(Os_CritRegPerChkPackageType, AUTOMATIC, OS_VAR_NOINIT) package;
  package = (P2VAR(Os_CritRegPerChkPackageType, AUTOMATIC, OS_VAR_NOINIT)) FunctionParams;

  package->Returnvalue = CritRegPerChk
  (
  );

  OS_IGNORE_UNREF_PARAM(FunctionIndex);                                              /* PRQA S 3112 */ /* MD_Os_3112 */
}

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_DmaRegInin
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_DmaRegInin
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
)
{
  DmaRegInin();

  OS_IGNORE_UNREF_PARAM(FunctionParams);                                             /* PRQA S 3112 */ /* MD_Os_3112 */
  OS_IGNORE_UNREF_PARAM(FunctionIndex);                                              /* PRQA S 3112 */ /* MD_Os_3112 */
}

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_DtsClnUp
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_DtsClnUp
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
)
{
  DtsClnUp();

  OS_IGNORE_UNREF_PARAM(FunctionParams);                                             /* PRQA S 3112 */ /* MD_Os_3112 */
  OS_IGNORE_UNREF_PARAM(FunctionIndex);                                              /* PRQA S 3112 */ /* MD_Os_3112 */
}

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_DtsInin
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_DtsInin
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
)
{
  P2VAR(Os_DtsIninPackageType, AUTOMATIC, OS_VAR_NOINIT) package;
  package = (P2VAR(Os_DtsIninPackageType, AUTOMATIC, OS_VAR_NOINIT)) FunctionParams;

  DtsInin
  (
    package->Arg1,
    package->Arg2
  );

  OS_IGNORE_UNREF_PARAM(FunctionIndex);                                              /* PRQA S 3112 */ /* MD_Os_3112 */
}

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_Fls_MainFunction
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_Fls_MainFunction
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
)
{
  Fls_MainFunction();

  OS_IGNORE_UNREF_PARAM(FunctionParams);                                             /* PRQA S 3112 */ /* MD_Os_3112 */
  OS_IGNORE_UNREF_PARAM(FunctionIndex);                                              /* PRQA S 3112 */ /* MD_Os_3112 */
}

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_IpgInin
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_IpgInin
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
)
{
  IpgInin();

  OS_IGNORE_UNREF_PARAM(FunctionParams);                                             /* PRQA S 3112 */ /* MD_Os_3112 */
  OS_IGNORE_UNREF_PARAM(FunctionIndex);                                              /* PRQA S 3112 */ /* MD_Os_3112 */
}

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_NvM_MainFunction
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_NvM_MainFunction
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
)
{
  NvM_MainFunction();

  OS_IGNORE_UNREF_PARAM(FunctionParams);                                             /* PRQA S 3112 */ /* MD_Os_3112 */
  OS_IGNORE_UNREF_PARAM(FunctionIndex);                                              /* PRQA S 3112 */ /* MD_Os_3112 */
}

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_Spi_AsyncTransmit
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_Spi_AsyncTransmit
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
)
{
  P2VAR(Os_Spi_AsyncTransmitPackageType, AUTOMATIC, OS_VAR_NOINIT) package;
  package = (P2VAR(Os_Spi_AsyncTransmitPackageType, AUTOMATIC, OS_VAR_NOINIT)) FunctionParams;

  package->Returnvalue = Spi_AsyncTransmit
  (
    package->Arg1
  );

  OS_IGNORE_UNREF_PARAM(FunctionIndex);                                              /* PRQA S 3112 */ /* MD_Os_3112 */
}

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_Trusted_EcuM_ShutdownOS
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_Trusted_EcuM_ShutdownOS
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
)
{
  P2VAR(Os_Trusted_EcuM_ShutdownOSPackageType, AUTOMATIC, OS_VAR_NOINIT) package;
  package = (P2VAR(Os_Trusted_EcuM_ShutdownOSPackageType, AUTOMATIC, OS_VAR_NOINIT)) FunctionParams;

  Trusted_EcuM_ShutdownOS
  (
    package->Arg1
  );

  OS_IGNORE_UNREF_PARAM(FunctionIndex);                                              /* PRQA S 3112 */ /* MD_Os_3112 */
}

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_Uart0CfgAndUseInin
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_Uart0CfgAndUseInin
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
)
{
  Uart0CfgAndUseInin();

  OS_IGNORE_UNREF_PARAM(FunctionParams);                                             /* PRQA S 3112 */ /* MD_Os_3112 */
  OS_IGNORE_UNREF_PARAM(FunctionIndex);                                              /* PRQA S 3112 */ /* MD_Os_3112 */
}

/**********************************************************************************************************************
 *  TRUSTED_Os_ServiceCallee_Uart1CfgAndUseInin
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) TRUSTED_Os_ServiceCallee_Uart1CfgAndUseInin
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams                     /* PRQA S 3673 */ /* MD_Os_3673_FunctionPointer */
)
{
  Uart1CfgAndUseInin();

  OS_IGNORE_UNREF_PARAM(FunctionParams);                                             /* PRQA S 3112 */ /* MD_Os_3112 */
  OS_IGNORE_UNREF_PARAM(FunctionIndex);                                              /* PRQA S 3112 */ /* MD_Os_3112 */
}


/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  Os_Call_Adcf0OutpInin
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_Adcf0OutpInin
(
  void
)
{
  (void)CallTrustedFunction(Os_ServiceCallee_Adcf0OutpInin, NULL_PTR);
}

/**********************************************************************************************************************
 *  Os_Call_ApplXcpWrCmn
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_ApplXcpWrCmn
(
  MTABYTEPTR Arg1,
  vuint8 Arg2,
  const BYTEPTR Arg3
)
{
  Os_ApplXcpWrCmnPackageType package;
  package.Arg1 = Arg1;
  package.Arg2 = Arg2;
  package.Arg3 = Arg3;

  (void)CallTrustedFunction(Os_ServiceCallee_ApplXcpWrCmn, (TrustedFunctionParameterRefType)&package);

}

/**********************************************************************************************************************
 *  Os_Call_CritRegInitChk
 *********************************************************************************************************************/
FUNC(uint8, OS_CODE) Os_Call_CritRegInitChk
(
  void
)
{
  Os_CritRegInitChkPackageType package;

  (void)CallTrustedFunction(Os_ServiceCallee_CritRegInitChk, (TrustedFunctionParameterRefType)&package);


  return package.Returnvalue;
}

/**********************************************************************************************************************
 *  Os_Call_CritRegPerChk
 *********************************************************************************************************************/
FUNC(uint8, OS_CODE) Os_Call_CritRegPerChk
(
  void
)
{
  Os_CritRegPerChkPackageType package;

  (void)CallTrustedFunction(Os_ServiceCallee_CritRegPerChk, (TrustedFunctionParameterRefType)&package);


  return package.Returnvalue;
}

/**********************************************************************************************************************
 *  Os_Call_DmaRegInin
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_DmaRegInin
(
  void
)
{
  (void)CallTrustedFunction(Os_ServiceCallee_DmaRegInin, NULL_PTR);
}

/**********************************************************************************************************************
 *  Os_Call_DtsClnUp
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_DtsClnUp
(
  void
)
{
  (void)CallTrustedFunction(Os_ServiceCallee_DtsClnUp, NULL_PTR);
}

/**********************************************************************************************************************
 *  Os_Call_DtsInin
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_DtsInin
(
  uint32 Arg1,
  uint32 Arg2
)
{
  Os_DtsIninPackageType package;
  package.Arg1 = Arg1;
  package.Arg2 = Arg2;

  (void)CallTrustedFunction(Os_ServiceCallee_DtsInin, (TrustedFunctionParameterRefType)&package);

}

/**********************************************************************************************************************
 *  Os_Call_Fls_MainFunction
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_Fls_MainFunction
(
  void
)
{
  (void)CallTrustedFunction(Os_ServiceCallee_Fls_MainFunction, NULL_PTR);
}

/**********************************************************************************************************************
 *  Os_Call_IpgInin
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_IpgInin
(
  void
)
{
  (void)CallTrustedFunction(Os_ServiceCallee_IpgInin, NULL_PTR);
}

/**********************************************************************************************************************
 *  Os_Call_NvM_MainFunction
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_NvM_MainFunction
(
  void
)
{
  (void)CallTrustedFunction(Os_ServiceCallee_NvM_MainFunction, NULL_PTR);
}

/**********************************************************************************************************************
 *  Os_Call_Spi_AsyncTransmit
 *********************************************************************************************************************/
FUNC(Std_ReturnType, OS_CODE) Os_Call_Spi_AsyncTransmit
(
  Spi_SequenceType Arg1
)
{
  Os_Spi_AsyncTransmitPackageType package;
  package.Arg1 = Arg1;

  (void)CallTrustedFunction(Os_ServiceCallee_Spi_AsyncTransmit, (TrustedFunctionParameterRefType)&package);


  return package.Returnvalue;
}

/**********************************************************************************************************************
 *  Os_Call_Trusted_EcuM_ShutdownOS
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_Trusted_EcuM_ShutdownOS
(
  Std_ReturnType Arg1
)
{
  Os_Trusted_EcuM_ShutdownOSPackageType package;
  package.Arg1 = Arg1;

  (void)CallTrustedFunction(Os_ServiceCallee_Trusted_EcuM_ShutdownOS, (TrustedFunctionParameterRefType)&package);

}

/**********************************************************************************************************************
 *  Os_Call_Uart0CfgAndUseInin
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_Uart0CfgAndUseInin
(
  void
)
{
  (void)CallTrustedFunction(Os_ServiceCallee_Uart0CfgAndUseInin, NULL_PTR);
}

/**********************************************************************************************************************
 *  Os_Call_Uart1CfgAndUseInin
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_Uart1CfgAndUseInin
(
  void
)
{
  (void)CallTrustedFunction(Os_ServiceCallee_Uart1CfgAndUseInin, NULL_PTR);
}

#define OS_STOP_SEC_CODE
#include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  END OF FILE: Os_ServiceFunction_Lcfg.c
 *********************************************************************************************************************/
