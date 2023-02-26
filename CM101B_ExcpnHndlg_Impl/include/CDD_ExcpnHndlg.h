/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer
* Nexteer Confidential
*
* Module File Name  : CDD_ExcpnHndlg.h 
* Module Description: Declarations of P1mcDiagc1 data type and global functions of CM101B Exception Handling RH850
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR#
* --------  ------  ---------  ----------------------------------------------------------------------------  ---------
* 11/21/17  1        AJM       Initial Version                                                               EA4#12706
* 03/11/18  2        AJM       Removed reset causes ECMCHKRSTRTUPFLT,FEINTRPTSTRTUPFLT,                      EA4#21569
                               CHKRERROUTPCTRLFLT,CODFLSSNGBITHARDFLT.Updated ECMMSTSTRTUPFLT to 
                               ECMMSTCHKRSTRTUPFLT,MSTERROUTPCTRLFLT to MSTCHKRERROUTPCTRLFLT
**********************************************************************************************************************/
#ifndef CDD_EXCPNHNDLG_H
#define CDD_EXCPNHNDLG_H

/* P1mcDiagc1 enumeration type */
typedef uint32 P1mcDiagc1;

/* Intentional Resets */
#define         P1MCDIAGC_PWRONRST                          (4294901760U)   /* 0xFFFF0000 */
#define         P1MCDIAGC_FLSPROGMREQ                       (4294705155U)   /* 0xFFFC0003 */
#define         P1MCDIAGC_FLSPROGMCMPL                      (4294508550U)   /* 0xFFF90006 */
#define         P1MCDIAGC_DBGRST                            (4294311945U)   /* 0xFFF60009 */
#define         P1MCDIAGC_HARDRST                           (4294115340U)   /* 0xFFF3000C */
#define         P1MCDIAGC_SOFTRST                           (4293918735U)   /* 0xFFF0000F */

/* SYSERR */
#define         P1MCDIAGC_PRPHLBUSGUARDWRERR                (4278124800U)   /* 0xFEFF0100 */
#define         P1MCDIAGC_INTPRPHLGUARDERR                  (4277928195U)   /* 0xFEFC0103 */
#define         P1MCDIAGC_LCLRAMDBLBIT                      (4277731590U)   /* 0xFEF90106 */
#define         P1MCDIAGC_INVLDRAMAREA                      (4277534985U)   /* 0xFEF60109 */
#define         P1MCDIAGC_PRPHLBUSGUARDREADERR              (4277338380U)   /* 0xFEF3010C */
#define         P1MCDIAGC_PRPHLBUSADRDATAECCERR             (4277141775U)   /* 0xFEF0010F */
#define         P1MCDIAGC_HISPDBUSGUARDERR                  (4276945170U)   /* 0xFEED0112 */
#define         P1MCDIAGC_CODFLSGUARDERR                    (4276748565U)   /* 0xFEEA0115 */
#define         P1MCDIAGC_CODFLSADRPARORDATAECCERR          (4276551960U)   /* 0xFEE70118 */
#define         P1MCDIAGC_GBLRAMGUARDERR                    (4276355355U)   /* 0xFEE4011B */
#define         P1MCDIAGC_GBLRAMECCERR                      (4276158750U)   /* 0xFEE1011E */
#define         P1MCDIAGC_PRPHLUMAPDAREA                    (4275962145U)   /* 0xFEDE0121 */
#define         P1MCDIAGC_HISPDBUSUMAPDAREAERR              (4275765540U)   /* 0xFEDB0124 */
#define         P1MCDIAGC_CODFLSINSTRFETCHERR               (4275568935U)   /* 0xFED80127 */
#define         P1MCDIAGC_NONCODFLSINSTRFETCHERR            (4275372330U)   /* 0xFED5012A */
#define         P1MCDIAGC_PEGERR                            (4275175725U)   /* 0xFED2012D */
#define         P1MCDIAGC_SYSERRGENREGWRINUSRMODE           (4274979120U)   /* 0xFECF0130 */
#define         P1MCDIAGC_INTPRPHLGUARDPROTNREGWRINUSRMODE  (4274782515U)   /* 0xFECC0133 */

/* FPUERR */
#define         P1MCDIAGC_FPUERRINVLDOPER                   (4261347840U)   /* 0xFDFF0200 */
#define         P1MCDIAGC_FPUERRDIVBYZERO                   (4261151235U)   /* 0xFDFC0203 */
#define         P1MCDIAGC_FPUERROVF                         (4260954630U)   /* 0xFDF90206 */
#define         P1MCDIAGC_FPUERRUKWN                        (4260758025U)   /* 0xFDF60209 */

