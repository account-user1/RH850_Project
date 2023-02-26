
/* Found in osek.h */
#ifndef NXTR_CONTRACT_LOCAL_OS_H
#define NXTR_CONTRACT_LOCAL_OS_H
typedef uint16 osuint16;
typedef osuint16                NonTrustedFunctionIndexType;
typedef void*                   NonTrustedFunctionParameterRefType;

/* GetTaskID can be either a pointer to unit16 or an enum depending on the OS, this file just treats it as a uint16 */
typedef osuint16 TaskType;
typedef TaskType* TaskRefType;

/* These are filled in by the OS, but the numbers below are just picked */
#define NtWrapS_SyncCrc_RelsCrcHwUnit   0u
#define NtWrapS_SyncCrc_GetAvlCrcHwUnit   1u
#define Appl10 0u

extern StatusType GetTaskID(TaskRefType TaskPtr);
extern uint8 GetApplicationID(void);
#endif

#ifdef CDD_SYNCCRC_CFG_PRIVATE_H
/* Os.h is added into the user type to define TaskRefType to the Rte_type.h. However, calling the OS.h file in earlier brought in these files which were not defined.
   The preprocessor statements were added to contrl when the file referenced the values. */
/* Found in nontrustfct.h */
extern void NONTRUSTED_NtWrapS_SyncCrc_GetAvlCrcHwUnit(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
extern void NONTRUSTED_NtWrapS_SyncCrc_RelsCrcHwUnit(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
extern void CallNonTrustedFunction(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#endif
