#ifndef __NXTRDTSCH_REGDEFNS_HEADER__
#define __NXTRDTSCH_REGDEFNS_HEADER__


/**********************************************************************************************************************
 Module File Name  : NxtrDtsCh_RegDefns.h
 Module Description: Modified DTS Registers for Indexed access
 Project           : CBD
 Author            : Avinash James
**********************************************************************************************************************
 Version Control:
 %version:          2 %
 %derived_by:       rzk04c %
----------------------------------------------------------------------------------------------------------------------
 Date      Rev      Author         Change Description                                                        SCR #
 -------   -------  --------  ----------------------------------------------------------------------------------------
 11/15/17  1        AJM       Nexteer Header file for DTS register indexed access                           EA4#13211
 11/15/17  2        AJM       Corrected the Reserved register array count                                   EA4#13211 
*********************************************************************************************************************/


#include "Std_Types.h"
#include "DMACH_RegDefns.h"
#define __IOREGARRAY(reg, array, addr, attrib, type) PRAGMA(ghs io reg addr) \
extern attrib type reg[array];


/* ------------------------------------------------------------------ */
/* BIT ACCESS STRUCTURES                                              */
/* ------------------------------------------------------------------ */
typedef struct
{
    uint32 _SA0 : 1;
    uint32 _SA1 : 1;
    uint32 _SA2 : 1;
    uint32 _SA3 : 1;
    uint32 _SA4 : 1;
    uint32 _SA5 : 1;
    uint32 _SA6 : 1;
    uint32 _SA7 : 1;
    uint32 _SA8 : 1;
    uint32 _SA9 : 1;
    uint32 _SA10 : 1;
    uint32 _SA11 : 1;
    uint32 _SA12 : 1;
    uint32 _SA13 : 1;
    uint32 _SA14 : 1;
    uint32 _SA15 : 1;
    uint32 _SA16 : 1;
    uint32 _SA17 : 1;
    uint32 _SA18 : 1;
    uint32 _SA19 : 1;
    uint32 _SA20 : 1;
    uint32 _SA21 : 1;
    uint32 _SA22 : 1;
    uint32 _SA23 : 1;
    uint32 _SA24 : 1;
    uint32 _SA25 : 1;
    uint32 _SA26 : 1;
    uint32 _SA27 : 1;
    uint32 _SA28 : 1;
    uint32 _SA29 : 1;
    uint32 _SA30 : 1;
    uint32 _SA31 : 1;
} DTSABits_t;

typedef struct
{
    uint32 _DA0 : 1;
    uint32 _DA1 : 1;
    uint32 _DA2 : 1;
    uint32 _DA3 : 1;
    uint32 _DA4 : 1;
    uint32 _DA5 : 1;
    uint32 _DA6 : 1;
    uint32 _DA7 : 1;
    uint32 _DA8 : 1;
    uint32 _DA9 : 1;
    uint32 _DA10 : 1;
    uint32 _DA11 : 1;
    uint32 _DA12 : 1;
    uint32 _DA13 : 1;
    uint32 _DA14 : 1;
    uint32 _DA15 : 1;
    uint32 _DA16 : 1;
    uint32 _DA17 : 1;
    uint32 _DA18 : 1;
    uint32 _DA19 : 1;
    uint32 _DA20 : 1;
    uint32 _DA21 : 1;
    uint32 _DA22 : 1;
    uint32 _DA23 : 1;
    uint32 _DA24 : 1;
    uint32 _DA25 : 1;
    uint32 _DA26 : 1;
    uint32 _DA27 : 1;
    uint32 _DA28 : 1;
    uint32 _DA29 : 1;
    uint32 _DA30 : 1;
    uint32 _DA31 : 1;
} DTDABits_t;

typedef struct
{
    uint32 _TRC0 : 1;
    uint32 _TRC1 : 1;
    uint32 _TRC2 : 1;
    uint32 _TRC3 : 1;
    uint32 _TRC4 : 1;
    uint32 _TRC5 : 1;
    uint32 _TRC6 : 1;
    uint32 _TRC7 : 1;
    uint32 _TRC8 : 1;
    uint32 _TRC9 : 1;
    uint32 _TRC10 : 1;
    uint32 _TRC11 : 1;
    uint32 _TRC12 : 1;
    uint32 _TRC13 : 1;
    uint32 _TRC14 : 1;
    uint32 _TRC15 : 1;
    uint32 _ARC0 : 1;
    uint32 _ARC1 : 1;
    uint32 _ARC2 : 1;
    uint32 _ARC3 : 1;
    uint32 _ARC4 : 1;
    uint32 _ARC5 : 1;
    uint32 _ARC6 : 1;
    uint32 _ARC7 : 1;
    uint32 _ARC8 : 1;
    uint32 _ARC9 : 1;
    uint32 _ARC10 : 1;
    uint32 _ARC11 : 1;
    uint32 _ARC12 : 1;
    uint32 _ARC13 : 1;
    uint32 _ARC14 : 1;
    uint32 _ARC15 : 1;
} DTTCBits_t;

