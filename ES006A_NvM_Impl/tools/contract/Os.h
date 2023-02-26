/* Stub created for contract folders. Includes only what is required for QAC and polyspace */

#define osqFunc1
#define osqFunc2
typedef unsigned char  osuint8;
typedef unsigned short osuint16;

typedef osuint8                          ApplicationType;
typedef osuint16                 NonTrustedFunctionIndexType;
typedef void*                    NonTrustedFunctionParameterRefType;

osqFunc1 ApplicationType osqFunc2 osGetApplicationID(void);
/* KB begin osekGetApplicationIDDef (overwritten) */
#define GetApplicationID()   (osGetApplicationID())
/* KB end osekGetApplicationIDDef */

#define CallNonTrustedFunction(x, y) (osPsysCallNonTrustedFunction((x), (y)))
StatusType osPsysCallNonTrustedFunction(NonTrustedFunctionIndexType Param0FunctionIndex, NonTrustedFunctionParameterRefType Param1FunctionParams);

/* Found in tcbpost.h */
#define Appl10 0U

/*nontrust.h*/
#define NtWrapS_NvM_EraseNvBlock   0
#define NtWrapS_NvM_GetDataIndex   1
#define NtWrapS_NvM_GetErrorStatus   2
#define NtWrapS_NvM_InvalidateNvBlock   3
#define NtWrapS_NvM_SetBlockProtection   4
#define NtWrapS_NvM_SetDataIndex   5
#define NtWrapS_NvM_SetRamBlockStatus   6
#define NtWrapS_NvM_WriteBlock   7
#define NtWrapS_NvM_ReadBlock 8

void NONTRUSTED_NtWrapS_NvM_EraseNvBlock(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_GetDataIndex(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_GetErrorStatus(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_InvalidateNvBlock(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_SetBlockProtection(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_SetDataIndex(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_SetRamBlockStatus(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_WriteBlock(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
void NONTRUSTED_NtWrapS_NvM_ReadBlock(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
