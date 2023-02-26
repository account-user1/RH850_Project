/**********************************************************************************************************************
* Module File Name  : dma_regs.h
* Module Description: Direct Memory Access Peripheral Registers
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       pznywf %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description														SCR#
* -------   -------  --------  ------------------------------------------------------------------------   -------------
* 12/16/14  1        LWW       Initial version derived from dr7f701311.dvf.h v1 in tools directory
* 09/15/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
* 1/12/16   3        AJM       Updated to account for the DTS registers indexed access						EA4#3245 
* 02/16/16  4        SV        Changed 'CC' to '_CC' to avoid conflict with vector header file definitions  EA4#3900 
**********************************************************************************************************************/

#ifndef DMA_REGS_H
#define DMA_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint32 DMASPD:1;                                       /* DMASPD           */
    uint32 :31;                                            /* Reserved Bits    */
} __type987;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DTSUST:1;                                       /* DTSUST           */
    uint32 :31;                                            /* Reserved Bits    */
} __type988;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DTSTIT:1;                                       /* DTSTIT           */
    uint32 :31;                                            /* Reserved Bits    */
} __type989;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DTSACT:1;                                 /* DTSACT           */
    const uint32 DTSACH:7;                                 /* DTSACH[7:1]      */
    const uint32 DTSCYC:1;                                 /* DTSCYC           */
    uint32 :23;                                            /* Reserved Bits    */
} __type990;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DM0ER:8;                                  /* DM0ER[7:0]       */
    const uint32 DM1ER:8;                                  /* DM1ER[15:8]      */
    uint32 :16;                                            /* Reserved Bits    */
} __type991;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DTSER:1;                                  /* DTSER            */
    const uint32 DTSERWR:1;                                /* DTSERWR          */
    uint32 :6;                                             /* Reserved Bits    */
    const uint32 DTSERCH:7;                                /* DTSERCH[14:8]    */
    uint32 :17;                                            /* Reserved Bits    */
} __type992;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 RAMSECAD:12;                              /* RAMSECAD[11:0]   */
    uint32 :2;                                             /* Reserved Bits    */
    const uint32 RAMSECOV:1;                               /* RAMSECOV         */
    const uint32 RAMSEC:1;                                 /* RAMSEC           */
    const uint32 RAMDEDAD:12;                              /* RAMDEDAD[27:16]  */
    uint32 :2;                                             /* Reserved Bits    */
    const uint32 RAMDEDOV:1;                               /* RAMDEDOV         */
    const uint32 RAMDED:1;                                 /* RAMDED           */
} __type993;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DTSERC:1;                                       /* DTSERC           */
    uint32 :13;                                            /* Reserved Bits    */
    uint32 RAMSECOVC:1;                                    /* RAMSECOVC        */
    uint32 RAMSECC:1;                                      /* RAMSECC          */
    uint32 :14;                                            /* Reserved Bits    */
    uint32 RAMDEDOVC:1;                                    /* RAMDEDOVC        */
    uint32 RAMDEDC:1;                                      /* RAMDEDC          */
} __type994;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 VF:1;                                     /* VF               */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 VCH:3;                                    /* VCH[6:4]         */
    uint32 :10;                                            /* Reserved Bits    */
    const uint32 MINF:6;                                   /* MINF[22:17]      */
    uint32 :9;                                             /* Reserved Bits    */
} __type995;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 VF:1;                                     /* VF               */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 VCH:7;                                    /* VCH[10:4]        */
    uint32 :6;                                             /* Reserved Bits    */
    const uint32 MINF:6;                                   /* MINF[22:17]      */
    uint32 :9;                                             /* Reserved Bits    */
} __type996;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DM0VC:1;                                        /* DM0VC            */
    uint32 DM1VC:1;                                        /* DM1VC            */
    uint32 DTSVC:1;                                        /* DTSVC            */
    uint32 :29;                                            /* Reserved Bits    */
} __type997;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DTS0PR:2;                                       /* DTS0PR[1:0]      */
    uint32 DTS1PR:2;                                       /* DTS1PR[3:2]      */
    uint32 DTS2PR:2;                                       /* DTS2PR[5:4]      */
    uint32 DTS3PR:2;                                       /* DTS3PR[7:6]      */
    uint32 DTS4PR:2;                                       /* DTS4PR[9:8]      */
    uint32 DTS5PR:2;                                       /* DTS5PR[11:10]    */
    uint32 DTS6PR:2;                                       /* DTS6PR[13:12]    */
    uint32 DTS7PR:2;                                       /* DTS7PR[15:14]    */
    uint32 DTS8PR:2;                                       /* DTS8PR[17:16]    */
    uint32 DTS9PR:2;                                       /* DTS9PR[19:18]    */
    uint32 DTS10PR:2;                                      /* DTS10PR[21:20]   */
    uint32 DTS11PR:2;                                      /* DTS11PR[23:22]   */
    uint32 DTS12PR:2;                                      /* DTS12PR[25:24]   */
    uint32 DTS13PR:2;                                      /* DTS13PR[27:26]   */
    uint32 DTS14PR:2;                                      /* DTS14PR[29:28]   */
    uint32 DTS15PR:2;                                      /* DTS15PR[31:30]   */
} __type998;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DTS16PR:2;                                      /* DTS16PR[1:0]     */
    uint32 DTS17PR:2;                                      /* DTS17PR[3:2]     */
    uint32 DTS18PR:2;                                      /* DTS18PR[5:4]     */
    uint32 DTS19PR:2;                                      /* DTS19PR[7:6]     */
    uint32 DTS20PR:2;                                      /* DTS20PR[9:8]     */
    uint32 DTS21PR:2;                                      /* DTS21PR[11:10]   */
    uint32 DTS22PR:2;                                      /* DTS22PR[13:12]   */
    uint32 DTS23PR:2;                                      /* DTS23PR[15:14]   */
    uint32 DTS24PR:2;                                      /* DTS24PR[17:16]   */
    uint32 DTS25PR:2;                                      /* DTS25PR[19:18]   */
    uint32 DTS26PR:2;                                      /* DTS26PR[21:20]   */
    uint32 DTS27PR:2;                                      /* DTS27PR[23:22]   */
    uint32 DTS28PR:2;                                      /* DTS28PR[25:24]   */
    uint32 DTS29PR:2;                                      /* DTS29PR[27:26]   */
    uint32 DTS30PR:2;                                      /* DTS30PR[29:28]   */
    uint32 DTS31PR:2;                                      /* DTS31PR[31:30]   */
} __type999;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DTS32PR:2;                                      /* DTS32PR[1:0]     */
    uint32 DTS33PR:2;                                      /* DTS33PR[3:2]     */
    uint32 DTS34PR:2;                                      /* DTS34PR[5:4]     */
    uint32 DTS35PR:2;                                      /* DTS35PR[7:6]     */
    uint32 DTS36PR:2;                                      /* DTS36PR[9:8]     */
    uint32 DTS37PR:2;                                      /* DTS37PR[11:10]   */
    uint32 DTS38PR:2;                                      /* DTS38PR[13:12]   */
    uint32 DTS39PR:2;                                      /* DTS39PR[15:14]   */
    uint32 DTS40PR:2;                                      /* DTS40PR[17:16]   */
    uint32 DTS41PR:2;                                      /* DTS41PR[19:18]   */
    uint32 DTS42PR:2;                                      /* DTS42PR[21:20]   */
    uint32 DTS43PR:2;                                      /* DTS43PR[23:22]   */
    uint32 DTS44PR:2;                                      /* DTS44PR[25:24]   */
    uint32 DTS45PR:2;                                      /* DTS45PR[27:26]   */
    uint32 DTS46PR:2;                                      /* DTS46PR[29:28]   */
    uint32 DTS47PR:2;                                      /* DTS47PR[31:30]   */
} __type1000;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DTS48PR:2;                                      /* DTS48PR[1:0]     */
    uint32 DTS49PR:2;                                      /* DTS49PR[3:2]     */
    uint32 DTS50PR:2;                                      /* DTS50PR[5:4]     */
    uint32 DTS51PR:2;                                      /* DTS51PR[7:6]     */
    uint32 DTS52PR:2;                                      /* DTS52PR[9:8]     */
    uint32 DTS53PR:2;                                      /* DTS53PR[11:10]   */
    uint32 DTS54PR:2;                                      /* DTS54PR[13:12]   */
    uint32 DTS55PR:2;                                      /* DTS55PR[15:14]   */
    uint32 DTS56PR:2;                                      /* DTS56PR[17:16]   */
    uint32 DTS57PR:2;                                      /* DTS57PR[19:18]   */
    uint32 DTS58PR:2;                                      /* DTS58PR[21:20]   */
    uint32 DTS59PR:2;                                      /* DTS59PR[23:22]   */
    uint32 DTS60PR:2;                                      /* DTS60PR[25:24]   */
    uint32 DTS61PR:2;                                      /* DTS61PR[27:26]   */
    uint32 DTS62PR:2;                                      /* DTS62PR[29:28]   */
    uint32 DTS63PR:2;                                      /* DTS63PR[31:30]   */
} __type1001;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DTS64PR:2;                                      /* DTS64PR[1:0]     */
    uint32 DTS65PR:2;                                      /* DTS65PR[3:2]     */
    uint32 DTS66PR:2;                                      /* DTS66PR[5:4]     */
    uint32 DTS67PR:2;                                      /* DTS67PR[7:6]     */
    uint32 DTS68PR:2;                                      /* DTS68PR[9:8]     */
    uint32 DTS69PR:2;                                      /* DTS69PR[11:10]   */
    uint32 DTS70PR:2;                                      /* DTS70PR[13:12]   */
    uint32 DTS71PR:2;                                      /* DTS71PR[15:14]   */
    uint32 DTS72PR:2;                                      /* DTS72PR[17:16]   */
    uint32 DTS73PR:2;                                      /* DTS73PR[19:18]   */
    uint32 DTS74PR:2;                                      /* DTS74PR[21:20]   */
    uint32 DTS75PR:2;                                      /* DTS75PR[23:22]   */
    uint32 DTS76PR:2;                                      /* DTS76PR[25:24]   */
    uint32 DTS77PR:2;                                      /* DTS77PR[27:26]   */
    uint32 DTS78PR:2;                                      /* DTS78PR[29:28]   */
    uint32 DTS79PR:2;                                      /* DTS79PR[31:30]   */
} __type1002;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DTS80PR:2;                                      /* DTS80PR[1:0]     */
    uint32 DTS81PR:2;                                      /* DTS81PR[3:2]     */
    uint32 DTS82PR:2;                                      /* DTS82PR[5:4]     */
    uint32 DTS83PR:2;                                      /* DTS83PR[7:6]     */
    uint32 DTS84PR:2;                                      /* DTS84PR[9:8]     */
    uint32 DTS85PR:2;                                      /* DTS85PR[11:10]   */
    uint32 DTS86PR:2;                                      /* DTS86PR[13:12]   */
    uint32 DTS87PR:2;                                      /* DTS87PR[15:14]   */
    uint32 DTS88PR:2;                                      /* DTS88PR[17:16]   */
    uint32 DTS89PR:2;                                      /* DTS89PR[19:18]   */
    uint32 DTS90PR:2;                                      /* DTS90PR[21:20]   */
    uint32 DTS91PR:2;                                      /* DTS91PR[23:22]   */
    uint32 DTS92PR:2;                                      /* DTS92PR[25:24]   */
    uint32 DTS93PR:2;                                      /* DTS93PR[27:26]   */
    uint32 DTS94PR:2;                                      /* DTS94PR[29:28]   */
    uint32 DTS95PR:2;                                      /* DTS95PR[31:30]   */
} __type1003;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DTS96PR:2;                                      /* DTS96PR[1:0]     */
    uint32 DTS97PR:2;                                      /* DTS97PR[3:2]     */
    uint32 DTS98PR:2;                                      /* DTS98PR[5:4]     */
    uint32 DTS99PR:2;                                      /* DTS99PR[7:6]     */
    uint32 DTS100PR:2;                                     /* DTS100PR[9:8]    */
    uint32 DTS101PR:2;                                     /* DTS101PR[11:10]  */
    uint32 DTS102PR:2;                                     /* DTS102PR[13:12]  */
    uint32 DTS103PR:2;                                     /* DTS103PR[15:14]  */
    uint32 DTS104PR:2;                                     /* DTS104PR[17:16]  */
    uint32 DTS105PR:2;                                     /* DTS105PR[19:18]  */
    uint32 DTS106PR:2;                                     /* DTS106PR[21:20]  */
    uint32 DTS107PR:2;                                     /* DTS107PR[23:22]  */
    uint32 DTS108PR:2;                                     /* DTS108PR[25:24]  */
    uint32 DTS109PR:2;                                     /* DTS109PR[27:26]  */
    uint32 DTS110PR:2;                                     /* DTS110PR[29:28]  */
    uint32 DTS111PR:2;                                     /* DTS111PR[31:30]  */
} __type1004;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DTS112PR:2;                                     /* DTS112PR[1:0]    */
    uint32 DTS113PR:2;                                     /* DTS113PR[3:2]    */
    uint32 DTS114PR:2;                                     /* DTS114PR[5:4]    */
    uint32 DTS115PR:2;                                     /* DTS115PR[7:6]    */
    uint32 DTS116PR:2;                                     /* DTS116PR[9:8]    */
    uint32 DTS117PR:2;                                     /* DTS117PR[11:10]  */
    uint32 DTS118PR:2;                                     /* DTS118PR[13:12]  */
    uint32 DTS119PR:2;                                     /* DTS119PR[15:14]  */
    uint32 DTS120PR:2;                                     /* DTS120PR[17:16]  */
    uint32 DTS121PR:2;                                     /* DTS121PR[19:18]  */
    uint32 DTS122PR:2;                                     /* DTS122PR[21:20]  */
    uint32 DTS123PR:2;                                     /* DTS123PR[23:22]  */
    uint32 DTS124PR:2;                                     /* DTS124PR[25:24]  */
    uint32 DTS125PR:2;                                     /* DTS125PR[27:26]  */
    uint32 DTS126PR:2;                                     /* DTS126PR[29:28]  */
    uint32 DTS127PR:2;                                     /* DTS127PR[31:30]  */
} __type1005;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ECCDIS:1;                                       /* ECCDIS           */
    uint32 SECDIS:1;                                       /* SECDIS           */
    uint32 :28;                                            /* Reserved Bits    */
    uint32 PROT:2;                                         /* PROT[31:30]      */
} __type1006;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SEDIE:1;                                        /* SEDIE            */
    uint32 DEDIE:1;                                        /* DEDIE            */
    uint32 :30;                                            /* Reserved Bits    */
} __type1007;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DATSEL:1;                                       /* DATSEL           */
    uint32 ECCTST:1;                                       /* ECCTST           */
    uint32 :28;                                            /* Reserved Bits    */
    uint32 PROT:2;                                         /* PROT[31:30]      */
} __type1008;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TWDAT:7;                                        /* TWDAT[6:0]       */
    uint32 :25;                                            /* Reserved Bits    */
} __type1009;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 TRDAT:7;                                  /* TRDAT[6:0]       */
    uint32 :25;                                            /* Reserved Bits    */
} __type1010;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 UM:1;                                           /* UM               */
    uint32 SPID:2;                                         /* SPID[3:2]        */
    uint32 PEID:3;                                         /* PEID[6:4]        */
    uint32 :25;                                            /* Reserved Bits    */
} __type1011;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMC:16;                                         /* CMC[15:0]        */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 UM:1;                                           /* UM               */
    uint32 SPID:2;                                         /* SPID[19:18]      */
    uint32 PEID:3;                                         /* PEID[22:20]      */
    uint32 :9;                                             /* Reserved Bits    */
} __type1012;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SA:32;                                          /* SA[31:0]         */
} __type1013;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DA:32;                                          /* DA[31:0]         */
} __type1014;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TRC:16;                                         /* TRC[15:0]        */
    uint32 ARC:16;                                         /* ARC[31:16]       */
} __type1015;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TRM:2;                                          /* TRM[1:0]         */
    uint32 DS:3;                                           /* DS[4:2]          */
    uint32 SACM:2;                                         /* SACM[6:5]        */
    uint32 DACM:2;                                         /* DACM[8:7]        */
    uint32 RLD1M:2;                                        /* RLD1M[10:9]      */
    uint32 RLD2M:2;                                        /* RLD2M[12:11]     */
    uint32 MLE:1;                                          /* MLE              */
    uint32 TCE:1;                                          /* TCE              */
    uint32 CCE:1;                                          /* CCE              */
    uint32 CHNE:2;                                         /* CHNE[17:16]      */
    uint32 CHNSEL:3;                                       /* CHNSEL[20:18]    */
    uint32 :5;                                             /* Reserved Bits    */
    uint32 DRS:1;                                          /* DRS              */
    uint32 ESE:1;                                          /* ESE              */
    uint32 :4;                                             /* Reserved Bits    */
} __type1016;
typedef struct 
{                                                          /* Bit Access       */
    uint32 RSA:32;                                         /* RSA[31:0]        */
} __type1017;
typedef struct 
{                                                          /* Bit Access       */
    uint32 RDA:32;                                         /* RDA[31:0]        */
} __type1018;
typedef struct 
{                                                          /* Bit Access       */
    uint32 RTRC:16;                                        /* RTRC[15:0]       */
    uint32 RARC:16;                                        /* RARC[31:16]      */
} __type1019;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMC:16;                                         /* CMC[15:0]        */
    uint32 :16;                                            /* Reserved Bits    */
} __type1020;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DTE:1;                                          /* DTE              */
    uint32 :31;                                            /* Reserved Bits    */
} __type1021;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 SR:1;                                     /* SR               */
    const uint32 DR:1;                                     /* DR               */
    uint32 :2;                                             /* Reserved Bits    */
    const uint32 TC:1;                                     /* TC               */
    const uint32 _CC:1;                                    /* CC               */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 ER:1;                                     /* ER               */
    const uint32 CY:1;                                     /* CY               */
    uint32 :2;                                             /* Reserved Bits    */
    const uint32 ERWR:1;                                   /* ERWR             */
    uint32 :20;                                            /* Reserved Bits    */
} __type1022;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SRS:1;                                          /* SRS              */
    uint32 :31;                                            /* Reserved Bits    */
} __type1023;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SRC:1;                                          /* SRC              */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 TCC:1;                                          /* TCC              */
    uint32 CCC:1;                                          /* CCC              */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 ERC:1;                                          /* ERC              */
    uint32 :24;                                            /* Reserved Bits    */
} __type1024;
typedef struct 
{                                                          /* Bit Access       */
    uint32 REQEN:1;                                        /* REQEN            */
    uint32 REQSEL:7;                                       /* REQSEL[7:1]      */
    uint32 :24;                                            /* Reserved Bits    */
} __type1025;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DRQ:1;                                    /* DRQ              */
    uint32 :31;                                            /* Reserved Bits    */
} __type1026;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DRQC:1;                                         /* DRQC             */
    uint32 :31;                                            /* Reserved Bits    */
} __type1027;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TRM:2;                                          /* TRM[1:0]         */
    uint32 DS:3;                                           /* DS[4:2]          */
    uint32 SACM:2;                                         /* SACM[6:5]        */
    uint32 DACM:2;                                         /* DACM[8:7]        */
    uint32 RLD1M:2;                                        /* RLD1M[10:9]      */
    uint32 RLD2M:2;                                        /* RLD2M[12:11]     */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 TCE:1;                                          /* TCE              */
    uint32 CCE:1;                                          /* CCE              */
    uint32 CHNE:2;                                         /* CHNE[17:16]      */
    uint32 CHNSEL:7;                                       /* CHNSEL[24:18]    */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 ESE:1;                                          /* ESE              */
    uint32 :4;                                             /* Reserved Bits    */
} __type1028;
typedef struct 
{                                                          /* Bit Access       */
    uint32 REQEN:1;                                        /* REQEN            */
    uint32 :31;                                            /* Reserved Bits    */
} __type1029;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DRQS:1;                                         /* DRQS             */
    uint32 :31;                                            /* Reserved Bits    */
} __type1030;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type987 BIT;                                         /* Bit Access       */
} __type2268;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type988 BIT;                                         /* Bit Access       */
} __type2269;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type989 BIT;                                         /* Bit Access       */
} __type2270;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type990 BIT;                                   /* Bit Access       */
} __type2271;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type991 BIT;                                   /* Bit Access       */
} __type2272;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type992 BIT;                                   /* Bit Access       */
} __type2273;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type993 BIT;                                   /* Bit Access       */
} __type2274;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type994 BIT;                                         /* Bit Access       */
} __type2275;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type995 BIT;                                   /* Bit Access       */
} __type2276;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type996 BIT;                                   /* Bit Access       */
} __type2277;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type997 BIT;                                         /* Bit Access       */
} __type2278;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type998 BIT;                                         /* Bit Access       */
} __type2279;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type999 BIT;                                         /* Bit Access       */
} __type2280;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1000 BIT;                                        /* Bit Access       */
} __type2281;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1001 BIT;                                        /* Bit Access       */
} __type2282;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1002 BIT;                                        /* Bit Access       */
} __type2283;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1003 BIT;                                        /* Bit Access       */
} __type2284;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1004 BIT;                                        /* Bit Access       */
} __type2285;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1005 BIT;                                        /* Bit Access       */
} __type2286;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1006 BIT;                                        /* Bit Access       */
} __type2287;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1007 BIT;                                        /* Bit Access       */
} __type2288;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1008 BIT;                                        /* Bit Access       */
} __type2289;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1009 BIT;                                        /* Bit Access       */
} __type2290;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type1010 BIT;                                  /* Bit Access       */
} __type2291;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1011 BIT;                                        /* Bit Access       */
} __type2292;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1012 BIT;                                        /* Bit Access       */
} __type2293;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1013 BIT;                                        /* Bit Access       */
} __type2294;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1014 BIT;                                        /* Bit Access       */
} __type2295;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1015 BIT;                                        /* Bit Access       */
} __type2296;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1016 BIT;                                        /* Bit Access       */
} __type2297;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1017 BIT;                                        /* Bit Access       */
} __type2298;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1018 BIT;                                        /* Bit Access       */
} __type2299;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1019 BIT;                                        /* Bit Access       */
} __type2300;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1020 BIT;                                        /* Bit Access       */
} __type2301;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1021 BIT;                                        /* Bit Access       */
} __type2302;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type1022 BIT;                                  /* Bit Access       */
} __type2303;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1023 BIT;                                        /* Bit Access       */
} __type2304;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1024 BIT;                                        /* Bit Access       */
} __type2305;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1025 BIT;                                        /* Bit Access       */
} __type2306;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type1026 BIT;                                  /* Bit Access       */
} __type2307;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1027 BIT;                                        /* Bit Access       */
} __type2308;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1028 BIT;                                        /* Bit Access       */
} __type2309;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1029 BIT;                                        /* Bit Access       */
} __type2310;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type1030 BIT;                                        /* Bit Access       */
} __type2311;