/* FENMI */
#define         P1MCDIAGC_FENMIWDG                          (4244570880U)   /* 0xFCFF0300 */
#define         P1MCDIAGC_DMALOCKSTEPORGBLRAMWRBUFERR       (4244374275U)   /* 0xFCFC0303 */
#define         P1MCDIAGC_BUSBRDGERR                        (4244177670U)   /* 0xFCF90306 */
#define         P1MCDIAGC_PROCRLOCKSTEPERR                  (4243981065U)   /* 0xFCF60309 */
#define         P1MCDIAGC_CLKMONR0RTFLT                     (4243784460U)   /* 0xFCF3030C */
#define         P1MCDIAGC_CLKMONR2RTFLT                     (4243587855U)   /* 0xFCF0030F */
#define         P1MCDIAGC_CLKMONR3RTFLT                     (4243391250U)   /* 0xFCED0312 */
#define         P1MCDIAGC_CLKMONR5RTFLT                     (4243194645U)   /* 0xFCEA0315 */
#define         P1MCDIAGC_CLKMONR1RTFLT                     (4242998040U)   /* 0xFCE70318 */
#define         P1MCDIAGC_FENMIPROGFLOW                     (4242801435U)   /* 0xFCE4031B */
#define         P1MCDIAGC_FENMIALVMONR                      (4242604830U)   /* 0xFCE1031E */
#define         P1MCDIAGC_FENMIDEADLINEMONR                 (4242408225U)   /* 0xFCDE0321 */
#define         P1MCDIAGC_GTMRAMDBLBITECCERR                (4242211620U)   /* 0xFCDB0324 */
#define         P1MCDIAGC_BUSSNGBITECCERR                   (4242015015U)   /* 0xFCD80327 */
#define         P1MCDIAGC_LCLRAMECCERRADROVF                (4241818410U)   /* 0xFCD5032A */
#define         P1MCDIAGC_GLBRAMECCERRADROVF                (4241621805U)   /* 0xFCD2032D */
#define         P1MCDIAGC_CODFLSECCERRADROVF                (4241425200U)   /* 0xFCCF0330 */
#define         P1MCDIAGC_FRRAMECCERROVF                    (4241228595U)   /* 0xFCCC0333 */
#define         P1MCDIAGC_CSIHRAMECCERROVF                  (4241031990U)   /* 0xFCC90336 */
#define         P1MCDIAGC_CANRAMECCERROVF                   (4240835385U)   /* 0xFCC60339 */
#define         P1MCDIAGC_GTMRAMECCERROVF                   (4238082915U)   /* 0xFC9C0363 */

#define         P1MCDIAGC_DTSRAMDBLBITECCERR                (4240638780U)   /* 0xFCC3033C */
#define         P1MCDIAGC_GBLRAMILLGLACSBYPROCR             (4240442175U)   /* 0xFCC0033F */
#define         P1MCDIAGC_CODFLSILLGLACSBYSYSBUS            (4240245570U)   /* 0xFCBD0342 */
#define         P1MCDIAGC_GBLRAMILLGLACSBYSYSBUS            (4240048965U)   /* 0xFCBA0345 */
#define         P1MCDIAGC_RESDAREAILLGLACSBYHISPDBUS        (4239852360U)   /* 0xFCB70348 */
#define         P1MCDIAGC_DMATRFERR                         (4239655755U)   /* 0xFCB4034B */
#define         P1MCDIAGC_DMAILLGLACSERR                    (4239459150U)   /* 0xFCB1034E */
#define         P1MCDIAGC_MODERRUSRMODINACTV                (4239262545U)   /* 0xFCAE0351 */
#define         P1MCDIAGC_MODERRPROGMMODACTV                (4239065940U)   /* 0xFCAB0354 */
#define         P1MCDIAGC_MODERRDBGACTV                     (4238869335U)   /* 0xFCA80357 */
#define         P1MCDIAGC_MODERRTESTMODACTV                 (4238672730U)   /* 0xFCA5035A */
#define         P1MCDIAGC_ECMMSTCHKRERR                     (4238476125U)   /* 0xFCA2035D */
#define         P1MCDIAGC_FLSSEQERR                         (4238279520U)   /* 0xFC9F0360 */

/* OS EXCEPTIONS */
#define         P1MCDIAGC_UKWNEXCPN                         (4227793920U)   /* 0xFBFF0400 */
#define         P1MCDIAGC_ALGNWR                            (4227597315U)   /* 0xFBFC0403 */
#define         P1MCDIAGC_ALGNREAD                          (4227400710U)   /* 0xFBF90406 */
#define         P1MCDIAGC_RESDOPER                          (4227204105U)   /* 0xFBF60409 */
#define         P1MCDIAGC_MPUEXCPNERR                       (4227007500U)   /* 0xFBF3040C */
#define         P1MCDIAGC_PRVLGDINSTREXCPN                  (4226810895U)   /* 0xFBF0040F */
#define         P1MCDIAGC_PRMNTOSERR                        (4226614290U)   /* 0xFBED0412 */

