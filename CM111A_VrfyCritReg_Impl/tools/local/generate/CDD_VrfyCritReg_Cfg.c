/*****************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_VrfyCritReg_Cfg.c
* Module Description: Critical Register Verification source file
* Project           : CBD
* Author            : Selva
* Generator         : artt 2.0.2.0
* Generation Time   : 13.06.2017 15:33:42
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/15/16  1        Selva       MicroDiag Critical Register                                                    EA4#5190
**********************************************************************************************************************/

#include "CDD_VrfyCritReg_Cfg_private.h"
#include "Rte_CDD_VrfyCritReg.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 1.1  [NXTRDEV 1.1.2]: Inline functions are used for functions to allow for throughput optimization */


#define CDD_VrfyCritReg_START_SEC_CODE
#include "CDD_VrfyCritReg_MemMap.h" 




/****************Critical Registers to be checks Initialisation functions  ****************/  

LOCAL_INLINE FUNC(void, CDD_VrfyCritReg_CODE)  SysCritRegfpcfgIninChk(P2VAR(boolean, AUTOMATIC,CDD_VrfyCritReg_CODE)SysRegsOk_Uls_T_lgc);
LOCAL_INLINE FUNC(void, CDD_VrfyCritReg_CODE)  SysCritRegmpmIninChk(P2VAR(boolean, AUTOMATIC,CDD_VrfyCritReg_CODE)SysRegsOk_Uls_T_lgc);
LOCAL_INLINE FUNC(void, CDD_VrfyCritReg_CODE)  SysCritRegiccfgIninChk(P2VAR(boolean, AUTOMATIC,CDD_VrfyCritReg_CODE)SysRegsOk_Uls_T_lgc);

LOCAL_INLINE FUNC(void, CDD_VrfyCritReg_CODE)  SysCritRegicctrlPerChk(P2VAR(boolean, AUTOMATIC,CDD_VrfyCritReg_CODE)SysRegsOk_Uls_T_lgc);

CONST(NonSysCritRegRec1, AUTOMATIC) IninCritReg8BitChk_rec[NROFININCRITREG8BIT_CNT_U16]=
{
		
		  { 0xffd6203cU, 0x0U, 0x2U}, /* ECMDTMCTL */
		  { 0xffa1009cU, 0x3U, 0xffU}, /* FRTEINT */
		  { 0xfffee022U, 0x11U, 0xffU}, /* IPGPMTUM2 */
		  { 0xfffee023U, 0x10U, 0xffU}, /* IPGPMTUM3 */
		  { 0xfffee024U, 0x1U, 0xffU}, /* IPGPMTUM4 */
		  { 0xffcd13f4U, 0x3U, 0xffU}, /* MODER */
		  { 0xfff88420U, 0x1U, 0xffU}, /* CLMA1CTL0 */
		  { 0xfff88460U, 0x1U, 0xffU}, /* CLMA3CTL0 */
		  { 0xfff88440U, 0x1U, 0xffU}, /* CLMA2CTL0 */
		  { 0xfffee020U, 0x33U, 0xffU}, /* IPGPMTUM0 */
		  { 0xfff88400U, 0x1U, 0xffU}, /* CLMA0CTL0 */
		  { 0xffd62000U, 0x0U, 0x1U}, /* ECMEPCFG */
		  { 0xfffee00dU, 0x3U, 0xffU}, /* IPGENUM */
		
};

