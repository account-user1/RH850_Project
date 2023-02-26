/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_Adcf0CfgAndUse.h
* Module Description: ADC f0 Complex Driver Header
* Project           : CBD
* Author            : Mateusz Bartocha
***********************************************************************************************************************
* Version Control:
* %version:           %
* %derived_by:        %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/02/17  1        MB      	 Initial Version                                                                EA4#10924
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_ADCF0CFGANDUSE_H
#define CDD_ADCF0CFGANDUSE_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "CDD_Adcf0CfgAndUse_Cfg.h"

/******************************************** File Level Rule Deviations *********************************************/

/*********************************************** Exported Declarations ***********************************************/

 #define ADCF0CFGANDUSE_ADCF0DIAGCSCANGROUPMAX_CNT_U08			23U
 #define ADCF0CFGANDUSE_ADCF0DIAGCSCANGROUPMIN_CNT_U08			21U
 #define ADCF0CFGANDUSE_ADCF0SGSWENACNVNANDDMAINTRPT_CNT_U08	17U
 #define ADCF0CFGANDUSE_ADCF0SGSWENACNVN_CNT_U08				1U
 #define ADCF0CFGANDUSE_ADCF0VCR21_CNT_U32 						24584U
 #define ADCF0CFGANDUSE_ADCF0VCR22_CNT_U32 						24592U
 #define ADCF0CFGANDUSE_ADCF0VCR23_CNT_U32 						24576U

extern FUNC (void, CDD_Adcf0CfgAndUse_CODE) Adcf0CfgAndUsePer1 (void);
/**************************************** End Of Multiple Include Protection *****************************************/
#endif

