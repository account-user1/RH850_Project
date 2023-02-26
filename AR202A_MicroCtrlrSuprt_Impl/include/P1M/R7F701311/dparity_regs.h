/**********************************************************************************************************************
* Module File Name  : dparity_regs.h
* Module Description: Data Parity Registers
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
* 09/11/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef DPARITY_REGS_H
#define DPARITY_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    const uint8  ERR:1;                                    /* ERR              */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type376;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ERRC:1;                                         /* ERRC             */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type377;
typedef struct 
{                                                          /* Bit Access       */
    uint16 EIC0:1;                                         /* EIC0             */
    uint16 EIC1:1;                                         /* EIC1             */
    uint16 EIC2:1;                                         /* EIC2             */
    uint16 EIC3:1;                                         /* EIC3             */
    uint16 :10;                                            /* Reserved Bits    */
    uint16 TMC:2;                                          /* TMC[15:14]       */
    uint16 :16;                                            /* Reserved Bits    */
} __type378;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 ERRADR:32;                                /* ERRADR[31:0]     */
} __type379;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type376 BIT;                                   /* Bit Access       */
} __type1655;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type377 BIT;                                         /* Bit Access       */
} __type1656;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    __type378 BIT;                                         /* Bit Access       */
} __type1657;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type379 BIT;                                   /* Bit Access       */
} __type1658;

typedef struct 
{                                                          /* Module           */
    const __type1655 ERRST_INTC2;                          /* ERRST_INTC2      */
    __type1656 ERRSTC_INTC2;                               /* ERRSTC_INTC2     */
    __type1657 TMC_INTC2;                                  /* TMC_INTC2        */
    const __type1658 ERRADR_INTC2;                         /* ERRADR_INTC2     */
    uint8  dummy229[240];                                  /* Reserved         */
    const __type1655 ERRST_PDMA;                           /* ERRST_PDMA       */
    __type1656 ERRSTC_PDMA;                                /* ERRSTC_PDMA      */
    __type1657 TMC_PDMA;                                   /* TMC_PDMA         */
    const __type1658 ERRADR_PDMA;                          /* ERRADR_PDMA      */
    uint8  dummy230[95984];                                /* Reserved         */
    const __type1655 ERRST_ADCTL00;                        /* ERRST_ADCTL00    */
    __type1656 ERRSTC_ADCTL00;                             /* ERRSTC_ADCTL00   */
    __type1657 TMC_ADCTL00;                                /* TMC_ADCTL00      */
    const __type1658 ERRADR_ADCTL00;                       /* ERRADR_ADCTL00   */
    const __type1655 ERRST_ADCTL10;                        /* ERRST_ADCTL10    */
    __type1656 ERRSTC_ADCTL10;                             /* ERRSTC_ADCTL10   */
    __type1657 TMC_ADCTL10;                                /* TMC_ADCTL10      */
    const __type1658 ERRADR_ADCTL10;                       /* ERRADR_ADCTL10   */
    uint8  dummy231[1351648];                              /* Reserved         */
    const __type1655 ERRST_ENCA00;                         /* ERRST_ENCA00     */
    __type1656 ERRSTC_ENCA00;                              /* ERRSTC_ENCA00    */
    __type1657 TMC_ENCA00;                                 /* TMC_ENCA00       */
    const __type1658 ERRADR_ENCA00;                        /* ERRADR_ENCA00    */
    const __type1655 ERRST_ENCA10;                         /* ERRST_ENCA10     */
    __type1656 ERRSTC_ENCA10;                              /* ERRSTC_ENCA10    */
    __type1657 TMC_ENCA10;                                 /* TMC_ENCA10       */
    const __type1658 ERRADR_ENCA10;                        /* ERRADR_ENCA10    */
    const __type1655 ERRST_OSTM00;                         /* ERRST_OSTM00     */
    __type1656 ERRSTC_OSTM00;                              /* ERRSTC_OSTM00    */
    __type1657 TMC_OSTM00;                                 /* TMC_OSTM00       */
    const __type1658 ERRADR_OSTM00;                        /* ERRADR_OSTM00    */
    const __type1655 ERRST_OSTM10;                         /* ERRST_OSTM10     */
    __type1656 ERRSTC_OSTM10;                              /* ERRSTC_OSTM10    */
    __type1657 TMC_OSTM10;                                 /* TMC_OSTM10       */
    const __type1658 ERRADR_OSTM10;                        /* ERRADR_OSTM10    */
    const __type1655 ERRST_PSI50;                          /* ERRST_PSI50      */
    __type1656 ERRSTC_PSI50;                               /* ERRSTC_PSI50     */
    __type1657 TMC_PSI50;                                  /* TMC_PSI50        */
    const __type1658 ERRADR_PSI50;                         /* ERRADR_PSI50     */
    const __type1655 ERRST_PSI51;                          /* ERRST_PSI51      */
    __type1656 ERRSTC_PSI51;                               /* ERRSTC_PSI51     */
    __type1657 TMC_PSI51;                                  /* TMC_PSI51        */
    const __type1658 ERRADR_PSI51;                         /* ERRADR_PSI51     */
    const __type1655 ERRST_SENT00;                         /* ERRST_SENT00     */
    __type1656 ERRSTC_SENT00;                              /* ERRSTC_SENT00    */
    __type1657 TMC_SENT00;                                 /* TMC_SENT00       */
    const __type1658 ERRADR_SENT00;                        /* ERRADR_SENT00    */
    const __type1655 ERRST_SENT10;                         /* ERRST_SENT10     */
    __type1656 ERRSTC_SENT10;                              /* ERRSTC_SENT10    */
    __type1657 TMC_SENT10;                                 /* TMC_SENT10       */
    const __type1658 ERRADR_SENT10;                        /* ERRADR_SENT10    */
    const __type1655 ERRST_SENT20;                         /* ERRST_SENT20     */
    __type1656 ERRSTC_SENT20;                              /* ERRSTC_SENT20    */
    __type1657 TMC_SENT20;                                 /* TMC_SENT20       */
    const __type1658 ERRADR_SENT20;                        /* ERRADR_SENT20    */
    const __type1655 ERRST_SENT30;                         /* ERRST_SENT30     */
    __type1656 ERRSTC_SENT30;                              /* ERRSTC_SENT30    */
    __type1657 TMC_SENT30;                                 /* TMC_SENT30       */
    const __type1658 ERRADR_SENT30;                        /* ERRADR_SENT30    */
    const __type1655 ERRST_SENT40;                         /* ERRST_SENT40     */
    __type1656 ERRSTC_SENT40;                              /* ERRSTC_SENT40    */
    __type1657 TMC_SENT40;                                 /* TMC_SENT40       */
    const __type1658 ERRADR_SENT40;                        /* ERRADR_SENT40    */
    const __type1655 ERRST_SENT50;                         /* ERRST_SENT50     */
    __type1656 ERRSTC_SENT50;                              /* ERRSTC_SENT50    */
    __type1657 TMC_SENT50;                                 /* TMC_SENT50       */
    const __type1658 ERRADR_SENT50;                        /* ERRADR_SENT50    */
    const __type1655 ERRST_TAUD0;                          /* ERRST_TAUD0      */
    __type1656 ERRSTC_TAUD0;                               /* ERRSTC_TAUD0     */
    __type1657 TMC_TAUD0;                                  /* TMC_TAUD0        */
    const __type1658 ERRADR_TAUD0;                         /* ERRADR_TAUD0     */
    const __type1655 ERRST_TAUD1;                          /* ERRST_TAUD1      */
    __type1656 ERRSTC_TAUD1;                               /* ERRSTC_TAUD1     */
    __type1657 TMC_TAUD1;                                  /* TMC_TAUD1        */
    const __type1658 ERRADR_TAUD1;                         /* ERRADR_TAUD1     */
    const __type1655 ERRST_TAUD2;                          /* ERRST_TAUD2      */
    __type1656 ERRSTC_TAUD2;                               /* ERRSTC_TAUD2     */
    __type1657 TMC_TAUD2;                                  /* TMC_TAUD2        */
    const __type1658 ERRADR_TAUD2;                         /* ERRADR_TAUD2     */
    const __type1655 ERRST_TAUJ0;                          /* ERRST_TAUJ0      */
    __type1656 ERRSTC_TAUJ0;                               /* ERRSTC_TAUJ0     */
    __type1657 TMC_TAUJ0;                                  /* TMC_TAUJ0        */
    const __type1658 ERRADR_TAUJ0;                         /* ERRADR_TAUJ0     */
    const __type1655 ERRST_TAUJ1;                          /* ERRST_TAUJ1      */
    __type1656 ERRSTC_TAUJ1;                               /* ERRSTC_TAUJ1     */
    __type1657 TMC_TAUJ1;                                  /* TMC_TAUJ1        */
    const __type1658 ERRADR_TAUJ1;                         /* ERRADR_TAUJ1     */
    const __type1655 ERRST_TAUJ2;                          /* ERRST_TAUJ2      */
    __type1656 ERRSTC_TAUJ2;                               /* ERRSTC_TAUJ2     */
    __type1657 TMC_TAUJ2;                                  /* TMC_TAUJ2        */
    const __type1658 ERRADR_TAUJ2;                         /* ERRADR_TAUJ2     */
    const __type1655 ERRST_TSG30;                          /* ERRST_TSG30      */
    __type1656 ERRSTC_TSG30;                               /* ERRSTC_TSG30     */
    __type1657 TMC_TSG30;                                  /* TMC_TSG30        */
    const __type1658 ERRADR_TSG30;                         /* ERRADR_TSG30     */
    const __type1655 ERRST_TSG31;                          /* ERRST_TSG31      */
    __type1656 ERRSTC_TSG31;                               /* ERRSTC_TSG31     */
    __type1657 TMC_TSG31;                                  /* TMC_TSG31        */
    const __type1658 ERRADR_TSG31;                         /* ERRADR_TSG31     */
    const __type1655 ERRST_OSTM_CLKSEL;                    /* ERRST_OSTM_CLKSEL */
    __type1656 ERRSTC_OSTM_CLKSEL;                         /* ERRSTC_OSTM_CLKSEL */
    __type1657 TMC_OSTM_CLKSEL;                            /* TMC_OSTM_CLKSEL  */
    const __type1658 ERRADR_OSTM_CLKSEL;                   /* ERRADR_OSTM_CLKSEL */
    uint8  dummy232[1883824];                              /* Reserved         */
    const __type1655 ERRST_OSTM30;                         /* ERRST_OSTM30     */
    __type1656 ERRSTC_OSTM30;                              /* ERRSTC_OSTM30    */
    __type1657 TMC_OSTM30;                                 /* TMC_OSTM30       */
    const __type1658 ERRADR_OSTM30;                        /* ERRADR_OSTM30    */
    const __type1655 ERRST_OSTM40;                         /* ERRST_OSTM40     */
    __type1656 ERRSTC_OSTM40;                              /* ERRSTC_OSTM40    */
    __type1657 TMC_OSTM40;                                 /* TMC_OSTM40       */
    const __type1658 ERRADR_OSTM40;                        /* ERRADR_OSTM40    */
    const __type1655 ERRST_OSTM50;                         /* ERRST_OSTM50     */
    __type1656 ERRSTC_OSTM50;                              /* ERRSTC_OSTM50    */
    __type1657 TMC_OSTM50;                                 /* TMC_OSTM50       */
    const __type1658 ERRADR_OSTM50;                        /* ERRADR_OSTM50    */
    const __type1655 ERRST_OSTM60;                         /* ERRST_OSTM60     */
    __type1656 ERRSTC_OSTM60;                              /* ERRSTC_OSTM60    */
    __type1657 TMC_OSTM60;                                 /* TMC_OSTM60       */
    const __type1658 ERRADR_OSTM60;                        /* ERRADR_OSTM60    */
    const __type1655 ERRST_OSTM70;                         /* ERRST_OSTM70     */
    __type1656 ERRSTC_OSTM70;                              /* ERRSTC_OSTM70    */
    __type1657 TMC_OSTM70;                                 /* TMC_OSTM70       */
    const __type1658 ERRADR_OSTM70;                        /* ERRADR_OSTM70    */
    const __type1655 ERRST_CSIH00;                         /* ERRST_CSIH00     */
    __type1656 ERRSTC_CSIH00;                              /* ERRSTC_CSIH00    */
    __type1657 TMC_CSIH00;                                 /* TMC_CSIH00       */
    const __type1658 ERRADR_CSIH00;                        /* ERRADR_CSIH00    */
    const __type1655 ERRST_CSIH10;                         /* ERRST_CSIH10     */
    __type1656 ERRSTC_CSIH10;                              /* ERRSTC_CSIH10    */
    __type1657 TMC_CSIH10;                                 /* TMC_CSIH10       */
    const __type1658 ERRADR_CSIH10;                        /* ERRADR_CSIH10    */
    const __type1655 ERRST_CSIH20;                         /* ERRST_CSIH20     */
    __type1656 ERRSTC_CSIH20;                              /* ERRSTC_CSIH20    */
    __type1657 TMC_CSIH20;                                 /* TMC_CSIH20       */
    const __type1658 ERRADR_CSIH20;                        /* ERRADR_CSIH20    */
    const __type1655 ERRST_CSIH30;                         /* ERRST_CSIH30     */
    __type1656 ERRSTC_CSIH30;                              /* ERRSTC_CSIH30    */
    __type1657 TMC_CSIH30;                                 /* TMC_CSIH30       */
    const __type1658 ERRADR_CSIH30;                        /* ERRADR_CSIH30    */
    const __type1655 ERRST_CSIG0;                          /* ERRST_CSIG0      */
    __type1656 ERRSTC_CSIG0;                               /* ERRSTC_CSIG0     */
    __type1657 TMC_CSIG0;                                  /* TMC_CSIG0        */
    const __type1658 ERRADR_CSIG0;                         /* ERRADR_CSIG0     */
    const __type1655 ERRST_CHBB0;                          /* ERRST_CHBB0      */
    __type1656 ERRSTC_CHBB0;                               /* ERRSTC_CHBB0     */
    __type1657 TMC_CHBB0;                                  /* TMC_CHBB0        */
    const __type1658 ERRADR_CHBB0;                         /* ERRADR_CHBB0     */
    const __type1655 ERRST_CHBA0;                          /* ERRST_CHBA0      */
    __type1656 ERRSTC_CHBA0;                               /* ERRSTC_CHBA0     */
    __type1657 TMC_CHBA0;                                  /* TMC_CHBA0        */
    const __type1658 ERRADR_CHBA0;                         /* ERRADR_CHBA0     */
    const __type1655 ERRST_CHBA1;                          /* ERRST_CHBA1      */
    __type1656 ERRSTC_CHBA1;                               /* ERRSTC_CHBA1     */
    __type1657 TMC_CHBA1;                                  /* TMC_CHBA1        */
    const __type1658 ERRADR_CHBA1;                         /* ERRADR_CHBA1     */
    const __type1655 ERRST_CHBA2;                          /* ERRST_CHBA2      */
    __type1656 ERRSTC_CHBA2;                               /* ERRSTC_CHBA2     */
    __type1657 TMC_CHBA2;                                  /* TMC_CHBA2        */
    const __type1658 ERRADR_CHBA2;                         /* ERRADR_CHBA2     */
    const __type1655 ERRST_CHBA3;                          /* ERRST_CHBA3      */
    __type1656 ERRSTC_CHBA3;                               /* ERRSTC_CHBA3     */
    __type1657 TMC_CHBA3;                                  /* TMC_CHBA3        */
    const __type1658 ERRADR_CHBA3;                         /* ERRADR_CHBA3     */
} __type2584;