CONST(NonSysCritRegRec1, AUTOMATIC) IninCritReg16BitChk_rec[NROFININCRITREG16BIT_CNT_U16]=
{
		  { 0xfff88468U, 0x138U, 0xffffU}, /* CLMA3CMPL */
		  { 0xffc71004U, 0x0U, 0xc09fU}, /* ECCRCAN0TMC */
		  { 0xffc70084U, 0x0U, 0xc09fU}, /* ECCCSIH2TMC */
		  { 0xfffee980U, 0x370U, 0xffffU}, /* SEGCONT */
		  { 0xfff8840cU, 0x91U, 0xffffU}, /* CLMA0CMPH */
		  { 0xfffee60cU, 0x1U, 0xffffU}, /* PEGSP */
		  { 0xffc72004U, 0x0U, 0xc09fU}, /* ECCFLX0TMC */
		  { 0xfff88428U, 0x9bU, 0xffffU}, /* CLMA1CMPL */
		  { 0xfff88408U, 0x72U, 0xffffU}, /* CLMA0CMPL */
		  { 0xffc700c4U, 0x0U, 0xc09fU}, /* ECCCSIH3TMC */
		  { 0xffd62044U, 0xffffU, 0xffffU}, /* ECMDTMCMP */
		  { 0xfff8842cU, 0xa5U, 0xffffU}, /* CLMA1CMPH */
		  { 0xffd62040U, 0x0U, 0xffffU}, /* ECMDTMR */
		  { 0xfff8846cU, 0x148U, 0xffffU}, /* CLMA3CMPH */
		  { 0xffc70044U, 0x0U, 0xc09fU}, /* ECCCSIH1TMC */
		  { 0xffc72084U, 0x0U, 0xc09fU}, /* ECCFLX0T0TMC */
		  { 0xfff88448U, 0x72U, 0xffffU}, /* CLMA2CMPL */
		  { 0xffc70004U, 0x0U, 0xc09fU}, /* ECCCSIH0TMC */
		  { 0xffc72044U, 0x0U, 0xc09fU}, /* ECCFLX0T1TMC */
		  { 0xfff8844cU, 0x91U, 0xffffU}, /* CLMA2CMPH */
		
};


