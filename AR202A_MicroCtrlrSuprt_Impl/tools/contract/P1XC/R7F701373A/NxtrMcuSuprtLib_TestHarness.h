
#ifndef NXTRMCUSUPRTLIB_TESTHARNESS_H
#define NXTRMCUSUPRTLIB_TESTHARNESS_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "CDD_ExcpnHndlg.h"

FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegEcmm0_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegEcmc0_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegEcm0_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegFlmd_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_NxtrSwRst(P1mcDiagc1 McuDiagcData0, uint32 McuDiagcData1);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_NxtrSwRstFromExcpn(P1mcDiagc1 McuDiagcData0, uint32 McuDiagcData1);

#endif