__IOREG(APDP, 0xFFC68800, __READ_WRITE, __type2584);                  /* APDP */

#define APDPERRST_INTC2 APDP.ERRST_INTC2.UINT32
#define APDPERRST_INTC2L APDP.ERRST_INTC2.UINT16[L]
#define APDPERRST_INTC2LL APDP.ERRST_INTC2.UINT8[LL]
#define APDPERRST_INTC2LH APDP.ERRST_INTC2.UINT8[LH]
#define APDPERRST_INTC2H APDP.ERRST_INTC2.UINT16[H]
#define APDPERRST_INTC2HL APDP.ERRST_INTC2.UINT8[HL]
#define APDPERRST_INTC2HH APDP.ERRST_INTC2.UINT8[HH]
#define APDPERR APDP.ERRST_INTC2.BIT.ERR
#define APDPERRSTC_INTC2 APDP.ERRSTC_INTC2.UINT32
#define APDPERRSTC_INTC2L APDP.ERRSTC_INTC2.UINT16[L]
#define APDPERRSTC_INTC2LL APDP.ERRSTC_INTC2.UINT8[LL]
#define APDPERRSTC_INTC2LH APDP.ERRSTC_INTC2.UINT8[LH]
#define APDPERRSTC_INTC2H APDP.ERRSTC_INTC2.UINT16[H]
#define APDPERRSTC_INTC2HL APDP.ERRSTC_INTC2.UINT8[HL]
#define APDPERRSTC_INTC2HH APDP.ERRSTC_INTC2.UINT8[HH]
#define APDPERRC APDP.ERRSTC_INTC2.BIT.ERRC
#define APDPTMC_INTC2 APDP.TMC_INTC2.UINT32
#define APDPTMC_INTC2L APDP.TMC_INTC2.UINT16[L]
#define APDPTMC_INTC2H APDP.TMC_INTC2.UINT16[H]
#define APDPEIC0 APDP.TMC_INTC2.BIT.EIC0
#define APDPEIC1 APDP.TMC_INTC2.BIT.EIC1
#define APDPEIC2 APDP.TMC_INTC2.BIT.EIC2
#define APDPEIC3 APDP.TMC_INTC2.BIT.EIC3
#define APDPTMC APDP.TMC_INTC2.BIT.TMC
#define APDPERRADR_INTC2 APDP.ERRADR_INTC2.UINT32
#define APDPERRADR APDP.ERRADR_INTC2.BIT.ERRADR
#define APDPERRST_PDMA APDP.ERRST_PDMA.UINT32
#define APDPERRST_PDMAL APDP.ERRST_PDMA.UINT16[L]
#define APDPERRST_PDMALL APDP.ERRST_PDMA.UINT8[LL]
#define APDPERRST_PDMALH APDP.ERRST_PDMA.UINT8[LH]
#define APDPERRST_PDMAH APDP.ERRST_PDMA.UINT16[H]
#define APDPERRST_PDMAHL APDP.ERRST_PDMA.UINT8[HL]
#define APDPERRST_PDMAHH APDP.ERRST_PDMA.UINT8[HH]
#define APDPERRSTC_PDMA APDP.ERRSTC_PDMA.UINT32
#define APDPERRSTC_PDMAL APDP.ERRSTC_PDMA.UINT16[L]
#define APDPERRSTC_PDMALL APDP.ERRSTC_PDMA.UINT8[LL]
#define APDPERRSTC_PDMALH APDP.ERRSTC_PDMA.UINT8[LH]
#define APDPERRSTC_PDMAH APDP.ERRSTC_PDMA.UINT16[H]
#define APDPERRSTC_PDMAHL APDP.ERRSTC_PDMA.UINT8[HL]
#define APDPERRSTC_PDMAHH APDP.ERRSTC_PDMA.UINT8[HH]
#define APDPTMC_PDMA APDP.TMC_PDMA.UINT32
#define APDPTMC_PDMAL APDP.TMC_PDMA.UINT16[L]
#define APDPTMC_PDMAH APDP.TMC_PDMA.UINT16[H]
#define APDPERRADR_PDMA APDP.ERRADR_PDMA.UINT32
#define APDPERRST_ADCTL00 APDP.ERRST_ADCTL00.UINT32
#define APDPERRST_ADCTL00L APDP.ERRST_ADCTL00.UINT16[L]
#define APDPERRST_ADCTL00LL APDP.ERRST_ADCTL00.UINT8[LL]
#define APDPERRST_ADCTL00LH APDP.ERRST_ADCTL00.UINT8[LH]
#define APDPERRST_ADCTL00H APDP.ERRST_ADCTL00.UINT16[H]
#define APDPERRST_ADCTL00HL APDP.ERRST_ADCTL00.UINT8[HL]
#define APDPERRST_ADCTL00HH APDP.ERRST_ADCTL00.UINT8[HH]
#define APDPERRSTC_ADCTL00 APDP.ERRSTC_ADCTL00.UINT32
#define APDPERRSTC_ADCTL00L APDP.ERRSTC_ADCTL00.UINT16[L]
#define APDPERRSTC_ADCTL00LL APDP.ERRSTC_ADCTL00.UINT8[LL]
#define APDPERRSTC_ADCTL00LH APDP.ERRSTC_ADCTL00.UINT8[LH]
#define APDPERRSTC_ADCTL00H APDP.ERRSTC_ADCTL00.UINT16[H]
#define APDPERRSTC_ADCTL00HL APDP.ERRSTC_ADCTL00.UINT8[HL]
#define APDPERRSTC_ADCTL00HH APDP.ERRSTC_ADCTL00.UINT8[HH]
#define APDPTMC_ADCTL00 APDP.TMC_ADCTL00.UINT32
#define APDPTMC_ADCTL00L APDP.TMC_ADCTL00.UINT16[L]
#define APDPTMC_ADCTL00H APDP.TMC_ADCTL00.UINT16[H]
#define APDPERRADR_ADCTL00 APDP.ERRADR_ADCTL00.UINT32
#define APDPERRST_ADCTL10 APDP.ERRST_ADCTL10.UINT32
#define APDPERRST_ADCTL10L APDP.ERRST_ADCTL10.UINT16[L]
#define APDPERRST_ADCTL10LL APDP.ERRST_ADCTL10.UINT8[LL]
#define APDPERRST_ADCTL10LH APDP.ERRST_ADCTL10.UINT8[LH]
#define APDPERRST_ADCTL10H APDP.ERRST_ADCTL10.UINT16[H]
#define APDPERRST_ADCTL10HL APDP.ERRST_ADCTL10.UINT8[HL]
#define APDPERRST_ADCTL10HH APDP.ERRST_ADCTL10.UINT8[HH]
#define APDPERRSTC_ADCTL10 APDP.ERRSTC_ADCTL10.UINT32
#define APDPERRSTC_ADCTL10L APDP.ERRSTC_ADCTL10.UINT16[L]
#define APDPERRSTC_ADCTL10LL APDP.ERRSTC_ADCTL10.UINT8[LL]
#define APDPERRSTC_ADCTL10LH APDP.ERRSTC_ADCTL10.UINT8[LH]
#define APDPERRSTC_ADCTL10H APDP.ERRSTC_ADCTL10.UINT16[H]
#define APDPERRSTC_ADCTL10HL APDP.ERRSTC_ADCTL10.UINT8[HL]
#define APDPERRSTC_ADCTL10HH APDP.ERRSTC_ADCTL10.UINT8[HH]
#define APDPTMC_ADCTL10 APDP.TMC_ADCTL10.UINT32
#define APDPTMC_ADCTL10L APDP.TMC_ADCTL10.UINT16[L]
#define APDPTMC_ADCTL10H APDP.TMC_ADCTL10.UINT16[H]
#define APDPERRADR_ADCTL10 APDP.ERRADR_ADCTL10.UINT32
#define APDPERRST_ENCA00 APDP.ERRST_ENCA00.UINT32
#define APDPERRST_ENCA00L APDP.ERRST_ENCA00.UINT16[L]
#define APDPERRST_ENCA00LL APDP.ERRST_ENCA00.UINT8[LL]
#define APDPERRST_ENCA00LH APDP.ERRST_ENCA00.UINT8[LH]
#define APDPERRST_ENCA00H APDP.ERRST_ENCA00.UINT16[H]
#define APDPERRST_ENCA00HL APDP.ERRST_ENCA00.UINT8[HL]
#define APDPERRST_ENCA00HH APDP.ERRST_ENCA00.UINT8[HH]
#define APDPERRSTC_ENCA00 APDP.ERRSTC_ENCA00.UINT32
#define APDPERRSTC_ENCA00L APDP.ERRSTC_ENCA00.UINT16[L]
#define APDPERRSTC_ENCA00LL APDP.ERRSTC_ENCA00.UINT8[LL]
#define APDPERRSTC_ENCA00LH APDP.ERRSTC_ENCA00.UINT8[LH]
#define APDPERRSTC_ENCA00H APDP.ERRSTC_ENCA00.UINT16[H]
#define APDPERRSTC_ENCA00HL APDP.ERRSTC_ENCA00.UINT8[HL]
#define APDPERRSTC_ENCA00HH APDP.ERRSTC_ENCA00.UINT8[HH]
#define APDPTMC_ENCA00 APDP.TMC_ENCA00.UINT32
#define APDPTMC_ENCA00L APDP.TMC_ENCA00.UINT16[L]
#define APDPTMC_ENCA00H APDP.TMC_ENCA00.UINT16[H]
#define APDPERRADR_ENCA00 APDP.ERRADR_ENCA00.UINT32
#define APDPERRST_ENCA10 APDP.ERRST_ENCA10.UINT32
#define APDPERRST_ENCA10L APDP.ERRST_ENCA10.UINT16[L]
#define APDPERRST_ENCA10LL APDP.ERRST_ENCA10.UINT8[LL]
#define APDPERRST_ENCA10LH APDP.ERRST_ENCA10.UINT8[LH]
#define APDPERRST_ENCA10H APDP.ERRST_ENCA10.UINT16[H]
#define APDPERRST_ENCA10HL APDP.ERRST_ENCA10.UINT8[HL]
#define APDPERRST_ENCA10HH APDP.ERRST_ENCA10.UINT8[HH]
#define APDPERRSTC_ENCA10 APDP.ERRSTC_ENCA10.UINT32
#define APDPERRSTC_ENCA10L APDP.ERRSTC_ENCA10.UINT16[L]
#define APDPERRSTC_ENCA10LL APDP.ERRSTC_ENCA10.UINT8[LL]
#define APDPERRSTC_ENCA10LH APDP.ERRSTC_ENCA10.UINT8[LH]
#define APDPERRSTC_ENCA10H APDP.ERRSTC_ENCA10.UINT16[H]
#define APDPERRSTC_ENCA10HL APDP.ERRSTC_ENCA10.UINT8[HL]
#define APDPERRSTC_ENCA10HH APDP.ERRSTC_ENCA10.UINT8[HH]
#define APDPTMC_ENCA10 APDP.TMC_ENCA10.UINT32
#define APDPTMC_ENCA10L APDP.TMC_ENCA10.UINT16[L]
#define APDPTMC_ENCA10H APDP.TMC_ENCA10.UINT16[H]
#define APDPERRADR_ENCA10 APDP.ERRADR_ENCA10.UINT32
#define APDPERRST_OSTM00 APDP.ERRST_OSTM00.UINT32
#define APDPERRST_OSTM00L APDP.ERRST_OSTM00.UINT16[L]
#define APDPERRST_OSTM00LL APDP.ERRST_OSTM00.UINT8[LL]
#define APDPERRST_OSTM00LH APDP.ERRST_OSTM00.UINT8[LH]
#define APDPERRST_OSTM00H APDP.ERRST_OSTM00.UINT16[H]
#define APDPERRST_OSTM00HL APDP.ERRST_OSTM00.UINT8[HL]
#define APDPERRST_OSTM00HH APDP.ERRST_OSTM00.UINT8[HH]
#define APDPERRSTC_OSTM00 APDP.ERRSTC_OSTM00.UINT32
#define APDPERRSTC_OSTM00L APDP.ERRSTC_OSTM00.UINT16[L]
#define APDPERRSTC_OSTM00LL APDP.ERRSTC_OSTM00.UINT8[LL]
#define APDPERRSTC_OSTM00LH APDP.ERRSTC_OSTM00.UINT8[LH]
#define APDPERRSTC_OSTM00H APDP.ERRSTC_OSTM00.UINT16[H]
#define APDPERRSTC_OSTM00HL APDP.ERRSTC_OSTM00.UINT8[HL]
#define APDPERRSTC_OSTM00HH APDP.ERRSTC_OSTM00.UINT8[HH]
#define APDPTMC_OSTM00 APDP.TMC_OSTM00.UINT32
#define APDPTMC_OSTM00L APDP.TMC_OSTM00.UINT16[L]
#define APDPTMC_OSTM00H APDP.TMC_OSTM00.UINT16[H]
#define APDPERRADR_OSTM00 APDP.ERRADR_OSTM00.UINT32
#define APDPERRST_OSTM10 APDP.ERRST_OSTM10.UINT32
#define APDPERRST_OSTM10L APDP.ERRST_OSTM10.UINT16[L]
#define APDPERRST_OSTM10LL APDP.ERRST_OSTM10.UINT8[LL]
#define APDPERRST_OSTM10LH APDP.ERRST_OSTM10.UINT8[LH]
#define APDPERRST_OSTM10H APDP.ERRST_OSTM10.UINT16[H]
#define APDPERRST_OSTM10HL APDP.ERRST_OSTM10.UINT8[HL]
#define APDPERRST_OSTM10HH APDP.ERRST_OSTM10.UINT8[HH]
#define APDPERRSTC_OSTM10 APDP.ERRSTC_OSTM10.UINT32
#define APDPERRSTC_OSTM10L APDP.ERRSTC_OSTM10.UINT16[L]
#define APDPERRSTC_OSTM10LL APDP.ERRSTC_OSTM10.UINT8[LL]
#define APDPERRSTC_OSTM10LH APDP.ERRSTC_OSTM10.UINT8[LH]
#define APDPERRSTC_OSTM10H APDP.ERRSTC_OSTM10.UINT16[H]
#define APDPERRSTC_OSTM10HL APDP.ERRSTC_OSTM10.UINT8[HL]
#define APDPERRSTC_OSTM10HH APDP.ERRSTC_OSTM10.UINT8[HH]
#define APDPTMC_OSTM10 APDP.TMC_OSTM10.UINT32
#define APDPTMC_OSTM10L APDP.TMC_OSTM10.UINT16[L]
#define APDPTMC_OSTM10H APDP.TMC_OSTM10.UINT16[H]
#define APDPERRADR_OSTM10 APDP.ERRADR_OSTM10.UINT32
#define APDPERRST_PSI50 APDP.ERRST_PSI50.UINT32
#define APDPERRST_PSI50L APDP.ERRST_PSI50.UINT16[L]
#define APDPERRST_PSI50LL APDP.ERRST_PSI50.UINT8[LL]
#define APDPERRST_PSI50LH APDP.ERRST_PSI50.UINT8[LH]
#define APDPERRST_PSI50H APDP.ERRST_PSI50.UINT16[H]
#define APDPERRST_PSI50HL APDP.ERRST_PSI50.UINT8[HL]
#define APDPERRST_PSI50HH APDP.ERRST_PSI50.UINT8[HH]
#define APDPERRSTC_PSI50 APDP.ERRSTC_PSI50.UINT32
#define APDPERRSTC_PSI50L APDP.ERRSTC_PSI50.UINT16[L]
#define APDPERRSTC_PSI50LL APDP.ERRSTC_PSI50.UINT8[LL]
#define APDPERRSTC_PSI50LH APDP.ERRSTC_PSI50.UINT8[LH]
#define APDPERRSTC_PSI50H APDP.ERRSTC_PSI50.UINT16[H]
#define APDPERRSTC_PSI50HL APDP.ERRSTC_PSI50.UINT8[HL]
#define APDPERRSTC_PSI50HH APDP.ERRSTC_PSI50.UINT8[HH]
#define APDPTMC_PSI50 APDP.TMC_PSI50.UINT32
#define APDPTMC_PSI50L APDP.TMC_PSI50.UINT16[L]
#define APDPTMC_PSI50H APDP.TMC_PSI50.UINT16[H]
#define APDPERRADR_PSI50 APDP.ERRADR_PSI50.UINT32
#define APDPERRST_PSI51 APDP.ERRST_PSI51.UINT32
#define APDPERRST_PSI51L APDP.ERRST_PSI51.UINT16[L]
#define APDPERRST_PSI51LL APDP.ERRST_PSI51.UINT8[LL]
#define APDPERRST_PSI51LH APDP.ERRST_PSI51.UINT8[LH]
#define APDPERRST_PSI51H APDP.ERRST_PSI51.UINT16[H]
#define APDPERRST_PSI51HL APDP.ERRST_PSI51.UINT8[HL]
#define APDPERRST_PSI51HH APDP.ERRST_PSI51.UINT8[HH]
#define APDPERRSTC_PSI51 APDP.ERRSTC_PSI51.UINT32
#define APDPERRSTC_PSI51L APDP.ERRSTC_PSI51.UINT16[L]
#define APDPERRSTC_PSI51LL APDP.ERRSTC_PSI51.UINT8[LL]
#define APDPERRSTC_PSI51LH APDP.ERRSTC_PSI51.UINT8[LH]
#define APDPERRSTC_PSI51H APDP.ERRSTC_PSI51.UINT16[H]
#define APDPERRSTC_PSI51HL APDP.ERRSTC_PSI51.UINT8[HL]
#define APDPERRSTC_PSI51HH APDP.ERRSTC_PSI51.UINT8[HH]
#define APDPTMC_PSI51 APDP.TMC_PSI51.UINT32
#define APDPTMC_PSI51L APDP.TMC_PSI51.UINT16[L]
#define APDPTMC_PSI51H APDP.TMC_PSI51.UINT16[H]
#define APDPERRADR_PSI51 APDP.ERRADR_PSI51.UINT32
#define APDPERRST_SENT00 APDP.ERRST_SENT00.UINT32
#define APDPERRST_SENT00L APDP.ERRST_SENT00.UINT16[L]
#define APDPERRST_SENT00LL APDP.ERRST_SENT00.UINT8[LL]
#define APDPERRST_SENT00LH APDP.ERRST_SENT00.UINT8[LH]
#define APDPERRST_SENT00H APDP.ERRST_SENT00.UINT16[H]
#define APDPERRST_SENT00HL APDP.ERRST_SENT00.UINT8[HL]
#define APDPERRST_SENT00HH APDP.ERRST_SENT00.UINT8[HH]
#define APDPERRSTC_SENT00 APDP.ERRSTC_SENT00.UINT32
#define APDPERRSTC_SENT00L APDP.ERRSTC_SENT00.UINT16[L]
#define APDPERRSTC_SENT00LL APDP.ERRSTC_SENT00.UINT8[LL]
#define APDPERRSTC_SENT00LH APDP.ERRSTC_SENT00.UINT8[LH]
#define APDPERRSTC_SENT00H APDP.ERRSTC_SENT00.UINT16[H]
#define APDPERRSTC_SENT00HL APDP.ERRSTC_SENT00.UINT8[HL]
#define APDPERRSTC_SENT00HH APDP.ERRSTC_SENT00.UINT8[HH]
#define APDPTMC_SENT00 APDP.TMC_SENT00.UINT32
#define APDPTMC_SENT00L APDP.TMC_SENT00.UINT16[L]
#define APDPTMC_SENT00H APDP.TMC_SENT00.UINT16[H]
#define APDPERRADR_SENT00 APDP.ERRADR_SENT00.UINT32
#define APDPERRST_SENT10 APDP.ERRST_SENT10.UINT32
#define APDPERRST_SENT10L APDP.ERRST_SENT10.UINT16[L]
#define APDPERRST_SENT10LL APDP.ERRST_SENT10.UINT8[LL]
#define APDPERRST_SENT10LH APDP.ERRST_SENT10.UINT8[LH]
#define APDPERRST_SENT10H APDP.ERRST_SENT10.UINT16[H]
#define APDPERRST_SENT10HL APDP.ERRST_SENT10.UINT8[HL]
#define APDPERRST_SENT10HH APDP.ERRST_SENT10.UINT8[HH]
#define APDPERRSTC_SENT10 APDP.ERRSTC_SENT10.UINT32
#define APDPERRSTC_SENT10L APDP.ERRSTC_SENT10.UINT16[L]
#define APDPERRSTC_SENT10LL APDP.ERRSTC_SENT10.UINT8[LL]
#define APDPERRSTC_SENT10LH APDP.ERRSTC_SENT10.UINT8[LH]
#define APDPERRSTC_SENT10H APDP.ERRSTC_SENT10.UINT16[H]
#define APDPERRSTC_SENT10HL APDP.ERRSTC_SENT10.UINT8[HL]
#define APDPERRSTC_SENT10HH APDP.ERRSTC_SENT10.UINT8[HH]
#define APDPTMC_SENT10 APDP.TMC_SENT10.UINT32
#define APDPTMC_SENT10L APDP.TMC_SENT10.UINT16[L]
#define APDPTMC_SENT10H APDP.TMC_SENT10.UINT16[H]
#define APDPERRADR_SENT10 APDP.ERRADR_SENT10.UINT32
#define APDPERRST_SENT20 APDP.ERRST_SENT20.UINT32
#define APDPERRST_SENT20L APDP.ERRST_SENT20.UINT16[L]
#define APDPERRST_SENT20LL APDP.ERRST_SENT20.UINT8[LL]
#define APDPERRST_SENT20LH APDP.ERRST_SENT20.UINT8[LH]
#define APDPERRST_SENT20H APDP.ERRST_SENT20.UINT16[H]
#define APDPERRST_SENT20HL APDP.ERRST_SENT20.UINT8[HL]
#define APDPERRST_SENT20HH APDP.ERRST_SENT20.UINT8[HH]
#define APDPERRSTC_SENT20 APDP.ERRSTC_SENT20.UINT32
#define APDPERRSTC_SENT20L APDP.ERRSTC_SENT20.UINT16[L]
#define APDPERRSTC_SENT20LL APDP.ERRSTC_SENT20.UINT8[LL]
#define APDPERRSTC_SENT20LH APDP.ERRSTC_SENT20.UINT8[LH]
#define APDPERRSTC_SENT20H APDP.ERRSTC_SENT20.UINT16[H]
#define APDPERRSTC_SENT20HL APDP.ERRSTC_SENT20.UINT8[HL]
#define APDPERRSTC_SENT20HH APDP.ERRSTC_SENT20.UINT8[HH]
#define APDPTMC_SENT20 APDP.TMC_SENT20.UINT32
#define APDPTMC_SENT20L APDP.TMC_SENT20.UINT16[L]
#define APDPTMC_SENT20H APDP.TMC_SENT20.UINT16[H]
#define APDPERRADR_SENT20 APDP.ERRADR_SENT20.UINT32
#define APDPERRST_SENT30 APDP.ERRST_SENT30.UINT32
#define APDPERRST_SENT30L APDP.ERRST_SENT30.UINT16[L]
#define APDPERRST_SENT30LL APDP.ERRST_SENT30.UINT8[LL]
#define APDPERRST_SENT30LH APDP.ERRST_SENT30.UINT8[LH]
#define APDPERRST_SENT30H APDP.ERRST_SENT30.UINT16[H]
#define APDPERRST_SENT30HL APDP.ERRST_SENT30.UINT8[HL]
#define APDPERRST_SENT30HH APDP.ERRST_SENT30.UINT8[HH]
#define APDPERRSTC_SENT30 APDP.ERRSTC_SENT30.UINT32
#define APDPERRSTC_SENT30L APDP.ERRSTC_SENT30.UINT16[L]
#define APDPERRSTC_SENT30LL APDP.ERRSTC_SENT30.UINT8[LL]
#define APDPERRSTC_SENT30LH APDP.ERRSTC_SENT30.UINT8[LH]
#define APDPERRSTC_SENT30H APDP.ERRSTC_SENT30.UINT16[H]
#define APDPERRSTC_SENT30HL APDP.ERRSTC_SENT30.UINT8[HL]
#define APDPERRSTC_SENT30HH APDP.ERRSTC_SENT30.UINT8[HH]
#define APDPTMC_SENT30 APDP.TMC_SENT30.UINT32
#define APDPTMC_SENT30L APDP.TMC_SENT30.UINT16[L]
#define APDPTMC_SENT30H APDP.TMC_SENT30.UINT16[H]
#define APDPERRADR_SENT30 APDP.ERRADR_SENT30.UINT32
#define APDPERRST_SENT40 APDP.ERRST_SENT40.UINT32
#define APDPERRST_SENT40L APDP.ERRST_SENT40.UINT16[L]
#define APDPERRST_SENT40LL APDP.ERRST_SENT40.UINT8[LL]
#define APDPERRST_SENT40LH APDP.ERRST_SENT40.UINT8[LH]
#define APDPERRST_SENT40H APDP.ERRST_SENT40.UINT16[H]
#define APDPERRST_SENT40HL APDP.ERRST_SENT40.UINT8[HL]
#define APDPERRST_SENT40HH APDP.ERRST_SENT40.UINT8[HH]
#define APDPERRSTC_SENT40 APDP.ERRSTC_SENT40.UINT32
#define APDPERRSTC_SENT40L APDP.ERRSTC_SENT40.UINT16[L]
#define APDPERRSTC_SENT40LL APDP.ERRSTC_SENT40.UINT8[LL]
#define APDPERRSTC_SENT40LH APDP.ERRSTC_SENT40.UINT8[LH]
#define APDPERRSTC_SENT40H APDP.ERRSTC_SENT40.UINT16[H]
#define APDPERRSTC_SENT40HL APDP.ERRSTC_SENT40.UINT8[HL]
#define APDPERRSTC_SENT40HH APDP.ERRSTC_SENT40.UINT8[HH]
#define APDPTMC_SENT40 APDP.TMC_SENT40.UINT32
#define APDPTMC_SENT40L APDP.TMC_SENT40.UINT16[L]
#define APDPTMC_SENT40H APDP.TMC_SENT40.UINT16[H]
#define APDPERRADR_SENT40 APDP.ERRADR_SENT40.UINT32
#define APDPERRST_SENT50 APDP.ERRST_SENT50.UINT32
#define APDPERRST_SENT50L APDP.ERRST_SENT50.UINT16[L]
#define APDPERRST_SENT50LL APDP.ERRST_SENT50.UINT8[LL]
#define APDPERRST_SENT50LH APDP.ERRST_SENT50.UINT8[LH]
#define APDPERRST_SENT50H APDP.ERRST_SENT50.UINT16[H]
#define APDPERRST_SENT50HL APDP.ERRST_SENT50.UINT8[HL]
#define APDPERRST_SENT50HH APDP.ERRST_SENT50.UINT8[HH]
#define APDPERRSTC_SENT50 APDP.ERRSTC_SENT50.UINT32
#define APDPERRSTC_SENT50L APDP.ERRSTC_SENT50.UINT16[L]
#define APDPERRSTC_SENT50LL APDP.ERRSTC_SENT50.UINT8[LL]
#define APDPERRSTC_SENT50LH APDP.ERRSTC_SENT50.UINT8[LH]
#define APDPERRSTC_SENT50H APDP.ERRSTC_SENT50.UINT16[H]
#define APDPERRSTC_SENT50HL APDP.ERRSTC_SENT50.UINT8[HL]
#define APDPERRSTC_SENT50HH APDP.ERRSTC_SENT50.UINT8[HH]
#define APDPTMC_SENT50 APDP.TMC_SENT50.UINT32
#define APDPTMC_SENT50L APDP.TMC_SENT50.UINT16[L]
#define APDPTMC_SENT50H APDP.TMC_SENT50.UINT16[H]
#define APDPERRADR_SENT50 APDP.ERRADR_SENT50.UINT32
#define APDPERRST_TAUD0 APDP.ERRST_TAUD0.UINT32
#define APDPERRST_TAUD0L APDP.ERRST_TAUD0.UINT16[L]
#define APDPERRST_TAUD0LL APDP.ERRST_TAUD0.UINT8[LL]
#define APDPERRST_TAUD0LH APDP.ERRST_TAUD0.UINT8[LH]
#define APDPERRST_TAUD0H APDP.ERRST_TAUD0.UINT16[H]
#define APDPERRST_TAUD0HL APDP.ERRST_TAUD0.UINT8[HL]
#define APDPERRST_TAUD0HH APDP.ERRST_TAUD0.UINT8[HH]
#define APDPERRSTC_TAUD0 APDP.ERRSTC_TAUD0.UINT32
#define APDPERRSTC_TAUD0L APDP.ERRSTC_TAUD0.UINT16[L]
#define APDPERRSTC_TAUD0LL APDP.ERRSTC_TAUD0.UINT8[LL]
#define APDPERRSTC_TAUD0LH APDP.ERRSTC_TAUD0.UINT8[LH]
#define APDPERRSTC_TAUD0H APDP.ERRSTC_TAUD0.UINT16[H]
#define APDPERRSTC_TAUD0HL APDP.ERRSTC_TAUD0.UINT8[HL]
#define APDPERRSTC_TAUD0HH APDP.ERRSTC_TAUD0.UINT8[HH]
#define APDPTMC_TAUD0 APDP.TMC_TAUD0.UINT32
#define APDPTMC_TAUD0L APDP.TMC_TAUD0.UINT16[L]
#define APDPTMC_TAUD0H APDP.TMC_TAUD0.UINT16[H]
#define APDPERRADR_TAUD0 APDP.ERRADR_TAUD0.UINT32
#define APDPERRST_TAUD1 APDP.ERRST_TAUD1.UINT32
#define APDPERRST_TAUD1L APDP.ERRST_TAUD1.UINT16[L]
#define APDPERRST_TAUD1LL APDP.ERRST_TAUD1.UINT8[LL]
#define APDPERRST_TAUD1LH APDP.ERRST_TAUD1.UINT8[LH]
#define APDPERRST_TAUD1H APDP.ERRST_TAUD1.UINT16[H]
#define APDPERRST_TAUD1HL APDP.ERRST_TAUD1.UINT8[HL]
#define APDPERRST_TAUD1HH APDP.ERRST_TAUD1.UINT8[HH]
#define APDPERRSTC_TAUD1 APDP.ERRSTC_TAUD1.UINT32
#define APDPERRSTC_TAUD1L APDP.ERRSTC_TAUD1.UINT16[L]
#define APDPERRSTC_TAUD1LL APDP.ERRSTC_TAUD1.UINT8[LL]
#define APDPERRSTC_TAUD1LH APDP.ERRSTC_TAUD1.UINT8[LH]
#define APDPERRSTC_TAUD1H APDP.ERRSTC_TAUD1.UINT16[H]
#define APDPERRSTC_TAUD1HL APDP.ERRSTC_TAUD1.UINT8[HL]
#define APDPERRSTC_TAUD1HH APDP.ERRSTC_TAUD1.UINT8[HH]
#define APDPTMC_TAUD1 APDP.TMC_TAUD1.UINT32
#define APDPTMC_TAUD1L APDP.TMC_TAUD1.UINT16[L]
#define APDPTMC_TAUD1H APDP.TMC_TAUD1.UINT16[H]
#define APDPERRADR_TAUD1 APDP.ERRADR_TAUD1.UINT32
#define APDPERRST_TAUD2 APDP.ERRST_TAUD2.UINT32
#define APDPERRST_TAUD2L APDP.ERRST_TAUD2.UINT16[L]
#define APDPERRST_TAUD2LL APDP.ERRST_TAUD2.UINT8[LL]
#define APDPERRST_TAUD2LH APDP.ERRST_TAUD2.UINT8[LH]
#define APDPERRST_TAUD2H APDP.ERRST_TAUD2.UINT16[H]
#define APDPERRST_TAUD2HL APDP.ERRST_TAUD2.UINT8[HL]
#define APDPERRST_TAUD2HH APDP.ERRST_TAUD2.UINT8[HH]
#define APDPERRSTC_TAUD2 APDP.ERRSTC_TAUD2.UINT32
#define APDPERRSTC_TAUD2L APDP.ERRSTC_TAUD2.UINT16[L]
#define APDPERRSTC_TAUD2LL APDP.ERRSTC_TAUD2.UINT8[LL]
#define APDPERRSTC_TAUD2LH APDP.ERRSTC_TAUD2.UINT8[LH]
#define APDPERRSTC_TAUD2H APDP.ERRSTC_TAUD2.UINT16[H]
#define APDPERRSTC_TAUD2HL APDP.ERRSTC_TAUD2.UINT8[HL]
#define APDPERRSTC_TAUD2HH APDP.ERRSTC_TAUD2.UINT8[HH]
#define APDPTMC_TAUD2 APDP.TMC_TAUD2.UINT32
#define APDPTMC_TAUD2L APDP.TMC_TAUD2.UINT16[L]
#define APDPTMC_TAUD2H APDP.TMC_TAUD2.UINT16[H]
#define APDPERRADR_TAUD2 APDP.ERRADR_TAUD2.UINT32
#define APDPERRST_TAUJ0 APDP.ERRST_TAUJ0.UINT32
#define APDPERRST_TAUJ0L APDP.ERRST_TAUJ0.UINT16[L]
#define APDPERRST_TAUJ0LL APDP.ERRST_TAUJ0.UINT8[LL]
#define APDPERRST_TAUJ0LH APDP.ERRST_TAUJ0.UINT8[LH]
#define APDPERRST_TAUJ0H APDP.ERRST_TAUJ0.UINT16[H]
#define APDPERRST_TAUJ0HL APDP.ERRST_TAUJ0.UINT8[HL]
#define APDPERRST_TAUJ0HH APDP.ERRST_TAUJ0.UINT8[HH]
#define APDPERRSTC_TAUJ0 APDP.ERRSTC_TAUJ0.UINT32
#define APDPERRSTC_TAUJ0L APDP.ERRSTC_TAUJ0.UINT16[L]
#define APDPERRSTC_TAUJ0LL APDP.ERRSTC_TAUJ0.UINT8[LL]
#define APDPERRSTC_TAUJ0LH APDP.ERRSTC_TAUJ0.UINT8[LH]
#define APDPERRSTC_TAUJ0H APDP.ERRSTC_TAUJ0.UINT16[H]
#define APDPERRSTC_TAUJ0HL APDP.ERRSTC_TAUJ0.UINT8[HL]
#define APDPERRSTC_TAUJ0HH APDP.ERRSTC_TAUJ0.UINT8[HH]
#define APDPTMC_TAUJ0 APDP.TMC_TAUJ0.UINT32
#define APDPTMC_TAUJ0L APDP.TMC_TAUJ0.UINT16[L]
#define APDPTMC_TAUJ0H APDP.TMC_TAUJ0.UINT16[H]
#define APDPERRADR_TAUJ0 APDP.ERRADR_TAUJ0.UINT32
#define APDPERRST_TAUJ1 APDP.ERRST_TAUJ1.UINT32
#define APDPERRST_TAUJ1L APDP.ERRST_TAUJ1.UINT16[L]
#define APDPERRST_TAUJ1LL APDP.ERRST_TAUJ1.UINT8[LL]
#define APDPERRST_TAUJ1LH APDP.ERRST_TAUJ1.UINT8[LH]
#define APDPERRST_TAUJ1H APDP.ERRST_TAUJ1.UINT16[H]
#define APDPERRST_TAUJ1HL APDP.ERRST_TAUJ1.UINT8[HL]
#define APDPERRST_TAUJ1HH APDP.ERRST_TAUJ1.UINT8[HH]
#define APDPERRSTC_TAUJ1 APDP.ERRSTC_TAUJ1.UINT32
#define APDPERRSTC_TAUJ1L APDP.ERRSTC_TAUJ1.UINT16[L]
#define APDPERRSTC_TAUJ1LL APDP.ERRSTC_TAUJ1.UINT8[LL]
#define APDPERRSTC_TAUJ1LH APDP.ERRSTC_TAUJ1.UINT8[LH]
#define APDPERRSTC_TAUJ1H APDP.ERRSTC_TAUJ1.UINT16[H]
#define APDPERRSTC_TAUJ1HL APDP.ERRSTC_TAUJ1.UINT8[HL]
#define APDPERRSTC_TAUJ1HH APDP.ERRSTC_TAUJ1.UINT8[HH]
#define APDPTMC_TAUJ1 APDP.TMC_TAUJ1.UINT32
#define APDPTMC_TAUJ1L APDP.TMC_TAUJ1.UINT16[L]
#define APDPTMC_TAUJ1H APDP.TMC_TAUJ1.UINT16[H]
#define APDPERRADR_TAUJ1 APDP.ERRADR_TAUJ1.UINT32
#define APDPERRST_TAUJ2 APDP.ERRST_TAUJ2.UINT32
#define APDPERRST_TAUJ2L APDP.ERRST_TAUJ2.UINT16[L]
#define APDPERRST_TAUJ2LL APDP.ERRST_TAUJ2.UINT8[LL]
#define APDPERRST_TAUJ2LH APDP.ERRST_TAUJ2.UINT8[LH]
#define APDPERRST_TAUJ2H APDP.ERRST_TAUJ2.UINT16[H]
#define APDPERRST_TAUJ2HL APDP.ERRST_TAUJ2.UINT8[HL]
#define APDPERRST_TAUJ2HH APDP.ERRST_TAUJ2.UINT8[HH]
#define APDPERRSTC_TAUJ2 APDP.ERRSTC_TAUJ2.UINT32
#define APDPERRSTC_TAUJ2L APDP.ERRSTC_TAUJ2.UINT16[L]
#define APDPERRSTC_TAUJ2LL APDP.ERRSTC_TAUJ2.UINT8[LL]
#define APDPERRSTC_TAUJ2LH APDP.ERRSTC_TAUJ2.UINT8[LH]
#define APDPERRSTC_TAUJ2H APDP.ERRSTC_TAUJ2.UINT16[H]
#define APDPERRSTC_TAUJ2HL APDP.ERRSTC_TAUJ2.UINT8[HL]
#define APDPERRSTC_TAUJ2HH APDP.ERRSTC_TAUJ2.UINT8[HH]
#define APDPTMC_TAUJ2 APDP.TMC_TAUJ2.UINT32
#define APDPTMC_TAUJ2L APDP.TMC_TAUJ2.UINT16[L]
#define APDPTMC_TAUJ2H APDP.TMC_TAUJ2.UINT16[H]
#define APDPERRADR_TAUJ2 APDP.ERRADR_TAUJ2.UINT32
#define APDPERRST_TSG30 APDP.ERRST_TSG30.UINT32
#define APDPERRST_TSG30L APDP.ERRST_TSG30.UINT16[L]
#define APDPERRST_TSG30LL APDP.ERRST_TSG30.UINT8[LL]
#define APDPERRST_TSG30LH APDP.ERRST_TSG30.UINT8[LH]
#define APDPERRST_TSG30H APDP.ERRST_TSG30.UINT16[H]
#define APDPERRST_TSG30HL APDP.ERRST_TSG30.UINT8[HL]
#define APDPERRST_TSG30HH APDP.ERRST_TSG30.UINT8[HH]
#define APDPERRSTC_TSG30 APDP.ERRSTC_TSG30.UINT32
#define APDPERRSTC_TSG30L APDP.ERRSTC_TSG30.UINT16[L]
#define APDPERRSTC_TSG30LL APDP.ERRSTC_TSG30.UINT8[LL]
#define APDPERRSTC_TSG30LH APDP.ERRSTC_TSG30.UINT8[LH]
#define APDPERRSTC_TSG30H APDP.ERRSTC_TSG30.UINT16[H]
#define APDPERRSTC_TSG30HL APDP.ERRSTC_TSG30.UINT8[HL]
#define APDPERRSTC_TSG30HH APDP.ERRSTC_TSG30.UINT8[HH]
#define APDPTMC_TSG30 APDP.TMC_TSG30.UINT32
#define APDPTMC_TSG30L APDP.TMC_TSG30.UINT16[L]
#define APDPTMC_TSG30H APDP.TMC_TSG30.UINT16[H]
#define APDPERRADR_TSG30 APDP.ERRADR_TSG30.UINT32
#define APDPERRST_TSG31 APDP.ERRST_TSG31.UINT32
#define APDPERRST_TSG31L APDP.ERRST_TSG31.UINT16[L]
#define APDPERRST_TSG31LL APDP.ERRST_TSG31.UINT8[LL]
#define APDPERRST_TSG31LH APDP.ERRST_TSG31.UINT8[LH]
#define APDPERRST_TSG31H APDP.ERRST_TSG31.UINT16[H]
#define APDPERRST_TSG31HL APDP.ERRST_TSG31.UINT8[HL]
#define APDPERRST_TSG31HH APDP.ERRST_TSG31.UINT8[HH]
#define APDPERRSTC_TSG31 APDP.ERRSTC_TSG31.UINT32
#define APDPERRSTC_TSG31L APDP.ERRSTC_TSG31.UINT16[L]
#define APDPERRSTC_TSG31LL APDP.ERRSTC_TSG31.UINT8[LL]
#define APDPERRSTC_TSG31LH APDP.ERRSTC_TSG31.UINT8[LH]
#define APDPERRSTC_TSG31H APDP.ERRSTC_TSG31.UINT16[H]
#define APDPERRSTC_TSG31HL APDP.ERRSTC_TSG31.UINT8[HL]
#define APDPERRSTC_TSG31HH APDP.ERRSTC_TSG31.UINT8[HH]
#define APDPTMC_TSG31 APDP.TMC_TSG31.UINT32
#define APDPTMC_TSG31L APDP.TMC_TSG31.UINT16[L]
#define APDPTMC_TSG31H APDP.TMC_TSG31.UINT16[H]
#define APDPERRADR_TSG31 APDP.ERRADR_TSG31.UINT32
#define APDPERRST_OSTM_CLKSEL APDP.ERRST_OSTM_CLKSEL.UINT32
#define APDPERRST_OSTM_CLKSELL APDP.ERRST_OSTM_CLKSEL.UINT16[L]
#define APDPERRST_OSTM_CLKSELLL APDP.ERRST_OSTM_CLKSEL.UINT8[LL]
#define APDPERRST_OSTM_CLKSELLH APDP.ERRST_OSTM_CLKSEL.UINT8[LH]
#define APDPERRST_OSTM_CLKSELH APDP.ERRST_OSTM_CLKSEL.UINT16[H]
#define APDPERRST_OSTM_CLKSELHL APDP.ERRST_OSTM_CLKSEL.UINT8[HL]
#define APDPERRST_OSTM_CLKSELHH APDP.ERRST_OSTM_CLKSEL.UINT8[HH]
#define APDPERRSTC_OSTM_CLKSEL APDP.ERRSTC_OSTM_CLKSEL.UINT32
#define APDPERRSTC_OSTM_CLKSELL APDP.ERRSTC_OSTM_CLKSEL.UINT16[L]
#define APDPERRSTC_OSTM_CLKSELLL APDP.ERRSTC_OSTM_CLKSEL.UINT8[LL]
#define APDPERRSTC_OSTM_CLKSELLH APDP.ERRSTC_OSTM_CLKSEL.UINT8[LH]
#define APDPERRSTC_OSTM_CLKSELH APDP.ERRSTC_OSTM_CLKSEL.UINT16[H]
#define APDPERRSTC_OSTM_CLKSELHL APDP.ERRSTC_OSTM_CLKSEL.UINT8[HL]
#define APDPERRSTC_OSTM_CLKSELHH APDP.ERRSTC_OSTM_CLKSEL.UINT8[HH]
#define APDPTMC_OSTM_CLKSEL APDP.TMC_OSTM_CLKSEL.UINT32
#define APDPTMC_OSTM_CLKSELL APDP.TMC_OSTM_CLKSEL.UINT16[L]
#define APDPTMC_OSTM_CLKSELH APDP.TMC_OSTM_CLKSEL.UINT16[H]
#define APDPERRADR_OSTM_CLKSEL APDP.ERRADR_OSTM_CLKSEL.UINT32
#define APDPERRST_OSTM30 APDP.ERRST_OSTM30.UINT32
#define APDPERRST_OSTM30L APDP.ERRST_OSTM30.UINT16[L]
#define APDPERRST_OSTM30LL APDP.ERRST_OSTM30.UINT8[LL]
#define APDPERRST_OSTM30LH APDP.ERRST_OSTM30.UINT8[LH]
#define APDPERRST_OSTM30H APDP.ERRST_OSTM30.UINT16[H]
#define APDPERRST_OSTM30HL APDP.ERRST_OSTM30.UINT8[HL]
#define APDPERRST_OSTM30HH APDP.ERRST_OSTM30.UINT8[HH]
#define APDPERRSTC_OSTM30 APDP.ERRSTC_OSTM30.UINT32
#define APDPERRSTC_OSTM30L APDP.ERRSTC_OSTM30.UINT16[L]
#define APDPERRSTC_OSTM30LL APDP.ERRSTC_OSTM30.UINT8[LL]
#define APDPERRSTC_OSTM30LH APDP.ERRSTC_OSTM30.UINT8[LH]
#define APDPERRSTC_OSTM30H APDP.ERRSTC_OSTM30.UINT16[H]
#define APDPERRSTC_OSTM30HL APDP.ERRSTC_OSTM30.UINT8[HL]
#define APDPERRSTC_OSTM30HH APDP.ERRSTC_OSTM30.UINT8[HH]
#define APDPTMC_OSTM30 APDP.TMC_OSTM30.UINT32
#define APDPTMC_OSTM30L APDP.TMC_OSTM30.UINT16[L]
#define APDPTMC_OSTM30H APDP.TMC_OSTM30.UINT16[H]
#define APDPERRADR_OSTM30 APDP.ERRADR_OSTM30.UINT32
#define APDPERRST_OSTM40 APDP.ERRST_OSTM40.UINT32
#define APDPERRST_OSTM40L APDP.ERRST_OSTM40.UINT16[L]
#define APDPERRST_OSTM40LL APDP.ERRST_OSTM40.UINT8[LL]
#define APDPERRST_OSTM40LH APDP.ERRST_OSTM40.UINT8[LH]
#define APDPERRST_OSTM40H APDP.ERRST_OSTM40.UINT16[H]
#define APDPERRST_OSTM40HL APDP.ERRST_OSTM40.UINT8[HL]
#define APDPERRST_OSTM40HH APDP.ERRST_OSTM40.UINT8[HH]
#define APDPERRSTC_OSTM40 APDP.ERRSTC_OSTM40.UINT32
#define APDPERRSTC_OSTM40L APDP.ERRSTC_OSTM40.UINT16[L]
#define APDPERRSTC_OSTM40LL APDP.ERRSTC_OSTM40.UINT8[LL]
#define APDPERRSTC_OSTM40LH APDP.ERRSTC_OSTM40.UINT8[LH]
#define APDPERRSTC_OSTM40H APDP.ERRSTC_OSTM40.UINT16[H]
#define APDPERRSTC_OSTM40HL APDP.ERRSTC_OSTM40.UINT8[HL]
#define APDPERRSTC_OSTM40HH APDP.ERRSTC_OSTM40.UINT8[HH]
#define APDPTMC_OSTM40 APDP.TMC_OSTM40.UINT32
#define APDPTMC_OSTM40L APDP.TMC_OSTM40.UINT16[L]
#define APDPTMC_OSTM40H APDP.TMC_OSTM40.UINT16[H]
#define APDPERRADR_OSTM40 APDP.ERRADR_OSTM40.UINT32
#define APDPERRST_OSTM50 APDP.ERRST_OSTM50.UINT32
#define APDPERRST_OSTM50L APDP.ERRST_OSTM50.UINT16[L]
#define APDPERRST_OSTM50LL APDP.ERRST_OSTM50.UINT8[LL]
#define APDPERRST_OSTM50LH APDP.ERRST_OSTM50.UINT8[LH]
#define APDPERRST_OSTM50H APDP.ERRST_OSTM50.UINT16[H]
#define APDPERRST_OSTM50HL APDP.ERRST_OSTM50.UINT8[HL]
#define APDPERRST_OSTM50HH APDP.ERRST_OSTM50.UINT8[HH]
#define APDPERRSTC_OSTM50 APDP.ERRSTC_OSTM50.UINT32
#define APDPERRSTC_OSTM50L APDP.ERRSTC_OSTM50.UINT16[L]
#define APDPERRSTC_OSTM50LL APDP.ERRSTC_OSTM50.UINT8[LL]
#define APDPERRSTC_OSTM50LH APDP.ERRSTC_OSTM50.UINT8[LH]
#define APDPERRSTC_OSTM50H APDP.ERRSTC_OSTM50.UINT16[H]
#define APDPERRSTC_OSTM50HL APDP.ERRSTC_OSTM50.UINT8[HL]
#define APDPERRSTC_OSTM50HH APDP.ERRSTC_OSTM50.UINT8[HH]
#define APDPTMC_OSTM50 APDP.TMC_OSTM50.UINT32
#define APDPTMC_OSTM50L APDP.TMC_OSTM50.UINT16[L]
#define APDPTMC_OSTM50H APDP.TMC_OSTM50.UINT16[H]
#define APDPERRADR_OSTM50 APDP.ERRADR_OSTM50.UINT32
#define APDPERRST_OSTM60 APDP.ERRST_OSTM60.UINT32
#define APDPERRST_OSTM60L APDP.ERRST_OSTM60.UINT16[L]
#define APDPERRST_OSTM60LL APDP.ERRST_OSTM60.UINT8[LL]
#define APDPERRST_OSTM60LH APDP.ERRST_OSTM60.UINT8[LH]
#define APDPERRST_OSTM60H APDP.ERRST_OSTM60.UINT16[H]
#define APDPERRST_OSTM60HL APDP.ERRST_OSTM60.UINT8[HL]
#define APDPERRST_OSTM60HH APDP.ERRST_OSTM60.UINT8[HH]
#define APDPERRSTC_OSTM60 APDP.ERRSTC_OSTM60.UINT32
#define APDPERRSTC_OSTM60L APDP.ERRSTC_OSTM60.UINT16[L]
#define APDPERRSTC_OSTM60LL APDP.ERRSTC_OSTM60.UINT8[LL]
#define APDPERRSTC_OSTM60LH APDP.ERRSTC_OSTM60.UINT8[LH]
#define APDPERRSTC_OSTM60H APDP.ERRSTC_OSTM60.UINT16[H]
#define APDPERRSTC_OSTM60HL APDP.ERRSTC_OSTM60.UINT8[HL]
#define APDPERRSTC_OSTM60HH APDP.ERRSTC_OSTM60.UINT8[HH]
#define APDPTMC_OSTM60 APDP.TMC_OSTM60.UINT32
#define APDPTMC_OSTM60L APDP.TMC_OSTM60.UINT16[L]
#define APDPTMC_OSTM60H APDP.TMC_OSTM60.UINT16[H]
#define APDPERRADR_OSTM60 APDP.ERRADR_OSTM60.UINT32
#define APDPERRST_OSTM70 APDP.ERRST_OSTM70.UINT32
#define APDPERRST_OSTM70L APDP.ERRST_OSTM70.UINT16[L]
#define APDPERRST_OSTM70LL APDP.ERRST_OSTM70.UINT8[LL]
#define APDPERRST_OSTM70LH APDP.ERRST_OSTM70.UINT8[LH]
#define APDPERRST_OSTM70H APDP.ERRST_OSTM70.UINT16[H]
#define APDPERRST_OSTM70HL APDP.ERRST_OSTM70.UINT8[HL]
#define APDPERRST_OSTM70HH APDP.ERRST_OSTM70.UINT8[HH]
#define APDPERRSTC_OSTM70 APDP.ERRSTC_OSTM70.UINT32
#define APDPERRSTC_OSTM70L APDP.ERRSTC_OSTM70.UINT16[L]
#define APDPERRSTC_OSTM70LL APDP.ERRSTC_OSTM70.UINT8[LL]
#define APDPERRSTC_OSTM70LH APDP.ERRSTC_OSTM70.UINT8[LH]
#define APDPERRSTC_OSTM70H APDP.ERRSTC_OSTM70.UINT16[H]
#define APDPERRSTC_OSTM70HL APDP.ERRSTC_OSTM70.UINT8[HL]
#define APDPERRSTC_OSTM70HH APDP.ERRSTC_OSTM70.UINT8[HH]
#define APDPTMC_OSTM70 APDP.TMC_OSTM70.UINT32
#define APDPTMC_OSTM70L APDP.TMC_OSTM70.UINT16[L]
#define APDPTMC_OSTM70H APDP.TMC_OSTM70.UINT16[H]
#define APDPERRADR_OSTM70 APDP.ERRADR_OSTM70.UINT32
#define APDPERRST_CSIH00 APDP.ERRST_CSIH00.UINT32
#define APDPERRST_CSIH00L APDP.ERRST_CSIH00.UINT16[L]
#define APDPERRST_CSIH00LL APDP.ERRST_CSIH00.UINT8[LL]
#define APDPERRST_CSIH00LH APDP.ERRST_CSIH00.UINT8[LH]
#define APDPERRST_CSIH00H APDP.ERRST_CSIH00.UINT16[H]
#define APDPERRST_CSIH00HL APDP.ERRST_CSIH00.UINT8[HL]
#define APDPERRST_CSIH00HH APDP.ERRST_CSIH00.UINT8[HH]
#define APDPERRSTC_CSIH00 APDP.ERRSTC_CSIH00.UINT32
#define APDPERRSTC_CSIH00L APDP.ERRSTC_CSIH00.UINT16[L]
#define APDPERRSTC_CSIH00LL APDP.ERRSTC_CSIH00.UINT8[LL]
#define APDPERRSTC_CSIH00LH APDP.ERRSTC_CSIH00.UINT8[LH]
#define APDPERRSTC_CSIH00H APDP.ERRSTC_CSIH00.UINT16[H]
#define APDPERRSTC_CSIH00HL APDP.ERRSTC_CSIH00.UINT8[HL]
#define APDPERRSTC_CSIH00HH APDP.ERRSTC_CSIH00.UINT8[HH]
#define APDPTMC_CSIH00 APDP.TMC_CSIH00.UINT32
#define APDPTMC_CSIH00L APDP.TMC_CSIH00.UINT16[L]
#define APDPTMC_CSIH00H APDP.TMC_CSIH00.UINT16[H]
#define APDPERRADR_CSIH00 APDP.ERRADR_CSIH00.UINT32
#define APDPERRST_CSIH10 APDP.ERRST_CSIH10.UINT32
#define APDPERRST_CSIH10L APDP.ERRST_CSIH10.UINT16[L]
#define APDPERRST_CSIH10LL APDP.ERRST_CSIH10.UINT8[LL]
#define APDPERRST_CSIH10LH APDP.ERRST_CSIH10.UINT8[LH]
#define APDPERRST_CSIH10H APDP.ERRST_CSIH10.UINT16[H]
#define APDPERRST_CSIH10HL APDP.ERRST_CSIH10.UINT8[HL]
#define APDPERRST_CSIH10HH APDP.ERRST_CSIH10.UINT8[HH]
#define APDPERRSTC_CSIH10 APDP.ERRSTC_CSIH10.UINT32
#define APDPERRSTC_CSIH10L APDP.ERRSTC_CSIH10.UINT16[L]
#define APDPERRSTC_CSIH10LL APDP.ERRSTC_CSIH10.UINT8[LL]
#define APDPERRSTC_CSIH10LH APDP.ERRSTC_CSIH10.UINT8[LH]
#define APDPERRSTC_CSIH10H APDP.ERRSTC_CSIH10.UINT16[H]
#define APDPERRSTC_CSIH10HL APDP.ERRSTC_CSIH10.UINT8[HL]
#define APDPERRSTC_CSIH10HH APDP.ERRSTC_CSIH10.UINT8[HH]
#define APDPTMC_CSIH10 APDP.TMC_CSIH10.UINT32
#define APDPTMC_CSIH10L APDP.TMC_CSIH10.UINT16[L]
#define APDPTMC_CSIH10H APDP.TMC_CSIH10.UINT16[H]
#define APDPERRADR_CSIH10 APDP.ERRADR_CSIH10.UINT32
#define APDPERRST_CSIH20 APDP.ERRST_CSIH20.UINT32
#define APDPERRST_CSIH20L APDP.ERRST_CSIH20.UINT16[L]
#define APDPERRST_CSIH20LL APDP.ERRST_CSIH20.UINT8[LL]
#define APDPERRST_CSIH20LH APDP.ERRST_CSIH20.UINT8[LH]
#define APDPERRST_CSIH20H APDP.ERRST_CSIH20.UINT16[H]
#define APDPERRST_CSIH20HL APDP.ERRST_CSIH20.UINT8[HL]
#define APDPERRST_CSIH20HH APDP.ERRST_CSIH20.UINT8[HH]
#define APDPERRSTC_CSIH20 APDP.ERRSTC_CSIH20.UINT32
#define APDPERRSTC_CSIH20L APDP.ERRSTC_CSIH20.UINT16[L]
#define APDPERRSTC_CSIH20LL APDP.ERRSTC_CSIH20.UINT8[LL]
#define APDPERRSTC_CSIH20LH APDP.ERRSTC_CSIH20.UINT8[LH]
#define APDPERRSTC_CSIH20H APDP.ERRSTC_CSIH20.UINT16[H]
#define APDPERRSTC_CSIH20HL APDP.ERRSTC_CSIH20.UINT8[HL]
#define APDPERRSTC_CSIH20HH APDP.ERRSTC_CSIH20.UINT8[HH]
#define APDPTMC_CSIH20 APDP.TMC_CSIH20.UINT32
#define APDPTMC_CSIH20L APDP.TMC_CSIH20.UINT16[L]
#define APDPTMC_CSIH20H APDP.TMC_CSIH20.UINT16[H]
#define APDPERRADR_CSIH20 APDP.ERRADR_CSIH20.UINT32
#define APDPERRST_CSIH30 APDP.ERRST_CSIH30.UINT32
#define APDPERRST_CSIH30L APDP.ERRST_CSIH30.UINT16[L]
#define APDPERRST_CSIH30LL APDP.ERRST_CSIH30.UINT8[LL]
#define APDPERRST_CSIH30LH APDP.ERRST_CSIH30.UINT8[LH]
#define APDPERRST_CSIH30H APDP.ERRST_CSIH30.UINT16[H]
#define APDPERRST_CSIH30HL APDP.ERRST_CSIH30.UINT8[HL]
#define APDPERRST_CSIH30HH APDP.ERRST_CSIH30.UINT8[HH]
#define APDPERRSTC_CSIH30 APDP.ERRSTC_CSIH30.UINT32
#define APDPERRSTC_CSIH30L APDP.ERRSTC_CSIH30.UINT16[L]
#define APDPERRSTC_CSIH30LL APDP.ERRSTC_CSIH30.UINT8[LL]
#define APDPERRSTC_CSIH30LH APDP.ERRSTC_CSIH30.UINT8[LH]
#define APDPERRSTC_CSIH30H APDP.ERRSTC_CSIH30.UINT16[H]
#define APDPERRSTC_CSIH30HL APDP.ERRSTC_CSIH30.UINT8[HL]
#define APDPERRSTC_CSIH30HH APDP.ERRSTC_CSIH30.UINT8[HH]
#define APDPTMC_CSIH30 APDP.TMC_CSIH30.UINT32
#define APDPTMC_CSIH30L APDP.TMC_CSIH30.UINT16[L]
#define APDPTMC_CSIH30H APDP.TMC_CSIH30.UINT16[H]
#define APDPERRADR_CSIH30 APDP.ERRADR_CSIH30.UINT32
#define APDPERRST_CSIG0 APDP.ERRST_CSIG0.UINT32
#define APDPERRST_CSIG0L APDP.ERRST_CSIG0.UINT16[L]
#define APDPERRST_CSIG0LL APDP.ERRST_CSIG0.UINT8[LL]
#define APDPERRST_CSIG0LH APDP.ERRST_CSIG0.UINT8[LH]
#define APDPERRST_CSIG0H APDP.ERRST_CSIG0.UINT16[H]
#define APDPERRST_CSIG0HL APDP.ERRST_CSIG0.UINT8[HL]
#define APDPERRST_CSIG0HH APDP.ERRST_CSIG0.UINT8[HH]
#define APDPERRSTC_CSIG0 APDP.ERRSTC_CSIG0.UINT32
#define APDPERRSTC_CSIG0L APDP.ERRSTC_CSIG0.UINT16[L]
#define APDPERRSTC_CSIG0LL APDP.ERRSTC_CSIG0.UINT8[LL]
#define APDPERRSTC_CSIG0LH APDP.ERRSTC_CSIG0.UINT8[LH]
#define APDPERRSTC_CSIG0H APDP.ERRSTC_CSIG0.UINT16[H]
#define APDPERRSTC_CSIG0HL APDP.ERRSTC_CSIG0.UINT8[HL]
#define APDPERRSTC_CSIG0HH APDP.ERRSTC_CSIG0.UINT8[HH]
#define APDPTMC_CSIG0 APDP.TMC_CSIG0.UINT32
#define APDPTMC_CSIG0L APDP.TMC_CSIG0.UINT16[L]
#define APDPTMC_CSIG0H APDP.TMC_CSIG0.UINT16[H]
#define APDPERRADR_CSIG0 APDP.ERRADR_CSIG0.UINT32
#define APDPERRST_CHBB0 APDP.ERRST_CHBB0.UINT32
#define APDPERRST_CHBB0L APDP.ERRST_CHBB0.UINT16[L]
#define APDPERRST_CHBB0LL APDP.ERRST_CHBB0.UINT8[LL]
#define APDPERRST_CHBB0LH APDP.ERRST_CHBB0.UINT8[LH]
#define APDPERRST_CHBB0H APDP.ERRST_CHBB0.UINT16[H]
#define APDPERRST_CHBB0HL APDP.ERRST_CHBB0.UINT8[HL]
#define APDPERRST_CHBB0HH APDP.ERRST_CHBB0.UINT8[HH]
#define APDPERRSTC_CHBB0 APDP.ERRSTC_CHBB0.UINT32
#define APDPERRSTC_CHBB0L APDP.ERRSTC_CHBB0.UINT16[L]
#define APDPERRSTC_CHBB0LL APDP.ERRSTC_CHBB0.UINT8[LL]
#define APDPERRSTC_CHBB0LH APDP.ERRSTC_CHBB0.UINT8[LH]
#define APDPERRSTC_CHBB0H APDP.ERRSTC_CHBB0.UINT16[H]
#define APDPERRSTC_CHBB0HL APDP.ERRSTC_CHBB0.UINT8[HL]
#define APDPERRSTC_CHBB0HH APDP.ERRSTC_CHBB0.UINT8[HH]
#define APDPTMC_CHBB0 APDP.TMC_CHBB0.UINT32
#define APDPTMC_CHBB0L APDP.TMC_CHBB0.UINT16[L]
#define APDPTMC_CHBB0H APDP.TMC_CHBB0.UINT16[H]
#define APDPERRADR_CHBB0 APDP.ERRADR_CHBB0.UINT32
#define APDPERRST_CHBA0 APDP.ERRST_CHBA0.UINT32
#define APDPERRST_CHBA0L APDP.ERRST_CHBA0.UINT16[L]
#define APDPERRST_CHBA0LL APDP.ERRST_CHBA0.UINT8[LL]
#define APDPERRST_CHBA0LH APDP.ERRST_CHBA0.UINT8[LH]
#define APDPERRST_CHBA0H APDP.ERRST_CHBA0.UINT16[H]
#define APDPERRST_CHBA0HL APDP.ERRST_CHBA0.UINT8[HL]
#define APDPERRST_CHBA0HH APDP.ERRST_CHBA0.UINT8[HH]
#define APDPERRSTC_CHBA0 APDP.ERRSTC_CHBA0.UINT32
#define APDPERRSTC_CHBA0L APDP.ERRSTC_CHBA0.UINT16[L]
#define APDPERRSTC_CHBA0LL APDP.ERRSTC_CHBA0.UINT8[LL]
#define APDPERRSTC_CHBA0LH APDP.ERRSTC_CHBA0.UINT8[LH]
#define APDPERRSTC_CHBA0H APDP.ERRSTC_CHBA0.UINT16[H]
#define APDPERRSTC_CHBA0HL APDP.ERRSTC_CHBA0.UINT8[HL]
#define APDPERRSTC_CHBA0HH APDP.ERRSTC_CHBA0.UINT8[HH]
#define APDPTMC_CHBA0 APDP.TMC_CHBA0.UINT32
#define APDPTMC_CHBA0L APDP.TMC_CHBA0.UINT16[L]
#define APDPTMC_CHBA0H APDP.TMC_CHBA0.UINT16[H]
#define APDPERRADR_CHBA0 APDP.ERRADR_CHBA0.UINT32
#define APDPERRST_CHBA1 APDP.ERRST_CHBA1.UINT32
#define APDPERRST_CHBA1L APDP.ERRST_CHBA1.UINT16[L]
#define APDPERRST_CHBA1LL APDP.ERRST_CHBA1.UINT8[LL]
#define APDPERRST_CHBA1LH APDP.ERRST_CHBA1.UINT8[LH]
#define APDPERRST_CHBA1H APDP.ERRST_CHBA1.UINT16[H]
#define APDPERRST_CHBA1HL APDP.ERRST_CHBA1.UINT8[HL]
#define APDPERRST_CHBA1HH APDP.ERRST_CHBA1.UINT8[HH]
#define APDPERRSTC_CHBA1 APDP.ERRSTC_CHBA1.UINT32
#define APDPERRSTC_CHBA1L APDP.ERRSTC_CHBA1.UINT16[L]
#define APDPERRSTC_CHBA1LL APDP.ERRSTC_CHBA1.UINT8[LL]
#define APDPERRSTC_CHBA1LH APDP.ERRSTC_CHBA1.UINT8[LH]
#define APDPERRSTC_CHBA1H APDP.ERRSTC_CHBA1.UINT16[H]
#define APDPERRSTC_CHBA1HL APDP.ERRSTC_CHBA1.UINT8[HL]
#define APDPERRSTC_CHBA1HH APDP.ERRSTC_CHBA1.UINT8[HH]
#define APDPTMC_CHBA1 APDP.TMC_CHBA1.UINT32
#define APDPTMC_CHBA1L APDP.TMC_CHBA1.UINT16[L]
#define APDPTMC_CHBA1H APDP.TMC_CHBA1.UINT16[H]
#define APDPERRADR_CHBA1 APDP.ERRADR_CHBA1.UINT32
#define APDPERRST_CHBA2 APDP.ERRST_CHBA2.UINT32
#define APDPERRST_CHBA2L APDP.ERRST_CHBA2.UINT16[L]
#define APDPERRST_CHBA2LL APDP.ERRST_CHBA2.UINT8[LL]
#define APDPERRST_CHBA2LH APDP.ERRST_CHBA2.UINT8[LH]
#define APDPERRST_CHBA2H APDP.ERRST_CHBA2.UINT16[H]
#define APDPERRST_CHBA2HL APDP.ERRST_CHBA2.UINT8[HL]
#define APDPERRST_CHBA2HH APDP.ERRST_CHBA2.UINT8[HH]
#define APDPERRSTC_CHBA2 APDP.ERRSTC_CHBA2.UINT32
#define APDPERRSTC_CHBA2L APDP.ERRSTC_CHBA2.UINT16[L]
#define APDPERRSTC_CHBA2LL APDP.ERRSTC_CHBA2.UINT8[LL]
#define APDPERRSTC_CHBA2LH APDP.ERRSTC_CHBA2.UINT8[LH]
#define APDPERRSTC_CHBA2H APDP.ERRSTC_CHBA2.UINT16[H]
#define APDPERRSTC_CHBA2HL APDP.ERRSTC_CHBA2.UINT8[HL]
#define APDPERRSTC_CHBA2HH APDP.ERRSTC_CHBA2.UINT8[HH]
#define APDPTMC_CHBA2 APDP.TMC_CHBA2.UINT32
#define APDPTMC_CHBA2L APDP.TMC_CHBA2.UINT16[L]
#define APDPTMC_CHBA2H APDP.TMC_CHBA2.UINT16[H]
#define APDPERRADR_CHBA2 APDP.ERRADR_CHBA2.UINT32
#define APDPERRST_CHBA3 APDP.ERRST_CHBA3.UINT32
#define APDPERRST_CHBA3L APDP.ERRST_CHBA3.UINT16[L]
#define APDPERRST_CHBA3LL APDP.ERRST_CHBA3.UINT8[LL]
#define APDPERRST_CHBA3LH APDP.ERRST_CHBA3.UINT8[LH]
#define APDPERRST_CHBA3H APDP.ERRST_CHBA3.UINT16[H]
#define APDPERRST_CHBA3HL APDP.ERRST_CHBA3.UINT8[HL]
#define APDPERRST_CHBA3HH APDP.ERRST_CHBA3.UINT8[HH]
#define APDPERRSTC_CHBA3 APDP.ERRSTC_CHBA3.UINT32
#define APDPERRSTC_CHBA3L APDP.ERRSTC_CHBA3.UINT16[L]
#define APDPERRSTC_CHBA3LL APDP.ERRSTC_CHBA3.UINT8[LL]
#define APDPERRSTC_CHBA3LH APDP.ERRSTC_CHBA3.UINT8[LH]
#define APDPERRSTC_CHBA3H APDP.ERRSTC_CHBA3.UINT16[H]
#define APDPERRSTC_CHBA3HL APDP.ERRSTC_CHBA3.UINT8[HL]
#define APDPERRSTC_CHBA3HH APDP.ERRSTC_CHBA3.UINT8[HH]
#define APDPTMC_CHBA3 APDP.TMC_CHBA3.UINT32
#define APDPTMC_CHBA3L APDP.TMC_CHBA3.UINT16[L]
#define APDPTMC_CHBA3H APDP.TMC_CHBA3.UINT16[H]
#define APDPERRADR_CHBA3 APDP.ERRADR_CHBA3.UINT32

#endif
