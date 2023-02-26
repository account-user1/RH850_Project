/**********************************************************************************************************************
* Module File Name  : tauj_regs.h
* Module Description: Timer Array Unit J Peripheral Registers
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

#ifndef TAUJ_REGS_H
#define TAUJ_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    const uint8  OVF:1;                                    /* OVF              */
    uint8  :7;                                             /* Reserved Bits    */
} __type739;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TE00:1;                                   /* TE00             */
    const uint8  TE01:1;                                   /* TE01             */
    const uint8  TE02:1;                                   /* TE02             */
    const uint8  TE03:1;                                   /* TE03             */
    uint8  :4;                                             /* Reserved Bits    */
} __type740;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TS00:1;                                         /* TS00             */
    uint8  TS01:1;                                         /* TS01             */
    uint8  TS02:1;                                         /* TS02             */
    uint8  TS03:1;                                         /* TS03             */
    uint8  :4;                                             /* Reserved Bits    */
} __type741;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TT00:1;                                         /* TT00             */
    uint8  TT01:1;                                         /* TT01             */
    uint8  TT02:1;                                         /* TT02             */
    uint8  TT03:1;                                         /* TT03             */
    uint8  :4;                                             /* Reserved Bits    */
} __type742;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TO00:1;                                         /* TO00             */
    uint8  TO01:1;                                         /* TO01             */
    uint8  TO02:1;                                         /* TO02             */
    uint8  TO03:1;                                         /* TO03             */
    uint8  :4;                                             /* Reserved Bits    */
} __type743;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TOE00:1;                                        /* TOE00            */
    uint8  TOE01:1;                                        /* TOE01            */
    uint8  TOE02:1;                                        /* TOE02            */
    uint8  TOE03:1;                                        /* TOE03            */
    uint8  :4;                                             /* Reserved Bits    */
} __type744;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TOL00:1;                                        /* TOL00            */
    uint8  TOL01:1;                                        /* TOL01            */
    uint8  TOL02:1;                                        /* TOL02            */
    uint8  TOL03:1;                                        /* TOL03            */
    uint8  :4;                                             /* Reserved Bits    */
} __type745;
typedef struct 
{                                                          /* Bit Access       */
    uint8  RDT00:1;                                        /* RDT00            */
    uint8  RDT01:1;                                        /* RDT01            */
    uint8  RDT02:1;                                        /* RDT02            */
    uint8  RDT03:1;                                        /* RDT03            */
    uint8  :4;                                             /* Reserved Bits    */
} __type746;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  RSF00:1;                                  /* RSF00            */
    const uint8  RSF01:1;                                  /* RSF01            */
    const uint8  RSF02:1;                                  /* RSF02            */
    const uint8  RSF03:1;                                  /* RSF03            */
    uint8  :4;                                             /* Reserved Bits    */
} __type747;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TOM00:1;                                        /* TOM00            */
    uint8  TOM01:1;                                        /* TOM01            */
    uint8  TOM02:1;                                        /* TOM02            */
    uint8  TOM03:1;                                        /* TOM03            */
    uint8  :4;                                             /* Reserved Bits    */
} __type748;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TOC00:1;                                        /* TOC00            */
    uint8  TOC01:1;                                        /* TOC01            */
    uint8  TOC02:1;                                        /* TOC02            */
    uint8  TOC03:1;                                        /* TOC03            */
    uint8  :4;                                             /* Reserved Bits    */
} __type749;
typedef struct 
{                                                          /* Bit Access       */
    uint8  RDE00:1;                                        /* RDE00            */
    uint8  RDE01:1;                                        /* RDE01            */
    uint8  RDE02:1;                                        /* RDE02            */
    uint8  RDE03:1;                                        /* RDE03            */
    uint8  :4;                                             /* Reserved Bits    */
} __type750;
typedef struct 
{                                                          /* Bit Access       */
    uint8  RDM00:1;                                        /* RDM00            */
    uint8  RDM01:1;                                        /* RDM01            */
    uint8  RDM02:1;                                        /* RDM02            */
    uint8  RDM03:1;                                        /* RDM03            */
    uint8  :4;                                             /* Reserved Bits    */
} __type751;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type739 BIT;                                   /* Bit Access       */
} __type2018;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type740 BIT;                                   /* Bit Access       */
} __type2019;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type741 BIT;                                         /* Bit Access       */
} __type2020;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type742 BIT;                                         /* Bit Access       */
} __type2021;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type743 BIT;                                         /* Bit Access       */
} __type2022;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type744 BIT;                                         /* Bit Access       */
} __type2023;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type745 BIT;                                         /* Bit Access       */
} __type2024;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type746 BIT;                                         /* Bit Access       */
} __type2025;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type747 BIT;                                   /* Bit Access       */
} __type2026;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type748 BIT;                                         /* Bit Access       */
} __type2027;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type749 BIT;                                         /* Bit Access       */
} __type2028;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type750 BIT;                                         /* Bit Access       */
} __type2029;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type751 BIT;                                         /* Bit Access       */
} __type2030;

