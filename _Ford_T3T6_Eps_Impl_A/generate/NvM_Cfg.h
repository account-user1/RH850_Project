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
 *              File: NvM_Cfg.h
 *   Generation Time: 2018-05-01 16:26:02
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
 * PROTECTION AGAINST MULTIPLE INCLUSION
 *********************************************************************************************************************/
/* public section - to be used by NvM itself and its users */
#if (!defined NVM_CFG_H_PUBLIC)
#define NVM_CFG_H_PUBLIC

/**********************************************************************************************************************
 * VERSION IDENTIFICATION
 *********************************************************************************************************************/
#define NVM_CFG_MAJOR_VERSION    (5u)
#define NVM_CFG_MINOR_VERSION    (5u)
#define NVM_CFG_PATCH_VERSION    (1u)

/**********************************************************************************************************************
 * NVM API TYPE INCLUDES
 *********************************************************************************************************************/
#include "Rte_NvM_Type.h"

#include "NvM_Types.h"

/**********************************************************************************************************************
 * API CFG TYPE DEFINITIONS
 *********************************************************************************************************************/
/* Type for an the additional published parameter Compiled Configuration ID
 * (see CompiledConfigurationId in NvM.h)
 */
/* Compiled Config Id Type */
/* PRQA S 0750 2 */ /* MD_MSR_18.4 */
typedef union
{
    uint16 Word_u16;
    uint8  Bytes_au8[2u];
} NvM_CompiledConfigIdType;

/**********************************************************************************************************************
 * CFG COMMON PARAMETER
 *********************************************************************************************************************/
/* --------------------  DEVELOPMENT / PRODUCTION MODE -------------------- */
/* switch between Debug- or Production-Mode */
#define NVM_DEV_ERROR_DETECT                  (STD_ON)

/* Preprocessor switch that is used in NvM_ReadAll() */
#define NVM_DYNAMIC_CONFIGURATION             (STD_OFF)

#define NVM_API_CONFIG_CLASS_1                (1u)
#define NVM_API_CONFIG_CLASS_2                (3u)
#define NVM_API_CONFIG_CLASS_3                (7u)

#define NVM_API_CONFIG_CLASS                  (NVM_API_CONFIG_CLASS_3)

#define NVM_JOB_PRIORISATION                  STD_OFF

/* define compiled Block ID */
#define NVM_COMPILED_CONFIG_ID                (1U)

/* switch for enablinig fast mode during multi block requests */
#define NVM_DRV_MODE_SWITCH                   (STD_ON)

/* switch for enablinig polling mode and disabling notifications */
#define NVM_POLLING_MODE                      (STD_ON)

/* switch for enabling the internal buffer for Crc handling */
#define NVM_CRC_INT_BUFFER                    (STD_ON)

/* number of defined NV blocks */
#define NVM_TOTAL_NUM_OF_NVRAM_BLOCKS         (146UL)

/* internal buffer size */
#define NVM_INTERNAL_BUFFER_LENGTH            1026UL

/* version info api switch */
#define NVM_VERSION_INFO_API                  (STD_OFF)

/* switch to enable the ram block status api */
#define NVM_SET_RAM_BLOCK_STATUS_API          (STD_ON)

/* switch that gives the user (EcuM) the possibility to time-out WriteAll cancellation */
#define NVM_KILL_WRITEALL_API                 (STD_ON)

/* enabled or disable the whole repair redundant blocks feature */
#define NVM_REPAIR_REDUNDANT_BLOCKS_API       (STD_OFF)

/* NVM does not need this macro. It is intended for underlying modules,
 * relying on its existence
 */
#define NVM_DATASET_SELECTION_BITS            (1U)

/* block offset for DCM blocks */
#define NVM_DCM_BLOCK_OFFSET                  0x8000u

/* returns corresponding DCM BlockId of an original NVRAM Block */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define NvM_GetDcmBlockId(MyApplBlockId)      ((MyApplBlockId) | NVM_DCM_BLOCK_OFFSET)

/* BlockId's:
 * Note: The numbers of the following list must meet the configured blocks in the NvM_BlockDescriptorTable_at
 *
 * Alignment of the handles of all blocks
 * Id 0 is reserved for multiblock calls
 * Id 1 is reserved for config ID
 */
