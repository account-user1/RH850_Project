
/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name:   ImcArbn_Cfg.c
* Module Description: Private configuration source file for IMC Arbitration
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
* 01/Feb/17  2       Akilan    Changed positions of start bit and destination size                           EA4#9291
* 17/Mar/17  3       JK        Anomaly fix EA4#10556 - Incorrect bit mask                                    EA4#10576
**********************************************************************************************************************/
#include "Rte_ImcArbn.h"
/************************************************ Include Statements *************************************************/
#include "ImcArbn_Private_Cfg.h"
/******************************************** File Level Rule Deviations *********************************************/

/*********** ImcArbn Signal Wrapper functions prototype ************************/
/* Wrapper function to get value of ImcTestSig1 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig1(void);
/* Wrapper function to get value of ImcTestSig2 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig2(void);
/* Wrapper function to get value of ImcTestSig3 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig3(void);
/* Wrapper function to get value of ImcTestSig4 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig4(void);
/* Wrapper function to get value of ImcTestSig5 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig5(void);
/* Wrapper function to get value of ImcTestSig6 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig6(void);
/* Wrapper function to get value of ImcTestSig7 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig7(void);
/* Wrapper function to get value of ImcTestSig8 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig8(void);

/*************** [START]Configuration of individual Signal Groups **************/
/* Signal configuration for the signal group TestSigGroup1  */
static const SigPrmRec1  TESTSIGGROUP1_REC[] =
{
    {
        &GetImcTestSig1, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_IMCTESTSIG1_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group TestSigGroup2  */
static const SigPrmRec1  TESTSIGGROUP2_REC[] =
{
    {
        &GetImcTestSig2, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_IMCTESTSIG2_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group TestSigGroup3  */
static const SigPrmRec1  TESTSIGGROUP3_REC[] =
{
    {
        &GetImcTestSig3, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_IMCTESTSIG3_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group TestSigGroup4  */
static const SigPrmRec1  TESTSIGGROUP4_REC[] =
{
    {
        &GetImcTestSig4, /* Pointer to the Signal wrapper function */
        0x0000FFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_IMCTESTSIG4_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetImcTestSig5, /* Pointer to the Signal wrapper function */
        0x0000FFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_IMCTESTSIG5_CNT_U16, /* Signal ID */
        16U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group TestSigGroup5  */
static const SigPrmRec1  TESTSIGGROUP5_REC[] =
{
    {
        &GetImcTestSig6, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_IMCTESTSIG6_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetImcTestSig8, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_IMCTESTSIG8_CNT_U16, /* Signal ID */
        17U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetImcTestSig7, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_IMCTESTSIG7_CNT_U16, /* Signal ID */
        8U, /* Start position of the Signal in the Signal Group */
    },

};
/************************ [END]Configuration of individual Signal Groups *******/

/************************ [START]Configuration of all Signal Groups ************/
const SigGroupRec1 SIGGROUPCONFIG_REC[IMCARBN_TOTALNROFSIGGROUP_CNT_U08] =
{
/*************** [START]Signal Groups Configured under 2ms Rate Group **********/
    {
        &TESTSIGGROUP1_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_TESTSIGGROUP1_CNT_U08, /* Signal Group ID */
        TRUE, /* Transmit on Primary Source only */
    },
    {
        &TESTSIGGROUP4_REC[0], /*Signal Group Structure */
        2U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_TESTSIGGROUP4_CNT_U08, /* Signal Group ID */
        TRUE, /* Transmit on Primary Source only */
    },
    {
        &TESTSIGGROUP5_REC[0], /*Signal Group Structure */
        3U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_TESTSIGGROUP5_CNT_U08, /* Signal Group ID */
        TRUE, /* Transmit on Primary Source only */
    },
/*************** [END]Signal Groups Configured under 2ms Rate Group ************/
/*************** [START]Signal Groups Configured under 10ms Rate Group *********/
    {
        &TESTSIGGROUP2_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_TESTSIGGROUP2_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
/*************** [END]Signal Groups Configured under 10ms Rate Group ***********/
/*************** [START]Signal Groups Configured under 100ms Rate Group ********/
    {
        &TESTSIGGROUP3_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_TESTSIGGROUP3_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
/*************** [END]Signal Groups Configured under 100ms Rate Group **********/
};
/************************ [END]Configuration of all Signal Groups **************/

/***********[START] Signal functions definitions *******************************/
/* Wrapper function to get value of ImcTestSig1 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig1(void)
{
    uint32 RetVal_Uls_T_u32;
    float32 SigVal_Uls_T_f32;
    (void)Rte_Read_ImcTestSig1_Val(&SigVal_Uls_T_f32); 
    RetVal_Uls_T_u32 =  *((uint32*)&SigVal_Uls_T_f32);
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of ImcTestSig2 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig2(void)
{
    uint32 RetVal_Uls_T_u32;
  
    (void)Rte_Read_ImcTestSig2_Val(&RetVal_Uls_T_u32); 
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of ImcTestSig3 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig3(void)
{
    uint32 RetVal_Uls_T_u32;
    sint32 SigVal_Uls_T_s32;
    (void)Rte_Read_ImcTestSig3_Val(&SigVal_Uls_T_s32); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_s32;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of ImcTestSig4 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig4(void)
{
    uint32 RetVal_Uls_T_u32;
    uint16 SigVal_Uls_T_u16;
    (void)Rte_Read_ImcTestSig4_Val(&SigVal_Uls_T_u16); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u16;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of ImcTestSig5 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig5(void)
{
    uint32 RetVal_Uls_T_u32;
    sint16 SigVal_Uls_T_s16;
    (void)Rte_Read_ImcTestSig5_Val(&SigVal_Uls_T_s16); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_s16;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of ImcTestSig6 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig6(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_ImcTestSig6_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of ImcTestSig7 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig7(void)
{
    uint32 RetVal_Uls_T_u32;
    sint8 SigVal_Uls_T_s08;
    (void)Rte_Read_ImcTestSig7_Val(&SigVal_Uls_T_s08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_s08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of ImcTestSig8 */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetImcTestSig8(void)
{
    uint32 RetVal_Uls_T_u32;
    boolean SigVal_Uls_T_logl;
    (void)Rte_Read_ImcTestSig8_Logl(&SigVal_Uls_T_logl); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_logl;
    return(RetVal_Uls_T_u32);
}
/***********[END] Signal functions definitions *********************************/