typedef struct 
{                                                          /* Module           */
    uint32 CDR0;                                           /* CDR0             */
    uint32 CDR1;                                           /* CDR1             */
    uint32 CDR2;                                           /* CDR2             */
    uint32 CDR3;                                           /* CDR3             */
    const uint32 CNT0;                                     /* CNT0             */
    const uint32 CNT1;                                     /* CNT1             */
    const uint32 CNT2;                                     /* CNT2             */
    const uint32 CNT3;                                     /* CNT3             */
    __type2000 CMUR0;                                      /* CMUR0            */
    uint8  dummy502[3];                                    /* Reserved         */
    __type2000 CMUR1;                                      /* CMUR1            */
    uint8  dummy503[3];                                    /* Reserved         */
    __type2000 CMUR2;                                      /* CMUR2            */
    uint8  dummy504[3];                                    /* Reserved         */
    __type2000 CMUR3;                                      /* CMUR3            */
    uint8  dummy505[3];                                    /* Reserved         */
    const __type2018 CSR0;                                 /* CSR0             */
    uint8  dummy506[3];                                    /* Reserved         */
    const __type2018 CSR1;                                 /* CSR1             */
    uint8  dummy507[3];                                    /* Reserved         */
    const __type2018 CSR2;                                 /* CSR2             */
    uint8  dummy508[3];                                    /* Reserved         */
    const __type2018 CSR3;                                 /* CSR3             */
    uint8  dummy509[3];                                    /* Reserved         */
    __type2002 CSC0;                                       /* CSC0             */
    uint8  dummy510[3];                                    /* Reserved         */
    __type2002 CSC1;                                       /* CSC1             */
    uint8  dummy511[3];                                    /* Reserved         */
    __type2002 CSC2;                                       /* CSC2             */
    uint8  dummy512[3];                                    /* Reserved         */
    __type2002 CSC3;                                       /* CSC3             */
    uint8  dummy513[3];                                    /* Reserved         */
    const __type2019 TE;                                   /* TE               */
    uint8  dummy514[3];                                    /* Reserved         */
    __type2020 TS;                                         /* TS               */
    uint8  dummy515[3];                                    /* Reserved         */
    __type2021 TT;                                         /* TT               */
    uint8  dummy516[3];                                    /* Reserved         */
    __type2022 TO;                                         /* TO               */
    uint8  dummy517[3];                                    /* Reserved         */
    __type2023 TOE;                                        /* TOE              */
    uint8  dummy518[3];                                    /* Reserved         */
    __type2024 TOL;                                        /* TOL              */
    uint8  dummy519[3];                                    /* Reserved         */
    __type2025 RDT;                                        /* RDT              */
    uint8  dummy520[3];                                    /* Reserved         */
    const __type2026 RSF;                                  /* RSF              */
    uint8  dummy521[19];                                   /* Reserved         */
    __type2006 CMOR0;                                      /* CMOR0            */
    uint8  dummy522[2];                                    /* Reserved         */
    __type2006 CMOR1;                                      /* CMOR1            */
    uint8  dummy523[2];                                    /* Reserved         */
    __type2006 CMOR2;                                      /* CMOR2            */
    uint8  dummy524[2];                                    /* Reserved         */
    __type2006 CMOR3;                                      /* CMOR3            */
    uint8  dummy525[2];                                    /* Reserved         */
    __type2007 TPS;                                        /* TPS              */
    uint8  dummy526[2];                                    /* Reserved         */
    uint8  BRS;                                            /* BRS              */
    uint8  dummy527[3];                                    /* Reserved         */
    __type2027 TOM;                                        /* TOM              */
    uint8  dummy528[3];                                    /* Reserved         */
    __type2028 TOC;                                        /* TOC              */
    uint8  dummy529[3];                                    /* Reserved         */
    __type2029 RDE;                                        /* RDE              */
    uint8  dummy530[3];                                    /* Reserved         */
    __type2030 RDM;                                        /* RDM              */
    uint8  dummy531[3931];                                 /* Reserved         */
} __type2608;

