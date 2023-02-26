/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_MotVel.h"
#include "float.h"


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    MotVelInit1();
    MotVelPer1();
    MotVelPer2();
}
/* SPP Code below this line was added to initialize array buffers and satisfy Code Prover. */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgTiBuf_Ary1D(P2VAR(uint32, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgTiBuf_Ary1D(P2VAR(Ary1D_u32_8, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
{
	for (int i=0; i<8; i++)
	{ 
        data[i]=MotVel_Ip_MotAgTiBuf[i];
	}
	return RTE_E_OK;
}
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgBuf_Ary1D(P2VAR(u0p16, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgBuf_Ary1D(P2VAR(Ary1D_u0p16_8, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
{
	for (int i=0; i<8; i++)
	{ 
        data[i]=MotVel_Ip_MotAgBuf[i];
	}
	return RTE_E_OK;
}