/*  BIST Faults */
#define         P1MCDIAGC_BISTECCERR                        (4211016960U)   /* 0xFAFF0500 */
#define         P1MCDIAGC_BISTNOTCMPLERR                    (4210820355U)   /* 0xFAFC0503 */
#define         P1MCDIAGC_LOGLBISTERR                       (4210623750U)   /* 0xFAF90506 */
#define         P1MCDIAGC_MEMBISTERR                        (4210427145U)   /* 0xFAF60509 */

/* ECM Faults */
#define         P1MCDIAGC_ECMMSTCHKRSTRTUPFLT               (4194240000U)   /* 0xF9FF0600 */
#define         P1MCDIAGC_CONFIGOUTPCTRLFLT                 (4193846790U)   /* 0xF9F90606 */
#define         P1MCDIAGC_EIINTRPTSTRTUPFLT                 (4193650185U)   /* 0xF9F60609 */
#define         P1MCDIAGC_MSTCHKRERROUTPCTRLFLT             (4193256975U)   /* 0xF9F0060F */
#define         P1MCDIAGC_FACIRSTTRFERR                     (4192863765U)   /* 0xF9EA0615 */

/* OTHER HW FAILURES */
#define         P1MCDIAGC_LOCKSTEPECMRST                    (4177266435U)   /* 0xF8FC0703 */
#define         P1MCDIAGC_RSTUKWN                           (4177069830U)   /* 0xF8F90706 */
#define         P1MCDIAGC_PREOSEXCPN                        (4176873225U)   /* 0xF8F60709 */
#define         P1MCDIAGC_COREVLTGMONRHI                    (4176676620U)   /* 0xF8F3070C */
#define         P1MCDIAGC_COREVLTGMONRLO                    (4176480015U)   /* 0xF8F0070F */
#define         P1MCDIAGC_PINRST                            (4176283410U)   /* 0xF8ED0712 */
#define         P1MCDIAGC_ECMRST                            (4176086805U)   /* 0xF8EA0715 */
#define         P1MCDIAGC_STRTUPCOREVLTGMONRUNDER           (4175890200U)   /* 0xF8E70718 */
#define         P1MCDIAGC_STRTUPCOREVLTGMONROVER            (4175693595U)   /* 0xF8E4071B */
#define         P1MCDIAGC_QUICKIGNRST                       (4293722130U)   /* 0xFFED0012 */

/* Function prototypes */
extern FUNC(void, CDD_ExcpnHndlg_CODE) SetMcuDiagcIdnData(P1mcDiagc1 McuDiagcData0_Arg,
                                                    uint32 McuDiagcData1_Arg);
extern FUNC(void, CDD_ExcpnHndlg_CODE) GetMcuDiagcIdnData(P2VAR(P1mcDiagc1, AUTOMATIC, ExcpnHndlg_APPL_VAR) McuDiagcData0_Arg);
extern FUNC(void, CDD_ExcpnHndlg_CODE) SysErrIrq(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FpuErrIrq(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) AlgnErrIrq(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) ResdOperIrq(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) ExcpnHndlgInit1(void);

extern FUNC(void, CDD_ExcpnHndlg_CODE) ProcUkwnExcpnErr(uint32 McuDiagcData1_Arg);
extern FUNC(void, CDD_ExcpnHndlg_CODE) ProcMpuExcpnErr(uint32 McuDiagcData1_Arg);
extern FUNC(void, CDD_ExcpnHndlg_CODE) ProcPrvlgdInstrExcpnErr(uint32 McuDiagcData1_Arg);
extern FUNC(void, CDD_ExcpnHndlg_CODE) ProcPrmntOsErr(uint32 McuDiagcData1_Arg);
extern FUNC(void, CDD_ExcpnHndlg_CODE) ProcNonCritOsErr(uint32 McuDiagcData1_Arg);

extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr0RtErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr1RtErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr2RtErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr3RtErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr5RtErr(void);

extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiModErrDbgActv (void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiModErrProgmModActv(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiModErrUsrModInactv(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiModErrTestModActv(void);

extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiBusBrdgErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiBusSngBitEccErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiCodFlsEccAdrOvfErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiCodFlsIllglAcsBySysBus(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiDmaIllglAcsErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiDmaLockStepErrOrGblRamWrBufErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiDmaTrfErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiDtsRamDblBitEccErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiEcmMstChkrErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiFlsSeqErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiGblRamIllglAcsByProcr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiGblRamIllglAcsBySysBus(void);

extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiPrphlRamEccAdrOvfErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiGlbRamEccAdrOvfErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiGtmRamDblBitEccErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiLclRamEccAdrOvfErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiPegErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiProcrLockStepErr(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiResdAreaIllglAcsByHiSpdBus(void);
extern FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiWdgErr(void);

extern FUNC(void, CDD_ExcpnHndlg_CODE) ChkForStrtUpTest_Oper(P2VAR(boolean, AUTOMATIC, RTE_CDD_EXCPNHNDLG_APPL_VAR) ExecStrtUpTest_Arg); 


#endif
