/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name:   CDD_XcpIf_Cfg.h
* Module Description: Configuration header file for ES104A Xcp Interface component.
* Project           : CBD
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       cz7lt6 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 06/14/17  1       KJS     Initial version of the private header template                                  EA4# <<TBD>>
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_XCPIF_CFG_H
#define CDD_XCPIF_CFG_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "XcpProf.h"

/******************************************** File Level Rule Deviations *********************************************/

/**************************************************** Type defs ******************************************************/

/************************************************ Embedded Constants *************************************************/
#define XCPIF_XCPARDRVR_CNT_U08    (STD_OFF)

/****************************************************** Macros *******************************************************/
#define XCPIF_TUNSELNMNGTOSAPPL_CNT_U08     Appl10
/* Provide patch for use with older version of the Vector OS without prefixed names on functions and types. */
#define Os_NonTrustedFunctionIndexType         NonTrustedFunctionIndexType
#define Os_NonTrustedFunctionParameterRefType  NonTrustedFunctionParameterRefType
#define Os_CallNonTrustedFunction              CallNonTrustedFunction

/*********************************************** Exported Declarations ***********************************************/

/**************************************** End Of Multiple Include Protection *****************************************/
#endif /* CDD_XCPIF_CFG_H */
