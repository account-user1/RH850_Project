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
 *            Module: Dcm
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dcm_Lcfg.c
 *   Generation Time: 2018-04-06 17:12:01
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



#define DCM_LCFG_SOURCE
/* ----------------------------------------------
 ~&&&   Includes
---------------------------------------------- */
                                                                                                                                                     /* PRQA S 0857, 0828 EOF */ /* MD_MSR_1.1_857, MD_MSR_1.1_828 */
#include "Dcm.h"
#include "Rte_Dcm.h"
#include "PduR_Dcm.h"
#include "ComM.h"
/* ----------------------------------------------
 ~&&&   Defines
---------------------------------------------- */
#if (DCM_DIDMGR_NVM_READ_ENABLED == STD_ON) || \
    (DCM_DIDMGR_NVM_WRITE_ENABLED == STD_ON)
# if defined(NVM_VENDOR_ID)
#  if (NVM_VENDOR_ID == 30u)
/* Only Vector NvM supports this feature up to now */
#   define Dcm_GetDcmNvMBlockId(blockId)                             (uint16)(NvM_GetDcmBlockId(blockId))                                            /* PRQA S 3453 */ /* QAC 7.0:  A function could probably be used instead of this function-like macro. */ /* Macro is more efficient! */
#  endif
# endif

/* Default NvM handle offset */
# if !defined(Dcm_GetDcmNvMBlockId)
#  define Dcm_GetDcmNvMBlockId(blockId)                              (uint16)(blockId)                                                               /* PRQA S 3453 */ /* QAC 7.0:  A function could probably be used instead of this function-like macro. */ /* Macro is more efficient! */
# endif
#endif
/* ----------------------------------------------
 ~&&&   Module internal function declarations
---------------------------------------------- */
#define DCM_START_SEC_CODE
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
static FUNC(boolean, DCM_CODE) Dcm_ModeRuleDefaultModeRule(Dcm_Ptr2LocalU8Type nrc);
static FUNC(boolean, DCM_CODE) Dcm_ModeRuleEcuResetModeRule(Dcm_Ptr2LocalU8Type nrc);
static FUNC(Rte_ModeType_BswMEcuResetMod, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_BswM_MDGP_BswMEcuResetMod_BswMEcuResetMod(void);
#define DCM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* ----------------------------------------------
 ~&&&   Call-back function declarations
---------------------------------------------- */
#define DCM_START_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
static FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoPostProcessor(Dcm_ConfirmationStatusType status);
#define DCM_STOP_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* ----------------------------------------------
 ~&&&   Uninitialized RAM 8-Bit
---------------------------------------------- */
#define DCM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
static VAR(Dcm_MsgItemType, DCM_VAR_NOINIT) Dcm_CfgNetBuffer_000[1028];
#define DCM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* ----------------------------------------------
 ~&&&   ROM 8-Bit
---------------------------------------------- */
#define DCM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
CONST(Dcm_NetConnRefMemType, DCM_CONST) Dcm_CfgNetTxPduInfo[2]=
{
    0u
  , 1u
};
CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetConnComMChannelMap[1]=
{
    0u
};
CONST(uint8, DCM_CONST) Dcm_CfgStateSecurityFixedBytes[24]=
{
   0x11u /* lvl: Un_locked_L1 */
  ,0x22u /* lvl: Un_locked_L1 */
  ,0x33u /* lvl: Un_locked_L1 */
  ,0x44u /* lvl: Un_locked_L1 */
  ,0x55u /* lvl: Un_locked_L1 */
  ,0x66u /* lvl: Un_locked_L1 */
  ,0x77u /* lvl: Un_locked_L1 */
  ,0x88u /* lvl: Un_locked_L1 */
  ,0x99u /* lvl: Un_locked_L1 */
  ,0xAAu /* lvl: Un_locked_L1 */
  ,0xBBu /* lvl: Un_locked_L1 */
  ,0xCCu /* lvl: Un_locked_L1 */
  ,0x00u /* lvl: Un_locked_L3 */
  ,0x00u /* lvl: Un_locked_L3 */
  ,0x00u /* lvl: Un_locked_L3 */
  ,0x00u /* lvl: Un_locked_L3 */
  ,0x00u /* lvl: Un_locked_L3 */
  ,0x00u /* lvl: Un_locked_L3 */
  ,0x00u /* lvl: Un_locked_L3 */
  ,0x00u /* lvl: Un_locked_L3 */
  ,0x00u /* lvl: Un_locked_L3 */
  ,0x00u /* lvl: Un_locked_L3 */
  ,0x00u /* lvl: Un_locked_L3 */
  ,0x00u /* lvl: Un_locked_L3 */
};
CONST(uint8, DCM_CONST) Dcm_CfgDiagSvcIdLookUpTable[12]=
{
   11u
  ,0x10u
  ,0x11u
  ,0x14u
  ,0x19u
  ,0x22u
  ,0x27u
  ,0x2Eu
  ,0x2Fu
  ,0x31u
  ,0x3Eu
  ,0x85u
};
CONST(uint8, DCM_CONST) Dcm_CfgSvc10SubFuncLookUpTable[5]=
{
   4u
  ,0x01u
  ,0x02u
  ,0x03u
  ,0x7Eu
};
CONST(uint8, DCM_CONST) Dcm_CfgSvc11SubFuncLookUpTable[2]=
{
   1u
  ,0x01u
};
CONST(uint8, DCM_CONST) Dcm_CfgSvc19SubFuncLookUpTable[5]=
{
   4u
  ,0x01u
  ,0x02u
  ,0x06u
  ,0x0Au
};
CONST(uint8, DCM_CONST) Dcm_CfgSvc27SubFuncLookUpTable[5]=
{
   4u
  ,0x01u
  ,0x02u
  ,0x03u
  ,0x04u
};
CONST(uint8, DCM_CONST) Dcm_CfgSvc3ESubFuncLookUpTable[2]=
{
   1u
  ,0x00u
};
CONST(uint8, DCM_CONST) Dcm_CfgSvc85SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x02u
};
#define DCM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* ----------------------------------------------
 ~&&&   ROM 16-Bit
