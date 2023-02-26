/**********************************************************************************************************************
* Module File Name  : flxa_regs.h
* Module Description: FlexRay Peripheral Registers
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
* 09/14/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef FLXA_REGS_H
#define FLXA_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint8  OE:1;                                           /* OE               */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  OEP:1;                                          /* OEP              */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  T0IE:1;                                         /* T0IE             */
    uint8  T1IE:1;                                         /* T1IE             */
    uint8  T2IE:1;                                         /* T2IE             */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type0;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  OS:1;                                     /* OS               */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  T0IS:1;                                         /* T0IS             */
    uint8  T1IS:1;                                         /* T1IS             */
    uint8  T2IS:1;                                         /* T2IS             */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type1;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CLK:8;                                          /* CLK[7:0]         */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type2;
typedef struct 
{                                                          /* Bit Access       */
    uint8  PEMC:1;                                         /* PEMC             */
    uint8  CNA:1;                                          /* CNA              */
    uint8  SFBM:1;                                         /* SFBM             */
    uint8  SFO:1;                                          /* SFO              */
    uint8  CCF:1;                                          /* CCF              */
    uint8  CCL:1;                                          /* CCL              */
    uint8  AERR:1;                                         /* AERR             */
    uint8  RFO:1;                                          /* RFO              */
    uint8  EFA:1;                                          /* EFA              */
    uint8  IIBA:1;                                         /* IIBA             */
    uint8  IOBA:1;                                         /* IOBA             */
    uint8  MHF:1;                                          /* MHF              */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EDA:1;                                          /* EDA              */
    uint8  LTVA:1;                                         /* LTVA             */
    uint8  TABA:1;                                         /* TABA             */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  EDB:1;                                          /* EDB              */
    uint8  LTVB:1;                                         /* LTVB             */
    uint8  TABB:1;                                         /* TABB             */
    uint8  :5;                                             /* Reserved Bits    */
} __type3;
typedef struct 
{                                                          /* Bit Access       */
    uint8  WST:1;                                          /* WST              */
    uint8  CAS:1;                                          /* CAS              */
    uint8  CYCS:1;                                         /* CYCS             */
    uint8  TXI:1;                                          /* TXI              */
    uint8  RXI:1;                                          /* RXI              */
    uint8  RFNE:1;                                         /* RFNE             */
    uint8  RFCL:1;                                         /* RFCL             */
    uint8  NMVC:1;                                         /* NMVC             */
    uint8  TI0:1;                                          /* TI0              */
    uint8  TI1:1;                                          /* TI1              */
    uint8  TIBC:1;                                         /* TIBC             */
    uint8  TOBC:1;                                         /* TOBC             */
    uint8  SWE:1;                                          /* SWE              */
    uint8  SUCS:1;                                         /* SUCS             */
    uint8  MBSI:1;                                         /* MBSI             */
    uint8  SDS:1;                                          /* SDS              */
    uint8  WUPA:1;                                         /* WUPA             */
    uint8  MTSA:1;                                         /* MTSA             */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  WUPB:1;                                         /* WUPB             */
    uint8  MTSB:1;                                         /* MTSB             */
    uint8  :6;                                             /* Reserved Bits    */
} __type4;
typedef struct 
{                                                          /* Bit Access       */
    uint8  PEMCL:1;                                        /* PEMCL            */
    uint8  CNAL:1;                                         /* CNAL             */
    uint8  SFBML:1;                                        /* SFBML            */
    uint8  SFOL:1;                                         /* SFOL             */
    uint8  CCFL:1;                                         /* CCFL             */
    uint8  CCLL:1;                                         /* CCLL             */
    uint8  AERRL:1;                                        /* AERRL            */
    uint8  RFOL:1;                                         /* RFOL             */
    uint8  EFAL:1;                                         /* EFAL             */
    uint8  IIBAL:1;                                        /* IIBAL            */
    uint8  IOBAL:1;                                        /* IOBAL            */
    uint8  MHFL:1;                                         /* MHFL             */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EDAL:1;                                         /* EDAL             */
    uint8  LTVAL:1;                                        /* LTVAL            */
    uint8  TABAL:1;                                        /* TABAL            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  EDBL:1;                                         /* EDBL             */
    uint8  LTVBL:1;                                        /* LTVBL            */
    uint8  TABBL:1;                                        /* TABBL            */
    uint8  :5;                                             /* Reserved Bits    */
} __type5;
typedef struct 
{                                                          /* Bit Access       */
    uint8  WSTL:1;                                         /* WSTL             */
    uint8  CASL:1;                                         /* CASL             */
    uint8  CYCSL:1;                                        /* CYCSL            */
    uint8  TXIL:1;                                         /* TXIL             */
    uint8  RXIL:1;                                         /* RXIL             */
    uint8  RFNEL:1;                                        /* RFNEL            */
    uint8  RFCLL:1;                                        /* RFCLL            */
    uint8  NMVCL:1;                                        /* NMVCL            */
    uint8  TI0L:1;                                         /* TI0L             */
    uint8  TI1L:1;                                         /* TI1L             */
    uint8  TIBCL:1;                                        /* TIBCL            */
    uint8  TOBCL:1;                                        /* TOBCL            */
    uint8  SWEL:1;                                         /* SWEL             */
    uint8  SUCSL:1;                                        /* SUCSL            */
    uint8  MBSIL:1;                                        /* MBSIL            */
    uint8  SDSL:1;                                         /* SDSL             */
    uint8  WUPAL:1;                                        /* WUPAL            */
    uint8  MTSAL:1;                                        /* MTSAL            */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  WUPBL:1;                                        /* WUPBL            */
    uint8  MTSBL:1;                                        /* MTSBL            */
    uint8  :6;                                             /* Reserved Bits    */
} __type6;
typedef struct 
{                                                          /* Bit Access       */
    uint8  PEMCE:1;                                        /* PEMCE            */
    uint8  CNAE:1;                                         /* CNAE             */
    uint8  SFBME:1;                                        /* SFBME            */
    uint8  SFOE:1;                                         /* SFOE             */
    uint8  CCFE:1;                                         /* CCFE             */
    uint8  CCLE:1;                                         /* CCLE             */
    uint8  AERRE:1;                                        /* AERRE            */
    uint8  RFOE:1;                                         /* RFOE             */
    uint8  EFAE:1;                                         /* EFAE             */
    uint8  IIBAE:1;                                        /* IIBAE            */
    uint8  IOBAE:1;                                        /* IOBAE            */
    uint8  MHFE:1;                                         /* MHFE             */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EDAE:1;                                         /* EDAE             */
    uint8  LTVAE:1;                                        /* LTVAE            */
    uint8  TABAE:1;                                        /* TABAE            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  EDBE:1;                                         /* EDBE             */
    uint8  LTVBE:1;                                        /* LTVBE            */
    uint8  TABBE:1;                                        /* TABBE            */
    uint8  :5;                                             /* Reserved Bits    */
} __type7;
typedef struct 
{                                                          /* Bit Access       */
    uint8  PEMCD:1;                                        /* PEMCD            */
    uint8  CNAD:1;                                         /* CNAD             */
    uint8  SFBMD:1;                                        /* SFBMD            */
    uint8  SFOD:1;                                         /* SFOD             */
    uint8  CCFD:1;                                         /* CCFD             */
    uint8  CCLD:1;                                         /* CCLD             */
    uint8  AERRD:1;                                        /* AERRD            */
    uint8  RFOD:1;                                         /* RFOD             */
    uint8  EFAD:1;                                         /* EFAD             */
    uint8  IIBAD:1;                                        /* IIBAD            */
    uint8  IOBAD:1;                                        /* IOBAD            */
    uint8  MHFD:1;                                         /* MHFD             */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EDAD:1;                                         /* EDAD             */
    uint8  LTVAD:1;                                        /* LTVAD            */
    uint8  TABAD:1;                                        /* TABAD            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  EDBD:1;                                         /* EDBD             */
    uint8  LTVBD:1;                                        /* LTVBD            */
    uint8  TABBD:1;                                        /* TABBD            */
    uint8  :5;                                             /* Reserved Bits    */
} __type8;
typedef struct 
{                                                          /* Bit Access       */
    uint8  WSTE:1;                                         /* WSTE             */
    uint8  CASE:1;                                         /* CASE             */
    uint8  CYCSE:1;                                        /* CYCSE            */
    uint8  TXIE:1;                                         /* TXIE             */
    uint8  RXIE:1;                                         /* RXIE             */
    uint8  RFNEE:1;                                        /* RFNEE            */
    uint8  RFCLE:1;                                        /* RFCLE            */
    uint8  NMVCE:1;                                        /* NMVCE            */
    uint8  TI0E:1;                                         /* TI0E             */
    uint8  TI1E:1;                                         /* TI1E             */
    uint8  TIBCE:1;                                        /* TIBCE            */
    uint8  TOBCE:1;                                        /* TOBCE            */
    uint8  SWEE:1;                                         /* SWEE             */
    uint8  SUCSE:1;                                        /* SUCSE            */
    uint8  MBSIE:1;                                        /* MBSIE            */
    uint8  SDSE:1;                                         /* SDSE             */
    uint8  WUPAE:1;                                        /* WUPAE            */
    uint8  MTSAE:1;                                        /* MTSAE            */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  WUPBE:1;                                        /* WUPBE            */
    uint8  MTSBE:1;                                        /* MTSBE            */
    uint8  :6;                                             /* Reserved Bits    */
} __type9;
typedef struct 
{                                                          /* Bit Access       */
    uint8  WSTD:1;                                         /* WSTD             */
    uint8  CASD:1;                                         /* CASD             */
    uint8  CYCSD:1;                                        /* CYCSD            */
    uint8  TXID:1;                                         /* TXID             */
    uint8  RXID:1;                                         /* RXID             */
    uint8  RFNED:1;                                        /* RFNED            */
    uint8  RFCLD:1;                                        /* RFCLD            */
    uint8  NMVCD:1;                                        /* NMVCD            */
    uint8  TI0D:1;                                         /* TI0D             */
    uint8  TI1D:1;                                         /* TI1D             */
    uint8  TIBCD:1;                                        /* TIBCD            */
    uint8  TOBCD:1;                                        /* TOBCD            */
    uint8  SWED:1;                                         /* SWED             */
    uint8  SUCSD:1;                                        /* SUCSD            */
    uint8  MBSID:1;                                        /* MBSID            */
    uint8  SDSD:1;                                         /* SDSD             */
    uint8  WUPAD:1;                                        /* WUPAD            */
    uint8  MTSAD:1;                                        /* MTSAD            */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  WUPBD:1;                                        /* WUPBD            */
    uint8  MTSBD:1;                                        /* MTSBD            */
    uint8  :6;                                             /* Reserved Bits    */
} __type10;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EINT0:1;                                        /* EINT0            */
    uint8  EINT1:1;                                        /* EINT1            */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type11;
typedef struct 
{                                                          /* Bit Access       */
    uint8  T0RC:1;                                         /* T0RC             */
    uint8  T0MS:1;                                         /* T0MS             */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  T0CC:7;                                         /* T0CC[14:8]       */
    uint8  :1;                                             /* Reserved Bits    */
    uint16 T0MO:14;                                        /* T0MO[29:16]      */
    uint8  :2;                                             /* Reserved Bits    */
} __type12;
typedef struct 
{                                                          /* Bit Access       */
    uint8  T1RC:1;                                         /* T1RC             */
    uint8  T1MS:1;                                         /* T1MS             */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint16 T1MC:14;                                        /* T1MC[29:16]      */
    uint8  :2;                                             /* Reserved Bits    */
} __type13;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ESWT:1;                                         /* ESWT             */
    uint8  SWMS:1;                                         /* SWMS             */
    uint8  EDGE:1;                                         /* EDGE             */
    uint8  SSWT:1;                                         /* SSWT             */
    uint8  EETP:1;                                         /* EETP             */
    uint8  EINT0:1;                                        /* EINT0            */
    uint8  EINT1:1;                                        /* EINT1            */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  SCCV:6;                                   /* SCCV[13:8]       */
    uint8  :2;                                             /* Reserved Bits    */
    const uint16 SMTV:14;                                  /* SMTV[29:16]      */
    uint8  :2;                                             /* Reserved Bits    */
} __type14;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 SSCVA:11;                                 /* SSCVA[10:0]      */
    uint8  :5;                                             /* Reserved Bits    */
    const uint16 SSCVB:11;                                 /* SSCVB[26:16]     */
    uint8  :5;                                             /* Reserved Bits    */
} __type15;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CMD:4;                                          /* CMD[3:0]         */
    uint8  :3;                                             /* Reserved Bits    */
    const uint8  PBSY:1;                                   /* PBSY             */
    uint8  TXST:1;                                         /* TXST             */
    uint8  TXSY:1;                                         /* TXSY             */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  CSA:5;                                          /* CSA[15:11]       */
    uint8  PTA:5;                                          /* PTA[20:16]       */
    uint8  WUCS:1;                                         /* WUCS             */
    uint8  TSM:1;                                          /* TSM              */
    uint8  HCSE:1;                                         /* HCSE             */
    uint8  MTSA:1;                                         /* MTSA             */
    uint8  MTSB:1;                                         /* MTSB             */
    uint8  CCHA:1;                                         /* CCHA             */
    uint8  CCHB:1;                                         /* CCHB             */
    uint8  :4;                                             /* Reserved Bits    */
} __type16;
typedef struct 
{                                                          /* Bit Access       */
    uint32 LT:21;                                          /* LT[20:0]         */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  LTN:4;                                          /* LTN[27:24]       */
    uint8  :4;                                             /* Reserved Bits    */
} __type17;
typedef struct 
{                                                          /* Bit Access       */
    uint8  WCP:4;                                          /* WCP[3:0]         */
    uint8  WCF:4;                                          /* WCF[7:4]         */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type18;
typedef struct 
{                                                          /* Bit Access       */
    uint8  NML:4;                                          /* NML[3:0]         */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type19;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TSST:4;                                         /* TSST[3:0]        */
    uint16 CASM:7;                                         /* CASM[10:4]       */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  SPP:2;                                          /* SPP[13:12]       */
    uint8  BRP:2;                                          /* BRP[15:14]       */
    uint16 RXW:9;                                          /* RXW[24:16]       */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  RWP:6;                                          /* RWP[31:26]       */
} __type20;
typedef struct 
{                                                          /* Bit Access       */
    uint8  RXI:6;                                          /* RXI[5:0]         */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  RXL:6;                                          /* RXL[13:8]        */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  TXI:8;                                          /* TXI[23:16]       */
    uint8  TXL:6;                                          /* TXL[29:24]       */
    uint8  :2;                                             /* Reserved Bits    */
} __type21;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SFDL:7;                                         /* SFDL[6:0]        */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint16 SLT:13;                                         /* SLT[28:16]       */
    uint8  :3;                                             /* Reserved Bits    */
} __type22;
typedef struct 
{                                                          /* Bit Access       */
    uint32 UT:20;                                          /* UT[19:0]         */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type23;
typedef struct 
{                                                          /* Bit Access       */
    uint16 MPC:14;                                         /* MPC[13:0]        */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  SNM:4;                                          /* SNM[19:16]       */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type24;
typedef struct 
{                                                          /* Bit Access       */
    uint8  UIOA:8;                                         /* UIOA[7:0]        */
    uint8  UIOB:8;                                         /* UIOB[15:8]       */
    uint8  MIOA:7;                                         /* MIOA[22:16]      */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  MIOB:7;                                         /* MIOB[30:24]      */
    uint8  :1;                                             /* Reserved Bits    */
} __type25;
typedef struct 
{                                                          /* Bit Access       */
    uint16 NIT:14;                                         /* NIT[13:0]        */
    uint8  :2;                                             /* Reserved Bits    */
    uint16 OCS:14;                                         /* OCS[29:16]       */
    uint8  :2;                                             /* Reserved Bits    */
} __type26;
typedef struct 
{                                                          /* Bit Access       */
    uint8  DCA:8;                                          /* DCA[7:0]         */
    uint8  DCB:8;                                          /* DCB[15:8]        */
    uint8  CDD:5;                                          /* CDD[20:16]       */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  DEC:8;                                          /* DEC[31:24]       */
} __type27;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ASR:11;                                         /* ASR[10:0]        */
    uint8  :5;                                             /* Reserved Bits    */
    uint16 MOD:11;                                         /* MOD[26:16]       */
    uint8  :5;                                             /* Reserved Bits    */
} __type28;
typedef struct 
{                                                          /* Bit Access       */
    uint16 SSL:10;                                         /* SSL[9:0]         */
    uint8  :6;                                             /* Reserved Bits    */
    uint16 NSS:10;                                         /* NSS[25:16]       */
    uint8  :6;                                             /* Reserved Bits    */
} __type29;
typedef struct 
{                                                          /* Bit Access       */
    uint8  MSL:6;                                          /* MSL[5:0]         */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint16 NMS:13;                                         /* NMS[28:16]       */
    uint8  :3;                                             /* Reserved Bits    */
} __type30;
typedef struct 
{                                                          /* Bit Access       */
    uint8  APO:6;                                          /* APO[5:0]         */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  MAPO:5;                                         /* MAPO[12:8]       */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  DSI:2;                                          /* DSI[17:16]       */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type31;
typedef struct 
{                                                          /* Bit Access       */
    uint16 MOC:14;                                         /* MOC[13:0]        */
    uint8  :2;                                             /* Reserved Bits    */
    uint16 MRC:11;                                         /* MRC[26:16]       */
    uint8  :5;                                             /* Reserved Bits    */
} __type32;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EOCC:2;                                         /* EOCC[1:0]        */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  ERCC:2;                                         /* ERCC[9:8]        */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  EOC:3;                                          /* EOC[18:16]       */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  ERC:3;                                          /* ERC[26:24]       */
    uint8  :5;                                             /* Reserved Bits    */
} __type33;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  POCS:6;                                   /* POCS[5:0]        */
    const uint8  FSI:1;                                    /* FSI              */
    const uint8  HRQ:1;                                    /* HRQ              */
    const uint8  SLM:2;                                    /* SLM[9:8]         */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  CSNI:1;                                   /* CSNI             */
    const uint8  CSAI:1;                                   /* CSAI             */
    const uint8  CSI:1;                                    /* CSI              */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  WSV:3;                                    /* WSV[18:16]       */
    const uint8  RCA:5;                                    /* RCA[23:19]       */
    const uint8  PSL:6;                                    /* PSL[29:24]       */
    uint8  :2;                                             /* Reserved Bits    */
} __type34;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  CCFC:4;                                   /* CCFC[3:0]        */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  ERRM:2;                                   /* ERRM[7:6]        */
    const uint8  PTAC:5;                                   /* PTAC[12:8]       */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type35;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 SCCA:11;                                  /* SCCA[10:0]       */
    uint8  :5;                                             /* Reserved Bits    */
    const uint16 SCCB:11;                                  /* SCCB[26:16]      */
    uint8  :5;                                             /* Reserved Bits    */
} __type36;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 MTV:14;                                   /* MTV[13:0]        */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  CCV:6;                                    /* CCV[21:16]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type37;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 RCV:12;                                   /* RCV[11:0]        */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type38;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 OCV:19;                                   /* OCV[18:0]        */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type39;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  VSAE:4;                                   /* VSAE[3:0]        */
    const uint8  VSAO:4;                                   /* VSAO[7:4]        */
    const uint8  VSBE:4;                                   /* VSBE[11:8]       */
    const uint8  VSBO:4;                                   /* VSBO[15:12]      */
    const uint8  MOCS:1;                                   /* MOCS             */
    const uint8  OCLR:1;                                   /* OCLR             */
    const uint8  MRCS:1;                                   /* MRCS             */
    const uint8  RCLR:1;                                   /* RCLR             */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type40;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  SESA:1;                                   /* SESA             */
    const uint8  SBSA:1;                                   /* SBSA             */
    const uint8  TCSA:1;                                   /* TCSA             */
    const uint8  SESB:1;                                   /* SESB             */
    const uint8  SBSB:1;                                   /* SBSB             */
    const uint8  TCSB:1;                                   /* TCSB             */
    const uint8  MTSA:1;                                   /* MTSA             */
    const uint8  MTSB:1;                                   /* MTSB             */
    const uint8  SENA:1;                                   /* SENA             */
    const uint8  SBNA:1;                                   /* SBNA             */
    const uint8  SENB:1;                                   /* SENB             */
    const uint8  SBNB:1;                                   /* SBNB             */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type41;
