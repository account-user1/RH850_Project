#ifndef __DR7F701373_ECM0_HEADER__
#define __DR7F701373_ECM0_HEADER__



/**********************************************************************************************************************
 Module File Name  : <Module>_RegDefns.h
 Module Description: Generated Register Definitions of Renesas Peripherals
 Project           : CBD
 Author            : Lucas Wendling
**********************************************************************************************************************
 Version Control:
 %version:          1 %
 %derived_by:       czgng4 %
----------------------------------------------------------------------------------------------------------------------
 Date      Rev      Author         Change Description
 -------   -------  --------  ----------------------------------------------------------------------------------------
 07/12/17  1        LWW       Header file generated from Renesas tool based on input files contained in tools directory
*********************************************************************************************************************/


#include "Std_Types.h"

#ifndef _GHS_PRAGMA_IO_TYPEDEF_
#define _GHS_PRAGMA_IO_TYPEDEF_
#define PRAGMA(x) _Pragma(#x)
#define __READ volatile const
#define __WRITE volatile
#define __READ_WRITE volatile
#define __IOREG(reg, addr, attrib, type) PRAGMA(ghs io reg addr) \
extern attrib type reg;
#endif

#define  L 0
#define  H 1
#define LL 0
#define LH 1
#define HL 2
#define HH 3


