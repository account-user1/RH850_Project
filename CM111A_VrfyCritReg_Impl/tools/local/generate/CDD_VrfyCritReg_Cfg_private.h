/**********************************************************************************************************************/
/*****************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_VrfyCritReg_Cfg_private.h
* Module Description: Critical Register Verification header file
* Project           : CBD
* Author            : Selva
* Generator         : artt 2.0.2.0
* Generation Time   : 13.06.2017 15:33:43
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/15/16  1        Selva       MicroDiag Critical Register                                                    EA4#5190
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_VRFYCRITREG_CFG_H
#define CDD_VRFYCRITREG_CFG_H

#include "Std_Types.h"
#include "v800_ghs.h" /* for STSR intrinsic */  



/**********Critical Register Count********/
#define NROFININCRITREG8BIT_CNT_U16 	  13U  
#define NROFININCRITREG16BIT_CNT_U16 	  20U
#define NROFININCRITREG32BIT_CNT_U16 	  85U
#define NROFPERCRITREG8BIT_CNT_U16        23U 
#define NROFPERCRITREG16BIT_CNT_U16       9U 
#define NROFPERCRITREG32BIT_CNT_U16       17U 

typedef struct {
	CONST(uint32, AUTOMATIC) 	CritRegAdr;						/* Register  address */
	CONST(uint32, AUTOMATIC) 	CritRegVal;					    /* Register  Value */
	CONST(uint32, AUTOMATIC) 	CritRegMask;                    /* Register  Mask*/
}NonSysCritRegRec1;



/***********Declaration of critical regsiters************/
extern CONST(NonSysCritRegRec1, AUTOMATIC) IninCritReg8BitChk_rec[NROFININCRITREG8BIT_CNT_U16];
extern CONST(NonSysCritRegRec1, AUTOMATIC) IninCritReg16BitChk_rec[NROFININCRITREG16BIT_CNT_U16];
extern CONST(NonSysCritRegRec1, AUTOMATIC) IninCritReg32BitChk_rec[NROFININCRITREG32BIT_CNT_U16];

extern CONST(NonSysCritRegRec1, AUTOMATIC) PerCritReg8BitChk_rec[NROFPERCRITREG8BIT_CNT_U16];
extern CONST(NonSysCritRegRec1, AUTOMATIC) PerCritReg16BitChk_rec[NROFPERCRITREG16BIT_CNT_U16];
extern CONST(NonSysCritRegRec1, AUTOMATIC) PerCritReg32BitChk_rec[NROFPERCRITREG32BIT_CNT_U16];

extern FUNC(boolean, CDD_VrfyCritReg_CODE) SysCritRegIninChk(void);
extern FUNC(boolean, CDD_VrfyCritReg_CODE) SysCritRegPerChk(void);

#endif /* CDD_VRFYCRITREG_CFG */

