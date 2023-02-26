/**********************************************************************************************************************
Contract file for CM102A                  
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef NXTRMCUSUPRTLIB_H
#define NXTRMCUSUPRTLIB_H
#include "ECM0_RegDefns.h"
#include "ECMM0_RegDefns.h"
#include "ECMC0_RegDefns.h"

extern FUNC(void, NxtrMcuSuprtLib_CODE) NxtrSwRstFromExcpn(uint32 McuDiagcData0_Arg, uint32 McuDiagcData1_Arg);
extern FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcm0_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);

#endif