typedef struct 
{                                                          /* Module           */
    __type2268 DMACTL;                                     /* DMACTL           */
    uint8  dummy834[12];                                   /* Reserved         */
    __type2269 DTSCTL1;                                    /* DTSCTL1          */
    __type2270 DTSCTL2;                                    /* DTSCTL2          */
    const __type2271 DTSSTS;                               /* DTSSTS           */
    uint8  dummy835[4];                                    /* Reserved         */
    const __type2272 DMACER;                               /* DMACER           */
    const __type2273 DTSER1;                               /* DTSER1           */
    const __type2274 DTSER2;                               /* DTSER2           */
    __type2275 DTSERC;                                     /* DTSERC           */
    const __type2276 DM0CMV;                               /* DM0CMV           */
    const __type2276 DM1CMV;                               /* DM1CMV           */
    const __type2277 DTSCMV;                               /* DTSCMV           */
    __type2278 CMVC;                                       /* CMVC             */
    uint8  dummy836[32];                                   /* Reserved         */
    __type2279 DTSPR0;                                     /* DTSPR0           */
    __type2280 DTSPR1;                                     /* DTSPR1           */
    __type2281 DTSPR2;                                     /* DTSPR2           */
    __type2282 DTSPR3;                                     /* DTSPR3           */
    __type2283 DTSPR4;                                     /* DTSPR4           */
    __type2284 DTSPR5;                                     /* DTSPR5           */
    __type2285 DTSPR6;                                     /* DTSPR6           */
    __type2286 DTSPR7;                                     /* DTSPR7           */
    __type2287 DTRECCTL;                                   /* DTRECCTL         */
    __type2288 DTRERINT;                                   /* DTRERINT         */
    uint8  dummy837[12];                                   /* Reserved         */
    __type2289 DTRTSCTL;                                   /* DTRTSCTL         */
    __type2290 DTRTWDAT;                                   /* DTRTWDAT         */
    const __type2291 DTRTRDAT;                             /* DTRTRDAT         */
    uint8  dummy838[96];                                   /* Reserved         */
    __type2292 DM00CM;                                     /* DM00CM           */
    __type2292 DM01CM;                                     /* DM01CM           */
    __type2292 DM02CM;                                     /* DM02CM           */
    __type2292 DM03CM;                                     /* DM03CM           */
    __type2292 DM04CM;                                     /* DM04CM           */
    __type2292 DM05CM;                                     /* DM05CM           */
    __type2292 DM06CM;                                     /* DM06CM           */
    __type2292 DM07CM;                                     /* DM07CM           */
    __type2292 DM10CM;                                     /* DM10CM           */
    __type2292 DM11CM;                                     /* DM11CM           */
    __type2292 DM12CM;                                     /* DM12CM           */
    __type2292 DM13CM;                                     /* DM13CM           */
    __type2292 DM14CM;                                     /* DM14CM           */
    __type2292 DM15CM;                                     /* DM15CM           */
    __type2292 DM16CM;                                     /* DM16CM           */
    __type2292 DM17CM;                                     /* DM17CM           */
    uint8  dummy839[192];                                  /* Reserved         */
    __type2293 DTS000CM;                                   /* DTS000CM         */
    __type2293 DTS001CM;                                   /* DTS001CM         */
    __type2293 DTS002CM;                                   /* DTS002CM         */
    __type2293 DTS003CM;                                   /* DTS003CM         */
    __type2293 DTS004CM;                                   /* DTS004CM         */
    __type2293 DTS005CM;                                   /* DTS005CM         */
    __type2293 DTS006CM;                                   /* DTS006CM         */
    __type2293 DTS007CM;                                   /* DTS007CM         */
    __type2293 DTS008CM;                                   /* DTS008CM         */
    __type2293 DTS009CM;                                   /* DTS009CM         */
    __type2293 DTS010CM;                                   /* DTS010CM         */
    __type2293 DTS011CM;                                   /* DTS011CM         */
    __type2293 DTS012CM;                                   /* DTS012CM         */
    __type2293 DTS013CM;                                   /* DTS013CM         */
    __type2293 DTS014CM;                                   /* DTS014CM         */
    __type2293 DTS015CM;                                   /* DTS015CM         */
    __type2293 DTS016CM;                                   /* DTS016CM         */
    __type2293 DTS017CM;                                   /* DTS017CM         */
    __type2293 DTS018CM;                                   /* DTS018CM         */
    __type2293 DTS019CM;                                   /* DTS019CM         */
    __type2293 DTS020CM;                                   /* DTS020CM         */
    __type2293 DTS021CM;                                   /* DTS021CM         */
    __type2293 DTS022CM;                                   /* DTS022CM         */
    __type2293 DTS023CM;                                   /* DTS023CM         */
    __type2293 DTS024CM;                                   /* DTS024CM         */
    __type2293 DTS025CM;                                   /* DTS025CM         */
    __type2293 DTS026CM;                                   /* DTS026CM         */
    __type2293 DTS027CM;                                   /* DTS027CM         */
    __type2293 DTS028CM;                                   /* DTS028CM         */
    __type2293 DTS029CM;                                   /* DTS029CM         */
    __type2293 DTS030CM;                                   /* DTS030CM         */
    __type2293 DTS031CM;                                   /* DTS031CM         */
    __type2293 DTS032CM;                                   /* DTS032CM         */
    __type2293 DTS033CM;                                   /* DTS033CM         */
    __type2293 DTS034CM;                                   /* DTS034CM         */
    __type2293 DTS035CM;                                   /* DTS035CM         */
    __type2293 DTS036CM;                                   /* DTS036CM         */
    __type2293 DTS037CM;                                   /* DTS037CM         */
    __type2293 DTS038CM;                                   /* DTS038CM         */
    __type2293 DTS039CM;                                   /* DTS039CM         */
    __type2293 DTS040CM;                                   /* DTS040CM         */
    __type2293 DTS041CM;                                   /* DTS041CM         */
    __type2293 DTS042CM;                                   /* DTS042CM         */
    __type2293 DTS043CM;                                   /* DTS043CM         */
    __type2293 DTS044CM;                                   /* DTS044CM         */
    __type2293 DTS045CM;                                   /* DTS045CM         */
    __type2293 DTS046CM;                                   /* DTS046CM         */
    __type2293 DTS047CM;                                   /* DTS047CM         */
    __type2293 DTS048CM;                                   /* DTS048CM         */
    __type2293 DTS049CM;                                   /* DTS049CM         */
    __type2293 DTS050CM;                                   /* DTS050CM         */
    __type2293 DTS051CM;                                   /* DTS051CM         */
    __type2293 DTS052CM;                                   /* DTS052CM         */
    __type2293 DTS053CM;                                   /* DTS053CM         */
    __type2293 DTS054CM;                                   /* DTS054CM         */
    __type2293 DTS055CM;                                   /* DTS055CM         */
    __type2293 DTS056CM;                                   /* DTS056CM         */
    __type2293 DTS057CM;                                   /* DTS057CM         */
    __type2293 DTS058CM;                                   /* DTS058CM         */
    __type2293 DTS059CM;                                   /* DTS059CM         */
    __type2293 DTS060CM;                                   /* DTS060CM         */
    __type2293 DTS061CM;                                   /* DTS061CM         */
    __type2293 DTS062CM;                                   /* DTS062CM         */
    __type2293 DTS063CM;                                   /* DTS063CM         */
    __type2293 DTS064CM;                                   /* DTS064CM         */
    __type2293 DTS065CM;                                   /* DTS065CM         */
    __type2293 DTS066CM;                                   /* DTS066CM         */
    __type2293 DTS067CM;                                   /* DTS067CM         */
    __type2293 DTS068CM;                                   /* DTS068CM         */
    __type2293 DTS069CM;                                   /* DTS069CM         */
    __type2293 DTS070CM;                                   /* DTS070CM         */
    __type2293 DTS071CM;                                   /* DTS071CM         */
    __type2293 DTS072CM;                                   /* DTS072CM         */
    __type2293 DTS073CM;                                   /* DTS073CM         */
    __type2293 DTS074CM;                                   /* DTS074CM         */
    __type2293 DTS075CM;                                   /* DTS075CM         */
    __type2293 DTS076CM;                                   /* DTS076CM         */
    __type2293 DTS077CM;                                   /* DTS077CM         */
    __type2293 DTS078CM;                                   /* DTS078CM         */
    __type2293 DTS079CM;                                   /* DTS079CM         */
    __type2293 DTS080CM;                                   /* DTS080CM         */
    __type2293 DTS081CM;                                   /* DTS081CM         */
    __type2293 DTS082CM;                                   /* DTS082CM         */
    __type2293 DTS083CM;                                   /* DTS083CM         */
    __type2293 DTS084CM;                                   /* DTS084CM         */
    __type2293 DTS085CM;                                   /* DTS085CM         */
    __type2293 DTS086CM;                                   /* DTS086CM         */
    __type2293 DTS087CM;                                   /* DTS087CM         */
    __type2293 DTS088CM;                                   /* DTS088CM         */
    __type2293 DTS089CM;                                   /* DTS089CM         */
    __type2293 DTS090CM;                                   /* DTS090CM         */
    __type2293 DTS091CM;                                   /* DTS091CM         */
    __type2293 DTS092CM;                                   /* DTS092CM         */
    __type2293 DTS093CM;                                   /* DTS093CM         */
    __type2293 DTS094CM;                                   /* DTS094CM         */
    __type2293 DTS095CM;                                   /* DTS095CM         */
    __type2293 DTS096CM;                                   /* DTS096CM         */
    __type2293 DTS097CM;                                   /* DTS097CM         */
    __type2293 DTS098CM;                                   /* DTS098CM         */
    __type2293 DTS099CM;                                   /* DTS099CM         */
    __type2293 DTS100CM;                                   /* DTS100CM         */
    __type2293 DTS101CM;                                   /* DTS101CM         */
    __type2293 DTS102CM;                                   /* DTS102CM         */
    __type2293 DTS103CM;                                   /* DTS103CM         */
    __type2293 DTS104CM;                                   /* DTS104CM         */
    __type2293 DTS105CM;                                   /* DTS105CM         */
    __type2293 DTS106CM;                                   /* DTS106CM         */
    __type2293 DTS107CM;                                   /* DTS107CM         */
    __type2293 DTS108CM;                                   /* DTS108CM         */
    __type2293 DTS109CM;                                   /* DTS109CM         */
    __type2293 DTS110CM;                                   /* DTS110CM         */
    __type2293 DTS111CM;                                   /* DTS111CM         */
    __type2293 DTS112CM;                                   /* DTS112CM         */
    __type2293 DTS113CM;                                   /* DTS113CM         */
    __type2293 DTS114CM;                                   /* DTS114CM         */
    __type2293 DTS115CM;                                   /* DTS115CM         */
    __type2293 DTS116CM;                                   /* DTS116CM         */
    __type2293 DTS117CM;                                   /* DTS117CM         */
    __type2293 DTS118CM;                                   /* DTS118CM         */
    __type2293 DTS119CM;                                   /* DTS119CM         */
    __type2293 DTS120CM;                                   /* DTS120CM         */
    __type2293 DTS121CM;                                   /* DTS121CM         */
    __type2293 DTS122CM;                                   /* DTS122CM         */
    __type2293 DTS123CM;                                   /* DTS123CM         */
    __type2293 DTS124CM;                                   /* DTS124CM         */
    uint8  dummy840[12];                                   /* Reserved         */
    __type2294 DSA0;                                       /* DSA0             */
    __type2295 DDA0;                                       /* DDA0             */
    __type2296 DTC0;                                       /* DTC0             */
    __type2297 DTCT0;                                      /* DTCT0            */
    __type2298 DRSA0;                                      /* DRSA0            */
    __type2299 DRDA0;                                      /* DRDA0            */
    __type2300 DRTC0;                                      /* DRTC0            */
    __type2301 DTCC0;                                      /* DTCC0            */
    __type2302 DCEN0;                                      /* DCEN0            */
    const __type2303 DCST0;                                /* DCST0            */
    __type2304 DCSTS0;                                     /* DCSTS0           */
    __type2305 DCSTC0;                                     /* DCSTC0           */
    __type2306 DTFR0;                                      /* DTFR0            */
    const __type2307 DTFRRQ0;                              /* DTFRRQ0          */
    __type2308 DTFRRQC0;                                   /* DTFRRQC0         */
    uint8  dummy841[4];                                    /* Reserved         */
    __type2294 DSA1;                                       /* DSA1             */
    __type2295 DDA1;                                       /* DDA1             */
    __type2296 DTC1;                                       /* DTC1             */
    __type2297 DTCT1;                                      /* DTCT1            */
    __type2298 DRSA1;                                      /* DRSA1            */
    __type2299 DRDA1;                                      /* DRDA1            */
    __type2300 DRTC1;                                      /* DRTC1            */
    __type2301 DTCC1;                                      /* DTCC1            */
    __type2302 DCEN1;                                      /* DCEN1            */
    const __type2303 DCST1;                                /* DCST1            */
    __type2304 DCSTS1;                                     /* DCSTS1           */
    __type2305 DCSTC1;                                     /* DCSTC1           */
    __type2306 DTFR1;                                      /* DTFR1            */
    const __type2307 DTFRRQ1;                              /* DTFRRQ1          */
    __type2308 DTFRRQC1;                                   /* DTFRRQC1         */
    uint8  dummy842[4];                                    /* Reserved         */
    __type2294 DSA2;                                       /* DSA2             */
    __type2295 DDA2;                                       /* DDA2             */
    __type2296 DTC2;                                       /* DTC2             */
    __type2297 DTCT2;                                      /* DTCT2            */
    __type2298 DRSA2;                                      /* DRSA2            */
    __type2299 DRDA2;                                      /* DRDA2            */
    __type2300 DRTC2;                                      /* DRTC2            */
    __type2301 DTCC2;                                      /* DTCC2            */
    __type2302 DCEN2;                                      /* DCEN2            */
    const __type2303 DCST2;                                /* DCST2            */
    __type2304 DCSTS2;                                     /* DCSTS2           */
    __type2305 DCSTC2;                                     /* DCSTC2           */
    __type2306 DTFR2;                                      /* DTFR2            */
    const __type2307 DTFRRQ2;                              /* DTFRRQ2          */
    __type2308 DTFRRQC2;                                   /* DTFRRQC2         */
    uint8  dummy843[4];                                    /* Reserved         */
    __type2294 DSA3;                                       /* DSA3             */
    __type2295 DDA3;                                       /* DDA3             */
    __type2296 DTC3;                                       /* DTC3             */
    __type2297 DTCT3;                                      /* DTCT3            */
    __type2298 DRSA3;                                      /* DRSA3            */
    __type2299 DRDA3;                                      /* DRDA3            */
    __type2300 DRTC3;                                      /* DRTC3            */
    __type2301 DTCC3;                                      /* DTCC3            */
    __type2302 DCEN3;                                      /* DCEN3            */
    const __type2303 DCST3;                                /* DCST3            */
    __type2304 DCSTS3;                                     /* DCSTS3           */
    __type2305 DCSTC3;                                     /* DCSTC3           */
    __type2306 DTFR3;                                      /* DTFR3            */
    const __type2307 DTFRRQ3;                              /* DTFRRQ3          */
    __type2308 DTFRRQC3;                                   /* DTFRRQC3         */
    uint8  dummy844[4];                                    /* Reserved         */
    __type2294 DSA4;                                       /* DSA4             */
    __type2295 DDA4;                                       /* DDA4             */
    __type2296 DTC4;                                       /* DTC4             */
    __type2297 DTCT4;                                      /* DTCT4            */
    __type2298 DRSA4;                                      /* DRSA4            */
    __type2299 DRDA4;                                      /* DRDA4            */
    __type2300 DRTC4;                                      /* DRTC4            */
    __type2301 DTCC4;                                      /* DTCC4            */
    __type2302 DCEN4;                                      /* DCEN4            */
    const __type2303 DCST4;                                /* DCST4            */
    __type2304 DCSTS4;                                     /* DCSTS4           */
    __type2305 DCSTC4;                                     /* DCSTC4           */
    __type2306 DTFR4;                                      /* DTFR4            */
    const __type2307 DTFRRQ4;                              /* DTFRRQ4          */
    __type2308 DTFRRQC4;                                   /* DTFRRQC4         */
    uint8  dummy845[4];                                    /* Reserved         */
    __type2294 DSA5;                                       /* DSA5             */
    __type2295 DDA5;                                       /* DDA5             */
    __type2296 DTC5;                                       /* DTC5             */
    __type2297 DTCT5;                                      /* DTCT5            */
    __type2298 DRSA5;                                      /* DRSA5            */
    __type2299 DRDA5;                                      /* DRDA5            */
    __type2300 DRTC5;                                      /* DRTC5            */
    __type2301 DTCC5;                                      /* DTCC5            */
    __type2302 DCEN5;                                      /* DCEN5            */
    const __type2303 DCST5;                                /* DCST5            */
    __type2304 DCSTS5;                                     /* DCSTS5           */
    __type2305 DCSTC5;                                     /* DCSTC5           */
    __type2306 DTFR5;                                      /* DTFR5            */
    const __type2307 DTFRRQ5;                              /* DTFRRQ5          */
    __type2308 DTFRRQC5;                                   /* DTFRRQC5         */
    uint8  dummy846[4];                                    /* Reserved         */
    __type2294 DSA6;                                       /* DSA6             */
    __type2295 DDA6;                                       /* DDA6             */
    __type2296 DTC6;                                       /* DTC6             */
    __type2297 DTCT6;                                      /* DTCT6            */
    __type2298 DRSA6;                                      /* DRSA6            */
    __type2299 DRDA6;                                      /* DRDA6            */
    __type2300 DRTC6;                                      /* DRTC6            */
    __type2301 DTCC6;                                      /* DTCC6            */
    __type2302 DCEN6;                                      /* DCEN6            */
    const __type2303 DCST6;                                /* DCST6            */
    __type2304 DCSTS6;                                     /* DCSTS6           */
    __type2305 DCSTC6;                                     /* DCSTC6           */
    __type2306 DTFR6;                                      /* DTFR6            */
    const __type2307 DTFRRQ6;                              /* DTFRRQ6          */
    __type2308 DTFRRQC6;                                   /* DTFRRQC6         */
    uint8  dummy847[4];                                    /* Reserved         */
    __type2294 DSA7;                                       /* DSA7             */
    __type2295 DDA7;                                       /* DDA7             */
    __type2296 DTC7;                                       /* DTC7             */
    __type2297 DTCT7;                                      /* DTCT7            */
    __type2298 DRSA7;                                      /* DRSA7            */
    __type2299 DRDA7;                                      /* DRDA7            */
    __type2300 DRTC7;                                      /* DRTC7            */
    __type2301 DTCC7;                                      /* DTCC7            */
    __type2302 DCEN7;                                      /* DCEN7            */
    const __type2303 DCST7;                                /* DCST7            */
    __type2304 DCSTS7;                                     /* DCSTS7           */
    __type2305 DCSTC7;                                     /* DCSTC7           */
    __type2306 DTFR7;                                      /* DTFR7            */
    const __type2307 DTFRRQ7;                              /* DTFRRQ7          */
    __type2308 DTFRRQC7;                                   /* DTFRRQC7         */
    uint8  dummy848[4];                                    /* Reserved         */
    __type2294 DSA8;                                       /* DSA8             */
    __type2295 DDA8;                                       /* DDA8             */
    __type2296 DTC8;                                       /* DTC8             */
    __type2297 DTCT8;                                      /* DTCT8            */
    __type2298 DRSA8;                                      /* DRSA8            */
    __type2299 DRDA8;                                      /* DRDA8            */
    __type2300 DRTC8;                                      /* DRTC8            */
    __type2301 DTCC8;                                      /* DTCC8            */
    __type2302 DCEN8;                                      /* DCEN8            */
    const __type2303 DCST8;                                /* DCST8            */
    __type2304 DCSTS8;                                     /* DCSTS8           */
    __type2305 DCSTC8;                                     /* DCSTC8           */
    __type2306 DTFR8;                                      /* DTFR8            */
    const __type2307 DTFRRQ8;                              /* DTFRRQ8          */
    __type2308 DTFRRQC8;                                   /* DTFRRQC8         */
    uint8  dummy849[4];                                    /* Reserved         */
    __type2294 DSA9;                                       /* DSA9             */
    __type2295 DDA9;                                       /* DDA9             */
    __type2296 DTC9;                                       /* DTC9             */
    __type2297 DTCT9;                                      /* DTCT9            */
    __type2298 DRSA9;                                      /* DRSA9            */
    __type2299 DRDA9;                                      /* DRDA9            */
    __type2300 DRTC9;                                      /* DRTC9            */
    __type2301 DTCC9;                                      /* DTCC9            */
    __type2302 DCEN9;                                      /* DCEN9            */
    const __type2303 DCST9;                                /* DCST9            */
    __type2304 DCSTS9;                                     /* DCSTS9           */
    __type2305 DCSTC9;                                     /* DCSTC9           */
    __type2306 DTFR9;                                      /* DTFR9            */
    const __type2307 DTFRRQ9;                              /* DTFRRQ9          */
    __type2308 DTFRRQC9;                                   /* DTFRRQC9         */
    uint8  dummy850[4];                                    /* Reserved         */
    __type2294 DSA10;                                      /* DSA10            */
    __type2295 DDA10;                                      /* DDA10            */
    __type2296 DTC10;                                      /* DTC10            */
    __type2297 DTCT10;                                     /* DTCT10           */
    __type2298 DRSA10;                                     /* DRSA10           */
    __type2299 DRDA10;                                     /* DRDA10           */
    __type2300 DRTC10;                                     /* DRTC10           */
    __type2301 DTCC10;                                     /* DTCC10           */
    __type2302 DCEN10;                                     /* DCEN10           */
    const __type2303 DCST10;                               /* DCST10           */
    __type2304 DCSTS10;                                    /* DCSTS10          */
    __type2305 DCSTC10;                                    /* DCSTC10          */
    __type2306 DTFR10;                                     /* DTFR10           */
    const __type2307 DTFRRQ10;                             /* DTFRRQ10         */
    __type2308 DTFRRQC10;                                  /* DTFRRQC10        */
    uint8  dummy851[4];                                    /* Reserved         */
    __type2294 DSA11;                                      /* DSA11            */
    __type2295 DDA11;                                      /* DDA11            */
    __type2296 DTC11;                                      /* DTC11            */
    __type2297 DTCT11;                                     /* DTCT11           */
    __type2298 DRSA11;                                     /* DRSA11           */
    __type2299 DRDA11;                                     /* DRDA11           */
    __type2300 DRTC11;                                     /* DRTC11           */
    __type2301 DTCC11;                                     /* DTCC11           */
    __type2302 DCEN11;                                     /* DCEN11           */
    const __type2303 DCST11;                               /* DCST11           */
    __type2304 DCSTS11;                                    /* DCSTS11          */
    __type2305 DCSTC11;                                    /* DCSTC11          */
    __type2306 DTFR11;                                     /* DTFR11           */
    const __type2307 DTFRRQ11;                             /* DTFRRQ11         */
    __type2308 DTFRRQC11;                                  /* DTFRRQC11        */
    uint8  dummy852[4];                                    /* Reserved         */
    __type2294 DSA12;                                      /* DSA12            */
    __type2295 DDA12;                                      /* DDA12            */
    __type2296 DTC12;                                      /* DTC12            */
    __type2297 DTCT12;                                     /* DTCT12           */
    __type2298 DRSA12;                                     /* DRSA12           */
    __type2299 DRDA12;                                     /* DRDA12           */
    __type2300 DRTC12;                                     /* DRTC12           */
    __type2301 DTCC12;                                     /* DTCC12           */
    __type2302 DCEN12;                                     /* DCEN12           */
    const __type2303 DCST12;                               /* DCST12           */
    __type2304 DCSTS12;                                    /* DCSTS12          */
    __type2305 DCSTC12;                                    /* DCSTC12          */
    __type2306 DTFR12;                                     /* DTFR12           */
    const __type2307 DTFRRQ12;                             /* DTFRRQ12         */
    __type2308 DTFRRQC12;                                  /* DTFRRQC12        */
    uint8  dummy853[4];                                    /* Reserved         */
    __type2294 DSA13;                                      /* DSA13            */
    __type2295 DDA13;                                      /* DDA13            */
    __type2296 DTC13;                                      /* DTC13            */
    __type2297 DTCT13;                                     /* DTCT13           */
    __type2298 DRSA13;                                     /* DRSA13           */
    __type2299 DRDA13;                                     /* DRDA13           */
    __type2300 DRTC13;                                     /* DRTC13           */
    __type2301 DTCC13;                                     /* DTCC13           */
    __type2302 DCEN13;                                     /* DCEN13           */
    const __type2303 DCST13;                               /* DCST13           */
    __type2304 DCSTS13;                                    /* DCSTS13          */
    __type2305 DCSTC13;                                    /* DCSTC13          */
    __type2306 DTFR13;                                     /* DTFR13           */
    const __type2307 DTFRRQ13;                             /* DTFRRQ13         */
    __type2308 DTFRRQC13;                                  /* DTFRRQC13        */
    uint8  dummy854[4];                                    /* Reserved         */
    __type2294 DSA14;                                      /* DSA14            */
    __type2295 DDA14;                                      /* DDA14            */
    __type2296 DTC14;                                      /* DTC14            */
    __type2297 DTCT14;                                     /* DTCT14           */
    __type2298 DRSA14;                                     /* DRSA14           */
    __type2299 DRDA14;                                     /* DRDA14           */
    __type2300 DRTC14;                                     /* DRTC14           */
    __type2301 DTCC14;                                     /* DTCC14           */
    __type2302 DCEN14;                                     /* DCEN14           */
    const __type2303 DCST14;                               /* DCST14           */
    __type2304 DCSTS14;                                    /* DCSTS14          */
    __type2305 DCSTC14;                                    /* DCSTC14          */
    __type2306 DTFR14;                                     /* DTFR14           */
    const __type2307 DTFRRQ14;                             /* DTFRRQ14         */
    __type2308 DTFRRQC14;                                  /* DTFRRQC14        */
    uint8  dummy855[4];                                    /* Reserved         */
    __type2294 DSA15;                                      /* DSA15            */
    __type2295 DDA15;                                      /* DDA15            */
    __type2296 DTC15;                                      /* DTC15            */
    __type2297 DTCT15;                                     /* DTCT15           */
    __type2298 DRSA15;                                     /* DRSA15           */
    __type2299 DRDA15;                                     /* DRDA15           */
    __type2300 DRTC15;                                     /* DRTC15           */
    __type2301 DTCC15;                                     /* DTCC15           */
    __type2302 DCEN15;                                     /* DCEN15           */
    const __type2303 DCST15;                               /* DCST15           */
    __type2304 DCSTS15;                                    /* DCSTS15          */
    __type2305 DCSTC15;                                    /* DCSTC15          */
    __type2306 DTFR15;                                     /* DTFR15           */
    const __type2307 DTFRRQ15;                             /* DTFRRQ15         */
    __type2308 DTFRRQC15;                                  /* DTFRRQC15        */
    uint8  dummy856[2052];                                 /* Reserved         */
    __type2294 DTSA000;                                    /* DTSA000          */
    __type2295 DTDA000;                                    /* DTDA000          */
    __type2296 DTTC000;                                    /* DTTC000          */
    __type2309 DTTCT000;                                   /* DTTCT000         */
    __type2298 DTRSA000;                                   /* DTRSA000         */
    __type2299 DTRDA000;                                   /* DTRDA000         */
    __type2300 DTRTC000;                                   /* DTRTC000         */
    __type2301 DTTCC000;                                   /* DTTCC000         */
    __type2310 DTFSL000;                                   /* DTFSL000         */
    const __type2307 DTFST000;                             /* DTFST000         */
    __type2311 DTFSS000;                                   /* DTFSS000         */
    __type2308 DTFSC000;                                   /* DTFSC000         */
    uint8  dummy857[16];                                   /* Reserved         */
    __type2294 DTSA001;                                    /* DTSA001          */
    __type2295 DTDA001;                                    /* DTDA001          */
    __type2296 DTTC001;                                    /* DTTC001          */
    __type2309 DTTCT001;                                   /* DTTCT001         */
    __type2298 DTRSA001;                                   /* DTRSA001         */
    __type2299 DTRDA001;                                   /* DTRDA001         */
    __type2300 DTRTC001;                                   /* DTRTC001         */
    __type2301 DTTCC001;                                   /* DTTCC001         */
    __type2310 DTFSL001;                                   /* DTFSL001         */
    const __type2307 DTFST001;                             /* DTFST001         */
    __type2311 DTFSS001;                                   /* DTFSS001         */
    __type2308 DTFSC001;                                   /* DTFSC001         */
    uint8  dummy858[16];                                   /* Reserved         */
    __type2294 DTSA002;                                    /* DTSA002          */
    __type2295 DTDA002;                                    /* DTDA002          */
    __type2296 DTTC002;                                    /* DTTC002          */
    __type2309 DTTCT002;                                   /* DTTCT002         */
    __type2298 DTRSA002;                                   /* DTRSA002         */
    __type2299 DTRDA002;                                   /* DTRDA002         */
    __type2300 DTRTC002;                                   /* DTRTC002         */
    __type2301 DTTCC002;                                   /* DTTCC002         */
    __type2310 DTFSL002;                                   /* DTFSL002         */
    const __type2307 DTFST002;                             /* DTFST002         */
    __type2311 DTFSS002;                                   /* DTFSS002         */
    __type2308 DTFSC002;                                   /* DTFSC002         */
    uint8  dummy859[16];                                   /* Reserved         */
    __type2294 DTSA003;                                    /* DTSA003          */
    __type2295 DTDA003;                                    /* DTDA003          */
    __type2296 DTTC003;                                    /* DTTC003          */
    __type2309 DTTCT003;                                   /* DTTCT003         */
    __type2298 DTRSA003;                                   /* DTRSA003         */
    __type2299 DTRDA003;                                   /* DTRDA003         */
    __type2300 DTRTC003;                                   /* DTRTC003         */
    __type2301 DTTCC003;                                   /* DTTCC003         */
    __type2310 DTFSL003;                                   /* DTFSL003         */
    const __type2307 DTFST003;                             /* DTFST003         */
    __type2311 DTFSS003;                                   /* DTFSS003         */
    __type2308 DTFSC003;                                   /* DTFSC003         */
    uint8  dummy860[16];                                   /* Reserved         */
    __type2294 DTSA004;                                    /* DTSA004          */
    __type2295 DTDA004;                                    /* DTDA004          */
    __type2296 DTTC004;                                    /* DTTC004          */
    __type2309 DTTCT004;                                   /* DTTCT004         */
    __type2298 DTRSA004;                                   /* DTRSA004         */
    __type2299 DTRDA004;                                   /* DTRDA004         */
    __type2300 DTRTC004;                                   /* DTRTC004         */
    __type2301 DTTCC004;                                   /* DTTCC004         */
    __type2310 DTFSL004;                                   /* DTFSL004         */
    const __type2307 DTFST004;                             /* DTFST004         */
    __type2311 DTFSS004;                                   /* DTFSS004         */
    __type2308 DTFSC004;                                   /* DTFSC004         */
    uint8  dummy861[16];                                   /* Reserved         */
    __type2294 DTSA005;                                    /* DTSA005          */
    __type2295 DTDA005;                                    /* DTDA005          */
    __type2296 DTTC005;                                    /* DTTC005          */
    __type2309 DTTCT005;                                   /* DTTCT005         */
    __type2298 DTRSA005;                                   /* DTRSA005         */
    __type2299 DTRDA005;                                   /* DTRDA005         */
    __type2300 DTRTC005;                                   /* DTRTC005         */
    __type2301 DTTCC005;                                   /* DTTCC005         */
    __type2310 DTFSL005;                                   /* DTFSL005         */
    const __type2307 DTFST005;                             /* DTFST005         */
    __type2311 DTFSS005;                                   /* DTFSS005         */
    __type2308 DTFSC005;                                   /* DTFSC005         */
    uint8  dummy862[16];                                   /* Reserved         */
    __type2294 DTSA006;                                    /* DTSA006          */
    __type2295 DTDA006;                                    /* DTDA006          */
    __type2296 DTTC006;                                    /* DTTC006          */
    __type2309 DTTCT006;                                   /* DTTCT006         */
    __type2298 DTRSA006;                                   /* DTRSA006         */
    __type2299 DTRDA006;                                   /* DTRDA006         */
    __type2300 DTRTC006;                                   /* DTRTC006         */
    __type2301 DTTCC006;                                   /* DTTCC006         */
    __type2310 DTFSL006;                                   /* DTFSL006         */
    const __type2307 DTFST006;                             /* DTFST006         */
    __type2311 DTFSS006;                                   /* DTFSS006         */
    __type2308 DTFSC006;                                   /* DTFSC006         */
    uint8  dummy863[16];                                   /* Reserved         */
    __type2294 DTSA007;                                    /* DTSA007          */
    __type2295 DTDA007;                                    /* DTDA007          */
    __type2296 DTTC007;                                    /* DTTC007          */
    __type2309 DTTCT007;                                   /* DTTCT007         */
    __type2298 DTRSA007;                                   /* DTRSA007         */
    __type2299 DTRDA007;                                   /* DTRDA007         */
    __type2300 DTRTC007;                                   /* DTRTC007         */
    __type2301 DTTCC007;                                   /* DTTCC007         */
    __type2310 DTFSL007;                                   /* DTFSL007         */
    const __type2307 DTFST007;                             /* DTFST007         */
    __type2311 DTFSS007;                                   /* DTFSS007         */
    __type2308 DTFSC007;                                   /* DTFSC007         */
    uint8  dummy864[16];                                   /* Reserved         */
    __type2294 DTSA008;                                    /* DTSA008          */
    __type2295 DTDA008;                                    /* DTDA008          */
    __type2296 DTTC008;                                    /* DTTC008          */
    __type2309 DTTCT008;                                   /* DTTCT008         */
    __type2298 DTRSA008;                                   /* DTRSA008         */
    __type2299 DTRDA008;                                   /* DTRDA008         */
    __type2300 DTRTC008;                                   /* DTRTC008         */
    __type2301 DTTCC008;                                   /* DTTCC008         */
    __type2310 DTFSL008;                                   /* DTFSL008         */
    const __type2307 DTFST008;                             /* DTFST008         */
    __type2311 DTFSS008;                                   /* DTFSS008         */
    __type2308 DTFSC008;                                   /* DTFSC008         */
    uint8  dummy865[16];                                   /* Reserved         */
    __type2294 DTSA009;                                    /* DTSA009          */
    __type2295 DTDA009;                                    /* DTDA009          */
    __type2296 DTTC009;                                    /* DTTC009          */
    __type2309 DTTCT009;                                   /* DTTCT009         */
    __type2298 DTRSA009;                                   /* DTRSA009         */
    __type2299 DTRDA009;                                   /* DTRDA009         */
    __type2300 DTRTC009;                                   /* DTRTC009         */
    __type2301 DTTCC009;                                   /* DTTCC009         */
    __type2310 DTFSL009;                                   /* DTFSL009         */
    const __type2307 DTFST009;                             /* DTFST009         */
    __type2311 DTFSS009;                                   /* DTFSS009         */
    __type2308 DTFSC009;                                   /* DTFSC009         */
    uint8  dummy866[16];                                   /* Reserved         */
    __type2294 DTSA010;                                    /* DTSA010          */
    __type2295 DTDA010;                                    /* DTDA010          */
    __type2296 DTTC010;                                    /* DTTC010          */
    __type2309 DTTCT010;                                   /* DTTCT010         */
    __type2298 DTRSA010;                                   /* DTRSA010         */
    __type2299 DTRDA010;                                   /* DTRDA010         */
    __type2300 DTRTC010;                                   /* DTRTC010         */
    __type2301 DTTCC010;                                   /* DTTCC010         */
    __type2310 DTFSL010;                                   /* DTFSL010         */
    const __type2307 DTFST010;                             /* DTFST010         */
    __type2311 DTFSS010;                                   /* DTFSS010         */
    __type2308 DTFSC010;                                   /* DTFSC010         */
    uint8  dummy867[16];                                   /* Reserved         */
    __type2294 DTSA011;                                    /* DTSA011          */
    __type2295 DTDA011;                                    /* DTDA011          */
    __type2296 DTTC011;                                    /* DTTC011          */
    __type2309 DTTCT011;                                   /* DTTCT011         */
    __type2298 DTRSA011;                                   /* DTRSA011         */
    __type2299 DTRDA011;                                   /* DTRDA011         */
    __type2300 DTRTC011;                                   /* DTRTC011         */
    __type2301 DTTCC011;                                   /* DTTCC011         */
    __type2310 DTFSL011;                                   /* DTFSL011         */
    const __type2307 DTFST011;                             /* DTFST011         */
    __type2311 DTFSS011;                                   /* DTFSS011         */
    __type2308 DTFSC011;                                   /* DTFSC011         */
    uint8  dummy868[16];                                   /* Reserved         */
    __type2294 DTSA012;                                    /* DTSA012          */
    __type2295 DTDA012;                                    /* DTDA012          */
    __type2296 DTTC012;                                    /* DTTC012          */
    __type2309 DTTCT012;                                   /* DTTCT012         */
    __type2298 DTRSA012;                                   /* DTRSA012         */
    __type2299 DTRDA012;                                   /* DTRDA012         */
    __type2300 DTRTC012;                                   /* DTRTC012         */
    __type2301 DTTCC012;                                   /* DTTCC012         */
    __type2310 DTFSL012;                                   /* DTFSL012         */
    const __type2307 DTFST012;                             /* DTFST012         */
    __type2311 DTFSS012;                                   /* DTFSS012         */
    __type2308 DTFSC012;                                   /* DTFSC012         */
    uint8  dummy869[16];                                   /* Reserved         */
    __type2294 DTSA013;                                    /* DTSA013          */
    __type2295 DTDA013;                                    /* DTDA013          */
    __type2296 DTTC013;                                    /* DTTC013          */
    __type2309 DTTCT013;                                   /* DTTCT013         */
    __type2298 DTRSA013;                                   /* DTRSA013         */
    __type2299 DTRDA013;                                   /* DTRDA013         */
    __type2300 DTRTC013;                                   /* DTRTC013         */
    __type2301 DTTCC013;                                   /* DTTCC013         */
    __type2310 DTFSL013;                                   /* DTFSL013         */
    const __type2307 DTFST013;                             /* DTFST013         */
    __type2311 DTFSS013;                                   /* DTFSS013         */
    __type2308 DTFSC013;                                   /* DTFSC013         */
    uint8  dummy870[16];                                   /* Reserved         */
    __type2294 DTSA014;                                    /* DTSA014          */
    __type2295 DTDA014;                                    /* DTDA014          */
    __type2296 DTTC014;                                    /* DTTC014          */
    __type2309 DTTCT014;                                   /* DTTCT014         */
    __type2298 DTRSA014;                                   /* DTRSA014         */
    __type2299 DTRDA014;                                   /* DTRDA014         */
    __type2300 DTRTC014;                                   /* DTRTC014         */
    __type2301 DTTCC014;                                   /* DTTCC014         */
    __type2310 DTFSL014;                                   /* DTFSL014         */
    const __type2307 DTFST014;                             /* DTFST014         */
    __type2311 DTFSS014;                                   /* DTFSS014         */
    __type2308 DTFSC014;                                   /* DTFSC014         */
    uint8  dummy871[16];                                   /* Reserved         */
    __type2294 DTSA015;                                    /* DTSA015          */
    __type2295 DTDA015;                                    /* DTDA015          */
    __type2296 DTTC015;                                    /* DTTC015          */
    __type2309 DTTCT015;                                   /* DTTCT015         */
    __type2298 DTRSA015;                                   /* DTRSA015         */
    __type2299 DTRDA015;                                   /* DTRDA015         */
    __type2300 DTRTC015;                                   /* DTRTC015         */
    __type2301 DTTCC015;                                   /* DTTCC015         */
    __type2310 DTFSL015;                                   /* DTFSL015         */
    const __type2307 DTFST015;                             /* DTFST015         */
    __type2311 DTFSS015;                                   /* DTFSS015         */
    __type2308 DTFSC015;                                   /* DTFSC015         */
    uint8  dummy872[16];                                   /* Reserved         */
    __type2294 DTSA016;                                    /* DTSA016          */
    __type2295 DTDA016;                                    /* DTDA016          */
    __type2296 DTTC016;                                    /* DTTC016          */
    __type2309 DTTCT016;                                   /* DTTCT016         */
    __type2298 DTRSA016;                                   /* DTRSA016         */
    __type2299 DTRDA016;                                   /* DTRDA016         */
    __type2300 DTRTC016;                                   /* DTRTC016         */
    __type2301 DTTCC016;                                   /* DTTCC016         */
    __type2310 DTFSL016;                                   /* DTFSL016         */
    const __type2307 DTFST016;                             /* DTFST016         */
    __type2311 DTFSS016;                                   /* DTFSS016         */
    __type2308 DTFSC016;                                   /* DTFSC016         */
    uint8  dummy873[16];                                   /* Reserved         */
    __type2294 DTSA017;                                    /* DTSA017          */
    __type2295 DTDA017;                                    /* DTDA017          */
    __type2296 DTTC017;                                    /* DTTC017          */
    __type2309 DTTCT017;                                   /* DTTCT017         */
    __type2298 DTRSA017;                                   /* DTRSA017         */
    __type2299 DTRDA017;                                   /* DTRDA017         */
    __type2300 DTRTC017;                                   /* DTRTC017         */
    __type2301 DTTCC017;                                   /* DTTCC017         */
    __type2310 DTFSL017;                                   /* DTFSL017         */
    const __type2307 DTFST017;                             /* DTFST017         */
    __type2311 DTFSS017;                                   /* DTFSS017         */
    __type2308 DTFSC017;                                   /* DTFSC017         */
    uint8  dummy874[16];                                   /* Reserved         */
    __type2294 DTSA018;                                    /* DTSA018          */
    __type2295 DTDA018;                                    /* DTDA018          */
    __type2296 DTTC018;                                    /* DTTC018          */
    __type2309 DTTCT018;                                   /* DTTCT018         */
    __type2298 DTRSA018;                                   /* DTRSA018         */
    __type2299 DTRDA018;                                   /* DTRDA018         */
    __type2300 DTRTC018;                                   /* DTRTC018         */
    __type2301 DTTCC018;                                   /* DTTCC018         */
    __type2310 DTFSL018;                                   /* DTFSL018         */
    const __type2307 DTFST018;                             /* DTFST018         */
    __type2311 DTFSS018;                                   /* DTFSS018         */
    __type2308 DTFSC018;                                   /* DTFSC018         */
    uint8  dummy875[16];                                   /* Reserved         */
    __type2294 DTSA019;                                    /* DTSA019          */
    __type2295 DTDA019;                                    /* DTDA019          */
    __type2296 DTTC019;                                    /* DTTC019          */
    __type2309 DTTCT019;                                   /* DTTCT019         */
    __type2298 DTRSA019;                                   /* DTRSA019         */
    __type2299 DTRDA019;                                   /* DTRDA019         */
    __type2300 DTRTC019;                                   /* DTRTC019         */
    __type2301 DTTCC019;                                   /* DTTCC019         */
    __type2310 DTFSL019;                                   /* DTFSL019         */
    const __type2307 DTFST019;                             /* DTFST019         */
    __type2311 DTFSS019;                                   /* DTFSS019         */
    __type2308 DTFSC019;                                   /* DTFSC019         */
    uint8  dummy876[16];                                   /* Reserved         */
    __type2294 DTSA020;                                    /* DTSA020          */
    __type2295 DTDA020;                                    /* DTDA020          */
    __type2296 DTTC020;                                    /* DTTC020          */
    __type2309 DTTCT020;                                   /* DTTCT020         */
    __type2298 DTRSA020;                                   /* DTRSA020         */
    __type2299 DTRDA020;                                   /* DTRDA020         */
    __type2300 DTRTC020;                                   /* DTRTC020         */
    __type2301 DTTCC020;                                   /* DTTCC020         */
    __type2310 DTFSL020;                                   /* DTFSL020         */
    const __type2307 DTFST020;                             /* DTFST020         */
    __type2311 DTFSS020;                                   /* DTFSS020         */
    __type2308 DTFSC020;                                   /* DTFSC020         */
    uint8  dummy877[16];                                   /* Reserved         */
    __type2294 DTSA021;                                    /* DTSA021          */
    __type2295 DTDA021;                                    /* DTDA021          */
    __type2296 DTTC021;                                    /* DTTC021          */
    __type2309 DTTCT021;                                   /* DTTCT021         */
    __type2298 DTRSA021;                                   /* DTRSA021         */
    __type2299 DTRDA021;                                   /* DTRDA021         */
    __type2300 DTRTC021;                                   /* DTRTC021         */
    __type2301 DTTCC021;                                   /* DTTCC021         */
    __type2310 DTFSL021;                                   /* DTFSL021         */
    const __type2307 DTFST021;                             /* DTFST021         */
    __type2311 DTFSS021;                                   /* DTFSS021         */
    __type2308 DTFSC021;                                   /* DTFSC021         */
    uint8  dummy878[16];                                   /* Reserved         */
    __type2294 DTSA022;                                    /* DTSA022          */
    __type2295 DTDA022;                                    /* DTDA022          */
    __type2296 DTTC022;                                    /* DTTC022          */
    __type2309 DTTCT022;                                   /* DTTCT022         */
    __type2298 DTRSA022;                                   /* DTRSA022         */
    __type2299 DTRDA022;                                   /* DTRDA022         */
    __type2300 DTRTC022;                                   /* DTRTC022         */
    __type2301 DTTCC022;                                   /* DTTCC022         */
    __type2310 DTFSL022;                                   /* DTFSL022         */
    const __type2307 DTFST022;                             /* DTFST022         */
    __type2311 DTFSS022;                                   /* DTFSS022         */
    __type2308 DTFSC022;                                   /* DTFSC022         */
    uint8  dummy879[16];                                   /* Reserved         */
    __type2294 DTSA023;                                    /* DTSA023          */
    __type2295 DTDA023;                                    /* DTDA023          */
    __type2296 DTTC023;                                    /* DTTC023          */
    __type2309 DTTCT023;                                   /* DTTCT023         */
    __type2298 DTRSA023;                                   /* DTRSA023         */
    __type2299 DTRDA023;                                   /* DTRDA023         */
    __type2300 DTRTC023;                                   /* DTRTC023         */
    __type2301 DTTCC023;                                   /* DTTCC023         */
    __type2310 DTFSL023;                                   /* DTFSL023         */
    const __type2307 DTFST023;                             /* DTFST023         */
    __type2311 DTFSS023;                                   /* DTFSS023         */
    __type2308 DTFSC023;                                   /* DTFSC023         */
    uint8  dummy880[16];                                   /* Reserved         */
    __type2294 DTSA024;                                    /* DTSA024          */
    __type2295 DTDA024;                                    /* DTDA024          */
    __type2296 DTTC024;                                    /* DTTC024          */
    __type2309 DTTCT024;                                   /* DTTCT024         */
    __type2298 DTRSA024;                                   /* DTRSA024         */
    __type2299 DTRDA024;                                   /* DTRDA024         */
    __type2300 DTRTC024;                                   /* DTRTC024         */
    __type2301 DTTCC024;                                   /* DTTCC024         */
    __type2310 DTFSL024;                                   /* DTFSL024         */
    const __type2307 DTFST024;                             /* DTFST024         */
    __type2311 DTFSS024;                                   /* DTFSS024         */
    __type2308 DTFSC024;                                   /* DTFSC024         */
    uint8  dummy881[16];                                   /* Reserved         */
    __type2294 DTSA025;                                    /* DTSA025          */
    __type2295 DTDA025;                                    /* DTDA025          */
    __type2296 DTTC025;                                    /* DTTC025          */
    __type2309 DTTCT025;                                   /* DTTCT025         */
    __type2298 DTRSA025;                                   /* DTRSA025         */
    __type2299 DTRDA025;                                   /* DTRDA025         */
    __type2300 DTRTC025;                                   /* DTRTC025         */
    __type2301 DTTCC025;                                   /* DTTCC025         */
    __type2310 DTFSL025;                                   /* DTFSL025         */
    const __type2307 DTFST025;                             /* DTFST025         */
    __type2311 DTFSS025;                                   /* DTFSS025         */
    __type2308 DTFSC025;                                   /* DTFSC025         */
    uint8  dummy882[16];                                   /* Reserved         */
    __type2294 DTSA026;                                    /* DTSA026          */
    __type2295 DTDA026;                                    /* DTDA026          */
    __type2296 DTTC026;                                    /* DTTC026          */
    __type2309 DTTCT026;                                   /* DTTCT026         */
    __type2298 DTRSA026;                                   /* DTRSA026         */
    __type2299 DTRDA026;                                   /* DTRDA026         */
    __type2300 DTRTC026;                                   /* DTRTC026         */
    __type2301 DTTCC026;                                   /* DTTCC026         */
    __type2310 DTFSL026;                                   /* DTFSL026         */
    const __type2307 DTFST026;                             /* DTFST026         */
    __type2311 DTFSS026;                                   /* DTFSS026         */
    __type2308 DTFSC026;                                   /* DTFSC026         */
    uint8  dummy883[16];                                   /* Reserved         */
    __type2294 DTSA027;                                    /* DTSA027          */
    __type2295 DTDA027;                                    /* DTDA027          */
    __type2296 DTTC027;                                    /* DTTC027          */
    __type2309 DTTCT027;                                   /* DTTCT027         */
    __type2298 DTRSA027;                                   /* DTRSA027         */
    __type2299 DTRDA027;                                   /* DTRDA027         */
    __type2300 DTRTC027;                                   /* DTRTC027         */
    __type2301 DTTCC027;                                   /* DTTCC027         */
    __type2310 DTFSL027;                                   /* DTFSL027         */
    const __type2307 DTFST027;                             /* DTFST027         */
    __type2311 DTFSS027;                                   /* DTFSS027         */
    __type2308 DTFSC027;                                   /* DTFSC027         */
    uint8  dummy884[16];                                   /* Reserved         */
    __type2294 DTSA028;                                    /* DTSA028          */
    __type2295 DTDA028;                                    /* DTDA028          */
    __type2296 DTTC028;                                    /* DTTC028          */
    __type2309 DTTCT028;                                   /* DTTCT028         */
    __type2298 DTRSA028;                                   /* DTRSA028         */
    __type2299 DTRDA028;                                   /* DTRDA028         */
    __type2300 DTRTC028;                                   /* DTRTC028         */
    __type2301 DTTCC028;                                   /* DTTCC028         */
    __type2310 DTFSL028;                                   /* DTFSL028         */
    const __type2307 DTFST028;                             /* DTFST028         */
    __type2311 DTFSS028;                                   /* DTFSS028         */
    __type2308 DTFSC028;                                   /* DTFSC028         */
    uint8  dummy885[16];                                   /* Reserved         */
    __type2294 DTSA029;                                    /* DTSA029          */
    __type2295 DTDA029;                                    /* DTDA029          */
    __type2296 DTTC029;                                    /* DTTC029          */
    __type2309 DTTCT029;                                   /* DTTCT029         */
    __type2298 DTRSA029;                                   /* DTRSA029         */
    __type2299 DTRDA029;                                   /* DTRDA029         */
    __type2300 DTRTC029;                                   /* DTRTC029         */
    __type2301 DTTCC029;                                   /* DTTCC029         */
    __type2310 DTFSL029;                                   /* DTFSL029         */
    const __type2307 DTFST029;                             /* DTFST029         */
    __type2311 DTFSS029;                                   /* DTFSS029         */
    __type2308 DTFSC029;                                   /* DTFSC029         */
    uint8  dummy886[16];                                   /* Reserved         */
    __type2294 DTSA030;                                    /* DTSA030          */
    __type2295 DTDA030;                                    /* DTDA030          */
    __type2296 DTTC030;                                    /* DTTC030          */
    __type2309 DTTCT030;                                   /* DTTCT030         */
    __type2298 DTRSA030;                                   /* DTRSA030         */
    __type2299 DTRDA030;                                   /* DTRDA030         */
    __type2300 DTRTC030;                                   /* DTRTC030         */
    __type2301 DTTCC030;                                   /* DTTCC030         */
    __type2310 DTFSL030;                                   /* DTFSL030         */
    const __type2307 DTFST030;                             /* DTFST030         */
    __type2311 DTFSS030;                                   /* DTFSS030         */
    __type2308 DTFSC030;                                   /* DTFSC030         */
    uint8  dummy887[16];                                   /* Reserved         */
    __type2294 DTSA031;                                    /* DTSA031          */
    __type2295 DTDA031;                                    /* DTDA031          */
    __type2296 DTTC031;                                    /* DTTC031          */
    __type2309 DTTCT031;                                   /* DTTCT031         */
    __type2298 DTRSA031;                                   /* DTRSA031         */
    __type2299 DTRDA031;                                   /* DTRDA031         */
    __type2300 DTRTC031;                                   /* DTRTC031         */
    __type2301 DTTCC031;                                   /* DTTCC031         */
    __type2310 DTFSL031;                                   /* DTFSL031         */
    const __type2307 DTFST031;                             /* DTFST031         */
    __type2311 DTFSS031;                                   /* DTFSS031         */
    __type2308 DTFSC031;                                   /* DTFSC031         */
    uint8  dummy888[16];                                   /* Reserved         */
    __type2294 DTSA032;                                    /* DTSA032          */
    __type2295 DTDA032;                                    /* DTDA032          */
    __type2296 DTTC032;                                    /* DTTC032          */
    __type2309 DTTCT032;                                   /* DTTCT032         */
    __type2298 DTRSA032;                                   /* DTRSA032         */
    __type2299 DTRDA032;                                   /* DTRDA032         */
    __type2300 DTRTC032;                                   /* DTRTC032         */
    __type2301 DTTCC032;                                   /* DTTCC032         */
    __type2310 DTFSL032;                                   /* DTFSL032         */
    const __type2307 DTFST032;                             /* DTFST032         */
    __type2311 DTFSS032;                                   /* DTFSS032         */
    __type2308 DTFSC032;                                   /* DTFSC032         */
    uint8  dummy889[16];                                   /* Reserved         */
    __type2294 DTSA033;                                    /* DTSA033          */
    __type2295 DTDA033;                                    /* DTDA033          */
    __type2296 DTTC033;                                    /* DTTC033          */
    __type2309 DTTCT033;                                   /* DTTCT033         */
    __type2298 DTRSA033;                                   /* DTRSA033         */
    __type2299 DTRDA033;                                   /* DTRDA033         */
    __type2300 DTRTC033;                                   /* DTRTC033         */
    __type2301 DTTCC033;                                   /* DTTCC033         */
    __type2310 DTFSL033;                                   /* DTFSL033         */
    const __type2307 DTFST033;                             /* DTFST033         */
    __type2311 DTFSS033;                                   /* DTFSS033         */
    __type2308 DTFSC033;                                   /* DTFSC033         */
    uint8  dummy890[16];                                   /* Reserved         */
    __type2294 DTSA034;                                    /* DTSA034          */
    __type2295 DTDA034;                                    /* DTDA034          */
    __type2296 DTTC034;                                    /* DTTC034          */
    __type2309 DTTCT034;                                   /* DTTCT034         */
    __type2298 DTRSA034;                                   /* DTRSA034         */
    __type2299 DTRDA034;                                   /* DTRDA034         */
    __type2300 DTRTC034;                                   /* DTRTC034         */
    __type2301 DTTCC034;                                   /* DTTCC034         */
    __type2310 DTFSL034;                                   /* DTFSL034         */
    const __type2307 DTFST034;                             /* DTFST034         */
    __type2311 DTFSS034;                                   /* DTFSS034         */
    __type2308 DTFSC034;                                   /* DTFSC034         */
    uint8  dummy891[16];                                   /* Reserved         */
    __type2294 DTSA035;                                    /* DTSA035          */
    __type2295 DTDA035;                                    /* DTDA035          */
    __type2296 DTTC035;                                    /* DTTC035          */
    __type2309 DTTCT035;                                   /* DTTCT035         */
    __type2298 DTRSA035;                                   /* DTRSA035         */
    __type2299 DTRDA035;                                   /* DTRDA035         */
    __type2300 DTRTC035;                                   /* DTRTC035         */
    __type2301 DTTCC035;                                   /* DTTCC035         */
    __type2310 DTFSL035;                                   /* DTFSL035         */
    const __type2307 DTFST035;                             /* DTFST035         */
    __type2311 DTFSS035;                                   /* DTFSS035         */
    __type2308 DTFSC035;                                   /* DTFSC035         */
    uint8  dummy892[16];                                   /* Reserved         */
    __type2294 DTSA036;                                    /* DTSA036          */
    __type2295 DTDA036;                                    /* DTDA036          */
    __type2296 DTTC036;                                    /* DTTC036          */
    __type2309 DTTCT036;                                   /* DTTCT036         */
    __type2298 DTRSA036;                                   /* DTRSA036         */
    __type2299 DTRDA036;                                   /* DTRDA036         */
    __type2300 DTRTC036;                                   /* DTRTC036         */
    __type2301 DTTCC036;                                   /* DTTCC036         */
    __type2310 DTFSL036;                                   /* DTFSL036         */
    const __type2307 DTFST036;                             /* DTFST036         */
    __type2311 DTFSS036;                                   /* DTFSS036         */
    __type2308 DTFSC036;                                   /* DTFSC036         */
    uint8  dummy893[16];                                   /* Reserved         */
    __type2294 DTSA037;                                    /* DTSA037          */
    __type2295 DTDA037;                                    /* DTDA037          */
    __type2296 DTTC037;                                    /* DTTC037          */
    __type2309 DTTCT037;                                   /* DTTCT037         */
    __type2298 DTRSA037;                                   /* DTRSA037         */
    __type2299 DTRDA037;                                   /* DTRDA037         */
    __type2300 DTRTC037;                                   /* DTRTC037         */
    __type2301 DTTCC037;                                   /* DTTCC037         */
    __type2310 DTFSL037;                                   /* DTFSL037         */
    const __type2307 DTFST037;                             /* DTFST037         */
    __type2311 DTFSS037;                                   /* DTFSS037         */
    __type2308 DTFSC037;                                   /* DTFSC037         */
    uint8  dummy894[16];                                   /* Reserved         */
    __type2294 DTSA038;                                    /* DTSA038          */
    __type2295 DTDA038;                                    /* DTDA038          */
    __type2296 DTTC038;                                    /* DTTC038          */
    __type2309 DTTCT038;                                   /* DTTCT038         */
    __type2298 DTRSA038;                                   /* DTRSA038         */
    __type2299 DTRDA038;                                   /* DTRDA038         */
    __type2300 DTRTC038;                                   /* DTRTC038         */
    __type2301 DTTCC038;                                   /* DTTCC038         */
    __type2310 DTFSL038;                                   /* DTFSL038         */
    const __type2307 DTFST038;                             /* DTFST038         */
    __type2311 DTFSS038;                                   /* DTFSS038         */
    __type2308 DTFSC038;                                   /* DTFSC038         */
    uint8  dummy895[16];                                   /* Reserved         */
    __type2294 DTSA039;                                    /* DTSA039          */
    __type2295 DTDA039;                                    /* DTDA039          */
    __type2296 DTTC039;                                    /* DTTC039          */
    __type2309 DTTCT039;                                   /* DTTCT039         */
    __type2298 DTRSA039;                                   /* DTRSA039         */
    __type2299 DTRDA039;                                   /* DTRDA039         */
    __type2300 DTRTC039;                                   /* DTRTC039         */
    __type2301 DTTCC039;                                   /* DTTCC039         */
    __type2310 DTFSL039;                                   /* DTFSL039         */
    const __type2307 DTFST039;                             /* DTFST039         */
    __type2311 DTFSS039;                                   /* DTFSS039         */
    __type2308 DTFSC039;                                   /* DTFSC039         */
    uint8  dummy896[16];                                   /* Reserved         */
    __type2294 DTSA040;                                    /* DTSA040          */
    __type2295 DTDA040;                                    /* DTDA040          */
    __type2296 DTTC040;                                    /* DTTC040          */
    __type2309 DTTCT040;                                   /* DTTCT040         */
    __type2298 DTRSA040;                                   /* DTRSA040         */
    __type2299 DTRDA040;                                   /* DTRDA040         */
    __type2300 DTRTC040;                                   /* DTRTC040         */
    __type2301 DTTCC040;                                   /* DTTCC040         */
    __type2310 DTFSL040;                                   /* DTFSL040         */
    const __type2307 DTFST040;                             /* DTFST040         */
    __type2311 DTFSS040;                                   /* DTFSS040         */
    __type2308 DTFSC040;                                   /* DTFSC040         */
    uint8  dummy897[16];                                   /* Reserved         */
    __type2294 DTSA041;                                    /* DTSA041          */
    __type2295 DTDA041;                                    /* DTDA041          */
    __type2296 DTTC041;                                    /* DTTC041          */
    __type2309 DTTCT041;                                   /* DTTCT041         */
    __type2298 DTRSA041;                                   /* DTRSA041         */
    __type2299 DTRDA041;                                   /* DTRDA041         */
    __type2300 DTRTC041;                                   /* DTRTC041         */
    __type2301 DTTCC041;                                   /* DTTCC041         */
    __type2310 DTFSL041;                                   /* DTFSL041         */
    const __type2307 DTFST041;                             /* DTFST041         */
    __type2311 DTFSS041;                                   /* DTFSS041         */
    __type2308 DTFSC041;                                   /* DTFSC041         */
    uint8  dummy898[16];                                   /* Reserved         */
    __type2294 DTSA042;                                    /* DTSA042          */
    __type2295 DTDA042;                                    /* DTDA042          */
    __type2296 DTTC042;                                    /* DTTC042          */
    __type2309 DTTCT042;                                   /* DTTCT042         */
    __type2298 DTRSA042;                                   /* DTRSA042         */
    __type2299 DTRDA042;                                   /* DTRDA042         */
    __type2300 DTRTC042;                                   /* DTRTC042         */
    __type2301 DTTCC042;                                   /* DTTCC042         */
    __type2310 DTFSL042;                                   /* DTFSL042         */
    const __type2307 DTFST042;                             /* DTFST042         */
    __type2311 DTFSS042;                                   /* DTFSS042         */
    __type2308 DTFSC042;                                   /* DTFSC042         */
    uint8  dummy899[16];                                   /* Reserved         */
    __type2294 DTSA043;                                    /* DTSA043          */
    __type2295 DTDA043;                                    /* DTDA043          */
    __type2296 DTTC043;                                    /* DTTC043          */
    __type2309 DTTCT043;                                   /* DTTCT043         */
    __type2298 DTRSA043;                                   /* DTRSA043         */
    __type2299 DTRDA043;                                   /* DTRDA043         */
    __type2300 DTRTC043;                                   /* DTRTC043         */
    __type2301 DTTCC043;                                   /* DTTCC043         */
    __type2310 DTFSL043;                                   /* DTFSL043         */
    const __type2307 DTFST043;                             /* DTFST043         */
    __type2311 DTFSS043;                                   /* DTFSS043         */
    __type2308 DTFSC043;                                   /* DTFSC043         */
    uint8  dummy900[16];                                   /* Reserved         */
    __type2294 DTSA044;                                    /* DTSA044          */
    __type2295 DTDA044;                                    /* DTDA044          */
    __type2296 DTTC044;                                    /* DTTC044          */
    __type2309 DTTCT044;                                   /* DTTCT044         */
    __type2298 DTRSA044;                                   /* DTRSA044         */
    __type2299 DTRDA044;                                   /* DTRDA044         */
    __type2300 DTRTC044;                                   /* DTRTC044         */
    __type2301 DTTCC044;                                   /* DTTCC044         */
    __type2310 DTFSL044;                                   /* DTFSL044         */
    const __type2307 DTFST044;                             /* DTFST044         */
    __type2311 DTFSS044;                                   /* DTFSS044         */
    __type2308 DTFSC044;                                   /* DTFSC044         */
    uint8  dummy901[16];                                   /* Reserved         */
    __type2294 DTSA045;                                    /* DTSA045          */
    __type2295 DTDA045;                                    /* DTDA045          */
    __type2296 DTTC045;                                    /* DTTC045          */
    __type2309 DTTCT045;                                   /* DTTCT045         */
    __type2298 DTRSA045;                                   /* DTRSA045         */
    __type2299 DTRDA045;                                   /* DTRDA045         */
    __type2300 DTRTC045;                                   /* DTRTC045         */
    __type2301 DTTCC045;                                   /* DTTCC045         */
    __type2310 DTFSL045;                                   /* DTFSL045         */
    const __type2307 DTFST045;                             /* DTFST045         */
    __type2311 DTFSS045;                                   /* DTFSS045         */
    __type2308 DTFSC045;                                   /* DTFSC045         */
    uint8  dummy902[16];                                   /* Reserved         */
    __type2294 DTSA046;                                    /* DTSA046          */
    __type2295 DTDA046;                                    /* DTDA046          */
    __type2296 DTTC046;                                    /* DTTC046          */
    __type2309 DTTCT046;                                   /* DTTCT046         */
    __type2298 DTRSA046;                                   /* DTRSA046         */
    __type2299 DTRDA046;                                   /* DTRDA046         */
    __type2300 DTRTC046;                                   /* DTRTC046         */
    __type2301 DTTCC046;                                   /* DTTCC046         */
    __type2310 DTFSL046;                                   /* DTFSL046         */
    const __type2307 DTFST046;                             /* DTFST046         */
    __type2311 DTFSS046;                                   /* DTFSS046         */
    __type2308 DTFSC046;                                   /* DTFSC046         */
    uint8  dummy903[16];                                   /* Reserved         */
    __type2294 DTSA047;                                    /* DTSA047          */
    __type2295 DTDA047;                                    /* DTDA047          */
    __type2296 DTTC047;                                    /* DTTC047          */
    __type2309 DTTCT047;                                   /* DTTCT047         */
    __type2298 DTRSA047;                                   /* DTRSA047         */
    __type2299 DTRDA047;                                   /* DTRDA047         */
    __type2300 DTRTC047;                                   /* DTRTC047         */
    __type2301 DTTCC047;                                   /* DTTCC047         */
    __type2310 DTFSL047;                                   /* DTFSL047         */
    const __type2307 DTFST047;                             /* DTFST047         */
    __type2311 DTFSS047;                                   /* DTFSS047         */
    __type2308 DTFSC047;                                   /* DTFSC047         */
    uint8  dummy904[16];                                   /* Reserved         */
    __type2294 DTSA048;                                    /* DTSA048          */
    __type2295 DTDA048;                                    /* DTDA048          */
    __type2296 DTTC048;                                    /* DTTC048          */
    __type2309 DTTCT048;                                   /* DTTCT048         */
    __type2298 DTRSA048;                                   /* DTRSA048         */
    __type2299 DTRDA048;                                   /* DTRDA048         */
    __type2300 DTRTC048;                                   /* DTRTC048         */
    __type2301 DTTCC048;                                   /* DTTCC048         */
    __type2310 DTFSL048;                                   /* DTFSL048         */
    const __type2307 DTFST048;                             /* DTFST048         */
    __type2311 DTFSS048;                                   /* DTFSS048         */
    __type2308 DTFSC048;                                   /* DTFSC048         */
    uint8  dummy905[16];                                   /* Reserved         */
    __type2294 DTSA049;                                    /* DTSA049          */
    __type2295 DTDA049;                                    /* DTDA049          */
    __type2296 DTTC049;                                    /* DTTC049          */
    __type2309 DTTCT049;                                   /* DTTCT049         */
    __type2298 DTRSA049;                                   /* DTRSA049         */
    __type2299 DTRDA049;                                   /* DTRDA049         */
    __type2300 DTRTC049;                                   /* DTRTC049         */
    __type2301 DTTCC049;                                   /* DTTCC049         */
    __type2310 DTFSL049;                                   /* DTFSL049         */
    const __type2307 DTFST049;                             /* DTFST049         */
    __type2311 DTFSS049;                                   /* DTFSS049         */
    __type2308 DTFSC049;                                   /* DTFSC049         */
    uint8  dummy906[16];                                   /* Reserved         */
    __type2294 DTSA050;                                    /* DTSA050          */
    __type2295 DTDA050;                                    /* DTDA050          */
    __type2296 DTTC050;                                    /* DTTC050          */
    __type2309 DTTCT050;                                   /* DTTCT050         */
    __type2298 DTRSA050;                                   /* DTRSA050         */
    __type2299 DTRDA050;                                   /* DTRDA050         */
    __type2300 DTRTC050;                                   /* DTRTC050         */
    __type2301 DTTCC050;                                   /* DTTCC050         */
    __type2310 DTFSL050;                                   /* DTFSL050         */
    const __type2307 DTFST050;                             /* DTFST050         */
    __type2311 DTFSS050;                                   /* DTFSS050         */
    __type2308 DTFSC050;                                   /* DTFSC050         */
    uint8  dummy907[16];                                   /* Reserved         */
    __type2294 DTSA051;                                    /* DTSA051          */
    __type2295 DTDA051;                                    /* DTDA051          */
    __type2296 DTTC051;                                    /* DTTC051          */
    __type2309 DTTCT051;                                   /* DTTCT051         */
    __type2298 DTRSA051;                                   /* DTRSA051         */
    __type2299 DTRDA051;                                   /* DTRDA051         */
    __type2300 DTRTC051;                                   /* DTRTC051         */
    __type2301 DTTCC051;                                   /* DTTCC051         */
    __type2310 DTFSL051;                                   /* DTFSL051         */
    const __type2307 DTFST051;                             /* DTFST051         */
    __type2311 DTFSS051;                                   /* DTFSS051         */
    __type2308 DTFSC051;                                   /* DTFSC051         */
    uint8  dummy908[16];                                   /* Reserved         */
    __type2294 DTSA052;                                    /* DTSA052          */
    __type2295 DTDA052;                                    /* DTDA052          */
    __type2296 DTTC052;                                    /* DTTC052          */
    __type2309 DTTCT052;                                   /* DTTCT052         */
    __type2298 DTRSA052;                                   /* DTRSA052         */
    __type2299 DTRDA052;                                   /* DTRDA052         */
    __type2300 DTRTC052;                                   /* DTRTC052         */
    __type2301 DTTCC052;                                   /* DTTCC052         */
    __type2310 DTFSL052;                                   /* DTFSL052         */
    const __type2307 DTFST052;                             /* DTFST052         */
    __type2311 DTFSS052;                                   /* DTFSS052         */
    __type2308 DTFSC052;                                   /* DTFSC052         */
    uint8  dummy909[16];                                   /* Reserved         */
    __type2294 DTSA053;                                    /* DTSA053          */
    __type2295 DTDA053;                                    /* DTDA053          */
    __type2296 DTTC053;                                    /* DTTC053          */
    __type2309 DTTCT053;                                   /* DTTCT053         */
    __type2298 DTRSA053;                                   /* DTRSA053         */
    __type2299 DTRDA053;                                   /* DTRDA053         */
    __type2300 DTRTC053;                                   /* DTRTC053         */
    __type2301 DTTCC053;                                   /* DTTCC053         */
    __type2310 DTFSL053;                                   /* DTFSL053         */
    const __type2307 DTFST053;                             /* DTFST053         */
    __type2311 DTFSS053;                                   /* DTFSS053         */
    __type2308 DTFSC053;                                   /* DTFSC053         */
    uint8  dummy910[16];                                   /* Reserved         */
    __type2294 DTSA054;                                    /* DTSA054          */
    __type2295 DTDA054;                                    /* DTDA054          */
    __type2296 DTTC054;                                    /* DTTC054          */
    __type2309 DTTCT054;                                   /* DTTCT054         */
    __type2298 DTRSA054;                                   /* DTRSA054         */
    __type2299 DTRDA054;                                   /* DTRDA054         */
    __type2300 DTRTC054;                                   /* DTRTC054         */
    __type2301 DTTCC054;                                   /* DTTCC054         */
    __type2310 DTFSL054;                                   /* DTFSL054         */
    const __type2307 DTFST054;                             /* DTFST054         */
    __type2311 DTFSS054;                                   /* DTFSS054         */
    __type2308 DTFSC054;                                   /* DTFSC054         */
    uint8  dummy911[16];                                   /* Reserved         */
    __type2294 DTSA055;                                    /* DTSA055          */
    __type2295 DTDA055;                                    /* DTDA055          */
    __type2296 DTTC055;                                    /* DTTC055          */
    __type2309 DTTCT055;                                   /* DTTCT055         */
    __type2298 DTRSA055;                                   /* DTRSA055         */
    __type2299 DTRDA055;                                   /* DTRDA055         */
    __type2300 DTRTC055;                                   /* DTRTC055         */
    __type2301 DTTCC055;                                   /* DTTCC055         */
    __type2310 DTFSL055;                                   /* DTFSL055         */
    const __type2307 DTFST055;                             /* DTFST055         */
    __type2311 DTFSS055;                                   /* DTFSS055         */
    __type2308 DTFSC055;                                   /* DTFSC055         */
    uint8  dummy912[16];                                   /* Reserved         */
    __type2294 DTSA056;                                    /* DTSA056          */
    __type2295 DTDA056;                                    /* DTDA056          */
    __type2296 DTTC056;                                    /* DTTC056          */
    __type2309 DTTCT056;                                   /* DTTCT056         */
    __type2298 DTRSA056;                                   /* DTRSA056         */
    __type2299 DTRDA056;                                   /* DTRDA056         */
    __type2300 DTRTC056;                                   /* DTRTC056         */
    __type2301 DTTCC056;                                   /* DTTCC056         */
    __type2310 DTFSL056;                                   /* DTFSL056         */
    const __type2307 DTFST056;                             /* DTFST056         */
    __type2311 DTFSS056;                                   /* DTFSS056         */
    __type2308 DTFSC056;                                   /* DTFSC056         */
    uint8  dummy913[16];                                   /* Reserved         */
    __type2294 DTSA057;                                    /* DTSA057          */
    __type2295 DTDA057;                                    /* DTDA057          */
    __type2296 DTTC057;                                    /* DTTC057          */
    __type2309 DTTCT057;                                   /* DTTCT057         */
    __type2298 DTRSA057;                                   /* DTRSA057         */
    __type2299 DTRDA057;                                   /* DTRDA057         */
    __type2300 DTRTC057;                                   /* DTRTC057         */
    __type2301 DTTCC057;                                   /* DTTCC057         */
    __type2310 DTFSL057;                                   /* DTFSL057         */
    const __type2307 DTFST057;                             /* DTFST057         */
    __type2311 DTFSS057;                                   /* DTFSS057         */
    __type2308 DTFSC057;                                   /* DTFSC057         */
    uint8  dummy914[16];                                   /* Reserved         */
    __type2294 DTSA058;                                    /* DTSA058          */
    __type2295 DTDA058;                                    /* DTDA058          */
    __type2296 DTTC058;                                    /* DTTC058          */
    __type2309 DTTCT058;                                   /* DTTCT058         */
    __type2298 DTRSA058;                                   /* DTRSA058         */
    __type2299 DTRDA058;                                   /* DTRDA058         */
    __type2300 DTRTC058;                                   /* DTRTC058         */
    __type2301 DTTCC058;                                   /* DTTCC058         */
    __type2310 DTFSL058;                                   /* DTFSL058         */
    const __type2307 DTFST058;                             /* DTFST058         */
    __type2311 DTFSS058;                                   /* DTFSS058         */
    __type2308 DTFSC058;                                   /* DTFSC058         */
    uint8  dummy915[16];                                   /* Reserved         */
    __type2294 DTSA059;                                    /* DTSA059          */
    __type2295 DTDA059;                                    /* DTDA059          */
    __type2296 DTTC059;                                    /* DTTC059          */
    __type2309 DTTCT059;                                   /* DTTCT059         */
    __type2298 DTRSA059;                                   /* DTRSA059         */
    __type2299 DTRDA059;                                   /* DTRDA059         */
    __type2300 DTRTC059;                                   /* DTRTC059         */
    __type2301 DTTCC059;                                   /* DTTCC059         */
    __type2310 DTFSL059;                                   /* DTFSL059         */
    const __type2307 DTFST059;                             /* DTFST059         */
    __type2311 DTFSS059;                                   /* DTFSS059         */
    __type2308 DTFSC059;                                   /* DTFSC059         */
    uint8  dummy916[16];                                   /* Reserved         */
    __type2294 DTSA060;                                    /* DTSA060          */
    __type2295 DTDA060;                                    /* DTDA060          */
    __type2296 DTTC060;                                    /* DTTC060          */
    __type2309 DTTCT060;                                   /* DTTCT060         */
    __type2298 DTRSA060;                                   /* DTRSA060         */
    __type2299 DTRDA060;                                   /* DTRDA060         */
    __type2300 DTRTC060;                                   /* DTRTC060         */
    __type2301 DTTCC060;                                   /* DTTCC060         */
    __type2310 DTFSL060;                                   /* DTFSL060         */
    const __type2307 DTFST060;                             /* DTFST060         */
    __type2311 DTFSS060;                                   /* DTFSS060         */
    __type2308 DTFSC060;                                   /* DTFSC060         */
    uint8  dummy917[16];                                   /* Reserved         */
    __type2294 DTSA061;                                    /* DTSA061          */
    __type2295 DTDA061;                                    /* DTDA061          */
    __type2296 DTTC061;                                    /* DTTC061          */
    __type2309 DTTCT061;                                   /* DTTCT061         */
    __type2298 DTRSA061;                                   /* DTRSA061         */
    __type2299 DTRDA061;                                   /* DTRDA061         */
    __type2300 DTRTC061;                                   /* DTRTC061         */
    __type2301 DTTCC061;                                   /* DTTCC061         */
    __type2310 DTFSL061;                                   /* DTFSL061         */
    const __type2307 DTFST061;                             /* DTFST061         */
    __type2311 DTFSS061;                                   /* DTFSS061         */
    __type2308 DTFSC061;                                   /* DTFSC061         */
    uint8  dummy918[16];                                   /* Reserved         */
    __type2294 DTSA062;                                    /* DTSA062          */
    __type2295 DTDA062;                                    /* DTDA062          */
    __type2296 DTTC062;                                    /* DTTC062          */
    __type2309 DTTCT062;                                   /* DTTCT062         */
    __type2298 DTRSA062;                                   /* DTRSA062         */
    __type2299 DTRDA062;                                   /* DTRDA062         */
    __type2300 DTRTC062;                                   /* DTRTC062         */
    __type2301 DTTCC062;                                   /* DTTCC062         */
    __type2310 DTFSL062;                                   /* DTFSL062         */
    const __type2307 DTFST062;                             /* DTFST062         */
    __type2311 DTFSS062;                                   /* DTFSS062         */
    __type2308 DTFSC062;                                   /* DTFSC062         */
    uint8  dummy919[16];                                   /* Reserved         */
    __type2294 DTSA063;                                    /* DTSA063          */
    __type2295 DTDA063;                                    /* DTDA063          */
    __type2296 DTTC063;                                    /* DTTC063          */
    __type2309 DTTCT063;                                   /* DTTCT063         */
    __type2298 DTRSA063;                                   /* DTRSA063         */
    __type2299 DTRDA063;                                   /* DTRDA063         */
    __type2300 DTRTC063;                                   /* DTRTC063         */
    __type2301 DTTCC063;                                   /* DTTCC063         */
    __type2310 DTFSL063;                                   /* DTFSL063         */
    const __type2307 DTFST063;                             /* DTFST063         */
    __type2311 DTFSS063;                                   /* DTFSS063         */
    __type2308 DTFSC063;                                   /* DTFSC063         */
    uint8  dummy920[16];                                   /* Reserved         */
    __type2294 DTSA064;                                    /* DTSA064          */
    __type2295 DTDA064;                                    /* DTDA064          */
    __type2296 DTTC064;                                    /* DTTC064          */
    __type2309 DTTCT064;                                   /* DTTCT064         */
    __type2298 DTRSA064;                                   /* DTRSA064         */
    __type2299 DTRDA064;                                   /* DTRDA064         */
    __type2300 DTRTC064;                                   /* DTRTC064         */
    __type2301 DTTCC064;                                   /* DTTCC064         */
    __type2310 DTFSL064;                                   /* DTFSL064         */
    const __type2307 DTFST064;                             /* DTFST064         */
    __type2311 DTFSS064;                                   /* DTFSS064         */
    __type2308 DTFSC064;                                   /* DTFSC064         */
    uint8  dummy921[16];                                   /* Reserved         */
    __type2294 DTSA065;                                    /* DTSA065          */
    __type2295 DTDA065;                                    /* DTDA065          */
    __type2296 DTTC065;                                    /* DTTC065          */
    __type2309 DTTCT065;                                   /* DTTCT065         */
    __type2298 DTRSA065;                                   /* DTRSA065         */
    __type2299 DTRDA065;                                   /* DTRDA065         */
    __type2300 DTRTC065;                                   /* DTRTC065         */
    __type2301 DTTCC065;                                   /* DTTCC065         */
    __type2310 DTFSL065;                                   /* DTFSL065         */
    const __type2307 DTFST065;                             /* DTFST065         */
    __type2311 DTFSS065;                                   /* DTFSS065         */
    __type2308 DTFSC065;                                   /* DTFSC065         */
    uint8  dummy922[16];                                   /* Reserved         */
    __type2294 DTSA066;                                    /* DTSA066          */
    __type2295 DTDA066;                                    /* DTDA066          */
    __type2296 DTTC066;                                    /* DTTC066          */
    __type2309 DTTCT066;                                   /* DTTCT066         */
    __type2298 DTRSA066;                                   /* DTRSA066         */
    __type2299 DTRDA066;                                   /* DTRDA066         */
    __type2300 DTRTC066;                                   /* DTRTC066         */
    __type2301 DTTCC066;                                   /* DTTCC066         */
    __type2310 DTFSL066;                                   /* DTFSL066         */
    const __type2307 DTFST066;                             /* DTFST066         */
    __type2311 DTFSS066;                                   /* DTFSS066         */
    __type2308 DTFSC066;                                   /* DTFSC066         */
    uint8  dummy923[16];                                   /* Reserved         */
    __type2294 DTSA067;                                    /* DTSA067          */
    __type2295 DTDA067;                                    /* DTDA067          */
    __type2296 DTTC067;                                    /* DTTC067          */
    __type2309 DTTCT067;                                   /* DTTCT067         */
    __type2298 DTRSA067;                                   /* DTRSA067         */
    __type2299 DTRDA067;                                   /* DTRDA067         */
    __type2300 DTRTC067;                                   /* DTRTC067         */
    __type2301 DTTCC067;                                   /* DTTCC067         */
    __type2310 DTFSL067;                                   /* DTFSL067         */
    const __type2307 DTFST067;                             /* DTFST067         */
    __type2311 DTFSS067;                                   /* DTFSS067         */
    __type2308 DTFSC067;                                   /* DTFSC067         */
    uint8  dummy924[16];                                   /* Reserved         */
    __type2294 DTSA068;                                    /* DTSA068          */
    __type2295 DTDA068;                                    /* DTDA068          */
    __type2296 DTTC068;                                    /* DTTC068          */
    __type2309 DTTCT068;                                   /* DTTCT068         */
    __type2298 DTRSA068;                                   /* DTRSA068         */
    __type2299 DTRDA068;                                   /* DTRDA068         */
    __type2300 DTRTC068;                                   /* DTRTC068         */
    __type2301 DTTCC068;                                   /* DTTCC068         */
    __type2310 DTFSL068;                                   /* DTFSL068         */
    const __type2307 DTFST068;                             /* DTFST068         */
    __type2311 DTFSS068;                                   /* DTFSS068         */
    __type2308 DTFSC068;                                   /* DTFSC068         */
    uint8  dummy925[16];                                   /* Reserved         */
    __type2294 DTSA069;                                    /* DTSA069          */
    __type2295 DTDA069;                                    /* DTDA069          */
    __type2296 DTTC069;                                    /* DTTC069          */
    __type2309 DTTCT069;                                   /* DTTCT069         */
    __type2298 DTRSA069;                                   /* DTRSA069         */
    __type2299 DTRDA069;                                   /* DTRDA069         */
    __type2300 DTRTC069;                                   /* DTRTC069         */
    __type2301 DTTCC069;                                   /* DTTCC069         */
    __type2310 DTFSL069;                                   /* DTFSL069         */
    const __type2307 DTFST069;                             /* DTFST069         */
    __type2311 DTFSS069;                                   /* DTFSS069         */
    __type2308 DTFSC069;                                   /* DTFSC069         */
    uint8  dummy926[16];                                   /* Reserved         */
    __type2294 DTSA070;                                    /* DTSA070          */
    __type2295 DTDA070;                                    /* DTDA070          */
    __type2296 DTTC070;                                    /* DTTC070          */
    __type2309 DTTCT070;                                   /* DTTCT070         */
    __type2298 DTRSA070;                                   /* DTRSA070         */
    __type2299 DTRDA070;                                   /* DTRDA070         */
    __type2300 DTRTC070;                                   /* DTRTC070         */
    __type2301 DTTCC070;                                   /* DTTCC070         */
    __type2310 DTFSL070;                                   /* DTFSL070         */
    const __type2307 DTFST070;                             /* DTFST070         */
    __type2311 DTFSS070;                                   /* DTFSS070         */
    __type2308 DTFSC070;                                   /* DTFSC070         */
    uint8  dummy927[16];                                   /* Reserved         */
    __type2294 DTSA071;                                    /* DTSA071          */
    __type2295 DTDA071;                                    /* DTDA071          */
    __type2296 DTTC071;                                    /* DTTC071          */
    __type2309 DTTCT071;                                   /* DTTCT071         */
    __type2298 DTRSA071;                                   /* DTRSA071         */
    __type2299 DTRDA071;                                   /* DTRDA071         */
    __type2300 DTRTC071;                                   /* DTRTC071         */
    __type2301 DTTCC071;                                   /* DTTCC071         */
    __type2310 DTFSL071;                                   /* DTFSL071         */
    const __type2307 DTFST071;                             /* DTFST071         */
    __type2311 DTFSS071;                                   /* DTFSS071         */
    __type2308 DTFSC071;                                   /* DTFSC071         */
    uint8  dummy928[16];                                   /* Reserved         */
    __type2294 DTSA072;                                    /* DTSA072          */
    __type2295 DTDA072;                                    /* DTDA072          */
    __type2296 DTTC072;                                    /* DTTC072          */
    __type2309 DTTCT072;                                   /* DTTCT072         */
    __type2298 DTRSA072;                                   /* DTRSA072         */
    __type2299 DTRDA072;                                   /* DTRDA072         */
    __type2300 DTRTC072;                                   /* DTRTC072         */
    __type2301 DTTCC072;                                   /* DTTCC072         */
    __type2310 DTFSL072;                                   /* DTFSL072         */
    const __type2307 DTFST072;                             /* DTFST072         */
    __type2311 DTFSS072;                                   /* DTFSS072         */
    __type2308 DTFSC072;                                   /* DTFSC072         */
    uint8  dummy929[16];                                   /* Reserved         */
    __type2294 DTSA073;                                    /* DTSA073          */
    __type2295 DTDA073;                                    /* DTDA073          */
    __type2296 DTTC073;                                    /* DTTC073          */
    __type2309 DTTCT073;                                   /* DTTCT073         */
    __type2298 DTRSA073;                                   /* DTRSA073         */
    __type2299 DTRDA073;                                   /* DTRDA073         */
    __type2300 DTRTC073;                                   /* DTRTC073         */
    __type2301 DTTCC073;                                   /* DTTCC073         */
    __type2310 DTFSL073;                                   /* DTFSL073         */
    const __type2307 DTFST073;                             /* DTFST073         */
    __type2311 DTFSS073;                                   /* DTFSS073         */
    __type2308 DTFSC073;                                   /* DTFSC073         */
    uint8  dummy930[16];                                   /* Reserved         */
    __type2294 DTSA074;                                    /* DTSA074          */
    __type2295 DTDA074;                                    /* DTDA074          */
    __type2296 DTTC074;                                    /* DTTC074          */
    __type2309 DTTCT074;                                   /* DTTCT074         */
    __type2298 DTRSA074;                                   /* DTRSA074         */
    __type2299 DTRDA074;                                   /* DTRDA074         */
    __type2300 DTRTC074;                                   /* DTRTC074         */
    __type2301 DTTCC074;                                   /* DTTCC074         */
    __type2310 DTFSL074;                                   /* DTFSL074         */
    const __type2307 DTFST074;                             /* DTFST074         */
    __type2311 DTFSS074;                                   /* DTFSS074         */
    __type2308 DTFSC074;                                   /* DTFSC074         */
    uint8  dummy931[16];                                   /* Reserved         */
    __type2294 DTSA075;                                    /* DTSA075          */
    __type2295 DTDA075;                                    /* DTDA075          */
    __type2296 DTTC075;                                    /* DTTC075          */
    __type2309 DTTCT075;                                   /* DTTCT075         */
    __type2298 DTRSA075;                                   /* DTRSA075         */
    __type2299 DTRDA075;                                   /* DTRDA075         */
    __type2300 DTRTC075;                                   /* DTRTC075         */
    __type2301 DTTCC075;                                   /* DTTCC075         */
    __type2310 DTFSL075;                                   /* DTFSL075         */
    const __type2307 DTFST075;                             /* DTFST075         */
    __type2311 DTFSS075;                                   /* DTFSS075         */
    __type2308 DTFSC075;                                   /* DTFSC075         */
    uint8  dummy932[16];                                   /* Reserved         */
    __type2294 DTSA076;                                    /* DTSA076          */
    __type2295 DTDA076;                                    /* DTDA076          */
    __type2296 DTTC076;                                    /* DTTC076          */
    __type2309 DTTCT076;                                   /* DTTCT076         */
    __type2298 DTRSA076;                                   /* DTRSA076         */
    __type2299 DTRDA076;                                   /* DTRDA076         */
    __type2300 DTRTC076;                                   /* DTRTC076         */
    __type2301 DTTCC076;                                   /* DTTCC076         */
    __type2310 DTFSL076;                                   /* DTFSL076         */
    const __type2307 DTFST076;                             /* DTFST076         */
    __type2311 DTFSS076;                                   /* DTFSS076         */
    __type2308 DTFSC076;                                   /* DTFSC076         */
    uint8  dummy933[16];                                   /* Reserved         */
    __type2294 DTSA077;                                    /* DTSA077          */
    __type2295 DTDA077;                                    /* DTDA077          */
    __type2296 DTTC077;                                    /* DTTC077          */
    __type2309 DTTCT077;                                   /* DTTCT077         */
    __type2298 DTRSA077;                                   /* DTRSA077         */
    __type2299 DTRDA077;                                   /* DTRDA077         */
    __type2300 DTRTC077;                                   /* DTRTC077         */
    __type2301 DTTCC077;                                   /* DTTCC077         */
    __type2310 DTFSL077;                                   /* DTFSL077         */
    const __type2307 DTFST077;                             /* DTFST077         */
    __type2311 DTFSS077;                                   /* DTFSS077         */
    __type2308 DTFSC077;                                   /* DTFSC077         */
    uint8  dummy934[16];                                   /* Reserved         */
    __type2294 DTSA078;                                    /* DTSA078          */
    __type2295 DTDA078;                                    /* DTDA078          */
    __type2296 DTTC078;                                    /* DTTC078          */
    __type2309 DTTCT078;                                   /* DTTCT078         */
    __type2298 DTRSA078;                                   /* DTRSA078         */
    __type2299 DTRDA078;                                   /* DTRDA078         */
    __type2300 DTRTC078;                                   /* DTRTC078         */
    __type2301 DTTCC078;                                   /* DTTCC078         */
    __type2310 DTFSL078;                                   /* DTFSL078         */
    const __type2307 DTFST078;                             /* DTFST078         */
    __type2311 DTFSS078;                                   /* DTFSS078         */
    __type2308 DTFSC078;                                   /* DTFSC078         */
    uint8  dummy935[16];                                   /* Reserved         */
    __type2294 DTSA079;                                    /* DTSA079          */
    __type2295 DTDA079;                                    /* DTDA079          */
    __type2296 DTTC079;                                    /* DTTC079          */
    __type2309 DTTCT079;                                   /* DTTCT079         */
    __type2298 DTRSA079;                                   /* DTRSA079         */
    __type2299 DTRDA079;                                   /* DTRDA079         */
    __type2300 DTRTC079;                                   /* DTRTC079         */
    __type2301 DTTCC079;                                   /* DTTCC079         */
    __type2310 DTFSL079;                                   /* DTFSL079         */
    const __type2307 DTFST079;                             /* DTFST079         */
    __type2311 DTFSS079;                                   /* DTFSS079         */
    __type2308 DTFSC079;                                   /* DTFSC079         */
    uint8  dummy936[16];                                   /* Reserved         */
    __type2294 DTSA080;                                    /* DTSA080          */
    __type2295 DTDA080;                                    /* DTDA080          */
    __type2296 DTTC080;                                    /* DTTC080          */
    __type2309 DTTCT080;                                   /* DTTCT080         */
    __type2298 DTRSA080;                                   /* DTRSA080         */
    __type2299 DTRDA080;                                   /* DTRDA080         */
    __type2300 DTRTC080;                                   /* DTRTC080         */
    __type2301 DTTCC080;                                   /* DTTCC080         */
    __type2310 DTFSL080;                                   /* DTFSL080         */
    const __type2307 DTFST080;                             /* DTFST080         */
    __type2311 DTFSS080;                                   /* DTFSS080         */
    __type2308 DTFSC080;                                   /* DTFSC080         */
    uint8  dummy937[16];                                   /* Reserved         */
    __type2294 DTSA081;                                    /* DTSA081          */
    __type2295 DTDA081;                                    /* DTDA081          */
    __type2296 DTTC081;                                    /* DTTC081          */
    __type2309 DTTCT081;                                   /* DTTCT081         */
    __type2298 DTRSA081;                                   /* DTRSA081         */
    __type2299 DTRDA081;                                   /* DTRDA081         */
    __type2300 DTRTC081;                                   /* DTRTC081         */
    __type2301 DTTCC081;                                   /* DTTCC081         */
    __type2310 DTFSL081;                                   /* DTFSL081         */
    const __type2307 DTFST081;                             /* DTFST081         */
    __type2311 DTFSS081;                                   /* DTFSS081         */
    __type2308 DTFSC081;                                   /* DTFSC081         */
    uint8  dummy938[16];                                   /* Reserved         */
    __type2294 DTSA082;                                    /* DTSA082          */
    __type2295 DTDA082;                                    /* DTDA082          */
    __type2296 DTTC082;                                    /* DTTC082          */
    __type2309 DTTCT082;                                   /* DTTCT082         */
    __type2298 DTRSA082;                                   /* DTRSA082         */
    __type2299 DTRDA082;                                   /* DTRDA082         */
    __type2300 DTRTC082;                                   /* DTRTC082         */
    __type2301 DTTCC082;                                   /* DTTCC082         */
    __type2310 DTFSL082;                                   /* DTFSL082         */
    const __type2307 DTFST082;                             /* DTFST082         */
    __type2311 DTFSS082;                                   /* DTFSS082         */
    __type2308 DTFSC082;                                   /* DTFSC082         */
    uint8  dummy939[16];                                   /* Reserved         */
    __type2294 DTSA083;                                    /* DTSA083          */
    __type2295 DTDA083;                                    /* DTDA083          */
    __type2296 DTTC083;                                    /* DTTC083          */
    __type2309 DTTCT083;                                   /* DTTCT083         */
    __type2298 DTRSA083;                                   /* DTRSA083         */
    __type2299 DTRDA083;                                   /* DTRDA083         */
    __type2300 DTRTC083;                                   /* DTRTC083         */
    __type2301 DTTCC083;                                   /* DTTCC083         */
    __type2310 DTFSL083;                                   /* DTFSL083         */
    const __type2307 DTFST083;                             /* DTFST083         */
    __type2311 DTFSS083;                                   /* DTFSS083         */
    __type2308 DTFSC083;                                   /* DTFSC083         */
    uint8  dummy940[16];                                   /* Reserved         */
    __type2294 DTSA084;                                    /* DTSA084          */
    __type2295 DTDA084;                                    /* DTDA084          */
    __type2296 DTTC084;                                    /* DTTC084          */
    __type2309 DTTCT084;                                   /* DTTCT084         */
    __type2298 DTRSA084;                                   /* DTRSA084         */
    __type2299 DTRDA084;                                   /* DTRDA084         */
    __type2300 DTRTC084;                                   /* DTRTC084         */
    __type2301 DTTCC084;                                   /* DTTCC084         */
    __type2310 DTFSL084;                                   /* DTFSL084         */
    const __type2307 DTFST084;                             /* DTFST084         */
    __type2311 DTFSS084;                                   /* DTFSS084         */
    __type2308 DTFSC084;                                   /* DTFSC084         */
    uint8  dummy941[16];                                   /* Reserved         */
    __type2294 DTSA085;                                    /* DTSA085          */
    __type2295 DTDA085;                                    /* DTDA085          */
    __type2296 DTTC085;                                    /* DTTC085          */
    __type2309 DTTCT085;                                   /* DTTCT085         */
    __type2298 DTRSA085;                                   /* DTRSA085         */
    __type2299 DTRDA085;                                   /* DTRDA085         */
    __type2300 DTRTC085;                                   /* DTRTC085         */
    __type2301 DTTCC085;                                   /* DTTCC085         */
    __type2310 DTFSL085;                                   /* DTFSL085         */
    const __type2307 DTFST085;                             /* DTFST085         */
    __type2311 DTFSS085;                                   /* DTFSS085         */
    __type2308 DTFSC085;                                   /* DTFSC085         */
    uint8  dummy942[16];                                   /* Reserved         */
    __type2294 DTSA086;                                    /* DTSA086          */
    __type2295 DTDA086;                                    /* DTDA086          */
    __type2296 DTTC086;                                    /* DTTC086          */
    __type2309 DTTCT086;                                   /* DTTCT086         */
    __type2298 DTRSA086;                                   /* DTRSA086         */
    __type2299 DTRDA086;                                   /* DTRDA086         */
    __type2300 DTRTC086;                                   /* DTRTC086         */
    __type2301 DTTCC086;                                   /* DTTCC086         */
    __type2310 DTFSL086;                                   /* DTFSL086         */
    const __type2307 DTFST086;                             /* DTFST086         */
    __type2311 DTFSS086;                                   /* DTFSS086         */
    __type2308 DTFSC086;                                   /* DTFSC086         */
    uint8  dummy943[16];                                   /* Reserved         */
    __type2294 DTSA087;                                    /* DTSA087          */
    __type2295 DTDA087;                                    /* DTDA087          */
    __type2296 DTTC087;                                    /* DTTC087          */
    __type2309 DTTCT087;                                   /* DTTCT087         */
    __type2298 DTRSA087;                                   /* DTRSA087         */
    __type2299 DTRDA087;                                   /* DTRDA087         */
    __type2300 DTRTC087;                                   /* DTRTC087         */
    __type2301 DTTCC087;                                   /* DTTCC087         */
    __type2310 DTFSL087;                                   /* DTFSL087         */
    const __type2307 DTFST087;                             /* DTFST087         */
    __type2311 DTFSS087;                                   /* DTFSS087         */
    __type2308 DTFSC087;                                   /* DTFSC087         */
    uint8  dummy944[16];                                   /* Reserved         */
    __type2294 DTSA088;                                    /* DTSA088          */
    __type2295 DTDA088;                                    /* DTDA088          */
    __type2296 DTTC088;                                    /* DTTC088          */
    __type2309 DTTCT088;                                   /* DTTCT088         */
    __type2298 DTRSA088;                                   /* DTRSA088         */
    __type2299 DTRDA088;                                   /* DTRDA088         */
    __type2300 DTRTC088;                                   /* DTRTC088         */
    __type2301 DTTCC088;                                   /* DTTCC088         */
    __type2310 DTFSL088;                                   /* DTFSL088         */
    const __type2307 DTFST088;                             /* DTFST088         */
    __type2311 DTFSS088;                                   /* DTFSS088         */
    __type2308 DTFSC088;                                   /* DTFSC088         */
    uint8  dummy945[16];                                   /* Reserved         */
    __type2294 DTSA089;                                    /* DTSA089          */
    __type2295 DTDA089;                                    /* DTDA089          */
    __type2296 DTTC089;                                    /* DTTC089          */
    __type2309 DTTCT089;                                   /* DTTCT089         */
    __type2298 DTRSA089;                                   /* DTRSA089         */
    __type2299 DTRDA089;                                   /* DTRDA089         */
    __type2300 DTRTC089;                                   /* DTRTC089         */
    __type2301 DTTCC089;                                   /* DTTCC089         */
    __type2310 DTFSL089;                                   /* DTFSL089         */
    const __type2307 DTFST089;                             /* DTFST089         */
    __type2311 DTFSS089;                                   /* DTFSS089         */
    __type2308 DTFSC089;                                   /* DTFSC089         */
    uint8  dummy946[16];                                   /* Reserved         */
    __type2294 DTSA090;                                    /* DTSA090          */
    __type2295 DTDA090;                                    /* DTDA090          */
    __type2296 DTTC090;                                    /* DTTC090          */
    __type2309 DTTCT090;                                   /* DTTCT090         */
    __type2298 DTRSA090;                                   /* DTRSA090         */
    __type2299 DTRDA090;                                   /* DTRDA090         */
    __type2300 DTRTC090;                                   /* DTRTC090         */
    __type2301 DTTCC090;                                   /* DTTCC090         */
    __type2310 DTFSL090;                                   /* DTFSL090         */
    const __type2307 DTFST090;                             /* DTFST090         */
    __type2311 DTFSS090;                                   /* DTFSS090         */
    __type2308 DTFSC090;                                   /* DTFSC090         */
    uint8  dummy947[16];                                   /* Reserved         */
    __type2294 DTSA091;                                    /* DTSA091          */
    __type2295 DTDA091;                                    /* DTDA091          */
    __type2296 DTTC091;                                    /* DTTC091          */
    __type2309 DTTCT091;                                   /* DTTCT091         */
    __type2298 DTRSA091;                                   /* DTRSA091         */
    __type2299 DTRDA091;                                   /* DTRDA091         */
    __type2300 DTRTC091;                                   /* DTRTC091         */
    __type2301 DTTCC091;                                   /* DTTCC091         */
    __type2310 DTFSL091;                                   /* DTFSL091         */
    const __type2307 DTFST091;                             /* DTFST091         */
    __type2311 DTFSS091;                                   /* DTFSS091         */
    __type2308 DTFSC091;                                   /* DTFSC091         */
    uint8  dummy948[16];                                   /* Reserved         */
    __type2294 DTSA092;                                    /* DTSA092          */
    __type2295 DTDA092;                                    /* DTDA092          */
    __type2296 DTTC092;                                    /* DTTC092          */
    __type2309 DTTCT092;                                   /* DTTCT092         */
    __type2298 DTRSA092;                                   /* DTRSA092         */
    __type2299 DTRDA092;                                   /* DTRDA092         */
    __type2300 DTRTC092;                                   /* DTRTC092         */
    __type2301 DTTCC092;                                   /* DTTCC092         */
    __type2310 DTFSL092;                                   /* DTFSL092         */
    const __type2307 DTFST092;                             /* DTFST092         */
    __type2311 DTFSS092;                                   /* DTFSS092         */
    __type2308 DTFSC092;                                   /* DTFSC092         */
    uint8  dummy949[16];                                   /* Reserved         */
    __type2294 DTSA093;                                    /* DTSA093          */
    __type2295 DTDA093;                                    /* DTDA093          */
    __type2296 DTTC093;                                    /* DTTC093          */
    __type2309 DTTCT093;                                   /* DTTCT093         */
    __type2298 DTRSA093;                                   /* DTRSA093         */
    __type2299 DTRDA093;                                   /* DTRDA093         */
    __type2300 DTRTC093;                                   /* DTRTC093         */
    __type2301 DTTCC093;                                   /* DTTCC093         */
    __type2310 DTFSL093;                                   /* DTFSL093         */
    const __type2307 DTFST093;                             /* DTFST093         */
    __type2311 DTFSS093;                                   /* DTFSS093         */
    __type2308 DTFSC093;                                   /* DTFSC093         */
    uint8  dummy950[16];                                   /* Reserved         */
    __type2294 DTSA094;                                    /* DTSA094          */
    __type2295 DTDA094;                                    /* DTDA094          */
    __type2296 DTTC094;                                    /* DTTC094          */
    __type2309 DTTCT094;                                   /* DTTCT094         */
    __type2298 DTRSA094;                                   /* DTRSA094         */
    __type2299 DTRDA094;                                   /* DTRDA094         */
    __type2300 DTRTC094;                                   /* DTRTC094         */
    __type2301 DTTCC094;                                   /* DTTCC094         */
    __type2310 DTFSL094;                                   /* DTFSL094         */
    const __type2307 DTFST094;                             /* DTFST094         */
    __type2311 DTFSS094;                                   /* DTFSS094         */
    __type2308 DTFSC094;                                   /* DTFSC094         */
    uint8  dummy951[16];                                   /* Reserved         */
    __type2294 DTSA095;                                    /* DTSA095          */
    __type2295 DTDA095;                                    /* DTDA095          */
    __type2296 DTTC095;                                    /* DTTC095          */
    __type2309 DTTCT095;                                   /* DTTCT095         */
    __type2298 DTRSA095;                                   /* DTRSA095         */
    __type2299 DTRDA095;                                   /* DTRDA095         */
    __type2300 DTRTC095;                                   /* DTRTC095         */
    __type2301 DTTCC095;                                   /* DTTCC095         */
    __type2310 DTFSL095;                                   /* DTFSL095         */
    const __type2307 DTFST095;                             /* DTFST095         */
    __type2311 DTFSS095;                                   /* DTFSS095         */
    __type2308 DTFSC095;                                   /* DTFSC095         */
    uint8  dummy952[16];                                   /* Reserved         */
    __type2294 DTSA096;                                    /* DTSA096          */
    __type2295 DTDA096;                                    /* DTDA096          */
    __type2296 DTTC096;                                    /* DTTC096          */
    __type2309 DTTCT096;                                   /* DTTCT096         */
    __type2298 DTRSA096;                                   /* DTRSA096         */
    __type2299 DTRDA096;                                   /* DTRDA096         */
    __type2300 DTRTC096;                                   /* DTRTC096         */
    __type2301 DTTCC096;                                   /* DTTCC096         */
    __type2310 DTFSL096;                                   /* DTFSL096         */
    const __type2307 DTFST096;                             /* DTFST096         */
    __type2311 DTFSS096;                                   /* DTFSS096         */
    __type2308 DTFSC096;                                   /* DTFSC096         */
    uint8  dummy953[16];                                   /* Reserved         */
    __type2294 DTSA097;                                    /* DTSA097          */
    __type2295 DTDA097;                                    /* DTDA097          */
    __type2296 DTTC097;                                    /* DTTC097          */
    __type2309 DTTCT097;                                   /* DTTCT097         */
    __type2298 DTRSA097;                                   /* DTRSA097         */
    __type2299 DTRDA097;                                   /* DTRDA097         */
    __type2300 DTRTC097;                                   /* DTRTC097         */
    __type2301 DTTCC097;                                   /* DTTCC097         */
    __type2310 DTFSL097;                                   /* DTFSL097         */
    const __type2307 DTFST097;                             /* DTFST097         */
    __type2311 DTFSS097;                                   /* DTFSS097         */
    __type2308 DTFSC097;                                   /* DTFSC097         */
    uint8  dummy954[16];                                   /* Reserved         */
    __type2294 DTSA098;                                    /* DTSA098          */
    __type2295 DTDA098;                                    /* DTDA098          */
    __type2296 DTTC098;                                    /* DTTC098          */
    __type2309 DTTCT098;                                   /* DTTCT098         */
    __type2298 DTRSA098;                                   /* DTRSA098         */
    __type2299 DTRDA098;                                   /* DTRDA098         */
    __type2300 DTRTC098;                                   /* DTRTC098         */
    __type2301 DTTCC098;                                   /* DTTCC098         */
    __type2310 DTFSL098;                                   /* DTFSL098         */
    const __type2307 DTFST098;                             /* DTFST098         */
    __type2311 DTFSS098;                                   /* DTFSS098         */
    __type2308 DTFSC098;                                   /* DTFSC098         */
    uint8  dummy955[16];                                   /* Reserved         */
    __type2294 DTSA099;                                    /* DTSA099          */
    __type2295 DTDA099;                                    /* DTDA099          */
    __type2296 DTTC099;                                    /* DTTC099          */
    __type2309 DTTCT099;                                   /* DTTCT099         */
    __type2298 DTRSA099;                                   /* DTRSA099         */
    __type2299 DTRDA099;                                   /* DTRDA099         */
    __type2300 DTRTC099;                                   /* DTRTC099         */
    __type2301 DTTCC099;                                   /* DTTCC099         */
    __type2310 DTFSL099;                                   /* DTFSL099         */
    const __type2307 DTFST099;                             /* DTFST099         */
    __type2311 DTFSS099;                                   /* DTFSS099         */
    __type2308 DTFSC099;                                   /* DTFSC099         */
    uint8  dummy956[16];                                   /* Reserved         */
    __type2294 DTSA100;                                    /* DTSA100          */
    __type2295 DTDA100;                                    /* DTDA100          */
    __type2296 DTTC100;                                    /* DTTC100          */
    __type2309 DTTCT100;                                   /* DTTCT100         */
    __type2298 DTRSA100;                                   /* DTRSA100         */
    __type2299 DTRDA100;                                   /* DTRDA100         */
    __type2300 DTRTC100;                                   /* DTRTC100         */
    __type2301 DTTCC100;                                   /* DTTCC100         */
    __type2310 DTFSL100;                                   /* DTFSL100         */
    const __type2307 DTFST100;                             /* DTFST100         */
    __type2311 DTFSS100;                                   /* DTFSS100         */
    __type2308 DTFSC100;                                   /* DTFSC100         */
    uint8  dummy957[16];                                   /* Reserved         */
    __type2294 DTSA101;                                    /* DTSA101          */
    __type2295 DTDA101;                                    /* DTDA101          */
    __type2296 DTTC101;                                    /* DTTC101          */
    __type2309 DTTCT101;                                   /* DTTCT101         */
    __type2298 DTRSA101;                                   /* DTRSA101         */
    __type2299 DTRDA101;                                   /* DTRDA101         */
    __type2300 DTRTC101;                                   /* DTRTC101         */
    __type2301 DTTCC101;                                   /* DTTCC101         */
    __type2310 DTFSL101;                                   /* DTFSL101         */
    const __type2307 DTFST101;                             /* DTFST101         */
    __type2311 DTFSS101;                                   /* DTFSS101         */
    __type2308 DTFSC101;                                   /* DTFSC101         */
    uint8  dummy958[16];                                   /* Reserved         */
    __type2294 DTSA102;                                    /* DTSA102          */
    __type2295 DTDA102;                                    /* DTDA102          */
    __type2296 DTTC102;                                    /* DTTC102          */
    __type2309 DTTCT102;                                   /* DTTCT102         */
    __type2298 DTRSA102;                                   /* DTRSA102         */
    __type2299 DTRDA102;                                   /* DTRDA102         */
    __type2300 DTRTC102;                                   /* DTRTC102         */
    __type2301 DTTCC102;                                   /* DTTCC102         */
    __type2310 DTFSL102;                                   /* DTFSL102         */
    const __type2307 DTFST102;                             /* DTFST102         */
    __type2311 DTFSS102;                                   /* DTFSS102         */
    __type2308 DTFSC102;                                   /* DTFSC102         */
    uint8  dummy959[16];                                   /* Reserved         */
    __type2294 DTSA103;                                    /* DTSA103          */
    __type2295 DTDA103;                                    /* DTDA103          */
    __type2296 DTTC103;                                    /* DTTC103          */
    __type2309 DTTCT103;                                   /* DTTCT103         */
    __type2298 DTRSA103;                                   /* DTRSA103         */
    __type2299 DTRDA103;                                   /* DTRDA103         */
    __type2300 DTRTC103;                                   /* DTRTC103         */
    __type2301 DTTCC103;                                   /* DTTCC103         */
    __type2310 DTFSL103;                                   /* DTFSL103         */
    const __type2307 DTFST103;                             /* DTFST103         */
    __type2311 DTFSS103;                                   /* DTFSS103         */
    __type2308 DTFSC103;                                   /* DTFSC103         */
    uint8  dummy960[16];                                   /* Reserved         */
    __type2294 DTSA104;                                    /* DTSA104          */
    __type2295 DTDA104;                                    /* DTDA104          */
    __type2296 DTTC104;                                    /* DTTC104          */
    __type2309 DTTCT104;                                   /* DTTCT104         */
    __type2298 DTRSA104;                                   /* DTRSA104         */
    __type2299 DTRDA104;                                   /* DTRDA104         */
    __type2300 DTRTC104;                                   /* DTRTC104         */
    __type2301 DTTCC104;                                   /* DTTCC104         */
    __type2310 DTFSL104;                                   /* DTFSL104         */
    const __type2307 DTFST104;                             /* DTFST104         */
    __type2311 DTFSS104;                                   /* DTFSS104         */
    __type2308 DTFSC104;                                   /* DTFSC104         */
    uint8  dummy961[16];                                   /* Reserved         */
    __type2294 DTSA105;                                    /* DTSA105          */
    __type2295 DTDA105;                                    /* DTDA105          */
    __type2296 DTTC105;                                    /* DTTC105          */
    __type2309 DTTCT105;                                   /* DTTCT105         */
    __type2298 DTRSA105;                                   /* DTRSA105         */
    __type2299 DTRDA105;                                   /* DTRDA105         */
    __type2300 DTRTC105;                                   /* DTRTC105         */
    __type2301 DTTCC105;                                   /* DTTCC105         */
    __type2310 DTFSL105;                                   /* DTFSL105         */
    const __type2307 DTFST105;                             /* DTFST105         */
    __type2311 DTFSS105;                                   /* DTFSS105         */
    __type2308 DTFSC105;                                   /* DTFSC105         */
    uint8  dummy962[16];                                   /* Reserved         */
    __type2294 DTSA106;                                    /* DTSA106          */
    __type2295 DTDA106;                                    /* DTDA106          */
    __type2296 DTTC106;                                    /* DTTC106          */
    __type2309 DTTCT106;                                   /* DTTCT106         */
    __type2298 DTRSA106;                                   /* DTRSA106         */
    __type2299 DTRDA106;                                   /* DTRDA106         */
    __type2300 DTRTC106;                                   /* DTRTC106         */
    __type2301 DTTCC106;                                   /* DTTCC106         */
    __type2310 DTFSL106;                                   /* DTFSL106         */
    const __type2307 DTFST106;                             /* DTFST106         */
    __type2311 DTFSS106;                                   /* DTFSS106         */
    __type2308 DTFSC106;                                   /* DTFSC106         */
    uint8  dummy963[16];                                   /* Reserved         */
    __type2294 DTSA107;                                    /* DTSA107          */
    __type2295 DTDA107;                                    /* DTDA107          */
    __type2296 DTTC107;                                    /* DTTC107          */
    __type2309 DTTCT107;                                   /* DTTCT107         */
    __type2298 DTRSA107;                                   /* DTRSA107         */
    __type2299 DTRDA107;                                   /* DTRDA107         */
    __type2300 DTRTC107;                                   /* DTRTC107         */
    __type2301 DTTCC107;                                   /* DTTCC107         */
    __type2310 DTFSL107;                                   /* DTFSL107         */
    const __type2307 DTFST107;                             /* DTFST107         */
    __type2311 DTFSS107;                                   /* DTFSS107         */
    __type2308 DTFSC107;                                   /* DTFSC107         */
    uint8  dummy964[16];                                   /* Reserved         */
    __type2294 DTSA108;                                    /* DTSA108          */
    __type2295 DTDA108;                                    /* DTDA108          */
    __type2296 DTTC108;                                    /* DTTC108          */
    __type2309 DTTCT108;                                   /* DTTCT108         */
    __type2298 DTRSA108;                                   /* DTRSA108         */
    __type2299 DTRDA108;                                   /* DTRDA108         */
    __type2300 DTRTC108;                                   /* DTRTC108         */
    __type2301 DTTCC108;                                   /* DTTCC108         */
    __type2310 DTFSL108;                                   /* DTFSL108         */
    const __type2307 DTFST108;                             /* DTFST108         */
    __type2311 DTFSS108;                                   /* DTFSS108         */
    __type2308 DTFSC108;                                   /* DTFSC108         */
    uint8  dummy965[16];                                   /* Reserved         */
    __type2294 DTSA109;                                    /* DTSA109          */
    __type2295 DTDA109;                                    /* DTDA109          */
    __type2296 DTTC109;                                    /* DTTC109          */
    __type2309 DTTCT109;                                   /* DTTCT109         */
    __type2298 DTRSA109;                                   /* DTRSA109         */
    __type2299 DTRDA109;                                   /* DTRDA109         */
    __type2300 DTRTC109;                                   /* DTRTC109         */
    __type2301 DTTCC109;                                   /* DTTCC109         */
    __type2310 DTFSL109;                                   /* DTFSL109         */
    const __type2307 DTFST109;                             /* DTFST109         */
    __type2311 DTFSS109;                                   /* DTFSS109         */
    __type2308 DTFSC109;                                   /* DTFSC109         */
    uint8  dummy966[16];                                   /* Reserved         */
    __type2294 DTSA110;                                    /* DTSA110          */
    __type2295 DTDA110;                                    /* DTDA110          */
    __type2296 DTTC110;                                    /* DTTC110          */
    __type2309 DTTCT110;                                   /* DTTCT110         */
    __type2298 DTRSA110;                                   /* DTRSA110         */
    __type2299 DTRDA110;                                   /* DTRDA110         */
    __type2300 DTRTC110;                                   /* DTRTC110         */
    __type2301 DTTCC110;                                   /* DTTCC110         */
    __type2310 DTFSL110;                                   /* DTFSL110         */
    const __type2307 DTFST110;                             /* DTFST110         */
    __type2311 DTFSS110;                                   /* DTFSS110         */
    __type2308 DTFSC110;                                   /* DTFSC110         */
    uint8  dummy967[16];                                   /* Reserved         */
    __type2294 DTSA111;                                    /* DTSA111          */
    __type2295 DTDA111;                                    /* DTDA111          */
    __type2296 DTTC111;                                    /* DTTC111          */
    __type2309 DTTCT111;                                   /* DTTCT111         */
    __type2298 DTRSA111;                                   /* DTRSA111         */
    __type2299 DTRDA111;                                   /* DTRDA111         */
    __type2300 DTRTC111;                                   /* DTRTC111         */
    __type2301 DTTCC111;                                   /* DTTCC111         */
    __type2310 DTFSL111;                                   /* DTFSL111         */
    const __type2307 DTFST111;                             /* DTFST111         */
    __type2311 DTFSS111;                                   /* DTFSS111         */
    __type2308 DTFSC111;                                   /* DTFSC111         */
    uint8  dummy968[16];                                   /* Reserved         */
    __type2294 DTSA112;                                    /* DTSA112          */
    __type2295 DTDA112;                                    /* DTDA112          */
    __type2296 DTTC112;                                    /* DTTC112          */
    __type2309 DTTCT112;                                   /* DTTCT112         */
    __type2298 DTRSA112;                                   /* DTRSA112         */
    __type2299 DTRDA112;                                   /* DTRDA112         */
    __type2300 DTRTC112;                                   /* DTRTC112         */
    __type2301 DTTCC112;                                   /* DTTCC112         */
    __type2310 DTFSL112;                                   /* DTFSL112         */
    const __type2307 DTFST112;                             /* DTFST112         */
    __type2311 DTFSS112;                                   /* DTFSS112         */
    __type2308 DTFSC112;                                   /* DTFSC112         */
    uint8  dummy969[16];                                   /* Reserved         */
    __type2294 DTSA113;                                    /* DTSA113          */
    __type2295 DTDA113;                                    /* DTDA113          */
    __type2296 DTTC113;                                    /* DTTC113          */
    __type2309 DTTCT113;                                   /* DTTCT113         */
    __type2298 DTRSA113;                                   /* DTRSA113         */
    __type2299 DTRDA113;                                   /* DTRDA113         */
    __type2300 DTRTC113;                                   /* DTRTC113         */
    __type2301 DTTCC113;                                   /* DTTCC113         */
    __type2310 DTFSL113;                                   /* DTFSL113         */
    const __type2307 DTFST113;                             /* DTFST113         */
    __type2311 DTFSS113;                                   /* DTFSS113         */
    __type2308 DTFSC113;                                   /* DTFSC113         */
    uint8  dummy970[16];                                   /* Reserved         */
    __type2294 DTSA114;                                    /* DTSA114          */
    __type2295 DTDA114;                                    /* DTDA114          */
    __type2296 DTTC114;                                    /* DTTC114          */
    __type2309 DTTCT114;                                   /* DTTCT114         */
    __type2298 DTRSA114;                                   /* DTRSA114         */
    __type2299 DTRDA114;                                   /* DTRDA114         */
    __type2300 DTRTC114;                                   /* DTRTC114         */
    __type2301 DTTCC114;                                   /* DTTCC114         */
    __type2310 DTFSL114;                                   /* DTFSL114         */
    const __type2307 DTFST114;                             /* DTFST114         */
    __type2311 DTFSS114;                                   /* DTFSS114         */
    __type2308 DTFSC114;                                   /* DTFSC114         */
    uint8  dummy971[16];                                   /* Reserved         */
    __type2294 DTSA115;                                    /* DTSA115          */
    __type2295 DTDA115;                                    /* DTDA115          */
    __type2296 DTTC115;                                    /* DTTC115          */
    __type2309 DTTCT115;                                   /* DTTCT115         */
    __type2298 DTRSA115;                                   /* DTRSA115         */
    __type2299 DTRDA115;                                   /* DTRDA115         */
    __type2300 DTRTC115;                                   /* DTRTC115         */
    __type2301 DTTCC115;                                   /* DTTCC115         */
    __type2310 DTFSL115;                                   /* DTFSL115         */
    const __type2307 DTFST115;                             /* DTFST115         */
    __type2311 DTFSS115;                                   /* DTFSS115         */
    __type2308 DTFSC115;                                   /* DTFSC115         */
    uint8  dummy972[16];                                   /* Reserved         */
    __type2294 DTSA116;                                    /* DTSA116          */
    __type2295 DTDA116;                                    /* DTDA116          */
    __type2296 DTTC116;                                    /* DTTC116          */
    __type2309 DTTCT116;                                   /* DTTCT116         */
    __type2298 DTRSA116;                                   /* DTRSA116         */
    __type2299 DTRDA116;                                   /* DTRDA116         */
    __type2300 DTRTC116;                                   /* DTRTC116         */
    __type2301 DTTCC116;                                   /* DTTCC116         */
    __type2310 DTFSL116;                                   /* DTFSL116         */
    const __type2307 DTFST116;                             /* DTFST116         */
    __type2311 DTFSS116;                                   /* DTFSS116         */
    __type2308 DTFSC116;                                   /* DTFSC116         */
    uint8  dummy973[16];                                   /* Reserved         */
    __type2294 DTSA117;                                    /* DTSA117          */
    __type2295 DTDA117;                                    /* DTDA117          */
    __type2296 DTTC117;                                    /* DTTC117          */
    __type2309 DTTCT117;                                   /* DTTCT117         */
    __type2298 DTRSA117;                                   /* DTRSA117         */
    __type2299 DTRDA117;                                   /* DTRDA117         */
    __type2300 DTRTC117;                                   /* DTRTC117         */
    __type2301 DTTCC117;                                   /* DTTCC117         */
    __type2310 DTFSL117;                                   /* DTFSL117         */
    const __type2307 DTFST117;                             /* DTFST117         */
    __type2311 DTFSS117;                                   /* DTFSS117         */
    __type2308 DTFSC117;                                   /* DTFSC117         */
    uint8  dummy974[16];                                   /* Reserved         */
    __type2294 DTSA118;                                    /* DTSA118          */
    __type2295 DTDA118;                                    /* DTDA118          */
    __type2296 DTTC118;                                    /* DTTC118          */
    __type2309 DTTCT118;                                   /* DTTCT118         */
    __type2298 DTRSA118;                                   /* DTRSA118         */
    __type2299 DTRDA118;                                   /* DTRDA118         */
    __type2300 DTRTC118;                                   /* DTRTC118         */
    __type2301 DTTCC118;                                   /* DTTCC118         */
    __type2310 DTFSL118;                                   /* DTFSL118         */
    const __type2307 DTFST118;                             /* DTFST118         */
    __type2311 DTFSS118;                                   /* DTFSS118         */
    __type2308 DTFSC118;                                   /* DTFSC118         */
    uint8  dummy975[16];                                   /* Reserved         */
    __type2294 DTSA119;                                    /* DTSA119          */
    __type2295 DTDA119;                                    /* DTDA119          */
    __type2296 DTTC119;                                    /* DTTC119          */
    __type2309 DTTCT119;                                   /* DTTCT119         */
    __type2298 DTRSA119;                                   /* DTRSA119         */
    __type2299 DTRDA119;                                   /* DTRDA119         */
    __type2300 DTRTC119;                                   /* DTRTC119         */
    __type2301 DTTCC119;                                   /* DTTCC119         */
    __type2310 DTFSL119;                                   /* DTFSL119         */
    const __type2307 DTFST119;                             /* DTFST119         */
    __type2311 DTFSS119;                                   /* DTFSS119         */
    __type2308 DTFSC119;                                   /* DTFSC119         */
    uint8  dummy976[16];                                   /* Reserved         */
    __type2294 DTSA120;                                    /* DTSA120          */
    __type2295 DTDA120;                                    /* DTDA120          */
    __type2296 DTTC120;                                    /* DTTC120          */
    __type2309 DTTCT120;                                   /* DTTCT120         */
    __type2298 DTRSA120;                                   /* DTRSA120         */
    __type2299 DTRDA120;                                   /* DTRDA120         */
    __type2300 DTRTC120;                                   /* DTRTC120         */
    __type2301 DTTCC120;                                   /* DTTCC120         */
    __type2310 DTFSL120;                                   /* DTFSL120         */
    const __type2307 DTFST120;                             /* DTFST120         */
    __type2311 DTFSS120;                                   /* DTFSS120         */
    __type2308 DTFSC120;                                   /* DTFSC120         */
    uint8  dummy977[16];                                   /* Reserved         */
    __type2294 DTSA121;                                    /* DTSA121          */
    __type2295 DTDA121;                                    /* DTDA121          */
    __type2296 DTTC121;                                    /* DTTC121          */
    __type2309 DTTCT121;                                   /* DTTCT121         */
    __type2298 DTRSA121;                                   /* DTRSA121         */
    __type2299 DTRDA121;                                   /* DTRDA121         */
    __type2300 DTRTC121;                                   /* DTRTC121         */
    __type2301 DTTCC121;                                   /* DTTCC121         */
    __type2310 DTFSL121;                                   /* DTFSL121         */
    const __type2307 DTFST121;                             /* DTFST121         */
    __type2311 DTFSS121;                                   /* DTFSS121         */
    __type2308 DTFSC121;                                   /* DTFSC121         */
    uint8  dummy978[16];                                   /* Reserved         */
    __type2294 DTSA122;                                    /* DTSA122          */
    __type2295 DTDA122;                                    /* DTDA122          */
    __type2296 DTTC122;                                    /* DTTC122          */
    __type2309 DTTCT122;                                   /* DTTCT122         */
    __type2298 DTRSA122;                                   /* DTRSA122         */
    __type2299 DTRDA122;                                   /* DTRDA122         */
    __type2300 DTRTC122;                                   /* DTRTC122         */
    __type2301 DTTCC122;                                   /* DTTCC122         */
    __type2310 DTFSL122;                                   /* DTFSL122         */
    const __type2307 DTFST122;                             /* DTFST122         */
    __type2311 DTFSS122;                                   /* DTFSS122         */
    __type2308 DTFSC122;                                   /* DTFSC122         */
    uint8  dummy979[16];                                   /* Reserved         */
    __type2294 DTSA123;                                    /* DTSA123          */
    __type2295 DTDA123;                                    /* DTDA123          */
    __type2296 DTTC123;                                    /* DTTC123          */
    __type2309 DTTCT123;                                   /* DTTCT123         */
    __type2298 DTRSA123;                                   /* DTRSA123         */
    __type2299 DTRDA123;                                   /* DTRDA123         */
    __type2300 DTRTC123;                                   /* DTRTC123         */
    __type2301 DTTCC123;                                   /* DTTCC123         */
    __type2310 DTFSL123;                                   /* DTFSL123         */
    const __type2307 DTFST123;                             /* DTFST123         */
    __type2311 DTFSS123;                                   /* DTFSS123         */
    __type2308 DTFSC123;                                   /* DTFSC123         */
    uint8  dummy980[16];                                   /* Reserved         */
    __type2294 DTSA124;                                    /* DTSA124          */
    __type2295 DTDA124;                                    /* DTDA124          */
    __type2296 DTTC124;                                    /* DTTC124          */
    __type2309 DTTCT124;                                   /* DTTCT124         */
    __type2298 DTRSA124;                                   /* DTRSA124         */
    __type2299 DTRDA124;                                   /* DTRDA124         */
    __type2300 DTRTC124;                                   /* DTRTC124         */
    __type2301 DTTCC124;                                   /* DTTCC124         */
    __type2310 DTFSL124;                                   /* DTFSL124         */
    const __type2307 DTFST124;                             /* DTFST124         */
    __type2311 DTFSS124;                                   /* DTFSS124         */
    __type2308 DTFSC124;                                   /* DTFSC124         */
} __type2625;

