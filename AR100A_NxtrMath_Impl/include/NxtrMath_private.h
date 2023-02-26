/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : NxtrMath_private.h
* Module Description: Nexteer Math Library private header file
* Project           : CBD
* Author            : Jared Julien
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       kzdyfh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  ---------
* 05/24/17  1        JWJ       Moved SINCNVNCONTBL_ULS_U16 from .h file to .c file                            EA4#12469
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef NXTRMATH_PRIVATE_H
#define NXTRMATH_PRIVATE_H


/************************************************ Extern Statements **************************************************/
extern VAR(sint32, AUTOMATIC) NxtrMathErrNo_C;
extern FUNC(void, NxtrMath_CODE) __gh_set_errno(VAR(sint32, AUTOMATIC) ErrNo_Cnt_T_s32);


#endif /* NXTRMATH_PRIVATE_H */
