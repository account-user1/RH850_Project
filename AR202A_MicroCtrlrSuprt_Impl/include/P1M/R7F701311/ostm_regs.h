/**********************************************************************************************************************
* Module File Name  : ostm_regs.h
* Module Description: OS Timer Peripheral Registers
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       mzjphh %
*----------------------------------------------------------------------------
* Date      Rev      Author         Change Description
* -------   -------  --------  ----------------------------------------------
* 12/16/14  1        LWW       Initial version derived from dr7f701311.dvf.h v1 in tools directory
* 09/15/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef OSTM_REGS_H
#define OSTM_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint16 IC0CKSEL00:4;                                   /* IC0CKSEL00[3:0]  */
    uint16 IC0CKSEL01:4;                                   /* IC0CKSEL01[7:4]  */
    uint16 IC0CKSEL02:2;                                   /* IC0CKSEL02[9:8]  */
    uint16 IC0CKSEL03:2;                                   /* IC0CKSEL03[11:10] */
    uint16 IC0TMSEL0:2;                                    /* IC0TMSEL0[13:12] */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 IC0TMEN0:1;                                     /* IC0TMEN0         */
} __type631;
typedef struct 
{                                                          /* Bit Access       */
    uint16 IC0CKSEL10:4;                                   /* IC0CKSEL10[3:0]  */
    uint16 IC0CKSEL11:4;                                   /* IC0CKSEL11[7:4]  */
    uint16 IC0CKSEL12:2;                                   /* IC0CKSEL12[9:8]  */
    uint16 IC0CKSEL13:2;                                   /* IC0CKSEL13[11:10] */
    uint16 IC0TMSEL1:2;                                    /* IC0TMSEL1[13:12] */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 IC0TMEN1:1;                                     /* IC0TMEN1         */
} __type632;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TO:1;                                           /* TO               */
    uint8  :7;                                             /* Reserved Bits    */
} __type633;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TOE:1;                                          /* TOE              */
    uint8  :7;                                             /* Reserved Bits    */
} __type634;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type631 BIT;                                         /* Bit Access       */
} __type1910;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type632 BIT;                                         /* Bit Access       */
} __type1911;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type633 BIT;                                         /* Bit Access       */
} __type1912;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type634 BIT;                                         /* Bit Access       */
} __type1913;

typedef struct 
{                                                          /* Module           */
    uint32 CMP;                                            /* CMP              */
    const uint32 CNT;                                      /* CNT              */
    uint8  dummy294[8];                                    /* Reserved         */
    const __type1817 TE;                                   /* TE               */
    uint8  dummy295[3];                                    /* Reserved         */
    __type1818 TS;                                         /* TS               */
    uint8  dummy296[3];                                    /* Reserved         */
    __type1819 TT;                                         /* TT               */
    uint8  dummy297[7];                                    /* Reserved         */
    __type1820 CTL;                                        /* CTL              */
} __type2592;
typedef struct 
{                                                          /* Module           */
    __type1910 IC0CKSEL0;                                  /* IC0CKSEL0        */
    uint8  dummy355[2];                                    /* Reserved         */
    __type1911 IC0CKSEL1;                                  /* IC0CKSEL1        */
} __type2599;
typedef struct 
{                                                          /* Module           */
    uint32 CMP;                                            /* CMP              */
    const uint32 CNT;                                      /* CNT              */
    __type1912 TO;                                         /* TO               */
    uint8  dummy356[3];                                    /* Reserved         */
    __type1913 TOE;                                        /* TOE              */
    uint8  dummy357[3];                                    /* Reserved         */
    const __type1817 TE;                                   /* TE               */
    uint8  dummy358[3];                                    /* Reserved         */
    __type1818 TS;                                         /* TS               */
    uint8  dummy359[3];                                    /* Reserved         */
    __type1819 TT;                                         /* TT               */
    uint8  dummy360[7];                                    /* Reserved         */
    __type1820 CTL;                                        /* CTL              */
} __type2600;

__IOREG(OSTM, 0xFFDD6000, __READ_WRITE, __type2599);                  /* OSTM */
__IOREG(OSTM0, 0xFFDD8000, __READ_WRITE, __type2600);                 /* OSTM0 */
__IOREG(OSTM1, 0xFFDD9000, __READ_WRITE, __type2600);                 /* OSTM1 */
__IOREG(OSTM3, 0xFFD70000, __READ_WRITE, __type2592);                 /* OSTM3 */
__IOREG(OSTM4, 0xFFD70040, __READ_WRITE, __type2592);                 /* OSTM4 */
__IOREG(OSTM5, 0xFFD70080, __READ_WRITE, __type2592);                 /* OSTM5 */
__IOREG(OSTM6, 0xFFD700C0, __READ_WRITE, __type2592);                 /* OSTM6 */
__IOREG(OSTM7, 0xFFD70100, __READ_WRITE, __type2592);                 /* OSTM7 */

