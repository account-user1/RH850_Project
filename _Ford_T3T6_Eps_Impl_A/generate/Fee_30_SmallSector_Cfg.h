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
 *            Module: Fee
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Fee_30_SmallSector_Cfg.h
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

/**** Protection against multiple inclusion **************************************************************************/
#ifndef FEE_30_SMALLSECTOR_CFG_H_PUBLIC
# define FEE_30_SMALLSECTOR_CFG_H_PUBLIC
 
/**********************************************************************************************************************
 *  GENERAL DEFINE BLOCK
 *********************************************************************************************************************/
 
#ifndef FEE_USE_DUMMY_FUNCTIONS
#define FEE_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef FEE_USE_DUMMY_STATEMENT
#define FEE_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef FEE_DUMMY_STATEMENT
#define FEE_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef FEE_DUMMY_STATEMENT_CONST
#define FEE_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef FEE_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define FEE_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef FEE_ATOMIC_VARIABLE_ACCESS
#define FEE_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef FEE_PROCESSOR_RH850_1373
#define FEE_PROCESSOR_RH850_1373
#endif
#ifndef FEE_COMP_GREENHILLS
#define FEE_COMP_GREENHILLS
#endif
#ifndef FEE_GEN_GENERATOR_MSR
#define FEE_GEN_GENERATOR_MSR
#endif
#ifndef FEE_CPUTYPE_BITORDER_LSB2MSB
#define FEE_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef FEE_CONFIGURATION_VARIANT_PRECOMPILE
#define FEE_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef FEE_CONFIGURATION_VARIANT_LINKTIME
#define FEE_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef FEE_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define FEE_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef FEE_CONFIGURATION_VARIANT
#define FEE_CONFIGURATION_VARIANT FEE_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef FEE_POSTBUILD_VARIANT_SUPPORT
#define FEE_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* This is not the sub-package version but a compatibility version, which will only be updated if a change in the 
   generator (i.e. generated files) affects the implementation sub-package */
#define FEE_30_SMALLSECTOR_CFG_MAJOR_VERSION    (1u) 
#define FEE_30_SMALLSECTOR_CFG_MINOR_VERSION    (1u) 

/**** Pre-compile switches for FEE development error checks ***********************************************************/

#define FEE_30_SMALLSECTOR_DEV_ERROR_DETECT	(STD_ON)
#define FEE_30_SMALLSECTOR_DEV_ERROR_REPORT	(STD_ON)
#include "Det.h"

/***** Optional API functions **************************************************************************************/

#define FEE_30_SMALLSECTOR_VERSION_INFO_API STD_OFF

/**** Symbolic block names **************************************************************************/
  
