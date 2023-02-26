/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: CanTp
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanTp_Lcfg.c
 *   Generation Time: 2018-01-10 16:15:23
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1601056_D00
 *      Tool Version: DaVinci Configurator (beta) 5.14.21 SP3
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/



/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* -----------------------------------------------------------------------------
    &&&~ Include files
 ----------------------------------------------------------------------------- */

#include "CanTp_Lcfg.h"
#include "CanIf.h"
#include "PduR_CanTp.h"
/* -----------------------------------------------------------------------------
    &&&~ Data definitions
 ----------------------------------------------------------------------------- */



/**********************************************************************************************************************
 *  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanTp_RxPduMap
**********************************************************************************************************************/
/** 
  \var    CanTp_RxPduMap
  \details
  Element                Description
  RxSduCfgIndEndIdx      the end index of the 0:n relation pointing to CanTp_RxSduCfgInd
  RxSduCfgIndStartIdx    the start index of the 0:n relation pointing to CanTp_RxSduCfgInd
  TxSduCfgIndEndIdx      the end index of the 0:n relation pointing to CanTp_TxSduCfgInd
  TxSduCfgIndStartIdx    the start index of the 0:n relation pointing to CanTp_TxSduCfgInd
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanTp_RxPduMapType, CANTP_CONST) CanTp_RxPduMap[4] = {
    /* Index    RxSduCfgIndEndIdx  RxSduCfgIndStartIdx  TxSduCfgIndEndIdx                     TxSduCfgIndStartIdx                    */
  { /*     0 */                1U,                  0U,                                   1U,                                     0U },
  { /*     1 */                2U,                  1U,                                   2U,                                     1U },
  { /*     2 */                3U,                  2U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*     3 */                4U,                  3U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP }
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxSduCfg
**********************************************************************************************************************/
/** 
  \var    CanTp_RxSduCfg
  \details
  Element                     Description
  CanIfTxFcPduId          
  PduRRxSduId             
  RxPduId                 
  TxFcPduConfirmationPduId
  CanType                 
  RxMaxPayloadLength      
  RxTaType                
  STmin                   
  TxSduCfgIdx                 the index of the 0:1 relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanTp_RxSduCfgType, CANTP_CONST) CanTp_RxSduCfg[4] = {
    /* Index    CanIfTxFcPduId                                                                PduRRxSduId                                                           RxPduId                                     TxFcPduConfirmationPduId                        CanType                        RxMaxPayloadLength  RxTaType                             STmin  TxSduCfgIdx                           Comment                       Referable Keys */
  { /*     0 */ CANTP_INVALID_HDL                                                           , PduRConf_PduRSrcPdu_SRC_Can_PT_TesterFunctionalReq_FD1_20_3290b631  , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_b5f48067, CANTP_INVALID_HDL                             , CANTP_CAN20_CANTYPEOFRXSDUCFG,                 7U, CANTP_FUNCTIONAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [RxNSdu_0b63929d] */  /* [RxNSdu_0b63929d, 2] */
  { /*     1 */ CanIfConf_CanIfTxPduCfg_TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be, PduRConf_PduRSrcPdu_SRC_Can_PT_TesterPhysicalReqPSCM_FD1_20_3290b631, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_7cc48353, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_7cc48353, CANTP_CAN20_CANTYPEOFRXSDUCFG,                 7U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                             1U },  /* [RxNSdu_62a8e518] */  /* [RxNSdu_62a8e518, 0] */
  { /*     2 */ CanIfConf_CanIfTxPduCfg_TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be   , PduRConf_PduRSrcPdu_SRC_Can_PT_TesterPhysicalReqPSCM_FD1_3290b631   , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_35bd2844, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_35bd2844, CANTP_CANFD_CANTYPEOFRXSDUCFG,                63U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                             0U },  /* [RxNSdu_4962324c] */  /* [RxNSdu_4962324c, 1] */
  { /*     3 */ CANTP_INVALID_HDL                                                           , PduRConf_PduRSrcPdu_SRC_Can_PT_TesterFunctionalReq_FD1_3290b631     , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c40f6080, CANTP_INVALID_HDL                             , CANTP_CANFD_CANTYPEOFRXSDUCFG,                63U, CANTP_FUNCTIONAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG }   /* [RxNSdu_f2921bcf] */  /* [RxNSdu_f2921bcf, 3] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxSduCfgInd
**********************************************************************************************************************/
/** 
  \var    CanTp_RxSduCfgInd
  \brief  the indexes of the 1:1 sorted relation pointing to CanTp_RxSduCfg
*/ 
#define CANTP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanTp_RxSduCfgIndType, CANTP_CONST) CanTp_RxSduCfgInd[4] = {
  /* Index    RxSduCfgInd      Referable Keys */
  /*     0 */          1U,  /* [0] */
  /*     1 */          2U,  /* [1] */
  /*     2 */          0U,  /* [2] */
  /*     3 */          3U   /* [3] */
};
#define CANTP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxSduSnv2Hdl
**********************************************************************************************************************/
/** 
  \var    CanTp_RxSduSnv2Hdl
  \details
  Element        Description
  RxSduCfgIdx    the index of the 0:1 relation pointing to CanTp_RxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanTp_RxSduSnv2HdlType, CANTP_CONST) CanTp_RxSduSnv2Hdl[4] = {
    /* Index    RxSduCfgIdx        Comment */
  { /*     0 */          0U },  /* [RxNSdu_0b63929d] */
  { /*     1 */          1U },  /* [RxNSdu_62a8e518] */
  { /*     2 */          2U },  /* [RxNSdu_4962324c] */
  { /*     3 */          3U }   /* [RxNSdu_f2921bcf] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSduCfg
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSduCfg
  \details
  Element                   Description
  CanIfTxPduId          
  PduRTxSduId           
  RxFcPduId             
  TxPduConfirmationPduId
  CanType               
  RxSduCfgIdx               the index of the 0:1 relation pointing to CanTp_RxSduCfg
  TxMaxPayloadLength    
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanTp_TxSduCfgType, CANTP_CONST) CanTp_TxSduCfg[2] = {
    /* Index    CanIfTxPduId                                                                  PduRTxSduId                                                            RxFcPduId                                       TxPduConfirmationPduId                      CanType                        RxSduCfgIdx  TxMaxPayloadLength        Comment                       Referable Keys */
  { /*     0 */ CanIfConf_CanIfTxPduCfg_TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be   , PduRConf_PduRDestPdu_DST_Can_PT_TesterPhysicalResPSCM_FD1_3290b631   , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_a3000bfc, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_a3000bfc, CANTP_CANFD_CANTYPEOFTXSDUCFG,          2U,                63U },  /* [TxNSdu_769ddb63] */  /* [TxNSdu_769ddb63, 1] */
  { /*     1 */ CanIfConf_CanIfTxPduCfg_TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be, PduRConf_PduRDestPdu_DST_Can_PT_TesterPhysicalResPSCM_FD1_20_3290b631, CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_d4315ea8, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_d4315ea8, CANTP_CAN20_CANTYPEOFTXSDUCFG,          1U,                 7U }   /* [TxNSdu_b29a3917] */  /* [TxNSdu_b29a3917, 0] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSduCfgInd
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSduCfgInd
  \brief  the indexes of the 1:1 sorted relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanTp_TxSduCfgIndType, CANTP_CONST) CanTp_TxSduCfgInd[2] = {
  /* Index    TxSduCfgInd      Referable Keys */
  /*     0 */          1U,  /* [0] */
  /*     1 */          0U   /* [1] */
};
#define CANTP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSduSnv2Hdl
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSduSnv2Hdl
  \details
  Element        Description
  TxSduCfgIdx    the index of the 0:1 relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanTp_TxSduSnv2HdlType, CANTP_CONST) CanTp_TxSduSnv2Hdl[2] = {
    /* Index    TxSduCfgIdx        Comment */
  { /*     0 */          0U },  /* [TxNSdu_769ddb63] */
  { /*     1 */          1U }   /* [TxNSdu_b29a3917] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_CalcBS
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanTp_CalcBSType, CANTP_VAR_NOINIT) CanTp_CalcBS[4];
#define CANTP_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxState
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanTp_RxStateType, CANTP_VAR_NOINIT) CanTp_RxState[4];
#define CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSemaphores
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanTp_TxSemaphoreType, CANTP_VAR_NOINIT) CanTp_TxSemaphores[2];
#define CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxState
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanTp_TxStateType, CANTP_VAR_NOINIT) CanTp_TxState[2];
#define CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 * FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/




