/**********************************************************************************************************************
* Module File Name  : taud_regs.h
* Module Description: Timer Array Unit D Peripheral Registers
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------
* Date      Rev      Author         Change Description
* -------   -------  --------  ----------------------------------------------
* 12/16/14  1        LWW       Initial version derived from dr7f701311.dvf.h v1 in tools directory
* 09/15/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
* 02/02/17  3        AJM       Updated to remove the redefinition from CAN files provided by vector
**********************************************************************************************************************/

#ifndef TAUD_REGS_H
#define TAUD_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint16 TOL00:1;                                        /* TOL00            */
    uint16 TOL01:1;                                        /* TOL01            */
    uint16 TOL02:1;                                        /* TOL02            */
    uint16 TOL03:1;                                        /* TOL03            */
    uint16 TOL04:1;                                        /* TOL04            */
    uint16 TOL05:1;                                        /* TOL05            */
    uint16 TOL06:1;                                        /* TOL06            */
    uint16 TOL07:1;                                        /* TOL07            */
    uint16 TOL08:1;                                        /* TOL08            */
    uint16 TOL09:1;                                        /* TOL09            */
    uint16 TOL10:1;                                        /* TOL10            */
    uint16 TOL11:1;                                        /* TOL11            */
    uint16 TOL12:1;                                        /* TOL12            */
    uint16 TOL13:1;                                        /* TOL13            */
    uint16 TOL14:1;                                        /* TOL14            */
    uint16 TOL15:1;                                        /* TOL15            */
} __type713;
typedef struct 
{                                                          /* Bit Access       */
    uint16 RDT00:1;                                        /* RDT00            */
    uint16 RDT01:1;                                        /* RDT01            */
    uint16 RDT02:1;                                        /* RDT02            */
    uint16 RDT03:1;                                        /* RDT03            */
    uint16 RDT04:1;                                        /* RDT04            */
    uint16 RDT05:1;                                        /* RDT05            */
    uint16 RDT06:1;                                        /* RDT06            */
    uint16 RDT07:1;                                        /* RDT07            */
    uint16 RDT08:1;                                        /* RDT08            */
    uint16 RDT09:1;                                        /* RDT09            */
    uint16 RDT10:1;                                        /* RDT10            */
    uint16 RDT11:1;                                        /* RDT11            */
    uint16 RDT12:1;                                        /* RDT12            */
    uint16 RDT13:1;                                        /* RDT13            */
    uint16 RDT14:1;                                        /* RDT14            */
    uint16 RDT15:1;                                        /* RDT15            */
} __type714;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 RSF00:1;                                  /* RSF00            */
    const uint16 RSF01:1;                                  /* RSF01            */
    const uint16 RSF02:1;                                  /* RSF02            */
    const uint16 RSF03:1;                                  /* RSF03            */
    const uint16 RSF04:1;                                  /* RSF04            */
    const uint16 RSF05:1;                                  /* RSF05            */
    const uint16 RSF06:1;                                  /* RSF06            */
    const uint16 RSF07:1;                                  /* RSF07            */
    const uint16 RSF08:1;                                  /* RSF08            */
    const uint16 RSF09:1;                                  /* RSF09            */
    const uint16 RSF10:1;                                  /* RSF10            */
    const uint16 RSF11:1;                                  /* RSF11            */
    const uint16 RSF12:1;                                  /* RSF12            */
    const uint16 RSF13:1;                                  /* RSF13            */
    const uint16 RSF14:1;                                  /* RSF14            */
    const uint16 RSF15:1;                                  /* RSF15            */
} __type715;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TRO00:1;                                        /* TRO00            */
    uint16 TRO01:1;                                        /* TRO01            */
    uint16 TRO02:1;                                        /* TRO02            */
    uint16 TRO03:1;                                        /* TRO03            */
    uint16 TRO04:1;                                        /* TRO04            */
    uint16 TRO05:1;                                        /* TRO05            */
    uint16 TRO06:1;                                        /* TRO06            */
    uint16 TRO07:1;                                        /* TRO07            */
    uint16 TRO08:1;                                        /* TRO08            */
    uint16 TRO09:1;                                        /* TRO09            */
    uint16 TRO10:1;                                        /* TRO10            */
    uint16 TRO11:1;                                        /* TRO11            */
    uint16 TRO12:1;                                        /* TRO12            */
    uint16 TRO13:1;                                        /* TRO13            */
    uint16 TRO14:1;                                        /* TRO14            */
    uint16 TRO15:1;                                        /* TRO15            */
} __type716;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TME00:1;                                        /* TME00            */
    uint16 TME01:1;                                        /* TME01            */
    uint16 TME02:1;                                        /* TME02            */
    uint16 TME03:1;                                        /* TME03            */
    uint16 TME04:1;                                        /* TME04            */
    uint16 TME05:1;                                        /* TME05            */
    uint16 TME06:1;                                        /* TME06            */
    uint16 TME07:1;                                        /* TME07            */
    uint16 TME08:1;                                        /* TME08            */
    uint16 TME09:1;                                        /* TME09            */
    uint16 TME10:1;                                        /* TME10            */
    uint16 TME11:1;                                        /* TME11            */
    uint16 TME12:1;                                        /* TME12            */
    uint16 TME13:1;                                        /* TME13            */
    uint16 TME14:1;                                        /* TME14            */
    uint16 TME15:1;                                        /* TME15            */
} __type717;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TDL00:1;                                        /* TDL00            */
    uint16 TDL01:1;                                        /* TDL01            */
    uint16 TDL02:1;                                        /* TDL02            */
    uint16 TDL03:1;                                        /* TDL03            */
    uint16 TDL04:1;                                        /* TDL04            */
    uint16 TDL05:1;                                        /* TDL05            */
    uint16 TDL06:1;                                        /* TDL06            */
    uint16 TDL07:1;                                        /* TDL07            */
    uint16 TDL08:1;                                        /* TDL08            */
    uint16 TDL09:1;                                        /* TDL09            */
    uint16 TDL10:1;                                        /* TDL10            */
    uint16 TDL11:1;                                        /* TDL11            */
    uint16 TDL12:1;                                        /* TDL12            */
    uint16 TDL13:1;                                        /* TDL13            */
    uint16 TDL14:1;                                        /* TDL14            */
    uint16 TDL15:1;                                        /* TDL15            */
} __type718;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TO00:1;                                         /* TO00             */
    uint16 TO01:1;                                         /* TO01             */
    uint16 TO02:1;                                         /* TO02             */
    uint16 TO03:1;                                         /* TO03             */
    uint16 TO04:1;                                         /* TO04             */
    uint16 TO05:1;                                         /* TO05             */
    uint16 TO06:1;                                         /* TO06             */
    uint16 TO07:1;                                         /* TO07             */
    uint16 TO08:1;                                         /* TO08             */
    uint16 TO09:1;                                         /* TO09             */
    uint16 TO10:1;                                         /* TO10             */
    uint16 TO11:1;                                         /* TO11             */
    uint16 TO12:1;                                         /* TO12             */
    uint16 TO13:1;                                         /* TO13             */
    uint16 TO14:1;                                         /* TO14             */
    uint16 TO15:1;                                         /* TO15             */
} __type719;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TOE00:1;                                        /* TOE00            */
    uint16 TOE01:1;                                        /* TOE01            */
    uint16 TOE02:1;                                        /* TOE02            */
    uint16 TOE03:1;                                        /* TOE03            */
    uint16 TOE04:1;                                        /* TOE04            */
    uint16 TOE05:1;                                        /* TOE05            */
    uint16 TOE06:1;                                        /* TOE06            */
    uint16 TOE07:1;                                        /* TOE07            */
    uint16 TOE08:1;                                        /* TOE08            */
    uint16 TOE09:1;                                        /* TOE09            */
    uint16 TOE10:1;                                        /* TOE10            */
    uint16 TOE11:1;                                        /* TOE11            */
    uint16 TOE12:1;                                        /* TOE12            */
    uint16 TOE13:1;                                        /* TOE13            */
    uint16 TOE14:1;                                        /* TOE14            */
    uint16 TOE15:1;                                        /* TOE15            */
} __type720;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  OVF:1;                                    /* OVF              */
    const uint8  CSF:1;                                    /* CSF              */
    uint8  :6;                                             /* Reserved Bits    */
} __type722;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 TE00:1;                                   /* TE00             */
    const uint16 TE01:1;                                   /* TE01             */
    const uint16 TE02:1;                                   /* TE02             */
    const uint16 TE03:1;                                   /* TE03             */
    const uint16 TE04:1;                                   /* TE04             */
    const uint16 TE05:1;                                   /* TE05             */
    const uint16 TE06:1;                                   /* TE06             */
    const uint16 TE07:1;                                   /* TE07             */
    const uint16 TE08:1;                                   /* TE08             */
    const uint16 TE09:1;                                   /* TE09             */
    const uint16 TE10:1;                                   /* TE10             */
    const uint16 TE11:1;                                   /* TE11             */
    const uint16 TE12:1;                                   /* TE12             */
    const uint16 TE13:1;                                   /* TE13             */
    const uint16 TE14:1;                                   /* TE14             */
    const uint16 TE15:1;                                   /* TE15             */
} __type724;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TS00:1;                                         /* TS00             */
    uint16 TS01:1;                                         /* TS01             */
    uint16 TS02:1;                                         /* TS02             */
    uint16 TS03:1;                                         /* TS03             */
    uint16 TS04:1;                                         /* TS04             */
    uint16 TS05:1;                                         /* TS05             */
    uint16 TS06:1;                                         /* TS06             */
    uint16 TS07:1;                                         /* TS07             */
    uint16 TS08:1;                                         /* TS08             */
    uint16 TS09:1;                                         /* TS09             */
    uint16 TS10:1;                                         /* TS10             */
    uint16 TS11:1;                                         /* TS11             */
    uint16 TS12:1;                                         /* TS12             */
    uint16 TS13:1;                                         /* TS13             */
    uint16 TS14:1;                                         /* TS14             */
    uint16 TS15:1;                                         /* TS15             */
} __type725;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TT00:1;                                         /* TT00             */
    uint16 TT01:1;                                         /* TT01             */
    uint16 TT02:1;                                         /* TT02             */
    uint16 TT03:1;                                         /* TT03             */
    uint16 TT04:1;                                         /* TT04             */
    uint16 TT05:1;                                         /* TT05             */
    uint16 TT06:1;                                         /* TT06             */
    uint16 TT07:1;                                         /* TT07             */
    uint16 TT08:1;                                         /* TT08             */
    uint16 TT09:1;                                         /* TT09             */
    uint16 TT10:1;                                         /* TT10             */
    uint16 TT11:1;                                         /* TT11             */
    uint16 TT12:1;                                         /* TT12             */
    uint16 TT13:1;                                         /* TT13             */
    uint16 TT14:1;                                         /* TT14             */
    uint16 TT15:1;                                         /* TT15             */
} __type726;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TOM00:1;                                        /* TOM00            */
    uint16 TOM01:1;                                        /* TOM01            */
    uint16 TOM02:1;                                        /* TOM02            */
    uint16 TOM03:1;                                        /* TOM03            */
    uint16 TOM04:1;                                        /* TOM04            */
    uint16 TOM05:1;                                        /* TOM05            */
    uint16 TOM06:1;                                        /* TOM06            */
    uint16 TOM07:1;                                        /* TOM07            */
    uint16 TOM08:1;                                        /* TOM08            */
    uint16 TOM09:1;                                        /* TOM09            */
    uint16 TOM10:1;                                        /* TOM10            */
    uint16 TOM11:1;                                        /* TOM11            */
    uint16 TOM12:1;                                        /* TOM12            */
    uint16 TOM13:1;                                        /* TOM13            */
    uint16 TOM14:1;                                        /* TOM14            */
    uint16 TOM15:1;                                        /* TOM15            */
} __type729;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TOC00:1;                                        /* TOC00            */
    uint16 TOC01:1;                                        /* TOC01            */
    uint16 TOC02:1;                                        /* TOC02            */
    uint16 TOC03:1;                                        /* TOC03            */
    uint16 TOC04:1;                                        /* TOC04            */
    uint16 TOC05:1;                                        /* TOC05            */
    uint16 TOC06:1;                                        /* TOC06            */
    uint16 TOC07:1;                                        /* TOC07            */
    uint16 TOC08:1;                                        /* TOC08            */
    uint16 TOC09:1;                                        /* TOC09            */
    uint16 TOC10:1;                                        /* TOC10            */
    uint16 TOC11:1;                                        /* TOC11            */
    uint16 TOC12:1;                                        /* TOC12            */
    uint16 TOC13:1;                                        /* TOC13            */
    uint16 TOC14:1;                                        /* TOC14            */
    uint16 TOC15:1;                                        /* TOC15            */
} __type730;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TDE00:1;                                        /* TDE00            */
    uint16 TDE01:1;                                        /* TDE01            */
    uint16 TDE02:1;                                        /* TDE02            */
    uint16 TDE03:1;                                        /* TDE03            */
    uint16 TDE04:1;                                        /* TDE04            */
    uint16 TDE05:1;                                        /* TDE05            */
    uint16 TDE06:1;                                        /* TDE06            */
    uint16 TDE07:1;                                        /* TDE07            */
    uint16 TDE08:1;                                        /* TDE08            */
    uint16 TDE09:1;                                        /* TDE09            */
    uint16 TDE10:1;                                        /* TDE10            */
    uint16 TDE11:1;                                        /* TDE11            */
    uint16 TDE12:1;                                        /* TDE12            */
    uint16 TDE13:1;                                        /* TDE13            */
    uint16 TDE14:1;                                        /* TDE14            */
    uint16 TDE15:1;                                        /* TDE15            */
} __type731;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TDM00:1;                                        /* TDM00            */
    uint16 TDM01:1;                                        /* TDM01            */
    uint16 TDM02:1;                                        /* TDM02            */
    uint16 TDM03:1;                                        /* TDM03            */
    uint16 TDM04:1;                                        /* TDM04            */
    uint16 TDM05:1;                                        /* TDM05            */
    uint16 TDM06:1;                                        /* TDM06            */
    uint16 TDM07:1;                                        /* TDM07            */
    uint16 TDM08:1;                                        /* TDM08            */
    uint16 TDM09:1;                                        /* TDM09            */
    uint16 TDM10:1;                                        /* TDM10            */
    uint16 TDM11:1;                                        /* TDM11            */
    uint16 TDM12:1;                                        /* TDM12            */
    uint16 TDM13:1;                                        /* TDM13            */
    uint16 TDM14:1;                                        /* TDM14            */
    uint16 TDM15:1;                                        /* TDM15            */
} __type732;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TRE00:1;                                        /* TRE00            */
    uint16 TRE01:1;                                        /* TRE01            */
    uint16 TRE02:1;                                        /* TRE02            */
    uint16 TRE03:1;                                        /* TRE03            */
    uint16 TRE04:1;                                        /* TRE04            */
    uint16 TRE05:1;                                        /* TRE05            */
    uint16 TRE06:1;                                        /* TRE06            */
    uint16 TRE07:1;                                        /* TRE07            */
    uint16 TRE08:1;                                        /* TRE08            */
    uint16 TRE09:1;                                        /* TRE09            */
    uint16 TRE10:1;                                        /* TRE10            */
    uint16 TRE11:1;                                        /* TRE11            */
    uint16 TRE12:1;                                        /* TRE12            */
    uint16 TRE13:1;                                        /* TRE13            */
    uint16 TRE14:1;                                        /* TRE14            */
    uint16 TRE15:1;                                        /* TRE15            */
} __type733;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TRC00:1;                                        /* TRC00            */
    uint16 TRC01:1;                                        /* TRC01            */
    uint16 TRC02:1;                                        /* TRC02            */
    uint16 TRC03:1;                                        /* TRC03            */
    uint16 TRC04:1;                                        /* TRC04            */
    uint16 TRC05:1;                                        /* TRC05            */
    uint16 TRC06:1;                                        /* TRC06            */
    uint16 TRC07:1;                                        /* TRC07            */
    uint16 TRC08:1;                                        /* TRC08            */
    uint16 TRC09:1;                                        /* TRC09            */
    uint16 TRC10:1;                                        /* TRC10            */
    uint16 TRC11:1;                                        /* TRC11            */
    uint16 TRC12:1;                                        /* TRC12            */
    uint16 TRC13:1;                                        /* TRC13            */
    uint16 TRC14:1;                                        /* TRC14            */
    uint16 TRC15:1;                                        /* TRC15            */
} __type734;
typedef struct 
{                                                          /* Bit Access       */
    uint16 RDE00:1;                                        /* RDE00            */
    uint16 RDE01:1;                                        /* RDE01            */
    uint16 RDE02:1;                                        /* RDE02            */
    uint16 RDE03:1;                                        /* RDE03            */
    uint16 RDE04:1;                                        /* RDE04            */
    uint16 RDE05:1;                                        /* RDE05            */
    uint16 RDE06:1;                                        /* RDE06            */
    uint16 RDE07:1;                                        /* RDE07            */
    uint16 RDE08:1;                                        /* RDE08            */
    uint16 RDE09:1;                                        /* RDE09            */
    uint16 RDE10:1;                                        /* RDE10            */
    uint16 RDE11:1;                                        /* RDE11            */
    uint16 RDE12:1;                                        /* RDE12            */
    uint16 RDE13:1;                                        /* RDE13            */
    uint16 RDE14:1;                                        /* RDE14            */
    uint16 RDE15:1;                                        /* RDE15            */
} __type735;
typedef struct 
{                                                          /* Bit Access       */
    uint16 RDM00:1;                                        /* RDM00            */
    uint16 RDM01:1;                                        /* RDM01            */
    uint16 RDM02:1;                                        /* RDM02            */
    uint16 RDM03:1;                                        /* RDM03            */
    uint16 RDM04:1;                                        /* RDM04            */
    uint16 RDM05:1;                                        /* RDM05            */
    uint16 RDM06:1;                                        /* RDM06            */
    uint16 RDM07:1;                                        /* RDM07            */
    uint16 RDM08:1;                                        /* RDM08            */
    uint16 RDM09:1;                                        /* RDM09            */
    uint16 RDM10:1;                                        /* RDM10            */
    uint16 RDM11:1;                                        /* RDM11            */
    uint16 RDM12:1;                                        /* RDM12            */
    uint16 RDM13:1;                                        /* RDM13            */
    uint16 RDM14:1;                                        /* RDM14            */
    uint16 RDM15:1;                                        /* RDM15            */
} __type736;
typedef struct 
{                                                          /* Bit Access       */
    uint16 RDS00:1;                                        /* RDS00            */
    uint16 RDS01:1;                                        /* RDS01            */
    uint16 RDS02:1;                                        /* RDS02            */
    uint16 RDS03:1;                                        /* RDS03            */
    uint16 RDS04:1;                                        /* RDS04            */
    uint16 RDS05:1;                                        /* RDS05            */
    uint16 RDS06:1;                                        /* RDS06            */
    uint16 RDS07:1;                                        /* RDS07            */
    uint16 RDS08:1;                                        /* RDS08            */
    uint16 RDS09:1;                                        /* RDS09            */
    uint16 RDS010:1;                                        /* RDS010            */
    uint16 RDS011:1;                                        /* RDS011            */
    uint16 RDS012:1;                                        /* RDS012            */
    uint16 RDS013:1;                                        /* RDS013            */
    uint16 RDS014:1;                                        /* RDS014            */
    uint16 RDS015:1;                                        /* RDS015            */
} __type737;
typedef struct 
{                                                          /* Bit Access       */
    uint16 RDC00:1;                                        /* RDC00            */
    uint16 RDC01:1;                                        /* RDC01            */
    uint16 RDC02:1;                                        /* RDC02            */
    uint16 RDC03:1;                                        /* RDC03            */
    uint16 RDC04:1;                                        /* RDC04            */
    uint16 RDC05:1;                                        /* RDC05            */
    uint16 RDC06:1;                                        /* RDC06            */
    uint16 RDC07:1;                                        /* RDC07            */
    uint16 RDC08:1;                                        /* RDC08            */
    uint16 RDC09:1;                                        /* RDC09            */
    uint16 RDC10:1;                                        /* RDC10            */
    uint16 RDC11:1;                                        /* RDC11            */
    uint16 RDC12:1;                                        /* RDC12            */
    uint16 RDC13:1;                                        /* RDC13            */
    uint16 RDC14:1;                                        /* RDC14            */
    uint16 RDC15:1;                                        /* RDC15            */
} __type738;

typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type713 BIT;                                         /* Bit Access       */
} __type1992;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type714 BIT;                                         /* Bit Access       */
} __type1993;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type715 BIT;                                   /* Bit Access       */
} __type1994;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type716 BIT;                                         /* Bit Access       */
} __type1995;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type717 BIT;                                         /* Bit Access       */
} __type1996;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type718 BIT;                                         /* Bit Access       */
} __type1997;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type719 BIT;                                         /* Bit Access       */
} __type1998;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type720 BIT;                                         /* Bit Access       */
} __type1999;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type722 BIT;                                   /* Bit Access       */
} __type2001;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type724 BIT;                                   /* Bit Access       */
} __type2003;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type725 BIT;                                         /* Bit Access       */
} __type2004;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type726 BIT;                                         /* Bit Access       */
} __type2005;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type729 BIT;                                         /* Bit Access       */
} __type2008;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type730 BIT;                                         /* Bit Access       */
} __type2009;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type731 BIT;                                         /* Bit Access       */
} __type2010;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type732 BIT;                                         /* Bit Access       */
} __type2011;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type733 BIT;                                         /* Bit Access       */
} __type2012;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type734 BIT;                                         /* Bit Access       */
} __type2013;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type735 BIT;                                         /* Bit Access       */
} __type2014;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type736 BIT;                                         /* Bit Access       */
} __type2015;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type737 BIT;                                         /* Bit Access       */
} __type2016;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type738 BIT;                                         /* Bit Access       */
} __type2017;

typedef struct 
{                                                          /* Module           */
    uint16 CDR0;                                           /* CDR0             */
    uint8  dummy383[2];                                    /* Reserved         */
    uint16 CDR1;                                           /* CDR1             */
    uint8  dummy384[2];                                    /* Reserved         */
    uint16 CDR2;                                           /* CDR2             */
    uint8  dummy385[2];                                    /* Reserved         */
    uint16 CDR3;                                           /* CDR3             */
    uint8  dummy386[2];                                    /* Reserved         */
    uint16 CDR4;                                           /* CDR4             */
    uint8  dummy387[2];                                    /* Reserved         */
    uint16 CDR5;                                           /* CDR5             */
    uint8  dummy388[2];                                    /* Reserved         */
    uint16 CDR6;                                           /* CDR6             */
    uint8  dummy389[2];                                    /* Reserved         */
    uint16 CDR7;                                           /* CDR7             */
    uint8  dummy390[2];                                    /* Reserved         */
    uint16 CDR8;                                           /* CDR8             */
    uint8  dummy391[2];                                    /* Reserved         */
    uint16 CDR9;                                           /* CDR9             */
    uint8  dummy392[2];                                    /* Reserved         */
    uint16 CDR10;                                          /* CDR10            */
    uint8  dummy393[2];                                    /* Reserved         */
    uint16 CDR11;                                          /* CDR11            */
    uint8  dummy394[2];                                    /* Reserved         */
    uint16 CDR12;                                          /* CDR12            */
    uint8  dummy395[2];                                    /* Reserved         */
    uint16 CDR13;                                          /* CDR13            */
    uint8  dummy396[2];                                    /* Reserved         */
    uint16 CDR14;                                          /* CDR14            */
    uint8  dummy397[2];                                    /* Reserved         */
    uint16 CDR15;                                          /* CDR15            */
    uint8  dummy398[2];                                    /* Reserved         */
    __type1992 TOL;                                        /* TOL              */
    uint8  dummy399[2];                                    /* Reserved         */
    __type1993 RDT;                                        /* RDT              */
    uint8  dummy400[2];                                    /* Reserved         */
    const __type1994 RSF;                                  /* RSF              */
    uint8  dummy401[2];                                    /* Reserved         */
    __type1995 TRO;                                        /* TRO              */
    uint8  dummy402[2];                                    /* Reserved         */
    __type1996 TME;                                        /* TME              */
    uint8  dummy403[2];                                    /* Reserved         */
    __type1997 TDL;                                        /* TDL              */
    uint8  dummy404[2];                                    /* Reserved         */
    __type1998 TO;                                         /* TO               */
    uint8  dummy405[2];                                    /* Reserved         */
    __type1999 TOE;                                        /* TOE              */
    uint8  dummy406[34];                                   /* Reserved         */
    const uint16 CNT0;                                     /* CNT0             */
    uint8  dummy407[2];                                    /* Reserved         */
    const uint16 CNT1;                                     /* CNT1             */
    uint8  dummy408[2];                                    /* Reserved         */
    const uint16 CNT2;                                     /* CNT2             */
    uint8  dummy409[2];                                    /* Reserved         */
    const uint16 CNT3;                                     /* CNT3             */
    uint8  dummy410[2];                                    /* Reserved         */
    const uint16 CNT4;                                     /* CNT4             */
    uint8  dummy411[2];                                    /* Reserved         */
    const uint16 CNT5;                                     /* CNT5             */
    uint8  dummy412[2];                                    /* Reserved         */
    const uint16 CNT6;                                     /* CNT6             */
    uint8  dummy413[2];                                    /* Reserved         */
    const uint16 CNT7;                                     /* CNT7             */
    uint8  dummy414[2];                                    /* Reserved         */
    const uint16 CNT8;                                     /* CNT8             */
    uint8  dummy415[2];                                    /* Reserved         */
    const uint16 CNT9;                                     /* CNT9             */
    uint8  dummy416[2];                                    /* Reserved         */
    const uint16 CNT10;                                    /* CNT10            */
    uint8  dummy417[2];                                    /* Reserved         */
    const uint16 CNT11;                                    /* CNT11            */
    uint8  dummy418[2];                                    /* Reserved         */
    const uint16 CNT12;                                    /* CNT12            */
    uint8  dummy419[2];                                    /* Reserved         */
    const uint16 CNT13;                                    /* CNT13            */
    uint8  dummy420[2];                                    /* Reserved         */
    const uint16 CNT14;                                    /* CNT14            */
    uint8  dummy421[2];                                    /* Reserved         */
    const uint16 CNT15;                                    /* CNT15            */
    uint8  dummy422[2];                                    /* Reserved         */
    __type2000 CMUR0;                                      /* CMUR0            */
    uint8  dummy423[3];                                    /* Reserved         */
    __type2000 CMUR1;                                      /* CMUR1            */
    uint8  dummy424[3];                                    /* Reserved         */
    __type2000 CMUR2;                                      /* CMUR2            */
    uint8  dummy425[3];                                    /* Reserved         */
    __type2000 CMUR3;                                      /* CMUR3            */
    uint8  dummy426[3];                                    /* Reserved         */
    __type2000 CMUR4;                                      /* CMUR4            */
    uint8  dummy427[3];                                    /* Reserved         */
    __type2000 CMUR5;                                      /* CMUR5            */
    uint8  dummy428[3];                                    /* Reserved         */
    __type2000 CMUR6;                                      /* CMUR6            */
    uint8  dummy429[3];                                    /* Reserved         */
    __type2000 CMUR7;                                      /* CMUR7            */
    uint8  dummy430[3];                                    /* Reserved         */
    __type2000 CMUR8;                                      /* CMUR8            */
    uint8  dummy431[3];                                    /* Reserved         */
    __type2000 CMUR9;                                      /* CMUR9            */
    uint8  dummy432[3];                                    /* Reserved         */
    __type2000 CMUR10;                                     /* CMUR10           */
    uint8  dummy433[3];                                    /* Reserved         */
    __type2000 CMUR11;                                     /* CMUR11           */
    uint8  dummy434[3];                                    /* Reserved         */
    __type2000 CMUR12;                                     /* CMUR12           */
    uint8  dummy435[3];                                    /* Reserved         */
    __type2000 CMUR13;                                     /* CMUR13           */
    uint8  dummy436[3];                                    /* Reserved         */
    __type2000 CMUR14;                                     /* CMUR14           */
    uint8  dummy437[3];                                    /* Reserved         */
    __type2000 CMUR15;                                     /* CMUR15           */
    uint8  dummy438[67];                                   /* Reserved         */
    const __type2001 CSR0;                                 /* CSR0             */
    uint8  dummy439[3];                                    /* Reserved         */
    const __type2001 CSR1;                                 /* CSR1             */
    uint8  dummy440[3];                                    /* Reserved         */
    const __type2001 CSR2;                                 /* CSR2             */
    uint8  dummy441[3];                                    /* Reserved         */
    const __type2001 CSR3;                                 /* CSR3             */
    uint8  dummy442[3];                                    /* Reserved         */
    const __type2001 CSR4;                                 /* CSR4             */
    uint8  dummy443[3];                                    /* Reserved         */
    const __type2001 CSR5;                                 /* CSR5             */
    uint8  dummy444[3];                                    /* Reserved         */
    const __type2001 CSR6;                                 /* CSR6             */
    uint8  dummy445[3];                                    /* Reserved         */
    const __type2001 CSR7;                                 /* CSR7             */
    uint8  dummy446[3];                                    /* Reserved         */
    const __type2001 CSR8;                                 /* CSR8             */
    uint8  dummy447[3];                                    /* Reserved         */
    const __type2001 CSR9;                                 /* CSR9             */
    uint8  dummy448[3];                                    /* Reserved         */
    const __type2001 CSR10;                                /* CSR10            */
    uint8  dummy449[3];                                    /* Reserved         */
    const __type2001 CSR11;                                /* CSR11            */
    uint8  dummy450[3];                                    /* Reserved         */
    const __type2001 CSR12;                                /* CSR12            */
    uint8  dummy451[3];                                    /* Reserved         */
    const __type2001 CSR13;                                /* CSR13            */
    uint8  dummy452[3];                                    /* Reserved         */
    const __type2001 CSR14;                                /* CSR14            */
    uint8  dummy453[3];                                    /* Reserved         */
    const __type2001 CSR15;                                /* CSR15            */
    uint8  dummy454[3];                                    /* Reserved         */
    __type2002 CSC0;                                       /* CSC0             */
    uint8  dummy455[3];                                    /* Reserved         */
    __type2002 CSC1;                                       /* CSC1             */
    uint8  dummy456[3];                                    /* Reserved         */
    __type2002 CSC2;                                       /* CSC2             */
    uint8  dummy457[3];                                    /* Reserved         */
    __type2002 CSC3;                                       /* CSC3             */
    uint8  dummy458[3];                                    /* Reserved         */
    __type2002 CSC4;                                       /* CSC4             */
    uint8  dummy459[3];                                    /* Reserved         */
    __type2002 CSC5;                                       /* CSC5             */
    uint8  dummy460[3];                                    /* Reserved         */
    __type2002 CSC6;                                       /* CSC6             */
    uint8  dummy461[3];                                    /* Reserved         */
    __type2002 CSC7;                                       /* CSC7             */
    uint8  dummy462[3];                                    /* Reserved         */
    __type2002 CSC8;                                       /* CSC8             */
    uint8  dummy463[3];                                    /* Reserved         */
    __type2002 CSC9;                                       /* CSC9             */
    uint8  dummy464[3];                                    /* Reserved         */
    __type2002 CSC10;                                      /* CSC10            */
    uint8  dummy465[3];                                    /* Reserved         */
    __type2002 CSC11;                                      /* CSC11            */
    uint8  dummy466[3];                                    /* Reserved         */
    __type2002 CSC12;                                      /* CSC12            */
    uint8  dummy467[3];                                    /* Reserved         */
    __type2002 CSC13;                                      /* CSC13            */
    uint8  dummy468[3];                                    /* Reserved         */
    __type2002 CSC14;                                      /* CSC14            */
    uint8  dummy469[3];                                    /* Reserved         */
    __type2002 CSC15;                                      /* CSC15            */
    uint8  dummy470[3];                                    /* Reserved         */
    const __type2003 TE;                                   /* TE               */
    uint8  dummy471[2];                                    /* Reserved         */
    __type2004 TS;                                         /* TS               */
    uint8  dummy472[2];                                    /* Reserved         */
    __type2005 TT;                                         /* TT               */
    uint8  dummy473[54];                                   /* Reserved         */
    __type2006 CMOR0;                                      /* CMOR0            */
    uint8  dummy474[2];                                    /* Reserved         */
    __type2006 CMOR1;                                      /* CMOR1            */
    uint8  dummy475[2];                                    /* Reserved         */
    __type2006 CMOR2;                                      /* CMOR2            */
    uint8  dummy476[2];                                    /* Reserved         */
    __type2006 CMOR3;                                      /* CMOR3            */
    uint8  dummy477[2];                                    /* Reserved         */
    __type2006 CMOR4;                                      /* CMOR4            */
    uint8  dummy478[2];                                    /* Reserved         */
    __type2006 CMOR5;                                      /* CMOR5            */
    uint8  dummy479[2];                                    /* Reserved         */
    __type2006 CMOR6;                                      /* CMOR6            */
    uint8  dummy480[2];                                    /* Reserved         */
    __type2006 CMOR7;                                      /* CMOR7            */
    uint8  dummy481[2];                                    /* Reserved         */
    __type2006 CMOR8;                                      /* CMOR8            */
    uint8  dummy482[2];                                    /* Reserved         */
    __type2006 CMOR9;                                      /* CMOR9            */
    uint8  dummy483[2];                                    /* Reserved         */
    __type2006 CMOR10;                                     /* CMOR10           */
    uint8  dummy484[2];                                    /* Reserved         */
    __type2006 CMOR11;                                     /* CMOR11           */
    uint8  dummy485[2];                                    /* Reserved         */
    __type2006 CMOR12;                                     /* CMOR12           */
    uint8  dummy486[2];                                    /* Reserved         */
    __type2006 CMOR13;                                     /* CMOR13           */
    uint8  dummy487[2];                                    /* Reserved         */
    __type2006 CMOR14;                                     /* CMOR14           */
    uint8  dummy488[2];                                    /* Reserved         */
    __type2006 CMOR15;                                     /* CMOR15           */
    uint8  dummy489[2];                                    /* Reserved         */
    __type2007 TPS;                                        /* TPS              */
    uint8  dummy490[2];                                    /* Reserved         */
    uint8  BRS;                                            /* BRS              */
    uint8  dummy491[3];                                    /* Reserved         */
    __type2008 TOM;                                        /* TOM              */
    uint8  dummy492[2];                                    /* Reserved         */
    __type2009 TOC;                                        /* TOC              */
    uint8  dummy493[2];                                    /* Reserved         */
    __type2010 TDE;                                        /* TDE              */
    uint8  dummy494[2];                                    /* Reserved         */
    __type2011 TDM;                                        /* TDM              */
    uint8  dummy495[2];                                    /* Reserved         */
    __type2012 TRE;                                        /* TRE              */
    uint8  dummy496[2];                                    /* Reserved         */
    __type2013 TRC;                                        /* TRC              */
    uint8  dummy497[2];                                    /* Reserved         */
    __type2014 RDE;                                        /* RDE              */
    uint8  dummy498[2];                                    /* Reserved         */
    __type2015 RDM;                                        /* RDM              */
    uint8  dummy499[2];                                    /* Reserved         */
    __type2016 RDS;                                        /* RDS              */
    uint8  dummy500[2];                                    /* Reserved         */
    __type2017 RDC;                                        /* RDC              */
    uint8  dummy501[3474];                                 /* Reserved         */
} __type2607;

__IOREG(TAUD0, 0xFFE20000, __READ_WRITE, __type2607);                 /* TAUD0 */
__IOREG(TAUD1, 0xFFE21000, __READ_WRITE, __type2607);                 /* TAUD1 */
__IOREG(TAUD2, 0xFFE22000, __READ_WRITE, __type2607);                 /* TAUD2 */
__IOREGARRAY(TAUD, 3, 0xFFE20000, __READ_WRITE, __type2607);          /* TAUD[3] */

#define TAUD0CDR0 TAUD0.CDR0
#define TAUD0CDR1 TAUD0.CDR1
#define TAUD0CDR2 TAUD0.CDR2
#define TAUD0CDR3 TAUD0.CDR3
#define TAUD0CDR4 TAUD0.CDR4
#define TAUD0CDR5 TAUD0.CDR5
#define TAUD0CDR6 TAUD0.CDR6
#define TAUD0CDR7 TAUD0.CDR7
#define TAUD0CDR8 TAUD0.CDR8
#define TAUD0CDR9 TAUD0.CDR9
#define TAUD0CDR10 TAUD0.CDR10
#define TAUD0CDR11 TAUD0.CDR11
#define TAUD0CDR12 TAUD0.CDR12
#define TAUD0CDR13 TAUD0.CDR13
#define TAUD0CDR14 TAUD0.CDR14
#define TAUD0CDR15 TAUD0.CDR15
#define TAUD0TOL TAUD0.TOL.UINT16
#define TAUD0TOL00 TAUD0.TOL.BIT.TOL00
#define TAUD0TOL01 TAUD0.TOL.BIT.TOL01
#define TAUD0TOL02 TAUD0.TOL.BIT.TOL02
#define TAUD0TOL03 TAUD0.TOL.BIT.TOL03
#define TAUD0TOL04 TAUD0.TOL.BIT.TOL04
#define TAUD0TOL05 TAUD0.TOL.BIT.TOL05
#define TAUD0TOL06 TAUD0.TOL.BIT.TOL06
#define TAUD0TOL07 TAUD0.TOL.BIT.TOL07
#define TAUD0TOL08 TAUD0.TOL.BIT.TOL08
#define TAUD0TOL09 TAUD0.TOL.BIT.TOL09
#define TAUD0TOL10 TAUD0.TOL.BIT.TOL10
#define TAUD0TOL11 TAUD0.TOL.BIT.TOL11
#define TAUD0TOL12 TAUD0.TOL.BIT.TOL12
#define TAUD0TOL13 TAUD0.TOL.BIT.TOL13
#define TAUD0TOL14 TAUD0.TOL.BIT.TOL14
#define TAUD0TOL15 TAUD0.TOL.BIT.TOL15
#define TAUD0RDT TAUD0.RDT.UINT16
#define TAUD0RDT00 TAUD0.RDT.BIT.RDT00
#define TAUD0RDT01 TAUD0.RDT.BIT.RDT01
#define TAUD0RDT02 TAUD0.RDT.BIT.RDT02
#define TAUD0RDT03 TAUD0.RDT.BIT.RDT03
#define TAUD0RDT04 TAUD0.RDT.BIT.RDT04
#define TAUD0RDT05 TAUD0.RDT.BIT.RDT05
#define TAUD0RDT06 TAUD0.RDT.BIT.RDT06
#define TAUD0RDT07 TAUD0.RDT.BIT.RDT07
#define TAUD0RDT08 TAUD0.RDT.BIT.RDT08
#define TAUD0RDT09 TAUD0.RDT.BIT.RDT09
#define TAUD0RDT10 TAUD0.RDT.BIT.RDT10
#define TAUD0RDT11 TAUD0.RDT.BIT.RDT11
#define TAUD0RDT12 TAUD0.RDT.BIT.RDT12
#define TAUD0RDT13 TAUD0.RDT.BIT.RDT13
#define TAUD0RDT14 TAUD0.RDT.BIT.RDT14
#define TAUD0RDT15 TAUD0.RDT.BIT.RDT15
#define TAUD0RSF TAUD0.RSF.UINT16
#define TAUD0RSF00 TAUD0.RSF.BIT.RSF00
#define TAUD0RSF01 TAUD0.RSF.BIT.RSF01
#define TAUD0RSF02 TAUD0.RSF.BIT.RSF02
#define TAUD0RSF03 TAUD0.RSF.BIT.RSF03
#define TAUD0RSF04 TAUD0.RSF.BIT.RSF04
#define TAUD0RSF05 TAUD0.RSF.BIT.RSF05
#define TAUD0RSF06 TAUD0.RSF.BIT.RSF06
#define TAUD0RSF07 TAUD0.RSF.BIT.RSF07
#define TAUD0RSF08 TAUD0.RSF.BIT.RSF08
#define TAUD0RSF09 TAUD0.RSF.BIT.RSF09
#define TAUD0RSF10 TAUD0.RSF.BIT.RSF10
#define TAUD0RSF11 TAUD0.RSF.BIT.RSF11
#define TAUD0RSF12 TAUD0.RSF.BIT.RSF12
#define TAUD0RSF13 TAUD0.RSF.BIT.RSF13
#define TAUD0RSF14 TAUD0.RSF.BIT.RSF14
#define TAUD0RSF15 TAUD0.RSF.BIT.RSF15
#define TAUD0TRO TAUD0.TRO.UINT16
#define TAUD0TRO00 TAUD0.TRO.BIT.TRO00
#define TAUD0TRO01 TAUD0.TRO.BIT.TRO01
#define TAUD0TRO02 TAUD0.TRO.BIT.TRO02
#define TAUD0TRO03 TAUD0.TRO.BIT.TRO03
#define TAUD0TRO04 TAUD0.TRO.BIT.TRO04
#define TAUD0TRO05 TAUD0.TRO.BIT.TRO05
#define TAUD0TRO06 TAUD0.TRO.BIT.TRO06
#define TAUD0TRO07 TAUD0.TRO.BIT.TRO07
#define TAUD0TRO08 TAUD0.TRO.BIT.TRO08
#define TAUD0TRO09 TAUD0.TRO.BIT.TRO09
#define TAUD0TRO10 TAUD0.TRO.BIT.TRO10
#define TAUD0TRO11 TAUD0.TRO.BIT.TRO11
#define TAUD0TRO12 TAUD0.TRO.BIT.TRO12
#define TAUD0TRO13 TAUD0.TRO.BIT.TRO13
#define TAUD0TRO14 TAUD0.TRO.BIT.TRO14
#define TAUD0TRO15 TAUD0.TRO.BIT.TRO15
#define TAUD0TME TAUD0.TME.UINT16
#define TAUD0TME00 TAUD0.TME.BIT.TME00
#define TAUD0TME01 TAUD0.TME.BIT.TME01
#define TAUD0TME02 TAUD0.TME.BIT.TME02
#define TAUD0TME03 TAUD0.TME.BIT.TME03
#define TAUD0TME04 TAUD0.TME.BIT.TME04
#define TAUD0TME05 TAUD0.TME.BIT.TME05
#define TAUD0TME06 TAUD0.TME.BIT.TME06
#define TAUD0TME07 TAUD0.TME.BIT.TME07
#define TAUD0TME08 TAUD0.TME.BIT.TME08
#define TAUD0TME09 TAUD0.TME.BIT.TME09
#define TAUD0TME10 TAUD0.TME.BIT.TME10
#define TAUD0TME11 TAUD0.TME.BIT.TME11
#define TAUD0TME12 TAUD0.TME.BIT.TME12
#define TAUD0TME13 TAUD0.TME.BIT.TME13
#define TAUD0TME14 TAUD0.TME.BIT.TME14
#define TAUD0TME15 TAUD0.TME.BIT.TME15
#define TAUD0TDL TAUD0.TDL.UINT16
#define TAUD0TDL00 TAUD0.TDL.BIT.TDL00
#define TAUD0TDL01 TAUD0.TDL.BIT.TDL01
#define TAUD0TDL02 TAUD0.TDL.BIT.TDL02
#define TAUD0TDL03 TAUD0.TDL.BIT.TDL03
#define TAUD0TDL04 TAUD0.TDL.BIT.TDL04
#define TAUD0TDL05 TAUD0.TDL.BIT.TDL05
#define TAUD0TDL06 TAUD0.TDL.BIT.TDL06
#define TAUD0TDL07 TAUD0.TDL.BIT.TDL07
#define TAUD0TDL08 TAUD0.TDL.BIT.TDL08
#define TAUD0TDL09 TAUD0.TDL.BIT.TDL09
#define TAUD0TDL10 TAUD0.TDL.BIT.TDL10
#define TAUD0TDL11 TAUD0.TDL.BIT.TDL11
#define TAUD0TDL12 TAUD0.TDL.BIT.TDL12
#define TAUD0TDL13 TAUD0.TDL.BIT.TDL13
#define TAUD0TDL14 TAUD0.TDL.BIT.TDL14
#define TAUD0TDL15 TAUD0.TDL.BIT.TDL15
#define TAUD0TO TAUD0.TO.UINT16
#define TAUD0TO00 TAUD0.TO.BIT.TO00
#define TAUD0TO01 TAUD0.TO.BIT.TO01
#define TAUD0TO02 TAUD0.TO.BIT.TO02
#define TAUD0TO03 TAUD0.TO.BIT.TO03
#define TAUD0TO04 TAUD0.TO.BIT.TO04
#define TAUD0TO05 TAUD0.TO.BIT.TO05
#define TAUD0TO06 TAUD0.TO.BIT.TO06
#define TAUD0TO07 TAUD0.TO.BIT.TO07
#define TAUD0TO08 TAUD0.TO.BIT.TO08
#define TAUD0TO09 TAUD0.TO.BIT.TO09
#define TAUD0TO10 TAUD0.TO.BIT.TO10
#define TAUD0TO11 TAUD0.TO.BIT.TO11
#define TAUD0TO12 TAUD0.TO.BIT.TO12
#define TAUD0TO13 TAUD0.TO.BIT.TO13
#define TAUD0TO14 TAUD0.TO.BIT.TO14
#define TAUD0TO15 TAUD0.TO.BIT.TO15
#define TAUD0TOE TAUD0.TOE.UINT16
#define TAUD0TOE00 TAUD0.TOE.BIT.TOE00
#define TAUD0TOE01 TAUD0.TOE.BIT.TOE01
#define TAUD0TOE02 TAUD0.TOE.BIT.TOE02
#define TAUD0TOE03 TAUD0.TOE.BIT.TOE03
#define TAUD0TOE04 TAUD0.TOE.BIT.TOE04
#define TAUD0TOE05 TAUD0.TOE.BIT.TOE05
#define TAUD0TOE06 TAUD0.TOE.BIT.TOE06
#define TAUD0TOE07 TAUD0.TOE.BIT.TOE07
#define TAUD0TOE08 TAUD0.TOE.BIT.TOE08
#define TAUD0TOE09 TAUD0.TOE.BIT.TOE09
#define TAUD0TOE10 TAUD0.TOE.BIT.TOE10
#define TAUD0TOE11 TAUD0.TOE.BIT.TOE11
#define TAUD0TOE12 TAUD0.TOE.BIT.TOE12
#define TAUD0TOE13 TAUD0.TOE.BIT.TOE13
#define TAUD0TOE14 TAUD0.TOE.BIT.TOE14
#define TAUD0TOE15 TAUD0.TOE.BIT.TOE15
#define TAUD0CNT0 TAUD0.CNT0
#define TAUD0CNT1 TAUD0.CNT1
#define TAUD0CNT2 TAUD0.CNT2
#define TAUD0CNT3 TAUD0.CNT3
#define TAUD0CNT4 TAUD0.CNT4
#define TAUD0CNT5 TAUD0.CNT5
#define TAUD0CNT6 TAUD0.CNT6
#define TAUD0CNT7 TAUD0.CNT7
#define TAUD0CNT8 TAUD0.CNT8
#define TAUD0CNT9 TAUD0.CNT9
#define TAUD0CNT10 TAUD0.CNT10
#define TAUD0CNT11 TAUD0.CNT11
#define TAUD0CNT12 TAUD0.CNT12
#define TAUD0CNT13 TAUD0.CNT13
#define TAUD0CNT14 TAUD0.CNT14
#define TAUD0CNT15 TAUD0.CNT15
#define TAUD0CMUR0 TAUD0.CMUR0.UINT8
#define TAUD0TIS TAUD0.CMUR0.BIT.TIS
#define TAUD0CMUR1 TAUD0.CMUR1.UINT8
#define TAUD0CMUR2 TAUD0.CMUR2.UINT8
#define TAUD0CMUR3 TAUD0.CMUR3.UINT8
#define TAUD0CMUR4 TAUD0.CMUR4.UINT8
#define TAUD0CMUR5 TAUD0.CMUR5.UINT8
#define TAUD0CMUR6 TAUD0.CMUR6.UINT8
#define TAUD0CMUR7 TAUD0.CMUR7.UINT8
#define TAUD0CMUR8 TAUD0.CMUR8.UINT8
#define TAUD0CMUR9 TAUD0.CMUR9.UINT8
#define TAUD0CMUR10 TAUD0.CMUR10.UINT8
#define TAUD0CMUR11 TAUD0.CMUR11.UINT8
#define TAUD0CMUR12 TAUD0.CMUR12.UINT8
#define TAUD0CMUR13 TAUD0.CMUR13.UINT8
#define TAUD0CMUR14 TAUD0.CMUR14.UINT8
#define TAUD0CMUR15 TAUD0.CMUR15.UINT8
#define TAUD0CSR0 TAUD0.CSR0.UINT8
#define TAUD0OVF TAUD0.CSR0.BIT.OVF
#define TAUD0CSF TAUD0.CSR0.BIT.CSF
#define TAUD0CSR1 TAUD0.CSR1.UINT8
#define TAUD0CSR2 TAUD0.CSR2.UINT8
#define TAUD0CSR3 TAUD0.CSR3.UINT8
#define TAUD0CSR4 TAUD0.CSR4.UINT8
#define TAUD0CSR5 TAUD0.CSR5.UINT8
#define TAUD0CSR6 TAUD0.CSR6.UINT8
#define TAUD0CSR7 TAUD0.CSR7.UINT8
#define TAUD0CSR8 TAUD0.CSR8.UINT8
#define TAUD0CSR9 TAUD0.CSR9.UINT8
#define TAUD0CSR10 TAUD0.CSR10.UINT8
#define TAUD0CSR11 TAUD0.CSR11.UINT8
#define TAUD0CSR12 TAUD0.CSR12.UINT8
#define TAUD0CSR13 TAUD0.CSR13.UINT8
#define TAUD0CSR14 TAUD0.CSR14.UINT8
#define TAUD0CSR15 TAUD0.CSR15.UINT8
#define TAUD0CSC0 TAUD0.CSC0.UINT8
#define TAUD0CLOV TAUD0.CSC0.BIT.CLOV
#define TAUD0CSC1 TAUD0.CSC1.UINT8
#define TAUD0CSC2 TAUD0.CSC2.UINT8
#define TAUD0CSC3 TAUD0.CSC3.UINT8
#define TAUD0CSC4 TAUD0.CSC4.UINT8
#define TAUD0CSC5 TAUD0.CSC5.UINT8
#define TAUD0CSC6 TAUD0.CSC6.UINT8
#define TAUD0CSC7 TAUD0.CSC7.UINT8
#define TAUD0CSC8 TAUD0.CSC8.UINT8
#define TAUD0CSC9 TAUD0.CSC9.UINT8
#define TAUD0CSC10 TAUD0.CSC10.UINT8
#define TAUD0CSC11 TAUD0.CSC11.UINT8
#define TAUD0CSC12 TAUD0.CSC12.UINT8
#define TAUD0CSC13 TAUD0.CSC13.UINT8
#define TAUD0CSC14 TAUD0.CSC14.UINT8
#define TAUD0CSC15 TAUD0.CSC15.UINT8
#define TAUD0TE TAUD0.TE.UINT16
#define TAUD0TE00 TAUD0.TE.BIT.TE00
#define TAUD0TE01 TAUD0.TE.BIT.TE01
#define TAUD0TE02 TAUD0.TE.BIT.TE02
#define TAUD0TE03 TAUD0.TE.BIT.TE03
#define TAUD0TE04 TAUD0.TE.BIT.TE04
#define TAUD0TE05 TAUD0.TE.BIT.TE05
#define TAUD0TE06 TAUD0.TE.BIT.TE06
#define TAUD0TE07 TAUD0.TE.BIT.TE07
#define TAUD0TE08 TAUD0.TE.BIT.TE08
#define TAUD0TE09 TAUD0.TE.BIT.TE09
#define TAUD0TE10 TAUD0.TE.BIT.TE10
#define TAUD0TE11 TAUD0.TE.BIT.TE11
#define TAUD0TE12 TAUD0.TE.BIT.TE12
#define TAUD0TE13 TAUD0.TE.BIT.TE13
#define TAUD0TE14 TAUD0.TE.BIT.TE14
#define TAUD0TE15 TAUD0.TE.BIT.TE15
#define TAUD0TS TAUD0.TS.UINT16
#define TAUD0TS00 TAUD0.TS.BIT.TS00
#define TAUD0TS01 TAUD0.TS.BIT.TS01
#define TAUD0TS02 TAUD0.TS.BIT.TS02
#define TAUD0TS03 TAUD0.TS.BIT.TS03
#define TAUD0TS04 TAUD0.TS.BIT.TS04
#define TAUD0TS05 TAUD0.TS.BIT.TS05
#define TAUD0TS06 TAUD0.TS.BIT.TS06
#define TAUD0TS07 TAUD0.TS.BIT.TS07
#define TAUD0TS08 TAUD0.TS.BIT.TS08
#define TAUD0TS09 TAUD0.TS.BIT.TS09
#define TAUD0TS10 TAUD0.TS.BIT.TS10
#define TAUD0TS11 TAUD0.TS.BIT.TS11
#define TAUD0TS12 TAUD0.TS.BIT.TS12
#define TAUD0TS13 TAUD0.TS.BIT.TS13
#define TAUD0TS14 TAUD0.TS.BIT.TS14
#define TAUD0TS15 TAUD0.TS.BIT.TS15
#define TAUD0TT TAUD0.TT.UINT16
#define TAUD0TT00 TAUD0.TT.BIT.TT00
#define TAUD0TT01 TAUD0.TT.BIT.TT01
#define TAUD0TT02 TAUD0.TT.BIT.TT02
#define TAUD0TT03 TAUD0.TT.BIT.TT03
#define TAUD0TT04 TAUD0.TT.BIT.TT04
#define TAUD0TT05 TAUD0.TT.BIT.TT05
#define TAUD0TT06 TAUD0.TT.BIT.TT06
#define TAUD0TT07 TAUD0.TT.BIT.TT07
#define TAUD0TT08 TAUD0.TT.BIT.TT08
#define TAUD0TT09 TAUD0.TT.BIT.TT09
#define TAUD0TT10 TAUD0.TT.BIT.TT10
#define TAUD0TT11 TAUD0.TT.BIT.TT11
#define TAUD0TT12 TAUD0.TT.BIT.TT12
#define TAUD0TT13 TAUD0.TT.BIT.TT13
#define TAUD0TT14 TAUD0.TT.BIT.TT14
#define TAUD0TT15 TAUD0.TT.BIT.TT15
#define TAUD0CMOR0 TAUD0.CMOR0.UINT16
#define TAUD0MD TAUD0.CMOR0.BIT.MD
#define TAUD0COS TAUD0.CMOR0.BIT.COS
#define TAUD0STS TAUD0.CMOR0.BIT.STS
#define TAUD0MAS TAUD0.CMOR0.BIT.MAS
#define TAUD0CCS TAUD0.CMOR0.BIT.CCS
#define TAUD0CKS TAUD0.CMOR0.BIT.CKS
#define TAUD0CMOR1 TAUD0.CMOR1.UINT16
#define TAUD0CMOR2 TAUD0.CMOR2.UINT16
#define TAUD0CMOR3 TAUD0.CMOR3.UINT16
#define TAUD0CMOR4 TAUD0.CMOR4.UINT16
#define TAUD0CMOR5 TAUD0.CMOR5.UINT16
#define TAUD0CMOR6 TAUD0.CMOR6.UINT16
#define TAUD0CMOR7 TAUD0.CMOR7.UINT16
#define TAUD0CMOR8 TAUD0.CMOR8.UINT16
#define TAUD0CMOR9 TAUD0.CMOR9.UINT16
#define TAUD0CMOR10 TAUD0.CMOR10.UINT16
#define TAUD0CMOR11 TAUD0.CMOR11.UINT16
#define TAUD0CMOR12 TAUD0.CMOR12.UINT16
#define TAUD0CMOR13 TAUD0.CMOR13.UINT16
#define TAUD0CMOR14 TAUD0.CMOR14.UINT16
#define TAUD0CMOR15 TAUD0.CMOR15.UINT16
#define TAUD0TPS TAUD0.TPS.UINT16
#define TAUD0PRS0 TAUD0.TPS.BIT.PRS0
#define TAUD0PRS1 TAUD0.TPS.BIT.PRS1
#define TAUD0PRS2 TAUD0.TPS.BIT.PRS2
#define TAUD0PRS3 TAUD0.TPS.BIT.PRS3
#define TAUD0BRS TAUD0.BRS
#define TAUD0TOM TAUD0.TOM.UINT16
#define TAUD0TOM00 TAUD0.TOM.BIT.TOM00
#define TAUD0TOM01 TAUD0.TOM.BIT.TOM01
#define TAUD0TOM02 TAUD0.TOM.BIT.TOM02
#define TAUD0TOM03 TAUD0.TOM.BIT.TOM03
#define TAUD0TOM04 TAUD0.TOM.BIT.TOM04
#define TAUD0TOM05 TAUD0.TOM.BIT.TOM05
#define TAUD0TOM06 TAUD0.TOM.BIT.TOM06
#define TAUD0TOM07 TAUD0.TOM.BIT.TOM07
#define TAUD0TOM08 TAUD0.TOM.BIT.TOM08
#define TAUD0TOM09 TAUD0.TOM.BIT.TOM09
#define TAUD0TOM10 TAUD0.TOM.BIT.TOM10
#define TAUD0TOM11 TAUD0.TOM.BIT.TOM11
#define TAUD0TOM12 TAUD0.TOM.BIT.TOM12
#define TAUD0TOM13 TAUD0.TOM.BIT.TOM13
#define TAUD0TOM14 TAUD0.TOM.BIT.TOM14
#define TAUD0TOM15 TAUD0.TOM.BIT.TOM15
#define TAUD0TOC TAUD0.TOC.UINT16
#define TAUD0TOC00 TAUD0.TOC.BIT.TOC00
#define TAUD0TOC01 TAUD0.TOC.BIT.TOC01
#define TAUD0TOC02 TAUD0.TOC.BIT.TOC02
#define TAUD0TOC03 TAUD0.TOC.BIT.TOC03
#define TAUD0TOC04 TAUD0.TOC.BIT.TOC04
#define TAUD0TOC05 TAUD0.TOC.BIT.TOC05
#define TAUD0TOC06 TAUD0.TOC.BIT.TOC06
#define TAUD0TOC07 TAUD0.TOC.BIT.TOC07
#define TAUD0TOC08 TAUD0.TOC.BIT.TOC08
#define TAUD0TOC09 TAUD0.TOC.BIT.TOC09
#define TAUD0TOC10 TAUD0.TOC.BIT.TOC10
#define TAUD0TOC11 TAUD0.TOC.BIT.TOC11
#define TAUD0TOC12 TAUD0.TOC.BIT.TOC12
#define TAUD0TOC13 TAUD0.TOC.BIT.TOC13
#define TAUD0TOC14 TAUD0.TOC.BIT.TOC14
#define TAUD0TOC15 TAUD0.TOC.BIT.TOC15
#define TAUD0TDE TAUD0.TDE.UINT16
#define TAUD0TDE00 TAUD0.TDE.BIT.TDE00
#define TAUD0TDE01 TAUD0.TDE.BIT.TDE01
#define TAUD0TDE02 TAUD0.TDE.BIT.TDE02
#define TAUD0TDE03 TAUD0.TDE.BIT.TDE03
#define TAUD0TDE04 TAUD0.TDE.BIT.TDE04
#define TAUD0TDE05 TAUD0.TDE.BIT.TDE05
#define TAUD0TDE06 TAUD0.TDE.BIT.TDE06
#define TAUD0TDE07 TAUD0.TDE.BIT.TDE07
#define TAUD0TDE08 TAUD0.TDE.BIT.TDE08
#define TAUD0TDE09 TAUD0.TDE.BIT.TDE09
#define TAUD0TDE10 TAUD0.TDE.BIT.TDE10
#define TAUD0TDE11 TAUD0.TDE.BIT.TDE11
#define TAUD0TDE12 TAUD0.TDE.BIT.TDE12
#define TAUD0TDE13 TAUD0.TDE.BIT.TDE13
#define TAUD0TDE14 TAUD0.TDE.BIT.TDE14
#define TAUD0TDE15 TAUD0.TDE.BIT.TDE15
#define TAUD0TDM TAUD0.TDM.UINT16
#define TAUD0TDM00 TAUD0.TDM.BIT.TDM00
#define TAUD0TDM01 TAUD0.TDM.BIT.TDM01
#define TAUD0TDM02 TAUD0.TDM.BIT.TDM02
#define TAUD0TDM03 TAUD0.TDM.BIT.TDM03
#define TAUD0TDM04 TAUD0.TDM.BIT.TDM04
#define TAUD0TDM05 TAUD0.TDM.BIT.TDM05
#define TAUD0TDM06 TAUD0.TDM.BIT.TDM06
#define TAUD0TDM07 TAUD0.TDM.BIT.TDM07
#define TAUD0TDM08 TAUD0.TDM.BIT.TDM08
#define TAUD0TDM09 TAUD0.TDM.BIT.TDM09
#define TAUD0TDM10 TAUD0.TDM.BIT.TDM10
#define TAUD0TDM11 TAUD0.TDM.BIT.TDM11
#define TAUD0TDM12 TAUD0.TDM.BIT.TDM12
#define TAUD0TDM13 TAUD0.TDM.BIT.TDM13
#define TAUD0TDM14 TAUD0.TDM.BIT.TDM14
#define TAUD0TDM15 TAUD0.TDM.BIT.TDM15
#define TAUD0TRE TAUD0.TRE.UINT16
#define TAUD0TRE00 TAUD0.TRE.BIT.TRE00
#define TAUD0TRE01 TAUD0.TRE.BIT.TRE01
#define TAUD0TRE02 TAUD0.TRE.BIT.TRE02
#define TAUD0TRE03 TAUD0.TRE.BIT.TRE03
#define TAUD0TRE04 TAUD0.TRE.BIT.TRE04
#define TAUD0TRE05 TAUD0.TRE.BIT.TRE05
#define TAUD0TRE06 TAUD0.TRE.BIT.TRE06
#define TAUD0TRE07 TAUD0.TRE.BIT.TRE07
#define TAUD0TRE08 TAUD0.TRE.BIT.TRE08
#define TAUD0TRE09 TAUD0.TRE.BIT.TRE09
#define TAUD0TRE10 TAUD0.TRE.BIT.TRE10
#define TAUD0TRE11 TAUD0.TRE.BIT.TRE11
#define TAUD0TRE12 TAUD0.TRE.BIT.TRE12
#define TAUD0TRE13 TAUD0.TRE.BIT.TRE13
#define TAUD0TRE14 TAUD0.TRE.BIT.TRE14
#define TAUD0TRE15 TAUD0.TRE.BIT.TRE15
#define TAUD0TRC TAUD0.TRC.UINT16
#define TAUD0TRC00 TAUD0.TRC.BIT.TRC00
#define TAUD0TRC01 TAUD0.TRC.BIT.TRC01
#define TAUD0TRC02 TAUD0.TRC.BIT.TRC02
#define TAUD0TRC03 TAUD0.TRC.BIT.TRC03
#define TAUD0TRC04 TAUD0.TRC.BIT.TRC04
#define TAUD0TRC05 TAUD0.TRC.BIT.TRC05
#define TAUD0TRC06 TAUD0.TRC.BIT.TRC06
#define TAUD0TRC07 TAUD0.TRC.BIT.TRC07
#define TAUD0TRC08 TAUD0.TRC.BIT.TRC08
#define TAUD0TRC09 TAUD0.TRC.BIT.TRC09
#define TAUD0TRC10 TAUD0.TRC.BIT.TRC10
#define TAUD0TRC11 TAUD0.TRC.BIT.TRC11
#define TAUD0TRC12 TAUD0.TRC.BIT.TRC12
#define TAUD0TRC13 TAUD0.TRC.BIT.TRC13
#define TAUD0TRC14 TAUD0.TRC.BIT.TRC14
#define TAUD0TRC15 TAUD0.TRC.BIT.TRC15
#define TAUD0RDE TAUD0.RDE.UINT16
#define TAUD0RDE00 TAUD0.RDE.BIT.RDE00
#define TAUD0RDE01 TAUD0.RDE.BIT.RDE01
#define TAUD0RDE02 TAUD0.RDE.BIT.RDE02
#define TAUD0RDE03 TAUD0.RDE.BIT.RDE03
#define TAUD0RDE04 TAUD0.RDE.BIT.RDE04
#define TAUD0RDE05 TAUD0.RDE.BIT.RDE05
#define TAUD0RDE06 TAUD0.RDE.BIT.RDE06
#define TAUD0RDE07 TAUD0.RDE.BIT.RDE07
#define TAUD0RDE08 TAUD0.RDE.BIT.RDE08
#define TAUD0RDE09 TAUD0.RDE.BIT.RDE09
#define TAUD0RDE10 TAUD0.RDE.BIT.RDE10
#define TAUD0RDE11 TAUD0.RDE.BIT.RDE11
#define TAUD0RDE12 TAUD0.RDE.BIT.RDE12
#define TAUD0RDE13 TAUD0.RDE.BIT.RDE13
#define TAUD0RDE14 TAUD0.RDE.BIT.RDE14
#define TAUD0RDE15 TAUD0.RDE.BIT.RDE15
#define TAUD0RDM TAUD0.RDM.UINT16
#define TAUD0RDM00 TAUD0.RDM.BIT.RDM00
#define TAUD0RDM01 TAUD0.RDM.BIT.RDM01
#define TAUD0RDM02 TAUD0.RDM.BIT.RDM02
#define TAUD0RDM03 TAUD0.RDM.BIT.RDM03
#define TAUD0RDM04 TAUD0.RDM.BIT.RDM04
#define TAUD0RDM05 TAUD0.RDM.BIT.RDM05
#define TAUD0RDM06 TAUD0.RDM.BIT.RDM06
#define TAUD0RDM07 TAUD0.RDM.BIT.RDM07
#define TAUD0RDM08 TAUD0.RDM.BIT.RDM08
#define TAUD0RDM09 TAUD0.RDM.BIT.RDM09
#define TAUD0RDM10 TAUD0.RDM.BIT.RDM10
#define TAUD0RDM11 TAUD0.RDM.BIT.RDM11
#define TAUD0RDM12 TAUD0.RDM.BIT.RDM12
#define TAUD0RDM13 TAUD0.RDM.BIT.RDM13
#define TAUD0RDM14 TAUD0.RDM.BIT.RDM14
#define TAUD0RDM15 TAUD0.RDM.BIT.RDM15
#define TAUD0RDS TAUD0.RDS.UINT16
#define TAUD0RDS00 TAUD0.RDS.BIT.RDS00
#define TAUD0RDS01 TAUD0.RDS.BIT.RDS01
#define TAUD0RDS02 TAUD0.RDS.BIT.RDS02
#define TAUD0RDS03 TAUD0.RDS.BIT.RDS03
#define TAUD0RDS04 TAUD0.RDS.BIT.RDS04
#define TAUD0RDS05 TAUD0.RDS.BIT.RDS05
#define TAUD0RDS06 TAUD0.RDS.BIT.RDS06
#define TAUD0RDS07 TAUD0.RDS.BIT.RDS07
#define TAUD0RDS08 TAUD0.RDS.BIT.RDS08
#define TAUD0RDS09 TAUD0.RDS.BIT.RDS09
#define TAUD0RDS010 TAUD0.RDS.BIT.RDS010
#define TAUD0RDS011 TAUD0.RDS.BIT.RDS011
#define TAUD0RDS012 TAUD0.RDS.BIT.RDS012
#define TAUD0RDS013 TAUD0.RDS.BIT.RDS013
#define TAUD0RDS014 TAUD0.RDS.BIT.RDS014
#define TAUD0RDS015 TAUD0.RDS.BIT.RDS015
#define TAUD0RDC TAUD0.RDC.UINT16
#define TAUD0RDC00 TAUD0.RDC.BIT.RDC00
#define TAUD0RDC01 TAUD0.RDC.BIT.RDC01
#define TAUD0RDC02 TAUD0.RDC.BIT.RDC02
#define TAUD0RDC03 TAUD0.RDC.BIT.RDC03
#define TAUD0RDC04 TAUD0.RDC.BIT.RDC04
#define TAUD0RDC05 TAUD0.RDC.BIT.RDC05
#define TAUD0RDC06 TAUD0.RDC.BIT.RDC06
#define TAUD0RDC07 TAUD0.RDC.BIT.RDC07
#define TAUD0RDC08 TAUD0.RDC.BIT.RDC08
#define TAUD0RDC09 TAUD0.RDC.BIT.RDC09
#define TAUD0RDC10 TAUD0.RDC.BIT.RDC10
#define TAUD0RDC11 TAUD0.RDC.BIT.RDC11
#define TAUD0RDC12 TAUD0.RDC.BIT.RDC12
#define TAUD0RDC13 TAUD0.RDC.BIT.RDC13
#define TAUD0RDC14 TAUD0.RDC.BIT.RDC14
#define TAUD0RDC15 TAUD0.RDC.BIT.RDC15
#define TAUD1CDR0 TAUD1.CDR0
#define TAUD1CDR1 TAUD1.CDR1
#define TAUD1CDR2 TAUD1.CDR2
#define TAUD1CDR3 TAUD1.CDR3
#define TAUD1CDR4 TAUD1.CDR4
#define TAUD1CDR5 TAUD1.CDR5
#define TAUD1CDR6 TAUD1.CDR6
#define TAUD1CDR7 TAUD1.CDR7
#define TAUD1CDR8 TAUD1.CDR8
#define TAUD1CDR9 TAUD1.CDR9
#define TAUD1CDR10 TAUD1.CDR10
#define TAUD1CDR11 TAUD1.CDR11
#define TAUD1CDR12 TAUD1.CDR12
#define TAUD1CDR13 TAUD1.CDR13
#define TAUD1CDR14 TAUD1.CDR14
#define TAUD1CDR15 TAUD1.CDR15
#define TAUD1TOL TAUD1.TOL.UINT16
#define TAUD1TOL00 TAUD1.TOL.BIT.TOL00
#define TAUD1TOL01 TAUD1.TOL.BIT.TOL01
#define TAUD1TOL02 TAUD1.TOL.BIT.TOL02
#define TAUD1TOL03 TAUD1.TOL.BIT.TOL03
#define TAUD1TOL04 TAUD1.TOL.BIT.TOL04
#define TAUD1TOL05 TAUD1.TOL.BIT.TOL05
#define TAUD1TOL06 TAUD1.TOL.BIT.TOL06
#define TAUD1TOL07 TAUD1.TOL.BIT.TOL07
#define TAUD1TOL08 TAUD1.TOL.BIT.TOL08
#define TAUD1TOL09 TAUD1.TOL.BIT.TOL09
#define TAUD1TOL10 TAUD1.TOL.BIT.TOL10
#define TAUD1TOL11 TAUD1.TOL.BIT.TOL11
#define TAUD1TOL12 TAUD1.TOL.BIT.TOL12
#define TAUD1TOL13 TAUD1.TOL.BIT.TOL13
#define TAUD1TOL14 TAUD1.TOL.BIT.TOL14
#define TAUD1TOL15 TAUD1.TOL.BIT.TOL15
#define TAUD1RDT TAUD1.RDT.UINT16
#define TAUD1RDT00 TAUD1.RDT.BIT.RDT00
#define TAUD1RDT01 TAUD1.RDT.BIT.RDT01
#define TAUD1RDT02 TAUD1.RDT.BIT.RDT02
#define TAUD1RDT03 TAUD1.RDT.BIT.RDT03
#define TAUD1RDT04 TAUD1.RDT.BIT.RDT04
#define TAUD1RDT05 TAUD1.RDT.BIT.RDT05
#define TAUD1RDT06 TAUD1.RDT.BIT.RDT06
#define TAUD1RDT07 TAUD1.RDT.BIT.RDT07
#define TAUD1RDT08 TAUD1.RDT.BIT.RDT08
#define TAUD1RDT09 TAUD1.RDT.BIT.RDT09
#define TAUD1RDT10 TAUD1.RDT.BIT.RDT10
#define TAUD1RDT11 TAUD1.RDT.BIT.RDT11
#define TAUD1RDT12 TAUD1.RDT.BIT.RDT12
#define TAUD1RDT13 TAUD1.RDT.BIT.RDT13
#define TAUD1RDT14 TAUD1.RDT.BIT.RDT14
#define TAUD1RDT15 TAUD1.RDT.BIT.RDT15
#define TAUD1RSF TAUD1.RSF.UINT16
#define TAUD1RSF00 TAUD1.RSF.BIT.RSF00
#define TAUD1RSF01 TAUD1.RSF.BIT.RSF01
#define TAUD1RSF02 TAUD1.RSF.BIT.RSF02
#define TAUD1RSF03 TAUD1.RSF.BIT.RSF03
#define TAUD1RSF04 TAUD1.RSF.BIT.RSF04
#define TAUD1RSF05 TAUD1.RSF.BIT.RSF05
#define TAUD1RSF06 TAUD1.RSF.BIT.RSF06
#define TAUD1RSF07 TAUD1.RSF.BIT.RSF07
#define TAUD1RSF08 TAUD1.RSF.BIT.RSF08
#define TAUD1RSF09 TAUD1.RSF.BIT.RSF09
#define TAUD1RSF10 TAUD1.RSF.BIT.RSF10
#define TAUD1RSF11 TAUD1.RSF.BIT.RSF11
#define TAUD1RSF12 TAUD1.RSF.BIT.RSF12
#define TAUD1RSF13 TAUD1.RSF.BIT.RSF13
#define TAUD1RSF14 TAUD1.RSF.BIT.RSF14
#define TAUD1RSF15 TAUD1.RSF.BIT.RSF15
#define TAUD1TRO TAUD1.TRO.UINT16
#define TAUD1TRO00 TAUD1.TRO.BIT.TRO00
#define TAUD1TRO01 TAUD1.TRO.BIT.TRO01
#define TAUD1TRO02 TAUD1.TRO.BIT.TRO02
#define TAUD1TRO03 TAUD1.TRO.BIT.TRO03
#define TAUD1TRO04 TAUD1.TRO.BIT.TRO04
#define TAUD1TRO05 TAUD1.TRO.BIT.TRO05
#define TAUD1TRO06 TAUD1.TRO.BIT.TRO06
#define TAUD1TRO07 TAUD1.TRO.BIT.TRO07
#define TAUD1TRO08 TAUD1.TRO.BIT.TRO08
#define TAUD1TRO09 TAUD1.TRO.BIT.TRO09
#define TAUD1TRO10 TAUD1.TRO.BIT.TRO10
#define TAUD1TRO11 TAUD1.TRO.BIT.TRO11
#define TAUD1TRO12 TAUD1.TRO.BIT.TRO12
#define TAUD1TRO13 TAUD1.TRO.BIT.TRO13
#define TAUD1TRO14 TAUD1.TRO.BIT.TRO14
#define TAUD1TRO15 TAUD1.TRO.BIT.TRO15
#define TAUD1TME TAUD1.TME.UINT16
#define TAUD1TME00 TAUD1.TME.BIT.TME00
#define TAUD1TME01 TAUD1.TME.BIT.TME01
#define TAUD1TME02 TAUD1.TME.BIT.TME02
#define TAUD1TME03 TAUD1.TME.BIT.TME03
#define TAUD1TME04 TAUD1.TME.BIT.TME04
#define TAUD1TME05 TAUD1.TME.BIT.TME05
#define TAUD1TME06 TAUD1.TME.BIT.TME06
#define TAUD1TME07 TAUD1.TME.BIT.TME07
#define TAUD1TME08 TAUD1.TME.BIT.TME08
#define TAUD1TME09 TAUD1.TME.BIT.TME09
#define TAUD1TME10 TAUD1.TME.BIT.TME10
#define TAUD1TME11 TAUD1.TME.BIT.TME11
#define TAUD1TME12 TAUD1.TME.BIT.TME12
#define TAUD1TME13 TAUD1.TME.BIT.TME13
#define TAUD1TME14 TAUD1.TME.BIT.TME14
#define TAUD1TME15 TAUD1.TME.BIT.TME15
#define TAUD1TDL TAUD1.TDL.UINT16
#define TAUD1TDL00 TAUD1.TDL.BIT.TDL00
#define TAUD1TDL01 TAUD1.TDL.BIT.TDL01
#define TAUD1TDL02 TAUD1.TDL.BIT.TDL02
#define TAUD1TDL03 TAUD1.TDL.BIT.TDL03
#define TAUD1TDL04 TAUD1.TDL.BIT.TDL04
#define TAUD1TDL05 TAUD1.TDL.BIT.TDL05
#define TAUD1TDL06 TAUD1.TDL.BIT.TDL06
#define TAUD1TDL07 TAUD1.TDL.BIT.TDL07
#define TAUD1TDL08 TAUD1.TDL.BIT.TDL08
#define TAUD1TDL09 TAUD1.TDL.BIT.TDL09
#define TAUD1TDL10 TAUD1.TDL.BIT.TDL10
#define TAUD1TDL11 TAUD1.TDL.BIT.TDL11
#define TAUD1TDL12 TAUD1.TDL.BIT.TDL12
#define TAUD1TDL13 TAUD1.TDL.BIT.TDL13
#define TAUD1TDL14 TAUD1.TDL.BIT.TDL14
#define TAUD1TDL15 TAUD1.TDL.BIT.TDL15
#define TAUD1TO TAUD1.TO.UINT16
#define TAUD1TO00 TAUD1.TO.BIT.TO00
#define TAUD1TO01 TAUD1.TO.BIT.TO01
#define TAUD1TO02 TAUD1.TO.BIT.TO02
#define TAUD1TO03 TAUD1.TO.BIT.TO03
#define TAUD1TO04 TAUD1.TO.BIT.TO04
#define TAUD1TO05 TAUD1.TO.BIT.TO05
#define TAUD1TO06 TAUD1.TO.BIT.TO06
#define TAUD1TO07 TAUD1.TO.BIT.TO07
#define TAUD1TO08 TAUD1.TO.BIT.TO08
#define TAUD1TO09 TAUD1.TO.BIT.TO09
#define TAUD1TO10 TAUD1.TO.BIT.TO10
#define TAUD1TO11 TAUD1.TO.BIT.TO11
#define TAUD1TO12 TAUD1.TO.BIT.TO12
#define TAUD1TO13 TAUD1.TO.BIT.TO13
#define TAUD1TO14 TAUD1.TO.BIT.TO14
#define TAUD1TO15 TAUD1.TO.BIT.TO15
#define TAUD1TOE TAUD1.TOE.UINT16
#define TAUD1TOE00 TAUD1.TOE.BIT.TOE00
#define TAUD1TOE01 TAUD1.TOE.BIT.TOE01
#define TAUD1TOE02 TAUD1.TOE.BIT.TOE02
#define TAUD1TOE03 TAUD1.TOE.BIT.TOE03
#define TAUD1TOE04 TAUD1.TOE.BIT.TOE04
#define TAUD1TOE05 TAUD1.TOE.BIT.TOE05
#define TAUD1TOE06 TAUD1.TOE.BIT.TOE06
#define TAUD1TOE07 TAUD1.TOE.BIT.TOE07
#define TAUD1TOE08 TAUD1.TOE.BIT.TOE08
#define TAUD1TOE09 TAUD1.TOE.BIT.TOE09
#define TAUD1TOE10 TAUD1.TOE.BIT.TOE10
#define TAUD1TOE11 TAUD1.TOE.BIT.TOE11
#define TAUD1TOE12 TAUD1.TOE.BIT.TOE12
#define TAUD1TOE13 TAUD1.TOE.BIT.TOE13
#define TAUD1TOE14 TAUD1.TOE.BIT.TOE14
#define TAUD1TOE15 TAUD1.TOE.BIT.TOE15
#define TAUD1CNT0 TAUD1.CNT0
#define TAUD1CNT1 TAUD1.CNT1
#define TAUD1CNT2 TAUD1.CNT2
#define TAUD1CNT3 TAUD1.CNT3
#define TAUD1CNT4 TAUD1.CNT4
#define TAUD1CNT5 TAUD1.CNT5
#define TAUD1CNT6 TAUD1.CNT6
#define TAUD1CNT7 TAUD1.CNT7
#define TAUD1CNT8 TAUD1.CNT8
#define TAUD1CNT9 TAUD1.CNT9
#define TAUD1CNT10 TAUD1.CNT10
#define TAUD1CNT11 TAUD1.CNT11
#define TAUD1CNT12 TAUD1.CNT12
#define TAUD1CNT13 TAUD1.CNT13
#define TAUD1CNT14 TAUD1.CNT14
#define TAUD1CNT15 TAUD1.CNT15
#define TAUD1CMUR0 TAUD1.CMUR0.UINT8
#define TAUD1TIS TAUD1.CMUR0.BIT.TIS
#define TAUD1CMUR1 TAUD1.CMUR1.UINT8
#define TAUD1CMUR2 TAUD1.CMUR2.UINT8
#define TAUD1CMUR3 TAUD1.CMUR3.UINT8
#define TAUD1CMUR4 TAUD1.CMUR4.UINT8
#define TAUD1CMUR5 TAUD1.CMUR5.UINT8
#define TAUD1CMUR6 TAUD1.CMUR6.UINT8
#define TAUD1CMUR7 TAUD1.CMUR7.UINT8
#define TAUD1CMUR8 TAUD1.CMUR8.UINT8
#define TAUD1CMUR9 TAUD1.CMUR9.UINT8
#define TAUD1CMUR10 TAUD1.CMUR10.UINT8
#define TAUD1CMUR11 TAUD1.CMUR11.UINT8
#define TAUD1CMUR12 TAUD1.CMUR12.UINT8
#define TAUD1CMUR13 TAUD1.CMUR13.UINT8
#define TAUD1CMUR14 TAUD1.CMUR14.UINT8
#define TAUD1CMUR15 TAUD1.CMUR15.UINT8
#define TAUD1CSR0 TAUD1.CSR0.UINT8
#define TAUD1OVF TAUD1.CSR0.BIT.OVF
#define TAUD1CSF TAUD1.CSR0.BIT.CSF
#define TAUD1CSR1 TAUD1.CSR1.UINT8
#define TAUD1CSR2 TAUD1.CSR2.UINT8
#define TAUD1CSR3 TAUD1.CSR3.UINT8
#define TAUD1CSR4 TAUD1.CSR4.UINT8
#define TAUD1CSR5 TAUD1.CSR5.UINT8
#define TAUD1CSR6 TAUD1.CSR6.UINT8
#define TAUD1CSR7 TAUD1.CSR7.UINT8
#define TAUD1CSR8 TAUD1.CSR8.UINT8
#define TAUD1CSR9 TAUD1.CSR9.UINT8
#define TAUD1CSR10 TAUD1.CSR10.UINT8
#define TAUD1CSR11 TAUD1.CSR11.UINT8
#define TAUD1CSR12 TAUD1.CSR12.UINT8
#define TAUD1CSR13 TAUD1.CSR13.UINT8
#define TAUD1CSR14 TAUD1.CSR14.UINT8
#define TAUD1CSR15 TAUD1.CSR15.UINT8
#define TAUD1CSC0 TAUD1.CSC0.UINT8
#define TAUD1CLOV TAUD1.CSC0.BIT.CLOV
#define TAUD1CSC1 TAUD1.CSC1.UINT8
#define TAUD1CSC2 TAUD1.CSC2.UINT8
#define TAUD1CSC3 TAUD1.CSC3.UINT8
#define TAUD1CSC4 TAUD1.CSC4.UINT8
#define TAUD1CSC5 TAUD1.CSC5.UINT8
#define TAUD1CSC6 TAUD1.CSC6.UINT8
#define TAUD1CSC7 TAUD1.CSC7.UINT8
#define TAUD1CSC8 TAUD1.CSC8.UINT8
#define TAUD1CSC9 TAUD1.CSC9.UINT8
#define TAUD1CSC10 TAUD1.CSC10.UINT8
#define TAUD1CSC11 TAUD1.CSC11.UINT8
#define TAUD1CSC12 TAUD1.CSC12.UINT8
#define TAUD1CSC13 TAUD1.CSC13.UINT8
#define TAUD1CSC14 TAUD1.CSC14.UINT8
#define TAUD1CSC15 TAUD1.CSC15.UINT8
#define TAUD1TE TAUD1.TE.UINT16
#define TAUD1TE00 TAUD1.TE.BIT.TE00
#define TAUD1TE01 TAUD1.TE.BIT.TE01
#define TAUD1TE02 TAUD1.TE.BIT.TE02
#define TAUD1TE03 TAUD1.TE.BIT.TE03
#define TAUD1TE04 TAUD1.TE.BIT.TE04
#define TAUD1TE05 TAUD1.TE.BIT.TE05
#define TAUD1TE06 TAUD1.TE.BIT.TE06
#define TAUD1TE07 TAUD1.TE.BIT.TE07
#define TAUD1TE08 TAUD1.TE.BIT.TE08
#define TAUD1TE09 TAUD1.TE.BIT.TE09
#define TAUD1TE10 TAUD1.TE.BIT.TE10
#define TAUD1TE11 TAUD1.TE.BIT.TE11
#define TAUD1TE12 TAUD1.TE.BIT.TE12
#define TAUD1TE13 TAUD1.TE.BIT.TE13
#define TAUD1TE14 TAUD1.TE.BIT.TE14
#define TAUD1TE15 TAUD1.TE.BIT.TE15
#define TAUD1TS TAUD1.TS.UINT16
#define TAUD1TS00 TAUD1.TS.BIT.TS00
#define TAUD1TS01 TAUD1.TS.BIT.TS01
#define TAUD1TS02 TAUD1.TS.BIT.TS02
#define TAUD1TS03 TAUD1.TS.BIT.TS03
#define TAUD1TS04 TAUD1.TS.BIT.TS04
#define TAUD1TS05 TAUD1.TS.BIT.TS05
#define TAUD1TS06 TAUD1.TS.BIT.TS06
#define TAUD1TS07 TAUD1.TS.BIT.TS07
#define TAUD1TS08 TAUD1.TS.BIT.TS08
#define TAUD1TS09 TAUD1.TS.BIT.TS09
#define TAUD1TS10 TAUD1.TS.BIT.TS10
#define TAUD1TS11 TAUD1.TS.BIT.TS11
#define TAUD1TS12 TAUD1.TS.BIT.TS12
#define TAUD1TS13 TAUD1.TS.BIT.TS13
#define TAUD1TS14 TAUD1.TS.BIT.TS14
#define TAUD1TS15 TAUD1.TS.BIT.TS15
#define TAUD1TT TAUD1.TT.UINT16
#define TAUD1TT00 TAUD1.TT.BIT.TT00
#define TAUD1TT01 TAUD1.TT.BIT.TT01
#define TAUD1TT02 TAUD1.TT.BIT.TT02
#define TAUD1TT03 TAUD1.TT.BIT.TT03
#define TAUD1TT04 TAUD1.TT.BIT.TT04
#define TAUD1TT05 TAUD1.TT.BIT.TT05
#define TAUD1TT06 TAUD1.TT.BIT.TT06
#define TAUD1TT07 TAUD1.TT.BIT.TT07
#define TAUD1TT08 TAUD1.TT.BIT.TT08
#define TAUD1TT09 TAUD1.TT.BIT.TT09
#define TAUD1TT10 TAUD1.TT.BIT.TT10
#define TAUD1TT11 TAUD1.TT.BIT.TT11
#define TAUD1TT12 TAUD1.TT.BIT.TT12
#define TAUD1TT13 TAUD1.TT.BIT.TT13
#define TAUD1TT14 TAUD1.TT.BIT.TT14
#define TAUD1TT15 TAUD1.TT.BIT.TT15
#define TAUD1CMOR0 TAUD1.CMOR0.UINT16
#define TAUD1MD TAUD1.CMOR0.BIT.MD
#define TAUD1COS TAUD1.CMOR0.BIT.COS
#define TAUD1STS TAUD1.CMOR0.BIT.STS
#define TAUD1MAS TAUD1.CMOR0.BIT.MAS
#define TAUD1CCS TAUD1.CMOR0.BIT.CCS
#define TAUD1CKS TAUD1.CMOR0.BIT.CKS
#define TAUD1CMOR1 TAUD1.CMOR1.UINT16
#define TAUD1CMOR2 TAUD1.CMOR2.UINT16
#define TAUD1CMOR3 TAUD1.CMOR3.UINT16
#define TAUD1CMOR4 TAUD1.CMOR4.UINT16
#define TAUD1CMOR5 TAUD1.CMOR5.UINT16
#define TAUD1CMOR6 TAUD1.CMOR6.UINT16
#define TAUD1CMOR7 TAUD1.CMOR7.UINT16
#define TAUD1CMOR8 TAUD1.CMOR8.UINT16
#define TAUD1CMOR9 TAUD1.CMOR9.UINT16
#define TAUD1CMOR10 TAUD1.CMOR10.UINT16
#define TAUD1CMOR11 TAUD1.CMOR11.UINT16
#define TAUD1CMOR12 TAUD1.CMOR12.UINT16
#define TAUD1CMOR13 TAUD1.CMOR13.UINT16
#define TAUD1CMOR14 TAUD1.CMOR14.UINT16
#define TAUD1CMOR15 TAUD1.CMOR15.UINT16
#define TAUD1TPS TAUD1.TPS.UINT16
#define TAUD1PRS0 TAUD1.TPS.BIT.PRS0
#define TAUD1PRS1 TAUD1.TPS.BIT.PRS1
#define TAUD1PRS2 TAUD1.TPS.BIT.PRS2
#define TAUD1PRS3 TAUD1.TPS.BIT.PRS3
#define TAUD1BRS TAUD1.BRS
#define TAUD1TOM TAUD1.TOM.UINT16
#define TAUD1TOM00 TAUD1.TOM.BIT.TOM00
#define TAUD1TOM01 TAUD1.TOM.BIT.TOM01
#define TAUD1TOM02 TAUD1.TOM.BIT.TOM02
#define TAUD1TOM03 TAUD1.TOM.BIT.TOM03
#define TAUD1TOM04 TAUD1.TOM.BIT.TOM04
#define TAUD1TOM05 TAUD1.TOM.BIT.TOM05
#define TAUD1TOM06 TAUD1.TOM.BIT.TOM06
#define TAUD1TOM07 TAUD1.TOM.BIT.TOM07
#define TAUD1TOM08 TAUD1.TOM.BIT.TOM08
#define TAUD1TOM09 TAUD1.TOM.BIT.TOM09
#define TAUD1TOM10 TAUD1.TOM.BIT.TOM10
#define TAUD1TOM11 TAUD1.TOM.BIT.TOM11
#define TAUD1TOM12 TAUD1.TOM.BIT.TOM12
#define TAUD1TOM13 TAUD1.TOM.BIT.TOM13
#define TAUD1TOM14 TAUD1.TOM.BIT.TOM14
#define TAUD1TOM15 TAUD1.TOM.BIT.TOM15
#define TAUD1TOC TAUD1.TOC.UINT16
#define TAUD1TOC00 TAUD1.TOC.BIT.TOC00
#define TAUD1TOC01 TAUD1.TOC.BIT.TOC01
#define TAUD1TOC02 TAUD1.TOC.BIT.TOC02
#define TAUD1TOC03 TAUD1.TOC.BIT.TOC03
#define TAUD1TOC04 TAUD1.TOC.BIT.TOC04
#define TAUD1TOC05 TAUD1.TOC.BIT.TOC05
#define TAUD1TOC06 TAUD1.TOC.BIT.TOC06
#define TAUD1TOC07 TAUD1.TOC.BIT.TOC07
#define TAUD1TOC08 TAUD1.TOC.BIT.TOC08
#define TAUD1TOC09 TAUD1.TOC.BIT.TOC09
#define TAUD1TOC10 TAUD1.TOC.BIT.TOC10
#define TAUD1TOC11 TAUD1.TOC.BIT.TOC11
#define TAUD1TOC12 TAUD1.TOC.BIT.TOC12
#define TAUD1TOC13 TAUD1.TOC.BIT.TOC13
#define TAUD1TOC14 TAUD1.TOC.BIT.TOC14
#define TAUD1TOC15 TAUD1.TOC.BIT.TOC15
#define TAUD1TDE TAUD1.TDE.UINT16
#define TAUD1TDE00 TAUD1.TDE.BIT.TDE00
#define TAUD1TDE01 TAUD1.TDE.BIT.TDE01
#define TAUD1TDE02 TAUD1.TDE.BIT.TDE02
#define TAUD1TDE03 TAUD1.TDE.BIT.TDE03
#define TAUD1TDE04 TAUD1.TDE.BIT.TDE04
#define TAUD1TDE05 TAUD1.TDE.BIT.TDE05
#define TAUD1TDE06 TAUD1.TDE.BIT.TDE06
#define TAUD1TDE07 TAUD1.TDE.BIT.TDE07
#define TAUD1TDE08 TAUD1.TDE.BIT.TDE08
#define TAUD1TDE09 TAUD1.TDE.BIT.TDE09
#define TAUD1TDE10 TAUD1.TDE.BIT.TDE10
#define TAUD1TDE11 TAUD1.TDE.BIT.TDE11
#define TAUD1TDE12 TAUD1.TDE.BIT.TDE12
#define TAUD1TDE13 TAUD1.TDE.BIT.TDE13
#define TAUD1TDE14 TAUD1.TDE.BIT.TDE14
#define TAUD1TDE15 TAUD1.TDE.BIT.TDE15
#define TAUD1TDM TAUD1.TDM.UINT16
#define TAUD1TDM00 TAUD1.TDM.BIT.TDM00
#define TAUD1TDM01 TAUD1.TDM.BIT.TDM01
#define TAUD1TDM02 TAUD1.TDM.BIT.TDM02
#define TAUD1TDM03 TAUD1.TDM.BIT.TDM03
#define TAUD1TDM04 TAUD1.TDM.BIT.TDM04
#define TAUD1TDM05 TAUD1.TDM.BIT.TDM05
#define TAUD1TDM06 TAUD1.TDM.BIT.TDM06
#define TAUD1TDM07 TAUD1.TDM.BIT.TDM07
#define TAUD1TDM08 TAUD1.TDM.BIT.TDM08
#define TAUD1TDM09 TAUD1.TDM.BIT.TDM09
#define TAUD1TDM10 TAUD1.TDM.BIT.TDM10
#define TAUD1TDM11 TAUD1.TDM.BIT.TDM11
#define TAUD1TDM12 TAUD1.TDM.BIT.TDM12
#define TAUD1TDM13 TAUD1.TDM.BIT.TDM13
#define TAUD1TDM14 TAUD1.TDM.BIT.TDM14
#define TAUD1TDM15 TAUD1.TDM.BIT.TDM15
#define TAUD1TRE TAUD1.TRE.UINT16
#define TAUD1TRE00 TAUD1.TRE.BIT.TRE00
#define TAUD1TRE01 TAUD1.TRE.BIT.TRE01
#define TAUD1TRE02 TAUD1.TRE.BIT.TRE02
#define TAUD1TRE03 TAUD1.TRE.BIT.TRE03
#define TAUD1TRE04 TAUD1.TRE.BIT.TRE04
#define TAUD1TRE05 TAUD1.TRE.BIT.TRE05
#define TAUD1TRE06 TAUD1.TRE.BIT.TRE06
#define TAUD1TRE07 TAUD1.TRE.BIT.TRE07
#define TAUD1TRE08 TAUD1.TRE.BIT.TRE08
#define TAUD1TRE09 TAUD1.TRE.BIT.TRE09
#define TAUD1TRE10 TAUD1.TRE.BIT.TRE10
#define TAUD1TRE11 TAUD1.TRE.BIT.TRE11
#define TAUD1TRE12 TAUD1.TRE.BIT.TRE12
#define TAUD1TRE13 TAUD1.TRE.BIT.TRE13
#define TAUD1TRE14 TAUD1.TRE.BIT.TRE14
#define TAUD1TRE15 TAUD1.TRE.BIT.TRE15
#define TAUD1TRC TAUD1.TRC.UINT16
#define TAUD1TRC00 TAUD1.TRC.BIT.TRC00
#define TAUD1TRC01 TAUD1.TRC.BIT.TRC01
#define TAUD1TRC02 TAUD1.TRC.BIT.TRC02
#define TAUD1TRC03 TAUD1.TRC.BIT.TRC03
#define TAUD1TRC04 TAUD1.TRC.BIT.TRC04
#define TAUD1TRC05 TAUD1.TRC.BIT.TRC05
#define TAUD1TRC06 TAUD1.TRC.BIT.TRC06
#define TAUD1TRC07 TAUD1.TRC.BIT.TRC07
#define TAUD1TRC08 TAUD1.TRC.BIT.TRC08
#define TAUD1TRC09 TAUD1.TRC.BIT.TRC09
#define TAUD1TRC10 TAUD1.TRC.BIT.TRC10
#define TAUD1TRC11 TAUD1.TRC.BIT.TRC11
#define TAUD1TRC12 TAUD1.TRC.BIT.TRC12
#define TAUD1TRC13 TAUD1.TRC.BIT.TRC13
#define TAUD1TRC14 TAUD1.TRC.BIT.TRC14
#define TAUD1TRC15 TAUD1.TRC.BIT.TRC15
#define TAUD1RDE TAUD1.RDE.UINT16
#define TAUD1RDE00 TAUD1.RDE.BIT.RDE00
#define TAUD1RDE01 TAUD1.RDE.BIT.RDE01
#define TAUD1RDE02 TAUD1.RDE.BIT.RDE02
#define TAUD1RDE03 TAUD1.RDE.BIT.RDE03
#define TAUD1RDE04 TAUD1.RDE.BIT.RDE04
#define TAUD1RDE05 TAUD1.RDE.BIT.RDE05
#define TAUD1RDE06 TAUD1.RDE.BIT.RDE06
#define TAUD1RDE07 TAUD1.RDE.BIT.RDE07
#define TAUD1RDE08 TAUD1.RDE.BIT.RDE08
#define TAUD1RDE09 TAUD1.RDE.BIT.RDE09
#define TAUD1RDE10 TAUD1.RDE.BIT.RDE10
#define TAUD1RDE11 TAUD1.RDE.BIT.RDE11
#define TAUD1RDE12 TAUD1.RDE.BIT.RDE12
#define TAUD1RDE13 TAUD1.RDE.BIT.RDE13
#define TAUD1RDE14 TAUD1.RDE.BIT.RDE14
#define TAUD1RDE15 TAUD1.RDE.BIT.RDE15
#define TAUD1RDM TAUD1.RDM.UINT16
#define TAUD1RDM00 TAUD1.RDM.BIT.RDM00
#define TAUD1RDM01 TAUD1.RDM.BIT.RDM01
#define TAUD1RDM02 TAUD1.RDM.BIT.RDM02
#define TAUD1RDM03 TAUD1.RDM.BIT.RDM03
#define TAUD1RDM04 TAUD1.RDM.BIT.RDM04
#define TAUD1RDM05 TAUD1.RDM.BIT.RDM05
#define TAUD1RDM06 TAUD1.RDM.BIT.RDM06
#define TAUD1RDM07 TAUD1.RDM.BIT.RDM07
#define TAUD1RDM08 TAUD1.RDM.BIT.RDM08
#define TAUD1RDM09 TAUD1.RDM.BIT.RDM09
#define TAUD1RDM10 TAUD1.RDM.BIT.RDM10
#define TAUD1RDM11 TAUD1.RDM.BIT.RDM11
#define TAUD1RDM12 TAUD1.RDM.BIT.RDM12
#define TAUD1RDM13 TAUD1.RDM.BIT.RDM13
#define TAUD1RDM14 TAUD1.RDM.BIT.RDM14
#define TAUD1RDM15 TAUD1.RDM.BIT.RDM15
#define TAUD1RDS TAUD1.RDS.UINT16
#define TAUD1RDS00 TAUD1.RDS.BIT.RDS00
#define TAUD1RDS01 TAUD1.RDS.BIT.RDS01
#define TAUD1RDS02 TAUD1.RDS.BIT.RDS02
#define TAUD1RDS03 TAUD1.RDS.BIT.RDS03
#define TAUD1RDS04 TAUD1.RDS.BIT.RDS04
#define TAUD1RDS05 TAUD1.RDS.BIT.RDS05
#define TAUD1RDS06 TAUD1.RDS.BIT.RDS06
#define TAUD1RDS07 TAUD1.RDS.BIT.RDS07
#define TAUD1RDS08 TAUD1.RDS.BIT.RDS08
#define TAUD1RDS09 TAUD1.RDS.BIT.RDS09
#define TAUD1RDS010 TAUD1.RDS.BIT.RDS010
#define TAUD1RDS011 TAUD1.RDS.BIT.RDS011
#define TAUD1RDS012 TAUD1.RDS.BIT.RDS012
#define TAUD1RDS013 TAUD1.RDS.BIT.RDS013
#define TAUD1RDS014 TAUD1.RDS.BIT.RDS014
#define TAUD1RDS015 TAUD1.RDS.BIT.RDS015
#define TAUD1RDC TAUD1.RDC.UINT16
#define TAUD1RDC00 TAUD1.RDC.BIT.RDC00
#define TAUD1RDC01 TAUD1.RDC.BIT.RDC01
#define TAUD1RDC02 TAUD1.RDC.BIT.RDC02
#define TAUD1RDC03 TAUD1.RDC.BIT.RDC03
#define TAUD1RDC04 TAUD1.RDC.BIT.RDC04
#define TAUD1RDC05 TAUD1.RDC.BIT.RDC05
#define TAUD1RDC06 TAUD1.RDC.BIT.RDC06
#define TAUD1RDC07 TAUD1.RDC.BIT.RDC07
#define TAUD1RDC08 TAUD1.RDC.BIT.RDC08
#define TAUD1RDC09 TAUD1.RDC.BIT.RDC09
#define TAUD1RDC10 TAUD1.RDC.BIT.RDC10
#define TAUD1RDC11 TAUD1.RDC.BIT.RDC11
#define TAUD1RDC12 TAUD1.RDC.BIT.RDC12
#define TAUD1RDC13 TAUD1.RDC.BIT.RDC13
#define TAUD1RDC14 TAUD1.RDC.BIT.RDC14
#define TAUD1RDC15 TAUD1.RDC.BIT.RDC15
#define TAUD2CDR0 TAUD2.CDR0
#define TAUD2CDR1 TAUD2.CDR1
#define TAUD2CDR2 TAUD2.CDR2
#define TAUD2CDR3 TAUD2.CDR3
#define TAUD2CDR4 TAUD2.CDR4
#define TAUD2CDR5 TAUD2.CDR5
#define TAUD2CDR6 TAUD2.CDR6
#define TAUD2CDR7 TAUD2.CDR7
#define TAUD2CDR8 TAUD2.CDR8
#define TAUD2CDR9 TAUD2.CDR9
#define TAUD2CDR10 TAUD2.CDR10
#define TAUD2CDR11 TAUD2.CDR11
#define TAUD2CDR12 TAUD2.CDR12
#define TAUD2CDR13 TAUD2.CDR13
#define TAUD2CDR14 TAUD2.CDR14
#define TAUD2CDR15 TAUD2.CDR15
#define TAUD2TOL TAUD2.TOL.UINT16
#define TAUD2TOL00 TAUD2.TOL.BIT.TOL00
#define TAUD2TOL01 TAUD2.TOL.BIT.TOL01
#define TAUD2TOL02 TAUD2.TOL.BIT.TOL02
#define TAUD2TOL03 TAUD2.TOL.BIT.TOL03
#define TAUD2TOL04 TAUD2.TOL.BIT.TOL04
#define TAUD2TOL05 TAUD2.TOL.BIT.TOL05
#define TAUD2TOL06 TAUD2.TOL.BIT.TOL06
#define TAUD2TOL07 TAUD2.TOL.BIT.TOL07
#define TAUD2TOL08 TAUD2.TOL.BIT.TOL08
#define TAUD2TOL09 TAUD2.TOL.BIT.TOL09
#define TAUD2TOL10 TAUD2.TOL.BIT.TOL10
#define TAUD2TOL11 TAUD2.TOL.BIT.TOL11
#define TAUD2TOL12 TAUD2.TOL.BIT.TOL12
#define TAUD2TOL13 TAUD2.TOL.BIT.TOL13
#define TAUD2TOL14 TAUD2.TOL.BIT.TOL14
#define TAUD2TOL15 TAUD2.TOL.BIT.TOL15
#define TAUD2RDT TAUD2.RDT.UINT16
#define TAUD2RDT00 TAUD2.RDT.BIT.RDT00
#define TAUD2RDT01 TAUD2.RDT.BIT.RDT01
#define TAUD2RDT02 TAUD2.RDT.BIT.RDT02
#define TAUD2RDT03 TAUD2.RDT.BIT.RDT03
#define TAUD2RDT04 TAUD2.RDT.BIT.RDT04
#define TAUD2RDT05 TAUD2.RDT.BIT.RDT05
#define TAUD2RDT06 TAUD2.RDT.BIT.RDT06
#define TAUD2RDT07 TAUD2.RDT.BIT.RDT07
#define TAUD2RDT08 TAUD2.RDT.BIT.RDT08
#define TAUD2RDT09 TAUD2.RDT.BIT.RDT09
#define TAUD2RDT10 TAUD2.RDT.BIT.RDT10
#define TAUD2RDT11 TAUD2.RDT.BIT.RDT11
#define TAUD2RDT12 TAUD2.RDT.BIT.RDT12
#define TAUD2RDT13 TAUD2.RDT.BIT.RDT13
#define TAUD2RDT14 TAUD2.RDT.BIT.RDT14
#define TAUD2RDT15 TAUD2.RDT.BIT.RDT15
#define TAUD2RSF TAUD2.RSF.UINT16
#define TAUD2RSF00 TAUD2.RSF.BIT.RSF00
#define TAUD2RSF01 TAUD2.RSF.BIT.RSF01
#define TAUD2RSF02 TAUD2.RSF.BIT.RSF02
#define TAUD2RSF03 TAUD2.RSF.BIT.RSF03
#define TAUD2RSF04 TAUD2.RSF.BIT.RSF04
#define TAUD2RSF05 TAUD2.RSF.BIT.RSF05
#define TAUD2RSF06 TAUD2.RSF.BIT.RSF06
#define TAUD2RSF07 TAUD2.RSF.BIT.RSF07
#define TAUD2RSF08 TAUD2.RSF.BIT.RSF08
#define TAUD2RSF09 TAUD2.RSF.BIT.RSF09
#define TAUD2RSF10 TAUD2.RSF.BIT.RSF10
#define TAUD2RSF11 TAUD2.RSF.BIT.RSF11
#define TAUD2RSF12 TAUD2.RSF.BIT.RSF12
#define TAUD2RSF13 TAUD2.RSF.BIT.RSF13
#define TAUD2RSF14 TAUD2.RSF.BIT.RSF14
#define TAUD2RSF15 TAUD2.RSF.BIT.RSF15
#define TAUD2TRO TAUD2.TRO.UINT16
#define TAUD2TRO00 TAUD2.TRO.BIT.TRO00
#define TAUD2TRO01 TAUD2.TRO.BIT.TRO01
#define TAUD2TRO02 TAUD2.TRO.BIT.TRO02
#define TAUD2TRO03 TAUD2.TRO.BIT.TRO03
#define TAUD2TRO04 TAUD2.TRO.BIT.TRO04
#define TAUD2TRO05 TAUD2.TRO.BIT.TRO05
#define TAUD2TRO06 TAUD2.TRO.BIT.TRO06
#define TAUD2TRO07 TAUD2.TRO.BIT.TRO07
#define TAUD2TRO08 TAUD2.TRO.BIT.TRO08
#define TAUD2TRO09 TAUD2.TRO.BIT.TRO09
#define TAUD2TRO10 TAUD2.TRO.BIT.TRO10
#define TAUD2TRO11 TAUD2.TRO.BIT.TRO11
#define TAUD2TRO12 TAUD2.TRO.BIT.TRO12
#define TAUD2TRO13 TAUD2.TRO.BIT.TRO13
#define TAUD2TRO14 TAUD2.TRO.BIT.TRO14
#define TAUD2TRO15 TAUD2.TRO.BIT.TRO15
#define TAUD2TME TAUD2.TME.UINT16
#define TAUD2TME00 TAUD2.TME.BIT.TME00
#define TAUD2TME01 TAUD2.TME.BIT.TME01
#define TAUD2TME02 TAUD2.TME.BIT.TME02
#define TAUD2TME03 TAUD2.TME.BIT.TME03
#define TAUD2TME04 TAUD2.TME.BIT.TME04
#define TAUD2TME05 TAUD2.TME.BIT.TME05
#define TAUD2TME06 TAUD2.TME.BIT.TME06
#define TAUD2TME07 TAUD2.TME.BIT.TME07
#define TAUD2TME08 TAUD2.TME.BIT.TME08
#define TAUD2TME09 TAUD2.TME.BIT.TME09
#define TAUD2TME10 TAUD2.TME.BIT.TME10
#define TAUD2TME11 TAUD2.TME.BIT.TME11
#define TAUD2TME12 TAUD2.TME.BIT.TME12
#define TAUD2TME13 TAUD2.TME.BIT.TME13
#define TAUD2TME14 TAUD2.TME.BIT.TME14
#define TAUD2TME15 TAUD2.TME.BIT.TME15
#define TAUD2TDL TAUD2.TDL.UINT16
#define TAUD2TDL00 TAUD2.TDL.BIT.TDL00
#define TAUD2TDL01 TAUD2.TDL.BIT.TDL01
#define TAUD2TDL02 TAUD2.TDL.BIT.TDL02
#define TAUD2TDL03 TAUD2.TDL.BIT.TDL03
#define TAUD2TDL04 TAUD2.TDL.BIT.TDL04
#define TAUD2TDL05 TAUD2.TDL.BIT.TDL05
#define TAUD2TDL06 TAUD2.TDL.BIT.TDL06
#define TAUD2TDL07 TAUD2.TDL.BIT.TDL07
#define TAUD2TDL08 TAUD2.TDL.BIT.TDL08
#define TAUD2TDL09 TAUD2.TDL.BIT.TDL09
#define TAUD2TDL10 TAUD2.TDL.BIT.TDL10
#define TAUD2TDL11 TAUD2.TDL.BIT.TDL11
#define TAUD2TDL12 TAUD2.TDL.BIT.TDL12
#define TAUD2TDL13 TAUD2.TDL.BIT.TDL13
#define TAUD2TDL14 TAUD2.TDL.BIT.TDL14
#define TAUD2TDL15 TAUD2.TDL.BIT.TDL15
#define TAUD2TO TAUD2.TO.UINT16
#define TAUD2TO00 TAUD2.TO.BIT.TO00
#define TAUD2TO01 TAUD2.TO.BIT.TO01
#define TAUD2TO02 TAUD2.TO.BIT.TO02
#define TAUD2TO03 TAUD2.TO.BIT.TO03
#define TAUD2TO04 TAUD2.TO.BIT.TO04
#define TAUD2TO05 TAUD2.TO.BIT.TO05
#define TAUD2TO06 TAUD2.TO.BIT.TO06
#define TAUD2TO07 TAUD2.TO.BIT.TO07
#define TAUD2TO08 TAUD2.TO.BIT.TO08
#define TAUD2TO09 TAUD2.TO.BIT.TO09
#define TAUD2TO10 TAUD2.TO.BIT.TO10
#define TAUD2TO11 TAUD2.TO.BIT.TO11
#define TAUD2TO12 TAUD2.TO.BIT.TO12
#define TAUD2TO13 TAUD2.TO.BIT.TO13
#define TAUD2TO14 TAUD2.TO.BIT.TO14
#define TAUD2TO15 TAUD2.TO.BIT.TO15
#define TAUD2TOE TAUD2.TOE.UINT16
#define TAUD2TOE00 TAUD2.TOE.BIT.TOE00
#define TAUD2TOE01 TAUD2.TOE.BIT.TOE01
#define TAUD2TOE02 TAUD2.TOE.BIT.TOE02
#define TAUD2TOE03 TAUD2.TOE.BIT.TOE03
#define TAUD2TOE04 TAUD2.TOE.BIT.TOE04
#define TAUD2TOE05 TAUD2.TOE.BIT.TOE05
#define TAUD2TOE06 TAUD2.TOE.BIT.TOE06
#define TAUD2TOE07 TAUD2.TOE.BIT.TOE07
#define TAUD2TOE08 TAUD2.TOE.BIT.TOE08
#define TAUD2TOE09 TAUD2.TOE.BIT.TOE09
#define TAUD2TOE10 TAUD2.TOE.BIT.TOE10
#define TAUD2TOE11 TAUD2.TOE.BIT.TOE11
#define TAUD2TOE12 TAUD2.TOE.BIT.TOE12
#define TAUD2TOE13 TAUD2.TOE.BIT.TOE13
#define TAUD2TOE14 TAUD2.TOE.BIT.TOE14
#define TAUD2TOE15 TAUD2.TOE.BIT.TOE15
#define TAUD2CNT0 TAUD2.CNT0
#define TAUD2CNT1 TAUD2.CNT1
#define TAUD2CNT2 TAUD2.CNT2
#define TAUD2CNT3 TAUD2.CNT3
#define TAUD2CNT4 TAUD2.CNT4
#define TAUD2CNT5 TAUD2.CNT5
#define TAUD2CNT6 TAUD2.CNT6
#define TAUD2CNT7 TAUD2.CNT7
#define TAUD2CNT8 TAUD2.CNT8
#define TAUD2CNT9 TAUD2.CNT9
#define TAUD2CNT10 TAUD2.CNT10
#define TAUD2CNT11 TAUD2.CNT11
#define TAUD2CNT12 TAUD2.CNT12
#define TAUD2CNT13 TAUD2.CNT13
#define TAUD2CNT14 TAUD2.CNT14
#define TAUD2CNT15 TAUD2.CNT15
#define TAUD2CMUR0 TAUD2.CMUR0.UINT8
#define TAUD2TIS TAUD2.CMUR0.BIT.TIS
#define TAUD2CMUR1 TAUD2.CMUR1.UINT8
#define TAUD2CMUR2 TAUD2.CMUR2.UINT8
#define TAUD2CMUR3 TAUD2.CMUR3.UINT8
#define TAUD2CMUR4 TAUD2.CMUR4.UINT8
#define TAUD2CMUR5 TAUD2.CMUR5.UINT8
#define TAUD2CMUR6 TAUD2.CMUR6.UINT8
#define TAUD2CMUR7 TAUD2.CMUR7.UINT8
#define TAUD2CMUR8 TAUD2.CMUR8.UINT8
#define TAUD2CMUR9 TAUD2.CMUR9.UINT8
#define TAUD2CMUR10 TAUD2.CMUR10.UINT8
#define TAUD2CMUR11 TAUD2.CMUR11.UINT8
#define TAUD2CMUR12 TAUD2.CMUR12.UINT8
#define TAUD2CMUR13 TAUD2.CMUR13.UINT8
#define TAUD2CMUR14 TAUD2.CMUR14.UINT8
#define TAUD2CMUR15 TAUD2.CMUR15.UINT8
#define TAUD2CSR0 TAUD2.CSR0.UINT8
#define TAUD2OVF TAUD2.CSR0.BIT.OVF
#define TAUD2CSF TAUD2.CSR0.BIT.CSF
#define TAUD2CSR1 TAUD2.CSR1.UINT8
#define TAUD2CSR2 TAUD2.CSR2.UINT8
#define TAUD2CSR3 TAUD2.CSR3.UINT8
#define TAUD2CSR4 TAUD2.CSR4.UINT8
#define TAUD2CSR5 TAUD2.CSR5.UINT8
#define TAUD2CSR6 TAUD2.CSR6.UINT8
#define TAUD2CSR7 TAUD2.CSR7.UINT8
#define TAUD2CSR8 TAUD2.CSR8.UINT8
#define TAUD2CSR9 TAUD2.CSR9.UINT8
#define TAUD2CSR10 TAUD2.CSR10.UINT8
#define TAUD2CSR11 TAUD2.CSR11.UINT8
#define TAUD2CSR12 TAUD2.CSR12.UINT8
#define TAUD2CSR13 TAUD2.CSR13.UINT8
#define TAUD2CSR14 TAUD2.CSR14.UINT8
#define TAUD2CSR15 TAUD2.CSR15.UINT8
#define TAUD2CSC0 TAUD2.CSC0.UINT8
#define TAUD2CLOV TAUD2.CSC0.BIT.CLOV
#define TAUD2CSC1 TAUD2.CSC1.UINT8
#define TAUD2CSC2 TAUD2.CSC2.UINT8
#define TAUD2CSC3 TAUD2.CSC3.UINT8
#define TAUD2CSC4 TAUD2.CSC4.UINT8
#define TAUD2CSC5 TAUD2.CSC5.UINT8
#define TAUD2CSC6 TAUD2.CSC6.UINT8
#define TAUD2CSC7 TAUD2.CSC7.UINT8
#define TAUD2CSC8 TAUD2.CSC8.UINT8
#define TAUD2CSC9 TAUD2.CSC9.UINT8
#define TAUD2CSC10 TAUD2.CSC10.UINT8
#define TAUD2CSC11 TAUD2.CSC11.UINT8
#define TAUD2CSC12 TAUD2.CSC12.UINT8
#define TAUD2CSC13 TAUD2.CSC13.UINT8
#define TAUD2CSC14 TAUD2.CSC14.UINT8
#define TAUD2CSC15 TAUD2.CSC15.UINT8
#define TAUD2TE TAUD2.TE.UINT16
#define TAUD2TE00 TAUD2.TE.BIT.TE00
#define TAUD2TE01 TAUD2.TE.BIT.TE01
#define TAUD2TE02 TAUD2.TE.BIT.TE02
#define TAUD2TE03 TAUD2.TE.BIT.TE03
#define TAUD2TE04 TAUD2.TE.BIT.TE04
#define TAUD2TE05 TAUD2.TE.BIT.TE05
#define TAUD2TE06 TAUD2.TE.BIT.TE06
#define TAUD2TE07 TAUD2.TE.BIT.TE07
#define TAUD2TE08 TAUD2.TE.BIT.TE08
#define TAUD2TE09 TAUD2.TE.BIT.TE09
#define TAUD2TE10 TAUD2.TE.BIT.TE10
#define TAUD2TE11 TAUD2.TE.BIT.TE11
#define TAUD2TE12 TAUD2.TE.BIT.TE12
#define TAUD2TE13 TAUD2.TE.BIT.TE13
#define TAUD2TE14 TAUD2.TE.BIT.TE14
#define TAUD2TE15 TAUD2.TE.BIT.TE15
#define TAUD2TS TAUD2.TS.UINT16
#define TAUD2TS00 TAUD2.TS.BIT.TS00
#define TAUD2TS01 TAUD2.TS.BIT.TS01
#define TAUD2TS02 TAUD2.TS.BIT.TS02
#define TAUD2TS03 TAUD2.TS.BIT.TS03
#define TAUD2TS04 TAUD2.TS.BIT.TS04
#define TAUD2TS05 TAUD2.TS.BIT.TS05
#define TAUD2TS06 TAUD2.TS.BIT.TS06
#define TAUD2TS07 TAUD2.TS.BIT.TS07
#define TAUD2TS08 TAUD2.TS.BIT.TS08
#define TAUD2TS09 TAUD2.TS.BIT.TS09
#define TAUD2TS10 TAUD2.TS.BIT.TS10
#define TAUD2TS11 TAUD2.TS.BIT.TS11
#define TAUD2TS12 TAUD2.TS.BIT.TS12
#define TAUD2TS13 TAUD2.TS.BIT.TS13
#define TAUD2TS14 TAUD2.TS.BIT.TS14
#define TAUD2TS15 TAUD2.TS.BIT.TS15
#define TAUD2TT TAUD2.TT.UINT16
#define TAUD2TT00 TAUD2.TT.BIT.TT00
#define TAUD2TT01 TAUD2.TT.BIT.TT01
#define TAUD2TT02 TAUD2.TT.BIT.TT02
#define TAUD2TT03 TAUD2.TT.BIT.TT03
#define TAUD2TT04 TAUD2.TT.BIT.TT04
#define TAUD2TT05 TAUD2.TT.BIT.TT05
#define TAUD2TT06 TAUD2.TT.BIT.TT06
#define TAUD2TT07 TAUD2.TT.BIT.TT07
#define TAUD2TT08 TAUD2.TT.BIT.TT08
#define TAUD2TT09 TAUD2.TT.BIT.TT09
#define TAUD2TT10 TAUD2.TT.BIT.TT10
#define TAUD2TT11 TAUD2.TT.BIT.TT11
#define TAUD2TT12 TAUD2.TT.BIT.TT12
#define TAUD2TT13 TAUD2.TT.BIT.TT13
#define TAUD2TT14 TAUD2.TT.BIT.TT14
#define TAUD2TT15 TAUD2.TT.BIT.TT15
#define TAUD2CMOR0 TAUD2.CMOR0.UINT16
#define TAUD2MD TAUD2.CMOR0.BIT.MD
#define TAUD2COS TAUD2.CMOR0.BIT.COS
#define TAUD2STS TAUD2.CMOR0.BIT.STS
#define TAUD2MAS TAUD2.CMOR0.BIT.MAS
#define TAUD2CCS TAUD2.CMOR0.BIT.CCS
#define TAUD2CKS TAUD2.CMOR0.BIT.CKS
#define TAUD2CMOR1 TAUD2.CMOR1.UINT16
#define TAUD2CMOR2 TAUD2.CMOR2.UINT16
#define TAUD2CMOR3 TAUD2.CMOR3.UINT16
#define TAUD2CMOR4 TAUD2.CMOR4.UINT16
#define TAUD2CMOR5 TAUD2.CMOR5.UINT16
#define TAUD2CMOR6 TAUD2.CMOR6.UINT16
#define TAUD2CMOR7 TAUD2.CMOR7.UINT16
#define TAUD2CMOR8 TAUD2.CMOR8.UINT16
#define TAUD2CMOR9 TAUD2.CMOR9.UINT16
#define TAUD2CMOR10 TAUD2.CMOR10.UINT16
#define TAUD2CMOR11 TAUD2.CMOR11.UINT16
#define TAUD2CMOR12 TAUD2.CMOR12.UINT16
#define TAUD2CMOR13 TAUD2.CMOR13.UINT16
#define TAUD2CMOR14 TAUD2.CMOR14.UINT16
#define TAUD2CMOR15 TAUD2.CMOR15.UINT16
#define TAUD2TPS TAUD2.TPS.UINT16
#define TAUD2PRS0 TAUD2.TPS.BIT.PRS0
#define TAUD2PRS1 TAUD2.TPS.BIT.PRS1
#define TAUD2PRS2 TAUD2.TPS.BIT.PRS2
#define TAUD2PRS3 TAUD2.TPS.BIT.PRS3
#define TAUD2BRS TAUD2.BRS
#define TAUD2TOM TAUD2.TOM.UINT16
#define TAUD2TOM00 TAUD2.TOM.BIT.TOM00
#define TAUD2TOM01 TAUD2.TOM.BIT.TOM01
#define TAUD2TOM02 TAUD2.TOM.BIT.TOM02
#define TAUD2TOM03 TAUD2.TOM.BIT.TOM03
#define TAUD2TOM04 TAUD2.TOM.BIT.TOM04
#define TAUD2TOM05 TAUD2.TOM.BIT.TOM05
#define TAUD2TOM06 TAUD2.TOM.BIT.TOM06
#define TAUD2TOM07 TAUD2.TOM.BIT.TOM07
#define TAUD2TOM08 TAUD2.TOM.BIT.TOM08
#define TAUD2TOM09 TAUD2.TOM.BIT.TOM09
#define TAUD2TOM10 TAUD2.TOM.BIT.TOM10
#define TAUD2TOM11 TAUD2.TOM.BIT.TOM11
#define TAUD2TOM12 TAUD2.TOM.BIT.TOM12
#define TAUD2TOM13 TAUD2.TOM.BIT.TOM13
#define TAUD2TOM14 TAUD2.TOM.BIT.TOM14
#define TAUD2TOM15 TAUD2.TOM.BIT.TOM15
#define TAUD2TOC TAUD2.TOC.UINT16
#define TAUD2TOC00 TAUD2.TOC.BIT.TOC00
#define TAUD2TOC01 TAUD2.TOC.BIT.TOC01
#define TAUD2TOC02 TAUD2.TOC.BIT.TOC02
#define TAUD2TOC03 TAUD2.TOC.BIT.TOC03
#define TAUD2TOC04 TAUD2.TOC.BIT.TOC04
#define TAUD2TOC05 TAUD2.TOC.BIT.TOC05
#define TAUD2TOC06 TAUD2.TOC.BIT.TOC06
#define TAUD2TOC07 TAUD2.TOC.BIT.TOC07
#define TAUD2TOC08 TAUD2.TOC.BIT.TOC08
#define TAUD2TOC09 TAUD2.TOC.BIT.TOC09
#define TAUD2TOC10 TAUD2.TOC.BIT.TOC10
#define TAUD2TOC11 TAUD2.TOC.BIT.TOC11
#define TAUD2TOC12 TAUD2.TOC.BIT.TOC12
#define TAUD2TOC13 TAUD2.TOC.BIT.TOC13
#define TAUD2TOC14 TAUD2.TOC.BIT.TOC14
#define TAUD2TOC15 TAUD2.TOC.BIT.TOC15
#define TAUD2TDE TAUD2.TDE.UINT16
#define TAUD2TDE00 TAUD2.TDE.BIT.TDE00
#define TAUD2TDE01 TAUD2.TDE.BIT.TDE01
#define TAUD2TDE02 TAUD2.TDE.BIT.TDE02
#define TAUD2TDE03 TAUD2.TDE.BIT.TDE03
#define TAUD2TDE04 TAUD2.TDE.BIT.TDE04
#define TAUD2TDE05 TAUD2.TDE.BIT.TDE05
#define TAUD2TDE06 TAUD2.TDE.BIT.TDE06
#define TAUD2TDE07 TAUD2.TDE.BIT.TDE07
#define TAUD2TDE08 TAUD2.TDE.BIT.TDE08
#define TAUD2TDE09 TAUD2.TDE.BIT.TDE09
#define TAUD2TDE10 TAUD2.TDE.BIT.TDE10
#define TAUD2TDE11 TAUD2.TDE.BIT.TDE11
#define TAUD2TDE12 TAUD2.TDE.BIT.TDE12
#define TAUD2TDE13 TAUD2.TDE.BIT.TDE13
#define TAUD2TDE14 TAUD2.TDE.BIT.TDE14
#define TAUD2TDE15 TAUD2.TDE.BIT.TDE15
#define TAUD2TDM TAUD2.TDM.UINT16
#define TAUD2TDM00 TAUD2.TDM.BIT.TDM00
#define TAUD2TDM01 TAUD2.TDM.BIT.TDM01
#define TAUD2TDM02 TAUD2.TDM.BIT.TDM02
#define TAUD2TDM03 TAUD2.TDM.BIT.TDM03
#define TAUD2TDM04 TAUD2.TDM.BIT.TDM04
#define TAUD2TDM05 TAUD2.TDM.BIT.TDM05
#define TAUD2TDM06 TAUD2.TDM.BIT.TDM06
#define TAUD2TDM07 TAUD2.TDM.BIT.TDM07
#define TAUD2TDM08 TAUD2.TDM.BIT.TDM08
#define TAUD2TDM09 TAUD2.TDM.BIT.TDM09
#define TAUD2TDM10 TAUD2.TDM.BIT.TDM10
#define TAUD2TDM11 TAUD2.TDM.BIT.TDM11
#define TAUD2TDM12 TAUD2.TDM.BIT.TDM12
#define TAUD2TDM13 TAUD2.TDM.BIT.TDM13
#define TAUD2TDM14 TAUD2.TDM.BIT.TDM14
#define TAUD2TDM15 TAUD2.TDM.BIT.TDM15
#define TAUD2TRE TAUD2.TRE.UINT16
#define TAUD2TRE00 TAUD2.TRE.BIT.TRE00
#define TAUD2TRE01 TAUD2.TRE.BIT.TRE01
#define TAUD2TRE02 TAUD2.TRE.BIT.TRE02
#define TAUD2TRE03 TAUD2.TRE.BIT.TRE03
#define TAUD2TRE04 TAUD2.TRE.BIT.TRE04
#define TAUD2TRE05 TAUD2.TRE.BIT.TRE05
#define TAUD2TRE06 TAUD2.TRE.BIT.TRE06
#define TAUD2TRE07 TAUD2.TRE.BIT.TRE07
#define TAUD2TRE08 TAUD2.TRE.BIT.TRE08
#define TAUD2TRE09 TAUD2.TRE.BIT.TRE09
#define TAUD2TRE10 TAUD2.TRE.BIT.TRE10
#define TAUD2TRE11 TAUD2.TRE.BIT.TRE11
#define TAUD2TRE12 TAUD2.TRE.BIT.TRE12
#define TAUD2TRE13 TAUD2.TRE.BIT.TRE13
#define TAUD2TRE14 TAUD2.TRE.BIT.TRE14
#define TAUD2TRE15 TAUD2.TRE.BIT.TRE15
#define TAUD2TRC TAUD2.TRC.UINT16
#define TAUD2TRC00 TAUD2.TRC.BIT.TRC00
#define TAUD2TRC01 TAUD2.TRC.BIT.TRC01
#define TAUD2TRC02 TAUD2.TRC.BIT.TRC02
#define TAUD2TRC03 TAUD2.TRC.BIT.TRC03
#define TAUD2TRC04 TAUD2.TRC.BIT.TRC04
#define TAUD2TRC05 TAUD2.TRC.BIT.TRC05
#define TAUD2TRC06 TAUD2.TRC.BIT.TRC06
#define TAUD2TRC07 TAUD2.TRC.BIT.TRC07
#define TAUD2TRC08 TAUD2.TRC.BIT.TRC08
#define TAUD2TRC09 TAUD2.TRC.BIT.TRC09
#define TAUD2TRC10 TAUD2.TRC.BIT.TRC10
#define TAUD2TRC11 TAUD2.TRC.BIT.TRC11
#define TAUD2TRC12 TAUD2.TRC.BIT.TRC12
#define TAUD2TRC13 TAUD2.TRC.BIT.TRC13
#define TAUD2TRC14 TAUD2.TRC.BIT.TRC14
#define TAUD2TRC15 TAUD2.TRC.BIT.TRC15
#define TAUD2RDE TAUD2.RDE.UINT16
#define TAUD2RDE00 TAUD2.RDE.BIT.RDE00
#define TAUD2RDE01 TAUD2.RDE.BIT.RDE01
#define TAUD2RDE02 TAUD2.RDE.BIT.RDE02
#define TAUD2RDE03 TAUD2.RDE.BIT.RDE03
#define TAUD2RDE04 TAUD2.RDE.BIT.RDE04
#define TAUD2RDE05 TAUD2.RDE.BIT.RDE05
#define TAUD2RDE06 TAUD2.RDE.BIT.RDE06
#define TAUD2RDE07 TAUD2.RDE.BIT.RDE07
#define TAUD2RDE08 TAUD2.RDE.BIT.RDE08
#define TAUD2RDE09 TAUD2.RDE.BIT.RDE09
#define TAUD2RDE10 TAUD2.RDE.BIT.RDE10
#define TAUD2RDE11 TAUD2.RDE.BIT.RDE11
#define TAUD2RDE12 TAUD2.RDE.BIT.RDE12
#define TAUD2RDE13 TAUD2.RDE.BIT.RDE13
#define TAUD2RDE14 TAUD2.RDE.BIT.RDE14
#define TAUD2RDE15 TAUD2.RDE.BIT.RDE15
#define TAUD2RDM TAUD2.RDM.UINT16
#define TAUD2RDM00 TAUD2.RDM.BIT.RDM00
#define TAUD2RDM01 TAUD2.RDM.BIT.RDM01
#define TAUD2RDM02 TAUD2.RDM.BIT.RDM02
#define TAUD2RDM03 TAUD2.RDM.BIT.RDM03
#define TAUD2RDM04 TAUD2.RDM.BIT.RDM04
#define TAUD2RDM05 TAUD2.RDM.BIT.RDM05
#define TAUD2RDM06 TAUD2.RDM.BIT.RDM06
#define TAUD2RDM07 TAUD2.RDM.BIT.RDM07
#define TAUD2RDM08 TAUD2.RDM.BIT.RDM08
#define TAUD2RDM09 TAUD2.RDM.BIT.RDM09
#define TAUD2RDM10 TAUD2.RDM.BIT.RDM10
#define TAUD2RDM11 TAUD2.RDM.BIT.RDM11
#define TAUD2RDM12 TAUD2.RDM.BIT.RDM12
#define TAUD2RDM13 TAUD2.RDM.BIT.RDM13
#define TAUD2RDM14 TAUD2.RDM.BIT.RDM14
#define TAUD2RDM15 TAUD2.RDM.BIT.RDM15
#define TAUD2RDS TAUD2.RDS.UINT16
#define TAUD2RDS00 TAUD2.RDS.BIT.RDS00
#define TAUD2RDS01 TAUD2.RDS.BIT.RDS01
#define TAUD2RDS02 TAUD2.RDS.BIT.RDS02
#define TAUD2RDS03 TAUD2.RDS.BIT.RDS03
#define TAUD2RDS04 TAUD2.RDS.BIT.RDS04
#define TAUD2RDS05 TAUD2.RDS.BIT.RDS05
#define TAUD2RDS06 TAUD2.RDS.BIT.RDS06
#define TAUD2RDS07 TAUD2.RDS.BIT.RDS07
#define TAUD2RDS08 TAUD2.RDS.BIT.RDS08
#define TAUD2RDS09 TAUD2.RDS.BIT.RDS09
#define TAUD2RDS010 TAUD2.RDS.BIT.RDS010
#define TAUD2RDS011 TAUD2.RDS.BIT.RDS011
#define TAUD2RDS012 TAUD2.RDS.BIT.RDS012
#define TAUD2RDS013 TAUD2.RDS.BIT.RDS013
#define TAUD2RDS014 TAUD2.RDS.BIT.RDS014
#define TAUD2RDS015 TAUD2.RDS.BIT.RDS015
#define TAUD2RDC TAUD2.RDC.UINT16
#define TAUD2RDC00 TAUD2.RDC.BIT.RDC00
#define TAUD2RDC01 TAUD2.RDC.BIT.RDC01
#define TAUD2RDC02 TAUD2.RDC.BIT.RDC02
#define TAUD2RDC03 TAUD2.RDC.BIT.RDC03
#define TAUD2RDC04 TAUD2.RDC.BIT.RDC04
#define TAUD2RDC05 TAUD2.RDC.BIT.RDC05
#define TAUD2RDC06 TAUD2.RDC.BIT.RDC06
#define TAUD2RDC07 TAUD2.RDC.BIT.RDC07
#define TAUD2RDC08 TAUD2.RDC.BIT.RDC08
#define TAUD2RDC09 TAUD2.RDC.BIT.RDC09
#define TAUD2RDC10 TAUD2.RDC.BIT.RDC10
#define TAUD2RDC11 TAUD2.RDC.BIT.RDC11
#define TAUD2RDC12 TAUD2.RDC.BIT.RDC12
#define TAUD2RDC13 TAUD2.RDC.BIT.RDC13
#define TAUD2RDC14 TAUD2.RDC.BIT.RDC14
#define TAUD2RDC15 TAUD2.RDC.BIT.RDC15

#endif