typedef struct
{
    uint32 _TRM0 : 1;
    uint32 _TRM1 : 1;
    uint32 _DS0 : 1;
    uint32 _DS1 : 1;
    uint32 _DS2 : 1;
    uint32 _SACM0 : 1;
    uint32 _SACM1 : 1;
    uint32 _DACM0 : 1;
    uint32 _DACM1 : 1;
    uint32 _RLD1M0 : 1;
    uint32 _RLD1M1 : 1;
    uint32 _RLD2M0 : 1;
    uint32 _RLD2M1 : 1;
    uint32 padding13 : 1;
    uint32 _TCE : 1;
    uint32 _CCE : 1;
    uint32 _CHNE0 : 1;
    uint32 _CHNE1 : 1;
    uint32 _CHNSEL0 : 1;
    uint32 _CHNSEL1 : 1;
    uint32 _CHNSEL2 : 1;
    uint32 _CHNSEL3 : 1;
    uint32 _CHNSEL4 : 1;
    uint32 _CHNSEL5 : 1;
    uint32 _CHNSEL6 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 _ESE : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} DTTCTBits_t;

typedef struct
{
    uint32 _RSA0 : 1;
    uint32 _RSA1 : 1;
    uint32 _RSA2 : 1;
    uint32 _RSA3 : 1;
    uint32 _RSA4 : 1;
    uint32 _RSA5 : 1;
    uint32 _RSA6 : 1;
    uint32 _RSA7 : 1;
    uint32 _RSA8 : 1;
    uint32 _RSA9 : 1;
    uint32 _RSA10 : 1;
    uint32 _RSA11 : 1;
    uint32 _RSA12 : 1;
    uint32 _RSA13 : 1;
    uint32 _RSA14 : 1;
    uint32 _RSA15 : 1;
    uint32 _RSA16 : 1;
    uint32 _RSA17 : 1;
    uint32 _RSA18 : 1;
    uint32 _RSA19 : 1;
    uint32 _RSA20 : 1;
    uint32 _RSA21 : 1;
    uint32 _RSA22 : 1;
    uint32 _RSA23 : 1;
    uint32 _RSA24 : 1;
    uint32 _RSA25 : 1;
    uint32 _RSA26 : 1;
    uint32 _RSA27 : 1;
    uint32 _RSA28 : 1;
    uint32 _RSA29 : 1;
    uint32 _RSA30 : 1;
    uint32 _RSA31 : 1;
} DTRSABits_t;

typedef struct
{
    uint32 _RDA0 : 1;
    uint32 _RDA1 : 1;
    uint32 _RDA2 : 1;
    uint32 _RDA3 : 1;
    uint32 _RDA4 : 1;
    uint32 _RDA5 : 1;
    uint32 _RDA6 : 1;
    uint32 _RDA7 : 1;
    uint32 _RDA8 : 1;
    uint32 _RDA9 : 1;
    uint32 _RDA10 : 1;
    uint32 _RDA11 : 1;
    uint32 _RDA12 : 1;
    uint32 _RDA13 : 1;
    uint32 _RDA14 : 1;
    uint32 _RDA15 : 1;
    uint32 _RDA16 : 1;
    uint32 _RDA17 : 1;
    uint32 _RDA18 : 1;
    uint32 _RDA19 : 1;
    uint32 _RDA20 : 1;
    uint32 _RDA21 : 1;
    uint32 _RDA22 : 1;
    uint32 _RDA23 : 1;
    uint32 _RDA24 : 1;
    uint32 _RDA25 : 1;
    uint32 _RDA26 : 1;
    uint32 _RDA27 : 1;
    uint32 _RDA28 : 1;
    uint32 _RDA29 : 1;
    uint32 _RDA30 : 1;
    uint32 _RDA31 : 1;
} DTRDABits_t;

