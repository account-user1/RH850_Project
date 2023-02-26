/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_RamMem.h 
* Module Description: Declarations of global functions of CM103B RAM Memory
* Project           : CBD
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz2554 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  ------- --------  -----------------------------------------------------------------------------  ---------
* 10/06/17   1       SR        Initial Version                                                               EA4#12606
**********************************************************************************************************************/
#ifndef CDD_RAMMEM_H
#define CDD_RAMMEM_H

/* Function prototypes */
extern FUNC(void, CDD_RamMem_CODE) RamMemLclRamSngBitEcc(void);
extern FUNC(void, CDD_RamMem_CODE) RamMemGlbRamSngBitEcc(void);

#endif
