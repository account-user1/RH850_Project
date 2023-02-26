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
 *            Module: NvM
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: NvM_Cfg.c
 *   Generation Time: 2018-05-01 18:12:18
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


    
/**********************************************************************************************************************
 *  MODULE SWITCH
 *********************************************************************************************************************/
/* this switch enables the header file(s) to hide some parts. */
#define NVM_CONFIGURATION

/* multiple inclusion protection */
#define NVM_H_

/* PRQA S 5087 inclusions *//* MD_MSR_19.1 */

/* Define RTE_MICROSAR_PIM_EXPORT is necessary only when serviceports are used */
#define RTE_MICROSAR_PIM_EXPORT  


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/* This tag will only be replaced, if one or more callbacks via Service Ports had been configured */


/**********************************************************************************************************************
 *  MODULE HEADER INCLUDES
 *********************************************************************************************************************/
/* only includes the public part of config */
#include "NvM_Cfg.h"
#include "NvM_PrivateCfg.h"



/**********************************************************************************************************************
 *  VERSION CHECKS
 *********************************************************************************************************************/
#if ((NVM_CFG_MAJOR_VERSION != (5u)) \
        || (NVM_CFG_MINOR_VERSION != (5u)))
# error "Version numbers of NvM_Cfg.c and NvM_Cfg.h are inconsistent!"
#endif

#if ((NVM_PRIV_CFG_MAJOR_VERSION != NVM_CFG_MAJOR_VERSION) \
        || (NVM_PRIV_CFG_MINOR_VERSION != NVM_CFG_MINOR_VERSION))
# error "Version numbers of NvM_Cfg.c and Nvm_PrivateCfg.h.h are inconsistent!"
#endif

#if ((NVM_TYPES_MAJOR_VERSION != NVM_CFG_MAJOR_VERSION) \
        || (NVM_TYPES_MINOR_VERSION != NVM_CFG_MINOR_VERSION))
# error "Version numbers of NvM_Cfg.c and NvM_Types.h are inconsistent!"
#endif

/* include list of the callback definitions */
#include "Dem_Cbk.h" 
#include "CDD_NvMProxy_Cbk.h" 
#include "CDD_NvMProxyDftDataGroup.h" 
#include "DiagcMgr.h" 


/* include configured file declaring or defining resource (un)locking service(s) */
#include "SchM_NvM.h"

#define NVM_SIZE_STANDARD_JOB_QUEUE  (8U) 
#define NVM_SIZE_IMMEDIATE_JOB_QUEUE (0U) 


/**********************************************************************************************************************
 *  PUBLIC CONSTANTS
 *********************************************************************************************************************/

#define NVM_START_SEC_CONST_8
#include "MemMap.h"

/* Number of write attempts: 1 + number of retries */
CONST(uint8, NVM_PRIVATE_CONST) NvM_NoOfWrAttempts_u8 = 1U;

#define NVM_STOP_SEC_CONST_8
#include "MemMap.h"

#define NVM_START_SEC_CONST_16
#include "MemMap.h"

/* maximum number of bytes to be processed in one crc calculation step */
CONST(uint16, NVM_CONFIG_CONST) NvM_NoOfCrcBytes_u16 = 64U;

/* constant holding Crc quueue size value */
CONST(uint16, NVM_PRIVATE_CONST) NvM_CrcQueueSize_u16 = NVM_TOTAL_NUM_OF_NVRAM_BLOCKS;

#define NVM_STOP_SEC_CONST_16
#include "MemMap.h"

/* close section, to ensure unique section ends */
#define NVM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

/* constants holding the compiled queue size values */
CONST(NvM_QueueSizesType, NVM_PRIVATE_CONST) NvM_QueueSizes_t =
{
    /* MISRA wants to define a operator precedence with parentheses */
    (NVM_SIZE_STANDARD_JOB_QUEUE + NVM_SIZE_IMMEDIATE_JOB_QUEUE) - 1u,
    NVM_SIZE_STANDARD_JOB_QUEUE
};

/* Constants, holding the two DEM error codes, defined by DEM */

CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrReqFailed = DemConf_DemEventParameter_NVM_E_REQ_FAILED; 
CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrIntegrityFailed = DemConf_DemEventParameter_NVM_E_INTEGRITY_FAILED; 
CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrLossOfRedundancy = DemConf_DemEventParameter_NVM_E_LOSS_OF_REDUNDANCY; 
CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrQueueOverflow = DemConf_DemEventParameter_NVM_E_QUEUE_OVERFLOW; 
CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrWriteProtected = DemConf_DemEventParameter_NVM_E_WRITE_PROTECTED; 


/* close section, to ensure unique section ends */
#define NVM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

/* 8Bit Data section containing the CRC buffers, as well as the internal buffer */
#define NVM_START_SEC_VAR_NOINIT_8
#include "MemMap.h"

static VAR(uint8, NVM_PRIVATE_DATA) NvMConfigBlock_RamBlock_au8[4U];

