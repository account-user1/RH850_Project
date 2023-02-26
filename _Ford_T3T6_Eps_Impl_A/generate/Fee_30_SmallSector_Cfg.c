#define FEE_30_SMALLSECTOR_IMPLEMENTATION_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Fee_30_SmallSector.h"


/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
 
#if (   (FEE_30_SMALLSECTOR_CFG_MAJOR_VERSION != (1u)) \
     || (FEE_30_SMALLSECTOR_CFG_MINOR_VERSION != (1u)))
# error "Version numbers of Fee_30_SmallSector_Cfg.c and Fee_30_SmallSector_Cfg.h are inconsistent!"
#endif

/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

#define FEE_30_SMALLSECTOR_START_SEC_CONST_8BIT
#include "MemMap.h"    /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(uint8, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_DatasetSelectionBits = (1U);

#define FEE_30_SMALLSECTOR_STOP_SEC_CONST_8BIT
#include "MemMap.h"   /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define FEE_30_SMALLSECTOR_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* PRQA S 686 PARTITIONLIST */ /* MD_FEE_30_SMALLSECTOR_9.2 */
CONST(Fee_30_SmallSector_PartitionConfigType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_PartitionConfigList[FEE_30_SMALLSECTOR_NUMBER_OF_PARTITIONS] = 
{
   /*  FEE0  */ {
     /*  Partition Start Address  */ 0x00000000UL, 
     /*  Partition Address Alignment  */ 0x0040U, 
     /*  Partition Write Alignment  */ 0x0004U, 
     /*  Partition Read Alignment  */ 0x0001U, 
     /*  FLS Device Index  */ 0x0000U, 
     /*  FLS API Reference  */ &Fee_30_SmallSector_FlsApi0, 
     /*  FLS Erase Value  */ 0xFFU, 
     /*  FLS Blank Check API Enabled  */ TRUE, 
    {
       /*  FeeConfigBlock  */ 0x0002U, 
       /*  FeeDemAdminDataBlock  */ 0x0004U, 
       /*  FeeDemStatusDataBlock  */ 0x0006U, 
       /*  FeeDemPrimaryDataBlock0  */ 0x0008U, 
       /*  FeeDemPrimaryDataBlock1  */ 0x000AU, 
       /*  FeeDemPrimaryDataBlock2  */ 0x000CU, 
       /*  FeeDemPrimaryDataBlock3  */ 0x000EU, 
       /*  FeeDemPrimaryDataBlock4  */ 0x0010U, 
       /*  FeeDemPrimaryDataBlock5  */ 0x0012U, 
       /*  FeeDemPrimaryDataBlock6  */ 0x0014U, 
       /*  FeeDemPrimaryDataBlock7  */ 0x0016U, 
       /*  FeeDemSecondaryDataBlock0  */ 0x0018U, 
       /*  FeeDemSecondaryDataBlock1  */ 0x001AU, 
       /*  FeeDemSecondaryDataBlock2  */ 0x001CU, 
       /*  FeeDemSecondaryDataBlock3  */ 0x001EU, 
       /*  FeeDemSecondaryDataBlock4  */ 0x0020U, 
       /*  FeeDemSecondaryDataBlock5  */ 0x0022U, 
       /*  FeeDemSecondaryDataBlock6  */ 0x0024U, 
       /*  FeeDemSecondaryDataBlock7  */ 0x0026U, 
       /*  FeeDemSecondaryDataBlock8  */ 0x0028U, 
       /*  FeeDemSecondaryDataBlock9  */ 0x002AU, 
       /*  FeeDemSecondaryDataBlock10  */ 0x002CU, 
       /*  FeeDemSecondaryDataBlock11  */ 0x002EU, 
       /*  FeeDemSecondaryDataBlock12  */ 0x0030U, 
       /*  FeeDemSecondaryDataBlock13  */ 0x0032U, 
       /*  FeeDemSecondaryDataBlock14  */ 0x0034U, 
       /*  FeeDemSecondaryDataBlock15  */ 0x0036U, 
       /*  FeeDemSecondaryDataBlock16  */ 0x0038U, 
       /*  FeeDemSecondaryDataBlock17  */ 0x003AU, 
       /*  FeeDemSecondaryDataBlock18  */ 0x003CU, 
       /*  FeeDemSecondaryDataBlock19  */ 0x003EU, 
       /*  FeeDemSecondaryDataBlock20  */ 0x0040U, 
       /*  FeeDemSecondaryDataBlock21  */ 0x0042U, 
       /*  FeeDemSecondaryDataBlock22  */ 0x0044U, 
       /*  FeeDemSecondaryDataBlock23  */ 0x0046U, 
       /*  FeeDemSecondaryDataBlock24  */ 0x0048U, 
       /*  FeeDemSecondaryDataBlock25  */ 0x004AU, 
       /*  FeeDemSecondaryDataBlock26  */ 0x004CU, 
       /*  FeeDemSecondaryDataBlock27  */ 0x004EU, 
       /*  FeeDemSecondaryDataBlock28  */ 0x0050U, 
       /*  FeeDemSecondaryDataBlock29  */ 0x0052U, 
       /*  FeeDemSecondaryDataBlock30  */ 0x0054U, 
       /*  FeeDemSecondaryDataBlock31  */ 0x0056U, 
       /*  FeeDemSecondaryDataBlock32  */ 0x0058U, 
       /*  FeeDemSecondaryDataBlock33  */ 0x005AU, 
       /*  FeeDemSecondaryDataBlock34  */ 0x005CU, 
       /*  FeeDemSecondaryDataBlock35  */ 0x005EU, 
       /*  FeeDemSecondaryDataBlock36  */ 0x0060U, 
       /*  FeeDemSecondaryDataBlock37  */ 0x0062U, 
       /*  FeeDemSecondaryDataBlock38  */ 0x0064U, 
       /*  FeeDemSecondaryDataBlock39  */ 0x0066U, 
       /*  FeeRte_NvmBlock_CDD_NvMProxy_ShtdwnClsChk  */ 0x0068U, 
       /*  FeeRte_NvmBlock_DiagcMgr_DiagcMgrApplCrc  */ 0x006AU, 
       /*  FeeRte_NvmBlock_DiagcMgr_DiagcMgrLtchCntrAry  */ 0x006CU, 
       /*  FeeRte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry  */ 0x006EU, 
       /*  FeeBlockDescriptor  */ 0x0070U, 
       /*  FeeRte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf  */ 0x0072U, 
       /*  FeeRte_NvmBlock_MotAg2Meas_MotAg2EolPrm  */ 0x0074U, 
       /*  FeeRte_NvmBlock_PolarityCfg_PolarityCfgSaved  */ 0x0076U, 
       /*  FeeRte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSetABC  */ 0x0078U, 
       /*  FeeRte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSetABC  */ 0x007AU, 
       /*  FeeRte_NvmBlock_HwAgSnsrls_StordLstPrm  */ 0x007CU, 
       /*  FeeRte_NvmBlock_EotLrng_EotNvmData  */ 0x007EU, 
       /*  FeeRte_NvmBlock_EotLrng_MaxHwAgCwAndCcw  */ 0x0080U, 
       /*  FeeRte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY  */ 0x0082U, 
       /*  FeeRte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm  */ 0x0084U, 
       /*  FeeRte_NvmBlock_SysFricLrng_FricNonLrngData  */ 0x0086U, 
       /*  FeeRte_NvmBlock_SysFricLrng_FricLrngData  */ 0x0088U, 
       /*  FeeRte_NvmBlock_CDD_VrfyCritReg_MCalReadVrfyCritRegFltNvmInfo  */ 0x008AU, 
       /*  FeeRte_NvmBlock_HwAg1Meas_HwAg1IfFltLtch  */ 0x008CU, 
       /*  FeeRte_NvmBlock_HwAg1Meas_HwAg1Offs  */ 0x008EU, 
       /*  FeeRte_NvmBlock_CDD_MotAg5Meas_MotAg5EolPrm  */ 0x0090U, 
       /*  FeeRte_NvmBlock_CDD_MotAg5Meas_MotAg5StVari  */ 0x0092U, 
       /*  FeeRte_NvmBlock_CDD_MotAg6Meas_MotAg6EolPrm  */ 0x0094U, 
       /*  FeeRte_NvmBlock_CDD_MotAg6Meas_MotAg6StVari  */ 0x0096U, 
       /*  FeeRte_NvmBlock_MotCtrlPrmEstimn_MotPrmNom  */ 0x0098U, 
       /*  FeeRte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt  */ 0x009AU, 
       /*  FeeRte_NvmBlock_MotTqCmdSca_MotTqScaFac  */ 0x009CU, 
       /*  FeeRte_NvmBlock_DutyCycThermProtn_FilStVal  */ 0x009EU, 
       /*  FeeRte_NvmBlock_CmnMfgSrv_CcaHwPartNr  */ 0x00A0U, 
       /*  FeeRte_NvmBlock_CmnMfgSrv_CcaSerlNr  */ 0x00A2U, 
       /*  FeeRte_NvmBlock_CmnMfgSrv_DiRestore  */ 0x00A4U, 
       /*  FeeRte_NvmBlock_CmnMfgSrv_EpsSysSerlNr  */ 0x00A6U, 
       /*  FeeRte_NvmBlock_CmnMfgSrv_IgnCntr  */ 0x00A8U, 
       /*  FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf0  */ 0x00AAU, 
       /*  FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf1  */ 0x00ACU, 
       /*  FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf2  */ 0x00AEU, 
       /*  FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf3  */ 0x00B0U, 
       /*  FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf4  */ 0x00B2U, 
       /*  FeeRte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr  */ 0x00B4U, 
       /*  FeeRte_NvmBlock_CmnMfgSrv_SeedKey  */ 0x00B6U, 
       /*  FeeRte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs  */ 0x00B8U, 
       /*  FeeRte_NvmBlock_CDD_HwTq8Meas_HwTq8Offs  */ 0x00BAU, 
       /*  FeeRte_NvmBlock_TEstimn_TFilStVal  */ 0x00BCU, 
       /*  FeeRte_NvmBlock_HwTq9Meas_HwTq9Offs  */ 0x00BEU, 
       /*  FeeRte_NvmBlock_HwTq10Meas_HwTq10Offs  */ 0x00C0U, 
       /*  FeeRte_NvmBlock_CustDiag_DidDE00  */ 0x00C2U, 
       /*  FeeRte_NvmBlock_CustDiag_DidDE01  */ 0x00C4U, 
       /*  FeeRte_NvmBlock_CustDiag_DidDE02  */ 0x00C6U, 
       /*  FeeRte_NvmBlock_CustDiag_DidDE03  */ 0x00C8U, 
       /*  FeeRte_NvmBlock_CustDiag_DidDE04  */ 0x00CAU, 
       /*  FeeRte_NvmBlock_CustDiag_Did3003  */ 0x00CCU, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE01  */ 0x00CEU, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE02  */ 0x00D0U, 
       /*  FeeRte_NvmBlock_CustDiag_DidF111  */ 0x00D2U, 
       /*  FeeRte_NvmBlock_CustDiag_DidF113  */ 0x00D4U, 
       /*  FeeRte_NvmBlock_FordHwAgArbn_PrevIgnCycVal  */ 0x00D6U, 
       /*  FeeRte_NvmBlock_FordHwAgArbn_NonAbsOffsVldFlg  */ 0x00D8U, 
       /*  FeeRte_NvmBlock_FordHwAgArbn_NonAbsOffs  */ 0x00DAU, 
       /*  FeeRte_NvmBlock_FordVehSpdArbn_FordVehTireCircum  */ 0x00DCU, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE87  */ 0x00DEU, 
       /*  FeeRte_NvmBlock_CustDiag_DidF110  */ 0x00E0U, 
       /*  FeeRte_NvmBlock_CustDiag_DidF163  */ 0x00E2U, 
       /*  FeeRte_NvmBlock_CustDiag_DidF18C  */ 0x00E4U, 
       /*  FeeRte_NvmBlock_CustDiag_Did205B  */ 0x00E6U, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE00  */ 0x00E8U, 
       /*  FeeRte_NvmBlock_CustDiag_DidDE05  */ 0x00EAU, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE40  */ 0x00ECU, 
       /*  FeeRte_NvmBlock_CustDiag_DidF18A  */ 0x00EEU, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE84  */ 0x00F0U, 
       /*  FeeRte_NvmBlock_CustDiag_DidF15F  */ 0x00F2U, 
       /*  FeeRte_NvmBlock_CustDiag_DidF166  */ 0x00F4U, 
       /*  FeeRte_NvmBlock_CustDiag_DidF162  */ 0x00F6U, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE82  */ 0x00F8U, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE86  */ 0x00FAU, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE88  */ 0x00FCU, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE85  */ 0x00FEU, 
       /*  FeeRte_NvmBlock_CustDiag_Did205A  */ 0x0100U, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE81  */ 0x0102U, 
       /*  FeeRte_NvmBlock_CustDiag_Did301A  */ 0x0104U, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE41  */ 0x0106U, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE83  */ 0x0108U, 
       /*  FeeRte_NvmBlock_CustDiag_DidEED0  */ 0x010AU, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE21  */ 0x010CU, 
       /*  FeeRte_NvmBlock_CustDiag_Did630F  */ 0x010EU, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE22  */ 0x0110U, 
       /*  FeeRte_NvmBlock_CustDiag_DidEE23  */ 0x0112U, 
       /*  FeeRte_NvmBlock_CustDiag_Did630FChk  */ 0x0114U, 
       /*  FeeRte_NvmBlock_CustDiag_DidF190  */ 0x0116U, 
       /*  FeeRte_NvmBlock_StackMeas_StackMeasRes  */ 0x0118U, 
       /*  FeeRte_NvmBlock_StackMeas_StackMeasCntr  */ 0x011AU, 
       /*  FeeRte_NvmBlock_CDD_FordBlaBoxIfCmp1_LaneAssi  */ 0x011CU, 
       /*  FeeRte_NvmBlock_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl  */ 0x011EU, 
       /*  FeeRte_NvmBlock_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi  */ 0x0120U, 
       /*  FeeRte_NvmBlock_CDD_FordBlaBoxIfCmp1_PullDriftCmp  */ 0x0122U
    }
  }
};
/* PRQA L: PARTITIONLIST */

/* BlockConfigList is sorted by BlockNumbers in ascending order */
CONST(Fee_30_SmallSector_BlockConfigType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_BlockConfigList[FEE_30_SMALLSECTOR_NUMBER_OF_BLOCKS] =
{
  {
     /*  Block Start Address  */ 0x00000000UL, 
     /*  Data Length  */ 0x0004U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000040UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000080UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000000C0UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000100UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000140UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000180UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000001C0UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000200UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000240UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000280UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000002C0UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000300UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000340UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000380UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000003C0UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000400UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000440UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000480UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000004C0UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000500UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000540UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000580UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000005C0UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000600UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000640UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000680UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000006C0UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000700UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000740UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000780UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000007C0UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000800UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000840UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000880UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000008C0UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000900UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000940UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000980UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000009C0UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000A00UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000A40UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000A80UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000AC0UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000B00UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000B40UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000B80UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000BC0UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000C00UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000C40UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000C80UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000CC0UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000D00UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000D40UL, 
     /*  Data Length  */ 0x0016U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000D80UL, 
     /*  Data Length  */ 0x0052U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000E00UL, 
     /*  Data Length  */ 0x0102U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000F40UL, 
     /*  Data Length  */ 0x0004U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000F80UL, 
     /*  Data Length  */ 0x0016U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000FC0UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001000UL, 
     /*  Data Length  */ 0x000EU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001040UL, 
     /*  Data Length  */ 0x001EU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001080UL, 
     /*  Data Length  */ 0x000AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000010C0UL, 
     /*  Data Length  */ 0x000EU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001100UL, 
     /*  Data Length  */ 0x000EU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001140UL, 
     /*  Data Length  */ 0x0402U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001580UL, 
     /*  Data Length  */ 0x0014U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000015C0UL, 
     /*  Data Length  */ 0x000AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001600UL, 
     /*  Data Length  */ 0x00DAU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001700UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001740UL, 
     /*  Data Length  */ 0x0003U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001780UL, 
     /*  Data Length  */ 0x000AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000017C0UL, 
     /*  Data Length  */ 0x0136U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001940UL, 
     /*  Data Length  */ 0x0012U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001980UL, 
     /*  Data Length  */ 0x0136U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001B00UL, 
     /*  Data Length  */ 0x0012U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001B40UL, 
     /*  Data Length  */ 0x000AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001B80UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001BC0UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001C00UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001C40UL, 
     /*  Data Length  */ 0x0016U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001C80UL, 
     /*  Data Length  */ 0x0016U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001CC0UL, 
     /*  Data Length  */ 0x000AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001D00UL, 
     /*  Data Length  */ 0x0016U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001D40UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001D80UL, 
     /*  Data Length  */ 0x0012U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001DC0UL, 
     /*  Data Length  */ 0x0012U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001E00UL, 
     /*  Data Length  */ 0x0012U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001E40UL, 
     /*  Data Length  */ 0x0012U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001E80UL, 
     /*  Data Length  */ 0x0012U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001EC0UL, 
     /*  Data Length  */ 0x0003U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001F00UL, 
     /*  Data Length  */ 0x000AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001F40UL, 
     /*  Data Length  */ 0x000AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001F80UL, 
     /*  Data Length  */ 0x000AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00001FC0UL, 
     /*  Data Length  */ 0x0022U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002000UL, 
     /*  Data Length  */ 0x000AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002040UL, 
     /*  Data Length  */ 0x000AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002080UL, 
     /*  Data Length  */ 0x001AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000020C0UL, 
     /*  Data Length  */ 0x001AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002100UL, 
     /*  Data Length  */ 0x001AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002140UL, 
     /*  Data Length  */ 0x0042U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000021C0UL, 
     /*  Data Length  */ 0x0004U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002200UL, 
     /*  Data Length  */ 0x001AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002240UL, 
     /*  Data Length  */ 0x0003U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002280UL, 
     /*  Data Length  */ 0x0003U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000022C0UL, 
     /*  Data Length  */ 0x001AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002300UL, 
     /*  Data Length  */ 0x001AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002340UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002380UL, 
     /*  Data Length  */ 0x0003U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000023C0UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002400UL, 
     /*  Data Length  */ 0x0004U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002440UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002480UL, 
     /*  Data Length  */ 0x001AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000024C0UL, 
     /*  Data Length  */ 0x0003U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002500UL, 
     /*  Data Length  */ 0x0012U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002540UL, 
     /*  Data Length  */ 0x0004U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002580UL, 
     /*  Data Length  */ 0x0005U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000025C0UL, 
     /*  Data Length  */ 0x001AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002600UL, 
     /*  Data Length  */ 0x0005U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002640UL, 
     /*  Data Length  */ 0x001AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002680UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000026C0UL, 
     /*  Data Length  */ 0x000CU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002700UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002740UL, 
     /*  Data Length  */ 0x0003U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002780UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000027C0UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002800UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002840UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002880UL, 
     /*  Data Length  */ 0x0004U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000028C0UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002900UL, 
     /*  Data Length  */ 0x0004U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002940UL, 
     /*  Data Length  */ 0x0003U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002980UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000029C0UL, 
     /*  Data Length  */ 0x0003U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002A00UL, 
     /*  Data Length  */ 0x0016U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002A40UL, 
     /*  Data Length  */ 0x001AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002A80UL, 
     /*  Data Length  */ 0x002AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002AC0UL, 
     /*  Data Length  */ 0x002AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002B00UL, 
     /*  Data Length  */ 0x0003U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002B40UL, 
     /*  Data Length  */ 0x001AU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002B80UL, 
     /*  Data Length  */ 0x0032U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002BC0UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002C00UL, 
     /*  Data Length  */ 0x0102U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002D40UL, 
     /*  Data Length  */ 0x0082U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00002E00UL, 
     /*  Data Length  */ 0x0202U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00003040UL, 
     /*  Data Length  */ 0x0082U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }
};
/* FLS API pointer table */
CONST(Fee_30_SmallSector_FlsApiType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_FlsApi0 = 
{
   /*  Read Service  */ Fls_Read, 
   /*  Write Service  */ Fls_Write, 
   /*  Compare Service  */ Fls_Compare, 
   /*  Erase Service  */ Fls_Erase, 
   /*  Blank Check Service  */ Fls_BlankCheck, 
   /*  Get Status Service  */ Fls_GetStatus, 
   /*  Get Job Result Service  */ Fls_GetJobResult
};
 

/**** NvM Callback Assignments ****/
CONST(Fee_30_SmallSector_CbkJobEndNotificationType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_CbkJobEndNotification =
    NULL_PTR;
CONST(Fee_30_SmallSector_CbkJobErrorNotificationType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_CbkJobErrorNotification =
    NULL_PTR;

#define FEE_30_SMALLSECTOR_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"	/* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Justification for module-specific MISRA deviations:
 MD_FEE_30_SMALLSECTOR_9.2: rule 9.2
      Reason:     Array size of Fee_30_SmallSector_PartitionConfigType.BlockNumberList depends on maximum number of blocks in one partition.             
      Risk:       No risk. Partitions with fewer blocks and thus BlockNumberLists with fewer initializers are implicitly 
                  initialized to zero.
      Prevention: Program flow has been verified by component tests and review.
*/

/**********************************************************************************************************************
 *  END OF FILE: Fee_30_SmallSector_Cfg.c
 *********************************************************************************************************************/

