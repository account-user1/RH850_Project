/**********************************************************************************************************************
* Module File Name  : faci_regs.h
* Module Description: FACI Peripheral Registers
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------
* Date      Rev      Author         Change Description
* -------   -------  --------  ----------------------------------------------
* 12/16/14  1        LWW       Initial version derived from dr7f701311.dvf.h v1 in tools directory
* 09/15/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef FACI_REGS_H
#define FACI_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    const uint8  FWE:1;                                    /* FWE              */
} __type106;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  ECRCT:1;                                  /* ECRCT            */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  DFAE:1;                                         /* DFAE             */
    const uint8  CMDLK:1;                                  /* CMDLK            */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  CFAE:1;                                         /* CFAE             */
} __type107;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ECRCTIE:1;                                      /* ECRCTIE          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  DFAEIE:1;                                       /* DFAEIE           */
    uint8  CMDLKIE:1;                                      /* CMDLKIE          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  CFAEIE:1;                                       /* CFAEIE           */
} __type108;
typedef struct 
{                                                          /* Bit Access       */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 CFAS:1;                                         /* CFAS             */
    uint16 :6;                                             /* Reserved Bits    */
    uint16 KEY:8;                                          /* KEY[15:8]        */
} __type109;
typedef struct 
{                                                          /* Bit Access       */
    uint16 FCRME:1;                                        /* FCRME            */
    uint16 FRAMTRAN:1;                                     /* FRAMTRAN         */
    uint16 :6;                                             /* Reserved Bits    */
    uint16 KEY:8;                                          /* KEY[15:8]        */
} __type110;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  FRCRCT:1;                                 /* FRCRCT           */
    const uint8  FRDTCT:1;                                 /* FRDTCT           */
    const uint8  TBLCRCT:1;                                /* TBLCRCT          */
    const uint8  TBLDTCT:1;                                /* TBLDTCT          */
    const uint8  CFGCRCT:1;                                /* CFGCRCT          */
    const uint8  CFGDTCT:1;                                /* CFGDTCT          */
    const uint8  FLWEERR:1;                                /* FLWEERR          */
    const uint8  FCUERR:1;                                 /* FCUERR           */
    const uint8  PRGSPD:1;                                 /* PRGSPD           */
    const uint8  ERSSPD:1;                                 /* ERSSPD           */
    const uint8  DBFULL:1;                                 /* DBFULL           */
    const uint8  SUSRDY:1;                                 /* SUSRDY           */
    const uint8  PRGERR:1;                                 /* PRGERR           */
    const uint8  ERSERR:1;                                 /* ERSERR           */
    const uint8  ILGLERR:1;                                /* ILGLERR          */
    const uint8  FRDY:1;                                   /* FRDY             */
    const uint8  OTPCRCT:1;                                /* OTPCRCT          */
    const uint8  OTPDTCT:1;                                /* OTPDTCT          */
    const uint8  EBFULL:1;                                 /* EBFULL           */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type111;