#if ((NVM_CRC_INT_BUFFER == STD_ON) || (NVM_REPAIR_REDUNDANT_BLOCKS_API == STD_ON))
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_LaneAssi_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_PullDriftCmp_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_StackMeas_StackMeasRes_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_StackMeas_StackMeasApplCrc_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE21_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_Did630F_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE22_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE23_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_Did630FChk_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidF190_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE87_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidF110_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidF163_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidF18C_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_Did205B_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE00_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidDE05_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE40_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidF18A_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE84_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidF15F_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidF166_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidF162_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE82_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE86_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE88_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE85_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_Did205A_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE81_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_Did301A_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE41_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE83_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEED0_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_FordHwAgArbn_PrevIgnCycVal_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_FordHwAgArbn_NonAbsOffsVldFlg_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_FordHwAgArbn_NonAbsOffs_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_FordVehSpdArbn_FordVehTireCircum_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidDE04_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidDE02_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_Did3003_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidDE01_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE01_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidDE03_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidDE00_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidF113_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidEE02_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CustDiag_DidF111_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_HwTq9Meas_HwTq9Offs_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_HwTq10Meas_HwTq10Offs_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_TEstimn_TFilStVal_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_HwTq8Meas_HwTq8Offs_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_DiRestore_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_SeedKey_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_IgnCntr_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CmnMfgSrv_CcaSerlNr_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_MotTqCmdSca_MotTqScaFac_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_DutyCycThermProtn_FilStVal_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_MotCtrlPrmEstimn_MotPrmNom_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_MotAg5Meas_MotAg5EolPrm_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_MotAg6Meas_MotAg6StVari_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_MotAg6Meas_MotAg6EolPrm_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_MotAg5Meas_MotAg5StVari_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_HwAg1Meas_HwAg1IfFltLtch_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_HwAg1Meas_HwAg1Offs_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_VrfyCritReg_MCalReadVrfyCritRegFltNvmInfo_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_SysFricLrng_FricNonLrngData_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_SysFricLrng_FricLrngData_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_EotLrng_EotNvmData_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_HwAgSnsrls_StordLstPrm_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSetABC_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSetABC_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_PolarityCfg_PolarityCfgSaved_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) SnpshtDataAry_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_DiagcMgr_DiagcMgrApplCrc_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_DiagcMgr_DiagcMgrLtchCntrAry_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) Rte_NvmBlock_CDD_NvMProxy_ShtdwnClsChk_Crc_au8[2UL]; 


/* create the internal buffer of size NVM_INTERNAL_BUFFER_LENGTH */
VAR(uint8, NVM_PRIVATE_DATA) NvM_InternalBuffer_au8[NVM_INTERNAL_BUFFER_LENGTH];
#endif

/* create a test buffer of size 1 byte for testing readability of a block */
VAR(uint8, NVM_PRIVATE_DATA) NvM_TestBuffer_u8;

#define NVM_STOP_SEC_VAR_NOINIT_8
#include "MemMap.h"

#define NVM_START_SEC_CONST_DESCRIPTOR_TABLE
#include "MemMap.h"

CONST(NvM_BlockIdType, NVM_PUBLIC_CONST) NvM_NoOfBlockIds_t = NVM_TOTAL_NUM_OF_NVRAM_BLOCKS;

/* PRQA S 0759 1 */ /* MD_MSR_18.4 */
CONST(NvM_CompiledConfigIdType, NVM_PUBLIC_CONST) NvM_CompiledConfigId_t = {(uint16)NVM_COMPILED_CONFIG_ID};
 
/* block descriptor table that holds the static configuration parameters of the RAM, ROM and NVBlocks.
* This table has to be adjusted according to the configuration of the NVManager.
*/
     
