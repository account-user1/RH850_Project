/* Contract file for ES002A */

#define MCUDIAGCERRINJ  STD_OFF

extern void ClrErrInjReg_Oper(void);
extern void ReadErrInjReg_Oper(uint32* ErrId);
extern void StrtErrInjCntr_Oper(void);
extern void UpdErrInjReg_Oper(void);

#if (MCUDIAGCERRINJ == STD_ON)

#define       MCUERRINJ_NTC002BBIT01CASE02_CNT_U32      2818562U /* 0x002B0202 */

#endif