__IOREG(DMASS, 0xFFFF8000, __READ_WRITE, __type2625);                 /* DMASS */

#define DMASSDMACTL DMASS.DMACTL.UINT32
#define DMASSDMASPD DMASS.DMACTL.BIT.DMASPD
#define DMASSDTSCTL1 DMASS.DTSCTL1.UINT32
#define DMASSDTSUST DMASS.DTSCTL1.BIT.DTSUST
#define DMASSDTSCTL2 DMASS.DTSCTL2.UINT32
#define DMASSDTSTIT DMASS.DTSCTL2.BIT.DTSTIT
#define DMASSDTSSTS DMASS.DTSSTS.UINT32
#define DMASSDTSACT DMASS.DTSSTS.BIT.DTSACT
#define DMASSDTSACH DMASS.DTSSTS.BIT.DTSACH
#define DMASSDTSCYC DMASS.DTSSTS.BIT.DTSCYC
#define DMASSDMACER DMASS.DMACER.UINT32
#define DMASSDM0ER DMASS.DMACER.BIT.DM0ER
#define DMASSDM1ER DMASS.DMACER.BIT.DM1ER
#define DMASSDTSER1 DMASS.DTSER1.UINT32
#define DMASSDTSER DMASS.DTSER1.BIT.DTSER
#define DMASSDTSERWR DMASS.DTSER1.BIT.DTSERWR
#define DMASSDTSERCH DMASS.DTSER1.BIT.DTSERCH
#define DMASSDTSER2 DMASS.DTSER2.UINT32
#define DMASSRAMSECAD DMASS.DTSER2.BIT.RAMSECAD
#define DMASSRAMSECOV DMASS.DTSER2.BIT.RAMSECOV
#define DMASSRAMSEC DMASS.DTSER2.BIT.RAMSEC
#define DMASSRAMDEDAD DMASS.DTSER2.BIT.RAMDEDAD
#define DMASSRAMDEDOV DMASS.DTSER2.BIT.RAMDEDOV
#define DMASSRAMDED DMASS.DTSER2.BIT.RAMDED
#define DMASSDTSERC DMASS.DTSERC.UINT32
#define DMASSRAMSECOVC DMASS.DTSERC.BIT.RAMSECOVC
#define DMASSRAMSECC DMASS.DTSERC.BIT.RAMSECC
#define DMASSRAMDEDOVC DMASS.DTSERC.BIT.RAMDEDOVC
#define DMASSRAMDEDC DMASS.DTSERC.BIT.RAMDEDC
#define DMASSDM0CMV DMASS.DM0CMV.UINT32
#define DMASSVF DMASS.DM0CMV.BIT.VF
#define DMASSVCH DMASS.DM0CMV.BIT.VCH
#define DMASSMINF DMASS.DM0CMV.BIT.MINF
#define DMASSDM1CMV DMASS.DM1CMV.UINT32
#define DMASSDTSCMV DMASS.DTSCMV.UINT32
#define DMASSCMVC DMASS.CMVC.UINT32
#define DMASSDM0VC DMASS.CMVC.BIT.DM0VC
#define DMASSDM1VC DMASS.CMVC.BIT.DM1VC
#define DMASSDTSVC DMASS.CMVC.BIT.DTSVC
#define DMASSDTSPR0 DMASS.DTSPR0.UINT32
#define DMASSDTS0PR DMASS.DTSPR0.BIT.DTS0PR
#define DMASSDTS1PR DMASS.DTSPR0.BIT.DTS1PR
#define DMASSDTS2PR DMASS.DTSPR0.BIT.DTS2PR
#define DMASSDTS3PR DMASS.DTSPR0.BIT.DTS3PR
#define DMASSDTS4PR DMASS.DTSPR0.BIT.DTS4PR
#define DMASSDTS5PR DMASS.DTSPR0.BIT.DTS5PR
#define DMASSDTS6PR DMASS.DTSPR0.BIT.DTS6PR
#define DMASSDTS7PR DMASS.DTSPR0.BIT.DTS7PR
#define DMASSDTS8PR DMASS.DTSPR0.BIT.DTS8PR
#define DMASSDTS9PR DMASS.DTSPR0.BIT.DTS9PR
#define DMASSDTS10PR DMASS.DTSPR0.BIT.DTS10PR
#define DMASSDTS11PR DMASS.DTSPR0.BIT.DTS11PR
#define DMASSDTS12PR DMASS.DTSPR0.BIT.DTS12PR
#define DMASSDTS13PR DMASS.DTSPR0.BIT.DTS13PR
#define DMASSDTS14PR DMASS.DTSPR0.BIT.DTS14PR
#define DMASSDTS15PR DMASS.DTSPR0.BIT.DTS15PR
#define DMASSDTSPR1 DMASS.DTSPR1.UINT32
#define DMASSDTS16PR DMASS.DTSPR1.BIT.DTS16PR
#define DMASSDTS17PR DMASS.DTSPR1.BIT.DTS17PR
#define DMASSDTS18PR DMASS.DTSPR1.BIT.DTS18PR
#define DMASSDTS19PR DMASS.DTSPR1.BIT.DTS19PR
#define DMASSDTS20PR DMASS.DTSPR1.BIT.DTS20PR
#define DMASSDTS21PR DMASS.DTSPR1.BIT.DTS21PR
#define DMASSDTS22PR DMASS.DTSPR1.BIT.DTS22PR
#define DMASSDTS23PR DMASS.DTSPR1.BIT.DTS23PR
#define DMASSDTS24PR DMASS.DTSPR1.BIT.DTS24PR
#define DMASSDTS25PR DMASS.DTSPR1.BIT.DTS25PR
#define DMASSDTS26PR DMASS.DTSPR1.BIT.DTS26PR
#define DMASSDTS27PR DMASS.DTSPR1.BIT.DTS27PR
#define DMASSDTS28PR DMASS.DTSPR1.BIT.DTS28PR
#define DMASSDTS29PR DMASS.DTSPR1.BIT.DTS29PR
#define DMASSDTS30PR DMASS.DTSPR1.BIT.DTS30PR
#define DMASSDTS31PR DMASS.DTSPR1.BIT.DTS31PR
#define DMASSDTSPR2 DMASS.DTSPR2.UINT32
#define DMASSDTS32PR DMASS.DTSPR2.BIT.DTS32PR
#define DMASSDTS33PR DMASS.DTSPR2.BIT.DTS33PR
#define DMASSDTS34PR DMASS.DTSPR2.BIT.DTS34PR
#define DMASSDTS35PR DMASS.DTSPR2.BIT.DTS35PR
#define DMASSDTS36PR DMASS.DTSPR2.BIT.DTS36PR
#define DMASSDTS37PR DMASS.DTSPR2.BIT.DTS37PR
#define DMASSDTS38PR DMASS.DTSPR2.BIT.DTS38PR
#define DMASSDTS39PR DMASS.DTSPR2.BIT.DTS39PR
#define DMASSDTS40PR DMASS.DTSPR2.BIT.DTS40PR
#define DMASSDTS41PR DMASS.DTSPR2.BIT.DTS41PR
#define DMASSDTS42PR DMASS.DTSPR2.BIT.DTS42PR
#define DMASSDTS43PR DMASS.DTSPR2.BIT.DTS43PR
#define DMASSDTS44PR DMASS.DTSPR2.BIT.DTS44PR
#define DMASSDTS45PR DMASS.DTSPR2.BIT.DTS45PR
#define DMASSDTS46PR DMASS.DTSPR2.BIT.DTS46PR
#define DMASSDTS47PR DMASS.DTSPR2.BIT.DTS47PR
#define DMASSDTSPR3 DMASS.DTSPR3.UINT32
#define DMASSDTS48PR DMASS.DTSPR3.BIT.DTS48PR
#define DMASSDTS49PR DMASS.DTSPR3.BIT.DTS49PR
#define DMASSDTS50PR DMASS.DTSPR3.BIT.DTS50PR
#define DMASSDTS51PR DMASS.DTSPR3.BIT.DTS51PR
#define DMASSDTS52PR DMASS.DTSPR3.BIT.DTS52PR
#define DMASSDTS53PR DMASS.DTSPR3.BIT.DTS53PR
#define DMASSDTS54PR DMASS.DTSPR3.BIT.DTS54PR
#define DMASSDTS55PR DMASS.DTSPR3.BIT.DTS55PR
#define DMASSDTS56PR DMASS.DTSPR3.BIT.DTS56PR
#define DMASSDTS57PR DMASS.DTSPR3.BIT.DTS57PR
#define DMASSDTS58PR DMASS.DTSPR3.BIT.DTS58PR
#define DMASSDTS59PR DMASS.DTSPR3.BIT.DTS59PR
#define DMASSDTS60PR DMASS.DTSPR3.BIT.DTS60PR
#define DMASSDTS61PR DMASS.DTSPR3.BIT.DTS61PR
#define DMASSDTS62PR DMASS.DTSPR3.BIT.DTS62PR
#define DMASSDTS63PR DMASS.DTSPR3.BIT.DTS63PR
#define DMASSDTSPR4 DMASS.DTSPR4.UINT32
#define DMASSDTS64PR DMASS.DTSPR4.BIT.DTS64PR
#define DMASSDTS65PR DMASS.DTSPR4.BIT.DTS65PR
#define DMASSDTS66PR DMASS.DTSPR4.BIT.DTS66PR
#define DMASSDTS67PR DMASS.DTSPR4.BIT.DTS67PR
#define DMASSDTS68PR DMASS.DTSPR4.BIT.DTS68PR
#define DMASSDTS69PR DMASS.DTSPR4.BIT.DTS69PR
#define DMASSDTS70PR DMASS.DTSPR4.BIT.DTS70PR
#define DMASSDTS71PR DMASS.DTSPR4.BIT.DTS71PR
#define DMASSDTS72PR DMASS.DTSPR4.BIT.DTS72PR
#define DMASSDTS73PR DMASS.DTSPR4.BIT.DTS73PR
#define DMASSDTS74PR DMASS.DTSPR4.BIT.DTS74PR
#define DMASSDTS75PR DMASS.DTSPR4.BIT.DTS75PR
#define DMASSDTS76PR DMASS.DTSPR4.BIT.DTS76PR
#define DMASSDTS77PR DMASS.DTSPR4.BIT.DTS77PR
#define DMASSDTS78PR DMASS.DTSPR4.BIT.DTS78PR
#define DMASSDTS79PR DMASS.DTSPR4.BIT.DTS79PR
#define DMASSDTSPR5 DMASS.DTSPR5.UINT32
#define DMASSDTS80PR DMASS.DTSPR5.BIT.DTS80PR
#define DMASSDTS81PR DMASS.DTSPR5.BIT.DTS81PR
#define DMASSDTS82PR DMASS.DTSPR5.BIT.DTS82PR
#define DMASSDTS83PR DMASS.DTSPR5.BIT.DTS83PR
#define DMASSDTS84PR DMASS.DTSPR5.BIT.DTS84PR
#define DMASSDTS85PR DMASS.DTSPR5.BIT.DTS85PR
#define DMASSDTS86PR DMASS.DTSPR5.BIT.DTS86PR
#define DMASSDTS87PR DMASS.DTSPR5.BIT.DTS87PR
#define DMASSDTS88PR DMASS.DTSPR5.BIT.DTS88PR
#define DMASSDTS89PR DMASS.DTSPR5.BIT.DTS89PR
#define DMASSDTS90PR DMASS.DTSPR5.BIT.DTS90PR
#define DMASSDTS91PR DMASS.DTSPR5.BIT.DTS91PR
#define DMASSDTS92PR DMASS.DTSPR5.BIT.DTS92PR
#define DMASSDTS93PR DMASS.DTSPR5.BIT.DTS93PR
#define DMASSDTS94PR DMASS.DTSPR5.BIT.DTS94PR
#define DMASSDTS95PR DMASS.DTSPR5.BIT.DTS95PR
#define DMASSDTSPR6 DMASS.DTSPR6.UINT32
#define DMASSDTS96PR DMASS.DTSPR6.BIT.DTS96PR
#define DMASSDTS97PR DMASS.DTSPR6.BIT.DTS97PR
#define DMASSDTS98PR DMASS.DTSPR6.BIT.DTS98PR
#define DMASSDTS99PR DMASS.DTSPR6.BIT.DTS99PR
#define DMASSDTS100PR DMASS.DTSPR6.BIT.DTS100PR
#define DMASSDTS101PR DMASS.DTSPR6.BIT.DTS101PR
#define DMASSDTS102PR DMASS.DTSPR6.BIT.DTS102PR
#define DMASSDTS103PR DMASS.DTSPR6.BIT.DTS103PR
#define DMASSDTS104PR DMASS.DTSPR6.BIT.DTS104PR
#define DMASSDTS105PR DMASS.DTSPR6.BIT.DTS105PR
#define DMASSDTS106PR DMASS.DTSPR6.BIT.DTS106PR
#define DMASSDTS107PR DMASS.DTSPR6.BIT.DTS107PR
#define DMASSDTS108PR DMASS.DTSPR6.BIT.DTS108PR
#define DMASSDTS109PR DMASS.DTSPR6.BIT.DTS109PR
#define DMASSDTS110PR DMASS.DTSPR6.BIT.DTS110PR
#define DMASSDTS111PR DMASS.DTSPR6.BIT.DTS111PR
#define DMASSDTSPR7 DMASS.DTSPR7.UINT32
#define DMASSDTS112PR DMASS.DTSPR7.BIT.DTS112PR
#define DMASSDTS113PR DMASS.DTSPR7.BIT.DTS113PR
#define DMASSDTS114PR DMASS.DTSPR7.BIT.DTS114PR
#define DMASSDTS115PR DMASS.DTSPR7.BIT.DTS115PR
#define DMASSDTS116PR DMASS.DTSPR7.BIT.DTS116PR
#define DMASSDTS117PR DMASS.DTSPR7.BIT.DTS117PR
#define DMASSDTS118PR DMASS.DTSPR7.BIT.DTS118PR
#define DMASSDTS119PR DMASS.DTSPR7.BIT.DTS119PR
#define DMASSDTS120PR DMASS.DTSPR7.BIT.DTS120PR
#define DMASSDTS121PR DMASS.DTSPR7.BIT.DTS121PR
#define DMASSDTS122PR DMASS.DTSPR7.BIT.DTS122PR
#define DMASSDTS123PR DMASS.DTSPR7.BIT.DTS123PR
#define DMASSDTS124PR DMASS.DTSPR7.BIT.DTS124PR
#define DMASSDTS125PR DMASS.DTSPR7.BIT.DTS125PR
#define DMASSDTS126PR DMASS.DTSPR7.BIT.DTS126PR
#define DMASSDTS127PR DMASS.DTSPR7.BIT.DTS127PR
#define DMASSDTRECCTL DMASS.DTRECCTL.UINT32
#define DMASSECCDIS DMASS.DTRECCTL.BIT.ECCDIS
#define DMASSSECDIS DMASS.DTRECCTL.BIT.SECDIS
#define DMASSPROT DMASS.DTRECCTL.BIT.PROT
#define DMASSDTRERINT DMASS.DTRERINT.UINT32
#define DMASSSEDIE DMASS.DTRERINT.BIT.SEDIE
#define DMASSDEDIE DMASS.DTRERINT.BIT.DEDIE
#define DMASSDTRTSCTL DMASS.DTRTSCTL.UINT32
#define DMASSDATSEL DMASS.DTRTSCTL.BIT.DATSEL
#define DMASSECCTST DMASS.DTRTSCTL.BIT.ECCTST
#define DMASSDTRTWDAT DMASS.DTRTWDAT.UINT32
#define DMASSTWDAT DMASS.DTRTWDAT.BIT.TWDAT
#define DMASSDTRTRDAT DMASS.DTRTRDAT.UINT32
#define DMASSTRDAT DMASS.DTRTRDAT.BIT.TRDAT
#define DMASSDM00CM DMASS.DM00CM.UINT32
#define DMASSUM DMASS.DM00CM.BIT.UM
#define DMASSSPID DMASS.DM00CM.BIT.SPID
#define DMASSPEID DMASS.DM00CM.BIT.PEID
#define DMASSDM01CM DMASS.DM01CM.UINT32
#define DMASSDM02CM DMASS.DM02CM.UINT32
#define DMASSDM03CM DMASS.DM03CM.UINT32
#define DMASSDM04CM DMASS.DM04CM.UINT32
#define DMASSDM05CM DMASS.DM05CM.UINT32
#define DMASSDM06CM DMASS.DM06CM.UINT32
#define DMASSDM07CM DMASS.DM07CM.UINT32
#define DMASSDM10CM DMASS.DM10CM.UINT32
#define DMASSDM11CM DMASS.DM11CM.UINT32
#define DMASSDM12CM DMASS.DM12CM.UINT32
#define DMASSDM13CM DMASS.DM13CM.UINT32
#define DMASSDM14CM DMASS.DM14CM.UINT32
#define DMASSDM15CM DMASS.DM15CM.UINT32
#define DMASSDM16CM DMASS.DM16CM.UINT32
#define DMASSDM17CM DMASS.DM17CM.UINT32
#define DMASSDTS000CM DMASS.DTS000CM.UINT32
#define DMASSCMC DMASS.DTS000CM.BIT.CMC
#define DMASSDTS001CM DMASS.DTS001CM.UINT32
#define DMASSDTS002CM DMASS.DTS002CM.UINT32
#define DMASSDTS003CM DMASS.DTS003CM.UINT32
#define DMASSDTS004CM DMASS.DTS004CM.UINT32
#define DMASSDTS005CM DMASS.DTS005CM.UINT32
#define DMASSDTS006CM DMASS.DTS006CM.UINT32
#define DMASSDTS007CM DMASS.DTS007CM.UINT32
#define DMASSDTS008CM DMASS.DTS008CM.UINT32
#define DMASSDTS009CM DMASS.DTS009CM.UINT32
#define DMASSDTS010CM DMASS.DTS010CM.UINT32
#define DMASSDTS011CM DMASS.DTS011CM.UINT32
#define DMASSDTS012CM DMASS.DTS012CM.UINT32
#define DMASSDTS013CM DMASS.DTS013CM.UINT32
#define DMASSDTS014CM DMASS.DTS014CM.UINT32
#define DMASSDTS015CM DMASS.DTS015CM.UINT32
#define DMASSDTS016CM DMASS.DTS016CM.UINT32
#define DMASSDTS017CM DMASS.DTS017CM.UINT32
#define DMASSDTS018CM DMASS.DTS018CM.UINT32
#define DMASSDTS019CM DMASS.DTS019CM.UINT32
#define DMASSDTS020CM DMASS.DTS020CM.UINT32
#define DMASSDTS021CM DMASS.DTS021CM.UINT32
#define DMASSDTS022CM DMASS.DTS022CM.UINT32
#define DMASSDTS023CM DMASS.DTS023CM.UINT32
#define DMASSDTS024CM DMASS.DTS024CM.UINT32
#define DMASSDTS025CM DMASS.DTS025CM.UINT32
#define DMASSDTS026CM DMASS.DTS026CM.UINT32
#define DMASSDTS027CM DMASS.DTS027CM.UINT32
#define DMASSDTS028CM DMASS.DTS028CM.UINT32
#define DMASSDTS029CM DMASS.DTS029CM.UINT32
#define DMASSDTS030CM DMASS.DTS030CM.UINT32
#define DMASSDTS031CM DMASS.DTS031CM.UINT32
#define DMASSDTS032CM DMASS.DTS032CM.UINT32
#define DMASSDTS033CM DMASS.DTS033CM.UINT32
#define DMASSDTS034CM DMASS.DTS034CM.UINT32
#define DMASSDTS035CM DMASS.DTS035CM.UINT32
#define DMASSDTS036CM DMASS.DTS036CM.UINT32
#define DMASSDTS037CM DMASS.DTS037CM.UINT32
#define DMASSDTS038CM DMASS.DTS038CM.UINT32
#define DMASSDTS039CM DMASS.DTS039CM.UINT32
#define DMASSDTS040CM DMASS.DTS040CM.UINT32
#define DMASSDTS041CM DMASS.DTS041CM.UINT32
#define DMASSDTS042CM DMASS.DTS042CM.UINT32
#define DMASSDTS043CM DMASS.DTS043CM.UINT32
#define DMASSDTS044CM DMASS.DTS044CM.UINT32
#define DMASSDTS045CM DMASS.DTS045CM.UINT32
#define DMASSDTS046CM DMASS.DTS046CM.UINT32
#define DMASSDTS047CM DMASS.DTS047CM.UINT32
#define DMASSDTS048CM DMASS.DTS048CM.UINT32
#define DMASSDTS049CM DMASS.DTS049CM.UINT32
#define DMASSDTS050CM DMASS.DTS050CM.UINT32
#define DMASSDTS051CM DMASS.DTS051CM.UINT32
#define DMASSDTS052CM DMASS.DTS052CM.UINT32
#define DMASSDTS053CM DMASS.DTS053CM.UINT32
#define DMASSDTS054CM DMASS.DTS054CM.UINT32
#define DMASSDTS055CM DMASS.DTS055CM.UINT32
#define DMASSDTS056CM DMASS.DTS056CM.UINT32
#define DMASSDTS057CM DMASS.DTS057CM.UINT32
#define DMASSDTS058CM DMASS.DTS058CM.UINT32
#define DMASSDTS059CM DMASS.DTS059CM.UINT32
#define DMASSDTS060CM DMASS.DTS060CM.UINT32
#define DMASSDTS061CM DMASS.DTS061CM.UINT32
#define DMASSDTS062CM DMASS.DTS062CM.UINT32
#define DMASSDTS063CM DMASS.DTS063CM.UINT32
#define DMASSDTS064CM DMASS.DTS064CM.UINT32
#define DMASSDTS065CM DMASS.DTS065CM.UINT32
#define DMASSDTS066CM DMASS.DTS066CM.UINT32
#define DMASSDTS067CM DMASS.DTS067CM.UINT32
#define DMASSDTS068CM DMASS.DTS068CM.UINT32
#define DMASSDTS069CM DMASS.DTS069CM.UINT32
#define DMASSDTS070CM DMASS.DTS070CM.UINT32
#define DMASSDTS071CM DMASS.DTS071CM.UINT32
#define DMASSDTS072CM DMASS.DTS072CM.UINT32
#define DMASSDTS073CM DMASS.DTS073CM.UINT32
#define DMASSDTS074CM DMASS.DTS074CM.UINT32
#define DMASSDTS075CM DMASS.DTS075CM.UINT32
#define DMASSDTS076CM DMASS.DTS076CM.UINT32
#define DMASSDTS077CM DMASS.DTS077CM.UINT32
#define DMASSDTS078CM DMASS.DTS078CM.UINT32
#define DMASSDTS079CM DMASS.DTS079CM.UINT32
#define DMASSDTS080CM DMASS.DTS080CM.UINT32
#define DMASSDTS081CM DMASS.DTS081CM.UINT32
#define DMASSDTS082CM DMASS.DTS082CM.UINT32
#define DMASSDTS083CM DMASS.DTS083CM.UINT32
#define DMASSDTS084CM DMASS.DTS084CM.UINT32
#define DMASSDTS085CM DMASS.DTS085CM.UINT32
#define DMASSDTS086CM DMASS.DTS086CM.UINT32
#define DMASSDTS087CM DMASS.DTS087CM.UINT32
#define DMASSDTS088CM DMASS.DTS088CM.UINT32
#define DMASSDTS089CM DMASS.DTS089CM.UINT32
#define DMASSDTS090CM DMASS.DTS090CM.UINT32
#define DMASSDTS091CM DMASS.DTS091CM.UINT32
#define DMASSDTS092CM DMASS.DTS092CM.UINT32
#define DMASSDTS093CM DMASS.DTS093CM.UINT32
#define DMASSDTS094CM DMASS.DTS094CM.UINT32
#define DMASSDTS095CM DMASS.DTS095CM.UINT32
#define DMASSDTS096CM DMASS.DTS096CM.UINT32
#define DMASSDTS097CM DMASS.DTS097CM.UINT32
#define DMASSDTS098CM DMASS.DTS098CM.UINT32
#define DMASSDTS099CM DMASS.DTS099CM.UINT32
#define DMASSDTS100CM DMASS.DTS100CM.UINT32
#define DMASSDTS101CM DMASS.DTS101CM.UINT32
#define DMASSDTS102CM DMASS.DTS102CM.UINT32
#define DMASSDTS103CM DMASS.DTS103CM.UINT32
#define DMASSDTS104CM DMASS.DTS104CM.UINT32
#define DMASSDTS105CM DMASS.DTS105CM.UINT32
#define DMASSDTS106CM DMASS.DTS106CM.UINT32
#define DMASSDTS107CM DMASS.DTS107CM.UINT32
#define DMASSDTS108CM DMASS.DTS108CM.UINT32
#define DMASSDTS109CM DMASS.DTS109CM.UINT32
#define DMASSDTS110CM DMASS.DTS110CM.UINT32
#define DMASSDTS111CM DMASS.DTS111CM.UINT32
#define DMASSDTS112CM DMASS.DTS112CM.UINT32
#define DMASSDTS113CM DMASS.DTS113CM.UINT32
#define DMASSDTS114CM DMASS.DTS114CM.UINT32
#define DMASSDTS115CM DMASS.DTS115CM.UINT32
#define DMASSDTS116CM DMASS.DTS116CM.UINT32
#define DMASSDTS117CM DMASS.DTS117CM.UINT32
#define DMASSDTS118CM DMASS.DTS118CM.UINT32
#define DMASSDTS119CM DMASS.DTS119CM.UINT32
#define DMASSDTS120CM DMASS.DTS120CM.UINT32
#define DMASSDTS121CM DMASS.DTS121CM.UINT32
#define DMASSDTS122CM DMASS.DTS122CM.UINT32
#define DMASSDTS123CM DMASS.DTS123CM.UINT32
#define DMASSDTS124CM DMASS.DTS124CM.UINT32
#define DMASSDSA0 DMASS.DSA0.UINT32
#define DMASSSA DMASS.DSA0.BIT.SA
#define DMASSDDA0 DMASS.DDA0.UINT32
#define DMASSDA DMASS.DDA0.BIT.DA
#define DMASSDTC0 DMASS.DTC0.UINT32
#define DMASSTRC DMASS.DTC0.BIT.TRC
#define DMASSARC DMASS.DTC0.BIT.ARC
#define DMASSDTCT0 DMASS.DTCT0.UINT32
#define DMASSTRM DMASS.DTCT0.BIT.TRM
#define DMASSDS DMASS.DTCT0.BIT.DS
#define DMASSSACM DMASS.DTCT0.BIT.SACM
#define DMASSDACM DMASS.DTCT0.BIT.DACM
#define DMASSRLD1M DMASS.DTCT0.BIT.RLD1M
#define DMASSRLD2M DMASS.DTCT0.BIT.RLD2M
#define DMASSMLE DMASS.DTCT0.BIT.MLE
#define DMASSTCE DMASS.DTCT0.BIT.TCE
#define DMASSCCE DMASS.DTCT0.BIT.CCE
#define DMASSCHNE DMASS.DTCT0.BIT.CHNE
#define DMASSCHNSEL DMASS.DTCT0.BIT.CHNSEL
#define DMASSDRS DMASS.DTCT0.BIT.DRS
#define DMASSESE DMASS.DTCT0.BIT.ESE
#define DMASSDRSA0 DMASS.DRSA0.UINT32
#define DMASSRSA DMASS.DRSA0.BIT.RSA
#define DMASSDRDA0 DMASS.DRDA0.UINT32
#define DMASSRDA DMASS.DRDA0.BIT.RDA
#define DMASSDRTC0 DMASS.DRTC0.UINT32
#define DMASSRTRC DMASS.DRTC0.BIT.RTRC
#define DMASSRARC DMASS.DRTC0.BIT.RARC
#define DMASSDTCC0 DMASS.DTCC0.UINT32
#define DMASSDCEN0 DMASS.DCEN0.UINT32
#define DMASSDTE DMASS.DCEN0.BIT.DTE
#define DMASSDCST0 DMASS.DCST0.UINT32
#define DMASSSR DMASS.DCST0.BIT.SR
#define DMASSDR DMASS.DCST0.BIT.DR
#define DMASSTC DMASS.DCST0.BIT.TC
#define DMASSCC DMASS.DCST0.BIT._CC
#define DMASSER DMASS.DCST0.BIT.ER
#define DMASSCY DMASS.DCST0.BIT.CY
#define DMASSERWR DMASS.DCST0.BIT.ERWR
#define DMASSDCSTS0 DMASS.DCSTS0.UINT32
#define DMASSSRS DMASS.DCSTS0.BIT.SRS
#define DMASSDCSTC0 DMASS.DCSTC0.UINT32
#define DMASSSRC DMASS.DCSTC0.BIT.SRC
#define DMASSTCC DMASS.DCSTC0.BIT.TCC
#define DMASSCCC DMASS.DCSTC0.BIT.CCC
#define DMASSERC DMASS.DCSTC0.BIT.ERC
#define DMASSDTFR0 DMASS.DTFR0.UINT32
#define DMASSREQEN DMASS.DTFR0.BIT.REQEN
#define DMASSREQSEL DMASS.DTFR0.BIT.REQSEL
#define DMASSDTFRRQ0 DMASS.DTFRRQ0.UINT32
#define DMASSDRQ DMASS.DTFRRQ0.BIT.DRQ
#define DMASSDTFRRQC0 DMASS.DTFRRQC0.UINT32
#define DMASSDRQC DMASS.DTFRRQC0.BIT.DRQC
#define DMASSDSA1 DMASS.DSA1.UINT32
#define DMASSDDA1 DMASS.DDA1.UINT32
#define DMASSDTC1 DMASS.DTC1.UINT32
#define DMASSDTCT1 DMASS.DTCT1.UINT32
#define DMASSDRSA1 DMASS.DRSA1.UINT32
#define DMASSDRDA1 DMASS.DRDA1.UINT32
#define DMASSDRTC1 DMASS.DRTC1.UINT32
#define DMASSDTCC1 DMASS.DTCC1.UINT32
#define DMASSDCEN1 DMASS.DCEN1.UINT32
#define DMASSDCST1 DMASS.DCST1.UINT32
#define DMASSDCSTS1 DMASS.DCSTS1.UINT32
#define DMASSDCSTC1 DMASS.DCSTC1.UINT32
#define DMASSDTFR1 DMASS.DTFR1.UINT32
#define DMASSDTFRRQ1 DMASS.DTFRRQ1.UINT32
#define DMASSDTFRRQC1 DMASS.DTFRRQC1.UINT32
#define DMASSDSA2 DMASS.DSA2.UINT32
#define DMASSDDA2 DMASS.DDA2.UINT32
#define DMASSDTC2 DMASS.DTC2.UINT32
#define DMASSDTCT2 DMASS.DTCT2.UINT32
#define DMASSDRSA2 DMASS.DRSA2.UINT32
#define DMASSDRDA2 DMASS.DRDA2.UINT32
#define DMASSDRTC2 DMASS.DRTC2.UINT32
#define DMASSDTCC2 DMASS.DTCC2.UINT32
#define DMASSDCEN2 DMASS.DCEN2.UINT32
#define DMASSDCST2 DMASS.DCST2.UINT32
#define DMASSDCSTS2 DMASS.DCSTS2.UINT32
#define DMASSDCSTC2 DMASS.DCSTC2.UINT32
#define DMASSDTFR2 DMASS.DTFR2.UINT32
#define DMASSDTFRRQ2 DMASS.DTFRRQ2.UINT32
#define DMASSDTFRRQC2 DMASS.DTFRRQC2.UINT32
#define DMASSDSA3 DMASS.DSA3.UINT32
#define DMASSDDA3 DMASS.DDA3.UINT32
#define DMASSDTC3 DMASS.DTC3.UINT32
#define DMASSDTCT3 DMASS.DTCT3.UINT32
#define DMASSDRSA3 DMASS.DRSA3.UINT32
#define DMASSDRDA3 DMASS.DRDA3.UINT32
#define DMASSDRTC3 DMASS.DRTC3.UINT32
#define DMASSDTCC3 DMASS.DTCC3.UINT32
#define DMASSDCEN3 DMASS.DCEN3.UINT32
#define DMASSDCST3 DMASS.DCST3.UINT32
#define DMASSDCSTS3 DMASS.DCSTS3.UINT32
#define DMASSDCSTC3 DMASS.DCSTC3.UINT32
#define DMASSDTFR3 DMASS.DTFR3.UINT32
#define DMASSDTFRRQ3 DMASS.DTFRRQ3.UINT32
#define DMASSDTFRRQC3 DMASS.DTFRRQC3.UINT32
#define DMASSDSA4 DMASS.DSA4.UINT32
#define DMASSDDA4 DMASS.DDA4.UINT32
#define DMASSDTC4 DMASS.DTC4.UINT32
#define DMASSDTCT4 DMASS.DTCT4.UINT32
#define DMASSDRSA4 DMASS.DRSA4.UINT32
#define DMASSDRDA4 DMASS.DRDA4.UINT32
#define DMASSDRTC4 DMASS.DRTC4.UINT32
#define DMASSDTCC4 DMASS.DTCC4.UINT32
#define DMASSDCEN4 DMASS.DCEN4.UINT32
#define DMASSDCST4 DMASS.DCST4.UINT32
#define DMASSDCSTS4 DMASS.DCSTS4.UINT32
#define DMASSDCSTC4 DMASS.DCSTC4.UINT32
#define DMASSDTFR4 DMASS.DTFR4.UINT32
#define DMASSDTFRRQ4 DMASS.DTFRRQ4.UINT32
#define DMASSDTFRRQC4 DMASS.DTFRRQC4.UINT32
#define DMASSDSA5 DMASS.DSA5.UINT32
#define DMASSDDA5 DMASS.DDA5.UINT32
#define DMASSDTC5 DMASS.DTC5.UINT32
#define DMASSDTCT5 DMASS.DTCT5.UINT32
#define DMASSDRSA5 DMASS.DRSA5.UINT32
#define DMASSDRDA5 DMASS.DRDA5.UINT32
#define DMASSDRTC5 DMASS.DRTC5.UINT32
#define DMASSDTCC5 DMASS.DTCC5.UINT32
#define DMASSDCEN5 DMASS.DCEN5.UINT32
#define DMASSDCST5 DMASS.DCST5.UINT32
#define DMASSDCSTS5 DMASS.DCSTS5.UINT32
#define DMASSDCSTC5 DMASS.DCSTC5.UINT32
#define DMASSDTFR5 DMASS.DTFR5.UINT32
#define DMASSDTFRRQ5 DMASS.DTFRRQ5.UINT32
#define DMASSDTFRRQC5 DMASS.DTFRRQC5.UINT32
#define DMASSDSA6 DMASS.DSA6.UINT32
#define DMASSDDA6 DMASS.DDA6.UINT32
#define DMASSDTC6 DMASS.DTC6.UINT32
#define DMASSDTCT6 DMASS.DTCT6.UINT32
#define DMASSDRSA6 DMASS.DRSA6.UINT32
#define DMASSDRDA6 DMASS.DRDA6.UINT32
#define DMASSDRTC6 DMASS.DRTC6.UINT32
#define DMASSDTCC6 DMASS.DTCC6.UINT32
#define DMASSDCEN6 DMASS.DCEN6.UINT32
#define DMASSDCST6 DMASS.DCST6.UINT32
#define DMASSDCSTS6 DMASS.DCSTS6.UINT32
#define DMASSDCSTC6 DMASS.DCSTC6.UINT32
#define DMASSDTFR6 DMASS.DTFR6.UINT32
#define DMASSDTFRRQ6 DMASS.DTFRRQ6.UINT32
#define DMASSDTFRRQC6 DMASS.DTFRRQC6.UINT32
#define DMASSDSA7 DMASS.DSA7.UINT32
#define DMASSDDA7 DMASS.DDA7.UINT32
#define DMASSDTC7 DMASS.DTC7.UINT32
#define DMASSDTCT7 DMASS.DTCT7.UINT32
#define DMASSDRSA7 DMASS.DRSA7.UINT32
#define DMASSDRDA7 DMASS.DRDA7.UINT32
#define DMASSDRTC7 DMASS.DRTC7.UINT32
#define DMASSDTCC7 DMASS.DTCC7.UINT32
#define DMASSDCEN7 DMASS.DCEN7.UINT32
#define DMASSDCST7 DMASS.DCST7.UINT32
#define DMASSDCSTS7 DMASS.DCSTS7.UINT32
#define DMASSDCSTC7 DMASS.DCSTC7.UINT32
#define DMASSDTFR7 DMASS.DTFR7.UINT32
#define DMASSDTFRRQ7 DMASS.DTFRRQ7.UINT32
#define DMASSDTFRRQC7 DMASS.DTFRRQC7.UINT32
#define DMASSDSA8 DMASS.DSA8.UINT32
#define DMASSDDA8 DMASS.DDA8.UINT32
#define DMASSDTC8 DMASS.DTC8.UINT32
#define DMASSDTCT8 DMASS.DTCT8.UINT32
#define DMASSDRSA8 DMASS.DRSA8.UINT32
#define DMASSDRDA8 DMASS.DRDA8.UINT32
#define DMASSDRTC8 DMASS.DRTC8.UINT32
#define DMASSDTCC8 DMASS.DTCC8.UINT32
#define DMASSDCEN8 DMASS.DCEN8.UINT32
#define DMASSDCST8 DMASS.DCST8.UINT32
#define DMASSDCSTS8 DMASS.DCSTS8.UINT32
#define DMASSDCSTC8 DMASS.DCSTC8.UINT32
#define DMASSDTFR8 DMASS.DTFR8.UINT32
#define DMASSDTFRRQ8 DMASS.DTFRRQ8.UINT32
#define DMASSDTFRRQC8 DMASS.DTFRRQC8.UINT32
#define DMASSDSA9 DMASS.DSA9.UINT32
#define DMASSDDA9 DMASS.DDA9.UINT32
#define DMASSDTC9 DMASS.DTC9.UINT32
#define DMASSDTCT9 DMASS.DTCT9.UINT32
#define DMASSDRSA9 DMASS.DRSA9.UINT32
#define DMASSDRDA9 DMASS.DRDA9.UINT32
#define DMASSDRTC9 DMASS.DRTC9.UINT32
#define DMASSDTCC9 DMASS.DTCC9.UINT32
#define DMASSDCEN9 DMASS.DCEN9.UINT32
#define DMASSDCST9 DMASS.DCST9.UINT32
#define DMASSDCSTS9 DMASS.DCSTS9.UINT32
#define DMASSDCSTC9 DMASS.DCSTC9.UINT32
#define DMASSDTFR9 DMASS.DTFR9.UINT32
#define DMASSDTFRRQ9 DMASS.DTFRRQ9.UINT32
#define DMASSDTFRRQC9 DMASS.DTFRRQC9.UINT32
#define DMASSDSA10 DMASS.DSA10.UINT32
#define DMASSDDA10 DMASS.DDA10.UINT32
#define DMASSDTC10 DMASS.DTC10.UINT32
#define DMASSDTCT10 DMASS.DTCT10.UINT32
#define DMASSDRSA10 DMASS.DRSA10.UINT32
#define DMASSDRDA10 DMASS.DRDA10.UINT32
#define DMASSDRTC10 DMASS.DRTC10.UINT32
#define DMASSDTCC10 DMASS.DTCC10.UINT32
#define DMASSDCEN10 DMASS.DCEN10.UINT32
#define DMASSDCST10 DMASS.DCST10.UINT32
#define DMASSDCSTS10 DMASS.DCSTS10.UINT32
#define DMASSDCSTC10 DMASS.DCSTC10.UINT32
#define DMASSDTFR10 DMASS.DTFR10.UINT32
#define DMASSDTFRRQ10 DMASS.DTFRRQ10.UINT32
#define DMASSDTFRRQC10 DMASS.DTFRRQC10.UINT32
#define DMASSDSA11 DMASS.DSA11.UINT32
#define DMASSDDA11 DMASS.DDA11.UINT32
#define DMASSDTC11 DMASS.DTC11.UINT32
#define DMASSDTCT11 DMASS.DTCT11.UINT32
#define DMASSDRSA11 DMASS.DRSA11.UINT32
#define DMASSDRDA11 DMASS.DRDA11.UINT32
#define DMASSDRTC11 DMASS.DRTC11.UINT32
#define DMASSDTCC11 DMASS.DTCC11.UINT32
#define DMASSDCEN11 DMASS.DCEN11.UINT32
#define DMASSDCST11 DMASS.DCST11.UINT32
#define DMASSDCSTS11 DMASS.DCSTS11.UINT32
#define DMASSDCSTC11 DMASS.DCSTC11.UINT32
#define DMASSDTFR11 DMASS.DTFR11.UINT32
#define DMASSDTFRRQ11 DMASS.DTFRRQ11.UINT32
#define DMASSDTFRRQC11 DMASS.DTFRRQC11.UINT32
#define DMASSDSA12 DMASS.DSA12.UINT32
#define DMASSDDA12 DMASS.DDA12.UINT32
#define DMASSDTC12 DMASS.DTC12.UINT32
#define DMASSDTCT12 DMASS.DTCT12.UINT32
#define DMASSDRSA12 DMASS.DRSA12.UINT32
#define DMASSDRDA12 DMASS.DRDA12.UINT32
#define DMASSDRTC12 DMASS.DRTC12.UINT32
#define DMASSDTCC12 DMASS.DTCC12.UINT32
#define DMASSDCEN12 DMASS.DCEN12.UINT32
#define DMASSDCST12 DMASS.DCST12.UINT32
#define DMASSDCSTS12 DMASS.DCSTS12.UINT32
#define DMASSDCSTC12 DMASS.DCSTC12.UINT32
#define DMASSDTFR12 DMASS.DTFR12.UINT32
#define DMASSDTFRRQ12 DMASS.DTFRRQ12.UINT32
#define DMASSDTFRRQC12 DMASS.DTFRRQC12.UINT32
#define DMASSDSA13 DMASS.DSA13.UINT32
#define DMASSDDA13 DMASS.DDA13.UINT32
#define DMASSDTC13 DMASS.DTC13.UINT32
#define DMASSDTCT13 DMASS.DTCT13.UINT32
#define DMASSDRSA13 DMASS.DRSA13.UINT32
#define DMASSDRDA13 DMASS.DRDA13.UINT32
#define DMASSDRTC13 DMASS.DRTC13.UINT32
#define DMASSDTCC13 DMASS.DTCC13.UINT32
#define DMASSDCEN13 DMASS.DCEN13.UINT32
#define DMASSDCST13 DMASS.DCST13.UINT32
#define DMASSDCSTS13 DMASS.DCSTS13.UINT32
#define DMASSDCSTC13 DMASS.DCSTC13.UINT32
#define DMASSDTFR13 DMASS.DTFR13.UINT32
#define DMASSDTFRRQ13 DMASS.DTFRRQ13.UINT32
#define DMASSDTFRRQC13 DMASS.DTFRRQC13.UINT32
#define DMASSDSA14 DMASS.DSA14.UINT32
#define DMASSDDA14 DMASS.DDA14.UINT32
#define DMASSDTC14 DMASS.DTC14.UINT32
#define DMASSDTCT14 DMASS.DTCT14.UINT32
#define DMASSDRSA14 DMASS.DRSA14.UINT32
#define DMASSDRDA14 DMASS.DRDA14.UINT32
#define DMASSDRTC14 DMASS.DRTC14.UINT32
#define DMASSDTCC14 DMASS.DTCC14.UINT32
#define DMASSDCEN14 DMASS.DCEN14.UINT32
#define DMASSDCST14 DMASS.DCST14.UINT32
#define DMASSDCSTS14 DMASS.DCSTS14.UINT32
#define DMASSDCSTC14 DMASS.DCSTC14.UINT32
#define DMASSDTFR14 DMASS.DTFR14.UINT32
#define DMASSDTFRRQ14 DMASS.DTFRRQ14.UINT32
#define DMASSDTFRRQC14 DMASS.DTFRRQC14.UINT32
#define DMASSDSA15 DMASS.DSA15.UINT32
#define DMASSDDA15 DMASS.DDA15.UINT32
#define DMASSDTC15 DMASS.DTC15.UINT32
#define DMASSDTCT15 DMASS.DTCT15.UINT32
#define DMASSDRSA15 DMASS.DRSA15.UINT32
#define DMASSDRDA15 DMASS.DRDA15.UINT32
#define DMASSDRTC15 DMASS.DRTC15.UINT32
#define DMASSDTCC15 DMASS.DTCC15.UINT32
#define DMASSDCEN15 DMASS.DCEN15.UINT32
#define DMASSDCST15 DMASS.DCST15.UINT32
#define DMASSDCSTS15 DMASS.DCSTS15.UINT32
#define DMASSDCSTC15 DMASS.DCSTC15.UINT32
#define DMASSDTFR15 DMASS.DTFR15.UINT32
#define DMASSDTFRRQ15 DMASS.DTFRRQ15.UINT32
#define DMASSDTFRRQC15 DMASS.DTFRRQC15.UINT32
#define DMASSDTSA000 DMASS.DTSA000.UINT32
#define DMASSDTDA000 DMASS.DTDA000.UINT32
#define DMASSDTTC000 DMASS.DTTC000.UINT32
#define DMASSDTTCT000 DMASS.DTTCT000.UINT32
#define DMASSDTRSA000 DMASS.DTRSA000.UINT32
#define DMASSDTRDA000 DMASS.DTRDA000.UINT32
#define DMASSDTRTC000 DMASS.DTRTC000.UINT32
#define DMASSDTTCC000 DMASS.DTTCC000.UINT32
#define DMASSDTFSL000 DMASS.DTFSL000.UINT32
#define DMASSDTFST000 DMASS.DTFST000.UINT32
#define DMASSDTFSS000 DMASS.DTFSS000.UINT32
#define DMASSDRQS DMASS.DTFSS000.BIT.DRQS
#define DMASSDTFSC000 DMASS.DTFSC000.UINT32
#define DMASSDTSA001 DMASS.DTSA001.UINT32
#define DMASSDTDA001 DMASS.DTDA001.UINT32
#define DMASSDTTC001 DMASS.DTTC001.UINT32
#define DMASSDTTCT001 DMASS.DTTCT001.UINT32
#define DMASSDTRSA001 DMASS.DTRSA001.UINT32
#define DMASSDTRDA001 DMASS.DTRDA001.UINT32
#define DMASSDTRTC001 DMASS.DTRTC001.UINT32
#define DMASSDTTCC001 DMASS.DTTCC001.UINT32
#define DMASSDTFSL001 DMASS.DTFSL001.UINT32
#define DMASSDTFST001 DMASS.DTFST001.UINT32
#define DMASSDTFSS001 DMASS.DTFSS001.UINT32
#define DMASSDTFSC001 DMASS.DTFSC001.UINT32
#define DMASSDTSA002 DMASS.DTSA002.UINT32
#define DMASSDTDA002 DMASS.DTDA002.UINT32
#define DMASSDTTC002 DMASS.DTTC002.UINT32
#define DMASSDTTCT002 DMASS.DTTCT002.UINT32
#define DMASSDTRSA002 DMASS.DTRSA002.UINT32
#define DMASSDTRDA002 DMASS.DTRDA002.UINT32
#define DMASSDTRTC002 DMASS.DTRTC002.UINT32
#define DMASSDTTCC002 DMASS.DTTCC002.UINT32
#define DMASSDTFSL002 DMASS.DTFSL002.UINT32
#define DMASSDTFST002 DMASS.DTFST002.UINT32
#define DMASSDTFSS002 DMASS.DTFSS002.UINT32
#define DMASSDTFSC002 DMASS.DTFSC002.UINT32
#define DMASSDTSA003 DMASS.DTSA003.UINT32
#define DMASSDTDA003 DMASS.DTDA003.UINT32
#define DMASSDTTC003 DMASS.DTTC003.UINT32
#define DMASSDTTCT003 DMASS.DTTCT003.UINT32
#define DMASSDTRSA003 DMASS.DTRSA003.UINT32
#define DMASSDTRDA003 DMASS.DTRDA003.UINT32
#define DMASSDTRTC003 DMASS.DTRTC003.UINT32
#define DMASSDTTCC003 DMASS.DTTCC003.UINT32
#define DMASSDTFSL003 DMASS.DTFSL003.UINT32
#define DMASSDTFST003 DMASS.DTFST003.UINT32
#define DMASSDTFSS003 DMASS.DTFSS003.UINT32
#define DMASSDTFSC003 DMASS.DTFSC003.UINT32
#define DMASSDTSA004 DMASS.DTSA004.UINT32
#define DMASSDTDA004 DMASS.DTDA004.UINT32
#define DMASSDTTC004 DMASS.DTTC004.UINT32
#define DMASSDTTCT004 DMASS.DTTCT004.UINT32
#define DMASSDTRSA004 DMASS.DTRSA004.UINT32
#define DMASSDTRDA004 DMASS.DTRDA004.UINT32
#define DMASSDTRTC004 DMASS.DTRTC004.UINT32
#define DMASSDTTCC004 DMASS.DTTCC004.UINT32
#define DMASSDTFSL004 DMASS.DTFSL004.UINT32
#define DMASSDTFST004 DMASS.DTFST004.UINT32
#define DMASSDTFSS004 DMASS.DTFSS004.UINT32
#define DMASSDTFSC004 DMASS.DTFSC004.UINT32
#define DMASSDTSA005 DMASS.DTSA005.UINT32
#define DMASSDTDA005 DMASS.DTDA005.UINT32
#define DMASSDTTC005 DMASS.DTTC005.UINT32
#define DMASSDTTCT005 DMASS.DTTCT005.UINT32
#define DMASSDTRSA005 DMASS.DTRSA005.UINT32
#define DMASSDTRDA005 DMASS.DTRDA005.UINT32
#define DMASSDTRTC005 DMASS.DTRTC005.UINT32
#define DMASSDTTCC005 DMASS.DTTCC005.UINT32
#define DMASSDTFSL005 DMASS.DTFSL005.UINT32
#define DMASSDTFST005 DMASS.DTFST005.UINT32
#define DMASSDTFSS005 DMASS.DTFSS005.UINT32
#define DMASSDTFSC005 DMASS.DTFSC005.UINT32
#define DMASSDTSA006 DMASS.DTSA006.UINT32
#define DMASSDTDA006 DMASS.DTDA006.UINT32
#define DMASSDTTC006 DMASS.DTTC006.UINT32
#define DMASSDTTCT006 DMASS.DTTCT006.UINT32
#define DMASSDTRSA006 DMASS.DTRSA006.UINT32
#define DMASSDTRDA006 DMASS.DTRDA006.UINT32
#define DMASSDTRTC006 DMASS.DTRTC006.UINT32
#define DMASSDTTCC006 DMASS.DTTCC006.UINT32
#define DMASSDTFSL006 DMASS.DTFSL006.UINT32
#define DMASSDTFST006 DMASS.DTFST006.UINT32
#define DMASSDTFSS006 DMASS.DTFSS006.UINT32
#define DMASSDTFSC006 DMASS.DTFSC006.UINT32
#define DMASSDTSA007 DMASS.DTSA007.UINT32
#define DMASSDTDA007 DMASS.DTDA007.UINT32
#define DMASSDTTC007 DMASS.DTTC007.UINT32
#define DMASSDTTCT007 DMASS.DTTCT007.UINT32
#define DMASSDTRSA007 DMASS.DTRSA007.UINT32
#define DMASSDTRDA007 DMASS.DTRDA007.UINT32
#define DMASSDTRTC007 DMASS.DTRTC007.UINT32
#define DMASSDTTCC007 DMASS.DTTCC007.UINT32
#define DMASSDTFSL007 DMASS.DTFSL007.UINT32
#define DMASSDTFST007 DMASS.DTFST007.UINT32
#define DMASSDTFSS007 DMASS.DTFSS007.UINT32
#define DMASSDTFSC007 DMASS.DTFSC007.UINT32
#define DMASSDTSA008 DMASS.DTSA008.UINT32
#define DMASSDTDA008 DMASS.DTDA008.UINT32
#define DMASSDTTC008 DMASS.DTTC008.UINT32
#define DMASSDTTCT008 DMASS.DTTCT008.UINT32
#define DMASSDTRSA008 DMASS.DTRSA008.UINT32
#define DMASSDTRDA008 DMASS.DTRDA008.UINT32
#define DMASSDTRTC008 DMASS.DTRTC008.UINT32
#define DMASSDTTCC008 DMASS.DTTCC008.UINT32
#define DMASSDTFSL008 DMASS.DTFSL008.UINT32
#define DMASSDTFST008 DMASS.DTFST008.UINT32
#define DMASSDTFSS008 DMASS.DTFSS008.UINT32
#define DMASSDTFSC008 DMASS.DTFSC008.UINT32
#define DMASSDTSA009 DMASS.DTSA009.UINT32
#define DMASSDTDA009 DMASS.DTDA009.UINT32
#define DMASSDTTC009 DMASS.DTTC009.UINT32
#define DMASSDTTCT009 DMASS.DTTCT009.UINT32
#define DMASSDTRSA009 DMASS.DTRSA009.UINT32
#define DMASSDTRDA009 DMASS.DTRDA009.UINT32
#define DMASSDTRTC009 DMASS.DTRTC009.UINT32
#define DMASSDTTCC009 DMASS.DTTCC009.UINT32
#define DMASSDTFSL009 DMASS.DTFSL009.UINT32
#define DMASSDTFST009 DMASS.DTFST009.UINT32
#define DMASSDTFSS009 DMASS.DTFSS009.UINT32
#define DMASSDTFSC009 DMASS.DTFSC009.UINT32
#define DMASSDTSA010 DMASS.DTSA010.UINT32
#define DMASSDTDA010 DMASS.DTDA010.UINT32
#define DMASSDTTC010 DMASS.DTTC010.UINT32
#define DMASSDTTCT010 DMASS.DTTCT010.UINT32
#define DMASSDTRSA010 DMASS.DTRSA010.UINT32
#define DMASSDTRDA010 DMASS.DTRDA010.UINT32
#define DMASSDTRTC010 DMASS.DTRTC010.UINT32
#define DMASSDTTCC010 DMASS.DTTCC010.UINT32
#define DMASSDTFSL010 DMASS.DTFSL010.UINT32
#define DMASSDTFST010 DMASS.DTFST010.UINT32
#define DMASSDTFSS010 DMASS.DTFSS010.UINT32
#define DMASSDTFSC010 DMASS.DTFSC010.UINT32
#define DMASSDTSA011 DMASS.DTSA011.UINT32
#define DMASSDTDA011 DMASS.DTDA011.UINT32
#define DMASSDTTC011 DMASS.DTTC011.UINT32
#define DMASSDTTCT011 DMASS.DTTCT011.UINT32
#define DMASSDTRSA011 DMASS.DTRSA011.UINT32
#define DMASSDTRDA011 DMASS.DTRDA011.UINT32
#define DMASSDTRTC011 DMASS.DTRTC011.UINT32
#define DMASSDTTCC011 DMASS.DTTCC011.UINT32
#define DMASSDTFSL011 DMASS.DTFSL011.UINT32
#define DMASSDTFST011 DMASS.DTFST011.UINT32
#define DMASSDTFSS011 DMASS.DTFSS011.UINT32
#define DMASSDTFSC011 DMASS.DTFSC011.UINT32
#define DMASSDTSA012 DMASS.DTSA012.UINT32
#define DMASSDTDA012 DMASS.DTDA012.UINT32
#define DMASSDTTC012 DMASS.DTTC012.UINT32
#define DMASSDTTCT012 DMASS.DTTCT012.UINT32
#define DMASSDTRSA012 DMASS.DTRSA012.UINT32
#define DMASSDTRDA012 DMASS.DTRDA012.UINT32
#define DMASSDTRTC012 DMASS.DTRTC012.UINT32
#define DMASSDTTCC012 DMASS.DTTCC012.UINT32
#define DMASSDTFSL012 DMASS.DTFSL012.UINT32
#define DMASSDTFST012 DMASS.DTFST012.UINT32
#define DMASSDTFSS012 DMASS.DTFSS012.UINT32
#define DMASSDTFSC012 DMASS.DTFSC012.UINT32
#define DMASSDTSA013 DMASS.DTSA013.UINT32
#define DMASSDTDA013 DMASS.DTDA013.UINT32
#define DMASSDTTC013 DMASS.DTTC013.UINT32
#define DMASSDTTCT013 DMASS.DTTCT013.UINT32
#define DMASSDTRSA013 DMASS.DTRSA013.UINT32
#define DMASSDTRDA013 DMASS.DTRDA013.UINT32
#define DMASSDTRTC013 DMASS.DTRTC013.UINT32
#define DMASSDTTCC013 DMASS.DTTCC013.UINT32
#define DMASSDTFSL013 DMASS.DTFSL013.UINT32
#define DMASSDTFST013 DMASS.DTFST013.UINT32
#define DMASSDTFSS013 DMASS.DTFSS013.UINT32
#define DMASSDTFSC013 DMASS.DTFSC013.UINT32
#define DMASSDTSA014 DMASS.DTSA014.UINT32
#define DMASSDTDA014 DMASS.DTDA014.UINT32
#define DMASSDTTC014 DMASS.DTTC014.UINT32
#define DMASSDTTCT014 DMASS.DTTCT014.UINT32
#define DMASSDTRSA014 DMASS.DTRSA014.UINT32
#define DMASSDTRDA014 DMASS.DTRDA014.UINT32
#define DMASSDTRTC014 DMASS.DTRTC014.UINT32
#define DMASSDTTCC014 DMASS.DTTCC014.UINT32
#define DMASSDTFSL014 DMASS.DTFSL014.UINT32
#define DMASSDTFST014 DMASS.DTFST014.UINT32
#define DMASSDTFSS014 DMASS.DTFSS014.UINT32
#define DMASSDTFSC014 DMASS.DTFSC014.UINT32
#define DMASSDTSA015 DMASS.DTSA015.UINT32
#define DMASSDTDA015 DMASS.DTDA015.UINT32
#define DMASSDTTC015 DMASS.DTTC015.UINT32
#define DMASSDTTCT015 DMASS.DTTCT015.UINT32
#define DMASSDTRSA015 DMASS.DTRSA015.UINT32
#define DMASSDTRDA015 DMASS.DTRDA015.UINT32
#define DMASSDTRTC015 DMASS.DTRTC015.UINT32
#define DMASSDTTCC015 DMASS.DTTCC015.UINT32
#define DMASSDTFSL015 DMASS.DTFSL015.UINT32
#define DMASSDTFST015 DMASS.DTFST015.UINT32
#define DMASSDTFSS015 DMASS.DTFSS015.UINT32
#define DMASSDTFSC015 DMASS.DTFSC015.UINT32
#define DMASSDTSA016 DMASS.DTSA016.UINT32
#define DMASSDTDA016 DMASS.DTDA016.UINT32
#define DMASSDTTC016 DMASS.DTTC016.UINT32
#define DMASSDTTCT016 DMASS.DTTCT016.UINT32
#define DMASSDTRSA016 DMASS.DTRSA016.UINT32
#define DMASSDTRDA016 DMASS.DTRDA016.UINT32
#define DMASSDTRTC016 DMASS.DTRTC016.UINT32
#define DMASSDTTCC016 DMASS.DTTCC016.UINT32
#define DMASSDTFSL016 DMASS.DTFSL016.UINT32
#define DMASSDTFST016 DMASS.DTFST016.UINT32
#define DMASSDTFSS016 DMASS.DTFSS016.UINT32
#define DMASSDTFSC016 DMASS.DTFSC016.UINT32
#define DMASSDTSA017 DMASS.DTSA017.UINT32
#define DMASSDTDA017 DMASS.DTDA017.UINT32
#define DMASSDTTC017 DMASS.DTTC017.UINT32
#define DMASSDTTCT017 DMASS.DTTCT017.UINT32
#define DMASSDTRSA017 DMASS.DTRSA017.UINT32
#define DMASSDTRDA017 DMASS.DTRDA017.UINT32
#define DMASSDTRTC017 DMASS.DTRTC017.UINT32
#define DMASSDTTCC017 DMASS.DTTCC017.UINT32
#define DMASSDTFSL017 DMASS.DTFSL017.UINT32
#define DMASSDTFST017 DMASS.DTFST017.UINT32
#define DMASSDTFSS017 DMASS.DTFSS017.UINT32
#define DMASSDTFSC017 DMASS.DTFSC017.UINT32
#define DMASSDTSA018 DMASS.DTSA018.UINT32
#define DMASSDTDA018 DMASS.DTDA018.UINT32
#define DMASSDTTC018 DMASS.DTTC018.UINT32
#define DMASSDTTCT018 DMASS.DTTCT018.UINT32
#define DMASSDTRSA018 DMASS.DTRSA018.UINT32
#define DMASSDTRDA018 DMASS.DTRDA018.UINT32
#define DMASSDTRTC018 DMASS.DTRTC018.UINT32
#define DMASSDTTCC018 DMASS.DTTCC018.UINT32
#define DMASSDTFSL018 DMASS.DTFSL018.UINT32
#define DMASSDTFST018 DMASS.DTFST018.UINT32
#define DMASSDTFSS018 DMASS.DTFSS018.UINT32
#define DMASSDTFSC018 DMASS.DTFSC018.UINT32
#define DMASSDTSA019 DMASS.DTSA019.UINT32
#define DMASSDTDA019 DMASS.DTDA019.UINT32
#define DMASSDTTC019 DMASS.DTTC019.UINT32
#define DMASSDTTCT019 DMASS.DTTCT019.UINT32
#define DMASSDTRSA019 DMASS.DTRSA019.UINT32
#define DMASSDTRDA019 DMASS.DTRDA019.UINT32
#define DMASSDTRTC019 DMASS.DTRTC019.UINT32
#define DMASSDTTCC019 DMASS.DTTCC019.UINT32
#define DMASSDTFSL019 DMASS.DTFSL019.UINT32
#define DMASSDTFST019 DMASS.DTFST019.UINT32
#define DMASSDTFSS019 DMASS.DTFSS019.UINT32
#define DMASSDTFSC019 DMASS.DTFSC019.UINT32
#define DMASSDTSA020 DMASS.DTSA020.UINT32
#define DMASSDTDA020 DMASS.DTDA020.UINT32
#define DMASSDTTC020 DMASS.DTTC020.UINT32
#define DMASSDTTCT020 DMASS.DTTCT020.UINT32
#define DMASSDTRSA020 DMASS.DTRSA020.UINT32
#define DMASSDTRDA020 DMASS.DTRDA020.UINT32
#define DMASSDTRTC020 DMASS.DTRTC020.UINT32
#define DMASSDTTCC020 DMASS.DTTCC020.UINT32
#define DMASSDTFSL020 DMASS.DTFSL020.UINT32
#define DMASSDTFST020 DMASS.DTFST020.UINT32
#define DMASSDTFSS020 DMASS.DTFSS020.UINT32
#define DMASSDTFSC020 DMASS.DTFSC020.UINT32
#define DMASSDTSA021 DMASS.DTSA021.UINT32
#define DMASSDTDA021 DMASS.DTDA021.UINT32
#define DMASSDTTC021 DMASS.DTTC021.UINT32
#define DMASSDTTCT021 DMASS.DTTCT021.UINT32
#define DMASSDTRSA021 DMASS.DTRSA021.UINT32
#define DMASSDTRDA021 DMASS.DTRDA021.UINT32
#define DMASSDTRTC021 DMASS.DTRTC021.UINT32
#define DMASSDTTCC021 DMASS.DTTCC021.UINT32
#define DMASSDTFSL021 DMASS.DTFSL021.UINT32
#define DMASSDTFST021 DMASS.DTFST021.UINT32
#define DMASSDTFSS021 DMASS.DTFSS021.UINT32
#define DMASSDTFSC021 DMASS.DTFSC021.UINT32
#define DMASSDTSA022 DMASS.DTSA022.UINT32
#define DMASSDTDA022 DMASS.DTDA022.UINT32
#define DMASSDTTC022 DMASS.DTTC022.UINT32
#define DMASSDTTCT022 DMASS.DTTCT022.UINT32
#define DMASSDTRSA022 DMASS.DTRSA022.UINT32
#define DMASSDTRDA022 DMASS.DTRDA022.UINT32
#define DMASSDTRTC022 DMASS.DTRTC022.UINT32
#define DMASSDTTCC022 DMASS.DTTCC022.UINT32
#define DMASSDTFSL022 DMASS.DTFSL022.UINT32
#define DMASSDTFST022 DMASS.DTFST022.UINT32
#define DMASSDTFSS022 DMASS.DTFSS022.UINT32
#define DMASSDTFSC022 DMASS.DTFSC022.UINT32
#define DMASSDTSA023 DMASS.DTSA023.UINT32
#define DMASSDTDA023 DMASS.DTDA023.UINT32
#define DMASSDTTC023 DMASS.DTTC023.UINT32
#define DMASSDTTCT023 DMASS.DTTCT023.UINT32
#define DMASSDTRSA023 DMASS.DTRSA023.UINT32
#define DMASSDTRDA023 DMASS.DTRDA023.UINT32
#define DMASSDTRTC023 DMASS.DTRTC023.UINT32
#define DMASSDTTCC023 DMASS.DTTCC023.UINT32
#define DMASSDTFSL023 DMASS.DTFSL023.UINT32
#define DMASSDTFST023 DMASS.DTFST023.UINT32
#define DMASSDTFSS023 DMASS.DTFSS023.UINT32
#define DMASSDTFSC023 DMASS.DTFSC023.UINT32
#define DMASSDTSA024 DMASS.DTSA024.UINT32
#define DMASSDTDA024 DMASS.DTDA024.UINT32
#define DMASSDTTC024 DMASS.DTTC024.UINT32
#define DMASSDTTCT024 DMASS.DTTCT024.UINT32
#define DMASSDTRSA024 DMASS.DTRSA024.UINT32
#define DMASSDTRDA024 DMASS.DTRDA024.UINT32
#define DMASSDTRTC024 DMASS.DTRTC024.UINT32
#define DMASSDTTCC024 DMASS.DTTCC024.UINT32
#define DMASSDTFSL024 DMASS.DTFSL024.UINT32
#define DMASSDTFST024 DMASS.DTFST024.UINT32
#define DMASSDTFSS024 DMASS.DTFSS024.UINT32
#define DMASSDTFSC024 DMASS.DTFSC024.UINT32
#define DMASSDTSA025 DMASS.DTSA025.UINT32
#define DMASSDTDA025 DMASS.DTDA025.UINT32
#define DMASSDTTC025 DMASS.DTTC025.UINT32
#define DMASSDTTCT025 DMASS.DTTCT025.UINT32
#define DMASSDTRSA025 DMASS.DTRSA025.UINT32
#define DMASSDTRDA025 DMASS.DTRDA025.UINT32
#define DMASSDTRTC025 DMASS.DTRTC025.UINT32
#define DMASSDTTCC025 DMASS.DTTCC025.UINT32
#define DMASSDTFSL025 DMASS.DTFSL025.UINT32
#define DMASSDTFST025 DMASS.DTFST025.UINT32
#define DMASSDTFSS025 DMASS.DTFSS025.UINT32
#define DMASSDTFSC025 DMASS.DTFSC025.UINT32
#define DMASSDTSA026 DMASS.DTSA026.UINT32
#define DMASSDTDA026 DMASS.DTDA026.UINT32
#define DMASSDTTC026 DMASS.DTTC026.UINT32
#define DMASSDTTCT026 DMASS.DTTCT026.UINT32
#define DMASSDTRSA026 DMASS.DTRSA026.UINT32
#define DMASSDTRDA026 DMASS.DTRDA026.UINT32
#define DMASSDTRTC026 DMASS.DTRTC026.UINT32
#define DMASSDTTCC026 DMASS.DTTCC026.UINT32
#define DMASSDTFSL026 DMASS.DTFSL026.UINT32
#define DMASSDTFST026 DMASS.DTFST026.UINT32
#define DMASSDTFSS026 DMASS.DTFSS026.UINT32
#define DMASSDTFSC026 DMASS.DTFSC026.UINT32
#define DMASSDTSA027 DMASS.DTSA027.UINT32
#define DMASSDTDA027 DMASS.DTDA027.UINT32
#define DMASSDTTC027 DMASS.DTTC027.UINT32
#define DMASSDTTCT027 DMASS.DTTCT027.UINT32
#define DMASSDTRSA027 DMASS.DTRSA027.UINT32
#define DMASSDTRDA027 DMASS.DTRDA027.UINT32
#define DMASSDTRTC027 DMASS.DTRTC027.UINT32
#define DMASSDTTCC027 DMASS.DTTCC027.UINT32
#define DMASSDTFSL027 DMASS.DTFSL027.UINT32
#define DMASSDTFST027 DMASS.DTFST027.UINT32
#define DMASSDTFSS027 DMASS.DTFSS027.UINT32
#define DMASSDTFSC027 DMASS.DTFSC027.UINT32
#define DMASSDTSA028 DMASS.DTSA028.UINT32
#define DMASSDTDA028 DMASS.DTDA028.UINT32
#define DMASSDTTC028 DMASS.DTTC028.UINT32
#define DMASSDTTCT028 DMASS.DTTCT028.UINT32
#define DMASSDTRSA028 DMASS.DTRSA028.UINT32
#define DMASSDTRDA028 DMASS.DTRDA028.UINT32
#define DMASSDTRTC028 DMASS.DTRTC028.UINT32
#define DMASSDTTCC028 DMASS.DTTCC028.UINT32
#define DMASSDTFSL028 DMASS.DTFSL028.UINT32
#define DMASSDTFST028 DMASS.DTFST028.UINT32
#define DMASSDTFSS028 DMASS.DTFSS028.UINT32
#define DMASSDTFSC028 DMASS.DTFSC028.UINT32
#define DMASSDTSA029 DMASS.DTSA029.UINT32
#define DMASSDTDA029 DMASS.DTDA029.UINT32
#define DMASSDTTC029 DMASS.DTTC029.UINT32
#define DMASSDTTCT029 DMASS.DTTCT029.UINT32
#define DMASSDTRSA029 DMASS.DTRSA029.UINT32
#define DMASSDTRDA029 DMASS.DTRDA029.UINT32
#define DMASSDTRTC029 DMASS.DTRTC029.UINT32
#define DMASSDTTCC029 DMASS.DTTCC029.UINT32
#define DMASSDTFSL029 DMASS.DTFSL029.UINT32
#define DMASSDTFST029 DMASS.DTFST029.UINT32
#define DMASSDTFSS029 DMASS.DTFSS029.UINT32
#define DMASSDTFSC029 DMASS.DTFSC029.UINT32
#define DMASSDTSA030 DMASS.DTSA030.UINT32
#define DMASSDTDA030 DMASS.DTDA030.UINT32
#define DMASSDTTC030 DMASS.DTTC030.UINT32
#define DMASSDTTCT030 DMASS.DTTCT030.UINT32
#define DMASSDTRSA030 DMASS.DTRSA030.UINT32
#define DMASSDTRDA030 DMASS.DTRDA030.UINT32
#define DMASSDTRTC030 DMASS.DTRTC030.UINT32
#define DMASSDTTCC030 DMASS.DTTCC030.UINT32
#define DMASSDTFSL030 DMASS.DTFSL030.UINT32
#define DMASSDTFST030 DMASS.DTFST030.UINT32
#define DMASSDTFSS030 DMASS.DTFSS030.UINT32
#define DMASSDTFSC030 DMASS.DTFSC030.UINT32
#define DMASSDTSA031 DMASS.DTSA031.UINT32
#define DMASSDTDA031 DMASS.DTDA031.UINT32
#define DMASSDTTC031 DMASS.DTTC031.UINT32
#define DMASSDTTCT031 DMASS.DTTCT031.UINT32
#define DMASSDTRSA031 DMASS.DTRSA031.UINT32
#define DMASSDTRDA031 DMASS.DTRDA031.UINT32
#define DMASSDTRTC031 DMASS.DTRTC031.UINT32
#define DMASSDTTCC031 DMASS.DTTCC031.UINT32
#define DMASSDTFSL031 DMASS.DTFSL031.UINT32
#define DMASSDTFST031 DMASS.DTFST031.UINT32
#define DMASSDTFSS031 DMASS.DTFSS031.UINT32
#define DMASSDTFSC031 DMASS.DTFSC031.UINT32
#define DMASSDTSA032 DMASS.DTSA032.UINT32
#define DMASSDTDA032 DMASS.DTDA032.UINT32
#define DMASSDTTC032 DMASS.DTTC032.UINT32
#define DMASSDTTCT032 DMASS.DTTCT032.UINT32
#define DMASSDTRSA032 DMASS.DTRSA032.UINT32
#define DMASSDTRDA032 DMASS.DTRDA032.UINT32
#define DMASSDTRTC032 DMASS.DTRTC032.UINT32
#define DMASSDTTCC032 DMASS.DTTCC032.UINT32
#define DMASSDTFSL032 DMASS.DTFSL032.UINT32
#define DMASSDTFST032 DMASS.DTFST032.UINT32
#define DMASSDTFSS032 DMASS.DTFSS032.UINT32
#define DMASSDTFSC032 DMASS.DTFSC032.UINT32
#define DMASSDTSA033 DMASS.DTSA033.UINT32
#define DMASSDTDA033 DMASS.DTDA033.UINT32
#define DMASSDTTC033 DMASS.DTTC033.UINT32
#define DMASSDTTCT033 DMASS.DTTCT033.UINT32
#define DMASSDTRSA033 DMASS.DTRSA033.UINT32
#define DMASSDTRDA033 DMASS.DTRDA033.UINT32
#define DMASSDTRTC033 DMASS.DTRTC033.UINT32
#define DMASSDTTCC033 DMASS.DTTCC033.UINT32
#define DMASSDTFSL033 DMASS.DTFSL033.UINT32
#define DMASSDTFST033 DMASS.DTFST033.UINT32
#define DMASSDTFSS033 DMASS.DTFSS033.UINT32
#define DMASSDTFSC033 DMASS.DTFSC033.UINT32
#define DMASSDTSA034 DMASS.DTSA034.UINT32
#define DMASSDTDA034 DMASS.DTDA034.UINT32
#define DMASSDTTC034 DMASS.DTTC034.UINT32
#define DMASSDTTCT034 DMASS.DTTCT034.UINT32
#define DMASSDTRSA034 DMASS.DTRSA034.UINT32
#define DMASSDTRDA034 DMASS.DTRDA034.UINT32
#define DMASSDTRTC034 DMASS.DTRTC034.UINT32
#define DMASSDTTCC034 DMASS.DTTCC034.UINT32
#define DMASSDTFSL034 DMASS.DTFSL034.UINT32
#define DMASSDTFST034 DMASS.DTFST034.UINT32
#define DMASSDTFSS034 DMASS.DTFSS034.UINT32
#define DMASSDTFSC034 DMASS.DTFSC034.UINT32
#define DMASSDTSA035 DMASS.DTSA035.UINT32
#define DMASSDTDA035 DMASS.DTDA035.UINT32
#define DMASSDTTC035 DMASS.DTTC035.UINT32
#define DMASSDTTCT035 DMASS.DTTCT035.UINT32
#define DMASSDTRSA035 DMASS.DTRSA035.UINT32
#define DMASSDTRDA035 DMASS.DTRDA035.UINT32
#define DMASSDTRTC035 DMASS.DTRTC035.UINT32
#define DMASSDTTCC035 DMASS.DTTCC035.UINT32
#define DMASSDTFSL035 DMASS.DTFSL035.UINT32
#define DMASSDTFST035 DMASS.DTFST035.UINT32
#define DMASSDTFSS035 DMASS.DTFSS035.UINT32
#define DMASSDTFSC035 DMASS.DTFSC035.UINT32
#define DMASSDTSA036 DMASS.DTSA036.UINT32
#define DMASSDTDA036 DMASS.DTDA036.UINT32
#define DMASSDTTC036 DMASS.DTTC036.UINT32
#define DMASSDTTCT036 DMASS.DTTCT036.UINT32
#define DMASSDTRSA036 DMASS.DTRSA036.UINT32
#define DMASSDTRDA036 DMASS.DTRDA036.UINT32
#define DMASSDTRTC036 DMASS.DTRTC036.UINT32
#define DMASSDTTCC036 DMASS.DTTCC036.UINT32
#define DMASSDTFSL036 DMASS.DTFSL036.UINT32
#define DMASSDTFST036 DMASS.DTFST036.UINT32
#define DMASSDTFSS036 DMASS.DTFSS036.UINT32
#define DMASSDTFSC036 DMASS.DTFSC036.UINT32
#define DMASSDTSA037 DMASS.DTSA037.UINT32
#define DMASSDTDA037 DMASS.DTDA037.UINT32
#define DMASSDTTC037 DMASS.DTTC037.UINT32
#define DMASSDTTCT037 DMASS.DTTCT037.UINT32
#define DMASSDTRSA037 DMASS.DTRSA037.UINT32
#define DMASSDTRDA037 DMASS.DTRDA037.UINT32
#define DMASSDTRTC037 DMASS.DTRTC037.UINT32
#define DMASSDTTCC037 DMASS.DTTCC037.UINT32
#define DMASSDTFSL037 DMASS.DTFSL037.UINT32
#define DMASSDTFST037 DMASS.DTFST037.UINT32
#define DMASSDTFSS037 DMASS.DTFSS037.UINT32
#define DMASSDTFSC037 DMASS.DTFSC037.UINT32
#define DMASSDTSA038 DMASS.DTSA038.UINT32
#define DMASSDTDA038 DMASS.DTDA038.UINT32
#define DMASSDTTC038 DMASS.DTTC038.UINT32
#define DMASSDTTCT038 DMASS.DTTCT038.UINT32
#define DMASSDTRSA038 DMASS.DTRSA038.UINT32
#define DMASSDTRDA038 DMASS.DTRDA038.UINT32
#define DMASSDTRTC038 DMASS.DTRTC038.UINT32
#define DMASSDTTCC038 DMASS.DTTCC038.UINT32
#define DMASSDTFSL038 DMASS.DTFSL038.UINT32
#define DMASSDTFST038 DMASS.DTFST038.UINT32
#define DMASSDTFSS038 DMASS.DTFSS038.UINT32
#define DMASSDTFSC038 DMASS.DTFSC038.UINT32
#define DMASSDTSA039 DMASS.DTSA039.UINT32
#define DMASSDTDA039 DMASS.DTDA039.UINT32
#define DMASSDTTC039 DMASS.DTTC039.UINT32
#define DMASSDTTCT039 DMASS.DTTCT039.UINT32
#define DMASSDTRSA039 DMASS.DTRSA039.UINT32
#define DMASSDTRDA039 DMASS.DTRDA039.UINT32
#define DMASSDTRTC039 DMASS.DTRTC039.UINT32
#define DMASSDTTCC039 DMASS.DTTCC039.UINT32
#define DMASSDTFSL039 DMASS.DTFSL039.UINT32
#define DMASSDTFST039 DMASS.DTFST039.UINT32
#define DMASSDTFSS039 DMASS.DTFSS039.UINT32
#define DMASSDTFSC039 DMASS.DTFSC039.UINT32
#define DMASSDTSA040 DMASS.DTSA040.UINT32
#define DMASSDTDA040 DMASS.DTDA040.UINT32
#define DMASSDTTC040 DMASS.DTTC040.UINT32
#define DMASSDTTCT040 DMASS.DTTCT040.UINT32
#define DMASSDTRSA040 DMASS.DTRSA040.UINT32
#define DMASSDTRDA040 DMASS.DTRDA040.UINT32
#define DMASSDTRTC040 DMASS.DTRTC040.UINT32
#define DMASSDTTCC040 DMASS.DTTCC040.UINT32
#define DMASSDTFSL040 DMASS.DTFSL040.UINT32
#define DMASSDTFST040 DMASS.DTFST040.UINT32
#define DMASSDTFSS040 DMASS.DTFSS040.UINT32
#define DMASSDTFSC040 DMASS.DTFSC040.UINT32
#define DMASSDTSA041 DMASS.DTSA041.UINT32
#define DMASSDTDA041 DMASS.DTDA041.UINT32
#define DMASSDTTC041 DMASS.DTTC041.UINT32
#define DMASSDTTCT041 DMASS.DTTCT041.UINT32
#define DMASSDTRSA041 DMASS.DTRSA041.UINT32
#define DMASSDTRDA041 DMASS.DTRDA041.UINT32
#define DMASSDTRTC041 DMASS.DTRTC041.UINT32
#define DMASSDTTCC041 DMASS.DTTCC041.UINT32
#define DMASSDTFSL041 DMASS.DTFSL041.UINT32
#define DMASSDTFST041 DMASS.DTFST041.UINT32
#define DMASSDTFSS041 DMASS.DTFSS041.UINT32
#define DMASSDTFSC041 DMASS.DTFSC041.UINT32
#define DMASSDTSA042 DMASS.DTSA042.UINT32
#define DMASSDTDA042 DMASS.DTDA042.UINT32
#define DMASSDTTC042 DMASS.DTTC042.UINT32
#define DMASSDTTCT042 DMASS.DTTCT042.UINT32
#define DMASSDTRSA042 DMASS.DTRSA042.UINT32
#define DMASSDTRDA042 DMASS.DTRDA042.UINT32
#define DMASSDTRTC042 DMASS.DTRTC042.UINT32
#define DMASSDTTCC042 DMASS.DTTCC042.UINT32
#define DMASSDTFSL042 DMASS.DTFSL042.UINT32
#define DMASSDTFST042 DMASS.DTFST042.UINT32
#define DMASSDTFSS042 DMASS.DTFSS042.UINT32
#define DMASSDTFSC042 DMASS.DTFSC042.UINT32
#define DMASSDTSA043 DMASS.DTSA043.UINT32
#define DMASSDTDA043 DMASS.DTDA043.UINT32
#define DMASSDTTC043 DMASS.DTTC043.UINT32
#define DMASSDTTCT043 DMASS.DTTCT043.UINT32
#define DMASSDTRSA043 DMASS.DTRSA043.UINT32
#define DMASSDTRDA043 DMASS.DTRDA043.UINT32
#define DMASSDTRTC043 DMASS.DTRTC043.UINT32
#define DMASSDTTCC043 DMASS.DTTCC043.UINT32
#define DMASSDTFSL043 DMASS.DTFSL043.UINT32
#define DMASSDTFST043 DMASS.DTFST043.UINT32
#define DMASSDTFSS043 DMASS.DTFSS043.UINT32
#define DMASSDTFSC043 DMASS.DTFSC043.UINT32
#define DMASSDTSA044 DMASS.DTSA044.UINT32
#define DMASSDTDA044 DMASS.DTDA044.UINT32
#define DMASSDTTC044 DMASS.DTTC044.UINT32
#define DMASSDTTCT044 DMASS.DTTCT044.UINT32
#define DMASSDTRSA044 DMASS.DTRSA044.UINT32
#define DMASSDTRDA044 DMASS.DTRDA044.UINT32
#define DMASSDTRTC044 DMASS.DTRTC044.UINT32
#define DMASSDTTCC044 DMASS.DTTCC044.UINT32
#define DMASSDTFSL044 DMASS.DTFSL044.UINT32
#define DMASSDTFST044 DMASS.DTFST044.UINT32
#define DMASSDTFSS044 DMASS.DTFSS044.UINT32
#define DMASSDTFSC044 DMASS.DTFSC044.UINT32
#define DMASSDTSA045 DMASS.DTSA045.UINT32
#define DMASSDTDA045 DMASS.DTDA045.UINT32
#define DMASSDTTC045 DMASS.DTTC045.UINT32
#define DMASSDTTCT045 DMASS.DTTCT045.UINT32
#define DMASSDTRSA045 DMASS.DTRSA045.UINT32
#define DMASSDTRDA045 DMASS.DTRDA045.UINT32
#define DMASSDTRTC045 DMASS.DTRTC045.UINT32
#define DMASSDTTCC045 DMASS.DTTCC045.UINT32
#define DMASSDTFSL045 DMASS.DTFSL045.UINT32
#define DMASSDTFST045 DMASS.DTFST045.UINT32
#define DMASSDTFSS045 DMASS.DTFSS045.UINT32
#define DMASSDTFSC045 DMASS.DTFSC045.UINT32
#define DMASSDTSA046 DMASS.DTSA046.UINT32
#define DMASSDTDA046 DMASS.DTDA046.UINT32
#define DMASSDTTC046 DMASS.DTTC046.UINT32
#define DMASSDTTCT046 DMASS.DTTCT046.UINT32
#define DMASSDTRSA046 DMASS.DTRSA046.UINT32
#define DMASSDTRDA046 DMASS.DTRDA046.UINT32
#define DMASSDTRTC046 DMASS.DTRTC046.UINT32
#define DMASSDTTCC046 DMASS.DTTCC046.UINT32
#define DMASSDTFSL046 DMASS.DTFSL046.UINT32
#define DMASSDTFST046 DMASS.DTFST046.UINT32
#define DMASSDTFSS046 DMASS.DTFSS046.UINT32
#define DMASSDTFSC046 DMASS.DTFSC046.UINT32
#define DMASSDTSA047 DMASS.DTSA047.UINT32
#define DMASSDTDA047 DMASS.DTDA047.UINT32
#define DMASSDTTC047 DMASS.DTTC047.UINT32
#define DMASSDTTCT047 DMASS.DTTCT047.UINT32
#define DMASSDTRSA047 DMASS.DTRSA047.UINT32
#define DMASSDTRDA047 DMASS.DTRDA047.UINT32
#define DMASSDTRTC047 DMASS.DTRTC047.UINT32
#define DMASSDTTCC047 DMASS.DTTCC047.UINT32
#define DMASSDTFSL047 DMASS.DTFSL047.UINT32
#define DMASSDTFST047 DMASS.DTFST047.UINT32
#define DMASSDTFSS047 DMASS.DTFSS047.UINT32
#define DMASSDTFSC047 DMASS.DTFSC047.UINT32
#define DMASSDTSA048 DMASS.DTSA048.UINT32
#define DMASSDTDA048 DMASS.DTDA048.UINT32
#define DMASSDTTC048 DMASS.DTTC048.UINT32
#define DMASSDTTCT048 DMASS.DTTCT048.UINT32
#define DMASSDTRSA048 DMASS.DTRSA048.UINT32
#define DMASSDTRDA048 DMASS.DTRDA048.UINT32
#define DMASSDTRTC048 DMASS.DTRTC048.UINT32
#define DMASSDTTCC048 DMASS.DTTCC048.UINT32
#define DMASSDTFSL048 DMASS.DTFSL048.UINT32
#define DMASSDTFST048 DMASS.DTFST048.UINT32
#define DMASSDTFSS048 DMASS.DTFSS048.UINT32
#define DMASSDTFSC048 DMASS.DTFSC048.UINT32
#define DMASSDTSA049 DMASS.DTSA049.UINT32
#define DMASSDTDA049 DMASS.DTDA049.UINT32
#define DMASSDTTC049 DMASS.DTTC049.UINT32
#define DMASSDTTCT049 DMASS.DTTCT049.UINT32
#define DMASSDTRSA049 DMASS.DTRSA049.UINT32
#define DMASSDTRDA049 DMASS.DTRDA049.UINT32
#define DMASSDTRTC049 DMASS.DTRTC049.UINT32
#define DMASSDTTCC049 DMASS.DTTCC049.UINT32
#define DMASSDTFSL049 DMASS.DTFSL049.UINT32
#define DMASSDTFST049 DMASS.DTFST049.UINT32
#define DMASSDTFSS049 DMASS.DTFSS049.UINT32
#define DMASSDTFSC049 DMASS.DTFSC049.UINT32
#define DMASSDTSA050 DMASS.DTSA050.UINT32
#define DMASSDTDA050 DMASS.DTDA050.UINT32
#define DMASSDTTC050 DMASS.DTTC050.UINT32
#define DMASSDTTCT050 DMASS.DTTCT050.UINT32
#define DMASSDTRSA050 DMASS.DTRSA050.UINT32
#define DMASSDTRDA050 DMASS.DTRDA050.UINT32
#define DMASSDTRTC050 DMASS.DTRTC050.UINT32
#define DMASSDTTCC050 DMASS.DTTCC050.UINT32
#define DMASSDTFSL050 DMASS.DTFSL050.UINT32
#define DMASSDTFST050 DMASS.DTFST050.UINT32
#define DMASSDTFSS050 DMASS.DTFSS050.UINT32
#define DMASSDTFSC050 DMASS.DTFSC050.UINT32
#define DMASSDTSA051 DMASS.DTSA051.UINT32
#define DMASSDTDA051 DMASS.DTDA051.UINT32
#define DMASSDTTC051 DMASS.DTTC051.UINT32
#define DMASSDTTCT051 DMASS.DTTCT051.UINT32
#define DMASSDTRSA051 DMASS.DTRSA051.UINT32
#define DMASSDTRDA051 DMASS.DTRDA051.UINT32
#define DMASSDTRTC051 DMASS.DTRTC051.UINT32
#define DMASSDTTCC051 DMASS.DTTCC051.UINT32
#define DMASSDTFSL051 DMASS.DTFSL051.UINT32
#define DMASSDTFST051 DMASS.DTFST051.UINT32
#define DMASSDTFSS051 DMASS.DTFSS051.UINT32
#define DMASSDTFSC051 DMASS.DTFSC051.UINT32
#define DMASSDTSA052 DMASS.DTSA052.UINT32
#define DMASSDTDA052 DMASS.DTDA052.UINT32
#define DMASSDTTC052 DMASS.DTTC052.UINT32
#define DMASSDTTCT052 DMASS.DTTCT052.UINT32
#define DMASSDTRSA052 DMASS.DTRSA052.UINT32
#define DMASSDTRDA052 DMASS.DTRDA052.UINT32
#define DMASSDTRTC052 DMASS.DTRTC052.UINT32
#define DMASSDTTCC052 DMASS.DTTCC052.UINT32
#define DMASSDTFSL052 DMASS.DTFSL052.UINT32
#define DMASSDTFST052 DMASS.DTFST052.UINT32
#define DMASSDTFSS052 DMASS.DTFSS052.UINT32
#define DMASSDTFSC052 DMASS.DTFSC052.UINT32
#define DMASSDTSA053 DMASS.DTSA053.UINT32
#define DMASSDTDA053 DMASS.DTDA053.UINT32
#define DMASSDTTC053 DMASS.DTTC053.UINT32
#define DMASSDTTCT053 DMASS.DTTCT053.UINT32
#define DMASSDTRSA053 DMASS.DTRSA053.UINT32
#define DMASSDTRDA053 DMASS.DTRDA053.UINT32
#define DMASSDTRTC053 DMASS.DTRTC053.UINT32
#define DMASSDTTCC053 DMASS.DTTCC053.UINT32
#define DMASSDTFSL053 DMASS.DTFSL053.UINT32
#define DMASSDTFST053 DMASS.DTFST053.UINT32
#define DMASSDTFSS053 DMASS.DTFSS053.UINT32
#define DMASSDTFSC053 DMASS.DTFSC053.UINT32
#define DMASSDTSA054 DMASS.DTSA054.UINT32
#define DMASSDTDA054 DMASS.DTDA054.UINT32
#define DMASSDTTC054 DMASS.DTTC054.UINT32
#define DMASSDTTCT054 DMASS.DTTCT054.UINT32
#define DMASSDTRSA054 DMASS.DTRSA054.UINT32
#define DMASSDTRDA054 DMASS.DTRDA054.UINT32
#define DMASSDTRTC054 DMASS.DTRTC054.UINT32
#define DMASSDTTCC054 DMASS.DTTCC054.UINT32
#define DMASSDTFSL054 DMASS.DTFSL054.UINT32
#define DMASSDTFST054 DMASS.DTFST054.UINT32
#define DMASSDTFSS054 DMASS.DTFSS054.UINT32
#define DMASSDTFSC054 DMASS.DTFSC054.UINT32
#define DMASSDTSA055 DMASS.DTSA055.UINT32
#define DMASSDTDA055 DMASS.DTDA055.UINT32
#define DMASSDTTC055 DMASS.DTTC055.UINT32
#define DMASSDTTCT055 DMASS.DTTCT055.UINT32
#define DMASSDTRSA055 DMASS.DTRSA055.UINT32
#define DMASSDTRDA055 DMASS.DTRDA055.UINT32
#define DMASSDTRTC055 DMASS.DTRTC055.UINT32
#define DMASSDTTCC055 DMASS.DTTCC055.UINT32
#define DMASSDTFSL055 DMASS.DTFSL055.UINT32
#define DMASSDTFST055 DMASS.DTFST055.UINT32
#define DMASSDTFSS055 DMASS.DTFSS055.UINT32
#define DMASSDTFSC055 DMASS.DTFSC055.UINT32
#define DMASSDTSA056 DMASS.DTSA056.UINT32
#define DMASSDTDA056 DMASS.DTDA056.UINT32
#define DMASSDTTC056 DMASS.DTTC056.UINT32
#define DMASSDTTCT056 DMASS.DTTCT056.UINT32
#define DMASSDTRSA056 DMASS.DTRSA056.UINT32
#define DMASSDTRDA056 DMASS.DTRDA056.UINT32
#define DMASSDTRTC056 DMASS.DTRTC056.UINT32
#define DMASSDTTCC056 DMASS.DTTCC056.UINT32
#define DMASSDTFSL056 DMASS.DTFSL056.UINT32
#define DMASSDTFST056 DMASS.DTFST056.UINT32
#define DMASSDTFSS056 DMASS.DTFSS056.UINT32
#define DMASSDTFSC056 DMASS.DTFSC056.UINT32
#define DMASSDTSA057 DMASS.DTSA057.UINT32
#define DMASSDTDA057 DMASS.DTDA057.UINT32
#define DMASSDTTC057 DMASS.DTTC057.UINT32
#define DMASSDTTCT057 DMASS.DTTCT057.UINT32
#define DMASSDTRSA057 DMASS.DTRSA057.UINT32
#define DMASSDTRDA057 DMASS.DTRDA057.UINT32
#define DMASSDTRTC057 DMASS.DTRTC057.UINT32
#define DMASSDTTCC057 DMASS.DTTCC057.UINT32
#define DMASSDTFSL057 DMASS.DTFSL057.UINT32
#define DMASSDTFST057 DMASS.DTFST057.UINT32
#define DMASSDTFSS057 DMASS.DTFSS057.UINT32
#define DMASSDTFSC057 DMASS.DTFSC057.UINT32
#define DMASSDTSA058 DMASS.DTSA058.UINT32
#define DMASSDTDA058 DMASS.DTDA058.UINT32
#define DMASSDTTC058 DMASS.DTTC058.UINT32
#define DMASSDTTCT058 DMASS.DTTCT058.UINT32
#define DMASSDTRSA058 DMASS.DTRSA058.UINT32
#define DMASSDTRDA058 DMASS.DTRDA058.UINT32
#define DMASSDTRTC058 DMASS.DTRTC058.UINT32
#define DMASSDTTCC058 DMASS.DTTCC058.UINT32
#define DMASSDTFSL058 DMASS.DTFSL058.UINT32
#define DMASSDTFST058 DMASS.DTFST058.UINT32
#define DMASSDTFSS058 DMASS.DTFSS058.UINT32
#define DMASSDTFSC058 DMASS.DTFSC058.UINT32
#define DMASSDTSA059 DMASS.DTSA059.UINT32
#define DMASSDTDA059 DMASS.DTDA059.UINT32
#define DMASSDTTC059 DMASS.DTTC059.UINT32
#define DMASSDTTCT059 DMASS.DTTCT059.UINT32
#define DMASSDTRSA059 DMASS.DTRSA059.UINT32
#define DMASSDTRDA059 DMASS.DTRDA059.UINT32
#define DMASSDTRTC059 DMASS.DTRTC059.UINT32
#define DMASSDTTCC059 DMASS.DTTCC059.UINT32
#define DMASSDTFSL059 DMASS.DTFSL059.UINT32
#define DMASSDTFST059 DMASS.DTFST059.UINT32
#define DMASSDTFSS059 DMASS.DTFSS059.UINT32
#define DMASSDTFSC059 DMASS.DTFSC059.UINT32
#define DMASSDTSA060 DMASS.DTSA060.UINT32
#define DMASSDTDA060 DMASS.DTDA060.UINT32
#define DMASSDTTC060 DMASS.DTTC060.UINT32
#define DMASSDTTCT060 DMASS.DTTCT060.UINT32
#define DMASSDTRSA060 DMASS.DTRSA060.UINT32
#define DMASSDTRDA060 DMASS.DTRDA060.UINT32
#define DMASSDTRTC060 DMASS.DTRTC060.UINT32
#define DMASSDTTCC060 DMASS.DTTCC060.UINT32
#define DMASSDTFSL060 DMASS.DTFSL060.UINT32
#define DMASSDTFST060 DMASS.DTFST060.UINT32
#define DMASSDTFSS060 DMASS.DTFSS060.UINT32
#define DMASSDTFSC060 DMASS.DTFSC060.UINT32
#define DMASSDTSA061 DMASS.DTSA061.UINT32
#define DMASSDTDA061 DMASS.DTDA061.UINT32
#define DMASSDTTC061 DMASS.DTTC061.UINT32
#define DMASSDTTCT061 DMASS.DTTCT061.UINT32
#define DMASSDTRSA061 DMASS.DTRSA061.UINT32
#define DMASSDTRDA061 DMASS.DTRDA061.UINT32
#define DMASSDTRTC061 DMASS.DTRTC061.UINT32
#define DMASSDTTCC061 DMASS.DTTCC061.UINT32
#define DMASSDTFSL061 DMASS.DTFSL061.UINT32
#define DMASSDTFST061 DMASS.DTFST061.UINT32
#define DMASSDTFSS061 DMASS.DTFSS061.UINT32
#define DMASSDTFSC061 DMASS.DTFSC061.UINT32
#define DMASSDTSA062 DMASS.DTSA062.UINT32
#define DMASSDTDA062 DMASS.DTDA062.UINT32
#define DMASSDTTC062 DMASS.DTTC062.UINT32
#define DMASSDTTCT062 DMASS.DTTCT062.UINT32
#define DMASSDTRSA062 DMASS.DTRSA062.UINT32
#define DMASSDTRDA062 DMASS.DTRDA062.UINT32
#define DMASSDTRTC062 DMASS.DTRTC062.UINT32
#define DMASSDTTCC062 DMASS.DTTCC062.UINT32
#define DMASSDTFSL062 DMASS.DTFSL062.UINT32
#define DMASSDTFST062 DMASS.DTFST062.UINT32
#define DMASSDTFSS062 DMASS.DTFSS062.UINT32
#define DMASSDTFSC062 DMASS.DTFSC062.UINT32
#define DMASSDTSA063 DMASS.DTSA063.UINT32
#define DMASSDTDA063 DMASS.DTDA063.UINT32
#define DMASSDTTC063 DMASS.DTTC063.UINT32
#define DMASSDTTCT063 DMASS.DTTCT063.UINT32
#define DMASSDTRSA063 DMASS.DTRSA063.UINT32
#define DMASSDTRDA063 DMASS.DTRDA063.UINT32
#define DMASSDTRTC063 DMASS.DTRTC063.UINT32
#define DMASSDTTCC063 DMASS.DTTCC063.UINT32
#define DMASSDTFSL063 DMASS.DTFSL063.UINT32
#define DMASSDTFST063 DMASS.DTFST063.UINT32
#define DMASSDTFSS063 DMASS.DTFSS063.UINT32
#define DMASSDTFSC063 DMASS.DTFSC063.UINT32
#define DMASSDTSA064 DMASS.DTSA064.UINT32
#define DMASSDTDA064 DMASS.DTDA064.UINT32
#define DMASSDTTC064 DMASS.DTTC064.UINT32
#define DMASSDTTCT064 DMASS.DTTCT064.UINT32
#define DMASSDTRSA064 DMASS.DTRSA064.UINT32
#define DMASSDTRDA064 DMASS.DTRDA064.UINT32
#define DMASSDTRTC064 DMASS.DTRTC064.UINT32
#define DMASSDTTCC064 DMASS.DTTCC064.UINT32
#define DMASSDTFSL064 DMASS.DTFSL064.UINT32
#define DMASSDTFST064 DMASS.DTFST064.UINT32
#define DMASSDTFSS064 DMASS.DTFSS064.UINT32
#define DMASSDTFSC064 DMASS.DTFSC064.UINT32
#define DMASSDTSA065 DMASS.DTSA065.UINT32
#define DMASSDTDA065 DMASS.DTDA065.UINT32
#define DMASSDTTC065 DMASS.DTTC065.UINT32
#define DMASSDTTCT065 DMASS.DTTCT065.UINT32
#define DMASSDTRSA065 DMASS.DTRSA065.UINT32
#define DMASSDTRDA065 DMASS.DTRDA065.UINT32
#define DMASSDTRTC065 DMASS.DTRTC065.UINT32
#define DMASSDTTCC065 DMASS.DTTCC065.UINT32
#define DMASSDTFSL065 DMASS.DTFSL065.UINT32
#define DMASSDTFST065 DMASS.DTFST065.UINT32
#define DMASSDTFSS065 DMASS.DTFSS065.UINT32
#define DMASSDTFSC065 DMASS.DTFSC065.UINT32
#define DMASSDTSA066 DMASS.DTSA066.UINT32
#define DMASSDTDA066 DMASS.DTDA066.UINT32
#define DMASSDTTC066 DMASS.DTTC066.UINT32
#define DMASSDTTCT066 DMASS.DTTCT066.UINT32
#define DMASSDTRSA066 DMASS.DTRSA066.UINT32
#define DMASSDTRDA066 DMASS.DTRDA066.UINT32
#define DMASSDTRTC066 DMASS.DTRTC066.UINT32
#define DMASSDTTCC066 DMASS.DTTCC066.UINT32
#define DMASSDTFSL066 DMASS.DTFSL066.UINT32
#define DMASSDTFST066 DMASS.DTFST066.UINT32
#define DMASSDTFSS066 DMASS.DTFSS066.UINT32
#define DMASSDTFSC066 DMASS.DTFSC066.UINT32
#define DMASSDTSA067 DMASS.DTSA067.UINT32
#define DMASSDTDA067 DMASS.DTDA067.UINT32
#define DMASSDTTC067 DMASS.DTTC067.UINT32
#define DMASSDTTCT067 DMASS.DTTCT067.UINT32
#define DMASSDTRSA067 DMASS.DTRSA067.UINT32
#define DMASSDTRDA067 DMASS.DTRDA067.UINT32
#define DMASSDTRTC067 DMASS.DTRTC067.UINT32
#define DMASSDTTCC067 DMASS.DTTCC067.UINT32
#define DMASSDTFSL067 DMASS.DTFSL067.UINT32
#define DMASSDTFST067 DMASS.DTFST067.UINT32
#define DMASSDTFSS067 DMASS.DTFSS067.UINT32
#define DMASSDTFSC067 DMASS.DTFSC067.UINT32
#define DMASSDTSA068 DMASS.DTSA068.UINT32
#define DMASSDTDA068 DMASS.DTDA068.UINT32
#define DMASSDTTC068 DMASS.DTTC068.UINT32
#define DMASSDTTCT068 DMASS.DTTCT068.UINT32
#define DMASSDTRSA068 DMASS.DTRSA068.UINT32
#define DMASSDTRDA068 DMASS.DTRDA068.UINT32
#define DMASSDTRTC068 DMASS.DTRTC068.UINT32
#define DMASSDTTCC068 DMASS.DTTCC068.UINT32
#define DMASSDTFSL068 DMASS.DTFSL068.UINT32
#define DMASSDTFST068 DMASS.DTFST068.UINT32
#define DMASSDTFSS068 DMASS.DTFSS068.UINT32
#define DMASSDTFSC068 DMASS.DTFSC068.UINT32
#define DMASSDTSA069 DMASS.DTSA069.UINT32
#define DMASSDTDA069 DMASS.DTDA069.UINT32
#define DMASSDTTC069 DMASS.DTTC069.UINT32
#define DMASSDTTCT069 DMASS.DTTCT069.UINT32
#define DMASSDTRSA069 DMASS.DTRSA069.UINT32
#define DMASSDTRDA069 DMASS.DTRDA069.UINT32
#define DMASSDTRTC069 DMASS.DTRTC069.UINT32
#define DMASSDTTCC069 DMASS.DTTCC069.UINT32
#define DMASSDTFSL069 DMASS.DTFSL069.UINT32
#define DMASSDTFST069 DMASS.DTFST069.UINT32
#define DMASSDTFSS069 DMASS.DTFSS069.UINT32
#define DMASSDTFSC069 DMASS.DTFSC069.UINT32
#define DMASSDTSA070 DMASS.DTSA070.UINT32
#define DMASSDTDA070 DMASS.DTDA070.UINT32
#define DMASSDTTC070 DMASS.DTTC070.UINT32
#define DMASSDTTCT070 DMASS.DTTCT070.UINT32
#define DMASSDTRSA070 DMASS.DTRSA070.UINT32
#define DMASSDTRDA070 DMASS.DTRDA070.UINT32
#define DMASSDTRTC070 DMASS.DTRTC070.UINT32
#define DMASSDTTCC070 DMASS.DTTCC070.UINT32
#define DMASSDTFSL070 DMASS.DTFSL070.UINT32
#define DMASSDTFST070 DMASS.DTFST070.UINT32
#define DMASSDTFSS070 DMASS.DTFSS070.UINT32
#define DMASSDTFSC070 DMASS.DTFSC070.UINT32
#define DMASSDTSA071 DMASS.DTSA071.UINT32
#define DMASSDTDA071 DMASS.DTDA071.UINT32
#define DMASSDTTC071 DMASS.DTTC071.UINT32
#define DMASSDTTCT071 DMASS.DTTCT071.UINT32
#define DMASSDTRSA071 DMASS.DTRSA071.UINT32
#define DMASSDTRDA071 DMASS.DTRDA071.UINT32
#define DMASSDTRTC071 DMASS.DTRTC071.UINT32
#define DMASSDTTCC071 DMASS.DTTCC071.UINT32
#define DMASSDTFSL071 DMASS.DTFSL071.UINT32
#define DMASSDTFST071 DMASS.DTFST071.UINT32
#define DMASSDTFSS071 DMASS.DTFSS071.UINT32
#define DMASSDTFSC071 DMASS.DTFSC071.UINT32
#define DMASSDTSA072 DMASS.DTSA072.UINT32
#define DMASSDTDA072 DMASS.DTDA072.UINT32
#define DMASSDTTC072 DMASS.DTTC072.UINT32
#define DMASSDTTCT072 DMASS.DTTCT072.UINT32
#define DMASSDTRSA072 DMASS.DTRSA072.UINT32
#define DMASSDTRDA072 DMASS.DTRDA072.UINT32
#define DMASSDTRTC072 DMASS.DTRTC072.UINT32
#define DMASSDTTCC072 DMASS.DTTCC072.UINT32
#define DMASSDTFSL072 DMASS.DTFSL072.UINT32
#define DMASSDTFST072 DMASS.DTFST072.UINT32
#define DMASSDTFSS072 DMASS.DTFSS072.UINT32
#define DMASSDTFSC072 DMASS.DTFSC072.UINT32
#define DMASSDTSA073 DMASS.DTSA073.UINT32
#define DMASSDTDA073 DMASS.DTDA073.UINT32
#define DMASSDTTC073 DMASS.DTTC073.UINT32
#define DMASSDTTCT073 DMASS.DTTCT073.UINT32
#define DMASSDTRSA073 DMASS.DTRSA073.UINT32
#define DMASSDTRDA073 DMASS.DTRDA073.UINT32
#define DMASSDTRTC073 DMASS.DTRTC073.UINT32
#define DMASSDTTCC073 DMASS.DTTCC073.UINT32
#define DMASSDTFSL073 DMASS.DTFSL073.UINT32
#define DMASSDTFST073 DMASS.DTFST073.UINT32
#define DMASSDTFSS073 DMASS.DTFSS073.UINT32
#define DMASSDTFSC073 DMASS.DTFSC073.UINT32
#define DMASSDTSA074 DMASS.DTSA074.UINT32
#define DMASSDTDA074 DMASS.DTDA074.UINT32
#define DMASSDTTC074 DMASS.DTTC074.UINT32
#define DMASSDTTCT074 DMASS.DTTCT074.UINT32
#define DMASSDTRSA074 DMASS.DTRSA074.UINT32
#define DMASSDTRDA074 DMASS.DTRDA074.UINT32
#define DMASSDTRTC074 DMASS.DTRTC074.UINT32
#define DMASSDTTCC074 DMASS.DTTCC074.UINT32
#define DMASSDTFSL074 DMASS.DTFSL074.UINT32
#define DMASSDTFST074 DMASS.DTFST074.UINT32
#define DMASSDTFSS074 DMASS.DTFSS074.UINT32
#define DMASSDTFSC074 DMASS.DTFSC074.UINT32
#define DMASSDTSA075 DMASS.DTSA075.UINT32
#define DMASSDTDA075 DMASS.DTDA075.UINT32
#define DMASSDTTC075 DMASS.DTTC075.UINT32
#define DMASSDTTCT075 DMASS.DTTCT075.UINT32
#define DMASSDTRSA075 DMASS.DTRSA075.UINT32
#define DMASSDTRDA075 DMASS.DTRDA075.UINT32
#define DMASSDTRTC075 DMASS.DTRTC075.UINT32
#define DMASSDTTCC075 DMASS.DTTCC075.UINT32
#define DMASSDTFSL075 DMASS.DTFSL075.UINT32
#define DMASSDTFST075 DMASS.DTFST075.UINT32
#define DMASSDTFSS075 DMASS.DTFSS075.UINT32
#define DMASSDTFSC075 DMASS.DTFSC075.UINT32
#define DMASSDTSA076 DMASS.DTSA076.UINT32
#define DMASSDTDA076 DMASS.DTDA076.UINT32
#define DMASSDTTC076 DMASS.DTTC076.UINT32
#define DMASSDTTCT076 DMASS.DTTCT076.UINT32
#define DMASSDTRSA076 DMASS.DTRSA076.UINT32
#define DMASSDTRDA076 DMASS.DTRDA076.UINT32
#define DMASSDTRTC076 DMASS.DTRTC076.UINT32
#define DMASSDTTCC076 DMASS.DTTCC076.UINT32
#define DMASSDTFSL076 DMASS.DTFSL076.UINT32
#define DMASSDTFST076 DMASS.DTFST076.UINT32
#define DMASSDTFSS076 DMASS.DTFSS076.UINT32
#define DMASSDTFSC076 DMASS.DTFSC076.UINT32
#define DMASSDTSA077 DMASS.DTSA077.UINT32
#define DMASSDTDA077 DMASS.DTDA077.UINT32
#define DMASSDTTC077 DMASS.DTTC077.UINT32
#define DMASSDTTCT077 DMASS.DTTCT077.UINT32
#define DMASSDTRSA077 DMASS.DTRSA077.UINT32
#define DMASSDTRDA077 DMASS.DTRDA077.UINT32
#define DMASSDTRTC077 DMASS.DTRTC077.UINT32
#define DMASSDTTCC077 DMASS.DTTCC077.UINT32
#define DMASSDTFSL077 DMASS.DTFSL077.UINT32
#define DMASSDTFST077 DMASS.DTFST077.UINT32
#define DMASSDTFSS077 DMASS.DTFSS077.UINT32
#define DMASSDTFSC077 DMASS.DTFSC077.UINT32
#define DMASSDTSA078 DMASS.DTSA078.UINT32
#define DMASSDTDA078 DMASS.DTDA078.UINT32
#define DMASSDTTC078 DMASS.DTTC078.UINT32
#define DMASSDTTCT078 DMASS.DTTCT078.UINT32
#define DMASSDTRSA078 DMASS.DTRSA078.UINT32
#define DMASSDTRDA078 DMASS.DTRDA078.UINT32
#define DMASSDTRTC078 DMASS.DTRTC078.UINT32
#define DMASSDTTCC078 DMASS.DTTCC078.UINT32
#define DMASSDTFSL078 DMASS.DTFSL078.UINT32
#define DMASSDTFST078 DMASS.DTFST078.UINT32
#define DMASSDTFSS078 DMASS.DTFSS078.UINT32
#define DMASSDTFSC078 DMASS.DTFSC078.UINT32
#define DMASSDTSA079 DMASS.DTSA079.UINT32
#define DMASSDTDA079 DMASS.DTDA079.UINT32
#define DMASSDTTC079 DMASS.DTTC079.UINT32
#define DMASSDTTCT079 DMASS.DTTCT079.UINT32
#define DMASSDTRSA079 DMASS.DTRSA079.UINT32
#define DMASSDTRDA079 DMASS.DTRDA079.UINT32
#define DMASSDTRTC079 DMASS.DTRTC079.UINT32
#define DMASSDTTCC079 DMASS.DTTCC079.UINT32
#define DMASSDTFSL079 DMASS.DTFSL079.UINT32
#define DMASSDTFST079 DMASS.DTFST079.UINT32
#define DMASSDTFSS079 DMASS.DTFSS079.UINT32
#define DMASSDTFSC079 DMASS.DTFSC079.UINT32
#define DMASSDTSA080 DMASS.DTSA080.UINT32
#define DMASSDTDA080 DMASS.DTDA080.UINT32
#define DMASSDTTC080 DMASS.DTTC080.UINT32
#define DMASSDTTCT080 DMASS.DTTCT080.UINT32
#define DMASSDTRSA080 DMASS.DTRSA080.UINT32
#define DMASSDTRDA080 DMASS.DTRDA080.UINT32
#define DMASSDTRTC080 DMASS.DTRTC080.UINT32
#define DMASSDTTCC080 DMASS.DTTCC080.UINT32
#define DMASSDTFSL080 DMASS.DTFSL080.UINT32
#define DMASSDTFST080 DMASS.DTFST080.UINT32
#define DMASSDTFSS080 DMASS.DTFSS080.UINT32
#define DMASSDTFSC080 DMASS.DTFSC080.UINT32
#define DMASSDTSA081 DMASS.DTSA081.UINT32
#define DMASSDTDA081 DMASS.DTDA081.UINT32
#define DMASSDTTC081 DMASS.DTTC081.UINT32
#define DMASSDTTCT081 DMASS.DTTCT081.UINT32
#define DMASSDTRSA081 DMASS.DTRSA081.UINT32
#define DMASSDTRDA081 DMASS.DTRDA081.UINT32
#define DMASSDTRTC081 DMASS.DTRTC081.UINT32
#define DMASSDTTCC081 DMASS.DTTCC081.UINT32
#define DMASSDTFSL081 DMASS.DTFSL081.UINT32
#define DMASSDTFST081 DMASS.DTFST081.UINT32
#define DMASSDTFSS081 DMASS.DTFSS081.UINT32
#define DMASSDTFSC081 DMASS.DTFSC081.UINT32
#define DMASSDTSA082 DMASS.DTSA082.UINT32
#define DMASSDTDA082 DMASS.DTDA082.UINT32
#define DMASSDTTC082 DMASS.DTTC082.UINT32
#define DMASSDTTCT082 DMASS.DTTCT082.UINT32
#define DMASSDTRSA082 DMASS.DTRSA082.UINT32
#define DMASSDTRDA082 DMASS.DTRDA082.UINT32
#define DMASSDTRTC082 DMASS.DTRTC082.UINT32
#define DMASSDTTCC082 DMASS.DTTCC082.UINT32
#define DMASSDTFSL082 DMASS.DTFSL082.UINT32
#define DMASSDTFST082 DMASS.DTFST082.UINT32
#define DMASSDTFSS082 DMASS.DTFSS082.UINT32
#define DMASSDTFSC082 DMASS.DTFSC082.UINT32
#define DMASSDTSA083 DMASS.DTSA083.UINT32
#define DMASSDTDA083 DMASS.DTDA083.UINT32
#define DMASSDTTC083 DMASS.DTTC083.UINT32
#define DMASSDTTCT083 DMASS.DTTCT083.UINT32
#define DMASSDTRSA083 DMASS.DTRSA083.UINT32
#define DMASSDTRDA083 DMASS.DTRDA083.UINT32
#define DMASSDTRTC083 DMASS.DTRTC083.UINT32
#define DMASSDTTCC083 DMASS.DTTCC083.UINT32
#define DMASSDTFSL083 DMASS.DTFSL083.UINT32
#define DMASSDTFST083 DMASS.DTFST083.UINT32
#define DMASSDTFSS083 DMASS.DTFSS083.UINT32
#define DMASSDTFSC083 DMASS.DTFSC083.UINT32
#define DMASSDTSA084 DMASS.DTSA084.UINT32
#define DMASSDTDA084 DMASS.DTDA084.UINT32
#define DMASSDTTC084 DMASS.DTTC084.UINT32
#define DMASSDTTCT084 DMASS.DTTCT084.UINT32
#define DMASSDTRSA084 DMASS.DTRSA084.UINT32
#define DMASSDTRDA084 DMASS.DTRDA084.UINT32
#define DMASSDTRTC084 DMASS.DTRTC084.UINT32
#define DMASSDTTCC084 DMASS.DTTCC084.UINT32
#define DMASSDTFSL084 DMASS.DTFSL084.UINT32
#define DMASSDTFST084 DMASS.DTFST084.UINT32
#define DMASSDTFSS084 DMASS.DTFSS084.UINT32
#define DMASSDTFSC084 DMASS.DTFSC084.UINT32
#define DMASSDTSA085 DMASS.DTSA085.UINT32
#define DMASSDTDA085 DMASS.DTDA085.UINT32
#define DMASSDTTC085 DMASS.DTTC085.UINT32
#define DMASSDTTCT085 DMASS.DTTCT085.UINT32
#define DMASSDTRSA085 DMASS.DTRSA085.UINT32
#define DMASSDTRDA085 DMASS.DTRDA085.UINT32
#define DMASSDTRTC085 DMASS.DTRTC085.UINT32
#define DMASSDTTCC085 DMASS.DTTCC085.UINT32
#define DMASSDTFSL085 DMASS.DTFSL085.UINT32
#define DMASSDTFST085 DMASS.DTFST085.UINT32
#define DMASSDTFSS085 DMASS.DTFSS085.UINT32
#define DMASSDTFSC085 DMASS.DTFSC085.UINT32
#define DMASSDTSA086 DMASS.DTSA086.UINT32
#define DMASSDTDA086 DMASS.DTDA086.UINT32
#define DMASSDTTC086 DMASS.DTTC086.UINT32
#define DMASSDTTCT086 DMASS.DTTCT086.UINT32
#define DMASSDTRSA086 DMASS.DTRSA086.UINT32
#define DMASSDTRDA086 DMASS.DTRDA086.UINT32
#define DMASSDTRTC086 DMASS.DTRTC086.UINT32
#define DMASSDTTCC086 DMASS.DTTCC086.UINT32
#define DMASSDTFSL086 DMASS.DTFSL086.UINT32
#define DMASSDTFST086 DMASS.DTFST086.UINT32
#define DMASSDTFSS086 DMASS.DTFSS086.UINT32
#define DMASSDTFSC086 DMASS.DTFSC086.UINT32
#define DMASSDTSA087 DMASS.DTSA087.UINT32
#define DMASSDTDA087 DMASS.DTDA087.UINT32
#define DMASSDTTC087 DMASS.DTTC087.UINT32
#define DMASSDTTCT087 DMASS.DTTCT087.UINT32
#define DMASSDTRSA087 DMASS.DTRSA087.UINT32
#define DMASSDTRDA087 DMASS.DTRDA087.UINT32
#define DMASSDTRTC087 DMASS.DTRTC087.UINT32
#define DMASSDTTCC087 DMASS.DTTCC087.UINT32
#define DMASSDTFSL087 DMASS.DTFSL087.UINT32
#define DMASSDTFST087 DMASS.DTFST087.UINT32
#define DMASSDTFSS087 DMASS.DTFSS087.UINT32
#define DMASSDTFSC087 DMASS.DTFSC087.UINT32
#define DMASSDTSA088 DMASS.DTSA088.UINT32
#define DMASSDTDA088 DMASS.DTDA088.UINT32
#define DMASSDTTC088 DMASS.DTTC088.UINT32
#define DMASSDTTCT088 DMASS.DTTCT088.UINT32
#define DMASSDTRSA088 DMASS.DTRSA088.UINT32
#define DMASSDTRDA088 DMASS.DTRDA088.UINT32
#define DMASSDTRTC088 DMASS.DTRTC088.UINT32
#define DMASSDTTCC088 DMASS.DTTCC088.UINT32
#define DMASSDTFSL088 DMASS.DTFSL088.UINT32
#define DMASSDTFST088 DMASS.DTFST088.UINT32
#define DMASSDTFSS088 DMASS.DTFSS088.UINT32
#define DMASSDTFSC088 DMASS.DTFSC088.UINT32
#define DMASSDTSA089 DMASS.DTSA089.UINT32
#define DMASSDTDA089 DMASS.DTDA089.UINT32
#define DMASSDTTC089 DMASS.DTTC089.UINT32
#define DMASSDTTCT089 DMASS.DTTCT089.UINT32
#define DMASSDTRSA089 DMASS.DTRSA089.UINT32
#define DMASSDTRDA089 DMASS.DTRDA089.UINT32
#define DMASSDTRTC089 DMASS.DTRTC089.UINT32
#define DMASSDTTCC089 DMASS.DTTCC089.UINT32
#define DMASSDTFSL089 DMASS.DTFSL089.UINT32
#define DMASSDTFST089 DMASS.DTFST089.UINT32
#define DMASSDTFSS089 DMASS.DTFSS089.UINT32
#define DMASSDTFSC089 DMASS.DTFSC089.UINT32
#define DMASSDTSA090 DMASS.DTSA090.UINT32
#define DMASSDTDA090 DMASS.DTDA090.UINT32
#define DMASSDTTC090 DMASS.DTTC090.UINT32
#define DMASSDTTCT090 DMASS.DTTCT090.UINT32
#define DMASSDTRSA090 DMASS.DTRSA090.UINT32
#define DMASSDTRDA090 DMASS.DTRDA090.UINT32
#define DMASSDTRTC090 DMASS.DTRTC090.UINT32
#define DMASSDTTCC090 DMASS.DTTCC090.UINT32
#define DMASSDTFSL090 DMASS.DTFSL090.UINT32
#define DMASSDTFST090 DMASS.DTFST090.UINT32
#define DMASSDTFSS090 DMASS.DTFSS090.UINT32
#define DMASSDTFSC090 DMASS.DTFSC090.UINT32
#define DMASSDTSA091 DMASS.DTSA091.UINT32
#define DMASSDTDA091 DMASS.DTDA091.UINT32
#define DMASSDTTC091 DMASS.DTTC091.UINT32
#define DMASSDTTCT091 DMASS.DTTCT091.UINT32
#define DMASSDTRSA091 DMASS.DTRSA091.UINT32
#define DMASSDTRDA091 DMASS.DTRDA091.UINT32
#define DMASSDTRTC091 DMASS.DTRTC091.UINT32
#define DMASSDTTCC091 DMASS.DTTCC091.UINT32
#define DMASSDTFSL091 DMASS.DTFSL091.UINT32
#define DMASSDTFST091 DMASS.DTFST091.UINT32
#define DMASSDTFSS091 DMASS.DTFSS091.UINT32
#define DMASSDTFSC091 DMASS.DTFSC091.UINT32
#define DMASSDTSA092 DMASS.DTSA092.UINT32
#define DMASSDTDA092 DMASS.DTDA092.UINT32
#define DMASSDTTC092 DMASS.DTTC092.UINT32
#define DMASSDTTCT092 DMASS.DTTCT092.UINT32
#define DMASSDTRSA092 DMASS.DTRSA092.UINT32
#define DMASSDTRDA092 DMASS.DTRDA092.UINT32
#define DMASSDTRTC092 DMASS.DTRTC092.UINT32
#define DMASSDTTCC092 DMASS.DTTCC092.UINT32
#define DMASSDTFSL092 DMASS.DTFSL092.UINT32
#define DMASSDTFST092 DMASS.DTFST092.UINT32
#define DMASSDTFSS092 DMASS.DTFSS092.UINT32
#define DMASSDTFSC092 DMASS.DTFSC092.UINT32
#define DMASSDTSA093 DMASS.DTSA093.UINT32
#define DMASSDTDA093 DMASS.DTDA093.UINT32
#define DMASSDTTC093 DMASS.DTTC093.UINT32
#define DMASSDTTCT093 DMASS.DTTCT093.UINT32
#define DMASSDTRSA093 DMASS.DTRSA093.UINT32
#define DMASSDTRDA093 DMASS.DTRDA093.UINT32
#define DMASSDTRTC093 DMASS.DTRTC093.UINT32
#define DMASSDTTCC093 DMASS.DTTCC093.UINT32
#define DMASSDTFSL093 DMASS.DTFSL093.UINT32
#define DMASSDTFST093 DMASS.DTFST093.UINT32
#define DMASSDTFSS093 DMASS.DTFSS093.UINT32
#define DMASSDTFSC093 DMASS.DTFSC093.UINT32
#define DMASSDTSA094 DMASS.DTSA094.UINT32
#define DMASSDTDA094 DMASS.DTDA094.UINT32
#define DMASSDTTC094 DMASS.DTTC094.UINT32
#define DMASSDTTCT094 DMASS.DTTCT094.UINT32
#define DMASSDTRSA094 DMASS.DTRSA094.UINT32
#define DMASSDTRDA094 DMASS.DTRDA094.UINT32
#define DMASSDTRTC094 DMASS.DTRTC094.UINT32
#define DMASSDTTCC094 DMASS.DTTCC094.UINT32
#define DMASSDTFSL094 DMASS.DTFSL094.UINT32
#define DMASSDTFST094 DMASS.DTFST094.UINT32
#define DMASSDTFSS094 DMASS.DTFSS094.UINT32
#define DMASSDTFSC094 DMASS.DTFSC094.UINT32
#define DMASSDTSA095 DMASS.DTSA095.UINT32
#define DMASSDTDA095 DMASS.DTDA095.UINT32
#define DMASSDTTC095 DMASS.DTTC095.UINT32
#define DMASSDTTCT095 DMASS.DTTCT095.UINT32
#define DMASSDTRSA095 DMASS.DTRSA095.UINT32
#define DMASSDTRDA095 DMASS.DTRDA095.UINT32
#define DMASSDTRTC095 DMASS.DTRTC095.UINT32
#define DMASSDTTCC095 DMASS.DTTCC095.UINT32
#define DMASSDTFSL095 DMASS.DTFSL095.UINT32
#define DMASSDTFST095 DMASS.DTFST095.UINT32
#define DMASSDTFSS095 DMASS.DTFSS095.UINT32
#define DMASSDTFSC095 DMASS.DTFSC095.UINT32
#define DMASSDTSA096 DMASS.DTSA096.UINT32
#define DMASSDTDA096 DMASS.DTDA096.UINT32
#define DMASSDTTC096 DMASS.DTTC096.UINT32
#define DMASSDTTCT096 DMASS.DTTCT096.UINT32
#define DMASSDTRSA096 DMASS.DTRSA096.UINT32
#define DMASSDTRDA096 DMASS.DTRDA096.UINT32
#define DMASSDTRTC096 DMASS.DTRTC096.UINT32
#define DMASSDTTCC096 DMASS.DTTCC096.UINT32
#define DMASSDTFSL096 DMASS.DTFSL096.UINT32
#define DMASSDTFST096 DMASS.DTFST096.UINT32
#define DMASSDTFSS096 DMASS.DTFSS096.UINT32
#define DMASSDTFSC096 DMASS.DTFSC096.UINT32
#define DMASSDTSA097 DMASS.DTSA097.UINT32
#define DMASSDTDA097 DMASS.DTDA097.UINT32
#define DMASSDTTC097 DMASS.DTTC097.UINT32
#define DMASSDTTCT097 DMASS.DTTCT097.UINT32
#define DMASSDTRSA097 DMASS.DTRSA097.UINT32
#define DMASSDTRDA097 DMASS.DTRDA097.UINT32
#define DMASSDTRTC097 DMASS.DTRTC097.UINT32
#define DMASSDTTCC097 DMASS.DTTCC097.UINT32
#define DMASSDTFSL097 DMASS.DTFSL097.UINT32
#define DMASSDTFST097 DMASS.DTFST097.UINT32
#define DMASSDTFSS097 DMASS.DTFSS097.UINT32
#define DMASSDTFSC097 DMASS.DTFSC097.UINT32
#define DMASSDTSA098 DMASS.DTSA098.UINT32
#define DMASSDTDA098 DMASS.DTDA098.UINT32
#define DMASSDTTC098 DMASS.DTTC098.UINT32
#define DMASSDTTCT098 DMASS.DTTCT098.UINT32
#define DMASSDTRSA098 DMASS.DTRSA098.UINT32
#define DMASSDTRDA098 DMASS.DTRDA098.UINT32
#define DMASSDTRTC098 DMASS.DTRTC098.UINT32
#define DMASSDTTCC098 DMASS.DTTCC098.UINT32
#define DMASSDTFSL098 DMASS.DTFSL098.UINT32
#define DMASSDTFST098 DMASS.DTFST098.UINT32
#define DMASSDTFSS098 DMASS.DTFSS098.UINT32
#define DMASSDTFSC098 DMASS.DTFSC098.UINT32
#define DMASSDTSA099 DMASS.DTSA099.UINT32
#define DMASSDTDA099 DMASS.DTDA099.UINT32
#define DMASSDTTC099 DMASS.DTTC099.UINT32
#define DMASSDTTCT099 DMASS.DTTCT099.UINT32
#define DMASSDTRSA099 DMASS.DTRSA099.UINT32
#define DMASSDTRDA099 DMASS.DTRDA099.UINT32
#define DMASSDTRTC099 DMASS.DTRTC099.UINT32
#define DMASSDTTCC099 DMASS.DTTCC099.UINT32
#define DMASSDTFSL099 DMASS.DTFSL099.UINT32
#define DMASSDTFST099 DMASS.DTFST099.UINT32
#define DMASSDTFSS099 DMASS.DTFSS099.UINT32
#define DMASSDTFSC099 DMASS.DTFSC099.UINT32
#define DMASSDTSA100 DMASS.DTSA100.UINT32
#define DMASSDTDA100 DMASS.DTDA100.UINT32
#define DMASSDTTC100 DMASS.DTTC100.UINT32
#define DMASSDTTCT100 DMASS.DTTCT100.UINT32
#define DMASSDTRSA100 DMASS.DTRSA100.UINT32
#define DMASSDTRDA100 DMASS.DTRDA100.UINT32
#define DMASSDTRTC100 DMASS.DTRTC100.UINT32
#define DMASSDTTCC100 DMASS.DTTCC100.UINT32
#define DMASSDTFSL100 DMASS.DTFSL100.UINT32
#define DMASSDTFST100 DMASS.DTFST100.UINT32
#define DMASSDTFSS100 DMASS.DTFSS100.UINT32
#define DMASSDTFSC100 DMASS.DTFSC100.UINT32
#define DMASSDTSA101 DMASS.DTSA101.UINT32
#define DMASSDTDA101 DMASS.DTDA101.UINT32
#define DMASSDTTC101 DMASS.DTTC101.UINT32
#define DMASSDTTCT101 DMASS.DTTCT101.UINT32
#define DMASSDTRSA101 DMASS.DTRSA101.UINT32
#define DMASSDTRDA101 DMASS.DTRDA101.UINT32
#define DMASSDTRTC101 DMASS.DTRTC101.UINT32
#define DMASSDTTCC101 DMASS.DTTCC101.UINT32
#define DMASSDTFSL101 DMASS.DTFSL101.UINT32
#define DMASSDTFST101 DMASS.DTFST101.UINT32
#define DMASSDTFSS101 DMASS.DTFSS101.UINT32
#define DMASSDTFSC101 DMASS.DTFSC101.UINT32
#define DMASSDTSA102 DMASS.DTSA102.UINT32
#define DMASSDTDA102 DMASS.DTDA102.UINT32
#define DMASSDTTC102 DMASS.DTTC102.UINT32
#define DMASSDTTCT102 DMASS.DTTCT102.UINT32
#define DMASSDTRSA102 DMASS.DTRSA102.UINT32
#define DMASSDTRDA102 DMASS.DTRDA102.UINT32
#define DMASSDTRTC102 DMASS.DTRTC102.UINT32
#define DMASSDTTCC102 DMASS.DTTCC102.UINT32
#define DMASSDTFSL102 DMASS.DTFSL102.UINT32
#define DMASSDTFST102 DMASS.DTFST102.UINT32
#define DMASSDTFSS102 DMASS.DTFSS102.UINT32
#define DMASSDTFSC102 DMASS.DTFSC102.UINT32
#define DMASSDTSA103 DMASS.DTSA103.UINT32
#define DMASSDTDA103 DMASS.DTDA103.UINT32
#define DMASSDTTC103 DMASS.DTTC103.UINT32
#define DMASSDTTCT103 DMASS.DTTCT103.UINT32
#define DMASSDTRSA103 DMASS.DTRSA103.UINT32
#define DMASSDTRDA103 DMASS.DTRDA103.UINT32
#define DMASSDTRTC103 DMASS.DTRTC103.UINT32
#define DMASSDTTCC103 DMASS.DTTCC103.UINT32
#define DMASSDTFSL103 DMASS.DTFSL103.UINT32
#define DMASSDTFST103 DMASS.DTFST103.UINT32
#define DMASSDTFSS103 DMASS.DTFSS103.UINT32
#define DMASSDTFSC103 DMASS.DTFSC103.UINT32
#define DMASSDTSA104 DMASS.DTSA104.UINT32
#define DMASSDTDA104 DMASS.DTDA104.UINT32
#define DMASSDTTC104 DMASS.DTTC104.UINT32
#define DMASSDTTCT104 DMASS.DTTCT104.UINT32
#define DMASSDTRSA104 DMASS.DTRSA104.UINT32
#define DMASSDTRDA104 DMASS.DTRDA104.UINT32
#define DMASSDTRTC104 DMASS.DTRTC104.UINT32
#define DMASSDTTCC104 DMASS.DTTCC104.UINT32
#define DMASSDTFSL104 DMASS.DTFSL104.UINT32
#define DMASSDTFST104 DMASS.DTFST104.UINT32
#define DMASSDTFSS104 DMASS.DTFSS104.UINT32
#define DMASSDTFSC104 DMASS.DTFSC104.UINT32
#define DMASSDTSA105 DMASS.DTSA105.UINT32
#define DMASSDTDA105 DMASS.DTDA105.UINT32
#define DMASSDTTC105 DMASS.DTTC105.UINT32
#define DMASSDTTCT105 DMASS.DTTCT105.UINT32
#define DMASSDTRSA105 DMASS.DTRSA105.UINT32
#define DMASSDTRDA105 DMASS.DTRDA105.UINT32
#define DMASSDTRTC105 DMASS.DTRTC105.UINT32
#define DMASSDTTCC105 DMASS.DTTCC105.UINT32
#define DMASSDTFSL105 DMASS.DTFSL105.UINT32
#define DMASSDTFST105 DMASS.DTFST105.UINT32
#define DMASSDTFSS105 DMASS.DTFSS105.UINT32
#define DMASSDTFSC105 DMASS.DTFSC105.UINT32
#define DMASSDTSA106 DMASS.DTSA106.UINT32
#define DMASSDTDA106 DMASS.DTDA106.UINT32
#define DMASSDTTC106 DMASS.DTTC106.UINT32
#define DMASSDTTCT106 DMASS.DTTCT106.UINT32
#define DMASSDTRSA106 DMASS.DTRSA106.UINT32
#define DMASSDTRDA106 DMASS.DTRDA106.UINT32
#define DMASSDTRTC106 DMASS.DTRTC106.UINT32
#define DMASSDTTCC106 DMASS.DTTCC106.UINT32
#define DMASSDTFSL106 DMASS.DTFSL106.UINT32
#define DMASSDTFST106 DMASS.DTFST106.UINT32
#define DMASSDTFSS106 DMASS.DTFSS106.UINT32
#define DMASSDTFSC106 DMASS.DTFSC106.UINT32
#define DMASSDTSA107 DMASS.DTSA107.UINT32
#define DMASSDTDA107 DMASS.DTDA107.UINT32
#define DMASSDTTC107 DMASS.DTTC107.UINT32
#define DMASSDTTCT107 DMASS.DTTCT107.UINT32
#define DMASSDTRSA107 DMASS.DTRSA107.UINT32
#define DMASSDTRDA107 DMASS.DTRDA107.UINT32
#define DMASSDTRTC107 DMASS.DTRTC107.UINT32
#define DMASSDTTCC107 DMASS.DTTCC107.UINT32
#define DMASSDTFSL107 DMASS.DTFSL107.UINT32
#define DMASSDTFST107 DMASS.DTFST107.UINT32
#define DMASSDTFSS107 DMASS.DTFSS107.UINT32
#define DMASSDTFSC107 DMASS.DTFSC107.UINT32
#define DMASSDTSA108 DMASS.DTSA108.UINT32
#define DMASSDTDA108 DMASS.DTDA108.UINT32
#define DMASSDTTC108 DMASS.DTTC108.UINT32
#define DMASSDTTCT108 DMASS.DTTCT108.UINT32
#define DMASSDTRSA108 DMASS.DTRSA108.UINT32
#define DMASSDTRDA108 DMASS.DTRDA108.UINT32
#define DMASSDTRTC108 DMASS.DTRTC108.UINT32
#define DMASSDTTCC108 DMASS.DTTCC108.UINT32
#define DMASSDTFSL108 DMASS.DTFSL108.UINT32
#define DMASSDTFST108 DMASS.DTFST108.UINT32
#define DMASSDTFSS108 DMASS.DTFSS108.UINT32
#define DMASSDTFSC108 DMASS.DTFSC108.UINT32
#define DMASSDTSA109 DMASS.DTSA109.UINT32
#define DMASSDTDA109 DMASS.DTDA109.UINT32
#define DMASSDTTC109 DMASS.DTTC109.UINT32
#define DMASSDTTCT109 DMASS.DTTCT109.UINT32
#define DMASSDTRSA109 DMASS.DTRSA109.UINT32
#define DMASSDTRDA109 DMASS.DTRDA109.UINT32
#define DMASSDTRTC109 DMASS.DTRTC109.UINT32
#define DMASSDTTCC109 DMASS.DTTCC109.UINT32
#define DMASSDTFSL109 DMASS.DTFSL109.UINT32
#define DMASSDTFST109 DMASS.DTFST109.UINT32
#define DMASSDTFSS109 DMASS.DTFSS109.UINT32
#define DMASSDTFSC109 DMASS.DTFSC109.UINT32
#define DMASSDTSA110 DMASS.DTSA110.UINT32
#define DMASSDTDA110 DMASS.DTDA110.UINT32
#define DMASSDTTC110 DMASS.DTTC110.UINT32
#define DMASSDTTCT110 DMASS.DTTCT110.UINT32
#define DMASSDTRSA110 DMASS.DTRSA110.UINT32
#define DMASSDTRDA110 DMASS.DTRDA110.UINT32
#define DMASSDTRTC110 DMASS.DTRTC110.UINT32
#define DMASSDTTCC110 DMASS.DTTCC110.UINT32
#define DMASSDTFSL110 DMASS.DTFSL110.UINT32
#define DMASSDTFST110 DMASS.DTFST110.UINT32
#define DMASSDTFSS110 DMASS.DTFSS110.UINT32
#define DMASSDTFSC110 DMASS.DTFSC110.UINT32
#define DMASSDTSA111 DMASS.DTSA111.UINT32
#define DMASSDTDA111 DMASS.DTDA111.UINT32
#define DMASSDTTC111 DMASS.DTTC111.UINT32
#define DMASSDTTCT111 DMASS.DTTCT111.UINT32
#define DMASSDTRSA111 DMASS.DTRSA111.UINT32
#define DMASSDTRDA111 DMASS.DTRDA111.UINT32
#define DMASSDTRTC111 DMASS.DTRTC111.UINT32
#define DMASSDTTCC111 DMASS.DTTCC111.UINT32
#define DMASSDTFSL111 DMASS.DTFSL111.UINT32
#define DMASSDTFST111 DMASS.DTFST111.UINT32
#define DMASSDTFSS111 DMASS.DTFSS111.UINT32
#define DMASSDTFSC111 DMASS.DTFSC111.UINT32
#define DMASSDTSA112 DMASS.DTSA112.UINT32
#define DMASSDTDA112 DMASS.DTDA112.UINT32
#define DMASSDTTC112 DMASS.DTTC112.UINT32
#define DMASSDTTCT112 DMASS.DTTCT112.UINT32
#define DMASSDTRSA112 DMASS.DTRSA112.UINT32
#define DMASSDTRDA112 DMASS.DTRDA112.UINT32
#define DMASSDTRTC112 DMASS.DTRTC112.UINT32
#define DMASSDTTCC112 DMASS.DTTCC112.UINT32
#define DMASSDTFSL112 DMASS.DTFSL112.UINT32
#define DMASSDTFST112 DMASS.DTFST112.UINT32
#define DMASSDTFSS112 DMASS.DTFSS112.UINT32
#define DMASSDTFSC112 DMASS.DTFSC112.UINT32
#define DMASSDTSA113 DMASS.DTSA113.UINT32
#define DMASSDTDA113 DMASS.DTDA113.UINT32
#define DMASSDTTC113 DMASS.DTTC113.UINT32
#define DMASSDTTCT113 DMASS.DTTCT113.UINT32
#define DMASSDTRSA113 DMASS.DTRSA113.UINT32
#define DMASSDTRDA113 DMASS.DTRDA113.UINT32
#define DMASSDTRTC113 DMASS.DTRTC113.UINT32
#define DMASSDTTCC113 DMASS.DTTCC113.UINT32
#define DMASSDTFSL113 DMASS.DTFSL113.UINT32
#define DMASSDTFST113 DMASS.DTFST113.UINT32
#define DMASSDTFSS113 DMASS.DTFSS113.UINT32
#define DMASSDTFSC113 DMASS.DTFSC113.UINT32
#define DMASSDTSA114 DMASS.DTSA114.UINT32
#define DMASSDTDA114 DMASS.DTDA114.UINT32
#define DMASSDTTC114 DMASS.DTTC114.UINT32
#define DMASSDTTCT114 DMASS.DTTCT114.UINT32
#define DMASSDTRSA114 DMASS.DTRSA114.UINT32
#define DMASSDTRDA114 DMASS.DTRDA114.UINT32
#define DMASSDTRTC114 DMASS.DTRTC114.UINT32
#define DMASSDTTCC114 DMASS.DTTCC114.UINT32
#define DMASSDTFSL114 DMASS.DTFSL114.UINT32
#define DMASSDTFST114 DMASS.DTFST114.UINT32
#define DMASSDTFSS114 DMASS.DTFSS114.UINT32
#define DMASSDTFSC114 DMASS.DTFSC114.UINT32
#define DMASSDTSA115 DMASS.DTSA115.UINT32
#define DMASSDTDA115 DMASS.DTDA115.UINT32
#define DMASSDTTC115 DMASS.DTTC115.UINT32
#define DMASSDTTCT115 DMASS.DTTCT115.UINT32
#define DMASSDTRSA115 DMASS.DTRSA115.UINT32
#define DMASSDTRDA115 DMASS.DTRDA115.UINT32
#define DMASSDTRTC115 DMASS.DTRTC115.UINT32
#define DMASSDTTCC115 DMASS.DTTCC115.UINT32
#define DMASSDTFSL115 DMASS.DTFSL115.UINT32
#define DMASSDTFST115 DMASS.DTFST115.UINT32
#define DMASSDTFSS115 DMASS.DTFSS115.UINT32
#define DMASSDTFSC115 DMASS.DTFSC115.UINT32
#define DMASSDTSA116 DMASS.DTSA116.UINT32
#define DMASSDTDA116 DMASS.DTDA116.UINT32
#define DMASSDTTC116 DMASS.DTTC116.UINT32
#define DMASSDTTCT116 DMASS.DTTCT116.UINT32
#define DMASSDTRSA116 DMASS.DTRSA116.UINT32
#define DMASSDTRDA116 DMASS.DTRDA116.UINT32
#define DMASSDTRTC116 DMASS.DTRTC116.UINT32
#define DMASSDTTCC116 DMASS.DTTCC116.UINT32
#define DMASSDTFSL116 DMASS.DTFSL116.UINT32
#define DMASSDTFST116 DMASS.DTFST116.UINT32
#define DMASSDTFSS116 DMASS.DTFSS116.UINT32
#define DMASSDTFSC116 DMASS.DTFSC116.UINT32
#define DMASSDTSA117 DMASS.DTSA117.UINT32
#define DMASSDTDA117 DMASS.DTDA117.UINT32
#define DMASSDTTC117 DMASS.DTTC117.UINT32
#define DMASSDTTCT117 DMASS.DTTCT117.UINT32
#define DMASSDTRSA117 DMASS.DTRSA117.UINT32
#define DMASSDTRDA117 DMASS.DTRDA117.UINT32
#define DMASSDTRTC117 DMASS.DTRTC117.UINT32
#define DMASSDTTCC117 DMASS.DTTCC117.UINT32
#define DMASSDTFSL117 DMASS.DTFSL117.UINT32
#define DMASSDTFST117 DMASS.DTFST117.UINT32
#define DMASSDTFSS117 DMASS.DTFSS117.UINT32
#define DMASSDTFSC117 DMASS.DTFSC117.UINT32
#define DMASSDTSA118 DMASS.DTSA118.UINT32
#define DMASSDTDA118 DMASS.DTDA118.UINT32
#define DMASSDTTC118 DMASS.DTTC118.UINT32
#define DMASSDTTCT118 DMASS.DTTCT118.UINT32
#define DMASSDTRSA118 DMASS.DTRSA118.UINT32
#define DMASSDTRDA118 DMASS.DTRDA118.UINT32
#define DMASSDTRTC118 DMASS.DTRTC118.UINT32
#define DMASSDTTCC118 DMASS.DTTCC118.UINT32
#define DMASSDTFSL118 DMASS.DTFSL118.UINT32
#define DMASSDTFST118 DMASS.DTFST118.UINT32
#define DMASSDTFSS118 DMASS.DTFSS118.UINT32
#define DMASSDTFSC118 DMASS.DTFSC118.UINT32
#define DMASSDTSA119 DMASS.DTSA119.UINT32
#define DMASSDTDA119 DMASS.DTDA119.UINT32
#define DMASSDTTC119 DMASS.DTTC119.UINT32
#define DMASSDTTCT119 DMASS.DTTCT119.UINT32
#define DMASSDTRSA119 DMASS.DTRSA119.UINT32
#define DMASSDTRDA119 DMASS.DTRDA119.UINT32
#define DMASSDTRTC119 DMASS.DTRTC119.UINT32
#define DMASSDTTCC119 DMASS.DTTCC119.UINT32
#define DMASSDTFSL119 DMASS.DTFSL119.UINT32
#define DMASSDTFST119 DMASS.DTFST119.UINT32
#define DMASSDTFSS119 DMASS.DTFSS119.UINT32
#define DMASSDTFSC119 DMASS.DTFSC119.UINT32
#define DMASSDTSA120 DMASS.DTSA120.UINT32
#define DMASSDTDA120 DMASS.DTDA120.UINT32
#define DMASSDTTC120 DMASS.DTTC120.UINT32
#define DMASSDTTCT120 DMASS.DTTCT120.UINT32
#define DMASSDTRSA120 DMASS.DTRSA120.UINT32
#define DMASSDTRDA120 DMASS.DTRDA120.UINT32
#define DMASSDTRTC120 DMASS.DTRTC120.UINT32
#define DMASSDTTCC120 DMASS.DTTCC120.UINT32
#define DMASSDTFSL120 DMASS.DTFSL120.UINT32
#define DMASSDTFST120 DMASS.DTFST120.UINT32
#define DMASSDTFSS120 DMASS.DTFSS120.UINT32
#define DMASSDTFSC120 DMASS.DTFSC120.UINT32
#define DMASSDTSA121 DMASS.DTSA121.UINT32
#define DMASSDTDA121 DMASS.DTDA121.UINT32
#define DMASSDTTC121 DMASS.DTTC121.UINT32
#define DMASSDTTCT121 DMASS.DTTCT121.UINT32
#define DMASSDTRSA121 DMASS.DTRSA121.UINT32
#define DMASSDTRDA121 DMASS.DTRDA121.UINT32
#define DMASSDTRTC121 DMASS.DTRTC121.UINT32
#define DMASSDTTCC121 DMASS.DTTCC121.UINT32
#define DMASSDTFSL121 DMASS.DTFSL121.UINT32
#define DMASSDTFST121 DMASS.DTFST121.UINT32
#define DMASSDTFSS121 DMASS.DTFSS121.UINT32
#define DMASSDTFSC121 DMASS.DTFSC121.UINT32
#define DMASSDTSA122 DMASS.DTSA122.UINT32
#define DMASSDTDA122 DMASS.DTDA122.UINT32
#define DMASSDTTC122 DMASS.DTTC122.UINT32
#define DMASSDTTCT122 DMASS.DTTCT122.UINT32
#define DMASSDTRSA122 DMASS.DTRSA122.UINT32
#define DMASSDTRDA122 DMASS.DTRDA122.UINT32
#define DMASSDTRTC122 DMASS.DTRTC122.UINT32
#define DMASSDTTCC122 DMASS.DTTCC122.UINT32
#define DMASSDTFSL122 DMASS.DTFSL122.UINT32
#define DMASSDTFST122 DMASS.DTFST122.UINT32
#define DMASSDTFSS122 DMASS.DTFSS122.UINT32
#define DMASSDTFSC122 DMASS.DTFSC122.UINT32
#define DMASSDTSA123 DMASS.DTSA123.UINT32
#define DMASSDTDA123 DMASS.DTDA123.UINT32
#define DMASSDTTC123 DMASS.DTTC123.UINT32
#define DMASSDTTCT123 DMASS.DTTCT123.UINT32
#define DMASSDTRSA123 DMASS.DTRSA123.UINT32
#define DMASSDTRDA123 DMASS.DTRDA123.UINT32
#define DMASSDTRTC123 DMASS.DTRTC123.UINT32
#define DMASSDTTCC123 DMASS.DTTCC123.UINT32
#define DMASSDTFSL123 DMASS.DTFSL123.UINT32
#define DMASSDTFST123 DMASS.DTFST123.UINT32
#define DMASSDTFSS123 DMASS.DTFSS123.UINT32
#define DMASSDTFSC123 DMASS.DTFSC123.UINT32
#define DMASSDTSA124 DMASS.DTSA124.UINT32
#define DMASSDTDA124 DMASS.DTDA124.UINT32
#define DMASSDTTC124 DMASS.DTTC124.UINT32
#define DMASSDTTCT124 DMASS.DTTCT124.UINT32
#define DMASSDTRSA124 DMASS.DTRSA124.UINT32
#define DMASSDTRDA124 DMASS.DTRDA124.UINT32
#define DMASSDTRTC124 DMASS.DTRTC124.UINT32
#define DMASSDTTCC124 DMASS.DTTCC124.UINT32
#define DMASSDTFSL124 DMASS.DTFSL124.UINT32
#define DMASSDTFST124 DMASS.DTFST124.UINT32
#define DMASSDTFSS124 DMASS.DTFSS124.UINT32
#define DMASSDTFSC124 DMASS.DTFSC124.UINT32

/* Added  Nexteer Custom Data Types for indexed access of DTS Registers */
typedef struct{
	__type2294 DMASSDTSA;
	__type2295 DMASSDTDA;
	__type2296 DMASSDTTC;
	__type2297 DMASSDTTCT;
	__type2298 DMASSDTRSA;
	__type2299 DMASSDTRDA;
	__type2300 DMASSDTRTC;
	__type2301 DMASSDTTCC;
	__type2310 DMASSDTFSL;
	const __type2307 DMASSDTFST;
	__type2311 DMASSDTFSS;
	__type2308 DMASSDTFSC;
	uint8 Resd[16];
}DTSCfgReg;


typedef struct{
	__type2293 DTSnnnCM;
}DTSMasterConfig;

__IOREGARRAY(DTSCfg, 128, 0xFFFF9000, __READ_WRITE, DTSCfgReg);          /* DTSCfgReg[128] */

__IOREGARRAY(DTSMstrCfg, 128, 0xFFFF8200, __READ_WRITE, DTSMasterConfig);          /* DTSMasterConfig[128] */


#endif
