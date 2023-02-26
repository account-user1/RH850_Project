/**********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name  : CalRegn02Rt01ADummy_Stub.c
* Module Description: Stub source file to define symbols for the dummy init functions on cal dummy components.
* Project           : Ford T3T6
* Author            : Xin Liu
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/13/18  1        XL        Initial implementation for first integration of dummy cal components            EA4#22622
**********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "Rte_AAACalRegn02Rt01GroupA_Dummy.h"

/******************************************** File Level Rule Deviations *********************************************/

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/

/**********************************************************************************************************************
  * Name:        CalRegn02Rt01GroupADummyInit1
  * Description: Dummy initialization function needed to define symbol for linker.  Init function required to map dummy
  *              cal components to an application.
  * Inputs:      RTE instance because the dummy cal components support multiple instatiation.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
FUNC(void, AAACalRegn02Rt01GroupA_Dummy_CODE) CalRegn02Rt01GroupADummyInit1(P2CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, AUTOMATIC, RTE_CONST) self)
{
	/* This space intentionally left blank. */
}