---------------------------------------------- */
#define DCM_START_SEC_CONST_16
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
CONST(uint16, DCM_CONST) Dcm_CfgDidMgrDidLookUpTable[72]=
{
   71u
  ,0x205Au
  ,0x205Bu
  ,0x3003u
  ,0x301Au
  ,0x301Fu
  ,0x3020u
  ,0x330Cu
  ,0x3B4Bu
  ,0x630Fu
  ,0xD100u
  ,0xD111u
  ,0xD117u
  ,0xD118u
  ,0xDD00u
  ,0xDD01u
  ,0xDD09u
  ,0xDE00u
  ,0xDE01u
  ,0xDE02u
  ,0xDE03u
  ,0xDE04u
  ,0xDE05u
  ,0xEE00u
  ,0xEE01u
  ,0xEE02u
  ,0xEE03u
  ,0xEE04u
  ,0xEE05u
  ,0xEE06u
  ,0xEE07u
  ,0xEE20u
  ,0xEE21u
  ,0xEE22u
  ,0xEE23u
  ,0xEE40u
  ,0xEE41u
  ,0xEE42u
  ,0xEE43u
  ,0xEE80u
  ,0xEE81u
  ,0xEE82u
  ,0xEE83u
  ,0xEE84u
  ,0xEE85u
  ,0xEE86u
  ,0xEE87u
  ,0xEE88u
  ,0xEED0u
  ,0xEED1u
  ,0xEED2u
  ,0xF10Au
  ,0xF110u
  ,0xF111u
  ,0xF113u
  ,0xF124u
  ,0xF15Fu
  ,0xF162u
  ,0xF163u
  ,0xF166u
  ,0xF17Cu
  ,0xF180u
  ,0xF188u
  ,0xF18Au
  ,0xF18Cu
  ,0xF190u
  ,0xF194u
  ,0xFD00u
  ,0xFD40u
  ,0xFD41u
  ,0xFD43u
  ,0xFFFFu
};
CONST(uint16, DCM_CONST) Dcm_CfgRidMgrRidLookUpTable[28]=
{
   27u
  ,0x0202u
  ,0x200Eu
  ,0x200Fu
  ,0xDC00u
  ,0xF100u
  ,0xF119u
  ,0xF151u
  ,0xF200u
  ,0xFD54u
  ,0xFD70u
  ,0xFD71u
  ,0xFD81u
  ,0xFD85u
  ,0xFDA0u
  ,0xFDA1u
  ,0xFDA2u
  ,0xFDA3u
  ,0xFDA8u
  ,0xFDA9u
  ,0xFDAAu
  ,0xFDABu
  ,0xFDC2u
  ,0xFDF0u
  ,0xFDF1u
  ,0xFE20u
  ,0xFE88u
  ,0xFE89u
};
#define DCM_STOP_SEC_CONST_16
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* ----------------------------------------------
 ~&&&   ROM of unspecified size
