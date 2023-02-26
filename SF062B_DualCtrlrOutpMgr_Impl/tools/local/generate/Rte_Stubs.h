/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.h
* Module Description: Stubs header for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#ifndef RTE_STUBS_H
#define RTE_STUBS_H


/*** Extern Statements ***/

/* Inputs */
extern VAR(SysSt1, AUTOMATIC) DualCtrlrOutpMgr_Ip_ImcSysSt;
extern VAR(ImcArbnRxSts1, AUTOMATIC) DualCtrlrOutpMgr_Ip_ImcSysStVld;
extern VAR(uint8, AUTOMATIC) DualCtrlrOutpMgr_Ip_MotAndThermProtnLoaMod;
extern VAR(SysSt1, AUTOMATIC) DualCtrlrOutpMgr_Ip_SysSt;
extern VAR(float32, AUTOMATIC) DualCtrlrOutpMgr_Ip_VehSpd;

/* Outputs */
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Op_DualEcuFltMtgtnEna;
extern VAR(float32, AUTOMATIC) DualCtrlrOutpMgr_Op_DualEcuFltMtgtnSca;
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Op_DualEcuMotCtrlMtgtnEna;

/* Calibrations */
extern CONST(float32, AUTOMATIC) DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrConOutpSca;
extern CONST(u10p6, AUTOMATIC) DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrDiRateTblY[10];
extern CONST(float32, AUTOMATIC) DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrEnaRate;
extern CONST(uint16, AUTOMATIC) DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrFltThdTmr;
extern CONST(float32, AUTOMATIC) DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrLimdOutpSca;
extern CONST(float32, AUTOMATIC) DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrMaxOutpSca;
extern CONST(uint16, AUTOMATIC) DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrMaxOutpTmr;
extern CONST(uint16, AUTOMATIC) DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrMinOutpTmr;
extern CONST(uint16, AUTOMATIC) DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrNonRecFltThdTmr;
extern CONST(uint16, AUTOMATIC) DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrThdTmr;
extern CONST(u9p7, AUTOMATIC) DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrVehSpdRefTblX[10];
extern CONST(uint16, AUTOMATIC) DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrVltgModFltThdTmr;

/* PIMs */
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Pim_FltLrngEnaPrev;
extern VAR(uint32, AUTOMATIC) DualCtrlrOutpMgr_Pim_FltRefTiEnaLrng;
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Pim_FltStsPrev;
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Pim_LtchImcDualEcuMotCtrlMtgtnEnaPrev;
extern VAR(uint32, AUTOMATIC) DualCtrlrOutpMgr_Pim_LtchRefTiEnaLrng;
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Pim_LtchSysStPrev;
extern VAR(uint32, AUTOMATIC) DualCtrlrOutpMgr_Pim_MaxOutpRefTiEna;
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Pim_MaxOutpTmrCmpl;
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Pim_NonRecFltEnaPrev;
extern VAR(uint32, AUTOMATIC) DualCtrlrOutpMgr_Pim_NonRecFltRefTiEnaLrng;
extern VAR(float32, AUTOMATIC) DualCtrlrOutpMgr_Pim_OutpSca;
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Pim_PrevLtch;
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Pim_PrevLtchNonRecFlt;
extern VAR(uint32, AUTOMATIC) DualCtrlrOutpMgr_Pim_RefTiEnaLrng;
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Pim_SysStLrngEnaPrev;
extern VAR(uint32, AUTOMATIC) DualCtrlrOutpMgr_Pim_SysStRefTiEnaLrng;

/* IRVs */
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Irv_ImcDiagcStsNonRcvrlReqDiFltPrsnt;
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Irv_ImcDiagcStsNonRcvrlReqDiFltPrsntVld;
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Irv_ImcDualEcuMotCtrlMtgtnEna;
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Irv_ImcDualEcuMotCtrlMtgtnEnaVld;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) DualCtrlrOutpMgr_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint16, AUTOMATIC) DualCtrlrOutpMgr_Srv_GetSigImcData_logl_SigId;
extern VAR(boolean, AUTOMATIC) DualCtrlrOutpMgr_Srv_GetSigImcData_logl_Data;
extern VAR(ImcArbnRxSts1, AUTOMATIC) DualCtrlrOutpMgr_Srv_GetSigImcData_logl_Sts;
extern VAR(Std_ReturnType, AUTOMATIC) DualCtrlrOutpMgr_Srv_GetSigImcData_logl_Return;
extern VAR(uint32, AUTOMATIC) DualCtrlrOutpMgr_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) DualCtrlrOutpMgr_Srv_GetTiSpan100MicroSec32bit_TiSpan;


