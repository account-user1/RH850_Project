/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: ElecGlbPrm.c
* Module Description: Electrical global parameter definitions
* Project           : CBD
* Author            : Rijvi Ahmed
*****************************************************************************
* Version Control:
* %version:           2 %
* %derived_by:        jzk9cc %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 07/14/16  1        Rijvi	   Initial implementation for design rev. 6                                        	EA4#6490
* 07/19/16  2        Rijvi	   Updated per design rev. 6.1.0                                       	            EA4#6618
**********************************************************************************************************************/


#include "Std_Types.h"
#include "ElecGlbPrm.h"


/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


#define ElecGlbPrm_START_SEC_CONST_16
#include "ElecGlbPrm_MemMap.h" 


/* Gate Drive Offstate Check Data Array */
CONST(uint16, ElecGlbPrm_CONST)  ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[20][8] =
{   {21030U,   32320U,      0U,       0U,      0U,      0U,      0U,     64U},
	{20992U,       0U,      0U,       0U,      0U,      0U,      0U,      0U},
	{22275U,       0U,      0U,   16672U,    128U,     48U,      0U,      0U},
	{0U,           0U,      0U,       0U,      0U,      0U,      0U,      0U},
	{0U,           0U,      0U,       0U,      0U,      0U,      0U,      0U},
	{0U,           0U,      0U,       0U,      0U,      0U,      0U,      0U},
	{22019U,       0U,      0U,       0U,      0U,      0U,      0U,      0U},
	{22147U,       0U,      0U,       0U,      0U,      0U,    112U,      0U},
	{0U,           0U,      0U,       0U,      0U,      0U,      0U,      0U},
	{0U,           0U,      0U,       0U,      0U,      0U,      0U,      0U},
	{0U,           0U,      0U,       0U,      0U,      0U,      0U,      0U},
	{22019U,       0U,      0U,       0U,      0U,      0U,      0U,      0U},
	{32362U,       0U,      0U,       0U,      0U,      0U,    112U,      0U},
	{21008U,       0U,      0U,       0U,      0U,      0U,      0U,      0U},
	{20992U,       0U,      0U,       0U,      0U,      0U,      0U,      0U},
	{32362U,   21120U,      0U,   16388U,      0U,    448U,      0U,      0U},
	{32320U,   20992U,      0U,       0U,      0U,      0U,      0U,      0U},
	{32341U,   21120U,      0U,   16385U,     42U,      0U,      0U,      0U},
	{32320U,   20992U,      0U,       0U,      0U,      0U,      0U,      0U},
	{0U,           0U,      1U,   16385U,     21U,      0U,      0U,      0U}   };
	


#define ElecGlbPrm_STOP_SEC_CONST_16
#include "ElecGlbPrm_MemMap.h"