/* PRQA S 0310 RamRomBlocks *//* MD_NvM_11.4 */
CONST(NvM_BlockDescriptorType, NVM_CONFIG_CONST) NvM_BlockDescriptorTable_at[NVM_TOTAL_NUM_OF_NVRAM_BLOCKS] =
    {
      { /*  MultiBlockRequest  */ 
        NULL_PTR /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0001U /*  NV block Base number (defined by FEE/EA)  */ , 
        0 /*  Length of the block in bytes  */ , 
        0U /*  Number of multiple blocks  */ , 
        255U /*  Block Priority  */ , 
        0u /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        0u /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  NvMConfigBlock  */ 
        (NvM_RamAddressType)NvMConfigBlock_RamBlock_au8 /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0002U /*  NV block Base number (defined by FEE/EA)  */ , 
        2U /*  Length of the block in bytes  */ , 
        2U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_REDUNDANT /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_OFF |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemAdminDataBlock  */ 
        (NvM_RamAddressType)&Dem_Cfg_AdminData /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        Dem_NvM_InitAdminData /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0004U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_LaneAssi  */ 
        (NvM_RamAddressType)&Rte_CDD_FordBlaBoxIfCmp1_LaneAssi /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP.LaneAssiDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_LaneAssi_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x011CU /*  NV block Base number (defined by FEE/EA)  */ , 
        256U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl  */ 
        (NvM_RamAddressType)&Rte_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP.ActvNiblCtrlDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x011EU /*  NV block Base number (defined by FEE/EA)  */ , 
        128U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi  */ 
        (NvM_RamAddressType)&Rte_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP.TrlrBackupAssiDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0120U /*  NV block Base number (defined by FEE/EA)  */ , 
        512U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_PullDriftCmp  */ 
        (NvM_RamAddressType)&Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmp /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP.PullDriftCmpDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_PullDriftCmp_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0122U /*  NV block Base number (defined by FEE/EA)  */ , 
        128U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_StackMeas_StackMeasRes  */ 
        (NvM_RamAddressType)&Rte_StackMeas_StackMeasRes /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_StackMeas_DEFAULT_RTE_CDATA_GROUP.StackMeasResDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_StackMeas_StackMeasRes_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0118U /*  NV block Base number (defined by FEE/EA)  */ , 
        48U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_StackMeas_StackMeasApplCrc  */ 
        (NvM_RamAddressType)&Rte_StackMeas_StackMeasApplCrc /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_StackMeas_StackMeasApplCrc_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x011AU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE21  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE21 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE21Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE21_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x010CU /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_Did630F  */ 
        (NvM_RamAddressType)&Rte_CustDiag_Did630F /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.Did630FDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_Did630F_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x010EU /*  NV block Base number (defined by FEE/EA)  */ , 
        24U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE22  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE22 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE22Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE22_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0110U /*  NV block Base number (defined by FEE/EA)  */ , 
        40U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE23  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE23 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE23Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE23_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0112U /*  NV block Base number (defined by FEE/EA)  */ , 
        40U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_Did630FChk  */ 
        (NvM_RamAddressType)&Rte_CustDiag_Did630FChk /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.Did630FChkDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_Did630FChk_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0114U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidF190  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidF190 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF190Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidF190_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0116U /*  NV block Base number (defined by FEE/EA)  */ , 
        24U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE87  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE87 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE87Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE87_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00DEU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidF110  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidF110 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF110Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidF110_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00E0U /*  NV block Base number (defined by FEE/EA)  */ , 
        24U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidF163  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidF163 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF163Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidF163_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00E2U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidF18C  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidF18C /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF18CDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidF18C_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00E4U /*  NV block Base number (defined by FEE/EA)  */ , 
        16U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_Did205B  */ 
        (NvM_RamAddressType)&Rte_CustDiag_Did205B /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.Did205BDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_Did205B_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00E6U /*  NV block Base number (defined by FEE/EA)  */ , 
        2U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE00  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE00 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE00Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE00_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00E8U /*  NV block Base number (defined by FEE/EA)  */ , 
        3U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidDE05  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidDE05 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidDE05Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidDE05_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00EAU /*  NV block Base number (defined by FEE/EA)  */ , 
        24U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE40  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE40 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE40Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE40_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00ECU /*  NV block Base number (defined by FEE/EA)  */ , 
        3U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidF18A  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidF18A /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF18ADft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidF18A_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00EEU /*  NV block Base number (defined by FEE/EA)  */ , 
        24U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE84  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE84 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE84Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE84_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00F0U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidF15F  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidF15F /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF15FDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidF15F_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00F2U /*  NV block Base number (defined by FEE/EA)  */ , 
        10U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidF166  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidF166 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF166Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidF166_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00F4U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidF162  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidF162 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF162Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidF162_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00F6U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE82  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE82 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE82Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE82_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00F8U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE86  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE86 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE86Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE86_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00FAU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE88  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE88 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE88Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE88_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00FCU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE85  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE85 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE85Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE85_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00FEU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_Did205A  */ 
        (NvM_RamAddressType)&Rte_CustDiag_Did205A /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.Did205ADft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_Did205A_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0100U /*  NV block Base number (defined by FEE/EA)  */ , 
        2U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE81  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE81 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE81Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE81_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0102U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_Did301A  */ 
        (NvM_RamAddressType)&Rte_CustDiag_Did301A /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.Did301ADft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_Did301A_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0104U /*  NV block Base number (defined by FEE/EA)  */ , 
        2U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE41  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE41 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE41Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE41_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0106U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE83  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE83 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE83Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE83_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0108U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEED0  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEED0 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEED0Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEED0_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x010AU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_FordHwAgArbn_PrevIgnCycVal  */ 
        (NvM_RamAddressType)&Rte_FordHwAgArbn_PrevIgnCycVal /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_FordHwAgArbn_DEFAULT_RTE_CDATA_GROUP.PrevIgnCycValDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_FordHwAgArbn_PrevIgnCycVal_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00D6U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_FordHwAgArbn_NonAbsOffsVldFlg  */ 
        (NvM_RamAddressType)&Rte_FordHwAgArbn_NonAbsOffsVldFlg /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_FordHwAgArbn_NonAbsOffsVldFlg_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00D8U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_FordHwAgArbn_NonAbsOffs  */ 
        (NvM_RamAddressType)&Rte_FordHwAgArbn_NonAbsOffs /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_FordHwAgArbn_NonAbsOffs_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00DAU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_FordVehSpdArbn_FordVehTireCircum  */ 
        (NvM_RamAddressType)&Rte_FordVehSpdArbn_FordVehTireCircum /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_FordVehSpdArbn_FordVehTireCircum_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00DCU /*  NV block Base number (defined by FEE/EA)  */ , 
        2U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidDE04  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidDE04 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidDE04Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidDE04_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00CAU /*  NV block Base number (defined by FEE/EA)  */ , 
        2U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidDE02  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidDE02 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidDE02Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidDE02_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00C6U /*  NV block Base number (defined by FEE/EA)  */ , 
        24U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_Did3003  */ 
        (NvM_RamAddressType)&Rte_CustDiag_Did3003 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.Did3003Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_Did3003_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00CCU /*  NV block Base number (defined by FEE/EA)  */ , 
        24U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidDE01  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidDE01 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidDE01Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidDE01_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00C4U /*  NV block Base number (defined by FEE/EA)  */ , 
        24U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE01  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE01 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE01Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE01_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00CEU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidDE03  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidDE03 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidDE03Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidDE03_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00C8U /*  NV block Base number (defined by FEE/EA)  */ , 
        64U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidDE00  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidDE00 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidDE00Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidDE00_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00C2U /*  NV block Base number (defined by FEE/EA)  */ , 
        24U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidF113  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidF113 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF113Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidF113_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00D4U /*  NV block Base number (defined by FEE/EA)  */ , 
        24U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidEE02  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidEE02 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE02Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidEE02_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00D0U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CustDiag_DidF111  */ 
        (NvM_RamAddressType)&Rte_CustDiag_DidF111 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF111Dft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CustDiag_DidF111_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00D2U /*  NV block Base number (defined by FEE/EA)  */ , 
        24U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_HwTq9Meas_HwTq9Offs  */ 
        (NvM_RamAddressType)&Rte_HwTq9Meas_HwTq9Offs /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_HwTq9Meas_HwTq9Offs_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00BEU /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_HwTq10Meas_HwTq10Offs  */ 
        (NvM_RamAddressType)&Rte_HwTq10Meas_HwTq10Offs /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_HwTq10Meas_HwTq10Offs_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00C0U /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_TEstimn_TFilStVal  */ 
        (NvM_RamAddressType)&Rte_TEstimn_TFilStVal /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_TEstimn_TFilStVal_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00BCU /*  NV block Base number (defined by FEE/EA)  */ , 
        32U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_HwTq8Meas_HwTq8Offs  */ 
        (NvM_RamAddressType)&Rte_CDD_HwTq8Meas_HwTq8Offs /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_HwTq8Meas_DEFAULT_RTE_CDATA_GROUP.HwTq8OffsDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_HwTq8Meas_HwTq8Offs_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00BAU /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs  */ 
        (NvM_RamAddressType)&Rte_CDD_HwTq1Meas_HwTq1Offs /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP.HwTq1OffsDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00B8U /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_MfgTmpBuf1 /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00ACU /*  NV block Base number (defined by FEE/EA)  */ , 
        16U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_DiRestore  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_DiRestore /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_DiRestore_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00A4U /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_NxtrMfgEnaCntr /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP.NvmMfgEnaCntr_DefaultValue /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00B4U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_MfgTmpBuf0 /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00AAU /*  NV block Base number (defined by FEE/EA)  */ , 
        16U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_MfgTmpBuf3 /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00B0U /*  NV block Base number (defined by FEE/EA)  */ , 
        16U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_EpsSysSerlNr /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00A6U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_MfgTmpBuf2 /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00AEU /*  NV block Base number (defined by FEE/EA)  */ , 
        16U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_CcaHwPartNr /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00A0U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_MfgTmpBuf4 /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00B2U /*  NV block Base number (defined by FEE/EA)  */ , 
        16U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_SeedKey  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_SeedKey /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP.SeedKeyDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_SeedKey_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00B6U /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_IgnCntr  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_IgnCntr /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP.NvmIgnCntr_DefaultValue /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_IgnCntr_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00A8U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CmnMfgSrv_CcaSerlNr  */ 
        (NvM_RamAddressType)&Rte_CmnMfgSrv_CcaSerlNr /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CmnMfgSrv_CcaSerlNr_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00A2U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_MotTqCmdSca_MotTqScaFac  */ 
        (NvM_RamAddressType)&Rte_MotTqCmdSca_MotTqScaFac /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_MotTqCmdSca_MotTqScaFac_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x009CU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_DutyCycThermProtn_FilStVal  */ 
        (NvM_RamAddressType)&Rte_DutyCycThermProtn_FilStVal /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_DutyCycThermProtn_FilStVal_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x009EU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Deprecated_Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt  */ 
        NULL_PTR /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x009AU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_OFF |
NVM_SELECT_BLOCK_FOR_WRITEALL_OFF |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_MotCtrlPrmEstimn_MotPrmNom  */ 
        (NvM_RamAddressType)&Rte_MotCtrlPrmEstimn_MotPrmNom /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_MotCtrlPrmEstimn_MotPrmNom_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0098U /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_MotAg5Meas_MotAg5EolPrm  */ 
        (NvM_RamAddressType)&Rte_CDD_MotAg5Meas_MotAg5EolPrm /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_MotAg5Meas_MotAg5EolPrm_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0090U /*  NV block Base number (defined by FEE/EA)  */ , 
        308U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_MotAg6Meas_MotAg6StVari  */ 
        (NvM_RamAddressType)&Rte_CDD_MotAg6Meas_MotAg6StVari /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_MotAg6Meas_MotAg6StVari_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0096U /*  NV block Base number (defined by FEE/EA)  */ , 
        16U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_MotAg6Meas_MotAg6EolPrm  */ 
        (NvM_RamAddressType)&Rte_CDD_MotAg6Meas_MotAg6EolPrm /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_MotAg6Meas_MotAg6EolPrm_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0094U /*  NV block Base number (defined by FEE/EA)  */ , 
        308U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_MotAg5Meas_MotAg5StVari  */ 
        (NvM_RamAddressType)&Rte_CDD_MotAg5Meas_MotAg5StVari /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_MotAg5Meas_MotAg5StVari_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0092U /*  NV block Base number (defined by FEE/EA)  */ , 
        16U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_HwAg1Meas_HwAg1IfFltLtch  */ 
        (NvM_RamAddressType)&Rte_HwAg1Meas_HwAg1IfFltLtch /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_HwAg1Meas_HwAg1IfFltLtch_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x008CU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_HwAg1Meas_HwAg1Offs  */ 
        (NvM_RamAddressType)&Rte_HwAg1Meas_HwAg1Offs /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_HwAg1Meas_HwAg1Offs_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x008EU /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_VrfyCritReg_MCalReadVrfyCritRegFltNvmInfo  */ 
        (NvM_RamAddressType)&Rte_CDD_VrfyCritReg_MCalReadVrfyCritRegFltNvmInfo /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_VrfyCritReg_MCalReadVrfyCritRegFltNvmInfo_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x008AU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY  */ 
        (NvM_RamAddressType)&Rte_CDD_MotRplCoggCmd_MotCoggCmdY /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0082U /*  NV block Base number (defined by FEE/EA)  */ , 
        1024U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm  */ 
        (NvM_RamAddressType)&Rte_MotRplCoggCfg_MotRplCoggPrm /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0084U /*  NV block Base number (defined by FEE/EA)  */ , 
        18U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_SysFricLrng_FricNonLrngData  */ 
        (NvM_RamAddressType)&Rte_SysFricLrng_FricNonLrngData /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_SysFricLrng_DEFAULT_RTE_CDATA_GROUP.FricNonLrngDataDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_SysFricLrng_FricNonLrngData_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0086U /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_SysFricLrng_FricLrngData  */ 
        (NvM_RamAddressType)&Rte_SysFricLrng_FricLrngData /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_SysFricLrng_DEFAULT_RTE_CDATA_GROUP.FricLrngDataDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_SysFricLrng_FricLrngData_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0088U /*  NV block Base number (defined by FEE/EA)  */ , 
        216U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_EotLrng_EotNvmData  */ 
        (NvM_RamAddressType)&Rte_EotLrng_EotNvmData /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_EotLrng_EotNvmData_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x007EU /*  NV block Base number (defined by FEE/EA)  */ , 
        12U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw  */ 
        (NvM_RamAddressType)&Rte_EotLrng_MaxHwAgCwAndCcw /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0080U /*  NV block Base number (defined by FEE/EA)  */ , 
        12U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_HwAgSnsrls_StordLstPrm  */ 
        (NvM_RamAddressType)&Rte_HwAgSnsrls_StordLstPrm /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP.StordLstPrmDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_HwAgSnsrls_StordLstPrm_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x007CU /*  NV block Base number (defined by FEE/EA)  */ , 
        8U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSetABC  */ 
        (NvM_RamAddressType)&Rte_CDD_CurrMeas_CurrMeasEolGainCalSetABC /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP.CurrMeasEolGainCalSetABCDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSetABC_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0078U /*  NV block Base number (defined by FEE/EA)  */ , 
        12U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSetABC  */ 
        (NvM_RamAddressType)&Rte_CDD_CurrMeas_CurrMeasEolOffsCalSetABC /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP.CurrMeasEolOffsCalSetABCDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSetABC_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x007AU /*  NV block Base number (defined by FEE/EA)  */ , 
        28U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_PolarityCfg_PolarityCfgSaved  */ 
        (NvM_RamAddressType)&Rte_PolarityCfg_PolarityCfgSaved /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_PolarityCfg_DEFAULT_RTE_CDATA_GROUP.PolarityCfgSavedDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_PolarityCfg_PolarityCfgSaved_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0076U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm  */ 
        (NvM_RamAddressType)&Rte_MotAg2Meas_MotAg2EolPrm /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP.MotAg2EolPrmDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0074U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf  */ 
        (NvM_RamAddressType)&Rte_CDD_MotAgCmp_MotAgCmpMotAgBackEmf /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP.MotAgCmpMotAgBackEmfDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0072U /*  NV block Base number (defined by FEE/EA)  */ , 
        2U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  SnpshtDataAry  */ 
        (NvM_RamAddressType)&SnpshtDataAry_M /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        SnpshtDataAry_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0070U /*  NV block Base number (defined by FEE/EA)  */ , 
        256U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_DiagcMgr_DiagcMgrApplCrc  */ 
        (NvM_RamAddressType)&Rte_DiagcMgr_DiagcMgrApplCrc /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CalprmRom_DiagcMgr_DEFAULT_RTE_CDATA_GROUP.DiagcMgrApplCrcDft /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_DiagcMgr_DiagcMgrApplCrc_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x006AU /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_DiagcMgr_DiagcMgrLtchCntrAry  */ 
        (NvM_RamAddressType)&Rte_DiagcMgr_DiagcMgrLtchCntrAry /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_DiagcMgr_DiagcMgrLtchCntrAry_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x006CU /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry  */ 
        (NvM_RamAddressType)&Rte_DiagcMgr_DiagcMgrNtcFltAry /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x006EU /*  NV block Base number (defined by FEE/EA)  */ , 
        80U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  Rte_NvmBlock_CDD_NvMProxy_ShtdwnClsChk  */ 
        (NvM_RamAddressType)&Rte_CDD_NvMProxy_ShtdwnClsChk /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        CDD_NvMProxy_ClsChkReadCallBack /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        CDD_NvMProxy_ClsChkWrCallBack /*  pointer to the WriteRamBlockToNvCallback  */ , 
        Rte_NvmBlock_CDD_NvMProxy_ShtdwnClsChk_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0068U /*  NV block Base number (defined by FEE/EA)  */ , 
        4U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_OFF |
NVM_CBK_DURING_READALL_OFF
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemStatusDataBlock  */ 
        (NvM_RamAddressType)&Dem_Cfg_StatusData /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0006U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock0  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_0 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0008U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock1  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_1 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x000AU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock2  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_2 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x000CU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock3  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_3 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x000EU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock4  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_4 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0010U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock5  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_5 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0012U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock6  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_6 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0014U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock7  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_7 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0016U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock0  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_0 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0018U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock1  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_1 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x001AU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock2  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_2 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x001CU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock3  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_3 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x001EU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock4  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_4 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0020U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock5  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_5 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0022U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock6  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_6 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0024U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock7  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_7 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0026U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock8  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_8 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0028U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock9  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_9 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x002AU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock10  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_10 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x002CU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock11  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_11 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x002EU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock12  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_12 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0030U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock13  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_13 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0032U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock14  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_14 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0034U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock15  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_15 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0036U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock16  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_16 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0038U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock17  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_17 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x003AU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock18  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_18 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x003CU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock19  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_19 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x003EU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock20  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_20 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0040U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock21  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_21 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0042U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock22  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_22 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0044U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock23  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_23 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0046U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock24  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_24 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0048U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock25  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_25 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x004AU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock26  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_26 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x004CU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock27  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_27 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x004EU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock28  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_28 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0050U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock29  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_29 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0052U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock30  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_30 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0054U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock31  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_31 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0056U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock32  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_32 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0058U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock33  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_33 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x005AU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock34  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_34 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x005CU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock35  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_35 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x005EU /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock36  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_36 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0060U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock37  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_37 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0062U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock38  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_38 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0064U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemSecondaryDataBlock39  */ 
        (NvM_RamAddressType)&Dem_Cfg_SecondaryEntry_39 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0066U /*  NV block Base number (defined by FEE/EA)  */ , 
        1U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee_30_SmallSector /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON |
NVM_CBK_DURING_READALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }
    };