#define FeeConf_FeeBlockConfiguration_FeeConfigBlock                                                2U 
#define FeeConf_FeeBlockConfiguration_FeeDemAdminDataBlock                                          4U 
#define FeeConf_FeeBlockConfiguration_FeeDemStatusDataBlock                                         6U 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock0                                       8U 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock1                                       10U 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock2                                       12U 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock3                                       14U 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock4                                       16U 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock5                                       18U 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock6                                       20U 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock7                                       22U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock0                                     24U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock1                                     26U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock2                                     28U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock3                                     30U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock4                                     32U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock5                                     34U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock6                                     36U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock7                                     38U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock8                                     40U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock9                                     42U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock10                                    44U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock11                                    46U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock12                                    48U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock13                                    50U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock14                                    52U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock15                                    54U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock16                                    56U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock17                                    58U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock18                                    60U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock19                                    62U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock20                                    64U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock21                                    66U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock22                                    68U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock23                                    70U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock24                                    72U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock25                                    74U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock26                                    76U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock27                                    78U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock28                                    80U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock29                                    82U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock30                                    84U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock31                                    86U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock32                                    88U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock33                                    90U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock34                                    92U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock35                                    94U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock36                                    96U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock37                                    98U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock38                                    100U 
#define FeeConf_FeeBlockConfiguration_FeeDemSecondaryDataBlock39                                    102U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_NvMProxy_ShtdwnClsChk                     104U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_DiagcMgr_DiagcMgrApplCrc                      106U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_DiagcMgr_DiagcMgrLtchCntrAry                  108U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry                    110U 
#define FeeConf_FeeBlockConfiguration_FeeBlockDescriptor                                            112U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf             114U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_MotAg2Meas_MotAg2EolPrm                       116U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_PolarityCfg_PolarityCfgSaved                  118U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSetABC         120U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSetABC         122U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_HwAgSnsrls_StordLstPrm                        124U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_EotLrng_EotNvmData                            126U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_EotLrng_MaxHwAgCwAndCcw                       128U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY                 130U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm                   132U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_SysFricLrng_FricNonLrngData                   134U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_SysFricLrng_FricLrngData                      136U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_VrfyCritReg_MCalReadVrfyCritRegFltNvmInfo 138U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_HwAg1Meas_HwAg1IfFltLtch                      140U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_HwAg1Meas_HwAg1Offs                           142U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_MotAg5Meas_MotAg5EolPrm                   144U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_MotAg5Meas_MotAg5StVari                   146U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_MotAg6Meas_MotAg6EolPrm                   148U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_MotAg6Meas_MotAg6StVari                   150U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_MotCtrlPrmEstimn_MotPrmNom                    152U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt            154U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_MotTqCmdSca_MotTqScaFac                       156U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_DutyCycThermProtn_FilStVal                    158U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_CcaHwPartNr                         160U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_CcaSerlNr                           162U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_DiRestore                           164U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_EpsSysSerlNr                        166U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_IgnCntr                             168U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf0                          170U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf1                          172U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf2                          174U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf3                          176U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf4                          178U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr                      180U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CmnMfgSrv_SeedKey                             182U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs                       184U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_HwTq8Meas_HwTq8Offs                       186U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_TEstimn_TFilStVal                             188U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_HwTq9Meas_HwTq9Offs                           190U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_HwTq10Meas_HwTq10Offs                         192U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidDE00                              194U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidDE01                              196U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidDE02                              198U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidDE03                              200U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidDE04                              202U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_Did3003                              204U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE01                              206U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE02                              208U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidF111                              210U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidF113                              212U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_FordHwAgArbn_PrevIgnCycVal                    214U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_FordHwAgArbn_NonAbsOffsVldFlg                 216U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_FordHwAgArbn_NonAbsOffs                       218U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_FordVehSpdArbn_FordVehTireCircum              220U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE87                              222U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidF110                              224U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidF163                              226U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidF18C                              228U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_Did205B                              230U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE00                              232U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidDE05                              234U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE40                              236U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidF18A                              238U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE84                              240U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidF15F                              242U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidF166                              244U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidF162                              246U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE82                              248U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE86                              250U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE88                              252U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE85                              254U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_Did205A                              256U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE81                              258U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_Did301A                              260U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE41                              262U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE83                              264U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEED0                              266U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE21                              268U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_Did630F                              270U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE22                              272U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidEE23                              274U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_Did630FChk                           276U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CustDiag_DidF190                              278U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_StackMeas_StackMeasRes                        280U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_StackMeas_StackMeasCntr                       282U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_FordBlaBoxIfCmp1_LaneAssi                 284U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl             286U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi           288U 
#define FeeConf_FeeBlockConfiguration_FeeRte_NvmBlock_CDD_FordBlaBoxIfCmp1_PullDriftCmp             290U 


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
 
typedef uint32 Fee_30_SmallSector_AddressType;

/**********************************************************************************************************************
 *  MODULE RELEVANT CONFIGURATION
 *********************************************************************************************************************/
 
#ifdef FEE_30_SMALLSECTOR_IMPLEMENTATION_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

# include "Fls.h" 

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

#define FEE_30_SMALLSECTOR_LAYER_ONE_INDEX             (0x00U)
#define FEE_30_SMALLSECTOR_LAYER_TWO_INDEX             (0x01U)
#define FEE_30_SMALLSECTOR_LAYER_THREE_INDEX           (0x02U)

/****  FLS Configuration *********************************************************************************************/

#define FEE_30_SMALLSECTOR_NUMBER_OF_FLS_DEVICES       (1U)

/****  FEE Configuration *********************************************************************************************/

#define FEE_30_SMALLSECTOR_FLS_POLLING_MODE            (STD_ON)
#define FEE_30_SMALLSECTOR_CORRECT_SINGLE_BIT_FLIPS    (STD_OFF)
#define FEE_30_SMALLSECTOR_MANAGEMENT_SIZE             (1U)
#define FEE_30_SMALLSECTOR_MAX_BLOCKS_PER_PARTITION    (145U)
#define FEE_30_SMALLSECTOR_NUMBER_OF_PARTITIONS        (1U)
#define FEE_30_SMALLSECTOR_NUMBER_OF_BLOCKS            (145U)
#define FEE_30_SMALLSECTOR_MAX_WRITE_ALIGNMENT         (4U)
#define FEE_30_SMALLSECTOR_MAX_READ_SIZE               (9U)

#define FEE_30_SMALLSECTOR_STATIC_PATTERN              (0xAAU)

/****  NVM Configuration *********************************************************************************************/

#define FEE_30_SMALLSECTOR_NVM_POLLING_MODE            (STD_ON)

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/* Function pointer prototypes for FLS API services */
typedef P2VAR(uint8, AUTOMATIC, FEE_30_SMALLSECTOR_APPL_DATA) Fee_30_SmallSector_DataPtr;
typedef P2CONST(uint8, AUTOMATIC, FEE_30_SMALLSECTOR_APPL_DATA) Fee_30_SmallSector_ConstDataPtr;

