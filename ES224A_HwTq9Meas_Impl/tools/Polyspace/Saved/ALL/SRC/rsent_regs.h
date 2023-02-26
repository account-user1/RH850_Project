/**********************************************************************************************************************
* Module File Name  : rsent_regs.h
* Module Description: Single Edge Nibble Transmission Peripheral Registers
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       pznywf %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                      SCR#
* -------   -------  --------  ----------------------------------------------------------------------------------------
* 12/16/14  1        LWW       Initial version derived from dr7f701311.dvf.h v1 in tools directory
* 09/14/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
* 02/16/16  3        SV        Changed 'CC' to '_CC' to avoid conflict with vector header file definitions  EA4#
**********************************************************************************************************************/

#ifndef RSENT_REGS_H
#define RSENT_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint32 TTPV:7;                                         /* TTPV[6:0]        */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 TTM:7;                                          /* TTM[14:8]        */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 TMS:1;                                          /* TMS              */
    uint32 :15;                                            /* Reserved Bits    */
} __type696;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TS:32;                                          /* TS[31:0]         */
} __type697;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SPCE:1;                                         /* SPCE             */
    uint32 NDN:3;                                          /* NDN[3:1]         */
    uint32 PPC:1;                                          /* PPC              */
    uint32 PPTC:1;                                         /* PPTC             */
    uint32 SMF:2;                                          /* SMF[7:6]         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 FCCD:1;                                         /* FCCD             */
    uint32 SCCD:1;                                         /* SCCD             */
    uint32 FCM:1;                                          /* FCM              */
    uint32 SOPC:1;                                         /* SOPC             */
    uint32 :19;                                            /* Reserved Bits    */
} __type698;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SCMV:5;                                         /* SCMV[4:0]        */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 SCDV:7;                                         /* SCDV[14:8]       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 TTI:7;                                          /* TTI[22:16]       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 TTF:4;                                          /* TTF[27:24]       */
    uint32 :4;                                             /* Reserved Bits    */
} __type699;
typedef struct 
{                                                          /* Bit Access       */
    uint32 FRIE:1;                                         /* FRIE             */
    uint32 FCIE:1;                                         /* FCIE             */
    uint32 FMIE:1;                                         /* FMIE             */
    uint32 FEIE:1;                                         /* FEIE             */
    uint32 FNIE:1;                                         /* FNIE             */
    uint32 CLIE:1;                                         /* CLIE             */
    uint32 CVIE:1;                                         /* CVIE             */
    uint32 NRIE:1;                                         /* NRIE             */
    uint32 SCIE:1;                                         /* SCIE             */
    uint32 SMIE:1;                                         /* SMIE             */
    uint32 SEIE:1;                                         /* SEIE             */
    uint32 :21;                                            /* Reserved Bits    */
} __type700;
typedef struct 
{                                                          /* Bit Access       */
    uint32 OMC:3;                                          /* OMC[2:0]         */
    uint32 :29;                                            /* Reserved Bits    */
} __type701;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TLL:7;                                          /* TLL[6:0]         */
    uint32 :25;                                            /* Reserved Bits    */
} __type702;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 OMS:3;                                    /* OMS[2:0]         */
    uint32 :29;                                            /* Reserved Bits    */
} __type703;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 FRS:1;                                    /* FRS              */
    const uint32 FCS:1;                                    /* FCS              */
    const uint32 FMS:1;                                    /* FMS              */
    const uint32 FES:1;                                    /* FES              */
    const uint32 FNS:1;                                    /* FNS              */
    const uint32 CLS:1;                                    /* CLS              */
    const uint32 CVS:1;                                    /* CVS              */
    const uint32 NRS:1;                                    /* NRS              */
    const uint32 SCS:1;                                    /* SCS              */
    const uint32 SMS:1;                                    /* SMS              */
    const uint32 SES:1;                                    /* SES              */
    uint32 :21;                                            /* Reserved Bits    */
} __type704;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 FCC:1;                                          /* FCC              */
    uint32 FMC:1;                                          /* FMC              */
    uint32 FEC:1;                                          /* FEC              */
    uint32 FNC:1;                                          /* FNC              */
    uint32 CLC:1;                                          /* CLC              */
    uint32 CVC:1;                                          /* CVC              */
    uint32 NRC:1;                                          /* NRC              */
    uint32 SCC:1;                                          /* SCC              */
    uint32 SMC:1;                                          /* SMC              */
    uint32 SEC:1;                                          /* SEC              */
    uint32 :21;                                            /* Reserved Bits    */
} __type705;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 STS:32;                                   /* STS[31:0]        */
} __type706;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 IDD:20;                                   /* IDD[19:0]        */
    const uint32 SMGC:1;                                   /* SMGC             */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 SCRC:6;                                   /* SCRC[29:24]      */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 SND:1;                                    /* SND              */
} __type707;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CPLV:17;                                  /* CPLV[16:0]       */
    uint32 :15;                                            /* Reserved Bits    */
} __type708;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 MLV:21;                                   /* MLV[20:0]        */
    uint32 :11;                                            /* Reserved Bits    */
} __type709;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 FTS:32;                                   /* FTS[31:0]        */
} __type710;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 ND:24;                                    /* ND[23:0]         */
    const uint32 FCRC:4;                                   /* FCRC[27:24]      */
    const uint32 FCCN:2;                                   /* FCCN[29:28]      */
    const uint32 FND:1;                                    /* FND              */
    const uint32 SNDM:1;                                   /* SNDM             */
} __type711;
typedef struct 
{                                                          /* Bit Access       */
    uint32 MSSEL0:3;                                       /* MSSEL0[2:0]      */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 MSSEL1:3;                                       /* MSSEL1[6:4]      */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 MSSEL2:3;                                       /* MSSEL2[10:8]     */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 MSSEL3:3;                                       /* MSSEL3[14:12]    */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 MSSEL4:3;                                       /* MSSEL4[18:16]    */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 MSSEL5:3;                                       /* MSSEL5[22:20]    */
    uint32 :9;                                             /* Reserved Bits    */
} __type712;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type696 BIT;                                         /* Bit Access       */
} __type1975;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type697 BIT;                                         /* Bit Access       */
} __type1976;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type698 BIT;                                         /* Bit Access       */
} __type1977;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type699 BIT;                                         /* Bit Access       */
} __type1978;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type700 BIT;                                         /* Bit Access       */
} __type1979;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type701 BIT;                                         /* Bit Access       */
} __type1980;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type702 BIT;                                         /* Bit Access       */
} __type1981;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type703 BIT;                                   /* Bit Access       */
} __type1982;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type704 BIT;                                   /* Bit Access       */
} __type1983;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type705 BIT;                                         /* Bit Access       */
} __type1984;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type706 BIT;                                   /* Bit Access       */
} __type1985;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type707 BIT;                                   /* Bit Access       */
} __type1986;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type708 BIT;                                   /* Bit Access       */
} __type1987;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type709 BIT;                                   /* Bit Access       */
} __type1988;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type710 BIT;                                   /* Bit Access       */
} __type1989;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type711 BIT;                                   /* Bit Access       */
} __type1990;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type712 BIT;                                         /* Bit Access       */
} __type1991;