/* PRQA L:RamRomBlocks */

/* Permanent RAM and ROM block length checks - compile time (only available for blocks with enabled length check */

/* How does it work:
 * data length = sizeof(ramBlock - CrcLength 
 *     - CRC internal buffer enabled: CRC length == 0, RAM blocks store only data, CRC is handles internally
 *     - CRC internal buffer disabled: CRC length is the number of CRC bytes, for blocks without CRC the length == 0
 *     - for ROM blocks the CRC does not matter
 * Data length has to be > or < or == to configured NvM block length, depending on configuration (see above). 
 * In case the lengths do not match a bitfield with length -1 will be created and shall cause a compiler error.
 * The compiler error shall mark the line with invalid bitfield (bitfield length == -1) - the line includes all required information:
 *     - Block_ + NvM block name
 *     - length error description
 *     - RAM block name, CRC length and configured NvM block length
 */

typedef unsigned int NvM_LengthCheck;
 
/* Block Length Check and Automatic Block Length enabled: error if sizeof RAM block is greater than the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRamBlockGreaterThanConfiguredLength(ramBlock, crcLength, blockLength) (((sizeof(ramBlock) - (crcLength)) > (blockLength)) ? -1 : 1)
/* Block Length Check and Strict Length Check enabled: error if the sizeof RAM block does not match the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRamBlockDoesNotMatchConfiguredLength(ramBlock, crcLength, blockLength) (((sizeof(ramBlock) - (crcLength)) != (blockLength)) ? -1 : 1)
/* Block Length Check enabled and Strict Length Check disabled: error if the sizeof RAM block is less than the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRamBlockLessThanConfiguredLength(ramBlock, crcLength, blockLength) (((sizeof(ramBlock) - (crcLength)) < (blockLength)) ? -1 : 1)

/* RAM block length checks */
struct PermanentRamBlockLengthChecks {
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_LaneAssi : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_FordBlaBoxIfCmp1_LaneAssi, 0, 256U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl, 0, 128U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi, 0, 512U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_PullDriftCmp : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmp, 0, 128U);
  NvM_LengthCheck Block_Rte_NvmBlock_StackMeas_StackMeasRes : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_StackMeas_StackMeasRes, 0, 48U);
  NvM_LengthCheck Block_Rte_NvmBlock_StackMeas_StackMeasApplCrc : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_StackMeas_StackMeasApplCrc, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE21 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE21, 0, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_Did630F : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_Did630F, 0, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE22 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE22, 0, 40U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE23 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE23, 0, 40U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_Did630FChk : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_Did630FChk, 0, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF190 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidF190, 0, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE87 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE87, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF110 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidF110, 0, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF163 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidF163, 0, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF18C : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidF18C, 0, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_Did205B : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_Did205B, 0, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE00 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE00, 0, 3U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidDE05 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidDE05, 0, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE40 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE40, 0, 3U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF18A : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidF18A, 0, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE84 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE84, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF15F : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidF15F, 0, 10U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF166 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidF166, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF162 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidF162, 0, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE82 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE82, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE86 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE86, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE88 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE88, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE85 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE85, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_Did205A : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_Did205A, 0, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE81 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE81, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_Did301A : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_Did301A, 0, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE41 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE41, 0, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE83 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE83, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEED0 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEED0, 0, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_FordHwAgArbn_PrevIgnCycVal : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_FordHwAgArbn_PrevIgnCycVal, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_FordHwAgArbn_NonAbsOffsVldFlg : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_FordHwAgArbn_NonAbsOffsVldFlg, 0, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_FordHwAgArbn_NonAbsOffs : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_FordHwAgArbn_NonAbsOffs, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_FordVehSpdArbn_FordVehTireCircum : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_FordVehSpdArbn_FordVehTireCircum, 0, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidDE04 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidDE04, 0, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidDE02 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidDE02, 0, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_Did3003 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_Did3003, 0, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidDE01 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidDE01, 0, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE01 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE01, 0, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidDE03 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidDE03, 0, 64U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidDE00 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidDE00, 0, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF113 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidF113, 0, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE02 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidEE02, 0, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF111 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CustDiag_DidF111, 0, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwTq9Meas_HwTq9Offs : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_HwTq9Meas_HwTq9Offs, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwTq10Meas_HwTq10Offs : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_HwTq10Meas_HwTq10Offs, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_TEstimn_TFilStVal : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_TEstimn_TFilStVal, 0, 32U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_HwTq8Meas_HwTq8Offs : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_HwTq8Meas_HwTq8Offs, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_HwTq1Meas_HwTq1Offs, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_MfgTmpBuf1, 0, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_DiRestore : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_DiRestore, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_NxtrMfgEnaCntr, 0, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_MfgTmpBuf0, 0, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_MfgTmpBuf3, 0, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_EpsSysSerlNr, 0, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_MfgTmpBuf2, 0, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_CcaHwPartNr, 0, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4 : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_MfgTmpBuf4, 0, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_SeedKey : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_SeedKey, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_IgnCntr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_IgnCntr, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_CcaSerlNr : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CmnMfgSrv_CcaSerlNr, 0, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_MotTqCmdSca_MotTqScaFac : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_MotTqCmdSca_MotTqScaFac, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_DutyCycThermProtn_FilStVal : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_DutyCycThermProtn_FilStVal, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_MotCtrlPrmEstimn_MotPrmNom : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_MotCtrlPrmEstimn_MotPrmNom, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_MotAg5Meas_MotAg5EolPrm : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_MotAg5Meas_MotAg5EolPrm, 0, 308U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_MotAg6Meas_MotAg6StVari : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_MotAg6Meas_MotAg6StVari, 0, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_MotAg6Meas_MotAg6EolPrm : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_MotAg6Meas_MotAg6EolPrm, 0, 308U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_MotAg5Meas_MotAg5StVari : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_MotAg5Meas_MotAg5StVari, 0, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwAg1Meas_HwAg1IfFltLtch : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_HwAg1Meas_HwAg1IfFltLtch, 0, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwAg1Meas_HwAg1Offs : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_HwAg1Meas_HwAg1Offs, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_VrfyCritReg_MCalReadVrfyCritRegFltNvmInfo : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_VrfyCritReg_MCalReadVrfyCritRegFltNvmInfo, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_MotRplCoggCmd_MotCoggCmdY, 0, 1024U);
  NvM_LengthCheck Block_Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_MotRplCoggCfg_MotRplCoggPrm, 0, 18U);
  NvM_LengthCheck Block_Rte_NvmBlock_SysFricLrng_FricNonLrngData : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_SysFricLrng_FricNonLrngData, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_SysFricLrng_FricLrngData : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_SysFricLrng_FricLrngData, 0, 216U);
  NvM_LengthCheck Block_Rte_NvmBlock_EotLrng_EotNvmData : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_EotLrng_EotNvmData, 0, 12U);
  NvM_LengthCheck Block_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_EotLrng_MaxHwAgCwAndCcw, 0, 12U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwAgSnsrls_StordLstPrm : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_HwAgSnsrls_StordLstPrm, 0, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSetABC : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_CurrMeas_CurrMeasEolGainCalSetABC, 0, 12U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSetABC : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_CurrMeas_CurrMeasEolOffsCalSetABC, 0, 28U);
  NvM_LengthCheck Block_Rte_NvmBlock_PolarityCfg_PolarityCfgSaved : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_PolarityCfg_PolarityCfgSaved, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_MotAg2Meas_MotAg2EolPrm, 0, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_MotAgCmp_MotAgCmpMotAgBackEmf, 0, 2U);
  NvM_LengthCheck Block_SnpshtDataAry : SizeOfRamBlockDoesNotMatchConfiguredLength(SnpshtDataAry_M, 0, 256U);
  NvM_LengthCheck Block_Rte_NvmBlock_DiagcMgr_DiagcMgrApplCrc : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_DiagcMgr_DiagcMgrApplCrc, 0, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_DiagcMgr_DiagcMgrLtchCntrAry : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_DiagcMgr_DiagcMgrLtchCntrAry, 0, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_DiagcMgr_DiagcMgrNtcFltAry, 0, 80U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_NvMProxy_ShtdwnClsChk : SizeOfRamBlockDoesNotMatchConfiguredLength(Rte_CDD_NvMProxy_ShtdwnClsChk, 0, 4U);
};

