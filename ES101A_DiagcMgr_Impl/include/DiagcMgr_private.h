/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name: DiagcMgr_private.h
* Module Description: Private header file for the DiagcMgr and DiagcMgrProxy components
* Project           : CBD   
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:             9 %
* %derived_by:          nz2554 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------    ---------
* 08/19/15  1        SB         Initial Version                                                               EA4#1388
* 09/03/15  2        SB         Partial Implementation of version2                                            EA4#1241
* 02/26/16  3        SB         ES101A_DiagcMgr_Design version 2 implementation                               EA4#3421
* 05/23/16  4        SB         Updated to fix anomaly EA4#5898                                               EA4#5905
* 06/20/16  5        SB         Updated to fix anomaly EA4#5974                                               EA4#6137
* 12/02/16  7        SB         Added SnpshtDataAry_M                                                         EA4#8250
* 12/06/16  8        SB         Moved SnpshtDataAry_M to DiagcMgr.h file                                      EA4#8822
* 04/18/17  9        SR         Removed constants for unused FltRespTbl & DiagcSts bits.Added constants
*                               for NtcPptyAry. Names reflect DataType changes for FltRespTbl &DiagcSts.      EA4#10779
**********************************************************************************************************************/
#ifndef DIAGCMGR_PRIVATE_H
#define DIAGCMGR_PRIVATE_H

/************************************************ Include Statements *************************************************/

    #define     DIAGCSTSININVAL_CNT_U08                     0U
    #define     DFTAGICNTR_CNT_U08                          255U
    #define     DFTSPCLSNPSHTDATA_CNT_U32                   0UL
    #define     LTCHCNTRMAXVAL_CNT_U08                      255U
    #define     MAXCYCINHIST_CNT_U08                        64U
    #define     NROFRAMPRATE_CNT_U08                        5U
    #define     SIZEOFREADFLTARY_CNT_U08                    20U 

    /* DIAGNOSTIC  STATUS  BITS */
    #define     DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U08         0x01U           /*  (1U)     Bit0 */
    #define     DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08          0x02U           /*  (2U)     Bit1 */
    #define     DIAGCSTSNONRCVRLREQDIFLTPRSNT_CNT_U08       0x04U           /*  (4U)     Bit2 */

    /* NTC PROPERTY BITS */
    #define     NTCPPTYMFGINHBINENAST_CNT_U08               4U
    #define     NTCPPTYMFGINHBNOTINENAST_CNT_U08            2U
    #define     NTCPPTYSTSLOCKDTHISIGNCYC_CNT_U08           1U

    /* FAULT  RESPONSE  TABLE  BITS */
    #define     FLTRESPDTCIDX_CNT_U16                       0x000000FFU     /*  (255U)   Bit00 Bit01 Bit02 Bit03 Bit04 Bit05 Bit06 Bit07 */
    #define     FLTRESPRAMPBITS_CNT_U16                     0x0700U         /*  (1792U)  Bit08 Bit09 Bit10 */
    #define     FLTRESPRCVRLFLT_CNT_U16                     0x4000U         /*  (16384U) Bit14 */
    #define     FLTRESPNTCENAD_CNT_U16                      0x8000U         /*  (32768U) Bit15 */
    #define     FLTRESPSNPSHTDATAENAD_CNT_U32               0x400000UL      /*  Copied from previous implementation - to be removed?? */

    #define     MAXDEBCNTRVAL_CNT_S16                       32767        
    #define     MAXRAMPRATE_ULSPERSEC_F32                   (500.0F)
    #define     MINDEBCNTRVAL_CNT_S16                       (-32768) 
    #define     MINRAMPRATE_ULSPERSEC_F32                   (0.1F)
    #define     SCAMOTTQCMDTOONE_ULS_F32                    (1.0F) 
    #define     SCAMOTTQCMDTOZERO_ULS_F32                   (0.0F)
    #define     DIAGCMGR_APPLIDX0_CNT_U08                   0U  
    #define     DIAGCMGR_APPLIDX1_CNT_U08                   1U
    #define     DIAGCMGR_APPLIDX2_CNT_U08                   2U
    #define     DIAGCMGR_APPLIDX3_CNT_U08                   3U
    #define     DIAGCMGR_APPLIDX4_CNT_U08                   4U
    #define     DIAGCMGR_APPLIDX5_CNT_U08                   5U
    #define     DIAGCMGR_APPLIDX6_CNT_U08                   6U
    #define     DIAGCMGR_APPLIDX7_CNT_U08                   7U
    #define     DIAGCMGR_APPLIDX8_CNT_U08                   8U  
    #define     DIAGCMGR_APPLIDX9_CNT_U08                   9U  
    #define     DIAGCMGR_APPLIDX10_CNT_U08                  10U  
    #define     IMDTSHTDWNFLT_CNT_U16                       5U 
    #define     CTRLDSHTDWNFLT_CNT_U16                      6U 
    #define     INFOONLYFLT_CNT_U16                         7U  
    #define     DTCIDXSTSNORES_CNT_U08                      0x00U 
    #define     DTCIDXSTSPASS_CNT_U08                       0x01U 
    #define     DTCIDXSTSFAIL_CNT_U08                       0x02U 
    #define     DTCIDXSTSNONTC_CNT_U08                      0x03U 
    #define     DTCIDXSTSUPDCFMD_CNT_U08                    0x80U           /*  (128U)   Bit7 */

    extern CONST(float32, DiagcMgr_CODE) FLTRESPRAMPTBL_ULS_F32[NROFRAMPRATE_CNT_U08];
    extern FUNC(void, DiagcMgr_CODE) DiagcMgrSetBits_u08(CONSTP2VAR(uint8, AUTOMATIC, DiagcMgr_CODE) Data, uint8 BitMask);
    extern FUNC(void, DiagcMgr_CODE) DiagcMgrSetBits_u16(CONSTP2VAR(uint16, AUTOMATIC, DiagcMgr_CODE) Data, uint16 BitMask);
    extern FUNC(void, DiagcMgr_CODE) DiagcMgrClrBits_u08(CONSTP2VAR(uint8, AUTOMATIC, DiagcMgr_CODE) Data, uint8 BitMask);
    extern FUNC(void, DiagcMgr_CODE) DiagcMgrClrBits_u16(CONSTP2VAR(uint16, AUTOMATIC, DiagcMgr_CODE) Data, uint16 BitMask);
    extern FUNC(boolean, DiagcMgr_CODE) DiagcMgrReadBit_u08(uint8 Data, uint8 BitMask);
    extern FUNC(boolean, DiagcMgr_CODE) DiagcMgrReadBit_u16(uint16 Data, uint16 BitMask);
    