typedef struct 
{                                                          /* Module           */
    __type1975 TSPC;                                       /* TSPC             */
    __type1976 TSC;                                        /* TSC              */
    uint8  dummy382[8];                                    /* Reserved         */
    __type1977 _CC;                                        /* CC               */
    __type1978 BRP;                                        /* BRP              */
    __type1979 IDE;                                        /* IDE              */
    __type1980 MDC;                                        /* MDC              */
    __type1981 SPCT;                                       /* SPCT             */
    const __type1982 MST;                                  /* MST              */
    const __type1983 CS;                                   /* CS               */
    __type1984 CSC;                                        /* CSC              */
    const __type1985 SRTS;                                 /* SRTS             */
    const __type1986 SRXD;                                 /* SRXD             */
    const __type1987 CPL;                                  /* CPL              */
    const __type1988 ML;                                   /* ML               */
    const __type1989 FRTS;                                 /* FRTS             */
    const __type1990 FRXD;                                 /* FRXD             */
} __type2605;
typedef struct 
{                                                          /* Module           */
    __type1991 TSSEL;                                      /* TSSEL            */
} __type2606;

__IOREG(RSENT0, 0xFFE05000, __READ_WRITE, __type2605);                /* RSENT0 */
__IOREG(RSENT1, 0xFFE06000, __READ_WRITE, __type2605);                /* RSENT1 */
__IOREG(RSENT2, 0xFFE07000, __READ_WRITE, __type2605);                /* RSENT2 */
__IOREG(RSENT3, 0xFFE08000, __READ_WRITE, __type2605);                /* RSENT3 */
__IOREG(RSENT4, 0xFFE09000, __READ_WRITE, __type2605);                /* RSENT4 */
__IOREG(RSENT5, 0xFFE0A000, __READ_WRITE, __type2605);                /* RSENT5 */
__IOREG(RSENT, 0xFFE0F000, __READ_WRITE, __type2606);                 /* RSENT */