/*** Input Stubs ***/

#ifdef Rte_Read_ImcSysSt_Val
# undef Rte_Read_ImcSysSt_Val
#endif
#define Rte_Read_ImcSysSt_Val(data) (*(data) = DualCtrlrOutpMgr_Ip_ImcSysSt)

#ifdef Rte_Read_ImcSysStVld_Val
# undef Rte_Read_ImcSysStVld_Val
#endif
#define Rte_Read_ImcSysStVld_Val(data) (*(data) = DualCtrlrOutpMgr_Ip_ImcSysStVld)

#ifdef Rte_Read_MotAndThermProtnLoaMod_Val
# undef Rte_Read_MotAndThermProtnLoaMod_Val
#endif
#define Rte_Read_MotAndThermProtnLoaMod_Val(data) (*(data) = DualCtrlrOutpMgr_Ip_MotAndThermProtnLoaMod)

#ifdef Rte_Read_SysSt_Val
# undef Rte_Read_SysSt_Val
#endif
#define Rte_Read_SysSt_Val(data) (*(data) = DualCtrlrOutpMgr_Ip_SysSt)

#ifdef Rte_Read_VehSpd_Val
# undef Rte_Read_VehSpd_Val
#endif
#define Rte_Read_VehSpd_Val(data) (*(data) = DualCtrlrOutpMgr_Ip_VehSpd)


/*** Output Stubs ***/

#ifdef Rte_Write_DualEcuFltMtgtnEna_Logl
# undef Rte_Write_DualEcuFltMtgtnEna_Logl
#endif
#define Rte_Write_DualEcuFltMtgtnEna_Logl(data) (DualCtrlrOutpMgr_Op_DualEcuFltMtgtnEna = (data))

#ifdef Rte_Write_DualEcuFltMtgtnSca_Val
# undef Rte_Write_DualEcuFltMtgtnSca_Val
#endif
#define Rte_Write_DualEcuFltMtgtnSca_Val(data) (DualCtrlrOutpMgr_Op_DualEcuFltMtgtnSca = (data))

#ifdef Rte_Write_DualEcuMotCtrlMtgtnEna_Logl
# undef Rte_Write_DualEcuMotCtrlMtgtnEna_Logl
#endif
#define Rte_Write_DualEcuMotCtrlMtgtnEna_Logl(data) (DualCtrlrOutpMgr_Op_DualEcuMotCtrlMtgtnEna = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DualCtrlrOutpMgrConOutpSca_Val
# undef Rte_Prm_DualCtrlrOutpMgrConOutpSca_Val
#endif
#define Rte_Prm_DualCtrlrOutpMgrConOutpSca_Val() (DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrConOutpSca)

#ifdef Rte_Prm_DualCtrlrOutpMgrDiRateTblY_Ary1D
# undef Rte_Prm_DualCtrlrOutpMgrDiRateTblY_Ary1D
#endif
#define Rte_Prm_DualCtrlrOutpMgrDiRateTblY_Ary1D() (&(DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrDiRateTblY[0]))

#ifdef Rte_Prm_DualCtrlrOutpMgrEnaRate_Val
# undef Rte_Prm_DualCtrlrOutpMgrEnaRate_Val
#endif
#define Rte_Prm_DualCtrlrOutpMgrEnaRate_Val() (DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrEnaRate)

#ifdef Rte_Prm_DualCtrlrOutpMgrFltThdTmr_Val
# undef Rte_Prm_DualCtrlrOutpMgrFltThdTmr_Val
#endif
#define Rte_Prm_DualCtrlrOutpMgrFltThdTmr_Val() (DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrFltThdTmr)

#ifdef Rte_Prm_DualCtrlrOutpMgrLimdOutpSca_Val
# undef Rte_Prm_DualCtrlrOutpMgrLimdOutpSca_Val
#endif
#define Rte_Prm_DualCtrlrOutpMgrLimdOutpSca_Val() (DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrLimdOutpSca)