/* Block Length Check and Automatic Block Length enabled: error if sizeof ROM block is less than sizeof RAM block */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRomBlockLessThanSizeOfRamBlock(romBlock, ramBlock) ((sizeof(romBlock) < sizeof(ramBlock)) ? -1 : 1)
/* Block Length Check and Strict Length Check enabled: error if the sizeof ROM block does not match the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRomBlockDoesNotMatchConfiguredLength(romBlock, blockLength) ((sizeof(romBlock) != (blockLength)) ? -1 : 1)
/* Block Length Check enabled, Strict Length disabled: error if the sizeof ROM block is less than the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRomBlockLessThanConfiguredLength(romBlock, blockLength) ((sizeof(romBlock) < (blockLength)) ? -1 : 1)

/* ROM block length checks */
struct PermRomBlockLengthCheck {
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_LaneAssi : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP.LaneAssiDft, 256U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP.ActvNiblCtrlDft, 128U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP.TrlrBackupAssiDft, 512U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_PullDriftCmp : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP.PullDriftCmpDft, 128U);
  NvM_LengthCheck Block_Rte_NvmBlock_StackMeas_StackMeasRes : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_StackMeas_DEFAULT_RTE_CDATA_GROUP.StackMeasResDft, 48U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE21 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE21Dft, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_Did630F : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.Did630FDft, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE22 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE22Dft, 40U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE23 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE23Dft, 40U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_Did630FChk : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.Did630FChkDft, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF190 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF190Dft, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE87 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE87Dft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF110 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF110Dft, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF163 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF163Dft, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF18C : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF18CDft, 16U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_Did205B : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.Did205BDft, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE00 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE00Dft, 3U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidDE05 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidDE05Dft, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE40 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE40Dft, 3U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF18A : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF18ADft, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE84 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE84Dft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF15F : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF15FDft, 10U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF166 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF166Dft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF162 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF162Dft, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE82 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE82Dft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE86 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE86Dft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE88 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE88Dft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE85 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE85Dft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_Did205A : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.Did205ADft, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE81 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE81Dft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_Did301A : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.Did301ADft, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE41 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE41Dft, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE83 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE83Dft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEED0 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEED0Dft, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_FordHwAgArbn_PrevIgnCycVal : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_FordHwAgArbn_DEFAULT_RTE_CDATA_GROUP.PrevIgnCycValDft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidDE04 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidDE04Dft, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidDE02 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidDE02Dft, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_Did3003 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.Did3003Dft, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidDE01 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidDE01Dft, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE01 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE01Dft, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidDE03 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidDE03Dft, 64U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidDE00 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidDE00Dft, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF113 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF113Dft, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidEE02 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidEE02Dft, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CustDiag_DidF111 : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP.DidF111Dft, 24U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_HwTq8Meas_HwTq8Offs : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_HwTq8Meas_DEFAULT_RTE_CDATA_GROUP.HwTq8OffsDft, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP.HwTq1OffsDft, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP.NvmMfgEnaCntr_DefaultValue, 1U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_SeedKey : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP.SeedKeyDft, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CmnMfgSrv_IgnCntr : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP.NvmIgnCntr_DefaultValue, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_SysFricLrng_FricNonLrngData : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_SysFricLrng_DEFAULT_RTE_CDATA_GROUP.FricNonLrngDataDft, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_SysFricLrng_FricLrngData : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_SysFricLrng_DEFAULT_RTE_CDATA_GROUP.FricLrngDataDft, 216U);
  NvM_LengthCheck Block_Rte_NvmBlock_HwAgSnsrls_StordLstPrm : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP.StordLstPrmDft, 8U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSetABC : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP.CurrMeasEolGainCalSetABCDft, 12U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSetABC : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP.CurrMeasEolOffsCalSetABCDft, 28U);
  NvM_LengthCheck Block_Rte_NvmBlock_PolarityCfg_PolarityCfgSaved : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_PolarityCfg_DEFAULT_RTE_CDATA_GROUP.PolarityCfgSavedDft, 4U);
  NvM_LengthCheck Block_Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP.MotAg2EolPrmDft, 20U);
  NvM_LengthCheck Block_Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP.MotAgCmpMotAgBackEmfDft, 2U);
  NvM_LengthCheck Block_Rte_NvmBlock_DiagcMgr_DiagcMgrApplCrc : SizeOfRomBlockDoesNotMatchConfiguredLength(Rte_CalprmRom_DiagcMgr_DEFAULT_RTE_CDATA_GROUP.DiagcMgrApplCrcDft, 4U);
};

