/**********************************************************************************************************************
 * Copyright 2017 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : McuErrInj.h
 * Module Description: Header file for local folder of CM201A
 * Project           : CBD
 * Author            : Krzysztof Byrski
 **********************************************************************************************************************
 * Version Control:
 * %version:          1 %
 * %derived_by:       nz2999 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                             SCR #
 * --------  -------  --------  ----------------------------------------------------------------------------  ---------
 * 07/26/17  1        KByrski   Initial version                                                               EA4#13238
 *********************************************************************************************************************/

#ifndef MCUERRINJ_H
#define MCUERRINJ_H

extern FUNC(void, McuErrInj_CODE) ClrErrInjReg_Oper(void);
extern FUNC(void, McuErrInj_CODE) ReadErrInjReg_Oper(P2VAR(uint32, AUTOMATIC, RTE_MCUERRINJ_APPL_VAR) ErrId_Arg);

/* This is false for production builds. */
/* It is set to true at compile time only for s/w special builds with MCU Error Injection active. */
#define MCUDIAGCERRINJ                       (STD_ON)

#if (MCUDIAGCERRINJ == STD_ON)

extern FUNC(void, CDD_DmaCfgAndUse_CODE) InjDmaErr(void);
extern FUNC(void, CDD_DmaCfgAndUse_CODE) InjMcuDiagcErr(void);

#define MCUERRINJ_NTC002BBIT00CASE01_CNT_U32 (0x002B0101U) /* MCU Error Injeciton - NTC 0x002B Bit 0 Case 1 */
#define MCUERRINJ_NTC002BBIT01CASE01_CNT_U32 (0x002B0201U) /* MCU Error Injeciton - NTC 0x002B Bit 1 Case 1 */
#define MCUERRINJ_NTC0036BIT00CASE01_CNT_U32 (0x00360101U) /* MCU Error Injeciton - NTC 0x0036 Bit 0 Case 1 */
#define MCUERRINJ_NTC0036BIT01CASE01_CNT_U32 (0x00360201U) /* MCU Error Injeciton - NTC 0x0036 Bit 1 Case 1 */

#endif

#endif /* MCUERRINJ_H */
