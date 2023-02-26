/**********************************************************************************************************************
* Module File Name  : sci3_regs.h
* Module Description: Serial Communication Interface 3 Peripheral Registers
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

#ifndef SCI3_REGS_H
#define SCI3_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint8  CKS:2;                                          /* CKS[1:0]         */
    uint8  MP:1;                                           /* MP               */
    uint8  STOP:1;                                         /* STOP             */
    uint8  PM:1;                                           /* PM               */
    uint8  PE:1;                                           /* PE               */
    uint8  CHR:1;                                          /* CHR              */
    uint8  CM:1;                                           /* CM               */
} __type635;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CKE:2;                                          /* CKE[1:0]         */
    uint8  TEIE:1;                                         /* TEIE             */
    uint8  MPIE:1;                                         /* MPIE             */
    uint8  RE:1;                                           /* RE               */
    uint8  TE:1;                                           /* TE               */
    uint8  RIE:1;                                          /* RIE              */
    uint8  TIE:1;                                          /* TIE              */
} __type636;
typedef struct 
{                                                          /* Bit Access       */
    uint8  MPBT:1;                                         /* MPBT             */
    const uint8  MPB:1;                                    /* MPB              */
    const uint8  TEND:1;                                   /* TEND             */
    uint8  PER:1;                                          /* PER              */
    uint8  FER:1;                                          /* FER              */
    uint8  ORER:1;                                         /* ORER             */
    uint8  RDRF:1;                                         /* RDRF             */
    uint8  TDRE:1;                                         /* TDRE             */
} __type637;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  SINV:1;                                         /* SINV             */
    uint8  SDIR:1;                                         /* SDIR             */
    uint8  :4;                                             /* Reserved Bits    */
} __type638;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  RXDMON:1;                                 /* RXDMON           */
    uint8  ABCS:1;                                         /* ABCS             */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  MDDRS:1;                                        /* MDDRS            */
    uint8  BRME:1;                                         /* BRME             */
} __type639;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type635 BIT;                                         /* Bit Access       */
} __type1914;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type636 BIT;                                         /* Bit Access       */
} __type1915;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type637 BIT;                                         /* Bit Access       */
} __type1916;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type638 BIT;                                         /* Bit Access       */
} __type1917;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type639 BIT;                                         /* Bit Access       */
} __type1918;

typedef struct 
{                                                          /* Module           */
    __type1914 SMR;                                        /* SMR              */
    uint8  dummy361[3];                                    /* Reserved         */
    uint8  BRR;                                            /* BRR              */
    uint8  dummy362[3];                                    /* Reserved         */
    __type1915 SCR;                                        /* SCR              */
    uint8  dummy363[3];                                    /* Reserved         */
    uint8  TDR;                                            /* TDR              */
    uint8  dummy364[3];                                    /* Reserved         */
    __type1916 SSR;                                        /* SSR              */
    uint8  dummy365[3];                                    /* Reserved         */
    const uint8  RDR;                                      /* RDR              */
    uint8  dummy366[3];                                    /* Reserved         */
    __type1917 SCMR;                                       /* SCMR             */
    uint8  dummy367[3];                                    /* Reserved         */
    __type1918 SEMR;                                       /* SEMR             */
    uint8  dummy368[4067];                                 /* Reserved         */
} __type2601;

#define MDDR BRR

__IOREG(SCI30, 0xFFDF0000, __READ_WRITE, __type2601);                 /* SCI30 */
__IOREG(SCI31, 0xFFDF1000, __READ_WRITE, __type2601);                 /* SCI31 */
__IOREG(SCI32, 0xFFDF2000, __READ_WRITE, __type2601);                 /* SCI32 */
__IOREGARRAY(SCI3, 3, 0xFFDF0000, __READ_WRITE, __type2601);          /* SCI3[3] */

