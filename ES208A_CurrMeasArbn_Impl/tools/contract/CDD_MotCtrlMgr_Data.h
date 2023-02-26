/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCtrlMgr_Data.h
* Module Description: MotCtrlMgr Complex Driver Header Stub
* Project           : CBD
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/12/15  1        Selva       Initial Version                                                                 EA4#368
**********************************************************************************************************************/

/********************** Stubs added at component level******************/
#ifndef Rte_TypeDef_SigQlfr1
   typedef uint8 SigQlfr1;
#endif

# ifndef SIGQLFR_NORES
#  define SIGQLFR_NORES (0U)
# endif

# ifndef SIGQLFR_PASSD
#  define SIGQLFR_PASSD (1U)
# endif

# ifndef SIGQLFR_FAILD
#  define SIGQLFR_FAILD (2U)
# endif


/************************************* Declarations*****************************/ 
 extern  VAR(uint8, AUTOMATIC)	        MOTCTRLMGR_MotCtrlCurrMeasCorrlnSts;
 extern  VAR(float32, AUTOMATIC)	    MOTCTRLMGR_MotCtrlCurrMeasMotAgCorrd;
 extern  VAR(float32, AUTOMATIC)	    MOTCTRLMGR_MotCtrlMotCurrCorrdA;
 extern  VAR(float32, AUTOMATIC)	    MOTCTRLMGR_MotCtrlMotCurrCorrdB;
 extern  VAR(float32, AUTOMATIC)	    MOTCTRLMGR_MotCtrlMotCurrCorrdC;
 extern  VAR(float32, AUTOMATIC)	    MOTCTRLMGR_MotCtrlMotCurrCorrdD;
 extern  VAR(float32, AUTOMATIC)	    MOTCTRLMGR_MotCtrlMotCurrCorrdE;
 extern  VAR(float32, AUTOMATIC)	    MOTCTRLMGR_MotCtrlMotCurrCorrdF;
 extern  VAR(SigQlfr1, AUTOMATIC) 	    MOTCTRLMGR_MotCtrlMotCurrQlfr1;
 extern  VAR(SigQlfr1, AUTOMATIC)       MOTCTRLMGR_MotCtrlMotCurrQlfr2;
 extern  VAR(uint8, AUTOMATIC)    	    MOTCTRLMGR_MotCtrlMotCurrRollgCntr1;
 extern  VAR(uint8, AUTOMATIC)    	    MOTCTRLMGR_MotCtrlMotCurrRollgCntr2;
 extern  VAR(sint8, AUTOMATIC)    	    MOTCTRLMGR_MotCtrlMotElecMeclPolarity;
 extern  VAR(float32, AUTOMATIC)        MOTCTRLMGR_MotCtrlMotCurrDax;
 extern  VAR(float32, AUTOMATIC)        MOTCTRLMGR_MotCtrlMotCurrQax;

 /********************** Stubs added at component level******************/
    
 
 
 
 
 
