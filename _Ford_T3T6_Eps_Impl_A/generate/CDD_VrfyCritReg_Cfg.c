/*****************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_VrfyCritReg_Cfg.c
* Module Description: Critical Register Verification source file
* Project           : CBD
* Author            : Selva
* Generator         : artt 2.0.2.0
* Generation Time   : 12.03.2018 16:52:37
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/15/16  1        Selva       MicroDiag Critical Register                                                    EA4#5190
**********************************************************************************************************************/

#include "CDD_VrfyCritReg_Cfg_private.h"
#include "Rte_CDD_VrfyCritReg.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 1.1  [NXTRDEV 1.1.2]: Inline functions are used for functions to allow for throughput optimization */


#define CDD_VrfyCritReg_START_SEC_CODE
#include "CDD_VrfyCritReg_MemMap.h" 




/****************Critical Registers to be checks Initialisation functions  ****************/  



CONST(NonSysCritRegRec1, AUTOMATIC) IninCritReg8BitChk_rec[NROFININCRITREG8BIT_CNT_U16]=
{
		
		  { 0xffcd0030U, 0xffU, 0xffU}, /* VrfyCritReg8bitInitSignallist */
		
};

CONST(NonSysCritRegRec1, AUTOMATIC) IninCritReg16BitChk_rec[NROFININCRITREG16BIT_CNT_U16]=
{
		  { 0xffcd0030U, 0xfdffU, 0xffffU}, /* VrfyCritReg16bitInitSignallist */
		
};


CONST(NonSysCritRegRec1, AUTOMATIC) IninCritReg32BitChk_rec[NROFININCRITREG32BIT_CNT_U16]=
{
		  { 0xffcd0030U, 0x7ffffdffU, 0xffffffffU}, /* VrfyCritReg32bitInitSignallist */
		
};


/****************Critical Registers to be checked at Periodic rate  ****************/
CONST(NonSysCritRegRec1, AUTOMATIC) PerCritReg8BitChk_rec[NROFPERCRITREG8BIT_CNT_U16]=
{
		  { 0xffcd0030U, 0xffU, 0xffU}, /* VrfyCritReg8bitPerSignallist */
		
};
/****************Critical Registers to be checked at Periodic rate  ****************/
CONST(NonSysCritRegRec1, AUTOMATIC) PerCritReg16BitChk_rec[NROFPERCRITREG16BIT_CNT_U16]=
{
		  { 0xffcd0030U, 0xfdffU, 0xffffU}, /* VrfyCritReg16bitPerSignallist */
		
};
/****************Critical Registers to be checked at Periodic rate  ****************/
CONST(NonSysCritRegRec1, AUTOMATIC) PerCritReg32BitChk_rec[NROFPERCRITREG32BIT_CNT_U16]=
{
		  { 0xffcd0030U, 0x7ffffdffU, 0xffffffffU}, /* OPBT0 */
		  { 0xffcd0034U, 0xbfffc9d8U, 0xffffffffU}, /* OPBT1 */
		  { 0xffcd0038U, 0x3fffffffU, 0x7fffffffU}, /* OPBT2 */
		  { 0xffcd0064U, 0x3ffffU, 0x3ffffU}, /* OPBT13 */
		  { 0xffcd0068U, 0xfffffcfeU, 0xffffffffU}, /* OPBT14 */
		  { 0xffcd006cU, 0x6eU, 0x7fU}, /* OPBT15 */
		
};

#define CDD_VrfyCritReg_STOP_SEC_CODE
#include "CDD_VrfyCritReg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*************************************************************************/
/***************Start of function definition************/




#define CDD_VrfyCritReg_START_SEC_CODE
#include "CDD_VrfyCritReg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/******************************************************************************
  * Name:        SysCritRegPerChk
  * Description: set 'SysRegsOk_Uls_T_lgc' to 'FALSE' if CPU System Register values are not equal to 
  *              expected values
  * Inputs:      None     
  * Outputs:     SysRegsOk_Uls_T_lgc   
  * Usage Notes: Configured as a trusted function because it needs to run in supervisor mode
  ****************************************************************************/
FUNC(boolean, CDD_VrfyCritReg_CODE) SysCritRegPerChk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
	VAR(boolean, AUTOMATIC)  SysRegsOk_Uls_T_lgc = TRUE;

		
    return(SysRegsOk_Uls_T_lgc);
}


/******************************************************************************
  * Name:        SysCritRegIninChk
  * Description: set 'SysRegsOk_Uls_T_lgc' to 'FALSE' if CPU System Register values are not equal to 
  *              expected values
  * Inputs:      None     
  * Outputs:     SysRegsOk_Uls_T_lgc   
  * Usage Notes: Configured as a trusted function because it needs to run in supervisor mode
  ****************************************************************************/
FUNC(boolean, CDD_VrfyCritReg_CODE) SysCritRegIninChk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
	VAR(boolean, AUTOMATIC)  SysRegsOk_Uls_T_lgc = TRUE;
	
			
   return(SysRegsOk_Uls_T_lgc);
}


#define CDD_VrfyCritReg_STOP_SEC_CODE
#include "CDD_VrfyCritReg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


