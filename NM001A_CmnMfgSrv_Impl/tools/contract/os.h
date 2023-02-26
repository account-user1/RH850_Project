#define GetApplicationID()   0U
typedef uint16 Os_NonTrustedFunctionIndexType;
typedef void * Os_NonTrustedFunctionParameterRefType;
extern Std_ReturnType Os_CallNonTrustedFunction(uint16 x, void * y);
FUNC(void, CmnMfgSrv_CODE) NONTRUSTED_NtWrapS_CmnMfgSrv_Init(Os_NonTrustedFunctionIndexType, Os_NonTrustedFunctionParameterRefType);
FUNC(void, CmnMfgSrv_CODE) NONTRUSTED_NtWrapS_CmnMfgSrv_DiAssi(Os_NonTrustedFunctionIndexType, Os_NonTrustedFunctionParameterRefType);
#define NtWrapS_BswM_RequestMode 1U
