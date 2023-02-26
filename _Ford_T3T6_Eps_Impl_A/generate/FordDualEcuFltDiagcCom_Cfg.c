/**********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name:   FordDualEcuFltDiagcCom_Cfg.c
* Module Description: Configuration file for CF088A FordDualEcuFltDiagcCom component.
* Project           : Ford T3T6
* Author            : Xin Liu
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       gz324f %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 03/08/18	1		XL		Initial creation
**********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "FordDualEcuFltDiagcCom_Cfg.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */ 


#define FordDualEcuFltDiagcCom_START_SEC_CODE
#include "FordDualEcuFltDiagcCom_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/********************************************* Embedded Local Constants **********************************************/
CONST(uint16, FordDualEcuFltDiagcCom_CONST) FORDDTCTONTCMAP[TOTNROFDTC_CNT_U08 + 1U] = {
0x0000U,
NTCNR_0X078,
NTCNR_0X06E,
NTCNR_0X076,
NTCNR_0X06F,
NTCNR_0X086,
NTCNR_0X084,
NTCNR_0X0F0,
NTCNR_0X0F1,
NTCNR_0X0F2,
NTCNR_0X0F3,
NTCNR_0X0F4,
NTCNR_0X0BA,
NTCNR_0X0BB,
NTCNR_0X0BC,
NTCNR_0X09B,
NTCNR_0X0F5,
NTCNR_0X0F6,
NTCNR_0X0F7,
NTCNR_0X0F8,
NTCNR_0X0F9,
NTCNR_0X0FA,
NTCNR_0X0FB,
NTCNR_0X0FC,
NTCNR_0X0FD,
NTCNR_0X0FE,
NTCNR_0X1B9,
NTCNR_0X1BA,
NTCNR_0X1BB,
NTCNR_0X1BC,
NTCNR_0X1BD,
NTCNR_0X1BE,
NTCNR_0X1BF,
NTCNR_0X1C0,
NTCNR_0X1C1,
NTCNR_0X1C2,
NTCNR_0X1C3,
NTCNR_0X1C4,
NTCNR_0X1C5,
NTCNR_0X1C6,
NTCNR_0X1C7,
NTCNR_0X1C8,
NTCNR_0X1C9,
NTCNR_0X1CA,
NTCNR_0X1CB,
NTCNR_0X1CC,
NTCNR_0X1CD,
NTCNR_0X1CE,
NTCNR_0X1CF,
NTCNR_0X1D6,
NTCNR_0X1D7,
NTCNR_0X1D8,
NTCNR_0X1D9,
NTCNR_0X1DA,
};

#define FordDualEcuFltDiagcCom_STOP_SEC_CODE
#include "FordDualEcuFltDiagcCom_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

