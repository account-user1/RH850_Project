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
 *            Module: Dem
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dem_Lcfg.c
 *   Generation Time: 2018-02-04 15:16:37
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



/* configuration, interrupt handling implementations differ from the
 * source identification define used here. The naming
 * schemes for those files can be taken from this list:
 *
 * Dem.c:         DEM_SOURCE
 * Dem_Lcfg.c:    DEM_LCFG_SOURCE
 * Dem_PBcfg.c:   DEM_PBCFG_SOURCE */
#define DEM_LCFG_SOURCE


/**********************************************************************************************************************
  MISRA JUSTIFICATIONS
**********************************************************************************************************************/

/* PRQA S 0828 EOF */ /* MD_MSR_1.1_828 */                                      /* Maximum '#if...' nesting exceeds 8 levels - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */                                      /* Number of macro definitions exceeds 1024 - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0779 EOF */ /* MD_DEM_5.1 */                                          /* Identifier does not differ in 32 significant characters -- caused by Autosar algorithm for unique symbolic names. */
/* PRQA S 0612 EOF */ /* MD_DEM_1.1_612 */                                      /* The size of an object exceeds 32767 bytes - program is non-conforming -- caused by large user configration. */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

#include "Dem.h"
#if (DEM_CFG_USE_NVM == STD_ON)
# include "NvM.h"                                                           /* get: symbolic names for NvM block IDs */
#endif
#if (DEM_CFG_SUPPORT_J1939 == STD_ON)
# include "J1939Nm.h"                                                       /* get: symbolic names for J1939Nm node IDs */
#endif
#if (DEM_CFG_USE_RTE == STD_ON)
/* DEM used with RTE */
# include "Rte_Dem.h"
#else
#endif


