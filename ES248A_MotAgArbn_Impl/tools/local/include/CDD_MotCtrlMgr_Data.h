/* header file for contract folder of ES248A */

#ifndef CDD_MOTCTRLMGR_DATA_H
#define CDD_MOTCTRLMGR_DATA_H

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

/*Inputs*/
extern uint8    MOTCTRLMGR_MotCtrlMotAgMeclCorrlnSts;
extern uint8    MOTCTRLMGR_MotCtrlMotAgAMeclRollgCntr;
extern uint8    MOTCTRLMGR_MotCtrlMotAgBMeclRollgCntr;
extern uint16   MOTCTRLMGR_MotCtrlMotAgAMecl;
extern uint16   MOTCTRLMGR_MotCtrlMotAgBMecl;
extern SigQlfr1 MOTCTRLMGR_MotCtrlMotAgAMeclQlfr;
extern SigQlfr1 MOTCTRLMGR_MotCtrlMotAgBMeclQlfr;

/*Outputs*/
extern uint16   MOTCTRLMGR_MotCtrlMotAgMecl;

#endif
