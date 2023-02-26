/**********************************************************************************************************************
Contract file for CM112B
**********************************************************************************************************************/
#ifndef CDD_EXCPNHNDLG_H
#define CDD_EXCPNHNDLG_H

/* P1mcDiagc1 enumeration type */
typedef uint32 P1mcDiagc1;

/* Intentional Resets */
#define         P1MCDIAGC_PWRONRST                          (4294901760U)   /* 0xFFFF0000 */

extern FUNC(void, CDD_ExcpnHndlg_CODE) GetMcuDiagcIdnData(P2VAR(P1mcDiagc1, AUTOMATIC, ExcpnHndlg_APPL_VAR) McuDiagcData0_Arg);

#endif