CONST(NonSysCritRegRec1, AUTOMATIC) IninCritReg32BitChk_rec[NROFININCRITREG32BIT_CNT_U16]=
{
		  { 0xfffee680U, 0x0U, 0xffffffffU}, /* PEGG0MK */
		  { 0xffc4002cU, 0x8605ff5fU, 0xffffffffU}, /* FSGD3ADPROT11 */
		  { 0xfffee684U, 0xfebff095U, 0xffffffffU}, /* PEGG0BA */
		  { 0xffc62450U, 0x0U, 0xffffffffU}, /* CFSTSTCTL_PE1 */
		  { 0xfff94018U, 0x8405fe5fU, 0xffffffffU}, /* FSGD2ADPROT6 */
		  { 0xffd62018U, 0x0U, 0x200007f7U}, /* ECMIRCFG1 */
		  { 0xffddd094U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1BDPROT5 */
		  { 0xffddd024U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1ADPROT9 */
		  { 0xffd62054U, 0x0U, 0x7f7U}, /* ECMDTMCFG3 */
		  { 0xffddd000U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1ADPROT0 */
		  { 0xffc62404U, 0x7U, 0xffffffffU}, /* CFERRINT_PE1 */
		  { 0xfff94038U, 0x8605fe5fU, 0xffffffffU}, /* FSGD2ADPROT14 */
		  { 0xffd62050U, 0x0U, 0xfdffdff3U}, /* ECMDTMCFG2 */
		  { 0xffddd004U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1ADPROT1 */
		  { 0xffc62400U, 0x0U, 0xffffffffU}, /* CFECCCTL_PE1 */
		  { 0xffc4000cU, 0x8605fe5fU, 0xffffffffU}, /* FSGD3ADPROT3 */
		  { 0xffd62010U, 0x3U, 0x7f7U}, /* ECMNMICFG1 */
		  { 0xffddd008U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1ADPROT2 */
		  { 0xffc40004U, 0x8405fe5fU, 0xffffffffU}, /* FSGD3ADPROT1 */
		  { 0xffddd028U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1ADPROT10 */
		  { 0xfff94010U, 0x8405fe5fU, 0xffffffffU}, /* FSGD2ADPROT4 */
		  { 0xfff94014U, 0x8405fe5fU, 0xffffffffU}, /* FSGD2ADPROT5 */
		  { 0xfff9402cU, 0x8605ffdfU, 0xffffffffU}, /* FSGD2ADPROT11 */
		  { 0xffddd0a0U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1BDPROT8 */
		  { 0xffddd01cU, 0x8605fe5fU, 0xffffffffU}, /* FSGD1ADPROT7 */
		  { 0xffd6204cU, 0x0U, 0x7f7U}, /* ECMDTMCFG1 */
		  { 0xfffee694U, 0xfebe00d3U, 0xffffffffU}, /* PEGG1BA */
		  { 0xfff94030U, 0x8605fe5fU, 0xffffffffU}, /* FSGD2ADPROT12 */
		  { 0xfff9400cU, 0x8405fe5fU, 0xffffffffU}, /* FSGD2ADPROT3 */
		  { 0xfffee6a4U, 0x0U, 0xffffffffU}, /* PEGG2BA */
		  { 0xffddd084U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1BDPROT1 */
		  { 0xfffee6a0U, 0x0U, 0xffffffffU}, /* PEGG2MK */
		  { 0xffc40014U, 0x8405fe5fU, 0xffffffffU}, /* FSGD3ADPROT5 */
		  { 0xffc40010U, 0x8605fe5fU, 0xffffffffU}, /* FSGD3ADPROT4 */
		  { 0xffd62048U, 0x0U, 0xfdffdff3U}, /* ECMDTMCFG0 */
		  { 0xffc40018U, 0x8405fe5fU, 0xffffffffU}, /* FSGD3ADPROT6 */
		  { 0xfff82c00U, 0x0U, 0x7U}, /* LVICNT */
		  { 0xffddd08cU, 0x8605fe5fU, 0xffffffffU}, /* FSGD1BDPROT3 */
		  { 0xffddd098U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1BDPROT6 */
		  { 0xffd6201cU, 0xc81d4000U, 0xfdffdff3U}, /* ECMEMK0 */
		  { 0xffddd038U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1ADPROT14 */
		  { 0xfff82840U, 0x3U, 0x3U}, /* CVMREN */
		  { 0xfffee690U, 0x1f000U, 0xffffffffU}, /* PEGG1MK */
		  { 0xffd6200cU, 0x21e00ff1U, 0xfdffdff3U}, /* ECMNMICFG0 */
		  { 0xffddd030U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1ADPROT12 */
		  { 0xffddd088U, 0x8405fe5fU, 0xffffffffU}, /* FSGD1BDPROT2 */
		  { 0xffddd034U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1ADPROT13 */
		  { 0xffddd010U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1ADPROT4 */
		  { 0xffd62008U, 0x4U, 0x7f7U}, /* ECMMICFG1 */
		  { 0xfff94020U, 0x8605fe5fU, 0xffffffffU}, /* FSGD2ADPROT8 */
		  { 0xffddd014U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1ADPROT5 */
		  { 0xfff94024U, 0x8605fe5fU, 0xffffffffU}, /* FSGD2ADPROT9 */
		  { 0xffddd018U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1ADPROT6 */
		  { 0xfff94028U, 0x8605fe5fU, 0xffffffffU}, /* FSGD2ADPROT10 */
		  { 0xffc40028U, 0x8605ff5fU, 0xffffffffU}, /* FSGD3ADPROT10 */
		  { 0xfff94004U, 0x8605fe5fU, 0xffffffffU}, /* FSGD2ADPROT1 */
		  { 0xffd62004U, 0x8040000U, 0xfdffdff3U}, /* ECMMICFG0 */
		  { 0xffddd0a4U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1BDPROT9 */
		  { 0xffddd0b4U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1BDPROT13 */
		  { 0xffddd00cU, 0x8605fe5fU, 0xffffffffU}, /* FSGD1ADPROT3 */
		  { 0xfff94034U, 0x8605fe5fU, 0xffffffffU}, /* FSGD2ADPROT13 */
		  { 0xffc40008U, 0x8405fe5fU, 0xffffffffU}, /* FSGD3ADPROT2 */
		  { 0xffddd0b0U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1BDPROT12 */
		  { 0xffddd02cU, 0x8605fe5fU, 0xffffffffU}, /* FSGD1ADPROT11 */
		  { 0xffd62020U, 0x200005e4U, 0x200007f7U}, /* ECMEMK1 */
		  { 0xfff9401cU, 0x8605fe5fU, 0xffffffffU}, /* FSGD2ADPROT7 */
		  { 0xffddd09cU, 0x8605fe5fU, 0xffffffffU}, /* FSGD1BDPROT7 */
		  { 0xffc40000U, 0x8405fe5fU, 0xffffffffU}, /* FSGD3ADPROT0 */
		  { 0xffddd0b8U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1BDPROT14 */
		  { 0xffddd0acU, 0x8605fe5fU, 0xffffffffU}, /* FSGD1BDPROT11 */
		  { 0xfff94000U, 0x8605fe5fU, 0xffffffffU}, /* FSGD2ADPROT0 */
		  { 0xfff9403cU, 0x8605ffdfU, 0xffffffffU}, /* FSGD2ADPROT15 */
		  { 0xffc40020U, 0x8405fe5fU, 0xffffffffU}, /* FSGD3ADPROT8 */
		  { 0xfffee6b4U, 0x0U, 0xffffffffU}, /* PEGG3BA */
		  { 0xffc62350U, 0x0U, 0xffffffffU}, /* CFSTSTCTL_VCI */
		  { 0xffd62014U, 0x2U, 0xfdffdff3U}, /* ECMIRCFG0 */
		  { 0xffc40024U, 0x8405fe5fU, 0xffffffffU}, /* FSGD3ADPROT9 */
		  { 0xfffee6b0U, 0x0U, 0xffffffffU}, /* PEGG3MK */
		  { 0xffddd0a8U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1BDPROT10 */
		  { 0xffddd090U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1BDPROT4 */
		  { 0xffddd020U, 0x8605fedfU, 0xffffffffU}, /* FSGD1ADPROT8 */
		  { 0xffc4001cU, 0x8405fe5fU, 0xffffffffU}, /* FSGD3ADPROT7 */
		  { 0xffddd080U, 0x8605fe5fU, 0xffffffffU}, /* FSGD1BDPROT0 */
		  { 0xfff94008U, 0x8405fe5fU, 0xffffffffU}, /* FSGD2ADPROT2 */
		  { 0xfff90000U, 0x8605fe5fU, 0xffffffffU}, /* FSGD5ADPROT0 */
		
};


/****************Critical Registers to be checked at Periodic rate  ****************/
CONST(NonSysCritRegRec1, AUTOMATIC) PerCritReg8BitChk_rec[NROFPERCRITREG8BIT_CNT_U16]=
{
		  { 0xffdf2008U, 0x0U, 0xffU}, /* SCI32SCR */
		  { 0xffc3040cU, 0x0U, 0xffU}, /* DNFA4ENL */
		  { 0xfff203c0U, 0x10U, 0x10U}, /* ADCD0SFTCR */
		  { 0xffc3020cU, 0x0U, 0xffU}, /* DNFA2ENL */
		  { 0xffc3403cU, 0x0U, 0xffU}, /* FCLA1CTL7 */
		  { 0xffea1128U, 0x0U, 0x1U}, /* TPBA1TE */
		  { 0xffdf800eU, 0x0U, 0xffU}, /* RLN30LCUC */
		  { 0xffd7400cU, 0x78U, 0xffU}, /* WDTA0MD */
		  { 0xffdf0008U, 0x0U, 0xffU}, /* SCI30SCR */
		  { 0xfff20430U, 0x0U, 0xffU}, /* ADCD0THER */
		  { 0xffd74004U, 0x2cU, 0xffU}, /* WDTA0EVAC */
		  { 0xffc3010cU, 0x0U, 0xffU}, /* DNFA1ENL */
		  { 0xffe81014U, 0x0U, 0xffU}, /* ENCA1TE */
		  { 0xffc3000cU, 0x0U, 0xffU}, /* DNFA0ENL */
		  { 0xffdf1008U, 0x0U, 0xffU}, /* SCI31SCR */
		  { 0xffdf900eU, 0x0U, 0xffU}, /* RLN31LCUC */
		  { 0xffea0128U, 0x0U, 0x1U}, /* TPBA0TE */
		  { 0xffe70010U, 0x0U, 0x1U}, /* TSG30STR0 */
		  { 0xfff21430U, 0x0U, 0xffU}, /* ADCD1THER */
		  { 0xffe80014U, 0x0U, 0xffU}, /* ENCA0TE */
		  { 0xfff213c0U, 0x10U, 0x10U}, /* ADCD1SFTCR */
		  { 0xfff82824U, 0x3U, 0x3U}, /* CVMDE */
		  { 0xffc34040U, 0x0U, 0xffU}, /* FCLA2CTL0 */
		
};
/****************Critical Registers to be checked at Periodic rate  ****************/
CONST(NonSysCritRegRec1, AUTOMATIC) PerCritReg16BitChk_rec[NROFPERCRITREG16BIT_CNT_U16]=
{
		  { 0xffe2005cU, 0x0U, 0xffffU}, /* TAUD0TOE */
		  { 0xffe201c0U, 0x0U, 0xffffU}, /* TAUD0TE */
		  { 0xfffeea20U, 0x41U, 0x41U}, /* EIC16 */
		  { 0xfffeea10U, 0x43U, 0x43U}, /* EIC8 */
		  { 0xfffeea12U, 0x42U, 0x42U}, /* EIC9 */
		  { 0xffe221c0U, 0x0U, 0xffffU}, /* TAUD2TE */
		  { 0xffe211c0U, 0x0U, 0xffffU}, /* TAUD1TE */
		  { 0xffe2105cU, 0x0U, 0xffffU}, /* TAUD1TOE */
		  { 0xffe2205cU, 0x0U, 0xffffU}, /* TAUD2TOE */
		
};
/****************Critical Registers to be checked at Periodic rate  ****************/
CONST(NonSysCritRegRec1, AUTOMATIC) PerCritReg32BitChk_rec[NROFPERCRITREG32BIT_CNT_U16]=
{
		  { 0xfff28004U, 0x0U, 0xffffU}, /* TSN0STAT */
		  { 0xffc62200U, 0x0U, 0xffffffffU}, /* CFECCCTL_VCI */
		  { 0xffc61404U, 0x3U, 0xffffffffU}, /* ITERRINT_PE1 */
		  { 0xffc62204U, 0x6U, 0xffffffffU}, /* CFERRINT_VCI */
		  { 0xffc61400U, 0x0U, 0xffffffffU}, /* ITECCCTL_PE1 */
		  { 0xffc60404U, 0x3U, 0xffffffffU}, /* IDERRINT_PE1 */
		  { 0xffcd0038U, 0xbfffffffU, 0xffffffffU}, /* OPBT2 */
		  { 0xffcd0030U, 0x7f8ffffbU, 0xffffffffU}, /* OPBT0 */
		  { 0xffc4c004U, 0x605fe5fU, 0xffffffffU}, /* FSGD0ADPROT1 */
		  { 0xffc60400U, 0x0U, 0xffffffffU}, /* IDECCCTL_PE1 */
		  { 0xfffeeaf0U, 0x0U, 0x10300U}, /* IMR0 */
		  { 0xffe01000U, 0x0U, 0x1U}, /* PSI51CHCTRL */
		  { 0xffc62000U, 0x0U, 0xffffffffU}, /* CFAPCTL */
		  { 0xffe00000U, 0x0U, 0x1U}, /* PSI50CHCTRL */
		  { 0xffc65400U, 0x0U, 0xffffffffU}, /* LRECCCTL_PE1 */
		  { 0xffc4c000U, 0x405fe5fU, 0xffffffffU}, /* FSGD0ADPROT0 */
		  { 0xffc65404U, 0x3U, 0xffffffffU}, /* LRERRINT_PE1 */
		
};

#define CDD_VrfyCritReg_STOP_SEC_CODE
#include "CDD_VrfyCritReg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*************************************************************************/
/***************Start of function definition************/




#define CDD_VrfyCritReg_START_SEC_CODE
#include "CDD_VrfyCritReg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/******************************************************************************
  * Name:        SysCritRegPerChk
  * Description: set 'SysRegsOk_Uls_T_lgc' to 'FALSE' if CPU System Register values are not equal to 
  *              expected values
  * Inputs:      None     
  * Outputs:     SysRegsOk_Uls_T_lgc   
  * Usage Notes: Configured as a trusted function because it needs to run in supervisor mode
  ****************************************************************************/
FUNC(boolean, CDD_VrfyCritReg_CODE) SysCritRegPerChk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
	VAR(boolean, AUTOMATIC)  SysRegsOk_Uls_T_lgc = TRUE;

	SysCritRegicctrlPerChk(&SysRegsOk_Uls_T_lgc);
    	
    return(SysRegsOk_Uls_T_lgc);
}


/******************************************************************************
  * Name:        SysCritRegIninChk
  * Description: set 'SysRegsOk_Uls_T_lgc' to 'FALSE' if CPU System Register values are not equal to 
  *              expected values
  * Inputs:      None     
  * Outputs:     SysRegsOk_Uls_T_lgc   
  * Usage Notes: Configured as a trusted function because it needs to run in supervisor mode
  ****************************************************************************/
FUNC(boolean, CDD_VrfyCritReg_CODE) SysCritRegIninChk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
	VAR(boolean, AUTOMATIC)  SysRegsOk_Uls_T_lgc = TRUE;
	
	SysCritRegfpcfgIninChk(&SysRegsOk_Uls_T_lgc);
    SysCritRegmpmIninChk(&SysRegsOk_Uls_T_lgc);
    SysCritRegiccfgIninChk(&SysRegsOk_Uls_T_lgc);
    		
   return(SysRegsOk_Uls_T_lgc);
}


/******************************************************************************
  * Name:        SysCritRegfpcfgIninChk
  * Description: set 'SysRegsOk_Uls_T_lgc' to 'FALSE' if CPU System Register values are not equal to 
  *              expected values
  * Inputs:      None     
  * Outputs:     SysRegsOk_Uls_T_lgc   
  * Usage Notes: Called from SysCritRegPerChk
  ****************************************************************************/
LOCAL_INLINE FUNC(void, CDD_VrfyCritReg_CODE)  SysCritRegfpcfgIninChk(P2VAR(boolean, AUTOMATIC,CDD_VrfyCritReg_CODE) SysRegsOk_Uls_T_lgc)
{
	VAR(uint32, AUTOMATIC)   TempRegVal_Uls_T_u32;
		  	
	 
        /* System Critical register check for "fpcfg" */    
		TempRegVal_Uls_T_u32 = ((uint32)__STSR (0xa, 0x0) & 0xffffffffU) ;
		if(TempRegVal_Uls_T_u32  != 0x1cU)
		{
			*SysRegsOk_Uls_T_lgc = FALSE;
			*Rte_Pim_dVrfyCritRegSysCritRegAdr() = ((uint32)((uint32)0xa << 8U) | 0x0U);
			*Rte_Pim_dVrfyCritRegSysCritRegDesVal() = TempRegVal_Uls_T_u32;
			*Rte_Pim_dVrfyCritRegSysCritRegActVal() = 0x1cU;		
		}
	 
}

/******************************************************************************
  * Name:        SysCritRegmpmIninChk
  * Description: set 'SysRegsOk_Uls_T_lgc' to 'FALSE' if CPU System Register values are not equal to 
  *              expected values
  * Inputs:      None     
  * Outputs:     SysRegsOk_Uls_T_lgc   
  * Usage Notes: Called from SysCritRegPerChk
  ****************************************************************************/
LOCAL_INLINE FUNC(void, CDD_VrfyCritReg_CODE)  SysCritRegmpmIninChk(P2VAR(boolean, AUTOMATIC,CDD_VrfyCritReg_CODE) SysRegsOk_Uls_T_lgc)
{
	VAR(uint32, AUTOMATIC)   TempRegVal_Uls_T_u32;
		  	
	if(*SysRegsOk_Uls_T_lgc == TRUE){
        /* System Critical register check for "mpm" */    
		TempRegVal_Uls_T_u32 = ((uint32)__STSR (0x0, 0x5) & 0xffffffffU) ;
		if(TempRegVal_Uls_T_u32  != 0x3U)
		{
			*SysRegsOk_Uls_T_lgc = FALSE;
			*Rte_Pim_dVrfyCritRegSysCritRegAdr() = ((uint32)((uint32)0x0 << 8U) | 0x5U);
			*Rte_Pim_dVrfyCritRegSysCritRegDesVal() = TempRegVal_Uls_T_u32;
			*Rte_Pim_dVrfyCritRegSysCritRegActVal() = 0x3U;		
		}
	}
}

/******************************************************************************
  * Name:        SysCritRegiccfgIninChk
  * Description: set 'SysRegsOk_Uls_T_lgc' to 'FALSE' if CPU System Register values are not equal to 
  *              expected values
  * Inputs:      None     
  * Outputs:     SysRegsOk_Uls_T_lgc   
  * Usage Notes: Called from SysCritRegPerChk
  ****************************************************************************/
LOCAL_INLINE FUNC(void, CDD_VrfyCritReg_CODE)  SysCritRegiccfgIninChk(P2VAR(boolean, AUTOMATIC,CDD_VrfyCritReg_CODE) SysRegsOk_Uls_T_lgc)
{
	VAR(uint32, AUTOMATIC)   TempRegVal_Uls_T_u32;
		  	
	if(*SysRegsOk_Uls_T_lgc == TRUE){
        /* System Critical register check for "iccfg" */    
		TempRegVal_Uls_T_u32 = ((uint32)__STSR (0x1a, 0x4) & 0xffffffffU) ;
		if(TempRegVal_Uls_T_u32  != 0x10844U)
		{
			*SysRegsOk_Uls_T_lgc = FALSE;
			*Rte_Pim_dVrfyCritRegSysCritRegAdr() = ((uint32)((uint32)0x1a << 8U) | 0x4U);
			*Rte_Pim_dVrfyCritRegSysCritRegDesVal() = TempRegVal_Uls_T_u32;
			*Rte_Pim_dVrfyCritRegSysCritRegActVal() = 0x10844U;		
		}
	}
}

/******************************************************************************
  * Name:        SysCritRegicctrlPerChk
  * Description: set 'SysRegsOk_Uls_T_lgc' to 'FALSE' if CPU System Register values are not equal to 
  *              expected values
  * Inputs:      None     
  * Outputs:     SysRegsOk_Uls_T_lgc   
  * Usage Notes: Called from SysCritRegPerChk
  ****************************************************************************/
LOCAL_INLINE FUNC(void, CDD_VrfyCritReg_CODE)  SysCritRegicctrlPerChk(P2VAR(boolean, AUTOMATIC,CDD_VrfyCritReg_CODE) SysRegsOk_Uls_T_lgc)
{
	VAR(uint32, AUTOMATIC)   TempRegVal_Uls_T_u32;
		      	
	 
	/* System Critical register check for "icctrl" */
		TempRegVal_Uls_T_u32 = ((uint32)__STSR (0x18, 4) & 0xffffffffU) ;
		if(TempRegVal_Uls_T_u32  != 0x30003U)
		{
			*SysRegsOk_Uls_T_lgc = FALSE;
			*Rte_Pim_dVrfyCritRegSysCritRegAdr() = ((uint32)((uint32)0x18 << 8U) | 0x4U);
			*Rte_Pim_dVrfyCritRegSysCritRegDesVal() = TempRegVal_Uls_T_u32;
			*Rte_Pim_dVrfyCritRegSysCritRegActVal() = 0x30003U;		
		}
	 
}
#define CDD_VrfyCritReg_STOP_SEC_CODE
#include "CDD_VrfyCritReg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