---------------------------------------------- */
#define DCM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
CONST(Dcm_CfgNetBufferInfoType, DCM_CONST) Dcm_CfgNetBufferInfo[1]=
{
   { Dcm_CfgNetBuffer_000,1028u}
};
CONST(Dcm_CfgNetRxPduInfoType, DCM_CONST) Dcm_CfgNetRxPduInfo[4]=
{
   { TRUE, 0u}
  ,{ TRUE, 1u}
  ,{ FALSE, 0u}
  ,{ FALSE, 1u}
};
CONST(Dcm_CfgNetConnectionInfoType, DCM_CONST) Dcm_CfgNetConnectionInfo[2]=
{
   { 0x0000u,PduRConf_PduRSrcPdu_SRC_Can_PT_TesterPhysicalResPSCM_FD1_20_3290b631, 0u,0u}
  ,{ 0x0000u,PduRConf_PduRSrcPdu_SRC_Can_PT_TesterPhysicalResPSCM_FD1_3290b631, 0u,0u}
};
CONST(Dcm_CfgNetProtocolInfoType, DCM_CONST) Dcm_CfgNetProtocolInfo[1]=
{
   { {    0u,   0u},4095u, 3u,TRUE,0u}
};
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetAllComMChannelMap[1]=
{
   ComMConf_ComMChannel_FD1_CAN_f26020e5
};
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetNetworkHandleLookUpTable[2]=
{
   1u
  ,ComMConf_ComMChannel_FD1_CAN_f26020e5
};
CONST(Dcm_ModeRuleFuncType, DCM_CONST) Dcm_CfgModeMgrRules[2]=
{
   Dcm_ModeRuleDefaultModeRule
  ,Dcm_ModeRuleEcuResetModeRule
};
CONST(Dcm_CfgStatePreconditionInfoType, DCM_CONST) Dcm_CfgStatePreconditions[7]=
{
   {    0u,{ 0x0Fu,0x07u}}
  ,{    1u,{ 0x0Fu,0x07u}}
  ,{    0u,{ 0x0Du,0x07u}}
  ,{    0u,{ 0x0Eu,0x07u}}
  ,{    0u,{ 0x0Au,0x07u}}
  ,{    0u,{ 0x0Cu,0x07u}}
  ,{    0u,{ 0x08u,0x07u}}
};
CONST(Dcm_CfgStateSessionInfoType, DCM_CONST) Dcm_CfgStateSessionInfo[4]=
{
   { {    5u, 500u},RTE_MODE_DcmDiagnosticSessionControl_DefaultSession,0x01u}
  ,{ {    2u, 500u},RTE_MODE_DcmDiagnosticSessionControl_ProgrammingSession,0x02u}
  ,{ {    5u, 500u},RTE_MODE_DcmDiagnosticSessionControl_ExtendedSession,0x03u}
  ,{ {    2u, 500u},RTE_MODE_DcmDiagnosticSessionControl_NexteerSession,0x7Eu}
};
CONST(Dcm_CfgStateSecurityInfoType, DCM_CONST) Dcm_CfgStateSecurityInfo[2]=
{
   { 0x01u} /* SecLvl: Un_locked_L1 */
  ,{ 0x02u} /* SecLvl: Un_locked_L3 */
};
CONST(Dcm_CfgStateSecurityFixedByteRefMemType, DCM_CONST) Dcm_CfgStateSecurityFixedByteInfo[3]=
{
    0u
  ,12u /* end+1 of Un_locked_L1 */
  ,24u /* end+1 of Un_locked_L3 */
};
CONST(Dcm_CfgStateNotificationInfoType, DCM_CONST) Dcm_CfgStateSessionNotificationInfo[2]=
{
   { DcmDspSessionCallback}
  ,{ NULL_PTR}
};
CONST(Dcm_CfgDidMgrDidRangeType, DCM_CONST) Dcm_CfgDidMgrDidRanges[4]=
{
   {    3u,   3u}
  ,{ 0xF194u,0xF1FFu}
  ,{ 0xFD00u,0xFD39u}
  ,{ 0xFD43u,0xFEFFu}
};
CONST(Dcm_CfgDidMgrDidInfoRefType, DCM_CONST) Dcm_CfgDidMgrRangeDidInfoRefs[3]=
{
     65u
  ,  66u
  ,  69u
};
CONST(Dcm_CfgDidMgrDidInfoType, DCM_CONST) Dcm_CfgDidMgrDidInfo[71]=
{
   {    2u,   2u,   0u,   0u,0x03u} /* DID: 0x205A */
  ,{    2u,   2u,   2u,   0u,0x03u} /* DID: 0x205B */
  ,{   24u,  24u,   4u,   0u,0x03u} /* DID: 0x3003 */
  ,{    2u,   2u,   6u,   0u,0x03u} /* DID: 0x301A */
  ,{    1u,   1u,   8u,   0u,0x01u} /* DID: 0x301F */
  ,{    2u,   2u,   9u,   0u,0x01u} /* DID: 0x3020 */
  ,{    1u,   1u,  10u,   0u,0x01u} /* DID: 0x330C */
  ,{    2u,   2u,  11u,   0u,0x01u} /* DID: 0x3B4B */
  ,{   24u,  24u,  12u,   0u,0x01u} /* DID: 0x630F */
  ,{    1u,   1u,  13u,   0u,0x01u} /* DID: 0xD100 */
  ,{    1u,   1u,  14u,   0u,0x01u} /* DID: 0xD111 */
  ,{    1u,   1u,  15u,   0u,0x01u} /* DID: 0xD117 */
  ,{    2u,   2u,  16u,   0u,0x01u} /* DID: 0xD118 */
  ,{    4u,   4u,  17u,   0u,0x01u} /* DID: 0xDD00 */
  ,{    3u,   3u,  18u,   0u,0x01u} /* DID: 0xDD01 */
  ,{    1u,   1u,  19u,   0u,0x01u} /* DID: 0xDD09 */
  ,{   24u,  24u,  20u,   0u,0x03u} /* DID: 0xDE00 */
  ,{   24u,  24u,  22u,   0u,0x03u} /* DID: 0xDE01 */
  ,{   24u,  24u,  24u,   0u,0x03u} /* DID: 0xDE02 */
  ,{   64u,  64u,  26u,   0u,0x03u} /* DID: 0xDE03 */
  ,{    2u,   2u,  28u,   0u,0x03u} /* DID: 0xDE04 */
  ,{   24u,  24u,  30u,   0u,0x03u} /* DID: 0xDE05 */
  ,{    3u,   3u,  32u,   0u,0x03u} /* DID: 0xEE00 */
  ,{    1u,   1u,  34u,   0u,0x03u} /* DID: 0xEE01 */
  ,{    1u,   1u,  36u,   0u,0x03u} /* DID: 0xEE02 */
  ,{    2u,   2u,  38u,   0u,0x01u} /* DID: 0xEE03 */
  ,{    2u,   2u,  39u,   0u,0x01u} /* DID: 0xEE04 */
  ,{    2u,   2u,  40u,   0u,0x01u} /* DID: 0xEE05 */
  ,{    1u,   1u,  41u,   0u,0x01u} /* DID: 0xEE06 */
  ,{    1u,   1u,  42u,   0u,0x01u} /* DID: 0xEE07 */
  ,{   24u,  24u,  43u,   0u,0x01u} /* DID: 0xEE20 */
  ,{   20u,  20u,  44u,   0u,0x01u} /* DID: 0xEE21 */
  ,{   40u,  40u,  45u,   0u,0x01u} /* DID: 0xEE22 */
  ,{   40u,  40u,  46u,   0u,0x01u} /* DID: 0xEE23 */
  ,{    3u,   3u,  47u,   0u,0x03u} /* DID: 0xEE40 */
  ,{    1u,   1u,  49u,   0u,0x03u} /* DID: 0xEE41 */
  ,{    1u,   1u,  51u,   0u,0x01u} /* DID: 0xEE42 */
  ,{    1u,   1u,  52u,   0u,0x01u} /* DID: 0xEE43 */
  ,{    1u,   1u,  53u,   0u,0x01u} /* DID: 0xEE80 */
  ,{    4u,   4u,  54u,   0u,0x03u} /* DID: 0xEE81 */
  ,{    4u,   4u,  56u,   0u,0x03u} /* DID: 0xEE82 */
  ,{    4u,   4u,  58u,   0u,0x03u} /* DID: 0xEE83 */
  ,{    4u,   4u,  60u,   0u,0x03u} /* DID: 0xEE84 */
  ,{    4u,   4u,  62u,   0u,0x03u} /* DID: 0xEE85 */
  ,{    4u,   4u,  64u,   0u,0x03u} /* DID: 0xEE86 */
  ,{    4u,   4u,  66u,   0u,0x03u} /* DID: 0xEE87 */
  ,{    4u,   4u,  68u,   0u,0x03u} /* DID: 0xEE88 */
  ,{    1u,   1u,  70u,   0u,0x03u} /* DID: 0xEED0 */
  ,{    7u,   7u,  72u,   0u,0x01u} /* DID: 0xEED1 */
  ,{    4u,   4u,  73u,   0u,0x01u} /* DID: 0xEED2 */
  ,{   24u,  24u,  74u,   0u,0x01u} /* DID: 0xF10A */
  ,{   24u,  24u,  75u,   0u,0x03u} /* DID: 0xF110 */
  ,{   24u,  24u,  77u,   0u,0x03u} /* DID: 0xF111 */
  ,{   24u,  24u,  79u,   0u,0x03u} /* DID: 0xF113 */
  ,{   24u,  24u,  81u,   0u,0x01u} /* DID: 0xF124 */
  ,{   10u,  10u,  82u,   0u,0x01u} /* DID: 0xF15F */
  ,{    1u,   1u,  83u,   0u,0x03u} /* DID: 0xF162 */
  ,{    1u,   1u,  85u,   0u,0x03u} /* DID: 0xF163 */
  ,{    4u,   4u,  87u,   0u,0x03u} /* DID: 0xF166 */
  ,{   11u,  11u,  89u,   0u,0x01u} /* DID: 0xF17C */
  ,{   25u,  25u,  90u,   0u,0x01u} /* DID: 0xF180 */
  ,{   24u,  24u,  91u,   0u,0x01u} /* DID: 0xF188 */
  ,{   24u,  24u,  92u,   0u,0x03u} /* DID: 0xF18A */
  ,{   16u,  16u,  94u,   0u,0x03u} /* DID: 0xF18C */
  ,{   24u,  24u,  96u,   0u,0x01u} /* DID: 0xF190 */
  ,{    0u,1024u,  97u,   0u,0x03u} /* DID: 0xF194 */
  ,{    0u,1024u,  99u,   0u,0x03u} /* DID: 0xFD00 */
  ,{    0u,   4u, 101u,   0u,0x05u} /* DID: 0xFD40 */
  ,{    0u,   4u, 103u,   1u,0x05u} /* DID: 0xFD41 */
  ,{    0u,1024u, 105u,   0u,0x03u} /* DID: 0xFD43 */
  ,{    0u,   1u, 107u,   2u,0x07u} /* DID: 0xFFFF */
};
CONST(Dcm_CfgDidMgrOpInfoType, DCM_CONST) Dcm_CfgDidMgrOpInfo[110]=
{
   {    2u,   0u,0x05u} /* DID: 0x205A */
  ,{    5u,   2u,0x01u} /* DID: 0x205A */
  ,{    2u,   3u,0x05u} /* DID: 0x205B */
  ,{    3u,   5u,0x01u} /* DID: 0x205B */
  ,{    2u,   6u,0x05u} /* DID: 0x3003 */
  ,{    4u,   8u,0x01u} /* DID: 0x3003 */
  ,{    2u,   9u,0x05u} /* DID: 0x301A */
  ,{    3u,  11u,0x01u} /* DID: 0x301A */
  ,{    2u,  12u,0x05u} /* DID: 0x301F */
  ,{    2u,  14u,0x05u} /* DID: 0x3020 */
  ,{    2u,  16u,0x05u} /* DID: 0x330C */
  ,{    2u,  18u,0x05u} /* DID: 0x3B4B */
  ,{    2u,  20u,0x05u} /* DID: 0x630F */
  ,{    0u,  22u,0x05u} /* DID: 0xD100 */
  ,{    2u,  24u,0x05u} /* DID: 0xD111 */
  ,{    2u,  26u,0x05u} /* DID: 0xD117 */
  ,{    2u,  28u,0x05u} /* DID: 0xD118 */
  ,{    2u,  30u,0x05u} /* DID: 0xDD00 */
  ,{    2u,  32u,0x05u} /* DID: 0xDD01 */
  ,{    2u,  34u,0x05u} /* DID: 0xDD09 */
  ,{    2u,  36u,0x05u} /* DID: 0xDE00 */
  ,{    5u,  38u,0x01u} /* DID: 0xDE00 */
  ,{    2u,  39u,0x05u} /* DID: 0xDE01 */
  ,{    5u,  41u,0x01u} /* DID: 0xDE01 */
  ,{    2u,  42u,0x05u} /* DID: 0xDE02 */
  ,{    5u,  44u,0x01u} /* DID: 0xDE02 */
  ,{    2u,  45u,0x05u} /* DID: 0xDE03 */
  ,{    5u,  47u,0x01u} /* DID: 0xDE03 */
  ,{    2u,  48u,0x05u} /* DID: 0xDE04 */
  ,{    5u,  50u,0x01u} /* DID: 0xDE04 */
  ,{    2u,  51u,0x05u} /* DID: 0xDE05 */
  ,{    5u,  53u,0x01u} /* DID: 0xDE05 */
  ,{    2u,  54u,0x05u} /* DID: 0xEE00 */
  ,{    5u,  56u,0x01u} /* DID: 0xEE00 */
  ,{    2u,  57u,0x05u} /* DID: 0xEE01 */
  ,{    5u,  59u,0x01u} /* DID: 0xEE01 */
  ,{    2u,  60u,0x05u} /* DID: 0xEE02 */
  ,{    5u,  62u,0x01u} /* DID: 0xEE02 */
  ,{    2u,  63u,0x05u} /* DID: 0xEE03 */
  ,{    2u,  65u,0x05u} /* DID: 0xEE04 */
  ,{    2u,  67u,0x05u} /* DID: 0xEE05 */
  ,{    2u,  69u,0x05u} /* DID: 0xEE06 */
  ,{    2u,  71u,0x05u} /* DID: 0xEE07 */
  ,{    2u,  73u,0x05u} /* DID: 0xEE20 */
  ,{    2u,  75u,0x05u} /* DID: 0xEE21 */
  ,{    2u,  77u,0x05u} /* DID: 0xEE22 */
  ,{    2u,  79u,0x05u} /* DID: 0xEE23 */
  ,{    2u,  81u,0x05u} /* DID: 0xEE40 */
  ,{    5u,  83u,0x01u} /* DID: 0xEE40 */
  ,{    2u,  84u,0x05u} /* DID: 0xEE41 */
  ,{    5u,  86u,0x01u} /* DID: 0xEE41 */
  ,{    2u,  87u,0x05u} /* DID: 0xEE42 */
  ,{    2u,  89u,0x05u} /* DID: 0xEE43 */
  ,{    2u,  91u,0x05u} /* DID: 0xEE80 */
  ,{    2u,  93u,0x05u} /* DID: 0xEE81 */
  ,{    5u,  95u,0x01u} /* DID: 0xEE81 */
  ,{    2u,  96u,0x05u} /* DID: 0xEE82 */
  ,{    5u,  98u,0x01u} /* DID: 0xEE82 */
  ,{    2u,  99u,0x05u} /* DID: 0xEE83 */
  ,{    5u, 101u,0x01u} /* DID: 0xEE83 */
  ,{    2u, 102u,0x05u} /* DID: 0xEE84 */
  ,{    5u, 104u,0x01u} /* DID: 0xEE84 */
  ,{    2u, 105u,0x05u} /* DID: 0xEE85 */
  ,{    5u, 107u,0x01u} /* DID: 0xEE85 */
  ,{    2u, 108u,0x05u} /* DID: 0xEE86 */
  ,{    5u, 110u,0x01u} /* DID: 0xEE86 */
  ,{    2u, 111u,0x05u} /* DID: 0xEE87 */
  ,{    5u, 113u,0x01u} /* DID: 0xEE87 */
  ,{    2u, 114u,0x05u} /* DID: 0xEE88 */
  ,{    5u, 116u,0x01u} /* DID: 0xEE88 */
  ,{    2u, 117u,0x05u} /* DID: 0xEED0 */
  ,{    5u, 119u,0x01u} /* DID: 0xEED0 */
  ,{    2u, 120u,0x05u} /* DID: 0xEED1 */
  ,{    2u, 122u,0x05u} /* DID: 0xEED2 */
  ,{    2u, 124u,0x05u} /* DID: 0xF10A */
  ,{    2u, 126u,0x05u} /* DID: 0xF110 */
  ,{    6u, 128u,0x01u} /* DID: 0xF110 */
  ,{    0u, 129u,0x05u} /* DID: 0xF111 */
  ,{    4u, 131u,0x01u} /* DID: 0xF111 */
  ,{    0u, 132u,0x05u} /* DID: 0xF113 */
  ,{    4u, 134u,0x01u} /* DID: 0xF113 */
  ,{    2u, 135u,0x05u} /* DID: 0xF124 */
  ,{    2u, 137u,0x05u} /* DID: 0xF15F */
  ,{    0u, 139u,0x05u} /* DID: 0xF162 */
  ,{    6u, 141u,0x01u} /* DID: 0xF162 */
  ,{    2u, 142u,0x05u} /* DID: 0xF163 */
  ,{    6u, 144u,0x01u} /* DID: 0xF163 */
  ,{    2u, 145u,0x05u} /* DID: 0xF166 */
  ,{    6u, 147u,0x01u} /* DID: 0xF166 */
  ,{    0u, 148u,0x05u} /* DID: 0xF17C */
  ,{    2u, 150u,0x05u} /* DID: 0xF180 */
  ,{    2u, 152u,0x05u} /* DID: 0xF188 */
  ,{    2u, 154u,0x05u} /* DID: 0xF18A */
  ,{    6u, 156u,0x01u} /* DID: 0xF18A */
  ,{    0u, 157u,0x05u} /* DID: 0xF18C */
  ,{    6u, 159u,0x01u} /* DID: 0xF18C */
  ,{    2u, 160u,0x05u} /* DID: 0xF190 */
  ,{    6u, 162u,0x01u} /* DID: 0xF194 */
  ,{    6u, 163u,0x01u} /* DID: 0xF194 */
  ,{    6u, 164u,0x01u} /* DID: 0xFD00 */
  ,{    6u, 165u,0x01u} /* DID: 0xFD00 */
  ,{    6u, 166u,0x03u} /* DID: 0xFD40 */
  ,{    6u, 168u,0x09u} /* DID: 0xFD40 */
  ,{    6u, 170u,0x03u} /* DID: 0xFD41 */
  ,{    6u, 172u,0x09u} /* DID: 0xFD41 */
  ,{    6u, 174u,0x01u} /* DID: 0xFD43 */
  ,{    6u, 175u,0x01u} /* DID: 0xFD43 */
  ,{    0u, 176u,0x03u} /* DID: 0xFFFF */
  ,{    0u, 178u,0x01u} /* DID: 0xFFFF */
  ,{    0u, 179u,0x09u} /* DID: 0xFFFF */
};
CONST(Dcm_CfgDidMgrSignalOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrSignalOpClassInfo[181]=
{
   { ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ReadData)), 2u} /* DID: 0x205A */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ConditionCheckRead)), 1u} /* DID: 0x205A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_WriteData)), 2u} /* DID: 0x205A */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ReadData)), 2u} /* DID: 0x205B */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ConditionCheckRead)), 1u} /* DID: 0x205B */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_WriteData)), 2u} /* DID: 0x205B */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_3003_Gear_Hardware_Part_Number_ReadData)), 2u} /* DID: 0x3003 */                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_3003_Gear_Hardware_Part_Number_ConditionCheckRead)), 1u} /* DID: 0x3003 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_3003_Gear_Hardware_Part_Number_WriteData)), 2u} /* DID: 0x3003 */                             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_301A_Pull_Drift_Compensation_Value_ReadData)), 2u} /* DID: 0x301A */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_301A_Pull_Drift_Compensation_Value_ConditionCheckRead)), 1u} /* DID: 0x301A */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_301A_Pull_Drift_Compensation_Value_WriteData)), 2u} /* DID: 0x301A */                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ReadData)), 2u} /* DID: 0x301F */                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ConditionCheckRead)), 1u} /* DID: 0x301F */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_3020_Steering_Pinion_Angle_ReadData)), 2u} /* DID: 0x3020 */                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_3020_Steering_Pinion_Angle_ConditionCheckRead)), 1u} /* DID: 0x3020 */                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ReadData)), 2u} /* DID: 0x330C */                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ConditionCheckRead)), 1u} /* DID: 0x330C */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ReadData)), 2u} /* DID: 0x3B4B */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ConditionCheckRead)), 1u} /* DID: 0x3B4B */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ReadData)), 2u} /* DID: 0x630F */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ConditionCheckRead)), 1u} /* DID: 0x630F */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D100_Active_Diagnostic_Session_ReadData)), 2u} /* DID: 0xD100 */                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D100_Active_Diagnostic_Session_ConditionCheckRead)), 1u} /* DID: 0xD100 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D111_ECU_Power_Supply_Voltage_ReadData)), 2u} /* DID: 0xD111 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D111_ECU_Power_Supply_Voltage_ConditionCheckRead)), 1u} /* DID: 0xD111 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D117_ECU_Internal_Temperature_ReadData)), 2u} /* DID: 0xD117 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D117_ECU_Internal_Temperature_ConditionCheckRead)), 1u} /* DID: 0xD117 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D118_Motor_Current_ReadData)), 2u} /* DID: 0xD118 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_D118_Motor_Current_ConditionCheckRead)), 1u} /* DID: 0xD118 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD00_Global_Real_Time_ReadData)), 2u} /* DID: 0xDD00 */                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD00_Global_Real_Time_ConditionCheckRead)), 1u} /* DID: 0xDD00 */                             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD01_Total_Distance_ReadData)), 2u} /* DID: 0xDD01 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD01_Total_Distance_ConditionCheckRead)), 1u} /* DID: 0xDD01 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD09_Vehicle_Speed_ReadData)), 2u} /* DID: 0xDD09 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DD09_Vehicle_Speed_ConditionCheckRead)), 1u} /* DID: 0xDD09 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE00_VehicleData_ReadData)), 2u} /* DID: 0xDE00 */                                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE00_VehicleData_ConditionCheckRead)), 1u} /* DID: 0xDE00 */                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE00_VehicleData_WriteData)), 2u} /* DID: 0xDE00 */                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE01_FIHSwFeatureConfig_ReadData)), 2u} /* DID: 0xDE01 */                                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE01_FIHSwFeatureConfig_ConditionCheckRead)), 1u} /* DID: 0xDE01 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE01_FIHSwFeatureConfig_WriteData)), 2u} /* DID: 0xDE01 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE02_FeatureConfig_ReadData)), 2u} /* DID: 0xDE02 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE02_FeatureConfig_ConditionCheckRead)), 1u} /* DID: 0xDE02 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE02_FeatureConfig_WriteData)), 2u} /* DID: 0xDE02 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE03_Enable_DisableDTCs_ReadData)), 2u} /* DID: 0xDE03 */                                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE03_Enable_DisableDTCs_ConditionCheckRead)), 1u} /* DID: 0xDE03 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE03_Enable_DisableDTCs_WriteData)), 2u} /* DID: 0xDE03 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE04_PDCResetValue_ReadData)), 2u} /* DID: 0xDE04 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE04_PDCResetValue_ConditionCheckRead)), 1u} /* DID: 0xDE04 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE04_PDCResetValue_WriteData)), 2u} /* DID: 0xDE04 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE05_Unused_ReadData)), 2u} /* DID: 0xDE05 */                                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE05_Unused_ConditionCheckRead)), 1u} /* DID: 0xDE05 */                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_DE05_Unused_WriteData)), 2u} /* DID: 0xDE05 */                                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE00_DevMessConfig_ReadData)), 2u} /* DID: 0xEE00 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE00_DevMessConfig_ConditionCheckRead)), 1u} /* DID: 0xEE00 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE00_DevMessConfig_WriteData)), 2u} /* DID: 0xEE00 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE01_XCP_Enable_Disable_ReadData)), 2u} /* DID: 0xEE01 */                                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE01_XCP_Enable_Disable_ConditionCheckRead)), 1u} /* DID: 0xEE01 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE01_XCP_Enable_Disable_WriteData)), 2u} /* DID: 0xEE01 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE02_Assist_On_Off_ReadData)), 2u} /* DID: 0xEE02 */                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE02_Assist_On_Off_ConditionCheckRead)), 1u} /* DID: 0xEE02 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE02_Assist_On_Off_WriteData)), 2u} /* DID: 0xEE02 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE03_IgnCycleCounter_ReadData)), 2u} /* DID: 0xEE03 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE03_IgnCycleCounter_ConditionCheckRead)), 1u} /* DID: 0xEE03 */                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE04_IgnOnTime_ReadData)), 2u} /* DID: 0xEE04 */                                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE04_IgnOnTime_ConditionCheckRead)), 1u} /* DID: 0xEE04 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE05_FinalMotTq_ReadData)), 2u} /* DID: 0xEE05 */                                             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE05_FinalMotTq_ConditionCheckRead)), 1u} /* DID: 0xEE05 */                                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE06_VINChanged_ReadData)), 2u} /* DID: 0xEE06 */                                             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE06_VINChanged_ConditionCheckRead)), 1u} /* DID: 0xEE06 */                                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE07_EPSSystemState_ReadData)), 2u} /* DID: 0xEE07 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE07_EPSSystemState_ConditionCheckRead)), 1u} /* DID: 0xEE07 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE20_LoAFaultReporting_ReadData)), 2u} /* DID: 0xEE20 */                                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE20_LoAFaultReporting_ConditionCheckRead)), 1u} /* DID: 0xEE20 */                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE21_CurrentLvlCounter_ReadData)), 2u} /* DID: 0xEE21 */                                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE21_CurrentLvlCounter_ConditionCheckRead)), 1u} /* DID: 0xEE21 */                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE22_VoltageLvlCounters_ReadData)), 2u} /* DID: 0xEE22 */                                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE22_VoltageLvlCounters_ConditionCheckRead)), 1u} /* DID: 0xEE22 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE23_TempLvlCounters_ReadData)), 2u} /* DID: 0xEE23 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE23_TempLvlCounters_ConditionCheckRead)), 1u} /* DID: 0xEE23 */                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE40_ResearchMessConfig_ReadData)), 2u} /* DID: 0xEE40 */                                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE40_ResearchMessConfig_ConditionCheckRead)), 1u} /* DID: 0xEE40 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE40_ResearchMessConfig_WriteData)), 2u} /* DID: 0xEE40 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE41_ResearchFeatureSwitch_ReadData)), 2u} /* DID: 0xEE41 */                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE41_ResearchFeatureSwitch_ConditionCheckRead)), 1u} /* DID: 0xEE41 */                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE41_ResearchFeatureSwitch_WriteData)), 2u} /* DID: 0xEE41 */                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE42_ActiveFeatures_ReadData)), 2u} /* DID: 0xEE42 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE42_ActiveFeatures_ConditionCheckRead)), 1u} /* DID: 0xEE42 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE43_SDMSteeringMode_ReadData)), 2u} /* DID: 0xEE43 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE43_SDMSteeringMode_ConditionCheckRead)), 1u} /* DID: 0xEE43 */                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE80_FIHSwVer_ReadData)), 2u} /* DID: 0xEE80 */                                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE80_FIHSwVer_ConditionCheckRead)), 1u} /* DID: 0xEE80 */                                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE81_FIHSwReserved0_ReadData)), 2u} /* DID: 0xEE81 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE81_FIHSwReserved0_ConditionCheckRead)), 1u} /* DID: 0xEE81 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE81_FIHSwReserved0_WriteData)), 2u} /* DID: 0xEE81 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE82_FIHSwReserved1_ReadData)), 2u} /* DID: 0xEE82 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE82_FIHSwReserved1_ConditionCheckRead)), 1u} /* DID: 0xEE82 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE82_FIHSwReserved1_WriteData)), 2u} /* DID: 0xEE82 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE83_FIHSwReserved2_ReadData)), 2u} /* DID: 0xEE83 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE83_FIHSwReserved2_ConditionCheckRead)), 1u} /* DID: 0xEE83 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE83_FIHSwReserved2_WriteData)), 2u} /* DID: 0xEE83 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE84_FIHSwReserved3_ReadData)), 2u} /* DID: 0xEE84 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE84_FIHSwReserved3_ConditionCheckRead)), 1u} /* DID: 0xEE84 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE84_FIHSwReserved3_WriteData)), 2u} /* DID: 0xEE84 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE85_FIHSwReserved4_ReadData)), 2u} /* DID: 0xEE85 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE85_FIHSwReserved4_ConditionCheckRead)), 1u} /* DID: 0xEE85 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE85_FIHSwReserved4_WriteData)), 2u} /* DID: 0xEE85 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE86_FIHSwReserved5_ReadData)), 2u} /* DID: 0xEE86 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE86_FIHSwReserved5_ConditionCheckRead)), 1u} /* DID: 0xEE86 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE86_FIHSwReserved5_WriteData)), 2u} /* DID: 0xEE86 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE87_FIHSwReserved6_ReadData)), 2u} /* DID: 0xEE87 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE87_FIHSwReserved6_ConditionCheckRead)), 1u} /* DID: 0xEE87 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE87_FIHSwReserved6_WriteData)), 2u} /* DID: 0xEE87 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE88_FIHSwReserved7_ReadData)), 2u} /* DID: 0xEE88 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE88_FIHSwReserved7_ConditionCheckRead)), 1u} /* DID: 0xEE88 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EE88_FIHSwReserved7_WriteData)), 2u} /* DID: 0xEE88 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED0_SupplierFactoryMode_ReadData)), 2u} /* DID: 0xEED0 */                                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED0_SupplierFactoryMode_ConditionCheckRead)), 1u} /* DID: 0xEED0 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED0_SupplierFactoryMode_WriteData)), 2u} /* DID: 0xEED0 */                                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED1_SupplierInternalFaultCode_ReadData)), 2u} /* DID: 0xEED1 */                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED1_SupplierInternalFaultCode_ConditionCheckRead)), 1u} /* DID: 0xEED1 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED2_SupplierInternalErrorMemory_ReadData)), 2u} /* DID: 0xEED2 */                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_EED2_SupplierInternalErrorMemory_ConditionCheckRead)), 1u} /* DID: 0xEED2 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ReadData)), 2u} /* DID: 0xF10A */                             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ConditionCheckRead)), 1u} /* DID: 0xF10A */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ReadData)), 2u} /* DID: 0xF110 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ConditionCheckRead)), 1u} /* DID: 0xF110 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_WriteData)), 2u} /* DID: 0xF110 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F111_ECU_Core_Assembly_Number_ReadData)), 2u} /* DID: 0xF111 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F111_ECU_Core_Assembly_Number_ConditionCheckRead)), 1u} /* DID: 0xF111 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F111_ECU_Core_Assembly_Number_WriteData)), 2u} /* DID: 0xF111 */                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F113_ECU_Delivery_Assembly_Number_ReadData)), 2u} /* DID: 0xF113 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F113_ECU_Delivery_Assembly_Number_ConditionCheckRead)), 1u} /* DID: 0xF113 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F113_ECU_Delivery_Assembly_Number_WriteData)), 2u} /* DID: 0xF113 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F124_ECU_Calibration_Data_1_Number_ReadData)), 2u} /* DID: 0xF124 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F124_ECU_Calibration_Data_1_Number_ConditionCheckRead)), 1u} /* DID: 0xF124 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ReadData)), 2u} /* DID: 0xF15F */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ConditionCheckRead)), 1u} /* DID: 0xF15F */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F162_Software_Download_Specification_Version_ReadData)), 2u} /* DID: 0xF162 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F162_Software_Download_Specification_Version_ConditionCheckRead)), 1u} /* DID: 0xF162 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F162_Software_Download_Specification_Version_WriteData)), 2u} /* DID: 0xF162 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F163_Diagnostic_Specification_Version_ReadData)), 2u} /* DID: 0xF163 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F163_Diagnostic_Specification_Version_ConditionCheckRead)), 1u} /* DID: 0xF163 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F163_Diagnostic_Specification_Version_WriteData)), 2u} /* DID: 0xF163 */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ReadData)), 2u} /* DID: 0xF166 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ConditionCheckRead)), 1u} /* DID: 0xF166 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_WriteData)), 2u} /* DID: 0xF166 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ReadData)), 2u} /* DID: 0xF17C */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ConditionCheckRead)), 1u} /* DID: 0xF17C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F180_Boot_Software_Identification_ReadData)), 2u} /* DID: 0xF180 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F180_Boot_Software_Identification_ConditionCheckRead)), 1u} /* DID: 0xF180 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ReadData)), 2u} /* DID: 0xF188 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ConditionCheckRead)), 1u} /* DID: 0xF188 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F18A_System_Supplier_Identifier_ReadData)), 2u} /* DID: 0xF18A */                             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F18A_System_Supplier_Identifier_ConditionCheckRead)), 1u} /* DID: 0xF18A */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F18A_System_Supplier_Identifier_WriteData)), 2u} /* DID: 0xF18A */                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F18C_ECU_Serial_Number_ReadData)), 2u} /* DID: 0xF18C */                                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F18C_ECU_Serial_Number_ConditionCheckRead)), 1u} /* DID: 0xF18C */                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F18C_ECU_Serial_Number_WriteData)), 2u} /* DID: 0xF18C */                                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F190_Vehicle_Identification_Number_ReadData)), 2u} /* DID: 0xF190 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_F190_Vehicle_Identification_Number_ConditionCheckRead)), 1u} /* DID: 0xF190 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DIDRange_NexteerDidRangeF194toF1FF_ReadDidData)), 0u} /* DID: 0xF194 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DIDRange_NexteerDidRangeF194toF1FF_WriteDidData)), 0u} /* DID: 0xF194 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DIDRange_NexteerDidRangeFD00toFD39_ReadDidData)), 0u} /* DID: 0xFD00 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DIDRange_NexteerDidRangeFD00toFD39_WriteDidData)), 0u} /* DID: 0xFD00 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadData)), 2u} /* DID: 0xFD40 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadDataLength)), 2u} /* DID: 0xFD40 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReturnControlToECU)), 3u} /* DID: 0xFD40 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ShortTermAdjustment)), 5u} /* DID: 0xFD40 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadData)), 2u} /* DID: 0xFD41 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadDataLength)), 2u} /* DID: 0xFD41 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReturnControlToECU)), 3u} /* DID: 0xFD41 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ShortTermAdjustment)), 5u} /* DID: 0xFD41 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DIDRange_NexteerDidRangeFD43toFEFF_ReadDidData)), 0u} /* DID: 0xFD43 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DIDRange_NexteerDidRangeFD43toFEFF_WriteDidData)), 0u} /* DID: 0xFD43 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Dummy_ReadData)), 2u} /* DID: 0xFFFF */                                                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Dummy_ReadDataLength)), 2u} /* DID: 0xFFFF */                                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Dummy_WriteData)), 4u} /* DID: 0xFFFF */                                                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Dummy_ReturnControlToECU)), 3u} /* DID: 0xFFFF */                                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Dummy_ShortTermAdjustment)), 5u} /* DID: 0xFFFF */                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
