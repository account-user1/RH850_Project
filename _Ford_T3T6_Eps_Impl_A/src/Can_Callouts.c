/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer
* Nexteer Confidential
*
* Module File Name  : Can_Callouts.c
* Module Description: Can Related Callouts
* Project           : GM T1xx Global B
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       wz7x3j %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/20/16  1        LWW       Initial Version
* 09/22/17  2        XL        Added Application Presence Pattern                                              EA4#14121
* 11/22/17  3        XL        Moved Application Presence Pattern to FordHeader.c                              EA4#17612
* 01/26/18   4       BDO       Updated for Identity Manager		                           
**********************************************************************************************************************/

#include "Can.h"

/**********************************************************************************************************************
  * Name:        ApplCanTimerStart
  * Description: Service function to start an observation timer (see chapter Hardware Loop Check / Timeout Monitoring).
  * Inputs:      Controller - Not used in current implementation since "Optimize for one controller" is enabled
  *              source - Source for the hardware observation
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void ApplCanTimerStart( CAN_CHANNEL_CANTYPE_FIRST uint8 source )
{
	
	
}

/**********************************************************************************************************************
  * Name:        ApplCanTimerEnd
  * Description: Service function to to end an observation timer (see chapter Hardware Loop Check / Timeout Monitoring).
  * Inputs:      Controller - Not used in current implementation since "Optimize for one controller" is enabled
  *              source - Source for the hardware observation
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
void ApplCanTimerEnd ( CAN_CHANNEL_CANTYPE_FIRST uint8 source )
{
	/* No known functionality currently needed here */
}

/**********************************************************************************************************************
  * Name:        ApplCanTimerLoop
  * Description: Service function to check (against generated max loop value) whether a hardware loop shall be 
  *              continued or broken.
  * Inputs:      Controller - Not used in current implementation since "Optimize for one controller" is enabled
  *              source - Source for the hardware observation
  * Outputs:     Can_ReturnType:
  *              - CAN_NOT_OK when loop shall be broken (observation stops)
  *              - CAN_OK when loop shall be continued (observation continues)
  * Usage Notes: NONE
  ********************************************************************************************************************/
Can_ReturnType ApplCanTimerLoop ( CAN_CHANNEL_CANTYPE_FIRST uint8 source )
{
	VAR(Can_ReturnType, AUTOMATIC) RtnVal_Cnt_T_u08 = CAN_OK;
	
	return RtnVal_Cnt_T_u08;
}


/************************************************************************************************************
 *  Appl_CanOverrun()
 ***********************************************************************************************************/
/*! \brief         Overrun detection
 *  \details       Called when an overrun is detected for a BasicCAN mailbox. \n
 *                 Alternatively a DET call can be selected instead of ("CanOverrunNotification" is set to "DET").
 *  \param[in]     Controller   CAN controller for which the overrun was detected.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_OVERRUN_NOTIFICATION == CAN_APPL
 *  \notes         None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(extern, void, APPL_CODE) Appl_CanOverrun ( uint8 Controller )
{
    /* TODO: With Debugger connected a Rx CanOverrun is detected.
       This overrun notification was set to 'Application'
       to avoid setting a DET during a debug session. */
}