#ifdef Rte_Prm_DualCtrlrOutpMgrMaxOutpSca_Val
# undef Rte_Prm_DualCtrlrOutpMgrMaxOutpSca_Val
#endif
#define Rte_Prm_DualCtrlrOutpMgrMaxOutpSca_Val() (DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrMaxOutpSca)

#ifdef Rte_Prm_DualCtrlrOutpMgrMaxOutpTmr_Val
# undef Rte_Prm_DualCtrlrOutpMgrMaxOutpTmr_Val
#endif
#define Rte_Prm_DualCtrlrOutpMgrMaxOutpTmr_Val() (DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrMaxOutpTmr)

#ifdef Rte_Prm_DualCtrlrOutpMgrMinOutpTmr_Val
# undef Rte_Prm_DualCtrlrOutpMgrMinOutpTmr_Val
#endif
#define Rte_Prm_DualCtrlrOutpMgrMinOutpTmr_Val() (DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrMinOutpTmr)

#ifdef Rte_Prm_DualCtrlrOutpMgrNonRecFltThdTmr_Val
# undef Rte_Prm_DualCtrlrOutpMgrNonRecFltThdTmr_Val
#endif
#define Rte_Prm_DualCtrlrOutpMgrNonRecFltThdTmr_Val() (DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrNonRecFltThdTmr)

#ifdef Rte_Prm_DualCtrlrOutpMgrThdTmr_Val
# undef Rte_Prm_DualCtrlrOutpMgrThdTmr_Val
#endif
#define Rte_Prm_DualCtrlrOutpMgrThdTmr_Val() (DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrThdTmr)

#ifdef Rte_Prm_DualCtrlrOutpMgrVehSpdRefTblX_Ary1D
# undef Rte_Prm_DualCtrlrOutpMgrVehSpdRefTblX_Ary1D
#endif
#define Rte_Prm_DualCtrlrOutpMgrVehSpdRefTblX_Ary1D() (&(DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrVehSpdRefTblX[0]))

#ifdef Rte_Prm_DualCtrlrOutpMgrVltgModFltThdTmr_Val
# undef Rte_Prm_DualCtrlrOutpMgrVltgModFltThdTmr_Val
#endif
#define Rte_Prm_DualCtrlrOutpMgrVltgModFltThdTmr_Val() (DualCtrlrOutpMgr_Cal_DualCtrlrOutpMgrVltgModFltThdTmr)


/*** PIM Stubs ***/

#ifdef Rte_Pim_FltLrngEnaPrev
# undef Rte_Pim_FltLrngEnaPrev
#endif
#define Rte_Pim_FltLrngEnaPrev() (&DualCtrlrOutpMgr_Pim_FltLrngEnaPrev)

#ifdef Rte_Pim_FltRefTiEnaLrng
# undef Rte_Pim_FltRefTiEnaLrng
#endif
#define Rte_Pim_FltRefTiEnaLrng() (&DualCtrlrOutpMgr_Pim_FltRefTiEnaLrng)

#ifdef Rte_Pim_FltStsPrev
# undef Rte_Pim_FltStsPrev
#endif
#define Rte_Pim_FltStsPrev() (&DualCtrlrOutpMgr_Pim_FltStsPrev)

#ifdef Rte_Pim_LtchImcDualEcuMotCtrlMtgtnEnaPrev
# undef Rte_Pim_LtchImcDualEcuMotCtrlMtgtnEnaPrev
#endif
#define Rte_Pim_LtchImcDualEcuMotCtrlMtgtnEnaPrev() (&DualCtrlrOutpMgr_Pim_LtchImcDualEcuMotCtrlMtgtnEnaPrev)

#ifdef Rte_Pim_LtchRefTiEnaLrng
# undef Rte_Pim_LtchRefTiEnaLrng
#endif
#define Rte_Pim_LtchRefTiEnaLrng() (&DualCtrlrOutpMgr_Pim_LtchRefTiEnaLrng)

#ifdef Rte_Pim_LtchSysStPrev
# undef Rte_Pim_LtchSysStPrev
#endif
#define Rte_Pim_LtchSysStPrev() (&DualCtrlrOutpMgr_Pim_LtchSysStPrev)

