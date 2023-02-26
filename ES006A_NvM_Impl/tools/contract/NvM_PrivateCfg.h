/* Stub created for contract folders. Includes only what is required for QAC and polyspace */

#ifndef NVM_PRIVATE_CFG_H
#define NVM_PRIVATE_CFG_H


#include "NvM.h"

#define NVM_STATE_CHANGED_SET (0x02u)
#define NVM_WRITE_ALL             (13u) /* Service ID NvM_WriteAll() */

typedef struct
{
    uint8                   NvDataIndex_t;
    NvM_RequestResultType   NvRamErrorStatus_u8;
    uint8                   NvRamAttributes_u8;
} NvM_RamMngmtAreaType;

extern VAR(NvM_RamMngmtAreaType, NVM_CONFIG_DATA) NvM_BlockMngmtArea_at[];


#endif
