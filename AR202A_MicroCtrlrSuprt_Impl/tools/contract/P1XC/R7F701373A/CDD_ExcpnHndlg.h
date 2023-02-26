/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_ExcpnHndlg.h 
* Module Description: Stub of CDD_ExcepnHndlg.h for unit testing and static analysis tools
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       czgng4 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 07/19/17   1       LWW       Initial Version                                                                EA4#1907
**********************************************************************************************************************/
#ifndef CDD_EXCPNHNDLG_H
#define CDD_EXCPNHNDLG_H

typedef uint32 P1mcDiagc1;

extern FUNC(void, CDD_ExcpnHndlg_CODE) SetMcuDiagcIdnData(P1mcDiagc1 McuDiagcData0_Arg,
													uint32 McuDiagcData1_Arg);
																								
#endif