typedef struct 
{                                                          /* Bit Access       */
    uint8  VFRA:1;                                         /* VFRA             */
    uint8  SEDA:1;                                         /* SEDA             */
    uint8  CEDA:1;                                         /* CEDA             */
    uint8  CIA:1;                                          /* CIA              */
    uint8  SBVA:1;                                         /* SBVA             */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  VFRB:1;                                         /* VFRB             */
    uint8  SEDB:1;                                         /* SEDB             */
    uint8  CEDB:1;                                         /* CEDB             */
    uint8  CIB:1;                                          /* CIB              */
    uint8  SBVB:1;                                         /* SBVB             */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type42;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 EID:10;                                   /* EID[9:0]         */
    uint8  :4;                                             /* Reserved Bits    */
    const uint8  RXEA:1;                                   /* RXEA             */
    const uint8  RXEB:1;                                   /* RXEB             */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type43;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 OID:10;                                   /* OID[9:0]         */
    uint8  :4;                                             /* Reserved Bits    */
    const uint8  RXOA:1;                                   /* RXOA             */
    const uint8  RXOB:1;                                   /* RXOB             */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type44;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 NM:32;                                    /* NM[31:0]         */
} __type45;
typedef struct 
{                                                          /* Bit Access       */
    uint8  FDB:8;                                          /* FDB[7:0]         */
    uint8  FFB:8;                                          /* FFB[15:8]        */
    uint8  LCB:8;                                          /* LCB[23:16]       */
    uint8  SEC:2;                                          /* SEC[25:24]       */
    uint8  SPLM:1;                                         /* SPLM             */
    uint8  :5;                                             /* Reserved Bits    */
} __type46;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CH:2;                                           /* CH[1:0]          */
    uint16 FID:11;                                         /* FID[12:2]        */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  CYF:7;                                          /* CYF[22:16]       */
    uint8  RSS:1;                                          /* RSS              */
    uint8  RNF:1;                                          /* RNF              */
    uint8  :7;                                             /* Reserved Bits    */
} __type47;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :2;                                             /* Reserved Bits    */
    uint16 MFID:11;                                        /* MFID[12:2]       */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type48;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CL:8;                                           /* CL[7:0]          */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type49;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  AMR:1;                                          /* AMR              */
    uint8  ATBF1:1;                                        /* ATBF1            */
    uint8  ATBF2:1;                                        /* ATBF2            */
    uint8  FMBD:1;                                         /* FMBD             */
    uint8  MFMB:1;                                         /* MFMB             */
    const uint8  CRAM:1;                                   /* CRAM             */
    const uint8  FMB:7;                                    /* FMB[14:8]        */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  MBT:7;                                    /* MBT[22:16]       */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  MBU:7;                                    /* MBU[30:24]       */
    uint8  :1;                                             /* Reserved Bits    */
} __type50;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 LDTA:11;                                  /* LDTA[10:0]       */
    uint8  :5;                                             /* Reserved Bits    */
    const uint16 LDTB:11;                                  /* LDTB[26:16]      */
    uint8  :5;                                             /* Reserved Bits    */
} __type51;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  RFNE:1;                                   /* RFNE             */
    const uint8  RFCL:1;                                   /* RFCL             */
    const uint8  RFO:1;                                    /* RFO              */
    uint8  :5;                                             /* Reserved Bits    */
    const uint8  RFFL:8;                                   /* RFFL[15:8]       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type52;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SNUA:1;                                         /* SNUA             */
    uint8  SNUB:1;                                         /* SNUB             */
    uint8  FNFA:1;                                         /* FNFA             */
    uint8  FNFB:1;                                         /* FNFB             */
    uint8  TBFA:1;                                         /* TBFA             */
    uint8  TBFB:1;                                         /* TBFB             */
    uint8  TNSA:1;                                         /* TNSA             */
    uint8  TNSB:1;                                         /* TNSB             */
    uint8  WAHP:1;                                         /* WAHP             */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type53;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TXR0:1;                                   /* TXR0             */
    const uint8  TXR1:1;                                   /* TXR1             */
    const uint8  TXR2:1;                                   /* TXR2             */
    const uint8  TXR3:1;                                   /* TXR3             */
    const uint8  TXR4:1;                                   /* TXR4             */
    const uint8  TXR5:1;                                   /* TXR5             */
    const uint8  TXR6:1;                                   /* TXR6             */
    const uint8  TXR7:1;                                   /* TXR7             */
    const uint8  TXR8:1;                                   /* TXR8             */
    const uint8  TXR9:1;                                   /* TXR9             */
    const uint8  TXR10:1;                                  /* TXR10            */
    const uint8  TXR11:1;                                  /* TXR11            */
    const uint8  TXR12:1;                                  /* TXR12            */
    const uint8  TXR13:1;                                  /* TXR13            */
    const uint8  TXR14:1;                                  /* TXR14            */
    const uint8  TXR15:1;                                  /* TXR15            */
    const uint8  TXR16:1;                                  /* TXR16            */
    const uint8  TXR17:1;                                  /* TXR17            */
    const uint8  TXR18:1;                                  /* TXR18            */
    const uint8  TXR19:1;                                  /* TXR19            */
    const uint8  TXR20:1;                                  /* TXR20            */
    const uint8  TXR21:1;                                  /* TXR21            */
    const uint8  TXR22:1;                                  /* TXR22            */
    const uint8  TXR23:1;                                  /* TXR23            */
    const uint8  TXR24:1;                                  /* TXR24            */
    const uint8  TXR25:1;                                  /* TXR25            */
    const uint8  TXR26:1;                                  /* TXR26            */
    const uint8  TXR27:1;                                  /* TXR27            */
    const uint8  TXR28:1;                                  /* TXR28            */
    const uint8  TXR29:1;                                  /* TXR29            */
    const uint8  TXR30:1;                                  /* TXR30            */
    const uint8  TXR31:1;                                  /* TXR31            */
} __type54;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TXR32:1;                                  /* TXR32            */
    const uint8  TXR33:1;                                  /* TXR33            */
    const uint8  TXR34:1;                                  /* TXR34            */
    const uint8  TXR35:1;                                  /* TXR35            */
    const uint8  TXR36:1;                                  /* TXR36            */
    const uint8  TXR37:1;                                  /* TXR37            */
    const uint8  TXR38:1;                                  /* TXR38            */
    const uint8  TXR39:1;                                  /* TXR39            */
    const uint8  TXR40:1;                                  /* TXR40            */
    const uint8  TXR41:1;                                  /* TXR41            */
    const uint8  TXR42:1;                                  /* TXR42            */
    const uint8  TXR43:1;                                  /* TXR43            */
    const uint8  TXR44:1;                                  /* TXR44            */
    const uint8  TXR45:1;                                  /* TXR45            */
    const uint8  TXR46:1;                                  /* TXR46            */
    const uint8  TXR47:1;                                  /* TXR47            */
    const uint8  TXR48:1;                                  /* TXR48            */
    const uint8  TXR49:1;                                  /* TXR49            */
    const uint8  TXR50:1;                                  /* TXR50            */
    const uint8  TXR51:1;                                  /* TXR51            */
    const uint8  TXR52:1;                                  /* TXR52            */
    const uint8  TXR53:1;                                  /* TXR53            */
    const uint8  TXR54:1;                                  /* TXR54            */
    const uint8  TXR55:1;                                  /* TXR55            */
    const uint8  TXR56:1;                                  /* TXR56            */
    const uint8  TXR57:1;                                  /* TXR57            */
    const uint8  TXR58:1;                                  /* TXR58            */
    const uint8  TXR59:1;                                  /* TXR59            */
    const uint8  TXR60:1;                                  /* TXR60            */
    const uint8  TXR61:1;                                  /* TXR61            */
    const uint8  TXR62:1;                                  /* TXR62            */
    const uint8  TXR63:1;                                  /* TXR63            */
} __type55;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TXR64:1;                                  /* TXR64            */
    const uint8  TXR65:1;                                  /* TXR65            */
    const uint8  TXR66:1;                                  /* TXR66            */
    const uint8  TXR67:1;                                  /* TXR67            */
    const uint8  TXR68:1;                                  /* TXR68            */
    const uint8  TXR69:1;                                  /* TXR69            */
    const uint8  TXR70:1;                                  /* TXR70            */
    const uint8  TXR71:1;                                  /* TXR71            */
    const uint8  TXR72:1;                                  /* TXR72            */
    const uint8  TXR73:1;                                  /* TXR73            */
    const uint8  TXR74:1;                                  /* TXR74            */
    const uint8  TXR75:1;                                  /* TXR75            */
    const uint8  TXR76:1;                                  /* TXR76            */
    const uint8  TXR77:1;                                  /* TXR77            */
    const uint8  TXR78:1;                                  /* TXR78            */
    const uint8  TXR79:1;                                  /* TXR79            */
    const uint8  TXR80:1;                                  /* TXR80            */
    const uint8  TXR81:1;                                  /* TXR81            */
    const uint8  TXR82:1;                                  /* TXR82            */
    const uint8  TXR83:1;                                  /* TXR83            */
    const uint8  TXR84:1;                                  /* TXR84            */
    const uint8  TXR85:1;                                  /* TXR85            */
    const uint8  TXR86:1;                                  /* TXR86            */
    const uint8  TXR87:1;                                  /* TXR87            */
    const uint8  TXR88:1;                                  /* TXR88            */
    const uint8  TXR89:1;                                  /* TXR89            */
    const uint8  TXR90:1;                                  /* TXR90            */
    const uint8  TXR91:1;                                  /* TXR91            */
    const uint8  TXR92:1;                                  /* TXR92            */
    const uint8  TXR93:1;                                  /* TXR93            */
    const uint8  TXR94:1;                                  /* TXR94            */
    const uint8  TXR95:1;                                  /* TXR95            */
} __type56;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TXR96:1;                                  /* TXR96            */
    const uint8  TXR97:1;                                  /* TXR97            */
    const uint8  TXR98:1;                                  /* TXR98            */
    const uint8  TXR99:1;                                  /* TXR99            */
    const uint8  TXR100:1;                                 /* TXR100           */
    const uint8  TXR101:1;                                 /* TXR101           */
    const uint8  TXR102:1;                                 /* TXR102           */
    const uint8  TXR103:1;                                 /* TXR103           */
    const uint8  TXR104:1;                                 /* TXR104           */
    const uint8  TXR105:1;                                 /* TXR105           */
    const uint8  TXR106:1;                                 /* TXR106           */
    const uint8  TXR107:1;                                 /* TXR107           */
    const uint8  TXR108:1;                                 /* TXR108           */
    const uint8  TXR109:1;                                 /* TXR109           */
    const uint8  TXR110:1;                                 /* TXR110           */
    const uint8  TXR111:1;                                 /* TXR111           */
    const uint8  TXR112:1;                                 /* TXR112           */
    const uint8  TXR113:1;                                 /* TXR113           */
    const uint8  TXR114:1;                                 /* TXR114           */
    const uint8  TXR115:1;                                 /* TXR115           */
    const uint8  TXR116:1;                                 /* TXR116           */
    const uint8  TXR117:1;                                 /* TXR117           */
    const uint8  TXR118:1;                                 /* TXR118           */
    const uint8  TXR119:1;                                 /* TXR119           */
    const uint8  TXR120:1;                                 /* TXR120           */
    const uint8  TXR121:1;                                 /* TXR121           */
    const uint8  TXR122:1;                                 /* TXR122           */
    const uint8  TXR123:1;                                 /* TXR123           */
    const uint8  TXR124:1;                                 /* TXR124           */
    const uint8  TXR125:1;                                 /* TXR125           */
    const uint8  TXR126:1;                                 /* TXR126           */
    const uint8  TXR127:1;                                 /* TXR127           */
} __type57;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ND0:1;                                          /* ND0              */
    uint8  ND1:1;                                          /* ND1              */
    uint8  ND2:1;                                          /* ND2              */
    uint8  ND3:1;                                          /* ND3              */
    uint8  ND4:1;                                          /* ND4              */
    uint8  ND5:1;                                          /* ND5              */
    uint8  ND6:1;                                          /* ND6              */
    uint8  ND7:1;                                          /* ND7              */
    uint8  ND8:1;                                          /* ND8              */
    uint8  ND9:1;                                          /* ND9              */
    uint8  ND10:1;                                         /* ND10             */
    uint8  ND11:1;                                         /* ND11             */
    uint8  ND12:1;                                         /* ND12             */
    uint8  ND13:1;                                         /* ND13             */
    uint8  ND14:1;                                         /* ND14             */
    uint8  ND15:1;                                         /* ND15             */
    uint8  ND16:1;                                         /* ND16             */
    uint8  ND17:1;                                         /* ND17             */
    uint8  ND18:1;                                         /* ND18             */
    uint8  ND19:1;                                         /* ND19             */
    uint8  ND20:1;                                         /* ND20             */
    uint8  ND21:1;                                         /* ND21             */
    uint8  ND22:1;                                         /* ND22             */
    uint8  ND23:1;                                         /* ND23             */
    uint8  ND24:1;                                         /* ND24             */
    uint8  ND25:1;                                         /* ND25             */
    uint8  ND26:1;                                         /* ND26             */
    uint8  ND27:1;                                         /* ND27             */
    uint8  ND28:1;                                         /* ND28             */
    uint8  ND29:1;                                         /* ND29             */
    uint8  ND30:1;                                         /* ND30             */
    uint8  ND31:1;                                         /* ND31             */
} __type58;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ND32:1;                                         /* ND32             */
    uint8  ND33:1;                                         /* ND33             */
    uint8  ND34:1;                                         /* ND34             */
    uint8  ND35:1;                                         /* ND35             */
    uint8  ND36:1;                                         /* ND36             */
    uint8  ND37:1;                                         /* ND37             */
    uint8  ND38:1;                                         /* ND38             */
    uint8  ND39:1;                                         /* ND39             */
    uint8  ND40:1;                                         /* ND40             */
    uint8  ND41:1;                                         /* ND41             */
    uint8  ND42:1;                                         /* ND42             */
    uint8  ND43:1;                                         /* ND43             */
    uint8  ND44:1;                                         /* ND44             */
    uint8  ND45:1;                                         /* ND45             */
    uint8  ND46:1;                                         /* ND46             */
    uint8  ND47:1;                                         /* ND47             */
    uint8  ND48:1;                                         /* ND48             */
    uint8  ND49:1;                                         /* ND49             */
    uint8  ND50:1;                                         /* ND50             */
    uint8  ND51:1;                                         /* ND51             */
    uint8  ND52:1;                                         /* ND52             */
    uint8  ND53:1;                                         /* ND53             */
    uint8  ND54:1;                                         /* ND54             */
    uint8  ND55:1;                                         /* ND55             */
    uint8  ND56:1;                                         /* ND56             */
    uint8  ND57:1;                                         /* ND57             */
    uint8  ND58:1;                                         /* ND58             */
    uint8  ND59:1;                                         /* ND59             */
    uint8  ND60:1;                                         /* ND60             */
    uint8  ND61:1;                                         /* ND61             */
    uint8  ND62:1;                                         /* ND62             */
    uint8  ND63:1;                                         /* ND63             */
} __type59;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ND64:1;                                         /* ND64             */
    uint8  ND65:1;                                         /* ND65             */
    uint8  ND66:1;                                         /* ND66             */
    uint8  ND67:1;                                         /* ND67             */
    uint8  ND68:1;                                         /* ND68             */
    uint8  ND69:1;                                         /* ND69             */
    uint8  ND70:1;                                         /* ND70             */
    uint8  ND71:1;                                         /* ND71             */
    uint8  ND72:1;                                         /* ND72             */
    uint8  ND73:1;                                         /* ND73             */
    uint8  ND74:1;                                         /* ND74             */
    uint8  ND75:1;                                         /* ND75             */
    uint8  ND76:1;                                         /* ND76             */
    uint8  ND77:1;                                         /* ND77             */
    uint8  ND78:1;                                         /* ND78             */
    uint8  ND79:1;                                         /* ND79             */
    uint8  ND80:1;                                         /* ND80             */
    uint8  ND81:1;                                         /* ND81             */
    uint8  ND82:1;                                         /* ND82             */
    uint8  ND83:1;                                         /* ND83             */
    uint8  ND84:1;                                         /* ND84             */
    uint8  ND85:1;                                         /* ND85             */
    uint8  ND86:1;                                         /* ND86             */
    uint8  ND87:1;                                         /* ND87             */
    uint8  ND88:1;                                         /* ND88             */
    uint8  ND89:1;                                         /* ND89             */
    uint8  ND90:1;                                         /* ND90             */
    uint8  ND91:1;                                         /* ND91             */
    uint8  ND92:1;                                         /* ND92             */
    uint8  ND93:1;                                         /* ND93             */
    uint8  ND94:1;                                         /* ND94             */
    uint8  ND95:1;                                         /* ND95             */
} __type60;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ND96:1;                                         /* ND96             */
    uint8  ND97:1;                                         /* ND97             */
    uint8  ND98:1;                                         /* ND98             */
    uint8  ND99:1;                                         /* ND99             */
    uint8  ND100:1;                                        /* ND100            */
    uint8  ND101:1;                                        /* ND101            */
    uint8  ND102:1;                                        /* ND102            */
    uint8  ND103:1;                                        /* ND103            */
    uint8  ND104:1;                                        /* ND104            */
    uint8  ND105:1;                                        /* ND105            */
    uint8  ND106:1;                                        /* ND106            */
    uint8  ND107:1;                                        /* ND107            */
    uint8  ND108:1;                                        /* ND108            */
    uint8  ND109:1;                                        /* ND109            */
    uint8  ND110:1;                                        /* ND110            */
    uint8  ND111:1;                                        /* ND111            */
    uint8  ND112:1;                                        /* ND112            */
    uint8  ND113:1;                                        /* ND113            */
    uint8  ND114:1;                                        /* ND114            */
    uint8  ND115:1;                                        /* ND115            */
    uint8  ND116:1;                                        /* ND116            */
    uint8  ND117:1;                                        /* ND117            */
    uint8  ND118:1;                                        /* ND118            */
    uint8  ND119:1;                                        /* ND119            */
    uint8  ND120:1;                                        /* ND120            */
    uint8  ND121:1;                                        /* ND121            */
    uint8  ND122:1;                                        /* ND122            */
    uint8  ND123:1;                                        /* ND123            */
    uint8  ND124:1;                                        /* ND124            */
    uint8  ND125:1;                                        /* ND125            */
    uint8  ND126:1;                                        /* ND126            */
    uint8  ND127:1;                                        /* ND127            */
} __type61;
typedef struct 
{                                                          /* Bit Access       */
    uint8  MBC0:1;                                         /* MBC0             */
    uint8  MBC1:1;                                         /* MBC1             */
    uint8  MBC2:1;                                         /* MBC2             */
    uint8  MBC3:1;                                         /* MBC3             */
    uint8  MBC4:1;                                         /* MBC4             */
    uint8  MBC5:1;                                         /* MBC5             */
    uint8  MBC6:1;                                         /* MBC6             */
    uint8  MBC7:1;                                         /* MBC7             */
    uint8  MBC8:1;                                         /* MBC8             */
    uint8  MBC9:1;                                         /* MBC9             */
    uint8  MBC10:1;                                        /* MBC10            */
    uint8  MBC11:1;                                        /* MBC11            */
    uint8  MBC12:1;                                        /* MBC12            */
    uint8  MBC13:1;                                        /* MBC13            */
    uint8  MBC14:1;                                        /* MBC14            */
    uint8  MBC15:1;                                        /* MBC15            */
    uint8  MBC16:1;                                        /* MBC16            */
    uint8  MBC17:1;                                        /* MBC17            */
    uint8  MBC18:1;                                        /* MBC18            */
    uint8  MBC19:1;                                        /* MBC19            */
    uint8  MBC20:1;                                        /* MBC20            */
    uint8  MBC21:1;                                        /* MBC21            */
    uint8  MBC22:1;                                        /* MBC22            */
    uint8  MBC23:1;                                        /* MBC23            */
    uint8  MBC24:1;                                        /* MBC24            */
    uint8  MBC25:1;                                        /* MBC25            */
    uint8  MBC26:1;                                        /* MBC26            */
    uint8  MBC27:1;                                        /* MBC27            */
    uint8  MBC28:1;                                        /* MBC28            */
    uint8  MBC29:1;                                        /* MBC29            */
    uint8  MBC30:1;                                        /* MBC30            */
    uint8  MBC31:1;                                        /* MBC31            */
} __type62;
typedef struct 
{                                                          /* Bit Access       */
    uint8  MBC32:1;                                        /* MBC32            */
    uint8  MBC33:1;                                        /* MBC33            */
    uint8  MBC34:1;                                        /* MBC34            */
    uint8  MBC35:1;                                        /* MBC35            */
    uint8  MBC36:1;                                        /* MBC36            */
    uint8  MBC37:1;                                        /* MBC37            */
    uint8  MBC38:1;                                        /* MBC38            */
    uint8  MBC39:1;                                        /* MBC39            */
    uint8  MBC40:1;                                        /* MBC40            */
    uint8  MBC41:1;                                        /* MBC41            */
    uint8  MBC42:1;                                        /* MBC42            */
    uint8  MBC43:1;                                        /* MBC43            */
    uint8  MBC44:1;                                        /* MBC44            */
    uint8  MBC45:1;                                        /* MBC45            */
    uint8  MBC46:1;                                        /* MBC46            */
    uint8  MBC47:1;                                        /* MBC47            */
    uint8  MBC48:1;                                        /* MBC48            */
    uint8  MBC49:1;                                        /* MBC49            */
    uint8  MBC50:1;                                        /* MBC50            */
    uint8  MBC51:1;                                        /* MBC51            */
    uint8  MBC52:1;                                        /* MBC52            */
    uint8  MBC53:1;                                        /* MBC53            */
    uint8  MBC54:1;                                        /* MBC54            */
    uint8  MBC55:1;                                        /* MBC55            */
    uint8  MBC56:1;                                        /* MBC56            */
    uint8  MBC57:1;                                        /* MBC57            */
    uint8  MBC58:1;                                        /* MBC58            */
    uint8  MBC59:1;                                        /* MBC59            */
    uint8  MBC60:1;                                        /* MBC60            */
    uint8  MBC61:1;                                        /* MBC61            */
    uint8  MBC62:1;                                        /* MBC62            */
    uint8  MBC63:1;                                        /* MBC63            */
} __type63;
typedef struct 
{                                                          /* Bit Access       */
    uint8  MBC64:1;                                        /* MBC64            */
    uint8  MBC65:1;                                        /* MBC65            */
    uint8  MBC66:1;                                        /* MBC66            */
    uint8  MBC67:1;                                        /* MBC67            */
    uint8  MBC68:1;                                        /* MBC68            */
    uint8  MBC69:1;                                        /* MBC69            */
    uint8  MBC70:1;                                        /* MBC70            */
    uint8  MBC71:1;                                        /* MBC71            */
    uint8  MBC72:1;                                        /* MBC72            */
    uint8  MBC73:1;                                        /* MBC73            */
    uint8  MBC74:1;                                        /* MBC74            */
    uint8  MBC75:1;                                        /* MBC75            */
    uint8  MBC76:1;                                        /* MBC76            */
    uint8  MBC77:1;                                        /* MBC77            */
    uint8  MBC78:1;                                        /* MBC78            */
    uint8  MBC79:1;                                        /* MBC79            */
    uint8  MBC80:1;                                        /* MBC80            */
    uint8  MBC81:1;                                        /* MBC81            */
    uint8  MBC82:1;                                        /* MBC82            */
    uint8  MBC83:1;                                        /* MBC83            */
    uint8  MBC84:1;                                        /* MBC84            */
    uint8  MBC85:1;                                        /* MBC85            */
    uint8  MBC86:1;                                        /* MBC86            */
    uint8  MBC87:1;                                        /* MBC87            */
    uint8  MBC88:1;                                        /* MBC88            */
    uint8  MBC89:1;                                        /* MBC89            */
    uint8  MBC90:1;                                        /* MBC90            */
    uint8  MBC91:1;                                        /* MBC91            */
    uint8  MBC92:1;                                        /* MBC92            */
    uint8  MBC93:1;                                        /* MBC93            */
    uint8  MBC94:1;                                        /* MBC94            */
    uint8  MBC95:1;                                        /* MBC95            */
} __type64;
typedef struct 
{                                                          /* Bit Access       */
    uint8  MBC96:1;                                        /* MBC96            */
    uint8  MBC97:1;                                        /* MBC97            */
    uint8  MBC98:1;                                        /* MBC98            */
    uint8  MBC99:1;                                        /* MBC99            */
    uint8  MBC100:1;                                       /* MBC100           */
    uint8  MBC101:1;                                       /* MBC101           */
    uint8  MBC102:1;                                       /* MBC102           */
    uint8  MBC103:1;                                       /* MBC103           */
    uint8  MBC104:1;                                       /* MBC104           */
    uint8  MBC105:1;                                       /* MBC105           */
    uint8  MBC106:1;                                       /* MBC106           */
    uint8  MBC107:1;                                       /* MBC107           */
    uint8  MBC108:1;                                       /* MBC108           */
    uint8  MBC109:1;                                       /* MBC109           */
    uint8  MBC110:1;                                       /* MBC110           */
    uint8  MBC111:1;                                       /* MBC111           */
    uint8  MBC112:1;                                       /* MBC112           */
    uint8  MBC113:1;                                       /* MBC113           */
    uint8  MBC114:1;                                       /* MBC114           */
    uint8  MBC115:1;                                       /* MBC115           */
    uint8  MBC116:1;                                       /* MBC116           */
    uint8  MBC117:1;                                       /* MBC117           */
    uint8  MBC118:1;                                       /* MBC118           */
    uint8  MBC119:1;                                       /* MBC119           */
    uint8  MBC120:1;                                       /* MBC120           */
    uint8  MBC121:1;                                       /* MBC121           */
    uint8  MBC122:1;                                       /* MBC122           */
    uint8  MBC123:1;                                       /* MBC123           */
    uint8  MBC124:1;                                       /* MBC124           */
    uint8  MBC125:1;                                       /* MBC125           */
    uint8  MBC126:1;                                       /* MBC126           */
    uint8  MBC127:1;                                       /* MBC127           */
} __type65;
typedef struct 
{                                                          /* Bit Access       */
    uint32 MD:32;                                          /* MD[31:0]         */
} __type66;
typedef struct 
{                                                          /* Bit Access       */
    uint16 FID:11;                                         /* FID[10:0]        */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  CYC:7;                                          /* CYC[22:16]       */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  CH:2;                                           /* CH[25:24]        */
    uint8  CFG:1;                                          /* CFG              */
    uint8  PPIT:1;                                         /* PPIT             */
    uint8  TXM:1;                                          /* TXM              */
    uint8  MBI:1;                                          /* MBI              */
    uint8  :2;                                             /* Reserved Bits    */
} __type67;
typedef struct 
{                                                          /* Bit Access       */
    uint16 CRC:11;                                         /* CRC[10:0]        */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  PLC:7;                                          /* PLC[22:16]       */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type68;
typedef struct 
{                                                          /* Bit Access       */
    uint16 DP:11;                                          /* DP[10:0]         */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type69;
typedef struct 
{                                                          /* Bit Access       */
    uint8  LHSH:1;                                         /* LHSH             */
    uint8  LDSH:1;                                         /* LDSH             */
    uint8  STXRH:1;                                        /* STXRH            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    const uint8  LHSS:1;                                   /* LHSS             */
    const uint8  LDSS:1;                                   /* LDSS             */
    const uint8  STXRS:1;                                  /* STXRS            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type70;
typedef struct 
{                                                          /* Bit Access       */
    uint8  IBRH:7;                                         /* IBRH[6:0]        */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  :7;                                             /* Reserved Bits    */
    const uint8  IBSYH:1;                                  /* IBSYH            */
    const uint8  IBRS:7;                                   /* IBRS[22:16]      */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  :7;                                             /* Reserved Bits    */
    const uint8  IBSYS:1;                                  /* IBSYS            */
} __type71;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 CRC:11;                                   /* CRC[10:0]        */
    uint8  :5;                                             /* Reserved Bits    */
    const uint8  PLC:7;                                    /* PLC[22:16]       */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  PLR:7;                                    /* PLR[30:24]       */
    uint8  :1;                                             /* Reserved Bits    */
} __type72;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 DP:11;                                    /* DP[10:0]         */
    uint8  :5;                                             /* Reserved Bits    */
    const uint8  RCC:6;                                    /* RCC[21:16]       */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  RCI:1;                                    /* RCI              */
    const uint8  SFI:1;                                    /* SFI              */
    const uint8  SYN:1;                                    /* SYN              */
    const uint8  NFI:1;                                    /* NFI              */
    const uint8  PPI:1;                                    /* PPI              */
    const uint8  RES:1;                                    /* RES              */
    uint8  :2;                                             /* Reserved Bits    */
} __type73;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  VFRA:1;                                   /* VFRA             */
    const uint8  VFRB:1;                                   /* VFRB             */
    const uint8  SEOA:1;                                   /* SEOA             */
    const uint8  SEOB:1;                                   /* SEOB             */
    const uint8  CEOA:1;                                   /* CEOA             */
    const uint8  CEOB:1;                                   /* CEOB             */
    const uint8  SVOA:1;                                   /* SVOA             */
    const uint8  SVOB:1;                                   /* SVOB             */
    const uint8  TCIA:1;                                   /* TCIA             */
    const uint8  TCIB:1;                                   /* TCIB             */
    const uint8  ESA:1;                                    /* ESA              */
    const uint8  ESB:1;                                    /* ESB              */
    const uint8  MLST:1;                                   /* MLST             */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  FTA:1;                                    /* FTA              */
    const uint8  FTB:1;                                    /* FTB              */
    const uint8  CCS:6;                                    /* CCS[21:16]       */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  RCIS:1;                                   /* RCIS             */
    const uint8  SFIS:1;                                   /* SFIS             */
    const uint8  SYNS:1;                                   /* SYNS             */
    const uint8  NFIS:1;                                   /* NFIS             */
    const uint8  PPIS:1;                                   /* PPIS             */
    const uint8  RESS:1;                                   /* RESS             */
    uint8  :2;                                             /* Reserved Bits    */
} __type74;
typedef struct 
{                                                          /* Bit Access       */
    uint8  RHSS:1;                                         /* RHSS             */
    uint8  RDSS:1;                                         /* RDSS             */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    const uint8  RHSH:1;                                   /* RHSH             */
    const uint8  RDSH:1;                                   /* RDSH             */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type75;
typedef struct 
{                                                          /* Bit Access       */
    uint8  OBRS:7;                                         /* OBRS[6:0]        */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  VIEW:1;                                         /* VIEW             */
    uint8  REQ:1;                                          /* REQ              */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  OBSYS:1;                                        /* OBSYS            */
    const uint8  OBRH:7;                                   /* OBRH[22:16]      */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type76;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ITE:1;                                          /* ITE              */
    uint8  IQHR:1;                                         /* IQHR             */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  IQFIE:1;                                        /* IQFIE            */
    uint8  IQEIE:1;                                        /* IQEIE            */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  ITM:7;                                          /* ITM[22:16]       */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type77;
typedef struct 
{                                                          /* Bit Access       */
    uint8  OTE:1;                                          /* OTE              */
    uint8  OTCS:1;                                         /* OTCS             */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  OIE:1;                                          /* OIE              */
    uint8  FIE:1;                                          /* FIE              */
    uint8  OWIE:1;                                         /* OWIE             */
    uint8  FWIE:1;                                         /* FWIE             */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  FTM:5;                                          /* FTM[20:16]       */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type78;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ITA:32;                                         /* ITA[31:0]        */
} __type79;
typedef struct 
{                                                          /* Bit Access       */
    uint32 FTA:32;                                         /* FTA[31:0]        */
} __type80;
typedef struct 
{                                                          /* Bit Access       */
    uint32 OTA:32;                                         /* OTA[31:0]        */
} __type81;
typedef struct 
{                                                          /* Bit Access       */
    uint8  IMBNR:7;                                        /* IMBNR[6:0]       */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type82;
typedef struct 
{                                                          /* Bit Access       */
    uint8  UIDX:8;                                         /* UIDX[7:0]        */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type83;
typedef struct 
{                                                          /* Bit Access       */
    uint8  UMBNR:7;                                        /* UMBNR[6:0]       */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  URDS:1;                                         /* URDS             */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type84;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  ITS:1;                                    /* ITS              */
    const uint8  IQH:1;                                    /* IQH              */
    const uint8  UIRP:1;                                   /* UIRP             */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  IQFIS:1;                                        /* IQFIS            */
    uint8  IQEIS:1;                                        /* IQEIS            */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  IQFP:1;                                   /* IQFP             */
    uint8  :3;                                             /* Reserved Bits    */
    const uint8  IPIDX:7;                                  /* IPIDX[22:16]     */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  IGIDX:7;                                  /* IGIDX[30:24]     */
    uint8  :1;                                             /* Reserved Bits    */
} __type85;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  OTS:1;                                    /* OTS              */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  UORP:1;                                   /* UORP             */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  OTIS:1;                                         /* OTIS             */
    uint8  FIS:1;                                          /* FIS              */
    uint8  OWIS:1;                                         /* OWIS             */
    uint8  FWIS:1;                                         /* FWIS             */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  FDA:1;                                          /* FDA              */
    const uint8  OWP:1;                                    /* OWP              */
    const uint8  FWP:1;                                    /* FWP              */
    const uint8  FGIDX:5;                                  /* FGIDX[20:16]     */
    uint8  :3;                                             /* Reserved Bits    */
    const uint8  FFL:6;                                    /* FFL[29:24]       */
    uint8  :2;                                             /* Reserved Bits    */
} __type86;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  EIDX:8;                                   /* EIDX[7:0]        */
    uint8  IAE:1;                                          /* IAE              */
    uint8  OAE:1;                                          /* OAE              */
    uint8  FAE:1;                                          /* FAE              */
    uint8  MAE:1;                                          /* MAE              */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type87;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 AEA:32;                                   /* AEA[31:0]        */
} __type88;
typedef struct 
{                                                          /* Bit Access       */
    uint8  DA0:1;                                          /* DA0              */
    uint8  DA1:1;                                          /* DA1              */
    uint8  DA2:1;                                          /* DA2              */
    uint8  DA3:1;                                          /* DA3              */
    uint8  DA4:1;                                          /* DA4              */
    uint8  DA5:1;                                          /* DA5              */
    uint8  DA6:1;                                          /* DA6              */
    uint8  DA7:1;                                          /* DA7              */
    uint8  DA8:1;                                          /* DA8              */
    uint8  DA9:1;                                          /* DA9              */
    uint8  DA10:1;                                         /* DA10             */
    uint8  DA11:1;                                         /* DA11             */
    uint8  DA12:1;                                         /* DA12             */
    uint8  DA13:1;                                         /* DA13             */
    uint8  DA14:1;                                         /* DA14             */
    uint8  DA15:1;                                         /* DA15             */
    uint8  DA16:1;                                         /* DA16             */
    uint8  DA17:1;                                         /* DA17             */
    uint8  DA18:1;                                         /* DA18             */
    uint8  DA19:1;                                         /* DA19             */
    uint8  DA20:1;                                         /* DA20             */
    uint8  DA21:1;                                         /* DA21             */
    uint8  DA22:1;                                         /* DA22             */
    uint8  DA23:1;                                         /* DA23             */
    uint8  DA24:1;                                         /* DA24             */
    uint8  DA25:1;                                         /* DA25             */
    uint8  DA26:1;                                         /* DA26             */
    uint8  DA27:1;                                         /* DA27             */
    uint8  DA28:1;                                         /* DA28             */
    uint8  DA29:1;                                         /* DA29             */
    uint8  DA30:1;                                         /* DA30             */
    uint8  DA31:1;                                         /* DA31             */
} __type89;
typedef struct 
{                                                          /* Bit Access       */
    uint8  DA32:1;                                         /* DA32             */
    uint8  DA33:1;                                         /* DA33             */
    uint8  DA34:1;                                         /* DA34             */
    uint8  DA35:1;                                         /* DA35             */
    uint8  DA36:1;                                         /* DA36             */
    uint8  DA37:1;                                         /* DA37             */
    uint8  DA38:1;                                         /* DA38             */
    uint8  DA39:1;                                         /* DA39             */
    uint8  DA40:1;                                         /* DA40             */
    uint8  DA41:1;                                         /* DA41             */
    uint8  DA42:1;                                         /* DA42             */
    uint8  DA43:1;                                         /* DA43             */
    uint8  DA44:1;                                         /* DA44             */
    uint8  DA45:1;                                         /* DA45             */
    uint8  DA46:1;                                         /* DA46             */
    uint8  DA47:1;                                         /* DA47             */
    uint8  DA48:1;                                         /* DA48             */
    uint8  DA49:1;                                         /* DA49             */
    uint8  DA50:1;                                         /* DA50             */
    uint8  DA51:1;                                         /* DA51             */
    uint8  DA52:1;                                         /* DA52             */
    uint8  DA53:1;                                         /* DA53             */
    uint8  DA54:1;                                         /* DA54             */
    uint8  DA55:1;                                         /* DA55             */
    uint8  DA56:1;                                         /* DA56             */
    uint8  DA57:1;                                         /* DA57             */
    uint8  DA58:1;                                         /* DA58             */
    uint8  DA59:1;                                         /* DA59             */
    uint8  DA60:1;                                         /* DA60             */
    uint8  DA61:1;                                         /* DA61             */
    uint8  DA62:1;                                         /* DA62             */
    uint8  DA63:1;                                         /* DA63             */
} __type90;
typedef struct 
{                                                          /* Bit Access       */
    uint8  DA64:1;                                         /* DA64             */
    uint8  DA65:1;                                         /* DA65             */
    uint8  DA66:1;                                         /* DA66             */
    uint8  DA67:1;                                         /* DA67             */
    uint8  DA68:1;                                         /* DA68             */
    uint8  DA69:1;                                         /* DA69             */
    uint8  DA70:1;                                         /* DA70             */
    uint8  DA71:1;                                         /* DA71             */
    uint8  DA72:1;                                         /* DA72             */
    uint8  DA73:1;                                         /* DA73             */
    uint8  DA74:1;                                         /* DA74             */
    uint8  DA75:1;                                         /* DA75             */
    uint8  DA76:1;                                         /* DA76             */
    uint8  DA77:1;                                         /* DA77             */
    uint8  DA78:1;                                         /* DA78             */
    uint8  DA79:1;                                         /* DA79             */
    uint8  DA80:1;                                         /* DA80             */
    uint8  DA81:1;                                         /* DA81             */
    uint8  DA82:1;                                         /* DA82             */
    uint8  DA83:1;                                         /* DA83             */
    uint8  DA84:1;                                         /* DA84             */
    uint8  DA85:1;                                         /* DA85             */
    uint8  DA86:1;                                         /* DA86             */
    uint8  DA87:1;                                         /* DA87             */
    uint8  DA88:1;                                         /* DA88             */
    uint8  DA89:1;                                         /* DA89             */
    uint8  DA90:1;                                         /* DA90             */
    uint8  DA91:1;                                         /* DA91             */
    uint8  DA92:1;                                         /* DA92             */
    uint8  DA93:1;                                         /* DA93             */
    uint8  DA94:1;                                         /* DA94             */
    uint8  DA95:1;                                         /* DA95             */
} __type91;
typedef struct 
{                                                          /* Bit Access       */
    uint8  DA96:1;                                         /* DA96             */
    uint8  DA97:1;                                         /* DA97             */
    uint8  DA98:1;                                         /* DA98             */
    uint8  DA99:1;                                         /* DA99             */
    uint8  DA100:1;                                        /* DA100            */
    uint8  DA101:1;                                        /* DA101            */
    uint8  DA102:1;                                        /* DA102            */
    uint8  DA103:1;                                        /* DA103            */
    uint8  DA104:1;                                        /* DA104            */
    uint8  DA105:1;                                        /* DA105            */
    uint8  DA106:1;                                        /* DA106            */
    uint8  DA107:1;                                        /* DA107            */
    uint8  DA108:1;                                        /* DA108            */
    uint8  DA109:1;                                        /* DA109            */
    uint8  DA110:1;                                        /* DA110            */
    uint8  DA111:1;                                        /* DA111            */
    uint8  DA112:1;                                        /* DA112            */
    uint8  DA113:1;                                        /* DA113            */
    uint8  DA114:1;                                        /* DA114            */
    uint8  DA115:1;                                        /* DA115            */
    uint8  DA116:1;                                        /* DA116            */
    uint8  DA117:1;                                        /* DA117            */
    uint8  DA118:1;                                        /* DA118            */
    uint8  DA119:1;                                        /* DA119            */
    uint8  DA120:1;                                        /* DA120            */
    uint8  DA121:1;                                        /* DA121            */
    uint8  DA122:1;                                        /* DA122            */
    uint8  DA123:1;                                        /* DA123            */
    uint8  DA124:1;                                        /* DA124            */
    uint8  DA125:1;                                        /* DA125            */
    uint8  DA126:1;                                        /* DA126            */
    uint8  DA127:1;                                        /* DA127            */
} __type92;
typedef struct 
{                                                          /* Bit Access       */
    uint8  HPROT:4;                                        /* HPROT[3:0]       */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type93;
typedef struct 
{                                                          /* Bit Access       */
    uint8  T2RC:1;                                         /* T2RC             */
    uint8  T2MS:1;                                         /* T2MS             */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  T2CC:7;                                         /* T2CC[14:8]       */
    uint8  :1;                                             /* Reserved Bits    */
    uint16 T2MO:14;                                        /* T2MO[29:16]      */
    uint8  :2;                                             /* Reserved Bits    */
} __type94;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type0 BIT;                                           /* Bit Access       */
} __type1277;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type1 BIT;                                           /* Bit Access       */
} __type1278;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type2 BIT;                                           /* Bit Access       */
} __type1279;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type3 BIT;                                           /* Bit Access       */
} __type1280;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type4 BIT;                                           /* Bit Access       */
} __type1281;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type5 BIT;                                           /* Bit Access       */
} __type1282;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type6 BIT;                                           /* Bit Access       */
} __type1283;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type7 BIT;                                           /* Bit Access       */
} __type1284;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type8 BIT;                                           /* Bit Access       */
} __type1285;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type9 BIT;                                           /* Bit Access       */
} __type1286;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type10 BIT;                                          /* Bit Access       */
} __type1287;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type11 BIT;                                          /* Bit Access       */
} __type1288;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type12 BIT;                                          /* Bit Access       */
} __type1289;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type13 BIT;                                          /* Bit Access       */
} __type1290;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type14 BIT;                                          /* Bit Access       */
} __type1291;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type15 BIT;                                    /* Bit Access       */
} __type1292;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type16 BIT;                                          /* Bit Access       */
} __type1293;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type17 BIT;                                          /* Bit Access       */
} __type1294;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type18 BIT;                                          /* Bit Access       */
} __type1295;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type19 BIT;                                          /* Bit Access       */
} __type1296;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type20 BIT;                                          /* Bit Access       */
} __type1297;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type21 BIT;                                          /* Bit Access       */
} __type1298;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type22 BIT;                                          /* Bit Access       */
} __type1299;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type23 BIT;                                          /* Bit Access       */
} __type1300;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type24 BIT;                                          /* Bit Access       */
} __type1301;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type25 BIT;                                          /* Bit Access       */
} __type1302;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type26 BIT;                                          /* Bit Access       */
} __type1303;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type27 BIT;                                          /* Bit Access       */
} __type1304;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type28 BIT;                                          /* Bit Access       */
} __type1305;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type29 BIT;                                          /* Bit Access       */
} __type1306;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type30 BIT;                                          /* Bit Access       */
} __type1307;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type31 BIT;                                          /* Bit Access       */
} __type1308;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type32 BIT;                                          /* Bit Access       */
} __type1309;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type33 BIT;                                          /* Bit Access       */
} __type1310;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type34 BIT;                                    /* Bit Access       */
} __type1311;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type35 BIT;                                    /* Bit Access       */
} __type1312;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type36 BIT;                                    /* Bit Access       */
} __type1313;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type37 BIT;                                    /* Bit Access       */
} __type1314;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type38 BIT;                                    /* Bit Access       */
} __type1315;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type39 BIT;                                    /* Bit Access       */
} __type1316;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type40 BIT;                                    /* Bit Access       */
} __type1317;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type41 BIT;                                    /* Bit Access       */
} __type1318;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type42 BIT;                                          /* Bit Access       */
} __type1319;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type43 BIT;                                    /* Bit Access       */
} __type1320;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type44 BIT;                                    /* Bit Access       */
} __type1321;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type45 BIT;                                    /* Bit Access       */
} __type1322;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type46 BIT;                                          /* Bit Access       */
} __type1323;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type47 BIT;                                          /* Bit Access       */
} __type1324;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type48 BIT;                                          /* Bit Access       */
} __type1325;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type49 BIT;                                          /* Bit Access       */
} __type1326;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type50 BIT;                                          /* Bit Access       */
} __type1327;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type51 BIT;                                    /* Bit Access       */
} __type1328;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type52 BIT;                                    /* Bit Access       */
} __type1329;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type53 BIT;                                          /* Bit Access       */
} __type1330;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type54 BIT;                                    /* Bit Access       */
} __type1331;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type55 BIT;                                    /* Bit Access       */
} __type1332;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type56 BIT;                                    /* Bit Access       */
} __type1333;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type57 BIT;                                    /* Bit Access       */
} __type1334;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type58 BIT;                                          /* Bit Access       */
} __type1335;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type59 BIT;                                          /* Bit Access       */
} __type1336;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type60 BIT;                                          /* Bit Access       */
} __type1337;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type61 BIT;                                          /* Bit Access       */
} __type1338;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type62 BIT;                                          /* Bit Access       */
} __type1339;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type63 BIT;                                          /* Bit Access       */
} __type1340;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type64 BIT;                                          /* Bit Access       */
} __type1341;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type65 BIT;                                          /* Bit Access       */
} __type1342;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type66 BIT;                                          /* Bit Access       */
} __type1343;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type67 BIT;                                          /* Bit Access       */
} __type1344;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type68 BIT;                                          /* Bit Access       */
} __type1345;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type69 BIT;                                          /* Bit Access       */
} __type1346;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type70 BIT;                                          /* Bit Access       */
} __type1347;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type71 BIT;                                          /* Bit Access       */
} __type1348;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type66 BIT;                                    /* Bit Access       */
} __type1349;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type67 BIT;                                    /* Bit Access       */
} __type1350;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type72 BIT;                                    /* Bit Access       */
} __type1351;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type73 BIT;                                    /* Bit Access       */
} __type1352;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type74 BIT;                                    /* Bit Access       */
} __type1353;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type75 BIT;                                          /* Bit Access       */
} __type1354;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type76 BIT;                                          /* Bit Access       */
} __type1355;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type77 BIT;                                          /* Bit Access       */
} __type1356;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type78 BIT;                                          /* Bit Access       */
} __type1357;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type79 BIT;                                          /* Bit Access       */
} __type1358;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type80 BIT;                                          /* Bit Access       */
} __type1359;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type81 BIT;                                          /* Bit Access       */
} __type1360;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type82 BIT;                                          /* Bit Access       */
} __type1361;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type83 BIT;                                          /* Bit Access       */
} __type1362;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type84 BIT;                                          /* Bit Access       */
} __type1363;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type85 BIT;                                          /* Bit Access       */
} __type1364;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type86 BIT;                                          /* Bit Access       */
} __type1365;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type87 BIT;                                          /* Bit Access       */
} __type1366;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type88 BIT;                                    /* Bit Access       */
} __type1367;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type89 BIT;                                          /* Bit Access       */
} __type1368;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type90 BIT;                                          /* Bit Access       */
} __type1369;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type91 BIT;                                          /* Bit Access       */
} __type1370;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type92 BIT;                                          /* Bit Access       */
} __type1371;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type93 BIT;                                          /* Bit Access       */
} __type1372;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type94 BIT;                                          /* Bit Access       */
} __type1373;

typedef struct 
{                                                          /* Module           */
    __type1277 FROC;                                       /* FROC             */
    uint8  dummy0[4];                                      /* Reserved         */
    __type1278 FROS;                                       /* FROS             */
    uint8  dummy1[12];                                     /* Reserved         */
    __type1279 FRLCK;                                      /* FRLCK            */
    __type1280 FREIR;                                      /* FREIR            */
    __type1281 FRSIR;                                      /* FRSIR            */
    __type1282 FREILS;                                     /* FREILS           */
    __type1283 FRSILS;                                     /* FRSILS           */
    __type1284 FREIES;                                     /* FREIES           */
    __type1285 FREIER;                                     /* FREIER           */
    __type1286 FRSIES;                                     /* FRSIES           */
    __type1287 FRSIER;                                     /* FRSIER           */
    __type1288 FRILE;                                      /* FRILE            */
    __type1289 FRT0C;                                      /* FRT0C            */
    __type1290 FRT1C;                                      /* FRT1C            */
    __type1291 FRSTPW1;                                    /* FRSTPW1          */
    const __type1292 FRSTPW2;                              /* FRSTPW2          */
    uint8  dummy2[44];                                     /* Reserved         */
    __type1293 FRSUCC1;                                    /* FRSUCC1          */
    __type1294 FRSUCC2;                                    /* FRSUCC2          */
    __type1295 FRSUCC3;                                    /* FRSUCC3          */
    __type1296 FRNEMC;                                     /* FRNEMC           */
    __type1297 FRPRTC1;                                    /* FRPRTC1          */
    __type1298 FRPRTC2;                                    /* FRPRTC2          */
    __type1299 FRMHDC;                                     /* FRMHDC           */
    uint8  dummy3[4];                                      /* Reserved         */
    __type1300 FRGTUC1;                                    /* FRGTUC1          */
    __type1301 FRGTUC2;                                    /* FRGTUC2          */
    __type1302 FRGTUC3;                                    /* FRGTUC3          */
    __type1303 FRGTUC4;                                    /* FRGTUC4          */
    __type1304 FRGTUC5;                                    /* FRGTUC5          */
    __type1305 FRGTUC6;                                    /* FRGTUC6          */
    __type1306 FRGTUC7;                                    /* FRGTUC7          */
    __type1307 FRGTUC8;                                    /* FRGTUC8          */
    __type1308 FRGTUC9;                                    /* FRGTUC9          */
    __type1309 FRGTUC10;                                   /* FRGTUC10         */
    __type1310 FRGTUC11;                                   /* FRGTUC11         */
    uint8  dummy4[52];                                     /* Reserved         */
    const __type1311 FRCCSV;                               /* FRCCSV           */
    const __type1312 FRCCEV;                               /* FRCCEV           */
    uint8  dummy5[8];                                      /* Reserved         */
    const __type1313 FRSCV;                                /* FRSCV            */
    const __type1314 FRMTCCV;                              /* FRMTCCV          */
    const __type1315 FRRCV;                                /* FRRCV            */
    const __type1316 FROCV;                                /* FROCV            */
    const __type1317 FRSFS;                                /* FRSFS            */
    const __type1318 FRSWNIT;                              /* FRSWNIT          */
    __type1319 FRACS;                                      /* FRACS            */
    uint8  dummy6[4];                                      /* Reserved         */
    const __type1320 FRESID1;                              /* FRESID1          */
    const __type1320 FRESID2;                              /* FRESID2          */
    const __type1320 FRESID3;                              /* FRESID3          */
    const __type1320 FRESID4;                              /* FRESID4          */
    const __type1320 FRESID5;                              /* FRESID5          */
    const __type1320 FRESID6;                              /* FRESID6          */
    const __type1320 FRESID7;                              /* FRESID7          */
    const __type1320 FRESID8;                              /* FRESID8          */
    const __type1320 FRESID9;                              /* FRESID9          */
    const __type1320 FRESID10;                             /* FRESID10         */
    const __type1320 FRESID11;                             /* FRESID11         */
    const __type1320 FRESID12;                             /* FRESID12         */
    const __type1320 FRESID13;                             /* FRESID13         */
    const __type1320 FRESID14;                             /* FRESID14         */
    const __type1320 FRESID15;                             /* FRESID15         */
    uint8  dummy7[4];                                      /* Reserved         */
    const __type1321 FROSID1;                              /* FROSID1          */
    const __type1321 FROSID2;                              /* FROSID2          */
    const __type1321 FROSID3;                              /* FROSID3          */
    const __type1321 FROSID4;                              /* FROSID4          */
    const __type1321 FROSID5;                              /* FROSID5          */
    const __type1321 FROSID6;                              /* FROSID6          */
    const __type1321 FROSID7;                              /* FROSID7          */
    const __type1321 FROSID8;                              /* FROSID8          */
    const __type1321 FROSID9;                              /* FROSID9          */
    const __type1321 FROSID10;                             /* FROSID10         */
    const __type1321 FROSID11;                             /* FROSID11         */
    const __type1321 FROSID12;                             /* FROSID12         */
    const __type1321 FROSID13;                             /* FROSID13         */
    const __type1321 FROSID14;                             /* FROSID14         */
    const __type1321 FROSID15;                             /* FROSID15         */
    uint8  dummy8[4];                                      /* Reserved         */
    const __type1322 FRNMV1;                               /* FRNMV1           */
    const __type1322 FRNMV2;                               /* FRNMV2           */
    const __type1322 FRNMV3;                               /* FRNMV3           */
    uint8  dummy9[324];                                    /* Reserved         */
    __type1323 FRMRC;                                      /* FRMRC            */
    __type1324 FRFRF;                                      /* FRFRF            */
    __type1325 FRFRFM;                                     /* FRFRFM           */
    __type1326 FRFCL;                                      /* FRFCL            */
    __type1327 FRMHDS;                                     /* FRMHDS           */
    const __type1328 FRLDTS;                               /* FRLDTS           */
    const __type1329 FRFSR;                                /* FRFSR            */
    __type1330 FRMHDF;                                     /* FRMHDF           */
    const __type1331 FRTXRQ1;                              /* FRTXRQ1          */
    const __type1332 FRTXRQ2;                              /* FRTXRQ2          */
    const __type1333 FRTXRQ3;                              /* FRTXRQ3          */
    const __type1334 FRTXRQ4;                              /* FRTXRQ4          */
    __type1335 FRNDAT1;                                    /* FRNDAT1          */
    __type1336 FRNDAT2;                                    /* FRNDAT2          */
    __type1337 FRNDAT3;                                    /* FRNDAT3          */
    __type1338 FRNDAT4;                                    /* FRNDAT4          */
    __type1339 FRMBSC1;                                    /* FRMBSC1          */
    __type1340 FRMBSC2;                                    /* FRMBSC2          */
    __type1341 FRMBSC3;                                    /* FRMBSC3          */
    __type1342 FRMBSC4;                                    /* FRMBSC4          */
    uint8  dummy10[176];                                   /* Reserved         */
    __type1343 FRWRDS1;                                    /* FRWRDS1          */
    __type1343 FRWRDS2;                                    /* FRWRDS2          */
    __type1343 FRWRDS3;                                    /* FRWRDS3          */
    __type1343 FRWRDS4;                                    /* FRWRDS4          */
    __type1343 FRWRDS5;                                    /* FRWRDS5          */
    __type1343 FRWRDS6;                                    /* FRWRDS6          */
    __type1343 FRWRDS7;                                    /* FRWRDS7          */
    __type1343 FRWRDS8;                                    /* FRWRDS8          */
    __type1343 FRWRDS9;                                    /* FRWRDS9          */
    __type1343 FRWRDS10;                                   /* FRWRDS10         */
    __type1343 FRWRDS11;                                   /* FRWRDS11         */
    __type1343 FRWRDS12;                                   /* FRWRDS12         */
    __type1343 FRWRDS13;                                   /* FRWRDS13         */
    __type1343 FRWRDS14;                                   /* FRWRDS14         */
    __type1343 FRWRDS15;                                   /* FRWRDS15         */
    __type1343 FRWRDS16;                                   /* FRWRDS16         */
    __type1343 FRWRDS17;                                   /* FRWRDS17         */
    __type1343 FRWRDS18;                                   /* FRWRDS18         */
    __type1343 FRWRDS19;                                   /* FRWRDS19         */
    __type1343 FRWRDS20;                                   /* FRWRDS20         */
    __type1343 FRWRDS21;                                   /* FRWRDS21         */
    __type1343 FRWRDS22;                                   /* FRWRDS22         */
    __type1343 FRWRDS23;                                   /* FRWRDS23         */
    __type1343 FRWRDS24;                                   /* FRWRDS24         */
    __type1343 FRWRDS25;                                   /* FRWRDS25         */
    __type1343 FRWRDS26;                                   /* FRWRDS26         */
    __type1343 FRWRDS27;                                   /* FRWRDS27         */
    __type1343 FRWRDS28;                                   /* FRWRDS28         */
    __type1343 FRWRDS29;                                   /* FRWRDS29         */
    __type1343 FRWRDS30;                                   /* FRWRDS30         */
    __type1343 FRWRDS31;                                   /* FRWRDS31         */
    __type1343 FRWRDS32;                                   /* FRWRDS32         */
    __type1343 FRWRDS33;                                   /* FRWRDS33         */
    __type1343 FRWRDS34;                                   /* FRWRDS34         */
    __type1343 FRWRDS35;                                   /* FRWRDS35         */
    __type1343 FRWRDS36;                                   /* FRWRDS36         */
    __type1343 FRWRDS37;                                   /* FRWRDS37         */
    __type1343 FRWRDS38;                                   /* FRWRDS38         */
    __type1343 FRWRDS39;                                   /* FRWRDS39         */
    __type1343 FRWRDS40;                                   /* FRWRDS40         */
    __type1343 FRWRDS41;                                   /* FRWRDS41         */
    __type1343 FRWRDS42;                                   /* FRWRDS42         */
    __type1343 FRWRDS43;                                   /* FRWRDS43         */
    __type1343 FRWRDS44;                                   /* FRWRDS44         */
    __type1343 FRWRDS45;                                   /* FRWRDS45         */
    __type1343 FRWRDS46;                                   /* FRWRDS46         */
    __type1343 FRWRDS47;                                   /* FRWRDS47         */
    __type1343 FRWRDS48;                                   /* FRWRDS48         */
    __type1343 FRWRDS49;                                   /* FRWRDS49         */
    __type1343 FRWRDS50;                                   /* FRWRDS50         */
    __type1343 FRWRDS51;                                   /* FRWRDS51         */
    __type1343 FRWRDS52;                                   /* FRWRDS52         */
    __type1343 FRWRDS53;                                   /* FRWRDS53         */
    __type1343 FRWRDS54;                                   /* FRWRDS54         */
    __type1343 FRWRDS55;                                   /* FRWRDS55         */
    __type1343 FRWRDS56;                                   /* FRWRDS56         */
    __type1343 FRWRDS57;                                   /* FRWRDS57         */
    __type1343 FRWRDS58;                                   /* FRWRDS58         */
    __type1343 FRWRDS59;                                   /* FRWRDS59         */
    __type1343 FRWRDS60;                                   /* FRWRDS60         */
    __type1343 FRWRDS61;                                   /* FRWRDS61         */
    __type1343 FRWRDS62;                                   /* FRWRDS62         */
    __type1343 FRWRDS63;                                   /* FRWRDS63         */
    __type1343 FRWRDS64;                                   /* FRWRDS64         */
    __type1344 FRWRHS1;                                    /* FRWRHS1          */
    __type1345 FRWRHS2;                                    /* FRWRHS2          */
    __type1346 FRWRHS3;                                    /* FRWRHS3          */
    uint8  dummy11[4];                                     /* Reserved         */
    __type1347 FRIBCM;                                     /* FRIBCM           */
    __type1348 FRIBCR;                                     /* FRIBCR           */
    uint8  dummy12[232];                                   /* Reserved         */
    const __type1349 FRRDDS1;                              /* FRRDDS1          */
    const __type1349 FRRDDS2;                              /* FRRDDS2          */
    const __type1349 FRRDDS3;                              /* FRRDDS3          */
    const __type1349 FRRDDS4;                              /* FRRDDS4          */
    const __type1349 FRRDDS5;                              /* FRRDDS5          */
    const __type1349 FRRDDS6;                              /* FRRDDS6          */
    const __type1349 FRRDDS7;                              /* FRRDDS7          */
    const __type1349 FRRDDS8;                              /* FRRDDS8          */
    const __type1349 FRRDDS9;                              /* FRRDDS9          */
    const __type1349 FRRDDS10;                             /* FRRDDS10         */
    const __type1349 FRRDDS11;                             /* FRRDDS11         */
    const __type1349 FRRDDS12;                             /* FRRDDS12         */
    const __type1349 FRRDDS13;                             /* FRRDDS13         */
    const __type1349 FRRDDS14;                             /* FRRDDS14         */
    const __type1349 FRRDDS15;                             /* FRRDDS15         */
    const __type1349 FRRDDS16;                             /* FRRDDS16         */
    const __type1349 FRRDDS17;                             /* FRRDDS17         */
    const __type1349 FRRDDS18;                             /* FRRDDS18         */
    const __type1349 FRRDDS19;                             /* FRRDDS19         */
    const __type1349 FRRDDS20;                             /* FRRDDS20         */
    const __type1349 FRRDDS21;                             /* FRRDDS21         */
    const __type1349 FRRDDS22;                             /* FRRDDS22         */
    const __type1349 FRRDDS23;                             /* FRRDDS23         */
    const __type1349 FRRDDS24;                             /* FRRDDS24         */
    const __type1349 FRRDDS25;                             /* FRRDDS25         */
    const __type1349 FRRDDS26;                             /* FRRDDS26         */
    const __type1349 FRRDDS27;                             /* FRRDDS27         */
    const __type1349 FRRDDS28;                             /* FRRDDS28         */
    const __type1349 FRRDDS29;                             /* FRRDDS29         */
    const __type1349 FRRDDS30;                             /* FRRDDS30         */
    const __type1349 FRRDDS31;                             /* FRRDDS31         */
    const __type1349 FRRDDS32;                             /* FRRDDS32         */
    const __type1349 FRRDDS33;                             /* FRRDDS33         */
    const __type1349 FRRDDS34;                             /* FRRDDS34         */
    const __type1349 FRRDDS35;                             /* FRRDDS35         */
    const __type1349 FRRDDS36;                             /* FRRDDS36         */
    const __type1349 FRRDDS37;                             /* FRRDDS37         */
    const __type1349 FRRDDS38;                             /* FRRDDS38         */
    const __type1349 FRRDDS39;                             /* FRRDDS39         */
    const __type1349 FRRDDS40;                             /* FRRDDS40         */
    const __type1349 FRRDDS41;                             /* FRRDDS41         */
    const __type1349 FRRDDS42;                             /* FRRDDS42         */
    const __type1349 FRRDDS43;                             /* FRRDDS43         */
    const __type1349 FRRDDS44;                             /* FRRDDS44         */
    const __type1349 FRRDDS45;                             /* FRRDDS45         */
    const __type1349 FRRDDS46;                             /* FRRDDS46         */
    const __type1349 FRRDDS47;                             /* FRRDDS47         */
    const __type1349 FRRDDS48;                             /* FRRDDS48         */
    const __type1349 FRRDDS49;                             /* FRRDDS49         */
    const __type1349 FRRDDS50;                             /* FRRDDS50         */
    const __type1349 FRRDDS51;                             /* FRRDDS51         */
    const __type1349 FRRDDS52;                             /* FRRDDS52         */
    const __type1349 FRRDDS53;                             /* FRRDDS53         */
    const __type1349 FRRDDS54;                             /* FRRDDS54         */
    const __type1349 FRRDDS55;                             /* FRRDDS55         */
    const __type1349 FRRDDS56;                             /* FRRDDS56         */
    const __type1349 FRRDDS57;                             /* FRRDDS57         */
    const __type1349 FRRDDS58;                             /* FRRDDS58         */
    const __type1349 FRRDDS59;                             /* FRRDDS59         */
    const __type1349 FRRDDS60;                             /* FRRDDS60         */
    const __type1349 FRRDDS61;                             /* FRRDDS61         */
    const __type1349 FRRDDS62;                             /* FRRDDS62         */
    const __type1349 FRRDDS63;                             /* FRRDDS63         */
    const __type1349 FRRDDS64;                             /* FRRDDS64         */
    const __type1350 FRRDHS1;                              /* FRRDHS1          */
    const __type1351 FRRDHS2;                              /* FRRDHS2          */
    const __type1352 FRRDHS3;                              /* FRRDHS3          */
    const __type1353 FRMBS;                                /* FRMBS            */
    __type1354 FROBCM;                                     /* FROBCM           */
    __type1355 FROBCR;                                     /* FROBCR           */
    uint8  dummy13[232];                                   /* Reserved         */
    __type1356 FRITC;                                      /* FRITC            */
    __type1357 FROTC;                                      /* FROTC            */
    __type1358 FRIBA;                                      /* FRIBA            */
    __type1359 FRFBA;                                      /* FRFBA            */
    __type1360 FROBA;                                      /* FROBA            */
    __type1361 FRIQC;                                      /* FRIQC            */
    __type1362 FRUIR;                                      /* FRUIR            */
    __type1363 FRUOR;                                      /* FRUOR            */
    __type1364 FRITS;                                      /* FRITS            */
    __type1365 FROTS;                                      /* FROTS            */
    __type1366 FRAES;                                      /* FRAES            */
    const __type1367 FRAEA;                                /* FRAEA            */
    __type1368 FRDA0;                                      /* FRDA0            */
    __type1369 FRDA1;                                      /* FRDA1            */
    __type1370 FRDA2;                                      /* FRDA2            */
    __type1371 FRDA3;                                      /* FRDA3            */
    __type1372 FRAHBC;                                     /* FRAHBC           */
    __type1373 FRT2C;                                      /* FRT2C            */
} __type2558;

