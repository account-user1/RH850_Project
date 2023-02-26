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
* %version:          2 %
* %derived_by:       gz324f %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 06/14/17  1       KJS     Initial version of the private header template                                  EA4#11830
* 02/12/18  2       KJS     Updates from anomaly EA4#20564                                                  EA4#20574
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_XCPIF_CFG_H
#define CDD_XCPIF_CFG_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "Xcp.h"

/******************************************** File Level Rule Deviations *********************************************/

/**************************************************** Type defs ******************************************************/

/************************************************ Embedded Constants *************************************************/
#define XCPIF_XCPARDRVR_CNT_U08    (STD_ON)
#define XCPIF_XCPEVECH2MILLISEC    XcpConf_XcpEventChannel_XCPEVECH2MILLISEC

/****************************************************** Macros *******************************************************/
#define XCPIF_TUNSELNMNGTOSAPPL_CNT_U08     Appl10

/*********************************************** Exported Declarations ***********************************************/

/**************************************** End Of Multiple Include Protection *****************************************/
#endif /* CDD_XCPIF_CFG_H */
