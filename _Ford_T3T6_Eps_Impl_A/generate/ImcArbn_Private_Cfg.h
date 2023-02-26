
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
#define IMCARBN_ECUID_CNT_U16   (0U)
#define IMCARBN_VEHSPD_CNT_U16   (1U)
#define IMCARBN_RSTREQ_CNT_U16   (2U)
#define IMCARBN_DIAGCSTSNONRCRVLREQDIFLTPRSNT_CNT_U16   (3U)
#define IMCARBN_DUALECUMOTCTRLMTGTNENA_CNT_U16   (4U)
#define IMCARBN_HWAG_CNT_U16   (5U)
#define IMCARBN_HWTQ_CNT_U16   (6U)
#define IMCARBN_MOTVEL_CNT_U16   (7U)
#define IMCARBN_POSNSERVOINTGTRST_CNT_U16   (8U)
#define IMCARBN_SYSST_CNT_U16   (9U)
#define IMCARBN_VEHSPDVLD_CNT_U16   (10U)
#define IMCARBN_FORDCTCIDX_CNT_U16   (11U)
#define IMCARBN_FORDCTCSTS_CNT_U16   (12U)
#define IMCARBN_FORDABSPRSNT_CNT_U16   (13U)
#define IMCARBN_FORDACTVPARKASSIENAD_CNT_U16   (14U)
#define IMCARBN_FORDACTVRTNENAD_CNT_U16   (15U)
#define IMCARBN_FORDAFSEQUID_CNT_U16   (16U)
#define IMCARBN_FORDENGTQCLASS_CNT_U16   (17U)
#define IMCARBN_FORDESCPRSNT_CNT_U16   (18U)
#define IMCARBN_FORDSELDRVMODENAD_CNT_U16   (19U)
#define IMCARBN_FORDSOFTENDSTOPENAD_CNT_U16   (20U)
#define IMCARBN_FORDSTRTSTOPST_CNT_U16   (21U)
#define IMCARBN_FORDDRVRSTEERRCMDNENAD_CNT_U16   (22U)
#define IMCARBN_RTNDC00REQ_CNT_U16   (23U)
#define IMCARBN_CLRDIAGCREQ_CNT_U16   (24U)
#define IMCARBN_PINIONAG_CNT_U16   (25U)
#define IMCARBN_PINIONAGCONF_CNT_U16   (26U)
#define IMCARBN_HWAGTOMOTAGCORRLNFLTFLD_CNT_U16   (27U)
#define IMCARBN_FORDCOLTQOVRL_CNT_U16   (28U)
#define IMCARBN_BATTVLTG_CNT_U16   (29U)
#define IMCARBN_BATTRTNCURR_CNT_U16   (30U)
#define IMCARBN_FORDMOTTQCMDOVRL_CNT_U16   (31U)
#define IMCARBN_FORDSTEERTQDSTBCREJCTNARBNCMD_CNT_U16   (32U)
#define IMCARBN_FORDSPARE3ARBNCMD_CNT_U16   (33U)
#define IMCARBN_FORDSPARE2ARBNCMD_CNT_U16   (34U)
#define IMCARBN_FORDSPARE1ARBNCMD_CNT_U16   (35U)
#define IMCARBN_FORDPULLDRIFTCMPLRNGARBNCMD_CNT_U16   (36U)
#define IMCARBN_FORDPULLDRIFTCMPARBNCMD_CNT_U16   (37U)
#define IMCARBN_FORDLATCTRLARBNCMD_CNT_U16   (38U)
#define IMCARBN_FORDLANEKEEPASSIARBNCMD_CNT_U16   (39U)
#define IMCARBN_FORDLANEDPRTRWARNARBNCMD_CNT_U16   (40U)
#define IMCARBN_FORDEXTAGCTRLARBNCMD_CNT_U16   (41U)
#define IMCARBN_FORDEVASSTEERASSIARBNCMD_CNT_U16   (42U)
#define IMCARBN_FORDDRVRSTEERRCMDNARBNCMD_CNT_U16   (43U)
#define IMCARBN_FORDACTVNIBLCTRLARBNCMD_CNT_U16   (44U)
/****************[END] Local Signal ID definitions *****************************/
/* Extern configuration structure */
extern const SigGroupRec1 SIGGROUPCONFIG_REC[IMCARBN_TOTALNROFSIGGROUP_CNT_U08];

#endif /* IMCARBN_PRIVATE_CFG_H*/
