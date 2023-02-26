/* Stub created for contract folders. Includes only what is required for QAC and polyspace */

#ifndef NVM_H
#define NVM_H

#include "NvM_Types.h"

extern FUNC(void, NVM_PUBLIC_CODE) NvM_Init(void);
extern FUNC(Std_ReturnType, NVM_PUBLIC_CODE) NvM_SetDataIndex (NvM_BlockIdType BlockId, uint8 DataIndex);
extern FUNC(Std_ReturnType, NVM_PUBLIC_CODE) NvM_GetDataIndex (NvM_BlockIdType BlockId, P2VAR(Std_ReturnType, AUTOMATIC, NVM_APPL_DATA) DataIndexPtr);
extern FUNC(Std_ReturnType, NVM_PUBLIC_CODE) NvM_SetBlockProtection(NvM_BlockIdType BlockId, boolean ProtectionEnabled);
extern FUNC(Std_ReturnType, NVM_PUBLIC_CODE) NvM_GetErrorStatus(NvM_BlockIdType BlockId, P2VAR(uint8, AUTOMATIC, NVM_APPL_DATA) RequestResultPtr);
extern FUNC(void, NVM_PUBLIC_CODE) NvM_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, NVM_APPL_DATA) versioninfo);
extern FUNC(Std_ReturnType, NVM_PUBLIC_CODE) NvM_SetRamBlockStatus(NvM_BlockIdType BlockId, boolean BlockChanged);
extern FUNC(Std_ReturnType, NVM_PUBLIC_CODE) NvM_ReadBlock(NvM_BlockIdType BlockId, P2VAR(void, AUTOMATIC, NVM_APPL_DATA) NvM_DstPtr);
extern FUNC(Std_ReturnType, NVM_PUBLIC_CODE) NvM_WriteBlock(NvM_BlockIdType BlockId, P2CONST(void, AUTOMATIC, NVM_APPL_DATA) NvM_SrcPtr);
extern FUNC(Std_ReturnType, NVM_PUBLIC_CODE) NvM_RestoreBlockDefaults(NvM_BlockIdType BlockId, P2VAR(void, AUTOMATIC, NVM_APPL_DATA) NvM_DstPtr);
extern FUNC(Std_ReturnType, NVM_PUBLIC_CODE) NvM_EraseNvBlock(NvM_BlockIdType BlockId);
extern FUNC(Std_ReturnType, NVM_PUBLIC_CODE) NvM_InvalidateNvBlock(NvM_BlockIdType BlockId);
extern FUNC(Std_ReturnType, NVM_PUBLIC_CODE) NvM_CancelJobs(NvM_BlockIdType BlockId);
extern FUNC(void, NVM_PUBLIC_CODE) NvM_CancelWriteAll(void);
extern FUNC(void, NVM_PUBLIC_CODE) NvM_KillWriteAll(void);
extern FUNC(void, NVM_PUBLIC_CODE) NvM_MainFunction(void);
extern FUNC(void, NVM_PUBLIC_CODE) NvM_SetBlockLockStatus(NvM_BlockIdType BlockId, boolean Locked);

/* Added from NvM_Cfg.h */
#define NvMConf_NvMBlockDescriptor_Rte_NvmBlock_CDD_NvMProxy_ShtdwnClsChk (0UL)

#define NVM_TOTAL_NUM_OF_NVRAM_BLOCKS    (30UL)

/* Added from NvM_PrivateCfg.h */

typedef struct
{
    uint8                   NvDataIndex_t;
    NvM_RequestResultType   NvRamErrorStatus_u8;
    uint8                   NvRamAttributes_u8;
} NvM_RamMngmtAreaType;

typedef P2VAR(uint8, AUTOMATIC, NVM_APPL_DATA) NvM_RamAddressType;
typedef P2CONST(uint8, AUTOMATIC, NVM_APPL_CONST)NvM_RomAddressType;
typedef P2FUNC(Std_ReturnType, NVM_APPL_CODE, NvM_InitCbkPtrType)(void);
typedef P2FUNC(Std_ReturnType, NVM_APPL_CODE, NvM_AsyncCbkPtrType)
    (NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult);
typedef P2FUNC(Std_ReturnType, NVM_APPL_CODE, NvM_WriteRamToNvMCbkPtrType)(P2VAR(void, AUTOMATIC, NVM_APPL_DATA));
typedef P2FUNC(Std_ReturnType, NVM_APPL_CODE, NvM_ReadRamFromNvMCbkPtrType)(P2CONST(void, AUTOMATIC, NVM_APPL_DATA));
#if(NVM_CRC_INT_BUFFER == STD_ON)
typedef P2VAR(uint8, AUTOMATIC, NVM_PRIVATE_DATA) NvM_RamCrcAddressType;
#endif
typedef unsigned int NvM_BitFieldType;

/* NvRam block descriptor type */
typedef struct
{
    NvM_RamAddressType      RamBlockDataAddr_t;
    NvM_RomAddressType      RomBlockDataAddr_pt;
    NvM_InitCbkPtrType      InitCallback_pt;
    NvM_AsyncCbkPtrType     CallbackFunc_pt;
    NvM_ReadRamFromNvMCbkPtrType CbkGetMirrorFunc_pt;
    NvM_WriteRamToNvMCbkPtrType CbkSetMirrorFunc_pt;
#if (STD_ON == NVM_CRC_INT_BUFFER)
    NvM_RamCrcAddressType   RamBlockCrcAddr_t;
#endif
    uint16                  NvIdentifier_u16;
    uint16                  NvBlockLength_u16;
    NvM_BitFieldType        NvBlockCount_u8 :8;
    NvM_BitFieldType        BlockPrio_u8    :8;
    NvM_BitFieldType        DeviceId_u8     :4;
    NvM_BitFieldType        MngmtType_t     :2;
    NvM_BitFieldType        CrcSettings     :2;
    NvM_BitFieldType        Flags_u8        :6;
    NvM_BitFieldType        NotifyBswM      :1;
} NvM_BlockDescriptorType;

extern VAR(NvM_RamMngmtAreaType, NVM_CONFIG_DATA) NvM_BlockMngmtArea_at[];
extern CONST(NvM_BlockDescriptorType, NVM_CONFIG_CONST) NvM_BlockDescriptorTable_at[];

#endif