/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Dem_Cfg_CycleIdTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_CycleIdTable
  \details
  Element         Description
  UsedForAging    DemOperationCycle is target of any DemEventParameter/DemEventClass/DemAgingCycleRef
  OpCycleType     DemOperationCycleType of the DemOperationCycle: [DEM_CFG_OPCYC_IGNITION, DEM_CFG_OPCYC_OBD_DCY, DEM_CFG_OPCYC_OTHER, DEM_CFG_OPCYC_POWER, DEM_CFG_OPCYC_TIME, DEM_CFG_OPCYC_WARMUP, DEM_CFG_OPCYC_IGNITION_HYBRID, DEM_CFG_OPCYC_AGING]
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_CycleIdTableType, DEM_CONST) Dem_Cfg_CycleIdTable[3] = {
    /* Index    UsedForAging  OpCycleType                   Comment */
  { /*     0 */        FALSE, DEM_CFG_OPCYC_OTHER    },  /* [DemConf_DemOperationCycle_DemOperationCycle] */
  { /*     1 */         TRUE, DEM_CFG_OPCYC_IGNITION },  /* [DemConf_DemOperationCycle_IgnitionCycle] */
  { /*     2 */        FALSE, DEM_CFG_OPCYC_POWER    }   /* [DemConf_DemOperationCycle_PowerCycle] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTable
  \details
  Element                                Description
  DataElementTableCol2ElmtIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  DataElementTableCol2ElmtIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  IdNumber                           
  MaskedBits                             contains bitcoded the boolean data of Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTable, Dem_Cfg_UpdateOfDataCollectionTable
  StorageKind                        
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableType, DEM_CONST) Dem_Cfg_DataCollectionTable[3] = {
    /* Index    DataElementTableCol2ElmtIndEndIdx                                  DataElementTableCol2ElmtIndStartIdx                                  IdNumber  MaskedBits  StorageKind                     Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE,  0x0000U,      0x00U, DEM_CFG_EREC_TYPE_GLOBAL },  /* [#NoDataCollectionConfigured] */
  { /*     1 */                                                                1U,                                                                  0U,  0x0010U,      0x03U, DEM_CFG_EREC_TYPE_USER   },  /* [#EdrDTCdetectioncounter, Ext:ExtendedDataClass_d1497ac7] */
  { /*     2 */                                                                2U,                                                                  1U,  0x0002U,      0x03U, DEM_CFG_EREC_TYPE_USER   }   /* [#EdrMonitoringcyclecounter2, Ext:ExtendedDataClass_d1497ac7] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTableEdr2CollInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTableEdr2CollInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataCollectionTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableEdr2CollIndType, DEM_CONST) Dem_Cfg_DataCollectionTableEdr2CollInd[2] = {
  /* Index    DataCollectionTableEdr2CollInd      Referable Keys */
  /*     0 */                             2U,  /* [Ext:ExtendedDataClass_d1497ac7] */
  /*     1 */                             1U   /* [Ext:ExtendedDataClass_d1497ac7] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataElementTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTable
  \details
  Element         Description
  ElementKind     DataElement kind, returned by Dem_Cfg_DataCallbackType()
  ReadDataFunc    C-function for getting the data. Its signature depends on ElementKind: With value 28U or 30U use: Std_ReturnType (*)(uint8* Buffer); With value 29U or 31U use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId);.
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataElementTableType, DEM_CONST) Dem_Cfg_DataElementTable[3] = {
    /* Index    ElementKind                   ReadDataFunc                                                                                                                                Referable Keys */
  { /*     0 */ DEM_CFG_DATAELEMENT_INVALID ,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                 },  /* [#NoDataElementConfigured] */
  { /*     1 */ DEM_CFG_DATA_FROM_CBK_STORED,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_DTCDetectionCounter_ReadData     },  /* [#DemDataElementClass_DTCDetectionCounter, EdrDTCdetectioncounter] */
  { /*     2 */ DEM_CFG_DATA_FROM_CBK_STORED,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_MonitoringCycleCounter2_ReadData }   /* [#DemDataElementClass_MonitoringCycleCounter2, EdrMonitoringcyclecounter2] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DebounceTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DebounceTable
  \details
  Element                   Description
  FailedThreshold           DemDebounceCounterFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  DecrementStepSize         (-1) * DemDebounceCounterDecrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  IncrementStepSize         DemDebounceCounterIncrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  PassedThreshold           DemDebounceCounterPassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  EventDebounceAlgorithm    Used DemEventParameter/DemEventClass/DemDebounceAlgorithmClass
  MaskedBits                contains bitcoded the boolean data of Dem_Cfg_DebounceContinuousOfDebounceTable, Dem_Cfg_EventDebounceBehaviorOfDebounceTable, Dem_Cfg_JumpDownOfDebounceTable, Dem_Cfg_JumpUpOfDebounceTable, Dem_Cfg_StorageOfDebounceTable
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DebounceTableType, DEM_CONST) Dem_Cfg_DebounceTable[3] = {
    /* Index    FailedThreshold  DecrementStepSize  IncrementStepSize  PassedThreshold  EventDebounceAlgorithm                                                      MaskedBits        Referable Keys */
  { /*     0 */             128,                -1,                 1,            -128, DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x06U },  /* [DTC_0x502d00, DTC_0x511056, DTC_0x5b0049, DTC_0x5b0062, DTC_0x600b49, DTC_0x600b62, DTC_0x600c49, DTC_0x600c62, DTC_0x600d49, DTC_0x600d62, DTC_0x9d234b, DTC_0xc10000, DTC_0xc10200, DTC_0xc12100, DTC_0xc12200, DTC_0xc12600, DTC_0xc14000, DTC_0xc14600, DTC_0xc15500, DTC_0xc15900, DTC_0xc23a00, DTC_0xc23b00, DTC_0xc25200, DTC_0xc25300, DTC_0xc25600, DTC_0xc40100, DTC_0xc40300, DTC_0xc41500, DTC_0xc41522, DTC_0xc41600, DTC_0xc42200, DTC_0xc42300, DTC_0xc42800, DTC_0xc45a00, DTC_0xc53b00, DTC_0xc53c00, DTC_0xc55300, DTC_0xc55400, DTC_0xc55700, DTC_0xe01478, DTC_0xe01481, DTC_0xe01492, DTC_0xe01647, DTC_0xe01648, DTC_0xe10000, DTC_0xe30055, DTC_0xf00042, DTC_0xf00049, DTC_0xf00061, DTC_0xf00168, DTC_0xf00316, DTC_0xf00317, DTC_0xf00368] */
  { /*     1 */             127,                -1,                 1,            -128, DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x06U },  /* [DIO_E_REG_WRITE_VERIFY, FLS_E_COMPARE_FAILED, FLS_E_ERASE_FAILED, FLS_E_HW_FAILURE, FLS_E_READ_FAILED, FLS_E_READ_FAILED_DED, FLS_E_WRITE_FAILED, MCU_E_CLOCK_FAILURE, MCU_E_POWERDOWN_MODE_FAILURE, MCU_E_WRITE_TIMEOUT_FAILURE, NVM_E_INTEGRITY_FAILED, NVM_E_LOSS_OF_REDUNDANCY, NVM_E_QUEUE_OVERFLOW, NVM_E_REQ_FAILED, NVM_E_WRITE_PROTECTED, PORT_E_REG_WRITE_VERIFY, SPI_E_DATA_TX_TIMEOUT_FAILURE, SPI_E_HARDWARE_ERROR, WDG_E_DISABLE_REJECTED, WDG_E_MODE_FAILED, WDG_E_READBACK_FAILURE] */
  { /*     2 */               0,                 0,                 0,               0, DEM_CFG_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x00U }   /* [#EVENT_INVALID] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DtcTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DtcTable
  \details
  Element    Description
  UdsDtc 
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DtcTableType, DEM_CONST) Dem_Cfg_DtcTable[54] = {
    /* Index    UdsDtc              Referable Keys */
  { /*     0 */ 0x00FFFFFFUL },  /* [#NoUdsDtcConfigured, #NoObdDtcConfigured, #NoJ1939DtcConfigured] */
  { /*     1 */ 0x005B0049UL },  /* [DTCClass_DTC_0x5b0049] */
  { /*     2 */ 0x005B0062UL },  /* [DTCClass_DTC_0x5b0062] */
  { /*     3 */ 0x009D234BUL },  /* [DTCClass_DTC_0x9d234b] */
  { /*     4 */ 0x00502D00UL },  /* [DTCClass_DTC_0x502d00] */
  { /*     5 */ 0x00600B49UL },  /* [DTCClass_DTC_0x600b49] */
  { /*     6 */ 0x00600B62UL },  /* [DTCClass_DTC_0x600b62] */
  { /*     7 */ 0x00600C49UL },  /* [DTCClass_DTC_0x600c49] */
  { /*     8 */ 0x00600C62UL },  /* [DTCClass_DTC_0x600c62] */
  { /*     9 */ 0x00600D49UL },  /* [DTCClass_DTC_0x600d49] */
  { /*    10 */ 0x00600D62UL },  /* [DTCClass_DTC_0x600d62] */
  { /*    11 */ 0x00511056UL },  /* [DTCClass_DTC_0x511056] */
  { /*    12 */ 0x00C23A00UL },  /* [DTCClass_DTC_0xc23a00] */
  { /*    13 */ 0x00C23B00UL },  /* [DTCClass_DTC_0xc23b00] */
  { /*    14 */ 0x00C45A00UL },  /* [DTCClass_DTC_0xc45a00] */
  { /*    15 */ 0x00C53B00UL },  /* [DTCClass_DTC_0xc53b00] */
  { /*    16 */ 0x00C53C00UL },  /* [DTCClass_DTC_0xc53c00] */
  { /*    17 */ 0x00C10000UL },  /* [DTCClass_DTC_0xc10000] */
  { /*    18 */ 0x00C10200UL },  /* [DTCClass_DTC_0xc10200] */
  { /*    19 */ 0x00C12100UL },  /* [DTCClass_DTC_0xc12100] */
  { /*    20 */ 0x00C12200UL },  /* [DTCClass_DTC_0xc12200] */
  { /*    21 */ 0x00C12600UL },  /* [DTCClass_DTC_0xc12600] */
  { /*    22 */ 0x00C14000UL },  /* [DTCClass_DTC_0xc14000] */
  { /*    23 */ 0x00C14600UL },  /* [DTCClass_DTC_0xc14600] */
  { /*    24 */ 0x00C15500UL },  /* [DTCClass_DTC_0xc15500] */
  { /*    25 */ 0x00C15900UL },  /* [DTCClass_DTC_0xc15900] */
  { /*    26 */ 0x00C25200UL },  /* [DTCClass_DTC_0xc25200] */
  { /*    27 */ 0x00C25300UL },  /* [DTCClass_DTC_0xc25300] */
  { /*    28 */ 0x00C25600UL },  /* [DTCClass_DTC_0xc25600] */
  { /*    29 */ 0x00C40100UL },  /* [DTCClass_DTC_0xc40100] */
  { /*    30 */ 0x00C40300UL },  /* [DTCClass_DTC_0xc40300] */
  { /*    31 */ 0x00C41500UL },  /* [DTCClass_DTC_0xc41500] */
  { /*    32 */ 0x00C41522UL },  /* [DTCClass_DTC_0xc41522] */
  { /*    33 */ 0x00C41600UL },  /* [DTCClass_DTC_0xc41600] */
  { /*    34 */ 0x00C42200UL },  /* [DTCClass_DTC_0xc42200] */
  { /*    35 */ 0x00C42300UL },  /* [DTCClass_DTC_0xc42300] */
  { /*    36 */ 0x00C42800UL },  /* [DTCClass_DTC_0xc42800] */
  { /*    37 */ 0x00C55300UL },  /* [DTCClass_DTC_0xc55300] */
  { /*    38 */ 0x00C55400UL },  /* [DTCClass_DTC_0xc55400] */
  { /*    39 */ 0x00C55700UL },  /* [DTCClass_DTC_0xc55700] */
  { /*    40 */ 0x00E01478UL },  /* [DTCClass_DTC_0xe01478] */
  { /*    41 */ 0x00E01481UL },  /* [DTCClass_DTC_0xe01481] */
  { /*    42 */ 0x00E01492UL },  /* [DTCClass_DTC_0xe01492] */
  { /*    43 */ 0x00E01647UL },  /* [DTCClass_DTC_0xe01647] */
  { /*    44 */ 0x00E01648UL },  /* [DTCClass_DTC_0xe01648] */
  { /*    45 */ 0x00E10000UL },  /* [DTCClass_DTC_0xe10000] */
  { /*    46 */ 0x00E30055UL },  /* [DTCClass_DTC_0xe30055] */
  { /*    47 */ 0x00F00042UL },  /* [DTCClass_DTC_0xf00042] */
  { /*    48 */ 0x00F00049UL },  /* [DTCClass_DTC_0xf00049] */
  { /*    49 */ 0x00F00061UL },  /* [DTCClass_DTC_0xf00061] */
    /* Index    UdsDtc              Referable Keys */
  { /*    50 */ 0x00F00168UL },  /* [DTCClass_DTC_0xf00168] */
  { /*    51 */ 0x00F00316UL },  /* [DTCClass_DTC_0xf00316] */
  { /*    52 */ 0x00F00317UL },  /* [DTCClass_DTC_0xf00317] */
  { /*    53 */ 0x00F00368UL }   /* [DTCClass_DTC_0xf00368] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventTable
  \details
  Element                 Description
  AgingCycleId            DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemAgingCycleRef
  DebounceTableIdx        the index of the 1:1 relation pointing to Dem_Cfg_DebounceTable
  DtcTableIdx             the index of the 1:1 relation pointing to Dem_Cfg_DtcTable
  EventDestination        DemEventDestination of the DemEventParameter/DemEventClass
  ExtendedDataTableIdx    the index of the 1:1 relation pointing to Dem_Cfg_ExtendedDataTable
  OperationCycleId        DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemOperationCycleRef
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_EventTableType, DEM_CONST) Dem_Cfg_EventTable[75] = {
    /* Index    AgingCycleId                             DebounceTableIdx  DtcTableIdx  EventDestination            ExtendedDataTableIdx  OperationCycleId                                   Referable Keys */
  { /*     0 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_PRIMARY  ,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [#EVENT_INVALID] */
  { /*     1 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_PRIMARY  ,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [DIO_E_REG_WRITE_VERIFY] */
  { /*     2 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_PRIMARY  ,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [PORT_E_REG_WRITE_VERIFY] */
  { /*     3 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,          1U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0x5b0049] */
  { /*     4 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,          2U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0x5b0062] */
  { /*     5 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,          3U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0x9d234b] */
  { /*     6 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,          4U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0x502d00] */
  { /*     7 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,          5U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0x600b49] */
  { /*     8 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,          6U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0x600b62] */
  { /*     9 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,          7U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0x600c49] */
  { /*    10 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,          8U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0x600c62] */
  { /*    11 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,          9U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0x600d49] */
  { /*    12 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         10U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0x600d62] */
  { /*    13 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         11U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0x511056] */
  { /*    14 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         12U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc23a00] */
  { /*    15 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         13U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc23b00] */
  { /*    16 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         14U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc45a00] */
  { /*    17 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         15U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc53b00] */
  { /*    18 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         16U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc53c00] */
  { /*    19 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         17U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc10000] */
  { /*    20 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         18U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc10200] */
  { /*    21 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         19U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc12100] */
  { /*    22 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         20U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc12200] */
  { /*    23 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         21U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc12600] */
  { /*    24 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         22U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc14000] */
  { /*    25 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         23U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc14600] */
  { /*    26 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         24U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc15500] */
  { /*    27 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         25U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc15900] */
  { /*    28 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         26U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc25200] */
  { /*    29 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         27U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc25300] */
  { /*    30 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         28U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc25600] */
  { /*    31 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         29U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc40100] */
  { /*    32 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         30U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc40300] */
  { /*    33 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         31U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc41500] */
  { /*    34 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         32U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc41522] */
  { /*    35 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         33U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc41600] */
  { /*    36 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         34U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc42200] */
  { /*    37 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         35U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc42300] */
  { /*    38 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         36U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc42800] */
  { /*    39 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         37U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc55300] */
  { /*    40 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         38U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc55400] */
  { /*    41 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         39U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xc55700] */
  { /*    42 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         40U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xe01478] */
  { /*    43 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         41U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xe01481] */
  { /*    44 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         42U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xe01492] */
  { /*    45 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         43U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xe01647] */
  { /*    46 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         44U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xe01648] */
  { /*    47 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         45U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xe10000] */
  { /*    48 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         46U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xe30055] */
  { /*    49 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         47U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xf00042] */
    /* Index    AgingCycleId                             DebounceTableIdx  DtcTableIdx  EventDestination            ExtendedDataTableIdx  OperationCycleId                                   Referable Keys */
  { /*    50 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         48U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xf00049] */
  { /*    51 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         49U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xf00061] */
  { /*    52 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         50U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xf00168] */
  { /*    53 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         51U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xf00316] */
  { /*    54 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         52U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xf00317] */
  { /*    55 */ DemConf_DemOperationCycle_IgnitionCycle,               0U,         53U, DEM_CFG_MEMORYID_PRIMARY  ,                   1U, DemConf_DemOperationCycle_IgnitionCycle     },  /* [DTC_0xf00368] */
  { /*    56 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [WDG_E_DISABLE_REJECTED] */
  { /*    57 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [WDG_E_MODE_FAILED] */
  { /*    58 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [WDG_E_READBACK_FAILURE] */
  { /*    59 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [NVM_E_WRITE_PROTECTED] */
  { /*    60 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [SPI_E_DATA_TX_TIMEOUT_FAILURE] */
  { /*    61 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [SPI_E_HARDWARE_ERROR] */
  { /*    62 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [NVM_E_REQ_FAILED] */
  { /*    63 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [NVM_E_QUEUE_OVERFLOW] */
  { /*    64 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [NVM_E_LOSS_OF_REDUNDANCY] */
  { /*    65 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [NVM_E_INTEGRITY_FAILED] */
  { /*    66 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [MCU_E_WRITE_TIMEOUT_FAILURE] */
  { /*    67 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [MCU_E_POWERDOWN_MODE_FAILURE] */
  { /*    68 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [MCU_E_CLOCK_FAILURE] */
  { /*    69 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [FLS_E_WRITE_FAILED] */
  { /*    70 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [FLS_E_READ_FAILED_DED] */
  { /*    71 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [FLS_E_READ_FAILED] */
  { /*    72 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [FLS_E_HW_FAILURE] */
  { /*    73 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle },  /* [FLS_E_ERASE_FAILED] */
  { /*    74 */ /*no AgingCycle*/ 3U                   ,               1U,          0U, DEM_CFG_MEMORYID_SECONDARY,                   0U, DemConf_DemOperationCycle_DemOperationCycle }   /* [FLS_E_COMPARE_FAILED] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ExtendedDataTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ExtendedDataTable
  \details
  Element                                   Description
  DataCollectionTableEdr2CollIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd
  DataCollectionTableEdr2CollIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd
  MaxRecordSize                         
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_ExtendedDataTableType, DEM_CONST) Dem_Cfg_ExtendedDataTable[2] = {
    /* Index    DataCollectionTableEdr2CollIndEndIdx                                DataCollectionTableEdr2CollIndStartIdx                                MaxRecordSize        Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE, DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE,            0U },  /* [#NoExtendedDataRecordConfigured, #EVENT_INVALID, DIO_E_REG_WRITE_VERIFY, PORT_E_REG_WRITE_VERIFY, WDG_E_DISABLE_REJECTED, WDG_E_MODE_FAILED, WDG_E_READBACK_FAILURE, NVM_E_WRITE_PROTECTED, SPI_E_DATA_TX_TIMEOUT_FAILURE, SPI_E_HARDWARE_ERROR, NVM_E_REQ_FAILED, NVM_E_QUEUE_OVERFLOW, NVM_E_LOSS_OF_REDUNDANCY, NVM_E_INTEGRITY_FAILED, MCU_E_WRITE_TIMEOUT_FAILURE, MCU_E_POWERDOWN_MODE_FAILURE, MCU_E_CLOCK_FAILURE, FLS_E_WRITE_FAILED, FLS_E_READ_FAILED_DED, FLS_E_READ_FAILED, FLS_E_HW_FAILURE, FLS_E_ERASE_FAILED, FLS_E_COMPARE_FAILED] */
  { /*     1 */                                                                 2U,                                                                   0U,            2U }   /* [#ExtendedDataClass_d1497ac7, DTC_0x5b0049, DTC_0x5b0062, DTC_0x9d234b, DTC_0x502d00, DTC_0x600b49, DTC_0x600b62, DTC_0x600c49, DTC_0x600c62, DTC_0x600d49, DTC_0x600d62, DTC_0x511056, DTC_0xc23a00, DTC_0xc23b00, DTC_0xc45a00, DTC_0xc53b00, DTC_0xc53c00, DTC_0xc10000, DTC_0xc10200, DTC_0xc12100, DTC_0xc12200, DTC_0xc12600, DTC_0xc14000, DTC_0xc14600, DTC_0xc15500, DTC_0xc15900, DTC_0xc25200, DTC_0xc25300, DTC_0xc25600, DTC_0xc40100, DTC_0xc40300, DTC_0xc41500, DTC_0xc41522, DTC_0xc41600, DTC_0xc42200, DTC_0xc42300, DTC_0xc42800, DTC_0xc55300, DTC_0xc55400, DTC_0xc55700, DTC_0xe01478, DTC_0xe01481, DTC_0xe01492, DTC_0xe01647, DTC_0xe01648, DTC_0xe10000, DTC_0xe30055, DTC_0xf00042, DTC_0xf00049, DTC_0xf00061, DTC_0xf00168, DTC_0xf00316, DTC_0xf00317, DTC_0xf00368] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataPtr
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataPtr
  \brief  The array contains these items: Admin, Status, 8 * Primary, 40 * Secondary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_NvDataPtrType, DEM_CONST) Dem_Cfg_MemoryDataPtr[50] = {
  /* Index    MemoryDataPtr                                                                                     Referable Keys */
  /*     0 */(Dem_NvDataPtrType) &Dem_Cfg_GetAdminData()           /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_AdminData] */
  /*     1 */(Dem_NvDataPtrType) &Dem_Cfg_GetStatusData()          /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_StatusData] */
  /*     2 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_0()      /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry0] */
  /*     3 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_1()      /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry1] */
  /*     4 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_2()      /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry2] */
  /*     5 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_3()      /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry3] */
  /*     6 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_4()      /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry4] */
  /*     7 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_5()      /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry5] */
  /*     8 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_6()      /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry6] */
  /*     9 */(Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_7()      /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry7] */
  /*    10 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_0()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry0] */
  /*    11 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_1()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry1] */
  /*    12 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_2()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry2] */
  /*    13 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_3()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry3] */
  /*    14 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_4()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry4] */
  /*    15 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_5()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry5] */
  /*    16 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_6()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry6] */
  /*    17 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_7()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry7] */
  /*    18 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_8()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry8] */
  /*    19 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_9()    /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry9] */
  /*    20 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_10()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry10] */
  /*    21 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_11()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry11] */
  /*    22 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_12()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry12] */
  /*    23 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_13()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry13] */
  /*    24 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_14()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry14] */
  /*    25 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_15()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry15] */
  /*    26 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_16()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry16] */
  /*    27 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_17()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry17] */
  /*    28 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_18()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry18] */
  /*    29 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_19()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry19] */
  /*    30 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_20()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry20] */
  /*    31 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_21()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry21] */
  /*    32 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_22()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry22] */
  /*    33 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_23()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry23] */
  /*    34 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_24()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry24] */
  /*    35 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_25()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry25] */
  /*    36 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_26()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry26] */
  /*    37 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_27()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry27] */
  /*    38 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_28()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry28] */
  /*    39 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_29()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry29] */
  /*    40 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_30()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry30] */
  /*    41 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_31()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry31] */
  /*    42 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_32()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry32] */
  /*    43 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_33()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry33] */
  /*    44 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_34()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry34] */
  /*    45 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_35()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry35] */
  /*    46 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_36()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry36] */
  /*    47 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_37()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry37] */
  /*    48 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_38()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry38] */
  /*    49 */(Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_39()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [Dem_SecondaryEntry39] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataSize
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataSize
  \brief  The array contains these items: Admin, Status, 8 * Primary, 40 * Secondary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_MemoryDataSizeType, DEM_CONST) Dem_Cfg_MemoryDataSize[50] = {
  /* Index    MemoryDataSize                                                           Referable Keys */
  /*     0 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetAdminData())         ,  /* [Dem_AdminData] */
  /*     1 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetStatusData())        ,  /* [Dem_StatusData] */
  /*     2 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_0())    ,  /* [Dem_PrimaryEntry0] */
  /*     3 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_1())    ,  /* [Dem_PrimaryEntry1] */
  /*     4 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_2())    ,  /* [Dem_PrimaryEntry2] */
  /*     5 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_3())    ,  /* [Dem_PrimaryEntry3] */
  /*     6 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_4())    ,  /* [Dem_PrimaryEntry4] */
  /*     7 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_5())    ,  /* [Dem_PrimaryEntry5] */
  /*     8 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_6())    ,  /* [Dem_PrimaryEntry6] */
  /*     9 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_7())    ,  /* [Dem_PrimaryEntry7] */
  /*    10 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_0())  ,  /* [Dem_SecondaryEntry0] */
  /*    11 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_1())  ,  /* [Dem_SecondaryEntry1] */
  /*    12 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_2())  ,  /* [Dem_SecondaryEntry2] */
  /*    13 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_3())  ,  /* [Dem_SecondaryEntry3] */
  /*    14 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_4())  ,  /* [Dem_SecondaryEntry4] */
  /*    15 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_5())  ,  /* [Dem_SecondaryEntry5] */
  /*    16 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_6())  ,  /* [Dem_SecondaryEntry6] */
  /*    17 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_7())  ,  /* [Dem_SecondaryEntry7] */
  /*    18 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_8())  ,  /* [Dem_SecondaryEntry8] */
  /*    19 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_9())  ,  /* [Dem_SecondaryEntry9] */
  /*    20 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_10()) ,  /* [Dem_SecondaryEntry10] */
  /*    21 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_11()) ,  /* [Dem_SecondaryEntry11] */
  /*    22 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_12()) ,  /* [Dem_SecondaryEntry12] */
  /*    23 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_13()) ,  /* [Dem_SecondaryEntry13] */
  /*    24 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_14()) ,  /* [Dem_SecondaryEntry14] */
  /*    25 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_15()) ,  /* [Dem_SecondaryEntry15] */
  /*    26 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_16()) ,  /* [Dem_SecondaryEntry16] */
  /*    27 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_17()) ,  /* [Dem_SecondaryEntry17] */
  /*    28 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_18()) ,  /* [Dem_SecondaryEntry18] */
  /*    29 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_19()) ,  /* [Dem_SecondaryEntry19] */
  /*    30 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_20()) ,  /* [Dem_SecondaryEntry20] */
  /*    31 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_21()) ,  /* [Dem_SecondaryEntry21] */
  /*    32 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_22()) ,  /* [Dem_SecondaryEntry22] */
  /*    33 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_23()) ,  /* [Dem_SecondaryEntry23] */
  /*    34 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_24()) ,  /* [Dem_SecondaryEntry24] */
  /*    35 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_25()) ,  /* [Dem_SecondaryEntry25] */
  /*    36 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_26()) ,  /* [Dem_SecondaryEntry26] */
  /*    37 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_27()) ,  /* [Dem_SecondaryEntry27] */
  /*    38 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_28()) ,  /* [Dem_SecondaryEntry28] */
  /*    39 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_29()) ,  /* [Dem_SecondaryEntry29] */
  /*    40 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_30()) ,  /* [Dem_SecondaryEntry30] */
  /*    41 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_31()) ,  /* [Dem_SecondaryEntry31] */
  /*    42 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_32()) ,  /* [Dem_SecondaryEntry32] */
  /*    43 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_33()) ,  /* [Dem_SecondaryEntry33] */
  /*    44 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_34()) ,  /* [Dem_SecondaryEntry34] */
  /*    45 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_35()) ,  /* [Dem_SecondaryEntry35] */
  /*    46 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_36()) ,  /* [Dem_SecondaryEntry36] */
  /*    47 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_37()) ,  /* [Dem_SecondaryEntry37] */
  /*    48 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_38()) ,  /* [Dem_SecondaryEntry38] */
  /*    49 */(Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_39())    /* [Dem_SecondaryEntry39] */
};
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_PrimaryEntryType, DEM_CONST) Dem_Cfg_MemoryEntryInit = { 0 };
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_TimeSeriesEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_TimeSeriesEntryType, DEM_CONST) Dem_Cfg_TimeSeriesEntryInit = { 0 };
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_AdminData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_AdminDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_AdminData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_CommitBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_CommitBufferType, DEM_VAR_NOINIT) Dem_Cfg_CommitBuffer;  /* PRQA S 0759 */ /* MD_DEM_18.4 */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventDebounceValue
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventDebounceValue
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EventDebounceValueType, DEM_VAR_NOINIT) Dem_Cfg_EventDebounceValue[75];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID] */
  /*     1 */  /* [DIO_E_REG_WRITE_VERIFY] */
  /*     2 */  /* [PORT_E_REG_WRITE_VERIFY] */
  /*     3 */  /* [DTC_0x5b0049] */
  /*     4 */  /* [DTC_0x5b0062] */
  /*     5 */  /* [DTC_0x9d234b] */
  /*     6 */  /* [DTC_0x502d00] */
  /*     7 */  /* [DTC_0x600b49] */
  /*     8 */  /* [DTC_0x600b62] */
  /*     9 */  /* [DTC_0x600c49] */
  /*    10 */  /* [DTC_0x600c62] */
  /*    11 */  /* [DTC_0x600d49] */
  /*    12 */  /* [DTC_0x600d62] */
  /*    13 */  /* [DTC_0x511056] */
  /*    14 */  /* [DTC_0xc23a00] */
  /*    15 */  /* [DTC_0xc23b00] */
  /*    16 */  /* [DTC_0xc45a00] */
  /*    17 */  /* [DTC_0xc53b00] */
  /*    18 */  /* [DTC_0xc53c00] */
  /*    19 */  /* [DTC_0xc10000] */
  /*    20 */  /* [DTC_0xc10200] */
  /*    21 */  /* [DTC_0xc12100] */
  /*    22 */  /* [DTC_0xc12200] */
  /*    23 */  /* [DTC_0xc12600] */
  /*    24 */  /* [DTC_0xc14000] */
  /*    25 */  /* [DTC_0xc14600] */
  /*    26 */  /* [DTC_0xc15500] */
  /*    27 */  /* [DTC_0xc15900] */
  /*    28 */  /* [DTC_0xc25200] */
  /*    29 */  /* [DTC_0xc25300] */
  /*    30 */  /* [DTC_0xc25600] */
  /*    31 */  /* [DTC_0xc40100] */
  /*    32 */  /* [DTC_0xc40300] */
  /*    33 */  /* [DTC_0xc41500] */
  /*    34 */  /* [DTC_0xc41522] */
  /*    35 */  /* [DTC_0xc41600] */
  /*    36 */  /* [DTC_0xc42200] */
  /*    37 */  /* [DTC_0xc42300] */
  /*    38 */  /* [DTC_0xc42800] */
  /*    39 */  /* [DTC_0xc55300] */
  /*    40 */  /* [DTC_0xc55400] */
  /*    41 */  /* [DTC_0xc55700] */
  /*    42 */  /* [DTC_0xe01478] */
  /*    43 */  /* [DTC_0xe01481] */
  /*    44 */  /* [DTC_0xe01492] */
  /*    45 */  /* [DTC_0xe01647] */
  /*    46 */  /* [DTC_0xe01648] */
  /*    47 */  /* [DTC_0xe10000] */
  /*    48 */  /* [DTC_0xe30055] */
  /*    49 */  /* [DTC_0xf00042] */
  /* Index        Referable Keys  */
  /*    50 */  /* [DTC_0xf00049] */
  /*    51 */  /* [DTC_0xf00061] */
  /*    52 */  /* [DTC_0xf00168] */
  /*    53 */  /* [DTC_0xf00316] */
  /*    54 */  /* [DTC_0xf00317] */
  /*    55 */  /* [DTC_0xf00368] */
  /*    56 */  /* [WDG_E_DISABLE_REJECTED] */
  /*    57 */  /* [WDG_E_MODE_FAILED] */
  /*    58 */  /* [WDG_E_READBACK_FAILURE] */
  /*    59 */  /* [NVM_E_WRITE_PROTECTED] */
  /*    60 */  /* [SPI_E_DATA_TX_TIMEOUT_FAILURE] */
  /*    61 */  /* [SPI_E_HARDWARE_ERROR] */
  /*    62 */  /* [NVM_E_REQ_FAILED] */
  /*    63 */  /* [NVM_E_QUEUE_OVERFLOW] */
  /*    64 */  /* [NVM_E_LOSS_OF_REDUNDANCY] */
  /*    65 */  /* [NVM_E_INTEGRITY_FAILED] */
  /*    66 */  /* [MCU_E_WRITE_TIMEOUT_FAILURE] */
  /*    67 */  /* [MCU_E_POWERDOWN_MODE_FAILURE] */
  /*    68 */  /* [MCU_E_CLOCK_FAILURE] */
  /*    69 */  /* [FLS_E_WRITE_FAILED] */
  /*    70 */  /* [FLS_E_READ_FAILED_DED] */
  /*    71 */  /* [FLS_E_READ_FAILED] */
  /*    72 */  /* [FLS_E_HW_FAILURE] */
  /*    73 */  /* [FLS_E_ERASE_FAILED] */
  /*    74 */  /* [FLS_E_COMPARE_FAILED] */

#define DEM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventInternalStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventInternalStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EventInternalStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventInternalStatus[75];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID] */
  /*     1 */  /* [DIO_E_REG_WRITE_VERIFY] */
  /*     2 */  /* [PORT_E_REG_WRITE_VERIFY] */
  /*     3 */  /* [DTC_0x5b0049] */
  /*     4 */  /* [DTC_0x5b0062] */
  /*     5 */  /* [DTC_0x9d234b] */
  /*     6 */  /* [DTC_0x502d00] */
  /*     7 */  /* [DTC_0x600b49] */
  /*     8 */  /* [DTC_0x600b62] */
  /*     9 */  /* [DTC_0x600c49] */
  /*    10 */  /* [DTC_0x600c62] */
  /*    11 */  /* [DTC_0x600d49] */
  /*    12 */  /* [DTC_0x600d62] */
  /*    13 */  /* [DTC_0x511056] */
  /*    14 */  /* [DTC_0xc23a00] */
  /*    15 */  /* [DTC_0xc23b00] */
  /*    16 */  /* [DTC_0xc45a00] */
  /*    17 */  /* [DTC_0xc53b00] */
  /*    18 */  /* [DTC_0xc53c00] */
  /*    19 */  /* [DTC_0xc10000] */
  /*    20 */  /* [DTC_0xc10200] */
  /*    21 */  /* [DTC_0xc12100] */
  /*    22 */  /* [DTC_0xc12200] */
  /*    23 */  /* [DTC_0xc12600] */
  /*    24 */  /* [DTC_0xc14000] */
  /*    25 */  /* [DTC_0xc14600] */
  /*    26 */  /* [DTC_0xc15500] */
  /*    27 */  /* [DTC_0xc15900] */
  /*    28 */  /* [DTC_0xc25200] */
  /*    29 */  /* [DTC_0xc25300] */
  /*    30 */  /* [DTC_0xc25600] */
  /*    31 */  /* [DTC_0xc40100] */
  /*    32 */  /* [DTC_0xc40300] */
  /*    33 */  /* [DTC_0xc41500] */
  /*    34 */  /* [DTC_0xc41522] */
  /*    35 */  /* [DTC_0xc41600] */
  /*    36 */  /* [DTC_0xc42200] */
  /*    37 */  /* [DTC_0xc42300] */
  /*    38 */  /* [DTC_0xc42800] */
  /*    39 */  /* [DTC_0xc55300] */
  /*    40 */  /* [DTC_0xc55400] */
  /*    41 */  /* [DTC_0xc55700] */
  /*    42 */  /* [DTC_0xe01478] */
  /*    43 */  /* [DTC_0xe01481] */
  /*    44 */  /* [DTC_0xe01492] */
  /*    45 */  /* [DTC_0xe01647] */
  /*    46 */  /* [DTC_0xe01648] */
  /*    47 */  /* [DTC_0xe10000] */
  /*    48 */  /* [DTC_0xe30055] */
  /*    49 */  /* [DTC_0xf00042] */
  /* Index        Referable Keys  */
  /*    50 */  /* [DTC_0xf00049] */
  /*    51 */  /* [DTC_0xf00061] */
  /*    52 */  /* [DTC_0xf00168] */
  /*    53 */  /* [DTC_0xf00316] */
  /*    54 */  /* [DTC_0xf00317] */
  /*    55 */  /* [DTC_0xf00368] */
  /*    56 */  /* [WDG_E_DISABLE_REJECTED] */
  /*    57 */  /* [WDG_E_MODE_FAILED] */
  /*    58 */  /* [WDG_E_READBACK_FAILURE] */
  /*    59 */  /* [NVM_E_WRITE_PROTECTED] */
  /*    60 */  /* [SPI_E_DATA_TX_TIMEOUT_FAILURE] */
  /*    61 */  /* [SPI_E_HARDWARE_ERROR] */
  /*    62 */  /* [NVM_E_REQ_FAILED] */
  /*    63 */  /* [NVM_E_QUEUE_OVERFLOW] */
  /*    64 */  /* [NVM_E_LOSS_OF_REDUNDANCY] */
  /*    65 */  /* [NVM_E_INTEGRITY_FAILED] */
  /*    66 */  /* [MCU_E_WRITE_TIMEOUT_FAILURE] */
  /*    67 */  /* [MCU_E_POWERDOWN_MODE_FAILURE] */
  /*    68 */  /* [MCU_E_CLOCK_FAILURE] */
  /*    69 */  /* [FLS_E_WRITE_FAILED] */
  /*    70 */  /* [FLS_E_READ_FAILED_DED] */
  /*    71 */  /* [FLS_E_READ_FAILED] */
  /*    72 */  /* [FLS_E_HW_FAILURE] */
  /*    73 */  /* [FLS_E_ERASE_FAILED] */
  /*    74 */  /* [FLS_E_COMPARE_FAILED] */

#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventQueueStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventQueueStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EventQueueStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventQueueStatus[75];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID] */
  /*     1 */  /* [DIO_E_REG_WRITE_VERIFY] */
  /*     2 */  /* [PORT_E_REG_WRITE_VERIFY] */
  /*     3 */  /* [DTC_0x5b0049] */
  /*     4 */  /* [DTC_0x5b0062] */
  /*     5 */  /* [DTC_0x9d234b] */
  /*     6 */  /* [DTC_0x502d00] */
  /*     7 */  /* [DTC_0x600b49] */
  /*     8 */  /* [DTC_0x600b62] */
  /*     9 */  /* [DTC_0x600c49] */
  /*    10 */  /* [DTC_0x600c62] */
  /*    11 */  /* [DTC_0x600d49] */
  /*    12 */  /* [DTC_0x600d62] */
  /*    13 */  /* [DTC_0x511056] */
  /*    14 */  /* [DTC_0xc23a00] */
  /*    15 */  /* [DTC_0xc23b00] */
  /*    16 */  /* [DTC_0xc45a00] */
  /*    17 */  /* [DTC_0xc53b00] */
  /*    18 */  /* [DTC_0xc53c00] */
  /*    19 */  /* [DTC_0xc10000] */
  /*    20 */  /* [DTC_0xc10200] */
  /*    21 */  /* [DTC_0xc12100] */
  /*    22 */  /* [DTC_0xc12200] */
  /*    23 */  /* [DTC_0xc12600] */
  /*    24 */  /* [DTC_0xc14000] */
  /*    25 */  /* [DTC_0xc14600] */
  /*    26 */  /* [DTC_0xc15500] */
  /*    27 */  /* [DTC_0xc15900] */
  /*    28 */  /* [DTC_0xc25200] */
  /*    29 */  /* [DTC_0xc25300] */
  /*    30 */  /* [DTC_0xc25600] */
  /*    31 */  /* [DTC_0xc40100] */
  /*    32 */  /* [DTC_0xc40300] */
  /*    33 */  /* [DTC_0xc41500] */
  /*    34 */  /* [DTC_0xc41522] */
  /*    35 */  /* [DTC_0xc41600] */
  /*    36 */  /* [DTC_0xc42200] */
  /*    37 */  /* [DTC_0xc42300] */
  /*    38 */  /* [DTC_0xc42800] */
  /*    39 */  /* [DTC_0xc55300] */
  /*    40 */  /* [DTC_0xc55400] */
  /*    41 */  /* [DTC_0xc55700] */
  /*    42 */  /* [DTC_0xe01478] */
  /*    43 */  /* [DTC_0xe01481] */
  /*    44 */  /* [DTC_0xe01492] */
  /*    45 */  /* [DTC_0xe01647] */
  /*    46 */  /* [DTC_0xe01648] */
  /*    47 */  /* [DTC_0xe10000] */
  /*    48 */  /* [DTC_0xe30055] */
  /*    49 */  /* [DTC_0xf00042] */
  /* Index        Referable Keys  */
  /*    50 */  /* [DTC_0xf00049] */
  /*    51 */  /* [DTC_0xf00061] */
  /*    52 */  /* [DTC_0xf00168] */
  /*    53 */  /* [DTC_0xf00316] */
  /*    54 */  /* [DTC_0xf00317] */
  /*    55 */  /* [DTC_0xf00368] */
  /*    56 */  /* [WDG_E_DISABLE_REJECTED] */
  /*    57 */  /* [WDG_E_MODE_FAILED] */
  /*    58 */  /* [WDG_E_READBACK_FAILURE] */
  /*    59 */  /* [NVM_E_WRITE_PROTECTED] */
  /*    60 */  /* [SPI_E_DATA_TX_TIMEOUT_FAILURE] */
  /*    61 */  /* [SPI_E_HARDWARE_ERROR] */
  /*    62 */  /* [NVM_E_REQ_FAILED] */
  /*    63 */  /* [NVM_E_QUEUE_OVERFLOW] */
  /*    64 */  /* [NVM_E_LOSS_OF_REDUNDANCY] */
  /*    65 */  /* [NVM_E_INTEGRITY_FAILED] */
  /*    66 */  /* [MCU_E_WRITE_TIMEOUT_FAILURE] */
  /*    67 */  /* [MCU_E_POWERDOWN_MODE_FAILURE] */
  /*    68 */  /* [MCU_E_CLOCK_FAILURE] */
  /*    69 */  /* [FLS_E_WRITE_FAILED] */
  /*    70 */  /* [FLS_E_READ_FAILED_DED] */
  /*    71 */  /* [FLS_E_READ_FAILED] */
  /*    72 */  /* [FLS_E_HW_FAILURE] */
  /*    73 */  /* [FLS_E_ERASE_FAILED] */
  /*    74 */  /* [FLS_E_COMPARE_FAILED] */

#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryCommitNumber
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryCommitNumber
  \brief  The array contains these items: Admin, Status, 8 * Primary, 40 * Secondary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_MemoryCommitNumberType, DEM_VAR_NOINIT) Dem_Cfg_MemoryCommitNumber[50];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryStatus
  \brief  The array contains these items: Admin, Status, 8 * Primary, 40 * Secondary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryStatusType, DEM_VAR_NOINIT) Dem_Cfg_MemoryStatus[50];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryChronology
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_PrimaryChronology
  \brief  size = DEM_CFG_GLOBAL_PRIMARY_SIZE
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_PrimaryChronology[8];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_0
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_0;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_1
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_1;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_2
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_2;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_3
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_3;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_4
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_4;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_5
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_5;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_6
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_6;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_7
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_7;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReadoutBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_VAR_NOINIT) Dem_Cfg_ReadoutBuffer;
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryChronology
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_SecondaryChronology
  \brief  size = DEM_CFG_GLOBAL_SECONDARY_SIZE
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_SecondaryChronology[40];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_0
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_0;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_1
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_1;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_10
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_10;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_11
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_11;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_12
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_12;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_13
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_13;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_14
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_14;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_15
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_15;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_16
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_16;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_17
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_17;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_18
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_18;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_19
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_19;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_2
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_2;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_20
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_20;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_21
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_21;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_22
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_22;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_23
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_23;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_24
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_24;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_25
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_25;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_26
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_26;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_27
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_27;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_28
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_28;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_29
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_29;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_3
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_3;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_30
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_30;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_31
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_31;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_32
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_32;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_33
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_33;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_34
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_34;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_35
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_35;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_36
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_36;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_37
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_37;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_38
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_38;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_39
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_39;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_4
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_4;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_5
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_5;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_6
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_6;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_7
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_7;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_8
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_8;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_9
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_9;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_StatusData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_StatusDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_StatusData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/

#define DEM_START_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/************************************************************************************************************
 *  Dem_Cfg_FindGroupMaskFromUdsDtc()
 ***********************************************************************************************************/
/*! \brief         Map GroupOfDtc number to (internal) GROUPMASK.
 *  \details       Test if the DTC number is a configured UDS 'groupOfDTC' number, and return the internal
 *                 representation of that group.
 *  \param[in]     DTC                           dtc number to check
 *  \return        DEM_CFG_GROUPMASK_NONE        Function not successful. The DTC number doen't represent any
 *                                               configured DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_EMISSION    Function successful. The DTC number represents the OBD-II
 *                                               emission related group.
 *  \return        DEM_CFG_GROUPMASK_POWERTRAIN  Function successful. The DTC number represents Powertrain
 *                                               Group: engine and transmission.
 *  \return        DEM_CFG_GROUPMASK_CHASSIS     Function successful. The DTC number represents the Chassis
 *                                               Group.
 *  \return        DEM_CFG_GROUPMASK_BODY        Function successful. The DTC number represents the Body
 *                                               Group.
 *  \return        DEM_CFG_GROUPMASK_NETWORK     Function successful. The DTC number represents the Network
 *                                               Communication Group.
 *  \return        DEM_CFG_GROUPMASK_ALLDTCS     Function successful. The DTC number is the wildcard 'All
 *                                               Groups (all DTCs)'.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \note          Dependent on the current configuration, not all named (possible) return values are
 *                 actually used.
 ***********************************************************************************************************/ 
FUNC(uint8, DEM_CODE) Dem_Cfg_FindGroupMaskFromUdsDtc(uint32 groupDtcNumber) 
{ 
  uint8 mask;
  switch (groupDtcNumber)
  {
    case 0x00FFFFFFUL: mask = DEM_CFG_GROUPMASK_ALLDTCS; break;
    default: mask = DEM_CFG_GROUPMASK_NONE; break;
  }
  return mask; 
} 

 
/************************************************************************************************************
 *  Dem_Cfg_EventGroupMask()
 ***********************************************************************************************************/
/*! \brief         Map EventId to groupOfDTC's (internal) GROUPMASK.
 *  \details       Test if the DTC number is a configured UDS 'groupOfDTC' number, and return the internal
 *                 representation of that group.
 *  \param[in]     eventId                       event ID to check
 *  \return        DEM_CFG_GROUPMASK_NONE        Function not successful. The event has no DemUdsDTC number
 *                                               so it is not part of a DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_EMISSION    Function successful. The event is part of the OBD-II
 *                                               emission related DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_POWERTRAIN  Function successful. The event is part of the Powertrain
 *                                               DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_CHASSIS     Function successful. The event is part of the Chassis
 *                                               DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_BODY        Function successful. The event is part of the Body
 *                                               DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_NETWORK     Function successful. The event is part of the Network
 *                                               Communication DemGroupOfDTC.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \note          Dependent on the current configuration, not all named (possible) return values are
 *                 actually used.
 *  \note          Implementation specific: the configured 'DemGroupDTCs' value is the lowest value of each
 *                 group.
 *                 In other words, the configured 'DemGroupDTCs' split the range of DTC numbers
 *                 0x000000..0xFFFFFF into groups and the proxy of each group is the 'DemGroupDTCs' value
 *                 (that never is a DemUdsDTC number in addition).
 ***********************************************************************************************************/ 
FUNC(uint8, DEM_CODE) Dem_Cfg_EventGroupMask(uint16 eventId) 
{ 
  DEM_IGNORE_UNUSED_ARGUMENT(eventId)                                                               /* PRQA S 3112 */ /* MD_DEM_14.2 */
  return DEM_CFG_GROUPMASK_NONE; /* no GroupOfDtc configured */ 
}                                                                                                   /* PRQA S 6080 */ /* MD_MSR_STMIF */ 

 
#define DEM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  END OF FILE: Dem_Lcfg.c     [Ford (Vector), VARIANT-PRE-COMPILE]
**********************************************************************************************************************/