#define SCI30SMR SCI30.SMR.UINT8
#define SCI30CKS SCI30.SMR.BIT.CKS
#define SCI30MP SCI30.SMR.BIT.MP
#define SCI30STOP SCI30.SMR.BIT.STOP
#define SCI30PM SCI30.SMR.BIT.PM
#define SCI30PE SCI30.SMR.BIT.PE
#define SCI30CHR SCI30.SMR.BIT.CHR
#define SCI30CM SCI30.SMR.BIT.CM
#define SCI30BRR SCI30.BRR
#define SCI30MDDR SCI30.MDDR
#define SCI30SCR SCI30.SCR.UINT8
#define SCI30CKE SCI30.SCR.BIT.CKE
#define SCI30TEIE SCI30.SCR.BIT.TEIE
#define SCI30MPIE SCI30.SCR.BIT.MPIE
#define SCI30RE SCI30.SCR.BIT.RE
#define SCI30TE SCI30.SCR.BIT.TE
#define SCI30RIE SCI30.SCR.BIT.RIE
#define SCI30TIE SCI30.SCR.BIT.TIE
#define SCI30TDR SCI30.TDR
#define SCI30SSR SCI30.SSR.UINT8
#define SCI30MPBT SCI30.SSR.BIT.MPBT
#define SCI30MPB SCI30.SSR.BIT.MPB
#define SCI30TEND SCI30.SSR.BIT.TEND
#define SCI30PER SCI30.SSR.BIT.PER
#define SCI30FER SCI30.SSR.BIT.FER
#define SCI30ORER SCI30.SSR.BIT.ORER
#define SCI30RDRF SCI30.SSR.BIT.RDRF
#define SCI30TDRE SCI30.SSR.BIT.TDRE
#define SCI30RDR SCI30.RDR
#define SCI30SCMR SCI30.SCMR.UINT8
#define SCI30SINV SCI30.SCMR.BIT.SINV
#define SCI30SDIR SCI30.SCMR.BIT.SDIR
#define SCI30SEMR SCI30.SEMR.UINT8
#define SCI30RXDMON SCI30.SEMR.BIT.RXDMON
#define SCI30ABCS SCI30.SEMR.BIT.ABCS
#define SCI30MDDRS SCI30.SEMR.BIT.MDDRS
#define SCI30BRME SCI30.SEMR.BIT.BRME
#define SCI31SMR SCI31.SMR.UINT8
#define SCI31CKS SCI31.SMR.BIT.CKS
#define SCI31MP SCI31.SMR.BIT.MP
#define SCI31STOP SCI31.SMR.BIT.STOP
#define SCI31PM SCI31.SMR.BIT.PM
#define SCI31PE SCI31.SMR.BIT.PE
#define SCI31CHR SCI31.SMR.BIT.CHR
#define SCI31CM SCI31.SMR.BIT.CM
#define SCI31BRR SCI31.BRR
#define SCI31MDDR SCI31.MDDR
#define SCI31SCR SCI31.SCR.UINT8
#define SCI31CKE SCI31.SCR.BIT.CKE
#define SCI31TEIE SCI31.SCR.BIT.TEIE
#define SCI31MPIE SCI31.SCR.BIT.MPIE
#define SCI31RE SCI31.SCR.BIT.RE
#define SCI31TE SCI31.SCR.BIT.TE
#define SCI31RIE SCI31.SCR.BIT.RIE
#define SCI31TIE SCI31.SCR.BIT.TIE
#define SCI31TDR SCI31.TDR
#define SCI31SSR SCI31.SSR.UINT8
#define SCI31MPBT SCI31.SSR.BIT.MPBT
#define SCI31MPB SCI31.SSR.BIT.MPB
#define SCI31TEND SCI31.SSR.BIT.TEND
#define SCI31PER SCI31.SSR.BIT.PER
#define SCI31FER SCI31.SSR.BIT.FER
#define SCI31ORER SCI31.SSR.BIT.ORER
#define SCI31RDRF SCI31.SSR.BIT.RDRF
#define SCI31TDRE SCI31.SSR.BIT.TDRE
#define SCI31RDR SCI31.RDR
#define SCI31SCMR SCI31.SCMR.UINT8
#define SCI31SINV SCI31.SCMR.BIT.SINV
#define SCI31SDIR SCI31.SCMR.BIT.SDIR
#define SCI31SEMR SCI31.SEMR.UINT8
#define SCI31RXDMON SCI31.SEMR.BIT.RXDMON
#define SCI31ABCS SCI31.SEMR.BIT.ABCS
#define SCI31MDDRS SCI31.SEMR.BIT.MDDRS
#define SCI31BRME SCI31.SEMR.BIT.BRME
#define SCI32SMR SCI32.SMR.UINT8
#define SCI32CKS SCI32.SMR.BIT.CKS
#define SCI32MP SCI32.SMR.BIT.MP
#define SCI32STOP SCI32.SMR.BIT.STOP
#define SCI32PM SCI32.SMR.BIT.PM
#define SCI32PE SCI32.SMR.BIT.PE
#define SCI32CHR SCI32.SMR.BIT.CHR
#define SCI32CM SCI32.SMR.BIT.CM
#define SCI32BRR SCI32.BRR
#define SCI32MDDR SCI32.MDDR
#define SCI32SCR SCI32.SCR.UINT8
#define SCI32CKE SCI32.SCR.BIT.CKE
#define SCI32TEIE SCI32.SCR.BIT.TEIE
#define SCI32MPIE SCI32.SCR.BIT.MPIE
#define SCI32RE SCI32.SCR.BIT.RE
#define SCI32TE SCI32.SCR.BIT.TE
#define SCI32RIE SCI32.SCR.BIT.RIE
#define SCI32TIE SCI32.SCR.BIT.TIE
#define SCI32TDR SCI32.TDR
#define SCI32SSR SCI32.SSR.UINT8
#define SCI32MPBT SCI32.SSR.BIT.MPBT
#define SCI32MPB SCI32.SSR.BIT.MPB
#define SCI32TEND SCI32.SSR.BIT.TEND
#define SCI32PER SCI32.SSR.BIT.PER
#define SCI32FER SCI32.SSR.BIT.FER
#define SCI32ORER SCI32.SSR.BIT.ORER
#define SCI32RDRF SCI32.SSR.BIT.RDRF
#define SCI32TDRE SCI32.SSR.BIT.TDRE
#define SCI32RDR SCI32.RDR
#define SCI32SCMR SCI32.SCMR.UINT8
#define SCI32SINV SCI32.SCMR.BIT.SINV
#define SCI32SDIR SCI32.SCMR.BIT.SDIR
#define SCI32SEMR SCI32.SEMR.UINT8
#define SCI32RXDMON SCI32.SEMR.BIT.RXDMON
#define SCI32ABCS SCI32.SEMR.BIT.ABCS
#define SCI32MDDRS SCI32.SEMR.BIT.MDDRS
#define SCI32BRME SCI32.SEMR.BIT.BRME

#endif
