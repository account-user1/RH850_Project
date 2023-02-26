/**********************************************************************************************************************
* Copyright 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_CoreVltgMonrNonRte.c
* Module Description: CoreVltgMonr component function for startup test for CVM
* Project           : CBD
* Author            : Avinash James
**********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
*   Date      Rev      Author       Change Description                                                       SCR #
* --------  -------  ----------  ---------------------------------------------------------------         -------------
* 01/29/18    1      AJM         Start up test for Core voltage monitor                                  EA4#15313
*********************************************************************************************************************/

#include "Rte_CDD_CoreVltgMonr.h"
#include "CDD_CoreVltgMonr.h"
#include "CVM_RegDefns.h"
#include "CDD_ExcpnHndlg.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/* MISRA-C:2004 Rule 19.1 : [NXTRDEV 19.1.1]  : AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 2.1  : [NXTRDEV 2.1.2]   : Deviation allowed for "nop" instructions in delay loop in CVM startup test because the code
                                                runs before MCAL initialization and so no timers are available */ 

#define COREVLTGMONRFACMASK_CNT_U08             ((uint8)131U)
#define COREVLTGMONRDIAGCCTRLMASK_CNT_U08       ((uint8)12U)
#define LOOPCNTRTHD_CNT_U08                     ((uint8)5U)
#define COREVLTGMONRCLRFLTPRMBYTE_CNT_U08       ((uint8)4U)
#define ERRINDCNFLTPRMBYTE_CNT_U08              ((uint8)2U)
#define COREVLTGMONRDETNENAREGWRFLT_CNT_U08     ((uint8)8U)
#define DLYTMRCNT_CNT_U16                       ((uint16)3840U)
#define COREVLTGMONRFLTDETNMASK_CNT_U08         ((uint8)3U)
#define COREVLTGMONROUTPPINMASK_CNT_U08         ((uint8)1U)    
#define COREVLTGMONRDETNENAMASK_CNT_U08         ((uint8)180U)

static FUNC(void, CDD_CoreVltgMonr_CODE) Dly16MicroSec(void);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define CoreVltgMonr_START_SEC_CODE
#include "CDD_CoreVltgMonr_MemMap.h" 

/**********************************************************************************************************************
  * Name:        CoreVltgMonrInit1
  * Description: Non-Rte Init function to execute CVM start up test
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: To be called during initialization sequence before  
  ********************************************************************************************************************/
FUNC(void, CDD_CoreVltgMonr_CODE) CoreVltgMonrInit1(void) 
{
    VAR(uint8, AUTOMATIC) LoopCntr_Cnt_T_u08;
    VAR(P1mcDiagc1, AUTOMATIC) McuDiagcData0_Cnt_T_enum;

    GetMcuDiagcIdnData(&McuDiagcData0_Cnt_T_enum);
    
    if(McuDiagcData0_Cnt_T_enum == P1MCDIAGC_PWRONRST)
    {
        LoopCntr_Cnt_T_u08 = LOOPCNTRTHD_CNT_U08;
        /* Verify CVMF */
        while((LoopCntr_Cnt_T_u08 > 0U) && ((CVMF & COREVLTGMONRFACMASK_CNT_U08) != 0U))
        {
            CVMFC = COREVLTGMONRFACMASK_CNT_U08;
            LoopCntr_Cnt_T_u08--;
        }

        if((CVMF & COREVLTGMONRFACMASK_CNT_U08) != 0U)
        {
            *Rte_Pim_CoreVltgMonrStrtUpFltPrmByte() = 1U;
        }
        else
        {
            /* Do Nothing */
        }
        /* End Verify CVMF */

        /* Mask CVM Out */
        CVMDMASK = COREVLTGMONROUTPPINMASK_CNT_U08;
        
        /* Enable Diag mode to forcibly generate high and low voltage condition */
        CVMDIAG = COREVLTGMONRDIAGCCTRLMASK_CNT_U08;

        Dly16MicroSec();
      
        if((CVMF & COREVLTGMONRFACMASK_CNT_U08) != COREVLTGMONRFLTDETNMASK_CNT_U08)
        {
            *Rte_Pim_CoreVltgMonrStrtUpFltPrmByte() |= ERRINDCNFLTPRMBYTE_CNT_U08;
        }
        else
        {
            /* Do nothing */
        }

        /* Remove error condition */
        CVMDIAG = 0U;

        /* Clear CVM fault flags */
        CVMFC = COREVLTGMONRFACMASK_CNT_U08;
        
        /* Verify CVMF */
        LoopCntr_Cnt_T_u08 = LOOPCNTRTHD_CNT_U08;

        while((LoopCntr_Cnt_T_u08 > 0U) && ((CVMF & COREVLTGMONRFACMASK_CNT_U08) != 0U))
        {
            CVMFC = COREVLTGMONRFACMASK_CNT_U08;
            LoopCntr_Cnt_T_u08--;
        }

        if((CVMF & COREVLTGMONRFACMASK_CNT_U08) != 0U)
        {
            *Rte_Pim_CoreVltgMonrStrtUpFltPrmByte() |= COREVLTGMONRCLRFLTPRMBYTE_CNT_U08;
        }
        else
        {
            /* Do Nothing */
        }
        /* End Verify CVMF */
        
        /* Unmask CVM Out */
        CVMDMASK = 0U;

        /* Write to CVMDEW register */
        CVMDEW = COREVLTGMONRDETNENAMASK_CNT_U08;

        /* Verify CVMDE */
        
        if((CVMDE & COREVLTGMONRDETNENAMASK_CNT_U08) != COREVLTGMONRDETNENAMASK_CNT_U08)
        {
            *Rte_Pim_CoreVltgMonrStrtUpFltPrmByte() |= COREVLTGMONRDETNENAREGWRFLT_CNT_U08;
        }
        else
        {
            /* Do Nothing */
        }

        *Rte_Pim_dCoreVltgMonrStrtUpTestCmpl() = TRUE;
    }
    else
    {
        /* Do nothing */
    }

}


/**********************************************************************************************************************
  * Name:        Dly16MicroSec
  * Description: Delay function for a minimum of 16uSec
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: To be called at appropriate time during start up test.The rationale being Nop() instruction takes
                 1 instruction cycle 
  ********************************************************************************************************************/
static FUNC(void, CDD_CoreVltgMonr_CODE) Dly16MicroSec(void)
{
    VAR(uint16, AUTOMATIC) LoopCntr_Cnt_T_u16 = DLYTMRCNT_CNT_U16;
    while(LoopCntr_Cnt_T_u16 > 0U)
    {
        LoopCntr_Cnt_T_u16--;
        __asm("nop");
    }
}

#define CoreVltgMonr_STOP_SEC_CODE
#include "CDD_CoreVltgMonr_MemMap.h" 





