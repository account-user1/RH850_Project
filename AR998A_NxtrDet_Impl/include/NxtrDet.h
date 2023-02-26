/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: NxtrDet.h
* Module Description: Nexteer Det Configuration
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       gzkys7 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  -------------------------------------------------------------------------     ----------
* 10/15/15  1        LWW       Initial version                                                                 EA4#1916
* 03/11/16  2        SB       Updated for DiagcMgr component                                                   EA4#3421
* 17/01/17  3        AR       Updated for ImcArbn  component                                                   EA4#9291
**********************************************************************************************************************/
/******************************************* Multiple Include Protection *********************************************/
#ifndef NXTRDET_H
#define NXTRDET_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "Det.h"

/******************************************** File Level Rule Deviations *********************************************/

#define NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16				(65535U)
#define NXTRDET_SYNCCRCMODID_CNT_U16						(65534U)
#define NXTRDET_DIAGCMGRMODID_CNT_U16						(65533U)
#define NXTRDET_IMCARBNMODID_CNT_U16                        (65532U)

#ifdef DET_ENABLED
	#define NXTRDET_NXTRMCUSUPRTLIB				  			STD_ON
	#define NXTRDET_SYNCCRC				  					STD_ON
	#define NXTRDET_DIAGCMGR			  					STD_ON
	#define NXTRDET_IMCARBN			  					STD_ON
#else
	#define NXTRDET_NXTRMCUSUPRTLIB				  			STD_OFF
	#define NXTRDET_SYNCCRC				  					STD_OFF
	#define NXTRDET_DIAGCMGR								STD_OFF
	#define NXTRDET_IMCARBN								STD_OFF
#endif
/*********************************************** Exported Declarations ***********************************************/

#endif

