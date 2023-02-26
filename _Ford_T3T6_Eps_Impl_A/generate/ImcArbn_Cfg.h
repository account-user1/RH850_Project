
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
  
#define IMCARBN_DUALECUIDNSECDRYECUIDN_CNT_U16   IMCARBN_ECUID_CNT_U16   
        
  
#define IMCARBN_IMCSIGARBNVEHSPD_CNT_U16   IMCARBN_VEHSPD_CNT_U16   
        
  
#define IMCARBN_CUSTDIAGCRSTREQ_CNT_U16   IMCARBN_RSTREQ_CNT_U16   
        
  
#define IMCARBN_DUALCTRLROUTPMGRDIAGCSTSNONRCRVLREQDIFLTPRSNT_CNT_U16   IMCARBN_DIAGCSTSNONRCRVLREQDIFLTPRSNT_CNT_U16   
        
  
#define IMCARBN_DUALCTRLROUTPMGRDUALECUMOTCTRLMTGTNENA_CNT_U16   IMCARBN_DUALECUMOTCTRLMTGTNENA_CNT_U16   
        
  
#define IMCARBN_IMCSIGARBNHWAG_CNT_U16   IMCARBN_HWAG_CNT_U16   
        
  
#define IMCARBN_IMCSIGARBNHWTQ_CNT_U16   IMCARBN_HWTQ_CNT_U16   
        
  
#define IMCARBN_IMCSIGARBNMOTVEL_CNT_U16   IMCARBN_MOTVEL_CNT_U16   
        
  
#define IMCARBN_IMCSIGARBNPOSNSERVOINTGTRST_CNT_U16   IMCARBN_POSNSERVOINTGTRST_CNT_U16   
        
  
#define IMCARBN_IMCSIGARBNSYSST_CNT_U16   IMCARBN_SYSST_CNT_U16   
        
  
#define IMCARBN_IMCSIGARBNVEHSPDVLD_CNT_U16   IMCARBN_VEHSPDVLD_CNT_U16   
        
  
#define IMCARBN_FORDDUALECUFLTDIAGCFORDCTCIDX_CNT_U16   IMCARBN_FORDCTCIDX_CNT_U16   
        
  
#define IMCARBN_FORDDUALECUFLTDIAGCFORDCTCSTS_CNT_U16   IMCARBN_FORDCTCSTS_CNT_U16   
        
  
#define IMCARBN_CUSTDIAGCFORDABSPRSNT_CNT_U16   IMCARBN_FORDABSPRSNT_CNT_U16   
        
  
#define IMCARBN_CUSTDIAGCFORDACTVPARKASSIENAD_CNT_U16   IMCARBN_FORDACTVPARKASSIENAD_CNT_U16   
        
  
#define IMCARBN_CUSTDIAGCFORDACTVRTNENAD_CNT_U16   IMCARBN_FORDACTVRTNENAD_CNT_U16   
        
  
#define IMCARBN_CUSTDIAGCFORDAFSEQUID_CNT_U16   IMCARBN_FORDAFSEQUID_CNT_U16   
        
  
#define IMCARBN_CUSTDIAGCFORDENGTQCLASS_CNT_U16   IMCARBN_FORDENGTQCLASS_CNT_U16   
        
  
#define IMCARBN_CUSTDIAGCFORDESCPRSNT_CNT_U16   IMCARBN_FORDESCPRSNT_CNT_U16   
        
  
#define IMCARBN_CUSTDIAGCFORDSELDRVMODENAD_CNT_U16   IMCARBN_FORDSELDRVMODENAD_CNT_U16   
        
  
#define IMCARBN_CUSTDIAGCFORDSOFTENDSTOPENAD_CNT_U16   IMCARBN_FORDSOFTENDSTOPENAD_CNT_U16   
        
  
#define IMCARBN_CUSTDIAGCFORDSTRTSTOPST_CNT_U16   IMCARBN_FORDSTRTSTOPST_CNT_U16   
        
  
#define IMCARBN_CUSTDIAGCFORDDRVRSTEERRCMDNENAD_CNT_U16   IMCARBN_FORDDRVRSTEERRCMDNENAD_CNT_U16   
        
  
#define IMCARBN_CUSTDIAGCRTNDC00REQ_CNT_U16   IMCARBN_RTNDC00REQ_CNT_U16   
        
  
#define IMCARBN_CUSTDIAGCCLRDIAGCREQ_CNT_U16   IMCARBN_CLRDIAGCREQ_CNT_U16   
        
  
#define IMCARBN_HWAGSNSRLSPINIONAG_CNT_U16   IMCARBN_PINIONAG_CNT_U16   
  
