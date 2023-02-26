/**********************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   TunSelnMngt.h
* Module Description: Header file for Tuning Selection Management
* Project           : CBD
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       cz7lt6 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 03/31/16  1       KJS     Initial Version                                                                 EA4#5092
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef TUNSELNMNGT_H
#define TUNSELNMNGT_H

/************************************************ Include Statements *************************************************/
#include "CDD_XcpIf.h"

/******************************************** File Level Rule Deviations *********************************************/

/**************************************************** Type defs ******************************************************/

typedef struct
{
  uint8 PageAcs;
} OnlineCalPageInfoRec1;

typedef OnlineCalPageInfoRec1 Ary1D_OnlineCalPageInfoRec1_2[2];

typedef struct
{
  Ary1D_OnlineCalPageInfoRec1_2 Page;
} OnlineCalSegInfoRec1;

typedef OnlineCalSegInfoRec1 Ary1D_OnlineCalSegInfoRec1_TunSelnMngt1[XCPIF_MAXCALSEG_CNT_U08];


/************************************************ Embedded Constants *************************************************/

/****************************************************** Macros *******************************************************/

/*********************************************** Exported Declarations ***********************************************/

/**************************************** End Of Multiple Include Protection *****************************************/
#endif /* TUNSELNMNGT_H */
