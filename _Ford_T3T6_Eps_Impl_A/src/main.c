/***********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name: main.c
* Module Description: main.c
* Project           : Ford T3T6
* Author            : Bobby Osteen
************************************************************************************************************************
* Version Control:
* %version:         3 %
* %derived_by:      gz324f %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 07/12/17  1        BO        Initial file creation                                                        
* 09/08/17  2        XL        Added Trusted_EcuM_ShutdownOS                                                EA4#17612
* 12/15/17  3        XL        Removed stubbed watch dog call out since CM101B is integrated                EA4#17612
***********************************************************************************************************************/

#include "Std_Types.h"
#include "EcuM.h"
#include "Os.h"
#include "Fls.h"

#include "STM0_RegDefns.h"
#include "main.h"



/**********************************************************************************************************************
  * Name:        main
  * Description: Main function of the application, only calling EcuM_Init()
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: Called by low level startup code
  ********************************************************************************************************************/
int main (void)
{
  Os_InitMemory();
  Os_Init();
  Fls_Init(FlsConfigSet);
  Os_EnterPreStartTask();
  return(0);
}

TASK(Task_PreStart_CORE0)
{
    EcuM_Init();
}

/**********************************************************************************************************************
  * Name:        Task_InitBsw_Appl10
  * Description: Task declaration that calls EcuM_StartupTwo
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: Called by O/S (autostart task)
  ********************************************************************************************************************/
TASK(Task_InitBsw_Appl10)
{
    STM0TT = 4U;
    EcuM_StartupTwo();
    TerminateTask();
}


FUNC(void, ECUM_CODE) Trusted_EcuM_ShutdownOS(Std_ReturnType ErrCode)
{
	ShutdownOS(ErrCode);
}