typedef struct 
{                                                          /* Bit Access       */
    uint16 FENTRYC:1;                                      /* FENTRYC          */
    uint16 :6;                                             /* Reserved Bits    */
    uint16 FENTRYD:1;                                      /* FENTRYD          */
    uint16 KEY:8;                                          /* KEY[15:8]        */
} __type112;
typedef struct 
{                                                          /* Bit Access       */
    uint16 FPROTCN:1;                                      /* FPROTCN          */
    uint16 :7;                                             /* Reserved Bits    */
    uint16 KEY:8;                                          /* KEY[15:8]        */
} __type113;
typedef struct 
{                                                          /* Bit Access       */
    uint16 SUINIT:1;                                       /* SUINIT           */
    uint16 :7;                                             /* Reserved Bits    */
    uint16 KEY:8;                                          /* KEY[15:8]        */
} __type114;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  FLOCKST:1;                                /* FLOCKST          */
    uint8  :7;                                             /* Reserved Bits    */
} __type115;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 FRFSTEADR:12;                             /* FRFSTEADR[11:0]  */
    uint32 :20;                                            /* Reserved Bits    */
} __type116;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  RTECRCT:1;                                /* RTECRCT          */
    const uint8  RTEDTCT:1;                                /* RTEDTCT          */
    uint8  :6;                                             /* Reserved Bits    */
} __type117;
typedef struct 
{                                                          /* Bit Access       */
    uint8  RTECIE:1;                                       /* RTECIE           */
    uint8  RTEDIE:1;                                       /* RTEDIE           */
    uint8  :6;                                             /* Reserved Bits    */
} __type118;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 PCMDR:8;                                  /* PCMDR[7:0]       */
    const uint16 CMDR:8;                                   /* CMDR[15:8]       */
} __type119;
typedef struct 
{                                                          /* Bit Access       */
    uint16 :4;                                             /* Reserved Bits    */
    uint16 FRECCSEL:1;                                     /* FRECCSEL         */
    uint16 FRECCDISE:1;                                    /* FRECCDISE        */
    uint16 :2;                                             /* Reserved Bits    */
    uint16 KEY:8;                                          /* KEY[15:8]        */
} __type120;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 PEERRST:8;                                /* PEERRST[7:0]     */
    uint16 :8;                                             /* Reserved Bits    */
} __type121;
typedef struct 
{                                                          /* Bit Access       */
    uint8  BCDIR:1;                                        /* BCDIR            */
    uint8  :7;                                             /* Reserved Bits    */
} __type122;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  BCST:1;                                   /* BCST             */
    uint8  :7;                                             /* Reserved Bits    */
} __type123;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 PSADR:19;                                 /* PSADR[18:0]      */
    uint32 :13;                                            /* Reserved Bits    */
} __type124;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ESUSPMD:1;                                      /* ESUSPMD          */
    uint16 :15;                                            /* Reserved Bits    */
} __type125;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PCKA:8;                                         /* PCKA[7:0]        */
    uint16 KEY:8;                                          /* KEY[15:8]        */
} __type126;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EMSQMD:4;                                       /* EMSQMD[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  ERREMU:1;                                       /* ERREMU           */
    uint8  EMMODE:1;                                       /* EMMODE           */
} __type127;
typedef struct 
{                                                          /* Bit Access       */
    uint32 FLAPE:32;                                       /* FLAPE[31:0]      */
} __type128;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 FECCM:9;                                  /* FECCM[8:0]       */
    const uint16 FAPARM:1;                                 /* FAPARM           */
    uint16 :6;                                             /* Reserved Bits    */
} __type129;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ECCDISE:1;                                      /* ECCDISE          */
    uint16 :3;                                             /* Reserved Bits    */
    uint16 DECCVE:1;                                       /* DECCVE           */
    uint16 CECCVE:1;                                       /* CECCVE           */
    uint16 :2;                                             /* Reserved Bits    */
    uint16 KEY:8;                                          /* KEY[15:8]        */
} __type130;
typedef struct 
{                                                          /* Bit Access       */
    uint16 DMYECC:9;                                       /* DMYECC[8:0]      */
    uint16 DMYAPAR:1;                                      /* DMYAPAR          */
    uint16 :6;                                             /* Reserved Bits    */
} __type131;
typedef struct 
{                                                          /* Bit Access       */
    uint8  FCUFSEL:1;                                      /* FCUFSEL          */
    uint8  :7;                                             /* Reserved Bits    */
} __type132;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type106 BIT;                                   /* Bit Access       */
} __type1385;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type107 BIT;                                         /* Bit Access       */
} __type1386;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type108 BIT;                                         /* Bit Access       */
} __type1387;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type109 BIT;                                         /* Bit Access       */
} __type1388;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type110 BIT;                                         /* Bit Access       */
} __type1389;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type111 BIT;                                   /* Bit Access       */
} __type1390;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type112 BIT;                                         /* Bit Access       */
} __type1391;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type113 BIT;                                         /* Bit Access       */
} __type1392;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type114 BIT;                                         /* Bit Access       */
} __type1393;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type115 BIT;                                   /* Bit Access       */
} __type1394;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type116 BIT;                                   /* Bit Access       */
} __type1395;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type117 BIT;                                   /* Bit Access       */
} __type1396;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type118 BIT;                                         /* Bit Access       */
} __type1397;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type119 BIT;                                   /* Bit Access       */
} __type1398;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type120 BIT;                                         /* Bit Access       */
} __type1399;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type121 BIT;                                   /* Bit Access       */
} __type1400;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type122 BIT;                                         /* Bit Access       */
} __type1401;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type123 BIT;                                   /* Bit Access       */
} __type1402;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type124 BIT;                                   /* Bit Access       */
} __type1403;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type125 BIT;                                         /* Bit Access       */
} __type1404;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type126 BIT;                                         /* Bit Access       */
} __type1405;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type127 BIT;                                         /* Bit Access       */
} __type1406;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type128 BIT;                                         /* Bit Access       */
} __type1407;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type129 BIT;                                   /* Bit Access       */
} __type1408;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type130 BIT;                                         /* Bit Access       */
} __type1409;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type131 BIT;                                         /* Bit Access       */
} __type1410;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type132 BIT;                                         /* Bit Access       */
} __type1411;