#define RSENT0TSPC RSENT0.TSPC.UINT32
#define RSENT0TTPV RSENT0.TSPC.BIT.TTPV
#define RSENT0TTM RSENT0.TSPC.BIT.TTM
#define RSENT0TMS RSENT0.TSPC.BIT.TMS
#define RSENT0TSC RSENT0.TSC.UINT32
#define RSENT0TS RSENT0.TSC.BIT.TS
#define RSENT0CC RSENT0._CC.UINT32
#define RSENT0SPCE RSENT0._CC.BIT.SPCE
#define RSENT0NDN RSENT0._CC.BIT.NDN
#define RSENT0PPC RSENT0._CC.BIT.PPC
#define RSENT0PPTC RSENT0._CC.BIT.PPTC
#define RSENT0SMF RSENT0._CC.BIT.SMF
#define RSENT0FCCD RSENT0._CC.BIT.FCCD
#define RSENT0SCCD RSENT0._CC.BIT.SCCD
#define RSENT0FCM RSENT0._CC.BIT.FCM
#define RSENT0SOPC RSENT0._CC.BIT.SOPC
#define RSENT0BRP RSENT0.BRP.UINT32
#define RSENT0SCMV RSENT0.BRP.BIT.SCMV
#define RSENT0SCDV RSENT0.BRP.BIT.SCDV
#define RSENT0TTI RSENT0.BRP.BIT.TTI
#define RSENT0TTF RSENT0.BRP.BIT.TTF
#define RSENT0IDE RSENT0.IDE.UINT32
#define RSENT0FRIE RSENT0.IDE.BIT.FRIE
#define RSENT0FCIE RSENT0.IDE.BIT.FCIE
#define RSENT0FMIE RSENT0.IDE.BIT.FMIE
#define RSENT0FEIE RSENT0.IDE.BIT.FEIE
#define RSENT0FNIE RSENT0.IDE.BIT.FNIE
#define RSENT0CLIE RSENT0.IDE.BIT.CLIE
#define RSENT0CVIE RSENT0.IDE.BIT.CVIE
#define RSENT0NRIE RSENT0.IDE.BIT.NRIE
#define RSENT0SCIE RSENT0.IDE.BIT.SCIE
#define RSENT0SMIE RSENT0.IDE.BIT.SMIE
#define RSENT0SEIE RSENT0.IDE.BIT.SEIE
#define RSENT0MDC RSENT0.MDC.UINT32
#define RSENT0OMC RSENT0.MDC.BIT.OMC
#define RSENT0SPCT RSENT0.SPCT.UINT32
#define RSENT0TLL RSENT0.SPCT.BIT.TLL
#define RSENT0MST RSENT0.MST.UINT32
#define RSENT0OMS RSENT0.MST.BIT.OMS
#define RSENT0CS RSENT0.CS.UINT32
#define RSENT0FRS RSENT0.CS.BIT.FRS
#define RSENT0FCS RSENT0.CS.BIT.FCS
#define RSENT0FMS RSENT0.CS.BIT.FMS
#define RSENT0FES RSENT0.CS.BIT.FES
#define RSENT0FNS RSENT0.CS.BIT.FNS
#define RSENT0CLS RSENT0.CS.BIT.CLS
#define RSENT0CVS RSENT0.CS.BIT.CVS
#define RSENT0NRS RSENT0.CS.BIT.NRS
#define RSENT0SCS RSENT0.CS.BIT.SCS
#define RSENT0SMS RSENT0.CS.BIT.SMS
#define RSENT0SES RSENT0.CS.BIT.SES
#define RSENT0CSC RSENT0.CSC.UINT32
#define RSENT0FCC RSENT0.CSC.BIT.FCC
#define RSENT0FMC RSENT0.CSC.BIT.FMC
#define RSENT0FEC RSENT0.CSC.BIT.FEC
#define RSENT0FNC RSENT0.CSC.BIT.FNC
#define RSENT0CLC RSENT0.CSC.BIT.CLC
#define RSENT0CVC RSENT0.CSC.BIT.CVC
#define RSENT0NRC RSENT0.CSC.BIT.NRC
#define RSENT0SCC RSENT0.CSC.BIT.SCC
#define RSENT0SMC RSENT0.CSC.BIT.SMC
#define RSENT0SEC RSENT0.CSC.BIT.SEC
#define RSENT0SRTS RSENT0.SRTS.UINT32
#define RSENT0STS RSENT0.SRTS.BIT.STS
#define RSENT0SRXD RSENT0.SRXD.UINT32
#define RSENT0IDD RSENT0.SRXD.BIT.IDD
#define RSENT0SMGC RSENT0.SRXD.BIT.SMGC
#define RSENT0SCRC RSENT0.SRXD.BIT.SCRC
#define RSENT0SND RSENT0.SRXD.BIT.SND
#define RSENT0CPL RSENT0.CPL.UINT32
#define RSENT0CPLV RSENT0.CPL.BIT.CPLV
#define RSENT0ML RSENT0.ML.UINT32
#define RSENT0MLV RSENT0.ML.BIT.MLV
#define RSENT0FRTS RSENT0.FRTS.UINT32
#define RSENT0FTS RSENT0.FRTS.BIT.FTS
#define RSENT0FRXD RSENT0.FRXD.UINT32
#define RSENT0ND RSENT0.FRXD.BIT.ND
#define RSENT0FCRC RSENT0.FRXD.BIT.FCRC
#define RSENT0FCCN RSENT0.FRXD.BIT.FCCN
#define RSENT0FND RSENT0.FRXD.BIT.FND
#define RSENT0SNDM RSENT0.FRXD.BIT.SNDM
#define RSENT1TSPC RSENT1.TSPC.UINT32
#define RSENT1TTPV RSENT1.TSPC.BIT.TTPV
#define RSENT1TTM RSENT1.TSPC.BIT.TTM
#define RSENT1TMS RSENT1.TSPC.BIT.TMS
#define RSENT1TSC RSENT1.TSC.UINT32
#define RSENT1TS RSENT1.TSC.BIT.TS
#define RSENT1CC RSENT1._CC.UINT32
#define RSENT1SPCE RSENT1._CC.BIT.SPCE
#define RSENT1NDN RSENT1._CC.BIT.NDN
#define RSENT1PPC RSENT1._CC.BIT.PPC
#define RSENT1PPTC RSENT1._CC.BIT.PPTC
#define RSENT1SMF RSENT1._CC.BIT.SMF
#define RSENT1FCCD RSENT1._CC.BIT.FCCD
#define RSENT1SCCD RSENT1._CC.BIT.SCCD
#define RSENT1FCM RSENT1._CC.BIT.FCM
#define RSENT1SOPC RSENT1._CC.BIT.SOPC
#define RSENT1BRP RSENT1.BRP.UINT32
#define RSENT1SCMV RSENT1.BRP.BIT.SCMV
#define RSENT1SCDV RSENT1.BRP.BIT.SCDV
#define RSENT1TTI RSENT1.BRP.BIT.TTI
#define RSENT1TTF RSENT1.BRP.BIT.TTF
#define RSENT1IDE RSENT1.IDE.UINT32
#define RSENT1FRIE RSENT1.IDE.BIT.FRIE
#define RSENT1FCIE RSENT1.IDE.BIT.FCIE
#define RSENT1FMIE RSENT1.IDE.BIT.FMIE
#define RSENT1FEIE RSENT1.IDE.BIT.FEIE
#define RSENT1FNIE RSENT1.IDE.BIT.FNIE
#define RSENT1CLIE RSENT1.IDE.BIT.CLIE
#define RSENT1CVIE RSENT1.IDE.BIT.CVIE
#define RSENT1NRIE RSENT1.IDE.BIT.NRIE
#define RSENT1SCIE RSENT1.IDE.BIT.SCIE
#define RSENT1SMIE RSENT1.IDE.BIT.SMIE
#define RSENT1SEIE RSENT1.IDE.BIT.SEIE
#define RSENT1MDC RSENT1.MDC.UINT32
#define RSENT1OMC RSENT1.MDC.BIT.OMC
#define RSENT1SPCT RSENT1.SPCT.UINT32
#define RSENT1TLL RSENT1.SPCT.BIT.TLL
#define RSENT1MST RSENT1.MST.UINT32
#define RSENT1OMS RSENT1.MST.BIT.OMS
#define RSENT1CS RSENT1.CS.UINT32
#define RSENT1FRS RSENT1.CS.BIT.FRS
#define RSENT1FCS RSENT1.CS.BIT.FCS
#define RSENT1FMS RSENT1.CS.BIT.FMS
#define RSENT1FES RSENT1.CS.BIT.FES
#define RSENT1FNS RSENT1.CS.BIT.FNS
#define RSENT1CLS RSENT1.CS.BIT.CLS
#define RSENT1CVS RSENT1.CS.BIT.CVS
#define RSENT1NRS RSENT1.CS.BIT.NRS
#define RSENT1SCS RSENT1.CS.BIT.SCS
#define RSENT1SMS RSENT1.CS.BIT.SMS
#define RSENT1SES RSENT1.CS.BIT.SES
#define RSENT1CSC RSENT1.CSC.UINT32
#define RSENT1FCC RSENT1.CSC.BIT.FCC
#define RSENT1FMC RSENT1.CSC.BIT.FMC
#define RSENT1FEC RSENT1.CSC.BIT.FEC
#define RSENT1FNC RSENT1.CSC.BIT.FNC
#define RSENT1CLC RSENT1.CSC.BIT.CLC
#define RSENT1CVC RSENT1.CSC.BIT.CVC
#define RSENT1NRC RSENT1.CSC.BIT.NRC
#define RSENT1SCC RSENT1.CSC.BIT.SCC
#define RSENT1SMC RSENT1.CSC.BIT.SMC
#define RSENT1SEC RSENT1.CSC.BIT.SEC
#define RSENT1SRTS RSENT1.SRTS.UINT32
#define RSENT1STS RSENT1.SRTS.BIT.STS
#define RSENT1SRXD RSENT1.SRXD.UINT32
#define RSENT1IDD RSENT1.SRXD.BIT.IDD
#define RSENT1SMGC RSENT1.SRXD.BIT.SMGC
#define RSENT1SCRC RSENT1.SRXD.BIT.SCRC
#define RSENT1SND RSENT1.SRXD.BIT.SND
#define RSENT1CPL RSENT1.CPL.UINT32
#define RSENT1CPLV RSENT1.CPL.BIT.CPLV
#define RSENT1ML RSENT1.ML.UINT32
#define RSENT1MLV RSENT1.ML.BIT.MLV
#define RSENT1FRTS RSENT1.FRTS.UINT32
#define RSENT1FTS RSENT1.FRTS.BIT.FTS
#define RSENT1FRXD RSENT1.FRXD.UINT32
#define RSENT1ND RSENT1.FRXD.BIT.ND
#define RSENT1FCRC RSENT1.FRXD.BIT.FCRC
#define RSENT1FCCN RSENT1.FRXD.BIT.FCCN
#define RSENT1FND RSENT1.FRXD.BIT.FND
#define RSENT1SNDM RSENT1.FRXD.BIT.SNDM
#define RSENT2TSPC RSENT2.TSPC.UINT32
#define RSENT2TTPV RSENT2.TSPC.BIT.TTPV
#define RSENT2TTM RSENT2.TSPC.BIT.TTM
#define RSENT2TMS RSENT2.TSPC.BIT.TMS
#define RSENT2TSC RSENT2.TSC.UINT32
#define RSENT2TS RSENT2.TSC.BIT.TS
#define RSENT2CC RSENT2._CC.UINT32
#define RSENT2SPCE RSENT2._CC.BIT.SPCE
#define RSENT2NDN RSENT2._CC.BIT.NDN
#define RSENT2PPC RSENT2._CC.BIT.PPC
#define RSENT2PPTC RSENT2._CC.BIT.PPTC
#define RSENT2SMF RSENT2._CC.BIT.SMF
#define RSENT2FCCD RSENT2._CC.BIT.FCCD
#define RSENT2SCCD RSENT2._CC.BIT.SCCD
#define RSENT2FCM RSENT2._CC.BIT.FCM
#define RSENT2SOPC RSENT2._CC.BIT.SOPC
#define RSENT2BRP RSENT2.BRP.UINT32
#define RSENT2SCMV RSENT2.BRP.BIT.SCMV
#define RSENT2SCDV RSENT2.BRP.BIT.SCDV
#define RSENT2TTI RSENT2.BRP.BIT.TTI
#define RSENT2TTF RSENT2.BRP.BIT.TTF
#define RSENT2IDE RSENT2.IDE.UINT32
#define RSENT2FRIE RSENT2.IDE.BIT.FRIE
#define RSENT2FCIE RSENT2.IDE.BIT.FCIE
#define RSENT2FMIE RSENT2.IDE.BIT.FMIE
#define RSENT2FEIE RSENT2.IDE.BIT.FEIE
#define RSENT2FNIE RSENT2.IDE.BIT.FNIE
#define RSENT2CLIE RSENT2.IDE.BIT.CLIE
#define RSENT2CVIE RSENT2.IDE.BIT.CVIE
#define RSENT2NRIE RSENT2.IDE.BIT.NRIE
#define RSENT2SCIE RSENT2.IDE.BIT.SCIE
#define RSENT2SMIE RSENT2.IDE.BIT.SMIE
#define RSENT2SEIE RSENT2.IDE.BIT.SEIE
#define RSENT2MDC RSENT2.MDC.UINT32
#define RSENT2OMC RSENT2.MDC.BIT.OMC
#define RSENT2SPCT RSENT2.SPCT.UINT32
#define RSENT2TLL RSENT2.SPCT.BIT.TLL
#define RSENT2MST RSENT2.MST.UINT32
#define RSENT2OMS RSENT2.MST.BIT.OMS
#define RSENT2CS RSENT2.CS.UINT32
#define RSENT2FRS RSENT2.CS.BIT.FRS
#define RSENT2FCS RSENT2.CS.BIT.FCS
#define RSENT2FMS RSENT2.CS.BIT.FMS
#define RSENT2FES RSENT2.CS.BIT.FES
#define RSENT2FNS RSENT2.CS.BIT.FNS
#define RSENT2CLS RSENT2.CS.BIT.CLS
#define RSENT2CVS RSENT2.CS.BIT.CVS
#define RSENT2NRS RSENT2.CS.BIT.NRS
#define RSENT2SCS RSENT2.CS.BIT.SCS
#define RSENT2SMS RSENT2.CS.BIT.SMS
#define RSENT2SES RSENT2.CS.BIT.SES
#define RSENT2CSC RSENT2.CSC.UINT32
#define RSENT2FCC RSENT2.CSC.BIT.FCC
#define RSENT2FMC RSENT2.CSC.BIT.FMC
#define RSENT2FEC RSENT2.CSC.BIT.FEC
#define RSENT2FNC RSENT2.CSC.BIT.FNC
#define RSENT2CLC RSENT2.CSC.BIT.CLC
#define RSENT2CVC RSENT2.CSC.BIT.CVC
#define RSENT2NRC RSENT2.CSC.BIT.NRC
#define RSENT2SCC RSENT2.CSC.BIT.SCC
#define RSENT2SMC RSENT2.CSC.BIT.SMC
#define RSENT2SEC RSENT2.CSC.BIT.SEC
#define RSENT2SRTS RSENT2.SRTS.UINT32
#define RSENT2STS RSENT2.SRTS.BIT.STS
#define RSENT2SRXD RSENT2.SRXD.UINT32
#define RSENT2IDD RSENT2.SRXD.BIT.IDD
#define RSENT2SMGC RSENT2.SRXD.BIT.SMGC
#define RSENT2SCRC RSENT2.SRXD.BIT.SCRC
#define RSENT2SND RSENT2.SRXD.BIT.SND
#define RSENT2CPL RSENT2.CPL.UINT32
#define RSENT2CPLV RSENT2.CPL.BIT.CPLV
#define RSENT2ML RSENT2.ML.UINT32
#define RSENT2MLV RSENT2.ML.BIT.MLV
#define RSENT2FRTS RSENT2.FRTS.UINT32
#define RSENT2FTS RSENT2.FRTS.BIT.FTS
#define RSENT2FRXD RSENT2.FRXD.UINT32
#define RSENT2ND RSENT2.FRXD.BIT.ND
#define RSENT2FCRC RSENT2.FRXD.BIT.FCRC
#define RSENT2FCCN RSENT2.FRXD.BIT.FCCN
#define RSENT2FND RSENT2.FRXD.BIT.FND
#define RSENT2SNDM RSENT2.FRXD.BIT.SNDM
#define RSENT3TSPC RSENT3.TSPC.UINT32
#define RSENT3TTPV RSENT3.TSPC.BIT.TTPV
#define RSENT3TTM RSENT3.TSPC.BIT.TTM
#define RSENT3TMS RSENT3.TSPC.BIT.TMS
#define RSENT3TSC RSENT3.TSC.UINT32
#define RSENT3TS RSENT3.TSC.BIT.TS
#define RSENT3CC RSENT3._CC.UINT32
#define RSENT3SPCE RSENT3._CC.BIT.SPCE
#define RSENT3NDN RSENT3._CC.BIT.NDN
#define RSENT3PPC RSENT3._CC.BIT.PPC
#define RSENT3PPTC RSENT3._CC.BIT.PPTC
#define RSENT3SMF RSENT3._CC.BIT.SMF
#define RSENT3FCCD RSENT3._CC.BIT.FCCD
#define RSENT3SCCD RSENT3._CC.BIT.SCCD
#define RSENT3FCM RSENT3._CC.BIT.FCM
#define RSENT3SOPC RSENT3._CC.BIT.SOPC
#define RSENT3BRP RSENT3.BRP.UINT32
#define RSENT3SCMV RSENT3.BRP.BIT.SCMV
#define RSENT3SCDV RSENT3.BRP.BIT.SCDV
#define RSENT3TTI RSENT3.BRP.BIT.TTI
#define RSENT3TTF RSENT3.BRP.BIT.TTF
#define RSENT3IDE RSENT3.IDE.UINT32
#define RSENT3FRIE RSENT3.IDE.BIT.FRIE
#define RSENT3FCIE RSENT3.IDE.BIT.FCIE
#define RSENT3FMIE RSENT3.IDE.BIT.FMIE
#define RSENT3FEIE RSENT3.IDE.BIT.FEIE
#define RSENT3FNIE RSENT3.IDE.BIT.FNIE
#define RSENT3CLIE RSENT3.IDE.BIT.CLIE
#define RSENT3CVIE RSENT3.IDE.BIT.CVIE
#define RSENT3NRIE RSENT3.IDE.BIT.NRIE
#define RSENT3SCIE RSENT3.IDE.BIT.SCIE
#define RSENT3SMIE RSENT3.IDE.BIT.SMIE
#define RSENT3SEIE RSENT3.IDE.BIT.SEIE
#define RSENT3MDC RSENT3.MDC.UINT32
#define RSENT3OMC RSENT3.MDC.BIT.OMC
#define RSENT3SPCT RSENT3.SPCT.UINT32
#define RSENT3TLL RSENT3.SPCT.BIT.TLL
#define RSENT3MST RSENT3.MST.UINT32
#define RSENT3OMS RSENT3.MST.BIT.OMS
#define RSENT3CS RSENT3.CS.UINT32
#define RSENT3FRS RSENT3.CS.BIT.FRS
#define RSENT3FCS RSENT3.CS.BIT.FCS
#define RSENT3FMS RSENT3.CS.BIT.FMS
#define RSENT3FES RSENT3.CS.BIT.FES
#define RSENT3FNS RSENT3.CS.BIT.FNS
#define RSENT3CLS RSENT3.CS.BIT.CLS
#define RSENT3CVS RSENT3.CS.BIT.CVS
#define RSENT3NRS RSENT3.CS.BIT.NRS
#define RSENT3SCS RSENT3.CS.BIT.SCS
#define RSENT3SMS RSENT3.CS.BIT.SMS
#define RSENT3SES RSENT3.CS.BIT.SES
#define RSENT3CSC RSENT3.CSC.UINT32
#define RSENT3FCC RSENT3.CSC.BIT.FCC
#define RSENT3FMC RSENT3.CSC.BIT.FMC
#define RSENT3FEC RSENT3.CSC.BIT.FEC
#define RSENT3FNC RSENT3.CSC.BIT.FNC
#define RSENT3CLC RSENT3.CSC.BIT.CLC
#define RSENT3CVC RSENT3.CSC.BIT.CVC
#define RSENT3NRC RSENT3.CSC.BIT.NRC
#define RSENT3SCC RSENT3.CSC.BIT.SCC
#define RSENT3SMC RSENT3.CSC.BIT.SMC
#define RSENT3SEC RSENT3.CSC.BIT.SEC
#define RSENT3SRTS RSENT3.SRTS.UINT32
#define RSENT3STS RSENT3.SRTS.BIT.STS
#define RSENT3SRXD RSENT3.SRXD.UINT32
#define RSENT3IDD RSENT3.SRXD.BIT.IDD
#define RSENT3SMGC RSENT3.SRXD.BIT.SMGC
#define RSENT3SCRC RSENT3.SRXD.BIT.SCRC
#define RSENT3SND RSENT3.SRXD.BIT.SND
#define RSENT3CPL RSENT3.CPL.UINT32
#define RSENT3CPLV RSENT3.CPL.BIT.CPLV
#define RSENT3ML RSENT3.ML.UINT32
#define RSENT3MLV RSENT3.ML.BIT.MLV
#define RSENT3FRTS RSENT3.FRTS.UINT32
#define RSENT3FTS RSENT3.FRTS.BIT.FTS
#define RSENT3FRXD RSENT3.FRXD.UINT32
#define RSENT3ND RSENT3.FRXD.BIT.ND
#define RSENT3FCRC RSENT3.FRXD.BIT.FCRC
#define RSENT3FCCN RSENT3.FRXD.BIT.FCCN
#define RSENT3FND RSENT3.FRXD.BIT.FND
#define RSENT3SNDM RSENT3.FRXD.BIT.SNDM
#define RSENT4TSPC RSENT4.TSPC.UINT32
#define RSENT4TTPV RSENT4.TSPC.BIT.TTPV
#define RSENT4TTM RSENT4.TSPC.BIT.TTM
#define RSENT4TMS RSENT4.TSPC.BIT.TMS
#define RSENT4TSC RSENT4.TSC.UINT32
#define RSENT4TS RSENT4.TSC.BIT.TS
#define RSENT4CC RSENT4._CC.UINT32
#define RSENT4SPCE RSENT4._CC.BIT.SPCE
#define RSENT4NDN RSENT4._CC.BIT.NDN
#define RSENT4PPC RSENT4._CC.BIT.PPC
#define RSENT4PPTC RSENT4._CC.BIT.PPTC
#define RSENT4SMF RSENT4._CC.BIT.SMF
#define RSENT4FCCD RSENT4._CC.BIT.FCCD
#define RSENT4SCCD RSENT4._CC.BIT.SCCD
#define RSENT4FCM RSENT4._CC.BIT.FCM
#define RSENT4SOPC RSENT4._CC.BIT.SOPC
#define RSENT4BRP RSENT4.BRP.UINT32
#define RSENT4SCMV RSENT4.BRP.BIT.SCMV
#define RSENT4SCDV RSENT4.BRP.BIT.SCDV
#define RSENT4TTI RSENT4.BRP.BIT.TTI
#define RSENT4TTF RSENT4.BRP.BIT.TTF
#define RSENT4IDE RSENT4.IDE.UINT32
#define RSENT4FRIE RSENT4.IDE.BIT.FRIE
#define RSENT4FCIE RSENT4.IDE.BIT.FCIE
#define RSENT4FMIE RSENT4.IDE.BIT.FMIE
#define RSENT4FEIE RSENT4.IDE.BIT.FEIE
#define RSENT4FNIE RSENT4.IDE.BIT.FNIE
#define RSENT4CLIE RSENT4.IDE.BIT.CLIE
#define RSENT4CVIE RSENT4.IDE.BIT.CVIE
#define RSENT4NRIE RSENT4.IDE.BIT.NRIE
#define RSENT4SCIE RSENT4.IDE.BIT.SCIE
#define RSENT4SMIE RSENT4.IDE.BIT.SMIE
#define RSENT4SEIE RSENT4.IDE.BIT.SEIE
#define RSENT4MDC RSENT4.MDC.UINT32
#define RSENT4OMC RSENT4.MDC.BIT.OMC
#define RSENT4SPCT RSENT4.SPCT.UINT32
#define RSENT4TLL RSENT4.SPCT.BIT.TLL
#define RSENT4MST RSENT4.MST.UINT32
#define RSENT4OMS RSENT4.MST.BIT.OMS
#define RSENT4CS RSENT4.CS.UINT32
#define RSENT4FRS RSENT4.CS.BIT.FRS
#define RSENT4FCS RSENT4.CS.BIT.FCS
#define RSENT4FMS RSENT4.CS.BIT.FMS
#define RSENT4FES RSENT4.CS.BIT.FES
#define RSENT4FNS RSENT4.CS.BIT.FNS
#define RSENT4CLS RSENT4.CS.BIT.CLS
#define RSENT4CVS RSENT4.CS.BIT.CVS
#define RSENT4NRS RSENT4.CS.BIT.NRS
#define RSENT4SCS RSENT4.CS.BIT.SCS
#define RSENT4SMS RSENT4.CS.BIT.SMS
#define RSENT4SES RSENT4.CS.BIT.SES
#define RSENT4CSC RSENT4.CSC.UINT32
#define RSENT4FCC RSENT4.CSC.BIT.FCC
#define RSENT4FMC RSENT4.CSC.BIT.FMC
#define RSENT4FEC RSENT4.CSC.BIT.FEC
#define RSENT4FNC RSENT4.CSC.BIT.FNC
#define RSENT4CLC RSENT4.CSC.BIT.CLC
#define RSENT4CVC RSENT4.CSC.BIT.CVC
#define RSENT4NRC RSENT4.CSC.BIT.NRC
#define RSENT4SCC RSENT4.CSC.BIT.SCC
#define RSENT4SMC RSENT4.CSC.BIT.SMC
#define RSENT4SEC RSENT4.CSC.BIT.SEC
#define RSENT4SRTS RSENT4.SRTS.UINT32
#define RSENT4STS RSENT4.SRTS.BIT.STS
#define RSENT4SRXD RSENT4.SRXD.UINT32
#define RSENT4IDD RSENT4.SRXD.BIT.IDD
#define RSENT4SMGC RSENT4.SRXD.BIT.SMGC
#define RSENT4SCRC RSENT4.SRXD.BIT.SCRC
#define RSENT4SND RSENT4.SRXD.BIT.SND
#define RSENT4CPL RSENT4.CPL.UINT32
#define RSENT4CPLV RSENT4.CPL.BIT.CPLV
#define RSENT4ML RSENT4.ML.UINT32
#define RSENT4MLV RSENT4.ML.BIT.MLV
#define RSENT4FRTS RSENT4.FRTS.UINT32
#define RSENT4FTS RSENT4.FRTS.BIT.FTS
#define RSENT4FRXD RSENT4.FRXD.UINT32
#define RSENT4ND RSENT4.FRXD.BIT.ND
#define RSENT4FCRC RSENT4.FRXD.BIT.FCRC
#define RSENT4FCCN RSENT4.FRXD.BIT.FCCN
#define RSENT4FND RSENT4.FRXD.BIT.FND
#define RSENT4SNDM RSENT4.FRXD.BIT.SNDM
#define RSENT5TSPC RSENT5.TSPC.UINT32
#define RSENT5TTPV RSENT5.TSPC.BIT.TTPV
#define RSENT5TTM RSENT5.TSPC.BIT.TTM
#define RSENT5TMS RSENT5.TSPC.BIT.TMS
#define RSENT5TSC RSENT5.TSC.UINT32
#define RSENT5TS RSENT5.TSC.BIT.TS
#define RSENT5CC RSENT5._CC.UINT32
#define RSENT5SPCE RSENT5._CC.BIT.SPCE
#define RSENT5NDN RSENT5._CC.BIT.NDN
#define RSENT5PPC RSENT5._CC.BIT.PPC
#define RSENT5PPTC RSENT5._CC.BIT.PPTC
#define RSENT5SMF RSENT5._CC.BIT.SMF
#define RSENT5FCCD RSENT5._CC.BIT.FCCD
#define RSENT5SCCD RSENT5._CC.BIT.SCCD
#define RSENT5FCM RSENT5._CC.BIT.FCM
#define RSENT5SOPC RSENT5._CC.BIT.SOPC
#define RSENT5BRP RSENT5.BRP.UINT32
#define RSENT5SCMV RSENT5.BRP.BIT.SCMV
#define RSENT5SCDV RSENT5.BRP.BIT.SCDV
#define RSENT5TTI RSENT5.BRP.BIT.TTI
#define RSENT5TTF RSENT5.BRP.BIT.TTF
#define RSENT5IDE RSENT5.IDE.UINT32
#define RSENT5FRIE RSENT5.IDE.BIT.FRIE
#define RSENT5FCIE RSENT5.IDE.BIT.FCIE
#define RSENT5FMIE RSENT5.IDE.BIT.FMIE
#define RSENT5FEIE RSENT5.IDE.BIT.FEIE
#define RSENT5FNIE RSENT5.IDE.BIT.FNIE
#define RSENT5CLIE RSENT5.IDE.BIT.CLIE
#define RSENT5CVIE RSENT5.IDE.BIT.CVIE
#define RSENT5NRIE RSENT5.IDE.BIT.NRIE
#define RSENT5SCIE RSENT5.IDE.BIT.SCIE
#define RSENT5SMIE RSENT5.IDE.BIT.SMIE
#define RSENT5SEIE RSENT5.IDE.BIT.SEIE
#define RSENT5MDC RSENT5.MDC.UINT32
#define RSENT5OMC RSENT5.MDC.BIT.OMC
#define RSENT5SPCT RSENT5.SPCT.UINT32
#define RSENT5TLL RSENT5.SPCT.BIT.TLL
#define RSENT5MST RSENT5.MST.UINT32
#define RSENT5OMS RSENT5.MST.BIT.OMS
#define RSENT5CS RSENT5.CS.UINT32
#define RSENT5FRS RSENT5.CS.BIT.FRS
#define RSENT5FCS RSENT5.CS.BIT.FCS
#define RSENT5FMS RSENT5.CS.BIT.FMS
#define RSENT5FES RSENT5.CS.BIT.FES
#define RSENT5FNS RSENT5.CS.BIT.FNS
#define RSENT5CLS RSENT5.CS.BIT.CLS
#define RSENT5CVS RSENT5.CS.BIT.CVS
#define RSENT5NRS RSENT5.CS.BIT.NRS
#define RSENT5SCS RSENT5.CS.BIT.SCS
#define RSENT5SMS RSENT5.CS.BIT.SMS
#define RSENT5SES RSENT5.CS.BIT.SES
#define RSENT5CSC RSENT5.CSC.UINT32
#define RSENT5FCC RSENT5.CSC.BIT.FCC
#define RSENT5FMC RSENT5.CSC.BIT.FMC
#define RSENT5FEC RSENT5.CSC.BIT.FEC
#define RSENT5FNC RSENT5.CSC.BIT.FNC
#define RSENT5CLC RSENT5.CSC.BIT.CLC
#define RSENT5CVC RSENT5.CSC.BIT.CVC
#define RSENT5NRC RSENT5.CSC.BIT.NRC
#define RSENT5SCC RSENT5.CSC.BIT.SCC
#define RSENT5SMC RSENT5.CSC.BIT.SMC
#define RSENT5SEC RSENT5.CSC.BIT.SEC
#define RSENT5SRTS RSENT5.SRTS.UINT32
#define RSENT5STS RSENT5.SRTS.BIT.STS
#define RSENT5SRXD RSENT5.SRXD.UINT32
#define RSENT5IDD RSENT5.SRXD.BIT.IDD
#define RSENT5SMGC RSENT5.SRXD.BIT.SMGC
#define RSENT5SCRC RSENT5.SRXD.BIT.SCRC
#define RSENT5SND RSENT5.SRXD.BIT.SND
#define RSENT5CPL RSENT5.CPL.UINT32
#define RSENT5CPLV RSENT5.CPL.BIT.CPLV
#define RSENT5ML RSENT5.ML.UINT32
#define RSENT5MLV RSENT5.ML.BIT.MLV
#define RSENT5FRTS RSENT5.FRTS.UINT32
#define RSENT5FTS RSENT5.FRTS.BIT.FTS
#define RSENT5FRXD RSENT5.FRXD.UINT32
#define RSENT5ND RSENT5.FRXD.BIT.ND
#define RSENT5FCRC RSENT5.FRXD.BIT.FCRC
#define RSENT5FCCN RSENT5.FRXD.BIT.FCCN
#define RSENT5FND RSENT5.FRXD.BIT.FND
#define RSENT5SNDM RSENT5.FRXD.BIT.SNDM
#define RSENTTSSEL RSENT.TSSEL.UINT32
#define RSENTMSSEL0 RSENT.TSSEL.BIT.MSSEL0
#define RSENTMSSEL1 RSENT.TSSEL.BIT.MSSEL1
#define RSENTMSSEL2 RSENT.TSSEL.BIT.MSSEL2
#define RSENTMSSEL3 RSENT.TSSEL.BIT.MSSEL3
#define RSENTMSSEL4 RSENT.TSSEL.BIT.MSSEL4
#define RSENTMSSEL5 RSENT.TSSEL.BIT.MSSEL5

#endif
