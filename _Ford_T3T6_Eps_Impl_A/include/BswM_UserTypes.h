/**********************************************************************************************************************
* Module File Name: BswM_UserTypes.h
* Module Description: BswM Included user types. This file is needed to define RTE linkage for DTC enable conditions.
*                     Inline function is used by enable condition expression to determine when the DTC is failed.
* Project           : Ford T3T6
* Author            : Bobby O'Steen
***********************************************************************************************************************
* Version Control:
* %version:           2 %
* %derived_by:        gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/27/17  1        BDO       Initial version 
* 03/29/18  2        XL        Added EcuId																		EA4#22224
**********************************************************************************************************************/

/* double include prevention */
#ifndef _BSWM_USERTYPES_H
# define _BSWM_USERTYPES_H

/* RTE Functions used by BSWM */



/* RTE Signals used for BSWM Enable Conditions */
extern VAR(uint8, AUTOMATIC) Rte_SysStMod_SysSt_Val;
extern VAR(uint8, RTE_VAR_INIT) Rte_DualEcuIdn_EcuId_Val;


#endif /* _BSWM_USERTYPES_H */