/* Permanent RAM and ROM block length checks - END */

#define NVM_STOP_SEC_CONST_DESCRIPTOR_TABLE
#include "MemMap.h"

#define NVM_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#if(NVM_API_CONFIG_CLASS != NVM_API_CONFIG_CLASS_1)
/* Job Queue used for normal and high prio jobs */
VAR(NvM_QueueEntryType, NVM_PRIVATE_DATA) NvM_JobQueue_at[NVM_SIZE_STANDARD_JOB_QUEUE + NVM_SIZE_IMMEDIATE_JOB_QUEUE];
#endif

#define NVM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define NVM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#include "MemMap.h"

/* array of RAM Block Management areas, defined to be usable in block descriptor table */
VAR(NvM_RamMngmtAreaType, NVM_CONFIG_DATA) NvM_BlockMngmtArea_at[NVM_TOTAL_NUM_OF_NVRAM_BLOCKS];

/* management area for DCM blocks */
VAR(NvM_RamMngmtAreaType, NVM_CONFIG_DATA) NvM_DcmBlockMngmt_t;

#define NVM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#include "MemMap.h"

#define NVM_START_SEC_CODE
#include "MemMap.h"

/**********************************************************************************************************************
*  NvM_EnterCriticalSection
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 enter SchM exclusive area for NvM 
 * \endinternal
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_EnterCriticalSection(void)
{
    /* do what ever was defined to do for locking the resources */
    SchM_Enter_NvM_NVM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

