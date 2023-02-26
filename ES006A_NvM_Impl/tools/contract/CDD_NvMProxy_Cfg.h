/**********************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   CDD_NvMProxy_Cfg.h
* Module Description: Configuration Header file for NvM Proxy
* Project           : CBD
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       cz7lt6 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 01/27/16  1       KJS     Initial version of the proxy header template                                    EA4#3443
* 05/06/16  2       KJS     Removed uneeded includes from template                                          EA4#3443
* 06/29/16  3       OT      Added definition for Ary1D_boolean_NvMProxy1 to template                        EA4#6448
* 09/28/16  4       KJS     EA4 naming convention corrections                                               EA4#7779
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_NVMPROXY_CFG_H
#define CDD_NVMPROXY_CFG_H

/************************************************ Include Statements *************************************************/

/******************************************** File Level Rule Deviations *********************************************/

/**************************************************** Type defs ******************************************************/
typedef struct
{
  uint8 StdRtn;
  uint8 ReqPen;
  uint8 ReqRes;
} CmdRtnBufRec1;

typedef CmdRtnBufRec1 Ary1D_CmdRtnBufRec1_NvMProxy1[30];
typedef boolean Ary1D_boolean_NvMProxy1[30];

/************************************************ Embedded Constants *************************************************/

/****************************************************** Macros *******************************************************/

/*********************************************** Exported Declarations ***********************************************/

/**************************************** End Of Multiple Include Protection *****************************************/
#endif /* CDD_NVMPROXY_CFG_H */