CONST(Dcm_CfgDidMgrOpInfoIoControlType, DCM_CONST) Dcm_CfgDidMgrOpInfoIoControl[3]=
{
   {  168u,   6u} /* DID: 0xFD40 */
  ,{  172u,   6u} /* DID: 0xFD41 */
  ,{  179u,   0u} /* DID: 0xFFFF */
};
CONST(Dcm_CfgRidMgrRidInfoType, DCM_CONST) Dcm_CfgRidMgrRidInfo[27]=
{
   {    0u,   5u,0x07u} /* RID: 0x0202 */
  ,{    3u,   2u,0x01u} /* RID: 0x200E */
  ,{    4u,   5u,0x01u} /* RID: 0x200F */
  ,{    5u,   5u,0x01u} /* RID: 0xDC00 */
  ,{    6u,   6u,0x07u} /* RID: 0xF100 */
  ,{    9u,   6u,0x07u} /* RID: 0xF119 */
  ,{   12u,   6u,0x07u} /* RID: 0xF151 */
  ,{   15u,   6u,0x01u} /* RID: 0xF200 */
  ,{   16u,   6u,0x01u} /* RID: 0xFD54 */
  ,{   17u,   6u,0x01u} /* RID: 0xFD70 */
  ,{   18u,   6u,0x01u} /* RID: 0xFD71 */
  ,{   19u,   6u,0x01u} /* RID: 0xFD81 */
  ,{   20u,   6u,0x01u} /* RID: 0xFD85 */
  ,{   21u,   6u,0x01u} /* RID: 0xFDA0 */
  ,{   22u,   6u,0x01u} /* RID: 0xFDA1 */
  ,{   23u,   6u,0x01u} /* RID: 0xFDA2 */
  ,{   24u,   6u,0x01u} /* RID: 0xFDA3 */
  ,{   25u,   6u,0x01u} /* RID: 0xFDA8 */
  ,{   26u,   6u,0x01u} /* RID: 0xFDA9 */
  ,{   27u,   6u,0x01u} /* RID: 0xFDAA */
  ,{   28u,   6u,0x01u} /* RID: 0xFDAB */
  ,{   29u,   6u,0x07u} /* RID: 0xFDC2 */
  ,{   32u,   6u,0x05u} /* RID: 0xFDF0 */
  ,{   34u,   6u,0x05u} /* RID: 0xFDF1 */
  ,{   36u,   6u,0x03u} /* RID: 0xFE20 */
  ,{   38u,   6u,0x01u} /* RID: 0xFE88 */
  ,{   39u,   6u,0x01u} /* RID: 0xFE89 */
};
CONST(Dcm_CfgRidMgrOpInfoType, DCM_CONST) Dcm_CfgRidMgrOpInfo[40]=
{
   { ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_0202_On_Demand_Self_Test_Start)),   3u,   4u, 3u,0x00u} /* RID: 0x0202 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_0202_On_Demand_Self_Test_Stop)),   3u,   4u, 3u,0x00u} /* RID: 0x0202 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_0202_On_Demand_Self_Test_RequestResults)),   3u,   3u, 6u,0x02u} /* RID: 0x0202 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_Start)),   3u,   4u, 3u,0x00u} /* RID: 0x200E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_Start)),   3u,   4u, 3u,0x00u} /* RID: 0x200F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_Start)),   3u,   4u, 3u,0x00u} /* RID: 0xDC00 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xF100 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Stop)),   3u,   3u, 0u,0x00u} /* RID: 0xF100 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_RequestResults)),   3u,   4u, 3u,0x00u} /* RID: 0xF100 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xF119 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Stop)),   3u,   3u, 0u,0x00u} /* RID: 0xF119 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_RequestResults)),   3u,   4u, 3u,0x00u} /* RID: 0xF119 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xF151 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Stop)),   3u,   3u, 0u,0x00u} /* RID: 0xF151 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_RequestResults)),   3u,   4u, 3u,0x00u} /* RID: 0xF151 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_Start)),   7u,   3u, 1u,0x00u} /* RID: 0xF200 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFD54 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFD70 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFD71 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFD81 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFD85 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFDA0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFDA1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFDA2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFDA3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFDA8 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFDA9 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFDAA */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFDAB */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFDC2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Stop)),   3u,   3u, 0u,0x00u} /* RID: 0xFDC2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_RequestResults)),   3u,   4u, 3u,0x00u} /* RID: 0xFDC2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFDF0 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_RequestResults)),   3u,   4u, 3u,0x00u} /* RID: 0xFDF0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFDF1 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_RequestResults)),   3u,   4u, 3u,0x00u} /* RID: 0xFDF1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Start)),  11u,   3u, 1u,0x00u} /* RID: 0xFE20 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Stop)),   7u,   3u, 1u,0x00u} /* RID: 0xFE20 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFE88 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_Start)),   3u,   3u, 0u,0x00u} /* RID: 0xFE89 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
CONST(Dcm_DiagSvcInitFuncType, DCM_CONST) Dcm_CfgDiagSvcInitializers[3]=
{
   Dcm_Service27Init
  ,Dcm_Service2FInit
  ,NULL_PTR /* end marker */
};
CONST(Dcm_CfgDiagServiceInfoType, DCM_CONST) Dcm_CfgDiagServiceInfo[11]=
{
   { Dcm_Service10Processor,0x01u, 1u,   1u,   2u} /* SID: 0x10 */
  ,{ Dcm_Service11Processor,0x01u, 1u,   3u,   4u} /* SID: 0x11 */
  ,{ Srv14ClrDiagcInfo,0x00u, 3u,   0u,   0u} /* SID: 0x14 */
  ,{ Dcm_Service19Processor,0x01u, 1u,   5u,   0u} /* SID: 0x19 */
  ,{ Dcm_Service22Processor,0x00u, 2u,   0u,   0u} /* SID: 0x22 */
  ,{ Dcm_Service27Processor,0x03u, 1u,   6u,   0u} /* SID: 0x27 */
  ,{ Dcm_Service2EProcessor,0x00u, 3u,   0u,   0u} /* SID: 0x2E */
  ,{ Dcm_Service2FProcessor,0x00u, 3u,   7u,   0u} /* SID: 0x2F */
  ,{ Dcm_Service31Processor,0x01u, 3u,   0u,   0u} /* SID: 0x31 */
  ,{ Dcm_Service3EProcessor,0x01u, 1u,   0u,   0u} /* SID: 0x3E */
  ,{ Dcm_Service85Processor,0x01u, 1u,   8u,   0u} /* SID: 0x85 */
};
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgDiagSvcIdExecPrecondTable[11]=
{
      0u /* SID: 0x10 */
  ,   0u /* SID: 0x11 */
  ,   2u /* SID: 0x14 */
  ,   2u /* SID: 0x19 */
  ,   0u /* SID: 0x22 */
  ,   3u /* SID: 0x27 */
  ,   3u /* SID: 0x2E */
  ,   5u /* SID: 0x2F */
  ,   2u /* SID: 0x31 */
  ,   0u /* SID: 0x3E */
  ,   5u /* SID: 0x85 */
};
CONST(Dcm_DiagSvcConfirmationFuncType, DCM_CONST) Dcm_CfgDiagSvcPostProcessors[9]=
{
   Dcm_ServiceNoPostProcessor
  ,Dcm_Service10PostProcessor
  ,Dcm_Service10FastPostProcessor
  ,Dcm_Service11PostProcessor
  ,Dcm_Service11FastPostProcessor
  ,Dcm_Service19PostProcessor
  ,Dcm_Service27PostProcessor
  ,Dcm_Service2FPostProcessor
  ,Dcm_Service85PostProcessor
};
CONST(Dcm_CfgDiagNotificationInfoType, DCM_CONST) Dcm_CfgDiagOemNotificationInfo[2]=
{
   { Rte_Call_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_Indication,Rte_Call_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_Confirmation}
  ,{ NULL_PTR,NULL_PTR}
};
CONST(Dcm_CfgSvc10SubFuncInfoType, DCM_CONST) Dcm_CfgSvc10SubFuncInfo[4]=
{
   { { 50u, 500u}} /* Session ID: 0x01 */
  ,{ { 25u, 500u}} /* Session ID: 0x02 */
  ,{ { 50u, 500u}} /* Session ID: 0x03 */
  ,{ { 25u, 500u}} /* Session ID: 0x7E */
};
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc10SubFuncExecPrecondTable[4]=
{
      0u /* Session ID: 0x01 */
  ,   1u /* Session ID: 0x02 */
  ,   2u /* Session ID: 0x03 */
  ,   0u /* Session ID: 0x7E */
};
CONST(Dcm_CfgSvc11SubFuncInfoType, DCM_CONST) Dcm_CfgSvc11SubFuncInfo[1]=
{
   { EcuReset_Hard} /* SF: 0x01 */
};
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc11SubFuncExecPrecondTable[1]=
{
      1u /* SF: 0x01 */
};
CONST(Dcm_CfgSvc19SubFuncInfoType, DCM_CONST) Dcm_CfgSvc19SubFuncInfo[4]=
{
   { Dcm_Service19_01Processor, 2u} /* SF: 0x01 */
  ,{ Dcm_Service19_02Processor, 2u} /* SF: 0x02 */
  ,{ Dcm_Service19_06Processor, 5u} /* SF: 0x06 */
  ,{ Dcm_Service19_0AProcessor, 1u} /* SF: 0x0A */
};
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc19SubFuncExecPrecondTable[4]=
{
      2u /* SF: 0x01 */
  ,   2u /* SF: 0x02 */
  ,   2u /* SF: 0x06 */
  ,   2u /* SF: 0x0A */
};
CONST(Dcm_CfgSvc27SubFuncInfoType, DCM_CONST) Dcm_CfgSvc27SubFuncInfo[4]=
{
   { Dcm_Service27SeedProcessor,   1u,  16u} /* SF: 0x01 */                                                                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27KeyProcessor,  19u,   0u} /* SF: 0x02 */                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27SeedProcessor,   1u,  16u} /* SF: 0x03 */                                                                                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27KeyProcessor,  17u,   0u} /* SF: 0x04 */                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