#define IMCARBN_HWAGSYSARBNPINIONAG_CNT_U16   IMCARBN_PINIONAG_CNT_U16   
        
  
#define IMCARBN_HWAGSNSRLSPINIONAGCONF_CNT_U16   IMCARBN_PINIONAGCONF_CNT_U16   
  
#define IMCARBN_HWAGSYSARBNPINIONAGCONF_CNT_U16   IMCARBN_PINIONAGCONF_CNT_U16   
        
  
#define IMCARBN_HWAGSYSARBNHWAGTOMOTAGCORRLNFLTFLD_CNT_U16   IMCARBN_HWAGTOMOTAGCORRLNFLTFLD_CNT_U16   
        
  
#define IMCARBN_FORDHWTQCMDOVRLLIMRFORDCOLTQOVRL_CNT_U16   IMCARBN_FORDCOLTQOVRL_CNT_U16   
        
  
#define IMCARBN_FORDVLTGIFBATTVLTG_CNT_U16   IMCARBN_BATTVLTG_CNT_U16   
        
  
#define IMCARBN_FORDVLTGIFBATTRTNCURR_CNT_U16   IMCARBN_BATTRTNCURR_CNT_U16   
        
  
#define IMCARBN_FORDMOTTQCMDOVRLLIMRFORDMOTTQCMDOVRL_CNT_U16   IMCARBN_FORDMOTTQCMDOVRL_CNT_U16   
        
  
#define IMCARBN_FORDCMDARBNFORDSTEERTQDSTBCREJCTNARBNCMD_CNT_U16   IMCARBN_FORDSTEERTQDSTBCREJCTNARBNCMD_CNT_U16   
        
  
#define IMCARBN_FORDCMDARBNFORDSPARE3ARBNCMD_CNT_U16   IMCARBN_FORDSPARE3ARBNCMD_CNT_U16   
        
  
#define IMCARBN_FORDCMDARBNFORDSPARE2ARBNCMD_CNT_U16   IMCARBN_FORDSPARE2ARBNCMD_CNT_U16   
        
  
#define IMCARBN_FORDCMDARBNFORDSPARE1ARBNCMD_CNT_U16   IMCARBN_FORDSPARE1ARBNCMD_CNT_U16   
        
  
#define IMCARBN_FORDCMDARBNFORDPULLDRIFTCMPLRNGARBNCMD_CNT_U16   IMCARBN_FORDPULLDRIFTCMPLRNGARBNCMD_CNT_U16   
        
  
#define IMCARBN_FORDCMDARBNFORDPULLDRIFTCMPARBNCMD_CNT_U16   IMCARBN_FORDPULLDRIFTCMPARBNCMD_CNT_U16   
        
  
#define IMCARBN_FORDCMDARBNFORDLATCTRLARBNCMD_CNT_U16   IMCARBN_FORDLATCTRLARBNCMD_CNT_U16   
        
  
#define IMCARBN_FORDCMDARBNFORDLANEKEEPASSIARBNCMD_CNT_U16   IMCARBN_FORDLANEKEEPASSIARBNCMD_CNT_U16   
        
  
#define IMCARBN_FORDCMDARBNFORDLANEDPRTRWARNARBNCMD_CNT_U16   IMCARBN_FORDLANEDPRTRWARNARBNCMD_CNT_U16   
        
  
#define IMCARBN_FORDCMDARBNFORDEXTAGCTRLARBNCMD_CNT_U16   IMCARBN_FORDEXTAGCTRLARBNCMD_CNT_U16   
        
  
#define IMCARBN_FORDCMDARBNFORDEVASSTEERASSIARBNCMD_CNT_U16   IMCARBN_FORDEVASSTEERASSIARBNCMD_CNT_U16   
        
  
#define IMCARBN_FORDCMDARBNFORDDRVRSTEERRCMDNARBNCMD_CNT_U16   IMCARBN_FORDDRVRSTEERRCMDNARBNCMD_CNT_U16   
        
  
#define IMCARBN_FORDCMDARBNFORDACTVNIBLCTRLARBNCMD_CNT_U16   IMCARBN_FORDACTVNIBLCTRLARBNCMD_CNT_U16   
        