/**********************************************************************************************************************
*  NvM_ExitCriticalSection
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 exit SchM exclusive area for NvM 
 * \endinternal
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_ExitCriticalSection(void)
{
    /* do what ever was defined to do for unlocking the resources */
    SchM_Exit_NvM_NVM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

/* PRQA S 3453 2 */ /* MD_MSR_19.7 */ 
#define NvM_invokeMultiBlockMode(serv, res) 
#define NvM_invokeMultiCbk(serv, res)  

/**********************************************************************************************************************
*  NvM_MultiBlockCbk
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 invoke the BSWM notification if any is configured
 *  - #20 in case the given job result isn't set to pending, invoke the multi block job end notification
 * \endinternal
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_MultiBlockCbk(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult)
{
    /* The complete function body is designed to be optimized away by the compiler, if it is not needed    *
     * If the used macro is empty, the compiler may decide to remove code because it would contain         *
     * emtpy execution blocks (it does not matter whether conditions were TRUE or FALSE                    */
    NvM_invokeMultiBlockMode(ServiceId, JobResult);

    if(JobResult != NVM_REQ_PENDING)
    {
        NvM_invokeMultiCbk(ServiceId, JobResult);
    }   
}

 /* PRQA S 3453 2 */ /* MD_MSR_19.7 */ 