#define OSTMIC0CKSEL0 OSTM.IC0CKSEL0.UINT16
#define OSTMIC0CKSEL00 OSTM.IC0CKSEL0.BIT.IC0CKSEL00
#define OSTMIC0CKSEL01 OSTM.IC0CKSEL0.BIT.IC0CKSEL01
#define OSTMIC0CKSEL02 OSTM.IC0CKSEL0.BIT.IC0CKSEL02
#define OSTMIC0CKSEL03 OSTM.IC0CKSEL0.BIT.IC0CKSEL03
#define OSTMIC0TMSEL0 OSTM.IC0CKSEL0.BIT.IC0TMSEL0
#define OSTMIC0TMEN0 OSTM.IC0CKSEL0.BIT.IC0TMEN0
#define OSTMIC0CKSEL1 OSTM.IC0CKSEL1.UINT16
#define OSTMIC0CKSEL10 OSTM.IC0CKSEL1.BIT.IC0CKSEL10
#define OSTMIC0CKSEL11 OSTM.IC0CKSEL1.BIT.IC0CKSEL11
#define OSTMIC0CKSEL12 OSTM.IC0CKSEL1.BIT.IC0CKSEL12
#define OSTMIC0CKSEL13 OSTM.IC0CKSEL1.BIT.IC0CKSEL13
#define OSTMIC0TMSEL1 OSTM.IC0CKSEL1.BIT.IC0TMSEL1
#define OSTMIC0TMEN1 OSTM.IC0CKSEL1.BIT.IC0TMEN1
#define OSTM0CMP OSTM0.CMP
#define OSTM0CNT OSTM0.CNT
#define OSTM0TO OSTM0.TO.UINT8
#define OSTM0TOE OSTM0.TOE.UINT8
#define OSTM0TE OSTM0.TE.UINT8
#define OSTM0TS OSTM0.TS.UINT8
#define OSTM0TT OSTM0.TT.UINT8
#define OSTM0CTL OSTM0.CTL.UINT8
#define OSTM0MD0 OSTM0.CTL.BIT.MD0
#define OSTM0MD1 OSTM0.CTL.BIT.MD1
#define OSTM1CMP OSTM1.CMP
#define OSTM1CNT OSTM1.CNT
#define OSTM1TO OSTM1.TO.UINT8
#define OSTM1TOE OSTM1.TOE.UINT8
#define OSTM1TE OSTM1.TE.UINT8
#define OSTM1TS OSTM1.TS.UINT8
#define OSTM1TT OSTM1.TT.UINT8
#define OSTM1CTL OSTM1.CTL.UINT8
#define OSTM1MD0 OSTM1.CTL.BIT.MD0
#define OSTM1MD1 OSTM1.CTL.BIT.MD1
#define OSTM3CMP OSTM3.CMP
#define OSTM3CNT OSTM3.CNT
#define OSTM3TE OSTM3.TE.UINT8
#define OSTM3TS OSTM3.TS.UINT8
#define OSTM3TT OSTM3.TT.UINT8
#define OSTM3CTL OSTM3.CTL.UINT8
#define OSTM3MD0 OSTM3.CTL.BIT.MD0
#define OSTM3MD1 OSTM3.CTL.BIT.MD1
#define OSTM4CMP OSTM4.CMP
#define OSTM4CNT OSTM4.CNT
#define OSTM4TE OSTM4.TE.UINT8
#define OSTM4TS OSTM4.TS.UINT8
#define OSTM4TT OSTM4.TT.UINT8
#define OSTM4CTL OSTM4.CTL.UINT8
#define OSTM4MD0 OSTM4.CTL.BIT.MD0
#define OSTM4MD1 OSTM4.CTL.BIT.MD1
#define OSTM5CMP OSTM5.CMP
#define OSTM5CNT OSTM5.CNT
#define OSTM5TE OSTM5.TE.UINT8
#define OSTM5TS OSTM5.TS.UINT8
#define OSTM5TT OSTM5.TT.UINT8
#define OSTM5CTL OSTM5.CTL.UINT8
#define OSTM5MD0 OSTM5.CTL.BIT.MD0
#define OSTM5MD1 OSTM5.CTL.BIT.MD1
#define OSTM6CMP OSTM6.CMP
#define OSTM6CNT OSTM6.CNT
#define OSTM6TE OSTM6.TE.UINT8
#define OSTM6TS OSTM6.TS.UINT8
#define OSTM6TT OSTM6.TT.UINT8
#define OSTM6CTL OSTM6.CTL.UINT8
#define OSTM6MD0 OSTM6.CTL.BIT.MD0
#define OSTM6MD1 OSTM6.CTL.BIT.MD1
#define OSTM7CMP OSTM7.CMP
#define OSTM7CNT OSTM7.CNT
#define OSTM7TE OSTM7.TE.UINT8
#define OSTM7TS OSTM7.TS.UINT8
#define OSTM7TT OSTM7.TT.UINT8
#define OSTM7CTL OSTM7.CTL.UINT8
#define OSTM7MD0 OSTM7.CTL.BIT.MD0
#define OSTM7MD1 OSTM7.CTL.BIT.MD1

#endif