/* TODO dummy signals that doesn't exist, manually copy them until component is updated */
#define IMCARBN_IMCSIGARBNSYSSTSCI_CNT_U16   			IMCARBN_HWTQ_CNT_U16
#define IMCARBN_IMCSIGARBNHWAGTAR_CNT_U16   			IMCARBN_HWTQ_CNT_U16
#define IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST1_CNT_U16	IMCARBN_HWTQ_CNT_U16
#define IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST2_CNT_U16	IMCARBN_HWTQ_CNT_U16
#define IMCARBN_IMCSIGARBNPULLCMPLONGTERMCMPST_CNT_U16	IMCARBN_HWTQ_CNT_U16
#define IMCARBN_IMCSIGARBNPULLCMPSHOTERMCMPST_CNT_U16	IMCARBN_HWTQ_CNT_U16
/**********[END]FDD Signal ID  to Imc Arbitration Signal ID Mapping ************/

/****************[START]Signal Group ID definitions*****************************/

/**************** [START]2ms Signal Group IDs **********************************/

/**************** [END]2ms Signal Group IDs ************************************/

/**************** [START]10ms Signal Group IDs *********************************/

#define IMCARBN_IMC00SIGNALGROUP_CNT_U08  (0U)
#define IMCARBN_IMC01SIGNALGROUP_CNT_U08  (1U)
#define IMCARBN_IMC02SIGNALGROUP_CNT_U08  (2U)
#define IMCARBN_IMC03SIGNALGROUP_CNT_U08  (3U)
#define IMCARBN_IMC04SIGNALGROUP_CNT_U08  (4U)
#define IMCARBN_IMC05SIGNALGROUP_CNT_U08  (5U)
#define IMCARBN_IMC06SIGNALGROUP_CNT_U08  (6U)
#define IMCARBN_IMC07SIGNALGROUP_CNT_U08  (7U)
#define IMCARBN_IMC08SIGNALGROUP_CNT_U08  (8U)
#define IMCARBN_IMCARBNSIGNALGROUPCUSTDIAGCREQ_CNT_U08  (9U)
#define IMCARBN_IMC09SIGNALGROUP_CNT_U08  (10U)
#define IMCARBN_IMC10SIGNALGROUP_CNT_U08  (11U)
#define IMCARBN_IMC11SIGNALGROUP_CNT_U08  (12U)
#define IMCARBN_IMCARBNSIGNALGROUPFORDHWTQCMDOVRLLIMR_CNT_U08  (13U)
#define IMCARBN_IMCARBNSIGNALGROUPFORDMOTTQCMDOVRLLIMR_CNT_U08  (14U)
#define IMCARBN_IMCARBNSIGNALGROUPFORDCMDARBN1_CNT_U08  (15U)
#define IMCARBN_IMCARBNSIGNALGROUPFORDCMDARBN2_CNT_U08  (16U)
#define IMCARBN_IMCARBNSIGNALGROUPFORDVLTGIF1_CNT_U08  (17U)
#define IMCARBN_IMCARBNSIGNALGROUPFORDVLTGIF2_CNT_U08  (18U)
#define IMCARBN_IMCARBNSIGNALGROUPFORDCMDARBN3_CNT_U08  (19U)
#define IMCARBN_IMCARBNSIGNALGROUPFORDCMDARBN4_CNT_U08  (20U)
/**************** [END]10ms Signal Group IDs ***********************************/

/**************** [START]100ms Signal Group IDs ********************************/

#define IMCARBN_IMCARBNSIGNALGROUPCUSTDIAGCECUCONFDID_CNT_U08  (21U)
#define IMCARBN_IMCARBNSIGNALGROUPFORDDUALECUFLTDIAGC_CNT_U08  (22U)
/**************** [END]100ms Signal Group IDs **********************************/

/****************[END]Signal Group ID definitions*******************************/

/****************[START]Signal Group Count definitions**************************/

/* Number of Signal Groups configured under 2ms Rate Group */
#define IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08  (0U)

/* Number of Signal Groups configured under 10ms Rate Group */
#define IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08  (21U)

/* Number of Signal Groups configured under 100ms Rate Group */
#define IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08  (2U)

/* Total number of Signal Groups configured */
#define IMCARBN_TOTALNROFSIGGROUP_CNT_U08 (IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08+IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08+IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08)

/****************[END]Signal Group Count definitions****************************/

/****************Total number of IMC Signals Configured ************************/
#define IMCARBN_TOTALNROFSIG_CNT_U16   (45U)



#endif /* IMCARBN_CFG_H */
