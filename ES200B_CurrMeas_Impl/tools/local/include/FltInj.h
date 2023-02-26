/**********************************************************************************************************************
 * Copyright 2016-2017 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : FltInj.h
 * Module Description: Fault Injection definitions
 * Project           : CBD
 * Author            : Nick Saxton
 **********************************************************************************************************************
 * Version Control:
 * %version:           2 %
 * %derived_by:        nz2999 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                         SCR #
 * --------  -------  --------  --------------------------------------------------------------------------    ---------
 * 06/17/16  1        NS        Initial version                                                               EA4#5602
 * 05/19/17  2        KByrski   Updated to match DF001A_FltInj_Impl                                           EA4#10116
 *********************************************************************************************************************/

#ifndef FLTINJ_H
#define FLTINJ_H

#include "Std_Types.h"

/* Fault Injection Enable */
/* This is defined as STD_ON in local folder to let the compiler check the function call. */
#define FLTINJENA                                  (STD_ON)

/* Fault Injection Current Measure Motor Current Corrected Acceleration */
/* Output signal of Current Measurement function. */
#define FLTINJ_CURRMEAS_MOTCURRCORRDA              (29U)

/* Fault Injection Current Measure Test OK */
/* Internal decision-making location of Current Measurement function.  Injecting
   True represents protocol fault. */
#define FLTINJ_CURRMEAS_TESTOK                     (30U)

extern FUNC(void, FltInj_CODE) FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg);
extern FUNC(void, FltInj_CODE) FltInj_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg);

#endif /* FLTINJ_H */
