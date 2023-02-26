/*****************************************************************************
* Copyright 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name: FltInj.h
* Module Description: Fault Injection
* Project           : CBD
* Author            : Shawn Penning 
*****************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        nz3541 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 04/02/18  1        SPP        Initial version                                                                EA4#15981
*************************************************************************************************************************/

#ifndef FLTINJ_H
#define FLTINJ_H

#define FLTINJ_HWTQ1MEAS_HWTQ1   (45U)

#define FLTINJENA STD_ON /* FLTINJENA is defined as STD_ON in tools/local/include folder to let the compiler check the function call */
extern FUNC(Std_ReturnType, DiagcMgr_CODE) FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg);


#endif
