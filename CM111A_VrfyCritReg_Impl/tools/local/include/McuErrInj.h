/* Contract file for CM111A */
#include "NxtrMcuSuprtLib.h"
#include "ecc_regs.h"
#include "ecm_regs.h"
#include <v800_ghs.h> /* for LDSR, STSR intrinsics */ 

#define MCUDIAGCERRINJ		STD_OFF

extern void ClrErrInjReg_Oper(void);
extern void ReadErrInjReg_Oper(uint32* ErrId);
extern void StrtErrInjCntr_Oper(void);
extern void UpdErrInjReg_Oper(void);

#if (MCUDIAGCERRINJ == STD_ON)
extern FUNC(void, CDD_VrfyCritReg_CODE) InjVrfyCritRegErr(void);
#endif

