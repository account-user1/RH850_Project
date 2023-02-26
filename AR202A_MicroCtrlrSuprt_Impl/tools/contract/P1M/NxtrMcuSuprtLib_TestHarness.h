
#ifndef NXTRMCUSUPRTLIB_TESTHARNESS_H
#define NXTRMCUSUPRTLIB_TESTHARNESS_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "CDD_ExcpnHndlg.h"

FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegPortJ_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegPort0_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegPort1_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegPort2_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegPort3_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegPort4_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegPort5_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegSys_u08(uint8 WrVal, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegSys_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegSysClmac_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegClma0_u08(uint8 WrVal, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegClma1_u08(uint8 WrVal, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegClma2_u08(uint8 WrVal, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegClma3_u08(uint8 WrVal, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegEcmm_u08(uint8 WrVal, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegEcmc_u08(uint8 WrVal, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegEcm_u08(uint8 WrVal, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegEcm_u16(uint16 WrVal, P2VAR(volatile uint16, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegEcm_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_WrProtdRegFlmd_u32(uint32 WrVal, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_NxtrSwRst(McuDiagc1 McuDiagcData0, uint32 McuDiagcData1);
FUNC(void, NxtrMcuSuprtLib_CODE) Test_NxtrSwRstFromExcpn(McuDiagc1 McuDiagcData0, uint32 McuDiagcData1);

#endif
