#ifndef CDD_EXCPNHNDLG_H
#define CDD_EXCPNHNDLG_H

/* P1mcDiagc1 enumeration type */
typedef uint32 P1mcDiagc1;

#define P1MCDIAGC_PWRONRST        (4294901760U)   /* 0xFFFF0000 */
#define P1MCDIAGC_BISTECCERR      (4211016960U)   /* 0xFAFF0500 */
#define P1MCDIAGC_BISTNOTCMPLERR  (4210820355U)   /* 0xFAFC0503 */
#define P1MCDIAGC_LOGLBISTERR     (4210623750U)   /* 0xFAF90506 */
#define P1MCDIAGC_MEMBISTERR      (4210427145U)   /* 0xFAF60509 */

/* Function prototypes */
extern FUNC(void, CDD_ExcpnHndlg_CODE) SetMcuDiagcIdnData(P1mcDiagc1 McuDiagcData0_Arg, uint32 McuDiagcData1_Arg);
extern FUNC(void, CDD_ExcpnHndlg_CODE) GetMcuDiagcIdnData(P2VAR(P1mcDiagc1, AUTOMATIC, ExcpnHndlg_APPL_VAR) McuDiagcData0_Arg);

#endif