typedef struct 
{                                                          /* Module           */
    const __type1385 FPMON;                                /* FPMON            */
    uint8  dummy23[15];                                    /* Reserved         */
    __type1386 FASTAT;                                     /* FASTAT           */
    uint8  dummy24[3];                                     /* Reserved         */
    __type1387 FAEINT;                                     /* FAEINT           */
    uint8  dummy25[11];                                    /* Reserved         */
    __type1388 FAREASELC;                                  /* FAREASELC        */
    uint8  dummy26[14];                                    /* Reserved         */
    uint32 FSADDR;                                         /* FSADDR           */
    uint32 FEADDR;                                         /* FEADDR           */
    uint8  dummy27[28];                                    /* Reserved         */
    __type1389 FCURAME;                                    /* FCURAME          */
    uint8  dummy28[42];                                    /* Reserved         */
    const __type1390 FSTATR;                               /* FSTATR           */
    __type1391 FENTRYR;                                    /* FENTRYR          */
    uint8  dummy29[2];                                     /* Reserved         */
    __type1392 FPROTR;                                     /* FPROTR           */
    uint8  dummy30[2];                                     /* Reserved         */
    __type1393 FSUINITR;                                   /* FSUINITR         */
    uint8  dummy31[2];                                     /* Reserved         */
    const __type1394 FLKSTAT;                              /* FLKSTAT          */
    uint8  dummy32[3];                                     /* Reserved         */
    const __type1395 FRFSTEADR;                            /* FRFSTEADR        */
    const __type1396 FRTSTAT;                              /* FRTSTAT          */
    uint8  dummy33[3];                                     /* Reserved         */
    __type1397 FRTEINT;                                    /* FRTEINT          */
    uint8  dummy34[3];                                     /* Reserved         */
    const __type1398 FCMDR;                                /* FCMDR            */
    uint8  dummy35[14];                                    /* Reserved         */
    __type1399 FRAMECCR;                                   /* FRAMECCR         */
    uint8  dummy36[14];                                    /* Reserved         */
    const __type1400 FPESTAT;                              /* FPESTAT          */
    uint8  dummy37[14];                                    /* Reserved         */
    __type1401 FBCCNT;                                     /* FBCCNT           */
    uint8  dummy38[3];                                     /* Reserved         */
    const __type1402 FBCSTAT;                              /* FBCSTAT          */
    uint8  dummy39[3];                                     /* Reserved         */
    const __type1403 FPSADDR;                              /* FPSADDR          */
    uint8  dummy40[4];                                     /* Reserved         */
    __type1404 FCPSR;                                      /* FCPSR            */
    uint8  dummy41[2];                                     /* Reserved         */
    __type1405 FPCKAR;                                     /* FPCKAR           */
    uint8  dummy42[10];                                    /* Reserved         */
    __type1406 FLEMU;                                      /* FLEMU            */
    uint8  dummy43[3];                                     /* Reserved         */
    __type1407 FLEAD;                                      /* FLEAD            */
    uint8  dummy44[8];                                     /* Reserved         */
    const __type1408 FECCEMON;                             /* FECCEMON         */
    uint8  dummy45[2];                                     /* Reserved         */
    __type1409 FECCTMD;                                    /* FECCTMD          */
    uint8  dummy46[2];                                     /* Reserved         */
    __type1410 FDMYECC;                                    /* FDMYECC          */
    uint8  dummy47[2395902];                               /* Reserved         */
    __type1411 FCUFAREA;                                   /* FCUFAREA         */
} __type2562;