__IOREG(TAUJ0, 0xFFE50000, __READ_WRITE, __type2608);                 /* TAUJ0 */
__IOREG(TAUJ1, 0xFFE51000, __READ_WRITE, __type2608);                 /* TAUJ1 */
__IOREG(TAUJ2, 0xFFE52000, __READ_WRITE, __type2608);                 /* TAUJ2 */
__IOREGARRAY(TAUJ, 3, 0xFFE50000, __READ_WRITE, __type2608);          /* TAUJ[3] */

#define TAUJ0CDR0 TAUJ0.CDR0
#define TAUJ0CDR1 TAUJ0.CDR1
#define TAUJ0CDR2 TAUJ0.CDR2
#define TAUJ0CDR3 TAUJ0.CDR3
#define TAUJ0CNT0 TAUJ0.CNT0
#define TAUJ0CNT1 TAUJ0.CNT1
#define TAUJ0CNT2 TAUJ0.CNT2
#define TAUJ0CNT3 TAUJ0.CNT3
#define TAUJ0CMUR0 TAUJ0.CMUR0.UINT8
#define TAUJ0TIS TAUJ0.CMUR0.BIT.TIS
#define TAUJ0CMUR1 TAUJ0.CMUR1.UINT8
#define TAUJ0CMUR2 TAUJ0.CMUR2.UINT8
#define TAUJ0CMUR3 TAUJ0.CMUR3.UINT8
#define TAUJ0CSR0 TAUJ0.CSR0.UINT8
#define TAUJ0OVF TAUJ0.CSR0.BIT.OVF
#define TAUJ0CSR1 TAUJ0.CSR1.UINT8
#define TAUJ0CSR2 TAUJ0.CSR2.UINT8
#define TAUJ0CSR3 TAUJ0.CSR3.UINT8
#define TAUJ0CSC0 TAUJ0.CSC0.UINT8
#define TAUJ0CLOV TAUJ0.CSC0.BIT.CLOV
#define TAUJ0CSC1 TAUJ0.CSC1.UINT8
#define TAUJ0CSC2 TAUJ0.CSC2.UINT8
#define TAUJ0CSC3 TAUJ0.CSC3.UINT8
#define TAUJ0TE TAUJ0.TE.UINT8
#define TAUJ0TE00 TAUJ0.TE.BIT.TE00
#define TAUJ0TE01 TAUJ0.TE.BIT.TE01
#define TAUJ0TE02 TAUJ0.TE.BIT.TE02
#define TAUJ0TE03 TAUJ0.TE.BIT.TE03
#define TAUJ0TS TAUJ0.TS.UINT8
#define TAUJ0TS00 TAUJ0.TS.BIT.TS00
#define TAUJ0TS01 TAUJ0.TS.BIT.TS01
#define TAUJ0TS02 TAUJ0.TS.BIT.TS02
#define TAUJ0TS03 TAUJ0.TS.BIT.TS03
#define TAUJ0TT TAUJ0.TT.UINT8
#define TAUJ0TT00 TAUJ0.TT.BIT.TT00
#define TAUJ0TT01 TAUJ0.TT.BIT.TT01
#define TAUJ0TT02 TAUJ0.TT.BIT.TT02
#define TAUJ0TT03 TAUJ0.TT.BIT.TT03
#define TAUJ0TO TAUJ0.TO.UINT8
#define TAUJ0TO00 TAUJ0.TO.BIT.TO00
#define TAUJ0TO01 TAUJ0.TO.BIT.TO01
#define TAUJ0TO02 TAUJ0.TO.BIT.TO02
#define TAUJ0TO03 TAUJ0.TO.BIT.TO03
#define TAUJ0TOE TAUJ0.TOE.UINT8
#define TAUJ0TOE00 TAUJ0.TOE.BIT.TOE00
#define TAUJ0TOE01 TAUJ0.TOE.BIT.TOE01
#define TAUJ0TOE02 TAUJ0.TOE.BIT.TOE02
#define TAUJ0TOE03 TAUJ0.TOE.BIT.TOE03
#define TAUJ0TOL TAUJ0.TOL.UINT8
#define TAUJ0TOL00 TAUJ0.TOL.BIT.TOL00
#define TAUJ0TOL01 TAUJ0.TOL.BIT.TOL01
#define TAUJ0TOL02 TAUJ0.TOL.BIT.TOL02
#define TAUJ0TOL03 TAUJ0.TOL.BIT.TOL03
#define TAUJ0RDT TAUJ0.RDT.UINT8
#define TAUJ0RDT00 TAUJ0.RDT.BIT.RDT00
#define TAUJ0RDT01 TAUJ0.RDT.BIT.RDT01
#define TAUJ0RDT02 TAUJ0.RDT.BIT.RDT02
#define TAUJ0RDT03 TAUJ0.RDT.BIT.RDT03
#define TAUJ0RSF TAUJ0.RSF.UINT8
#define TAUJ0RSF00 TAUJ0.RSF.BIT.RSF00
#define TAUJ0RSF01 TAUJ0.RSF.BIT.RSF01
#define TAUJ0RSF02 TAUJ0.RSF.BIT.RSF02
#define TAUJ0RSF03 TAUJ0.RSF.BIT.RSF03
#define TAUJ0CMOR0 TAUJ0.CMOR0.UINT16
#define TAUJ0MD TAUJ0.CMOR0.BIT.MD
#define TAUJ0COS TAUJ0.CMOR0.BIT.COS
#define TAUJ0STS TAUJ0.CMOR0.BIT.STS
#define TAUJ0MAS TAUJ0.CMOR0.BIT.MAS
#define TAUJ0CCS TAUJ0.CMOR0.BIT.CCS
#define TAUJ0CKS TAUJ0.CMOR0.BIT.CKS
#define TAUJ0CMOR1 TAUJ0.CMOR1.UINT16
#define TAUJ0CMOR2 TAUJ0.CMOR2.UINT16
#define TAUJ0CMOR3 TAUJ0.CMOR3.UINT16
#define TAUJ0TPS TAUJ0.TPS.UINT16
#define TAUJ0PRS0 TAUJ0.TPS.BIT.PRS0
#define TAUJ0PRS1 TAUJ0.TPS.BIT.PRS1
#define TAUJ0PRS2 TAUJ0.TPS.BIT.PRS2
#define TAUJ0PRS3 TAUJ0.TPS.BIT.PRS3
#define TAUJ0BRS TAUJ0.BRS
#define TAUJ0TOM TAUJ0.TOM.UINT8
#define TAUJ0TOM00 TAUJ0.TOM.BIT.TOM00
#define TAUJ0TOM01 TAUJ0.TOM.BIT.TOM01
#define TAUJ0TOM02 TAUJ0.TOM.BIT.TOM02
#define TAUJ0TOM03 TAUJ0.TOM.BIT.TOM03
#define TAUJ0TOC TAUJ0.TOC.UINT8
#define TAUJ0TOC00 TAUJ0.TOC.BIT.TOC00
#define TAUJ0TOC01 TAUJ0.TOC.BIT.TOC01
#define TAUJ0TOC02 TAUJ0.TOC.BIT.TOC02
#define TAUJ0TOC03 TAUJ0.TOC.BIT.TOC03
#define TAUJ0RDE TAUJ0.RDE.UINT8
#define TAUJ0RDE00 TAUJ0.RDE.BIT.RDE00
#define TAUJ0RDE01 TAUJ0.RDE.BIT.RDE01
#define TAUJ0RDE02 TAUJ0.RDE.BIT.RDE02
#define TAUJ0RDE03 TAUJ0.RDE.BIT.RDE03
#define TAUJ0RDM TAUJ0.RDM.UINT8
#define TAUJ0RDM00 TAUJ0.RDM.BIT.RDM00
#define TAUJ0RDM01 TAUJ0.RDM.BIT.RDM01
#define TAUJ0RDM02 TAUJ0.RDM.BIT.RDM02
#define TAUJ0RDM03 TAUJ0.RDM.BIT.RDM03
#define TAUJ1CDR0 TAUJ1.CDR0
#define TAUJ1CDR1 TAUJ1.CDR1
#define TAUJ1CDR2 TAUJ1.CDR2
#define TAUJ1CDR3 TAUJ1.CDR3
#define TAUJ1CNT0 TAUJ1.CNT0
#define TAUJ1CNT1 TAUJ1.CNT1
#define TAUJ1CNT2 TAUJ1.CNT2
#define TAUJ1CNT3 TAUJ1.CNT3
#define TAUJ1CMUR0 TAUJ1.CMUR0.UINT8
#define TAUJ1TIS TAUJ1.CMUR0.BIT.TIS
#define TAUJ1CMUR1 TAUJ1.CMUR1.UINT8
#define TAUJ1CMUR2 TAUJ1.CMUR2.UINT8
#define TAUJ1CMUR3 TAUJ1.CMUR3.UINT8
#define TAUJ1CSR0 TAUJ1.CSR0.UINT8
#define TAUJ1OVF TAUJ1.CSR0.BIT.OVF
#define TAUJ1CSR1 TAUJ1.CSR1.UINT8
#define TAUJ1CSR2 TAUJ1.CSR2.UINT8
#define TAUJ1CSR3 TAUJ1.CSR3.UINT8
#define TAUJ1CSC0 TAUJ1.CSC0.UINT8
#define TAUJ1CLOV TAUJ1.CSC0.BIT.CLOV
#define TAUJ1CSC1 TAUJ1.CSC1.UINT8
#define TAUJ1CSC2 TAUJ1.CSC2.UINT8
#define TAUJ1CSC3 TAUJ1.CSC3.UINT8
#define TAUJ1TE TAUJ1.TE.UINT8
#define TAUJ1TE00 TAUJ1.TE.BIT.TE00
#define TAUJ1TE01 TAUJ1.TE.BIT.TE01
#define TAUJ1TE02 TAUJ1.TE.BIT.TE02
#define TAUJ1TE03 TAUJ1.TE.BIT.TE03
#define TAUJ1TS TAUJ1.TS.UINT8
#define TAUJ1TS00 TAUJ1.TS.BIT.TS00
#define TAUJ1TS01 TAUJ1.TS.BIT.TS01
#define TAUJ1TS02 TAUJ1.TS.BIT.TS02
#define TAUJ1TS03 TAUJ1.TS.BIT.TS03
#define TAUJ1TT TAUJ1.TT.UINT8
#define TAUJ1TT00 TAUJ1.TT.BIT.TT00
#define TAUJ1TT01 TAUJ1.TT.BIT.TT01
#define TAUJ1TT02 TAUJ1.TT.BIT.TT02
#define TAUJ1TT03 TAUJ1.TT.BIT.TT03
#define TAUJ1TO TAUJ1.TO.UINT8
#define TAUJ1TO00 TAUJ1.TO.BIT.TO00
#define TAUJ1TO01 TAUJ1.TO.BIT.TO01
#define TAUJ1TO02 TAUJ1.TO.BIT.TO02
#define TAUJ1TO03 TAUJ1.TO.BIT.TO03
#define TAUJ1TOE TAUJ1.TOE.UINT8
#define TAUJ1TOE00 TAUJ1.TOE.BIT.TOE00
#define TAUJ1TOE01 TAUJ1.TOE.BIT.TOE01
#define TAUJ1TOE02 TAUJ1.TOE.BIT.TOE02
#define TAUJ1TOE03 TAUJ1.TOE.BIT.TOE03
#define TAUJ1TOL TAUJ1.TOL.UINT8
#define TAUJ1TOL00 TAUJ1.TOL.BIT.TOL00
#define TAUJ1TOL01 TAUJ1.TOL.BIT.TOL01
#define TAUJ1TOL02 TAUJ1.TOL.BIT.TOL02
#define TAUJ1TOL03 TAUJ1.TOL.BIT.TOL03
#define TAUJ1RDT TAUJ1.RDT.UINT8
#define TAUJ1RDT00 TAUJ1.RDT.BIT.RDT00
#define TAUJ1RDT01 TAUJ1.RDT.BIT.RDT01
#define TAUJ1RDT02 TAUJ1.RDT.BIT.RDT02
#define TAUJ1RDT03 TAUJ1.RDT.BIT.RDT03
#define TAUJ1RSF TAUJ1.RSF.UINT8
#define TAUJ1RSF00 TAUJ1.RSF.BIT.RSF00
#define TAUJ1RSF01 TAUJ1.RSF.BIT.RSF01
#define TAUJ1RSF02 TAUJ1.RSF.BIT.RSF02
#define TAUJ1RSF03 TAUJ1.RSF.BIT.RSF03
#define TAUJ1CMOR0 TAUJ1.CMOR0.UINT16
#define TAUJ1MD TAUJ1.CMOR0.BIT.MD
#define TAUJ1COS TAUJ1.CMOR0.BIT.COS
#define TAUJ1STS TAUJ1.CMOR0.BIT.STS
#define TAUJ1MAS TAUJ1.CMOR0.BIT.MAS
#define TAUJ1CCS TAUJ1.CMOR0.BIT.CCS
#define TAUJ1CKS TAUJ1.CMOR0.BIT.CKS
#define TAUJ1CMOR1 TAUJ1.CMOR1.UINT16
#define TAUJ1CMOR2 TAUJ1.CMOR2.UINT16
#define TAUJ1CMOR3 TAUJ1.CMOR3.UINT16
#define TAUJ1TPS TAUJ1.TPS.UINT16
#define TAUJ1PRS0 TAUJ1.TPS.BIT.PRS0
#define TAUJ1PRS1 TAUJ1.TPS.BIT.PRS1
#define TAUJ1PRS2 TAUJ1.TPS.BIT.PRS2
#define TAUJ1PRS3 TAUJ1.TPS.BIT.PRS3
#define TAUJ1BRS TAUJ1.BRS
#define TAUJ1TOM TAUJ1.TOM.UINT8
#define TAUJ1TOM00 TAUJ1.TOM.BIT.TOM00
#define TAUJ1TOM01 TAUJ1.TOM.BIT.TOM01
#define TAUJ1TOM02 TAUJ1.TOM.BIT.TOM02
#define TAUJ1TOM03 TAUJ1.TOM.BIT.TOM03
#define TAUJ1TOC TAUJ1.TOC.UINT8
#define TAUJ1TOC00 TAUJ1.TOC.BIT.TOC00
#define TAUJ1TOC01 TAUJ1.TOC.BIT.TOC01
#define TAUJ1TOC02 TAUJ1.TOC.BIT.TOC02
#define TAUJ1TOC03 TAUJ1.TOC.BIT.TOC03
#define TAUJ1RDE TAUJ1.RDE.UINT8
#define TAUJ1RDE00 TAUJ1.RDE.BIT.RDE00
#define TAUJ1RDE01 TAUJ1.RDE.BIT.RDE01
#define TAUJ1RDE02 TAUJ1.RDE.BIT.RDE02
#define TAUJ1RDE03 TAUJ1.RDE.BIT.RDE03
#define TAUJ1RDM TAUJ1.RDM.UINT8
#define TAUJ1RDM00 TAUJ1.RDM.BIT.RDM00
#define TAUJ1RDM01 TAUJ1.RDM.BIT.RDM01
#define TAUJ1RDM02 TAUJ1.RDM.BIT.RDM02
#define TAUJ1RDM03 TAUJ1.RDM.BIT.RDM03
#define TAUJ2CDR0 TAUJ2.CDR0
#define TAUJ2CDR1 TAUJ2.CDR1
#define TAUJ2CDR2 TAUJ2.CDR2
#define TAUJ2CDR3 TAUJ2.CDR3
#define TAUJ2CNT0 TAUJ2.CNT0
#define TAUJ2CNT1 TAUJ2.CNT1
#define TAUJ2CNT2 TAUJ2.CNT2
#define TAUJ2CNT3 TAUJ2.CNT3
#define TAUJ2CMUR0 TAUJ2.CMUR0.UINT8
#define TAUJ2TIS TAUJ2.CMUR0.BIT.TIS
#define TAUJ2CMUR1 TAUJ2.CMUR1.UINT8
#define TAUJ2CMUR2 TAUJ2.CMUR2.UINT8
#define TAUJ2CMUR3 TAUJ2.CMUR3.UINT8
#define TAUJ2CSR0 TAUJ2.CSR0.UINT8
#define TAUJ2OVF TAUJ2.CSR0.BIT.OVF
#define TAUJ2CSR1 TAUJ2.CSR1.UINT8
#define TAUJ2CSR2 TAUJ2.CSR2.UINT8
#define TAUJ2CSR3 TAUJ2.CSR3.UINT8
#define TAUJ2CSC0 TAUJ2.CSC0.UINT8
#define TAUJ2CLOV TAUJ2.CSC0.BIT.CLOV
#define TAUJ2CSC1 TAUJ2.CSC1.UINT8
#define TAUJ2CSC2 TAUJ2.CSC2.UINT8
#define TAUJ2CSC3 TAUJ2.CSC3.UINT8
#define TAUJ2TE TAUJ2.TE.UINT8
#define TAUJ2TE00 TAUJ2.TE.BIT.TE00
#define TAUJ2TE01 TAUJ2.TE.BIT.TE01
#define TAUJ2TE02 TAUJ2.TE.BIT.TE02
#define TAUJ2TE03 TAUJ2.TE.BIT.TE03
#define TAUJ2TS TAUJ2.TS.UINT8
#define TAUJ2TS00 TAUJ2.TS.BIT.TS00
#define TAUJ2TS01 TAUJ2.TS.BIT.TS01
#define TAUJ2TS02 TAUJ2.TS.BIT.TS02
#define TAUJ2TS03 TAUJ2.TS.BIT.TS03
#define TAUJ2TT TAUJ2.TT.UINT8
#define TAUJ2TT00 TAUJ2.TT.BIT.TT00
#define TAUJ2TT01 TAUJ2.TT.BIT.TT01
#define TAUJ2TT02 TAUJ2.TT.BIT.TT02
#define TAUJ2TT03 TAUJ2.TT.BIT.TT03
#define TAUJ2TO TAUJ2.TO.UINT8
#define TAUJ2TO00 TAUJ2.TO.BIT.TO00
#define TAUJ2TO01 TAUJ2.TO.BIT.TO01
#define TAUJ2TO02 TAUJ2.TO.BIT.TO02
#define TAUJ2TO03 TAUJ2.TO.BIT.TO03
#define TAUJ2TOE TAUJ2.TOE.UINT8
#define TAUJ2TOE00 TAUJ2.TOE.BIT.TOE00
#define TAUJ2TOE01 TAUJ2.TOE.BIT.TOE01
#define TAUJ2TOE02 TAUJ2.TOE.BIT.TOE02
#define TAUJ2TOE03 TAUJ2.TOE.BIT.TOE03
#define TAUJ2TOL TAUJ2.TOL.UINT8
#define TAUJ2TOL00 TAUJ2.TOL.BIT.TOL00
#define TAUJ2TOL01 TAUJ2.TOL.BIT.TOL01
#define TAUJ2TOL02 TAUJ2.TOL.BIT.TOL02
#define TAUJ2TOL03 TAUJ2.TOL.BIT.TOL03
#define TAUJ2RDT TAUJ2.RDT.UINT8
#define TAUJ2RDT00 TAUJ2.RDT.BIT.RDT00
#define TAUJ2RDT01 TAUJ2.RDT.BIT.RDT01
#define TAUJ2RDT02 TAUJ2.RDT.BIT.RDT02
#define TAUJ2RDT03 TAUJ2.RDT.BIT.RDT03
#define TAUJ2RSF TAUJ2.RSF.UINT8
#define TAUJ2RSF00 TAUJ2.RSF.BIT.RSF00
#define TAUJ2RSF01 TAUJ2.RSF.BIT.RSF01
#define TAUJ2RSF02 TAUJ2.RSF.BIT.RSF02
#define TAUJ2RSF03 TAUJ2.RSF.BIT.RSF03
#define TAUJ2CMOR0 TAUJ2.CMOR0.UINT16
#define TAUJ2MD TAUJ2.CMOR0.BIT.MD
#define TAUJ2COS TAUJ2.CMOR0.BIT.COS
#define TAUJ2STS TAUJ2.CMOR0.BIT.STS
#define TAUJ2MAS TAUJ2.CMOR0.BIT.MAS
#define TAUJ2CCS TAUJ2.CMOR0.BIT.CCS
#define TAUJ2CKS TAUJ2.CMOR0.BIT.CKS
#define TAUJ2CMOR1 TAUJ2.CMOR1.UINT16
#define TAUJ2CMOR2 TAUJ2.CMOR2.UINT16
#define TAUJ2CMOR3 TAUJ2.CMOR3.UINT16
#define TAUJ2TPS TAUJ2.TPS.UINT16
#define TAUJ2PRS0 TAUJ2.TPS.BIT.PRS0
#define TAUJ2PRS1 TAUJ2.TPS.BIT.PRS1
#define TAUJ2PRS2 TAUJ2.TPS.BIT.PRS2
#define TAUJ2PRS3 TAUJ2.TPS.BIT.PRS3
#define TAUJ2BRS TAUJ2.BRS
#define TAUJ2TOM TAUJ2.TOM.UINT8
#define TAUJ2TOM00 TAUJ2.TOM.BIT.TOM00
#define TAUJ2TOM01 TAUJ2.TOM.BIT.TOM01
#define TAUJ2TOM02 TAUJ2.TOM.BIT.TOM02
#define TAUJ2TOM03 TAUJ2.TOM.BIT.TOM03
#define TAUJ2TOC TAUJ2.TOC.UINT8
#define TAUJ2TOC00 TAUJ2.TOC.BIT.TOC00
#define TAUJ2TOC01 TAUJ2.TOC.BIT.TOC01
#define TAUJ2TOC02 TAUJ2.TOC.BIT.TOC02
#define TAUJ2TOC03 TAUJ2.TOC.BIT.TOC03
#define TAUJ2RDE TAUJ2.RDE.UINT8
#define TAUJ2RDE00 TAUJ2.RDE.BIT.RDE00
#define TAUJ2RDE01 TAUJ2.RDE.BIT.RDE01
#define TAUJ2RDE02 TAUJ2.RDE.BIT.RDE02
#define TAUJ2RDE03 TAUJ2.RDE.BIT.RDE03
#define TAUJ2RDM TAUJ2.RDM.UINT8
#define TAUJ2RDM00 TAUJ2.RDM.BIT.RDM00
#define TAUJ2RDM01 TAUJ2.RDM.BIT.RDM01
#define TAUJ2RDM02 TAUJ2.RDM.BIT.RDM02
#define TAUJ2RDM03 TAUJ2.RDM.BIT.RDM03

#endif