typedef struct
{
    uint32 _RTRC0 : 1;
    uint32 _RTRC1 : 1;
    uint32 _RTRC2 : 1;
    uint32 _RTRC3 : 1;
    uint32 _RTRC4 : 1;
    uint32 _RTRC5 : 1;
    uint32 _RTRC6 : 1;
    uint32 _RTRC7 : 1;
    uint32 _RTRC8 : 1;
    uint32 _RTRC9 : 1;
    uint32 _RTRC10 : 1;
    uint32 _RTRC11 : 1;
    uint32 _RTRC12 : 1;
    uint32 _RTRC13 : 1;
    uint32 _RTRC14 : 1;
    uint32 _RTRC15 : 1;
    uint32 _RARC0 : 1;
    uint32 _RARC1 : 1;
    uint32 _RARC2 : 1;
    uint32 _RARC3 : 1;
    uint32 _RARC4 : 1;
    uint32 _RARC5 : 1;
    uint32 _RARC6 : 1;
    uint32 _RARC7 : 1;
    uint32 _RARC8 : 1;
    uint32 _RARC9 : 1;
    uint32 _RARC10 : 1;
    uint32 _RARC11 : 1;
    uint32 _RARC12 : 1;
    uint32 _RARC13 : 1;
    uint32 _RARC14 : 1;
    uint32 _RARC15 : 1;
} DTRTCBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
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
} DTTCCBits_t;

typedef struct
{
    uint32 _REQEN : 1;
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
} DTFSLBits_t;

typedef struct
{
    const uint32 _DRQ : 1;
    const uint32 _OVF : 1;
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
} DTFSTBits_t;

typedef struct
{
    uint32 _DRQS : 1;
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
} DTFSSBits_t;

typedef struct
{
    uint32 _DRQC : 1;
    uint32 _OVFC : 1;
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
} DTFSCBits_t;

typedef union
{
    uint32 UINT32;
    DTSABits_t BIT;
} DTSA_t;

typedef union
{
    uint32 UINT32;
    DTRDABits_t BIT;
} DTDA_t;

typedef union
{
    uint32 UINT32;
    DTTCBits_t BIT;
} DTTC_t;

typedef union
{
    uint32 UINT32;
    DTTCTBits_t BIT;
} DTTCT_t;

typedef union
{
    uint32 UINT32;
    DTRSABits_t BIT;
} DTRSA_t;

typedef union
{
    uint32 UINT32;
    DTRDABits_t BIT;
} DTRDA_t;

typedef union
{
    uint32 UINT32;
    DTRTCBits_t BIT;
} DTRTC_t;


typedef union
{
    uint32 UINT32;
    DTTCCBits_t BIT;
} DTTCC_t;

typedef union
{
    uint32 UINT32;
    DTFSLBits_t BIT;
} DTFSL_t;

typedef union
{
    uint32 UINT32;
    const DTFSTBits_t BIT;
} DTFST_t;

typedef union
{
    uint32 UINT32;
    DTFSSBits_t BIT;
} DTFSS_t;

typedef union
{
    uint32 UINT32;
    DTFSCBits_t BIT;
} DTFSC_t;

typedef struct{
    DTSA_t DMASSDTSA;
    DTDA_t DMASSDTDA;
    DTTC_t DMASSDTTC;
    DTTCT_t DMASSDTTCT;
    DTRSA_t DMASSDTRSA;
    DTRDA_t DMASSDTRDA;
    DTRTC_t DMASSDTRTC;
    DTTCC_t DMASSDTTCC;
    DTFSL_t DMASSDTFSL;
    const DTFST_t DMASSDTFST;
    DTFSS_t DMASSDTFSS;
    DTFSC_t DMASSDTFSC;
    uint8 Resd[16];
}DTSCfgReg;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTSCMBits_t;

typedef union
{
    uint32 UINT32;
    DTSCMBits_t BIT;
} DTSCM;

typedef struct{
    DTSCM DTSnnnCM;
}DTSMasterConfig;

__IOREGARRAY(DTSCfg, 128, 0xFFFF9000, __READ_WRITE, DTSCfgReg);          /* DTSCfgReg[128] */

__IOREGARRAY(DTSMstrCfg, 128, 0xFFFF8200, __READ_WRITE, DTSMasterConfig);          /* DTSMasterConfig[128] */

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif
