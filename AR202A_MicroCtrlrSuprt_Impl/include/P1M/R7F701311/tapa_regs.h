/**********************************************************************************************************************
* Module File Name  : tapa_regs.h
* Module Description: Timer Option Peripheral Registers
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

#ifndef TAPA_REGS_H
#define TAPA_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    const uint16 ACE:1;                                    /* ACE              */
    uint16 :7;                                             /* Reserved Bits    */
    const uint16 HOF0:1;                                   /* HOF0             */
    const uint16 HOF1:1;                                   /* HOF1             */
    const uint16 HOF2:1;                                   /* HOF2             */
    uint16 :5;                                             /* Reserved Bits    */
} __type820;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ACWE:1;                                         /* ACWE             */
    uint8  :7;                                             /* Reserved Bits    */
} __type821;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ACTS:1;                                         /* ACTS             */
    uint8  :7;                                             /* Reserved Bits    */
} __type822;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ACTT:1;                                         /* ACTT             */
    uint8  :7;                                             /* Reserved Bits    */
} __type823;
typedef struct 
{                                                          /* Bit Access       */
    uint8  OPHS0:1;                                        /* OPHS0            */
    uint8  :7;                                             /* Reserved Bits    */
} __type824;
typedef struct 
{                                                          /* Bit Access       */
    uint8  OPHT0:1;                                        /* OPHT0            */
    uint8  :7;                                             /* Reserved Bits    */
} __type825;
typedef struct 
{                                                          /* Bit Access       */
    uint16 :2;                                             /* Reserved Bits    */
    uint16 DCP:1;                                          /* DCP              */
    uint16 DCN:1;                                          /* DCN              */
    uint16 DCM:1;                                          /* DCM              */
    uint16 :11;                                            /* Reserved Bits    */
} __type826;

typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type820 BIT;                                   /* Bit Access       */
} __type2099;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type821 BIT;                                         /* Bit Access       */
} __type2100;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type822 BIT;                                         /* Bit Access       */
} __type2101;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type823 BIT;                                         /* Bit Access       */
} __type2102;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type824 BIT;                                         /* Bit Access       */
} __type2103;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type825 BIT;                                         /* Bit Access       */
} __type2104;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type826 BIT;                                         /* Bit Access       */
} __type2105;

typedef struct 
{                                                          /* Module           */
    const __type2099 FLG;                                  /* FLG              */
    uint8  dummy587[2];                                    /* Reserved         */
    __type2100 ACWE;                                       /* ACWE             */
    uint8  dummy588[3];                                    /* Reserved         */
    __type2101 ACTS;                                       /* ACTS             */
    uint8  dummy589[3];                                    /* Reserved         */
    __type2102 ACTT;                                       /* ACTT             */
    uint8  dummy590[7];                                    /* Reserved         */
    __type2103 OPHS;                                       /* OPHS             */
    uint8  dummy591[3];                                    /* Reserved         */
    __type2104 OPHT;                                       /* OPHT             */
    uint8  dummy592[7];                                    /* Reserved         */
    __type2105 CTL0;                                       /* CTL0             */
    uint8  dummy593[4062];                                 /* Reserved         */
} __type2611;

__IOREG(TAPA0, 0xFFE90000, __READ_WRITE, __type2611);                 /* TAPA0 */
__IOREG(TAPA1, 0xFFE91000, __READ_WRITE, __type2611);                 /* TAPA1 */
__IOREG(TAPA2, 0xFFE92000, __READ_WRITE, __type2611);                 /* TAPA2 */
__IOREG(TAPA3, 0xFFE93000, __READ_WRITE, __type2611);                 /* TAPA3 */
__IOREGARRAY(TAPA, 4, 0xFFE90000, __READ_WRITE, __type2611);          /* TAPA[4] */