#ifdef NTCCNTAPPL0_CNT_U16
    extern FUNC(void, DiagcMgr_CODE) GetNtcDebCntrAppl0_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg);
    extern FUNC(void, DiagcMgr_CODE) GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg);
#endif
#ifdef NTCCNTAPPL1_CNT_U16
    extern FUNC(void, DiagcMgr_CODE) GetNtcDebCntrAppl1_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg);
    extern FUNC(void, DiagcMgr_CODE) GetNtcInfoAppl1_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg);
#endif
#ifdef NTCCNTAPPL2_CNT_U16
    extern FUNC(void, DiagcMgr_CODE) GetNtcDebCntrAppl2_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg);
    extern FUNC(void, DiagcMgr_CODE) GetNtcInfoAppl2_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg);
#endif 
#ifdef NTCCNTAPPL3_CNT_U16
    extern FUNC(void, DiagcMgr_CODE) GetNtcDebCntrAppl3_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg);
    extern FUNC(void, DiagcMgr_CODE) GetNtcInfoAppl3_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg);
#endif 
#ifdef NTCCNTAPPL4_CNT_U16
    extern FUNC(void, DiagcMgr_CODE) GetNtcDebCntrAppl4_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg);
    extern FUNC(void, DiagcMgr_CODE) GetNtcInfoAppl4_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg);
#endif  
#ifdef NTCCNTAPPL5_CNT_U16
    extern FUNC(void, DiagcMgr_CODE) GetNtcDebCntrAppl5_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg);
    extern FUNC(void, DiagcMgr_CODE) GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg);
#endif  
#ifdef NTCCNTAPPL6_CNT_U16
    extern FUNC(void, DiagcMgr_CODE) GetNtcDebCntrAppl6_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg);
    extern FUNC(void, DiagcMgr_CODE) GetNtcInfoAppl6_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg);
#endif 
#ifdef NTCCNTAPPL7_CNT_U16
    extern FUNC(void, DiagcMgr_CODE) GetNtcDebCntrAppl7_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg);
    extern FUNC(void, DiagcMgr_CODE) GetNtcInfoAppl7_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg);
#endif  
#ifdef NTCCNTAPPL8_CNT_U16
    extern FUNC(void, DiagcMgr_CODE) GetNtcDebCntrAppl8_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg);
    extern FUNC(void, DiagcMgr_CODE) GetNtcInfoAppl8_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg);
#endif  
#ifdef NTCCNTAPPL9_CNT_U16
    extern FUNC(void, DiagcMgr_CODE) GetNtcDebCntrAppl9_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg);
    extern FUNC(void, DiagcMgr_CODE) GetNtcInfoAppl9_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg);
#endif   
#ifdef NTCCNTAPPL10_CNT_U16    
    extern FUNC(void, DiagcMgr_CODE) GetNtcDebCntrAppl10_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg);
    extern FUNC(void, DiagcMgr_CODE) GetNtcInfoAppl10_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg);
#endif 

    extern FUNC(void, DiagcMgr_CODE) ProcProxyRampRespAndDiagcSts(uint16 NtcNr_Cnt_T_u16,
                                                       CONSTP2VAR(DiagcDataRec2, AUTOMATIC, DiagcMgr_CODE) ProxyDiagcData_T_rec);
    extern FUNC(void, DiagcMgr_CODE) ProcDiagSts(uint32 FltRsp_Cnt_T_u32, 
                                                 CONSTP2VAR(uint16, AUTOMATIC, AUTOMATIC) DiagStsX_Cnt_T_u16);

#endif