__IOREG(FLXA0, 0x10020004, __READ_WRITE, __type2558);                 /* FLXA0 */

#define FLXA0FROC FLXA0.FROC.UINT32
#define FLXA0FROCL FLXA0.FROC.UINT16[L]
#define FLXA0FROCLL FLXA0.FROC.UINT8[LL]
#define FLXA0FROCLH FLXA0.FROC.UINT8[LH]
#define FLXA0FROCH FLXA0.FROC.UINT16[H]
#define FLXA0FROCHL FLXA0.FROC.UINT8[HL]
#define FLXA0FROCHH FLXA0.FROC.UINT8[HH]
#define FLXA0OE FLXA0.FROC.BIT.OE
#define FLXA0OEP FLXA0.FROC.BIT.OEP
#define FLXA0T0IE FLXA0.FROC.BIT.T0IE
#define FLXA0T1IE FLXA0.FROC.BIT.T1IE
#define FLXA0T2IE FLXA0.FROC.BIT.T2IE
#define FLXA0FROS FLXA0.FROS.UINT32
#define FLXA0FROSL FLXA0.FROS.UINT16[L]
#define FLXA0FROSLL FLXA0.FROS.UINT8[LL]
#define FLXA0FROSH FLXA0.FROS.UINT16[H]
#define FLXA0FROSHL FLXA0.FROS.UINT8[HL]
#define FLXA0OS FLXA0.FROS.BIT.OS
#define FLXA0T0IS FLXA0.FROS.BIT.T0IS
#define FLXA0T1IS FLXA0.FROS.BIT.T1IS
#define FLXA0T2IS FLXA0.FROS.BIT.T2IS
#define FLXA0FRLCK FLXA0.FRLCK.UINT32
#define FLXA0FRLCKL FLXA0.FRLCK.UINT16[L]
#define FLXA0FRLCKLL FLXA0.FRLCK.UINT8[LL]
#define FLXA0FRLCKLH FLXA0.FRLCK.UINT8[LH]
#define FLXA0FRLCKH FLXA0.FRLCK.UINT16[H]
#define FLXA0FRLCKHL FLXA0.FRLCK.UINT8[HL]
#define FLXA0FRLCKHH FLXA0.FRLCK.UINT8[HH]
#define FLXA0CLK FLXA0.FRLCK.BIT.CLK
#define FLXA0FREIR FLXA0.FREIR.UINT32
#define FLXA0FREIRL FLXA0.FREIR.UINT16[L]
#define FLXA0FREIRLL FLXA0.FREIR.UINT8[LL]
#define FLXA0FREIRLH FLXA0.FREIR.UINT8[LH]
#define FLXA0FREIRH FLXA0.FREIR.UINT16[H]
#define FLXA0FREIRHL FLXA0.FREIR.UINT8[HL]
#define FLXA0FREIRHH FLXA0.FREIR.UINT8[HH]
#define FLXA0PEMC FLXA0.FREIR.BIT.PEMC
#define FLXA0CNA FLXA0.FREIR.BIT.CNA
#define FLXA0SFBM FLXA0.FREIR.BIT.SFBM
#define FLXA0SFO FLXA0.FREIR.BIT.SFO
#define FLXA0CCF FLXA0.FREIR.BIT.CCF
#define FLXA0CCL FLXA0.FREIR.BIT.CCL
#define FLXA0AERR FLXA0.FREIR.BIT.AERR
#define FLXA0RFO FLXA0.FREIR.BIT.RFO
#define FLXA0EFA FLXA0.FREIR.BIT.EFA
#define FLXA0IIBA FLXA0.FREIR.BIT.IIBA
#define FLXA0IOBA FLXA0.FREIR.BIT.IOBA
#define FLXA0MHF FLXA0.FREIR.BIT.MHF
#define FLXA0EDA FLXA0.FREIR.BIT.EDA
#define FLXA0LTVA FLXA0.FREIR.BIT.LTVA
#define FLXA0TABA FLXA0.FREIR.BIT.TABA
#define FLXA0EDB FLXA0.FREIR.BIT.EDB
#define FLXA0LTVB FLXA0.FREIR.BIT.LTVB
#define FLXA0TABB FLXA0.FREIR.BIT.TABB
#define FLXA0FRSIR FLXA0.FRSIR.UINT32
#define FLXA0FRSIRL FLXA0.FRSIR.UINT16[L]
#define FLXA0FRSIRLL FLXA0.FRSIR.UINT8[LL]
#define FLXA0FRSIRLH FLXA0.FRSIR.UINT8[LH]
#define FLXA0FRSIRH FLXA0.FRSIR.UINT16[H]
#define FLXA0FRSIRHL FLXA0.FRSIR.UINT8[HL]
#define FLXA0FRSIRHH FLXA0.FRSIR.UINT8[HH]
#define FLXA0WST FLXA0.FRSIR.BIT.WST
#define FLXA0CAS FLXA0.FRSIR.BIT.CAS
#define FLXA0CYCS FLXA0.FRSIR.BIT.CYCS
#define FLXA0TXI FLXA0.FRSIR.BIT.TXI
#define FLXA0RXI FLXA0.FRSIR.BIT.RXI
#define FLXA0RFNE FLXA0.FRSIR.BIT.RFNE
#define FLXA0RFCL FLXA0.FRSIR.BIT.RFCL
#define FLXA0NMVC FLXA0.FRSIR.BIT.NMVC
#define FLXA0TI0 FLXA0.FRSIR.BIT.TI0
#define FLXA0TI1 FLXA0.FRSIR.BIT.TI1
#define FLXA0TIBC FLXA0.FRSIR.BIT.TIBC
#define FLXA0TOBC FLXA0.FRSIR.BIT.TOBC
#define FLXA0SWE FLXA0.FRSIR.BIT.SWE
#define FLXA0SUCS FLXA0.FRSIR.BIT.SUCS
#define FLXA0MBSI FLXA0.FRSIR.BIT.MBSI
#define FLXA0SDS FLXA0.FRSIR.BIT.SDS
#define FLXA0WUPA FLXA0.FRSIR.BIT.WUPA
#define FLXA0MTSA FLXA0.FRSIR.BIT.MTSA
#define FLXA0WUPB FLXA0.FRSIR.BIT.WUPB
#define FLXA0MTSB FLXA0.FRSIR.BIT.MTSB
#define FLXA0FREILS FLXA0.FREILS.UINT32
#define FLXA0FREILSL FLXA0.FREILS.UINT16[L]
#define FLXA0FREILSLL FLXA0.FREILS.UINT8[LL]
#define FLXA0FREILSLH FLXA0.FREILS.UINT8[LH]
#define FLXA0FREILSH FLXA0.FREILS.UINT16[H]
#define FLXA0FREILSHL FLXA0.FREILS.UINT8[HL]
#define FLXA0FREILSHH FLXA0.FREILS.UINT8[HH]
#define FLXA0PEMCL FLXA0.FREILS.BIT.PEMCL
#define FLXA0CNAL FLXA0.FREILS.BIT.CNAL
#define FLXA0SFBML FLXA0.FREILS.BIT.SFBML
#define FLXA0SFOL FLXA0.FREILS.BIT.SFOL
#define FLXA0CCFL FLXA0.FREILS.BIT.CCFL
#define FLXA0CCLL FLXA0.FREILS.BIT.CCLL
#define FLXA0AERRL FLXA0.FREILS.BIT.AERRL
#define FLXA0RFOL FLXA0.FREILS.BIT.RFOL
#define FLXA0EFAL FLXA0.FREILS.BIT.EFAL
#define FLXA0IIBAL FLXA0.FREILS.BIT.IIBAL
#define FLXA0IOBAL FLXA0.FREILS.BIT.IOBAL
#define FLXA0MHFL FLXA0.FREILS.BIT.MHFL
#define FLXA0EDAL FLXA0.FREILS.BIT.EDAL
#define FLXA0LTVAL FLXA0.FREILS.BIT.LTVAL
#define FLXA0TABAL FLXA0.FREILS.BIT.TABAL
#define FLXA0EDBL FLXA0.FREILS.BIT.EDBL
#define FLXA0LTVBL FLXA0.FREILS.BIT.LTVBL
#define FLXA0TABBL FLXA0.FREILS.BIT.TABBL
#define FLXA0FRSILS FLXA0.FRSILS.UINT32
#define FLXA0FRSILSL FLXA0.FRSILS.UINT16[L]
#define FLXA0FRSILSLL FLXA0.FRSILS.UINT8[LL]
#define FLXA0FRSILSLH FLXA0.FRSILS.UINT8[LH]
#define FLXA0FRSILSH FLXA0.FRSILS.UINT16[H]
#define FLXA0FRSILSHL FLXA0.FRSILS.UINT8[HL]
#define FLXA0FRSILSHH FLXA0.FRSILS.UINT8[HH]
#define FLXA0WSTL FLXA0.FRSILS.BIT.WSTL
#define FLXA0CASL FLXA0.FRSILS.BIT.CASL
#define FLXA0CYCSL FLXA0.FRSILS.BIT.CYCSL
#define FLXA0TXIL FLXA0.FRSILS.BIT.TXIL
#define FLXA0RXIL FLXA0.FRSILS.BIT.RXIL
#define FLXA0RFNEL FLXA0.FRSILS.BIT.RFNEL
#define FLXA0RFCLL FLXA0.FRSILS.BIT.RFCLL
#define FLXA0NMVCL FLXA0.FRSILS.BIT.NMVCL
#define FLXA0TI0L FLXA0.FRSILS.BIT.TI0L
#define FLXA0TI1L FLXA0.FRSILS.BIT.TI1L
#define FLXA0TIBCL FLXA0.FRSILS.BIT.TIBCL
#define FLXA0TOBCL FLXA0.FRSILS.BIT.TOBCL
#define FLXA0SWEL FLXA0.FRSILS.BIT.SWEL
#define FLXA0SUCSL FLXA0.FRSILS.BIT.SUCSL
#define FLXA0MBSIL FLXA0.FRSILS.BIT.MBSIL
#define FLXA0SDSL FLXA0.FRSILS.BIT.SDSL
#define FLXA0WUPAL FLXA0.FRSILS.BIT.WUPAL
#define FLXA0MTSAL FLXA0.FRSILS.BIT.MTSAL
#define FLXA0WUPBL FLXA0.FRSILS.BIT.WUPBL
#define FLXA0MTSBL FLXA0.FRSILS.BIT.MTSBL
#define FLXA0FREIES FLXA0.FREIES.UINT32
#define FLXA0FREIESL FLXA0.FREIES.UINT16[L]
#define FLXA0FREIESLL FLXA0.FREIES.UINT8[LL]
#define FLXA0FREIESLH FLXA0.FREIES.UINT8[LH]
#define FLXA0FREIESH FLXA0.FREIES.UINT16[H]
#define FLXA0FREIESHL FLXA0.FREIES.UINT8[HL]
#define FLXA0FREIESHH FLXA0.FREIES.UINT8[HH]
#define FLXA0PEMCE FLXA0.FREIES.BIT.PEMCE
#define FLXA0CNAE FLXA0.FREIES.BIT.CNAE
#define FLXA0SFBME FLXA0.FREIES.BIT.SFBME
#define FLXA0SFOE FLXA0.FREIES.BIT.SFOE
#define FLXA0CCFE FLXA0.FREIES.BIT.CCFE
#define FLXA0CCLE FLXA0.FREIES.BIT.CCLE
#define FLXA0AERRE FLXA0.FREIES.BIT.AERRE
#define FLXA0RFOE FLXA0.FREIES.BIT.RFOE
#define FLXA0EFAE FLXA0.FREIES.BIT.EFAE
#define FLXA0IIBAE FLXA0.FREIES.BIT.IIBAE
#define FLXA0IOBAE FLXA0.FREIES.BIT.IOBAE
#define FLXA0MHFE FLXA0.FREIES.BIT.MHFE
#define FLXA0EDAE FLXA0.FREIES.BIT.EDAE
#define FLXA0LTVAE FLXA0.FREIES.BIT.LTVAE
#define FLXA0TABAE FLXA0.FREIES.BIT.TABAE
#define FLXA0EDBE FLXA0.FREIES.BIT.EDBE
#define FLXA0LTVBE FLXA0.FREIES.BIT.LTVBE
#define FLXA0TABBE FLXA0.FREIES.BIT.TABBE
#define FLXA0FREIER FLXA0.FREIER.UINT32
#define FLXA0FREIERL FLXA0.FREIER.UINT16[L]
#define FLXA0FREIERLL FLXA0.FREIER.UINT8[LL]
#define FLXA0FREIERLH FLXA0.FREIER.UINT8[LH]
#define FLXA0FREIERH FLXA0.FREIER.UINT16[H]
#define FLXA0FREIERHL FLXA0.FREIER.UINT8[HL]
#define FLXA0FREIERHH FLXA0.FREIER.UINT8[HH]
#define FLXA0PEMCD FLXA0.FREIER.BIT.PEMCD
#define FLXA0CNAD FLXA0.FREIER.BIT.CNAD
#define FLXA0SFBMD FLXA0.FREIER.BIT.SFBMD
#define FLXA0SFOD FLXA0.FREIER.BIT.SFOD
#define FLXA0CCFD FLXA0.FREIER.BIT.CCFD
#define FLXA0CCLD FLXA0.FREIER.BIT.CCLD
#define FLXA0AERRD FLXA0.FREIER.BIT.AERRD
#define FLXA0RFOD FLXA0.FREIER.BIT.RFOD
#define FLXA0EFAD FLXA0.FREIER.BIT.EFAD
#define FLXA0IIBAD FLXA0.FREIER.BIT.IIBAD
#define FLXA0IOBAD FLXA0.FREIER.BIT.IOBAD
#define FLXA0MHFD FLXA0.FREIER.BIT.MHFD
#define FLXA0EDAD FLXA0.FREIER.BIT.EDAD
#define FLXA0LTVAD FLXA0.FREIER.BIT.LTVAD
#define FLXA0TABAD FLXA0.FREIER.BIT.TABAD
#define FLXA0EDBD FLXA0.FREIER.BIT.EDBD
#define FLXA0LTVBD FLXA0.FREIER.BIT.LTVBD
#define FLXA0TABBD FLXA0.FREIER.BIT.TABBD
#define FLXA0FRSIES FLXA0.FRSIES.UINT32
#define FLXA0FRSIESL FLXA0.FRSIES.UINT16[L]
#define FLXA0FRSIESLL FLXA0.FRSIES.UINT8[LL]
#define FLXA0FRSIESLH FLXA0.FRSIES.UINT8[LH]
#define FLXA0FRSIESH FLXA0.FRSIES.UINT16[H]
#define FLXA0FRSIESHL FLXA0.FRSIES.UINT8[HL]
#define FLXA0FRSIESHH FLXA0.FRSIES.UINT8[HH]
#define FLXA0WSTE FLXA0.FRSIES.BIT.WSTE
#define FLXA0CASE FLXA0.FRSIES.BIT.CASE
#define FLXA0CYCSE FLXA0.FRSIES.BIT.CYCSE
#define FLXA0TXIE FLXA0.FRSIES.BIT.TXIE
#define FLXA0RXIE FLXA0.FRSIES.BIT.RXIE
#define FLXA0RFNEE FLXA0.FRSIES.BIT.RFNEE
#define FLXA0RFCLE FLXA0.FRSIES.BIT.RFCLE
#define FLXA0NMVCE FLXA0.FRSIES.BIT.NMVCE
#define FLXA0TI0E FLXA0.FRSIES.BIT.TI0E
#define FLXA0TI1E FLXA0.FRSIES.BIT.TI1E
#define FLXA0TIBCE FLXA0.FRSIES.BIT.TIBCE
#define FLXA0TOBCE FLXA0.FRSIES.BIT.TOBCE
#define FLXA0SWEE FLXA0.FRSIES.BIT.SWEE
#define FLXA0SUCSE FLXA0.FRSIES.BIT.SUCSE
#define FLXA0MBSIE FLXA0.FRSIES.BIT.MBSIE
#define FLXA0SDSE FLXA0.FRSIES.BIT.SDSE
#define FLXA0WUPAE FLXA0.FRSIES.BIT.WUPAE
#define FLXA0MTSAE FLXA0.FRSIES.BIT.MTSAE
#define FLXA0WUPBE FLXA0.FRSIES.BIT.WUPBE
#define FLXA0MTSBE FLXA0.FRSIES.BIT.MTSBE
#define FLXA0FRSIER FLXA0.FRSIER.UINT32
#define FLXA0FRSIERL FLXA0.FRSIER.UINT16[L]
#define FLXA0FRSIERLL FLXA0.FRSIER.UINT8[LL]
#define FLXA0FRSIERLH FLXA0.FRSIER.UINT8[LH]
#define FLXA0FRSIERH FLXA0.FRSIER.UINT16[H]
#define FLXA0FRSIERHL FLXA0.FRSIER.UINT8[HL]
#define FLXA0FRSIERHH FLXA0.FRSIER.UINT8[HH]
#define FLXA0WSTD FLXA0.FRSIER.BIT.WSTD
#define FLXA0CASD FLXA0.FRSIER.BIT.CASD
#define FLXA0CYCSD FLXA0.FRSIER.BIT.CYCSD
#define FLXA0TXID FLXA0.FRSIER.BIT.TXID
#define FLXA0RXID FLXA0.FRSIER.BIT.RXID
#define FLXA0RFNED FLXA0.FRSIER.BIT.RFNED
#define FLXA0RFCLD FLXA0.FRSIER.BIT.RFCLD
#define FLXA0NMVCD FLXA0.FRSIER.BIT.NMVCD
#define FLXA0TI0D FLXA0.FRSIER.BIT.TI0D
#define FLXA0TI1D FLXA0.FRSIER.BIT.TI1D
#define FLXA0TIBCD FLXA0.FRSIER.BIT.TIBCD
#define FLXA0TOBCD FLXA0.FRSIER.BIT.TOBCD
#define FLXA0SWED FLXA0.FRSIER.BIT.SWED
#define FLXA0SUCSD FLXA0.FRSIER.BIT.SUCSD
#define FLXA0MBSID FLXA0.FRSIER.BIT.MBSID
#define FLXA0SDSD FLXA0.FRSIER.BIT.SDSD
#define FLXA0WUPAD FLXA0.FRSIER.BIT.WUPAD
#define FLXA0MTSAD FLXA0.FRSIER.BIT.MTSAD
#define FLXA0WUPBD FLXA0.FRSIER.BIT.WUPBD
#define FLXA0MTSBD FLXA0.FRSIER.BIT.MTSBD
#define FLXA0FRILE FLXA0.FRILE.UINT32
#define FLXA0FRILEL FLXA0.FRILE.UINT16[L]
#define FLXA0FRILELL FLXA0.FRILE.UINT8[LL]
#define FLXA0FRILELH FLXA0.FRILE.UINT8[LH]
#define FLXA0FRILEH FLXA0.FRILE.UINT16[H]
#define FLXA0FRILEHL FLXA0.FRILE.UINT8[HL]
#define FLXA0FRILEHH FLXA0.FRILE.UINT8[HH]
#define FLXA0EINT0 FLXA0.FRILE.BIT.EINT0
#define FLXA0EINT1 FLXA0.FRILE.BIT.EINT1
#define FLXA0FRT0C FLXA0.FRT0C.UINT32
#define FLXA0FRT0CL FLXA0.FRT0C.UINT16[L]
#define FLXA0FRT0CLL FLXA0.FRT0C.UINT8[LL]
#define FLXA0FRT0CLH FLXA0.FRT0C.UINT8[LH]
#define FLXA0FRT0CH FLXA0.FRT0C.UINT16[H]
#define FLXA0FRT0CHL FLXA0.FRT0C.UINT8[HL]
#define FLXA0FRT0CHH FLXA0.FRT0C.UINT8[HH]
#define FLXA0T0RC FLXA0.FRT0C.BIT.T0RC
#define FLXA0T0MS FLXA0.FRT0C.BIT.T0MS
#define FLXA0T0CC FLXA0.FRT0C.BIT.T0CC
#define FLXA0T0MO FLXA0.FRT0C.BIT.T0MO
#define FLXA0FRT1C FLXA0.FRT1C.UINT32
#define FLXA0FRT1CL FLXA0.FRT1C.UINT16[L]
#define FLXA0FRT1CLL FLXA0.FRT1C.UINT8[LL]
#define FLXA0FRT1CLH FLXA0.FRT1C.UINT8[LH]
#define FLXA0FRT1CH FLXA0.FRT1C.UINT16[H]
#define FLXA0FRT1CHL FLXA0.FRT1C.UINT8[HL]
#define FLXA0FRT1CHH FLXA0.FRT1C.UINT8[HH]
#define FLXA0T1RC FLXA0.FRT1C.BIT.T1RC
#define FLXA0T1MS FLXA0.FRT1C.BIT.T1MS
#define FLXA0T1MC FLXA0.FRT1C.BIT.T1MC
#define FLXA0FRSTPW1 FLXA0.FRSTPW1.UINT32
#define FLXA0FRSTPW1L FLXA0.FRSTPW1.UINT16[L]
#define FLXA0FRSTPW1LL FLXA0.FRSTPW1.UINT8[LL]
#define FLXA0FRSTPW1LH FLXA0.FRSTPW1.UINT8[LH]
#define FLXA0FRSTPW1H FLXA0.FRSTPW1.UINT16[H]
#define FLXA0FRSTPW1HL FLXA0.FRSTPW1.UINT8[HL]
#define FLXA0FRSTPW1HH FLXA0.FRSTPW1.UINT8[HH]
#define FLXA0ESWT FLXA0.FRSTPW1.BIT.ESWT
#define FLXA0SWMS FLXA0.FRSTPW1.BIT.SWMS
#define FLXA0EDGE FLXA0.FRSTPW1.BIT.EDGE
#define FLXA0SSWT FLXA0.FRSTPW1.BIT.SSWT
#define FLXA0EETP FLXA0.FRSTPW1.BIT.EETP
#define FLXA0SCCV FLXA0.FRSTPW1.BIT.SCCV
#define FLXA0SMTV FLXA0.FRSTPW1.BIT.SMTV
#define FLXA0FRSTPW2 FLXA0.FRSTPW2.UINT32
#define FLXA0FRSTPW2L FLXA0.FRSTPW2.UINT16[L]
#define FLXA0FRSTPW2LL FLXA0.FRSTPW2.UINT8[LL]
#define FLXA0FRSTPW2LH FLXA0.FRSTPW2.UINT8[LH]
#define FLXA0FRSTPW2H FLXA0.FRSTPW2.UINT16[H]
#define FLXA0FRSTPW2HL FLXA0.FRSTPW2.UINT8[HL]
#define FLXA0FRSTPW2HH FLXA0.FRSTPW2.UINT8[HH]
#define FLXA0SSCVA FLXA0.FRSTPW2.BIT.SSCVA
#define FLXA0SSCVB FLXA0.FRSTPW2.BIT.SSCVB
#define FLXA0FRSUCC1 FLXA0.FRSUCC1.UINT32
#define FLXA0FRSUCC1L FLXA0.FRSUCC1.UINT16[L]
#define FLXA0FRSUCC1LL FLXA0.FRSUCC1.UINT8[LL]
#define FLXA0FRSUCC1LH FLXA0.FRSUCC1.UINT8[LH]
#define FLXA0FRSUCC1H FLXA0.FRSUCC1.UINT16[H]
#define FLXA0FRSUCC1HL FLXA0.FRSUCC1.UINT8[HL]
#define FLXA0FRSUCC1HH FLXA0.FRSUCC1.UINT8[HH]
#define FLXA0CMD FLXA0.FRSUCC1.BIT.CMD
#define FLXA0PBSY FLXA0.FRSUCC1.BIT.PBSY
#define FLXA0TXST FLXA0.FRSUCC1.BIT.TXST
#define FLXA0TXSY FLXA0.FRSUCC1.BIT.TXSY
#define FLXA0CSA FLXA0.FRSUCC1.BIT.CSA
#define FLXA0PTA FLXA0.FRSUCC1.BIT.PTA
#define FLXA0WUCS FLXA0.FRSUCC1.BIT.WUCS
#define FLXA0TSM FLXA0.FRSUCC1.BIT.TSM
#define FLXA0HCSE FLXA0.FRSUCC1.BIT.HCSE
#define FLXA0CCHA FLXA0.FRSUCC1.BIT.CCHA
#define FLXA0CCHB FLXA0.FRSUCC1.BIT.CCHB
#define FLXA0FRSUCC2 FLXA0.FRSUCC2.UINT32
#define FLXA0FRSUCC2L FLXA0.FRSUCC2.UINT16[L]
#define FLXA0FRSUCC2LL FLXA0.FRSUCC2.UINT8[LL]
#define FLXA0FRSUCC2LH FLXA0.FRSUCC2.UINT8[LH]
#define FLXA0FRSUCC2H FLXA0.FRSUCC2.UINT16[H]
#define FLXA0FRSUCC2HL FLXA0.FRSUCC2.UINT8[HL]
#define FLXA0FRSUCC2HH FLXA0.FRSUCC2.UINT8[HH]
#define FLXA0LT FLXA0.FRSUCC2.BIT.LT
#define FLXA0LTN FLXA0.FRSUCC2.BIT.LTN
#define FLXA0FRSUCC3 FLXA0.FRSUCC3.UINT32
#define FLXA0FRSUCC3L FLXA0.FRSUCC3.UINT16[L]
#define FLXA0FRSUCC3LL FLXA0.FRSUCC3.UINT8[LL]
#define FLXA0FRSUCC3LH FLXA0.FRSUCC3.UINT8[LH]
#define FLXA0FRSUCC3H FLXA0.FRSUCC3.UINT16[H]
#define FLXA0FRSUCC3HL FLXA0.FRSUCC3.UINT8[HL]
#define FLXA0FRSUCC3HH FLXA0.FRSUCC3.UINT8[HH]
#define FLXA0WCP FLXA0.FRSUCC3.BIT.WCP
#define FLXA0WCF FLXA0.FRSUCC3.BIT.WCF
#define FLXA0FRNEMC FLXA0.FRNEMC.UINT32
#define FLXA0FRNEMCL FLXA0.FRNEMC.UINT16[L]
#define FLXA0FRNEMCLL FLXA0.FRNEMC.UINT8[LL]
#define FLXA0FRNEMCLH FLXA0.FRNEMC.UINT8[LH]
#define FLXA0FRNEMCH FLXA0.FRNEMC.UINT16[H]
#define FLXA0FRNEMCHL FLXA0.FRNEMC.UINT8[HL]
#define FLXA0FRNEMCHH FLXA0.FRNEMC.UINT8[HH]
#define FLXA0NML FLXA0.FRNEMC.BIT.NML
#define FLXA0FRPRTC1 FLXA0.FRPRTC1.UINT32
#define FLXA0FRPRTC1L FLXA0.FRPRTC1.UINT16[L]
#define FLXA0FRPRTC1LL FLXA0.FRPRTC1.UINT8[LL]
#define FLXA0FRPRTC1LH FLXA0.FRPRTC1.UINT8[LH]
#define FLXA0FRPRTC1H FLXA0.FRPRTC1.UINT16[H]
#define FLXA0FRPRTC1HL FLXA0.FRPRTC1.UINT8[HL]
#define FLXA0FRPRTC1HH FLXA0.FRPRTC1.UINT8[HH]
#define FLXA0TSST FLXA0.FRPRTC1.BIT.TSST
#define FLXA0CASM FLXA0.FRPRTC1.BIT.CASM
#define FLXA0SPP FLXA0.FRPRTC1.BIT.SPP
#define FLXA0BRP FLXA0.FRPRTC1.BIT.BRP
#define FLXA0RXW FLXA0.FRPRTC1.BIT.RXW
#define FLXA0RWP FLXA0.FRPRTC1.BIT.RWP
#define FLXA0FRPRTC2 FLXA0.FRPRTC2.UINT32
#define FLXA0FRPRTC2L FLXA0.FRPRTC2.UINT16[L]
#define FLXA0FRPRTC2LL FLXA0.FRPRTC2.UINT8[LL]
#define FLXA0FRPRTC2LH FLXA0.FRPRTC2.UINT8[LH]
#define FLXA0FRPRTC2H FLXA0.FRPRTC2.UINT16[H]
#define FLXA0FRPRTC2HL FLXA0.FRPRTC2.UINT8[HL]
#define FLXA0FRPRTC2HH FLXA0.FRPRTC2.UINT8[HH]
#define FLXA0RXL FLXA0.FRPRTC2.BIT.RXL
#define FLXA0TXL FLXA0.FRPRTC2.BIT.TXL
#define FLXA0FRMHDC FLXA0.FRMHDC.UINT32
#define FLXA0FRMHDCL FLXA0.FRMHDC.UINT16[L]
#define FLXA0FRMHDCLL FLXA0.FRMHDC.UINT8[LL]
#define FLXA0FRMHDCLH FLXA0.FRMHDC.UINT8[LH]
#define FLXA0FRMHDCH FLXA0.FRMHDC.UINT16[H]
#define FLXA0FRMHDCHL FLXA0.FRMHDC.UINT8[HL]
#define FLXA0FRMHDCHH FLXA0.FRMHDC.UINT8[HH]
#define FLXA0SFDL FLXA0.FRMHDC.BIT.SFDL
#define FLXA0SLT FLXA0.FRMHDC.BIT.SLT
#define FLXA0FRGTUC1 FLXA0.FRGTUC1.UINT32
#define FLXA0FRGTUC1L FLXA0.FRGTUC1.UINT16[L]
#define FLXA0FRGTUC1LL FLXA0.FRGTUC1.UINT8[LL]
#define FLXA0FRGTUC1LH FLXA0.FRGTUC1.UINT8[LH]
#define FLXA0FRGTUC1H FLXA0.FRGTUC1.UINT16[H]
#define FLXA0FRGTUC1HL FLXA0.FRGTUC1.UINT8[HL]
#define FLXA0FRGTUC1HH FLXA0.FRGTUC1.UINT8[HH]
#define FLXA0UT FLXA0.FRGTUC1.BIT.UT
#define FLXA0FRGTUC2 FLXA0.FRGTUC2.UINT32
#define FLXA0FRGTUC2L FLXA0.FRGTUC2.UINT16[L]
#define FLXA0FRGTUC2LL FLXA0.FRGTUC2.UINT8[LL]
#define FLXA0FRGTUC2LH FLXA0.FRGTUC2.UINT8[LH]
#define FLXA0FRGTUC2H FLXA0.FRGTUC2.UINT16[H]
#define FLXA0FRGTUC2HL FLXA0.FRGTUC2.UINT8[HL]
#define FLXA0FRGTUC2HH FLXA0.FRGTUC2.UINT8[HH]
#define FLXA0MPC FLXA0.FRGTUC2.BIT.MPC
#define FLXA0SNM FLXA0.FRGTUC2.BIT.SNM
#define FLXA0FRGTUC3 FLXA0.FRGTUC3.UINT32
#define FLXA0FRGTUC3L FLXA0.FRGTUC3.UINT16[L]
#define FLXA0FRGTUC3LL FLXA0.FRGTUC3.UINT8[LL]
#define FLXA0FRGTUC3LH FLXA0.FRGTUC3.UINT8[LH]
#define FLXA0FRGTUC3H FLXA0.FRGTUC3.UINT16[H]
#define FLXA0FRGTUC3HL FLXA0.FRGTUC3.UINT8[HL]
#define FLXA0FRGTUC3HH FLXA0.FRGTUC3.UINT8[HH]
#define FLXA0UIOA FLXA0.FRGTUC3.BIT.UIOA
#define FLXA0UIOB FLXA0.FRGTUC3.BIT.UIOB
#define FLXA0MIOA FLXA0.FRGTUC3.BIT.MIOA
#define FLXA0MIOB FLXA0.FRGTUC3.BIT.MIOB
#define FLXA0FRGTUC4 FLXA0.FRGTUC4.UINT32
#define FLXA0FRGTUC4L FLXA0.FRGTUC4.UINT16[L]
#define FLXA0FRGTUC4LL FLXA0.FRGTUC4.UINT8[LL]
#define FLXA0FRGTUC4LH FLXA0.FRGTUC4.UINT8[LH]
#define FLXA0FRGTUC4H FLXA0.FRGTUC4.UINT16[H]
#define FLXA0FRGTUC4HL FLXA0.FRGTUC4.UINT8[HL]
#define FLXA0FRGTUC4HH FLXA0.FRGTUC4.UINT8[HH]
#define FLXA0NIT FLXA0.FRGTUC4.BIT.NIT
#define FLXA0OCS FLXA0.FRGTUC4.BIT.OCS
#define FLXA0FRGTUC5 FLXA0.FRGTUC5.UINT32
#define FLXA0FRGTUC5L FLXA0.FRGTUC5.UINT16[L]
#define FLXA0FRGTUC5LL FLXA0.FRGTUC5.UINT8[LL]
#define FLXA0FRGTUC5LH FLXA0.FRGTUC5.UINT8[LH]
#define FLXA0FRGTUC5H FLXA0.FRGTUC5.UINT16[H]
#define FLXA0FRGTUC5HL FLXA0.FRGTUC5.UINT8[HL]
#define FLXA0FRGTUC5HH FLXA0.FRGTUC5.UINT8[HH]
#define FLXA0DCA FLXA0.FRGTUC5.BIT.DCA
#define FLXA0DCB FLXA0.FRGTUC5.BIT.DCB
#define FLXA0CDD FLXA0.FRGTUC5.BIT.CDD
#define FLXA0DEC FLXA0.FRGTUC5.BIT.DEC
#define FLXA0FRGTUC6 FLXA0.FRGTUC6.UINT32
#define FLXA0FRGTUC6L FLXA0.FRGTUC6.UINT16[L]
#define FLXA0FRGTUC6LL FLXA0.FRGTUC6.UINT8[LL]
#define FLXA0FRGTUC6LH FLXA0.FRGTUC6.UINT8[LH]
#define FLXA0FRGTUC6H FLXA0.FRGTUC6.UINT16[H]
#define FLXA0FRGTUC6HL FLXA0.FRGTUC6.UINT8[HL]
#define FLXA0FRGTUC6HH FLXA0.FRGTUC6.UINT8[HH]
#define FLXA0ASR FLXA0.FRGTUC6.BIT.ASR
#define FLXA0MOD FLXA0.FRGTUC6.BIT.MOD
#define FLXA0FRGTUC7 FLXA0.FRGTUC7.UINT32
#define FLXA0FRGTUC7L FLXA0.FRGTUC7.UINT16[L]
#define FLXA0FRGTUC7LL FLXA0.FRGTUC7.UINT8[LL]
#define FLXA0FRGTUC7LH FLXA0.FRGTUC7.UINT8[LH]
#define FLXA0FRGTUC7H FLXA0.FRGTUC7.UINT16[H]
#define FLXA0FRGTUC7HL FLXA0.FRGTUC7.UINT8[HL]
#define FLXA0FRGTUC7HH FLXA0.FRGTUC7.UINT8[HH]
#define FLXA0SSL FLXA0.FRGTUC7.BIT.SSL
#define FLXA0NSS FLXA0.FRGTUC7.BIT.NSS
#define FLXA0FRGTUC8 FLXA0.FRGTUC8.UINT32
#define FLXA0FRGTUC8L FLXA0.FRGTUC8.UINT16[L]
#define FLXA0FRGTUC8LL FLXA0.FRGTUC8.UINT8[LL]
#define FLXA0FRGTUC8LH FLXA0.FRGTUC8.UINT8[LH]
#define FLXA0FRGTUC8H FLXA0.FRGTUC8.UINT16[H]
#define FLXA0FRGTUC8HL FLXA0.FRGTUC8.UINT8[HL]
#define FLXA0FRGTUC8HH FLXA0.FRGTUC8.UINT8[HH]
#define FLXA0MSL FLXA0.FRGTUC8.BIT.MSL
#define FLXA0NMS FLXA0.FRGTUC8.BIT.NMS
#define FLXA0FRGTUC9 FLXA0.FRGTUC9.UINT32
#define FLXA0FRGTUC9L FLXA0.FRGTUC9.UINT16[L]
#define FLXA0FRGTUC9LL FLXA0.FRGTUC9.UINT8[LL]
#define FLXA0FRGTUC9LH FLXA0.FRGTUC9.UINT8[LH]
#define FLXA0FRGTUC9H FLXA0.FRGTUC9.UINT16[H]
#define FLXA0FRGTUC9HL FLXA0.FRGTUC9.UINT8[HL]
#define FLXA0FRGTUC9HH FLXA0.FRGTUC9.UINT8[HH]
#define FLXA0APO FLXA0.FRGTUC9.BIT.APO
#define FLXA0MAPO FLXA0.FRGTUC9.BIT.MAPO
#define FLXA0DSI FLXA0.FRGTUC9.BIT.DSI
#define FLXA0FRGTUC10 FLXA0.FRGTUC10.UINT32
#define FLXA0FRGTUC10L FLXA0.FRGTUC10.UINT16[L]
#define FLXA0FRGTUC10LL FLXA0.FRGTUC10.UINT8[LL]
#define FLXA0FRGTUC10LH FLXA0.FRGTUC10.UINT8[LH]
#define FLXA0FRGTUC10H FLXA0.FRGTUC10.UINT16[H]
#define FLXA0FRGTUC10HL FLXA0.FRGTUC10.UINT8[HL]
#define FLXA0FRGTUC10HH FLXA0.FRGTUC10.UINT8[HH]
#define FLXA0MOC FLXA0.FRGTUC10.BIT.MOC
#define FLXA0MRC FLXA0.FRGTUC10.BIT.MRC
#define FLXA0FRGTUC11 FLXA0.FRGTUC11.UINT32
#define FLXA0FRGTUC11L FLXA0.FRGTUC11.UINT16[L]
#define FLXA0FRGTUC11LL FLXA0.FRGTUC11.UINT8[LL]
#define FLXA0FRGTUC11LH FLXA0.FRGTUC11.UINT8[LH]
#define FLXA0FRGTUC11H FLXA0.FRGTUC11.UINT16[H]
#define FLXA0FRGTUC11HL FLXA0.FRGTUC11.UINT8[HL]
#define FLXA0FRGTUC11HH FLXA0.FRGTUC11.UINT8[HH]
#define FLXA0EOCC FLXA0.FRGTUC11.BIT.EOCC
#define FLXA0ERCC FLXA0.FRGTUC11.BIT.ERCC
#define FLXA0EOC FLXA0.FRGTUC11.BIT.EOC
#define FLXA0ERC FLXA0.FRGTUC11.BIT.ERC
#define FLXA0FRCCSV FLXA0.FRCCSV.UINT32
#define FLXA0FRCCSVL FLXA0.FRCCSV.UINT16[L]
#define FLXA0FRCCSVLL FLXA0.FRCCSV.UINT8[LL]
#define FLXA0FRCCSVLH FLXA0.FRCCSV.UINT8[LH]
#define FLXA0FRCCSVH FLXA0.FRCCSV.UINT16[H]
#define FLXA0FRCCSVHL FLXA0.FRCCSV.UINT8[HL]
#define FLXA0FRCCSVHH FLXA0.FRCCSV.UINT8[HH]
#define FLXA0POCS FLXA0.FRCCSV.BIT.POCS
#define FLXA0FSI FLXA0.FRCCSV.BIT.FSI
#define FLXA0HRQ FLXA0.FRCCSV.BIT.HRQ
#define FLXA0SLM FLXA0.FRCCSV.BIT.SLM
#define FLXA0CSNI FLXA0.FRCCSV.BIT.CSNI
#define FLXA0CSAI FLXA0.FRCCSV.BIT.CSAI
#define FLXA0CSI FLXA0.FRCCSV.BIT.CSI
#define FLXA0WSV FLXA0.FRCCSV.BIT.WSV
#define FLXA0RCA FLXA0.FRCCSV.BIT.RCA
#define FLXA0PSL FLXA0.FRCCSV.BIT.PSL
#define FLXA0FRCCEV FLXA0.FRCCEV.UINT32
#define FLXA0FRCCEVL FLXA0.FRCCEV.UINT16[L]
#define FLXA0FRCCEVLL FLXA0.FRCCEV.UINT8[LL]
#define FLXA0FRCCEVLH FLXA0.FRCCEV.UINT8[LH]
#define FLXA0FRCCEVH FLXA0.FRCCEV.UINT16[H]
#define FLXA0FRCCEVHL FLXA0.FRCCEV.UINT8[HL]
#define FLXA0FRCCEVHH FLXA0.FRCCEV.UINT8[HH]
#define FLXA0CCFC FLXA0.FRCCEV.BIT.CCFC
#define FLXA0ERRM FLXA0.FRCCEV.BIT.ERRM
#define FLXA0PTAC FLXA0.FRCCEV.BIT.PTAC
#define FLXA0FRSCV FLXA0.FRSCV.UINT32
#define FLXA0FRSCVL FLXA0.FRSCV.UINT16[L]
#define FLXA0FRSCVLL FLXA0.FRSCV.UINT8[LL]
#define FLXA0FRSCVLH FLXA0.FRSCV.UINT8[LH]
#define FLXA0FRSCVH FLXA0.FRSCV.UINT16[H]
#define FLXA0FRSCVHL FLXA0.FRSCV.UINT8[HL]
#define FLXA0FRSCVHH FLXA0.FRSCV.UINT8[HH]
#define FLXA0SCCA FLXA0.FRSCV.BIT.SCCA
#define FLXA0SCCB FLXA0.FRSCV.BIT.SCCB
#define FLXA0FRMTCCV FLXA0.FRMTCCV.UINT32
#define FLXA0FRMTCCVL FLXA0.FRMTCCV.UINT16[L]
#define FLXA0FRMTCCVLL FLXA0.FRMTCCV.UINT8[LL]
#define FLXA0FRMTCCVLH FLXA0.FRMTCCV.UINT8[LH]
#define FLXA0FRMTCCVH FLXA0.FRMTCCV.UINT16[H]
#define FLXA0FRMTCCVHL FLXA0.FRMTCCV.UINT8[HL]
#define FLXA0FRMTCCVHH FLXA0.FRMTCCV.UINT8[HH]
#define FLXA0MTV FLXA0.FRMTCCV.BIT.MTV
#define FLXA0CCV FLXA0.FRMTCCV.BIT.CCV
#define FLXA0FRRCV FLXA0.FRRCV.UINT32
#define FLXA0FRRCVL FLXA0.FRRCV.UINT16[L]
#define FLXA0FRRCVLL FLXA0.FRRCV.UINT8[LL]
#define FLXA0FRRCVLH FLXA0.FRRCV.UINT8[LH]
#define FLXA0FRRCVH FLXA0.FRRCV.UINT16[H]
#define FLXA0FRRCVHL FLXA0.FRRCV.UINT8[HL]
#define FLXA0FRRCVHH FLXA0.FRRCV.UINT8[HH]
#define FLXA0RCV FLXA0.FRRCV.BIT.RCV
#define FLXA0FROCV FLXA0.FROCV.UINT32
#define FLXA0FROCVL FLXA0.FROCV.UINT16[L]
#define FLXA0FROCVLL FLXA0.FROCV.UINT8[LL]
#define FLXA0FROCVLH FLXA0.FROCV.UINT8[LH]
#define FLXA0FROCVH FLXA0.FROCV.UINT16[H]
#define FLXA0FROCVHL FLXA0.FROCV.UINT8[HL]
#define FLXA0FROCVHH FLXA0.FROCV.UINT8[HH]
#define FLXA0OCV FLXA0.FROCV.BIT.OCV
#define FLXA0FRSFS FLXA0.FRSFS.UINT32
#define FLXA0FRSFSL FLXA0.FRSFS.UINT16[L]
#define FLXA0FRSFSLL FLXA0.FRSFS.UINT8[LL]
#define FLXA0FRSFSLH FLXA0.FRSFS.UINT8[LH]
#define FLXA0FRSFSH FLXA0.FRSFS.UINT16[H]
#define FLXA0FRSFSHL FLXA0.FRSFS.UINT8[HL]
#define FLXA0FRSFSHH FLXA0.FRSFS.UINT8[HH]
#define FLXA0VSAE FLXA0.FRSFS.BIT.VSAE
#define FLXA0VSAO FLXA0.FRSFS.BIT.VSAO
#define FLXA0VSBE FLXA0.FRSFS.BIT.VSBE
#define FLXA0VSBO FLXA0.FRSFS.BIT.VSBO
#define FLXA0MOCS FLXA0.FRSFS.BIT.MOCS
#define FLXA0OCLR FLXA0.FRSFS.BIT.OCLR
#define FLXA0MRCS FLXA0.FRSFS.BIT.MRCS
#define FLXA0RCLR FLXA0.FRSFS.BIT.RCLR
#define FLXA0FRSWNIT FLXA0.FRSWNIT.UINT32
#define FLXA0FRSWNITL FLXA0.FRSWNIT.UINT16[L]
#define FLXA0FRSWNITLL FLXA0.FRSWNIT.UINT8[LL]
#define FLXA0FRSWNITLH FLXA0.FRSWNIT.UINT8[LH]
#define FLXA0FRSWNITH FLXA0.FRSWNIT.UINT16[H]
#define FLXA0FRSWNITHL FLXA0.FRSWNIT.UINT8[HL]
#define FLXA0FRSWNITHH FLXA0.FRSWNIT.UINT8[HH]
#define FLXA0SESA FLXA0.FRSWNIT.BIT.SESA
#define FLXA0SBSA FLXA0.FRSWNIT.BIT.SBSA
#define FLXA0TCSA FLXA0.FRSWNIT.BIT.TCSA
#define FLXA0SESB FLXA0.FRSWNIT.BIT.SESB
#define FLXA0SBSB FLXA0.FRSWNIT.BIT.SBSB
#define FLXA0TCSB FLXA0.FRSWNIT.BIT.TCSB
#define FLXA0SENA FLXA0.FRSWNIT.BIT.SENA
#define FLXA0SBNA FLXA0.FRSWNIT.BIT.SBNA
#define FLXA0SENB FLXA0.FRSWNIT.BIT.SENB
#define FLXA0SBNB FLXA0.FRSWNIT.BIT.SBNB
#define FLXA0FRACS FLXA0.FRACS.UINT32
#define FLXA0FRACSL FLXA0.FRACS.UINT16[L]
#define FLXA0FRACSLL FLXA0.FRACS.UINT8[LL]
#define FLXA0FRACSLH FLXA0.FRACS.UINT8[LH]
#define FLXA0FRACSH FLXA0.FRACS.UINT16[H]
#define FLXA0FRACSHL FLXA0.FRACS.UINT8[HL]
#define FLXA0FRACSHH FLXA0.FRACS.UINT8[HH]
#define FLXA0VFRA FLXA0.FRACS.BIT.VFRA
#define FLXA0SEDA FLXA0.FRACS.BIT.SEDA
#define FLXA0CEDA FLXA0.FRACS.BIT.CEDA
#define FLXA0CIA FLXA0.FRACS.BIT.CIA
#define FLXA0SBVA FLXA0.FRACS.BIT.SBVA
#define FLXA0VFRB FLXA0.FRACS.BIT.VFRB
#define FLXA0SEDB FLXA0.FRACS.BIT.SEDB
#define FLXA0CEDB FLXA0.FRACS.BIT.CEDB
#define FLXA0CIB FLXA0.FRACS.BIT.CIB
#define FLXA0SBVB FLXA0.FRACS.BIT.SBVB
#define FLXA0FRESID1 FLXA0.FRESID1.UINT32
#define FLXA0FRESID1L FLXA0.FRESID1.UINT16[L]
#define FLXA0FRESID1LL FLXA0.FRESID1.UINT8[LL]
#define FLXA0FRESID1LH FLXA0.FRESID1.UINT8[LH]
#define FLXA0FRESID1H FLXA0.FRESID1.UINT16[H]
#define FLXA0FRESID1HL FLXA0.FRESID1.UINT8[HL]
#define FLXA0FRESID1HH FLXA0.FRESID1.UINT8[HH]
#define FLXA0EID FLXA0.FRESID1.BIT.EID
#define FLXA0RXEA FLXA0.FRESID1.BIT.RXEA
#define FLXA0RXEB FLXA0.FRESID1.BIT.RXEB
#define FLXA0FRESID2 FLXA0.FRESID2.UINT32
#define FLXA0FRESID2L FLXA0.FRESID2.UINT16[L]
#define FLXA0FRESID2LL FLXA0.FRESID2.UINT8[LL]
#define FLXA0FRESID2LH FLXA0.FRESID2.UINT8[LH]
#define FLXA0FRESID2H FLXA0.FRESID2.UINT16[H]
#define FLXA0FRESID2HL FLXA0.FRESID2.UINT8[HL]
#define FLXA0FRESID2HH FLXA0.FRESID2.UINT8[HH]
#define FLXA0FRESID3 FLXA0.FRESID3.UINT32
#define FLXA0FRESID3L FLXA0.FRESID3.UINT16[L]
#define FLXA0FRESID3LL FLXA0.FRESID3.UINT8[LL]
#define FLXA0FRESID3LH FLXA0.FRESID3.UINT8[LH]
#define FLXA0FRESID3H FLXA0.FRESID3.UINT16[H]
#define FLXA0FRESID3HL FLXA0.FRESID3.UINT8[HL]
#define FLXA0FRESID3HH FLXA0.FRESID3.UINT8[HH]
#define FLXA0FRESID4 FLXA0.FRESID4.UINT32
#define FLXA0FRESID4L FLXA0.FRESID4.UINT16[L]
#define FLXA0FRESID4LL FLXA0.FRESID4.UINT8[LL]
#define FLXA0FRESID4LH FLXA0.FRESID4.UINT8[LH]
#define FLXA0FRESID4H FLXA0.FRESID4.UINT16[H]
#define FLXA0FRESID4HL FLXA0.FRESID4.UINT8[HL]
#define FLXA0FRESID4HH FLXA0.FRESID4.UINT8[HH]
#define FLXA0FRESID5 FLXA0.FRESID5.UINT32
#define FLXA0FRESID5L FLXA0.FRESID5.UINT16[L]
#define FLXA0FRESID5LL FLXA0.FRESID5.UINT8[LL]
#define FLXA0FRESID5LH FLXA0.FRESID5.UINT8[LH]
#define FLXA0FRESID5H FLXA0.FRESID5.UINT16[H]
#define FLXA0FRESID5HL FLXA0.FRESID5.UINT8[HL]
#define FLXA0FRESID5HH FLXA0.FRESID5.UINT8[HH]
#define FLXA0FRESID6 FLXA0.FRESID6.UINT32
#define FLXA0FRESID6L FLXA0.FRESID6.UINT16[L]
#define FLXA0FRESID6LL FLXA0.FRESID6.UINT8[LL]
#define FLXA0FRESID6LH FLXA0.FRESID6.UINT8[LH]
#define FLXA0FRESID6H FLXA0.FRESID6.UINT16[H]
#define FLXA0FRESID6HL FLXA0.FRESID6.UINT8[HL]
#define FLXA0FRESID6HH FLXA0.FRESID6.UINT8[HH]
#define FLXA0FRESID7 FLXA0.FRESID7.UINT32
#define FLXA0FRESID7L FLXA0.FRESID7.UINT16[L]
#define FLXA0FRESID7LL FLXA0.FRESID7.UINT8[LL]
#define FLXA0FRESID7LH FLXA0.FRESID7.UINT8[LH]
#define FLXA0FRESID7H FLXA0.FRESID7.UINT16[H]
#define FLXA0FRESID7HL FLXA0.FRESID7.UINT8[HL]
#define FLXA0FRESID7HH FLXA0.FRESID7.UINT8[HH]
#define FLXA0FRESID8 FLXA0.FRESID8.UINT32
#define FLXA0FRESID8L FLXA0.FRESID8.UINT16[L]
#define FLXA0FRESID8LL FLXA0.FRESID8.UINT8[LL]
#define FLXA0FRESID8LH FLXA0.FRESID8.UINT8[LH]
#define FLXA0FRESID8H FLXA0.FRESID8.UINT16[H]
#define FLXA0FRESID8HL FLXA0.FRESID8.UINT8[HL]
#define FLXA0FRESID8HH FLXA0.FRESID8.UINT8[HH]
#define FLXA0FRESID9 FLXA0.FRESID9.UINT32
#define FLXA0FRESID9L FLXA0.FRESID9.UINT16[L]
#define FLXA0FRESID9LL FLXA0.FRESID9.UINT8[LL]
#define FLXA0FRESID9LH FLXA0.FRESID9.UINT8[LH]
#define FLXA0FRESID9H FLXA0.FRESID9.UINT16[H]
#define FLXA0FRESID9HL FLXA0.FRESID9.UINT8[HL]
#define FLXA0FRESID9HH FLXA0.FRESID9.UINT8[HH]
#define FLXA0FRESID10 FLXA0.FRESID10.UINT32
#define FLXA0FRESID10L FLXA0.FRESID10.UINT16[L]
#define FLXA0FRESID10LL FLXA0.FRESID10.UINT8[LL]
#define FLXA0FRESID10LH FLXA0.FRESID10.UINT8[LH]
#define FLXA0FRESID10H FLXA0.FRESID10.UINT16[H]
#define FLXA0FRESID10HL FLXA0.FRESID10.UINT8[HL]
#define FLXA0FRESID10HH FLXA0.FRESID10.UINT8[HH]
#define FLXA0FRESID11 FLXA0.FRESID11.UINT32
#define FLXA0FRESID11L FLXA0.FRESID11.UINT16[L]
#define FLXA0FRESID11LL FLXA0.FRESID11.UINT8[LL]
#define FLXA0FRESID11LH FLXA0.FRESID11.UINT8[LH]
#define FLXA0FRESID11H FLXA0.FRESID11.UINT16[H]
#define FLXA0FRESID11HL FLXA0.FRESID11.UINT8[HL]
#define FLXA0FRESID11HH FLXA0.FRESID11.UINT8[HH]
#define FLXA0FRESID12 FLXA0.FRESID12.UINT32
#define FLXA0FRESID12L FLXA0.FRESID12.UINT16[L]
#define FLXA0FRESID12LL FLXA0.FRESID12.UINT8[LL]
#define FLXA0FRESID12LH FLXA0.FRESID12.UINT8[LH]
#define FLXA0FRESID12H FLXA0.FRESID12.UINT16[H]
#define FLXA0FRESID12HL FLXA0.FRESID12.UINT8[HL]
#define FLXA0FRESID12HH FLXA0.FRESID12.UINT8[HH]
#define FLXA0FRESID13 FLXA0.FRESID13.UINT32
#define FLXA0FRESID13L FLXA0.FRESID13.UINT16[L]
#define FLXA0FRESID13LL FLXA0.FRESID13.UINT8[LL]
#define FLXA0FRESID13LH FLXA0.FRESID13.UINT8[LH]
#define FLXA0FRESID13H FLXA0.FRESID13.UINT16[H]
#define FLXA0FRESID13HL FLXA0.FRESID13.UINT8[HL]
#define FLXA0FRESID13HH FLXA0.FRESID13.UINT8[HH]
#define FLXA0FRESID14 FLXA0.FRESID14.UINT32
#define FLXA0FRESID14L FLXA0.FRESID14.UINT16[L]
#define FLXA0FRESID14LL FLXA0.FRESID14.UINT8[LL]
#define FLXA0FRESID14LH FLXA0.FRESID14.UINT8[LH]
#define FLXA0FRESID14H FLXA0.FRESID14.UINT16[H]
#define FLXA0FRESID14HL FLXA0.FRESID14.UINT8[HL]
#define FLXA0FRESID14HH FLXA0.FRESID14.UINT8[HH]
#define FLXA0FRESID15 FLXA0.FRESID15.UINT32
#define FLXA0FRESID15L FLXA0.FRESID15.UINT16[L]
#define FLXA0FRESID15LL FLXA0.FRESID15.UINT8[LL]
#define FLXA0FRESID15LH FLXA0.FRESID15.UINT8[LH]
#define FLXA0FRESID15H FLXA0.FRESID15.UINT16[H]
#define FLXA0FRESID15HL FLXA0.FRESID15.UINT8[HL]
#define FLXA0FRESID15HH FLXA0.FRESID15.UINT8[HH]
#define FLXA0FROSID1 FLXA0.FROSID1.UINT32
#define FLXA0FROSID1L FLXA0.FROSID1.UINT16[L]
#define FLXA0FROSID1LL FLXA0.FROSID1.UINT8[LL]
#define FLXA0FROSID1LH FLXA0.FROSID1.UINT8[LH]
#define FLXA0FROSID1H FLXA0.FROSID1.UINT16[H]
#define FLXA0FROSID1HL FLXA0.FROSID1.UINT8[HL]
#define FLXA0FROSID1HH FLXA0.FROSID1.UINT8[HH]
#define FLXA0OID FLXA0.FROSID1.BIT.OID
#define FLXA0RXOA FLXA0.FROSID1.BIT.RXOA
#define FLXA0RXOB FLXA0.FROSID1.BIT.RXOB
#define FLXA0FROSID2 FLXA0.FROSID2.UINT32
#define FLXA0FROSID2L FLXA0.FROSID2.UINT16[L]
#define FLXA0FROSID2LL FLXA0.FROSID2.UINT8[LL]
#define FLXA0FROSID2LH FLXA0.FROSID2.UINT8[LH]
#define FLXA0FROSID2H FLXA0.FROSID2.UINT16[H]
#define FLXA0FROSID2HL FLXA0.FROSID2.UINT8[HL]
#define FLXA0FROSID2HH FLXA0.FROSID2.UINT8[HH]
#define FLXA0FROSID3 FLXA0.FROSID3.UINT32
#define FLXA0FROSID3L FLXA0.FROSID3.UINT16[L]
#define FLXA0FROSID3LL FLXA0.FROSID3.UINT8[LL]
#define FLXA0FROSID3LH FLXA0.FROSID3.UINT8[LH]
#define FLXA0FROSID3H FLXA0.FROSID3.UINT16[H]
#define FLXA0FROSID3HL FLXA0.FROSID3.UINT8[HL]
#define FLXA0FROSID3HH FLXA0.FROSID3.UINT8[HH]
#define FLXA0FROSID4 FLXA0.FROSID4.UINT32
#define FLXA0FROSID4L FLXA0.FROSID4.UINT16[L]
#define FLXA0FROSID4LL FLXA0.FROSID4.UINT8[LL]
#define FLXA0FROSID4LH FLXA0.FROSID4.UINT8[LH]
#define FLXA0FROSID4H FLXA0.FROSID4.UINT16[H]
#define FLXA0FROSID4HL FLXA0.FROSID4.UINT8[HL]
#define FLXA0FROSID4HH FLXA0.FROSID4.UINT8[HH]
#define FLXA0FROSID5 FLXA0.FROSID5.UINT32
#define FLXA0FROSID5L FLXA0.FROSID5.UINT16[L]
#define FLXA0FROSID5LL FLXA0.FROSID5.UINT8[LL]
#define FLXA0FROSID5LH FLXA0.FROSID5.UINT8[LH]
#define FLXA0FROSID5H FLXA0.FROSID5.UINT16[H]
#define FLXA0FROSID5HL FLXA0.FROSID5.UINT8[HL]
#define FLXA0FROSID5HH FLXA0.FROSID5.UINT8[HH]
#define FLXA0FROSID6 FLXA0.FROSID6.UINT32
#define FLXA0FROSID6L FLXA0.FROSID6.UINT16[L]
#define FLXA0FROSID6LL FLXA0.FROSID6.UINT8[LL]
#define FLXA0FROSID6LH FLXA0.FROSID6.UINT8[LH]
#define FLXA0FROSID6H FLXA0.FROSID6.UINT16[H]
#define FLXA0FROSID6HL FLXA0.FROSID6.UINT8[HL]
#define FLXA0FROSID6HH FLXA0.FROSID6.UINT8[HH]
#define FLXA0FROSID7 FLXA0.FROSID7.UINT32
#define FLXA0FROSID7L FLXA0.FROSID7.UINT16[L]
#define FLXA0FROSID7LL FLXA0.FROSID7.UINT8[LL]
#define FLXA0FROSID7LH FLXA0.FROSID7.UINT8[LH]
#define FLXA0FROSID7H FLXA0.FROSID7.UINT16[H]
#define FLXA0FROSID7HL FLXA0.FROSID7.UINT8[HL]
#define FLXA0FROSID7HH FLXA0.FROSID7.UINT8[HH]
#define FLXA0FROSID8 FLXA0.FROSID8.UINT32
#define FLXA0FROSID8L FLXA0.FROSID8.UINT16[L]
#define FLXA0FROSID8LL FLXA0.FROSID8.UINT8[LL]
#define FLXA0FROSID8LH FLXA0.FROSID8.UINT8[LH]
#define FLXA0FROSID8H FLXA0.FROSID8.UINT16[H]
#define FLXA0FROSID8HL FLXA0.FROSID8.UINT8[HL]
#define FLXA0FROSID8HH FLXA0.FROSID8.UINT8[HH]
#define FLXA0FROSID9 FLXA0.FROSID9.UINT32
#define FLXA0FROSID9L FLXA0.FROSID9.UINT16[L]
#define FLXA0FROSID9LL FLXA0.FROSID9.UINT8[LL]
#define FLXA0FROSID9LH FLXA0.FROSID9.UINT8[LH]
#define FLXA0FROSID9H FLXA0.FROSID9.UINT16[H]
#define FLXA0FROSID9HL FLXA0.FROSID9.UINT8[HL]
#define FLXA0FROSID9HH FLXA0.FROSID9.UINT8[HH]
#define FLXA0FROSID10 FLXA0.FROSID10.UINT32
#define FLXA0FROSID10L FLXA0.FROSID10.UINT16[L]
#define FLXA0FROSID10LL FLXA0.FROSID10.UINT8[LL]
#define FLXA0FROSID10LH FLXA0.FROSID10.UINT8[LH]
#define FLXA0FROSID10H FLXA0.FROSID10.UINT16[H]
#define FLXA0FROSID10HL FLXA0.FROSID10.UINT8[HL]
#define FLXA0FROSID10HH FLXA0.FROSID10.UINT8[HH]
#define FLXA0FROSID11 FLXA0.FROSID11.UINT32
#define FLXA0FROSID11L FLXA0.FROSID11.UINT16[L]
#define FLXA0FROSID11LL FLXA0.FROSID11.UINT8[LL]
#define FLXA0FROSID11LH FLXA0.FROSID11.UINT8[LH]
#define FLXA0FROSID11H FLXA0.FROSID11.UINT16[H]
#define FLXA0FROSID11HL FLXA0.FROSID11.UINT8[HL]
#define FLXA0FROSID11HH FLXA0.FROSID11.UINT8[HH]
#define FLXA0FROSID12 FLXA0.FROSID12.UINT32
#define FLXA0FROSID12L FLXA0.FROSID12.UINT16[L]
#define FLXA0FROSID12LL FLXA0.FROSID12.UINT8[LL]
#define FLXA0FROSID12LH FLXA0.FROSID12.UINT8[LH]
#define FLXA0FROSID12H FLXA0.FROSID12.UINT16[H]
#define FLXA0FROSID12HL FLXA0.FROSID12.UINT8[HL]
#define FLXA0FROSID12HH FLXA0.FROSID12.UINT8[HH]
#define FLXA0FROSID13 FLXA0.FROSID13.UINT32
#define FLXA0FROSID13L FLXA0.FROSID13.UINT16[L]
#define FLXA0FROSID13LL FLXA0.FROSID13.UINT8[LL]
#define FLXA0FROSID13LH FLXA0.FROSID13.UINT8[LH]
#define FLXA0FROSID13H FLXA0.FROSID13.UINT16[H]
#define FLXA0FROSID13HL FLXA0.FROSID13.UINT8[HL]
#define FLXA0FROSID13HH FLXA0.FROSID13.UINT8[HH]
#define FLXA0FROSID14 FLXA0.FROSID14.UINT32
#define FLXA0FROSID14L FLXA0.FROSID14.UINT16[L]
#define FLXA0FROSID14LL FLXA0.FROSID14.UINT8[LL]
#define FLXA0FROSID14LH FLXA0.FROSID14.UINT8[LH]
#define FLXA0FROSID14H FLXA0.FROSID14.UINT16[H]
#define FLXA0FROSID14HL FLXA0.FROSID14.UINT8[HL]
#define FLXA0FROSID14HH FLXA0.FROSID14.UINT8[HH]
#define FLXA0FROSID15 FLXA0.FROSID15.UINT32
#define FLXA0FROSID15L FLXA0.FROSID15.UINT16[L]
#define FLXA0FROSID15LL FLXA0.FROSID15.UINT8[LL]
#define FLXA0FROSID15LH FLXA0.FROSID15.UINT8[LH]
#define FLXA0FROSID15H FLXA0.FROSID15.UINT16[H]
#define FLXA0FROSID15HL FLXA0.FROSID15.UINT8[HL]
#define FLXA0FROSID15HH FLXA0.FROSID15.UINT8[HH]
#define FLXA0FRNMV1 FLXA0.FRNMV1.UINT32
#define FLXA0FRNMV1L FLXA0.FRNMV1.UINT16[L]
#define FLXA0FRNMV1LL FLXA0.FRNMV1.UINT8[LL]
#define FLXA0FRNMV1LH FLXA0.FRNMV1.UINT8[LH]
#define FLXA0FRNMV1H FLXA0.FRNMV1.UINT16[H]
#define FLXA0FRNMV1HL FLXA0.FRNMV1.UINT8[HL]
#define FLXA0FRNMV1HH FLXA0.FRNMV1.UINT8[HH]
#define FLXA0NM FLXA0.FRNMV1.BIT.NM
#define FLXA0FRNMV2 FLXA0.FRNMV2.UINT32
#define FLXA0FRNMV2L FLXA0.FRNMV2.UINT16[L]
#define FLXA0FRNMV2LL FLXA0.FRNMV2.UINT8[LL]
#define FLXA0FRNMV2LH FLXA0.FRNMV2.UINT8[LH]
#define FLXA0FRNMV2H FLXA0.FRNMV2.UINT16[H]
#define FLXA0FRNMV2HL FLXA0.FRNMV2.UINT8[HL]
#define FLXA0FRNMV2HH FLXA0.FRNMV2.UINT8[HH]
#define FLXA0FRNMV3 FLXA0.FRNMV3.UINT32
#define FLXA0FRNMV3L FLXA0.FRNMV3.UINT16[L]
#define FLXA0FRNMV3LL FLXA0.FRNMV3.UINT8[LL]
#define FLXA0FRNMV3LH FLXA0.FRNMV3.UINT8[LH]
#define FLXA0FRNMV3H FLXA0.FRNMV3.UINT16[H]
#define FLXA0FRNMV3HL FLXA0.FRNMV3.UINT8[HL]
#define FLXA0FRNMV3HH FLXA0.FRNMV3.UINT8[HH]
#define FLXA0FRMRC FLXA0.FRMRC.UINT32
#define FLXA0FRMRCL FLXA0.FRMRC.UINT16[L]
#define FLXA0FRMRCLL FLXA0.FRMRC.UINT8[LL]
#define FLXA0FRMRCLH FLXA0.FRMRC.UINT8[LH]
#define FLXA0FRMRCH FLXA0.FRMRC.UINT16[H]
#define FLXA0FRMRCHL FLXA0.FRMRC.UINT8[HL]
#define FLXA0FRMRCHH FLXA0.FRMRC.UINT8[HH]
#define FLXA0FDB FLXA0.FRMRC.BIT.FDB
#define FLXA0FFB FLXA0.FRMRC.BIT.FFB
#define FLXA0LCB FLXA0.FRMRC.BIT.LCB
#define FLXA0SEC FLXA0.FRMRC.BIT.SEC
#define FLXA0SPLM FLXA0.FRMRC.BIT.SPLM
#define FLXA0FRFRF FLXA0.FRFRF.UINT32
#define FLXA0FRFRFL FLXA0.FRFRF.UINT16[L]
#define FLXA0FRFRFLL FLXA0.FRFRF.UINT8[LL]
#define FLXA0FRFRFLH FLXA0.FRFRF.UINT8[LH]
#define FLXA0FRFRFH FLXA0.FRFRF.UINT16[H]
#define FLXA0FRFRFHL FLXA0.FRFRF.UINT8[HL]
#define FLXA0FRFRFHH FLXA0.FRFRF.UINT8[HH]
#define FLXA0CH FLXA0.FRFRF.BIT.CH
#define FLXA0FID FLXA0.FRFRF.BIT.FID
#define FLXA0CYF FLXA0.FRFRF.BIT.CYF
#define FLXA0RSS FLXA0.FRFRF.BIT.RSS
#define FLXA0RNF FLXA0.FRFRF.BIT.RNF
#define FLXA0FRFRFM FLXA0.FRFRFM.UINT32
#define FLXA0FRFRFML FLXA0.FRFRFM.UINT16[L]
#define FLXA0FRFRFMLL FLXA0.FRFRFM.UINT8[LL]
#define FLXA0FRFRFMLH FLXA0.FRFRFM.UINT8[LH]
#define FLXA0FRFRFMH FLXA0.FRFRFM.UINT16[H]
#define FLXA0FRFRFMHL FLXA0.FRFRFM.UINT8[HL]
#define FLXA0FRFRFMHH FLXA0.FRFRFM.UINT8[HH]
#define FLXA0MFID FLXA0.FRFRFM.BIT.MFID
#define FLXA0FRFCL FLXA0.FRFCL.UINT32
#define FLXA0FRFCLL FLXA0.FRFCL.UINT16[L]
#define FLXA0FRFCLLL FLXA0.FRFCL.UINT8[LL]
#define FLXA0FRFCLLH FLXA0.FRFCL.UINT8[LH]
#define FLXA0FRFCLH FLXA0.FRFCL.UINT16[H]
#define FLXA0FRFCLHL FLXA0.FRFCL.UINT8[HL]
#define FLXA0FRFCLHH FLXA0.FRFCL.UINT8[HH]
#define FLXA0CL FLXA0.FRFCL.BIT.CL
#define FLXA0FRMHDS FLXA0.FRMHDS.UINT32
#define FLXA0FRMHDSL FLXA0.FRMHDS.UINT16[L]
#define FLXA0FRMHDSLL FLXA0.FRMHDS.UINT8[LL]
#define FLXA0FRMHDSLH FLXA0.FRMHDS.UINT8[LH]
#define FLXA0FRMHDSH FLXA0.FRMHDS.UINT16[H]
#define FLXA0FRMHDSHL FLXA0.FRMHDS.UINT8[HL]
#define FLXA0FRMHDSHH FLXA0.FRMHDS.UINT8[HH]
#define FLXA0AMR FLXA0.FRMHDS.BIT.AMR
#define FLXA0ATBF1 FLXA0.FRMHDS.BIT.ATBF1
#define FLXA0ATBF2 FLXA0.FRMHDS.BIT.ATBF2
#define FLXA0FMBD FLXA0.FRMHDS.BIT.FMBD
#define FLXA0MFMB FLXA0.FRMHDS.BIT.MFMB
#define FLXA0CRAM FLXA0.FRMHDS.BIT.CRAM
#define FLXA0FMB FLXA0.FRMHDS.BIT.FMB
#define FLXA0MBT FLXA0.FRMHDS.BIT.MBT
#define FLXA0MBU FLXA0.FRMHDS.BIT.MBU
#define FLXA0FRLDTS FLXA0.FRLDTS.UINT32
#define FLXA0FRLDTSL FLXA0.FRLDTS.UINT16[L]
#define FLXA0FRLDTSLL FLXA0.FRLDTS.UINT8[LL]
#define FLXA0FRLDTSLH FLXA0.FRLDTS.UINT8[LH]
#define FLXA0FRLDTSH FLXA0.FRLDTS.UINT16[H]
#define FLXA0FRLDTSHL FLXA0.FRLDTS.UINT8[HL]
#define FLXA0FRLDTSHH FLXA0.FRLDTS.UINT8[HH]
#define FLXA0LDTA FLXA0.FRLDTS.BIT.LDTA
#define FLXA0LDTB FLXA0.FRLDTS.BIT.LDTB
#define FLXA0FRFSR FLXA0.FRFSR.UINT32
#define FLXA0FRFSRL FLXA0.FRFSR.UINT16[L]
#define FLXA0FRFSRLL FLXA0.FRFSR.UINT8[LL]
#define FLXA0FRFSRLH FLXA0.FRFSR.UINT8[LH]
#define FLXA0FRFSRH FLXA0.FRFSR.UINT16[H]
#define FLXA0FRFSRHL FLXA0.FRFSR.UINT8[HL]
#define FLXA0FRFSRHH FLXA0.FRFSR.UINT8[HH]
#define FLXA0RFFL FLXA0.FRFSR.BIT.RFFL
#define FLXA0FRMHDF FLXA0.FRMHDF.UINT32
#define FLXA0FRMHDFL FLXA0.FRMHDF.UINT16[L]
#define FLXA0FRMHDFLL FLXA0.FRMHDF.UINT8[LL]
#define FLXA0FRMHDFLH FLXA0.FRMHDF.UINT8[LH]
#define FLXA0FRMHDFH FLXA0.FRMHDF.UINT16[H]
#define FLXA0FRMHDFHL FLXA0.FRMHDF.UINT8[HL]
#define FLXA0FRMHDFHH FLXA0.FRMHDF.UINT8[HH]
#define FLXA0SNUA FLXA0.FRMHDF.BIT.SNUA
#define FLXA0SNUB FLXA0.FRMHDF.BIT.SNUB
#define FLXA0FNFA FLXA0.FRMHDF.BIT.FNFA
#define FLXA0FNFB FLXA0.FRMHDF.BIT.FNFB
#define FLXA0TBFA FLXA0.FRMHDF.BIT.TBFA
#define FLXA0TBFB FLXA0.FRMHDF.BIT.TBFB
#define FLXA0TNSA FLXA0.FRMHDF.BIT.TNSA
#define FLXA0TNSB FLXA0.FRMHDF.BIT.TNSB
#define FLXA0WAHP FLXA0.FRMHDF.BIT.WAHP
#define FLXA0FRTXRQ1 FLXA0.FRTXRQ1.UINT32
#define FLXA0FRTXRQ1L FLXA0.FRTXRQ1.UINT16[L]
#define FLXA0FRTXRQ1LL FLXA0.FRTXRQ1.UINT8[LL]
#define FLXA0FRTXRQ1LH FLXA0.FRTXRQ1.UINT8[LH]
#define FLXA0FRTXRQ1H FLXA0.FRTXRQ1.UINT16[H]
#define FLXA0FRTXRQ1HL FLXA0.FRTXRQ1.UINT8[HL]
#define FLXA0FRTXRQ1HH FLXA0.FRTXRQ1.UINT8[HH]
#define FLXA0TXR0 FLXA0.FRTXRQ1.BIT.TXR0
#define FLXA0TXR1 FLXA0.FRTXRQ1.BIT.TXR1
#define FLXA0TXR2 FLXA0.FRTXRQ1.BIT.TXR2
#define FLXA0TXR3 FLXA0.FRTXRQ1.BIT.TXR3
#define FLXA0TXR4 FLXA0.FRTXRQ1.BIT.TXR4
#define FLXA0TXR5 FLXA0.FRTXRQ1.BIT.TXR5
#define FLXA0TXR6 FLXA0.FRTXRQ1.BIT.TXR6
#define FLXA0TXR7 FLXA0.FRTXRQ1.BIT.TXR7
#define FLXA0TXR8 FLXA0.FRTXRQ1.BIT.TXR8
#define FLXA0TXR9 FLXA0.FRTXRQ1.BIT.TXR9
#define FLXA0TXR10 FLXA0.FRTXRQ1.BIT.TXR10
#define FLXA0TXR11 FLXA0.FRTXRQ1.BIT.TXR11
#define FLXA0TXR12 FLXA0.FRTXRQ1.BIT.TXR12
#define FLXA0TXR13 FLXA0.FRTXRQ1.BIT.TXR13
#define FLXA0TXR14 FLXA0.FRTXRQ1.BIT.TXR14
#define FLXA0TXR15 FLXA0.FRTXRQ1.BIT.TXR15
#define FLXA0TXR16 FLXA0.FRTXRQ1.BIT.TXR16
#define FLXA0TXR17 FLXA0.FRTXRQ1.BIT.TXR17
#define FLXA0TXR18 FLXA0.FRTXRQ1.BIT.TXR18
#define FLXA0TXR19 FLXA0.FRTXRQ1.BIT.TXR19
#define FLXA0TXR20 FLXA0.FRTXRQ1.BIT.TXR20
#define FLXA0TXR21 FLXA0.FRTXRQ1.BIT.TXR21
#define FLXA0TXR22 FLXA0.FRTXRQ1.BIT.TXR22
#define FLXA0TXR23 FLXA0.FRTXRQ1.BIT.TXR23
#define FLXA0TXR24 FLXA0.FRTXRQ1.BIT.TXR24
#define FLXA0TXR25 FLXA0.FRTXRQ1.BIT.TXR25
#define FLXA0TXR26 FLXA0.FRTXRQ1.BIT.TXR26
#define FLXA0TXR27 FLXA0.FRTXRQ1.BIT.TXR27
#define FLXA0TXR28 FLXA0.FRTXRQ1.BIT.TXR28
#define FLXA0TXR29 FLXA0.FRTXRQ1.BIT.TXR29
#define FLXA0TXR30 FLXA0.FRTXRQ1.BIT.TXR30
#define FLXA0TXR31 FLXA0.FRTXRQ1.BIT.TXR31
#define FLXA0FRTXRQ2 FLXA0.FRTXRQ2.UINT32
#define FLXA0FRTXRQ2L FLXA0.FRTXRQ2.UINT16[L]
#define FLXA0FRTXRQ2LL FLXA0.FRTXRQ2.UINT8[LL]
#define FLXA0FRTXRQ2LH FLXA0.FRTXRQ2.UINT8[LH]
#define FLXA0FRTXRQ2H FLXA0.FRTXRQ2.UINT16[H]
#define FLXA0FRTXRQ2HL FLXA0.FRTXRQ2.UINT8[HL]
#define FLXA0FRTXRQ2HH FLXA0.FRTXRQ2.UINT8[HH]
#define FLXA0TXR32 FLXA0.FRTXRQ2.BIT.TXR32
#define FLXA0TXR33 FLXA0.FRTXRQ2.BIT.TXR33
#define FLXA0TXR34 FLXA0.FRTXRQ2.BIT.TXR34
#define FLXA0TXR35 FLXA0.FRTXRQ2.BIT.TXR35
#define FLXA0TXR36 FLXA0.FRTXRQ2.BIT.TXR36
#define FLXA0TXR37 FLXA0.FRTXRQ2.BIT.TXR37
#define FLXA0TXR38 FLXA0.FRTXRQ2.BIT.TXR38
#define FLXA0TXR39 FLXA0.FRTXRQ2.BIT.TXR39
#define FLXA0TXR40 FLXA0.FRTXRQ2.BIT.TXR40
#define FLXA0TXR41 FLXA0.FRTXRQ2.BIT.TXR41
#define FLXA0TXR42 FLXA0.FRTXRQ2.BIT.TXR42
#define FLXA0TXR43 FLXA0.FRTXRQ2.BIT.TXR43
#define FLXA0TXR44 FLXA0.FRTXRQ2.BIT.TXR44
#define FLXA0TXR45 FLXA0.FRTXRQ2.BIT.TXR45
#define FLXA0TXR46 FLXA0.FRTXRQ2.BIT.TXR46
#define FLXA0TXR47 FLXA0.FRTXRQ2.BIT.TXR47
#define FLXA0TXR48 FLXA0.FRTXRQ2.BIT.TXR48
#define FLXA0TXR49 FLXA0.FRTXRQ2.BIT.TXR49
#define FLXA0TXR50 FLXA0.FRTXRQ2.BIT.TXR50
#define FLXA0TXR51 FLXA0.FRTXRQ2.BIT.TXR51
#define FLXA0TXR52 FLXA0.FRTXRQ2.BIT.TXR52
#define FLXA0TXR53 FLXA0.FRTXRQ2.BIT.TXR53
#define FLXA0TXR54 FLXA0.FRTXRQ2.BIT.TXR54
#define FLXA0TXR55 FLXA0.FRTXRQ2.BIT.TXR55
#define FLXA0TXR56 FLXA0.FRTXRQ2.BIT.TXR56
#define FLXA0TXR57 FLXA0.FRTXRQ2.BIT.TXR57
#define FLXA0TXR58 FLXA0.FRTXRQ2.BIT.TXR58
#define FLXA0TXR59 FLXA0.FRTXRQ2.BIT.TXR59
#define FLXA0TXR60 FLXA0.FRTXRQ2.BIT.TXR60
#define FLXA0TXR61 FLXA0.FRTXRQ2.BIT.TXR61
#define FLXA0TXR62 FLXA0.FRTXRQ2.BIT.TXR62
#define FLXA0TXR63 FLXA0.FRTXRQ2.BIT.TXR63
#define FLXA0FRTXRQ3 FLXA0.FRTXRQ3.UINT32
#define FLXA0FRTXRQ3L FLXA0.FRTXRQ3.UINT16[L]
#define FLXA0FRTXRQ3LL FLXA0.FRTXRQ3.UINT8[LL]
#define FLXA0FRTXRQ3LH FLXA0.FRTXRQ3.UINT8[LH]
#define FLXA0FRTXRQ3H FLXA0.FRTXRQ3.UINT16[H]
#define FLXA0FRTXRQ3HL FLXA0.FRTXRQ3.UINT8[HL]
#define FLXA0FRTXRQ3HH FLXA0.FRTXRQ3.UINT8[HH]
#define FLXA0TXR64 FLXA0.FRTXRQ3.BIT.TXR64
#define FLXA0TXR65 FLXA0.FRTXRQ3.BIT.TXR65
#define FLXA0TXR66 FLXA0.FRTXRQ3.BIT.TXR66
#define FLXA0TXR67 FLXA0.FRTXRQ3.BIT.TXR67
#define FLXA0TXR68 FLXA0.FRTXRQ3.BIT.TXR68
#define FLXA0TXR69 FLXA0.FRTXRQ3.BIT.TXR69
#define FLXA0TXR70 FLXA0.FRTXRQ3.BIT.TXR70
#define FLXA0TXR71 FLXA0.FRTXRQ3.BIT.TXR71
#define FLXA0TXR72 FLXA0.FRTXRQ3.BIT.TXR72
#define FLXA0TXR73 FLXA0.FRTXRQ3.BIT.TXR73
#define FLXA0TXR74 FLXA0.FRTXRQ3.BIT.TXR74
#define FLXA0TXR75 FLXA0.FRTXRQ3.BIT.TXR75
#define FLXA0TXR76 FLXA0.FRTXRQ3.BIT.TXR76
#define FLXA0TXR77 FLXA0.FRTXRQ3.BIT.TXR77
#define FLXA0TXR78 FLXA0.FRTXRQ3.BIT.TXR78
#define FLXA0TXR79 FLXA0.FRTXRQ3.BIT.TXR79
#define FLXA0TXR80 FLXA0.FRTXRQ3.BIT.TXR80
#define FLXA0TXR81 FLXA0.FRTXRQ3.BIT.TXR81
#define FLXA0TXR82 FLXA0.FRTXRQ3.BIT.TXR82
#define FLXA0TXR83 FLXA0.FRTXRQ3.BIT.TXR83
#define FLXA0TXR84 FLXA0.FRTXRQ3.BIT.TXR84
#define FLXA0TXR85 FLXA0.FRTXRQ3.BIT.TXR85
#define FLXA0TXR86 FLXA0.FRTXRQ3.BIT.TXR86
#define FLXA0TXR87 FLXA0.FRTXRQ3.BIT.TXR87
#define FLXA0TXR88 FLXA0.FRTXRQ3.BIT.TXR88
#define FLXA0TXR89 FLXA0.FRTXRQ3.BIT.TXR89
#define FLXA0TXR90 FLXA0.FRTXRQ3.BIT.TXR90
#define FLXA0TXR91 FLXA0.FRTXRQ3.BIT.TXR91
#define FLXA0TXR92 FLXA0.FRTXRQ3.BIT.TXR92
#define FLXA0TXR93 FLXA0.FRTXRQ3.BIT.TXR93
#define FLXA0TXR94 FLXA0.FRTXRQ3.BIT.TXR94
#define FLXA0TXR95 FLXA0.FRTXRQ3.BIT.TXR95
#define FLXA0FRTXRQ4 FLXA0.FRTXRQ4.UINT32
#define FLXA0FRTXRQ4L FLXA0.FRTXRQ4.UINT16[L]
#define FLXA0FRTXRQ4LL FLXA0.FRTXRQ4.UINT8[LL]
#define FLXA0FRTXRQ4LH FLXA0.FRTXRQ4.UINT8[LH]
#define FLXA0FRTXRQ4H FLXA0.FRTXRQ4.UINT16[H]
#define FLXA0FRTXRQ4HL FLXA0.FRTXRQ4.UINT8[HL]
#define FLXA0FRTXRQ4HH FLXA0.FRTXRQ4.UINT8[HH]
#define FLXA0TXR96 FLXA0.FRTXRQ4.BIT.TXR96
#define FLXA0TXR97 FLXA0.FRTXRQ4.BIT.TXR97
#define FLXA0TXR98 FLXA0.FRTXRQ4.BIT.TXR98
#define FLXA0TXR99 FLXA0.FRTXRQ4.BIT.TXR99
#define FLXA0TXR100 FLXA0.FRTXRQ4.BIT.TXR100
#define FLXA0TXR101 FLXA0.FRTXRQ4.BIT.TXR101
#define FLXA0TXR102 FLXA0.FRTXRQ4.BIT.TXR102
#define FLXA0TXR103 FLXA0.FRTXRQ4.BIT.TXR103
#define FLXA0TXR104 FLXA0.FRTXRQ4.BIT.TXR104
#define FLXA0TXR105 FLXA0.FRTXRQ4.BIT.TXR105
#define FLXA0TXR106 FLXA0.FRTXRQ4.BIT.TXR106
#define FLXA0TXR107 FLXA0.FRTXRQ4.BIT.TXR107
#define FLXA0TXR108 FLXA0.FRTXRQ4.BIT.TXR108
#define FLXA0TXR109 FLXA0.FRTXRQ4.BIT.TXR109
#define FLXA0TXR110 FLXA0.FRTXRQ4.BIT.TXR110
#define FLXA0TXR111 FLXA0.FRTXRQ4.BIT.TXR111
#define FLXA0TXR112 FLXA0.FRTXRQ4.BIT.TXR112
#define FLXA0TXR113 FLXA0.FRTXRQ4.BIT.TXR113
#define FLXA0TXR114 FLXA0.FRTXRQ4.BIT.TXR114
#define FLXA0TXR115 FLXA0.FRTXRQ4.BIT.TXR115
#define FLXA0TXR116 FLXA0.FRTXRQ4.BIT.TXR116
#define FLXA0TXR117 FLXA0.FRTXRQ4.BIT.TXR117
#define FLXA0TXR118 FLXA0.FRTXRQ4.BIT.TXR118
#define FLXA0TXR119 FLXA0.FRTXRQ4.BIT.TXR119
#define FLXA0TXR120 FLXA0.FRTXRQ4.BIT.TXR120
#define FLXA0TXR121 FLXA0.FRTXRQ4.BIT.TXR121
#define FLXA0TXR122 FLXA0.FRTXRQ4.BIT.TXR122
#define FLXA0TXR123 FLXA0.FRTXRQ4.BIT.TXR123
#define FLXA0TXR124 FLXA0.FRTXRQ4.BIT.TXR124
#define FLXA0TXR125 FLXA0.FRTXRQ4.BIT.TXR125
#define FLXA0TXR126 FLXA0.FRTXRQ4.BIT.TXR126
#define FLXA0TXR127 FLXA0.FRTXRQ4.BIT.TXR127
#define FLXA0FRNDAT1 FLXA0.FRNDAT1.UINT32
#define FLXA0FRNDAT1L FLXA0.FRNDAT1.UINT16[L]
#define FLXA0FRNDAT1LL FLXA0.FRNDAT1.UINT8[LL]
#define FLXA0FRNDAT1LH FLXA0.FRNDAT1.UINT8[LH]
#define FLXA0FRNDAT1H FLXA0.FRNDAT1.UINT16[H]
#define FLXA0FRNDAT1HL FLXA0.FRNDAT1.UINT8[HL]
#define FLXA0FRNDAT1HH FLXA0.FRNDAT1.UINT8[HH]
#define FLXA0ND0 FLXA0.FRNDAT1.BIT.ND0
#define FLXA0ND1 FLXA0.FRNDAT1.BIT.ND1
#define FLXA0ND2 FLXA0.FRNDAT1.BIT.ND2
#define FLXA0ND3 FLXA0.FRNDAT1.BIT.ND3
#define FLXA0ND4 FLXA0.FRNDAT1.BIT.ND4
#define FLXA0ND5 FLXA0.FRNDAT1.BIT.ND5
#define FLXA0ND6 FLXA0.FRNDAT1.BIT.ND6
#define FLXA0ND7 FLXA0.FRNDAT1.BIT.ND7
#define FLXA0ND8 FLXA0.FRNDAT1.BIT.ND8
#define FLXA0ND9 FLXA0.FRNDAT1.BIT.ND9
#define FLXA0ND10 FLXA0.FRNDAT1.BIT.ND10
#define FLXA0ND11 FLXA0.FRNDAT1.BIT.ND11
#define FLXA0ND12 FLXA0.FRNDAT1.BIT.ND12
#define FLXA0ND13 FLXA0.FRNDAT1.BIT.ND13
#define FLXA0ND14 FLXA0.FRNDAT1.BIT.ND14
#define FLXA0ND15 FLXA0.FRNDAT1.BIT.ND15
#define FLXA0ND16 FLXA0.FRNDAT1.BIT.ND16
#define FLXA0ND17 FLXA0.FRNDAT1.BIT.ND17
#define FLXA0ND18 FLXA0.FRNDAT1.BIT.ND18
#define FLXA0ND19 FLXA0.FRNDAT1.BIT.ND19
#define FLXA0ND20 FLXA0.FRNDAT1.BIT.ND20
#define FLXA0ND21 FLXA0.FRNDAT1.BIT.ND21
#define FLXA0ND22 FLXA0.FRNDAT1.BIT.ND22
#define FLXA0ND23 FLXA0.FRNDAT1.BIT.ND23
#define FLXA0ND24 FLXA0.FRNDAT1.BIT.ND24
#define FLXA0ND25 FLXA0.FRNDAT1.BIT.ND25
#define FLXA0ND26 FLXA0.FRNDAT1.BIT.ND26
#define FLXA0ND27 FLXA0.FRNDAT1.BIT.ND27
#define FLXA0ND28 FLXA0.FRNDAT1.BIT.ND28
#define FLXA0ND29 FLXA0.FRNDAT1.BIT.ND29
#define FLXA0ND30 FLXA0.FRNDAT1.BIT.ND30
#define FLXA0ND31 FLXA0.FRNDAT1.BIT.ND31
#define FLXA0FRNDAT2 FLXA0.FRNDAT2.UINT32
#define FLXA0FRNDAT2L FLXA0.FRNDAT2.UINT16[L]
#define FLXA0FRNDAT2LL FLXA0.FRNDAT2.UINT8[LL]
#define FLXA0FRNDAT2LH FLXA0.FRNDAT2.UINT8[LH]
#define FLXA0FRNDAT2H FLXA0.FRNDAT2.UINT16[H]
#define FLXA0FRNDAT2HL FLXA0.FRNDAT2.UINT8[HL]
#define FLXA0FRNDAT2HH FLXA0.FRNDAT2.UINT8[HH]
#define FLXA0ND32 FLXA0.FRNDAT2.BIT.ND32
#define FLXA0ND33 FLXA0.FRNDAT2.BIT.ND33
#define FLXA0ND34 FLXA0.FRNDAT2.BIT.ND34
#define FLXA0ND35 FLXA0.FRNDAT2.BIT.ND35
#define FLXA0ND36 FLXA0.FRNDAT2.BIT.ND36
#define FLXA0ND37 FLXA0.FRNDAT2.BIT.ND37
#define FLXA0ND38 FLXA0.FRNDAT2.BIT.ND38
#define FLXA0ND39 FLXA0.FRNDAT2.BIT.ND39
#define FLXA0ND40 FLXA0.FRNDAT2.BIT.ND40
#define FLXA0ND41 FLXA0.FRNDAT2.BIT.ND41
#define FLXA0ND42 FLXA0.FRNDAT2.BIT.ND42
#define FLXA0ND43 FLXA0.FRNDAT2.BIT.ND43
#define FLXA0ND44 FLXA0.FRNDAT2.BIT.ND44
#define FLXA0ND45 FLXA0.FRNDAT2.BIT.ND45
#define FLXA0ND46 FLXA0.FRNDAT2.BIT.ND46
#define FLXA0ND47 FLXA0.FRNDAT2.BIT.ND47
#define FLXA0ND48 FLXA0.FRNDAT2.BIT.ND48
#define FLXA0ND49 FLXA0.FRNDAT2.BIT.ND49
#define FLXA0ND50 FLXA0.FRNDAT2.BIT.ND50
#define FLXA0ND51 FLXA0.FRNDAT2.BIT.ND51
#define FLXA0ND52 FLXA0.FRNDAT2.BIT.ND52
#define FLXA0ND53 FLXA0.FRNDAT2.BIT.ND53
#define FLXA0ND54 FLXA0.FRNDAT2.BIT.ND54
#define FLXA0ND55 FLXA0.FRNDAT2.BIT.ND55
#define FLXA0ND56 FLXA0.FRNDAT2.BIT.ND56
#define FLXA0ND57 FLXA0.FRNDAT2.BIT.ND57
#define FLXA0ND58 FLXA0.FRNDAT2.BIT.ND58
#define FLXA0ND59 FLXA0.FRNDAT2.BIT.ND59
#define FLXA0ND60 FLXA0.FRNDAT2.BIT.ND60
#define FLXA0ND61 FLXA0.FRNDAT2.BIT.ND61
#define FLXA0ND62 FLXA0.FRNDAT2.BIT.ND62
#define FLXA0ND63 FLXA0.FRNDAT2.BIT.ND63
#define FLXA0FRNDAT3 FLXA0.FRNDAT3.UINT32
#define FLXA0FRNDAT3L FLXA0.FRNDAT3.UINT16[L]
#define FLXA0FRNDAT3LL FLXA0.FRNDAT3.UINT8[LL]
#define FLXA0FRNDAT3LH FLXA0.FRNDAT3.UINT8[LH]
#define FLXA0FRNDAT3H FLXA0.FRNDAT3.UINT16[H]
#define FLXA0FRNDAT3HL FLXA0.FRNDAT3.UINT8[HL]
#define FLXA0FRNDAT3HH FLXA0.FRNDAT3.UINT8[HH]
#define FLXA0ND64 FLXA0.FRNDAT3.BIT.ND64
#define FLXA0ND65 FLXA0.FRNDAT3.BIT.ND65
#define FLXA0ND66 FLXA0.FRNDAT3.BIT.ND66
#define FLXA0ND67 FLXA0.FRNDAT3.BIT.ND67
#define FLXA0ND68 FLXA0.FRNDAT3.BIT.ND68
#define FLXA0ND69 FLXA0.FRNDAT3.BIT.ND69
#define FLXA0ND70 FLXA0.FRNDAT3.BIT.ND70
#define FLXA0ND71 FLXA0.FRNDAT3.BIT.ND71
#define FLXA0ND72 FLXA0.FRNDAT3.BIT.ND72
#define FLXA0ND73 FLXA0.FRNDAT3.BIT.ND73
#define FLXA0ND74 FLXA0.FRNDAT3.BIT.ND74
#define FLXA0ND75 FLXA0.FRNDAT3.BIT.ND75
#define FLXA0ND76 FLXA0.FRNDAT3.BIT.ND76
#define FLXA0ND77 FLXA0.FRNDAT3.BIT.ND77
#define FLXA0ND78 FLXA0.FRNDAT3.BIT.ND78
#define FLXA0ND79 FLXA0.FRNDAT3.BIT.ND79
#define FLXA0ND80 FLXA0.FRNDAT3.BIT.ND80
#define FLXA0ND81 FLXA0.FRNDAT3.BIT.ND81
#define FLXA0ND82 FLXA0.FRNDAT3.BIT.ND82
#define FLXA0ND83 FLXA0.FRNDAT3.BIT.ND83
#define FLXA0ND84 FLXA0.FRNDAT3.BIT.ND84
#define FLXA0ND85 FLXA0.FRNDAT3.BIT.ND85
#define FLXA0ND86 FLXA0.FRNDAT3.BIT.ND86
#define FLXA0ND87 FLXA0.FRNDAT3.BIT.ND87
#define FLXA0ND88 FLXA0.FRNDAT3.BIT.ND88
#define FLXA0ND89 FLXA0.FRNDAT3.BIT.ND89
#define FLXA0ND90 FLXA0.FRNDAT3.BIT.ND90
#define FLXA0ND91 FLXA0.FRNDAT3.BIT.ND91
#define FLXA0ND92 FLXA0.FRNDAT3.BIT.ND92
#define FLXA0ND93 FLXA0.FRNDAT3.BIT.ND93
#define FLXA0ND94 FLXA0.FRNDAT3.BIT.ND94
#define FLXA0ND95 FLXA0.FRNDAT3.BIT.ND95
#define FLXA0FRNDAT4 FLXA0.FRNDAT4.UINT32
#define FLXA0FRNDAT4L FLXA0.FRNDAT4.UINT16[L]
#define FLXA0FRNDAT4LL FLXA0.FRNDAT4.UINT8[LL]
#define FLXA0FRNDAT4LH FLXA0.FRNDAT4.UINT8[LH]
#define FLXA0FRNDAT4H FLXA0.FRNDAT4.UINT16[H]
#define FLXA0FRNDAT4HL FLXA0.FRNDAT4.UINT8[HL]
#define FLXA0FRNDAT4HH FLXA0.FRNDAT4.UINT8[HH]
#define FLXA0ND96 FLXA0.FRNDAT4.BIT.ND96
#define FLXA0ND97 FLXA0.FRNDAT4.BIT.ND97
#define FLXA0ND98 FLXA0.FRNDAT4.BIT.ND98
#define FLXA0ND99 FLXA0.FRNDAT4.BIT.ND99
#define FLXA0ND100 FLXA0.FRNDAT4.BIT.ND100
#define FLXA0ND101 FLXA0.FRNDAT4.BIT.ND101
#define FLXA0ND102 FLXA0.FRNDAT4.BIT.ND102
#define FLXA0ND103 FLXA0.FRNDAT4.BIT.ND103
#define FLXA0ND104 FLXA0.FRNDAT4.BIT.ND104
#define FLXA0ND105 FLXA0.FRNDAT4.BIT.ND105
#define FLXA0ND106 FLXA0.FRNDAT4.BIT.ND106
#define FLXA0ND107 FLXA0.FRNDAT4.BIT.ND107
#define FLXA0ND108 FLXA0.FRNDAT4.BIT.ND108
#define FLXA0ND109 FLXA0.FRNDAT4.BIT.ND109
#define FLXA0ND110 FLXA0.FRNDAT4.BIT.ND110
#define FLXA0ND111 FLXA0.FRNDAT4.BIT.ND111
#define FLXA0ND112 FLXA0.FRNDAT4.BIT.ND112
#define FLXA0ND113 FLXA0.FRNDAT4.BIT.ND113
#define FLXA0ND114 FLXA0.FRNDAT4.BIT.ND114
#define FLXA0ND115 FLXA0.FRNDAT4.BIT.ND115
#define FLXA0ND116 FLXA0.FRNDAT4.BIT.ND116
#define FLXA0ND117 FLXA0.FRNDAT4.BIT.ND117
#define FLXA0ND118 FLXA0.FRNDAT4.BIT.ND118
#define FLXA0ND119 FLXA0.FRNDAT4.BIT.ND119
#define FLXA0ND120 FLXA0.FRNDAT4.BIT.ND120
#define FLXA0ND121 FLXA0.FRNDAT4.BIT.ND121
#define FLXA0ND122 FLXA0.FRNDAT4.BIT.ND122
#define FLXA0ND123 FLXA0.FRNDAT4.BIT.ND123
#define FLXA0ND124 FLXA0.FRNDAT4.BIT.ND124
#define FLXA0ND125 FLXA0.FRNDAT4.BIT.ND125
#define FLXA0ND126 FLXA0.FRNDAT4.BIT.ND126
#define FLXA0ND127 FLXA0.FRNDAT4.BIT.ND127
#define FLXA0FRMBSC1 FLXA0.FRMBSC1.UINT32
#define FLXA0FRMBSC1L FLXA0.FRMBSC1.UINT16[L]
#define FLXA0FRMBSC1LL FLXA0.FRMBSC1.UINT8[LL]
#define FLXA0FRMBSC1LH FLXA0.FRMBSC1.UINT8[LH]
#define FLXA0FRMBSC1H FLXA0.FRMBSC1.UINT16[H]
#define FLXA0FRMBSC1HL FLXA0.FRMBSC1.UINT8[HL]
#define FLXA0FRMBSC1HH FLXA0.FRMBSC1.UINT8[HH]
#define FLXA0MBC0 FLXA0.FRMBSC1.BIT.MBC0
#define FLXA0MBC1 FLXA0.FRMBSC1.BIT.MBC1
#define FLXA0MBC2 FLXA0.FRMBSC1.BIT.MBC2
#define FLXA0MBC3 FLXA0.FRMBSC1.BIT.MBC3
#define FLXA0MBC4 FLXA0.FRMBSC1.BIT.MBC4
#define FLXA0MBC5 FLXA0.FRMBSC1.BIT.MBC5
#define FLXA0MBC6 FLXA0.FRMBSC1.BIT.MBC6
#define FLXA0MBC7 FLXA0.FRMBSC1.BIT.MBC7
#define FLXA0MBC8 FLXA0.FRMBSC1.BIT.MBC8
#define FLXA0MBC9 FLXA0.FRMBSC1.BIT.MBC9
#define FLXA0MBC10 FLXA0.FRMBSC1.BIT.MBC10
#define FLXA0MBC11 FLXA0.FRMBSC1.BIT.MBC11
#define FLXA0MBC12 FLXA0.FRMBSC1.BIT.MBC12
#define FLXA0MBC13 FLXA0.FRMBSC1.BIT.MBC13
#define FLXA0MBC14 FLXA0.FRMBSC1.BIT.MBC14
#define FLXA0MBC15 FLXA0.FRMBSC1.BIT.MBC15
#define FLXA0MBC16 FLXA0.FRMBSC1.BIT.MBC16
#define FLXA0MBC17 FLXA0.FRMBSC1.BIT.MBC17
#define FLXA0MBC18 FLXA0.FRMBSC1.BIT.MBC18
#define FLXA0MBC19 FLXA0.FRMBSC1.BIT.MBC19
#define FLXA0MBC20 FLXA0.FRMBSC1.BIT.MBC20
#define FLXA0MBC21 FLXA0.FRMBSC1.BIT.MBC21
#define FLXA0MBC22 FLXA0.FRMBSC1.BIT.MBC22
#define FLXA0MBC23 FLXA0.FRMBSC1.BIT.MBC23
#define FLXA0MBC24 FLXA0.FRMBSC1.BIT.MBC24
#define FLXA0MBC25 FLXA0.FRMBSC1.BIT.MBC25
#define FLXA0MBC26 FLXA0.FRMBSC1.BIT.MBC26
#define FLXA0MBC27 FLXA0.FRMBSC1.BIT.MBC27
#define FLXA0MBC28 FLXA0.FRMBSC1.BIT.MBC28
#define FLXA0MBC29 FLXA0.FRMBSC1.BIT.MBC29
#define FLXA0MBC30 FLXA0.FRMBSC1.BIT.MBC30
#define FLXA0MBC31 FLXA0.FRMBSC1.BIT.MBC31
#define FLXA0FRMBSC2 FLXA0.FRMBSC2.UINT32
#define FLXA0FRMBSC2L FLXA0.FRMBSC2.UINT16[L]
#define FLXA0FRMBSC2LL FLXA0.FRMBSC2.UINT8[LL]
#define FLXA0FRMBSC2LH FLXA0.FRMBSC2.UINT8[LH]
#define FLXA0FRMBSC2H FLXA0.FRMBSC2.UINT16[H]
#define FLXA0FRMBSC2HL FLXA0.FRMBSC2.UINT8[HL]
#define FLXA0FRMBSC2HH FLXA0.FRMBSC2.UINT8[HH]
#define FLXA0MBC32 FLXA0.FRMBSC2.BIT.MBC32
#define FLXA0MBC33 FLXA0.FRMBSC2.BIT.MBC33
#define FLXA0MBC34 FLXA0.FRMBSC2.BIT.MBC34
#define FLXA0MBC35 FLXA0.FRMBSC2.BIT.MBC35
#define FLXA0MBC36 FLXA0.FRMBSC2.BIT.MBC36
#define FLXA0MBC37 FLXA0.FRMBSC2.BIT.MBC37
#define FLXA0MBC38 FLXA0.FRMBSC2.BIT.MBC38
#define FLXA0MBC39 FLXA0.FRMBSC2.BIT.MBC39
#define FLXA0MBC40 FLXA0.FRMBSC2.BIT.MBC40
#define FLXA0MBC41 FLXA0.FRMBSC2.BIT.MBC41
#define FLXA0MBC42 FLXA0.FRMBSC2.BIT.MBC42
#define FLXA0MBC43 FLXA0.FRMBSC2.BIT.MBC43
#define FLXA0MBC44 FLXA0.FRMBSC2.BIT.MBC44
#define FLXA0MBC45 FLXA0.FRMBSC2.BIT.MBC45
#define FLXA0MBC46 FLXA0.FRMBSC2.BIT.MBC46
#define FLXA0MBC47 FLXA0.FRMBSC2.BIT.MBC47
#define FLXA0MBC48 FLXA0.FRMBSC2.BIT.MBC48
#define FLXA0MBC49 FLXA0.FRMBSC2.BIT.MBC49
#define FLXA0MBC50 FLXA0.FRMBSC2.BIT.MBC50
#define FLXA0MBC51 FLXA0.FRMBSC2.BIT.MBC51
#define FLXA0MBC52 FLXA0.FRMBSC2.BIT.MBC52
#define FLXA0MBC53 FLXA0.FRMBSC2.BIT.MBC53
#define FLXA0MBC54 FLXA0.FRMBSC2.BIT.MBC54
#define FLXA0MBC55 FLXA0.FRMBSC2.BIT.MBC55
#define FLXA0MBC56 FLXA0.FRMBSC2.BIT.MBC56
#define FLXA0MBC57 FLXA0.FRMBSC2.BIT.MBC57
#define FLXA0MBC58 FLXA0.FRMBSC2.BIT.MBC58
#define FLXA0MBC59 FLXA0.FRMBSC2.BIT.MBC59
#define FLXA0MBC60 FLXA0.FRMBSC2.BIT.MBC60
#define FLXA0MBC61 FLXA0.FRMBSC2.BIT.MBC61
#define FLXA0MBC62 FLXA0.FRMBSC2.BIT.MBC62
#define FLXA0MBC63 FLXA0.FRMBSC2.BIT.MBC63
#define FLXA0FRMBSC3 FLXA0.FRMBSC3.UINT32
#define FLXA0FRMBSC3L FLXA0.FRMBSC3.UINT16[L]
#define FLXA0FRMBSC3LL FLXA0.FRMBSC3.UINT8[LL]
#define FLXA0FRMBSC3LH FLXA0.FRMBSC3.UINT8[LH]
#define FLXA0FRMBSC3H FLXA0.FRMBSC3.UINT16[H]
#define FLXA0FRMBSC3HL FLXA0.FRMBSC3.UINT8[HL]
#define FLXA0FRMBSC3HH FLXA0.FRMBSC3.UINT8[HH]
#define FLXA0MBC64 FLXA0.FRMBSC3.BIT.MBC64
#define FLXA0MBC65 FLXA0.FRMBSC3.BIT.MBC65
#define FLXA0MBC66 FLXA0.FRMBSC3.BIT.MBC66
#define FLXA0MBC67 FLXA0.FRMBSC3.BIT.MBC67
#define FLXA0MBC68 FLXA0.FRMBSC3.BIT.MBC68
#define FLXA0MBC69 FLXA0.FRMBSC3.BIT.MBC69
#define FLXA0MBC70 FLXA0.FRMBSC3.BIT.MBC70
#define FLXA0MBC71 FLXA0.FRMBSC3.BIT.MBC71
#define FLXA0MBC72 FLXA0.FRMBSC3.BIT.MBC72
#define FLXA0MBC73 FLXA0.FRMBSC3.BIT.MBC73
#define FLXA0MBC74 FLXA0.FRMBSC3.BIT.MBC74
#define FLXA0MBC75 FLXA0.FRMBSC3.BIT.MBC75
#define FLXA0MBC76 FLXA0.FRMBSC3.BIT.MBC76
#define FLXA0MBC77 FLXA0.FRMBSC3.BIT.MBC77
#define FLXA0MBC78 FLXA0.FRMBSC3.BIT.MBC78
#define FLXA0MBC79 FLXA0.FRMBSC3.BIT.MBC79
#define FLXA0MBC80 FLXA0.FRMBSC3.BIT.MBC80
#define FLXA0MBC81 FLXA0.FRMBSC3.BIT.MBC81
#define FLXA0MBC82 FLXA0.FRMBSC3.BIT.MBC82
#define FLXA0MBC83 FLXA0.FRMBSC3.BIT.MBC83
#define FLXA0MBC84 FLXA0.FRMBSC3.BIT.MBC84
#define FLXA0MBC85 FLXA0.FRMBSC3.BIT.MBC85
#define FLXA0MBC86 FLXA0.FRMBSC3.BIT.MBC86
#define FLXA0MBC87 FLXA0.FRMBSC3.BIT.MBC87
#define FLXA0MBC88 FLXA0.FRMBSC3.BIT.MBC88
#define FLXA0MBC89 FLXA0.FRMBSC3.BIT.MBC89
#define FLXA0MBC90 FLXA0.FRMBSC3.BIT.MBC90
#define FLXA0MBC91 FLXA0.FRMBSC3.BIT.MBC91
#define FLXA0MBC92 FLXA0.FRMBSC3.BIT.MBC92
#define FLXA0MBC93 FLXA0.FRMBSC3.BIT.MBC93
#define FLXA0MBC94 FLXA0.FRMBSC3.BIT.MBC94
#define FLXA0MBC95 FLXA0.FRMBSC3.BIT.MBC95
#define FLXA0FRMBSC4 FLXA0.FRMBSC4.UINT32
#define FLXA0FRMBSC4L FLXA0.FRMBSC4.UINT16[L]
#define FLXA0FRMBSC4LL FLXA0.FRMBSC4.UINT8[LL]
#define FLXA0FRMBSC4LH FLXA0.FRMBSC4.UINT8[LH]
#define FLXA0FRMBSC4H FLXA0.FRMBSC4.UINT16[H]
#define FLXA0FRMBSC4HL FLXA0.FRMBSC4.UINT8[HL]
#define FLXA0FRMBSC4HH FLXA0.FRMBSC4.UINT8[HH]
#define FLXA0MBC96 FLXA0.FRMBSC4.BIT.MBC96
#define FLXA0MBC97 FLXA0.FRMBSC4.BIT.MBC97
#define FLXA0MBC98 FLXA0.FRMBSC4.BIT.MBC98
#define FLXA0MBC99 FLXA0.FRMBSC4.BIT.MBC99
#define FLXA0MBC100 FLXA0.FRMBSC4.BIT.MBC100
#define FLXA0MBC101 FLXA0.FRMBSC4.BIT.MBC101
#define FLXA0MBC102 FLXA0.FRMBSC4.BIT.MBC102
#define FLXA0MBC103 FLXA0.FRMBSC4.BIT.MBC103
#define FLXA0MBC104 FLXA0.FRMBSC4.BIT.MBC104
#define FLXA0MBC105 FLXA0.FRMBSC4.BIT.MBC105
#define FLXA0MBC106 FLXA0.FRMBSC4.BIT.MBC106
#define FLXA0MBC107 FLXA0.FRMBSC4.BIT.MBC107
#define FLXA0MBC108 FLXA0.FRMBSC4.BIT.MBC108
#define FLXA0MBC109 FLXA0.FRMBSC4.BIT.MBC109
#define FLXA0MBC110 FLXA0.FRMBSC4.BIT.MBC110
#define FLXA0MBC111 FLXA0.FRMBSC4.BIT.MBC111
#define FLXA0MBC112 FLXA0.FRMBSC4.BIT.MBC112
#define FLXA0MBC113 FLXA0.FRMBSC4.BIT.MBC113
#define FLXA0MBC114 FLXA0.FRMBSC4.BIT.MBC114
#define FLXA0MBC115 FLXA0.FRMBSC4.BIT.MBC115
#define FLXA0MBC116 FLXA0.FRMBSC4.BIT.MBC116
#define FLXA0MBC117 FLXA0.FRMBSC4.BIT.MBC117
#define FLXA0MBC118 FLXA0.FRMBSC4.BIT.MBC118
#define FLXA0MBC119 FLXA0.FRMBSC4.BIT.MBC119
#define FLXA0MBC120 FLXA0.FRMBSC4.BIT.MBC120
#define FLXA0MBC121 FLXA0.FRMBSC4.BIT.MBC121
#define FLXA0MBC122 FLXA0.FRMBSC4.BIT.MBC122
#define FLXA0MBC123 FLXA0.FRMBSC4.BIT.MBC123
#define FLXA0MBC124 FLXA0.FRMBSC4.BIT.MBC124
#define FLXA0MBC125 FLXA0.FRMBSC4.BIT.MBC125
#define FLXA0MBC126 FLXA0.FRMBSC4.BIT.MBC126
#define FLXA0MBC127 FLXA0.FRMBSC4.BIT.MBC127
#define FLXA0FRWRDS1 FLXA0.FRWRDS1.UINT32
#define FLXA0FRWRDS1L FLXA0.FRWRDS1.UINT16[L]
#define FLXA0FRWRDS1LL FLXA0.FRWRDS1.UINT8[LL]
#define FLXA0FRWRDS1LH FLXA0.FRWRDS1.UINT8[LH]
#define FLXA0FRWRDS1H FLXA0.FRWRDS1.UINT16[H]
#define FLXA0FRWRDS1HL FLXA0.FRWRDS1.UINT8[HL]
#define FLXA0FRWRDS1HH FLXA0.FRWRDS1.UINT8[HH]
#define FLXA0MD FLXA0.FRWRDS1.BIT.MD
#define FLXA0FRWRDS2 FLXA0.FRWRDS2.UINT32
#define FLXA0FRWRDS2L FLXA0.FRWRDS2.UINT16[L]
#define FLXA0FRWRDS2LL FLXA0.FRWRDS2.UINT8[LL]
#define FLXA0FRWRDS2LH FLXA0.FRWRDS2.UINT8[LH]
#define FLXA0FRWRDS2H FLXA0.FRWRDS2.UINT16[H]
#define FLXA0FRWRDS2HL FLXA0.FRWRDS2.UINT8[HL]
#define FLXA0FRWRDS2HH FLXA0.FRWRDS2.UINT8[HH]
#define FLXA0FRWRDS3 FLXA0.FRWRDS3.UINT32
#define FLXA0FRWRDS3L FLXA0.FRWRDS3.UINT16[L]
#define FLXA0FRWRDS3LL FLXA0.FRWRDS3.UINT8[LL]
#define FLXA0FRWRDS3LH FLXA0.FRWRDS3.UINT8[LH]
#define FLXA0FRWRDS3H FLXA0.FRWRDS3.UINT16[H]
#define FLXA0FRWRDS3HL FLXA0.FRWRDS3.UINT8[HL]
#define FLXA0FRWRDS3HH FLXA0.FRWRDS3.UINT8[HH]
#define FLXA0FRWRDS4 FLXA0.FRWRDS4.UINT32
#define FLXA0FRWRDS4L FLXA0.FRWRDS4.UINT16[L]
#define FLXA0FRWRDS4LL FLXA0.FRWRDS4.UINT8[LL]
#define FLXA0FRWRDS4LH FLXA0.FRWRDS4.UINT8[LH]
#define FLXA0FRWRDS4H FLXA0.FRWRDS4.UINT16[H]
#define FLXA0FRWRDS4HL FLXA0.FRWRDS4.UINT8[HL]
#define FLXA0FRWRDS4HH FLXA0.FRWRDS4.UINT8[HH]
#define FLXA0FRWRDS5 FLXA0.FRWRDS5.UINT32
#define FLXA0FRWRDS5L FLXA0.FRWRDS5.UINT16[L]
#define FLXA0FRWRDS5LL FLXA0.FRWRDS5.UINT8[LL]
#define FLXA0FRWRDS5LH FLXA0.FRWRDS5.UINT8[LH]
#define FLXA0FRWRDS5H FLXA0.FRWRDS5.UINT16[H]
#define FLXA0FRWRDS5HL FLXA0.FRWRDS5.UINT8[HL]
#define FLXA0FRWRDS5HH FLXA0.FRWRDS5.UINT8[HH]
#define FLXA0FRWRDS6 FLXA0.FRWRDS6.UINT32
#define FLXA0FRWRDS6L FLXA0.FRWRDS6.UINT16[L]
#define FLXA0FRWRDS6LL FLXA0.FRWRDS6.UINT8[LL]
#define FLXA0FRWRDS6LH FLXA0.FRWRDS6.UINT8[LH]
#define FLXA0FRWRDS6H FLXA0.FRWRDS6.UINT16[H]
#define FLXA0FRWRDS6HL FLXA0.FRWRDS6.UINT8[HL]
#define FLXA0FRWRDS6HH FLXA0.FRWRDS6.UINT8[HH]
#define FLXA0FRWRDS7 FLXA0.FRWRDS7.UINT32
#define FLXA0FRWRDS7L FLXA0.FRWRDS7.UINT16[L]
#define FLXA0FRWRDS7LL FLXA0.FRWRDS7.UINT8[LL]
#define FLXA0FRWRDS7LH FLXA0.FRWRDS7.UINT8[LH]
#define FLXA0FRWRDS7H FLXA0.FRWRDS7.UINT16[H]
#define FLXA0FRWRDS7HL FLXA0.FRWRDS7.UINT8[HL]
#define FLXA0FRWRDS7HH FLXA0.FRWRDS7.UINT8[HH]
#define FLXA0FRWRDS8 FLXA0.FRWRDS8.UINT32
#define FLXA0FRWRDS8L FLXA0.FRWRDS8.UINT16[L]
#define FLXA0FRWRDS8LL FLXA0.FRWRDS8.UINT8[LL]
#define FLXA0FRWRDS8LH FLXA0.FRWRDS8.UINT8[LH]
#define FLXA0FRWRDS8H FLXA0.FRWRDS8.UINT16[H]
#define FLXA0FRWRDS8HL FLXA0.FRWRDS8.UINT8[HL]
#define FLXA0FRWRDS8HH FLXA0.FRWRDS8.UINT8[HH]
#define FLXA0FRWRDS9 FLXA0.FRWRDS9.UINT32
#define FLXA0FRWRDS9L FLXA0.FRWRDS9.UINT16[L]
#define FLXA0FRWRDS9LL FLXA0.FRWRDS9.UINT8[LL]
#define FLXA0FRWRDS9LH FLXA0.FRWRDS9.UINT8[LH]
#define FLXA0FRWRDS9H FLXA0.FRWRDS9.UINT16[H]
#define FLXA0FRWRDS9HL FLXA0.FRWRDS9.UINT8[HL]
#define FLXA0FRWRDS9HH FLXA0.FRWRDS9.UINT8[HH]
#define FLXA0FRWRDS10 FLXA0.FRWRDS10.UINT32
#define FLXA0FRWRDS10L FLXA0.FRWRDS10.UINT16[L]
#define FLXA0FRWRDS10LL FLXA0.FRWRDS10.UINT8[LL]
#define FLXA0FRWRDS10LH FLXA0.FRWRDS10.UINT8[LH]
#define FLXA0FRWRDS10H FLXA0.FRWRDS10.UINT16[H]
#define FLXA0FRWRDS10HL FLXA0.FRWRDS10.UINT8[HL]
#define FLXA0FRWRDS10HH FLXA0.FRWRDS10.UINT8[HH]
#define FLXA0FRWRDS11 FLXA0.FRWRDS11.UINT32
#define FLXA0FRWRDS11L FLXA0.FRWRDS11.UINT16[L]
#define FLXA0FRWRDS11LL FLXA0.FRWRDS11.UINT8[LL]
#define FLXA0FRWRDS11LH FLXA0.FRWRDS11.UINT8[LH]
#define FLXA0FRWRDS11H FLXA0.FRWRDS11.UINT16[H]
#define FLXA0FRWRDS11HL FLXA0.FRWRDS11.UINT8[HL]
#define FLXA0FRWRDS11HH FLXA0.FRWRDS11.UINT8[HH]
#define FLXA0FRWRDS12 FLXA0.FRWRDS12.UINT32
#define FLXA0FRWRDS12L FLXA0.FRWRDS12.UINT16[L]
#define FLXA0FRWRDS12LL FLXA0.FRWRDS12.UINT8[LL]
#define FLXA0FRWRDS12LH FLXA0.FRWRDS12.UINT8[LH]
#define FLXA0FRWRDS12H FLXA0.FRWRDS12.UINT16[H]
#define FLXA0FRWRDS12HL FLXA0.FRWRDS12.UINT8[HL]
#define FLXA0FRWRDS12HH FLXA0.FRWRDS12.UINT8[HH]
#define FLXA0FRWRDS13 FLXA0.FRWRDS13.UINT32
#define FLXA0FRWRDS13L FLXA0.FRWRDS13.UINT16[L]
#define FLXA0FRWRDS13LL FLXA0.FRWRDS13.UINT8[LL]
#define FLXA0FRWRDS13LH FLXA0.FRWRDS13.UINT8[LH]
#define FLXA0FRWRDS13H FLXA0.FRWRDS13.UINT16[H]
#define FLXA0FRWRDS13HL FLXA0.FRWRDS13.UINT8[HL]
#define FLXA0FRWRDS13HH FLXA0.FRWRDS13.UINT8[HH]
#define FLXA0FRWRDS14 FLXA0.FRWRDS14.UINT32
#define FLXA0FRWRDS14L FLXA0.FRWRDS14.UINT16[L]
#define FLXA0FRWRDS14LL FLXA0.FRWRDS14.UINT8[LL]
#define FLXA0FRWRDS14LH FLXA0.FRWRDS14.UINT8[LH]
#define FLXA0FRWRDS14H FLXA0.FRWRDS14.UINT16[H]
#define FLXA0FRWRDS14HL FLXA0.FRWRDS14.UINT8[HL]
#define FLXA0FRWRDS14HH FLXA0.FRWRDS14.UINT8[HH]
#define FLXA0FRWRDS15 FLXA0.FRWRDS15.UINT32
#define FLXA0FRWRDS15L FLXA0.FRWRDS15.UINT16[L]
#define FLXA0FRWRDS15LL FLXA0.FRWRDS15.UINT8[LL]
#define FLXA0FRWRDS15LH FLXA0.FRWRDS15.UINT8[LH]
#define FLXA0FRWRDS15H FLXA0.FRWRDS15.UINT16[H]
#define FLXA0FRWRDS15HL FLXA0.FRWRDS15.UINT8[HL]
#define FLXA0FRWRDS15HH FLXA0.FRWRDS15.UINT8[HH]
#define FLXA0FRWRDS16 FLXA0.FRWRDS16.UINT32
#define FLXA0FRWRDS16L FLXA0.FRWRDS16.UINT16[L]
#define FLXA0FRWRDS16LL FLXA0.FRWRDS16.UINT8[LL]
#define FLXA0FRWRDS16LH FLXA0.FRWRDS16.UINT8[LH]
#define FLXA0FRWRDS16H FLXA0.FRWRDS16.UINT16[H]
#define FLXA0FRWRDS16HL FLXA0.FRWRDS16.UINT8[HL]
#define FLXA0FRWRDS16HH FLXA0.FRWRDS16.UINT8[HH]
#define FLXA0FRWRDS17 FLXA0.FRWRDS17.UINT32
#define FLXA0FRWRDS17L FLXA0.FRWRDS17.UINT16[L]
#define FLXA0FRWRDS17LL FLXA0.FRWRDS17.UINT8[LL]
#define FLXA0FRWRDS17LH FLXA0.FRWRDS17.UINT8[LH]
#define FLXA0FRWRDS17H FLXA0.FRWRDS17.UINT16[H]
#define FLXA0FRWRDS17HL FLXA0.FRWRDS17.UINT8[HL]
#define FLXA0FRWRDS17HH FLXA0.FRWRDS17.UINT8[HH]
#define FLXA0FRWRDS18 FLXA0.FRWRDS18.UINT32
#define FLXA0FRWRDS18L FLXA0.FRWRDS18.UINT16[L]
#define FLXA0FRWRDS18LL FLXA0.FRWRDS18.UINT8[LL]
#define FLXA0FRWRDS18LH FLXA0.FRWRDS18.UINT8[LH]
#define FLXA0FRWRDS18H FLXA0.FRWRDS18.UINT16[H]
#define FLXA0FRWRDS18HL FLXA0.FRWRDS18.UINT8[HL]
#define FLXA0FRWRDS18HH FLXA0.FRWRDS18.UINT8[HH]
#define FLXA0FRWRDS19 FLXA0.FRWRDS19.UINT32
#define FLXA0FRWRDS19L FLXA0.FRWRDS19.UINT16[L]
#define FLXA0FRWRDS19LL FLXA0.FRWRDS19.UINT8[LL]
#define FLXA0FRWRDS19LH FLXA0.FRWRDS19.UINT8[LH]
#define FLXA0FRWRDS19H FLXA0.FRWRDS19.UINT16[H]
#define FLXA0FRWRDS19HL FLXA0.FRWRDS19.UINT8[HL]
#define FLXA0FRWRDS19HH FLXA0.FRWRDS19.UINT8[HH]
#define FLXA0FRWRDS20 FLXA0.FRWRDS20.UINT32
#define FLXA0FRWRDS20L FLXA0.FRWRDS20.UINT16[L]
#define FLXA0FRWRDS20LL FLXA0.FRWRDS20.UINT8[LL]
#define FLXA0FRWRDS20LH FLXA0.FRWRDS20.UINT8[LH]
#define FLXA0FRWRDS20H FLXA0.FRWRDS20.UINT16[H]
#define FLXA0FRWRDS20HL FLXA0.FRWRDS20.UINT8[HL]
#define FLXA0FRWRDS20HH FLXA0.FRWRDS20.UINT8[HH]
#define FLXA0FRWRDS21 FLXA0.FRWRDS21.UINT32
#define FLXA0FRWRDS21L FLXA0.FRWRDS21.UINT16[L]
#define FLXA0FRWRDS21LL FLXA0.FRWRDS21.UINT8[LL]
#define FLXA0FRWRDS21LH FLXA0.FRWRDS21.UINT8[LH]
#define FLXA0FRWRDS21H FLXA0.FRWRDS21.UINT16[H]
#define FLXA0FRWRDS21HL FLXA0.FRWRDS21.UINT8[HL]
#define FLXA0FRWRDS21HH FLXA0.FRWRDS21.UINT8[HH]
#define FLXA0FRWRDS22 FLXA0.FRWRDS22.UINT32
#define FLXA0FRWRDS22L FLXA0.FRWRDS22.UINT16[L]
#define FLXA0FRWRDS22LL FLXA0.FRWRDS22.UINT8[LL]
#define FLXA0FRWRDS22LH FLXA0.FRWRDS22.UINT8[LH]
#define FLXA0FRWRDS22H FLXA0.FRWRDS22.UINT16[H]
#define FLXA0FRWRDS22HL FLXA0.FRWRDS22.UINT8[HL]
#define FLXA0FRWRDS22HH FLXA0.FRWRDS22.UINT8[HH]
#define FLXA0FRWRDS23 FLXA0.FRWRDS23.UINT32
#define FLXA0FRWRDS23L FLXA0.FRWRDS23.UINT16[L]
#define FLXA0FRWRDS23LL FLXA0.FRWRDS23.UINT8[LL]
#define FLXA0FRWRDS23LH FLXA0.FRWRDS23.UINT8[LH]
#define FLXA0FRWRDS23H FLXA0.FRWRDS23.UINT16[H]
#define FLXA0FRWRDS23HL FLXA0.FRWRDS23.UINT8[HL]
#define FLXA0FRWRDS23HH FLXA0.FRWRDS23.UINT8[HH]
#define FLXA0FRWRDS24 FLXA0.FRWRDS24.UINT32
#define FLXA0FRWRDS24L FLXA0.FRWRDS24.UINT16[L]
#define FLXA0FRWRDS24LL FLXA0.FRWRDS24.UINT8[LL]
#define FLXA0FRWRDS24LH FLXA0.FRWRDS24.UINT8[LH]
#define FLXA0FRWRDS24H FLXA0.FRWRDS24.UINT16[H]
#define FLXA0FRWRDS24HL FLXA0.FRWRDS24.UINT8[HL]
#define FLXA0FRWRDS24HH FLXA0.FRWRDS24.UINT8[HH]
#define FLXA0FRWRDS25 FLXA0.FRWRDS25.UINT32
#define FLXA0FRWRDS25L FLXA0.FRWRDS25.UINT16[L]
#define FLXA0FRWRDS25LL FLXA0.FRWRDS25.UINT8[LL]
#define FLXA0FRWRDS25LH FLXA0.FRWRDS25.UINT8[LH]
#define FLXA0FRWRDS25H FLXA0.FRWRDS25.UINT16[H]
#define FLXA0FRWRDS25HL FLXA0.FRWRDS25.UINT8[HL]
#define FLXA0FRWRDS25HH FLXA0.FRWRDS25.UINT8[HH]
#define FLXA0FRWRDS26 FLXA0.FRWRDS26.UINT32
#define FLXA0FRWRDS26L FLXA0.FRWRDS26.UINT16[L]
#define FLXA0FRWRDS26LL FLXA0.FRWRDS26.UINT8[LL]
#define FLXA0FRWRDS26LH FLXA0.FRWRDS26.UINT8[LH]
#define FLXA0FRWRDS26H FLXA0.FRWRDS26.UINT16[H]
#define FLXA0FRWRDS26HL FLXA0.FRWRDS26.UINT8[HL]
#define FLXA0FRWRDS26HH FLXA0.FRWRDS26.UINT8[HH]
#define FLXA0FRWRDS27 FLXA0.FRWRDS27.UINT32
#define FLXA0FRWRDS27L FLXA0.FRWRDS27.UINT16[L]
#define FLXA0FRWRDS27LL FLXA0.FRWRDS27.UINT8[LL]
#define FLXA0FRWRDS27LH FLXA0.FRWRDS27.UINT8[LH]
#define FLXA0FRWRDS27H FLXA0.FRWRDS27.UINT16[H]
#define FLXA0FRWRDS27HL FLXA0.FRWRDS27.UINT8[HL]
#define FLXA0FRWRDS27HH FLXA0.FRWRDS27.UINT8[HH]
#define FLXA0FRWRDS28 FLXA0.FRWRDS28.UINT32
#define FLXA0FRWRDS28L FLXA0.FRWRDS28.UINT16[L]
#define FLXA0FRWRDS28LL FLXA0.FRWRDS28.UINT8[LL]
#define FLXA0FRWRDS28LH FLXA0.FRWRDS28.UINT8[LH]
#define FLXA0FRWRDS28H FLXA0.FRWRDS28.UINT16[H]
#define FLXA0FRWRDS28HL FLXA0.FRWRDS28.UINT8[HL]
#define FLXA0FRWRDS28HH FLXA0.FRWRDS28.UINT8[HH]
#define FLXA0FRWRDS29 FLXA0.FRWRDS29.UINT32
#define FLXA0FRWRDS29L FLXA0.FRWRDS29.UINT16[L]
#define FLXA0FRWRDS29LL FLXA0.FRWRDS29.UINT8[LL]
#define FLXA0FRWRDS29LH FLXA0.FRWRDS29.UINT8[LH]
#define FLXA0FRWRDS29H FLXA0.FRWRDS29.UINT16[H]
#define FLXA0FRWRDS29HL FLXA0.FRWRDS29.UINT8[HL]
#define FLXA0FRWRDS29HH FLXA0.FRWRDS29.UINT8[HH]
#define FLXA0FRWRDS30 FLXA0.FRWRDS30.UINT32
#define FLXA0FRWRDS30L FLXA0.FRWRDS30.UINT16[L]
#define FLXA0FRWRDS30LL FLXA0.FRWRDS30.UINT8[LL]
#define FLXA0FRWRDS30LH FLXA0.FRWRDS30.UINT8[LH]
#define FLXA0FRWRDS30H FLXA0.FRWRDS30.UINT16[H]
#define FLXA0FRWRDS30HL FLXA0.FRWRDS30.UINT8[HL]
#define FLXA0FRWRDS30HH FLXA0.FRWRDS30.UINT8[HH]
#define FLXA0FRWRDS31 FLXA0.FRWRDS31.UINT32
#define FLXA0FRWRDS31L FLXA0.FRWRDS31.UINT16[L]
#define FLXA0FRWRDS31LL FLXA0.FRWRDS31.UINT8[LL]
#define FLXA0FRWRDS31LH FLXA0.FRWRDS31.UINT8[LH]
#define FLXA0FRWRDS31H FLXA0.FRWRDS31.UINT16[H]
#define FLXA0FRWRDS31HL FLXA0.FRWRDS31.UINT8[HL]
#define FLXA0FRWRDS31HH FLXA0.FRWRDS31.UINT8[HH]
#define FLXA0FRWRDS32 FLXA0.FRWRDS32.UINT32
#define FLXA0FRWRDS32L FLXA0.FRWRDS32.UINT16[L]
#define FLXA0FRWRDS32LL FLXA0.FRWRDS32.UINT8[LL]
#define FLXA0FRWRDS32LH FLXA0.FRWRDS32.UINT8[LH]
#define FLXA0FRWRDS32H FLXA0.FRWRDS32.UINT16[H]
#define FLXA0FRWRDS32HL FLXA0.FRWRDS32.UINT8[HL]
#define FLXA0FRWRDS32HH FLXA0.FRWRDS32.UINT8[HH]
#define FLXA0FRWRDS33 FLXA0.FRWRDS33.UINT32
#define FLXA0FRWRDS33L FLXA0.FRWRDS33.UINT16[L]
#define FLXA0FRWRDS33LL FLXA0.FRWRDS33.UINT8[LL]
#define FLXA0FRWRDS33LH FLXA0.FRWRDS33.UINT8[LH]
#define FLXA0FRWRDS33H FLXA0.FRWRDS33.UINT16[H]
#define FLXA0FRWRDS33HL FLXA0.FRWRDS33.UINT8[HL]
#define FLXA0FRWRDS33HH FLXA0.FRWRDS33.UINT8[HH]
#define FLXA0FRWRDS34 FLXA0.FRWRDS34.UINT32
#define FLXA0FRWRDS34L FLXA0.FRWRDS34.UINT16[L]
#define FLXA0FRWRDS34LL FLXA0.FRWRDS34.UINT8[LL]
#define FLXA0FRWRDS34LH FLXA0.FRWRDS34.UINT8[LH]
#define FLXA0FRWRDS34H FLXA0.FRWRDS34.UINT16[H]
#define FLXA0FRWRDS34HL FLXA0.FRWRDS34.UINT8[HL]
#define FLXA0FRWRDS34HH FLXA0.FRWRDS34.UINT8[HH]
#define FLXA0FRWRDS35 FLXA0.FRWRDS35.UINT32
#define FLXA0FRWRDS35L FLXA0.FRWRDS35.UINT16[L]
#define FLXA0FRWRDS35LL FLXA0.FRWRDS35.UINT8[LL]
#define FLXA0FRWRDS35LH FLXA0.FRWRDS35.UINT8[LH]
#define FLXA0FRWRDS35H FLXA0.FRWRDS35.UINT16[H]
#define FLXA0FRWRDS35HL FLXA0.FRWRDS35.UINT8[HL]
#define FLXA0FRWRDS35HH FLXA0.FRWRDS35.UINT8[HH]
#define FLXA0FRWRDS36 FLXA0.FRWRDS36.UINT32
#define FLXA0FRWRDS36L FLXA0.FRWRDS36.UINT16[L]
#define FLXA0FRWRDS36LL FLXA0.FRWRDS36.UINT8[LL]
#define FLXA0FRWRDS36LH FLXA0.FRWRDS36.UINT8[LH]
#define FLXA0FRWRDS36H FLXA0.FRWRDS36.UINT16[H]
#define FLXA0FRWRDS36HL FLXA0.FRWRDS36.UINT8[HL]
#define FLXA0FRWRDS36HH FLXA0.FRWRDS36.UINT8[HH]
#define FLXA0FRWRDS37 FLXA0.FRWRDS37.UINT32
#define FLXA0FRWRDS37L FLXA0.FRWRDS37.UINT16[L]
#define FLXA0FRWRDS37LL FLXA0.FRWRDS37.UINT8[LL]
#define FLXA0FRWRDS37LH FLXA0.FRWRDS37.UINT8[LH]
#define FLXA0FRWRDS37H FLXA0.FRWRDS37.UINT16[H]
#define FLXA0FRWRDS37HL FLXA0.FRWRDS37.UINT8[HL]
#define FLXA0FRWRDS37HH FLXA0.FRWRDS37.UINT8[HH]
#define FLXA0FRWRDS38 FLXA0.FRWRDS38.UINT32
#define FLXA0FRWRDS38L FLXA0.FRWRDS38.UINT16[L]
#define FLXA0FRWRDS38LL FLXA0.FRWRDS38.UINT8[LL]
#define FLXA0FRWRDS38LH FLXA0.FRWRDS38.UINT8[LH]
#define FLXA0FRWRDS38H FLXA0.FRWRDS38.UINT16[H]
#define FLXA0FRWRDS38HL FLXA0.FRWRDS38.UINT8[HL]
#define FLXA0FRWRDS38HH FLXA0.FRWRDS38.UINT8[HH]
#define FLXA0FRWRDS39 FLXA0.FRWRDS39.UINT32
#define FLXA0FRWRDS39L FLXA0.FRWRDS39.UINT16[L]
#define FLXA0FRWRDS39LL FLXA0.FRWRDS39.UINT8[LL]
#define FLXA0FRWRDS39LH FLXA0.FRWRDS39.UINT8[LH]
#define FLXA0FRWRDS39H FLXA0.FRWRDS39.UINT16[H]
#define FLXA0FRWRDS39HL FLXA0.FRWRDS39.UINT8[HL]
#define FLXA0FRWRDS39HH FLXA0.FRWRDS39.UINT8[HH]
#define FLXA0FRWRDS40 FLXA0.FRWRDS40.UINT32
#define FLXA0FRWRDS40L FLXA0.FRWRDS40.UINT16[L]
#define FLXA0FRWRDS40LL FLXA0.FRWRDS40.UINT8[LL]
#define FLXA0FRWRDS40LH FLXA0.FRWRDS40.UINT8[LH]
#define FLXA0FRWRDS40H FLXA0.FRWRDS40.UINT16[H]
#define FLXA0FRWRDS40HL FLXA0.FRWRDS40.UINT8[HL]
#define FLXA0FRWRDS40HH FLXA0.FRWRDS40.UINT8[HH]
#define FLXA0FRWRDS41 FLXA0.FRWRDS41.UINT32
#define FLXA0FRWRDS41L FLXA0.FRWRDS41.UINT16[L]
#define FLXA0FRWRDS41LL FLXA0.FRWRDS41.UINT8[LL]
#define FLXA0FRWRDS41LH FLXA0.FRWRDS41.UINT8[LH]
#define FLXA0FRWRDS41H FLXA0.FRWRDS41.UINT16[H]
#define FLXA0FRWRDS41HL FLXA0.FRWRDS41.UINT8[HL]
#define FLXA0FRWRDS41HH FLXA0.FRWRDS41.UINT8[HH]
#define FLXA0FRWRDS42 FLXA0.FRWRDS42.UINT32
#define FLXA0FRWRDS42L FLXA0.FRWRDS42.UINT16[L]
#define FLXA0FRWRDS42LL FLXA0.FRWRDS42.UINT8[LL]
#define FLXA0FRWRDS42LH FLXA0.FRWRDS42.UINT8[LH]
#define FLXA0FRWRDS42H FLXA0.FRWRDS42.UINT16[H]
#define FLXA0FRWRDS42HL FLXA0.FRWRDS42.UINT8[HL]
#define FLXA0FRWRDS42HH FLXA0.FRWRDS42.UINT8[HH]
#define FLXA0FRWRDS43 FLXA0.FRWRDS43.UINT32
#define FLXA0FRWRDS43L FLXA0.FRWRDS43.UINT16[L]
#define FLXA0FRWRDS43LL FLXA0.FRWRDS43.UINT8[LL]
#define FLXA0FRWRDS43LH FLXA0.FRWRDS43.UINT8[LH]
#define FLXA0FRWRDS43H FLXA0.FRWRDS43.UINT16[H]
#define FLXA0FRWRDS43HL FLXA0.FRWRDS43.UINT8[HL]
#define FLXA0FRWRDS43HH FLXA0.FRWRDS43.UINT8[HH]
#define FLXA0FRWRDS44 FLXA0.FRWRDS44.UINT32
#define FLXA0FRWRDS44L FLXA0.FRWRDS44.UINT16[L]
#define FLXA0FRWRDS44LL FLXA0.FRWRDS44.UINT8[LL]
#define FLXA0FRWRDS44LH FLXA0.FRWRDS44.UINT8[LH]
#define FLXA0FRWRDS44H FLXA0.FRWRDS44.UINT16[H]
#define FLXA0FRWRDS44HL FLXA0.FRWRDS44.UINT8[HL]
#define FLXA0FRWRDS44HH FLXA0.FRWRDS44.UINT8[HH]
#define FLXA0FRWRDS45 FLXA0.FRWRDS45.UINT32
#define FLXA0FRWRDS45L FLXA0.FRWRDS45.UINT16[L]
#define FLXA0FRWRDS45LL FLXA0.FRWRDS45.UINT8[LL]
#define FLXA0FRWRDS45LH FLXA0.FRWRDS45.UINT8[LH]
#define FLXA0FRWRDS45H FLXA0.FRWRDS45.UINT16[H]
#define FLXA0FRWRDS45HL FLXA0.FRWRDS45.UINT8[HL]
#define FLXA0FRWRDS45HH FLXA0.FRWRDS45.UINT8[HH]
#define FLXA0FRWRDS46 FLXA0.FRWRDS46.UINT32
#define FLXA0FRWRDS46L FLXA0.FRWRDS46.UINT16[L]
#define FLXA0FRWRDS46LL FLXA0.FRWRDS46.UINT8[LL]
#define FLXA0FRWRDS46LH FLXA0.FRWRDS46.UINT8[LH]
#define FLXA0FRWRDS46H FLXA0.FRWRDS46.UINT16[H]
#define FLXA0FRWRDS46HL FLXA0.FRWRDS46.UINT8[HL]
#define FLXA0FRWRDS46HH FLXA0.FRWRDS46.UINT8[HH]
#define FLXA0FRWRDS47 FLXA0.FRWRDS47.UINT32
#define FLXA0FRWRDS47L FLXA0.FRWRDS47.UINT16[L]
#define FLXA0FRWRDS47LL FLXA0.FRWRDS47.UINT8[LL]
#define FLXA0FRWRDS47LH FLXA0.FRWRDS47.UINT8[LH]
#define FLXA0FRWRDS47H FLXA0.FRWRDS47.UINT16[H]
#define FLXA0FRWRDS47HL FLXA0.FRWRDS47.UINT8[HL]
#define FLXA0FRWRDS47HH FLXA0.FRWRDS47.UINT8[HH]
#define FLXA0FRWRDS48 FLXA0.FRWRDS48.UINT32
#define FLXA0FRWRDS48L FLXA0.FRWRDS48.UINT16[L]
#define FLXA0FRWRDS48LL FLXA0.FRWRDS48.UINT8[LL]
#define FLXA0FRWRDS48LH FLXA0.FRWRDS48.UINT8[LH]
#define FLXA0FRWRDS48H FLXA0.FRWRDS48.UINT16[H]
#define FLXA0FRWRDS48HL FLXA0.FRWRDS48.UINT8[HL]
#define FLXA0FRWRDS48HH FLXA0.FRWRDS48.UINT8[HH]
#define FLXA0FRWRDS49 FLXA0.FRWRDS49.UINT32
#define FLXA0FRWRDS49L FLXA0.FRWRDS49.UINT16[L]
#define FLXA0FRWRDS49LL FLXA0.FRWRDS49.UINT8[LL]
#define FLXA0FRWRDS49LH FLXA0.FRWRDS49.UINT8[LH]
#define FLXA0FRWRDS49H FLXA0.FRWRDS49.UINT16[H]
#define FLXA0FRWRDS49HL FLXA0.FRWRDS49.UINT8[HL]
#define FLXA0FRWRDS49HH FLXA0.FRWRDS49.UINT8[HH]
#define FLXA0FRWRDS50 FLXA0.FRWRDS50.UINT32
#define FLXA0FRWRDS50L FLXA0.FRWRDS50.UINT16[L]
#define FLXA0FRWRDS50LL FLXA0.FRWRDS50.UINT8[LL]
#define FLXA0FRWRDS50LH FLXA0.FRWRDS50.UINT8[LH]
#define FLXA0FRWRDS50H FLXA0.FRWRDS50.UINT16[H]
#define FLXA0FRWRDS50HL FLXA0.FRWRDS50.UINT8[HL]
#define FLXA0FRWRDS50HH FLXA0.FRWRDS50.UINT8[HH]
#define FLXA0FRWRDS51 FLXA0.FRWRDS51.UINT32
#define FLXA0FRWRDS51L FLXA0.FRWRDS51.UINT16[L]
#define FLXA0FRWRDS51LL FLXA0.FRWRDS51.UINT8[LL]
#define FLXA0FRWRDS51LH FLXA0.FRWRDS51.UINT8[LH]
#define FLXA0FRWRDS51H FLXA0.FRWRDS51.UINT16[H]
#define FLXA0FRWRDS51HL FLXA0.FRWRDS51.UINT8[HL]
#define FLXA0FRWRDS51HH FLXA0.FRWRDS51.UINT8[HH]
#define FLXA0FRWRDS52 FLXA0.FRWRDS52.UINT32
#define FLXA0FRWRDS52L FLXA0.FRWRDS52.UINT16[L]
#define FLXA0FRWRDS52LL FLXA0.FRWRDS52.UINT8[LL]
#define FLXA0FRWRDS52LH FLXA0.FRWRDS52.UINT8[LH]
#define FLXA0FRWRDS52H FLXA0.FRWRDS52.UINT16[H]
#define FLXA0FRWRDS52HL FLXA0.FRWRDS52.UINT8[HL]
#define FLXA0FRWRDS52HH FLXA0.FRWRDS52.UINT8[HH]
#define FLXA0FRWRDS53 FLXA0.FRWRDS53.UINT32
#define FLXA0FRWRDS53L FLXA0.FRWRDS53.UINT16[L]
#define FLXA0FRWRDS53LL FLXA0.FRWRDS53.UINT8[LL]
#define FLXA0FRWRDS53LH FLXA0.FRWRDS53.UINT8[LH]
#define FLXA0FRWRDS53H FLXA0.FRWRDS53.UINT16[H]
#define FLXA0FRWRDS53HL FLXA0.FRWRDS53.UINT8[HL]
#define FLXA0FRWRDS53HH FLXA0.FRWRDS53.UINT8[HH]
#define FLXA0FRWRDS54 FLXA0.FRWRDS54.UINT32
#define FLXA0FRWRDS54L FLXA0.FRWRDS54.UINT16[L]
#define FLXA0FRWRDS54LL FLXA0.FRWRDS54.UINT8[LL]
#define FLXA0FRWRDS54LH FLXA0.FRWRDS54.UINT8[LH]
#define FLXA0FRWRDS54H FLXA0.FRWRDS54.UINT16[H]
#define FLXA0FRWRDS54HL FLXA0.FRWRDS54.UINT8[HL]
#define FLXA0FRWRDS54HH FLXA0.FRWRDS54.UINT8[HH]
#define FLXA0FRWRDS55 FLXA0.FRWRDS55.UINT32
#define FLXA0FRWRDS55L FLXA0.FRWRDS55.UINT16[L]
#define FLXA0FRWRDS55LL FLXA0.FRWRDS55.UINT8[LL]
#define FLXA0FRWRDS55LH FLXA0.FRWRDS55.UINT8[LH]
#define FLXA0FRWRDS55H FLXA0.FRWRDS55.UINT16[H]
#define FLXA0FRWRDS55HL FLXA0.FRWRDS55.UINT8[HL]
#define FLXA0FRWRDS55HH FLXA0.FRWRDS55.UINT8[HH]
#define FLXA0FRWRDS56 FLXA0.FRWRDS56.UINT32
#define FLXA0FRWRDS56L FLXA0.FRWRDS56.UINT16[L]
#define FLXA0FRWRDS56LL FLXA0.FRWRDS56.UINT8[LL]
#define FLXA0FRWRDS56LH FLXA0.FRWRDS56.UINT8[LH]
#define FLXA0FRWRDS56H FLXA0.FRWRDS56.UINT16[H]
#define FLXA0FRWRDS56HL FLXA0.FRWRDS56.UINT8[HL]
#define FLXA0FRWRDS56HH FLXA0.FRWRDS56.UINT8[HH]
#define FLXA0FRWRDS57 FLXA0.FRWRDS57.UINT32
#define FLXA0FRWRDS57L FLXA0.FRWRDS57.UINT16[L]
#define FLXA0FRWRDS57LL FLXA0.FRWRDS57.UINT8[LL]
#define FLXA0FRWRDS57LH FLXA0.FRWRDS57.UINT8[LH]
#define FLXA0FRWRDS57H FLXA0.FRWRDS57.UINT16[H]
#define FLXA0FRWRDS57HL FLXA0.FRWRDS57.UINT8[HL]
#define FLXA0FRWRDS57HH FLXA0.FRWRDS57.UINT8[HH]
#define FLXA0FRWRDS58 FLXA0.FRWRDS58.UINT32
#define FLXA0FRWRDS58L FLXA0.FRWRDS58.UINT16[L]
#define FLXA0FRWRDS58LL FLXA0.FRWRDS58.UINT8[LL]
#define FLXA0FRWRDS58LH FLXA0.FRWRDS58.UINT8[LH]
#define FLXA0FRWRDS58H FLXA0.FRWRDS58.UINT16[H]
#define FLXA0FRWRDS58HL FLXA0.FRWRDS58.UINT8[HL]
#define FLXA0FRWRDS58HH FLXA0.FRWRDS58.UINT8[HH]
#define FLXA0FRWRDS59 FLXA0.FRWRDS59.UINT32
#define FLXA0FRWRDS59L FLXA0.FRWRDS59.UINT16[L]
#define FLXA0FRWRDS59LL FLXA0.FRWRDS59.UINT8[LL]
#define FLXA0FRWRDS59LH FLXA0.FRWRDS59.UINT8[LH]
#define FLXA0FRWRDS59H FLXA0.FRWRDS59.UINT16[H]
#define FLXA0FRWRDS59HL FLXA0.FRWRDS59.UINT8[HL]
#define FLXA0FRWRDS59HH FLXA0.FRWRDS59.UINT8[HH]
#define FLXA0FRWRDS60 FLXA0.FRWRDS60.UINT32
#define FLXA0FRWRDS60L FLXA0.FRWRDS60.UINT16[L]
#define FLXA0FRWRDS60LL FLXA0.FRWRDS60.UINT8[LL]
#define FLXA0FRWRDS60LH FLXA0.FRWRDS60.UINT8[LH]
#define FLXA0FRWRDS60H FLXA0.FRWRDS60.UINT16[H]
#define FLXA0FRWRDS60HL FLXA0.FRWRDS60.UINT8[HL]
#define FLXA0FRWRDS60HH FLXA0.FRWRDS60.UINT8[HH]
#define FLXA0FRWRDS61 FLXA0.FRWRDS61.UINT32
#define FLXA0FRWRDS61L FLXA0.FRWRDS61.UINT16[L]
#define FLXA0FRWRDS61LL FLXA0.FRWRDS61.UINT8[LL]
#define FLXA0FRWRDS61LH FLXA0.FRWRDS61.UINT8[LH]
#define FLXA0FRWRDS61H FLXA0.FRWRDS61.UINT16[H]
#define FLXA0FRWRDS61HL FLXA0.FRWRDS61.UINT8[HL]
#define FLXA0FRWRDS61HH FLXA0.FRWRDS61.UINT8[HH]
#define FLXA0FRWRDS62 FLXA0.FRWRDS62.UINT32
#define FLXA0FRWRDS62L FLXA0.FRWRDS62.UINT16[L]
#define FLXA0FRWRDS62LL FLXA0.FRWRDS62.UINT8[LL]
#define FLXA0FRWRDS62LH FLXA0.FRWRDS62.UINT8[LH]
#define FLXA0FRWRDS62H FLXA0.FRWRDS62.UINT16[H]
#define FLXA0FRWRDS62HL FLXA0.FRWRDS62.UINT8[HL]
#define FLXA0FRWRDS62HH FLXA0.FRWRDS62.UINT8[HH]
#define FLXA0FRWRDS63 FLXA0.FRWRDS63.UINT32
#define FLXA0FRWRDS63L FLXA0.FRWRDS63.UINT16[L]
#define FLXA0FRWRDS63LL FLXA0.FRWRDS63.UINT8[LL]
#define FLXA0FRWRDS63LH FLXA0.FRWRDS63.UINT8[LH]
#define FLXA0FRWRDS63H FLXA0.FRWRDS63.UINT16[H]
#define FLXA0FRWRDS63HL FLXA0.FRWRDS63.UINT8[HL]
#define FLXA0FRWRDS63HH FLXA0.FRWRDS63.UINT8[HH]
#define FLXA0FRWRDS64 FLXA0.FRWRDS64.UINT32
#define FLXA0FRWRDS64L FLXA0.FRWRDS64.UINT16[L]
#define FLXA0FRWRDS64LL FLXA0.FRWRDS64.UINT8[LL]
#define FLXA0FRWRDS64LH FLXA0.FRWRDS64.UINT8[LH]
#define FLXA0FRWRDS64H FLXA0.FRWRDS64.UINT16[H]
#define FLXA0FRWRDS64HL FLXA0.FRWRDS64.UINT8[HL]
#define FLXA0FRWRDS64HH FLXA0.FRWRDS64.UINT8[HH]
#define FLXA0FRWRHS1 FLXA0.FRWRHS1.UINT32
#define FLXA0FRWRHS1L FLXA0.FRWRHS1.UINT16[L]
#define FLXA0FRWRHS1LL FLXA0.FRWRHS1.UINT8[LL]
#define FLXA0FRWRHS1LH FLXA0.FRWRHS1.UINT8[LH]
#define FLXA0FRWRHS1H FLXA0.FRWRHS1.UINT16[H]
#define FLXA0FRWRHS1HL FLXA0.FRWRHS1.UINT8[HL]
#define FLXA0FRWRHS1HH FLXA0.FRWRHS1.UINT8[HH]
#define FLXA0CYC FLXA0.FRWRHS1.BIT.CYC
#define FLXA0CFG FLXA0.FRWRHS1.BIT.CFG
#define FLXA0PPIT FLXA0.FRWRHS1.BIT.PPIT
#define FLXA0TXM FLXA0.FRWRHS1.BIT.TXM
#define FLXA0MBI FLXA0.FRWRHS1.BIT.MBI
#define FLXA0FRWRHS2 FLXA0.FRWRHS2.UINT32
#define FLXA0FRWRHS2L FLXA0.FRWRHS2.UINT16[L]
#define FLXA0FRWRHS2LL FLXA0.FRWRHS2.UINT8[LL]
#define FLXA0FRWRHS2LH FLXA0.FRWRHS2.UINT8[LH]
#define FLXA0FRWRHS2H FLXA0.FRWRHS2.UINT16[H]
#define FLXA0FRWRHS2HL FLXA0.FRWRHS2.UINT8[HL]
#define FLXA0FRWRHS2HH FLXA0.FRWRHS2.UINT8[HH]
#define FLXA0CRC FLXA0.FRWRHS2.BIT.CRC
#define FLXA0PLC FLXA0.FRWRHS2.BIT.PLC
#define FLXA0FRWRHS3 FLXA0.FRWRHS3.UINT32
#define FLXA0FRWRHS3L FLXA0.FRWRHS3.UINT16[L]
#define FLXA0FRWRHS3LL FLXA0.FRWRHS3.UINT8[LL]
#define FLXA0FRWRHS3LH FLXA0.FRWRHS3.UINT8[LH]
#define FLXA0FRWRHS3H FLXA0.FRWRHS3.UINT16[H]
#define FLXA0FRWRHS3HL FLXA0.FRWRHS3.UINT8[HL]
#define FLXA0FRWRHS3HH FLXA0.FRWRHS3.UINT8[HH]
#define FLXA0DP FLXA0.FRWRHS3.BIT.DP
#define FLXA0FRIBCM FLXA0.FRIBCM.UINT32
#define FLXA0FRIBCML FLXA0.FRIBCM.UINT16[L]
#define FLXA0FRIBCMLL FLXA0.FRIBCM.UINT8[LL]
#define FLXA0FRIBCMLH FLXA0.FRIBCM.UINT8[LH]
#define FLXA0FRIBCMH FLXA0.FRIBCM.UINT16[H]
#define FLXA0FRIBCMHL FLXA0.FRIBCM.UINT8[HL]
#define FLXA0FRIBCMHH FLXA0.FRIBCM.UINT8[HH]
#define FLXA0LHSH FLXA0.FRIBCM.BIT.LHSH
#define FLXA0LDSH FLXA0.FRIBCM.BIT.LDSH
#define FLXA0STXRH FLXA0.FRIBCM.BIT.STXRH
#define FLXA0LHSS FLXA0.FRIBCM.BIT.LHSS
#define FLXA0LDSS FLXA0.FRIBCM.BIT.LDSS
#define FLXA0STXRS FLXA0.FRIBCM.BIT.STXRS
#define FLXA0FRIBCR FLXA0.FRIBCR.UINT32
#define FLXA0FRIBCRL FLXA0.FRIBCR.UINT16[L]
#define FLXA0FRIBCRLL FLXA0.FRIBCR.UINT8[LL]
#define FLXA0FRIBCRLH FLXA0.FRIBCR.UINT8[LH]
#define FLXA0FRIBCRH FLXA0.FRIBCR.UINT16[H]
#define FLXA0FRIBCRHL FLXA0.FRIBCR.UINT8[HL]
#define FLXA0FRIBCRHH FLXA0.FRIBCR.UINT8[HH]
#define FLXA0IBRH FLXA0.FRIBCR.BIT.IBRH
#define FLXA0IBSYH FLXA0.FRIBCR.BIT.IBSYH
#define FLXA0IBRS FLXA0.FRIBCR.BIT.IBRS
#define FLXA0IBSYS FLXA0.FRIBCR.BIT.IBSYS
#define FLXA0FRRDDS1 FLXA0.FRRDDS1.UINT32
#define FLXA0FRRDDS1L FLXA0.FRRDDS1.UINT16[L]
#define FLXA0FRRDDS1LL FLXA0.FRRDDS1.UINT8[LL]
#define FLXA0FRRDDS1LH FLXA0.FRRDDS1.UINT8[LH]
#define FLXA0FRRDDS1H FLXA0.FRRDDS1.UINT16[H]
#define FLXA0FRRDDS1HL FLXA0.FRRDDS1.UINT8[HL]
#define FLXA0FRRDDS1HH FLXA0.FRRDDS1.UINT8[HH]
#define FLXA0FRRDDS2 FLXA0.FRRDDS2.UINT32
#define FLXA0FRRDDS2L FLXA0.FRRDDS2.UINT16[L]
#define FLXA0FRRDDS2LL FLXA0.FRRDDS2.UINT8[LL]
#define FLXA0FRRDDS2LH FLXA0.FRRDDS2.UINT8[LH]
#define FLXA0FRRDDS2H FLXA0.FRRDDS2.UINT16[H]
#define FLXA0FRRDDS2HL FLXA0.FRRDDS2.UINT8[HL]
#define FLXA0FRRDDS2HH FLXA0.FRRDDS2.UINT8[HH]
#define FLXA0FRRDDS3 FLXA0.FRRDDS3.UINT32
#define FLXA0FRRDDS3L FLXA0.FRRDDS3.UINT16[L]
#define FLXA0FRRDDS3LL FLXA0.FRRDDS3.UINT8[LL]
#define FLXA0FRRDDS3LH FLXA0.FRRDDS3.UINT8[LH]
#define FLXA0FRRDDS3H FLXA0.FRRDDS3.UINT16[H]
#define FLXA0FRRDDS3HL FLXA0.FRRDDS3.UINT8[HL]
#define FLXA0FRRDDS3HH FLXA0.FRRDDS3.UINT8[HH]
#define FLXA0FRRDDS4 FLXA0.FRRDDS4.UINT32
#define FLXA0FRRDDS4L FLXA0.FRRDDS4.UINT16[L]
#define FLXA0FRRDDS4LL FLXA0.FRRDDS4.UINT8[LL]
#define FLXA0FRRDDS4LH FLXA0.FRRDDS4.UINT8[LH]
#define FLXA0FRRDDS4H FLXA0.FRRDDS4.UINT16[H]
#define FLXA0FRRDDS4HL FLXA0.FRRDDS4.UINT8[HL]
#define FLXA0FRRDDS4HH FLXA0.FRRDDS4.UINT8[HH]
#define FLXA0FRRDDS5 FLXA0.FRRDDS5.UINT32
#define FLXA0FRRDDS5L FLXA0.FRRDDS5.UINT16[L]
#define FLXA0FRRDDS5LL FLXA0.FRRDDS5.UINT8[LL]
#define FLXA0FRRDDS5LH FLXA0.FRRDDS5.UINT8[LH]
#define FLXA0FRRDDS5H FLXA0.FRRDDS5.UINT16[H]
#define FLXA0FRRDDS5HL FLXA0.FRRDDS5.UINT8[HL]
#define FLXA0FRRDDS5HH FLXA0.FRRDDS5.UINT8[HH]
#define FLXA0FRRDDS6 FLXA0.FRRDDS6.UINT32
#define FLXA0FRRDDS6L FLXA0.FRRDDS6.UINT16[L]
#define FLXA0FRRDDS6LL FLXA0.FRRDDS6.UINT8[LL]
#define FLXA0FRRDDS6LH FLXA0.FRRDDS6.UINT8[LH]
#define FLXA0FRRDDS6H FLXA0.FRRDDS6.UINT16[H]
#define FLXA0FRRDDS6HL FLXA0.FRRDDS6.UINT8[HL]
#define FLXA0FRRDDS6HH FLXA0.FRRDDS6.UINT8[HH]
#define FLXA0FRRDDS7 FLXA0.FRRDDS7.UINT32
#define FLXA0FRRDDS7L FLXA0.FRRDDS7.UINT16[L]
#define FLXA0FRRDDS7LL FLXA0.FRRDDS7.UINT8[LL]
#define FLXA0FRRDDS7LH FLXA0.FRRDDS7.UINT8[LH]
#define FLXA0FRRDDS7H FLXA0.FRRDDS7.UINT16[H]
#define FLXA0FRRDDS7HL FLXA0.FRRDDS7.UINT8[HL]
#define FLXA0FRRDDS7HH FLXA0.FRRDDS7.UINT8[HH]
#define FLXA0FRRDDS8 FLXA0.FRRDDS8.UINT32
#define FLXA0FRRDDS8L FLXA0.FRRDDS8.UINT16[L]
#define FLXA0FRRDDS8LL FLXA0.FRRDDS8.UINT8[LL]
#define FLXA0FRRDDS8LH FLXA0.FRRDDS8.UINT8[LH]
#define FLXA0FRRDDS8H FLXA0.FRRDDS8.UINT16[H]
#define FLXA0FRRDDS8HL FLXA0.FRRDDS8.UINT8[HL]
#define FLXA0FRRDDS8HH FLXA0.FRRDDS8.UINT8[HH]
#define FLXA0FRRDDS9 FLXA0.FRRDDS9.UINT32
#define FLXA0FRRDDS9L FLXA0.FRRDDS9.UINT16[L]
#define FLXA0FRRDDS9LL FLXA0.FRRDDS9.UINT8[LL]
#define FLXA0FRRDDS9LH FLXA0.FRRDDS9.UINT8[LH]
#define FLXA0FRRDDS9H FLXA0.FRRDDS9.UINT16[H]
#define FLXA0FRRDDS9HL FLXA0.FRRDDS9.UINT8[HL]
#define FLXA0FRRDDS9HH FLXA0.FRRDDS9.UINT8[HH]
#define FLXA0FRRDDS10 FLXA0.FRRDDS10.UINT32
#define FLXA0FRRDDS10L FLXA0.FRRDDS10.UINT16[L]
#define FLXA0FRRDDS10LL FLXA0.FRRDDS10.UINT8[LL]
#define FLXA0FRRDDS10LH FLXA0.FRRDDS10.UINT8[LH]
#define FLXA0FRRDDS10H FLXA0.FRRDDS10.UINT16[H]
#define FLXA0FRRDDS10HL FLXA0.FRRDDS10.UINT8[HL]
#define FLXA0FRRDDS10HH FLXA0.FRRDDS10.UINT8[HH]
#define FLXA0FRRDDS11 FLXA0.FRRDDS11.UINT32
#define FLXA0FRRDDS11L FLXA0.FRRDDS11.UINT16[L]
#define FLXA0FRRDDS11LL FLXA0.FRRDDS11.UINT8[LL]
#define FLXA0FRRDDS11LH FLXA0.FRRDDS11.UINT8[LH]
#define FLXA0FRRDDS11H FLXA0.FRRDDS11.UINT16[H]
#define FLXA0FRRDDS11HL FLXA0.FRRDDS11.UINT8[HL]
#define FLXA0FRRDDS11HH FLXA0.FRRDDS11.UINT8[HH]
#define FLXA0FRRDDS12 FLXA0.FRRDDS12.UINT32
#define FLXA0FRRDDS12L FLXA0.FRRDDS12.UINT16[L]
#define FLXA0FRRDDS12LL FLXA0.FRRDDS12.UINT8[LL]
#define FLXA0FRRDDS12LH FLXA0.FRRDDS12.UINT8[LH]
#define FLXA0FRRDDS12H FLXA0.FRRDDS12.UINT16[H]
#define FLXA0FRRDDS12HL FLXA0.FRRDDS12.UINT8[HL]
#define FLXA0FRRDDS12HH FLXA0.FRRDDS12.UINT8[HH]
#define FLXA0FRRDDS13 FLXA0.FRRDDS13.UINT32
#define FLXA0FRRDDS13L FLXA0.FRRDDS13.UINT16[L]
#define FLXA0FRRDDS13LL FLXA0.FRRDDS13.UINT8[LL]
#define FLXA0FRRDDS13LH FLXA0.FRRDDS13.UINT8[LH]
#define FLXA0FRRDDS13H FLXA0.FRRDDS13.UINT16[H]
#define FLXA0FRRDDS13HL FLXA0.FRRDDS13.UINT8[HL]
#define FLXA0FRRDDS13HH FLXA0.FRRDDS13.UINT8[HH]
#define FLXA0FRRDDS14 FLXA0.FRRDDS14.UINT32
#define FLXA0FRRDDS14L FLXA0.FRRDDS14.UINT16[L]
#define FLXA0FRRDDS14LL FLXA0.FRRDDS14.UINT8[LL]
#define FLXA0FRRDDS14LH FLXA0.FRRDDS14.UINT8[LH]
#define FLXA0FRRDDS14H FLXA0.FRRDDS14.UINT16[H]
#define FLXA0FRRDDS14HL FLXA0.FRRDDS14.UINT8[HL]
#define FLXA0FRRDDS14HH FLXA0.FRRDDS14.UINT8[HH]
#define FLXA0FRRDDS15 FLXA0.FRRDDS15.UINT32
#define FLXA0FRRDDS15L FLXA0.FRRDDS15.UINT16[L]
#define FLXA0FRRDDS15LL FLXA0.FRRDDS15.UINT8[LL]
#define FLXA0FRRDDS15LH FLXA0.FRRDDS15.UINT8[LH]
#define FLXA0FRRDDS15H FLXA0.FRRDDS15.UINT16[H]
#define FLXA0FRRDDS15HL FLXA0.FRRDDS15.UINT8[HL]
#define FLXA0FRRDDS15HH FLXA0.FRRDDS15.UINT8[HH]
#define FLXA0FRRDDS16 FLXA0.FRRDDS16.UINT32
#define FLXA0FRRDDS16L FLXA0.FRRDDS16.UINT16[L]
#define FLXA0FRRDDS16LL FLXA0.FRRDDS16.UINT8[LL]
#define FLXA0FRRDDS16LH FLXA0.FRRDDS16.UINT8[LH]
#define FLXA0FRRDDS16H FLXA0.FRRDDS16.UINT16[H]
#define FLXA0FRRDDS16HL FLXA0.FRRDDS16.UINT8[HL]
#define FLXA0FRRDDS16HH FLXA0.FRRDDS16.UINT8[HH]
#define FLXA0FRRDDS17 FLXA0.FRRDDS17.UINT32
#define FLXA0FRRDDS17L FLXA0.FRRDDS17.UINT16[L]
#define FLXA0FRRDDS17LL FLXA0.FRRDDS17.UINT8[LL]
#define FLXA0FRRDDS17LH FLXA0.FRRDDS17.UINT8[LH]
#define FLXA0FRRDDS17H FLXA0.FRRDDS17.UINT16[H]
#define FLXA0FRRDDS17HL FLXA0.FRRDDS17.UINT8[HL]
#define FLXA0FRRDDS17HH FLXA0.FRRDDS17.UINT8[HH]
#define FLXA0FRRDDS18 FLXA0.FRRDDS18.UINT32
#define FLXA0FRRDDS18L FLXA0.FRRDDS18.UINT16[L]
#define FLXA0FRRDDS18LL FLXA0.FRRDDS18.UINT8[LL]
#define FLXA0FRRDDS18LH FLXA0.FRRDDS18.UINT8[LH]
#define FLXA0FRRDDS18H FLXA0.FRRDDS18.UINT16[H]
#define FLXA0FRRDDS18HL FLXA0.FRRDDS18.UINT8[HL]
#define FLXA0FRRDDS18HH FLXA0.FRRDDS18.UINT8[HH]
#define FLXA0FRRDDS19 FLXA0.FRRDDS19.UINT32
#define FLXA0FRRDDS19L FLXA0.FRRDDS19.UINT16[L]
#define FLXA0FRRDDS19LL FLXA0.FRRDDS19.UINT8[LL]
#define FLXA0FRRDDS19LH FLXA0.FRRDDS19.UINT8[LH]
#define FLXA0FRRDDS19H FLXA0.FRRDDS19.UINT16[H]
#define FLXA0FRRDDS19HL FLXA0.FRRDDS19.UINT8[HL]
#define FLXA0FRRDDS19HH FLXA0.FRRDDS19.UINT8[HH]
#define FLXA0FRRDDS20 FLXA0.FRRDDS20.UINT32
#define FLXA0FRRDDS20L FLXA0.FRRDDS20.UINT16[L]
#define FLXA0FRRDDS20LL FLXA0.FRRDDS20.UINT8[LL]
#define FLXA0FRRDDS20LH FLXA0.FRRDDS20.UINT8[LH]
#define FLXA0FRRDDS20H FLXA0.FRRDDS20.UINT16[H]
#define FLXA0FRRDDS20HL FLXA0.FRRDDS20.UINT8[HL]
#define FLXA0FRRDDS20HH FLXA0.FRRDDS20.UINT8[HH]
#define FLXA0FRRDDS21 FLXA0.FRRDDS21.UINT32
#define FLXA0FRRDDS21L FLXA0.FRRDDS21.UINT16[L]
#define FLXA0FRRDDS21LL FLXA0.FRRDDS21.UINT8[LL]
#define FLXA0FRRDDS21LH FLXA0.FRRDDS21.UINT8[LH]
#define FLXA0FRRDDS21H FLXA0.FRRDDS21.UINT16[H]
#define FLXA0FRRDDS21HL FLXA0.FRRDDS21.UINT8[HL]
#define FLXA0FRRDDS21HH FLXA0.FRRDDS21.UINT8[HH]
#define FLXA0FRRDDS22 FLXA0.FRRDDS22.UINT32
#define FLXA0FRRDDS22L FLXA0.FRRDDS22.UINT16[L]
#define FLXA0FRRDDS22LL FLXA0.FRRDDS22.UINT8[LL]
#define FLXA0FRRDDS22LH FLXA0.FRRDDS22.UINT8[LH]
#define FLXA0FRRDDS22H FLXA0.FRRDDS22.UINT16[H]
#define FLXA0FRRDDS22HL FLXA0.FRRDDS22.UINT8[HL]
#define FLXA0FRRDDS22HH FLXA0.FRRDDS22.UINT8[HH]
#define FLXA0FRRDDS23 FLXA0.FRRDDS23.UINT32
#define FLXA0FRRDDS23L FLXA0.FRRDDS23.UINT16[L]
#define FLXA0FRRDDS23LL FLXA0.FRRDDS23.UINT8[LL]
#define FLXA0FRRDDS23LH FLXA0.FRRDDS23.UINT8[LH]
#define FLXA0FRRDDS23H FLXA0.FRRDDS23.UINT16[H]
#define FLXA0FRRDDS23HL FLXA0.FRRDDS23.UINT8[HL]
#define FLXA0FRRDDS23HH FLXA0.FRRDDS23.UINT8[HH]
#define FLXA0FRRDDS24 FLXA0.FRRDDS24.UINT32
#define FLXA0FRRDDS24L FLXA0.FRRDDS24.UINT16[L]
#define FLXA0FRRDDS24LL FLXA0.FRRDDS24.UINT8[LL]
#define FLXA0FRRDDS24LH FLXA0.FRRDDS24.UINT8[LH]
#define FLXA0FRRDDS24H FLXA0.FRRDDS24.UINT16[H]
#define FLXA0FRRDDS24HL FLXA0.FRRDDS24.UINT8[HL]
#define FLXA0FRRDDS24HH FLXA0.FRRDDS24.UINT8[HH]
#define FLXA0FRRDDS25 FLXA0.FRRDDS25.UINT32
#define FLXA0FRRDDS25L FLXA0.FRRDDS25.UINT16[L]
#define FLXA0FRRDDS25LL FLXA0.FRRDDS25.UINT8[LL]
#define FLXA0FRRDDS25LH FLXA0.FRRDDS25.UINT8[LH]
#define FLXA0FRRDDS25H FLXA0.FRRDDS25.UINT16[H]
#define FLXA0FRRDDS25HL FLXA0.FRRDDS25.UINT8[HL]
#define FLXA0FRRDDS25HH FLXA0.FRRDDS25.UINT8[HH]
#define FLXA0FRRDDS26 FLXA0.FRRDDS26.UINT32
#define FLXA0FRRDDS26L FLXA0.FRRDDS26.UINT16[L]
#define FLXA0FRRDDS26LL FLXA0.FRRDDS26.UINT8[LL]
#define FLXA0FRRDDS26LH FLXA0.FRRDDS26.UINT8[LH]
#define FLXA0FRRDDS26H FLXA0.FRRDDS26.UINT16[H]
#define FLXA0FRRDDS26HL FLXA0.FRRDDS26.UINT8[HL]
#define FLXA0FRRDDS26HH FLXA0.FRRDDS26.UINT8[HH]
#define FLXA0FRRDDS27 FLXA0.FRRDDS27.UINT32
#define FLXA0FRRDDS27L FLXA0.FRRDDS27.UINT16[L]
#define FLXA0FRRDDS27LL FLXA0.FRRDDS27.UINT8[LL]
#define FLXA0FRRDDS27LH FLXA0.FRRDDS27.UINT8[LH]
#define FLXA0FRRDDS27H FLXA0.FRRDDS27.UINT16[H]
#define FLXA0FRRDDS27HL FLXA0.FRRDDS27.UINT8[HL]
#define FLXA0FRRDDS27HH FLXA0.FRRDDS27.UINT8[HH]
#define FLXA0FRRDDS28 FLXA0.FRRDDS28.UINT32
#define FLXA0FRRDDS28L FLXA0.FRRDDS28.UINT16[L]
#define FLXA0FRRDDS28LL FLXA0.FRRDDS28.UINT8[LL]
#define FLXA0FRRDDS28LH FLXA0.FRRDDS28.UINT8[LH]
#define FLXA0FRRDDS28H FLXA0.FRRDDS28.UINT16[H]
#define FLXA0FRRDDS28HL FLXA0.FRRDDS28.UINT8[HL]
#define FLXA0FRRDDS28HH FLXA0.FRRDDS28.UINT8[HH]
#define FLXA0FRRDDS29 FLXA0.FRRDDS29.UINT32
#define FLXA0FRRDDS29L FLXA0.FRRDDS29.UINT16[L]
#define FLXA0FRRDDS29LL FLXA0.FRRDDS29.UINT8[LL]
#define FLXA0FRRDDS29LH FLXA0.FRRDDS29.UINT8[LH]
#define FLXA0FRRDDS29H FLXA0.FRRDDS29.UINT16[H]
#define FLXA0FRRDDS29HL FLXA0.FRRDDS29.UINT8[HL]
#define FLXA0FRRDDS29HH FLXA0.FRRDDS29.UINT8[HH]
#define FLXA0FRRDDS30 FLXA0.FRRDDS30.UINT32
#define FLXA0FRRDDS30L FLXA0.FRRDDS30.UINT16[L]
#define FLXA0FRRDDS30LL FLXA0.FRRDDS30.UINT8[LL]
#define FLXA0FRRDDS30LH FLXA0.FRRDDS30.UINT8[LH]
#define FLXA0FRRDDS30H FLXA0.FRRDDS30.UINT16[H]
#define FLXA0FRRDDS30HL FLXA0.FRRDDS30.UINT8[HL]
#define FLXA0FRRDDS30HH FLXA0.FRRDDS30.UINT8[HH]
#define FLXA0FRRDDS31 FLXA0.FRRDDS31.UINT32
#define FLXA0FRRDDS31L FLXA0.FRRDDS31.UINT16[L]
#define FLXA0FRRDDS31LL FLXA0.FRRDDS31.UINT8[LL]
#define FLXA0FRRDDS31LH FLXA0.FRRDDS31.UINT8[LH]
#define FLXA0FRRDDS31H FLXA0.FRRDDS31.UINT16[H]
#define FLXA0FRRDDS31HL FLXA0.FRRDDS31.UINT8[HL]
#define FLXA0FRRDDS31HH FLXA0.FRRDDS31.UINT8[HH]
#define FLXA0FRRDDS32 FLXA0.FRRDDS32.UINT32
#define FLXA0FRRDDS32L FLXA0.FRRDDS32.UINT16[L]
#define FLXA0FRRDDS32LL FLXA0.FRRDDS32.UINT8[LL]
#define FLXA0FRRDDS32LH FLXA0.FRRDDS32.UINT8[LH]
#define FLXA0FRRDDS32H FLXA0.FRRDDS32.UINT16[H]
#define FLXA0FRRDDS32HL FLXA0.FRRDDS32.UINT8[HL]
#define FLXA0FRRDDS32HH FLXA0.FRRDDS32.UINT8[HH]
#define FLXA0FRRDDS33 FLXA0.FRRDDS33.UINT32
#define FLXA0FRRDDS33L FLXA0.FRRDDS33.UINT16[L]
#define FLXA0FRRDDS33LL FLXA0.FRRDDS33.UINT8[LL]
#define FLXA0FRRDDS33LH FLXA0.FRRDDS33.UINT8[LH]
#define FLXA0FRRDDS33H FLXA0.FRRDDS33.UINT16[H]
#define FLXA0FRRDDS33HL FLXA0.FRRDDS33.UINT8[HL]
#define FLXA0FRRDDS33HH FLXA0.FRRDDS33.UINT8[HH]
#define FLXA0FRRDDS34 FLXA0.FRRDDS34.UINT32
#define FLXA0FRRDDS34L FLXA0.FRRDDS34.UINT16[L]
#define FLXA0FRRDDS34LL FLXA0.FRRDDS34.UINT8[LL]
#define FLXA0FRRDDS34LH FLXA0.FRRDDS34.UINT8[LH]
#define FLXA0FRRDDS34H FLXA0.FRRDDS34.UINT16[H]
#define FLXA0FRRDDS34HL FLXA0.FRRDDS34.UINT8[HL]
#define FLXA0FRRDDS34HH FLXA0.FRRDDS34.UINT8[HH]
#define FLXA0FRRDDS35 FLXA0.FRRDDS35.UINT32
#define FLXA0FRRDDS35L FLXA0.FRRDDS35.UINT16[L]
#define FLXA0FRRDDS35LL FLXA0.FRRDDS35.UINT8[LL]
#define FLXA0FRRDDS35LH FLXA0.FRRDDS35.UINT8[LH]
#define FLXA0FRRDDS35H FLXA0.FRRDDS35.UINT16[H]
#define FLXA0FRRDDS35HL FLXA0.FRRDDS35.UINT8[HL]
#define FLXA0FRRDDS35HH FLXA0.FRRDDS35.UINT8[HH]
#define FLXA0FRRDDS36 FLXA0.FRRDDS36.UINT32
#define FLXA0FRRDDS36L FLXA0.FRRDDS36.UINT16[L]
#define FLXA0FRRDDS36LL FLXA0.FRRDDS36.UINT8[LL]
#define FLXA0FRRDDS36LH FLXA0.FRRDDS36.UINT8[LH]
#define FLXA0FRRDDS36H FLXA0.FRRDDS36.UINT16[H]
#define FLXA0FRRDDS36HL FLXA0.FRRDDS36.UINT8[HL]
#define FLXA0FRRDDS36HH FLXA0.FRRDDS36.UINT8[HH]
#define FLXA0FRRDDS37 FLXA0.FRRDDS37.UINT32
#define FLXA0FRRDDS37L FLXA0.FRRDDS37.UINT16[L]
#define FLXA0FRRDDS37LL FLXA0.FRRDDS37.UINT8[LL]
#define FLXA0FRRDDS37LH FLXA0.FRRDDS37.UINT8[LH]
#define FLXA0FRRDDS37H FLXA0.FRRDDS37.UINT16[H]
#define FLXA0FRRDDS37HL FLXA0.FRRDDS37.UINT8[HL]
#define FLXA0FRRDDS37HH FLXA0.FRRDDS37.UINT8[HH]
#define FLXA0FRRDDS38 FLXA0.FRRDDS38.UINT32
#define FLXA0FRRDDS38L FLXA0.FRRDDS38.UINT16[L]
#define FLXA0FRRDDS38LL FLXA0.FRRDDS38.UINT8[LL]
#define FLXA0FRRDDS38LH FLXA0.FRRDDS38.UINT8[LH]
#define FLXA0FRRDDS38H FLXA0.FRRDDS38.UINT16[H]
#define FLXA0FRRDDS38HL FLXA0.FRRDDS38.UINT8[HL]
#define FLXA0FRRDDS38HH FLXA0.FRRDDS38.UINT8[HH]
#define FLXA0FRRDDS39 FLXA0.FRRDDS39.UINT32
#define FLXA0FRRDDS39L FLXA0.FRRDDS39.UINT16[L]
#define FLXA0FRRDDS39LL FLXA0.FRRDDS39.UINT8[LL]
#define FLXA0FRRDDS39LH FLXA0.FRRDDS39.UINT8[LH]
#define FLXA0FRRDDS39H FLXA0.FRRDDS39.UINT16[H]
#define FLXA0FRRDDS39HL FLXA0.FRRDDS39.UINT8[HL]
#define FLXA0FRRDDS39HH FLXA0.FRRDDS39.UINT8[HH]
#define FLXA0FRRDDS40 FLXA0.FRRDDS40.UINT32
#define FLXA0FRRDDS40L FLXA0.FRRDDS40.UINT16[L]
#define FLXA0FRRDDS40LL FLXA0.FRRDDS40.UINT8[LL]
#define FLXA0FRRDDS40LH FLXA0.FRRDDS40.UINT8[LH]
#define FLXA0FRRDDS40H FLXA0.FRRDDS40.UINT16[H]
#define FLXA0FRRDDS40HL FLXA0.FRRDDS40.UINT8[HL]
#define FLXA0FRRDDS40HH FLXA0.FRRDDS40.UINT8[HH]
#define FLXA0FRRDDS41 FLXA0.FRRDDS41.UINT32
#define FLXA0FRRDDS41L FLXA0.FRRDDS41.UINT16[L]
#define FLXA0FRRDDS41LL FLXA0.FRRDDS41.UINT8[LL]
#define FLXA0FRRDDS41LH FLXA0.FRRDDS41.UINT8[LH]
#define FLXA0FRRDDS41H FLXA0.FRRDDS41.UINT16[H]
#define FLXA0FRRDDS41HL FLXA0.FRRDDS41.UINT8[HL]
#define FLXA0FRRDDS41HH FLXA0.FRRDDS41.UINT8[HH]
#define FLXA0FRRDDS42 FLXA0.FRRDDS42.UINT32
#define FLXA0FRRDDS42L FLXA0.FRRDDS42.UINT16[L]
#define FLXA0FRRDDS42LL FLXA0.FRRDDS42.UINT8[LL]
#define FLXA0FRRDDS42LH FLXA0.FRRDDS42.UINT8[LH]
#define FLXA0FRRDDS42H FLXA0.FRRDDS42.UINT16[H]
#define FLXA0FRRDDS42HL FLXA0.FRRDDS42.UINT8[HL]
#define FLXA0FRRDDS42HH FLXA0.FRRDDS42.UINT8[HH]
#define FLXA0FRRDDS43 FLXA0.FRRDDS43.UINT32
#define FLXA0FRRDDS43L FLXA0.FRRDDS43.UINT16[L]
#define FLXA0FRRDDS43LL FLXA0.FRRDDS43.UINT8[LL]
#define FLXA0FRRDDS43LH FLXA0.FRRDDS43.UINT8[LH]
#define FLXA0FRRDDS43H FLXA0.FRRDDS43.UINT16[H]
#define FLXA0FRRDDS43HL FLXA0.FRRDDS43.UINT8[HL]
#define FLXA0FRRDDS43HH FLXA0.FRRDDS43.UINT8[HH]
#define FLXA0FRRDDS44 FLXA0.FRRDDS44.UINT32
#define FLXA0FRRDDS44L FLXA0.FRRDDS44.UINT16[L]
#define FLXA0FRRDDS44LL FLXA0.FRRDDS44.UINT8[LL]
#define FLXA0FRRDDS44LH FLXA0.FRRDDS44.UINT8[LH]
#define FLXA0FRRDDS44H FLXA0.FRRDDS44.UINT16[H]
#define FLXA0FRRDDS44HL FLXA0.FRRDDS44.UINT8[HL]
#define FLXA0FRRDDS44HH FLXA0.FRRDDS44.UINT8[HH]
#define FLXA0FRRDDS45 FLXA0.FRRDDS45.UINT32
#define FLXA0FRRDDS45L FLXA0.FRRDDS45.UINT16[L]
#define FLXA0FRRDDS45LL FLXA0.FRRDDS45.UINT8[LL]
#define FLXA0FRRDDS45LH FLXA0.FRRDDS45.UINT8[LH]
#define FLXA0FRRDDS45H FLXA0.FRRDDS45.UINT16[H]
#define FLXA0FRRDDS45HL FLXA0.FRRDDS45.UINT8[HL]
#define FLXA0FRRDDS45HH FLXA0.FRRDDS45.UINT8[HH]
#define FLXA0FRRDDS46 FLXA0.FRRDDS46.UINT32
#define FLXA0FRRDDS46L FLXA0.FRRDDS46.UINT16[L]
#define FLXA0FRRDDS46LL FLXA0.FRRDDS46.UINT8[LL]
#define FLXA0FRRDDS46LH FLXA0.FRRDDS46.UINT8[LH]
#define FLXA0FRRDDS46H FLXA0.FRRDDS46.UINT16[H]
#define FLXA0FRRDDS46HL FLXA0.FRRDDS46.UINT8[HL]
#define FLXA0FRRDDS46HH FLXA0.FRRDDS46.UINT8[HH]
#define FLXA0FRRDDS47 FLXA0.FRRDDS47.UINT32
#define FLXA0FRRDDS47L FLXA0.FRRDDS47.UINT16[L]
#define FLXA0FRRDDS47LL FLXA0.FRRDDS47.UINT8[LL]
#define FLXA0FRRDDS47LH FLXA0.FRRDDS47.UINT8[LH]
#define FLXA0FRRDDS47H FLXA0.FRRDDS47.UINT16[H]
#define FLXA0FRRDDS47HL FLXA0.FRRDDS47.UINT8[HL]
#define FLXA0FRRDDS47HH FLXA0.FRRDDS47.UINT8[HH]
#define FLXA0FRRDDS48 FLXA0.FRRDDS48.UINT32
#define FLXA0FRRDDS48L FLXA0.FRRDDS48.UINT16[L]
#define FLXA0FRRDDS48LL FLXA0.FRRDDS48.UINT8[LL]
#define FLXA0FRRDDS48LH FLXA0.FRRDDS48.UINT8[LH]
#define FLXA0FRRDDS48H FLXA0.FRRDDS48.UINT16[H]
#define FLXA0FRRDDS48HL FLXA0.FRRDDS48.UINT8[HL]
#define FLXA0FRRDDS48HH FLXA0.FRRDDS48.UINT8[HH]
#define FLXA0FRRDDS49 FLXA0.FRRDDS49.UINT32
#define FLXA0FRRDDS49L FLXA0.FRRDDS49.UINT16[L]
#define FLXA0FRRDDS49LL FLXA0.FRRDDS49.UINT8[LL]
#define FLXA0FRRDDS49LH FLXA0.FRRDDS49.UINT8[LH]
#define FLXA0FRRDDS49H FLXA0.FRRDDS49.UINT16[H]
#define FLXA0FRRDDS49HL FLXA0.FRRDDS49.UINT8[HL]
#define FLXA0FRRDDS49HH FLXA0.FRRDDS49.UINT8[HH]
#define FLXA0FRRDDS50 FLXA0.FRRDDS50.UINT32
#define FLXA0FRRDDS50L FLXA0.FRRDDS50.UINT16[L]
#define FLXA0FRRDDS50LL FLXA0.FRRDDS50.UINT8[LL]
#define FLXA0FRRDDS50LH FLXA0.FRRDDS50.UINT8[LH]
#define FLXA0FRRDDS50H FLXA0.FRRDDS50.UINT16[H]
#define FLXA0FRRDDS50HL FLXA0.FRRDDS50.UINT8[HL]
#define FLXA0FRRDDS50HH FLXA0.FRRDDS50.UINT8[HH]
#define FLXA0FRRDDS51 FLXA0.FRRDDS51.UINT32
#define FLXA0FRRDDS51L FLXA0.FRRDDS51.UINT16[L]
#define FLXA0FRRDDS51LL FLXA0.FRRDDS51.UINT8[LL]
#define FLXA0FRRDDS51LH FLXA0.FRRDDS51.UINT8[LH]
#define FLXA0FRRDDS51H FLXA0.FRRDDS51.UINT16[H]
#define FLXA0FRRDDS51HL FLXA0.FRRDDS51.UINT8[HL]
#define FLXA0FRRDDS51HH FLXA0.FRRDDS51.UINT8[HH]
#define FLXA0FRRDDS52 FLXA0.FRRDDS52.UINT32
#define FLXA0FRRDDS52L FLXA0.FRRDDS52.UINT16[L]
#define FLXA0FRRDDS52LL FLXA0.FRRDDS52.UINT8[LL]
#define FLXA0FRRDDS52LH FLXA0.FRRDDS52.UINT8[LH]
#define FLXA0FRRDDS52H FLXA0.FRRDDS52.UINT16[H]
#define FLXA0FRRDDS52HL FLXA0.FRRDDS52.UINT8[HL]
#define FLXA0FRRDDS52HH FLXA0.FRRDDS52.UINT8[HH]
#define FLXA0FRRDDS53 FLXA0.FRRDDS53.UINT32
#define FLXA0FRRDDS53L FLXA0.FRRDDS53.UINT16[L]
#define FLXA0FRRDDS53LL FLXA0.FRRDDS53.UINT8[LL]
#define FLXA0FRRDDS53LH FLXA0.FRRDDS53.UINT8[LH]
#define FLXA0FRRDDS53H FLXA0.FRRDDS53.UINT16[H]
#define FLXA0FRRDDS53HL FLXA0.FRRDDS53.UINT8[HL]
#define FLXA0FRRDDS53HH FLXA0.FRRDDS53.UINT8[HH]
#define FLXA0FRRDDS54 FLXA0.FRRDDS54.UINT32
#define FLXA0FRRDDS54L FLXA0.FRRDDS54.UINT16[L]
#define FLXA0FRRDDS54LL FLXA0.FRRDDS54.UINT8[LL]
#define FLXA0FRRDDS54LH FLXA0.FRRDDS54.UINT8[LH]
#define FLXA0FRRDDS54H FLXA0.FRRDDS54.UINT16[H]
#define FLXA0FRRDDS54HL FLXA0.FRRDDS54.UINT8[HL]
#define FLXA0FRRDDS54HH FLXA0.FRRDDS54.UINT8[HH]
#define FLXA0FRRDDS55 FLXA0.FRRDDS55.UINT32
#define FLXA0FRRDDS55L FLXA0.FRRDDS55.UINT16[L]
#define FLXA0FRRDDS55LL FLXA0.FRRDDS55.UINT8[LL]
#define FLXA0FRRDDS55LH FLXA0.FRRDDS55.UINT8[LH]
#define FLXA0FRRDDS55H FLXA0.FRRDDS55.UINT16[H]
#define FLXA0FRRDDS55HL FLXA0.FRRDDS55.UINT8[HL]
#define FLXA0FRRDDS55HH FLXA0.FRRDDS55.UINT8[HH]
#define FLXA0FRRDDS56 FLXA0.FRRDDS56.UINT32
#define FLXA0FRRDDS56L FLXA0.FRRDDS56.UINT16[L]
#define FLXA0FRRDDS56LL FLXA0.FRRDDS56.UINT8[LL]
#define FLXA0FRRDDS56LH FLXA0.FRRDDS56.UINT8[LH]
#define FLXA0FRRDDS56H FLXA0.FRRDDS56.UINT16[H]
#define FLXA0FRRDDS56HL FLXA0.FRRDDS56.UINT8[HL]
#define FLXA0FRRDDS56HH FLXA0.FRRDDS56.UINT8[HH]
#define FLXA0FRRDDS57 FLXA0.FRRDDS57.UINT32
#define FLXA0FRRDDS57L FLXA0.FRRDDS57.UINT16[L]
#define FLXA0FRRDDS57LL FLXA0.FRRDDS57.UINT8[LL]
#define FLXA0FRRDDS57LH FLXA0.FRRDDS57.UINT8[LH]
#define FLXA0FRRDDS57H FLXA0.FRRDDS57.UINT16[H]
#define FLXA0FRRDDS57HL FLXA0.FRRDDS57.UINT8[HL]
#define FLXA0FRRDDS57HH FLXA0.FRRDDS57.UINT8[HH]
#define FLXA0FRRDDS58 FLXA0.FRRDDS58.UINT32
#define FLXA0FRRDDS58L FLXA0.FRRDDS58.UINT16[L]
#define FLXA0FRRDDS58LL FLXA0.FRRDDS58.UINT8[LL]
#define FLXA0FRRDDS58LH FLXA0.FRRDDS58.UINT8[LH]
#define FLXA0FRRDDS58H FLXA0.FRRDDS58.UINT16[H]
#define FLXA0FRRDDS58HL FLXA0.FRRDDS58.UINT8[HL]
#define FLXA0FRRDDS58HH FLXA0.FRRDDS58.UINT8[HH]
#define FLXA0FRRDDS59 FLXA0.FRRDDS59.UINT32
#define FLXA0FRRDDS59L FLXA0.FRRDDS59.UINT16[L]
#define FLXA0FRRDDS59LL FLXA0.FRRDDS59.UINT8[LL]
#define FLXA0FRRDDS59LH FLXA0.FRRDDS59.UINT8[LH]
#define FLXA0FRRDDS59H FLXA0.FRRDDS59.UINT16[H]
#define FLXA0FRRDDS59HL FLXA0.FRRDDS59.UINT8[HL]
#define FLXA0FRRDDS59HH FLXA0.FRRDDS59.UINT8[HH]
#define FLXA0FRRDDS60 FLXA0.FRRDDS60.UINT32
#define FLXA0FRRDDS60L FLXA0.FRRDDS60.UINT16[L]
#define FLXA0FRRDDS60LL FLXA0.FRRDDS60.UINT8[LL]
#define FLXA0FRRDDS60LH FLXA0.FRRDDS60.UINT8[LH]
#define FLXA0FRRDDS60H FLXA0.FRRDDS60.UINT16[H]
#define FLXA0FRRDDS60HL FLXA0.FRRDDS60.UINT8[HL]
#define FLXA0FRRDDS60HH FLXA0.FRRDDS60.UINT8[HH]
#define FLXA0FRRDDS61 FLXA0.FRRDDS61.UINT32
#define FLXA0FRRDDS61L FLXA0.FRRDDS61.UINT16[L]
#define FLXA0FRRDDS61LL FLXA0.FRRDDS61.UINT8[LL]
#define FLXA0FRRDDS61LH FLXA0.FRRDDS61.UINT8[LH]
#define FLXA0FRRDDS61H FLXA0.FRRDDS61.UINT16[H]
#define FLXA0FRRDDS61HL FLXA0.FRRDDS61.UINT8[HL]
#define FLXA0FRRDDS61HH FLXA0.FRRDDS61.UINT8[HH]
#define FLXA0FRRDDS62 FLXA0.FRRDDS62.UINT32
#define FLXA0FRRDDS62L FLXA0.FRRDDS62.UINT16[L]
#define FLXA0FRRDDS62LL FLXA0.FRRDDS62.UINT8[LL]
#define FLXA0FRRDDS62LH FLXA0.FRRDDS62.UINT8[LH]
#define FLXA0FRRDDS62H FLXA0.FRRDDS62.UINT16[H]
#define FLXA0FRRDDS62HL FLXA0.FRRDDS62.UINT8[HL]
#define FLXA0FRRDDS62HH FLXA0.FRRDDS62.UINT8[HH]
#define FLXA0FRRDDS63 FLXA0.FRRDDS63.UINT32
#define FLXA0FRRDDS63L FLXA0.FRRDDS63.UINT16[L]
#define FLXA0FRRDDS63LL FLXA0.FRRDDS63.UINT8[LL]
#define FLXA0FRRDDS63LH FLXA0.FRRDDS63.UINT8[LH]
#define FLXA0FRRDDS63H FLXA0.FRRDDS63.UINT16[H]
#define FLXA0FRRDDS63HL FLXA0.FRRDDS63.UINT8[HL]
#define FLXA0FRRDDS63HH FLXA0.FRRDDS63.UINT8[HH]
#define FLXA0FRRDDS64 FLXA0.FRRDDS64.UINT32
#define FLXA0FRRDDS64L FLXA0.FRRDDS64.UINT16[L]
#define FLXA0FRRDDS64LL FLXA0.FRRDDS64.UINT8[LL]
#define FLXA0FRRDDS64LH FLXA0.FRRDDS64.UINT8[LH]
#define FLXA0FRRDDS64H FLXA0.FRRDDS64.UINT16[H]
#define FLXA0FRRDDS64HL FLXA0.FRRDDS64.UINT8[HL]
#define FLXA0FRRDDS64HH FLXA0.FRRDDS64.UINT8[HH]
#define FLXA0FRRDHS1 FLXA0.FRRDHS1.UINT32
#define FLXA0FRRDHS1L FLXA0.FRRDHS1.UINT16[L]
#define FLXA0FRRDHS1LL FLXA0.FRRDHS1.UINT8[LL]
#define FLXA0FRRDHS1LH FLXA0.FRRDHS1.UINT8[LH]
#define FLXA0FRRDHS1H FLXA0.FRRDHS1.UINT16[H]
#define FLXA0FRRDHS1HL FLXA0.FRRDHS1.UINT8[HL]
#define FLXA0FRRDHS1HH FLXA0.FRRDHS1.UINT8[HH]
#define FLXA0FRRDHS2 FLXA0.FRRDHS2.UINT32
#define FLXA0FRRDHS2L FLXA0.FRRDHS2.UINT16[L]
#define FLXA0FRRDHS2LL FLXA0.FRRDHS2.UINT8[LL]
#define FLXA0FRRDHS2LH FLXA0.FRRDHS2.UINT8[LH]
#define FLXA0FRRDHS2H FLXA0.FRRDHS2.UINT16[H]
#define FLXA0FRRDHS2HL FLXA0.FRRDHS2.UINT8[HL]
#define FLXA0FRRDHS2HH FLXA0.FRRDHS2.UINT8[HH]
#define FLXA0PLR FLXA0.FRRDHS2.BIT.PLR
#define FLXA0FRRDHS3 FLXA0.FRRDHS3.UINT32
#define FLXA0FRRDHS3L FLXA0.FRRDHS3.UINT16[L]
#define FLXA0FRRDHS3LL FLXA0.FRRDHS3.UINT8[LL]
#define FLXA0FRRDHS3LH FLXA0.FRRDHS3.UINT8[LH]
#define FLXA0FRRDHS3H FLXA0.FRRDHS3.UINT16[H]
#define FLXA0FRRDHS3HL FLXA0.FRRDHS3.UINT8[HL]
#define FLXA0FRRDHS3HH FLXA0.FRRDHS3.UINT8[HH]
#define FLXA0RCC FLXA0.FRRDHS3.BIT.RCC
#define FLXA0RCI FLXA0.FRRDHS3.BIT.RCI
#define FLXA0SFI FLXA0.FRRDHS3.BIT.SFI
#define FLXA0SYN FLXA0.FRRDHS3.BIT.SYN
#define FLXA0NFI FLXA0.FRRDHS3.BIT.NFI
#define FLXA0PPI FLXA0.FRRDHS3.BIT.PPI
#define FLXA0RES FLXA0.FRRDHS3.BIT.RES
#define FLXA0FRMBS FLXA0.FRMBS.UINT32
#define FLXA0FRMBSL FLXA0.FRMBS.UINT16[L]
#define FLXA0FRMBSLL FLXA0.FRMBS.UINT8[LL]
#define FLXA0FRMBSLH FLXA0.FRMBS.UINT8[LH]
#define FLXA0FRMBSH FLXA0.FRMBS.UINT16[H]
#define FLXA0FRMBSHL FLXA0.FRMBS.UINT8[HL]
#define FLXA0FRMBSHH FLXA0.FRMBS.UINT8[HH]
#define FLXA0SEOA FLXA0.FRMBS.BIT.SEOA
#define FLXA0SEOB FLXA0.FRMBS.BIT.SEOB
#define FLXA0CEOA FLXA0.FRMBS.BIT.CEOA
#define FLXA0CEOB FLXA0.FRMBS.BIT.CEOB
#define FLXA0SVOA FLXA0.FRMBS.BIT.SVOA
#define FLXA0SVOB FLXA0.FRMBS.BIT.SVOB
#define FLXA0TCIA FLXA0.FRMBS.BIT.TCIA
#define FLXA0TCIB FLXA0.FRMBS.BIT.TCIB
#define FLXA0ESA FLXA0.FRMBS.BIT.ESA
#define FLXA0ESB FLXA0.FRMBS.BIT.ESB
#define FLXA0MLST FLXA0.FRMBS.BIT.MLST
#define FLXA0FTA FLXA0.FRMBS.BIT.FTA
#define FLXA0FTB FLXA0.FRMBS.BIT.FTB
#define FLXA0CCS FLXA0.FRMBS.BIT.CCS
#define FLXA0RCIS FLXA0.FRMBS.BIT.RCIS
#define FLXA0SFIS FLXA0.FRMBS.BIT.SFIS
#define FLXA0SYNS FLXA0.FRMBS.BIT.SYNS
#define FLXA0NFIS FLXA0.FRMBS.BIT.NFIS
#define FLXA0PPIS FLXA0.FRMBS.BIT.PPIS
#define FLXA0RESS FLXA0.FRMBS.BIT.RESS
#define FLXA0FROBCM FLXA0.FROBCM.UINT32
#define FLXA0FROBCML FLXA0.FROBCM.UINT16[L]
#define FLXA0FROBCMLL FLXA0.FROBCM.UINT8[LL]
#define FLXA0FROBCMLH FLXA0.FROBCM.UINT8[LH]
#define FLXA0FROBCMH FLXA0.FROBCM.UINT16[H]
#define FLXA0FROBCMHL FLXA0.FROBCM.UINT8[HL]
#define FLXA0FROBCMHH FLXA0.FROBCM.UINT8[HH]
#define FLXA0RHSS FLXA0.FROBCM.BIT.RHSS
#define FLXA0RDSS FLXA0.FROBCM.BIT.RDSS
#define FLXA0RHSH FLXA0.FROBCM.BIT.RHSH
#define FLXA0RDSH FLXA0.FROBCM.BIT.RDSH
#define FLXA0FROBCR FLXA0.FROBCR.UINT32
#define FLXA0FROBCRL FLXA0.FROBCR.UINT16[L]
#define FLXA0FROBCRLL FLXA0.FROBCR.UINT8[LL]
#define FLXA0FROBCRLH FLXA0.FROBCR.UINT8[LH]
#define FLXA0FROBCRH FLXA0.FROBCR.UINT16[H]
#define FLXA0FROBCRHL FLXA0.FROBCR.UINT8[HL]
#define FLXA0FROBCRHH FLXA0.FROBCR.UINT8[HH]
#define FLXA0OBRS FLXA0.FROBCR.BIT.OBRS
#define FLXA0VIEW FLXA0.FROBCR.BIT.VIEW
#define FLXA0REQ FLXA0.FROBCR.BIT.REQ
#define FLXA0OBSYS FLXA0.FROBCR.BIT.OBSYS
#define FLXA0OBRH FLXA0.FROBCR.BIT.OBRH
#define FLXA0FRITC FLXA0.FRITC.UINT32
#define FLXA0FRITCL FLXA0.FRITC.UINT16[L]
#define FLXA0FRITCLL FLXA0.FRITC.UINT8[LL]
#define FLXA0FRITCLH FLXA0.FRITC.UINT8[LH]
#define FLXA0FRITCH FLXA0.FRITC.UINT16[H]
#define FLXA0FRITCHL FLXA0.FRITC.UINT8[HL]
#define FLXA0FRITCHH FLXA0.FRITC.UINT8[HH]
#define FLXA0ITE FLXA0.FRITC.BIT.ITE
#define FLXA0IQHR FLXA0.FRITC.BIT.IQHR
#define FLXA0IQFIE FLXA0.FRITC.BIT.IQFIE
#define FLXA0IQEIE FLXA0.FRITC.BIT.IQEIE
#define FLXA0ITM FLXA0.FRITC.BIT.ITM
#define FLXA0FROTC FLXA0.FROTC.UINT32
#define FLXA0FROTCL FLXA0.FROTC.UINT16[L]
#define FLXA0FROTCLL FLXA0.FROTC.UINT8[LL]
#define FLXA0FROTCLH FLXA0.FROTC.UINT8[LH]
#define FLXA0FROTCH FLXA0.FROTC.UINT16[H]
#define FLXA0FROTCHL FLXA0.FROTC.UINT8[HL]
#define FLXA0FROTCHH FLXA0.FROTC.UINT8[HH]
#define FLXA0OTE FLXA0.FROTC.BIT.OTE
#define FLXA0OTCS FLXA0.FROTC.BIT.OTCS
#define FLXA0OIE FLXA0.FROTC.BIT.OIE
#define FLXA0FIE FLXA0.FROTC.BIT.FIE
#define FLXA0OWIE FLXA0.FROTC.BIT.OWIE
#define FLXA0FWIE FLXA0.FROTC.BIT.FWIE
#define FLXA0FTM FLXA0.FROTC.BIT.FTM
#define FLXA0FRIBA FLXA0.FRIBA.UINT32
#define FLXA0FRIBAL FLXA0.FRIBA.UINT16[L]
#define FLXA0FRIBALL FLXA0.FRIBA.UINT8[LL]
#define FLXA0FRIBALH FLXA0.FRIBA.UINT8[LH]
#define FLXA0FRIBAH FLXA0.FRIBA.UINT16[H]
#define FLXA0FRIBAHL FLXA0.FRIBA.UINT8[HL]
#define FLXA0FRIBAHH FLXA0.FRIBA.UINT8[HH]
#define FLXA0ITA FLXA0.FRIBA.BIT.ITA
#define FLXA0FRFBA FLXA0.FRFBA.UINT32
#define FLXA0FRFBAL FLXA0.FRFBA.UINT16[L]
#define FLXA0FRFBALL FLXA0.FRFBA.UINT8[LL]
#define FLXA0FRFBALH FLXA0.FRFBA.UINT8[LH]
#define FLXA0FRFBAH FLXA0.FRFBA.UINT16[H]
#define FLXA0FRFBAHL FLXA0.FRFBA.UINT8[HL]
#define FLXA0FRFBAHH FLXA0.FRFBA.UINT8[HH]
#define FLXA0FROBA FLXA0.FROBA.UINT32
#define FLXA0FROBAL FLXA0.FROBA.UINT16[L]
#define FLXA0FROBALL FLXA0.FROBA.UINT8[LL]
#define FLXA0FROBALH FLXA0.FROBA.UINT8[LH]
#define FLXA0FROBAH FLXA0.FROBA.UINT16[H]
#define FLXA0FROBAHL FLXA0.FROBA.UINT8[HL]
#define FLXA0FROBAHH FLXA0.FROBA.UINT8[HH]
#define FLXA0OTA FLXA0.FROBA.BIT.OTA
#define FLXA0FRIQC FLXA0.FRIQC.UINT32
#define FLXA0FRIQCL FLXA0.FRIQC.UINT16[L]
#define FLXA0FRIQCLL FLXA0.FRIQC.UINT8[LL]
#define FLXA0FRIQCLH FLXA0.FRIQC.UINT8[LH]
#define FLXA0FRIQCH FLXA0.FRIQC.UINT16[H]
#define FLXA0FRIQCHL FLXA0.FRIQC.UINT8[HL]
#define FLXA0FRIQCHH FLXA0.FRIQC.UINT8[HH]
#define FLXA0IMBNR FLXA0.FRIQC.BIT.IMBNR
#define FLXA0FRUIR FLXA0.FRUIR.UINT32
#define FLXA0FRUIRL FLXA0.FRUIR.UINT16[L]
#define FLXA0FRUIRLL FLXA0.FRUIR.UINT8[LL]
#define FLXA0FRUIRLH FLXA0.FRUIR.UINT8[LH]
#define FLXA0FRUIRH FLXA0.FRUIR.UINT16[H]
#define FLXA0FRUIRHL FLXA0.FRUIR.UINT8[HL]
#define FLXA0FRUIRHH FLXA0.FRUIR.UINT8[HH]
#define FLXA0UIDX FLXA0.FRUIR.BIT.UIDX
#define FLXA0FRUOR FLXA0.FRUOR.UINT32
#define FLXA0FRUORL FLXA0.FRUOR.UINT16[L]
#define FLXA0FRUORLL FLXA0.FRUOR.UINT8[LL]
#define FLXA0FRUORLH FLXA0.FRUOR.UINT8[LH]
#define FLXA0FRUORH FLXA0.FRUOR.UINT16[H]
#define FLXA0FRUORHL FLXA0.FRUOR.UINT8[HL]
#define FLXA0FRUORHH FLXA0.FRUOR.UINT8[HH]
#define FLXA0UMBNR FLXA0.FRUOR.BIT.UMBNR
#define FLXA0URDS FLXA0.FRUOR.BIT.URDS
#define FLXA0FRITS FLXA0.FRITS.UINT32
#define FLXA0FRITSL FLXA0.FRITS.UINT16[L]
#define FLXA0FRITSLL FLXA0.FRITS.UINT8[LL]
#define FLXA0FRITSLH FLXA0.FRITS.UINT8[LH]
#define FLXA0FRITSH FLXA0.FRITS.UINT16[H]
#define FLXA0FRITSHL FLXA0.FRITS.UINT8[HL]
#define FLXA0FRITSHH FLXA0.FRITS.UINT8[HH]
#define FLXA0ITS FLXA0.FRITS.BIT.ITS
#define FLXA0IQH FLXA0.FRITS.BIT.IQH
#define FLXA0UIRP FLXA0.FRITS.BIT.UIRP
#define FLXA0IQFIS FLXA0.FRITS.BIT.IQFIS
#define FLXA0IQEIS FLXA0.FRITS.BIT.IQEIS
#define FLXA0IQFP FLXA0.FRITS.BIT.IQFP
#define FLXA0IPIDX FLXA0.FRITS.BIT.IPIDX
#define FLXA0IGIDX FLXA0.FRITS.BIT.IGIDX
#define FLXA0FROTS FLXA0.FROTS.UINT32
#define FLXA0FROTSL FLXA0.FROTS.UINT16[L]
#define FLXA0FROTSLL FLXA0.FROTS.UINT8[LL]
#define FLXA0FROTSLH FLXA0.FROTS.UINT8[LH]
#define FLXA0FROTSH FLXA0.FROTS.UINT16[H]
#define FLXA0FROTSHL FLXA0.FROTS.UINT8[HL]
#define FLXA0FROTSHH FLXA0.FROTS.UINT8[HH]
#define FLXA0OTS FLXA0.FROTS.BIT.OTS
#define FLXA0UORP FLXA0.FROTS.BIT.UORP
#define FLXA0OTIS FLXA0.FROTS.BIT.OTIS
#define FLXA0FIS FLXA0.FROTS.BIT.FIS
#define FLXA0OWIS FLXA0.FROTS.BIT.OWIS
#define FLXA0FWIS FLXA0.FROTS.BIT.FWIS
#define FLXA0FDA FLXA0.FROTS.BIT.FDA
#define FLXA0OWP FLXA0.FROTS.BIT.OWP
#define FLXA0FWP FLXA0.FROTS.BIT.FWP
#define FLXA0FGIDX FLXA0.FROTS.BIT.FGIDX
#define FLXA0FFL FLXA0.FROTS.BIT.FFL
#define FLXA0FRAES FLXA0.FRAES.UINT32
#define FLXA0FRAESL FLXA0.FRAES.UINT16[L]
#define FLXA0FRAESLL FLXA0.FRAES.UINT8[LL]
#define FLXA0FRAESLH FLXA0.FRAES.UINT8[LH]
#define FLXA0FRAESH FLXA0.FRAES.UINT16[H]
#define FLXA0FRAESHL FLXA0.FRAES.UINT8[HL]
#define FLXA0FRAESHH FLXA0.FRAES.UINT8[HH]
#define FLXA0EIDX FLXA0.FRAES.BIT.EIDX
#define FLXA0IAE FLXA0.FRAES.BIT.IAE
#define FLXA0OAE FLXA0.FRAES.BIT.OAE
#define FLXA0FAE FLXA0.FRAES.BIT.FAE
#define FLXA0MAE FLXA0.FRAES.BIT.MAE
#define FLXA0FRAEA FLXA0.FRAEA.UINT32
#define FLXA0FRAEAL FLXA0.FRAEA.UINT16[L]
#define FLXA0FRAEALL FLXA0.FRAEA.UINT8[LL]
#define FLXA0FRAEALH FLXA0.FRAEA.UINT8[LH]
#define FLXA0FRAEAH FLXA0.FRAEA.UINT16[H]
#define FLXA0FRAEAHL FLXA0.FRAEA.UINT8[HL]
#define FLXA0FRAEAHH FLXA0.FRAEA.UINT8[HH]
#define FLXA0AEA FLXA0.FRAEA.BIT.AEA
#define FLXA0FRDA0 FLXA0.FRDA0.UINT32
#define FLXA0FRDA0L FLXA0.FRDA0.UINT16[L]
#define FLXA0FRDA0LL FLXA0.FRDA0.UINT8[LL]
#define FLXA0FRDA0LH FLXA0.FRDA0.UINT8[LH]
#define FLXA0FRDA0H FLXA0.FRDA0.UINT16[H]
#define FLXA0FRDA0HL FLXA0.FRDA0.UINT8[HL]
#define FLXA0FRDA0HH FLXA0.FRDA0.UINT8[HH]
#define FLXA0DA0 FLXA0.FRDA0.BIT.DA0
#define FLXA0DA1 FLXA0.FRDA0.BIT.DA1
#define FLXA0DA2 FLXA0.FRDA0.BIT.DA2
#define FLXA0DA3 FLXA0.FRDA0.BIT.DA3
#define FLXA0DA4 FLXA0.FRDA0.BIT.DA4
#define FLXA0DA5 FLXA0.FRDA0.BIT.DA5
#define FLXA0DA6 FLXA0.FRDA0.BIT.DA6
#define FLXA0DA7 FLXA0.FRDA0.BIT.DA7
#define FLXA0DA8 FLXA0.FRDA0.BIT.DA8
#define FLXA0DA9 FLXA0.FRDA0.BIT.DA9
#define FLXA0DA10 FLXA0.FRDA0.BIT.DA10
#define FLXA0DA11 FLXA0.FRDA0.BIT.DA11
#define FLXA0DA12 FLXA0.FRDA0.BIT.DA12
#define FLXA0DA13 FLXA0.FRDA0.BIT.DA13
#define FLXA0DA14 FLXA0.FRDA0.BIT.DA14
#define FLXA0DA15 FLXA0.FRDA0.BIT.DA15
#define FLXA0DA16 FLXA0.FRDA0.BIT.DA16
#define FLXA0DA17 FLXA0.FRDA0.BIT.DA17
#define FLXA0DA18 FLXA0.FRDA0.BIT.DA18
#define FLXA0DA19 FLXA0.FRDA0.BIT.DA19
#define FLXA0DA20 FLXA0.FRDA0.BIT.DA20
#define FLXA0DA21 FLXA0.FRDA0.BIT.DA21
#define FLXA0DA22 FLXA0.FRDA0.BIT.DA22
#define FLXA0DA23 FLXA0.FRDA0.BIT.DA23
#define FLXA0DA24 FLXA0.FRDA0.BIT.DA24
#define FLXA0DA25 FLXA0.FRDA0.BIT.DA25
#define FLXA0DA26 FLXA0.FRDA0.BIT.DA26
#define FLXA0DA27 FLXA0.FRDA0.BIT.DA27
#define FLXA0DA28 FLXA0.FRDA0.BIT.DA28
#define FLXA0DA29 FLXA0.FRDA0.BIT.DA29
#define FLXA0DA30 FLXA0.FRDA0.BIT.DA30
#define FLXA0DA31 FLXA0.FRDA0.BIT.DA31
#define FLXA0FRDA1 FLXA0.FRDA1.UINT32
#define FLXA0FRDA1L FLXA0.FRDA1.UINT16[L]
#define FLXA0FRDA1LL FLXA0.FRDA1.UINT8[LL]
#define FLXA0FRDA1LH FLXA0.FRDA1.UINT8[LH]
#define FLXA0FRDA1H FLXA0.FRDA1.UINT16[H]
#define FLXA0FRDA1HL FLXA0.FRDA1.UINT8[HL]
#define FLXA0FRDA1HH FLXA0.FRDA1.UINT8[HH]
#define FLXA0DA32 FLXA0.FRDA1.BIT.DA32
#define FLXA0DA33 FLXA0.FRDA1.BIT.DA33
#define FLXA0DA34 FLXA0.FRDA1.BIT.DA34
#define FLXA0DA35 FLXA0.FRDA1.BIT.DA35
#define FLXA0DA36 FLXA0.FRDA1.BIT.DA36
#define FLXA0DA37 FLXA0.FRDA1.BIT.DA37
#define FLXA0DA38 FLXA0.FRDA1.BIT.DA38
#define FLXA0DA39 FLXA0.FRDA1.BIT.DA39
#define FLXA0DA40 FLXA0.FRDA1.BIT.DA40
#define FLXA0DA41 FLXA0.FRDA1.BIT.DA41
#define FLXA0DA42 FLXA0.FRDA1.BIT.DA42
#define FLXA0DA43 FLXA0.FRDA1.BIT.DA43
#define FLXA0DA44 FLXA0.FRDA1.BIT.DA44
#define FLXA0DA45 FLXA0.FRDA1.BIT.DA45
#define FLXA0DA46 FLXA0.FRDA1.BIT.DA46
#define FLXA0DA47 FLXA0.FRDA1.BIT.DA47
#define FLXA0DA48 FLXA0.FRDA1.BIT.DA48
#define FLXA0DA49 FLXA0.FRDA1.BIT.DA49
#define FLXA0DA50 FLXA0.FRDA1.BIT.DA50
#define FLXA0DA51 FLXA0.FRDA1.BIT.DA51
#define FLXA0DA52 FLXA0.FRDA1.BIT.DA52
#define FLXA0DA53 FLXA0.FRDA1.BIT.DA53
#define FLXA0DA54 FLXA0.FRDA1.BIT.DA54
#define FLXA0DA55 FLXA0.FRDA1.BIT.DA55
#define FLXA0DA56 FLXA0.FRDA1.BIT.DA56
#define FLXA0DA57 FLXA0.FRDA1.BIT.DA57
#define FLXA0DA58 FLXA0.FRDA1.BIT.DA58
#define FLXA0DA59 FLXA0.FRDA1.BIT.DA59
#define FLXA0DA60 FLXA0.FRDA1.BIT.DA60
#define FLXA0DA61 FLXA0.FRDA1.BIT.DA61
#define FLXA0DA62 FLXA0.FRDA1.BIT.DA62
#define FLXA0DA63 FLXA0.FRDA1.BIT.DA63
#define FLXA0FRDA2 FLXA0.FRDA2.UINT32
#define FLXA0FRDA2L FLXA0.FRDA2.UINT16[L]
#define FLXA0FRDA2LL FLXA0.FRDA2.UINT8[LL]
#define FLXA0FRDA2LH FLXA0.FRDA2.UINT8[LH]
#define FLXA0FRDA2H FLXA0.FRDA2.UINT16[H]
#define FLXA0FRDA2HL FLXA0.FRDA2.UINT8[HL]
#define FLXA0FRDA2HH FLXA0.FRDA2.UINT8[HH]
#define FLXA0DA64 FLXA0.FRDA2.BIT.DA64
#define FLXA0DA65 FLXA0.FRDA2.BIT.DA65
#define FLXA0DA66 FLXA0.FRDA2.BIT.DA66
#define FLXA0DA67 FLXA0.FRDA2.BIT.DA67
#define FLXA0DA68 FLXA0.FRDA2.BIT.DA68
#define FLXA0DA69 FLXA0.FRDA2.BIT.DA69
#define FLXA0DA70 FLXA0.FRDA2.BIT.DA70
#define FLXA0DA71 FLXA0.FRDA2.BIT.DA71
#define FLXA0DA72 FLXA0.FRDA2.BIT.DA72
#define FLXA0DA73 FLXA0.FRDA2.BIT.DA73
#define FLXA0DA74 FLXA0.FRDA2.BIT.DA74
#define FLXA0DA75 FLXA0.FRDA2.BIT.DA75
#define FLXA0DA76 FLXA0.FRDA2.BIT.DA76
#define FLXA0DA77 FLXA0.FRDA2.BIT.DA77
#define FLXA0DA78 FLXA0.FRDA2.BIT.DA78
#define FLXA0DA79 FLXA0.FRDA2.BIT.DA79
#define FLXA0DA80 FLXA0.FRDA2.BIT.DA80
#define FLXA0DA81 FLXA0.FRDA2.BIT.DA81
#define FLXA0DA82 FLXA0.FRDA2.BIT.DA82
#define FLXA0DA83 FLXA0.FRDA2.BIT.DA83
#define FLXA0DA84 FLXA0.FRDA2.BIT.DA84
#define FLXA0DA85 FLXA0.FRDA2.BIT.DA85
#define FLXA0DA86 FLXA0.FRDA2.BIT.DA86
#define FLXA0DA87 FLXA0.FRDA2.BIT.DA87
#define FLXA0DA88 FLXA0.FRDA2.BIT.DA88
#define FLXA0DA89 FLXA0.FRDA2.BIT.DA89
#define FLXA0DA90 FLXA0.FRDA2.BIT.DA90
#define FLXA0DA91 FLXA0.FRDA2.BIT.DA91
#define FLXA0DA92 FLXA0.FRDA2.BIT.DA92
#define FLXA0DA93 FLXA0.FRDA2.BIT.DA93
#define FLXA0DA94 FLXA0.FRDA2.BIT.DA94
#define FLXA0DA95 FLXA0.FRDA2.BIT.DA95
#define FLXA0FRDA3 FLXA0.FRDA3.UINT32
#define FLXA0FRDA3L FLXA0.FRDA3.UINT16[L]
#define FLXA0FRDA3LL FLXA0.FRDA3.UINT8[LL]
#define FLXA0FRDA3LH FLXA0.FRDA3.UINT8[LH]
#define FLXA0FRDA3H FLXA0.FRDA3.UINT16[H]
#define FLXA0FRDA3HL FLXA0.FRDA3.UINT8[HL]
#define FLXA0FRDA3HH FLXA0.FRDA3.UINT8[HH]
#define FLXA0DA96 FLXA0.FRDA3.BIT.DA96
#define FLXA0DA97 FLXA0.FRDA3.BIT.DA97
#define FLXA0DA98 FLXA0.FRDA3.BIT.DA98
#define FLXA0DA99 FLXA0.FRDA3.BIT.DA99
#define FLXA0DA100 FLXA0.FRDA3.BIT.DA100
#define FLXA0DA101 FLXA0.FRDA3.BIT.DA101
#define FLXA0DA102 FLXA0.FRDA3.BIT.DA102
#define FLXA0DA103 FLXA0.FRDA3.BIT.DA103
#define FLXA0DA104 FLXA0.FRDA3.BIT.DA104
#define FLXA0DA105 FLXA0.FRDA3.BIT.DA105
#define FLXA0DA106 FLXA0.FRDA3.BIT.DA106
#define FLXA0DA107 FLXA0.FRDA3.BIT.DA107
#define FLXA0DA108 FLXA0.FRDA3.BIT.DA108
#define FLXA0DA109 FLXA0.FRDA3.BIT.DA109
#define FLXA0DA110 FLXA0.FRDA3.BIT.DA110
#define FLXA0DA111 FLXA0.FRDA3.BIT.DA111
#define FLXA0DA112 FLXA0.FRDA3.BIT.DA112
#define FLXA0DA113 FLXA0.FRDA3.BIT.DA113
#define FLXA0DA114 FLXA0.FRDA3.BIT.DA114
#define FLXA0DA115 FLXA0.FRDA3.BIT.DA115
#define FLXA0DA116 FLXA0.FRDA3.BIT.DA116
#define FLXA0DA117 FLXA0.FRDA3.BIT.DA117
#define FLXA0DA118 FLXA0.FRDA3.BIT.DA118
#define FLXA0DA119 FLXA0.FRDA3.BIT.DA119
#define FLXA0DA120 FLXA0.FRDA3.BIT.DA120
#define FLXA0DA121 FLXA0.FRDA3.BIT.DA121
#define FLXA0DA122 FLXA0.FRDA3.BIT.DA122
#define FLXA0DA123 FLXA0.FRDA3.BIT.DA123
#define FLXA0DA124 FLXA0.FRDA3.BIT.DA124
#define FLXA0DA125 FLXA0.FRDA3.BIT.DA125
#define FLXA0DA126 FLXA0.FRDA3.BIT.DA126
#define FLXA0DA127 FLXA0.FRDA3.BIT.DA127
#define FLXA0FRAHBC FLXA0.FRAHBC.UINT32
#define FLXA0FRAHBCL FLXA0.FRAHBC.UINT16[L]
#define FLXA0FRAHBCLL FLXA0.FRAHBC.UINT8[LL]
#define FLXA0FRAHBCLH FLXA0.FRAHBC.UINT8[LH]
#define FLXA0FRAHBCH FLXA0.FRAHBC.UINT16[H]
#define FLXA0FRAHBCHL FLXA0.FRAHBC.UINT8[HL]
#define FLXA0FRAHBCHH FLXA0.FRAHBC.UINT8[HH]
#define FLXA0HPROT FLXA0.FRAHBC.BIT.HPROT
#define FLXA0FRT2C FLXA0.FRT2C.UINT32
#define FLXA0FRT2CL FLXA0.FRT2C.UINT16[L]
#define FLXA0FRT2CLL FLXA0.FRT2C.UINT8[LL]
#define FLXA0FRT2CLH FLXA0.FRT2C.UINT8[LH]
#define FLXA0FRT2CH FLXA0.FRT2C.UINT16[H]
#define FLXA0FRT2CHL FLXA0.FRT2C.UINT8[HL]
#define FLXA0FRT2CHH FLXA0.FRT2C.UINT8[HH]
#define FLXA0T2RC FLXA0.FRT2C.BIT.T2RC
#define FLXA0T2MS FLXA0.FRT2C.BIT.T2MS
#define FLXA0T2CC FLXA0.FRT2C.BIT.T2CC
#define FLXA0T2MO FLXA0.FRT2C.BIT.T2MO

#endif