typedef P2FUNC(Std_ReturnType, FEE_30_SMALLSECTOR_PRIVATE_CODE, Fee_30_SmallSector_ReadPtrType)(Fls_AddressType FlsAddress, Fee_30_SmallSector_DataPtr TargetAddressPtr, Fls_LengthType Length);
typedef P2FUNC(Std_ReturnType, FEE_30_SMALLSECTOR_PRIVATE_CODE, Fee_30_SmallSector_WritePtrType)(Fls_AddressType FlsAddress, Fee_30_SmallSector_ConstDataPtr SourceAddressPtr, Fls_LengthType Length);
typedef P2FUNC(Std_ReturnType, FEE_30_SMALLSECTOR_PRIVATE_CODE, Fee_30_SmallSector_ComparePtrType)(Fls_AddressType FlsAddress, Fee_30_SmallSector_ConstDataPtr DataBufferPtr, Fls_LengthType Length);
typedef P2FUNC(Std_ReturnType, FEE_30_SMALLSECTOR_PRIVATE_CODE, Fee_30_SmallSector_ErasePtrType)(Fls_AddressType FlsAddress, Fls_LengthType Length);
typedef P2FUNC(Std_ReturnType, FEE_30_SMALLSECTOR_PRIVATE_CODE, Fee_30_SmallSector_BlankCheckPtrType)(Fls_AddressType FlsAddress, Fls_LengthType Length);
typedef P2FUNC(MemIf_StatusType, FEE_30_SMALLSECTOR_PRIVATE_CODE, Fee_30_SmallSector_GetStatusPtrType)(void);
typedef P2FUNC(MemIf_JobResultType, FEE_30_SMALLSECTOR_PRIVATE_CODE, Fee_30_SmallSector_GetJobResultPtrType)(void);

typedef struct
{
	Fee_30_SmallSector_ReadPtrType Read;
	Fee_30_SmallSector_WritePtrType Write;
	Fee_30_SmallSector_ComparePtrType Compare;
	Fee_30_SmallSector_ErasePtrType Erase;
	Fee_30_SmallSector_BlankCheckPtrType BlankCheck;
	Fee_30_SmallSector_GetStatusPtrType GetStatus;
	Fee_30_SmallSector_GetJobResultPtrType GetJobResult;
} Fee_30_SmallSector_FlsApiType;

typedef P2CONST(Fee_30_SmallSector_FlsApiType, AUTOMATIC, FEE_30_SMALLSECTOR_APPL_DATA) Fee_30_SmallSector_FlsApiPtrType;
  
typedef struct
{
    Fee_30_SmallSector_AddressType PartitionStartAddress;
    uint16 PartitionAddressAlignment;
    uint16 PartitionWriteAlignment;
    uint16 PartitionReadAlignment;
    uint16 FlsDeviceIndex;
    Fee_30_SmallSector_FlsApiPtrType FlsApiPtr;
    uint8 FlsEraseValue;
    boolean BlankCheckApiEnabled;
    uint16 BlockNumberList[FEE_30_SMALLSECTOR_MAX_BLOCKS_PER_PARTITION];
} Fee_30_SmallSector_PartitionConfigType;

typedef struct
{
    Fee_30_SmallSector_AddressType BlockStartAddress;
    uint16 DataLength;
    uint8 NumberOfInstances;
    uint8 NumberOfDatasets;
    boolean IsImmediateData;
    boolean HasVerificationEnabled;
} Fee_30_SmallSector_BlockConfigType;


/* Function pointer prototypes NvM callback routines */

typedef P2FUNC(void, FEE_30_SMALLSECTOR_NVM_CODE, Fee_30_SmallSector_CbkJobEndNotificationType)(void);
typedef P2FUNC(void, FEE_30_SMALLSECTOR_NVM_CODE, Fee_30_SmallSector_CbkJobErrorNotificationType)(void);

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

#define FEE_30_SMALLSECTOR_START_SEC_CONST_8BIT
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(uint8, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_DatasetSelectionBits;

#define FEE_30_SMALLSECTOR_STOP_SEC_CONST_8BIT
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define FEE_30_SMALLSECTOR_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"	/* PRQA S 5087 */ /* MD_MSR_19.1 */
  
extern CONST(Fee_30_SmallSector_PartitionConfigType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_PartitionConfigList[FEE_30_SMALLSECTOR_NUMBER_OF_PARTITIONS];
extern CONST(Fee_30_SmallSector_BlockConfigType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_BlockConfigList[FEE_30_SMALLSECTOR_NUMBER_OF_BLOCKS];
extern CONST(Fee_30_SmallSector_FlsApiType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_FlsApi0; 


/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/* Function pointers to the callback routines of the NvM. */
extern CONST(Fee_30_SmallSector_CbkJobEndNotificationType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_CbkJobEndNotification;
extern CONST(Fee_30_SmallSector_CbkJobErrorNotificationType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_CbkJobErrorNotification;

#define FEE_30_SMALLSECTOR_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"	/* PRQA S 5087 */ /* MD_MSR_19.1 */


#endif /* FEE_30_SMALLSECTOR_IMPLEMENTATION_SOURCE */

#endif /* FEE_30_SMALLSECTOR_CFG_H_PUBLIC */

/**********************************************************************************************************************
 *  END OF FILE: Fee_30_SmallSector_Cfg.h
 *********************************************************************************************************************/

