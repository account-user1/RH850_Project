
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name:   CDD_NvMProxy_Cbk.h
* Module Description: Callback operations used by NvMProxy
* Project           : CBD 
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       cz7lt6 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/15/15  1        KJS       Initial Version                                                                 EA4#471
* 01/27/16  2        KJS       Renamed template to match EA4 naming conventions                                EA4#3443
* 06/29/16  3        OT        Added functionality for quick ignition cycles                                   EA4#6448
* 09/28/16  4        KJS       EA4 naming convention corrections                                               EA4#7779
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_NVMPROXY_CBK_H
#define CDD_NVMPROXY_CBK_H

/************************************************ Include Statements *************************************************/

#include "NvM_Types.h"

/************************************************ Embedded Constants *************************************************/

/******************************************** File Level Rule Deviations *********************************************/

/*********************************************** Function Definitions ************************************************/

FUNC(void, CDD_NvMProxy_CODE) NvMProxy_MultiBlkCallBack( NvM_ServiceIdType SrvId_Cnt_T_u08,
                                                         NvM_RequestResultType JobSts_Cnt_T_u08 );

extern FUNC(Std_ReturnType, AUTOMATIC) CDD_NvMProxy_ClsChkReadCallBack( const void * NvMBuffer );
extern FUNC(Std_ReturnType, AUTOMATIC) CDD_NvMProxy_ClsChkWrCallBack( void * NvMBuffer );

#endif /* CDD_NVMPROXY_CBK_H */