/* ------------------------------------------------------------------ */
/* BIT ACCESS STRUCTURES                                              */
/* ------------------------------------------------------------------ */
typedef struct
{
    uint32 _ECMSL0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ECM0EPCFGBits_t;

typedef struct
{
    uint32 _ECMMIE000 : 1;
    uint32 _ECMMIE001 : 1;
    uint32 _ECMMIE002 : 1;
    uint32 _ECMMIE003 : 1;
    uint32 _ECMMIE004 : 1;
    uint32 _ECMMIE005 : 1;
    uint32 _ECMMIE006 : 1;
    uint32 _ECMMIE007 : 1;
    uint32 _ECMMIE008 : 1;
    uint32 _ECMMIE009 : 1;
    uint32 _ECMMIE010 : 1;
    uint32 _ECMMIE011 : 1;
    uint32 _ECMMIE012 : 1;
    uint32 _ECMMIE013 : 1;
    uint32 _ECMMIE014 : 1;
    uint32 _ECMMIE015 : 1;
    uint32 _ECMMIE016 : 1;
    uint32 _ECMMIE017 : 1;
    uint32 _ECMMIE018 : 1;
    uint32 _ECMMIE019 : 1;
    uint32 _ECMMIE020 : 1;
    uint32 _ECMMIE021 : 1;
    uint32 _ECMMIE022 : 1;
    uint32 _ECMMIE023 : 1;
    uint32 _ECMMIE024 : 1;
    uint32 _ECMMIE025 : 1;
    uint32 _ECMMIE026 : 1;
    uint32 _ECMMIE027 : 1;
    uint32 _ECMMIE028 : 1;
    uint32 _ECMMIE029 : 1;
    uint32 _ECMMIE030 : 1;
    uint32 _ECMMIE031 : 1;
} ECM0MICFG0Bits_t;

typedef struct
{
    uint32 _ECMMIE100 : 1;
    uint32 _ECMMIE101 : 1;
    uint32 _ECMMIE102 : 1;
    uint32 _ECMMIE103 : 1;
    uint32 _ECMMIE104 : 1;
    uint32 _ECMMIE105 : 1;
    uint32 _ECMMIE106 : 1;
    uint32 _ECMMIE107 : 1;
    uint32 _ECMMIE108 : 1;
    uint32 _ECMMIE109 : 1;
    uint32 _ECMMIE110 : 1;
    uint32 _ECMMIE111 : 1;
    uint32 _ECMMIE112 : 1;
    uint32 _ECMMIE113 : 1;
    uint32 _ECMMIE114 : 1;
    uint32 _ECMMIE115 : 1;
    uint32 _ECMMIE116 : 1;
    uint32 _ECMMIE117 : 1;
    uint32 _ECMMIE118 : 1;
    uint32 _ECMMIE119 : 1;
    uint32 _ECMMIE120 : 1;
    uint32 _ECMMIE121 : 1;
    uint32 _ECMMIE122 : 1;
    uint32 _ECMMIE123 : 1;
    uint32 _ECMMIE124 : 1;
    uint32 _ECMMIE125 : 1;
    uint32 _ECMMIE126 : 1;
    uint32 _ECMMIE127 : 1;
    uint32 _ECMMIE128 : 1;
    uint32 _ECMMIE129 : 1;
    uint32 _ECMMIE130 : 1;
    uint32 _ECMMIE131 : 1;
} ECM0MICFG1Bits_t;

typedef struct
{
    uint32 _ECMMIE200 : 1;
    uint32 _ECMMIE201 : 1;
    uint32 _ECMMIE202 : 1;
    uint32 _ECMMIE203 : 1;
    uint32 _ECMMIE204 : 1;
    uint32 _ECMMIE205 : 1;
    uint32 _ECMMIE206 : 1;
    uint32 _ECMMIE207 : 1;
    uint32 _ECMMIE208 : 1;
    uint32 _ECMMIE209 : 1;
    uint32 _ECMMIE210 : 1;
    uint32 _ECMMIE211 : 1;
    uint32 _ECMMIE212 : 1;
    uint32 _ECMMIE213 : 1;
    uint32 _ECMMIE214 : 1;
    uint32 _ECMMIE215 : 1;
    uint32 _ECMMIE216 : 1;
    uint32 _ECMMIE217 : 1;
    uint32 _ECMMIE218 : 1;
    uint32 _ECMMIE219 : 1;
    uint32 _ECMMIE220 : 1;
    uint32 _ECMMIE221 : 1;
    uint32 _ECMMIE222 : 1;
    uint32 _ECMMIE223 : 1;
    uint32 _ECMMIE224 : 1;
    uint32 _ECMMIE225 : 1;
    uint32 _ECMMIE226 : 1;
    uint32 _ECMMIE227 : 1;
    uint32 _ECMMIE228 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ECM0MICFG2Bits_t;

typedef struct
{
    uint32 _ECMNMIE000 : 1;
    uint32 _ECMNMIE001 : 1;
    uint32 _ECMNMIE002 : 1;
    uint32 _ECMNMIE003 : 1;
    uint32 _ECMNMIE004 : 1;
    uint32 _ECMNMIE005 : 1;
    uint32 _ECMNMIE006 : 1;
    uint32 _ECMNMIE007 : 1;
    uint32 _ECMNMIE008 : 1;
    uint32 _ECMNMIE009 : 1;
    uint32 _ECMNMIE010 : 1;
    uint32 _ECMNMIE011 : 1;
    uint32 _ECMNMIE012 : 1;
    uint32 _ECMNMIE013 : 1;
    uint32 _ECMNMIE014 : 1;
    uint32 _ECMNMIE015 : 1;
    uint32 _ECMNMIE016 : 1;
    uint32 _ECMNMIE017 : 1;
    uint32 _ECMNMIE018 : 1;
    uint32 _ECMNMIE019 : 1;
    uint32 _ECMNMIE020 : 1;
    uint32 _ECMNMIE021 : 1;
    uint32 _ECMNMIE022 : 1;
    uint32 _ECMNMIE023 : 1;
    uint32 _ECMNMIE024 : 1;
    uint32 _ECMNMIE025 : 1;
    uint32 _ECMNMIE026 : 1;
    uint32 _ECMNMIE027 : 1;
    uint32 _ECMNMIE028 : 1;
    uint32 _ECMNMIE029 : 1;
    uint32 _ECMNMIE030 : 1;
    uint32 _ECMNMIE031 : 1;
} ECM0NMICFG0Bits_t;

typedef struct
{
    uint32 _ECMNMIE100 : 1;
    uint32 _ECMNMIE101 : 1;
    uint32 _ECMNMIE102 : 1;
    uint32 _ECMNMIE103 : 1;
    uint32 _ECMNMIE104 : 1;
    uint32 _ECMNMIE105 : 1;
    uint32 _ECMNMIE106 : 1;
    uint32 _ECMNMIE107 : 1;
    uint32 _ECMNMIE108 : 1;
    uint32 _ECMNMIE109 : 1;
    uint32 _ECMNMIE110 : 1;
    uint32 _ECMNMIE111 : 1;
    uint32 _ECMNMIE112 : 1;
    uint32 _ECMNMIE113 : 1;
    uint32 _ECMNMIE114 : 1;
    uint32 _ECMNMIE115 : 1;
    uint32 _ECMNMIE116 : 1;
    uint32 _ECMNMIE117 : 1;
    uint32 _ECMNMIE118 : 1;
    uint32 _ECMNMIE119 : 1;
    uint32 _ECMNMIE120 : 1;
    uint32 _ECMNMIE121 : 1;
    uint32 _ECMNMIE122 : 1;
    uint32 _ECMNMIE123 : 1;
    uint32 _ECMNMIE124 : 1;
    uint32 _ECMNMIE125 : 1;
    uint32 _ECMNMIE126 : 1;
    uint32 _ECMNMIE127 : 1;
    uint32 _ECMNMIE128 : 1;
    uint32 _ECMNMIE129 : 1;
    uint32 _ECMNMIE130 : 1;
    uint32 _ECMNMIE131 : 1;
} ECM0NMICFG1Bits_t;

typedef struct
{
    uint32 _ECMNMIE200 : 1;
    uint32 _ECMNMIE201 : 1;
    uint32 _ECMNMIE202 : 1;
    uint32 _ECMNMIE203 : 1;
    uint32 _ECMNMIE204 : 1;
    uint32 _ECMNMIE205 : 1;
    uint32 _ECMNMIE206 : 1;
    uint32 _ECMNMIE207 : 1;
    uint32 _ECMNMIE208 : 1;
    uint32 _ECMNMIE209 : 1;
    uint32 _ECMNMIE210 : 1;
    uint32 _ECMNMIE211 : 1;
    uint32 _ECMNMIE212 : 1;
    uint32 _ECMNMIE213 : 1;
    uint32 _ECMNMIE214 : 1;
    uint32 _ECMNMIE215 : 1;
    uint32 _ECMNMIE216 : 1;
    uint32 _ECMNMIE217 : 1;
    uint32 _ECMNMIE218 : 1;
    uint32 _ECMNMIE219 : 1;
    uint32 _ECMNMIE220 : 1;
    uint32 _ECMNMIE221 : 1;
    uint32 _ECMNMIE222 : 1;
    uint32 _ECMNMIE223 : 1;
    uint32 _ECMNMIE224 : 1;
    uint32 _ECMNMIE225 : 1;
    uint32 _ECMNMIE226 : 1;
    uint32 _ECMNMIE227 : 1;
    uint32 _ECMNMIE228 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ECM0NMICFG2Bits_t;

typedef struct
{
    uint32 _ECMIRE000 : 1;
    uint32 _ECMIRE001 : 1;
    uint32 _ECMIRE002 : 1;
    uint32 _ECMIRE003 : 1;
    uint32 _ECMIRE004 : 1;
    uint32 _ECMIRE005 : 1;
    uint32 _ECMIRE006 : 1;
    uint32 _ECMIRE007 : 1;
    uint32 _ECMIRE008 : 1;
    uint32 _ECMIRE009 : 1;
    uint32 _ECMIRE010 : 1;
    uint32 _ECMIRE011 : 1;
    uint32 _ECMIRE012 : 1;
    uint32 _ECMIRE013 : 1;
    uint32 _ECMIRE014 : 1;
    uint32 _ECMIRE015 : 1;
    uint32 _ECMIRE016 : 1;
    uint32 _ECMIRE017 : 1;
    uint32 _ECMIRE018 : 1;
    uint32 _ECMIRE019 : 1;
    uint32 _ECMIRE020 : 1;
    uint32 _ECMIRE021 : 1;
    uint32 _ECMIRE022 : 1;
    uint32 _ECMIRE023 : 1;
    uint32 _ECMIRE024 : 1;
    uint32 _ECMIRE025 : 1;
    uint32 _ECMIRE026 : 1;
    uint32 _ECMIRE027 : 1;
    uint32 _ECMIRE028 : 1;
    uint32 _ECMIRE029 : 1;
    uint32 _ECMIRE030 : 1;
    uint32 _ECMIRE031 : 1;
} ECM0IRCFG0Bits_t;

typedef struct
{
    uint32 _ECMIRE100 : 1;
    uint32 _ECMIRE101 : 1;
    uint32 _ECMIRE102 : 1;
    uint32 _ECMIRE103 : 1;
    uint32 _ECMIRE104 : 1;
    uint32 _ECMIRE105 : 1;
    uint32 _ECMIRE106 : 1;
    uint32 _ECMIRE107 : 1;
    uint32 _ECMIRE108 : 1;
    uint32 _ECMIRE109 : 1;
    uint32 _ECMIRE110 : 1;
    uint32 _ECMIRE111 : 1;
    uint32 _ECMIRE112 : 1;
    uint32 _ECMIRE113 : 1;
    uint32 _ECMIRE114 : 1;
    uint32 _ECMIRE115 : 1;
    uint32 _ECMIRE116 : 1;
    uint32 _ECMIRE117 : 1;
    uint32 _ECMIRE118 : 1;
    uint32 _ECMIRE119 : 1;
    uint32 _ECMIRE120 : 1;
    uint32 _ECMIRE121 : 1;
    uint32 _ECMIRE122 : 1;
    uint32 _ECMIRE123 : 1;
    uint32 _ECMIRE124 : 1;
    uint32 _ECMIRE125 : 1;
    uint32 _ECMIRE126 : 1;
    uint32 _ECMIRE127 : 1;
    uint32 _ECMIRE128 : 1;
    uint32 _ECMIRE129 : 1;
    uint32 _ECMIRE130 : 1;
    uint32 _ECMIRE131 : 1;
} ECM0IRCFG1Bits_t;

typedef struct
{
    uint32 _ECMIRE200 : 1;
    uint32 _ECMIRE201 : 1;
    uint32 _ECMIRE202 : 1;
    uint32 _ECMIRE203 : 1;
    uint32 _ECMIRE204 : 1;
    uint32 _ECMIRE205 : 1;
    uint32 _ECMIRE206 : 1;
    uint32 _ECMIRE207 : 1;
    uint32 _ECMIRE208 : 1;
    uint32 _ECMIRE209 : 1;
    uint32 _ECMIRE210 : 1;
    uint32 _ECMIRE211 : 1;
    uint32 _ECMIRE212 : 1;
    uint32 _ECMIRE213 : 1;
    uint32 _ECMIRE214 : 1;
    uint32 _ECMIRE215 : 1;
    uint32 _ECMIRE216 : 1;
    uint32 _ECMIRE217 : 1;
    uint32 _ECMIRE218 : 1;
    uint32 _ECMIRE219 : 1;
    uint32 _ECMIRE220 : 1;
    uint32 _ECMIRE221 : 1;
    uint32 _ECMIRE222 : 1;
    uint32 _ECMIRE223 : 1;
    uint32 _ECMIRE224 : 1;
    uint32 _ECMIRE225 : 1;
    uint32 _ECMIRE226 : 1;
    uint32 _ECMIRE227 : 1;
    uint32 _ECMIRE228 : 1;
    uint32 _ECMIRE229 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ECM0IRCFG2Bits_t;

typedef struct
{
    uint32 _ECMEMK000 : 1;
    uint32 _ECMEMK001 : 1;
    uint32 _ECMEMK002 : 1;
    uint32 _ECMEMK003 : 1;
    uint32 _ECMEMK004 : 1;
    uint32 _ECMEMK005 : 1;
    uint32 _ECMEMK006 : 1;
    uint32 _ECMEMK007 : 1;
    uint32 _ECMEMK008 : 1;
    uint32 _ECMEMK009 : 1;
    uint32 _ECMEMK010 : 1;
    uint32 _ECMEMK011 : 1;
    uint32 _ECMEMK012 : 1;
    uint32 _ECMEMK013 : 1;
    uint32 _ECMEMK014 : 1;
    uint32 _ECMEMK015 : 1;
    uint32 _ECMEMK016 : 1;
    uint32 _ECMEMK017 : 1;
    uint32 _ECMEMK018 : 1;
    uint32 _ECMEMK019 : 1;
    uint32 _ECMEMK020 : 1;
    uint32 _ECMEMK021 : 1;
    uint32 _ECMEMK022 : 1;
    uint32 _ECMEMK023 : 1;
    uint32 _ECMEMK024 : 1;
    uint32 _ECMEMK025 : 1;
    uint32 _ECMEMK026 : 1;
    uint32 _ECMEMK027 : 1;
    uint32 _ECMEMK028 : 1;
    uint32 _ECMEMK029 : 1;
    uint32 _ECMEMK030 : 1;
    uint32 _ECMEMK031 : 1;
} ECM0EMK0Bits_t;

typedef struct
{
    uint32 _ECMEMK100 : 1;
    uint32 _ECMEMK101 : 1;
    uint32 _ECMEMK102 : 1;
    uint32 _ECMEMK103 : 1;
    uint32 _ECMEMK104 : 1;
    uint32 _ECMEMK105 : 1;
    uint32 _ECMEMK106 : 1;
    uint32 _ECMEMK107 : 1;
    uint32 _ECMEMK108 : 1;
    uint32 _ECMEMK109 : 1;
    uint32 _ECMEMK110 : 1;
    uint32 _ECMEMK111 : 1;
    uint32 _ECMEMK112 : 1;
    uint32 _ECMEMK113 : 1;
    uint32 _ECMEMK114 : 1;
    uint32 _ECMEMK115 : 1;
    uint32 _ECMEMK116 : 1;
    uint32 _ECMEMK117 : 1;
    uint32 _ECMEMK118 : 1;
    uint32 _ECMEMK119 : 1;
    uint32 _ECMEMK120 : 1;
    uint32 _ECMEMK121 : 1;
    uint32 _ECMEMK122 : 1;
    uint32 _ECMEMK123 : 1;
    uint32 _ECMEMK124 : 1;
    uint32 _ECMEMK125 : 1;
    uint32 _ECMEMK126 : 1;
    uint32 _ECMEMK127 : 1;
    uint32 _ECMEMK128 : 1;
    uint32 _ECMEMK129 : 1;
    uint32 _ECMEMK130 : 1;
    uint32 _ECMEMK131 : 1;
} ECM0EMK1Bits_t;

typedef struct
{
    uint32 _ECMEMK200 : 1;
    uint32 _ECMEMK201 : 1;
    uint32 _ECMEMK202 : 1;
    uint32 _ECMEMK203 : 1;
    uint32 _ECMEMK204 : 1;
    uint32 _ECMEMK205 : 1;
    uint32 _ECMEMK206 : 1;
    uint32 _ECMEMK207 : 1;
    uint32 _ECMEMK208 : 1;
    uint32 _ECMEMK209 : 1;
    uint32 _ECMEMK210 : 1;
    uint32 _ECMEMK211 : 1;
    uint32 _ECMEMK212 : 1;
    uint32 _ECMEMK213 : 1;
    uint32 _ECMEMK214 : 1;
    uint32 _ECMEMK215 : 1;
    uint32 _ECMEMK216 : 1;
    uint32 _ECMEMK217 : 1;
    uint32 _ECMEMK218 : 1;
    uint32 _ECMEMK219 : 1;
    uint32 _ECMEMK220 : 1;
    uint32 _ECMEMK221 : 1;
    uint32 _ECMEMK222 : 1;
    uint32 _ECMEMK223 : 1;
    uint32 _ECMEMK224 : 1;
    uint32 _ECMEMK225 : 1;
    uint32 _ECMEMK226 : 1;
    uint32 _ECMEMK227 : 1;
    uint32 _ECMEMK228 : 1;
    uint32 _ECMEMK229 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ECM0EMK2Bits_t;

typedef struct
{
    uint32 _ECMCLSSE000 : 1;
    uint32 _ECMCLSSE001 : 1;
    uint32 _ECMCLSSE002 : 1;
    uint32 _ECMCLSSE003 : 1;
    uint32 _ECMCLSSE004 : 1;
    uint32 _ECMCLSSE005 : 1;
    uint32 _ECMCLSSE006 : 1;
    uint32 _ECMCLSSE007 : 1;
    uint32 _ECMCLSSE008 : 1;
    uint32 _ECMCLSSE009 : 1;
    uint32 _ECMCLSSE010 : 1;
    uint32 _ECMCLSSE011 : 1;
    uint32 _ECMCLSSE012 : 1;
    uint32 _ECMCLSSE013 : 1;
    uint32 _ECMCLSSE014 : 1;
    uint32 _ECMCLSSE015 : 1;
    uint32 _ECMCLSSE016 : 1;
    uint32 _ECMCLSSE017 : 1;
    uint32 _ECMCLSSE018 : 1;
    uint32 _ECMCLSSE019 : 1;
    uint32 _ECMCLSSE020 : 1;
    uint32 _ECMCLSSE021 : 1;
    uint32 _ECMCLSSE022 : 1;
    uint32 _ECMCLSSE023 : 1;
    uint32 _ECMCLSSE024 : 1;
    uint32 _ECMCLSSE025 : 1;
    uint32 _ECMCLSSE026 : 1;
    uint32 _ECMCLSSE027 : 1;
    uint32 _ECMCLSSE028 : 1;
    uint32 _ECMCLSSE029 : 1;
    uint32 _ECMCLSSE030 : 1;
    uint32 _ECMCLSSE031 : 1;
} ECM0ESSTC0Bits_t;

typedef struct
{
    uint32 _ECMCLSSE100 : 1;
    uint32 _ECMCLSSE101 : 1;
    uint32 _ECMCLSSE102 : 1;
    uint32 _ECMCLSSE103 : 1;
    uint32 _ECMCLSSE104 : 1;
    uint32 _ECMCLSSE105 : 1;
    uint32 _ECMCLSSE106 : 1;
    uint32 _ECMCLSSE107 : 1;
    uint32 _ECMCLSSE108 : 1;
    uint32 _ECMCLSSE109 : 1;
    uint32 _ECMCLSSE110 : 1;
    uint32 _ECMCLSSE111 : 1;
    uint32 _ECMCLSSE112 : 1;
    uint32 _ECMCLSSE113 : 1;
    uint32 _ECMCLSSE114 : 1;
    uint32 _ECMCLSSE115 : 1;
    uint32 _ECMCLSSE116 : 1;
    uint32 _ECMCLSSE117 : 1;
    uint32 _ECMCLSSE118 : 1;
    uint32 _ECMCLSSE119 : 1;
    uint32 _ECMCLSSE120 : 1;
    uint32 _ECMCLSSE121 : 1;
    uint32 _ECMCLSSE122 : 1;
    uint32 _ECMCLSSE123 : 1;
    uint32 _ECMCLSSE124 : 1;
    uint32 _ECMCLSSE125 : 1;
    uint32 _ECMCLSSE126 : 1;
    uint32 _ECMCLSSE127 : 1;
    uint32 _ECMCLSSE128 : 1;
    uint32 _ECMCLSSE129 : 1;
    uint32 _ECMCLSSE130 : 1;
    uint32 _ECMCLSSE131 : 1;
} ECM0ESSTC1Bits_t;

typedef struct
{
    uint32 _ECMCLSSE200 : 1;
    uint32 _ECMCLSSE201 : 1;
    uint32 _ECMCLSSE202 : 1;
    uint32 _ECMCLSSE203 : 1;
    uint32 _ECMCLSSE204 : 1;
    uint32 _ECMCLSSE205 : 1;
    uint32 _ECMCLSSE206 : 1;
    uint32 _ECMCLSSE207 : 1;
    uint32 _ECMCLSSE208 : 1;
    uint32 _ECMCLSSE209 : 1;
    uint32 _ECMCLSSE210 : 1;
    uint32 _ECMCLSSE211 : 1;
    uint32 _ECMCLSSE212 : 1;
    uint32 _ECMCLSSE213 : 1;
    uint32 _ECMCLSSE214 : 1;
    uint32 _ECMCLSSE215 : 1;
    uint32 _ECMCLSSE216 : 1;
    uint32 _ECMCLSSE217 : 1;
    uint32 _ECMCLSSE218 : 1;
    uint32 _ECMCLSSE219 : 1;
    uint32 _ECMCLSSE220 : 1;
    uint32 _ECMCLSSE221 : 1;
    uint32 _ECMCLSSE222 : 1;
    uint32 _ECMCLSSE223 : 1;
    uint32 _ECMCLSSE224 : 1;
    uint32 _ECMCLSSE225 : 1;
    uint32 _ECMCLSSE226 : 1;
    uint32 _ECMCLSSE227 : 1;
    uint32 _ECMCLSSE228 : 1;
    uint32 _ECMCLSSE229 : 1;
    uint32 _ECMCLSSE230 : 1;
    uint32 padding31 : 1;
} ECM0ESSTC2Bits_t;

typedef struct
{
    uint32 _ECMREG1 : 8;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ECM0PCMD1Bits_t;

typedef struct
{
    const uint8 _ECMPRERR : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ECM0PSBits_t;

typedef struct
{
    uint32 _ECMPE000 : 1;
    uint32 _ECMPE001 : 1;
    uint32 _ECMPE002 : 1;
    uint32 _ECMPE003 : 1;
    uint32 _ECMPE004 : 1;
    uint32 _ECMPE005 : 1;
    uint32 _ECMPE006 : 1;
    uint32 _ECMPE007 : 1;
    uint32 _ECMPE008 : 1;
    uint32 _ECMPE009 : 1;
    uint32 _ECMPE010 : 1;
    uint32 _ECMPE011 : 1;
    uint32 _ECMPE012 : 1;
    uint32 _ECMPE013 : 1;
    uint32 _ECMPE014 : 1;
    uint32 _ECMPE015 : 1;
    uint32 _ECMPE016 : 1;
    uint32 _ECMPE017 : 1;
    uint32 _ECMPE018 : 1;
    uint32 _ECMPE019 : 1;
    uint32 _ECMPE020 : 1;
    uint32 _ECMPE021 : 1;
    uint32 _ECMPE022 : 1;
    uint32 _ECMPE023 : 1;
    uint32 _ECMPE024 : 1;
    uint32 _ECMPE025 : 1;
    uint32 _ECMPE026 : 1;
    uint32 _ECMPE027 : 1;
    uint32 _ECMPE028 : 1;
    uint32 _ECMPE029 : 1;
    uint32 _ECMPE030 : 1;
    uint32 _ECMPE031 : 1;
} ECM0PE0Bits_t;

typedef struct
{
    uint32 _ECMPE100 : 1;
    uint32 _ECMPE101 : 1;
    uint32 _ECMPE102 : 1;
    uint32 _ECMPE103 : 1;
    uint32 _ECMPE104 : 1;
    uint32 _ECMPE105 : 1;
    uint32 _ECMPE106 : 1;
    uint32 _ECMPE107 : 1;
    uint32 _ECMPE108 : 1;
    uint32 _ECMPE109 : 1;
    uint32 _ECMPE110 : 1;
    uint32 _ECMPE111 : 1;
    uint32 _ECMPE112 : 1;
    uint32 _ECMPE113 : 1;
    uint32 _ECMPE114 : 1;
    uint32 _ECMPE115 : 1;
    uint32 _ECMPE116 : 1;
    uint32 _ECMPE117 : 1;
    uint32 _ECMPE118 : 1;
    uint32 _ECMPE119 : 1;
    uint32 _ECMPE120 : 1;
    uint32 _ECMPE121 : 1;
    uint32 _ECMPE122 : 1;
    uint32 _ECMPE123 : 1;
    uint32 _ECMPE124 : 1;
    uint32 _ECMPE125 : 1;
    uint32 _ECMPE126 : 1;
    uint32 _ECMPE127 : 1;
    uint32 _ECMPE128 : 1;
    uint32 _ECMPE129 : 1;
    uint32 _ECMPE130 : 1;
    uint32 _ECMPE131 : 1;
} ECM0PE1Bits_t;

typedef struct
{
    uint32 _ECMPE200 : 1;
    uint32 _ECMPE201 : 1;
    uint32 _ECMPE202 : 1;
    uint32 _ECMPE203 : 1;
    uint32 _ECMPE204 : 1;
    uint32 _ECMPE205 : 1;
    uint32 _ECMPE206 : 1;
    uint32 _ECMPE207 : 1;
    uint32 _ECMPE208 : 1;
    uint32 _ECMPE209 : 1;
    uint32 _ECMPE210 : 1;
    uint32 _ECMPE211 : 1;
    uint32 _ECMPE212 : 1;
    uint32 _ECMPE213 : 1;
    uint32 _ECMPE214 : 1;
    uint32 _ECMPE215 : 1;
    uint32 _ECMPE216 : 1;
    uint32 _ECMPE217 : 1;
    uint32 _ECMPE218 : 1;
    uint32 _ECMPE219 : 1;
    uint32 _ECMPE220 : 1;
    uint32 _ECMPE221 : 1;
    uint32 _ECMPE222 : 1;
    uint32 _ECMPE223 : 1;
    uint32 _ECMPE224 : 1;
    uint32 _ECMPE225 : 1;
    uint32 _ECMPE226 : 1;
    uint32 padding27 : 1;
    uint32 _ECMPE228 : 1;
    uint32 _ECMPE229 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ECM0PE2Bits_t;

typedef struct
{
    uint32 _DTMSTA : 1;
    uint32 _DTMSTP : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    const uint32 _DTMSTACNTCLK : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ECM0DTMCTLBits_t;

typedef struct
{
    const uint16 _ECMDTMR : 16;
} ECM0DTMRBits_t;

typedef struct
{
    uint32 _ECMDTMCMP : 16;
    const uint32 _CMPW : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ECM0DTMCMPBits_t;

typedef struct
{
    uint32 _ECMTE000 : 1;
    uint32 _ECMTE001 : 1;
    uint32 _ECMTE002 : 1;
    uint32 _ECMTE003 : 1;
    uint32 _ECMTE004 : 1;
    uint32 _ECMTE005 : 1;
    uint32 _ECMTE006 : 1;
    uint32 _ECMTE007 : 1;
    uint32 _ECMTE008 : 1;
    uint32 _ECMTE009 : 1;
    uint32 _ECMTE010 : 1;
    uint32 _ECMTE011 : 1;
    uint32 _ECMTE012 : 1;
    uint32 _ECMTE013 : 1;
    uint32 _ECMTE014 : 1;
    uint32 _ECMTE015 : 1;
    uint32 _ECMTE016 : 1;
    uint32 _ECMTE017 : 1;
    uint32 _ECMTE018 : 1;
    uint32 _ECMTE019 : 1;
    uint32 _ECMTE020 : 1;
    uint32 _ECMTE021 : 1;
    uint32 _ECMTE022 : 1;
    uint32 _ECMTE023 : 1;
    uint32 _ECMTE024 : 1;
    uint32 _ECMTE025 : 1;
    uint32 _ECMTE026 : 1;
    uint32 _ECMTE027 : 1;
    uint32 _ECMTE028 : 1;
    uint32 _ECMTE029 : 1;
    uint32 _ECMTE030 : 1;
    uint32 _ECMTE031 : 1;
} ECM0DTMCFG0Bits_t;

typedef struct
{
    uint32 _ECMTE100 : 1;
    uint32 _ECMTE101 : 1;
    uint32 _ECMTE102 : 1;
    uint32 _ECMTE103 : 1;
    uint32 _ECMTE104 : 1;
    uint32 _ECMTE105 : 1;
    uint32 _ECMTE106 : 1;
    uint32 _ECMTE107 : 1;
    uint32 _ECMTE108 : 1;
    uint32 _ECMTE109 : 1;
    uint32 _ECMTE110 : 1;
    uint32 _ECMTE111 : 1;
    uint32 _ECMTE112 : 1;
    uint32 _ECMTE113 : 1;
    uint32 _ECMTE114 : 1;
    uint32 _ECMTE115 : 1;
    uint32 _ECMTE116 : 1;
    uint32 _ECMTE117 : 1;
    uint32 _ECMTE118 : 1;
    uint32 _ECMTE119 : 1;
    uint32 _ECMTE120 : 1;
    uint32 _ECMTE121 : 1;
    uint32 _ECMTE122 : 1;
    uint32 _ECMTE123 : 1;
    uint32 _ECMTE124 : 1;
    uint32 _ECMTE125 : 1;
    uint32 _ECMTE126 : 1;
    uint32 _ECMTE127 : 1;
    uint32 _ECMTE128 : 1;
    uint32 _ECMTE129 : 1;
    uint32 _ECMTE130 : 1;
    uint32 _ECMTE131 : 1;
} ECM0DTMCFG1Bits_t;

typedef struct
{
    uint32 _ECMTE200 : 1;
    uint32 _ECMTE201 : 1;
    uint32 _ECMTE202 : 1;
    uint32 _ECMTE203 : 1;
    uint32 _ECMTE204 : 1;
    uint32 _ECMTE205 : 1;
    uint32 _ECMTE206 : 1;
    uint32 _ECMTE207 : 1;
    uint32 _ECMTE208 : 1;
    uint32 _ECMTE209 : 1;
    uint32 _ECMTE210 : 1;
    uint32 _ECMTE211 : 1;
    uint32 _ECMTE212 : 1;
    uint32 _ECMTE213 : 1;
    uint32 _ECMTE214 : 1;
    uint32 _ECMTE215 : 1;
    uint32 _ECMTE216 : 1;
    uint32 _ECMTE217 : 1;
    uint32 _ECMTE218 : 1;
    uint32 _ECMTE219 : 1;
    uint32 _ECMTE220 : 1;
    uint32 _ECMTE221 : 1;
    uint32 _ECMTE222 : 1;
    uint32 _ECMTE223 : 1;
    uint32 _ECMTE224 : 1;
    uint32 _ECMTE225 : 1;
    uint32 _ECMTE226 : 1;
    uint32 _ECMTE227 : 1;
    uint32 _ECMTE228 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ECM0DTMCFG2Bits_t;

typedef struct
{
    uint32 _ECMTE300 : 1;
    uint32 _ECMTE301 : 1;
    uint32 _ECMTE302 : 1;
    uint32 _ECMTE303 : 1;
    uint32 _ECMTE304 : 1;
    uint32 _ECMTE305 : 1;
    uint32 _ECMTE306 : 1;
    uint32 _ECMTE307 : 1;
    uint32 _ECMTE308 : 1;
    uint32 _ECMTE309 : 1;
    uint32 _ECMTE310 : 1;
    uint32 _ECMTE311 : 1;
    uint32 _ECMTE312 : 1;
    uint32 _ECMTE313 : 1;
    uint32 _ECMTE314 : 1;
    uint32 _ECMTE315 : 1;
    uint32 _ECMTE316 : 1;
    uint32 _ECMTE317 : 1;
    uint32 _ECMTE318 : 1;
    uint32 _ECMTE319 : 1;
    uint32 _ECMTE320 : 1;
    uint32 _ECMTE321 : 1;
    uint32 _ECMTE322 : 1;
    uint32 _ECMTE323 : 1;
    uint32 _ECMTE324 : 1;
    uint32 _ECMTE325 : 1;
    uint32 _ECMTE326 : 1;
    uint32 _ECMTE327 : 1;
    uint32 _ECMTE328 : 1;
    uint32 _ECMTE329 : 1;
    uint32 _ECMTE330 : 1;
    uint32 _ECMTE331 : 1;
} ECM0DTMCFG3Bits_t;

typedef struct
{
    uint32 _ECMTE400 : 1;
    uint32 _ECMTE401 : 1;
    uint32 _ECMTE402 : 1;
    uint32 _ECMTE403 : 1;
    uint32 _ECMTE404 : 1;
    uint32 _ECMTE405 : 1;
    uint32 _ECMTE406 : 1;
    uint32 _ECMTE407 : 1;
    uint32 _ECMTE408 : 1;
    uint32 _ECMTE409 : 1;
    uint32 _ECMTE410 : 1;
    uint32 _ECMTE411 : 1;
    uint32 _ECMTE412 : 1;
    uint32 _ECMTE413 : 1;
    uint32 _ECMTE414 : 1;
    uint32 _ECMTE415 : 1;
    uint32 _ECMTE416 : 1;
    uint32 _ECMTE417 : 1;
    uint32 _ECMTE418 : 1;
    uint32 _ECMTE419 : 1;
    uint32 _ECMTE420 : 1;
    uint32 _ECMTE421 : 1;
    uint32 _ECMTE422 : 1;
    uint32 _ECMTE423 : 1;
    uint32 _ECMTE424 : 1;
    uint32 _ECMTE425 : 1;
    uint32 _ECMTE426 : 1;
    uint32 _ECMTE427 : 1;
    uint32 _ECMTE428 : 1;
    uint32 _ECMTE429 : 1;
    uint32 _ECMTE430 : 1;
    uint32 _ECMTE431 : 1;
} ECM0DTMCFG4Bits_t;

typedef struct
{
    uint32 _ECMTE500 : 1;
    uint32 _ECMTE501 : 1;
    uint32 _ECMTE502 : 1;
    uint32 _ECMTE503 : 1;
    uint32 _ECMTE504 : 1;
    uint32 _ECMTE505 : 1;
    uint32 _ECMTE506 : 1;
    uint32 _ECMTE507 : 1;
    uint32 _ECMTE508 : 1;
    uint32 _ECMTE509 : 1;
    uint32 _ECMTE510 : 1;
    uint32 _ECMTE511 : 1;
    uint32 _ECMTE512 : 1;
    uint32 _ECMTE513 : 1;
    uint32 _ECMTE514 : 1;
    uint32 _ECMTE515 : 1;
    uint32 _ECMTE516 : 1;
    uint32 _ECMTE517 : 1;
    uint32 _ECMTE518 : 1;
    uint32 _ECMTE519 : 1;
    uint32 _ECMTE520 : 1;
    uint32 _ECMTE521 : 1;
    uint32 _ECMTE522 : 1;
    uint32 _ECMTE523 : 1;
    uint32 _ECMTE524 : 1;
    uint32 _ECMTE525 : 1;
    uint32 _ECMTE526 : 1;
    uint32 _ECMTE527 : 1;
    uint32 _ECMTE528 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ECM0DTMCFG5Bits_t;

typedef struct
{
    uint32 _ECMEOUTCLRT : 16;
    const uint32 _CMPW : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ECM0EOCCFGBits_t;

typedef struct
{
    uint32 _MSKC : 1;
    uint32 _MSKM : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ECM0PEMBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    ECM0EPCFGBits_t BIT;
} ECM0EPCFG_t;

typedef union
{
    uint32 UINT32;
    ECM0MICFG0Bits_t BIT;
} ECM0MICFG0_t;

typedef union
{
    uint32 UINT32;
    ECM0MICFG1Bits_t BIT;
} ECM0MICFG1_t;

typedef union
{
    uint32 UINT32;
    ECM0MICFG2Bits_t BIT;
} ECM0MICFG2_t;

typedef union
{
    uint32 UINT32;
    ECM0NMICFG0Bits_t BIT;
} ECM0NMICFG0_t;

typedef union
{
    uint32 UINT32;
    ECM0NMICFG1Bits_t BIT;
} ECM0NMICFG1_t;

typedef union
{
    uint32 UINT32;
    ECM0NMICFG2Bits_t BIT;
} ECM0NMICFG2_t;

typedef union
{
    uint32 UINT32;
    ECM0IRCFG0Bits_t BIT;
} ECM0IRCFG0_t;

typedef union
{
    uint32 UINT32;
    ECM0IRCFG1Bits_t BIT;
} ECM0IRCFG1_t;

typedef union
{
    uint32 UINT32;
    ECM0IRCFG2Bits_t BIT;
} ECM0IRCFG2_t;

typedef union
{
    uint32 UINT32;
    ECM0EMK0Bits_t BIT;
} ECM0EMK0_t;

typedef union
{
    uint32 UINT32;
    ECM0EMK1Bits_t BIT;
} ECM0EMK1_t;

typedef union
{
    uint32 UINT32;
    ECM0EMK2Bits_t BIT;
} ECM0EMK2_t;

typedef union
{
    uint32 UINT32;
    ECM0ESSTC0Bits_t BIT;
} ECM0ESSTC0_t;

typedef union
{
    uint32 UINT32;
    ECM0ESSTC1Bits_t BIT;
} ECM0ESSTC1_t;

typedef union
{
    uint32 UINT32;
    ECM0ESSTC2Bits_t BIT;
} ECM0ESSTC2_t;

typedef union
{
    uint32 UINT32;
    ECM0PCMD1Bits_t BIT;
} ECM0PCMD1_t;

typedef union
{
    uint8 UINT8;
    const ECM0PSBits_t BIT;
} ECM0PS_t;

typedef union
{
    uint32 UINT32;
    ECM0PE0Bits_t BIT;
} ECM0PE0_t;

typedef union
{
    uint32 UINT32;
    ECM0PE1Bits_t BIT;
} ECM0PE1_t;

typedef union
{
    uint32 UINT32;
    ECM0PE2Bits_t BIT;
} ECM0PE2_t;

typedef union
{
    uint32 UINT32;
    ECM0DTMCTLBits_t BIT;
} ECM0DTMCTL_t;

typedef union
{
    uint16 UINT16;
    const ECM0DTMRBits_t BIT;
} ECM0DTMR_t;

typedef union
{
    uint32 UINT32;
    ECM0DTMCMPBits_t BIT;
} ECM0DTMCMP_t;

typedef union
{
    uint32 UINT32;
    ECM0DTMCFG0Bits_t BIT;
} ECM0DTMCFG0_t;

typedef union
{
    uint32 UINT32;
    ECM0DTMCFG1Bits_t BIT;
} ECM0DTMCFG1_t;

typedef union
{
    uint32 UINT32;
    ECM0DTMCFG2Bits_t BIT;
} ECM0DTMCFG2_t;

typedef union
{
    uint32 UINT32;
    ECM0DTMCFG3Bits_t BIT;
} ECM0DTMCFG3_t;

typedef union
{
    uint32 UINT32;
    ECM0DTMCFG4Bits_t BIT;
} ECM0DTMCFG4_t;

typedef union
{
    uint32 UINT32;
    ECM0DTMCFG5Bits_t BIT;
} ECM0DTMCFG5_t;

typedef union
{
    uint32 UINT32;
    ECM0EOCCFGBits_t BIT;
} ECM0EOCCFG_t;

typedef union
{
    uint32 UINT32;
    ECM0PEMBits_t BIT;
} ECM0PEM_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ECM0EPCFG_BASE, 0xFFD62000, __READ_WRITE, ECM0EPCFG_t);
__IOREG(ECM0MICFG0_BASE, 0xFFD62004, __READ_WRITE, ECM0MICFG0_t);
__IOREG(ECM0MICFG1_BASE, 0xFFD62008, __READ_WRITE, ECM0MICFG1_t);
__IOREG(ECM0MICFG2_BASE, 0xFFD6200C, __READ_WRITE, ECM0MICFG2_t);
__IOREG(ECM0NMICFG0_BASE, 0xFFD62010, __READ_WRITE, ECM0NMICFG0_t);
__IOREG(ECM0NMICFG1_BASE, 0xFFD62014, __READ_WRITE, ECM0NMICFG1_t);
__IOREG(ECM0NMICFG2_BASE, 0xFFD62018, __READ_WRITE, ECM0NMICFG2_t);
__IOREG(ECM0IRCFG0_BASE, 0xFFD6201C, __READ_WRITE, ECM0IRCFG0_t);
__IOREG(ECM0IRCFG1_BASE, 0xFFD62020, __READ_WRITE, ECM0IRCFG1_t);
__IOREG(ECM0IRCFG2_BASE, 0xFFD62024, __READ_WRITE, ECM0IRCFG2_t);
__IOREG(ECM0EMK0_BASE, 0xFFD62028, __READ_WRITE, ECM0EMK0_t);
__IOREG(ECM0EMK1_BASE, 0xFFD6202C, __READ_WRITE, ECM0EMK1_t);
__IOREG(ECM0EMK2_BASE, 0xFFD62030, __READ_WRITE, ECM0EMK2_t);
__IOREG(ECM0ESSTC0_BASE, 0xFFD62034, __READ_WRITE, ECM0ESSTC0_t);
__IOREG(ECM0ESSTC1_BASE, 0xFFD62038, __READ_WRITE, ECM0ESSTC1_t);
__IOREG(ECM0ESSTC2_BASE, 0xFFD6203C, __READ_WRITE, ECM0ESSTC2_t);
__IOREG(ECM0PCMD1_BASE, 0xFFD62040, __READ_WRITE, ECM0PCMD1_t);
__IOREG(ECM0PS_BASE, 0xFFD62044, __READ, ECM0PS_t);
__IOREG(ECM0PE0_BASE, 0xFFD62048, __READ_WRITE, ECM0PE0_t);
__IOREG(ECM0PE1_BASE, 0xFFD6204C, __READ_WRITE, ECM0PE1_t);
__IOREG(ECM0PE2_BASE, 0xFFD62050, __READ_WRITE, ECM0PE2_t);
__IOREG(ECM0DTMCTL_BASE, 0xFFD62054, __READ_WRITE, ECM0DTMCTL_t);
__IOREG(ECM0DTMR_BASE, 0xFFD62058, __READ, ECM0DTMR_t);
__IOREG(ECM0DTMCMP_BASE, 0xFFD6205C, __READ_WRITE, ECM0DTMCMP_t);
__IOREG(ECM0DTMCFG0_BASE, 0xFFD62060, __READ_WRITE, ECM0DTMCFG0_t);
__IOREG(ECM0DTMCFG1_BASE, 0xFFD62064, __READ_WRITE, ECM0DTMCFG1_t);
__IOREG(ECM0DTMCFG2_BASE, 0xFFD62068, __READ_WRITE, ECM0DTMCFG2_t);
__IOREG(ECM0DTMCFG3_BASE, 0xFFD6206C, __READ_WRITE, ECM0DTMCFG3_t);
__IOREG(ECM0DTMCFG4_BASE, 0xFFD62070, __READ_WRITE, ECM0DTMCFG4_t);
__IOREG(ECM0DTMCFG5_BASE, 0xFFD62074, __READ_WRITE, ECM0DTMCFG5_t);
__IOREG(ECM0EOCCFG_BASE, 0xFFD62078, __READ_WRITE, ECM0EOCCFG_t);
__IOREG(ECM0PEM_BASE, 0xFFD6207C, __READ_WRITE, ECM0PEM_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ECM0EPCFG ECM0EPCFG_BASE.UINT32
#define ECM0EPCFG_ECMSL0 ECM0EPCFG_BASE.BIT._ECMSL0
#define ECM0MICFG0 ECM0MICFG0_BASE.UINT32
#define ECM0MICFG0_ECMMIE000 ECM0MICFG0_BASE.BIT._ECMMIE000
#define ECM0MICFG0_ECMMIE001 ECM0MICFG0_BASE.BIT._ECMMIE001
#define ECM0MICFG0_ECMMIE002 ECM0MICFG0_BASE.BIT._ECMMIE002
#define ECM0MICFG0_ECMMIE003 ECM0MICFG0_BASE.BIT._ECMMIE003
#define ECM0MICFG0_ECMMIE004 ECM0MICFG0_BASE.BIT._ECMMIE004
#define ECM0MICFG0_ECMMIE005 ECM0MICFG0_BASE.BIT._ECMMIE005
#define ECM0MICFG0_ECMMIE006 ECM0MICFG0_BASE.BIT._ECMMIE006
#define ECM0MICFG0_ECMMIE007 ECM0MICFG0_BASE.BIT._ECMMIE007
#define ECM0MICFG0_ECMMIE008 ECM0MICFG0_BASE.BIT._ECMMIE008
#define ECM0MICFG0_ECMMIE009 ECM0MICFG0_BASE.BIT._ECMMIE009
#define ECM0MICFG0_ECMMIE010 ECM0MICFG0_BASE.BIT._ECMMIE010
#define ECM0MICFG0_ECMMIE011 ECM0MICFG0_BASE.BIT._ECMMIE011
#define ECM0MICFG0_ECMMIE012 ECM0MICFG0_BASE.BIT._ECMMIE012
#define ECM0MICFG0_ECMMIE013 ECM0MICFG0_BASE.BIT._ECMMIE013
#define ECM0MICFG0_ECMMIE014 ECM0MICFG0_BASE.BIT._ECMMIE014
#define ECM0MICFG0_ECMMIE015 ECM0MICFG0_BASE.BIT._ECMMIE015
#define ECM0MICFG0_ECMMIE016 ECM0MICFG0_BASE.BIT._ECMMIE016
#define ECM0MICFG0_ECMMIE017 ECM0MICFG0_BASE.BIT._ECMMIE017
#define ECM0MICFG0_ECMMIE018 ECM0MICFG0_BASE.BIT._ECMMIE018
#define ECM0MICFG0_ECMMIE019 ECM0MICFG0_BASE.BIT._ECMMIE019
#define ECM0MICFG0_ECMMIE020 ECM0MICFG0_BASE.BIT._ECMMIE020
#define ECM0MICFG0_ECMMIE021 ECM0MICFG0_BASE.BIT._ECMMIE021
#define ECM0MICFG0_ECMMIE022 ECM0MICFG0_BASE.BIT._ECMMIE022
#define ECM0MICFG0_ECMMIE023 ECM0MICFG0_BASE.BIT._ECMMIE023
#define ECM0MICFG0_ECMMIE024 ECM0MICFG0_BASE.BIT._ECMMIE024
#define ECM0MICFG0_ECMMIE025 ECM0MICFG0_BASE.BIT._ECMMIE025
#define ECM0MICFG0_ECMMIE026 ECM0MICFG0_BASE.BIT._ECMMIE026
#define ECM0MICFG0_ECMMIE027 ECM0MICFG0_BASE.BIT._ECMMIE027
#define ECM0MICFG0_ECMMIE028 ECM0MICFG0_BASE.BIT._ECMMIE028
#define ECM0MICFG0_ECMMIE029 ECM0MICFG0_BASE.BIT._ECMMIE029
#define ECM0MICFG0_ECMMIE030 ECM0MICFG0_BASE.BIT._ECMMIE030
#define ECM0MICFG0_ECMMIE031 ECM0MICFG0_BASE.BIT._ECMMIE031
#define ECM0MICFG1 ECM0MICFG1_BASE.UINT32
#define ECM0MICFG1_ECMMIE100 ECM0MICFG1_BASE.BIT._ECMMIE100
#define ECM0MICFG1_ECMMIE101 ECM0MICFG1_BASE.BIT._ECMMIE101
#define ECM0MICFG1_ECMMIE102 ECM0MICFG1_BASE.BIT._ECMMIE102
#define ECM0MICFG1_ECMMIE103 ECM0MICFG1_BASE.BIT._ECMMIE103
#define ECM0MICFG1_ECMMIE104 ECM0MICFG1_BASE.BIT._ECMMIE104
#define ECM0MICFG1_ECMMIE105 ECM0MICFG1_BASE.BIT._ECMMIE105
#define ECM0MICFG1_ECMMIE106 ECM0MICFG1_BASE.BIT._ECMMIE106
#define ECM0MICFG1_ECMMIE107 ECM0MICFG1_BASE.BIT._ECMMIE107
#define ECM0MICFG1_ECMMIE108 ECM0MICFG1_BASE.BIT._ECMMIE108
#define ECM0MICFG1_ECMMIE109 ECM0MICFG1_BASE.BIT._ECMMIE109
#define ECM0MICFG1_ECMMIE110 ECM0MICFG1_BASE.BIT._ECMMIE110
#define ECM0MICFG1_ECMMIE111 ECM0MICFG1_BASE.BIT._ECMMIE111
#define ECM0MICFG1_ECMMIE112 ECM0MICFG1_BASE.BIT._ECMMIE112
#define ECM0MICFG1_ECMMIE113 ECM0MICFG1_BASE.BIT._ECMMIE113
#define ECM0MICFG1_ECMMIE114 ECM0MICFG1_BASE.BIT._ECMMIE114
#define ECM0MICFG1_ECMMIE115 ECM0MICFG1_BASE.BIT._ECMMIE115
#define ECM0MICFG1_ECMMIE116 ECM0MICFG1_BASE.BIT._ECMMIE116
#define ECM0MICFG1_ECMMIE117 ECM0MICFG1_BASE.BIT._ECMMIE117
#define ECM0MICFG1_ECMMIE118 ECM0MICFG1_BASE.BIT._ECMMIE118
#define ECM0MICFG1_ECMMIE119 ECM0MICFG1_BASE.BIT._ECMMIE119
#define ECM0MICFG1_ECMMIE120 ECM0MICFG1_BASE.BIT._ECMMIE120
#define ECM0MICFG1_ECMMIE121 ECM0MICFG1_BASE.BIT._ECMMIE121
#define ECM0MICFG1_ECMMIE122 ECM0MICFG1_BASE.BIT._ECMMIE122
#define ECM0MICFG1_ECMMIE123 ECM0MICFG1_BASE.BIT._ECMMIE123
#define ECM0MICFG1_ECMMIE124 ECM0MICFG1_BASE.BIT._ECMMIE124
#define ECM0MICFG1_ECMMIE125 ECM0MICFG1_BASE.BIT._ECMMIE125
#define ECM0MICFG1_ECMMIE126 ECM0MICFG1_BASE.BIT._ECMMIE126
#define ECM0MICFG1_ECMMIE127 ECM0MICFG1_BASE.BIT._ECMMIE127
#define ECM0MICFG1_ECMMIE128 ECM0MICFG1_BASE.BIT._ECMMIE128
#define ECM0MICFG1_ECMMIE129 ECM0MICFG1_BASE.BIT._ECMMIE129
#define ECM0MICFG1_ECMMIE130 ECM0MICFG1_BASE.BIT._ECMMIE130
#define ECM0MICFG1_ECMMIE131 ECM0MICFG1_BASE.BIT._ECMMIE131
#define ECM0MICFG2 ECM0MICFG2_BASE.UINT32
#define ECM0MICFG2_ECMMIE200 ECM0MICFG2_BASE.BIT._ECMMIE200
#define ECM0MICFG2_ECMMIE201 ECM0MICFG2_BASE.BIT._ECMMIE201
#define ECM0MICFG2_ECMMIE202 ECM0MICFG2_BASE.BIT._ECMMIE202
#define ECM0MICFG2_ECMMIE203 ECM0MICFG2_BASE.BIT._ECMMIE203
#define ECM0MICFG2_ECMMIE204 ECM0MICFG2_BASE.BIT._ECMMIE204
#define ECM0MICFG2_ECMMIE205 ECM0MICFG2_BASE.BIT._ECMMIE205
#define ECM0MICFG2_ECMMIE206 ECM0MICFG2_BASE.BIT._ECMMIE206
#define ECM0MICFG2_ECMMIE207 ECM0MICFG2_BASE.BIT._ECMMIE207
#define ECM0MICFG2_ECMMIE208 ECM0MICFG2_BASE.BIT._ECMMIE208
#define ECM0MICFG2_ECMMIE209 ECM0MICFG2_BASE.BIT._ECMMIE209
#define ECM0MICFG2_ECMMIE210 ECM0MICFG2_BASE.BIT._ECMMIE210
#define ECM0MICFG2_ECMMIE211 ECM0MICFG2_BASE.BIT._ECMMIE211
#define ECM0MICFG2_ECMMIE212 ECM0MICFG2_BASE.BIT._ECMMIE212
#define ECM0MICFG2_ECMMIE213 ECM0MICFG2_BASE.BIT._ECMMIE213
#define ECM0MICFG2_ECMMIE214 ECM0MICFG2_BASE.BIT._ECMMIE214
#define ECM0MICFG2_ECMMIE215 ECM0MICFG2_BASE.BIT._ECMMIE215
#define ECM0MICFG2_ECMMIE216 ECM0MICFG2_BASE.BIT._ECMMIE216
#define ECM0MICFG2_ECMMIE217 ECM0MICFG2_BASE.BIT._ECMMIE217
#define ECM0MICFG2_ECMMIE218 ECM0MICFG2_BASE.BIT._ECMMIE218
#define ECM0MICFG2_ECMMIE219 ECM0MICFG2_BASE.BIT._ECMMIE219
#define ECM0MICFG2_ECMMIE220 ECM0MICFG2_BASE.BIT._ECMMIE220
#define ECM0MICFG2_ECMMIE221 ECM0MICFG2_BASE.BIT._ECMMIE221
#define ECM0MICFG2_ECMMIE222 ECM0MICFG2_BASE.BIT._ECMMIE222
#define ECM0MICFG2_ECMMIE223 ECM0MICFG2_BASE.BIT._ECMMIE223
#define ECM0MICFG2_ECMMIE224 ECM0MICFG2_BASE.BIT._ECMMIE224
#define ECM0MICFG2_ECMMIE225 ECM0MICFG2_BASE.BIT._ECMMIE225
#define ECM0MICFG2_ECMMIE226 ECM0MICFG2_BASE.BIT._ECMMIE226
#define ECM0MICFG2_ECMMIE227 ECM0MICFG2_BASE.BIT._ECMMIE227
#define ECM0MICFG2_ECMMIE228 ECM0MICFG2_BASE.BIT._ECMMIE228
#define ECM0NMICFG0 ECM0NMICFG0_BASE.UINT32
#define ECM0NMICFG0_ECMNMIE000 ECM0NMICFG0_BASE.BIT._ECMNMIE000
#define ECM0NMICFG0_ECMNMIE001 ECM0NMICFG0_BASE.BIT._ECMNMIE001
#define ECM0NMICFG0_ECMNMIE002 ECM0NMICFG0_BASE.BIT._ECMNMIE002
#define ECM0NMICFG0_ECMNMIE003 ECM0NMICFG0_BASE.BIT._ECMNMIE003
#define ECM0NMICFG0_ECMNMIE004 ECM0NMICFG0_BASE.BIT._ECMNMIE004
#define ECM0NMICFG0_ECMNMIE005 ECM0NMICFG0_BASE.BIT._ECMNMIE005
#define ECM0NMICFG0_ECMNMIE006 ECM0NMICFG0_BASE.BIT._ECMNMIE006
#define ECM0NMICFG0_ECMNMIE007 ECM0NMICFG0_BASE.BIT._ECMNMIE007
#define ECM0NMICFG0_ECMNMIE008 ECM0NMICFG0_BASE.BIT._ECMNMIE008
#define ECM0NMICFG0_ECMNMIE009 ECM0NMICFG0_BASE.BIT._ECMNMIE009
#define ECM0NMICFG0_ECMNMIE010 ECM0NMICFG0_BASE.BIT._ECMNMIE010
#define ECM0NMICFG0_ECMNMIE011 ECM0NMICFG0_BASE.BIT._ECMNMIE011
#define ECM0NMICFG0_ECMNMIE012 ECM0NMICFG0_BASE.BIT._ECMNMIE012
#define ECM0NMICFG0_ECMNMIE013 ECM0NMICFG0_BASE.BIT._ECMNMIE013
#define ECM0NMICFG0_ECMNMIE014 ECM0NMICFG0_BASE.BIT._ECMNMIE014
#define ECM0NMICFG0_ECMNMIE015 ECM0NMICFG0_BASE.BIT._ECMNMIE015
#define ECM0NMICFG0_ECMNMIE016 ECM0NMICFG0_BASE.BIT._ECMNMIE016
#define ECM0NMICFG0_ECMNMIE017 ECM0NMICFG0_BASE.BIT._ECMNMIE017
#define ECM0NMICFG0_ECMNMIE018 ECM0NMICFG0_BASE.BIT._ECMNMIE018
#define ECM0NMICFG0_ECMNMIE019 ECM0NMICFG0_BASE.BIT._ECMNMIE019
#define ECM0NMICFG0_ECMNMIE020 ECM0NMICFG0_BASE.BIT._ECMNMIE020
#define ECM0NMICFG0_ECMNMIE021 ECM0NMICFG0_BASE.BIT._ECMNMIE021
#define ECM0NMICFG0_ECMNMIE022 ECM0NMICFG0_BASE.BIT._ECMNMIE022
#define ECM0NMICFG0_ECMNMIE023 ECM0NMICFG0_BASE.BIT._ECMNMIE023
#define ECM0NMICFG0_ECMNMIE024 ECM0NMICFG0_BASE.BIT._ECMNMIE024
#define ECM0NMICFG0_ECMNMIE025 ECM0NMICFG0_BASE.BIT._ECMNMIE025
#define ECM0NMICFG0_ECMNMIE026 ECM0NMICFG0_BASE.BIT._ECMNMIE026
#define ECM0NMICFG0_ECMNMIE027 ECM0NMICFG0_BASE.BIT._ECMNMIE027
#define ECM0NMICFG0_ECMNMIE028 ECM0NMICFG0_BASE.BIT._ECMNMIE028
#define ECM0NMICFG0_ECMNMIE029 ECM0NMICFG0_BASE.BIT._ECMNMIE029
#define ECM0NMICFG0_ECMNMIE030 ECM0NMICFG0_BASE.BIT._ECMNMIE030
#define ECM0NMICFG0_ECMNMIE031 ECM0NMICFG0_BASE.BIT._ECMNMIE031
#define ECM0NMICFG1 ECM0NMICFG1_BASE.UINT32
#define ECM0NMICFG1_ECMNMIE100 ECM0NMICFG1_BASE.BIT._ECMNMIE100
#define ECM0NMICFG1_ECMNMIE101 ECM0NMICFG1_BASE.BIT._ECMNMIE101
#define ECM0NMICFG1_ECMNMIE102 ECM0NMICFG1_BASE.BIT._ECMNMIE102
#define ECM0NMICFG1_ECMNMIE103 ECM0NMICFG1_BASE.BIT._ECMNMIE103
#define ECM0NMICFG1_ECMNMIE104 ECM0NMICFG1_BASE.BIT._ECMNMIE104
#define ECM0NMICFG1_ECMNMIE105 ECM0NMICFG1_BASE.BIT._ECMNMIE105
#define ECM0NMICFG1_ECMNMIE106 ECM0NMICFG1_BASE.BIT._ECMNMIE106
#define ECM0NMICFG1_ECMNMIE107 ECM0NMICFG1_BASE.BIT._ECMNMIE107
#define ECM0NMICFG1_ECMNMIE108 ECM0NMICFG1_BASE.BIT._ECMNMIE108
#define ECM0NMICFG1_ECMNMIE109 ECM0NMICFG1_BASE.BIT._ECMNMIE109
#define ECM0NMICFG1_ECMNMIE110 ECM0NMICFG1_BASE.BIT._ECMNMIE110
#define ECM0NMICFG1_ECMNMIE111 ECM0NMICFG1_BASE.BIT._ECMNMIE111
#define ECM0NMICFG1_ECMNMIE112 ECM0NMICFG1_BASE.BIT._ECMNMIE112
#define ECM0NMICFG1_ECMNMIE113 ECM0NMICFG1_BASE.BIT._ECMNMIE113
#define ECM0NMICFG1_ECMNMIE114 ECM0NMICFG1_BASE.BIT._ECMNMIE114
#define ECM0NMICFG1_ECMNMIE115 ECM0NMICFG1_BASE.BIT._ECMNMIE115
#define ECM0NMICFG1_ECMNMIE116 ECM0NMICFG1_BASE.BIT._ECMNMIE116
#define ECM0NMICFG1_ECMNMIE117 ECM0NMICFG1_BASE.BIT._ECMNMIE117
#define ECM0NMICFG1_ECMNMIE118 ECM0NMICFG1_BASE.BIT._ECMNMIE118
#define ECM0NMICFG1_ECMNMIE119 ECM0NMICFG1_BASE.BIT._ECMNMIE119
#define ECM0NMICFG1_ECMNMIE120 ECM0NMICFG1_BASE.BIT._ECMNMIE120
#define ECM0NMICFG1_ECMNMIE121 ECM0NMICFG1_BASE.BIT._ECMNMIE121
#define ECM0NMICFG1_ECMNMIE122 ECM0NMICFG1_BASE.BIT._ECMNMIE122
#define ECM0NMICFG1_ECMNMIE123 ECM0NMICFG1_BASE.BIT._ECMNMIE123
#define ECM0NMICFG1_ECMNMIE124 ECM0NMICFG1_BASE.BIT._ECMNMIE124
#define ECM0NMICFG1_ECMNMIE125 ECM0NMICFG1_BASE.BIT._ECMNMIE125
#define ECM0NMICFG1_ECMNMIE126 ECM0NMICFG1_BASE.BIT._ECMNMIE126
#define ECM0NMICFG1_ECMNMIE127 ECM0NMICFG1_BASE.BIT._ECMNMIE127
#define ECM0NMICFG1_ECMNMIE128 ECM0NMICFG1_BASE.BIT._ECMNMIE128
#define ECM0NMICFG1_ECMNMIE129 ECM0NMICFG1_BASE.BIT._ECMNMIE129
#define ECM0NMICFG1_ECMNMIE130 ECM0NMICFG1_BASE.BIT._ECMNMIE130
#define ECM0NMICFG1_ECMNMIE131 ECM0NMICFG1_BASE.BIT._ECMNMIE131
#define ECM0NMICFG2 ECM0NMICFG2_BASE.UINT32
#define ECM0NMICFG2_ECMNMIE200 ECM0NMICFG2_BASE.BIT._ECMNMIE200
#define ECM0NMICFG2_ECMNMIE201 ECM0NMICFG2_BASE.BIT._ECMNMIE201
#define ECM0NMICFG2_ECMNMIE202 ECM0NMICFG2_BASE.BIT._ECMNMIE202
#define ECM0NMICFG2_ECMNMIE203 ECM0NMICFG2_BASE.BIT._ECMNMIE203
#define ECM0NMICFG2_ECMNMIE204 ECM0NMICFG2_BASE.BIT._ECMNMIE204
#define ECM0NMICFG2_ECMNMIE205 ECM0NMICFG2_BASE.BIT._ECMNMIE205
#define ECM0NMICFG2_ECMNMIE206 ECM0NMICFG2_BASE.BIT._ECMNMIE206
#define ECM0NMICFG2_ECMNMIE207 ECM0NMICFG2_BASE.BIT._ECMNMIE207
#define ECM0NMICFG2_ECMNMIE208 ECM0NMICFG2_BASE.BIT._ECMNMIE208
#define ECM0NMICFG2_ECMNMIE209 ECM0NMICFG2_BASE.BIT._ECMNMIE209
#define ECM0NMICFG2_ECMNMIE210 ECM0NMICFG2_BASE.BIT._ECMNMIE210
#define ECM0NMICFG2_ECMNMIE211 ECM0NMICFG2_BASE.BIT._ECMNMIE211
#define ECM0NMICFG2_ECMNMIE212 ECM0NMICFG2_BASE.BIT._ECMNMIE212
#define ECM0NMICFG2_ECMNMIE213 ECM0NMICFG2_BASE.BIT._ECMNMIE213
#define ECM0NMICFG2_ECMNMIE214 ECM0NMICFG2_BASE.BIT._ECMNMIE214
#define ECM0NMICFG2_ECMNMIE215 ECM0NMICFG2_BASE.BIT._ECMNMIE215
#define ECM0NMICFG2_ECMNMIE216 ECM0NMICFG2_BASE.BIT._ECMNMIE216
#define ECM0NMICFG2_ECMNMIE217 ECM0NMICFG2_BASE.BIT._ECMNMIE217
#define ECM0NMICFG2_ECMNMIE218 ECM0NMICFG2_BASE.BIT._ECMNMIE218
#define ECM0NMICFG2_ECMNMIE219 ECM0NMICFG2_BASE.BIT._ECMNMIE219
#define ECM0NMICFG2_ECMNMIE220 ECM0NMICFG2_BASE.BIT._ECMNMIE220
#define ECM0NMICFG2_ECMNMIE221 ECM0NMICFG2_BASE.BIT._ECMNMIE221
#define ECM0NMICFG2_ECMNMIE222 ECM0NMICFG2_BASE.BIT._ECMNMIE222
#define ECM0NMICFG2_ECMNMIE223 ECM0NMICFG2_BASE.BIT._ECMNMIE223
#define ECM0NMICFG2_ECMNMIE224 ECM0NMICFG2_BASE.BIT._ECMNMIE224
#define ECM0NMICFG2_ECMNMIE225 ECM0NMICFG2_BASE.BIT._ECMNMIE225
#define ECM0NMICFG2_ECMNMIE226 ECM0NMICFG2_BASE.BIT._ECMNMIE226
#define ECM0NMICFG2_ECMNMIE227 ECM0NMICFG2_BASE.BIT._ECMNMIE227
#define ECM0NMICFG2_ECMNMIE228 ECM0NMICFG2_BASE.BIT._ECMNMIE228
#define ECM0IRCFG0 ECM0IRCFG0_BASE.UINT32
#define ECM0IRCFG0_ECMIRE000 ECM0IRCFG0_BASE.BIT._ECMIRE000
#define ECM0IRCFG0_ECMIRE001 ECM0IRCFG0_BASE.BIT._ECMIRE001
#define ECM0IRCFG0_ECMIRE002 ECM0IRCFG0_BASE.BIT._ECMIRE002
#define ECM0IRCFG0_ECMIRE003 ECM0IRCFG0_BASE.BIT._ECMIRE003
#define ECM0IRCFG0_ECMIRE004 ECM0IRCFG0_BASE.BIT._ECMIRE004
#define ECM0IRCFG0_ECMIRE005 ECM0IRCFG0_BASE.BIT._ECMIRE005
#define ECM0IRCFG0_ECMIRE006 ECM0IRCFG0_BASE.BIT._ECMIRE006
#define ECM0IRCFG0_ECMIRE007 ECM0IRCFG0_BASE.BIT._ECMIRE007
#define ECM0IRCFG0_ECMIRE008 ECM0IRCFG0_BASE.BIT._ECMIRE008
#define ECM0IRCFG0_ECMIRE009 ECM0IRCFG0_BASE.BIT._ECMIRE009
#define ECM0IRCFG0_ECMIRE010 ECM0IRCFG0_BASE.BIT._ECMIRE010
#define ECM0IRCFG0_ECMIRE011 ECM0IRCFG0_BASE.BIT._ECMIRE011
#define ECM0IRCFG0_ECMIRE012 ECM0IRCFG0_BASE.BIT._ECMIRE012
#define ECM0IRCFG0_ECMIRE013 ECM0IRCFG0_BASE.BIT._ECMIRE013
#define ECM0IRCFG0_ECMIRE014 ECM0IRCFG0_BASE.BIT._ECMIRE014
#define ECM0IRCFG0_ECMIRE015 ECM0IRCFG0_BASE.BIT._ECMIRE015
#define ECM0IRCFG0_ECMIRE016 ECM0IRCFG0_BASE.BIT._ECMIRE016
#define ECM0IRCFG0_ECMIRE017 ECM0IRCFG0_BASE.BIT._ECMIRE017
#define ECM0IRCFG0_ECMIRE018 ECM0IRCFG0_BASE.BIT._ECMIRE018
#define ECM0IRCFG0_ECMIRE019 ECM0IRCFG0_BASE.BIT._ECMIRE019
#define ECM0IRCFG0_ECMIRE020 ECM0IRCFG0_BASE.BIT._ECMIRE020
#define ECM0IRCFG0_ECMIRE021 ECM0IRCFG0_BASE.BIT._ECMIRE021
#define ECM0IRCFG0_ECMIRE022 ECM0IRCFG0_BASE.BIT._ECMIRE022
#define ECM0IRCFG0_ECMIRE023 ECM0IRCFG0_BASE.BIT._ECMIRE023
#define ECM0IRCFG0_ECMIRE024 ECM0IRCFG0_BASE.BIT._ECMIRE024
#define ECM0IRCFG0_ECMIRE025 ECM0IRCFG0_BASE.BIT._ECMIRE025
#define ECM0IRCFG0_ECMIRE026 ECM0IRCFG0_BASE.BIT._ECMIRE026
#define ECM0IRCFG0_ECMIRE027 ECM0IRCFG0_BASE.BIT._ECMIRE027
#define ECM0IRCFG0_ECMIRE028 ECM0IRCFG0_BASE.BIT._ECMIRE028
#define ECM0IRCFG0_ECMIRE029 ECM0IRCFG0_BASE.BIT._ECMIRE029
#define ECM0IRCFG0_ECMIRE030 ECM0IRCFG0_BASE.BIT._ECMIRE030
#define ECM0IRCFG0_ECMIRE031 ECM0IRCFG0_BASE.BIT._ECMIRE031
#define ECM0IRCFG1 ECM0IRCFG1_BASE.UINT32
#define ECM0IRCFG1_ECMIRE100 ECM0IRCFG1_BASE.BIT._ECMIRE100
#define ECM0IRCFG1_ECMIRE101 ECM0IRCFG1_BASE.BIT._ECMIRE101
#define ECM0IRCFG1_ECMIRE102 ECM0IRCFG1_BASE.BIT._ECMIRE102
#define ECM0IRCFG1_ECMIRE103 ECM0IRCFG1_BASE.BIT._ECMIRE103
#define ECM0IRCFG1_ECMIRE104 ECM0IRCFG1_BASE.BIT._ECMIRE104
#define ECM0IRCFG1_ECMIRE105 ECM0IRCFG1_BASE.BIT._ECMIRE105
#define ECM0IRCFG1_ECMIRE106 ECM0IRCFG1_BASE.BIT._ECMIRE106
#define ECM0IRCFG1_ECMIRE107 ECM0IRCFG1_BASE.BIT._ECMIRE107
#define ECM0IRCFG1_ECMIRE108 ECM0IRCFG1_BASE.BIT._ECMIRE108
#define ECM0IRCFG1_ECMIRE109 ECM0IRCFG1_BASE.BIT._ECMIRE109
#define ECM0IRCFG1_ECMIRE110 ECM0IRCFG1_BASE.BIT._ECMIRE110
#define ECM0IRCFG1_ECMIRE111 ECM0IRCFG1_BASE.BIT._ECMIRE111
#define ECM0IRCFG1_ECMIRE112 ECM0IRCFG1_BASE.BIT._ECMIRE112
#define ECM0IRCFG1_ECMIRE113 ECM0IRCFG1_BASE.BIT._ECMIRE113
#define ECM0IRCFG1_ECMIRE114 ECM0IRCFG1_BASE.BIT._ECMIRE114
#define ECM0IRCFG1_ECMIRE115 ECM0IRCFG1_BASE.BIT._ECMIRE115
#define ECM0IRCFG1_ECMIRE116 ECM0IRCFG1_BASE.BIT._ECMIRE116
#define ECM0IRCFG1_ECMIRE117 ECM0IRCFG1_BASE.BIT._ECMIRE117
#define ECM0IRCFG1_ECMIRE118 ECM0IRCFG1_BASE.BIT._ECMIRE118
#define ECM0IRCFG1_ECMIRE119 ECM0IRCFG1_BASE.BIT._ECMIRE119
#define ECM0IRCFG1_ECMIRE120 ECM0IRCFG1_BASE.BIT._ECMIRE120
#define ECM0IRCFG1_ECMIRE121 ECM0IRCFG1_BASE.BIT._ECMIRE121
#define ECM0IRCFG1_ECMIRE122 ECM0IRCFG1_BASE.BIT._ECMIRE122
#define ECM0IRCFG1_ECMIRE123 ECM0IRCFG1_BASE.BIT._ECMIRE123
#define ECM0IRCFG1_ECMIRE124 ECM0IRCFG1_BASE.BIT._ECMIRE124
#define ECM0IRCFG1_ECMIRE125 ECM0IRCFG1_BASE.BIT._ECMIRE125
#define ECM0IRCFG1_ECMIRE126 ECM0IRCFG1_BASE.BIT._ECMIRE126
#define ECM0IRCFG1_ECMIRE127 ECM0IRCFG1_BASE.BIT._ECMIRE127
#define ECM0IRCFG1_ECMIRE128 ECM0IRCFG1_BASE.BIT._ECMIRE128
#define ECM0IRCFG1_ECMIRE129 ECM0IRCFG1_BASE.BIT._ECMIRE129
#define ECM0IRCFG1_ECMIRE130 ECM0IRCFG1_BASE.BIT._ECMIRE130
#define ECM0IRCFG1_ECMIRE131 ECM0IRCFG1_BASE.BIT._ECMIRE131
#define ECM0IRCFG2 ECM0IRCFG2_BASE.UINT32
#define ECM0IRCFG2_ECMIRE200 ECM0IRCFG2_BASE.BIT._ECMIRE200
#define ECM0IRCFG2_ECMIRE201 ECM0IRCFG2_BASE.BIT._ECMIRE201
#define ECM0IRCFG2_ECMIRE202 ECM0IRCFG2_BASE.BIT._ECMIRE202
#define ECM0IRCFG2_ECMIRE203 ECM0IRCFG2_BASE.BIT._ECMIRE203
#define ECM0IRCFG2_ECMIRE204 ECM0IRCFG2_BASE.BIT._ECMIRE204
#define ECM0IRCFG2_ECMIRE205 ECM0IRCFG2_BASE.BIT._ECMIRE205
#define ECM0IRCFG2_ECMIRE206 ECM0IRCFG2_BASE.BIT._ECMIRE206
#define ECM0IRCFG2_ECMIRE207 ECM0IRCFG2_BASE.BIT._ECMIRE207
#define ECM0IRCFG2_ECMIRE208 ECM0IRCFG2_BASE.BIT._ECMIRE208
#define ECM0IRCFG2_ECMIRE209 ECM0IRCFG2_BASE.BIT._ECMIRE209
#define ECM0IRCFG2_ECMIRE210 ECM0IRCFG2_BASE.BIT._ECMIRE210
#define ECM0IRCFG2_ECMIRE211 ECM0IRCFG2_BASE.BIT._ECMIRE211
#define ECM0IRCFG2_ECMIRE212 ECM0IRCFG2_BASE.BIT._ECMIRE212
#define ECM0IRCFG2_ECMIRE213 ECM0IRCFG2_BASE.BIT._ECMIRE213
#define ECM0IRCFG2_ECMIRE214 ECM0IRCFG2_BASE.BIT._ECMIRE214
#define ECM0IRCFG2_ECMIRE215 ECM0IRCFG2_BASE.BIT._ECMIRE215
#define ECM0IRCFG2_ECMIRE216 ECM0IRCFG2_BASE.BIT._ECMIRE216
#define ECM0IRCFG2_ECMIRE217 ECM0IRCFG2_BASE.BIT._ECMIRE217
#define ECM0IRCFG2_ECMIRE218 ECM0IRCFG2_BASE.BIT._ECMIRE218
#define ECM0IRCFG2_ECMIRE219 ECM0IRCFG2_BASE.BIT._ECMIRE219
#define ECM0IRCFG2_ECMIRE220 ECM0IRCFG2_BASE.BIT._ECMIRE220
#define ECM0IRCFG2_ECMIRE221 ECM0IRCFG2_BASE.BIT._ECMIRE221
#define ECM0IRCFG2_ECMIRE222 ECM0IRCFG2_BASE.BIT._ECMIRE222
#define ECM0IRCFG2_ECMIRE223 ECM0IRCFG2_BASE.BIT._ECMIRE223
#define ECM0IRCFG2_ECMIRE224 ECM0IRCFG2_BASE.BIT._ECMIRE224
#define ECM0IRCFG2_ECMIRE225 ECM0IRCFG2_BASE.BIT._ECMIRE225
#define ECM0IRCFG2_ECMIRE226 ECM0IRCFG2_BASE.BIT._ECMIRE226
#define ECM0IRCFG2_ECMIRE227 ECM0IRCFG2_BASE.BIT._ECMIRE227
#define ECM0IRCFG2_ECMIRE228 ECM0IRCFG2_BASE.BIT._ECMIRE228
#define ECM0IRCFG2_ECMIRE229 ECM0IRCFG2_BASE.BIT._ECMIRE229
#define ECM0EMK0 ECM0EMK0_BASE.UINT32
#define ECM0EMK0_ECMEMK000 ECM0EMK0_BASE.BIT._ECMEMK000
#define ECM0EMK0_ECMEMK001 ECM0EMK0_BASE.BIT._ECMEMK001
#define ECM0EMK0_ECMEMK002 ECM0EMK0_BASE.BIT._ECMEMK002
#define ECM0EMK0_ECMEMK003 ECM0EMK0_BASE.BIT._ECMEMK003
#define ECM0EMK0_ECMEMK004 ECM0EMK0_BASE.BIT._ECMEMK004
#define ECM0EMK0_ECMEMK005 ECM0EMK0_BASE.BIT._ECMEMK005
#define ECM0EMK0_ECMEMK006 ECM0EMK0_BASE.BIT._ECMEMK006
#define ECM0EMK0_ECMEMK007 ECM0EMK0_BASE.BIT._ECMEMK007
#define ECM0EMK0_ECMEMK008 ECM0EMK0_BASE.BIT._ECMEMK008
#define ECM0EMK0_ECMEMK009 ECM0EMK0_BASE.BIT._ECMEMK009
#define ECM0EMK0_ECMEMK010 ECM0EMK0_BASE.BIT._ECMEMK010
#define ECM0EMK0_ECMEMK011 ECM0EMK0_BASE.BIT._ECMEMK011
#define ECM0EMK0_ECMEMK012 ECM0EMK0_BASE.BIT._ECMEMK012
#define ECM0EMK0_ECMEMK013 ECM0EMK0_BASE.BIT._ECMEMK013
#define ECM0EMK0_ECMEMK014 ECM0EMK0_BASE.BIT._ECMEMK014
#define ECM0EMK0_ECMEMK015 ECM0EMK0_BASE.BIT._ECMEMK015
#define ECM0EMK0_ECMEMK016 ECM0EMK0_BASE.BIT._ECMEMK016
#define ECM0EMK0_ECMEMK017 ECM0EMK0_BASE.BIT._ECMEMK017
#define ECM0EMK0_ECMEMK018 ECM0EMK0_BASE.BIT._ECMEMK018
#define ECM0EMK0_ECMEMK019 ECM0EMK0_BASE.BIT._ECMEMK019
#define ECM0EMK0_ECMEMK020 ECM0EMK0_BASE.BIT._ECMEMK020
#define ECM0EMK0_ECMEMK021 ECM0EMK0_BASE.BIT._ECMEMK021
#define ECM0EMK0_ECMEMK022 ECM0EMK0_BASE.BIT._ECMEMK022
#define ECM0EMK0_ECMEMK023 ECM0EMK0_BASE.BIT._ECMEMK023
#define ECM0EMK0_ECMEMK024 ECM0EMK0_BASE.BIT._ECMEMK024
#define ECM0EMK0_ECMEMK025 ECM0EMK0_BASE.BIT._ECMEMK025
#define ECM0EMK0_ECMEMK026 ECM0EMK0_BASE.BIT._ECMEMK026
#define ECM0EMK0_ECMEMK027 ECM0EMK0_BASE.BIT._ECMEMK027
#define ECM0EMK0_ECMEMK028 ECM0EMK0_BASE.BIT._ECMEMK028
#define ECM0EMK0_ECMEMK029 ECM0EMK0_BASE.BIT._ECMEMK029
#define ECM0EMK0_ECMEMK030 ECM0EMK0_BASE.BIT._ECMEMK030
#define ECM0EMK0_ECMEMK031 ECM0EMK0_BASE.BIT._ECMEMK031
#define ECM0EMK1 ECM0EMK1_BASE.UINT32
#define ECM0EMK1_ECMEMK100 ECM0EMK1_BASE.BIT._ECMEMK100
#define ECM0EMK1_ECMEMK101 ECM0EMK1_BASE.BIT._ECMEMK101
#define ECM0EMK1_ECMEMK102 ECM0EMK1_BASE.BIT._ECMEMK102
#define ECM0EMK1_ECMEMK103 ECM0EMK1_BASE.BIT._ECMEMK103
#define ECM0EMK1_ECMEMK104 ECM0EMK1_BASE.BIT._ECMEMK104
#define ECM0EMK1_ECMEMK105 ECM0EMK1_BASE.BIT._ECMEMK105
#define ECM0EMK1_ECMEMK106 ECM0EMK1_BASE.BIT._ECMEMK106
#define ECM0EMK1_ECMEMK107 ECM0EMK1_BASE.BIT._ECMEMK107
#define ECM0EMK1_ECMEMK108 ECM0EMK1_BASE.BIT._ECMEMK108
#define ECM0EMK1_ECMEMK109 ECM0EMK1_BASE.BIT._ECMEMK109
#define ECM0EMK1_ECMEMK110 ECM0EMK1_BASE.BIT._ECMEMK110
#define ECM0EMK1_ECMEMK111 ECM0EMK1_BASE.BIT._ECMEMK111
#define ECM0EMK1_ECMEMK112 ECM0EMK1_BASE.BIT._ECMEMK112
#define ECM0EMK1_ECMEMK113 ECM0EMK1_BASE.BIT._ECMEMK113
#define ECM0EMK1_ECMEMK114 ECM0EMK1_BASE.BIT._ECMEMK114
#define ECM0EMK1_ECMEMK115 ECM0EMK1_BASE.BIT._ECMEMK115
#define ECM0EMK1_ECMEMK116 ECM0EMK1_BASE.BIT._ECMEMK116
#define ECM0EMK1_ECMEMK117 ECM0EMK1_BASE.BIT._ECMEMK117
#define ECM0EMK1_ECMEMK118 ECM0EMK1_BASE.BIT._ECMEMK118
#define ECM0EMK1_ECMEMK119 ECM0EMK1_BASE.BIT._ECMEMK119
#define ECM0EMK1_ECMEMK120 ECM0EMK1_BASE.BIT._ECMEMK120
#define ECM0EMK1_ECMEMK121 ECM0EMK1_BASE.BIT._ECMEMK121
#define ECM0EMK1_ECMEMK122 ECM0EMK1_BASE.BIT._ECMEMK122
#define ECM0EMK1_ECMEMK123 ECM0EMK1_BASE.BIT._ECMEMK123
#define ECM0EMK1_ECMEMK124 ECM0EMK1_BASE.BIT._ECMEMK124
#define ECM0EMK1_ECMEMK125 ECM0EMK1_BASE.BIT._ECMEMK125
#define ECM0EMK1_ECMEMK126 ECM0EMK1_BASE.BIT._ECMEMK126
#define ECM0EMK1_ECMEMK127 ECM0EMK1_BASE.BIT._ECMEMK127
#define ECM0EMK1_ECMEMK128 ECM0EMK1_BASE.BIT._ECMEMK128
#define ECM0EMK1_ECMEMK129 ECM0EMK1_BASE.BIT._ECMEMK129
#define ECM0EMK1_ECMEMK130 ECM0EMK1_BASE.BIT._ECMEMK130
#define ECM0EMK1_ECMEMK131 ECM0EMK1_BASE.BIT._ECMEMK131
#define ECM0EMK2 ECM0EMK2_BASE.UINT32
#define ECM0EMK2_ECMEMK200 ECM0EMK2_BASE.BIT._ECMEMK200
#define ECM0EMK2_ECMEMK201 ECM0EMK2_BASE.BIT._ECMEMK201
#define ECM0EMK2_ECMEMK202 ECM0EMK2_BASE.BIT._ECMEMK202
#define ECM0EMK2_ECMEMK203 ECM0EMK2_BASE.BIT._ECMEMK203
#define ECM0EMK2_ECMEMK204 ECM0EMK2_BASE.BIT._ECMEMK204
#define ECM0EMK2_ECMEMK205 ECM0EMK2_BASE.BIT._ECMEMK205
#define ECM0EMK2_ECMEMK206 ECM0EMK2_BASE.BIT._ECMEMK206
#define ECM0EMK2_ECMEMK207 ECM0EMK2_BASE.BIT._ECMEMK207
#define ECM0EMK2_ECMEMK208 ECM0EMK2_BASE.BIT._ECMEMK208
#define ECM0EMK2_ECMEMK209 ECM0EMK2_BASE.BIT._ECMEMK209
#define ECM0EMK2_ECMEMK210 ECM0EMK2_BASE.BIT._ECMEMK210
#define ECM0EMK2_ECMEMK211 ECM0EMK2_BASE.BIT._ECMEMK211
#define ECM0EMK2_ECMEMK212 ECM0EMK2_BASE.BIT._ECMEMK212
#define ECM0EMK2_ECMEMK213 ECM0EMK2_BASE.BIT._ECMEMK213
#define ECM0EMK2_ECMEMK214 ECM0EMK2_BASE.BIT._ECMEMK214
#define ECM0EMK2_ECMEMK215 ECM0EMK2_BASE.BIT._ECMEMK215
#define ECM0EMK2_ECMEMK216 ECM0EMK2_BASE.BIT._ECMEMK216
#define ECM0EMK2_ECMEMK217 ECM0EMK2_BASE.BIT._ECMEMK217
#define ECM0EMK2_ECMEMK218 ECM0EMK2_BASE.BIT._ECMEMK218
#define ECM0EMK2_ECMEMK219 ECM0EMK2_BASE.BIT._ECMEMK219
#define ECM0EMK2_ECMEMK220 ECM0EMK2_BASE.BIT._ECMEMK220
#define ECM0EMK2_ECMEMK221 ECM0EMK2_BASE.BIT._ECMEMK221
#define ECM0EMK2_ECMEMK222 ECM0EMK2_BASE.BIT._ECMEMK222
#define ECM0EMK2_ECMEMK223 ECM0EMK2_BASE.BIT._ECMEMK223
#define ECM0EMK2_ECMEMK224 ECM0EMK2_BASE.BIT._ECMEMK224
#define ECM0EMK2_ECMEMK225 ECM0EMK2_BASE.BIT._ECMEMK225
#define ECM0EMK2_ECMEMK226 ECM0EMK2_BASE.BIT._ECMEMK226
#define ECM0EMK2_ECMEMK227 ECM0EMK2_BASE.BIT._ECMEMK227
#define ECM0EMK2_ECMEMK228 ECM0EMK2_BASE.BIT._ECMEMK228
#define ECM0EMK2_ECMEMK229 ECM0EMK2_BASE.BIT._ECMEMK229
#define ECM0ESSTC0 ECM0ESSTC0_BASE.UINT32
#define ECM0ESSTC0_ECMCLSSE000 ECM0ESSTC0_BASE.BIT._ECMCLSSE000
#define ECM0ESSTC0_ECMCLSSE001 ECM0ESSTC0_BASE.BIT._ECMCLSSE001
#define ECM0ESSTC0_ECMCLSSE002 ECM0ESSTC0_BASE.BIT._ECMCLSSE002
#define ECM0ESSTC0_ECMCLSSE003 ECM0ESSTC0_BASE.BIT._ECMCLSSE003
#define ECM0ESSTC0_ECMCLSSE004 ECM0ESSTC0_BASE.BIT._ECMCLSSE004
#define ECM0ESSTC0_ECMCLSSE005 ECM0ESSTC0_BASE.BIT._ECMCLSSE005
#define ECM0ESSTC0_ECMCLSSE006 ECM0ESSTC0_BASE.BIT._ECMCLSSE006
#define ECM0ESSTC0_ECMCLSSE007 ECM0ESSTC0_BASE.BIT._ECMCLSSE007
#define ECM0ESSTC0_ECMCLSSE008 ECM0ESSTC0_BASE.BIT._ECMCLSSE008
#define ECM0ESSTC0_ECMCLSSE009 ECM0ESSTC0_BASE.BIT._ECMCLSSE009
#define ECM0ESSTC0_ECMCLSSE010 ECM0ESSTC0_BASE.BIT._ECMCLSSE010
#define ECM0ESSTC0_ECMCLSSE011 ECM0ESSTC0_BASE.BIT._ECMCLSSE011
#define ECM0ESSTC0_ECMCLSSE012 ECM0ESSTC0_BASE.BIT._ECMCLSSE012
#define ECM0ESSTC0_ECMCLSSE013 ECM0ESSTC0_BASE.BIT._ECMCLSSE013
#define ECM0ESSTC0_ECMCLSSE014 ECM0ESSTC0_BASE.BIT._ECMCLSSE014
#define ECM0ESSTC0_ECMCLSSE015 ECM0ESSTC0_BASE.BIT._ECMCLSSE015
#define ECM0ESSTC0_ECMCLSSE016 ECM0ESSTC0_BASE.BIT._ECMCLSSE016
#define ECM0ESSTC0_ECMCLSSE017 ECM0ESSTC0_BASE.BIT._ECMCLSSE017
#define ECM0ESSTC0_ECMCLSSE018 ECM0ESSTC0_BASE.BIT._ECMCLSSE018
#define ECM0ESSTC0_ECMCLSSE019 ECM0ESSTC0_BASE.BIT._ECMCLSSE019
#define ECM0ESSTC0_ECMCLSSE020 ECM0ESSTC0_BASE.BIT._ECMCLSSE020
#define ECM0ESSTC0_ECMCLSSE021 ECM0ESSTC0_BASE.BIT._ECMCLSSE021
#define ECM0ESSTC0_ECMCLSSE022 ECM0ESSTC0_BASE.BIT._ECMCLSSE022
#define ECM0ESSTC0_ECMCLSSE023 ECM0ESSTC0_BASE.BIT._ECMCLSSE023
#define ECM0ESSTC0_ECMCLSSE024 ECM0ESSTC0_BASE.BIT._ECMCLSSE024
#define ECM0ESSTC0_ECMCLSSE025 ECM0ESSTC0_BASE.BIT._ECMCLSSE025
#define ECM0ESSTC0_ECMCLSSE026 ECM0ESSTC0_BASE.BIT._ECMCLSSE026
#define ECM0ESSTC0_ECMCLSSE027 ECM0ESSTC0_BASE.BIT._ECMCLSSE027
#define ECM0ESSTC0_ECMCLSSE028 ECM0ESSTC0_BASE.BIT._ECMCLSSE028
#define ECM0ESSTC0_ECMCLSSE029 ECM0ESSTC0_BASE.BIT._ECMCLSSE029
#define ECM0ESSTC0_ECMCLSSE030 ECM0ESSTC0_BASE.BIT._ECMCLSSE030
#define ECM0ESSTC0_ECMCLSSE031 ECM0ESSTC0_BASE.BIT._ECMCLSSE031
#define ECM0ESSTC1 ECM0ESSTC1_BASE.UINT32
#define ECM0ESSTC1_ECMCLSSE100 ECM0ESSTC1_BASE.BIT._ECMCLSSE100
#define ECM0ESSTC1_ECMCLSSE101 ECM0ESSTC1_BASE.BIT._ECMCLSSE101
#define ECM0ESSTC1_ECMCLSSE102 ECM0ESSTC1_BASE.BIT._ECMCLSSE102
#define ECM0ESSTC1_ECMCLSSE103 ECM0ESSTC1_BASE.BIT._ECMCLSSE103
#define ECM0ESSTC1_ECMCLSSE104 ECM0ESSTC1_BASE.BIT._ECMCLSSE104
#define ECM0ESSTC1_ECMCLSSE105 ECM0ESSTC1_BASE.BIT._ECMCLSSE105
#define ECM0ESSTC1_ECMCLSSE106 ECM0ESSTC1_BASE.BIT._ECMCLSSE106
#define ECM0ESSTC1_ECMCLSSE107 ECM0ESSTC1_BASE.BIT._ECMCLSSE107
#define ECM0ESSTC1_ECMCLSSE108 ECM0ESSTC1_BASE.BIT._ECMCLSSE108
#define ECM0ESSTC1_ECMCLSSE109 ECM0ESSTC1_BASE.BIT._ECMCLSSE109
#define ECM0ESSTC1_ECMCLSSE110 ECM0ESSTC1_BASE.BIT._ECMCLSSE110
#define ECM0ESSTC1_ECMCLSSE111 ECM0ESSTC1_BASE.BIT._ECMCLSSE111
#define ECM0ESSTC1_ECMCLSSE112 ECM0ESSTC1_BASE.BIT._ECMCLSSE112
#define ECM0ESSTC1_ECMCLSSE113 ECM0ESSTC1_BASE.BIT._ECMCLSSE113
#define ECM0ESSTC1_ECMCLSSE114 ECM0ESSTC1_BASE.BIT._ECMCLSSE114
#define ECM0ESSTC1_ECMCLSSE115 ECM0ESSTC1_BASE.BIT._ECMCLSSE115
#define ECM0ESSTC1_ECMCLSSE116 ECM0ESSTC1_BASE.BIT._ECMCLSSE116
#define ECM0ESSTC1_ECMCLSSE117 ECM0ESSTC1_BASE.BIT._ECMCLSSE117
#define ECM0ESSTC1_ECMCLSSE118 ECM0ESSTC1_BASE.BIT._ECMCLSSE118
#define ECM0ESSTC1_ECMCLSSE119 ECM0ESSTC1_BASE.BIT._ECMCLSSE119
#define ECM0ESSTC1_ECMCLSSE120 ECM0ESSTC1_BASE.BIT._ECMCLSSE120
#define ECM0ESSTC1_ECMCLSSE121 ECM0ESSTC1_BASE.BIT._ECMCLSSE121
#define ECM0ESSTC1_ECMCLSSE122 ECM0ESSTC1_BASE.BIT._ECMCLSSE122
#define ECM0ESSTC1_ECMCLSSE123 ECM0ESSTC1_BASE.BIT._ECMCLSSE123
#define ECM0ESSTC1_ECMCLSSE124 ECM0ESSTC1_BASE.BIT._ECMCLSSE124
#define ECM0ESSTC1_ECMCLSSE125 ECM0ESSTC1_BASE.BIT._ECMCLSSE125
#define ECM0ESSTC1_ECMCLSSE126 ECM0ESSTC1_BASE.BIT._ECMCLSSE126
#define ECM0ESSTC1_ECMCLSSE127 ECM0ESSTC1_BASE.BIT._ECMCLSSE127
#define ECM0ESSTC1_ECMCLSSE128 ECM0ESSTC1_BASE.BIT._ECMCLSSE128
#define ECM0ESSTC1_ECMCLSSE129 ECM0ESSTC1_BASE.BIT._ECMCLSSE129
#define ECM0ESSTC1_ECMCLSSE130 ECM0ESSTC1_BASE.BIT._ECMCLSSE130
#define ECM0ESSTC1_ECMCLSSE131 ECM0ESSTC1_BASE.BIT._ECMCLSSE131
#define ECM0ESSTC2 ECM0ESSTC2_BASE.UINT32
#define ECM0ESSTC2_ECMCLSSE200 ECM0ESSTC2_BASE.BIT._ECMCLSSE200
#define ECM0ESSTC2_ECMCLSSE201 ECM0ESSTC2_BASE.BIT._ECMCLSSE201
#define ECM0ESSTC2_ECMCLSSE202 ECM0ESSTC2_BASE.BIT._ECMCLSSE202
#define ECM0ESSTC2_ECMCLSSE203 ECM0ESSTC2_BASE.BIT._ECMCLSSE203
#define ECM0ESSTC2_ECMCLSSE204 ECM0ESSTC2_BASE.BIT._ECMCLSSE204
#define ECM0ESSTC2_ECMCLSSE205 ECM0ESSTC2_BASE.BIT._ECMCLSSE205
#define ECM0ESSTC2_ECMCLSSE206 ECM0ESSTC2_BASE.BIT._ECMCLSSE206
#define ECM0ESSTC2_ECMCLSSE207 ECM0ESSTC2_BASE.BIT._ECMCLSSE207
#define ECM0ESSTC2_ECMCLSSE208 ECM0ESSTC2_BASE.BIT._ECMCLSSE208
#define ECM0ESSTC2_ECMCLSSE209 ECM0ESSTC2_BASE.BIT._ECMCLSSE209
#define ECM0ESSTC2_ECMCLSSE210 ECM0ESSTC2_BASE.BIT._ECMCLSSE210
#define ECM0ESSTC2_ECMCLSSE211 ECM0ESSTC2_BASE.BIT._ECMCLSSE211
#define ECM0ESSTC2_ECMCLSSE212 ECM0ESSTC2_BASE.BIT._ECMCLSSE212
#define ECM0ESSTC2_ECMCLSSE213 ECM0ESSTC2_BASE.BIT._ECMCLSSE213
#define ECM0ESSTC2_ECMCLSSE214 ECM0ESSTC2_BASE.BIT._ECMCLSSE214
#define ECM0ESSTC2_ECMCLSSE215 ECM0ESSTC2_BASE.BIT._ECMCLSSE215
#define ECM0ESSTC2_ECMCLSSE216 ECM0ESSTC2_BASE.BIT._ECMCLSSE216
#define ECM0ESSTC2_ECMCLSSE217 ECM0ESSTC2_BASE.BIT._ECMCLSSE217
#define ECM0ESSTC2_ECMCLSSE218 ECM0ESSTC2_BASE.BIT._ECMCLSSE218
#define ECM0ESSTC2_ECMCLSSE219 ECM0ESSTC2_BASE.BIT._ECMCLSSE219
#define ECM0ESSTC2_ECMCLSSE220 ECM0ESSTC2_BASE.BIT._ECMCLSSE220
#define ECM0ESSTC2_ECMCLSSE221 ECM0ESSTC2_BASE.BIT._ECMCLSSE221
#define ECM0ESSTC2_ECMCLSSE222 ECM0ESSTC2_BASE.BIT._ECMCLSSE222
#define ECM0ESSTC2_ECMCLSSE223 ECM0ESSTC2_BASE.BIT._ECMCLSSE223
#define ECM0ESSTC2_ECMCLSSE224 ECM0ESSTC2_BASE.BIT._ECMCLSSE224
#define ECM0ESSTC2_ECMCLSSE225 ECM0ESSTC2_BASE.BIT._ECMCLSSE225
#define ECM0ESSTC2_ECMCLSSE226 ECM0ESSTC2_BASE.BIT._ECMCLSSE226
#define ECM0ESSTC2_ECMCLSSE227 ECM0ESSTC2_BASE.BIT._ECMCLSSE227
#define ECM0ESSTC2_ECMCLSSE228 ECM0ESSTC2_BASE.BIT._ECMCLSSE228
#define ECM0ESSTC2_ECMCLSSE229 ECM0ESSTC2_BASE.BIT._ECMCLSSE229
#define ECM0ESSTC2_ECMCLSSE230 ECM0ESSTC2_BASE.BIT._ECMCLSSE230
#define ECM0PCMD1 ECM0PCMD1_BASE.UINT32
#define ECM0PCMD1_ECMREG1 ECM0PCMD1_BASE.BIT._ECMREG1
#define ECM0PS ECM0PS_BASE.UINT8
#define ECM0PS_ECMPRERR ECM0PS_BASE.BIT._ECMPRERR
#define ECM0PE0 ECM0PE0_BASE.UINT32
#define ECM0PE0_ECMPE000 ECM0PE0_BASE.BIT._ECMPE000
#define ECM0PE0_ECMPE001 ECM0PE0_BASE.BIT._ECMPE001
#define ECM0PE0_ECMPE002 ECM0PE0_BASE.BIT._ECMPE002
#define ECM0PE0_ECMPE003 ECM0PE0_BASE.BIT._ECMPE003
#define ECM0PE0_ECMPE004 ECM0PE0_BASE.BIT._ECMPE004
#define ECM0PE0_ECMPE005 ECM0PE0_BASE.BIT._ECMPE005
#define ECM0PE0_ECMPE006 ECM0PE0_BASE.BIT._ECMPE006
#define ECM0PE0_ECMPE007 ECM0PE0_BASE.BIT._ECMPE007
#define ECM0PE0_ECMPE008 ECM0PE0_BASE.BIT._ECMPE008
#define ECM0PE0_ECMPE009 ECM0PE0_BASE.BIT._ECMPE009
#define ECM0PE0_ECMPE010 ECM0PE0_BASE.BIT._ECMPE010
#define ECM0PE0_ECMPE011 ECM0PE0_BASE.BIT._ECMPE011
#define ECM0PE0_ECMPE012 ECM0PE0_BASE.BIT._ECMPE012
#define ECM0PE0_ECMPE013 ECM0PE0_BASE.BIT._ECMPE013
#define ECM0PE0_ECMPE014 ECM0PE0_BASE.BIT._ECMPE014
#define ECM0PE0_ECMPE015 ECM0PE0_BASE.BIT._ECMPE015
#define ECM0PE0_ECMPE016 ECM0PE0_BASE.BIT._ECMPE016
#define ECM0PE0_ECMPE017 ECM0PE0_BASE.BIT._ECMPE017
#define ECM0PE0_ECMPE018 ECM0PE0_BASE.BIT._ECMPE018
#define ECM0PE0_ECMPE019 ECM0PE0_BASE.BIT._ECMPE019
#define ECM0PE0_ECMPE020 ECM0PE0_BASE.BIT._ECMPE020
#define ECM0PE0_ECMPE021 ECM0PE0_BASE.BIT._ECMPE021
#define ECM0PE0_ECMPE022 ECM0PE0_BASE.BIT._ECMPE022
#define ECM0PE0_ECMPE023 ECM0PE0_BASE.BIT._ECMPE023
#define ECM0PE0_ECMPE024 ECM0PE0_BASE.BIT._ECMPE024
#define ECM0PE0_ECMPE025 ECM0PE0_BASE.BIT._ECMPE025
#define ECM0PE0_ECMPE026 ECM0PE0_BASE.BIT._ECMPE026
#define ECM0PE0_ECMPE027 ECM0PE0_BASE.BIT._ECMPE027
#define ECM0PE0_ECMPE028 ECM0PE0_BASE.BIT._ECMPE028
#define ECM0PE0_ECMPE029 ECM0PE0_BASE.BIT._ECMPE029
#define ECM0PE0_ECMPE030 ECM0PE0_BASE.BIT._ECMPE030
#define ECM0PE0_ECMPE031 ECM0PE0_BASE.BIT._ECMPE031
#define ECM0PE1 ECM0PE1_BASE.UINT32
#define ECM0PE1_ECMPE100 ECM0PE1_BASE.BIT._ECMPE100
#define ECM0PE1_ECMPE101 ECM0PE1_BASE.BIT._ECMPE101
#define ECM0PE1_ECMPE102 ECM0PE1_BASE.BIT._ECMPE102
#define ECM0PE1_ECMPE103 ECM0PE1_BASE.BIT._ECMPE103
#define ECM0PE1_ECMPE104 ECM0PE1_BASE.BIT._ECMPE104
#define ECM0PE1_ECMPE105 ECM0PE1_BASE.BIT._ECMPE105
#define ECM0PE1_ECMPE106 ECM0PE1_BASE.BIT._ECMPE106
#define ECM0PE1_ECMPE107 ECM0PE1_BASE.BIT._ECMPE107
#define ECM0PE1_ECMPE108 ECM0PE1_BASE.BIT._ECMPE108
#define ECM0PE1_ECMPE109 ECM0PE1_BASE.BIT._ECMPE109
#define ECM0PE1_ECMPE110 ECM0PE1_BASE.BIT._ECMPE110
#define ECM0PE1_ECMPE111 ECM0PE1_BASE.BIT._ECMPE111
#define ECM0PE1_ECMPE112 ECM0PE1_BASE.BIT._ECMPE112
#define ECM0PE1_ECMPE113 ECM0PE1_BASE.BIT._ECMPE113
#define ECM0PE1_ECMPE114 ECM0PE1_BASE.BIT._ECMPE114
#define ECM0PE1_ECMPE115 ECM0PE1_BASE.BIT._ECMPE115
#define ECM0PE1_ECMPE116 ECM0PE1_BASE.BIT._ECMPE116
#define ECM0PE1_ECMPE117 ECM0PE1_BASE.BIT._ECMPE117
#define ECM0PE1_ECMPE118 ECM0PE1_BASE.BIT._ECMPE118
#define ECM0PE1_ECMPE119 ECM0PE1_BASE.BIT._ECMPE119
#define ECM0PE1_ECMPE120 ECM0PE1_BASE.BIT._ECMPE120
#define ECM0PE1_ECMPE121 ECM0PE1_BASE.BIT._ECMPE121
#define ECM0PE1_ECMPE122 ECM0PE1_BASE.BIT._ECMPE122
#define ECM0PE1_ECMPE123 ECM0PE1_BASE.BIT._ECMPE123
#define ECM0PE1_ECMPE124 ECM0PE1_BASE.BIT._ECMPE124
#define ECM0PE1_ECMPE125 ECM0PE1_BASE.BIT._ECMPE125
#define ECM0PE1_ECMPE126 ECM0PE1_BASE.BIT._ECMPE126
#define ECM0PE1_ECMPE127 ECM0PE1_BASE.BIT._ECMPE127
#define ECM0PE1_ECMPE128 ECM0PE1_BASE.BIT._ECMPE128
#define ECM0PE1_ECMPE129 ECM0PE1_BASE.BIT._ECMPE129
#define ECM0PE1_ECMPE130 ECM0PE1_BASE.BIT._ECMPE130
#define ECM0PE1_ECMPE131 ECM0PE1_BASE.BIT._ECMPE131
#define ECM0PE2 ECM0PE2_BASE.UINT32
#define ECM0PE2_ECMPE200 ECM0PE2_BASE.BIT._ECMPE200
#define ECM0PE2_ECMPE201 ECM0PE2_BASE.BIT._ECMPE201
#define ECM0PE2_ECMPE202 ECM0PE2_BASE.BIT._ECMPE202
#define ECM0PE2_ECMPE203 ECM0PE2_BASE.BIT._ECMPE203
#define ECM0PE2_ECMPE204 ECM0PE2_BASE.BIT._ECMPE204
#define ECM0PE2_ECMPE205 ECM0PE2_BASE.BIT._ECMPE205
#define ECM0PE2_ECMPE206 ECM0PE2_BASE.BIT._ECMPE206
#define ECM0PE2_ECMPE207 ECM0PE2_BASE.BIT._ECMPE207
#define ECM0PE2_ECMPE208 ECM0PE2_BASE.BIT._ECMPE208
#define ECM0PE2_ECMPE209 ECM0PE2_BASE.BIT._ECMPE209
#define ECM0PE2_ECMPE210 ECM0PE2_BASE.BIT._ECMPE210
#define ECM0PE2_ECMPE211 ECM0PE2_BASE.BIT._ECMPE211
#define ECM0PE2_ECMPE212 ECM0PE2_BASE.BIT._ECMPE212
#define ECM0PE2_ECMPE213 ECM0PE2_BASE.BIT._ECMPE213
#define ECM0PE2_ECMPE214 ECM0PE2_BASE.BIT._ECMPE214
#define ECM0PE2_ECMPE215 ECM0PE2_BASE.BIT._ECMPE215
#define ECM0PE2_ECMPE216 ECM0PE2_BASE.BIT._ECMPE216
#define ECM0PE2_ECMPE217 ECM0PE2_BASE.BIT._ECMPE217
#define ECM0PE2_ECMPE218 ECM0PE2_BASE.BIT._ECMPE218
#define ECM0PE2_ECMPE219 ECM0PE2_BASE.BIT._ECMPE219
#define ECM0PE2_ECMPE220 ECM0PE2_BASE.BIT._ECMPE220
#define ECM0PE2_ECMPE221 ECM0PE2_BASE.BIT._ECMPE221
#define ECM0PE2_ECMPE222 ECM0PE2_BASE.BIT._ECMPE222
#define ECM0PE2_ECMPE223 ECM0PE2_BASE.BIT._ECMPE223
#define ECM0PE2_ECMPE224 ECM0PE2_BASE.BIT._ECMPE224
#define ECM0PE2_ECMPE225 ECM0PE2_BASE.BIT._ECMPE225
#define ECM0PE2_ECMPE226 ECM0PE2_BASE.BIT._ECMPE226
#define ECM0PE2_ECMPE228 ECM0PE2_BASE.BIT._ECMPE228
#define ECM0PE2_ECMPE229 ECM0PE2_BASE.BIT._ECMPE229
#define ECM0DTMCTL ECM0DTMCTL_BASE.UINT32
#define ECM0DTMCTL_DTMSTA ECM0DTMCTL_BASE.BIT._DTMSTA
#define ECM0DTMCTL_DTMSTP ECM0DTMCTL_BASE.BIT._DTMSTP
#define ECM0DTMCTL_DTMSTACNTCLK ECM0DTMCTL_BASE.BIT._DTMSTACNTCLK
#define ECM0DTMR ECM0DTMR_BASE.UINT16
#define ECM0DTMR_ECMDTMR ECM0DTMR_BASE.BIT._ECMDTMR
#define ECM0DTMCMP ECM0DTMCMP_BASE.UINT32
#define ECM0DTMCMP_ECMDTMCMP ECM0DTMCMP_BASE.BIT._ECMDTMCMP
#define ECM0DTMCMP_CMPW ECM0DTMCMP_BASE.BIT._CMPW
#define ECM0DTMCFG0 ECM0DTMCFG0_BASE.UINT32
#define ECM0DTMCFG0_ECMTE000 ECM0DTMCFG0_BASE.BIT._ECMTE000
#define ECM0DTMCFG0_ECMTE001 ECM0DTMCFG0_BASE.BIT._ECMTE001
#define ECM0DTMCFG0_ECMTE002 ECM0DTMCFG0_BASE.BIT._ECMTE002
#define ECM0DTMCFG0_ECMTE003 ECM0DTMCFG0_BASE.BIT._ECMTE003
#define ECM0DTMCFG0_ECMTE004 ECM0DTMCFG0_BASE.BIT._ECMTE004
#define ECM0DTMCFG0_ECMTE005 ECM0DTMCFG0_BASE.BIT._ECMTE005
#define ECM0DTMCFG0_ECMTE006 ECM0DTMCFG0_BASE.BIT._ECMTE006
#define ECM0DTMCFG0_ECMTE007 ECM0DTMCFG0_BASE.BIT._ECMTE007
#define ECM0DTMCFG0_ECMTE008 ECM0DTMCFG0_BASE.BIT._ECMTE008
#define ECM0DTMCFG0_ECMTE009 ECM0DTMCFG0_BASE.BIT._ECMTE009
#define ECM0DTMCFG0_ECMTE010 ECM0DTMCFG0_BASE.BIT._ECMTE010
#define ECM0DTMCFG0_ECMTE011 ECM0DTMCFG0_BASE.BIT._ECMTE011
#define ECM0DTMCFG0_ECMTE012 ECM0DTMCFG0_BASE.BIT._ECMTE012
#define ECM0DTMCFG0_ECMTE013 ECM0DTMCFG0_BASE.BIT._ECMTE013
#define ECM0DTMCFG0_ECMTE014 ECM0DTMCFG0_BASE.BIT._ECMTE014
#define ECM0DTMCFG0_ECMTE015 ECM0DTMCFG0_BASE.BIT._ECMTE015
#define ECM0DTMCFG0_ECMTE016 ECM0DTMCFG0_BASE.BIT._ECMTE016
#define ECM0DTMCFG0_ECMTE017 ECM0DTMCFG0_BASE.BIT._ECMTE017
#define ECM0DTMCFG0_ECMTE018 ECM0DTMCFG0_BASE.BIT._ECMTE018
#define ECM0DTMCFG0_ECMTE019 ECM0DTMCFG0_BASE.BIT._ECMTE019
#define ECM0DTMCFG0_ECMTE020 ECM0DTMCFG0_BASE.BIT._ECMTE020
#define ECM0DTMCFG0_ECMTE021 ECM0DTMCFG0_BASE.BIT._ECMTE021
#define ECM0DTMCFG0_ECMTE022 ECM0DTMCFG0_BASE.BIT._ECMTE022
#define ECM0DTMCFG0_ECMTE023 ECM0DTMCFG0_BASE.BIT._ECMTE023
#define ECM0DTMCFG0_ECMTE024 ECM0DTMCFG0_BASE.BIT._ECMTE024
#define ECM0DTMCFG0_ECMTE025 ECM0DTMCFG0_BASE.BIT._ECMTE025
#define ECM0DTMCFG0_ECMTE026 ECM0DTMCFG0_BASE.BIT._ECMTE026
#define ECM0DTMCFG0_ECMTE027 ECM0DTMCFG0_BASE.BIT._ECMTE027
#define ECM0DTMCFG0_ECMTE028 ECM0DTMCFG0_BASE.BIT._ECMTE028
#define ECM0DTMCFG0_ECMTE029 ECM0DTMCFG0_BASE.BIT._ECMTE029
#define ECM0DTMCFG0_ECMTE030 ECM0DTMCFG0_BASE.BIT._ECMTE030
#define ECM0DTMCFG0_ECMTE031 ECM0DTMCFG0_BASE.BIT._ECMTE031
#define ECM0DTMCFG1 ECM0DTMCFG1_BASE.UINT32
#define ECM0DTMCFG1_ECMTE100 ECM0DTMCFG1_BASE.BIT._ECMTE100
#define ECM0DTMCFG1_ECMTE101 ECM0DTMCFG1_BASE.BIT._ECMTE101
#define ECM0DTMCFG1_ECMTE102 ECM0DTMCFG1_BASE.BIT._ECMTE102
#define ECM0DTMCFG1_ECMTE103 ECM0DTMCFG1_BASE.BIT._ECMTE103
#define ECM0DTMCFG1_ECMTE104 ECM0DTMCFG1_BASE.BIT._ECMTE104
#define ECM0DTMCFG1_ECMTE105 ECM0DTMCFG1_BASE.BIT._ECMTE105
#define ECM0DTMCFG1_ECMTE106 ECM0DTMCFG1_BASE.BIT._ECMTE106
#define ECM0DTMCFG1_ECMTE107 ECM0DTMCFG1_BASE.BIT._ECMTE107
#define ECM0DTMCFG1_ECMTE108 ECM0DTMCFG1_BASE.BIT._ECMTE108
#define ECM0DTMCFG1_ECMTE109 ECM0DTMCFG1_BASE.BIT._ECMTE109
#define ECM0DTMCFG1_ECMTE110 ECM0DTMCFG1_BASE.BIT._ECMTE110
#define ECM0DTMCFG1_ECMTE111 ECM0DTMCFG1_BASE.BIT._ECMTE111
#define ECM0DTMCFG1_ECMTE112 ECM0DTMCFG1_BASE.BIT._ECMTE112
#define ECM0DTMCFG1_ECMTE113 ECM0DTMCFG1_BASE.BIT._ECMTE113
#define ECM0DTMCFG1_ECMTE114 ECM0DTMCFG1_BASE.BIT._ECMTE114
#define ECM0DTMCFG1_ECMTE115 ECM0DTMCFG1_BASE.BIT._ECMTE115
#define ECM0DTMCFG1_ECMTE116 ECM0DTMCFG1_BASE.BIT._ECMTE116
#define ECM0DTMCFG1_ECMTE117 ECM0DTMCFG1_BASE.BIT._ECMTE117
#define ECM0DTMCFG1_ECMTE118 ECM0DTMCFG1_BASE.BIT._ECMTE118
#define ECM0DTMCFG1_ECMTE119 ECM0DTMCFG1_BASE.BIT._ECMTE119
#define ECM0DTMCFG1_ECMTE120 ECM0DTMCFG1_BASE.BIT._ECMTE120
#define ECM0DTMCFG1_ECMTE121 ECM0DTMCFG1_BASE.BIT._ECMTE121
#define ECM0DTMCFG1_ECMTE122 ECM0DTMCFG1_BASE.BIT._ECMTE122
#define ECM0DTMCFG1_ECMTE123 ECM0DTMCFG1_BASE.BIT._ECMTE123
#define ECM0DTMCFG1_ECMTE124 ECM0DTMCFG1_BASE.BIT._ECMTE124
#define ECM0DTMCFG1_ECMTE125 ECM0DTMCFG1_BASE.BIT._ECMTE125
#define ECM0DTMCFG1_ECMTE126 ECM0DTMCFG1_BASE.BIT._ECMTE126
#define ECM0DTMCFG1_ECMTE127 ECM0DTMCFG1_BASE.BIT._ECMTE127
#define ECM0DTMCFG1_ECMTE128 ECM0DTMCFG1_BASE.BIT._ECMTE128
#define ECM0DTMCFG1_ECMTE129 ECM0DTMCFG1_BASE.BIT._ECMTE129
#define ECM0DTMCFG1_ECMTE130 ECM0DTMCFG1_BASE.BIT._ECMTE130
#define ECM0DTMCFG1_ECMTE131 ECM0DTMCFG1_BASE.BIT._ECMTE131
#define ECM0DTMCFG2 ECM0DTMCFG2_BASE.UINT32
#define ECM0DTMCFG2_ECMTE200 ECM0DTMCFG2_BASE.BIT._ECMTE200
#define ECM0DTMCFG2_ECMTE201 ECM0DTMCFG2_BASE.BIT._ECMTE201
#define ECM0DTMCFG2_ECMTE202 ECM0DTMCFG2_BASE.BIT._ECMTE202
#define ECM0DTMCFG2_ECMTE203 ECM0DTMCFG2_BASE.BIT._ECMTE203
#define ECM0DTMCFG2_ECMTE204 ECM0DTMCFG2_BASE.BIT._ECMTE204
#define ECM0DTMCFG2_ECMTE205 ECM0DTMCFG2_BASE.BIT._ECMTE205
#define ECM0DTMCFG2_ECMTE206 ECM0DTMCFG2_BASE.BIT._ECMTE206
#define ECM0DTMCFG2_ECMTE207 ECM0DTMCFG2_BASE.BIT._ECMTE207
#define ECM0DTMCFG2_ECMTE208 ECM0DTMCFG2_BASE.BIT._ECMTE208
#define ECM0DTMCFG2_ECMTE209 ECM0DTMCFG2_BASE.BIT._ECMTE209
#define ECM0DTMCFG2_ECMTE210 ECM0DTMCFG2_BASE.BIT._ECMTE210
#define ECM0DTMCFG2_ECMTE211 ECM0DTMCFG2_BASE.BIT._ECMTE211
#define ECM0DTMCFG2_ECMTE212 ECM0DTMCFG2_BASE.BIT._ECMTE212
#define ECM0DTMCFG2_ECMTE213 ECM0DTMCFG2_BASE.BIT._ECMTE213
#define ECM0DTMCFG2_ECMTE214 ECM0DTMCFG2_BASE.BIT._ECMTE214
#define ECM0DTMCFG2_ECMTE215 ECM0DTMCFG2_BASE.BIT._ECMTE215
#define ECM0DTMCFG2_ECMTE216 ECM0DTMCFG2_BASE.BIT._ECMTE216
#define ECM0DTMCFG2_ECMTE217 ECM0DTMCFG2_BASE.BIT._ECMTE217
#define ECM0DTMCFG2_ECMTE218 ECM0DTMCFG2_BASE.BIT._ECMTE218
#define ECM0DTMCFG2_ECMTE219 ECM0DTMCFG2_BASE.BIT._ECMTE219
#define ECM0DTMCFG2_ECMTE220 ECM0DTMCFG2_BASE.BIT._ECMTE220
#define ECM0DTMCFG2_ECMTE221 ECM0DTMCFG2_BASE.BIT._ECMTE221
#define ECM0DTMCFG2_ECMTE222 ECM0DTMCFG2_BASE.BIT._ECMTE222
#define ECM0DTMCFG2_ECMTE223 ECM0DTMCFG2_BASE.BIT._ECMTE223
#define ECM0DTMCFG2_ECMTE224 ECM0DTMCFG2_BASE.BIT._ECMTE224
#define ECM0DTMCFG2_ECMTE225 ECM0DTMCFG2_BASE.BIT._ECMTE225
#define ECM0DTMCFG2_ECMTE226 ECM0DTMCFG2_BASE.BIT._ECMTE226
#define ECM0DTMCFG2_ECMTE227 ECM0DTMCFG2_BASE.BIT._ECMTE227
#define ECM0DTMCFG2_ECMTE228 ECM0DTMCFG2_BASE.BIT._ECMTE228
#define ECM0DTMCFG3 ECM0DTMCFG3_BASE.UINT32
#define ECM0DTMCFG3_ECMTE300 ECM0DTMCFG3_BASE.BIT._ECMTE300
#define ECM0DTMCFG3_ECMTE301 ECM0DTMCFG3_BASE.BIT._ECMTE301
#define ECM0DTMCFG3_ECMTE302 ECM0DTMCFG3_BASE.BIT._ECMTE302
#define ECM0DTMCFG3_ECMTE303 ECM0DTMCFG3_BASE.BIT._ECMTE303
#define ECM0DTMCFG3_ECMTE304 ECM0DTMCFG3_BASE.BIT._ECMTE304
#define ECM0DTMCFG3_ECMTE305 ECM0DTMCFG3_BASE.BIT._ECMTE305
#define ECM0DTMCFG3_ECMTE306 ECM0DTMCFG3_BASE.BIT._ECMTE306
#define ECM0DTMCFG3_ECMTE307 ECM0DTMCFG3_BASE.BIT._ECMTE307
#define ECM0DTMCFG3_ECMTE308 ECM0DTMCFG3_BASE.BIT._ECMTE308
#define ECM0DTMCFG3_ECMTE309 ECM0DTMCFG3_BASE.BIT._ECMTE309
#define ECM0DTMCFG3_ECMTE310 ECM0DTMCFG3_BASE.BIT._ECMTE310
#define ECM0DTMCFG3_ECMTE311 ECM0DTMCFG3_BASE.BIT._ECMTE311
#define ECM0DTMCFG3_ECMTE312 ECM0DTMCFG3_BASE.BIT._ECMTE312
#define ECM0DTMCFG3_ECMTE313 ECM0DTMCFG3_BASE.BIT._ECMTE313
#define ECM0DTMCFG3_ECMTE314 ECM0DTMCFG3_BASE.BIT._ECMTE314
#define ECM0DTMCFG3_ECMTE315 ECM0DTMCFG3_BASE.BIT._ECMTE315
#define ECM0DTMCFG3_ECMTE316 ECM0DTMCFG3_BASE.BIT._ECMTE316
#define ECM0DTMCFG3_ECMTE317 ECM0DTMCFG3_BASE.BIT._ECMTE317
#define ECM0DTMCFG3_ECMTE318 ECM0DTMCFG3_BASE.BIT._ECMTE318
#define ECM0DTMCFG3_ECMTE319 ECM0DTMCFG3_BASE.BIT._ECMTE319
#define ECM0DTMCFG3_ECMTE320 ECM0DTMCFG3_BASE.BIT._ECMTE320
#define ECM0DTMCFG3_ECMTE321 ECM0DTMCFG3_BASE.BIT._ECMTE321
#define ECM0DTMCFG3_ECMTE322 ECM0DTMCFG3_BASE.BIT._ECMTE322
#define ECM0DTMCFG3_ECMTE323 ECM0DTMCFG3_BASE.BIT._ECMTE323
#define ECM0DTMCFG3_ECMTE324 ECM0DTMCFG3_BASE.BIT._ECMTE324
#define ECM0DTMCFG3_ECMTE325 ECM0DTMCFG3_BASE.BIT._ECMTE325
#define ECM0DTMCFG3_ECMTE326 ECM0DTMCFG3_BASE.BIT._ECMTE326
#define ECM0DTMCFG3_ECMTE327 ECM0DTMCFG3_BASE.BIT._ECMTE327
#define ECM0DTMCFG3_ECMTE328 ECM0DTMCFG3_BASE.BIT._ECMTE328
#define ECM0DTMCFG3_ECMTE329 ECM0DTMCFG3_BASE.BIT._ECMTE329
#define ECM0DTMCFG3_ECMTE330 ECM0DTMCFG3_BASE.BIT._ECMTE330
#define ECM0DTMCFG3_ECMTE331 ECM0DTMCFG3_BASE.BIT._ECMTE331
#define ECM0DTMCFG4 ECM0DTMCFG4_BASE.UINT32
#define ECM0DTMCFG4_ECMTE400 ECM0DTMCFG4_BASE.BIT._ECMTE400
#define ECM0DTMCFG4_ECMTE401 ECM0DTMCFG4_BASE.BIT._ECMTE401
#define ECM0DTMCFG4_ECMTE402 ECM0DTMCFG4_BASE.BIT._ECMTE402
#define ECM0DTMCFG4_ECMTE403 ECM0DTMCFG4_BASE.BIT._ECMTE403
#define ECM0DTMCFG4_ECMTE404 ECM0DTMCFG4_BASE.BIT._ECMTE404
#define ECM0DTMCFG4_ECMTE405 ECM0DTMCFG4_BASE.BIT._ECMTE405
#define ECM0DTMCFG4_ECMTE406 ECM0DTMCFG4_BASE.BIT._ECMTE406
#define ECM0DTMCFG4_ECMTE407 ECM0DTMCFG4_BASE.BIT._ECMTE407
#define ECM0DTMCFG4_ECMTE408 ECM0DTMCFG4_BASE.BIT._ECMTE408
#define ECM0DTMCFG4_ECMTE409 ECM0DTMCFG4_BASE.BIT._ECMTE409
#define ECM0DTMCFG4_ECMTE410 ECM0DTMCFG4_BASE.BIT._ECMTE410
#define ECM0DTMCFG4_ECMTE411 ECM0DTMCFG4_BASE.BIT._ECMTE411
#define ECM0DTMCFG4_ECMTE412 ECM0DTMCFG4_BASE.BIT._ECMTE412
#define ECM0DTMCFG4_ECMTE413 ECM0DTMCFG4_BASE.BIT._ECMTE413
#define ECM0DTMCFG4_ECMTE414 ECM0DTMCFG4_BASE.BIT._ECMTE414
#define ECM0DTMCFG4_ECMTE415 ECM0DTMCFG4_BASE.BIT._ECMTE415
#define ECM0DTMCFG4_ECMTE416 ECM0DTMCFG4_BASE.BIT._ECMTE416
#define ECM0DTMCFG4_ECMTE417 ECM0DTMCFG4_BASE.BIT._ECMTE417
#define ECM0DTMCFG4_ECMTE418 ECM0DTMCFG4_BASE.BIT._ECMTE418
#define ECM0DTMCFG4_ECMTE419 ECM0DTMCFG4_BASE.BIT._ECMTE419
#define ECM0DTMCFG4_ECMTE420 ECM0DTMCFG4_BASE.BIT._ECMTE420
#define ECM0DTMCFG4_ECMTE421 ECM0DTMCFG4_BASE.BIT._ECMTE421
#define ECM0DTMCFG4_ECMTE422 ECM0DTMCFG4_BASE.BIT._ECMTE422
#define ECM0DTMCFG4_ECMTE423 ECM0DTMCFG4_BASE.BIT._ECMTE423
#define ECM0DTMCFG4_ECMTE424 ECM0DTMCFG4_BASE.BIT._ECMTE424
#define ECM0DTMCFG4_ECMTE425 ECM0DTMCFG4_BASE.BIT._ECMTE425
#define ECM0DTMCFG4_ECMTE426 ECM0DTMCFG4_BASE.BIT._ECMTE426
#define ECM0DTMCFG4_ECMTE427 ECM0DTMCFG4_BASE.BIT._ECMTE427
#define ECM0DTMCFG4_ECMTE428 ECM0DTMCFG4_BASE.BIT._ECMTE428
#define ECM0DTMCFG4_ECMTE429 ECM0DTMCFG4_BASE.BIT._ECMTE429
#define ECM0DTMCFG4_ECMTE430 ECM0DTMCFG4_BASE.BIT._ECMTE430
#define ECM0DTMCFG4_ECMTE431 ECM0DTMCFG4_BASE.BIT._ECMTE431
#define ECM0DTMCFG5 ECM0DTMCFG5_BASE.UINT32
#define ECM0DTMCFG5_ECMTE500 ECM0DTMCFG5_BASE.BIT._ECMTE500
#define ECM0DTMCFG5_ECMTE501 ECM0DTMCFG5_BASE.BIT._ECMTE501
#define ECM0DTMCFG5_ECMTE502 ECM0DTMCFG5_BASE.BIT._ECMTE502
#define ECM0DTMCFG5_ECMTE503 ECM0DTMCFG5_BASE.BIT._ECMTE503
#define ECM0DTMCFG5_ECMTE504 ECM0DTMCFG5_BASE.BIT._ECMTE504
#define ECM0DTMCFG5_ECMTE505 ECM0DTMCFG5_BASE.BIT._ECMTE505
#define ECM0DTMCFG5_ECMTE506 ECM0DTMCFG5_BASE.BIT._ECMTE506
#define ECM0DTMCFG5_ECMTE507 ECM0DTMCFG5_BASE.BIT._ECMTE507
#define ECM0DTMCFG5_ECMTE508 ECM0DTMCFG5_BASE.BIT._ECMTE508
#define ECM0DTMCFG5_ECMTE509 ECM0DTMCFG5_BASE.BIT._ECMTE509
#define ECM0DTMCFG5_ECMTE510 ECM0DTMCFG5_BASE.BIT._ECMTE510
#define ECM0DTMCFG5_ECMTE511 ECM0DTMCFG5_BASE.BIT._ECMTE511
#define ECM0DTMCFG5_ECMTE512 ECM0DTMCFG5_BASE.BIT._ECMTE512
#define ECM0DTMCFG5_ECMTE513 ECM0DTMCFG5_BASE.BIT._ECMTE513
#define ECM0DTMCFG5_ECMTE514 ECM0DTMCFG5_BASE.BIT._ECMTE514
#define ECM0DTMCFG5_ECMTE515 ECM0DTMCFG5_BASE.BIT._ECMTE515
#define ECM0DTMCFG5_ECMTE516 ECM0DTMCFG5_BASE.BIT._ECMTE516
#define ECM0DTMCFG5_ECMTE517 ECM0DTMCFG5_BASE.BIT._ECMTE517
#define ECM0DTMCFG5_ECMTE518 ECM0DTMCFG5_BASE.BIT._ECMTE518
#define ECM0DTMCFG5_ECMTE519 ECM0DTMCFG5_BASE.BIT._ECMTE519
#define ECM0DTMCFG5_ECMTE520 ECM0DTMCFG5_BASE.BIT._ECMTE520
#define ECM0DTMCFG5_ECMTE521 ECM0DTMCFG5_BASE.BIT._ECMTE521
#define ECM0DTMCFG5_ECMTE522 ECM0DTMCFG5_BASE.BIT._ECMTE522
#define ECM0DTMCFG5_ECMTE523 ECM0DTMCFG5_BASE.BIT._ECMTE523
#define ECM0DTMCFG5_ECMTE524 ECM0DTMCFG5_BASE.BIT._ECMTE524
#define ECM0DTMCFG5_ECMTE525 ECM0DTMCFG5_BASE.BIT._ECMTE525
#define ECM0DTMCFG5_ECMTE526 ECM0DTMCFG5_BASE.BIT._ECMTE526
#define ECM0DTMCFG5_ECMTE527 ECM0DTMCFG5_BASE.BIT._ECMTE527
#define ECM0DTMCFG5_ECMTE528 ECM0DTMCFG5_BASE.BIT._ECMTE528
#define ECM0EOCCFG ECM0EOCCFG_BASE.UINT32
#define ECM0EOCCFG_ECMEOUTCLRT ECM0EOCCFG_BASE.BIT._ECMEOUTCLRT
#define ECM0EOCCFG_CMPW ECM0EOCCFG_BASE.BIT._CMPW
#define ECM0PEM ECM0PEM_BASE.UINT32
#define ECM0PEM_MSKC ECM0PEM_BASE.BIT._MSKC
#define ECM0PEM_MSKM ECM0PEM_BASE.BIT._MSKM

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif