/* This file contains only the definitions XcpIf requires to run QAC and Polyspace. */

#define NtWrapS_Rte_Call_CopyCalPageReq_Oper   1
#define NtWrapS_Rte_Call_SetCalPageReq_Oper     2
typedef unsigned short osuint16;
typedef osuint16                 NonTrustedFunctionIndexType;
typedef void*                    NonTrustedFunctionParameterRefType;

#define Appl10 0u
extern uint8 GetApplicationID(void);



StatusType CallNonTrustedFunction(NonTrustedFunctionIndexType FunctionIndex, /* PRQA S 1503 */
                                                      NonTrustedFunctionParameterRefType FunctionParams);
void Call_ApplXcpWrCmn(MTABYTEPTR os_arg_addr, vuint8 os_arg_size, const BYTEPTR os_arg_data);
