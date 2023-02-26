/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_ClkCfgAndMonNonRte.c 
* Module Description: Implements the Non-RTE functionality of CM109B Clock Config and Monitor.
* Project           : CBD
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz2554 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  ----------------------------------------------------------------------------- ---------
* 11/17/17   1       SR        Initial Version                                                               EA4#16561
* 01/04/18   2       SR        Corrected the location of Memory Mapping statement                            EA4#16561
**********************************************************************************************************************/

#include "CLMA5_RegDefns.h"
#include "Os.h"
#include "CDD_ClkCfgAndMon.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1 ] : AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define CDD_ClkCfgAndMon_START_SEC_CODE
#include "CDD_ClkCfgAndMon_MemMap.h"

/*****************************************************************************************************************
 * Name        : ClkCfgAndMonInit0
 * Description : This function configures and starts the PE’s clock monitor logic.
 * Inputs      : None
 * Outputs     : None
 * Usage Notes : The CLMA configuration is done using the supplier provided MCAL except CLMA5
 ****************************************************************************************************************/
FUNC(void, CDD_RamMem_CODE) ClkCfgAndMonInit0(void)
{
  CLMA5CMPL = (uint16)0x011AU; /* Lower limit of monitored clock frequency */
  CLMA5CMPH = (uint16)0x016AU; /* Upper limit of monitored clock frequency */

  /*** Enable the Clock Monitor 5 ***/
  /* Attempt protected write sequence without interrupts being disabled */
  CLMA5PCMD = (uint8)0xA5U;
  CLMA5CTL0 = (uint8)0x01U;
  CLMA5CTL0 = (uint8)0xFEU;
  CLMA5CTL0 = (uint8)0x01U;
  if (CLMA5PS != 0x00U)
  {
    /* Attempt protected write sequence with O/S interrupts being disabled */
    SuspendOSInterrupts();
    CLMA5PCMD = (uint8)0xA5U;
    CLMA5CTL0 = (uint8)0x01U;
    CLMA5CTL0 = (uint8)0xFEU;
    CLMA5CTL0 = (uint8)0x01U;
    ResumeOSInterrupts();

  	if (CLMA5PS != 0x00U)
  	{
      /* Attempt protected write sequence with all interrupts being disabled */
      SuspendAllInterrupts();
      CLMA5PCMD = (uint8)0xA5U;
      CLMA5CTL0 = (uint8)0x01U;
      CLMA5CTL0 = (uint8)0xFEU;
      CLMA5CTL0 = (uint8)0x01U;
      ResumeAllInterrupts();
  	}
    else
    {
      /* Write not successful : Do Nothing */
    }
  }
}

#define CDD_ClkCfgAndMon_STOP_SEC_CODE
#include "CDD_ClkCfgAndMon_MemMap.h"
