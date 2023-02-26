/* header file for contract folder of CM101B */

#ifndef NXTRMCUSUPRTLIB_H
#define NXTRMCUSUPRTLIB_H

extern FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegSys_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
extern FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegSysClmac_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
extern FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegClma0_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
extern FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegClma1_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
extern FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegClma2_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
extern FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegClma3_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
extern FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcm_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
extern FUNC(void, NxtrMcuSuprtLib_CODE) NxtrSwRstFromExcpn(P1mcDiagc1 McuDiagcData0_Arg, uint32 McuDiagcData1_Arg);

#endif

