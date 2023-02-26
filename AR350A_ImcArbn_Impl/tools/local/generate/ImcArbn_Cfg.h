
/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name:   ImcArbn_Cfg.h
* Module Description: Public Configuration Header file for IMC Arbitration
* Project           : CBD
* Author            : Akilan Rathakrishnan
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       tzyksv %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                                 SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 15/Jan/17  1       Akilan    ImcArbn Initial Version                                                       EA4#9291   
**********************************************************************************************************************/
/******************************************* Multiple Include Protection *********************************************/
#ifndef IMCARBN_CFG_H
#define IMCARBN_CFG_H
/************************************************ Include Statements *************************************************/
/******************************************** File Level Rule Deviations *********************************************/

/****************************************************** Macros *******************************************************/

/**********[START]FDD Signal ID  to Imc Arbitration Signal ID Mapping **********/
  
#define IMCARBN_FDD1OPTIONALSIGNAME1_CNT_U16   IMCARBN_IMCTESTSIG1_CNT_U16   
  
#define IMCARBN_FDD2OPTIONALSIGNAME1_CNT_U16   IMCARBN_IMCTESTSIG1_CNT_U16   
        
  
#define IMCARBN_FDD1OPTIONALSIGNAME2_CNT_U16   IMCARBN_IMCTESTSIG2_CNT_U16   
  
#define IMCARBN_FDD2OPTIONALSIGNAME2_CNT_U16   IMCARBN_IMCTESTSIG2_CNT_U16   
        
  
#define IMCARBN_FDD1OPTIONALSIGNAME3_CNT_U16   IMCARBN_IMCTESTSIG3_CNT_U16   
  
#define IMCARBN_FDD2OPTIONALSIGNAME3_CNT_U16   IMCARBN_IMCTESTSIG3_CNT_U16   
        
  
#define IMCARBN_FDD1OPTIONALSIGNAME4_CNT_U16   IMCARBN_IMCTESTSIG4_CNT_U16   
  
#define IMCARBN_FDD2OPTIONALSIGNAME4_CNT_U16   IMCARBN_IMCTESTSIG4_CNT_U16   
        
  
#define IMCARBN_FDD1OPTIONALSIGNAME5_CNT_U16   IMCARBN_IMCTESTSIG5_CNT_U16   
  
#define IMCARBN_FDD2OPTIONALSIGNAME5_CNT_U16   IMCARBN_IMCTESTSIG5_CNT_U16   
        
  
#define IMCARBN_FDD1OPTIONALSIGNAME6_CNT_U16   IMCARBN_IMCTESTSIG6_CNT_U16   
  
#define IMCARBN_FDD2OPTIONALSIGNAME6_CNT_U16   IMCARBN_IMCTESTSIG6_CNT_U16   
        
  
#define IMCARBN_FDD1OPTIONALSIGNAME7_CNT_U16   IMCARBN_IMCTESTSIG7_CNT_U16   
  
#define IMCARBN_FDD2OPTIONALSIGNAME7_CNT_U16   IMCARBN_IMCTESTSIG7_CNT_U16   
        
  
#define IMCARBN_FDD2OPTIONALSIGNAME8_CNT_U16   IMCARBN_IMCTESTSIG8_CNT_U16   
  
#define IMCARBN_FDD1OPTIONALSIGNAME8_CNT_U16   IMCARBN_IMCTESTSIG8_CNT_U16   
        
/**********[END]FDD Signal ID  to Imc Arbitration Signal ID Mapping ************/

/****************[START]Signal Group ID definitions*****************************/

/**************** [START]2ms Signal Group IDs **********************************/
#define IMCARBN_TESTSIGGROUP1_CNT_U08  (0U)
#define IMCARBN_TESTSIGGROUP4_CNT_U08  (1U)
#define IMCARBN_TESTSIGGROUP5_CNT_U08  (2U)

/**************** [END]2ms Signal Group IDs ************************************/

/**************** [START]10ms Signal Group IDs *********************************/

#define IMCARBN_TESTSIGGROUP2_CNT_U08  (3U)
/**************** [END]10ms Signal Group IDs ***********************************/

/**************** [START]100ms Signal Group IDs ********************************/

#define IMCARBN_TESTSIGGROUP3_CNT_U08  (4U)
/**************** [END]100ms Signal Group IDs **********************************/

/****************[END]Signal Group ID definitions*******************************/

/****************[START]Signal Group Count definitions**************************/

/* Number of Signal Groups configured under 2ms Rate Group */
#define IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08  (3U)

/* Number of Signal Groups configured under 10ms Rate Group */
#define IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08  (1U)

/* Number of Signal Groups configured under 100ms Rate Group */
#define IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08  (1U)

/* Total number of Signal Groups configured */
#define IMCARBN_TOTALNROFSIGGROUP_CNT_U08 (IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08+IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08+IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08)

/****************[END]Signal Group Count definitions****************************/

/****************Total number of IMC Signals Configured ************************/
#define IMCARBN_TOTALNROFSIG_CNT_U16   (8U)



#endif /* IMCARBN_CFG_H */
