/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: CmnMfgSrvFct.h
* Module Description: Common Manufacturing Services Utility Functions Header
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 06/10/15  1        JWJ       Initial file creation                                                        EA4#881
* 07/23/15  2        JWJ       Moved union typedef for float conversion into C source file for MISRA        EA4#881
* 09/10/15  3        JWJ       Added disable bit parsing functions                                          EA4#
***********************************************************************************************************************/
#ifndef CMNMFGSRVFCT_H
#define CMNMFGSRVFCT_H

#include "CmnMfgSrvTyp.h"


/* ================================================================================================================== */
/* Global Function Prototypes */
/* ------------------------------------------------------------------------------------------------------------------ */
FUNC(float32, CmnMfgSrv_CODE) CmnMfgSrvFct_SynthesizeFloat(CONST(uint8, AUTOMATIC) Ary_Cnt_T_u08[]);
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvFct_DecomposeFloat(VAR(float32, AUTOMATIC) Input_Cnt_T_f32, VAR(uint8, AUTOMATIC) Ary_Cnt_T_u08[]);
FUNC(uint32, CmnMfgSrv_CODE) CmnMfgSrvFct_Synthesize32(CONST(uint8, AUTOMATIC) Ary_Cnt_T_u08[]);
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvFct_Decompose32(VAR(uint32, AUTOMATIC) Input_Cnt_T_u32, VAR(uint8, AUTOMATIC) Ary_Cnt_T_u08[]);
FUNC(uint16, CmnMfgSrv_CODE) CmnMfgSrvFct_Synthesize16(CONST(uint8, AUTOMATIC) Ary_Cnt_T_u08[]);
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvFct_Decompose16(VAR(uint16, AUTOMATIC) Input_Cnt_T_u16, VAR(uint8, AUTOMATIC) Ary_Cnt_T_u08[]);
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrv_SynthesizeDiBits(CONST(uint8, AUTOMATIC) Ary_Cnt_T_u08[]);
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrv_DecomposeDiBits(VAR(uint8, AUTOMATIC) Ary_Cnt_T_u08[]);

#endif
/* End of File: CmnMfgSrvFct.h */
