/* Contract file for CM104B */
#ifndef CDD_EXCPNHNDLG_H
#define CDD_EXCPNHNDLG_H

/* Type Definitions */
typedef uint32 P1mcDiagc1;

/* Start-Up Tests (Pre OS) */
#define P1MCDIAGC_ECMMSTCHKRSTRTUPFLT       (4193256975U) /* 0xF9F0060F */
#define P1MCDIAGC_MSTCHKRERROUTPCTRLFLT     (4193060370U) /* 0xF9ED0612 */
#define P1MCDIAGC_CONFIGOUTPCTRLFLT         (4193846790U) /* 0xF9F90606 */
#define P1MCDIAGC_EIINTRPTSTRTUPFLT         (4193650185U) /* 0xF9F60609 */
#define P1MCDIAGC_FACIRSTTRFERR             (4192863765U) /* 0xF9EA0615 */
#define P1MCDIAGC_ECMRST                    (4176086805U) /* 0xF8EA0715 */

/* Function prototypes */
extern FUNC(void, CDD_ExcpnHndlg_CODE) SetMcuDiagcIdnData(P1mcDiagc1 McuDiagcData0_Arg,uint32 McuDiagcData1_Arg);
extern FUNC(void, CDD_ExcpnHndlg_CODE) GetMcuDiagcIdnData(P2VAR(P1mcDiagc1, AUTOMATIC, ExcpnHndlg_APPL_VAR) McuDiagcData0_Arg);
extern FUNC(void, CDD_ExcpnHndlg_CODE) ChkForStrtUpTest_Oper(P2VAR(boolean, AUTOMATIC, RTE_CDD_EXCPNHNDLG_APPL_VAR) ExecStrtUpTest_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

#endif /*CDD_EXCPNHNDLG_H*/