CONST(Dcm_CfgSvc27SecLevelInfoType, DCM_CONST) Dcm_CfgSvc27SecLevelInfo[2]=
{
   { ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_Un_locked_L1_GetSeed)),Rte_Call_SecurityAccess_Un_locked_L1_CompareKey} /* SecLvl: Un_locked_L1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_Un_locked_L3_GetSeed)),Rte_Call_SecurityAccess_Un_locked_L3_CompareKey} /* SecLvl: Un_locked_L3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc27SubFuncExecPrecondTable[4]=
{
      4u /* SF: 0x01 */
  ,   4u /* SF: 0x02 */
  ,   5u /* SF: 0x03 */
  ,   5u /* SF: 0x04 */
};
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc3ESubFuncExecPrecondTable[1]=
{
      0u /* SF: 0x00 */
};
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc85SubFuncExecPrecondTable[2]=
{
      5u /* SF: 0x01 */
  ,   5u /* SF: 0x02 */
};
CONST(Dcm_CfgSvc85SubFuncInfoType, DCM_CONST) Dcm_CfgSvc85SubFuncInfo[2]=
{
   { Dem_DcmEnableDTCSetting,RTE_MODE_DcmControlDtcSetting_ENABLEDTCSETTING} /* SF: 0x01 */
  ,{ Dem_DcmDisableDTCSetting,RTE_MODE_DcmControlDtcSetting_DISABLEDTCSETTING} /* SF: 0x02 */
};
#define DCM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* ----------------------------------------------
 ~&&&   Module internal function implementations