#ifdef Rte_Pim_MaxOutpRefTiEna
# undef Rte_Pim_MaxOutpRefTiEna
#endif
#define Rte_Pim_MaxOutpRefTiEna() (&DualCtrlrOutpMgr_Pim_MaxOutpRefTiEna)

#ifdef Rte_Pim_MaxOutpTmrCmpl
# undef Rte_Pim_MaxOutpTmrCmpl
#endif
#define Rte_Pim_MaxOutpTmrCmpl() (&DualCtrlrOutpMgr_Pim_MaxOutpTmrCmpl)

#ifdef Rte_Pim_NonRecFltEnaPrev
# undef Rte_Pim_NonRecFltEnaPrev
#endif
#define Rte_Pim_NonRecFltEnaPrev() (&DualCtrlrOutpMgr_Pim_NonRecFltEnaPrev)

#ifdef Rte_Pim_NonRecFltRefTiEnaLrng
# undef Rte_Pim_NonRecFltRefTiEnaLrng
#endif
#define Rte_Pim_NonRecFltRefTiEnaLrng() (&DualCtrlrOutpMgr_Pim_NonRecFltRefTiEnaLrng)

#ifdef Rte_Pim_OutpSca
# undef Rte_Pim_OutpSca
#endif
#define Rte_Pim_OutpSca() (&DualCtrlrOutpMgr_Pim_OutpSca)

#ifdef Rte_Pim_PrevLtch
# undef Rte_Pim_PrevLtch
#endif
#define Rte_Pim_PrevLtch() (&DualCtrlrOutpMgr_Pim_PrevLtch)

#ifdef Rte_Pim_PrevLtchNonRecFlt
# undef Rte_Pim_PrevLtchNonRecFlt
#endif
#define Rte_Pim_PrevLtchNonRecFlt() (&DualCtrlrOutpMgr_Pim_PrevLtchNonRecFlt)

#ifdef Rte_Pim_RefTiEnaLrng
# undef Rte_Pim_RefTiEnaLrng
#endif
#define Rte_Pim_RefTiEnaLrng() (&DualCtrlrOutpMgr_Pim_RefTiEnaLrng)

#ifdef Rte_Pim_SysStLrngEnaPrev
# undef Rte_Pim_SysStLrngEnaPrev
#endif
#define Rte_Pim_SysStLrngEnaPrev() (&DualCtrlrOutpMgr_Pim_SysStLrngEnaPrev)

#ifdef Rte_Pim_SysStRefTiEnaLrng
# undef Rte_Pim_SysStRefTiEnaLrng
#endif
#define Rte_Pim_SysStRefTiEnaLrng() (&DualCtrlrOutpMgr_Pim_SysStRefTiEnaLrng)


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsnt
# undef Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsnt
#endif
#define Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsnt() (DualCtrlrOutpMgr_Irv_ImcDiagcStsNonRcvrlReqDiFltPrsnt)

#ifdef Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsnt
# undef Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsnt
#endif
#define Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsnt(data) (DualCtrlrOutpMgr_Irv_ImcDiagcStsNonRcvrlReqDiFltPrsnt = (data))

#ifdef Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsntVld
# undef Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsntVld
#endif
#define Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsntVld() (DualCtrlrOutpMgr_Irv_ImcDiagcStsNonRcvrlReqDiFltPrsntVld)

#ifdef Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsntVld
# undef Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsntVld
#endif
#define Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsntVld(data) (DualCtrlrOutpMgr_Irv_ImcDiagcStsNonRcvrlReqDiFltPrsntVld = (data))

#ifdef Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEna
# undef Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEna
#endif
#define Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEna() (DualCtrlrOutpMgr_Irv_ImcDualEcuMotCtrlMtgtnEna)

#ifdef Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEna
# undef Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEna
#endif
#define Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEna(data) (DualCtrlrOutpMgr_Irv_ImcDualEcuMotCtrlMtgtnEna = (data))

#ifdef Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEnaVld
# undef Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEnaVld
#endif
#define Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEnaVld() (DualCtrlrOutpMgr_Irv_ImcDualEcuMotCtrlMtgtnEnaVld)

#ifdef Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEnaVld
# undef Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEnaVld
#endif
#define Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEnaVld(data) (DualCtrlrOutpMgr_Irv_ImcDualEcuMotCtrlMtgtnEnaVld = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
