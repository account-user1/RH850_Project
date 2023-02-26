/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAgSwCal_private.h
* Module Description: Private header file for shared declarations between RTE and MotCtrl code of MotAgSwCal component
* Project           : CBD
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        nz2554 %
*----------------------------------------------------------------------------------------------------------------------
*   Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  ---------- --------------------------------------------------------------------------- ----------
* 08/11/17	1   	 SR			Initial Version							                                    EA4#12616
**********************************************************************************************************************/

#ifndef CDD_MOTAGSWCAL_PRIVATE_H
#define CDD_MOTAGSWCAL_PRIVATE_H

#include "Rte_CDD_MotAgSwCal.h" /*Needed for visibility to Pims.*/

#define SWCALPOSNIDXSHIFTCON_CNT_U08 16U
#define SWCALDIRFWD_CNT_U08          0U
#define POSNIDXWORDMASK_CNT_U16      65535U

extern FUNC(void, CDD_MotAgSwCal_CODE) RstFctPrm(void);

#endif /* CDD_MOTAGSWCAL_PRIVATE_H */
