/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_EcmOutpAndDiagc.h
* Module Description: Error Control Module Output and Diagnostics Complex Driver Header file.
* Project           : CBD 
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:            1 %
* %derived_by:         nz2554 %
*----------------------------------------------------------------------------------------------------------------------
*   Date      Rev     Author         Change Description                                                       SCR #
* -------   ------  ----------  ------------------------------------------------------------------------  -------------
* 11/02/17   1      Shruthi.R   Initial Implementation of header file for Non-RTE function declarations.  EA4#13212
**********************************************************************************************************************/

#ifndef CDD_ECMOUTPANDDIAGC_H
#define CDD_ECMOUTPANDDIAGC_H

#include "Std_Types.h" /* For STD_LOW and STD_HIGH constants used in CtrlErrOut_Oper */

/* MISRA-C:2004 Rule 8.8 [NXTRDEV 8.8.1]: Deviation allowed for functions required to be declared in two headers to be accessible via the RTE as well as outside of the RTE 
						  Function Names: CtrlErrOut_Oper */

typedef uint8 TrigReg1;
#ifndef TRIGREG_MST
#define         TRIGREG_MST             (85U)	/* 0x55 */
#endif
#ifndef TRIGREG_CHKR
#define         TRIGREG_CHKR            (170U)	/* 0xAA */
#endif
#ifndef TRIGREG_MSTANDCHKR
#define         TRIGREG_MSTANDCHKR      (255U)	/* 0xFF */
#endif

extern FUNC(void, CDD_EcmOutpAndDiagc_CODE) CtrlErrOut_Oper(boolean PinSt_Arg, TrigReg1 TrigReg_Arg);
extern FUNC(void, CDD_EcmOutpAndDiagc_CODE) EcmOutpAndDiagcInit1(void);
extern FUNC(void, CDD_EcmOutpAndDiagc_CODE) EcmOutpAndDiagcInit3(void);

#endif /* CDD_ECMOUTPANDDIAGC_H */