---------------------------------------------- */
#define DCM_START_SEC_CODE
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
static FUNC(boolean, DCM_CODE) Dcm_ModeRuleDefaultModeRule(Dcm_Ptr2LocalU8Type nrc)                                                                  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(nrc);                                                                                                                       /* PRQA S 3112 */ /* MD_Dcm_3112 */
  return TRUE;
}                                                                                                                                                    /* PRQA S 2006 */ /* MD_Dcm_Optimize_2006 */
static FUNC(boolean, DCM_CODE) Dcm_ModeRuleEcuResetModeRule(Dcm_Ptr2LocalU8Type nrc)                                                                 /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  if (Dcm_ModeCondGet_Dcm_Read_BswM_MDGP_BswMEcuResetMod_BswMEcuResetMod() == RTE_MODE_BswMEcuResetMod_EcuResetEnabled)
  {
    return TRUE;
  }
  *nrc = ((uint8)(0x22u));
  return FALSE;
}                                                                                                                                                    /* PRQA S 2006 */ /* MD_Dcm_Optimize_2006 */
static FUNC(Rte_ModeType_BswMEcuResetMod, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_BswM_MDGP_BswMEcuResetMod_BswMEcuResetMod(void)
{
  Rte_ModeType_BswMEcuResetMod result;
  Rte_ModeType_BswMEcuResetMod prev;
  Rte_ModeType_BswMEcuResetMod next;
  result = Rte_Mode_Dcm_Read_BswM_MDGP_BswMEcuResetMod_Dcm_Read_BswM_MDGP_BswMEcuResetMod(&prev, &next);
  return ((Rte_ModeType_BswMEcuResetMod)((RTE_TRANSITION_BswMEcuResetMod == result)?next:result));
}
#define DCM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* ----------------------------------------------
 ~&&&   Module call-out implementations
---------------------------------------------- */
#define DCM_START_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
static FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoPostProcessor(Dcm_ConfirmationStatusType status)
{
  DCM_IGNORE_UNREF_PARAM(status);                                                                                                                    /* PRQA S 3112 */ /* MD_Dcm_3112 */
}
#define DCM_STOP_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1)*/
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* ********************************************************************************************************************
 * END OF FILE: Dcm_Lcfg.c
 * ******************************************************************************************************************** */

