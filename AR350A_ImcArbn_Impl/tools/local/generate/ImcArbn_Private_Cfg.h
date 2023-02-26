
/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name:   ImcArbn_Private_Cfg.h
* Module Description: Private Configuration Header file for IMC Arbitration
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
* 17/Mar/17  2       JK        Instead of DestSize generate DestBitMask                                      EA4#10576   
**********************************************************************************************************************/
/******************************************* Multiple Include Protection *********************************************/
#ifndef IMCARBN_PRIVATE_CFG_H
#define IMCARBN_PRIVATE_CFG_H
/************************************************ Include Statements *************************************************/
#include "ImcArbn_Cfg.h"
/******************************************** File Level Rule Deviations *********************************************/

/* Private type definitions */
typedef   uint32 (*GetSigVal)(void);


typedef struct
{
    GetSigVal GetSigValOper;
    uint32 DestBitMask_u32;
    uint16 SigId_u16;
    uint8 StrtLocn_u08;

}SigPrmRec1;

typedef struct
{
  SigPrmRec1 const *SigPrm;
  uint8  NrOfSig_u08;
  uint8  SigGroupId_u08;
  boolean PrimSrcOnlySigGroup_logl;
  
}SigGroupRec1;


typedef uint8 ImcArbnRxDataSrc2; /* Non-RTE type of ImcArbnRxDataSrc1 (Used in RTE)*/
typedef uint8 ImcArbnRxExtdSts2; /* Non-RTE type of ImcArbnRxExtdSts1 (Used in RTE)*/
/* Frame Buffer -Non RTE definitions required even though it is fixed size, 
since this typedef will be used as base type for Tx/Rx Data 2D arrays*/
typedef uint8 Ary1D_u8_ImcArbnA[8]; 


/* typedef for For all Non-RTE Tx/Rx buffers */
typedef Ary1D_u8_ImcArbnA Ary2D_u8_ImcArbnA[IMCARBN_TOTALNROFSIGGROUP_CNT_U08]; 
/* typedef for all boolean flag - Signal Group level 
   1. Never received buffer data-type
   2. Resync on Primary source active 
   3. Resync on Secondary source active 
*/
typedef boolean Ary1D_logl_ImcArbnA[IMCARBN_TOTALNROFSIGGROUP_CNT_U08];  

/* typedef for all Non-RTE uint8 values/counters - Signal Group level 
   1. Signal Group missing counter
   2. For previous rolling counter 
   3. Signal Group skip counter
   4. Primary Source Resync counter   
   5. Current Resync Rolling counter for Primary source
   6. Secondary Source Resync counter
   7. Current Resync Rolling counter for Secondary source
*/
typedef uint8 Ary1D_u8_ImcArbnB[IMCARBN_TOTALNROFSIGGROUP_CNT_U08];
typedef ImcArbnRxDataSrc2 Ary1D_ImcArbnRxDataSrc2_ImcArbnA[IMCARBN_TOTALNROFSIGGROUP_CNT_U08]; /* Non-RTE typedef for Rx Signal Group Source */
typedef uint32 Ary1D_u32_ImcArbnA[IMCARBN_TOTALNROFSIG_CNT_U16];                               /* Non-RTE typedef for Rx Data Buffer */
typedef ImcArbnRxExtdSts2 Ary1D_ImrArbnRxExtdSts2_ImcArbnA[IMCARBN_TOTALNROFSIG_CNT_U16];      /* Non-RTE typedef for Rx Data Status */
typedef ImcArbnRxDataSrc2 Ary1D_ImcArbnRxDataSrc2_ImcArbnB[IMCARBN_TOTALNROFSIG_CNT_U16];      /* Non-RTE typedef for Rx Signal Source */

/****************[START] Local Signal ID definitions ***************************/
#define IMCARBN_IMCTESTSIG1_CNT_U16   (0U)
#define IMCARBN_IMCTESTSIG2_CNT_U16   (1U)
#define IMCARBN_IMCTESTSIG3_CNT_U16   (2U)
#define IMCARBN_IMCTESTSIG4_CNT_U16   (3U)
#define IMCARBN_IMCTESTSIG5_CNT_U16   (4U)
#define IMCARBN_IMCTESTSIG6_CNT_U16   (5U)
#define IMCARBN_IMCTESTSIG7_CNT_U16   (6U)
#define IMCARBN_IMCTESTSIG8_CNT_U16   (7U)
/****************[END] Local Signal ID definitions *****************************/
/* Extern configuration structure */
extern const SigGroupRec1 SIGGROUPCONFIG_REC[IMCARBN_TOTALNROFSIGGROUP_CNT_U08];

#endif /* IMCARBN_PRIVATE_CFG_H*/
