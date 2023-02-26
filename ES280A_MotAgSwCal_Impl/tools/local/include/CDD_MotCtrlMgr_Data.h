/* header file for contract folder of ES280A */

#ifndef CDD_MOTCTRLMGR_DATA_H
#define CDD_MOTCTRLMGR_DATA_H

/*Non-RTE enumeration definitions*/
#ifndef Rte_TypeDef_MfgEnaSt1
	typedef uint8 MfgEnaSt1;
#endif

#ifndef MFGENAST_PRDNMOD
	#define MFGENAST_PRDNMOD (0U)
#endif
#ifndef MFGENAST_MFGMOD
	#define MFGENAST_MFGMOD (1U)
#endif
#ifndef MFGENAST_TESTMOD
	#define MFGENAST_TESTMOD (2U)
#endif

/* Inputs */
extern float32 MOTCTRLMGR_MotCtrlMotAg5Sin;
extern float32 MOTCTRLMGR_MotCtrlMotAg5Cos;
extern float32 MOTCTRLMGR_MotCtrlMotAg6Sin;
extern float32 MOTCTRLMGR_MotCtrlMotAg6Cos;
extern float32 MOTCTRLMGR_MotCtrlMotAg2Sin;
extern float32 MOTCTRLMGR_MotCtrlMotAg2Cos;
extern float32 MOTCTRLMGR_MotCtrlVehSpd;
extern uint8   MOTCTRLMGR_MotCtrlMfgEnaSt;
extern boolean MOTCTRLMGR_MotCtrlMotAg5SinAdcFaild;
extern boolean MOTCTRLMGR_MotCtrlMotAg5CosAdcFaild;
extern boolean MOTCTRLMGR_MotCtrlMotAg6SinAdcFaild;
extern boolean MOTCTRLMGR_MotCtrlMotAg6CosAdcFaild;
extern boolean MOTCTRLMGR_MotCtrlMotAg2SinAdcFaild;
extern boolean MOTCTRLMGR_MotCtrlMotAg2CosAdcFaild;

/* Outputs */
extern boolean MOTCTRLMGR_MotCtrlSwCalEna;
extern float32 MOTCTRLMGR_MotCtrlSwCalModlnIdx;
extern uint16  MOTCTRLMGR_MotCtrlSwCalPosnIdx;
#endif /*CDD_MOTCTRLMGR_DATA_H*/