#define NvMConf___MultiBlockRequest (0U) 
#define NvMConf_NvMBlockDescriptor_NvMConfigBlock (1UL) 
#define NvMConf_NvMBlockDescriptor_DemAdminDataBlock (2UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_LaneAssi (3UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl (4UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi (5UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_FordBlaBoxIfCmp1_PullDriftCmp (6UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_StackMeas_StackMeasRes (7UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_StackMeas_StackMeasApplCrc (8UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE21 (9UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_Did630F (10UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE22 (11UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE23 (12UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_Did630FChk (13UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidF190 (14UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE87 (15UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidF110 (16UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidF163 (17UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidF18C (18UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_Did205B (19UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE00 (20UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidDE05 (21UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE40 (22UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidF18A (23UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE84 (24UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidF15F (25UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidF166 (26UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidF162 (27UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE82 (28UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE86 (29UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE88 (30UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE85 (31UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_Did205A (32UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE81 (33UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_Did301A (34UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE41 (35UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE83 (36UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEED0 (37UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_FordHwAgArbn_PrevIgnCycVal (38UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_FordHwAgArbn_NonAbsOffsVldFlg (39UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_FordHwAgArbn_NonAbsOffs (40UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_FordVehSpdArbn_FordVehTireCircum (41UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidDE04 (42UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidDE02 (43UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_Did3003 (44UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidDE01 (45UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE01 (46UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidDE03 (47UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidDE00 (48UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidF113 (49UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidEE02 (50UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CustDiag_DidF111 (51UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_HwTq9Meas_HwTq9Offs (52UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_HwTq10Meas_HwTq10Offs (53UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_TEstimn_TFilStVal (54UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_HwTq8Meas_HwTq8Offs (55UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs (56UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf1 (57UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CmnMfgSrv_DiRestore (58UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr (59UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf0 (60UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf3 (61UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CmnMfgSrv_EpsSysSerlNr (62UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf2 (63UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CmnMfgSrv_CcaHwPartNr (64UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CmnMfgSrv_MfgTmpBuf4 (65UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CmnMfgSrv_SeedKey (66UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CmnMfgSrv_IgnCntr (67UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CmnMfgSrv_CcaSerlNr (68UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_MotTqCmdSca_MotTqScaFac (69UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_DutyCycThermProtn_FilStVal (70UL) 
#define NvMConf_NvMBlockDescriptor_Deprecated_Rte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt (71UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_MotCtrlPrmEstimn_MotPrmNom (72UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_MotAg5Meas_MotAg5EolPrm (73UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_MotAg6Meas_MotAg6StVari (74UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_MotAg6Meas_MotAg6EolPrm (75UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_MotAg5Meas_MotAg5StVari (76UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_HwAg1Meas_HwAg1IfFltLtch (77UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_HwAg1Meas_HwAg1Offs (78UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_VrfyCritReg_MCalReadVrfyCritRegFltNvmInfo (79UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY (80UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm (81UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_SysFricLrng_FricNonLrngData (82UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_SysFricLrng_FricLrngData (83UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_EotLrng_EotNvmData (84UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_EotLrng_MaxHwAgCwAndCcw (85UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_HwAgSnsrls_StordLstPrm (86UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSetABC (87UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSetABC (88UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_PolarityCfg_PolarityCfgSaved (89UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_MotAg2Meas_MotAg2EolPrm (90UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf (91UL) 
#define NvMConf_NvMBlockDescriptor_SnpshtDataAry (92UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_DiagcMgr_DiagcMgrApplCrc (93UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_DiagcMgr_DiagcMgrLtchCntrAry (94UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry (95UL) 
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_NvMProxy_ShtdwnClsChk (96UL) 
#define NvMConf_NvMBlockDescriptor_DemStatusDataBlock (97UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock0 (98UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock1 (99UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock2 (100UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock3 (101UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock4 (102UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock5 (103UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock6 (104UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock7 (105UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock0 (106UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock1 (107UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock2 (108UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock3 (109UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock4 (110UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock5 (111UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock6 (112UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock7 (113UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock8 (114UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock9 (115UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock10 (116UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock11 (117UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock12 (118UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock13 (119UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock14 (120UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock15 (121UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock16 (122UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock17 (123UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock18 (124UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock19 (125UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock20 (126UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock21 (127UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock22 (128UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock23 (129UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock24 (130UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock25 (131UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock26 (132UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock27 (133UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock28 (134UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock29 (135UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock30 (136UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock31 (137UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock32 (138UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock33 (139UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock34 (140UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock35 (141UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock36 (142UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock37 (143UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock38 (144UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock39 (145UL) 


/* CONST_DESCRIPTOR_TABLE contains all block relevant data, including the compiled config ID
 */
#define NVM_START_SEC_CONST_DESCRIPTOR_TABLE
#include "MemMap.h"

/* Additional published parameter because e.g. in case of validate all RAM
 * Blocks it is nice to know the number of Blocks. But take care: this number
 * of Blocks includes Block 0 and Block 1, which are the MultiBlock and the
 * Configuration Block - user Blocks start wiht index 2!
 */
extern CONST(uint16, NVM_PUBLIC_CONST) NvM_NoOfBlockIds_t;

/* Additional published parameter because in case of a clear EEPROM, it is
 * necessary, to write the Configuration Block containing this Compiled
 * Configuration ID to EEPROM
 */
/* Compiled Configuration ID as defined in NvM_Cfg.c */
/* PRQA S 0759 1 */ /* MD_MSR_18.4 */
extern CONST(NvM_CompiledConfigIdType, NVM_PUBLIC_CONST) NvM_CompiledConfigId_t;

#define NVM_STOP_SEC_CONST_DESCRIPTOR_TABLE
#include "MemMap.h"

/* Component define block (available, if EcuC module is active, otherwise only NVM_DUMMY_STATEMENTs are defined*/
#ifndef NVM_USE_DUMMY_FUNCTIONS
#define NVM_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef NVM_USE_DUMMY_STATEMENT
#define NVM_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef NVM_DUMMY_STATEMENT
#define NVM_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef NVM_DUMMY_STATEMENT_CONST
#define NVM_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef NVM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define NVM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef NVM_ATOMIC_VARIABLE_ACCESS
#define NVM_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef NVM_PROCESSOR_RH850_1373
#define NVM_PROCESSOR_RH850_1373
#endif
#ifndef NVM_COMP_GREENHILLS
#define NVM_COMP_GREENHILLS
#endif
#ifndef NVM_GEN_GENERATOR_MSR
#define NVM_GEN_GENERATOR_MSR
#endif
#ifndef NVM_CPUTYPE_BITORDER_LSB2MSB
#define NVM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef NVM_CONFIGURATION_VARIANT_PRECOMPILE
#define NVM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef NVM_CONFIGURATION_VARIANT_LINKTIME
#define NVM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef NVM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define NVM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef NVM_CONFIGURATION_VARIANT
#define NVM_CONFIGURATION_VARIANT NVM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef NVM_POSTBUILD_VARIANT_SUPPORT
#define NVM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/* ---- end public configuration section ---------------------------------- */
#endif /* NVM_CFG_H_PUBLIC */

/*---- End of File ---------------------------------------------------------*/