__IOREG(FACI, 0xFFA10000, __READ_WRITE, __type2562);                  /* FACI */

#define FACIFPMON FACI.FPMON.UINT8
#define FACIFWE FACI.FPMON.BIT.FWE
#define FACIFASTAT FACI.FASTAT.UINT8
#define FACIECRCT FACI.FASTAT.BIT.ECRCT
#define FACIDFAE FACI.FASTAT.BIT.DFAE
#define FACICMDLK FACI.FASTAT.BIT.CMDLK
#define FACICFAE FACI.FASTAT.BIT.CFAE
#define FACIFAEINT FACI.FAEINT.UINT8
#define FACIECRCTIE FACI.FAEINT.BIT.ECRCTIE
#define FACIDFAEIE FACI.FAEINT.BIT.DFAEIE
#define FACICMDLKIE FACI.FAEINT.BIT.CMDLKIE
#define FACICFAEIE FACI.FAEINT.BIT.CFAEIE
#define FACIFAREASELC FACI.FAREASELC.UINT16
#define FACICFAS FACI.FAREASELC.BIT.CFAS
#define FACIKEY FACI.FAREASELC.BIT.KEY
#define FACIFSADDR FACI.FSADDR
#define FACIFEADDR FACI.FEADDR
#define FACIFCURAME FACI.FCURAME.UINT16
#define FACIFCRME FACI.FCURAME.BIT.FCRME
#define FACIFRAMTRAN FACI.FCURAME.BIT.FRAMTRAN
#define FACIFSTATR FACI.FSTATR.UINT32
#define FACIFSTATRL FACI.FSTATR.UINT16[L]
#define FACIFSTATRLL FACI.FSTATR.UINT8[LL]
#define FACIFSTATRLH FACI.FSTATR.UINT8[LH]
#define FACIFSTATRH FACI.FSTATR.UINT16[H]
#define FACIFSTATRHL FACI.FSTATR.UINT8[HL]
#define FACIFSTATRHH FACI.FSTATR.UINT8[HH]
#define FACIFRCRCT FACI.FSTATR.BIT.FRCRCT
#define FACIFRDTCT FACI.FSTATR.BIT.FRDTCT
#define FACITBLCRCT FACI.FSTATR.BIT.TBLCRCT
#define FACITBLDTCT FACI.FSTATR.BIT.TBLDTCT
#define FACICFGCRCT FACI.FSTATR.BIT.CFGCRCT
#define FACICFGDTCT FACI.FSTATR.BIT.CFGDTCT
#define FACIFLWEERR FACI.FSTATR.BIT.FLWEERR
#define FACIFCUERR FACI.FSTATR.BIT.FCUERR
#define FACIPRGSPD FACI.FSTATR.BIT.PRGSPD
#define FACIERSSPD FACI.FSTATR.BIT.ERSSPD
#define FACIDBFULL FACI.FSTATR.BIT.DBFULL
#define FACISUSRDY FACI.FSTATR.BIT.SUSRDY
#define FACIPRGERR FACI.FSTATR.BIT.PRGERR
#define FACIERSERR FACI.FSTATR.BIT.ERSERR
#define FACIILGLERR FACI.FSTATR.BIT.ILGLERR
#define FACIFRDY FACI.FSTATR.BIT.FRDY
#define FACIOTPCRCT FACI.FSTATR.BIT.OTPCRCT
#define FACIOTPDTCT FACI.FSTATR.BIT.OTPDTCT
#define FACIEBFULL FACI.FSTATR.BIT.EBFULL
#define FACIFENTRYR FACI.FENTRYR.UINT16
#define FACIFENTRYC FACI.FENTRYR.BIT.FENTRYC
#define FACIFENTRYD FACI.FENTRYR.BIT.FENTRYD
#define FACIFPROTR FACI.FPROTR.UINT16
#define FACIFPROTCN FACI.FPROTR.BIT.FPROTCN
#define FACIFSUINITR FACI.FSUINITR.UINT16
#define FACISUINIT FACI.FSUINITR.BIT.SUINIT
#define FACIFLKSTAT FACI.FLKSTAT.UINT8
#define FACIFLOCKST FACI.FLKSTAT.BIT.FLOCKST
#define FACIFRFSTEADR FACI.FRFSTEADR.UINT32
#define FACIFRTSTAT FACI.FRTSTAT.UINT8
#define FACIRTECRCT FACI.FRTSTAT.BIT.RTECRCT
#define FACIRTEDTCT FACI.FRTSTAT.BIT.RTEDTCT
#define FACIFRTEINT FACI.FRTEINT.UINT8
#define FACIRTECIE FACI.FRTEINT.BIT.RTECIE
#define FACIRTEDIE FACI.FRTEINT.BIT.RTEDIE
#define FACIFCMDR FACI.FCMDR.UINT16
#define FACIPCMDR FACI.FCMDR.BIT.PCMDR
#define FACICMDR FACI.FCMDR.BIT.CMDR
#define FACIFRAMECCR FACI.FRAMECCR.UINT16
#define FACIFRECCSEL FACI.FRAMECCR.BIT.FRECCSEL
#define FACIFRECCDISE FACI.FRAMECCR.BIT.FRECCDISE
#define FACIFPESTAT FACI.FPESTAT.UINT16
#define FACIPEERRST FACI.FPESTAT.BIT.PEERRST
#define FACIFBCCNT FACI.FBCCNT.UINT8
#define FACIBCDIR FACI.FBCCNT.BIT.BCDIR
#define FACIFBCSTAT FACI.FBCSTAT.UINT8
#define FACIBCST FACI.FBCSTAT.BIT.BCST
#define FACIFPSADDR FACI.FPSADDR.UINT32
#define FACIPSADR FACI.FPSADDR.BIT.PSADR
#define FACIFCPSR FACI.FCPSR.UINT16
#define FACIESUSPMD FACI.FCPSR.BIT.ESUSPMD
#define FACIFPCKAR FACI.FPCKAR.UINT16
#define FACIPCKA FACI.FPCKAR.BIT.PCKA
#define FACIFLEMU FACI.FLEMU.UINT8
#define FACIEMSQMD FACI.FLEMU.BIT.EMSQMD
#define FACIERREMU FACI.FLEMU.BIT.ERREMU
#define FACIEMMODE FACI.FLEMU.BIT.EMMODE
#define FACIFLEAD FACI.FLEAD.UINT32
#define FACIFLAPE FACI.FLEAD.BIT.FLAPE
#define FACIFECCEMON FACI.FECCEMON.UINT16
#define FACIFECCM FACI.FECCEMON.BIT.FECCM
#define FACIFAPARM FACI.FECCEMON.BIT.FAPARM
#define FACIFECCTMD FACI.FECCTMD.UINT16
#define FACIECCDISE FACI.FECCTMD.BIT.ECCDISE
#define FACIDECCVE FACI.FECCTMD.BIT.DECCVE
#define FACICECCVE FACI.FECCTMD.BIT.CECCVE
#define FACIFDMYECC FACI.FDMYECC.UINT16
#define FACIDMYECC FACI.FDMYECC.BIT.DMYECC
#define FACIDMYAPAR FACI.FDMYECC.BIT.DMYAPAR
#define FACIFCUFAREA FACI.FCUFAREA.UINT8
#define FACIFCUFSEL FACI.FCUFAREA.BIT.FCUFSEL

#endif