#define NvM_invokeCbk(descr, serv, res) 
#define NvM_invokeCurrentBlockMode(id, res) 

/**********************************************************************************************************************
*  NvM_BlockNotification
**********************************************************************************************************************/
/*!
 * \internal
 *  - #100 only for normal blocks (no DCM blocks)
 *      - #110 only when
 *        single block callback configured and
 *        the job is done (result != NVM_REQ_PENDING) and
 *        current job is not WriteAll (do not invoke any callbacks during WriteAll) and
 *        for ReadAll as current job the callback invoking is enabled
 *      - #111 invoke the single block callback
 *  - #120 block has enabled BswM callback
 *      - #121 invoke BswM callback
 * \endinternal
 */
void NvM_BlockNotification(NvM_BlockIdType BlockId, NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult)
{
    /* The complete function body is designed to be optimized away by the compiler, if it is not needed    *
     * If the used macros are empty, the compiler may decide to remove code because it would contain       *
     * empty execution blocks (it does not matter whether conditions were TRUE or FALSE                    */
    const NvM_BlockIdType orgBlockId = NVM_BLOCK_FROM_DCM_ID(BlockId);
    const NvM_BlockDescrPtrType blockDescriptorPtr = &NvM_BlockDescriptorTable_at[orgBlockId];
    /* #100 only for normal blocks (no DCM blocks) */
    if (orgBlockId == BlockId)
    {
        /* #110 only when
         * single block callback configured and
         * the job is done (result != NVM_REQ_PENDING) and
         * current job is not WriteAll (do not invoke any callbacks during WriteAll) and
         * for ReadAll as current job the callback invoking is enabled */
        if((blockDescriptorPtr->CallbackFunc_pt != NULL_PTR) && (JobResult != NVM_REQ_PENDING) &&
            (ServiceId != NVM_WRITE_ALL) &&
            (!((ServiceId == NVM_READ_ALL) && ((blockDescriptorPtr->Flags_u8 & NVM_CBK_DURING_READALL_ON) != NVM_CBK_DURING_READALL_ON))))
        {
            /* #111 invoke the single block callback */
            NvM_invokeCbk(blockDescriptorPtr, ServiceId, JobResult); /* SBSW_NvM_FuncPtrCall_UserCallbacks */
        }
        /* #120 block has enabled BswM callback */
        /* PRQA S 3760 1 */ /* MD_NvM_10.1 */
        if(blockDescriptorPtr->NotifyBswM == TRUE)
        {
            /* #121 invoke BswM callback */
            NvM_invokeCurrentBlockMode(BlockId, JobResult);
        }
    }      
}

#define NVM_STOP_SEC_CODE
#include "MemMap.h"

/* PRQA L:inclusions */

/* ---- End of File ------------------------------------------------------- */

