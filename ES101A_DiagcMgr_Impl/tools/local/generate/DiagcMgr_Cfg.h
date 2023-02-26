
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : DiagcMgr_Cfg.h
* Module Description: DiagcMgr
* Project           : CBD
* Author            : Spandana Balani
* Generator         : artt 2.0.2.0
* Generation Time   : 26.10.2017 09:59:14
***********************************************************************************************************************
* Version Control:
* %version:          9 %
* %derived_by:       nz2554 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                          SCR #
* -------   -------  --------  ---------------------------------------------------------------------------   ----------
* 03/11/16  1        SB         ES101A_DiagcMgr_Design version 2 implementation                              EA4#3421
* 04/19/16  2        SB         ES101A_DiagcMgr_Design version 3 implementation                              EA4#5110
* 05/23/16  3        SB         Updated to fix anomaly EA4#5865  NTC BF not setting                          EA4#5905
* 06/20/16  4        SB         ES101A_DiagcMgr_Design version 4 implementation                              EA4#6251
* 11/30/16  5        SB         Added DEMTOTNROFDTC_CNT_U08                                                  EA4#8662
* 12/06/16  6        SB         Removed Dem.h include                                                        EA4#8822
* 04/10/17  7        SR         Added CONST variable declarations for NtcPptyAry,
*                               DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM and DIAGCMGRNTCLTCHCNTRTHD_CNT_U08           EA4#10779
* 08/04/17  8        SR         The Ecuc file was updated with addiitonal DTCs so constant value changed     EA4#13175
* 09/12/17  9        SR         DIAGCMGRNTCMAP_CNT_REC and DIAGCMGRNTCPPTYARY_CNT_U08 array declarations
*                               and D_MAXNUMOFLTCHGNTCS_CNT_U16 constant declaration is moved to
*                               DiagcMgrStaticTypes.h since these aren't configurable                        EA4#14411
**********************************************************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
# ifndef DIAGMGR_CFG_H
#define DIAGMGR_CFG_H

#include "DiagcMgrStaticTypes.h"
#include "NxtrDet.h"

/*******************************************************************************
**                      Module Private Data                                   **
*******************************************************************************/

    /** Number of NTCs configured in an application, 
        typedef for variable size NTC Info Array PIMs, 
        Application NTC array, 
        Total number of Deounce type NTCs in an application, 
        typedef for variable size DebCntr Array PIMs    **/   
  
    #define     NTCCNTAPPL0_CNT_U16                   10U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl0[NTCCNTAPPL0_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL0_CNT_U16[NTCCNTAPPL0_CNT_U16];

    #define     TOTDEBNTCINAPPLX0_CNT_U08               3U
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl0[TOTDEBNTCINAPPLX0_CNT_U08 + 1U];
  
    #define     NTCCNTAPPL1_CNT_U16                   10U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl1[NTCCNTAPPL1_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL1_CNT_U16[NTCCNTAPPL1_CNT_U16];

    #define     TOTDEBNTCINAPPLX1_CNT_U08               2U
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl1[TOTDEBNTCINAPPLX1_CNT_U08 + 1U];
  
    #define     NTCCNTAPPL2_CNT_U16                   10U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl2[NTCCNTAPPL2_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL2_CNT_U16[NTCCNTAPPL2_CNT_U16];

    #define     TOTDEBNTCINAPPLX2_CNT_U08               2U
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl2[TOTDEBNTCINAPPLX2_CNT_U08 + 1U];
  
    #define     NTCCNTAPPL3_CNT_U16                   10U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl3[NTCCNTAPPL3_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL3_CNT_U16[NTCCNTAPPL3_CNT_U16];

    #define     TOTDEBNTCINAPPLX3_CNT_U08               2U
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl3[TOTDEBNTCINAPPLX3_CNT_U08 + 1U];
  
    #define     NTCCNTAPPL4_CNT_U16                   10U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl4[NTCCNTAPPL4_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL4_CNT_U16[NTCCNTAPPL4_CNT_U16];

    #define     TOTDEBNTCINAPPLX4_CNT_U08               2U
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl4[TOTDEBNTCINAPPLX4_CNT_U08 + 1U];
  
    #define     NTCCNTAPPL5_CNT_U16                   10U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl5[NTCCNTAPPL5_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL5_CNT_U16[NTCCNTAPPL5_CNT_U16];

    #define     TOTDEBNTCINAPPLX5_CNT_U08               2U
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl5[TOTDEBNTCINAPPLX5_CNT_U08 + 1U];
  
    #define     NTCCNTAPPL6_CNT_U16                   10U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl6[NTCCNTAPPL6_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL6_CNT_U16[NTCCNTAPPL6_CNT_U16];

    #define     TOTDEBNTCINAPPLX6_CNT_U08               2U
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl6[TOTDEBNTCINAPPLX6_CNT_U08 + 1U];
  
    #define     NTCCNTAPPL7_CNT_U16                   10U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl7[NTCCNTAPPL7_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL7_CNT_U16[NTCCNTAPPL7_CNT_U16];

    #define     TOTDEBNTCINAPPLX7_CNT_U08               2U
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl7[TOTDEBNTCINAPPLX7_CNT_U08 + 1U];
  
    #define     NTCCNTAPPL8_CNT_U16                   10U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl8[NTCCNTAPPL8_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL8_CNT_U16[NTCCNTAPPL8_CNT_U16];

    #define     TOTDEBNTCINAPPLX8_CNT_U08               2U
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl8[TOTDEBNTCINAPPLX8_CNT_U08 + 1U];
  
    #define     NTCCNTAPPL9_CNT_U16                   10U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl9[NTCCNTAPPL9_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL9_CNT_U16[NTCCNTAPPL9_CNT_U16];

    #define     TOTDEBNTCINAPPLX9_CNT_U08               2U
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl9[TOTDEBNTCINAPPLX9_CNT_U08 + 1U];
  
    #define     NTCCNTAPPL10_CNT_U16                   18U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl10[NTCCNTAPPL10_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL10_CNT_U16[NTCCNTAPPL10_CNT_U16];

    #define     TOTDEBNTCINAPPLX10_CNT_U08               2U
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl10[TOTDEBNTCINAPPLX10_CNT_U08 + 1U];

    /* Number of DTCs configured */
    #define TOTNROFDTC_CNT_U08                          6U 
    typedef uint8 Ary1D_u08_DiagcMgr1[TOTNROFDTC_CNT_U08 + 1U]; 
    extern CONST(uint16, DiagcMgr_CODE) DTCENAMASK[TOTNROFDTC_CNT_U08 + 1U];
    extern CONST(uint16, DiagcMgr_CODE) DEMDTCEVEIDMAP[TOTNROFDTC_CNT_U08 + 1U];

    #define DIAGCMGR_DEMCHK                             STD_ON
#if ((STD_ON == NXTRDET_DIAGCMGR) && (STD_ON == DIAGCMGR_DEMCHK))
    
    #define DEMTOTNROFDTC_CNT_U08                       ((uint8)(TblSize_m(Dem_C_DtcTable)))
    
#endif

# endif
