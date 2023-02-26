/**********************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   ElecGlbPrm_Cfg.h
* Module Description: Configuration header file for Electrical Global Parameters.
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 12/14/16  1       AJM     Initial version of the configurable header                                      EA4#8920 
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef ELECGLBPRM_CFG_H
#define ELECGLBPRM_CFG_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"


/* Inverter Count */
#define ELECGLBPRM_IVTRCNT_CNT_U08		2U

/* Maximum PWM Frequency */
#define ELECGLBPRM_PWMFRQMAX_HZ_U32 	18000U

/* Minimum PWM Frequency */
#define ELECGLBPRM_PWMFRQMIN_HZ_U32		14000U

/* Maximum PWM Period */
#define ELECGLBPRM_PWMPERDMAX_NANOSEC_U32		71429U

/* Minimum PWM Period */
#define ELECGLBPRM_PWMPERDMIN_NANOSEC_U32		55555U

/* Motor Control ISR Period Times 2 */
/* This constant is 2 times ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9 in seconds */
#define ELECGLBPRM_PWMPERDNOMX2_SEC_F32		0.000125F 

/* Nominal PWM Period */
#define ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9		(uint16)(uint32)(float32)32000

/* Motor Control ISR Source Select */
#define ELECGLBPRM_MOTCTRLINTRPTTRIGSRC_CNT_U08		0U

/****************************************************** Macros *******************************************************/

/*********************************************** Exported Declarations ***********************************************/

/**************************************** End Of Multiple Include Protection *****************************************/
#endif/*ELECGLBPRM_CFG_H*/

