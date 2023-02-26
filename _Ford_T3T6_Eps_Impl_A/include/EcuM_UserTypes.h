/**********************************************************************************************************************
* Module File Name: EcuM_UserTypes.h
* Module Description: User defined functions for EcuM_Callout_Stubs.c
* Project           : Ford T3T6
* Author            : Xin Liu
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/27/17  1        XL        Initial version                                                                 EA4#14121
**********************************************************************************************************************/

/* double include prevention */
#ifndef _ECUM_USERTYPES_H
# define _ECUM_USERTYPES_H

/* RTE Functions used by BSWM */



/* RTE Signals used for BSWM Enable Conditions */
extern FUNC(void, ECUM_CODE) Trusted_EcuM_ShutdownOS(Std_ReturnType ErrCode);



#endif /* _BSWM_USERTYPES_H */