#define TAPA0FLG TAPA0.FLG.UINT16
#define TAPA0ACE TAPA0.FLG.BIT.ACE
#define TAPA0HOF0 TAPA0.FLG.BIT.HOF0
#define TAPA0HOF1 TAPA0.FLG.BIT.HOF1
#define TAPA0HOF2 TAPA0.FLG.BIT.HOF2
#define TAPA0ACWE TAPA0.ACWE.UINT8
#define TAPA0ACTS TAPA0.ACTS.UINT8
#define TAPA0ACTT TAPA0.ACTT.UINT8
#define TAPA0OPHS TAPA0.OPHS.UINT8
#define TAPA0OPHS0 TAPA0.OPHS.BIT.OPHS0
#define TAPA0OPHT TAPA0.OPHT.UINT8
#define TAPA0OPHT0 TAPA0.OPHT.BIT.OPHT0
#define TAPA0CTL0 TAPA0.CTL0.UINT16
#define TAPA0DCP TAPA0.CTL0.BIT.DCP
#define TAPA0DCN TAPA0.CTL0.BIT.DCN
#define TAPA0DCM TAPA0.CTL0.BIT.DCM
#define TAPA1FLG TAPA1.FLG.UINT16
#define TAPA1ACE TAPA1.FLG.BIT.ACE
#define TAPA1HOF0 TAPA1.FLG.BIT.HOF0
#define TAPA1HOF1 TAPA1.FLG.BIT.HOF1
#define TAPA1HOF2 TAPA1.FLG.BIT.HOF2
#define TAPA1ACWE TAPA1.ACWE.UINT8
#define TAPA1ACTS TAPA1.ACTS.UINT8
#define TAPA1ACTT TAPA1.ACTT.UINT8
#define TAPA1OPHS TAPA1.OPHS.UINT8
#define TAPA1OPHS0 TAPA1.OPHS.BIT.OPHS0
#define TAPA1OPHT TAPA1.OPHT.UINT8
#define TAPA1OPHT0 TAPA1.OPHT.BIT.OPHT0
#define TAPA1CTL0 TAPA1.CTL0.UINT16
#define TAPA1DCP TAPA1.CTL0.BIT.DCP
#define TAPA1DCN TAPA1.CTL0.BIT.DCN
#define TAPA1DCM TAPA1.CTL0.BIT.DCM
#define TAPA2FLG TAPA2.FLG.UINT16
#define TAPA2ACE TAPA2.FLG.BIT.ACE
#define TAPA2HOF0 TAPA2.FLG.BIT.HOF0
#define TAPA2HOF1 TAPA2.FLG.BIT.HOF1
#define TAPA2HOF2 TAPA2.FLG.BIT.HOF2
#define TAPA2ACWE TAPA2.ACWE.UINT8
#define TAPA2ACTS TAPA2.ACTS.UINT8
#define TAPA2ACTT TAPA2.ACTT.UINT8
#define TAPA2OPHS TAPA2.OPHS.UINT8
#define TAPA2OPHS0 TAPA2.OPHS.BIT.OPHS0
#define TAPA2OPHT TAPA2.OPHT.UINT8
#define TAPA2OPHT0 TAPA2.OPHT.BIT.OPHT0
#define TAPA2CTL0 TAPA2.CTL0.UINT16
#define TAPA2DCP TAPA2.CTL0.BIT.DCP
#define TAPA2DCN TAPA2.CTL0.BIT.DCN
#define TAPA2DCM TAPA2.CTL0.BIT.DCM
#define TAPA3FLG TAPA3.FLG.UINT16
#define TAPA3ACE TAPA3.FLG.BIT.ACE
#define TAPA3HOF0 TAPA3.FLG.BIT.HOF0
#define TAPA3HOF1 TAPA3.FLG.BIT.HOF1
#define TAPA3HOF2 TAPA3.FLG.BIT.HOF2
#define TAPA3ACWE TAPA3.ACWE.UINT8
#define TAPA3ACTS TAPA3.ACTS.UINT8
#define TAPA3ACTT TAPA3.ACTT.UINT8
#define TAPA3OPHS TAPA3.OPHS.UINT8
#define TAPA3OPHS0 TAPA3.OPHS.BIT.OPHS0
#define TAPA3OPHT TAPA3.OPHT.UINT8
#define TAPA3OPHT0 TAPA3.OPHT.BIT.OPHT0
#define TAPA3CTL0 TAPA3.CTL0.UINT16
#define TAPA3DCP TAPA3.CTL0.BIT.DCP
#define TAPA3DCN TAPA3.CTL0.BIT.DCN
#define TAPA3DCM TAPA3.CTL0.BIT.DCM

#endif
