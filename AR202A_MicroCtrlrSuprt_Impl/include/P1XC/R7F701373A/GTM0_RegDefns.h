#ifndef __DR7F701373_GTM0_HEADER__
#define __DR7F701373_GTM0_HEADER__



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
    const uint32 _STEP : 8;
    const uint32 _NO : 4;
    const uint32 _MINOR : 4;
    const uint32 _MAJOR : 4;
    const uint32 _DEV_CODE0 : 4;
    const uint32 _DEV_CODE1 : 4;
    const uint32 _DEV_CODE2 : 4;
} GTM0GTMREVBits_t;

typedef struct
{
    uint32 _RST : 1;
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
} GTM0GTMRSTBits_t;

typedef struct
{
    uint32 _RF_PROT : 1;
    uint32 _TO_MODE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _TO_VAL : 5;
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
} GTM0GTMCTRLBits_t;

typedef struct
{
    const uint32 _TO_ADDR : 20;
    const uint32 _TO_W1R0 : 1;
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
} GTM0GTMAEIADDRXPTBits_t;

typedef struct
{
    uint32 _AEI_TO_XPT : 1;
    uint32 _AEI_USP_ADDR : 1;
    uint32 _AEI_IM_ADDR : 1;
    uint32 _AEI_USP_BE : 1;
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
} GTM0GTMIRQNOTIFYBits_t;

typedef struct
{
    uint32 _AEI_TO_XPT_IRQ_EN : 1;
    uint32 _AEI_USP_ADDR_IRQ_EN : 1;
    uint32 _AEI_IM_ADDR_IRQ_EN : 1;
    uint32 _AEI_USP_BE_IRQ_EN : 1;
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
} GTM0GTMIRQENBits_t;

typedef struct
{
    uint32 _TRG_AEI_TO_XPT : 1;
    uint32 _TRG_AEI_USP_ADDR : 1;
    uint32 _TRG_AEI_IM_ADDR : 1;
    uint32 _TRG_AEI_USP_BE : 1;
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
} GTM0GTMIRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0GTMIRQMODEBits_t;

typedef struct
{
    uint32 _AEI_TO_XPT_EIRQ_EN : 1;
    uint32 _AEI_USP_ADDR_EIRQ_EN : 1;
    uint32 _AEI_IM_ADDR_EIRQ_EN : 1;
    uint32 _AEI_USP_BE_EIRQ_EN : 1;
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
} GTM0GTMEIRQENBits_t;

typedef struct
{
    const uint32 _GRSTEN : 1;
    const uint32 _BRIDGE_MODE_RST : 1;
    const uint32 _SYNC_INPUT_REG : 1;
    uint32 padding3 : 1;
    const uint32 _ATOM_OUT_RST : 1;
    const uint32 _ATOM_TRIG_CHAIN : 3;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    const uint32 _RAM_INIT_RST : 1;
    const uint32 _ERM : 1;
    const uint32 _ARU_CONNECT_CONFIG : 1;
    uint32 padding15 : 1;
    const uint32 _IRQ_MODE_LEVEL : 1;
    const uint32 _IRQ_MODE_PULSE : 1;
    const uint32 _IRQ_MODE_PULSE_NOTIFY : 1;
    const uint32 _IRQ_MODE_SINGLE_PULSE : 1;
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
} GTM0GTMHWCONFBits_t;

typedef struct
{
    uint32 _BRG_MODE : 1;
    uint32 _MSK_WR_RSP : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    const uint32 _MODE_UP_PGR : 1;
    uint32 _BUFF_OVL : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    const uint32 _SYNC_INPUT_REG : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _BRG_RST : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _BUFF_DPT : 8;
} GTM0GTMBRIDGEMODEBits_t;

typedef struct
{
    const uint32 _NEW_TRAN_PTR : 5;
    const uint32 _FIRST_RSP_PTR : 5;
    const uint32 _TRAN_IN_PGR : 5;
    const uint32 _ABT_TRAN_PGR : 5;
    const uint32 _FBC : 6;
    const uint32 _RSP_TRAN_RDY : 6;
} GTM0GTMBRIDGEPTR1Bits_t;

typedef struct
{
    const uint32 _TRAN_IN_PGR2 : 5;
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
} GTM0GTMBRIDGEPTR2Bits_t;

typedef struct
{
    uint32 _SRC_CH0 : 1;
    uint32 _SRC_CH1 : 1;
    uint32 _SRC_CH2 : 1;
    uint32 _SRC_CH3 : 1;
    uint32 _SRC_CH4 : 1;
    uint32 _SRC_CH5 : 1;
    uint32 _SRC_CH6 : 1;
    uint32 _SRC_CH7 : 1;
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
} GTM0GTMTIM0AUXINSRCBits_t;

typedef struct
{
    uint32 _SRC_CH0 : 1;
    uint32 _SRC_CH1 : 1;
    uint32 _SRC_CH2 : 1;
    uint32 _SRC_CH3 : 1;
    uint32 _SRC_CH4 : 1;
    uint32 _SRC_CH5 : 1;
    uint32 _SRC_CH6 : 1;
    uint32 _SRC_CH7 : 1;
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
} GTM0GTMTIM1AUXINSRCBits_t;

typedef struct
{
    uint32 _TIM_I_EXT_CAP_EN : 8;
    uint32 _TIM_IP1_EXT_CAP_EN : 8;
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
} GTM0GTMEXTCAPEN0Bits_t;

typedef struct
{
    const uint32 _ATOM_I_OUT : 8;
    const uint32 _ATOM_I_OUT_N : 8;
    const uint32 _ATOM_IP1_OUT : 8;
    const uint32 _ATOM_IP1_OUT_N : 8;
} GTM0GTMATOM0OUTBits_t;

typedef struct
{
    uint32 _ENDIS_CH0 : 2;
    uint32 _ENDIS_CH1 : 2;
    uint32 _ENDIS_CH2 : 2;
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
} GTM0TBUCHENBits_t;

typedef struct
{
    uint32 _LOW_RES : 1;
    uint32 _CH_CLK_SRC : 3;
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
} GTM0TBU0CTRLBits_t;

typedef struct
{
    uint32 _BASE : 27;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TBU0BASEBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _CH_CLK_SRC : 3;
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
} GTM0TBU1CTRLBits_t;

typedef struct
{
    uint32 _BASE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TBU1BASEBits_t;

typedef struct
{
    uint32 _ACT_CMU0 : 1;
    uint32 _ACT_CMU1 : 1;
    uint32 _ACT_CMU2 : 1;
    uint32 _ACT_CMU3 : 1;
    uint32 _ACT_CMU4 : 1;
    uint32 _ACT_CMU5 : 1;
    uint32 _ACT_CMU6 : 1;
    uint32 _ACT_CMU7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _CMP_ERR : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    const uint32 _MCS0_ERR : 1;
    const uint32 _MCS1_ERR : 1;
    const uint32 _MCS2_ERR : 1;
    const uint32 _MCS3_ERR : 1;
    const uint32 _MCS4_ERR : 1;
    const uint32 _MCS5_ERR : 1;
    const uint32 _MCS6_ERR : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MONSTATUSBits_t;

typedef struct
{
    uint32 _MCA_0_0 : 1;
    uint32 _MCA_0_1 : 1;
    uint32 _MCA_0_2 : 1;
    uint32 _MCA_0_3 : 1;
    uint32 _MCA_0_4 : 1;
    uint32 _MCA_0_5 : 1;
    uint32 _MCA_0_6 : 1;
    uint32 _MCA_0_7 : 1;
    uint32 _MCA_1_0 : 1;
    uint32 _MCA_1_1 : 1;
    uint32 _MCA_1_2 : 1;
    uint32 _MCA_1_3 : 1;
    uint32 _MCA_1_4 : 1;
    uint32 _MCA_1_5 : 1;
    uint32 _MCA_1_6 : 1;
    uint32 _MCA_1_7 : 1;
    uint32 _MCA_2_0 : 1;
    uint32 _MCA_2_1 : 1;
    uint32 _MCA_2_2 : 1;
    uint32 _MCA_2_3 : 1;
    uint32 _MCA_2_4 : 1;
    uint32 _MCA_2_5 : 1;
    uint32 _MCA_2_6 : 1;
    uint32 _MCA_2_7 : 1;
    uint32 _MCA_3_0 : 1;
    uint32 _MCA_3_1 : 1;
    uint32 _MCA_3_2 : 1;
    uint32 _MCA_3_3 : 1;
    uint32 _MCA_3_4 : 1;
    uint32 _MCA_3_5 : 1;
    uint32 _MCA_3_6 : 1;
    uint32 _MCA_3_7 : 1;
} GTM0MONACTIVITY0Bits_t;

typedef struct
{
    uint32 _MCA_0 : 1;
    uint32 _MCA_1 : 1;
    uint32 _MCA_2 : 1;
    uint32 _MCA_3 : 1;
    uint32 _MCA_4 : 1;
    uint32 _MCA_5 : 1;
    uint32 _MCA_6 : 1;
    uint32 _MCA_7 : 1;
    uint32 _MCA_8 : 1;
    uint32 _MCA_9 : 1;
    uint32 _MCA_10 : 1;
    uint32 _MCA_11 : 1;
    uint32 _MCA_12 : 1;
    uint32 _MCA_13 : 1;
    uint32 _MCA_14 : 1;
    uint32 _MCA_15 : 1;
    uint32 _MCA_16 : 1;
    uint32 _MCA_17 : 1;
    uint32 _MCA_18 : 1;
    uint32 _MCA_19 : 1;
    uint32 _MCA_20 : 1;
    uint32 _MCA_21 : 1;
    uint32 _MCA_22 : 1;
    uint32 _MCA_23 : 1;
    const uint32 _MCA_24 : 1;
    const uint32 _MCA_25 : 1;
    const uint32 _MCA_26 : 1;
    const uint32 _MCA_27 : 1;
    const uint32 _MCA_28 : 1;
    const uint32 _MCA_29 : 1;
    const uint32 _MCA_30 : 1;
    const uint32 _MCA_31 : 1;
} GTM0MONACTIVITYMCS0Bits_t;

typedef struct
{
    uint32 _ABWC0_EN : 1;
    uint32 _ABWC1_EN : 1;
    uint32 _ABWC2_EN : 1;
    uint32 _ABWC3_EN : 1;
    uint32 _ABWC4_EN : 1;
    uint32 _ABWC5_EN : 1;
    uint32 _ABWC6_EN : 1;
    uint32 _ABWC7_EN : 1;
    uint32 _ABWC8_EN : 1;
    uint32 _ABWC9_EN : 1;
    uint32 _ABWC10_EN : 1;
    uint32 _ABWC11_EN : 1;
    uint32 _TBWC0_EN : 1;
    uint32 _TBWC1_EN : 1;
    uint32 _TBWC2_EN : 1;
    uint32 _TBWC3_EN : 1;
    uint32 _TBWC4_EN : 1;
    uint32 _TBWC5_EN : 1;
    uint32 _TBWC6_EN : 1;
    uint32 _TBWC7_EN : 1;
    uint32 _TBWC8_EN : 1;
    uint32 _TBWC9_EN : 1;
    uint32 _TBWC10_EN : 1;
    uint32 _TBWC11_EN : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMPENBits_t;

typedef struct
{
    uint32 _ABWC0 : 1;
    uint32 _ABWC1 : 1;
    uint32 _ABWC2 : 1;
    uint32 _ABWC3 : 1;
    uint32 _ABWC4 : 1;
    uint32 _ABWC5 : 1;
    uint32 _ABWC6 : 1;
    uint32 _ABWC7 : 1;
    uint32 _ABWC8 : 1;
    uint32 _ABWC9 : 1;
    uint32 _ABWC10 : 1;
    uint32 _ABWC11 : 1;
    uint32 _TBWC0 : 1;
    uint32 _TBWC1 : 1;
    uint32 _TBWC2 : 1;
    uint32 _TBWC3 : 1;
    uint32 _TBWC4 : 1;
    uint32 _TBWC5 : 1;
    uint32 _TBWC6 : 1;
    uint32 _TBWC7 : 1;
    uint32 _TBWC8 : 1;
    uint32 _TBWC9 : 1;
    uint32 _TBWC10 : 1;
    uint32 _TBWC11 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMPIRQNOTIFYBits_t;

typedef struct
{
    uint32 _ABWC0_EN_IRQ : 1;
    uint32 _ABWC1_EN_IRQ : 1;
    uint32 _ABWC2_EN_IRQ : 1;
    uint32 _ABWC3_EN_IRQ : 1;
    uint32 _ABWC4_EN_IRQ : 1;
    uint32 _ABWC5_EN_IRQ : 1;
    uint32 _ABWC6_EN_IRQ : 1;
    uint32 _ABWC7_EN_IRQ : 1;
    uint32 _ABWC8_EN_IRQ : 1;
    uint32 _ABWC9_EN_IRQ : 1;
    uint32 _ABWC10_EN_IRQ : 1;
    uint32 _ABWC11_EN_IRQ : 1;
    uint32 _TBWC0_EN_IRQ : 1;
    uint32 _TBWC1_EN_IRQ : 1;
    uint32 _TBWC2_EN_IRQ : 1;
    uint32 _TBWC3_EN_IRQ : 1;
    uint32 _TBWC4_EN_IRQ : 1;
    uint32 _TBWC5_EN_IRQ : 1;
    uint32 _TBWC6_EN_IRQ : 1;
    uint32 _TBWC7_EN_IRQ : 1;
    uint32 _TBWC8_EN_IRQ : 1;
    uint32 _TBWC9_EN_IRQ : 1;
    uint32 _TBWC10_EN_IRQ : 1;
    uint32 _TBWC11_EN_IRQ : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMPIRQENBits_t;

typedef struct
{
    uint32 _TRG_ABWC0 : 1;
    uint32 _TRG_ABWC1 : 1;
    uint32 _TRG_ABWC2 : 1;
    uint32 _TRG_ABWC3 : 1;
    uint32 _TRG_ABWC4 : 1;
    uint32 _TRG_ABWC5 : 1;
    uint32 _TRG_ABWC6 : 1;
    uint32 _TRG_ABWC7 : 1;
    uint32 _TRG_ABWC8 : 1;
    uint32 _TRG_ABWC9 : 1;
    uint32 _TRG_ABWC10 : 1;
    uint32 _TRG_ABWC11 : 1;
    uint32 _TRG_TBWC0 : 1;
    uint32 _TRG_TBWC1 : 1;
    uint32 _TRG_TBWC2 : 1;
    uint32 _TRG_TBWC3 : 1;
    uint32 _TRG_TBWC4 : 1;
    uint32 _TRG_TBWC5 : 1;
    uint32 _TRG_TBWC6 : 1;
    uint32 _TRG_TBWC7 : 1;
    uint32 _TRG_TBWC8 : 1;
    uint32 _TRG_TBWC9 : 1;
    uint32 _TRG_TBWC10 : 1;
    uint32 _TRG_TBWC11 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMPIRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0CMPIRQMODEBits_t;

typedef struct
{
    uint32 _ABWC0_EN_EIRQ : 1;
    uint32 _ABWC1_EN_EIRQ : 1;
    uint32 _ABWC2_EN_EIRQ : 1;
    uint32 _ABWC3_EN_EIRQ : 1;
    uint32 _ABWC4_EN_EIRQ : 1;
    uint32 _ABWC5_EN_EIRQ : 1;
    uint32 _ABWC6_EN_EIRQ : 1;
    uint32 _ABWC7_EN_EIRQ : 1;
    uint32 _ABWC8_EN_EIRQ : 1;
    uint32 _ABWC9_EN_EIRQ : 1;
    uint32 _ABWC10_EN_EIRQ : 1;
    uint32 _ABWC11_EN_EIRQ : 1;
    uint32 _TBWC0_EN_EIRQ : 1;
    uint32 _TBWC1_EN_EIRQ : 1;
    uint32 _TBWC2_EN_EIRQ : 1;
    uint32 _TBWC3_EN_EIRQ : 1;
    uint32 _TBWC4_EN_EIRQ : 1;
    uint32 _TBWC5_EN_EIRQ : 1;
    uint32 _TBWC6_EN_EIRQ : 1;
    uint32 _TBWC7_EN_EIRQ : 1;
    uint32 _TBWC8_EN_EIRQ : 1;
    uint32 _TBWC9_EN_EIRQ : 1;
    uint32 _TBWC10_EN_EIRQ : 1;
    uint32 _TBWC11_EN_EIRQ : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMPEIRQENBits_t;

typedef struct
{
    uint32 _ADDR : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _RREQ : 1;
    uint32 _WREQ : 1;
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
} GTM0ARUACCESSBits_t;

typedef struct
{
    uint32 _DATA : 29;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ARUDATAHBits_t;

typedef struct
{
    uint32 _DATA : 29;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ARUDATALBits_t;

typedef struct
{
    uint32 _ADDR : 9;
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
} GTM0ARUDBGACCESS0Bits_t;

typedef struct
{
    const uint32 _DATA : 29;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ARUDBGDATA0HBits_t;

typedef struct
{
    const uint32 _DATA : 29;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ARUDBGDATA0LBits_t;

typedef struct
{
    uint32 _ADDR : 9;
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
} GTM0ARUDBGACCESS1Bits_t;

typedef struct
{
    const uint32 _DATA : 29;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ARUDBGDATA1HBits_t;

typedef struct
{
    const uint32 _DATA : 29;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ARUDBGDATA1LBits_t;

typedef struct
{
    uint32 _NEW_DATA0 : 1;
    uint32 _NEW_DATA1 : 1;
    uint32 _ACC_ACK : 1;
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
} GTM0ARUIRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEW_DATA0_IR : 1;
    uint32 _NEW_DATA1_IR : 1;
    uint32 _ACC_ACK_IRQ : 1;
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
} GTM0ARUIRQENBits_t;

typedef struct
{
    uint32 _TRG_NEW_DATA0 : 1;
    uint32 _TRG_NEW_DATA1 : 1;
    uint32 _TRG_ACC_ACK : 1;
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
} GTM0ARUIRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0ARUIRQMODEBits_t;

typedef struct
{
    uint32 _CADDR_END : 7;
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
} GTM0ARUCADDRENDBits_t;

typedef struct
{
    uint32 _EN_CLK0 : 2;
    uint32 _EN_CLK1 : 2;
    uint32 _EN_CLK2 : 2;
    uint32 _EN_CLK3 : 2;
    uint32 _EN_CLK4 : 2;
    uint32 _EN_CLK5 : 2;
    uint32 _EN_CLK6 : 2;
    uint32 _EN_CLK7 : 2;
    uint32 _EN_ECLK0 : 2;
    uint32 _EN_ECLK1 : 2;
    uint32 _EN_ECLK2 : 2;
    uint32 _EN_ECLK3 : 2;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMUCLKENBits_t;

typedef struct
{
    uint32 _CMU_GCLK_NUM : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMUGCLKNUMBits_t;

typedef struct
{
    uint32 _GCLK_DEN : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMUGCLKDENBits_t;

typedef struct
{
    uint32 _CLK_CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMUCLK0CTRLBits_t;

typedef struct
{
    uint32 _CLK_CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMUCLK1CTRLBits_t;

typedef struct
{
    uint32 _CLK_CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMUCLK2CTRLBits_t;

typedef struct
{
    uint32 _CLK_CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMUCLK3CTRLBits_t;

typedef struct
{
    uint32 _CLK_CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMUCLK4CTRLBits_t;

typedef struct
{
    uint32 _CLK_CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMUCLK5CTRLBits_t;

typedef struct
{
    uint32 _CLK_CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMUCLK6CTRLBits_t;

typedef struct
{
    uint32 _CLK_CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0CMUCLK7CTRLBits_t;

typedef struct
{
    uint32 _ARU_ADDR_RSTGLB : 1;
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
} GTM0CMUGLBCTRLBits_t;

typedef struct
{
    const uint32 _ARU_NEW_DATA0_IRQ : 1;
    const uint32 _ARU_NEW_DATA1_IRQ : 1;
    const uint32 _ARU_ACC_ACK_IRQ : 1;
    uint32 padding3 : 1;
    const uint32 _AEI_IRQ : 1;
    const uint32 _CMP_IRQ : 1;
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
} GTM0ICMIRQG0Bits_t;

typedef struct
{
    const uint32 _TIM0_CH0_IRQ : 1;
    const uint32 _TIM0_CH1_IRQ : 1;
    const uint32 _TIM0_CH2_IRQ : 1;
    const uint32 _TIM0_CH3_IRQ : 1;
    const uint32 _TIM0_CH4_IRQ : 1;
    const uint32 _TIM0_CH5_IRQ : 1;
    const uint32 _TIM0_CH6_IRQ : 1;
    const uint32 _TIM0_CH7_IRQ : 1;
    const uint32 _TIM1_CH0_IRQ : 1;
    const uint32 _TIM1_CH1_IRQ : 1;
    const uint32 _TIM1_CH2_IRQ : 1;
    const uint32 _TIM1_CH3_IRQ : 1;
    const uint32 _TIM1_CH4_IRQ : 1;
    const uint32 _TIM1_CH5_IRQ : 1;
    const uint32 _TIM1_CH6_IRQ : 1;
    const uint32 _TIM1_CH7_IRQ : 1;
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
} GTM0ICMIRQG2Bits_t;

typedef struct
{
    const uint32 _MCS0_CH0_IRQ : 1;
    const uint32 _MCS0_CH1_IRQ : 1;
    const uint32 _MCS0_CH2_IRQ : 1;
    const uint32 _MCS0_CH3_IRQ : 1;
    const uint32 _MCS0_CH4_IRQ : 1;
    const uint32 _MCS0_CH5_IRQ : 1;
    const uint32 _MCS0_CH6_IRQ : 1;
    const uint32 _MCS0_CH7_IRQ : 1;
    const uint32 _MCS1_CH0_IRQ : 1;
    const uint32 _MCS1_CH1_IRQ : 1;
    const uint32 _MCS1_CH2_IRQ : 1;
    const uint32 _MCS1_CH3_IRQ : 1;
    const uint32 _MCS1_CH4_IRQ : 1;
    const uint32 _MCS1_CH5_IRQ : 1;
    const uint32 _MCS1_CH6_IRQ : 1;
    const uint32 _MCS1_CH7_IRQ : 1;
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
} GTM0ICMIRQG4Bits_t;

typedef struct
{
    const uint32 _ATOM0_CH0_IRQ : 1;
    const uint32 _ATOM0_CH1_IRQ : 1;
    const uint32 _ATOM0_CH2_IRQ : 1;
    const uint32 _ATOM0_CH3_IRQ : 1;
    const uint32 _ATOM0_CH4_IRQ : 1;
    const uint32 _ATOM0_CH5_IRQ : 1;
    const uint32 _ATOM0_CH6_IRQ : 1;
    const uint32 _ATOM0_CH7_IRQ : 1;
    const uint32 _ATOM1_CH0_IRQ : 1;
    const uint32 _ATOM1_CH1_IRQ : 1;
    const uint32 _ATOM1_CH2_IRQ : 1;
    const uint32 _ATOM1_CH3_IRQ : 1;
    const uint32 _ATOM1_CH4_IRQ : 1;
    const uint32 _ATOM1_CH5_IRQ : 1;
    const uint32 _ATOM1_CH6_IRQ : 1;
    const uint32 _ATOM1_CH7_IRQ : 1;
    const uint32 _ATOM2_CH0_IRQ : 1;
    const uint32 _ATOM2_CH1_IRQ : 1;
    const uint32 _ATOM2_CH2_IRQ : 1;
    const uint32 _ATOM2_CH3_IRQ : 1;
    const uint32 _ATOM2_CH4_IRQ : 1;
    const uint32 _ATOM2_CH5_IRQ : 1;
    const uint32 _ATOM2_CH6_IRQ : 1;
    const uint32 _ATOM2_CH7_IRQ : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ICMIRQG9Bits_t;

typedef struct
{
    const uint32 _GTM_EIRQ : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    const uint32 _TIM0_EIRQ : 1;
    const uint32 _TIM1_EIRQ : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    const uint32 _MCS0_EIRQ : 1;
    const uint32 _MCS1_EIRQ : 1;
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
    const uint32 _CMP_EIRQ : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ICMIRQGMEIBits_t;

typedef struct
{
    const uint32 _TIM0_CH0_EIRQ : 1;
    const uint32 _TIM0_CH1_EIRQ : 1;
    const uint32 _TIM0_CH2_EIRQ : 1;
    const uint32 _TIM0_CH3_EIRQ : 1;
    const uint32 _TIM0_CH4_EIRQ : 1;
    const uint32 _TIM0_CH5_EIRQ : 1;
    const uint32 _TIM0_CH6_EIRQ : 1;
    const uint32 _TIM0_CH7_EIRQ : 1;
    const uint32 _TIM1_CH0_EIRQ : 1;
    const uint32 _TIM1_CH1_EIRQ : 1;
    const uint32 _TIM1_CH2_EIRQ : 1;
    const uint32 _TIM1_CH3_EIRQ : 1;
    const uint32 _TIM1_CH4_EIRQ : 1;
    const uint32 _TIM1_CH5_EIRQ : 1;
    const uint32 _TIM1_CH6_EIRQ : 1;
    const uint32 _TIM1_CH7_EIRQ : 1;
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
} GTM0ICMIRQGCEI1Bits_t;

typedef struct
{
    const uint32 _MCS0_CH0_EIRQ : 1;
    const uint32 _MCS0_CH1_EIRQ : 1;
    const uint32 _MCS0_CH2_EIRQ : 1;
    const uint32 _MCS0_CH3_EIRQ : 1;
    const uint32 _MCS0_CH4_EIRQ : 1;
    const uint32 _MCS0_CH5_EIRQ : 1;
    const uint32 _MCS0_CH6_EIRQ : 1;
    const uint32 _MCS0_CH7_EIRQ : 1;
    const uint32 _MCS1_CH0_EIRQ : 1;
    const uint32 _MCS1_CH1_EIRQ : 1;
    const uint32 _MCS1_CH2_EIRQ : 1;
    const uint32 _MCS1_CH3_EIRQ : 1;
    const uint32 _MCS1_CH4_EIRQ : 1;
    const uint32 _MCS1_CH5_EIRQ : 1;
    const uint32 _MCS1_CH6_EIRQ : 1;
    const uint32 _MCS1_CH7_EIRQ : 1;
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
} GTM0ICMIRQGCEI3Bits_t;

typedef struct
{
    const uint32 _MCS0_CH0_IRQ : 1;
    const uint32 _MCS0_CH1_IRQ : 1;
    const uint32 _MCS0_CH2_IRQ : 1;
    const uint32 _MCS0_CH3_IRQ : 1;
    const uint32 _MCS0_CH4_IRQ : 1;
    const uint32 _MCS0_CH5_IRQ : 1;
    const uint32 _MCS0_CH6_IRQ : 1;
    const uint32 _MCS0_CH7_IRQ : 1;
    const uint32 _MCS0_CH8_IRQ : 1;
    const uint32 _MCS0_CH9_IRQ : 1;
    const uint32 _MCS0_CH10_IRQ : 1;
    const uint32 _MCS0_CH11_IRQ : 1;
    const uint32 _MCS0_CH12_IRQ : 1;
    const uint32 _MCS0_CH13_IRQ : 1;
    const uint32 _MCS0_CH14_IRQ : 1;
    const uint32 _MCS0_CH15_IRQ : 1;
    const uint32 _MCS0_CH16_IRQ : 1;
    const uint32 _MCS0_CH17_IRQ : 1;
    const uint32 _MCS0_CH18_IRQ : 1;
    const uint32 _MCS0_CH19_IRQ : 1;
    const uint32 _MCS0_CH20_IRQ : 1;
    const uint32 _MCS0_CH21_IRQ : 1;
    const uint32 _MCS0_CH22_IRQ : 1;
    const uint32 _MCS0_CH23_IRQ : 1;
    const uint32 _MCS0_CH24_IRQ : 1;
    const uint32 _MCS0_CH25_IRQ : 1;
    const uint32 _MCS0_CH26_IRQ : 1;
    const uint32 _MCS0_CH27_IRQ : 1;
    const uint32 _MCS0_CH28_IRQ : 1;
    const uint32 _MCS0_CH29_IRQ : 1;
    const uint32 _MCS0_CH30_IRQ : 1;
    const uint32 _MCS0_CH31_IRQ : 1;
} GTM0ICMIRQGMCS0CIBits_t;

typedef struct
{
    const uint32 _MCS0_CH0_IRQ : 1;
    const uint32 _MCS0_CH1_IRQ : 1;
    const uint32 _MCS0_CH2_IRQ : 1;
    const uint32 _MCS0_CH3_IRQ : 1;
    const uint32 _MCS0_CH4_IRQ : 1;
    const uint32 _MCS0_CH5_IRQ : 1;
    const uint32 _MCS0_CH6_IRQ : 1;
    const uint32 _MCS0_CH7_IRQ : 1;
    const uint32 _MCS0_CH8_IRQ : 1;
    const uint32 _MCS0_CH9_IRQ : 1;
    const uint32 _MCS0_CH10_IRQ : 1;
    const uint32 _MCS0_CH11_IRQ : 1;
    const uint32 _MCS0_CH12_IRQ : 1;
    const uint32 _MCS0_CH13_IRQ : 1;
    const uint32 _MCS0_CH14_IRQ : 1;
    const uint32 _MCS0_CH15_IRQ : 1;
    const uint32 _MCS0_CH16_IRQ : 1;
    const uint32 _MCS0_CH17_IRQ : 1;
    const uint32 _MCS0_CH18_IRQ : 1;
    const uint32 _MCS0_CH19_IRQ : 1;
    const uint32 _MCS0_CH20_IRQ : 1;
    const uint32 _MCS0_CH21_IRQ : 1;
    const uint32 _MCS0_CH22_IRQ : 1;
    const uint32 _MCS0_CH23_IRQ : 1;
    const uint32 _MCS0_CH24_IRQ : 1;
    const uint32 _MCS0_CH25_IRQ : 1;
    const uint32 _MCS0_CH26_IRQ : 1;
    const uint32 _MCS0_CH27_IRQ : 1;
    const uint32 _MCS0_CH28_IRQ : 1;
    const uint32 _MCS0_CH29_IRQ : 1;
    const uint32 _MCS0_CH30_IRQ : 1;
    const uint32 _MCS0_CH31_IRQ : 1;
} GTM0ICMIRQGMCS0CEIBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM00GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM00GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM00CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM00ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM00CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM00TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM00TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM00FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM00FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 _TBU0_SEL : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM00CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM00ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM00IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM00IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM00IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM00IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM00EIRQENBits_t;

typedef struct
{
    const uint32 _F_OUT : 8;
    const uint32 _F_IN : 8;
    const uint32 _TIM_IN : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM0INPVALBits_t;

typedef struct
{
    uint32 _VAL_0 : 2;
    uint32 _MODE_0 : 2;
    uint32 _VAL_1 : 2;
    uint32 _MODE_1 : 2;
    uint32 _VAL_2 : 2;
    uint32 _MODE_2 : 2;
    uint32 _VAL_3 : 2;
    uint32 _MODE_3 : 2;
    uint32 _VAL_4 : 2;
    uint32 _MODE_4 : 2;
    uint32 _VAL_5 : 2;
    uint32 _MODE_5 : 2;
    uint32 _VAL_6 : 2;
    uint32 _MODE_6 : 2;
    uint32 _VAL_7 : 2;
    uint32 _MODE_7 : 2;
} GTM0TIM0INSRCBits_t;

typedef struct
{
    uint32 _RST_CH0 : 1;
    uint32 _RST_CH1 : 1;
    uint32 _RST_CH2 : 1;
    uint32 _RST_CH3 : 1;
    uint32 _RST_CH4 : 1;
    uint32 _RST_CH5 : 1;
    uint32 _RST_CH6 : 1;
    uint32 _RST_CH7 : 1;
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
} GTM0TIM0RSTBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM01GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM01GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM01CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM01ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM01CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM01TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM01TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM01FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM01FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 _TBU0_SEL : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM01CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM01ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM01IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM01IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM01IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM01IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM01EIRQENBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM02GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM02GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM02CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM02ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM02CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM02TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM02TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM02FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM02FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 _TBU0_SEL : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM02CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM02ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM02IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM02IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM02IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM02IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM02EIRQENBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM03GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM03GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM03CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM03ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM03CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM03TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM03TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM03FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM03FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 _TBU0_SEL : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM03CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM03ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM03IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM03IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM03IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM03IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM03EIRQENBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM04GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM04GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM04CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM04ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM04CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM04TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM04TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM04FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM04FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 _TBU0_SEL : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM04CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM04ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM04IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM04IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM04IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM04IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM04EIRQENBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM05GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM05GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM05CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM05ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM05CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM05TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM05TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM05FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM05FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 _TBU0_SEL : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM05CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM05ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM05IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM05IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM05IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM05IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM05EIRQENBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM06GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM06GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM06CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM06ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM06CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM06TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM06TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM06FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM06FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 _TBU0_SEL : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM06CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM06ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM06IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM06IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM06IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM06IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM06EIRQENBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM07GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM07GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM07CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM07ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM07CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM07TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM07TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM07FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM07FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 _TBU0_SEL : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM07CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM07ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM07IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM07IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM07IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM07IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM07EIRQENBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM10GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM10GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM10CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM10ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM10CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM10TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM10TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM10FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM10FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 padding7 : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM10CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM10ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM10IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM10IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM10IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM10IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM10EIRQENBits_t;

typedef struct
{
    const uint32 _F_OUT : 8;
    const uint32 _F_IN : 8;
    const uint32 _TIM_IN : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM1INPVALBits_t;

typedef struct
{
    uint32 _VAL_0 : 2;
    uint32 _MODE_0 : 2;
    uint32 _VAL_1 : 2;
    uint32 _MODE_1 : 2;
    uint32 _VAL_2 : 2;
    uint32 _MODE_2 : 2;
    uint32 _VAL_3 : 2;
    uint32 _MODE_3 : 2;
    uint32 _VAL_4 : 2;
    uint32 _MODE_4 : 2;
    uint32 _VAL_5 : 2;
    uint32 _MODE_5 : 2;
    uint32 _VAL_6 : 2;
    uint32 _MODE_6 : 2;
    uint32 _VAL_7 : 2;
    uint32 _MODE_7 : 2;
} GTM0TIM1INSRCBits_t;

typedef struct
{
    uint32 _RST_CH0 : 1;
    uint32 _RST_CH1 : 1;
    uint32 _RST_CH2 : 1;
    uint32 _RST_CH3 : 1;
    uint32 _RST_CH4 : 1;
    uint32 _RST_CH5 : 1;
    uint32 _RST_CH6 : 1;
    uint32 _RST_CH7 : 1;
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
} GTM0TIM1RSTBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM11GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM11GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM11CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM11ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM11CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM11TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM11TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM11FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM11FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 padding7 : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM11CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM11ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM11IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM11IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM11IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM11IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM11EIRQENBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM12GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM12GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM12CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM12ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM12CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM12TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM12TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM12FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM12FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 padding7 : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM12CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM12ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM12IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM12IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM12IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM12IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM12EIRQENBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM13GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM13GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM13CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM13ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM13CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM13TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM13TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM13FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM13FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 padding7 : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM13CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM13ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM13IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM13IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM13IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM13IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM13EIRQENBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM14GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM14GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM14CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM14ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM14CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM14TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM14TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM14FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM14FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 padding7 : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM14CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM14ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM14IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM14IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM14IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM14IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM14EIRQENBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM15GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM15GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM15CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM15ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM15CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM15TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM15TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM15FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM15FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 padding7 : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM15CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM15ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM15IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM15IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM15IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM15IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM15EIRQENBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM16GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM16GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM16CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM16ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM16CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM16TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM16TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM16FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM16FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 padding7 : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM16CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM16ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM16IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM16IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM16IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM16IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM16EIRQENBits_t;

typedef struct
{
    const uint32 _GPR0 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM17GPR0Bits_t;

typedef struct
{
    uint32 _GPR1 : 24;
    const uint32 _ECNT : 8;
} GTM0TIM17GPR1Bits_t;

typedef struct
{
    const uint32 _CNT : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM17CNTBits_t;

typedef struct
{
    const uint32 _ECNT : 16;
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
} GTM0TIM17ECNTBits_t;

typedef struct
{
    uint32 _CNTS : 24;
    const uint32 _ECNT : 8;
} GTM0TIM17CNTSBits_t;

typedef struct
{
    const uint32 _TO_CNT : 8;
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
} GTM0TIM17TDUCBits_t;

typedef struct
{
    uint32 _TOV : 8;
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
    uint32 _TCS : 3;
    uint32 padding31 : 1;
} GTM0TIM17TDUVBits_t;

typedef struct
{
    uint32 _FLT_RE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM17FLTREBits_t;

typedef struct
{
    uint32 _FLT_FE : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0TIM17FLTFEBits_t;

typedef struct
{
    uint32 _TIM_EN : 1;
    uint32 _TIM_MODE : 3;
    uint32 _OSM : 1;
    uint32 _ARU_EN : 1;
    uint32 _CICTRL : 1;
    uint32 padding7 : 1;
    uint32 _GPR0_SEL : 2;
    uint32 _GPR1_SEL : 2;
    uint32 _CNTS_SEL : 1;
    uint32 _DSL : 1;
    uint32 _ISL : 1;
    uint32 _ECNT_RESET : 1;
    uint32 _FLT_EN : 1;
    uint32 _FLT_CNT_FRQ : 2;
    uint32 _EXT_CAP_EN : 1;
    uint32 _FLT_MODE_RE : 1;
    uint32 _FLT_CTR_RE : 1;
    uint32 _FLT_MODE_FE : 1;
    uint32 _FLT_CTR_FE : 1;
    uint32 _CLK_SEL : 3;
    uint32 _FR_ECNT_OFL : 1;
    uint32 _EGPR0_SEL : 1;
    uint32 _EGPR1_SEL : 1;
    uint32 _TOCTRL : 2;
} GTM0TIM17CTRLBits_t;

typedef struct
{
    uint32 _EXT_CAP_SRC : 4;
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
} GTM0TIM17ECTRLBits_t;

typedef struct
{
    uint32 _NEWVAL : 1;
    uint32 _ECNTOFL : 1;
    uint32 _CNTOFL : 1;
    uint32 _GPROFL : 1;
    uint32 _TODET : 1;
    uint32 _GLITCHDET : 1;
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
} GTM0TIM17IRQNOTIFYBits_t;

typedef struct
{
    uint32 _NEWVAL_IRQ_EN : 1;
    uint32 _ECNTOFL_IRQ_EN : 1;
    uint32 _CNTOFL_IRQ_EN : 1;
    uint32 _GPROFL_IRQ_EN : 1;
    uint32 _TODET_IRQ_EN : 1;
    uint32 _GLITCHDET_IRQ_EN : 1;
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
} GTM0TIM17IRQENBits_t;

typedef struct
{
    uint32 _TRG_NEWVAL : 1;
    uint32 _TRG_ECNTOFL : 1;
    uint32 _TRG_CNTOFL : 1;
    uint32 _TRG_GPROFL : 1;
    uint32 _TRG_TODET : 1;
    uint32 _TRG_GLITCHDET : 1;
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
} GTM0TIM17IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0TIM17IRQMODEBits_t;

typedef struct
{
    uint32 _NEWVAL_EIRQ_EN : 1;
    uint32 _ECNTOFL_EIRQ_EN : 1;
    uint32 _CNTOFL_EIRQ_EN : 1;
    uint32 _GPROFL_EIRQ_EN : 1;
    uint32 _TODET_IERQ_EN : 1;
    uint32 _GLITCHDET_EIRQ_EN : 1;
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
} GTM0TIM17EIRQENBits_t;

typedef struct
{
    uint32 _RDADDR0 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RDADDR1 : 9;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM00RDADDRBits_t;

typedef struct
{
    uint32 _MODE : 2;
    uint32 _TB12_SEL : 1;
    uint32 _ARU_EN : 1;
    uint32 _ACB : 5;
    uint32 _CMP_CTRL : 1;
    uint32 padding10 : 1;
    uint32 _SL : 1;
    uint32 _CLK_SRC_SR : 3;
    uint32 padding15 : 1;
    uint32 _WR_REQ : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 _RST_CCU0 : 1;
    uint32 _OSM_TRIG : 1;
    uint32 _EXT_TRIG : 1;
    uint32 _EXTTRIGOUT : 1;
    uint32 _TRIGOUT : 1;
    uint32 _SLA : 1;
    uint32 _OSM : 1;
    uint32 _ABM : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _SOMB : 1;
    uint32 padding31 : 1;
} GTM0ATOM00CTRLBits_t;

typedef struct
{
    uint32 _SR0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM00SR0Bits_t;

typedef struct
{
    uint32 _SR1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM00SR1Bits_t;

typedef struct
{
    uint32 _CM0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM00CM0Bits_t;

typedef struct
{
    uint32 _CM1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM00CM1Bits_t;

typedef struct
{
    uint32 _CN0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM00CN0Bits_t;

typedef struct
{
    const uint32 _OL : 1;
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
    const uint32 _ACBI : 5;
    const uint32 _DV : 1;
    uint32 _WRF : 1;
    uint32 padding23 : 1;
    const uint32 _ACBO : 5;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM00STATBits_t;

typedef struct
{
    uint32 _CCU0TC : 1;
    uint32 _CCU1TC : 1;
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
} GTM0ATOM00IRQNOTIFYBits_t;

typedef struct
{
    uint32 _CCU0TC_IRQ_EN : 1;
    uint32 _CCU1TC_IRQ_EN : 1;
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
} GTM0ATOM00IRQENBits_t;

typedef struct
{
    uint32 _TRG_CCU0TC : 1;
    uint32 _TRG_CCU1TC : 1;
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
} GTM0ATOM00IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0ATOM00IRQMODEBits_t;

typedef struct
{
    uint32 _HOST_TRIG : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _RST_CH0 : 1;
    uint32 _RST_CH1 : 1;
    uint32 _RST_CH2 : 1;
    uint32 _RST_CH3 : 1;
    uint32 _RST_CH4 : 1;
    uint32 _RST_CH5 : 1;
    uint32 _RST_CH6 : 1;
    uint32 _RST_CH7 : 1;
    uint32 _UPEN_CTRL0 : 2;
    uint32 _UPEN_CTRL1 : 2;
    uint32 _UPEN_CTRL2 : 2;
    uint32 _UPEN_CTRL3 : 2;
    uint32 _UPEN_CTRL4 : 2;
    uint32 _UPEN_CTRL5 : 2;
    uint32 _UPEN_CTRL6 : 2;
    uint32 _UPEN_CTRL7 : 2;
} GTM0ATOM0AGCGLBCTRLBits_t;

typedef struct
{
    uint32 _ENDIS_CTRL0 : 2;
    uint32 _ENDIS_CTRL1 : 2;
    uint32 _ENDIS_CTRL2 : 2;
    uint32 _ENDIS_CTRL3 : 2;
    uint32 _ENDIS_CTRL4 : 2;
    uint32 _ENDIS_CTRL5 : 2;
    uint32 _ENDIS_CTRL6 : 2;
    uint32 _ENDIS_CTRL7 : 2;
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
} GTM0ATOM0AGCENDISCTRLBits_t;

typedef struct
{
    uint32 _ENDIS_STAT0 : 2;
    uint32 _ENDIS_STAT1 : 2;
    uint32 _ENDIS_STAT2 : 2;
    uint32 _ENDIS_STAT3 : 2;
    uint32 _ENDIS_STAT4 : 2;
    uint32 _ENDIS_STAT5 : 2;
    uint32 _ENDIS_STAT6 : 2;
    uint32 _ENDIS_STAT7 : 2;
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
} GTM0ATOM0AGCENDISSTATBits_t;

typedef struct
{
    uint32 _ACT_TB : 24;
    const uint32 _TB_TRIG : 1;
    const uint32 _TBU_SEL : 2;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM0AGCACTTBBits_t;

typedef struct
{
    uint32 _OUTEN_CTRL0 : 2;
    uint32 _OUTEN_CTRL1 : 2;
    uint32 _OUTEN_CTRL2 : 2;
    uint32 _OUTEN_CTRL3 : 2;
    uint32 _OUTEN_CTRL4 : 2;
    uint32 _OUTEN_CTRL5 : 2;
    uint32 _OUTEN_CTRL6 : 2;
    uint32 _OUTEN_CTRL7 : 2;
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
} GTM0ATOM0AGCOUTENCTRLBits_t;

typedef struct
{
    uint32 _OUTEN_STAT0 : 2;
    uint32 _OUTEN_STAT1 : 2;
    uint32 _OUTEN_STAT2 : 2;
    uint32 _OUTEN_STAT3 : 2;
    uint32 _OUTEN_STAT4 : 2;
    uint32 _OUTEN_STAT5 : 2;
    uint32 _OUTEN_STAT6 : 2;
    uint32 _OUTEN_STAT7 : 2;
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
} GTM0ATOM0AGCOUTENSTATBits_t;

typedef struct
{
    uint32 _FUPD_CTRL0 : 2;
    uint32 _FUPD_CTRL1 : 2;
    uint32 _FUPD_CTRL2 : 2;
    uint32 _FUPD_CTRL3 : 2;
    uint32 _FUPD_CTRL4 : 2;
    uint32 _FUPD_CTRL5 : 2;
    uint32 _FUPD_CTRL6 : 2;
    uint32 _FUPD_CTRL7 : 2;
    uint32 _RSTCN0_CH0 : 2;
    uint32 _RSTCN0_CH1 : 2;
    uint32 _RSTCN0_CH2 : 2;
    uint32 _RSTCN0_CH3 : 2;
    uint32 _RSTCN0_CH4 : 2;
    uint32 _RSTCN0_CH5 : 2;
    uint32 _RSTCN0_CH6 : 2;
    uint32 _RSTCN0_CH7 : 2;
} GTM0ATOM0AGCFUPDCTRLBits_t;

typedef struct
{
    uint32 _INT_TRIG0 : 2;
    uint32 _INT_TRIG1 : 2;
    uint32 _INT_TRIG2 : 2;
    uint32 _INT_TRIG3 : 2;
    uint32 _INT_TRIG4 : 2;
    uint32 _INT_TRIG5 : 2;
    uint32 _INT_TRIG6 : 2;
    uint32 _INT_TRIG7 : 2;
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
} GTM0ATOM0AGCINTTRIGBits_t;

typedef struct
{
    uint32 _RDADDR0 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RDADDR1 : 9;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM01RDADDRBits_t;

typedef struct
{
    uint32 _MODE : 2;
    uint32 _TB12_SEL : 1;
    uint32 _ARU_EN : 1;
    uint32 _ACB : 5;
    uint32 _CMP_CTRL : 1;
    uint32 padding10 : 1;
    uint32 _SL : 1;
    uint32 _CLK_SRC_SR : 3;
    uint32 padding15 : 1;
    uint32 _WR_REQ : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 _RST_CCU0 : 1;
    uint32 _OSM_TRIG : 1;
    uint32 _EXT_TRIG : 1;
    uint32 _EXTTRIGOUT : 1;
    uint32 _TRIGOUT : 1;
    uint32 _SLA : 1;
    uint32 _OSM : 1;
    uint32 _ABM : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _SOMB : 1;
    uint32 padding31 : 1;
} GTM0ATOM01CTRLBits_t;

typedef struct
{
    uint32 _SR0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM01SR0Bits_t;

typedef struct
{
    uint32 _SR1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM01SR1Bits_t;

typedef struct
{
    uint32 _CM0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM01CM0Bits_t;

typedef struct
{
    uint32 _CM1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM01CM1Bits_t;

typedef struct
{
    uint32 _CN0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM01CN0Bits_t;

typedef struct
{
    const uint32 _OL : 1;
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
    const uint32 _ACBI : 5;
    const uint32 _DV : 1;
    uint32 _WRF : 1;
    uint32 padding23 : 1;
    const uint32 _ACBO : 5;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM01STATBits_t;

typedef struct
{
    uint32 _CCU0TC : 1;
    uint32 _CCU1TC : 1;
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
} GTM0ATOM01IRQNOTIFYBits_t;

typedef struct
{
    uint32 _CCU0TC_IRQ_EN : 1;
    uint32 _CCU1TC_IRQ_EN : 1;
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
} GTM0ATOM01IRQENBits_t;

typedef struct
{
    uint32 _TRG_CCU0TC : 1;
    uint32 _TRG_CCU1TC : 1;
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
} GTM0ATOM01IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0ATOM01IRQMODEBits_t;

typedef struct
{
    uint32 _RDADDR0 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RDADDR1 : 9;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM02RDADDRBits_t;

typedef struct
{
    uint32 _MODE : 2;
    uint32 _TB12_SEL : 1;
    uint32 _ARU_EN : 1;
    uint32 _ACB : 5;
    uint32 _CMP_CTRL : 1;
    uint32 padding10 : 1;
    uint32 _SL : 1;
    uint32 _CLK_SRC_SR : 3;
    uint32 padding15 : 1;
    uint32 _WR_REQ : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 _RST_CCU0 : 1;
    uint32 _OSM_TRIG : 1;
    uint32 _EXT_TRIG : 1;
    uint32 _EXTTRIGOUT : 1;
    uint32 _TRIGOUT : 1;
    uint32 _SLA : 1;
    uint32 _OSM : 1;
    uint32 _ABM : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _SOMB : 1;
    uint32 padding31 : 1;
} GTM0ATOM02CTRLBits_t;

typedef struct
{
    uint32 _SR0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM02SR0Bits_t;

typedef struct
{
    uint32 _SR1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM02SR1Bits_t;

typedef struct
{
    uint32 _CM0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM02CM0Bits_t;

typedef struct
{
    uint32 _CM1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM02CM1Bits_t;

typedef struct
{
    uint32 _CN0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM02CN0Bits_t;

typedef struct
{
    const uint32 _OL : 1;
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
    const uint32 _ACBI : 5;
    const uint32 _DV : 1;
    uint32 _WRF : 1;
    uint32 padding23 : 1;
    const uint32 _ACBO : 5;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM02STATBits_t;

typedef struct
{
    uint32 _CCU0TC : 1;
    uint32 _CCU1TC : 1;
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
} GTM0ATOM02IRQNOTIFYBits_t;

typedef struct
{
    uint32 _CCU0TC_IRQ_EN : 1;
    uint32 _CCU1TC_IRQ_EN : 1;
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
} GTM0ATOM02IRQENBits_t;

typedef struct
{
    uint32 _TRG_CCU0TC : 1;
    uint32 _TRG_CCU1TC : 1;
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
} GTM0ATOM02IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0ATOM02IRQMODEBits_t;

typedef struct
{
    uint32 _RDADDR0 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RDADDR1 : 9;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM03RDADDRBits_t;

typedef struct
{
    uint32 _MODE : 2;
    uint32 _TB12_SEL : 1;
    uint32 _ARU_EN : 1;
    uint32 _ACB : 5;
    uint32 _CMP_CTRL : 1;
    uint32 padding10 : 1;
    uint32 _SL : 1;
    uint32 _CLK_SRC_SR : 3;
    uint32 padding15 : 1;
    uint32 _WR_REQ : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 _RST_CCU0 : 1;
    uint32 _OSM_TRIG : 1;
    uint32 _EXT_TRIG : 1;
    uint32 _EXTTRIGOUT : 1;
    uint32 _TRIGOUT : 1;
    uint32 _SLA : 1;
    uint32 _OSM : 1;
    uint32 _ABM : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _SOMB : 1;
    uint32 padding31 : 1;
} GTM0ATOM03CTRLBits_t;

typedef struct
{
    uint32 _SR0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM03SR0Bits_t;

typedef struct
{
    uint32 _SR1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM03SR1Bits_t;

typedef struct
{
    uint32 _CM0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM03CM0Bits_t;

typedef struct
{
    uint32 _CM1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM03CM1Bits_t;

typedef struct
{
    uint32 _CN0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM03CN0Bits_t;

typedef struct
{
    const uint32 _OL : 1;
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
    const uint32 _ACBI : 5;
    const uint32 _DV : 1;
    uint32 _WRF : 1;
    uint32 padding23 : 1;
    const uint32 _ACBO : 5;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM03STATBits_t;

typedef struct
{
    uint32 _CCU0TC : 1;
    uint32 _CCU1TC : 1;
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
} GTM0ATOM03IRQNOTIFYBits_t;

typedef struct
{
    uint32 _CCU0TC_IRQ_EN : 1;
    uint32 _CCU1TC_IRQ_EN : 1;
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
} GTM0ATOM03IRQENBits_t;

typedef struct
{
    uint32 _TRG_CCU0TC : 1;
    uint32 _TRG_CCU1TC : 1;
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
} GTM0ATOM03IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0ATOM03IRQMODEBits_t;

typedef struct
{
    uint32 _RDADDR0 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RDADDR1 : 9;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM04RDADDRBits_t;

typedef struct
{
    uint32 _MODE : 2;
    uint32 _TB12_SEL : 1;
    uint32 _ARU_EN : 1;
    uint32 _ACB : 5;
    uint32 _CMP_CTRL : 1;
    uint32 padding10 : 1;
    uint32 _SL : 1;
    uint32 _CLK_SRC_SR : 3;
    uint32 padding15 : 1;
    uint32 _WR_REQ : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 _RST_CCU0 : 1;
    uint32 _OSM_TRIG : 1;
    uint32 _EXT_TRIG : 1;
    uint32 _EXTTRIGOUT : 1;
    uint32 _TRIGOUT : 1;
    uint32 _SLA : 1;
    uint32 _OSM : 1;
    uint32 _ABM : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _SOMB : 1;
    uint32 padding31 : 1;
} GTM0ATOM04CTRLBits_t;

typedef struct
{
    uint32 _SR0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM04SR0Bits_t;

typedef struct
{
    uint32 _SR1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM04SR1Bits_t;

typedef struct
{
    uint32 _CM0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM04CM0Bits_t;

typedef struct
{
    uint32 _CM1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM04CM1Bits_t;

typedef struct
{
    uint32 _CN0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM04CN0Bits_t;

typedef struct
{
    const uint32 _OL : 1;
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
    const uint32 _ACBI : 5;
    const uint32 _DV : 1;
    uint32 _WRF : 1;
    uint32 padding23 : 1;
    const uint32 _ACBO : 5;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM04STATBits_t;

typedef struct
{
    uint32 _CCU0TC : 1;
    uint32 _CCU1TC : 1;
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
} GTM0ATOM04IRQNOTIFYBits_t;

typedef struct
{
    uint32 _CCU0TC_IRQ_EN : 1;
    uint32 _CCU1TC_IRQ_EN : 1;
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
} GTM0ATOM04IRQENBits_t;

typedef struct
{
    uint32 _TRG_CCU0TC : 1;
    uint32 _TRG_CCU1TC : 1;
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
} GTM0ATOM04IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0ATOM04IRQMODEBits_t;

typedef struct
{
    uint32 _RDADDR0 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RDADDR1 : 9;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM05RDADDRBits_t;

typedef struct
{
    uint32 _MODE : 2;
    uint32 _TB12_SEL : 1;
    uint32 _ARU_EN : 1;
    uint32 _ACB : 5;
    uint32 _CMP_CTRL : 1;
    uint32 padding10 : 1;
    uint32 _SL : 1;
    uint32 _CLK_SRC_SR : 3;
    uint32 padding15 : 1;
    uint32 _WR_REQ : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 _RST_CCU0 : 1;
    uint32 _OSM_TRIG : 1;
    uint32 _EXT_TRIG : 1;
    uint32 _EXTTRIGOUT : 1;
    uint32 _TRIGOUT : 1;
    uint32 _SLA : 1;
    uint32 _OSM : 1;
    uint32 _ABM : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _SOMB : 1;
    uint32 padding31 : 1;
} GTM0ATOM05CTRLBits_t;

typedef struct
{
    uint32 _SR0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM05SR0Bits_t;

typedef struct
{
    uint32 _SR1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM05SR1Bits_t;

typedef struct
{
    uint32 _CM0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM05CM0Bits_t;

typedef struct
{
    uint32 _CM1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM05CM1Bits_t;

typedef struct
{
    uint32 _CN0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM05CN0Bits_t;

typedef struct
{
    const uint32 _OL : 1;
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
    const uint32 _ACBI : 5;
    const uint32 _DV : 1;
    uint32 _WRF : 1;
    uint32 padding23 : 1;
    const uint32 _ACBO : 5;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM05STATBits_t;

typedef struct
{
    uint32 _CCU0TC : 1;
    uint32 _CCU1TC : 1;
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
} GTM0ATOM05IRQNOTIFYBits_t;

typedef struct
{
    uint32 _CCU0TC_IRQ_EN : 1;
    uint32 _CCU1TC_IRQ_EN : 1;
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
} GTM0ATOM05IRQENBits_t;

typedef struct
{
    uint32 _TRG_CCU0TC : 1;
    uint32 _TRG_CCU1TC : 1;
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
} GTM0ATOM05IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0ATOM05IRQMODEBits_t;

typedef struct
{
    uint32 _RDADDR0 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RDADDR1 : 9;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM06RDADDRBits_t;

typedef struct
{
    uint32 _MODE : 2;
    uint32 _TB12_SEL : 1;
    uint32 _ARU_EN : 1;
    uint32 _ACB : 5;
    uint32 _CMP_CTRL : 1;
    uint32 padding10 : 1;
    uint32 _SL : 1;
    uint32 _CLK_SRC_SR : 3;
    uint32 padding15 : 1;
    uint32 _WR_REQ : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 _RST_CCU0 : 1;
    uint32 _OSM_TRIG : 1;
    uint32 _EXT_TRIG : 1;
    uint32 _EXTTRIGOUT : 1;
    uint32 _TRIGOUT : 1;
    uint32 _SLA : 1;
    uint32 _OSM : 1;
    uint32 _ABM : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _SOMB : 1;
    uint32 padding31 : 1;
} GTM0ATOM06CTRLBits_t;

typedef struct
{
    uint32 _SR0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM06SR0Bits_t;

typedef struct
{
    uint32 _SR1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM06SR1Bits_t;

typedef struct
{
    uint32 _CM0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM06CM0Bits_t;

typedef struct
{
    uint32 _CM1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM06CM1Bits_t;

typedef struct
{
    uint32 _CN0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM06CN0Bits_t;

typedef struct
{
    const uint32 _OL : 1;
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
    const uint32 _ACBI : 5;
    const uint32 _DV : 1;
    uint32 _WRF : 1;
    uint32 padding23 : 1;
    const uint32 _ACBO : 5;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM06STATBits_t;

typedef struct
{
    uint32 _CCU0TC : 1;
    uint32 _CCU1TC : 1;
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
} GTM0ATOM06IRQNOTIFYBits_t;

typedef struct
{
    uint32 _CCU0TC_IRQ_EN : 1;
    uint32 _CCU1TC_IRQ_EN : 1;
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
} GTM0ATOM06IRQENBits_t;

typedef struct
{
    uint32 _TRG_CCU0TC : 1;
    uint32 _TRG_CCU1TC : 1;
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
} GTM0ATOM06IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0ATOM06IRQMODEBits_t;

typedef struct
{
    uint32 _RDADDR0 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RDADDR1 : 9;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM07RDADDRBits_t;

typedef struct
{
    uint32 _MODE : 2;
    uint32 _TB12_SEL : 1;
    uint32 _ARU_EN : 1;
    uint32 _ACB : 5;
    uint32 _CMP_CTRL : 1;
    uint32 padding10 : 1;
    uint32 _SL : 1;
    uint32 _CLK_SRC_SR : 3;
    uint32 padding15 : 1;
    uint32 _WR_REQ : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 _RST_CCU0 : 1;
    uint32 _OSM_TRIG : 1;
    uint32 _EXT_TRIG : 1;
    uint32 _EXTTRIGOUT : 1;
    uint32 _TRIGOUT : 1;
    uint32 _SLA : 1;
    uint32 _OSM : 1;
    uint32 _ABM : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _SOMB : 1;
    uint32 padding31 : 1;
} GTM0ATOM07CTRLBits_t;

typedef struct
{
    uint32 _SR0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM07SR0Bits_t;

typedef struct
{
    uint32 _SR1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM07SR1Bits_t;

typedef struct
{
    uint32 _CM0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM07CM0Bits_t;

typedef struct
{
    uint32 _CM1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM07CM1Bits_t;

typedef struct
{
    uint32 _CN0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM07CN0Bits_t;

typedef struct
{
    const uint32 _OL : 1;
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
    const uint32 _ACBI : 5;
    const uint32 _DV : 1;
    uint32 _WRF : 1;
    uint32 padding23 : 1;
    const uint32 _ACBO : 5;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM07STATBits_t;

typedef struct
{
    uint32 _CCU0TC : 1;
    uint32 _CCU1TC : 1;
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
} GTM0ATOM07IRQNOTIFYBits_t;

typedef struct
{
    uint32 _CCU0TC_IRQ_EN : 1;
    uint32 _CCU1TC_IRQ_EN : 1;
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
} GTM0ATOM07IRQENBits_t;

typedef struct
{
    uint32 _TRG_CCU0TC : 1;
    uint32 _TRG_CCU1TC : 1;
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
} GTM0ATOM07IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0ATOM07IRQMODEBits_t;

typedef struct
{
    uint32 _RDADDR0 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RDADDR1 : 9;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM10RDADDRBits_t;

typedef struct
{
    uint32 _MODE : 2;
    uint32 _TB12_SEL : 1;
    uint32 _ARU_EN : 1;
    uint32 _ACB : 5;
    uint32 _CMP_CTRL : 1;
    uint32 padding10 : 1;
    uint32 _SL : 1;
    uint32 _CLK_SRC_SR : 3;
    uint32 padding15 : 1;
    uint32 _WR_REQ : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 _RST_CCU0 : 1;
    uint32 _OSM_TRIG : 1;
    uint32 _EXT_TRIG : 1;
    uint32 _EXTTRIGOUT : 1;
    uint32 _TRIGOUT : 1;
    uint32 _SLA : 1;
    uint32 _OSM : 1;
    uint32 _ABM : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _SOMB : 1;
    uint32 padding31 : 1;
} GTM0ATOM10CTRLBits_t;

typedef struct
{
    uint32 _SR0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM10SR0Bits_t;

typedef struct
{
    uint32 _SR1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM10SR1Bits_t;

typedef struct
{
    uint32 _CM0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM10CM0Bits_t;

typedef struct
{
    uint32 _CM1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM10CM1Bits_t;

typedef struct
{
    uint32 _CN0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM10CN0Bits_t;

typedef struct
{
    const uint32 _OL : 1;
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
    const uint32 _ACBI : 5;
    const uint32 _DV : 1;
    uint32 _WRF : 1;
    uint32 padding23 : 1;
    const uint32 _ACBO : 5;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM10STATBits_t;

typedef struct
{
    uint32 _CCU0TC : 1;
    uint32 _CCU1TC : 1;
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
} GTM0ATOM10IRQNOTIFYBits_t;

typedef struct
{
    uint32 _CCU0TC_IRQ_EN : 1;
    uint32 _CCU1TC_IRQ_EN : 1;
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
} GTM0ATOM10IRQENBits_t;

typedef struct
{
    uint32 _TRG_CCU0TC : 1;
    uint32 _TRG_CCU1TC : 1;
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
} GTM0ATOM10IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0ATOM10IRQMODEBits_t;

typedef struct
{
    uint32 _HOST_TRIG : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _RST_CH0 : 1;
    uint32 _RST_CH1 : 1;
    uint32 _RST_CH2 : 1;
    uint32 _RST_CH3 : 1;
    uint32 _RST_CH4 : 1;
    uint32 _RST_CH5 : 1;
    uint32 _RST_CH6 : 1;
    uint32 _RST_CH7 : 1;
    uint32 _UPEN_CTRL0 : 2;
    uint32 _UPEN_CTRL1 : 2;
    uint32 _UPEN_CTRL2 : 2;
    uint32 _UPEN_CTRL3 : 2;
    uint32 _UPEN_CTRL4 : 2;
    uint32 _UPEN_CTRL5 : 2;
    uint32 _UPEN_CTRL6 : 2;
    uint32 _UPEN_CTRL7 : 2;
} GTM0ATOM1AGCGLBCTRLBits_t;

typedef struct
{
    uint32 _ENDIS_CTRL0 : 2;
    uint32 _ENDIS_CTRL1 : 2;
    uint32 _ENDIS_CTRL2 : 2;
    uint32 _ENDIS_CTRL3 : 2;
    uint32 _ENDIS_CTRL4 : 2;
    uint32 _ENDIS_CTRL5 : 2;
    uint32 _ENDIS_CTRL6 : 2;
    uint32 _ENDIS_CTRL7 : 2;
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
} GTM0ATOM1AGCENDISCTRLBits_t;

typedef struct
{
    uint32 _ENDIS_STAT0 : 2;
    uint32 _ENDIS_STAT1 : 2;
    uint32 _ENDIS_STAT2 : 2;
    uint32 _ENDIS_STAT3 : 2;
    uint32 _ENDIS_STAT4 : 2;
    uint32 _ENDIS_STAT5 : 2;
    uint32 _ENDIS_STAT6 : 2;
    uint32 _ENDIS_STAT7 : 2;
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
} GTM0ATOM1AGCENDISSTATBits_t;

typedef struct
{
    uint32 _ACT_TB : 24;
    const uint32 _TB_TRIG : 1;
    const uint32 _TBU_SEL : 2;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM1AGCACTTBBits_t;

typedef struct
{
    uint32 _OUTEN_CTRL0 : 2;
    uint32 _OUTEN_CTRL1 : 2;
    uint32 _OUTEN_CTRL2 : 2;
    uint32 _OUTEN_CTRL3 : 2;
    uint32 _OUTEN_CTRL4 : 2;
    uint32 _OUTEN_CTRL5 : 2;
    uint32 _OUTEN_CTRL6 : 2;
    uint32 _OUTEN_CTRL7 : 2;
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
} GTM0ATOM1AGCOUTENCTRLBits_t;

typedef struct
{
    uint32 _OUTEN_STAT0 : 2;
    uint32 _OUTEN_STAT1 : 2;
    uint32 _OUTEN_STAT2 : 2;
    uint32 _OUTEN_STAT3 : 2;
    uint32 _OUTEN_STAT4 : 2;
    uint32 _OUTEN_STAT5 : 2;
    uint32 _OUTEN_STAT6 : 2;
    uint32 _OUTEN_STAT7 : 2;
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
} GTM0ATOM1AGCOUTENSTATBits_t;

typedef struct
{
    uint32 _FUPD_CTRL0 : 2;
    uint32 _FUPD_CTRL1 : 2;
    uint32 _FUPD_CTRL2 : 2;
    uint32 _FUPD_CTRL3 : 2;
    uint32 _FUPD_CTRL4 : 2;
    uint32 _FUPD_CTRL5 : 2;
    uint32 _FUPD_CTRL6 : 2;
    uint32 _FUPD_CTRL7 : 2;
    uint32 _RSTCN0_CH0 : 2;
    uint32 _RSTCN0_CH1 : 2;
    uint32 _RSTCN0_CH2 : 2;
    uint32 _RSTCN0_CH3 : 2;
    uint32 _RSTCN0_CH4 : 2;
    uint32 _RSTCN0_CH5 : 2;
    uint32 _RSTCN0_CH6 : 2;
    uint32 _RSTCN0_CH7 : 2;
} GTM0ATOM1AGCFUPDCTRLBits_t;

typedef struct
{
    uint32 _INT_TRIG0 : 2;
    uint32 _INT_TRIG1 : 2;
    uint32 _INT_TRIG2 : 2;
    uint32 _INT_TRIG3 : 2;
    uint32 _INT_TRIG4 : 2;
    uint32 _INT_TRIG5 : 2;
    uint32 _INT_TRIG6 : 2;
    uint32 _INT_TRIG7 : 2;
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
} GTM0ATOM1AGCINTTRIGBits_t;

typedef struct
{
    uint32 _RDADDR0 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RDADDR1 : 9;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM11RDADDRBits_t;

typedef struct
{
    uint32 _MODE : 2;
    uint32 _TB12_SEL : 1;
    uint32 _ARU_EN : 1;
    uint32 _ACB : 5;
    uint32 _CMP_CTRL : 1;
    uint32 padding10 : 1;
    uint32 _SL : 1;
    uint32 _CLK_SRC_SR : 3;
    uint32 padding15 : 1;
    uint32 _WR_REQ : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 _RST_CCU0 : 1;
    uint32 _OSM_TRIG : 1;
    uint32 _EXT_TRIG : 1;
    uint32 _EXTTRIGOUT : 1;
    uint32 _TRIGOUT : 1;
    uint32 _SLA : 1;
    uint32 _OSM : 1;
    uint32 _ABM : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _SOMB : 1;
    uint32 padding31 : 1;
} GTM0ATOM11CTRLBits_t;

typedef struct
{
    uint32 _SR0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM11SR0Bits_t;

typedef struct
{
    uint32 _SR1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM11SR1Bits_t;

typedef struct
{
    uint32 _CM0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM11CM0Bits_t;

typedef struct
{
    uint32 _CM1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM11CM1Bits_t;

typedef struct
{
    uint32 _CN0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM11CN0Bits_t;

typedef struct
{
    const uint32 _OL : 1;
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
    const uint32 _ACBI : 5;
    const uint32 _DV : 1;
    uint32 _WRF : 1;
    uint32 padding23 : 1;
    const uint32 _ACBO : 5;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM11STATBits_t;

typedef struct
{
    uint32 _CCU0TC : 1;
    uint32 _CCU1TC : 1;
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
} GTM0ATOM11IRQNOTIFYBits_t;

typedef struct
{
    uint32 _CCU0TC_IRQ_EN : 1;
    uint32 _CCU1TC_IRQ_EN : 1;
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
} GTM0ATOM11IRQENBits_t;

typedef struct
{
    uint32 _TRG_CCU0TC : 1;
    uint32 _TRG_CCU1TC : 1;
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
} GTM0ATOM11IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0ATOM11IRQMODEBits_t;

typedef struct
{
    uint32 _RDADDR0 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RDADDR1 : 9;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM12RDADDRBits_t;

typedef struct
{
    uint32 _MODE : 2;
    uint32 _TB12_SEL : 1;
    uint32 _ARU_EN : 1;
    uint32 _ACB : 5;
    uint32 _CMP_CTRL : 1;
    uint32 padding10 : 1;
    uint32 _SL : 1;
    uint32 _CLK_SRC_SR : 3;
    uint32 padding15 : 1;
    uint32 _WR_REQ : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 _RST_CCU0 : 1;
    uint32 _OSM_TRIG : 1;
    uint32 _EXT_TRIG : 1;
    uint32 _EXTTRIGOUT : 1;
    uint32 _TRIGOUT : 1;
    uint32 _SLA : 1;
    uint32 _OSM : 1;
    uint32 _ABM : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _SOMB : 1;
    uint32 padding31 : 1;
} GTM0ATOM12CTRLBits_t;

typedef struct
{
    uint32 _SR0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM12SR0Bits_t;

typedef struct
{
    uint32 _SR1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM12SR1Bits_t;

typedef struct
{
    uint32 _CM0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM12CM0Bits_t;

typedef struct
{
    uint32 _CM1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM12CM1Bits_t;

typedef struct
{
    uint32 _CN0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM12CN0Bits_t;

typedef struct
{
    const uint32 _OL : 1;
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
    const uint32 _ACBI : 5;
    const uint32 _DV : 1;
    uint32 _WRF : 1;
    uint32 padding23 : 1;
    const uint32 _ACBO : 5;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM12STATBits_t;

typedef struct
{
    uint32 _CCU0TC : 1;
    uint32 _CCU1TC : 1;
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
} GTM0ATOM12IRQNOTIFYBits_t;

typedef struct
{
    uint32 _CCU0TC_IRQ_EN : 1;
    uint32 _CCU1TC_IRQ_EN : 1;
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
} GTM0ATOM12IRQENBits_t;

typedef struct
{
    uint32 _TRG_CCU0TC : 1;
    uint32 _TRG_CCU1TC : 1;
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
} GTM0ATOM12IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0ATOM12IRQMODEBits_t;

typedef struct
{
    uint32 _RDADDR0 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RDADDR1 : 9;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM13RDADDRBits_t;

typedef struct
{
    uint32 _MODE : 2;
    uint32 _TB12_SEL : 1;
    uint32 _ARU_EN : 1;
    uint32 _ACB : 5;
    uint32 _CMP_CTRL : 1;
    uint32 padding10 : 1;
    uint32 _SL : 1;
    uint32 _CLK_SRC_SR : 3;
    uint32 padding15 : 1;
    uint32 _WR_REQ : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 _RST_CCU0 : 1;
    uint32 _OSM_TRIG : 1;
    uint32 _EXT_TRIG : 1;
    uint32 _EXTTRIGOUT : 1;
    uint32 _TRIGOUT : 1;
    uint32 _SLA : 1;
    uint32 _OSM : 1;
    uint32 _ABM : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _SOMB : 1;
    uint32 padding31 : 1;
} GTM0ATOM13CTRLBits_t;

typedef struct
{
    uint32 _SR0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM13SR0Bits_t;

typedef struct
{
    uint32 _SR1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM13SR1Bits_t;

typedef struct
{
    uint32 _CM0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM13CM0Bits_t;

typedef struct
{
    uint32 _CM1 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM13CM1Bits_t;

typedef struct
{
    uint32 _CN0 : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM13CN0Bits_t;

typedef struct
{
    const uint32 _OL : 1;
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
    const uint32 _ACBI : 5;
    const uint32 _DV : 1;
    uint32 _WRF : 1;
    uint32 padding23 : 1;
    const uint32 _ACBO : 5;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0ATOM13STATBits_t;

typedef struct
{
    uint32 _CCU0TC : 1;
    uint32 _CCU1TC : 1;
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
} GTM0ATOM13IRQNOTIFYBits_t;

typedef struct
{
    uint32 _CCU0TC_IRQ_EN : 1;
    uint32 _CCU1TC_IRQ_EN : 1;
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
} GTM0ATOM13IRQENBits_t;

typedef struct
{
    uint32 _TRG_CCU0TC : 1;
    uint32 _TRG_CCU1TC : 1;
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
} GTM0ATOM13IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0ATOM13IRQMODEBits_t;

typedef struct
{
    uint32 _CLK_SEL : 2;
    uint32 _DTM_SEL : 2;
    uint32 _UPD_MODE : 3;
    uint32 padding7 : 1;
    uint32 _SR_UPD_EN : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _SHUT_OFF_RST : 1;
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
} GTM0DTM24CTRLBits_t;

typedef struct
{
    uint32 _O1SEL_0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 _SWAP_0 : 1;
    uint32 _O1F_0 : 2;
    uint32 _XDT_EN_0_1 : 1;
    uint32 padding7 : 1;
    uint32 _O1SEL_1 : 1;
    uint32 _I1SEL_1 : 1;
    uint32 _SH_EN_1 : 1;
    uint32 _SWAP_1 : 1;
    uint32 _O1F_1 : 2;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _O1SEL_2 : 1;
    uint32 _I1SEL_2 : 1;
    uint32 _SH_EN_2 : 1;
    uint32 _SWAP_2 : 1;
    uint32 _O1F_2 : 2;
    uint32 _XDT_EN_2_3 : 1;
    uint32 padding23 : 1;
    uint32 _O1SEL_3 : 1;
    uint32 _I1SEL_3 : 1;
    uint32 _SH_EN_3 : 1;
    uint32 _SWAP_3 : 1;
    uint32 _O1F_3 : 2;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0DTM24CHCTRL1Bits_t;

typedef struct
{
    uint32 _POL0_0 : 1;
    uint32 _OC0_0 : 1;
    uint32 _SL0_0 : 1;
    uint32 _DT0_0 : 1;
    uint32 _POL1_0 : 1;
    uint32 _OC1_0 : 1;
    uint32 _SL1_0 : 1;
    uint32 _DT1_0 : 1;
    uint32 _POL0_1 : 1;
    uint32 _OC0_1 : 1;
    uint32 _SL0_1 : 1;
    uint32 _DT0_1 : 1;
    uint32 _POL1_1 : 1;
    uint32 _OC1_1 : 1;
    uint32 _SL1_1 : 1;
    uint32 _DT1_1 : 1;
    uint32 _POL0_2 : 1;
    uint32 _OC0_2 : 1;
    uint32 _SL0_2 : 1;
    uint32 _DT0_2 : 1;
    uint32 _POL1_2 : 1;
    uint32 _OC1_2 : 1;
    uint32 _SL1_2 : 1;
    uint32 _DT1_2 : 1;
    uint32 _POL0_3 : 1;
    uint32 _OC0_3 : 1;
    uint32 _SL0_3 : 1;
    uint32 _DT0_3 : 1;
    uint32 _POL1_3 : 1;
    uint32 _OC1_3 : 1;
    uint32 _SL1_3 : 1;
    uint32 _DT1_3 : 1;
} GTM0DTM24CHCTRL2Bits_t;

typedef struct
{
    uint32 _POL0_0_SR : 1;
    uint32 _OC0_0_SR : 1;
    uint32 _SL0_0_SR : 1;
    uint32 _DT0_0_SR : 1;
    uint32 _POL1_0_SR : 1;
    uint32 _OC1_0_SR : 1;
    uint32 _SL1_0_SR : 1;
    uint32 _DT1_0_SR : 1;
    uint32 _POL0_1_SR : 1;
    uint32 _OC0_1_SR : 1;
    uint32 _SL0_1_SR : 1;
    uint32 _DT0_1_SR : 1;
    uint32 _POL1_1_SR : 1;
    uint32 _OC1_1_SR : 1;
    uint32 _SL1_1_SR : 1;
    uint32 _DT1_1_SR : 1;
    uint32 _POL0_2_SR : 1;
    uint32 _OC0_2_SR : 1;
    uint32 _SL0_2_SR : 1;
    uint32 _DT0_2_SR : 1;
    uint32 _POL1_2_SR : 1;
    uint32 _OC1_2_SR : 1;
    uint32 _SL1_2_SR : 1;
    uint32 _DT1_2_SR : 1;
    uint32 _POL0_3_SR : 1;
    uint32 _OC0_3_SR : 1;
    uint32 _SL0_3_SR : 1;
    uint32 _DT0_3_SR : 1;
    uint32 _POL1_3_SR : 1;
    uint32 _OC1_3_SR : 1;
    uint32 _SL1_3_SR : 1;
    uint32 _DT1_3_SR : 1;
} GTM0DTM24CHCTRL2SRBits_t;

typedef struct
{
    uint32 _RELBLK : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PSU_IN_SEL : 1;
    uint32 _IN_POL : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 _SHIFT_SEL : 2;
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
} GTM0DTM24PSCTRLBits_t;

typedef struct
{
    uint32 _RELRISE : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RELFALL : 10;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0DTM240DTVBits_t;

typedef struct
{
    uint32 _RELRISE : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RELFALL : 10;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0DTM241DTVBits_t;

typedef struct
{
    uint32 _RELRISE : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RELFALL : 10;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0DTM242DTVBits_t;

typedef struct
{
    uint32 _RELRISE : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RELFALL : 10;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0DTM243DTVBits_t;

typedef struct
{
    uint32 _SL0_0_SR_SR : 1;
    uint32 _SL1_0_SR_SR : 1;
    uint32 _SL0_1_SR_SR : 1;
    uint32 _SL1_1_SR_SR : 1;
    uint32 _SL0_2_SR_SR : 1;
    uint32 _SL1_2_SR_SR : 1;
    uint32 _SL0_3_SR_SR : 1;
    uint32 _SL1_3_SR_SR : 1;
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
} GTM0DTM24CHSRBits_t;

typedef struct
{
    uint32 _CLK_SEL : 2;
    uint32 _DTM_SEL : 2;
    uint32 _UPD_MODE : 3;
    uint32 padding7 : 1;
    uint32 _SR_UPD_EN : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _SHUT_OFF_RST : 1;
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
} GTM0DTM26CTRLBits_t;

typedef struct
{
    uint32 _O1SEL_0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 _SWAP_0 : 1;
    uint32 _O1F_0 : 2;
    uint32 _XDT_EN_0_1 : 1;
    uint32 padding7 : 1;
    uint32 _O1SEL_1 : 1;
    uint32 _I1SEL_1 : 1;
    uint32 _SH_EN_1 : 1;
    uint32 _SWAP_1 : 1;
    uint32 _O1F_1 : 2;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _O1SEL_2 : 1;
    uint32 _I1SEL_2 : 1;
    uint32 _SH_EN_2 : 1;
    uint32 _SWAP_2 : 1;
    uint32 _O1F_2 : 2;
    uint32 _XDT_EN_2_3 : 1;
    uint32 padding23 : 1;
    uint32 _O1SEL_3 : 1;
    uint32 _I1SEL_3 : 1;
    uint32 _SH_EN_3 : 1;
    uint32 _SWAP_3 : 1;
    uint32 _O1F_3 : 2;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0DTM26CHCTRL1Bits_t;

typedef struct
{
    uint32 _POL0_0 : 1;
    uint32 _OC0_0 : 1;
    uint32 _SL0_0 : 1;
    uint32 _DT0_0 : 1;
    uint32 _POL1_0 : 1;
    uint32 _OC1_0 : 1;
    uint32 _SL1_0 : 1;
    uint32 _DT1_0 : 1;
    uint32 _POL0_1 : 1;
    uint32 _OC0_1 : 1;
    uint32 _SL0_1 : 1;
    uint32 _DT0_1 : 1;
    uint32 _POL1_1 : 1;
    uint32 _OC1_1 : 1;
    uint32 _SL1_1 : 1;
    uint32 _DT1_1 : 1;
    uint32 _POL0_2 : 1;
    uint32 _OC0_2 : 1;
    uint32 _SL0_2 : 1;
    uint32 _DT0_2 : 1;
    uint32 _POL1_2 : 1;
    uint32 _OC1_2 : 1;
    uint32 _SL1_2 : 1;
    uint32 _DT1_2 : 1;
    uint32 _POL0_3 : 1;
    uint32 _OC0_3 : 1;
    uint32 _SL0_3 : 1;
    uint32 _DT0_3 : 1;
    uint32 _POL1_3 : 1;
    uint32 _OC1_3 : 1;
    uint32 _SL1_3 : 1;
    uint32 _DT1_3 : 1;
} GTM0DTM26CHCTRL2Bits_t;

typedef struct
{
    uint32 _POL0_0_SR : 1;
    uint32 _OC0_0_SR : 1;
    uint32 _SL0_0_SR : 1;
    uint32 _DT0_0_SR : 1;
    uint32 _POL1_0_SR : 1;
    uint32 _OC1_0_SR : 1;
    uint32 _SL1_0_SR : 1;
    uint32 _DT1_0_SR : 1;
    uint32 _POL0_1_SR : 1;
    uint32 _OC0_1_SR : 1;
    uint32 _SL0_1_SR : 1;
    uint32 _DT0_1_SR : 1;
    uint32 _POL1_1_SR : 1;
    uint32 _OC1_1_SR : 1;
    uint32 _SL1_1_SR : 1;
    uint32 _DT1_1_SR : 1;
    uint32 _POL0_2_SR : 1;
    uint32 _OC0_2_SR : 1;
    uint32 _SL0_2_SR : 1;
    uint32 _DT0_2_SR : 1;
    uint32 _POL1_2_SR : 1;
    uint32 _OC1_2_SR : 1;
    uint32 _SL1_2_SR : 1;
    uint32 _DT1_2_SR : 1;
    uint32 _POL0_3_SR : 1;
    uint32 _OC0_3_SR : 1;
    uint32 _SL0_3_SR : 1;
    uint32 _DT0_3_SR : 1;
    uint32 _POL1_3_SR : 1;
    uint32 _OC1_3_SR : 1;
    uint32 _SL1_3_SR : 1;
    uint32 _DT1_3_SR : 1;
} GTM0DTM26CHCTRL2SRBits_t;

typedef struct
{
    uint32 _RELBLK : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PSU_IN_SEL : 1;
    uint32 _IN_POL : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 _SHIFT_SEL : 2;
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
} GTM0DTM26PSCTRLBits_t;

typedef struct
{
    uint32 _RELRISE : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RELFALL : 10;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0DTM260DTVBits_t;

typedef struct
{
    uint32 _RELRISE : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RELFALL : 10;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0DTM261DTVBits_t;

typedef struct
{
    uint32 _RELRISE : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RELFALL : 10;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0DTM262DTVBits_t;

typedef struct
{
    uint32 _RELRISE : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RELFALL : 10;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0DTM263DTVBits_t;

typedef struct
{
    uint32 _SL0_0_SR_SR : 1;
    uint32 _SL1_0_SR_SR : 1;
    uint32 _SL0_1_SR_SR : 1;
    uint32 _SL1_1_SR_SR : 1;
    uint32 _SL0_2_SR_SR : 1;
    uint32 _SL1_2_SR_SR : 1;
    uint32 _SL0_3_SR_SR : 1;
    uint32 _SL1_3_SR_SR : 1;
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
} GTM0DTM26CHSRBits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS00R0Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS00R1Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS00R2Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS00R3Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS00R4Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS00R5Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS00R6Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS00R7Bits_t;

typedef struct
{
    uint32 _EN : 1;
    const uint32 _IRQ : 1;
    const uint32 _ERR : 1;
    uint32 padding3 : 1;
    const uint32 _CY : 1;
    const uint32 _Z : 1;
    const uint32 _V : 1;
    const uint32 _N : 1;
    const uint32 _CAT : 1;
    const uint32 _CWT : 1;
    const uint32 _SAT : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _SP_CNT : 3;
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
} GTM0MCS00CTRLBits_t;

typedef struct
{
    const uint32 _ACB0 : 1;
    const uint32 _ACB1 : 1;
    const uint32 _ACB2 : 1;
    const uint32 _ACB3 : 1;
    const uint32 _ACB4 : 1;
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
} GTM0MCS00ACBBits_t;

typedef struct
{
    uint32 _TRG0 : 1;
    uint32 _TRG1 : 1;
    uint32 _TRG2 : 1;
    uint32 _TRG3 : 1;
    uint32 _TRG4 : 1;
    uint32 _TRG5 : 1;
    uint32 _TRG6 : 1;
    uint32 _TRG7 : 1;
    uint32 _TRG8 : 1;
    uint32 _TRG9 : 1;
    uint32 _TRG10 : 1;
    uint32 _TRG11 : 1;
    uint32 _TRG12 : 1;
    uint32 _TRG13 : 1;
    uint32 _TRG14 : 1;
    uint32 _TRG15 : 1;
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
} GTM0MCS0CTRGBits_t;

typedef struct
{
    uint32 _TRG0 : 1;
    uint32 _TRG1 : 1;
    uint32 _TRG2 : 1;
    uint32 _TRG3 : 1;
    uint32 _TRG4 : 1;
    uint32 _TRG5 : 1;
    uint32 _TRG6 : 1;
    uint32 _TRG7 : 1;
    uint32 _TRG8 : 1;
    uint32 _TRG9 : 1;
    uint32 _TRG10 : 1;
    uint32 _TRG11 : 1;
    uint32 _TRG12 : 1;
    uint32 _TRG13 : 1;
    uint32 _TRG14 : 1;
    uint32 _TRG15 : 1;
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
} GTM0MCS0STRGBits_t;

typedef struct
{
    const uint32 _DATA : 8;
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
} GTM0MCS00MHBBits_t;

typedef struct
{
    uint32 _PC : 16;
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
} GTM0MCS00PCBits_t;

typedef struct
{
    uint32 _MCS_IRQ : 1;
    uint32 _STK_ERR_IRQ : 1;
    uint32 _ERR_IRQ : 1;
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
} GTM0MCS00IRQNOTIFYBits_t;

typedef struct
{
    uint32 _MCS_IRQ_EN : 1;
    uint32 _STK_ERR_IRQ_ : 1;
    uint32 _ERR_IRQ_EN : 1;
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
} GTM0MCS00IRQENBits_t;

typedef struct
{
    uint32 _TRG_MCS_IRQ : 1;
    uint32 _TRG_STK_ERRQ : 1;
    uint32 _TRG_ERR_IRQ : 1;
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
} GTM0MCS00IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0MCS00IRQMODEBits_t;

typedef struct
{
    uint32 _MCS_EIRQ_EN : 1;
    uint32 _STK_ERR_EIRQ_EN : 1;
    uint32 _ERR_EIRQ_EN : 1;
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
} GTM0MCS00EIRQENBits_t;

typedef struct
{
    uint32 _SCD_MODE : 2;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _SCD_CH : 4;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RAM_RST : 1;
    uint32 _HLT_SP_OFL : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    const uint32 _ERR_SRC_ID : 2;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _EN_TIM_FOUT : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS0CTRLSTATBits_t;

typedef struct
{
    uint32 _RST0 : 1;
    uint32 _RST1 : 1;
    uint32 _RST2 : 1;
    uint32 _RST3 : 1;
    uint32 _RST4 : 1;
    uint32 _RST5 : 1;
    uint32 _RST6 : 1;
    uint32 _RST7 : 1;
    uint32 _RST8 : 1;
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
} GTM0MCS0RESETBits_t;

typedef struct
{
    uint32 _CAT0 : 1;
    uint32 _CAT1 : 1;
    uint32 _CAT2 : 1;
    uint32 _CAT3 : 1;
    uint32 _CAT4 : 1;
    uint32 _CAT5 : 1;
    uint32 _CAT6 : 1;
    uint32 _CAT7 : 1;
    uint32 _CAT8 : 1;
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
} GTM0MCS0CATBits_t;

typedef struct
{
    uint32 _CWT0 : 1;
    uint32 _CWT1 : 1;
    uint32 _CWT2 : 1;
    uint32 _CWT3 : 1;
    uint32 _CWT4 : 1;
    uint32 _CWT5 : 1;
    uint32 _CWT6 : 1;
    uint32 _CWT7 : 1;
    uint32 _CWT8 : 1;
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
} GTM0MCS0CWTBits_t;

typedef struct
{
    const uint32 _ERR0 : 1;
    const uint32 _ERR1 : 1;
    const uint32 _ERR2 : 1;
    const uint32 _ERR3 : 1;
    const uint32 _ERR4 : 1;
    const uint32 _ERR5 : 1;
    const uint32 _ERR6 : 1;
    const uint32 _ERR7 : 1;
    const uint32 _ERR8 : 1;
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
} GTM0MCS0ERRBits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS01R0Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS01R1Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS01R2Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS01R3Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS01R4Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS01R5Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS01R6Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS01R7Bits_t;

typedef struct
{
    uint32 _EN : 1;
    const uint32 _IRQ : 1;
    const uint32 _ERR : 1;
    uint32 padding3 : 1;
    const uint32 _CY : 1;
    const uint32 _Z : 1;
    const uint32 _V : 1;
    const uint32 _N : 1;
    const uint32 _CAT : 1;
    const uint32 _CWT : 1;
    const uint32 _SAT : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _SP_CNT : 3;
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
} GTM0MCS01CTRLBits_t;

typedef struct
{
    const uint32 _ACB0 : 1;
    const uint32 _ACB1 : 1;
    const uint32 _ACB2 : 1;
    const uint32 _ACB3 : 1;
    const uint32 _ACB4 : 1;
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
} GTM0MCS01ACBBits_t;

typedef struct
{
    const uint32 _DATA : 8;
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
} GTM0MCS01MHBBits_t;

typedef struct
{
    uint32 _PC : 16;
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
} GTM0MCS01PCBits_t;

typedef struct
{
    uint32 _MCS_IRQ : 1;
    uint32 _STK_ERR_IRQ : 1;
    uint32 _ERR_IRQ : 1;
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
} GTM0MCS01IRQNOTIFYBits_t;

typedef struct
{
    uint32 _MCS_IRQ_EN : 1;
    uint32 _STK_ERR_IRQ_ : 1;
    uint32 _ERR_IRQ_EN : 1;
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
} GTM0MCS01IRQENBits_t;

typedef struct
{
    uint32 _TRG_MCS_IRQ : 1;
    uint32 _TRG_STK_ERRQ : 1;
    uint32 _TRG_ERR_IRQ : 1;
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
} GTM0MCS01IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0MCS01IRQMODEBits_t;

typedef struct
{
    uint32 _MCS_EIRQ_EN : 1;
    uint32 _STK_ERR_EIRQ_EN : 1;
    uint32 _ERR_EIRQ_EN : 1;
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
} GTM0MCS01EIRQENBits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS02R0Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS02R1Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS02R2Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS02R3Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS02R4Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS02R5Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS02R6Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS02R7Bits_t;

typedef struct
{
    uint32 _EN : 1;
    const uint32 _IRQ : 1;
    const uint32 _ERR : 1;
    uint32 padding3 : 1;
    const uint32 _CY : 1;
    const uint32 _Z : 1;
    const uint32 _V : 1;
    const uint32 _N : 1;
    const uint32 _CAT : 1;
    const uint32 _CWT : 1;
    const uint32 _SAT : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _SP_CNT : 3;
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
} GTM0MCS02CTRLBits_t;

typedef struct
{
    const uint32 _ACB0 : 1;
    const uint32 _ACB1 : 1;
    const uint32 _ACB2 : 1;
    const uint32 _ACB3 : 1;
    const uint32 _ACB4 : 1;
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
} GTM0MCS02ACBBits_t;

typedef struct
{
    const uint32 _DATA : 8;
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
} GTM0MCS02MHBBits_t;

typedef struct
{
    uint32 _PC : 16;
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
} GTM0MCS02PCBits_t;

typedef struct
{
    uint32 _MCS_IRQ : 1;
    uint32 _STK_ERR_IRQ : 1;
    uint32 _ERR_IRQ : 1;
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
} GTM0MCS02IRQNOTIFYBits_t;

typedef struct
{
    uint32 _MCS_IRQ_EN : 1;
    uint32 _STK_ERR_IRQ_ : 1;
    uint32 _ERR_IRQ_EN : 1;
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
} GTM0MCS02IRQENBits_t;

typedef struct
{
    uint32 _TRG_MCS_IRQ : 1;
    uint32 _TRG_STK_ERRQ : 1;
    uint32 _TRG_ERR_IRQ : 1;
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
} GTM0MCS02IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0MCS02IRQMODEBits_t;

typedef struct
{
    uint32 _MCS_EIRQ_EN : 1;
    uint32 _STK_ERR_EIRQ_EN : 1;
    uint32 _ERR_EIRQ_EN : 1;
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
} GTM0MCS02EIRQENBits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS03R0Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS03R1Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS03R2Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS03R3Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS03R4Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS03R5Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS03R6Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS03R7Bits_t;

typedef struct
{
    uint32 _EN : 1;
    const uint32 _IRQ : 1;
    const uint32 _ERR : 1;
    uint32 padding3 : 1;
    const uint32 _CY : 1;
    const uint32 _Z : 1;
    const uint32 _V : 1;
    const uint32 _N : 1;
    const uint32 _CAT : 1;
    const uint32 _CWT : 1;
    const uint32 _SAT : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _SP_CNT : 3;
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
} GTM0MCS03CTRLBits_t;

typedef struct
{
    const uint32 _ACB0 : 1;
    const uint32 _ACB1 : 1;
    const uint32 _ACB2 : 1;
    const uint32 _ACB3 : 1;
    const uint32 _ACB4 : 1;
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
} GTM0MCS03ACBBits_t;

typedef struct
{
    const uint32 _DATA : 8;
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
} GTM0MCS03MHBBits_t;

typedef struct
{
    uint32 _PC : 16;
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
} GTM0MCS03PCBits_t;

typedef struct
{
    uint32 _MCS_IRQ : 1;
    uint32 _STK_ERR_IRQ : 1;
    uint32 _ERR_IRQ : 1;
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
} GTM0MCS03IRQNOTIFYBits_t;

typedef struct
{
    uint32 _MCS_IRQ_EN : 1;
    uint32 _STK_ERR_IRQ_ : 1;
    uint32 _ERR_IRQ_EN : 1;
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
} GTM0MCS03IRQENBits_t;

typedef struct
{
    uint32 _TRG_MCS_IRQ : 1;
    uint32 _TRG_STK_ERRQ : 1;
    uint32 _TRG_ERR_IRQ : 1;
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
} GTM0MCS03IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0MCS03IRQMODEBits_t;

typedef struct
{
    uint32 _MCS_EIRQ_EN : 1;
    uint32 _STK_ERR_EIRQ_EN : 1;
    uint32 _ERR_EIRQ_EN : 1;
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
} GTM0MCS03EIRQENBits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS04R0Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS04R1Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS04R2Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS04R3Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS04R4Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS04R5Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS04R6Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS04R7Bits_t;

typedef struct
{
    uint32 _EN : 1;
    const uint32 _IRQ : 1;
    const uint32 _ERR : 1;
    uint32 padding3 : 1;
    const uint32 _CY : 1;
    const uint32 _Z : 1;
    const uint32 _V : 1;
    const uint32 _N : 1;
    const uint32 _CAT : 1;
    const uint32 _CWT : 1;
    const uint32 _SAT : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _SP_CNT : 3;
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
} GTM0MCS04CTRLBits_t;

typedef struct
{
    const uint32 _ACB0 : 1;
    const uint32 _ACB1 : 1;
    const uint32 _ACB2 : 1;
    const uint32 _ACB3 : 1;
    const uint32 _ACB4 : 1;
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
} GTM0MCS04ACBBits_t;

typedef struct
{
    const uint32 _DATA : 8;
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
} GTM0MCS04MHBBits_t;

typedef struct
{
    uint32 _PC : 16;
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
} GTM0MCS04PCBits_t;

typedef struct
{
    uint32 _MCS_IRQ : 1;
    uint32 _STK_ERR_IRQ : 1;
    uint32 _ERR_IRQ : 1;
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
} GTM0MCS04IRQNOTIFYBits_t;

typedef struct
{
    uint32 _MCS_IRQ_EN : 1;
    uint32 _STK_ERR_IRQ_ : 1;
    uint32 _ERR_IRQ_EN : 1;
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
} GTM0MCS04IRQENBits_t;

typedef struct
{
    uint32 _TRG_MCS_IRQ : 1;
    uint32 _TRG_STK_ERRQ : 1;
    uint32 _TRG_ERR_IRQ : 1;
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
} GTM0MCS04IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0MCS04IRQMODEBits_t;

typedef struct
{
    uint32 _MCS_EIRQ_EN : 1;
    uint32 _STK_ERR_EIRQ_EN : 1;
    uint32 _ERR_EIRQ_EN : 1;
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
} GTM0MCS04EIRQENBits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS05R0Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS05R1Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS05R2Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS05R3Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS05R4Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS05R5Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS05R6Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS05R7Bits_t;

typedef struct
{
    uint32 _EN : 1;
    const uint32 _IRQ : 1;
    const uint32 _ERR : 1;
    uint32 padding3 : 1;
    const uint32 _CY : 1;
    const uint32 _Z : 1;
    const uint32 _V : 1;
    const uint32 _N : 1;
    const uint32 _CAT : 1;
    const uint32 _CWT : 1;
    const uint32 _SAT : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _SP_CNT : 3;
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
} GTM0MCS05CTRLBits_t;

typedef struct
{
    const uint32 _ACB0 : 1;
    const uint32 _ACB1 : 1;
    const uint32 _ACB2 : 1;
    const uint32 _ACB3 : 1;
    const uint32 _ACB4 : 1;
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
} GTM0MCS05ACBBits_t;

typedef struct
{
    const uint32 _DATA : 8;
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
} GTM0MCS05MHBBits_t;

typedef struct
{
    uint32 _PC : 16;
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
} GTM0MCS05PCBits_t;

typedef struct
{
    uint32 _MCS_IRQ : 1;
    uint32 _STK_ERR_IRQ : 1;
    uint32 _ERR_IRQ : 1;
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
} GTM0MCS05IRQNOTIFYBits_t;

typedef struct
{
    uint32 _MCS_IRQ_EN : 1;
    uint32 _STK_ERR_IRQ_ : 1;
    uint32 _ERR_IRQ_EN : 1;
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
} GTM0MCS05IRQENBits_t;

typedef struct
{
    uint32 _TRG_MCS_IRQ : 1;
    uint32 _TRG_STK_ERRQ : 1;
    uint32 _TRG_ERR_IRQ : 1;
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
} GTM0MCS05IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0MCS05IRQMODEBits_t;

typedef struct
{
    uint32 _MCS_EIRQ_EN : 1;
    uint32 _STK_ERR_EIRQ_EN : 1;
    uint32 _ERR_EIRQ_EN : 1;
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
} GTM0MCS05EIRQENBits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS06R0Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS06R1Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS06R2Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS06R3Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS06R4Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS06R5Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS06R6Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS06R7Bits_t;

typedef struct
{
    uint32 _EN : 1;
    const uint32 _IRQ : 1;
    const uint32 _ERR : 1;
    uint32 padding3 : 1;
    const uint32 _CY : 1;
    const uint32 _Z : 1;
    const uint32 _V : 1;
    const uint32 _N : 1;
    const uint32 _CAT : 1;
    const uint32 _CWT : 1;
    const uint32 _SAT : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _SP_CNT : 3;
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
} GTM0MCS06CTRLBits_t;

typedef struct
{
    const uint32 _ACB0 : 1;
    const uint32 _ACB1 : 1;
    const uint32 _ACB2 : 1;
    const uint32 _ACB3 : 1;
    const uint32 _ACB4 : 1;
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
} GTM0MCS06ACBBits_t;

typedef struct
{
    const uint32 _DATA : 8;
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
} GTM0MCS06MHBBits_t;

typedef struct
{
    uint32 _PC : 16;
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
} GTM0MCS06PCBits_t;

typedef struct
{
    uint32 _MCS_IRQ : 1;
    uint32 _STK_ERR_IRQ : 1;
    uint32 _ERR_IRQ : 1;
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
} GTM0MCS06IRQNOTIFYBits_t;

typedef struct
{
    uint32 _MCS_IRQ_EN : 1;
    uint32 _STK_ERR_IRQ_ : 1;
    uint32 _ERR_IRQ_EN : 1;
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
} GTM0MCS06IRQENBits_t;

typedef struct
{
    uint32 _TRG_MCS_IRQ : 1;
    uint32 _TRG_STK_ERRQ : 1;
    uint32 _TRG_ERR_IRQ : 1;
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
} GTM0MCS06IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0MCS06IRQMODEBits_t;

typedef struct
{
    uint32 _MCS_EIRQ_EN : 1;
    uint32 _STK_ERR_EIRQ_EN : 1;
    uint32 _ERR_EIRQ_EN : 1;
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
} GTM0MCS06EIRQENBits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS07R0Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS07R1Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS07R2Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS07R3Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS07R4Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS07R5Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS07R6Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS07R7Bits_t;

typedef struct
{
    uint32 _EN : 1;
    const uint32 _IRQ : 1;
    const uint32 _ERR : 1;
    uint32 padding3 : 1;
    const uint32 _CY : 1;
    const uint32 _Z : 1;
    const uint32 _V : 1;
    const uint32 _N : 1;
    const uint32 _CAT : 1;
    const uint32 _CWT : 1;
    const uint32 _SAT : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _SP_CNT : 3;
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
} GTM0MCS07CTRLBits_t;

typedef struct
{
    const uint32 _ACB0 : 1;
    const uint32 _ACB1 : 1;
    const uint32 _ACB2 : 1;
    const uint32 _ACB3 : 1;
    const uint32 _ACB4 : 1;
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
} GTM0MCS07ACBBits_t;

typedef struct
{
    const uint32 _DATA : 8;
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
} GTM0MCS07MHBBits_t;

typedef struct
{
    uint32 _PC : 16;
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
} GTM0MCS07PCBits_t;

typedef struct
{
    uint32 _MCS_IRQ : 1;
    uint32 _STK_ERR_IRQ : 1;
    uint32 _ERR_IRQ : 1;
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
} GTM0MCS07IRQNOTIFYBits_t;

typedef struct
{
    uint32 _MCS_IRQ_EN : 1;
    uint32 _STK_ERR_IRQ_ : 1;
    uint32 _ERR_IRQ_EN : 1;
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
} GTM0MCS07IRQENBits_t;

typedef struct
{
    uint32 _TRG_MCS_IRQ : 1;
    uint32 _TRG_STK_ERRQ : 1;
    uint32 _TRG_ERR_IRQ : 1;
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
} GTM0MCS07IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0MCS07IRQMODEBits_t;

typedef struct
{
    uint32 _MCS_EIRQ_EN : 1;
    uint32 _STK_ERR_EIRQ_EN : 1;
    uint32 _ERR_EIRQ_EN : 1;
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
} GTM0MCS07EIRQENBits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS08R0Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS08R1Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS08R2Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS08R3Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS08R4Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS08R5Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS08R6Bits_t;

typedef struct
{
    uint32 _DATA : 24;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} GTM0MCS08R7Bits_t;

typedef struct
{
    uint32 _EN : 1;
    const uint32 _IRQ : 1;
    const uint32 _ERR : 1;
    uint32 padding3 : 1;
    const uint32 _CY : 1;
    const uint32 _Z : 1;
    const uint32 _V : 1;
    const uint32 _N : 1;
    const uint32 _CAT : 1;
    const uint32 _CWT : 1;
    const uint32 _SAT : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _SP_CNT : 3;
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
} GTM0MCS08CTRLBits_t;

typedef struct
{
    const uint32 _ACB0 : 1;
    const uint32 _ACB1 : 1;
    const uint32 _ACB2 : 1;
    const uint32 _ACB3 : 1;
    const uint32 _ACB4 : 1;
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
} GTM0MCS08ACBBits_t;

typedef struct
{
    const uint32 _DATA : 8;
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
} GTM0MCS08MHBBits_t;

typedef struct
{
    uint32 _PC : 16;
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
} GTM0MCS08PCBits_t;

typedef struct
{
    uint32 _MCS_IRQ : 1;
    uint32 _STK_ERR_IRQ : 1;
    uint32 _ERR_IRQ : 1;
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
} GTM0MCS08IRQNOTIFYBits_t;

typedef struct
{
    uint32 _MCS_IRQ_EN : 1;
    uint32 _STK_ERR_IRQ_ : 1;
    uint32 _ERR_IRQ_EN : 1;
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
} GTM0MCS08IRQENBits_t;

typedef struct
{
    uint32 _TRG_MCS_IRQ : 1;
    uint32 _TRG_STK_ERRQ : 1;
    uint32 _TRG_ERR_IRQ : 1;
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
} GTM0MCS08IRQFORCINTBits_t;

typedef struct
{
    uint32 _IRQ_MODE : 2;
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
} GTM0MCS08IRQMODEBits_t;

typedef struct
{
    uint32 _MCS_EIRQ_EN : 1;
    uint32 _STK_ERR_EIRQ_EN : 1;
    uint32 _ERR_EIRQ_EN : 1;
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
} GTM0MCS08EIRQENBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    const GTM0GTMREVBits_t BIT;
} GTM0GTMREV_t;

typedef union
{
    uint32 UINT32;
    GTM0GTMRSTBits_t BIT;
} GTM0GTMRST_t;

typedef union
{
    uint32 UINT32;
    GTM0GTMCTRLBits_t BIT;
} GTM0GTMCTRL_t;

typedef union
{
    uint32 UINT32;
    const GTM0GTMAEIADDRXPTBits_t BIT;
} GTM0GTMAEIADDRXPT_t;

typedef union
{
    uint32 UINT32;
    GTM0GTMIRQNOTIFYBits_t BIT;
} GTM0GTMIRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0GTMIRQENBits_t BIT;
} GTM0GTMIRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0GTMIRQFORCINTBits_t BIT;
} GTM0GTMIRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0GTMIRQMODEBits_t BIT;
} GTM0GTMIRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0GTMEIRQENBits_t BIT;
} GTM0GTMEIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0GTMHWCONFBits_t BIT;
} GTM0GTMHWCONF_t;

typedef union
{
    uint32 UINT32;
    GTM0GTMBRIDGEMODEBits_t BIT;
} GTM0GTMBRIDGEMODE_t;

typedef union
{
    uint32 UINT32;
    const GTM0GTMBRIDGEPTR1Bits_t BIT;
} GTM0GTMBRIDGEPTR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0GTMBRIDGEPTR2Bits_t BIT;
} GTM0GTMBRIDGEPTR2_t;

typedef union
{
    uint32 UINT32;
    GTM0GTMTIM0AUXINSRCBits_t BIT;
} GTM0GTMTIM0AUXINSRC_t;

typedef union
{
    uint32 UINT32;
    GTM0GTMTIM1AUXINSRCBits_t BIT;
} GTM0GTMTIM1AUXINSRC_t;

typedef union
{
    uint32 UINT32;
    GTM0GTMEXTCAPEN0Bits_t BIT;
} GTM0GTMEXTCAPEN0_t;

typedef union
{
    uint32 UINT32;
    const GTM0GTMATOM0OUTBits_t BIT;
} GTM0GTMATOM0OUT_t;

typedef union
{
    uint32 UINT32;
    GTM0TBUCHENBits_t BIT;
} GTM0TBUCHEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TBU0CTRLBits_t BIT;
} GTM0TBU0CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TBU0BASEBits_t BIT;
} GTM0TBU0BASE_t;

typedef union
{
    uint32 UINT32;
    GTM0TBU1CTRLBits_t BIT;
} GTM0TBU1CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TBU1BASEBits_t BIT;
} GTM0TBU1BASE_t;

typedef union
{
    uint32 UINT32;
    GTM0MONSTATUSBits_t BIT;
} GTM0MONSTATUS_t;

typedef union
{
    uint32 UINT32;
    GTM0MONACTIVITY0Bits_t BIT;
} GTM0MONACTIVITY0_t;

typedef union
{
    uint32 UINT32;
    GTM0MONACTIVITYMCS0Bits_t BIT;
} GTM0MONACTIVITYMCS0_t;

typedef union
{
    uint32 UINT32;
    GTM0CMPENBits_t BIT;
} GTM0CMPEN_t;

typedef union
{
    uint32 UINT32;
    GTM0CMPIRQNOTIFYBits_t BIT;
} GTM0CMPIRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0CMPIRQENBits_t BIT;
} GTM0CMPIRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0CMPIRQFORCINTBits_t BIT;
} GTM0CMPIRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0CMPIRQMODEBits_t BIT;
} GTM0CMPIRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0CMPEIRQENBits_t BIT;
} GTM0CMPEIRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ARUACCESSBits_t BIT;
} GTM0ARUACCESS_t;

typedef union
{
    uint32 UINT32;
    GTM0ARUDATAHBits_t BIT;
} GTM0ARUDATAH_t;

typedef union
{
    uint32 UINT32;
    GTM0ARUDATALBits_t BIT;
} GTM0ARUDATAL_t;

typedef union
{
    uint32 UINT32;
    GTM0ARUDBGACCESS0Bits_t BIT;
} GTM0ARUDBGACCESS0_t;

typedef union
{
    uint32 UINT32;
    const GTM0ARUDBGDATA0HBits_t BIT;
} GTM0ARUDBGDATA0H_t;

typedef union
{
    uint32 UINT32;
    const GTM0ARUDBGDATA0LBits_t BIT;
} GTM0ARUDBGDATA0L_t;

typedef union
{
    uint32 UINT32;
    GTM0ARUDBGACCESS1Bits_t BIT;
} GTM0ARUDBGACCESS1_t;

typedef union
{
    uint32 UINT32;
    const GTM0ARUDBGDATA1HBits_t BIT;
} GTM0ARUDBGDATA1H_t;

typedef union
{
    uint32 UINT32;
    const GTM0ARUDBGDATA1LBits_t BIT;
} GTM0ARUDBGDATA1L_t;

typedef union
{
    uint32 UINT32;
    GTM0ARUIRQNOTIFYBits_t BIT;
} GTM0ARUIRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0ARUIRQENBits_t BIT;
} GTM0ARUIRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ARUIRQFORCINTBits_t BIT;
} GTM0ARUIRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0ARUIRQMODEBits_t BIT;
} GTM0ARUIRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0ARUCADDRENDBits_t BIT;
} GTM0ARUCADDREND_t;

typedef union
{
    uint32 UINT32;
    GTM0CMUCLKENBits_t BIT;
} GTM0CMUCLKEN_t;

typedef union
{
    uint32 UINT32;
    GTM0CMUGCLKNUMBits_t BIT;
} GTM0CMUGCLKNUM_t;

typedef union
{
    uint32 UINT32;
    GTM0CMUGCLKDENBits_t BIT;
} GTM0CMUGCLKDEN_t;

typedef union
{
    uint32 UINT32;
    GTM0CMUCLK0CTRLBits_t BIT;
} GTM0CMUCLK0CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0CMUCLK1CTRLBits_t BIT;
} GTM0CMUCLK1CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0CMUCLK2CTRLBits_t BIT;
} GTM0CMUCLK2CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0CMUCLK3CTRLBits_t BIT;
} GTM0CMUCLK3CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0CMUCLK4CTRLBits_t BIT;
} GTM0CMUCLK4CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0CMUCLK5CTRLBits_t BIT;
} GTM0CMUCLK5CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0CMUCLK6CTRLBits_t BIT;
} GTM0CMUCLK6CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0CMUCLK7CTRLBits_t BIT;
} GTM0CMUCLK7CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0CMUGLBCTRLBits_t BIT;
} GTM0CMUGLBCTRL_t;

typedef union
{
    uint32 UINT32;
    const GTM0ICMIRQG0Bits_t BIT;
} GTM0ICMIRQG0_t;

typedef union
{
    uint32 UINT32;
    const GTM0ICMIRQG2Bits_t BIT;
} GTM0ICMIRQG2_t;

typedef union
{
    uint32 UINT32;
    const GTM0ICMIRQG4Bits_t BIT;
} GTM0ICMIRQG4_t;

typedef union
{
    uint32 UINT32;
    const GTM0ICMIRQG9Bits_t BIT;
} GTM0ICMIRQG9_t;

typedef union
{
    uint32 UINT32;
    const GTM0ICMIRQGMEIBits_t BIT;
} GTM0ICMIRQGMEI_t;

typedef union
{
    uint32 UINT32;
    const GTM0ICMIRQGCEI1Bits_t BIT;
} GTM0ICMIRQGCEI1_t;

typedef union
{
    uint32 UINT32;
    const GTM0ICMIRQGCEI3Bits_t BIT;
} GTM0ICMIRQGCEI3_t;

typedef union
{
    uint32 UINT32;
    const GTM0ICMIRQGMCS0CIBits_t BIT;
} GTM0ICMIRQGMCS0CI_t;

typedef union
{
    uint32 UINT32;
    const GTM0ICMIRQGMCS0CEIBits_t BIT;
} GTM0ICMIRQGMCS0CEI_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM00GPR0Bits_t BIT;
} GTM0TIM00GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM00GPR1Bits_t BIT;
} GTM0TIM00GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM00CNTBits_t BIT;
} GTM0TIM00CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM00ECNTBits_t BIT;
} GTM0TIM00ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM00CNTSBits_t BIT;
} GTM0TIM00CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM00TDUCBits_t BIT;
} GTM0TIM00TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM00TDUVBits_t BIT;
} GTM0TIM00TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM00FLTREBits_t BIT;
} GTM0TIM00FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM00FLTFEBits_t BIT;
} GTM0TIM00FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM00CTRLBits_t BIT;
} GTM0TIM00CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM00ECTRLBits_t BIT;
} GTM0TIM00ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM00IRQNOTIFYBits_t BIT;
} GTM0TIM00IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM00IRQENBits_t BIT;
} GTM0TIM00IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM00IRQFORCINTBits_t BIT;
} GTM0TIM00IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM00IRQMODEBits_t BIT;
} GTM0TIM00IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM00EIRQENBits_t BIT;
} GTM0TIM00EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM0INPVALBits_t BIT;
} GTM0TIM0INPVAL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM0INSRCBits_t BIT;
} GTM0TIM0INSRC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM0RSTBits_t BIT;
} GTM0TIM0RST_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM01GPR0Bits_t BIT;
} GTM0TIM01GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM01GPR1Bits_t BIT;
} GTM0TIM01GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM01CNTBits_t BIT;
} GTM0TIM01CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM01ECNTBits_t BIT;
} GTM0TIM01ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM01CNTSBits_t BIT;
} GTM0TIM01CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM01TDUCBits_t BIT;
} GTM0TIM01TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM01TDUVBits_t BIT;
} GTM0TIM01TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM01FLTREBits_t BIT;
} GTM0TIM01FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM01FLTFEBits_t BIT;
} GTM0TIM01FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM01CTRLBits_t BIT;
} GTM0TIM01CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM01ECTRLBits_t BIT;
} GTM0TIM01ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM01IRQNOTIFYBits_t BIT;
} GTM0TIM01IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM01IRQENBits_t BIT;
} GTM0TIM01IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM01IRQFORCINTBits_t BIT;
} GTM0TIM01IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM01IRQMODEBits_t BIT;
} GTM0TIM01IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM01EIRQENBits_t BIT;
} GTM0TIM01EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM02GPR0Bits_t BIT;
} GTM0TIM02GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM02GPR1Bits_t BIT;
} GTM0TIM02GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM02CNTBits_t BIT;
} GTM0TIM02CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM02ECNTBits_t BIT;
} GTM0TIM02ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM02CNTSBits_t BIT;
} GTM0TIM02CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM02TDUCBits_t BIT;
} GTM0TIM02TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM02TDUVBits_t BIT;
} GTM0TIM02TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM02FLTREBits_t BIT;
} GTM0TIM02FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM02FLTFEBits_t BIT;
} GTM0TIM02FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM02CTRLBits_t BIT;
} GTM0TIM02CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM02ECTRLBits_t BIT;
} GTM0TIM02ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM02IRQNOTIFYBits_t BIT;
} GTM0TIM02IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM02IRQENBits_t BIT;
} GTM0TIM02IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM02IRQFORCINTBits_t BIT;
} GTM0TIM02IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM02IRQMODEBits_t BIT;
} GTM0TIM02IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM02EIRQENBits_t BIT;
} GTM0TIM02EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM03GPR0Bits_t BIT;
} GTM0TIM03GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM03GPR1Bits_t BIT;
} GTM0TIM03GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM03CNTBits_t BIT;
} GTM0TIM03CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM03ECNTBits_t BIT;
} GTM0TIM03ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM03CNTSBits_t BIT;
} GTM0TIM03CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM03TDUCBits_t BIT;
} GTM0TIM03TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM03TDUVBits_t BIT;
} GTM0TIM03TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM03FLTREBits_t BIT;
} GTM0TIM03FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM03FLTFEBits_t BIT;
} GTM0TIM03FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM03CTRLBits_t BIT;
} GTM0TIM03CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM03ECTRLBits_t BIT;
} GTM0TIM03ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM03IRQNOTIFYBits_t BIT;
} GTM0TIM03IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM03IRQENBits_t BIT;
} GTM0TIM03IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM03IRQFORCINTBits_t BIT;
} GTM0TIM03IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM03IRQMODEBits_t BIT;
} GTM0TIM03IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM03EIRQENBits_t BIT;
} GTM0TIM03EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM04GPR0Bits_t BIT;
} GTM0TIM04GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM04GPR1Bits_t BIT;
} GTM0TIM04GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM04CNTBits_t BIT;
} GTM0TIM04CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM04ECNTBits_t BIT;
} GTM0TIM04ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM04CNTSBits_t BIT;
} GTM0TIM04CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM04TDUCBits_t BIT;
} GTM0TIM04TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM04TDUVBits_t BIT;
} GTM0TIM04TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM04FLTREBits_t BIT;
} GTM0TIM04FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM04FLTFEBits_t BIT;
} GTM0TIM04FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM04CTRLBits_t BIT;
} GTM0TIM04CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM04ECTRLBits_t BIT;
} GTM0TIM04ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM04IRQNOTIFYBits_t BIT;
} GTM0TIM04IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM04IRQENBits_t BIT;
} GTM0TIM04IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM04IRQFORCINTBits_t BIT;
} GTM0TIM04IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM04IRQMODEBits_t BIT;
} GTM0TIM04IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM04EIRQENBits_t BIT;
} GTM0TIM04EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM05GPR0Bits_t BIT;
} GTM0TIM05GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM05GPR1Bits_t BIT;
} GTM0TIM05GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM05CNTBits_t BIT;
} GTM0TIM05CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM05ECNTBits_t BIT;
} GTM0TIM05ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM05CNTSBits_t BIT;
} GTM0TIM05CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM05TDUCBits_t BIT;
} GTM0TIM05TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM05TDUVBits_t BIT;
} GTM0TIM05TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM05FLTREBits_t BIT;
} GTM0TIM05FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM05FLTFEBits_t BIT;
} GTM0TIM05FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM05CTRLBits_t BIT;
} GTM0TIM05CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM05ECTRLBits_t BIT;
} GTM0TIM05ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM05IRQNOTIFYBits_t BIT;
} GTM0TIM05IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM05IRQENBits_t BIT;
} GTM0TIM05IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM05IRQFORCINTBits_t BIT;
} GTM0TIM05IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM05IRQMODEBits_t BIT;
} GTM0TIM05IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM05EIRQENBits_t BIT;
} GTM0TIM05EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM06GPR0Bits_t BIT;
} GTM0TIM06GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM06GPR1Bits_t BIT;
} GTM0TIM06GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM06CNTBits_t BIT;
} GTM0TIM06CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM06ECNTBits_t BIT;
} GTM0TIM06ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM06CNTSBits_t BIT;
} GTM0TIM06CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM06TDUCBits_t BIT;
} GTM0TIM06TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM06TDUVBits_t BIT;
} GTM0TIM06TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM06FLTREBits_t BIT;
} GTM0TIM06FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM06FLTFEBits_t BIT;
} GTM0TIM06FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM06CTRLBits_t BIT;
} GTM0TIM06CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM06ECTRLBits_t BIT;
} GTM0TIM06ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM06IRQNOTIFYBits_t BIT;
} GTM0TIM06IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM06IRQENBits_t BIT;
} GTM0TIM06IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM06IRQFORCINTBits_t BIT;
} GTM0TIM06IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM06IRQMODEBits_t BIT;
} GTM0TIM06IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM06EIRQENBits_t BIT;
} GTM0TIM06EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM07GPR0Bits_t BIT;
} GTM0TIM07GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM07GPR1Bits_t BIT;
} GTM0TIM07GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM07CNTBits_t BIT;
} GTM0TIM07CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM07ECNTBits_t BIT;
} GTM0TIM07ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM07CNTSBits_t BIT;
} GTM0TIM07CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM07TDUCBits_t BIT;
} GTM0TIM07TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM07TDUVBits_t BIT;
} GTM0TIM07TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM07FLTREBits_t BIT;
} GTM0TIM07FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM07FLTFEBits_t BIT;
} GTM0TIM07FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM07CTRLBits_t BIT;
} GTM0TIM07CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM07ECTRLBits_t BIT;
} GTM0TIM07ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM07IRQNOTIFYBits_t BIT;
} GTM0TIM07IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM07IRQENBits_t BIT;
} GTM0TIM07IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM07IRQFORCINTBits_t BIT;
} GTM0TIM07IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM07IRQMODEBits_t BIT;
} GTM0TIM07IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM07EIRQENBits_t BIT;
} GTM0TIM07EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM10GPR0Bits_t BIT;
} GTM0TIM10GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM10GPR1Bits_t BIT;
} GTM0TIM10GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM10CNTBits_t BIT;
} GTM0TIM10CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM10ECNTBits_t BIT;
} GTM0TIM10ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM10CNTSBits_t BIT;
} GTM0TIM10CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM10TDUCBits_t BIT;
} GTM0TIM10TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM10TDUVBits_t BIT;
} GTM0TIM10TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM10FLTREBits_t BIT;
} GTM0TIM10FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM10FLTFEBits_t BIT;
} GTM0TIM10FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM10CTRLBits_t BIT;
} GTM0TIM10CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM10ECTRLBits_t BIT;
} GTM0TIM10ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM10IRQNOTIFYBits_t BIT;
} GTM0TIM10IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM10IRQENBits_t BIT;
} GTM0TIM10IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM10IRQFORCINTBits_t BIT;
} GTM0TIM10IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM10IRQMODEBits_t BIT;
} GTM0TIM10IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM10EIRQENBits_t BIT;
} GTM0TIM10EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM1INPVALBits_t BIT;
} GTM0TIM1INPVAL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM1INSRCBits_t BIT;
} GTM0TIM1INSRC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM1RSTBits_t BIT;
} GTM0TIM1RST_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM11GPR0Bits_t BIT;
} GTM0TIM11GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM11GPR1Bits_t BIT;
} GTM0TIM11GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM11CNTBits_t BIT;
} GTM0TIM11CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM11ECNTBits_t BIT;
} GTM0TIM11ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM11CNTSBits_t BIT;
} GTM0TIM11CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM11TDUCBits_t BIT;
} GTM0TIM11TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM11TDUVBits_t BIT;
} GTM0TIM11TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM11FLTREBits_t BIT;
} GTM0TIM11FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM11FLTFEBits_t BIT;
} GTM0TIM11FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM11CTRLBits_t BIT;
} GTM0TIM11CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM11ECTRLBits_t BIT;
} GTM0TIM11ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM11IRQNOTIFYBits_t BIT;
} GTM0TIM11IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM11IRQENBits_t BIT;
} GTM0TIM11IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM11IRQFORCINTBits_t BIT;
} GTM0TIM11IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM11IRQMODEBits_t BIT;
} GTM0TIM11IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM11EIRQENBits_t BIT;
} GTM0TIM11EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM12GPR0Bits_t BIT;
} GTM0TIM12GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM12GPR1Bits_t BIT;
} GTM0TIM12GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM12CNTBits_t BIT;
} GTM0TIM12CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM12ECNTBits_t BIT;
} GTM0TIM12ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM12CNTSBits_t BIT;
} GTM0TIM12CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM12TDUCBits_t BIT;
} GTM0TIM12TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM12TDUVBits_t BIT;
} GTM0TIM12TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM12FLTREBits_t BIT;
} GTM0TIM12FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM12FLTFEBits_t BIT;
} GTM0TIM12FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM12CTRLBits_t BIT;
} GTM0TIM12CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM12ECTRLBits_t BIT;
} GTM0TIM12ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM12IRQNOTIFYBits_t BIT;
} GTM0TIM12IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM12IRQENBits_t BIT;
} GTM0TIM12IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM12IRQFORCINTBits_t BIT;
} GTM0TIM12IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM12IRQMODEBits_t BIT;
} GTM0TIM12IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM12EIRQENBits_t BIT;
} GTM0TIM12EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM13GPR0Bits_t BIT;
} GTM0TIM13GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM13GPR1Bits_t BIT;
} GTM0TIM13GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM13CNTBits_t BIT;
} GTM0TIM13CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM13ECNTBits_t BIT;
} GTM0TIM13ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM13CNTSBits_t BIT;
} GTM0TIM13CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM13TDUCBits_t BIT;
} GTM0TIM13TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM13TDUVBits_t BIT;
} GTM0TIM13TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM13FLTREBits_t BIT;
} GTM0TIM13FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM13FLTFEBits_t BIT;
} GTM0TIM13FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM13CTRLBits_t BIT;
} GTM0TIM13CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM13ECTRLBits_t BIT;
} GTM0TIM13ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM13IRQNOTIFYBits_t BIT;
} GTM0TIM13IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM13IRQENBits_t BIT;
} GTM0TIM13IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM13IRQFORCINTBits_t BIT;
} GTM0TIM13IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM13IRQMODEBits_t BIT;
} GTM0TIM13IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM13EIRQENBits_t BIT;
} GTM0TIM13EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM14GPR0Bits_t BIT;
} GTM0TIM14GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM14GPR1Bits_t BIT;
} GTM0TIM14GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM14CNTBits_t BIT;
} GTM0TIM14CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM14ECNTBits_t BIT;
} GTM0TIM14ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM14CNTSBits_t BIT;
} GTM0TIM14CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM14TDUCBits_t BIT;
} GTM0TIM14TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM14TDUVBits_t BIT;
} GTM0TIM14TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM14FLTREBits_t BIT;
} GTM0TIM14FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM14FLTFEBits_t BIT;
} GTM0TIM14FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM14CTRLBits_t BIT;
} GTM0TIM14CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM14ECTRLBits_t BIT;
} GTM0TIM14ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM14IRQNOTIFYBits_t BIT;
} GTM0TIM14IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM14IRQENBits_t BIT;
} GTM0TIM14IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM14IRQFORCINTBits_t BIT;
} GTM0TIM14IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM14IRQMODEBits_t BIT;
} GTM0TIM14IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM14EIRQENBits_t BIT;
} GTM0TIM14EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM15GPR0Bits_t BIT;
} GTM0TIM15GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM15GPR1Bits_t BIT;
} GTM0TIM15GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM15CNTBits_t BIT;
} GTM0TIM15CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM15ECNTBits_t BIT;
} GTM0TIM15ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM15CNTSBits_t BIT;
} GTM0TIM15CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM15TDUCBits_t BIT;
} GTM0TIM15TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM15TDUVBits_t BIT;
} GTM0TIM15TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM15FLTREBits_t BIT;
} GTM0TIM15FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM15FLTFEBits_t BIT;
} GTM0TIM15FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM15CTRLBits_t BIT;
} GTM0TIM15CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM15ECTRLBits_t BIT;
} GTM0TIM15ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM15IRQNOTIFYBits_t BIT;
} GTM0TIM15IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM15IRQENBits_t BIT;
} GTM0TIM15IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM15IRQFORCINTBits_t BIT;
} GTM0TIM15IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM15IRQMODEBits_t BIT;
} GTM0TIM15IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM15EIRQENBits_t BIT;
} GTM0TIM15EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM16GPR0Bits_t BIT;
} GTM0TIM16GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM16GPR1Bits_t BIT;
} GTM0TIM16GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM16CNTBits_t BIT;
} GTM0TIM16CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM16ECNTBits_t BIT;
} GTM0TIM16ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM16CNTSBits_t BIT;
} GTM0TIM16CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM16TDUCBits_t BIT;
} GTM0TIM16TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM16TDUVBits_t BIT;
} GTM0TIM16TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM16FLTREBits_t BIT;
} GTM0TIM16FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM16FLTFEBits_t BIT;
} GTM0TIM16FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM16CTRLBits_t BIT;
} GTM0TIM16CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM16ECTRLBits_t BIT;
} GTM0TIM16ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM16IRQNOTIFYBits_t BIT;
} GTM0TIM16IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM16IRQENBits_t BIT;
} GTM0TIM16IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM16IRQFORCINTBits_t BIT;
} GTM0TIM16IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM16IRQMODEBits_t BIT;
} GTM0TIM16IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM16EIRQENBits_t BIT;
} GTM0TIM16EIRQEN_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM17GPR0Bits_t BIT;
} GTM0TIM17GPR0_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM17GPR1Bits_t BIT;
} GTM0TIM17GPR1_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM17CNTBits_t BIT;
} GTM0TIM17CNT_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM17ECNTBits_t BIT;
} GTM0TIM17ECNT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM17CNTSBits_t BIT;
} GTM0TIM17CNTS_t;

typedef union
{
    uint32 UINT32;
    const GTM0TIM17TDUCBits_t BIT;
} GTM0TIM17TDUC_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM17TDUVBits_t BIT;
} GTM0TIM17TDUV_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM17FLTREBits_t BIT;
} GTM0TIM17FLTRE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM17FLTFEBits_t BIT;
} GTM0TIM17FLTFE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM17CTRLBits_t BIT;
} GTM0TIM17CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM17ECTRLBits_t BIT;
} GTM0TIM17ECTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM17IRQNOTIFYBits_t BIT;
} GTM0TIM17IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM17IRQENBits_t BIT;
} GTM0TIM17IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM17IRQFORCINTBits_t BIT;
} GTM0TIM17IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM17IRQMODEBits_t BIT;
} GTM0TIM17IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0TIM17EIRQENBits_t BIT;
} GTM0TIM17EIRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM00RDADDRBits_t BIT;
} GTM0ATOM00RDADDR_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM00CTRLBits_t BIT;
} GTM0ATOM00CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM00SR0Bits_t BIT;
} GTM0ATOM00SR0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM00SR1Bits_t BIT;
} GTM0ATOM00SR1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM00CM0Bits_t BIT;
} GTM0ATOM00CM0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM00CM1Bits_t BIT;
} GTM0ATOM00CM1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM00CN0Bits_t BIT;
} GTM0ATOM00CN0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM00STATBits_t BIT;
} GTM0ATOM00STAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM00IRQNOTIFYBits_t BIT;
} GTM0ATOM00IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM00IRQENBits_t BIT;
} GTM0ATOM00IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM00IRQFORCINTBits_t BIT;
} GTM0ATOM00IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM00IRQMODEBits_t BIT;
} GTM0ATOM00IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM0AGCGLBCTRLBits_t BIT;
} GTM0ATOM0AGCGLBCTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM0AGCENDISCTRLBits_t BIT;
} GTM0ATOM0AGCENDISCTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM0AGCENDISSTATBits_t BIT;
} GTM0ATOM0AGCENDISSTAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM0AGCACTTBBits_t BIT;
} GTM0ATOM0AGCACTTB_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM0AGCOUTENCTRLBits_t BIT;
} GTM0ATOM0AGCOUTENCTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM0AGCOUTENSTATBits_t BIT;
} GTM0ATOM0AGCOUTENSTAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM0AGCFUPDCTRLBits_t BIT;
} GTM0ATOM0AGCFUPDCTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM0AGCINTTRIGBits_t BIT;
} GTM0ATOM0AGCINTTRIG_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM01RDADDRBits_t BIT;
} GTM0ATOM01RDADDR_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM01CTRLBits_t BIT;
} GTM0ATOM01CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM01SR0Bits_t BIT;
} GTM0ATOM01SR0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM01SR1Bits_t BIT;
} GTM0ATOM01SR1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM01CM0Bits_t BIT;
} GTM0ATOM01CM0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM01CM1Bits_t BIT;
} GTM0ATOM01CM1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM01CN0Bits_t BIT;
} GTM0ATOM01CN0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM01STATBits_t BIT;
} GTM0ATOM01STAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM01IRQNOTIFYBits_t BIT;
} GTM0ATOM01IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM01IRQENBits_t BIT;
} GTM0ATOM01IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM01IRQFORCINTBits_t BIT;
} GTM0ATOM01IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM01IRQMODEBits_t BIT;
} GTM0ATOM01IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM02RDADDRBits_t BIT;
} GTM0ATOM02RDADDR_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM02CTRLBits_t BIT;
} GTM0ATOM02CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM02SR0Bits_t BIT;
} GTM0ATOM02SR0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM02SR1Bits_t BIT;
} GTM0ATOM02SR1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM02CM0Bits_t BIT;
} GTM0ATOM02CM0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM02CM1Bits_t BIT;
} GTM0ATOM02CM1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM02CN0Bits_t BIT;
} GTM0ATOM02CN0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM02STATBits_t BIT;
} GTM0ATOM02STAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM02IRQNOTIFYBits_t BIT;
} GTM0ATOM02IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM02IRQENBits_t BIT;
} GTM0ATOM02IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM02IRQFORCINTBits_t BIT;
} GTM0ATOM02IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM02IRQMODEBits_t BIT;
} GTM0ATOM02IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM03RDADDRBits_t BIT;
} GTM0ATOM03RDADDR_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM03CTRLBits_t BIT;
} GTM0ATOM03CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM03SR0Bits_t BIT;
} GTM0ATOM03SR0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM03SR1Bits_t BIT;
} GTM0ATOM03SR1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM03CM0Bits_t BIT;
} GTM0ATOM03CM0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM03CM1Bits_t BIT;
} GTM0ATOM03CM1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM03CN0Bits_t BIT;
} GTM0ATOM03CN0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM03STATBits_t BIT;
} GTM0ATOM03STAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM03IRQNOTIFYBits_t BIT;
} GTM0ATOM03IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM03IRQENBits_t BIT;
} GTM0ATOM03IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM03IRQFORCINTBits_t BIT;
} GTM0ATOM03IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM03IRQMODEBits_t BIT;
} GTM0ATOM03IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM04RDADDRBits_t BIT;
} GTM0ATOM04RDADDR_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM04CTRLBits_t BIT;
} GTM0ATOM04CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM04SR0Bits_t BIT;
} GTM0ATOM04SR0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM04SR1Bits_t BIT;
} GTM0ATOM04SR1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM04CM0Bits_t BIT;
} GTM0ATOM04CM0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM04CM1Bits_t BIT;
} GTM0ATOM04CM1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM04CN0Bits_t BIT;
} GTM0ATOM04CN0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM04STATBits_t BIT;
} GTM0ATOM04STAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM04IRQNOTIFYBits_t BIT;
} GTM0ATOM04IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM04IRQENBits_t BIT;
} GTM0ATOM04IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM04IRQFORCINTBits_t BIT;
} GTM0ATOM04IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM04IRQMODEBits_t BIT;
} GTM0ATOM04IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM05RDADDRBits_t BIT;
} GTM0ATOM05RDADDR_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM05CTRLBits_t BIT;
} GTM0ATOM05CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM05SR0Bits_t BIT;
} GTM0ATOM05SR0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM05SR1Bits_t BIT;
} GTM0ATOM05SR1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM05CM0Bits_t BIT;
} GTM0ATOM05CM0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM05CM1Bits_t BIT;
} GTM0ATOM05CM1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM05CN0Bits_t BIT;
} GTM0ATOM05CN0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM05STATBits_t BIT;
} GTM0ATOM05STAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM05IRQNOTIFYBits_t BIT;
} GTM0ATOM05IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM05IRQENBits_t BIT;
} GTM0ATOM05IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM05IRQFORCINTBits_t BIT;
} GTM0ATOM05IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM05IRQMODEBits_t BIT;
} GTM0ATOM05IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM06RDADDRBits_t BIT;
} GTM0ATOM06RDADDR_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM06CTRLBits_t BIT;
} GTM0ATOM06CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM06SR0Bits_t BIT;
} GTM0ATOM06SR0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM06SR1Bits_t BIT;
} GTM0ATOM06SR1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM06CM0Bits_t BIT;
} GTM0ATOM06CM0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM06CM1Bits_t BIT;
} GTM0ATOM06CM1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM06CN0Bits_t BIT;
} GTM0ATOM06CN0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM06STATBits_t BIT;
} GTM0ATOM06STAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM06IRQNOTIFYBits_t BIT;
} GTM0ATOM06IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM06IRQENBits_t BIT;
} GTM0ATOM06IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM06IRQFORCINTBits_t BIT;
} GTM0ATOM06IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM06IRQMODEBits_t BIT;
} GTM0ATOM06IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM07RDADDRBits_t BIT;
} GTM0ATOM07RDADDR_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM07CTRLBits_t BIT;
} GTM0ATOM07CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM07SR0Bits_t BIT;
} GTM0ATOM07SR0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM07SR1Bits_t BIT;
} GTM0ATOM07SR1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM07CM0Bits_t BIT;
} GTM0ATOM07CM0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM07CM1Bits_t BIT;
} GTM0ATOM07CM1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM07CN0Bits_t BIT;
} GTM0ATOM07CN0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM07STATBits_t BIT;
} GTM0ATOM07STAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM07IRQNOTIFYBits_t BIT;
} GTM0ATOM07IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM07IRQENBits_t BIT;
} GTM0ATOM07IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM07IRQFORCINTBits_t BIT;
} GTM0ATOM07IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM07IRQMODEBits_t BIT;
} GTM0ATOM07IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM10RDADDRBits_t BIT;
} GTM0ATOM10RDADDR_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM10CTRLBits_t BIT;
} GTM0ATOM10CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM10SR0Bits_t BIT;
} GTM0ATOM10SR0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM10SR1Bits_t BIT;
} GTM0ATOM10SR1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM10CM0Bits_t BIT;
} GTM0ATOM10CM0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM10CM1Bits_t BIT;
} GTM0ATOM10CM1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM10CN0Bits_t BIT;
} GTM0ATOM10CN0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM10STATBits_t BIT;
} GTM0ATOM10STAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM10IRQNOTIFYBits_t BIT;
} GTM0ATOM10IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM10IRQENBits_t BIT;
} GTM0ATOM10IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM10IRQFORCINTBits_t BIT;
} GTM0ATOM10IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM10IRQMODEBits_t BIT;
} GTM0ATOM10IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM1AGCGLBCTRLBits_t BIT;
} GTM0ATOM1AGCGLBCTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM1AGCENDISCTRLBits_t BIT;
} GTM0ATOM1AGCENDISCTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM1AGCENDISSTATBits_t BIT;
} GTM0ATOM1AGCENDISSTAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM1AGCACTTBBits_t BIT;
} GTM0ATOM1AGCACTTB_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM1AGCOUTENCTRLBits_t BIT;
} GTM0ATOM1AGCOUTENCTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM1AGCOUTENSTATBits_t BIT;
} GTM0ATOM1AGCOUTENSTAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM1AGCFUPDCTRLBits_t BIT;
} GTM0ATOM1AGCFUPDCTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM1AGCINTTRIGBits_t BIT;
} GTM0ATOM1AGCINTTRIG_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM11RDADDRBits_t BIT;
} GTM0ATOM11RDADDR_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM11CTRLBits_t BIT;
} GTM0ATOM11CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM11SR0Bits_t BIT;
} GTM0ATOM11SR0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM11SR1Bits_t BIT;
} GTM0ATOM11SR1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM11CM0Bits_t BIT;
} GTM0ATOM11CM0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM11CM1Bits_t BIT;
} GTM0ATOM11CM1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM11CN0Bits_t BIT;
} GTM0ATOM11CN0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM11STATBits_t BIT;
} GTM0ATOM11STAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM11IRQNOTIFYBits_t BIT;
} GTM0ATOM11IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM11IRQENBits_t BIT;
} GTM0ATOM11IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM11IRQFORCINTBits_t BIT;
} GTM0ATOM11IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM11IRQMODEBits_t BIT;
} GTM0ATOM11IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM12RDADDRBits_t BIT;
} GTM0ATOM12RDADDR_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM12CTRLBits_t BIT;
} GTM0ATOM12CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM12SR0Bits_t BIT;
} GTM0ATOM12SR0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM12SR1Bits_t BIT;
} GTM0ATOM12SR1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM12CM0Bits_t BIT;
} GTM0ATOM12CM0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM12CM1Bits_t BIT;
} GTM0ATOM12CM1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM12CN0Bits_t BIT;
} GTM0ATOM12CN0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM12STATBits_t BIT;
} GTM0ATOM12STAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM12IRQNOTIFYBits_t BIT;
} GTM0ATOM12IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM12IRQENBits_t BIT;
} GTM0ATOM12IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM12IRQFORCINTBits_t BIT;
} GTM0ATOM12IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM12IRQMODEBits_t BIT;
} GTM0ATOM12IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM13RDADDRBits_t BIT;
} GTM0ATOM13RDADDR_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM13CTRLBits_t BIT;
} GTM0ATOM13CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM13SR0Bits_t BIT;
} GTM0ATOM13SR0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM13SR1Bits_t BIT;
} GTM0ATOM13SR1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM13CM0Bits_t BIT;
} GTM0ATOM13CM0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM13CM1Bits_t BIT;
} GTM0ATOM13CM1_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM13CN0Bits_t BIT;
} GTM0ATOM13CN0_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM13STATBits_t BIT;
} GTM0ATOM13STAT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM13IRQNOTIFYBits_t BIT;
} GTM0ATOM13IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM13IRQENBits_t BIT;
} GTM0ATOM13IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM13IRQFORCINTBits_t BIT;
} GTM0ATOM13IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0ATOM13IRQMODEBits_t BIT;
} GTM0ATOM13IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM24CTRLBits_t BIT;
} GTM0DTM24CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM24CHCTRL1Bits_t BIT;
} GTM0DTM24CHCTRL1_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM24CHCTRL2Bits_t BIT;
} GTM0DTM24CHCTRL2_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM24CHCTRL2SRBits_t BIT;
} GTM0DTM24CHCTRL2SR_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM24PSCTRLBits_t BIT;
} GTM0DTM24PSCTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM240DTVBits_t BIT;
} GTM0DTM240DTV_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM241DTVBits_t BIT;
} GTM0DTM241DTV_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM242DTVBits_t BIT;
} GTM0DTM242DTV_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM243DTVBits_t BIT;
} GTM0DTM243DTV_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM24CHSRBits_t BIT;
} GTM0DTM24CHSR_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM26CTRLBits_t BIT;
} GTM0DTM26CTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM26CHCTRL1Bits_t BIT;
} GTM0DTM26CHCTRL1_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM26CHCTRL2Bits_t BIT;
} GTM0DTM26CHCTRL2_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM26CHCTRL2SRBits_t BIT;
} GTM0DTM26CHCTRL2SR_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM26PSCTRLBits_t BIT;
} GTM0DTM26PSCTRL_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM260DTVBits_t BIT;
} GTM0DTM260DTV_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM261DTVBits_t BIT;
} GTM0DTM261DTV_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM262DTVBits_t BIT;
} GTM0DTM262DTV_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM263DTVBits_t BIT;
} GTM0DTM263DTV_t;

typedef union
{
    uint32 UINT32;
    GTM0DTM26CHSRBits_t BIT;
} GTM0DTM26CHSR_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00R0Bits_t BIT;
} GTM0MCS00R0_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00R1Bits_t BIT;
} GTM0MCS00R1_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00R2Bits_t BIT;
} GTM0MCS00R2_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00R3Bits_t BIT;
} GTM0MCS00R3_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00R4Bits_t BIT;
} GTM0MCS00R4_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00R5Bits_t BIT;
} GTM0MCS00R5_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00R6Bits_t BIT;
} GTM0MCS00R6_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00R7Bits_t BIT;
} GTM0MCS00R7_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00CTRLBits_t BIT;
} GTM0MCS00CTRL_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS00ACBBits_t BIT;
} GTM0MCS00ACB_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS0CTRGBits_t BIT;
} GTM0MCS0CTRG_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS0STRGBits_t BIT;
} GTM0MCS0STRG_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS00MHBBits_t BIT;
} GTM0MCS00MHB_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00PCBits_t BIT;
} GTM0MCS00PC_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00IRQNOTIFYBits_t BIT;
} GTM0MCS00IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00IRQENBits_t BIT;
} GTM0MCS00IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00IRQFORCINTBits_t BIT;
} GTM0MCS00IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00IRQMODEBits_t BIT;
} GTM0MCS00IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS00EIRQENBits_t BIT;
} GTM0MCS00EIRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS0CTRLSTATBits_t BIT;
} GTM0MCS0CTRLSTAT_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS0RESETBits_t BIT;
} GTM0MCS0RESET_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS0CATBits_t BIT;
} GTM0MCS0CAT_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS0CWTBits_t BIT;
} GTM0MCS0CWT_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS0ERRBits_t BIT;
} GTM0MCS0ERR_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01R0Bits_t BIT;
} GTM0MCS01R0_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01R1Bits_t BIT;
} GTM0MCS01R1_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01R2Bits_t BIT;
} GTM0MCS01R2_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01R3Bits_t BIT;
} GTM0MCS01R3_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01R4Bits_t BIT;
} GTM0MCS01R4_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01R5Bits_t BIT;
} GTM0MCS01R5_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01R6Bits_t BIT;
} GTM0MCS01R6_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01R7Bits_t BIT;
} GTM0MCS01R7_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01CTRLBits_t BIT;
} GTM0MCS01CTRL_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS01ACBBits_t BIT;
} GTM0MCS01ACB_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS01MHBBits_t BIT;
} GTM0MCS01MHB_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01PCBits_t BIT;
} GTM0MCS01PC_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01IRQNOTIFYBits_t BIT;
} GTM0MCS01IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01IRQENBits_t BIT;
} GTM0MCS01IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01IRQFORCINTBits_t BIT;
} GTM0MCS01IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01IRQMODEBits_t BIT;
} GTM0MCS01IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS01EIRQENBits_t BIT;
} GTM0MCS01EIRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02R0Bits_t BIT;
} GTM0MCS02R0_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02R1Bits_t BIT;
} GTM0MCS02R1_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02R2Bits_t BIT;
} GTM0MCS02R2_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02R3Bits_t BIT;
} GTM0MCS02R3_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02R4Bits_t BIT;
} GTM0MCS02R4_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02R5Bits_t BIT;
} GTM0MCS02R5_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02R6Bits_t BIT;
} GTM0MCS02R6_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02R7Bits_t BIT;
} GTM0MCS02R7_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02CTRLBits_t BIT;
} GTM0MCS02CTRL_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS02ACBBits_t BIT;
} GTM0MCS02ACB_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS02MHBBits_t BIT;
} GTM0MCS02MHB_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02PCBits_t BIT;
} GTM0MCS02PC_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02IRQNOTIFYBits_t BIT;
} GTM0MCS02IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02IRQENBits_t BIT;
} GTM0MCS02IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02IRQFORCINTBits_t BIT;
} GTM0MCS02IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02IRQMODEBits_t BIT;
} GTM0MCS02IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS02EIRQENBits_t BIT;
} GTM0MCS02EIRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03R0Bits_t BIT;
} GTM0MCS03R0_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03R1Bits_t BIT;
} GTM0MCS03R1_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03R2Bits_t BIT;
} GTM0MCS03R2_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03R3Bits_t BIT;
} GTM0MCS03R3_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03R4Bits_t BIT;
} GTM0MCS03R4_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03R5Bits_t BIT;
} GTM0MCS03R5_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03R6Bits_t BIT;
} GTM0MCS03R6_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03R7Bits_t BIT;
} GTM0MCS03R7_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03CTRLBits_t BIT;
} GTM0MCS03CTRL_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS03ACBBits_t BIT;
} GTM0MCS03ACB_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS03MHBBits_t BIT;
} GTM0MCS03MHB_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03PCBits_t BIT;
} GTM0MCS03PC_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03IRQNOTIFYBits_t BIT;
} GTM0MCS03IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03IRQENBits_t BIT;
} GTM0MCS03IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03IRQFORCINTBits_t BIT;
} GTM0MCS03IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03IRQMODEBits_t BIT;
} GTM0MCS03IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS03EIRQENBits_t BIT;
} GTM0MCS03EIRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04R0Bits_t BIT;
} GTM0MCS04R0_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04R1Bits_t BIT;
} GTM0MCS04R1_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04R2Bits_t BIT;
} GTM0MCS04R2_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04R3Bits_t BIT;
} GTM0MCS04R3_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04R4Bits_t BIT;
} GTM0MCS04R4_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04R5Bits_t BIT;
} GTM0MCS04R5_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04R6Bits_t BIT;
} GTM0MCS04R6_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04R7Bits_t BIT;
} GTM0MCS04R7_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04CTRLBits_t BIT;
} GTM0MCS04CTRL_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS04ACBBits_t BIT;
} GTM0MCS04ACB_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS04MHBBits_t BIT;
} GTM0MCS04MHB_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04PCBits_t BIT;
} GTM0MCS04PC_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04IRQNOTIFYBits_t BIT;
} GTM0MCS04IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04IRQENBits_t BIT;
} GTM0MCS04IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04IRQFORCINTBits_t BIT;
} GTM0MCS04IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04IRQMODEBits_t BIT;
} GTM0MCS04IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS04EIRQENBits_t BIT;
} GTM0MCS04EIRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05R0Bits_t BIT;
} GTM0MCS05R0_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05R1Bits_t BIT;
} GTM0MCS05R1_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05R2Bits_t BIT;
} GTM0MCS05R2_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05R3Bits_t BIT;
} GTM0MCS05R3_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05R4Bits_t BIT;
} GTM0MCS05R4_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05R5Bits_t BIT;
} GTM0MCS05R5_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05R6Bits_t BIT;
} GTM0MCS05R6_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05R7Bits_t BIT;
} GTM0MCS05R7_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05CTRLBits_t BIT;
} GTM0MCS05CTRL_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS05ACBBits_t BIT;
} GTM0MCS05ACB_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS05MHBBits_t BIT;
} GTM0MCS05MHB_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05PCBits_t BIT;
} GTM0MCS05PC_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05IRQNOTIFYBits_t BIT;
} GTM0MCS05IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05IRQENBits_t BIT;
} GTM0MCS05IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05IRQFORCINTBits_t BIT;
} GTM0MCS05IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05IRQMODEBits_t BIT;
} GTM0MCS05IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS05EIRQENBits_t BIT;
} GTM0MCS05EIRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06R0Bits_t BIT;
} GTM0MCS06R0_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06R1Bits_t BIT;
} GTM0MCS06R1_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06R2Bits_t BIT;
} GTM0MCS06R2_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06R3Bits_t BIT;
} GTM0MCS06R3_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06R4Bits_t BIT;
} GTM0MCS06R4_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06R5Bits_t BIT;
} GTM0MCS06R5_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06R6Bits_t BIT;
} GTM0MCS06R6_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06R7Bits_t BIT;
} GTM0MCS06R7_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06CTRLBits_t BIT;
} GTM0MCS06CTRL_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS06ACBBits_t BIT;
} GTM0MCS06ACB_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS06MHBBits_t BIT;
} GTM0MCS06MHB_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06PCBits_t BIT;
} GTM0MCS06PC_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06IRQNOTIFYBits_t BIT;
} GTM0MCS06IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06IRQENBits_t BIT;
} GTM0MCS06IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06IRQFORCINTBits_t BIT;
} GTM0MCS06IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06IRQMODEBits_t BIT;
} GTM0MCS06IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS06EIRQENBits_t BIT;
} GTM0MCS06EIRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07R0Bits_t BIT;
} GTM0MCS07R0_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07R1Bits_t BIT;
} GTM0MCS07R1_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07R2Bits_t BIT;
} GTM0MCS07R2_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07R3Bits_t BIT;
} GTM0MCS07R3_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07R4Bits_t BIT;
} GTM0MCS07R4_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07R5Bits_t BIT;
} GTM0MCS07R5_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07R6Bits_t BIT;
} GTM0MCS07R6_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07R7Bits_t BIT;
} GTM0MCS07R7_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07CTRLBits_t BIT;
} GTM0MCS07CTRL_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS07ACBBits_t BIT;
} GTM0MCS07ACB_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS07MHBBits_t BIT;
} GTM0MCS07MHB_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07PCBits_t BIT;
} GTM0MCS07PC_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07IRQNOTIFYBits_t BIT;
} GTM0MCS07IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07IRQENBits_t BIT;
} GTM0MCS07IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07IRQFORCINTBits_t BIT;
} GTM0MCS07IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07IRQMODEBits_t BIT;
} GTM0MCS07IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS07EIRQENBits_t BIT;
} GTM0MCS07EIRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08R0Bits_t BIT;
} GTM0MCS08R0_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08R1Bits_t BIT;
} GTM0MCS08R1_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08R2Bits_t BIT;
} GTM0MCS08R2_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08R3Bits_t BIT;
} GTM0MCS08R3_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08R4Bits_t BIT;
} GTM0MCS08R4_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08R5Bits_t BIT;
} GTM0MCS08R5_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08R6Bits_t BIT;
} GTM0MCS08R6_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08R7Bits_t BIT;
} GTM0MCS08R7_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08CTRLBits_t BIT;
} GTM0MCS08CTRL_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS08ACBBits_t BIT;
} GTM0MCS08ACB_t;

typedef union
{
    uint32 UINT32;
    const GTM0MCS08MHBBits_t BIT;
} GTM0MCS08MHB_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08PCBits_t BIT;
} GTM0MCS08PC_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08IRQNOTIFYBits_t BIT;
} GTM0MCS08IRQNOTIFY_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08IRQENBits_t BIT;
} GTM0MCS08IRQEN_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08IRQFORCINTBits_t BIT;
} GTM0MCS08IRQFORCINT_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08IRQMODEBits_t BIT;
} GTM0MCS08IRQMODE_t;

typedef union
{
    uint32 UINT32;
    GTM0MCS08EIRQENBits_t BIT;
} GTM0MCS08EIRQEN_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(GTM0GTMREV_BASE, 0xFFE00000, __READ, GTM0GTMREV_t);
__IOREG(GTM0GTMRST_BASE, 0xFFE00004, __READ_WRITE, GTM0GTMRST_t);
__IOREG(GTM0GTMCTRL_BASE, 0xFFE00008, __READ_WRITE, GTM0GTMCTRL_t);
__IOREG(GTM0GTMAEIADDRXPT_BASE, 0xFFE0000C, __READ, GTM0GTMAEIADDRXPT_t);
__IOREG(GTM0GTMIRQNOTIFY_BASE, 0xFFE00010, __READ_WRITE, GTM0GTMIRQNOTIFY_t);
__IOREG(GTM0GTMIRQEN_BASE, 0xFFE00014, __READ_WRITE, GTM0GTMIRQEN_t);
__IOREG(GTM0GTMIRQFORCINT_BASE, 0xFFE00018, __READ_WRITE, GTM0GTMIRQFORCINT_t);
__IOREG(GTM0GTMIRQMODE_BASE, 0xFFE0001C, __READ_WRITE, GTM0GTMIRQMODE_t);
__IOREG(GTM0GTMEIRQEN_BASE, 0xFFE00020, __READ_WRITE, GTM0GTMEIRQEN_t);
__IOREG(GTM0GTMHWCONF_BASE, 0xFFE00024, __READ, GTM0GTMHWCONF_t);
__IOREG(GTM0GTMBRIDGEMODE_BASE, 0xFFE00030, __READ_WRITE, GTM0GTMBRIDGEMODE_t);
__IOREG(GTM0GTMBRIDGEPTR1_BASE, 0xFFE00034, __READ, GTM0GTMBRIDGEPTR1_t);
__IOREG(GTM0GTMBRIDGEPTR2_BASE, 0xFFE00038, __READ, GTM0GTMBRIDGEPTR2_t);
__IOREG(GTM0GTMTIM0AUXINSRC_BASE, 0xFFE00040, __READ_WRITE, GTM0GTMTIM0AUXINSRC_t);
__IOREG(GTM0GTMTIM1AUXINSRC_BASE, 0xFFE00044, __READ_WRITE, GTM0GTMTIM1AUXINSRC_t);
__IOREG(GTM0GTMEXTCAPEN0_BASE, 0xFFE0005C, __READ_WRITE, GTM0GTMEXTCAPEN0_t);
__IOREG(GTM0GTMATOM0OUT_BASE, 0xFFE00098, __READ, GTM0GTMATOM0OUT_t);
__IOREG(GTM0TBUCHEN_BASE, 0xFFE00100, __READ_WRITE, GTM0TBUCHEN_t);
__IOREG(GTM0TBU0CTRL_BASE, 0xFFE00104, __READ_WRITE, GTM0TBU0CTRL_t);
__IOREG(GTM0TBU0BASE_BASE, 0xFFE00108, __READ_WRITE, GTM0TBU0BASE_t);
__IOREG(GTM0TBU1CTRL_BASE, 0xFFE0010C, __READ_WRITE, GTM0TBU1CTRL_t);
__IOREG(GTM0TBU1BASE_BASE, 0xFFE00110, __READ_WRITE, GTM0TBU1BASE_t);
__IOREG(GTM0MONSTATUS_BASE, 0xFFE00180, __READ_WRITE, GTM0MONSTATUS_t);
__IOREG(GTM0MONACTIVITY0_BASE, 0xFFE00184, __READ_WRITE, GTM0MONACTIVITY0_t);
__IOREG(GTM0MONACTIVITYMCS0_BASE, 0xFFE0018C, __READ_WRITE, GTM0MONACTIVITYMCS0_t);
__IOREG(GTM0CMPEN_BASE, 0xFFE00200, __READ_WRITE, GTM0CMPEN_t);
__IOREG(GTM0CMPIRQNOTIFY_BASE, 0xFFE00204, __READ_WRITE, GTM0CMPIRQNOTIFY_t);
__IOREG(GTM0CMPIRQEN_BASE, 0xFFE00208, __READ_WRITE, GTM0CMPIRQEN_t);
__IOREG(GTM0CMPIRQFORCINT_BASE, 0xFFE0020C, __READ_WRITE, GTM0CMPIRQFORCINT_t);
__IOREG(GTM0CMPIRQMODE_BASE, 0xFFE00210, __READ_WRITE, GTM0CMPIRQMODE_t);
__IOREG(GTM0CMPEIRQEN_BASE, 0xFFE00214, __READ_WRITE, GTM0CMPEIRQEN_t);
__IOREG(GTM0ARUACCESS_BASE, 0xFFE00280, __READ_WRITE, GTM0ARUACCESS_t);
__IOREG(GTM0ARUDATAH_BASE, 0xFFE00284, __READ_WRITE, GTM0ARUDATAH_t);
__IOREG(GTM0ARUDATAL_BASE, 0xFFE00288, __READ_WRITE, GTM0ARUDATAL_t);
__IOREG(GTM0ARUDBGACCESS0_BASE, 0xFFE0028C, __READ_WRITE, GTM0ARUDBGACCESS0_t);
__IOREG(GTM0ARUDBGDATA0H_BASE, 0xFFE00290, __READ, GTM0ARUDBGDATA0H_t);
__IOREG(GTM0ARUDBGDATA0L_BASE, 0xFFE00294, __READ, GTM0ARUDBGDATA0L_t);
__IOREG(GTM0ARUDBGACCESS1_BASE, 0xFFE00298, __READ_WRITE, GTM0ARUDBGACCESS1_t);
__IOREG(GTM0ARUDBGDATA1H_BASE, 0xFFE0029C, __READ, GTM0ARUDBGDATA1H_t);
__IOREG(GTM0ARUDBGDATA1L_BASE, 0xFFE002A0, __READ, GTM0ARUDBGDATA1L_t);
__IOREG(GTM0ARUIRQNOTIFY_BASE, 0xFFE002A4, __READ_WRITE, GTM0ARUIRQNOTIFY_t);
__IOREG(GTM0ARUIRQEN_BASE, 0xFFE002A8, __READ_WRITE, GTM0ARUIRQEN_t);
__IOREG(GTM0ARUIRQFORCINT_BASE, 0xFFE002AC, __READ_WRITE, GTM0ARUIRQFORCINT_t);
__IOREG(GTM0ARUIRQMODE_BASE, 0xFFE002B0, __READ_WRITE, GTM0ARUIRQMODE_t);
__IOREG(GTM0ARUCADDREND_BASE, 0xFFE002B4, __READ_WRITE, GTM0ARUCADDREND_t);
__IOREG(GTM0CMUCLKEN_BASE, 0xFFE00300, __READ_WRITE, GTM0CMUCLKEN_t);
__IOREG(GTM0CMUGCLKNUM_BASE, 0xFFE00304, __READ_WRITE, GTM0CMUGCLKNUM_t);
__IOREG(GTM0CMUGCLKDEN_BASE, 0xFFE00308, __READ_WRITE, GTM0CMUGCLKDEN_t);
__IOREG(GTM0CMUCLK0CTRL_BASE, 0xFFE0030C, __READ_WRITE, GTM0CMUCLK0CTRL_t);
__IOREG(GTM0CMUCLK1CTRL_BASE, 0xFFE00310, __READ_WRITE, GTM0CMUCLK1CTRL_t);
__IOREG(GTM0CMUCLK2CTRL_BASE, 0xFFE00314, __READ_WRITE, GTM0CMUCLK2CTRL_t);
__IOREG(GTM0CMUCLK3CTRL_BASE, 0xFFE00318, __READ_WRITE, GTM0CMUCLK3CTRL_t);
__IOREG(GTM0CMUCLK4CTRL_BASE, 0xFFE0031C, __READ_WRITE, GTM0CMUCLK4CTRL_t);
__IOREG(GTM0CMUCLK5CTRL_BASE, 0xFFE00320, __READ_WRITE, GTM0CMUCLK5CTRL_t);
__IOREG(GTM0CMUCLK6CTRL_BASE, 0xFFE00324, __READ_WRITE, GTM0CMUCLK6CTRL_t);
__IOREG(GTM0CMUCLK7CTRL_BASE, 0xFFE00328, __READ_WRITE, GTM0CMUCLK7CTRL_t);
__IOREG(GTM0CMUGLBCTRL_BASE, 0xFFE00348, __READ_WRITE, GTM0CMUGLBCTRL_t);
__IOREG(GTM0ICMIRQG0_BASE, 0xFFE00600, __READ, GTM0ICMIRQG0_t);
__IOREG(GTM0ICMIRQG2_BASE, 0xFFE00608, __READ, GTM0ICMIRQG2_t);
__IOREG(GTM0ICMIRQG4_BASE, 0xFFE00610, __READ, GTM0ICMIRQG4_t);
__IOREG(GTM0ICMIRQG9_BASE, 0xFFE00624, __READ, GTM0ICMIRQG9_t);
__IOREG(GTM0ICMIRQGMEI_BASE, 0xFFE00630, __READ, GTM0ICMIRQGMEI_t);
__IOREG(GTM0ICMIRQGCEI1_BASE, 0xFFE00638, __READ, GTM0ICMIRQGCEI1_t);
__IOREG(GTM0ICMIRQGCEI3_BASE, 0xFFE00640, __READ, GTM0ICMIRQGCEI3_t);
__IOREG(GTM0ICMIRQGMCS0CI_BASE, 0xFFE00648, __READ, GTM0ICMIRQGMCS0CI_t);
__IOREG(GTM0ICMIRQGMCS0CEI_BASE, 0xFFE00664, __READ, GTM0ICMIRQGMCS0CEI_t);
__IOREG(GTM0TIM00GPR0_BASE, 0xFFE01000, __READ, GTM0TIM00GPR0_t);
__IOREG(GTM0TIM00GPR1_BASE, 0xFFE01004, __READ_WRITE, GTM0TIM00GPR1_t);
__IOREG(GTM0TIM00CNT_BASE, 0xFFE01008, __READ, GTM0TIM00CNT_t);
__IOREG(GTM0TIM00ECNT_BASE, 0xFFE0100C, __READ, GTM0TIM00ECNT_t);
__IOREG(GTM0TIM00CNTS_BASE, 0xFFE01010, __READ_WRITE, GTM0TIM00CNTS_t);
__IOREG(GTM0TIM00TDUC_BASE, 0xFFE01014, __READ, GTM0TIM00TDUC_t);
__IOREG(GTM0TIM00TDUV_BASE, 0xFFE01018, __READ_WRITE, GTM0TIM00TDUV_t);
__IOREG(GTM0TIM00FLTRE_BASE, 0xFFE0101C, __READ_WRITE, GTM0TIM00FLTRE_t);
__IOREG(GTM0TIM00FLTFE_BASE, 0xFFE01020, __READ_WRITE, GTM0TIM00FLTFE_t);
__IOREG(GTM0TIM00CTRL_BASE, 0xFFE01024, __READ_WRITE, GTM0TIM00CTRL_t);
__IOREG(GTM0TIM00ECTRL_BASE, 0xFFE01028, __READ_WRITE, GTM0TIM00ECTRL_t);
__IOREG(GTM0TIM00IRQNOTIFY_BASE, 0xFFE0102C, __READ_WRITE, GTM0TIM00IRQNOTIFY_t);
__IOREG(GTM0TIM00IRQEN_BASE, 0xFFE01030, __READ_WRITE, GTM0TIM00IRQEN_t);
__IOREG(GTM0TIM00IRQFORCINT_BASE, 0xFFE01034, __READ_WRITE, GTM0TIM00IRQFORCINT_t);
__IOREG(GTM0TIM00IRQMODE_BASE, 0xFFE01038, __READ_WRITE, GTM0TIM00IRQMODE_t);
__IOREG(GTM0TIM00EIRQEN_BASE, 0xFFE0103C, __READ_WRITE, GTM0TIM00EIRQEN_t);
__IOREG(GTM0TIM0INPVAL_BASE, 0xFFE01074, __READ, GTM0TIM0INPVAL_t);
__IOREG(GTM0TIM0INSRC_BASE, 0xFFE01078, __READ_WRITE, GTM0TIM0INSRC_t);
__IOREG(GTM0TIM0RST_BASE, 0xFFE0107C, __READ_WRITE, GTM0TIM0RST_t);
__IOREG(GTM0TIM01GPR0_BASE, 0xFFE01080, __READ, GTM0TIM01GPR0_t);
__IOREG(GTM0TIM01GPR1_BASE, 0xFFE01084, __READ_WRITE, GTM0TIM01GPR1_t);
__IOREG(GTM0TIM01CNT_BASE, 0xFFE01088, __READ, GTM0TIM01CNT_t);
__IOREG(GTM0TIM01ECNT_BASE, 0xFFE0108C, __READ, GTM0TIM01ECNT_t);
__IOREG(GTM0TIM01CNTS_BASE, 0xFFE01090, __READ_WRITE, GTM0TIM01CNTS_t);
__IOREG(GTM0TIM01TDUC_BASE, 0xFFE01094, __READ, GTM0TIM01TDUC_t);
__IOREG(GTM0TIM01TDUV_BASE, 0xFFE01098, __READ_WRITE, GTM0TIM01TDUV_t);
__IOREG(GTM0TIM01FLTRE_BASE, 0xFFE0109C, __READ_WRITE, GTM0TIM01FLTRE_t);
__IOREG(GTM0TIM01FLTFE_BASE, 0xFFE010A0, __READ_WRITE, GTM0TIM01FLTFE_t);
__IOREG(GTM0TIM01CTRL_BASE, 0xFFE010A4, __READ_WRITE, GTM0TIM01CTRL_t);
__IOREG(GTM0TIM01ECTRL_BASE, 0xFFE010A8, __READ_WRITE, GTM0TIM01ECTRL_t);
__IOREG(GTM0TIM01IRQNOTIFY_BASE, 0xFFE010AC, __READ_WRITE, GTM0TIM01IRQNOTIFY_t);
__IOREG(GTM0TIM01IRQEN_BASE, 0xFFE010B0, __READ_WRITE, GTM0TIM01IRQEN_t);
__IOREG(GTM0TIM01IRQFORCINT_BASE, 0xFFE010B4, __READ_WRITE, GTM0TIM01IRQFORCINT_t);
__IOREG(GTM0TIM01IRQMODE_BASE, 0xFFE010B8, __READ_WRITE, GTM0TIM01IRQMODE_t);
__IOREG(GTM0TIM01EIRQEN_BASE, 0xFFE010BC, __READ_WRITE, GTM0TIM01EIRQEN_t);
__IOREG(GTM0TIM02GPR0_BASE, 0xFFE01100, __READ, GTM0TIM02GPR0_t);
__IOREG(GTM0TIM02GPR1_BASE, 0xFFE01104, __READ_WRITE, GTM0TIM02GPR1_t);
__IOREG(GTM0TIM02CNT_BASE, 0xFFE01108, __READ, GTM0TIM02CNT_t);
__IOREG(GTM0TIM02ECNT_BASE, 0xFFE0110C, __READ, GTM0TIM02ECNT_t);
__IOREG(GTM0TIM02CNTS_BASE, 0xFFE01110, __READ_WRITE, GTM0TIM02CNTS_t);
__IOREG(GTM0TIM02TDUC_BASE, 0xFFE01114, __READ, GTM0TIM02TDUC_t);
__IOREG(GTM0TIM02TDUV_BASE, 0xFFE01118, __READ_WRITE, GTM0TIM02TDUV_t);
__IOREG(GTM0TIM02FLTRE_BASE, 0xFFE0111C, __READ_WRITE, GTM0TIM02FLTRE_t);
__IOREG(GTM0TIM02FLTFE_BASE, 0xFFE01120, __READ_WRITE, GTM0TIM02FLTFE_t);
__IOREG(GTM0TIM02CTRL_BASE, 0xFFE01124, __READ_WRITE, GTM0TIM02CTRL_t);
__IOREG(GTM0TIM02ECTRL_BASE, 0xFFE01128, __READ_WRITE, GTM0TIM02ECTRL_t);
__IOREG(GTM0TIM02IRQNOTIFY_BASE, 0xFFE0112C, __READ_WRITE, GTM0TIM02IRQNOTIFY_t);
__IOREG(GTM0TIM02IRQEN_BASE, 0xFFE01130, __READ_WRITE, GTM0TIM02IRQEN_t);
__IOREG(GTM0TIM02IRQFORCINT_BASE, 0xFFE01134, __READ_WRITE, GTM0TIM02IRQFORCINT_t);
__IOREG(GTM0TIM02IRQMODE_BASE, 0xFFE01138, __READ_WRITE, GTM0TIM02IRQMODE_t);
__IOREG(GTM0TIM02EIRQEN_BASE, 0xFFE0113C, __READ_WRITE, GTM0TIM02EIRQEN_t);
__IOREG(GTM0TIM03GPR0_BASE, 0xFFE01180, __READ, GTM0TIM03GPR0_t);
__IOREG(GTM0TIM03GPR1_BASE, 0xFFE01184, __READ_WRITE, GTM0TIM03GPR1_t);
__IOREG(GTM0TIM03CNT_BASE, 0xFFE01188, __READ, GTM0TIM03CNT_t);
__IOREG(GTM0TIM03ECNT_BASE, 0xFFE0118C, __READ, GTM0TIM03ECNT_t);
__IOREG(GTM0TIM03CNTS_BASE, 0xFFE01190, __READ_WRITE, GTM0TIM03CNTS_t);
__IOREG(GTM0TIM03TDUC_BASE, 0xFFE01194, __READ, GTM0TIM03TDUC_t);
__IOREG(GTM0TIM03TDUV_BASE, 0xFFE01198, __READ_WRITE, GTM0TIM03TDUV_t);
__IOREG(GTM0TIM03FLTRE_BASE, 0xFFE0119C, __READ_WRITE, GTM0TIM03FLTRE_t);
__IOREG(GTM0TIM03FLTFE_BASE, 0xFFE011A0, __READ_WRITE, GTM0TIM03FLTFE_t);
__IOREG(GTM0TIM03CTRL_BASE, 0xFFE011A4, __READ_WRITE, GTM0TIM03CTRL_t);
__IOREG(GTM0TIM03ECTRL_BASE, 0xFFE011A8, __READ_WRITE, GTM0TIM03ECTRL_t);
__IOREG(GTM0TIM03IRQNOTIFY_BASE, 0xFFE011AC, __READ_WRITE, GTM0TIM03IRQNOTIFY_t);
__IOREG(GTM0TIM03IRQEN_BASE, 0xFFE011B0, __READ_WRITE, GTM0TIM03IRQEN_t);
__IOREG(GTM0TIM03IRQFORCINT_BASE, 0xFFE011B4, __READ_WRITE, GTM0TIM03IRQFORCINT_t);
__IOREG(GTM0TIM03IRQMODE_BASE, 0xFFE011B8, __READ_WRITE, GTM0TIM03IRQMODE_t);
__IOREG(GTM0TIM03EIRQEN_BASE, 0xFFE011BC, __READ_WRITE, GTM0TIM03EIRQEN_t);
__IOREG(GTM0TIM04GPR0_BASE, 0xFFE01200, __READ, GTM0TIM04GPR0_t);
__IOREG(GTM0TIM04GPR1_BASE, 0xFFE01204, __READ_WRITE, GTM0TIM04GPR1_t);
__IOREG(GTM0TIM04CNT_BASE, 0xFFE01208, __READ, GTM0TIM04CNT_t);
__IOREG(GTM0TIM04ECNT_BASE, 0xFFE0120C, __READ, GTM0TIM04ECNT_t);
__IOREG(GTM0TIM04CNTS_BASE, 0xFFE01210, __READ_WRITE, GTM0TIM04CNTS_t);
__IOREG(GTM0TIM04TDUC_BASE, 0xFFE01214, __READ, GTM0TIM04TDUC_t);
__IOREG(GTM0TIM04TDUV_BASE, 0xFFE01218, __READ_WRITE, GTM0TIM04TDUV_t);
__IOREG(GTM0TIM04FLTRE_BASE, 0xFFE0121C, __READ_WRITE, GTM0TIM04FLTRE_t);
__IOREG(GTM0TIM04FLTFE_BASE, 0xFFE01220, __READ_WRITE, GTM0TIM04FLTFE_t);
__IOREG(GTM0TIM04CTRL_BASE, 0xFFE01224, __READ_WRITE, GTM0TIM04CTRL_t);
__IOREG(GTM0TIM04ECTRL_BASE, 0xFFE01228, __READ_WRITE, GTM0TIM04ECTRL_t);
__IOREG(GTM0TIM04IRQNOTIFY_BASE, 0xFFE0122C, __READ_WRITE, GTM0TIM04IRQNOTIFY_t);
__IOREG(GTM0TIM04IRQEN_BASE, 0xFFE01230, __READ_WRITE, GTM0TIM04IRQEN_t);
__IOREG(GTM0TIM04IRQFORCINT_BASE, 0xFFE01234, __READ_WRITE, GTM0TIM04IRQFORCINT_t);
__IOREG(GTM0TIM04IRQMODE_BASE, 0xFFE01238, __READ_WRITE, GTM0TIM04IRQMODE_t);
__IOREG(GTM0TIM04EIRQEN_BASE, 0xFFE0123C, __READ_WRITE, GTM0TIM04EIRQEN_t);
__IOREG(GTM0TIM05GPR0_BASE, 0xFFE01280, __READ, GTM0TIM05GPR0_t);
__IOREG(GTM0TIM05GPR1_BASE, 0xFFE01284, __READ_WRITE, GTM0TIM05GPR1_t);
__IOREG(GTM0TIM05CNT_BASE, 0xFFE01288, __READ, GTM0TIM05CNT_t);
__IOREG(GTM0TIM05ECNT_BASE, 0xFFE0128C, __READ, GTM0TIM05ECNT_t);
__IOREG(GTM0TIM05CNTS_BASE, 0xFFE01290, __READ_WRITE, GTM0TIM05CNTS_t);
__IOREG(GTM0TIM05TDUC_BASE, 0xFFE01294, __READ, GTM0TIM05TDUC_t);
__IOREG(GTM0TIM05TDUV_BASE, 0xFFE01298, __READ_WRITE, GTM0TIM05TDUV_t);
__IOREG(GTM0TIM05FLTRE_BASE, 0xFFE0129C, __READ_WRITE, GTM0TIM05FLTRE_t);
__IOREG(GTM0TIM05FLTFE_BASE, 0xFFE012A0, __READ_WRITE, GTM0TIM05FLTFE_t);
__IOREG(GTM0TIM05CTRL_BASE, 0xFFE012A4, __READ_WRITE, GTM0TIM05CTRL_t);
__IOREG(GTM0TIM05ECTRL_BASE, 0xFFE012A8, __READ_WRITE, GTM0TIM05ECTRL_t);
__IOREG(GTM0TIM05IRQNOTIFY_BASE, 0xFFE012AC, __READ_WRITE, GTM0TIM05IRQNOTIFY_t);
__IOREG(GTM0TIM05IRQEN_BASE, 0xFFE012B0, __READ_WRITE, GTM0TIM05IRQEN_t);
__IOREG(GTM0TIM05IRQFORCINT_BASE, 0xFFE012B4, __READ_WRITE, GTM0TIM05IRQFORCINT_t);
__IOREG(GTM0TIM05IRQMODE_BASE, 0xFFE012B8, __READ_WRITE, GTM0TIM05IRQMODE_t);
__IOREG(GTM0TIM05EIRQEN_BASE, 0xFFE012BC, __READ_WRITE, GTM0TIM05EIRQEN_t);
__IOREG(GTM0TIM06GPR0_BASE, 0xFFE01300, __READ, GTM0TIM06GPR0_t);
__IOREG(GTM0TIM06GPR1_BASE, 0xFFE01304, __READ_WRITE, GTM0TIM06GPR1_t);
__IOREG(GTM0TIM06CNT_BASE, 0xFFE01308, __READ, GTM0TIM06CNT_t);
__IOREG(GTM0TIM06ECNT_BASE, 0xFFE0130C, __READ, GTM0TIM06ECNT_t);
__IOREG(GTM0TIM06CNTS_BASE, 0xFFE01310, __READ_WRITE, GTM0TIM06CNTS_t);
__IOREG(GTM0TIM06TDUC_BASE, 0xFFE01314, __READ, GTM0TIM06TDUC_t);
__IOREG(GTM0TIM06TDUV_BASE, 0xFFE01318, __READ_WRITE, GTM0TIM06TDUV_t);
__IOREG(GTM0TIM06FLTRE_BASE, 0xFFE0131C, __READ_WRITE, GTM0TIM06FLTRE_t);
__IOREG(GTM0TIM06FLTFE_BASE, 0xFFE01320, __READ_WRITE, GTM0TIM06FLTFE_t);
__IOREG(GTM0TIM06CTRL_BASE, 0xFFE01324, __READ_WRITE, GTM0TIM06CTRL_t);
__IOREG(GTM0TIM06ECTRL_BASE, 0xFFE01328, __READ_WRITE, GTM0TIM06ECTRL_t);
__IOREG(GTM0TIM06IRQNOTIFY_BASE, 0xFFE0132C, __READ_WRITE, GTM0TIM06IRQNOTIFY_t);
__IOREG(GTM0TIM06IRQEN_BASE, 0xFFE01330, __READ_WRITE, GTM0TIM06IRQEN_t);
__IOREG(GTM0TIM06IRQFORCINT_BASE, 0xFFE01334, __READ_WRITE, GTM0TIM06IRQFORCINT_t);
__IOREG(GTM0TIM06IRQMODE_BASE, 0xFFE01338, __READ_WRITE, GTM0TIM06IRQMODE_t);
__IOREG(GTM0TIM06EIRQEN_BASE, 0xFFE0133C, __READ_WRITE, GTM0TIM06EIRQEN_t);
__IOREG(GTM0TIM07GPR0_BASE, 0xFFE01380, __READ, GTM0TIM07GPR0_t);
__IOREG(GTM0TIM07GPR1_BASE, 0xFFE01384, __READ_WRITE, GTM0TIM07GPR1_t);
__IOREG(GTM0TIM07CNT_BASE, 0xFFE01388, __READ, GTM0TIM07CNT_t);
__IOREG(GTM0TIM07ECNT_BASE, 0xFFE0138C, __READ, GTM0TIM07ECNT_t);
__IOREG(GTM0TIM07CNTS_BASE, 0xFFE01390, __READ_WRITE, GTM0TIM07CNTS_t);
__IOREG(GTM0TIM07TDUC_BASE, 0xFFE01394, __READ, GTM0TIM07TDUC_t);
__IOREG(GTM0TIM07TDUV_BASE, 0xFFE01398, __READ_WRITE, GTM0TIM07TDUV_t);
__IOREG(GTM0TIM07FLTRE_BASE, 0xFFE0139C, __READ_WRITE, GTM0TIM07FLTRE_t);
__IOREG(GTM0TIM07FLTFE_BASE, 0xFFE013A0, __READ_WRITE, GTM0TIM07FLTFE_t);
__IOREG(GTM0TIM07CTRL_BASE, 0xFFE013A4, __READ_WRITE, GTM0TIM07CTRL_t);
__IOREG(GTM0TIM07ECTRL_BASE, 0xFFE013A8, __READ_WRITE, GTM0TIM07ECTRL_t);
__IOREG(GTM0TIM07IRQNOTIFY_BASE, 0xFFE013AC, __READ_WRITE, GTM0TIM07IRQNOTIFY_t);
__IOREG(GTM0TIM07IRQEN_BASE, 0xFFE013B0, __READ_WRITE, GTM0TIM07IRQEN_t);
__IOREG(GTM0TIM07IRQFORCINT_BASE, 0xFFE013B4, __READ_WRITE, GTM0TIM07IRQFORCINT_t);
__IOREG(GTM0TIM07IRQMODE_BASE, 0xFFE013B8, __READ_WRITE, GTM0TIM07IRQMODE_t);
__IOREG(GTM0TIM07EIRQEN_BASE, 0xFFE013BC, __READ_WRITE, GTM0TIM07EIRQEN_t);
__IOREG(GTM0TIM10GPR0_BASE, 0xFFE01800, __READ, GTM0TIM10GPR0_t);
__IOREG(GTM0TIM10GPR1_BASE, 0xFFE01804, __READ_WRITE, GTM0TIM10GPR1_t);
__IOREG(GTM0TIM10CNT_BASE, 0xFFE01808, __READ, GTM0TIM10CNT_t);
__IOREG(GTM0TIM10ECNT_BASE, 0xFFE0180C, __READ, GTM0TIM10ECNT_t);
__IOREG(GTM0TIM10CNTS_BASE, 0xFFE01810, __READ_WRITE, GTM0TIM10CNTS_t);
__IOREG(GTM0TIM10TDUC_BASE, 0xFFE01814, __READ, GTM0TIM10TDUC_t);
__IOREG(GTM0TIM10TDUV_BASE, 0xFFE01818, __READ_WRITE, GTM0TIM10TDUV_t);
__IOREG(GTM0TIM10FLTRE_BASE, 0xFFE0181C, __READ_WRITE, GTM0TIM10FLTRE_t);
__IOREG(GTM0TIM10FLTFE_BASE, 0xFFE01820, __READ_WRITE, GTM0TIM10FLTFE_t);
__IOREG(GTM0TIM10CTRL_BASE, 0xFFE01824, __READ_WRITE, GTM0TIM10CTRL_t);
__IOREG(GTM0TIM10ECTRL_BASE, 0xFFE01828, __READ_WRITE, GTM0TIM10ECTRL_t);
__IOREG(GTM0TIM10IRQNOTIFY_BASE, 0xFFE0182C, __READ_WRITE, GTM0TIM10IRQNOTIFY_t);
__IOREG(GTM0TIM10IRQEN_BASE, 0xFFE01830, __READ_WRITE, GTM0TIM10IRQEN_t);
__IOREG(GTM0TIM10IRQFORCINT_BASE, 0xFFE01834, __READ_WRITE, GTM0TIM10IRQFORCINT_t);
__IOREG(GTM0TIM10IRQMODE_BASE, 0xFFE01838, __READ_WRITE, GTM0TIM10IRQMODE_t);
__IOREG(GTM0TIM10EIRQEN_BASE, 0xFFE0183C, __READ_WRITE, GTM0TIM10EIRQEN_t);
__IOREG(GTM0TIM1INPVAL_BASE, 0xFFE01874, __READ, GTM0TIM1INPVAL_t);
__IOREG(GTM0TIM1INSRC_BASE, 0xFFE01878, __READ_WRITE, GTM0TIM1INSRC_t);
__IOREG(GTM0TIM1RST_BASE, 0xFFE0187C, __READ_WRITE, GTM0TIM1RST_t);
__IOREG(GTM0TIM11GPR0_BASE, 0xFFE01880, __READ, GTM0TIM11GPR0_t);
__IOREG(GTM0TIM11GPR1_BASE, 0xFFE01884, __READ_WRITE, GTM0TIM11GPR1_t);
__IOREG(GTM0TIM11CNT_BASE, 0xFFE01888, __READ, GTM0TIM11CNT_t);
__IOREG(GTM0TIM11ECNT_BASE, 0xFFE0188C, __READ, GTM0TIM11ECNT_t);
__IOREG(GTM0TIM11CNTS_BASE, 0xFFE01890, __READ_WRITE, GTM0TIM11CNTS_t);
__IOREG(GTM0TIM11TDUC_BASE, 0xFFE01894, __READ, GTM0TIM11TDUC_t);
__IOREG(GTM0TIM11TDUV_BASE, 0xFFE01898, __READ_WRITE, GTM0TIM11TDUV_t);
__IOREG(GTM0TIM11FLTRE_BASE, 0xFFE0189C, __READ_WRITE, GTM0TIM11FLTRE_t);
__IOREG(GTM0TIM11FLTFE_BASE, 0xFFE018A0, __READ_WRITE, GTM0TIM11FLTFE_t);
__IOREG(GTM0TIM11CTRL_BASE, 0xFFE018A4, __READ_WRITE, GTM0TIM11CTRL_t);
__IOREG(GTM0TIM11ECTRL_BASE, 0xFFE018A8, __READ_WRITE, GTM0TIM11ECTRL_t);
__IOREG(GTM0TIM11IRQNOTIFY_BASE, 0xFFE018AC, __READ_WRITE, GTM0TIM11IRQNOTIFY_t);
__IOREG(GTM0TIM11IRQEN_BASE, 0xFFE018B0, __READ_WRITE, GTM0TIM11IRQEN_t);
__IOREG(GTM0TIM11IRQFORCINT_BASE, 0xFFE018B4, __READ_WRITE, GTM0TIM11IRQFORCINT_t);
__IOREG(GTM0TIM11IRQMODE_BASE, 0xFFE018B8, __READ_WRITE, GTM0TIM11IRQMODE_t);
__IOREG(GTM0TIM11EIRQEN_BASE, 0xFFE018BC, __READ_WRITE, GTM0TIM11EIRQEN_t);
__IOREG(GTM0TIM12GPR0_BASE, 0xFFE01900, __READ, GTM0TIM12GPR0_t);
__IOREG(GTM0TIM12GPR1_BASE, 0xFFE01904, __READ_WRITE, GTM0TIM12GPR1_t);
__IOREG(GTM0TIM12CNT_BASE, 0xFFE01908, __READ, GTM0TIM12CNT_t);
__IOREG(GTM0TIM12ECNT_BASE, 0xFFE0190C, __READ, GTM0TIM12ECNT_t);
__IOREG(GTM0TIM12CNTS_BASE, 0xFFE01910, __READ_WRITE, GTM0TIM12CNTS_t);
__IOREG(GTM0TIM12TDUC_BASE, 0xFFE01914, __READ, GTM0TIM12TDUC_t);
__IOREG(GTM0TIM12TDUV_BASE, 0xFFE01918, __READ_WRITE, GTM0TIM12TDUV_t);
__IOREG(GTM0TIM12FLTRE_BASE, 0xFFE0191C, __READ_WRITE, GTM0TIM12FLTRE_t);
__IOREG(GTM0TIM12FLTFE_BASE, 0xFFE01920, __READ_WRITE, GTM0TIM12FLTFE_t);
__IOREG(GTM0TIM12CTRL_BASE, 0xFFE01924, __READ_WRITE, GTM0TIM12CTRL_t);
__IOREG(GTM0TIM12ECTRL_BASE, 0xFFE01928, __READ_WRITE, GTM0TIM12ECTRL_t);
__IOREG(GTM0TIM12IRQNOTIFY_BASE, 0xFFE0192C, __READ_WRITE, GTM0TIM12IRQNOTIFY_t);
__IOREG(GTM0TIM12IRQEN_BASE, 0xFFE01930, __READ_WRITE, GTM0TIM12IRQEN_t);
__IOREG(GTM0TIM12IRQFORCINT_BASE, 0xFFE01934, __READ_WRITE, GTM0TIM12IRQFORCINT_t);
__IOREG(GTM0TIM12IRQMODE_BASE, 0xFFE01938, __READ_WRITE, GTM0TIM12IRQMODE_t);
__IOREG(GTM0TIM12EIRQEN_BASE, 0xFFE0193C, __READ_WRITE, GTM0TIM12EIRQEN_t);
__IOREG(GTM0TIM13GPR0_BASE, 0xFFE01980, __READ, GTM0TIM13GPR0_t);
__IOREG(GTM0TIM13GPR1_BASE, 0xFFE01984, __READ_WRITE, GTM0TIM13GPR1_t);
__IOREG(GTM0TIM13CNT_BASE, 0xFFE01988, __READ, GTM0TIM13CNT_t);
__IOREG(GTM0TIM13ECNT_BASE, 0xFFE0198C, __READ, GTM0TIM13ECNT_t);
__IOREG(GTM0TIM13CNTS_BASE, 0xFFE01990, __READ_WRITE, GTM0TIM13CNTS_t);
__IOREG(GTM0TIM13TDUC_BASE, 0xFFE01994, __READ, GTM0TIM13TDUC_t);
__IOREG(GTM0TIM13TDUV_BASE, 0xFFE01998, __READ_WRITE, GTM0TIM13TDUV_t);
__IOREG(GTM0TIM13FLTRE_BASE, 0xFFE0199C, __READ_WRITE, GTM0TIM13FLTRE_t);
__IOREG(GTM0TIM13FLTFE_BASE, 0xFFE019A0, __READ_WRITE, GTM0TIM13FLTFE_t);
__IOREG(GTM0TIM13CTRL_BASE, 0xFFE019A4, __READ_WRITE, GTM0TIM13CTRL_t);
__IOREG(GTM0TIM13ECTRL_BASE, 0xFFE019A8, __READ_WRITE, GTM0TIM13ECTRL_t);
__IOREG(GTM0TIM13IRQNOTIFY_BASE, 0xFFE019AC, __READ_WRITE, GTM0TIM13IRQNOTIFY_t);
__IOREG(GTM0TIM13IRQEN_BASE, 0xFFE019B0, __READ_WRITE, GTM0TIM13IRQEN_t);
__IOREG(GTM0TIM13IRQFORCINT_BASE, 0xFFE019B4, __READ_WRITE, GTM0TIM13IRQFORCINT_t);
__IOREG(GTM0TIM13IRQMODE_BASE, 0xFFE019B8, __READ_WRITE, GTM0TIM13IRQMODE_t);
__IOREG(GTM0TIM13EIRQEN_BASE, 0xFFE019BC, __READ_WRITE, GTM0TIM13EIRQEN_t);
__IOREG(GTM0TIM14GPR0_BASE, 0xFFE01A00, __READ, GTM0TIM14GPR0_t);
__IOREG(GTM0TIM14GPR1_BASE, 0xFFE01A04, __READ_WRITE, GTM0TIM14GPR1_t);
__IOREG(GTM0TIM14CNT_BASE, 0xFFE01A08, __READ, GTM0TIM14CNT_t);
__IOREG(GTM0TIM14ECNT_BASE, 0xFFE01A0C, __READ, GTM0TIM14ECNT_t);
__IOREG(GTM0TIM14CNTS_BASE, 0xFFE01A10, __READ_WRITE, GTM0TIM14CNTS_t);
__IOREG(GTM0TIM14TDUC_BASE, 0xFFE01A14, __READ, GTM0TIM14TDUC_t);
__IOREG(GTM0TIM14TDUV_BASE, 0xFFE01A18, __READ_WRITE, GTM0TIM14TDUV_t);
__IOREG(GTM0TIM14FLTRE_BASE, 0xFFE01A1C, __READ_WRITE, GTM0TIM14FLTRE_t);
__IOREG(GTM0TIM14FLTFE_BASE, 0xFFE01A20, __READ_WRITE, GTM0TIM14FLTFE_t);
__IOREG(GTM0TIM14CTRL_BASE, 0xFFE01A24, __READ_WRITE, GTM0TIM14CTRL_t);
__IOREG(GTM0TIM14ECTRL_BASE, 0xFFE01A28, __READ_WRITE, GTM0TIM14ECTRL_t);
__IOREG(GTM0TIM14IRQNOTIFY_BASE, 0xFFE01A2C, __READ_WRITE, GTM0TIM14IRQNOTIFY_t);
__IOREG(GTM0TIM14IRQEN_BASE, 0xFFE01A30, __READ_WRITE, GTM0TIM14IRQEN_t);
__IOREG(GTM0TIM14IRQFORCINT_BASE, 0xFFE01A34, __READ_WRITE, GTM0TIM14IRQFORCINT_t);
__IOREG(GTM0TIM14IRQMODE_BASE, 0xFFE01A38, __READ_WRITE, GTM0TIM14IRQMODE_t);
__IOREG(GTM0TIM14EIRQEN_BASE, 0xFFE01A3C, __READ_WRITE, GTM0TIM14EIRQEN_t);
__IOREG(GTM0TIM15GPR0_BASE, 0xFFE01A80, __READ, GTM0TIM15GPR0_t);
__IOREG(GTM0TIM15GPR1_BASE, 0xFFE01A84, __READ_WRITE, GTM0TIM15GPR1_t);
__IOREG(GTM0TIM15CNT_BASE, 0xFFE01A88, __READ, GTM0TIM15CNT_t);
__IOREG(GTM0TIM15ECNT_BASE, 0xFFE01A8C, __READ, GTM0TIM15ECNT_t);
__IOREG(GTM0TIM15CNTS_BASE, 0xFFE01A90, __READ_WRITE, GTM0TIM15CNTS_t);
__IOREG(GTM0TIM15TDUC_BASE, 0xFFE01A94, __READ, GTM0TIM15TDUC_t);
__IOREG(GTM0TIM15TDUV_BASE, 0xFFE01A98, __READ_WRITE, GTM0TIM15TDUV_t);
__IOREG(GTM0TIM15FLTRE_BASE, 0xFFE01A9C, __READ_WRITE, GTM0TIM15FLTRE_t);
__IOREG(GTM0TIM15FLTFE_BASE, 0xFFE01AA0, __READ_WRITE, GTM0TIM15FLTFE_t);
__IOREG(GTM0TIM15CTRL_BASE, 0xFFE01AA4, __READ_WRITE, GTM0TIM15CTRL_t);
__IOREG(GTM0TIM15ECTRL_BASE, 0xFFE01AA8, __READ_WRITE, GTM0TIM15ECTRL_t);
__IOREG(GTM0TIM15IRQNOTIFY_BASE, 0xFFE01AAC, __READ_WRITE, GTM0TIM15IRQNOTIFY_t);
__IOREG(GTM0TIM15IRQEN_BASE, 0xFFE01AB0, __READ_WRITE, GTM0TIM15IRQEN_t);
__IOREG(GTM0TIM15IRQFORCINT_BASE, 0xFFE01AB4, __READ_WRITE, GTM0TIM15IRQFORCINT_t);
__IOREG(GTM0TIM15IRQMODE_BASE, 0xFFE01AB8, __READ_WRITE, GTM0TIM15IRQMODE_t);
__IOREG(GTM0TIM15EIRQEN_BASE, 0xFFE01ABC, __READ_WRITE, GTM0TIM15EIRQEN_t);
__IOREG(GTM0TIM16GPR0_BASE, 0xFFE01B00, __READ, GTM0TIM16GPR0_t);
__IOREG(GTM0TIM16GPR1_BASE, 0xFFE01B04, __READ_WRITE, GTM0TIM16GPR1_t);
__IOREG(GTM0TIM16CNT_BASE, 0xFFE01B08, __READ, GTM0TIM16CNT_t);
__IOREG(GTM0TIM16ECNT_BASE, 0xFFE01B0C, __READ, GTM0TIM16ECNT_t);
__IOREG(GTM0TIM16CNTS_BASE, 0xFFE01B10, __READ_WRITE, GTM0TIM16CNTS_t);
__IOREG(GTM0TIM16TDUC_BASE, 0xFFE01B14, __READ, GTM0TIM16TDUC_t);
__IOREG(GTM0TIM16TDUV_BASE, 0xFFE01B18, __READ_WRITE, GTM0TIM16TDUV_t);
__IOREG(GTM0TIM16FLTRE_BASE, 0xFFE01B1C, __READ_WRITE, GTM0TIM16FLTRE_t);
__IOREG(GTM0TIM16FLTFE_BASE, 0xFFE01B20, __READ_WRITE, GTM0TIM16FLTFE_t);
__IOREG(GTM0TIM16CTRL_BASE, 0xFFE01B24, __READ_WRITE, GTM0TIM16CTRL_t);
__IOREG(GTM0TIM16ECTRL_BASE, 0xFFE01B28, __READ_WRITE, GTM0TIM16ECTRL_t);
__IOREG(GTM0TIM16IRQNOTIFY_BASE, 0xFFE01B2C, __READ_WRITE, GTM0TIM16IRQNOTIFY_t);
__IOREG(GTM0TIM16IRQEN_BASE, 0xFFE01B30, __READ_WRITE, GTM0TIM16IRQEN_t);
__IOREG(GTM0TIM16IRQFORCINT_BASE, 0xFFE01B34, __READ_WRITE, GTM0TIM16IRQFORCINT_t);
__IOREG(GTM0TIM16IRQMODE_BASE, 0xFFE01B38, __READ_WRITE, GTM0TIM16IRQMODE_t);
__IOREG(GTM0TIM16EIRQEN_BASE, 0xFFE01B3C, __READ_WRITE, GTM0TIM16EIRQEN_t);
__IOREG(GTM0TIM17GPR0_BASE, 0xFFE01B80, __READ, GTM0TIM17GPR0_t);
__IOREG(GTM0TIM17GPR1_BASE, 0xFFE01B84, __READ_WRITE, GTM0TIM17GPR1_t);
__IOREG(GTM0TIM17CNT_BASE, 0xFFE01B88, __READ, GTM0TIM17CNT_t);
__IOREG(GTM0TIM17ECNT_BASE, 0xFFE01B8C, __READ, GTM0TIM17ECNT_t);
__IOREG(GTM0TIM17CNTS_BASE, 0xFFE01B90, __READ_WRITE, GTM0TIM17CNTS_t);
__IOREG(GTM0TIM17TDUC_BASE, 0xFFE01B94, __READ, GTM0TIM17TDUC_t);
__IOREG(GTM0TIM17TDUV_BASE, 0xFFE01B98, __READ_WRITE, GTM0TIM17TDUV_t);
__IOREG(GTM0TIM17FLTRE_BASE, 0xFFE01B9C, __READ_WRITE, GTM0TIM17FLTRE_t);
__IOREG(GTM0TIM17FLTFE_BASE, 0xFFE01BA0, __READ_WRITE, GTM0TIM17FLTFE_t);
__IOREG(GTM0TIM17CTRL_BASE, 0xFFE01BA4, __READ_WRITE, GTM0TIM17CTRL_t);
__IOREG(GTM0TIM17ECTRL_BASE, 0xFFE01BA8, __READ_WRITE, GTM0TIM17ECTRL_t);
__IOREG(GTM0TIM17IRQNOTIFY_BASE, 0xFFE01BAC, __READ_WRITE, GTM0TIM17IRQNOTIFY_t);
__IOREG(GTM0TIM17IRQEN_BASE, 0xFFE01BB0, __READ_WRITE, GTM0TIM17IRQEN_t);
__IOREG(GTM0TIM17IRQFORCINT_BASE, 0xFFE01BB4, __READ_WRITE, GTM0TIM17IRQFORCINT_t);
__IOREG(GTM0TIM17IRQMODE_BASE, 0xFFE01BB8, __READ_WRITE, GTM0TIM17IRQMODE_t);
__IOREG(GTM0TIM17EIRQEN_BASE, 0xFFE01BBC, __READ_WRITE, GTM0TIM17EIRQEN_t);
__IOREG(GTM0ATOM00RDADDR_BASE, 0xFFE0D000, __READ_WRITE, GTM0ATOM00RDADDR_t);
__IOREG(GTM0ATOM00CTRL_BASE, 0xFFE0D004, __READ_WRITE, GTM0ATOM00CTRL_t);
__IOREG(GTM0ATOM00SR0_BASE, 0xFFE0D008, __READ_WRITE, GTM0ATOM00SR0_t);
__IOREG(GTM0ATOM00SR1_BASE, 0xFFE0D00C, __READ_WRITE, GTM0ATOM00SR1_t);
__IOREG(GTM0ATOM00CM0_BASE, 0xFFE0D010, __READ_WRITE, GTM0ATOM00CM0_t);
__IOREG(GTM0ATOM00CM1_BASE, 0xFFE0D014, __READ_WRITE, GTM0ATOM00CM1_t);
__IOREG(GTM0ATOM00CN0_BASE, 0xFFE0D018, __READ_WRITE, GTM0ATOM00CN0_t);
__IOREG(GTM0ATOM00STAT_BASE, 0xFFE0D01C, __READ_WRITE, GTM0ATOM00STAT_t);
__IOREG(GTM0ATOM00IRQNOTIFY_BASE, 0xFFE0D020, __READ_WRITE, GTM0ATOM00IRQNOTIFY_t);
__IOREG(GTM0ATOM00IRQEN_BASE, 0xFFE0D024, __READ_WRITE, GTM0ATOM00IRQEN_t);
__IOREG(GTM0ATOM00IRQFORCINT_BASE, 0xFFE0D028, __READ_WRITE, GTM0ATOM00IRQFORCINT_t);
__IOREG(GTM0ATOM00IRQMODE_BASE, 0xFFE0D02C, __READ_WRITE, GTM0ATOM00IRQMODE_t);
__IOREG(GTM0ATOM0AGCGLBCTRL_BASE, 0xFFE0D040, __READ_WRITE, GTM0ATOM0AGCGLBCTRL_t);
__IOREG(GTM0ATOM0AGCENDISCTRL_BASE, 0xFFE0D044, __READ_WRITE, GTM0ATOM0AGCENDISCTRL_t);
__IOREG(GTM0ATOM0AGCENDISSTAT_BASE, 0xFFE0D048, __READ_WRITE, GTM0ATOM0AGCENDISSTAT_t);
__IOREG(GTM0ATOM0AGCACTTB_BASE, 0xFFE0D04C, __READ_WRITE, GTM0ATOM0AGCACTTB_t);
__IOREG(GTM0ATOM0AGCOUTENCTRL_BASE, 0xFFE0D050, __READ_WRITE, GTM0ATOM0AGCOUTENCTRL_t);
__IOREG(GTM0ATOM0AGCOUTENSTAT_BASE, 0xFFE0D054, __READ_WRITE, GTM0ATOM0AGCOUTENSTAT_t);
__IOREG(GTM0ATOM0AGCFUPDCTRL_BASE, 0xFFE0D058, __READ_WRITE, GTM0ATOM0AGCFUPDCTRL_t);
__IOREG(GTM0ATOM0AGCINTTRIG_BASE, 0xFFE0D05C, __READ_WRITE, GTM0ATOM0AGCINTTRIG_t);
__IOREG(GTM0ATOM01RDADDR_BASE, 0xFFE0D080, __READ_WRITE, GTM0ATOM01RDADDR_t);
__IOREG(GTM0ATOM01CTRL_BASE, 0xFFE0D084, __READ_WRITE, GTM0ATOM01CTRL_t);
__IOREG(GTM0ATOM01SR0_BASE, 0xFFE0D088, __READ_WRITE, GTM0ATOM01SR0_t);
__IOREG(GTM0ATOM01SR1_BASE, 0xFFE0D08C, __READ_WRITE, GTM0ATOM01SR1_t);
__IOREG(GTM0ATOM01CM0_BASE, 0xFFE0D090, __READ_WRITE, GTM0ATOM01CM0_t);
__IOREG(GTM0ATOM01CM1_BASE, 0xFFE0D094, __READ_WRITE, GTM0ATOM01CM1_t);
__IOREG(GTM0ATOM01CN0_BASE, 0xFFE0D098, __READ_WRITE, GTM0ATOM01CN0_t);
__IOREG(GTM0ATOM01STAT_BASE, 0xFFE0D09C, __READ_WRITE, GTM0ATOM01STAT_t);
__IOREG(GTM0ATOM01IRQNOTIFY_BASE, 0xFFE0D0A0, __READ_WRITE, GTM0ATOM01IRQNOTIFY_t);
__IOREG(GTM0ATOM01IRQEN_BASE, 0xFFE0D0A4, __READ_WRITE, GTM0ATOM01IRQEN_t);
__IOREG(GTM0ATOM01IRQFORCINT_BASE, 0xFFE0D0A8, __READ_WRITE, GTM0ATOM01IRQFORCINT_t);
__IOREG(GTM0ATOM01IRQMODE_BASE, 0xFFE0D0AC, __READ_WRITE, GTM0ATOM01IRQMODE_t);
__IOREG(GTM0ATOM02RDADDR_BASE, 0xFFE0D100, __READ_WRITE, GTM0ATOM02RDADDR_t);
__IOREG(GTM0ATOM02CTRL_BASE, 0xFFE0D104, __READ_WRITE, GTM0ATOM02CTRL_t);
__IOREG(GTM0ATOM02SR0_BASE, 0xFFE0D108, __READ_WRITE, GTM0ATOM02SR0_t);
__IOREG(GTM0ATOM02SR1_BASE, 0xFFE0D10C, __READ_WRITE, GTM0ATOM02SR1_t);
__IOREG(GTM0ATOM02CM0_BASE, 0xFFE0D110, __READ_WRITE, GTM0ATOM02CM0_t);
__IOREG(GTM0ATOM02CM1_BASE, 0xFFE0D114, __READ_WRITE, GTM0ATOM02CM1_t);
__IOREG(GTM0ATOM02CN0_BASE, 0xFFE0D118, __READ_WRITE, GTM0ATOM02CN0_t);
__IOREG(GTM0ATOM02STAT_BASE, 0xFFE0D11C, __READ_WRITE, GTM0ATOM02STAT_t);
__IOREG(GTM0ATOM02IRQNOTIFY_BASE, 0xFFE0D120, __READ_WRITE, GTM0ATOM02IRQNOTIFY_t);
__IOREG(GTM0ATOM02IRQEN_BASE, 0xFFE0D124, __READ_WRITE, GTM0ATOM02IRQEN_t);
__IOREG(GTM0ATOM02IRQFORCINT_BASE, 0xFFE0D128, __READ_WRITE, GTM0ATOM02IRQFORCINT_t);
__IOREG(GTM0ATOM02IRQMODE_BASE, 0xFFE0D12C, __READ_WRITE, GTM0ATOM02IRQMODE_t);
__IOREG(GTM0ATOM03RDADDR_BASE, 0xFFE0D180, __READ_WRITE, GTM0ATOM03RDADDR_t);
__IOREG(GTM0ATOM03CTRL_BASE, 0xFFE0D184, __READ_WRITE, GTM0ATOM03CTRL_t);
__IOREG(GTM0ATOM03SR0_BASE, 0xFFE0D188, __READ_WRITE, GTM0ATOM03SR0_t);
__IOREG(GTM0ATOM03SR1_BASE, 0xFFE0D18C, __READ_WRITE, GTM0ATOM03SR1_t);
__IOREG(GTM0ATOM03CM0_BASE, 0xFFE0D190, __READ_WRITE, GTM0ATOM03CM0_t);
__IOREG(GTM0ATOM03CM1_BASE, 0xFFE0D194, __READ_WRITE, GTM0ATOM03CM1_t);
__IOREG(GTM0ATOM03CN0_BASE, 0xFFE0D198, __READ_WRITE, GTM0ATOM03CN0_t);
__IOREG(GTM0ATOM03STAT_BASE, 0xFFE0D19C, __READ_WRITE, GTM0ATOM03STAT_t);
__IOREG(GTM0ATOM03IRQNOTIFY_BASE, 0xFFE0D1A0, __READ_WRITE, GTM0ATOM03IRQNOTIFY_t);
__IOREG(GTM0ATOM03IRQEN_BASE, 0xFFE0D1A4, __READ_WRITE, GTM0ATOM03IRQEN_t);
__IOREG(GTM0ATOM03IRQFORCINT_BASE, 0xFFE0D1A8, __READ_WRITE, GTM0ATOM03IRQFORCINT_t);
__IOREG(GTM0ATOM03IRQMODE_BASE, 0xFFE0D1AC, __READ_WRITE, GTM0ATOM03IRQMODE_t);
__IOREG(GTM0ATOM04RDADDR_BASE, 0xFFE0D200, __READ_WRITE, GTM0ATOM04RDADDR_t);
__IOREG(GTM0ATOM04CTRL_BASE, 0xFFE0D204, __READ_WRITE, GTM0ATOM04CTRL_t);
__IOREG(GTM0ATOM04SR0_BASE, 0xFFE0D208, __READ_WRITE, GTM0ATOM04SR0_t);
__IOREG(GTM0ATOM04SR1_BASE, 0xFFE0D20C, __READ_WRITE, GTM0ATOM04SR1_t);
__IOREG(GTM0ATOM04CM0_BASE, 0xFFE0D210, __READ_WRITE, GTM0ATOM04CM0_t);
__IOREG(GTM0ATOM04CM1_BASE, 0xFFE0D214, __READ_WRITE, GTM0ATOM04CM1_t);
__IOREG(GTM0ATOM04CN0_BASE, 0xFFE0D218, __READ_WRITE, GTM0ATOM04CN0_t);
__IOREG(GTM0ATOM04STAT_BASE, 0xFFE0D21C, __READ_WRITE, GTM0ATOM04STAT_t);
__IOREG(GTM0ATOM04IRQNOTIFY_BASE, 0xFFE0D220, __READ_WRITE, GTM0ATOM04IRQNOTIFY_t);
__IOREG(GTM0ATOM04IRQEN_BASE, 0xFFE0D224, __READ_WRITE, GTM0ATOM04IRQEN_t);
__IOREG(GTM0ATOM04IRQFORCINT_BASE, 0xFFE0D228, __READ_WRITE, GTM0ATOM04IRQFORCINT_t);
__IOREG(GTM0ATOM04IRQMODE_BASE, 0xFFE0D22C, __READ_WRITE, GTM0ATOM04IRQMODE_t);
__IOREG(GTM0ATOM05RDADDR_BASE, 0xFFE0D280, __READ_WRITE, GTM0ATOM05RDADDR_t);
__IOREG(GTM0ATOM05CTRL_BASE, 0xFFE0D284, __READ_WRITE, GTM0ATOM05CTRL_t);
__IOREG(GTM0ATOM05SR0_BASE, 0xFFE0D288, __READ_WRITE, GTM0ATOM05SR0_t);
__IOREG(GTM0ATOM05SR1_BASE, 0xFFE0D28C, __READ_WRITE, GTM0ATOM05SR1_t);
__IOREG(GTM0ATOM05CM0_BASE, 0xFFE0D290, __READ_WRITE, GTM0ATOM05CM0_t);
__IOREG(GTM0ATOM05CM1_BASE, 0xFFE0D294, __READ_WRITE, GTM0ATOM05CM1_t);
__IOREG(GTM0ATOM05CN0_BASE, 0xFFE0D298, __READ_WRITE, GTM0ATOM05CN0_t);
__IOREG(GTM0ATOM05STAT_BASE, 0xFFE0D29C, __READ_WRITE, GTM0ATOM05STAT_t);
__IOREG(GTM0ATOM05IRQNOTIFY_BASE, 0xFFE0D2A0, __READ_WRITE, GTM0ATOM05IRQNOTIFY_t);
__IOREG(GTM0ATOM05IRQEN_BASE, 0xFFE0D2A4, __READ_WRITE, GTM0ATOM05IRQEN_t);
__IOREG(GTM0ATOM05IRQFORCINT_BASE, 0xFFE0D2A8, __READ_WRITE, GTM0ATOM05IRQFORCINT_t);
__IOREG(GTM0ATOM05IRQMODE_BASE, 0xFFE0D2AC, __READ_WRITE, GTM0ATOM05IRQMODE_t);
__IOREG(GTM0ATOM06RDADDR_BASE, 0xFFE0D300, __READ_WRITE, GTM0ATOM06RDADDR_t);
__IOREG(GTM0ATOM06CTRL_BASE, 0xFFE0D304, __READ_WRITE, GTM0ATOM06CTRL_t);
__IOREG(GTM0ATOM06SR0_BASE, 0xFFE0D308, __READ_WRITE, GTM0ATOM06SR0_t);
__IOREG(GTM0ATOM06SR1_BASE, 0xFFE0D30C, __READ_WRITE, GTM0ATOM06SR1_t);
__IOREG(GTM0ATOM06CM0_BASE, 0xFFE0D310, __READ_WRITE, GTM0ATOM06CM0_t);
__IOREG(GTM0ATOM06CM1_BASE, 0xFFE0D314, __READ_WRITE, GTM0ATOM06CM1_t);
__IOREG(GTM0ATOM06CN0_BASE, 0xFFE0D318, __READ_WRITE, GTM0ATOM06CN0_t);
__IOREG(GTM0ATOM06STAT_BASE, 0xFFE0D31C, __READ_WRITE, GTM0ATOM06STAT_t);
__IOREG(GTM0ATOM06IRQNOTIFY_BASE, 0xFFE0D320, __READ_WRITE, GTM0ATOM06IRQNOTIFY_t);
__IOREG(GTM0ATOM06IRQEN_BASE, 0xFFE0D324, __READ_WRITE, GTM0ATOM06IRQEN_t);
__IOREG(GTM0ATOM06IRQFORCINT_BASE, 0xFFE0D328, __READ_WRITE, GTM0ATOM06IRQFORCINT_t);
__IOREG(GTM0ATOM06IRQMODE_BASE, 0xFFE0D32C, __READ_WRITE, GTM0ATOM06IRQMODE_t);
__IOREG(GTM0ATOM07RDADDR_BASE, 0xFFE0D380, __READ_WRITE, GTM0ATOM07RDADDR_t);
__IOREG(GTM0ATOM07CTRL_BASE, 0xFFE0D384, __READ_WRITE, GTM0ATOM07CTRL_t);
__IOREG(GTM0ATOM07SR0_BASE, 0xFFE0D388, __READ_WRITE, GTM0ATOM07SR0_t);
__IOREG(GTM0ATOM07SR1_BASE, 0xFFE0D38C, __READ_WRITE, GTM0ATOM07SR1_t);
__IOREG(GTM0ATOM07CM0_BASE, 0xFFE0D390, __READ_WRITE, GTM0ATOM07CM0_t);
__IOREG(GTM0ATOM07CM1_BASE, 0xFFE0D394, __READ_WRITE, GTM0ATOM07CM1_t);
__IOREG(GTM0ATOM07CN0_BASE, 0xFFE0D398, __READ_WRITE, GTM0ATOM07CN0_t);
__IOREG(GTM0ATOM07STAT_BASE, 0xFFE0D39C, __READ_WRITE, GTM0ATOM07STAT_t);
__IOREG(GTM0ATOM07IRQNOTIFY_BASE, 0xFFE0D3A0, __READ_WRITE, GTM0ATOM07IRQNOTIFY_t);
__IOREG(GTM0ATOM07IRQEN_BASE, 0xFFE0D3A4, __READ_WRITE, GTM0ATOM07IRQEN_t);
__IOREG(GTM0ATOM07IRQFORCINT_BASE, 0xFFE0D3A8, __READ_WRITE, GTM0ATOM07IRQFORCINT_t);
__IOREG(GTM0ATOM07IRQMODE_BASE, 0xFFE0D3AC, __READ_WRITE, GTM0ATOM07IRQMODE_t);
__IOREG(GTM0ATOM10RDADDR_BASE, 0xFFE0D800, __READ_WRITE, GTM0ATOM10RDADDR_t);
__IOREG(GTM0ATOM10CTRL_BASE, 0xFFE0D804, __READ_WRITE, GTM0ATOM10CTRL_t);
__IOREG(GTM0ATOM10SR0_BASE, 0xFFE0D808, __READ_WRITE, GTM0ATOM10SR0_t);
__IOREG(GTM0ATOM10SR1_BASE, 0xFFE0D80C, __READ_WRITE, GTM0ATOM10SR1_t);
__IOREG(GTM0ATOM10CM0_BASE, 0xFFE0D810, __READ_WRITE, GTM0ATOM10CM0_t);
__IOREG(GTM0ATOM10CM1_BASE, 0xFFE0D814, __READ_WRITE, GTM0ATOM10CM1_t);
__IOREG(GTM0ATOM10CN0_BASE, 0xFFE0D818, __READ_WRITE, GTM0ATOM10CN0_t);
__IOREG(GTM0ATOM10STAT_BASE, 0xFFE0D81C, __READ_WRITE, GTM0ATOM10STAT_t);
__IOREG(GTM0ATOM10IRQNOTIFY_BASE, 0xFFE0D820, __READ_WRITE, GTM0ATOM10IRQNOTIFY_t);
__IOREG(GTM0ATOM10IRQEN_BASE, 0xFFE0D824, __READ_WRITE, GTM0ATOM10IRQEN_t);
__IOREG(GTM0ATOM10IRQFORCINT_BASE, 0xFFE0D828, __READ_WRITE, GTM0ATOM10IRQFORCINT_t);
__IOREG(GTM0ATOM10IRQMODE_BASE, 0xFFE0D82C, __READ_WRITE, GTM0ATOM10IRQMODE_t);
__IOREG(GTM0ATOM1AGCGLBCTRL_BASE, 0xFFE0D840, __READ_WRITE, GTM0ATOM1AGCGLBCTRL_t);
__IOREG(GTM0ATOM1AGCENDISCTRL_BASE, 0xFFE0D844, __READ_WRITE, GTM0ATOM1AGCENDISCTRL_t);
__IOREG(GTM0ATOM1AGCENDISSTAT_BASE, 0xFFE0D848, __READ_WRITE, GTM0ATOM1AGCENDISSTAT_t);
__IOREG(GTM0ATOM1AGCACTTB_BASE, 0xFFE0D84C, __READ_WRITE, GTM0ATOM1AGCACTTB_t);
__IOREG(GTM0ATOM1AGCOUTENCTRL_BASE, 0xFFE0D850, __READ_WRITE, GTM0ATOM1AGCOUTENCTRL_t);
__IOREG(GTM0ATOM1AGCOUTENSTAT_BASE, 0xFFE0D854, __READ_WRITE, GTM0ATOM1AGCOUTENSTAT_t);
__IOREG(GTM0ATOM1AGCFUPDCTRL_BASE, 0xFFE0D858, __READ_WRITE, GTM0ATOM1AGCFUPDCTRL_t);
__IOREG(GTM0ATOM1AGCINTTRIG_BASE, 0xFFE0D85C, __READ_WRITE, GTM0ATOM1AGCINTTRIG_t);
__IOREG(GTM0ATOM11RDADDR_BASE, 0xFFE0D880, __READ_WRITE, GTM0ATOM11RDADDR_t);
__IOREG(GTM0ATOM11CTRL_BASE, 0xFFE0D884, __READ_WRITE, GTM0ATOM11CTRL_t);
__IOREG(GTM0ATOM11SR0_BASE, 0xFFE0D888, __READ_WRITE, GTM0ATOM11SR0_t);
__IOREG(GTM0ATOM11SR1_BASE, 0xFFE0D88C, __READ_WRITE, GTM0ATOM11SR1_t);
__IOREG(GTM0ATOM11CM0_BASE, 0xFFE0D890, __READ_WRITE, GTM0ATOM11CM0_t);
__IOREG(GTM0ATOM11CM1_BASE, 0xFFE0D894, __READ_WRITE, GTM0ATOM11CM1_t);
__IOREG(GTM0ATOM11CN0_BASE, 0xFFE0D898, __READ_WRITE, GTM0ATOM11CN0_t);
__IOREG(GTM0ATOM11STAT_BASE, 0xFFE0D89C, __READ_WRITE, GTM0ATOM11STAT_t);
__IOREG(GTM0ATOM11IRQNOTIFY_BASE, 0xFFE0D8A0, __READ_WRITE, GTM0ATOM11IRQNOTIFY_t);
__IOREG(GTM0ATOM11IRQEN_BASE, 0xFFE0D8A4, __READ_WRITE, GTM0ATOM11IRQEN_t);
__IOREG(GTM0ATOM11IRQFORCINT_BASE, 0xFFE0D8A8, __READ_WRITE, GTM0ATOM11IRQFORCINT_t);
__IOREG(GTM0ATOM11IRQMODE_BASE, 0xFFE0D8AC, __READ_WRITE, GTM0ATOM11IRQMODE_t);
__IOREG(GTM0ATOM12RDADDR_BASE, 0xFFE0D900, __READ_WRITE, GTM0ATOM12RDADDR_t);
__IOREG(GTM0ATOM12CTRL_BASE, 0xFFE0D904, __READ_WRITE, GTM0ATOM12CTRL_t);
__IOREG(GTM0ATOM12SR0_BASE, 0xFFE0D908, __READ_WRITE, GTM0ATOM12SR0_t);
__IOREG(GTM0ATOM12SR1_BASE, 0xFFE0D90C, __READ_WRITE, GTM0ATOM12SR1_t);
__IOREG(GTM0ATOM12CM0_BASE, 0xFFE0D910, __READ_WRITE, GTM0ATOM12CM0_t);
__IOREG(GTM0ATOM12CM1_BASE, 0xFFE0D914, __READ_WRITE, GTM0ATOM12CM1_t);
__IOREG(GTM0ATOM12CN0_BASE, 0xFFE0D918, __READ_WRITE, GTM0ATOM12CN0_t);
__IOREG(GTM0ATOM12STAT_BASE, 0xFFE0D91C, __READ_WRITE, GTM0ATOM12STAT_t);
__IOREG(GTM0ATOM12IRQNOTIFY_BASE, 0xFFE0D920, __READ_WRITE, GTM0ATOM12IRQNOTIFY_t);
__IOREG(GTM0ATOM12IRQEN_BASE, 0xFFE0D924, __READ_WRITE, GTM0ATOM12IRQEN_t);
__IOREG(GTM0ATOM12IRQFORCINT_BASE, 0xFFE0D928, __READ_WRITE, GTM0ATOM12IRQFORCINT_t);
__IOREG(GTM0ATOM12IRQMODE_BASE, 0xFFE0D92C, __READ_WRITE, GTM0ATOM12IRQMODE_t);
__IOREG(GTM0ATOM13RDADDR_BASE, 0xFFE0D980, __READ_WRITE, GTM0ATOM13RDADDR_t);
__IOREG(GTM0ATOM13CTRL_BASE, 0xFFE0D984, __READ_WRITE, GTM0ATOM13CTRL_t);
__IOREG(GTM0ATOM13SR0_BASE, 0xFFE0D988, __READ_WRITE, GTM0ATOM13SR0_t);
__IOREG(GTM0ATOM13SR1_BASE, 0xFFE0D98C, __READ_WRITE, GTM0ATOM13SR1_t);
__IOREG(GTM0ATOM13CM0_BASE, 0xFFE0D990, __READ_WRITE, GTM0ATOM13CM0_t);
__IOREG(GTM0ATOM13CM1_BASE, 0xFFE0D994, __READ_WRITE, GTM0ATOM13CM1_t);
__IOREG(GTM0ATOM13CN0_BASE, 0xFFE0D998, __READ_WRITE, GTM0ATOM13CN0_t);
__IOREG(GTM0ATOM13STAT_BASE, 0xFFE0D99C, __READ_WRITE, GTM0ATOM13STAT_t);
__IOREG(GTM0ATOM13IRQNOTIFY_BASE, 0xFFE0D9A0, __READ_WRITE, GTM0ATOM13IRQNOTIFY_t);
__IOREG(GTM0ATOM13IRQEN_BASE, 0xFFE0D9A4, __READ_WRITE, GTM0ATOM13IRQEN_t);
__IOREG(GTM0ATOM13IRQFORCINT_BASE, 0xFFE0D9A8, __READ_WRITE, GTM0ATOM13IRQFORCINT_t);
__IOREG(GTM0ATOM13IRQMODE_BASE, 0xFFE0D9AC, __READ_WRITE, GTM0ATOM13IRQMODE_t);
__IOREG(GTM0DTM24CTRL_BASE, 0xFFE13600, __READ_WRITE, GTM0DTM24CTRL_t);
__IOREG(GTM0DTM24CHCTRL1_BASE, 0xFFE13604, __READ_WRITE, GTM0DTM24CHCTRL1_t);
__IOREG(GTM0DTM24CHCTRL2_BASE, 0xFFE13608, __READ_WRITE, GTM0DTM24CHCTRL2_t);
__IOREG(GTM0DTM24CHCTRL2SR_BASE, 0xFFE1360C, __READ_WRITE, GTM0DTM24CHCTRL2SR_t);
__IOREG(GTM0DTM24PSCTRL_BASE, 0xFFE13610, __READ_WRITE, GTM0DTM24PSCTRL_t);
__IOREG(GTM0DTM240DTV_BASE, 0xFFE13614, __READ_WRITE, GTM0DTM240DTV_t);
__IOREG(GTM0DTM241DTV_BASE, 0xFFE13618, __READ_WRITE, GTM0DTM241DTV_t);
__IOREG(GTM0DTM242DTV_BASE, 0xFFE1361C, __READ_WRITE, GTM0DTM242DTV_t);
__IOREG(GTM0DTM243DTV_BASE, 0xFFE13620, __READ_WRITE, GTM0DTM243DTV_t);
__IOREG(GTM0DTM24CHSR_BASE, 0xFFE13624, __READ_WRITE, GTM0DTM24CHSR_t);
__IOREG(GTM0DTM26CTRL_BASE, 0xFFE13680, __READ_WRITE, GTM0DTM26CTRL_t);
__IOREG(GTM0DTM26CHCTRL1_BASE, 0xFFE13684, __READ_WRITE, GTM0DTM26CHCTRL1_t);
__IOREG(GTM0DTM26CHCTRL2_BASE, 0xFFE13688, __READ_WRITE, GTM0DTM26CHCTRL2_t);
__IOREG(GTM0DTM26CHCTRL2SR_BASE, 0xFFE1368C, __READ_WRITE, GTM0DTM26CHCTRL2SR_t);
__IOREG(GTM0DTM26PSCTRL_BASE, 0xFFE13690, __READ_WRITE, GTM0DTM26PSCTRL_t);
__IOREG(GTM0DTM260DTV_BASE, 0xFFE13694, __READ_WRITE, GTM0DTM260DTV_t);
__IOREG(GTM0DTM261DTV_BASE, 0xFFE13698, __READ_WRITE, GTM0DTM261DTV_t);
__IOREG(GTM0DTM262DTV_BASE, 0xFFE1369C, __READ_WRITE, GTM0DTM262DTV_t);
__IOREG(GTM0DTM263DTV_BASE, 0xFFE136A0, __READ_WRITE, GTM0DTM263DTV_t);
__IOREG(GTM0DTM26CHSR_BASE, 0xFFE136A4, __READ_WRITE, GTM0DTM26CHSR_t);
__IOREG(GTM0MCS00R0_BASE, 0xFFE30000, __READ_WRITE, GTM0MCS00R0_t);
__IOREG(GTM0MCS00R1_BASE, 0xFFE30004, __READ_WRITE, GTM0MCS00R1_t);
__IOREG(GTM0MCS00R2_BASE, 0xFFE30008, __READ_WRITE, GTM0MCS00R2_t);
__IOREG(GTM0MCS00R3_BASE, 0xFFE3000C, __READ_WRITE, GTM0MCS00R3_t);
__IOREG(GTM0MCS00R4_BASE, 0xFFE30010, __READ_WRITE, GTM0MCS00R4_t);
__IOREG(GTM0MCS00R5_BASE, 0xFFE30014, __READ_WRITE, GTM0MCS00R5_t);
__IOREG(GTM0MCS00R6_BASE, 0xFFE30018, __READ_WRITE, GTM0MCS00R6_t);
__IOREG(GTM0MCS00R7_BASE, 0xFFE3001C, __READ_WRITE, GTM0MCS00R7_t);
__IOREG(GTM0MCS00CTRL_BASE, 0xFFE30020, __READ_WRITE, GTM0MCS00CTRL_t);
__IOREG(GTM0MCS00ACB_BASE, 0xFFE30024, __READ, GTM0MCS00ACB_t);
__IOREG(GTM0MCS0CTRG_BASE, 0xFFE30028, __READ_WRITE, GTM0MCS0CTRG_t);
__IOREG(GTM0MCS0STRG_BASE, 0xFFE3002C, __READ_WRITE, GTM0MCS0STRG_t);
__IOREG(GTM0MCS00MHB_BASE, 0xFFE3003C, __READ, GTM0MCS00MHB_t);
__IOREG(GTM0MCS00PC_BASE, 0xFFE30040, __READ_WRITE, GTM0MCS00PC_t);
__IOREG(GTM0MCS00IRQNOTIFY_BASE, 0xFFE30044, __READ_WRITE, GTM0MCS00IRQNOTIFY_t);
__IOREG(GTM0MCS00IRQEN_BASE, 0xFFE30048, __READ_WRITE, GTM0MCS00IRQEN_t);
__IOREG(GTM0MCS00IRQFORCINT_BASE, 0xFFE3004C, __READ_WRITE, GTM0MCS00IRQFORCINT_t);
__IOREG(GTM0MCS00IRQMODE_BASE, 0xFFE30050, __READ_WRITE, GTM0MCS00IRQMODE_t);
__IOREG(GTM0MCS00EIRQEN_BASE, 0xFFE30054, __READ_WRITE, GTM0MCS00EIRQEN_t);
__IOREG(GTM0MCS0CTRLSTAT_BASE, 0xFFE30064, __READ_WRITE, GTM0MCS0CTRLSTAT_t);
__IOREG(GTM0MCS0RESET_BASE, 0xFFE30068, __READ_WRITE, GTM0MCS0RESET_t);
__IOREG(GTM0MCS0CAT_BASE, 0xFFE3006C, __READ_WRITE, GTM0MCS0CAT_t);
__IOREG(GTM0MCS0CWT_BASE, 0xFFE30070, __READ_WRITE, GTM0MCS0CWT_t);
__IOREG(GTM0MCS0ERR_BASE, 0xFFE3007C, __READ, GTM0MCS0ERR_t);
__IOREG(GTM0MCS01R0_BASE, 0xFFE30080, __READ_WRITE, GTM0MCS01R0_t);
__IOREG(GTM0MCS01R1_BASE, 0xFFE30084, __READ_WRITE, GTM0MCS01R1_t);
__IOREG(GTM0MCS01R2_BASE, 0xFFE30088, __READ_WRITE, GTM0MCS01R2_t);
__IOREG(GTM0MCS01R3_BASE, 0xFFE3008C, __READ_WRITE, GTM0MCS01R3_t);
__IOREG(GTM0MCS01R4_BASE, 0xFFE30090, __READ_WRITE, GTM0MCS01R4_t);
__IOREG(GTM0MCS01R5_BASE, 0xFFE30094, __READ_WRITE, GTM0MCS01R5_t);
__IOREG(GTM0MCS01R6_BASE, 0xFFE30098, __READ_WRITE, GTM0MCS01R6_t);
__IOREG(GTM0MCS01R7_BASE, 0xFFE3009C, __READ_WRITE, GTM0MCS01R7_t);
__IOREG(GTM0MCS01CTRL_BASE, 0xFFE300A0, __READ_WRITE, GTM0MCS01CTRL_t);
__IOREG(GTM0MCS01ACB_BASE, 0xFFE300A4, __READ, GTM0MCS01ACB_t);
__IOREG(GTM0MCS01MHB_BASE, 0xFFE300BC, __READ, GTM0MCS01MHB_t);
__IOREG(GTM0MCS01PC_BASE, 0xFFE300C0, __READ_WRITE, GTM0MCS01PC_t);
__IOREG(GTM0MCS01IRQNOTIFY_BASE, 0xFFE300C4, __READ_WRITE, GTM0MCS01IRQNOTIFY_t);
__IOREG(GTM0MCS01IRQEN_BASE, 0xFFE300C8, __READ_WRITE, GTM0MCS01IRQEN_t);
__IOREG(GTM0MCS01IRQFORCINT_BASE, 0xFFE300CC, __READ_WRITE, GTM0MCS01IRQFORCINT_t);
__IOREG(GTM0MCS01IRQMODE_BASE, 0xFFE300D0, __READ_WRITE, GTM0MCS01IRQMODE_t);
__IOREG(GTM0MCS01EIRQEN_BASE, 0xFFE300D4, __READ_WRITE, GTM0MCS01EIRQEN_t);
__IOREG(GTM0MCS02R0_BASE, 0xFFE30100, __READ_WRITE, GTM0MCS02R0_t);
__IOREG(GTM0MCS02R1_BASE, 0xFFE30104, __READ_WRITE, GTM0MCS02R1_t);
__IOREG(GTM0MCS02R2_BASE, 0xFFE30108, __READ_WRITE, GTM0MCS02R2_t);
__IOREG(GTM0MCS02R3_BASE, 0xFFE3010C, __READ_WRITE, GTM0MCS02R3_t);
__IOREG(GTM0MCS02R4_BASE, 0xFFE30110, __READ_WRITE, GTM0MCS02R4_t);
__IOREG(GTM0MCS02R5_BASE, 0xFFE30114, __READ_WRITE, GTM0MCS02R5_t);
__IOREG(GTM0MCS02R6_BASE, 0xFFE30118, __READ_WRITE, GTM0MCS02R6_t);
__IOREG(GTM0MCS02R7_BASE, 0xFFE3011C, __READ_WRITE, GTM0MCS02R7_t);
__IOREG(GTM0MCS02CTRL_BASE, 0xFFE30120, __READ_WRITE, GTM0MCS02CTRL_t);
__IOREG(GTM0MCS02ACB_BASE, 0xFFE30124, __READ, GTM0MCS02ACB_t);
__IOREG(GTM0MCS02MHB_BASE, 0xFFE3013C, __READ, GTM0MCS02MHB_t);
__IOREG(GTM0MCS02PC_BASE, 0xFFE30140, __READ_WRITE, GTM0MCS02PC_t);
__IOREG(GTM0MCS02IRQNOTIFY_BASE, 0xFFE30144, __READ_WRITE, GTM0MCS02IRQNOTIFY_t);
__IOREG(GTM0MCS02IRQEN_BASE, 0xFFE30148, __READ_WRITE, GTM0MCS02IRQEN_t);
__IOREG(GTM0MCS02IRQFORCINT_BASE, 0xFFE3014C, __READ_WRITE, GTM0MCS02IRQFORCINT_t);
__IOREG(GTM0MCS02IRQMODE_BASE, 0xFFE30150, __READ_WRITE, GTM0MCS02IRQMODE_t);
__IOREG(GTM0MCS02EIRQEN_BASE, 0xFFE30154, __READ_WRITE, GTM0MCS02EIRQEN_t);
__IOREG(GTM0MCS03R0_BASE, 0xFFE30180, __READ_WRITE, GTM0MCS03R0_t);
__IOREG(GTM0MCS03R1_BASE, 0xFFE30184, __READ_WRITE, GTM0MCS03R1_t);
__IOREG(GTM0MCS03R2_BASE, 0xFFE30188, __READ_WRITE, GTM0MCS03R2_t);
__IOREG(GTM0MCS03R3_BASE, 0xFFE3018C, __READ_WRITE, GTM0MCS03R3_t);
__IOREG(GTM0MCS03R4_BASE, 0xFFE30190, __READ_WRITE, GTM0MCS03R4_t);
__IOREG(GTM0MCS03R5_BASE, 0xFFE30194, __READ_WRITE, GTM0MCS03R5_t);
__IOREG(GTM0MCS03R6_BASE, 0xFFE30198, __READ_WRITE, GTM0MCS03R6_t);
__IOREG(GTM0MCS03R7_BASE, 0xFFE3019C, __READ_WRITE, GTM0MCS03R7_t);
__IOREG(GTM0MCS03CTRL_BASE, 0xFFE301A0, __READ_WRITE, GTM0MCS03CTRL_t);
__IOREG(GTM0MCS03ACB_BASE, 0xFFE301A4, __READ, GTM0MCS03ACB_t);
__IOREG(GTM0MCS03MHB_BASE, 0xFFE301BC, __READ, GTM0MCS03MHB_t);
__IOREG(GTM0MCS03PC_BASE, 0xFFE301C0, __READ_WRITE, GTM0MCS03PC_t);
__IOREG(GTM0MCS03IRQNOTIFY_BASE, 0xFFE301C4, __READ_WRITE, GTM0MCS03IRQNOTIFY_t);
__IOREG(GTM0MCS03IRQEN_BASE, 0xFFE301C8, __READ_WRITE, GTM0MCS03IRQEN_t);
__IOREG(GTM0MCS03IRQFORCINT_BASE, 0xFFE301CC, __READ_WRITE, GTM0MCS03IRQFORCINT_t);
__IOREG(GTM0MCS03IRQMODE_BASE, 0xFFE301D0, __READ_WRITE, GTM0MCS03IRQMODE_t);
__IOREG(GTM0MCS03EIRQEN_BASE, 0xFFE301D4, __READ_WRITE, GTM0MCS03EIRQEN_t);
__IOREG(GTM0MCS04R0_BASE, 0xFFE30200, __READ_WRITE, GTM0MCS04R0_t);
__IOREG(GTM0MCS04R1_BASE, 0xFFE30204, __READ_WRITE, GTM0MCS04R1_t);
__IOREG(GTM0MCS04R2_BASE, 0xFFE30208, __READ_WRITE, GTM0MCS04R2_t);
__IOREG(GTM0MCS04R3_BASE, 0xFFE3020C, __READ_WRITE, GTM0MCS04R3_t);
__IOREG(GTM0MCS04R4_BASE, 0xFFE30210, __READ_WRITE, GTM0MCS04R4_t);
__IOREG(GTM0MCS04R5_BASE, 0xFFE30214, __READ_WRITE, GTM0MCS04R5_t);
__IOREG(GTM0MCS04R6_BASE, 0xFFE30218, __READ_WRITE, GTM0MCS04R6_t);
__IOREG(GTM0MCS04R7_BASE, 0xFFE3021C, __READ_WRITE, GTM0MCS04R7_t);
__IOREG(GTM0MCS04CTRL_BASE, 0xFFE30220, __READ_WRITE, GTM0MCS04CTRL_t);
__IOREG(GTM0MCS04ACB_BASE, 0xFFE30224, __READ, GTM0MCS04ACB_t);
__IOREG(GTM0MCS04MHB_BASE, 0xFFE3023C, __READ, GTM0MCS04MHB_t);
__IOREG(GTM0MCS04PC_BASE, 0xFFE30240, __READ_WRITE, GTM0MCS04PC_t);
__IOREG(GTM0MCS04IRQNOTIFY_BASE, 0xFFE30244, __READ_WRITE, GTM0MCS04IRQNOTIFY_t);
__IOREG(GTM0MCS04IRQEN_BASE, 0xFFE30248, __READ_WRITE, GTM0MCS04IRQEN_t);
__IOREG(GTM0MCS04IRQFORCINT_BASE, 0xFFE3024C, __READ_WRITE, GTM0MCS04IRQFORCINT_t);
__IOREG(GTM0MCS04IRQMODE_BASE, 0xFFE30250, __READ_WRITE, GTM0MCS04IRQMODE_t);
__IOREG(GTM0MCS04EIRQEN_BASE, 0xFFE30254, __READ_WRITE, GTM0MCS04EIRQEN_t);
__IOREG(GTM0MCS05R0_BASE, 0xFFE30280, __READ_WRITE, GTM0MCS05R0_t);
__IOREG(GTM0MCS05R1_BASE, 0xFFE30284, __READ_WRITE, GTM0MCS05R1_t);
__IOREG(GTM0MCS05R2_BASE, 0xFFE30288, __READ_WRITE, GTM0MCS05R2_t);
__IOREG(GTM0MCS05R3_BASE, 0xFFE3028C, __READ_WRITE, GTM0MCS05R3_t);
__IOREG(GTM0MCS05R4_BASE, 0xFFE30290, __READ_WRITE, GTM0MCS05R4_t);
__IOREG(GTM0MCS05R5_BASE, 0xFFE30294, __READ_WRITE, GTM0MCS05R5_t);
__IOREG(GTM0MCS05R6_BASE, 0xFFE30298, __READ_WRITE, GTM0MCS05R6_t);
__IOREG(GTM0MCS05R7_BASE, 0xFFE3029C, __READ_WRITE, GTM0MCS05R7_t);
__IOREG(GTM0MCS05CTRL_BASE, 0xFFE302A0, __READ_WRITE, GTM0MCS05CTRL_t);
__IOREG(GTM0MCS05ACB_BASE, 0xFFE302A4, __READ, GTM0MCS05ACB_t);
__IOREG(GTM0MCS05MHB_BASE, 0xFFE302BC, __READ, GTM0MCS05MHB_t);
__IOREG(GTM0MCS05PC_BASE, 0xFFE302C0, __READ_WRITE, GTM0MCS05PC_t);
__IOREG(GTM0MCS05IRQNOTIFY_BASE, 0xFFE302C4, __READ_WRITE, GTM0MCS05IRQNOTIFY_t);
__IOREG(GTM0MCS05IRQEN_BASE, 0xFFE302C8, __READ_WRITE, GTM0MCS05IRQEN_t);
__IOREG(GTM0MCS05IRQFORCINT_BASE, 0xFFE302CC, __READ_WRITE, GTM0MCS05IRQFORCINT_t);
__IOREG(GTM0MCS05IRQMODE_BASE, 0xFFE302D0, __READ_WRITE, GTM0MCS05IRQMODE_t);
__IOREG(GTM0MCS05EIRQEN_BASE, 0xFFE302D4, __READ_WRITE, GTM0MCS05EIRQEN_t);
__IOREG(GTM0MCS06R0_BASE, 0xFFE30300, __READ_WRITE, GTM0MCS06R0_t);
__IOREG(GTM0MCS06R1_BASE, 0xFFE30304, __READ_WRITE, GTM0MCS06R1_t);
__IOREG(GTM0MCS06R2_BASE, 0xFFE30308, __READ_WRITE, GTM0MCS06R2_t);
__IOREG(GTM0MCS06R3_BASE, 0xFFE3030C, __READ_WRITE, GTM0MCS06R3_t);
__IOREG(GTM0MCS06R4_BASE, 0xFFE30310, __READ_WRITE, GTM0MCS06R4_t);
__IOREG(GTM0MCS06R5_BASE, 0xFFE30314, __READ_WRITE, GTM0MCS06R5_t);
__IOREG(GTM0MCS06R6_BASE, 0xFFE30318, __READ_WRITE, GTM0MCS06R6_t);
__IOREG(GTM0MCS06R7_BASE, 0xFFE3031C, __READ_WRITE, GTM0MCS06R7_t);
__IOREG(GTM0MCS06CTRL_BASE, 0xFFE30320, __READ_WRITE, GTM0MCS06CTRL_t);
__IOREG(GTM0MCS06ACB_BASE, 0xFFE30324, __READ, GTM0MCS06ACB_t);
__IOREG(GTM0MCS06MHB_BASE, 0xFFE3033C, __READ, GTM0MCS06MHB_t);
__IOREG(GTM0MCS06PC_BASE, 0xFFE30340, __READ_WRITE, GTM0MCS06PC_t);
__IOREG(GTM0MCS06IRQNOTIFY_BASE, 0xFFE30344, __READ_WRITE, GTM0MCS06IRQNOTIFY_t);
__IOREG(GTM0MCS06IRQEN_BASE, 0xFFE30348, __READ_WRITE, GTM0MCS06IRQEN_t);
__IOREG(GTM0MCS06IRQFORCINT_BASE, 0xFFE3034C, __READ_WRITE, GTM0MCS06IRQFORCINT_t);
__IOREG(GTM0MCS06IRQMODE_BASE, 0xFFE30350, __READ_WRITE, GTM0MCS06IRQMODE_t);
__IOREG(GTM0MCS06EIRQEN_BASE, 0xFFE30354, __READ_WRITE, GTM0MCS06EIRQEN_t);
__IOREG(GTM0MCS07R0_BASE, 0xFFE30380, __READ_WRITE, GTM0MCS07R0_t);
__IOREG(GTM0MCS07R1_BASE, 0xFFE30384, __READ_WRITE, GTM0MCS07R1_t);
__IOREG(GTM0MCS07R2_BASE, 0xFFE30388, __READ_WRITE, GTM0MCS07R2_t);
__IOREG(GTM0MCS07R3_BASE, 0xFFE3038C, __READ_WRITE, GTM0MCS07R3_t);
__IOREG(GTM0MCS07R4_BASE, 0xFFE30390, __READ_WRITE, GTM0MCS07R4_t);
__IOREG(GTM0MCS07R5_BASE, 0xFFE30394, __READ_WRITE, GTM0MCS07R5_t);
__IOREG(GTM0MCS07R6_BASE, 0xFFE30398, __READ_WRITE, GTM0MCS07R6_t);
__IOREG(GTM0MCS07R7_BASE, 0xFFE3039C, __READ_WRITE, GTM0MCS07R7_t);
__IOREG(GTM0MCS07CTRL_BASE, 0xFFE303A0, __READ_WRITE, GTM0MCS07CTRL_t);
__IOREG(GTM0MCS07ACB_BASE, 0xFFE303A4, __READ, GTM0MCS07ACB_t);
__IOREG(GTM0MCS07MHB_BASE, 0xFFE303BC, __READ, GTM0MCS07MHB_t);
__IOREG(GTM0MCS07PC_BASE, 0xFFE303C0, __READ_WRITE, GTM0MCS07PC_t);
__IOREG(GTM0MCS07IRQNOTIFY_BASE, 0xFFE303C4, __READ_WRITE, GTM0MCS07IRQNOTIFY_t);
__IOREG(GTM0MCS07IRQEN_BASE, 0xFFE303C8, __READ_WRITE, GTM0MCS07IRQEN_t);
__IOREG(GTM0MCS07IRQFORCINT_BASE, 0xFFE303CC, __READ_WRITE, GTM0MCS07IRQFORCINT_t);
__IOREG(GTM0MCS07IRQMODE_BASE, 0xFFE303D0, __READ_WRITE, GTM0MCS07IRQMODE_t);
__IOREG(GTM0MCS07EIRQEN_BASE, 0xFFE303D4, __READ_WRITE, GTM0MCS07EIRQEN_t);
__IOREG(GTM0MCS08R0_BASE, 0xFFE30400, __READ_WRITE, GTM0MCS08R0_t);
__IOREG(GTM0MCS08R1_BASE, 0xFFE30404, __READ_WRITE, GTM0MCS08R1_t);
__IOREG(GTM0MCS08R2_BASE, 0xFFE30408, __READ_WRITE, GTM0MCS08R2_t);
__IOREG(GTM0MCS08R3_BASE, 0xFFE3040C, __READ_WRITE, GTM0MCS08R3_t);
__IOREG(GTM0MCS08R4_BASE, 0xFFE30410, __READ_WRITE, GTM0MCS08R4_t);
__IOREG(GTM0MCS08R5_BASE, 0xFFE30414, __READ_WRITE, GTM0MCS08R5_t);
__IOREG(GTM0MCS08R6_BASE, 0xFFE30418, __READ_WRITE, GTM0MCS08R6_t);
__IOREG(GTM0MCS08R7_BASE, 0xFFE3041C, __READ_WRITE, GTM0MCS08R7_t);
__IOREG(GTM0MCS08CTRL_BASE, 0xFFE30420, __READ_WRITE, GTM0MCS08CTRL_t);
__IOREG(GTM0MCS08ACB_BASE, 0xFFE30424, __READ, GTM0MCS08ACB_t);
__IOREG(GTM0MCS08MHB_BASE, 0xFFE3043C, __READ, GTM0MCS08MHB_t);
__IOREG(GTM0MCS08PC_BASE, 0xFFE30440, __READ_WRITE, GTM0MCS08PC_t);
__IOREG(GTM0MCS08IRQNOTIFY_BASE, 0xFFE30444, __READ_WRITE, GTM0MCS08IRQNOTIFY_t);
__IOREG(GTM0MCS08IRQEN_BASE, 0xFFE30448, __READ_WRITE, GTM0MCS08IRQEN_t);
__IOREG(GTM0MCS08IRQFORCINT_BASE, 0xFFE3044C, __READ_WRITE, GTM0MCS08IRQFORCINT_t);
__IOREG(GTM0MCS08IRQMODE_BASE, 0xFFE30450, __READ_WRITE, GTM0MCS08IRQMODE_t);
__IOREG(GTM0MCS08EIRQEN_BASE, 0xFFE30454, __READ_WRITE, GTM0MCS08EIRQEN_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define GTM0GTMREV GTM0GTMREV_BASE.UINT32
#define GTM0GTMREV_STEP GTM0GTMREV_BASE.BIT._STEP
#define GTM0GTMREV_NO GTM0GTMREV_BASE.BIT._NO
#define GTM0GTMREV_MINOR GTM0GTMREV_BASE.BIT._MINOR
#define GTM0GTMREV_MAJOR GTM0GTMREV_BASE.BIT._MAJOR
#define GTM0GTMREV_DEV_CODE0 GTM0GTMREV_BASE.BIT._DEV_CODE0
#define GTM0GTMREV_DEV_CODE1 GTM0GTMREV_BASE.BIT._DEV_CODE1
#define GTM0GTMREV_DEV_CODE2 GTM0GTMREV_BASE.BIT._DEV_CODE2
#define GTM0GTMRST GTM0GTMRST_BASE.UINT32
#define GTM0GTMRST_RST GTM0GTMRST_BASE.BIT._RST
#define GTM0GTMCTRL GTM0GTMCTRL_BASE.UINT32
#define GTM0GTMCTRL_RF_PROT GTM0GTMCTRL_BASE.BIT._RF_PROT
#define GTM0GTMCTRL_TO_MODE GTM0GTMCTRL_BASE.BIT._TO_MODE
#define GTM0GTMCTRL_TO_VAL GTM0GTMCTRL_BASE.BIT._TO_VAL
#define GTM0GTMAEIADDRXPT GTM0GTMAEIADDRXPT_BASE.UINT32
#define GTM0GTMAEIADDRXPT_TO_ADDR GTM0GTMAEIADDRXPT_BASE.BIT._TO_ADDR
#define GTM0GTMAEIADDRXPT_TO_W1R0 GTM0GTMAEIADDRXPT_BASE.BIT._TO_W1R0
#define GTM0GTMIRQNOTIFY GTM0GTMIRQNOTIFY_BASE.UINT32
#define GTM0GTMIRQNOTIFY_AEI_TO_XPT GTM0GTMIRQNOTIFY_BASE.BIT._AEI_TO_XPT
#define GTM0GTMIRQNOTIFY_AEI_USP_ADDR GTM0GTMIRQNOTIFY_BASE.BIT._AEI_USP_ADDR
#define GTM0GTMIRQNOTIFY_AEI_IM_ADDR GTM0GTMIRQNOTIFY_BASE.BIT._AEI_IM_ADDR
#define GTM0GTMIRQNOTIFY_AEI_USP_BE GTM0GTMIRQNOTIFY_BASE.BIT._AEI_USP_BE
#define GTM0GTMIRQEN GTM0GTMIRQEN_BASE.UINT32
#define GTM0GTMIRQEN_AEI_TO_XPT_IRQ_EN GTM0GTMIRQEN_BASE.BIT._AEI_TO_XPT_IRQ_EN
#define GTM0GTMIRQEN_AEI_USP_ADDR_IRQ_EN GTM0GTMIRQEN_BASE.BIT._AEI_USP_ADDR_IRQ_EN
#define GTM0GTMIRQEN_AEI_IM_ADDR_IRQ_EN GTM0GTMIRQEN_BASE.BIT._AEI_IM_ADDR_IRQ_EN
#define GTM0GTMIRQEN_AEI_USP_BE_IRQ_EN GTM0GTMIRQEN_BASE.BIT._AEI_USP_BE_IRQ_EN
#define GTM0GTMIRQFORCINT GTM0GTMIRQFORCINT_BASE.UINT32
#define GTM0GTMIRQFORCINT_TRG_AEI_TO_XPT GTM0GTMIRQFORCINT_BASE.BIT._TRG_AEI_TO_XPT
#define GTM0GTMIRQFORCINT_TRG_AEI_USP_ADDR GTM0GTMIRQFORCINT_BASE.BIT._TRG_AEI_USP_ADDR
#define GTM0GTMIRQFORCINT_TRG_AEI_IM_ADDR GTM0GTMIRQFORCINT_BASE.BIT._TRG_AEI_IM_ADDR
#define GTM0GTMIRQFORCINT_TRG_AEI_USP_BE GTM0GTMIRQFORCINT_BASE.BIT._TRG_AEI_USP_BE
#define GTM0GTMIRQMODE GTM0GTMIRQMODE_BASE.UINT32
#define GTM0GTMIRQMODE_IRQ_MODE GTM0GTMIRQMODE_BASE.BIT._IRQ_MODE
#define GTM0GTMEIRQEN GTM0GTMEIRQEN_BASE.UINT32
#define GTM0GTMEIRQEN_AEI_TO_XPT_EIRQ_EN GTM0GTMEIRQEN_BASE.BIT._AEI_TO_XPT_EIRQ_EN
#define GTM0GTMEIRQEN_AEI_USP_ADDR_EIRQ_EN GTM0GTMEIRQEN_BASE.BIT._AEI_USP_ADDR_EIRQ_EN
#define GTM0GTMEIRQEN_AEI_IM_ADDR_EIRQ_EN GTM0GTMEIRQEN_BASE.BIT._AEI_IM_ADDR_EIRQ_EN
#define GTM0GTMEIRQEN_AEI_USP_BE_EIRQ_EN GTM0GTMEIRQEN_BASE.BIT._AEI_USP_BE_EIRQ_EN
#define GTM0GTMHWCONF GTM0GTMHWCONF_BASE.UINT32
#define GTM0GTMHWCONF_GRSTEN GTM0GTMHWCONF_BASE.BIT._GRSTEN
#define GTM0GTMHWCONF_BRIDGE_MODE_RST GTM0GTMHWCONF_BASE.BIT._BRIDGE_MODE_RST
#define GTM0GTMHWCONF_SYNC_INPUT_REG GTM0GTMHWCONF_BASE.BIT._SYNC_INPUT_REG
#define GTM0GTMHWCONF_ATOM_OUT_RST GTM0GTMHWCONF_BASE.BIT._ATOM_OUT_RST
#define GTM0GTMHWCONF_ATOM_TRIG_CHAIN GTM0GTMHWCONF_BASE.BIT._ATOM_TRIG_CHAIN
#define GTM0GTMHWCONF_RAM_INIT_RST GTM0GTMHWCONF_BASE.BIT._RAM_INIT_RST
#define GTM0GTMHWCONF_ERM GTM0GTMHWCONF_BASE.BIT._ERM
#define GTM0GTMHWCONF_ARU_CONNECT_CONFIG GTM0GTMHWCONF_BASE.BIT._ARU_CONNECT_CONFIG
#define GTM0GTMHWCONF_IRQ_MODE_LEVEL GTM0GTMHWCONF_BASE.BIT._IRQ_MODE_LEVEL
#define GTM0GTMHWCONF_IRQ_MODE_PULSE GTM0GTMHWCONF_BASE.BIT._IRQ_MODE_PULSE
#define GTM0GTMHWCONF_IRQ_MODE_PULSE_NOTIFY GTM0GTMHWCONF_BASE.BIT._IRQ_MODE_PULSE_NOTIFY
#define GTM0GTMHWCONF_IRQ_MODE_SINGLE_PULSE GTM0GTMHWCONF_BASE.BIT._IRQ_MODE_SINGLE_PULSE
#define GTM0GTMBRIDGEMODE GTM0GTMBRIDGEMODE_BASE.UINT32
#define GTM0GTMBRIDGEMODE_BRG_MODE GTM0GTMBRIDGEMODE_BASE.BIT._BRG_MODE
#define GTM0GTMBRIDGEMODE_MSK_WR_RSP GTM0GTMBRIDGEMODE_BASE.BIT._MSK_WR_RSP
#define GTM0GTMBRIDGEMODE_MODE_UP_PGR GTM0GTMBRIDGEMODE_BASE.BIT._MODE_UP_PGR
#define GTM0GTMBRIDGEMODE_BUFF_OVL GTM0GTMBRIDGEMODE_BASE.BIT._BUFF_OVL
#define GTM0GTMBRIDGEMODE_SYNC_INPUT_REG GTM0GTMBRIDGEMODE_BASE.BIT._SYNC_INPUT_REG
#define GTM0GTMBRIDGEMODE_BRG_RST GTM0GTMBRIDGEMODE_BASE.BIT._BRG_RST
#define GTM0GTMBRIDGEMODE_BUFF_DPT GTM0GTMBRIDGEMODE_BASE.BIT._BUFF_DPT
#define GTM0GTMBRIDGEPTR1 GTM0GTMBRIDGEPTR1_BASE.UINT32
#define GTM0GTMBRIDGEPTR1_NEW_TRAN_PTR GTM0GTMBRIDGEPTR1_BASE.BIT._NEW_TRAN_PTR
#define GTM0GTMBRIDGEPTR1_FIRST_RSP_PTR GTM0GTMBRIDGEPTR1_BASE.BIT._FIRST_RSP_PTR
#define GTM0GTMBRIDGEPTR1_TRAN_IN_PGR GTM0GTMBRIDGEPTR1_BASE.BIT._TRAN_IN_PGR
#define GTM0GTMBRIDGEPTR1_ABT_TRAN_PGR GTM0GTMBRIDGEPTR1_BASE.BIT._ABT_TRAN_PGR
#define GTM0GTMBRIDGEPTR1_FBC GTM0GTMBRIDGEPTR1_BASE.BIT._FBC
#define GTM0GTMBRIDGEPTR1_RSP_TRAN_RDY GTM0GTMBRIDGEPTR1_BASE.BIT._RSP_TRAN_RDY
#define GTM0GTMBRIDGEPTR2 GTM0GTMBRIDGEPTR2_BASE.UINT32
#define GTM0GTMBRIDGEPTR2_TRAN_IN_PGR2 GTM0GTMBRIDGEPTR2_BASE.BIT._TRAN_IN_PGR2
#define GTM0GTMTIM0AUXINSRC GTM0GTMTIM0AUXINSRC_BASE.UINT32
#define GTM0GTMTIM0AUXINSRC_SRC_CH0 GTM0GTMTIM0AUXINSRC_BASE.BIT._SRC_CH0
#define GTM0GTMTIM0AUXINSRC_SRC_CH1 GTM0GTMTIM0AUXINSRC_BASE.BIT._SRC_CH1
#define GTM0GTMTIM0AUXINSRC_SRC_CH2 GTM0GTMTIM0AUXINSRC_BASE.BIT._SRC_CH2
#define GTM0GTMTIM0AUXINSRC_SRC_CH3 GTM0GTMTIM0AUXINSRC_BASE.BIT._SRC_CH3
#define GTM0GTMTIM0AUXINSRC_SRC_CH4 GTM0GTMTIM0AUXINSRC_BASE.BIT._SRC_CH4
#define GTM0GTMTIM0AUXINSRC_SRC_CH5 GTM0GTMTIM0AUXINSRC_BASE.BIT._SRC_CH5
#define GTM0GTMTIM0AUXINSRC_SRC_CH6 GTM0GTMTIM0AUXINSRC_BASE.BIT._SRC_CH6
#define GTM0GTMTIM0AUXINSRC_SRC_CH7 GTM0GTMTIM0AUXINSRC_BASE.BIT._SRC_CH7
#define GTM0GTMTIM1AUXINSRC GTM0GTMTIM1AUXINSRC_BASE.UINT32
#define GTM0GTMTIM1AUXINSRC_SRC_CH0 GTM0GTMTIM1AUXINSRC_BASE.BIT._SRC_CH0
#define GTM0GTMTIM1AUXINSRC_SRC_CH1 GTM0GTMTIM1AUXINSRC_BASE.BIT._SRC_CH1
#define GTM0GTMTIM1AUXINSRC_SRC_CH2 GTM0GTMTIM1AUXINSRC_BASE.BIT._SRC_CH2
#define GTM0GTMTIM1AUXINSRC_SRC_CH3 GTM0GTMTIM1AUXINSRC_BASE.BIT._SRC_CH3
#define GTM0GTMTIM1AUXINSRC_SRC_CH4 GTM0GTMTIM1AUXINSRC_BASE.BIT._SRC_CH4
#define GTM0GTMTIM1AUXINSRC_SRC_CH5 GTM0GTMTIM1AUXINSRC_BASE.BIT._SRC_CH5
#define GTM0GTMTIM1AUXINSRC_SRC_CH6 GTM0GTMTIM1AUXINSRC_BASE.BIT._SRC_CH6
#define GTM0GTMTIM1AUXINSRC_SRC_CH7 GTM0GTMTIM1AUXINSRC_BASE.BIT._SRC_CH7
#define GTM0GTMEXTCAPEN0 GTM0GTMEXTCAPEN0_BASE.UINT32
#define GTM0GTMEXTCAPEN0_TIM_I_EXT_CAP_EN GTM0GTMEXTCAPEN0_BASE.BIT._TIM_I_EXT_CAP_EN
#define GTM0GTMEXTCAPEN0_TIM_IP1_EXT_CAP_EN GTM0GTMEXTCAPEN0_BASE.BIT._TIM_IP1_EXT_CAP_EN
#define GTM0GTMATOM0OUT GTM0GTMATOM0OUT_BASE.UINT32
#define GTM0GTMATOM0OUT_ATOM_I_OUT GTM0GTMATOM0OUT_BASE.BIT._ATOM_I_OUT
#define GTM0GTMATOM0OUT_ATOM_I_OUT_N GTM0GTMATOM0OUT_BASE.BIT._ATOM_I_OUT_N
#define GTM0GTMATOM0OUT_ATOM_IP1_OUT GTM0GTMATOM0OUT_BASE.BIT._ATOM_IP1_OUT
#define GTM0GTMATOM0OUT_ATOM_IP1_OUT_N GTM0GTMATOM0OUT_BASE.BIT._ATOM_IP1_OUT_N
#define GTM0TBUCHEN GTM0TBUCHEN_BASE.UINT32
#define GTM0TBUCHEN_ENDIS_CH0 GTM0TBUCHEN_BASE.BIT._ENDIS_CH0
#define GTM0TBUCHEN_ENDIS_CH1 GTM0TBUCHEN_BASE.BIT._ENDIS_CH1
#define GTM0TBUCHEN_ENDIS_CH2 GTM0TBUCHEN_BASE.BIT._ENDIS_CH2
#define GTM0TBU0CTRL GTM0TBU0CTRL_BASE.UINT32
#define GTM0TBU0CTRL_LOW_RES GTM0TBU0CTRL_BASE.BIT._LOW_RES
#define GTM0TBU0CTRL_CH_CLK_SRC GTM0TBU0CTRL_BASE.BIT._CH_CLK_SRC
#define GTM0TBU0BASE GTM0TBU0BASE_BASE.UINT32
#define GTM0TBU0BASE_BASE GTM0TBU0BASE_BASE.BIT._BASE
#define GTM0TBU1CTRL GTM0TBU1CTRL_BASE.UINT32
#define GTM0TBU1CTRL_CH_CLK_SRC GTM0TBU1CTRL_BASE.BIT._CH_CLK_SRC
#define GTM0TBU1BASE GTM0TBU1BASE_BASE.UINT32
#define GTM0TBU1BASE_BASE GTM0TBU1BASE_BASE.BIT._BASE
#define GTM0MONSTATUS GTM0MONSTATUS_BASE.UINT32
#define GTM0MONSTATUS_ACT_CMU0 GTM0MONSTATUS_BASE.BIT._ACT_CMU0
#define GTM0MONSTATUS_ACT_CMU1 GTM0MONSTATUS_BASE.BIT._ACT_CMU1
#define GTM0MONSTATUS_ACT_CMU2 GTM0MONSTATUS_BASE.BIT._ACT_CMU2
#define GTM0MONSTATUS_ACT_CMU3 GTM0MONSTATUS_BASE.BIT._ACT_CMU3
#define GTM0MONSTATUS_ACT_CMU4 GTM0MONSTATUS_BASE.BIT._ACT_CMU4
#define GTM0MONSTATUS_ACT_CMU5 GTM0MONSTATUS_BASE.BIT._ACT_CMU5
#define GTM0MONSTATUS_ACT_CMU6 GTM0MONSTATUS_BASE.BIT._ACT_CMU6
#define GTM0MONSTATUS_ACT_CMU7 GTM0MONSTATUS_BASE.BIT._ACT_CMU7
#define GTM0MONSTATUS_CMP_ERR GTM0MONSTATUS_BASE.BIT._CMP_ERR
#define GTM0MONSTATUS_MCS0_ERR GTM0MONSTATUS_BASE.BIT._MCS0_ERR
#define GTM0MONSTATUS_MCS1_ERR GTM0MONSTATUS_BASE.BIT._MCS1_ERR
#define GTM0MONSTATUS_MCS2_ERR GTM0MONSTATUS_BASE.BIT._MCS2_ERR
#define GTM0MONSTATUS_MCS3_ERR GTM0MONSTATUS_BASE.BIT._MCS3_ERR
#define GTM0MONSTATUS_MCS4_ERR GTM0MONSTATUS_BASE.BIT._MCS4_ERR
#define GTM0MONSTATUS_MCS5_ERR GTM0MONSTATUS_BASE.BIT._MCS5_ERR
#define GTM0MONSTATUS_MCS6_ERR GTM0MONSTATUS_BASE.BIT._MCS6_ERR
#define GTM0MONACTIVITY0 GTM0MONACTIVITY0_BASE.UINT32
#define GTM0MONACTIVITY0_MCA_0_0 GTM0MONACTIVITY0_BASE.BIT._MCA_0_0
#define GTM0MONACTIVITY0_MCA_0_1 GTM0MONACTIVITY0_BASE.BIT._MCA_0_1
#define GTM0MONACTIVITY0_MCA_0_2 GTM0MONACTIVITY0_BASE.BIT._MCA_0_2
#define GTM0MONACTIVITY0_MCA_0_3 GTM0MONACTIVITY0_BASE.BIT._MCA_0_3
#define GTM0MONACTIVITY0_MCA_0_4 GTM0MONACTIVITY0_BASE.BIT._MCA_0_4
#define GTM0MONACTIVITY0_MCA_0_5 GTM0MONACTIVITY0_BASE.BIT._MCA_0_5
#define GTM0MONACTIVITY0_MCA_0_6 GTM0MONACTIVITY0_BASE.BIT._MCA_0_6
#define GTM0MONACTIVITY0_MCA_0_7 GTM0MONACTIVITY0_BASE.BIT._MCA_0_7
#define GTM0MONACTIVITY0_MCA_1_0 GTM0MONACTIVITY0_BASE.BIT._MCA_1_0
#define GTM0MONACTIVITY0_MCA_1_1 GTM0MONACTIVITY0_BASE.BIT._MCA_1_1
#define GTM0MONACTIVITY0_MCA_1_2 GTM0MONACTIVITY0_BASE.BIT._MCA_1_2
#define GTM0MONACTIVITY0_MCA_1_3 GTM0MONACTIVITY0_BASE.BIT._MCA_1_3
#define GTM0MONACTIVITY0_MCA_1_4 GTM0MONACTIVITY0_BASE.BIT._MCA_1_4
#define GTM0MONACTIVITY0_MCA_1_5 GTM0MONACTIVITY0_BASE.BIT._MCA_1_5
#define GTM0MONACTIVITY0_MCA_1_6 GTM0MONACTIVITY0_BASE.BIT._MCA_1_6
#define GTM0MONACTIVITY0_MCA_1_7 GTM0MONACTIVITY0_BASE.BIT._MCA_1_7
#define GTM0MONACTIVITY0_MCA_2_0 GTM0MONACTIVITY0_BASE.BIT._MCA_2_0
#define GTM0MONACTIVITY0_MCA_2_1 GTM0MONACTIVITY0_BASE.BIT._MCA_2_1
#define GTM0MONACTIVITY0_MCA_2_2 GTM0MONACTIVITY0_BASE.BIT._MCA_2_2
#define GTM0MONACTIVITY0_MCA_2_3 GTM0MONACTIVITY0_BASE.BIT._MCA_2_3
#define GTM0MONACTIVITY0_MCA_2_4 GTM0MONACTIVITY0_BASE.BIT._MCA_2_4
#define GTM0MONACTIVITY0_MCA_2_5 GTM0MONACTIVITY0_BASE.BIT._MCA_2_5
#define GTM0MONACTIVITY0_MCA_2_6 GTM0MONACTIVITY0_BASE.BIT._MCA_2_6
#define GTM0MONACTIVITY0_MCA_2_7 GTM0MONACTIVITY0_BASE.BIT._MCA_2_7
#define GTM0MONACTIVITY0_MCA_3_0 GTM0MONACTIVITY0_BASE.BIT._MCA_3_0
#define GTM0MONACTIVITY0_MCA_3_1 GTM0MONACTIVITY0_BASE.BIT._MCA_3_1
#define GTM0MONACTIVITY0_MCA_3_2 GTM0MONACTIVITY0_BASE.BIT._MCA_3_2
#define GTM0MONACTIVITY0_MCA_3_3 GTM0MONACTIVITY0_BASE.BIT._MCA_3_3
#define GTM0MONACTIVITY0_MCA_3_4 GTM0MONACTIVITY0_BASE.BIT._MCA_3_4
#define GTM0MONACTIVITY0_MCA_3_5 GTM0MONACTIVITY0_BASE.BIT._MCA_3_5
#define GTM0MONACTIVITY0_MCA_3_6 GTM0MONACTIVITY0_BASE.BIT._MCA_3_6
#define GTM0MONACTIVITY0_MCA_3_7 GTM0MONACTIVITY0_BASE.BIT._MCA_3_7
#define GTM0MONACTIVITYMCS0 GTM0MONACTIVITYMCS0_BASE.UINT32
#define GTM0MONACTIVITYMCS0_MCA_0 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_0
#define GTM0MONACTIVITYMCS0_MCA_1 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_1
#define GTM0MONACTIVITYMCS0_MCA_2 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_2
#define GTM0MONACTIVITYMCS0_MCA_3 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_3
#define GTM0MONACTIVITYMCS0_MCA_4 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_4
#define GTM0MONACTIVITYMCS0_MCA_5 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_5
#define GTM0MONACTIVITYMCS0_MCA_6 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_6
#define GTM0MONACTIVITYMCS0_MCA_7 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_7
#define GTM0MONACTIVITYMCS0_MCA_8 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_8
#define GTM0MONACTIVITYMCS0_MCA_9 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_9
#define GTM0MONACTIVITYMCS0_MCA_10 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_10
#define GTM0MONACTIVITYMCS0_MCA_11 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_11
#define GTM0MONACTIVITYMCS0_MCA_12 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_12
#define GTM0MONACTIVITYMCS0_MCA_13 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_13
#define GTM0MONACTIVITYMCS0_MCA_14 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_14
#define GTM0MONACTIVITYMCS0_MCA_15 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_15
#define GTM0MONACTIVITYMCS0_MCA_16 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_16
#define GTM0MONACTIVITYMCS0_MCA_17 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_17
#define GTM0MONACTIVITYMCS0_MCA_18 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_18
#define GTM0MONACTIVITYMCS0_MCA_19 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_19
#define GTM0MONACTIVITYMCS0_MCA_20 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_20
#define GTM0MONACTIVITYMCS0_MCA_21 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_21
#define GTM0MONACTIVITYMCS0_MCA_22 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_22
#define GTM0MONACTIVITYMCS0_MCA_23 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_23
#define GTM0MONACTIVITYMCS0_MCA_24 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_24
#define GTM0MONACTIVITYMCS0_MCA_25 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_25
#define GTM0MONACTIVITYMCS0_MCA_26 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_26
#define GTM0MONACTIVITYMCS0_MCA_27 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_27
#define GTM0MONACTIVITYMCS0_MCA_28 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_28
#define GTM0MONACTIVITYMCS0_MCA_29 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_29
#define GTM0MONACTIVITYMCS0_MCA_30 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_30
#define GTM0MONACTIVITYMCS0_MCA_31 GTM0MONACTIVITYMCS0_BASE.BIT._MCA_31
#define GTM0CMPEN GTM0CMPEN_BASE.UINT32
#define GTM0CMPEN_ABWC0_EN GTM0CMPEN_BASE.BIT._ABWC0_EN
#define GTM0CMPEN_ABWC1_EN GTM0CMPEN_BASE.BIT._ABWC1_EN
#define GTM0CMPEN_ABWC2_EN GTM0CMPEN_BASE.BIT._ABWC2_EN
#define GTM0CMPEN_ABWC3_EN GTM0CMPEN_BASE.BIT._ABWC3_EN
#define GTM0CMPEN_ABWC4_EN GTM0CMPEN_BASE.BIT._ABWC4_EN
#define GTM0CMPEN_ABWC5_EN GTM0CMPEN_BASE.BIT._ABWC5_EN
#define GTM0CMPEN_ABWC6_EN GTM0CMPEN_BASE.BIT._ABWC6_EN
#define GTM0CMPEN_ABWC7_EN GTM0CMPEN_BASE.BIT._ABWC7_EN
#define GTM0CMPEN_ABWC8_EN GTM0CMPEN_BASE.BIT._ABWC8_EN
#define GTM0CMPEN_ABWC9_EN GTM0CMPEN_BASE.BIT._ABWC9_EN
#define GTM0CMPEN_ABWC10_EN GTM0CMPEN_BASE.BIT._ABWC10_EN
#define GTM0CMPEN_ABWC11_EN GTM0CMPEN_BASE.BIT._ABWC11_EN
#define GTM0CMPEN_TBWC0_EN GTM0CMPEN_BASE.BIT._TBWC0_EN
#define GTM0CMPEN_TBWC1_EN GTM0CMPEN_BASE.BIT._TBWC1_EN
#define GTM0CMPEN_TBWC2_EN GTM0CMPEN_BASE.BIT._TBWC2_EN
#define GTM0CMPEN_TBWC3_EN GTM0CMPEN_BASE.BIT._TBWC3_EN
#define GTM0CMPEN_TBWC4_EN GTM0CMPEN_BASE.BIT._TBWC4_EN
#define GTM0CMPEN_TBWC5_EN GTM0CMPEN_BASE.BIT._TBWC5_EN
#define GTM0CMPEN_TBWC6_EN GTM0CMPEN_BASE.BIT._TBWC6_EN
#define GTM0CMPEN_TBWC7_EN GTM0CMPEN_BASE.BIT._TBWC7_EN
#define GTM0CMPEN_TBWC8_EN GTM0CMPEN_BASE.BIT._TBWC8_EN
#define GTM0CMPEN_TBWC9_EN GTM0CMPEN_BASE.BIT._TBWC9_EN
#define GTM0CMPEN_TBWC10_EN GTM0CMPEN_BASE.BIT._TBWC10_EN
#define GTM0CMPEN_TBWC11_EN GTM0CMPEN_BASE.BIT._TBWC11_EN
#define GTM0CMPIRQNOTIFY GTM0CMPIRQNOTIFY_BASE.UINT32
#define GTM0CMPIRQNOTIFY_ABWC0 GTM0CMPIRQNOTIFY_BASE.BIT._ABWC0
#define GTM0CMPIRQNOTIFY_ABWC1 GTM0CMPIRQNOTIFY_BASE.BIT._ABWC1
#define GTM0CMPIRQNOTIFY_ABWC2 GTM0CMPIRQNOTIFY_BASE.BIT._ABWC2
#define GTM0CMPIRQNOTIFY_ABWC3 GTM0CMPIRQNOTIFY_BASE.BIT._ABWC3
#define GTM0CMPIRQNOTIFY_ABWC4 GTM0CMPIRQNOTIFY_BASE.BIT._ABWC4
#define GTM0CMPIRQNOTIFY_ABWC5 GTM0CMPIRQNOTIFY_BASE.BIT._ABWC5
#define GTM0CMPIRQNOTIFY_ABWC6 GTM0CMPIRQNOTIFY_BASE.BIT._ABWC6
#define GTM0CMPIRQNOTIFY_ABWC7 GTM0CMPIRQNOTIFY_BASE.BIT._ABWC7
#define GTM0CMPIRQNOTIFY_ABWC8 GTM0CMPIRQNOTIFY_BASE.BIT._ABWC8
#define GTM0CMPIRQNOTIFY_ABWC9 GTM0CMPIRQNOTIFY_BASE.BIT._ABWC9
#define GTM0CMPIRQNOTIFY_ABWC10 GTM0CMPIRQNOTIFY_BASE.BIT._ABWC10
#define GTM0CMPIRQNOTIFY_ABWC11 GTM0CMPIRQNOTIFY_BASE.BIT._ABWC11
#define GTM0CMPIRQNOTIFY_TBWC0 GTM0CMPIRQNOTIFY_BASE.BIT._TBWC0
#define GTM0CMPIRQNOTIFY_TBWC1 GTM0CMPIRQNOTIFY_BASE.BIT._TBWC1
#define GTM0CMPIRQNOTIFY_TBWC2 GTM0CMPIRQNOTIFY_BASE.BIT._TBWC2
#define GTM0CMPIRQNOTIFY_TBWC3 GTM0CMPIRQNOTIFY_BASE.BIT._TBWC3
#define GTM0CMPIRQNOTIFY_TBWC4 GTM0CMPIRQNOTIFY_BASE.BIT._TBWC4
#define GTM0CMPIRQNOTIFY_TBWC5 GTM0CMPIRQNOTIFY_BASE.BIT._TBWC5
#define GTM0CMPIRQNOTIFY_TBWC6 GTM0CMPIRQNOTIFY_BASE.BIT._TBWC6
#define GTM0CMPIRQNOTIFY_TBWC7 GTM0CMPIRQNOTIFY_BASE.BIT._TBWC7
#define GTM0CMPIRQNOTIFY_TBWC8 GTM0CMPIRQNOTIFY_BASE.BIT._TBWC8
#define GTM0CMPIRQNOTIFY_TBWC9 GTM0CMPIRQNOTIFY_BASE.BIT._TBWC9
#define GTM0CMPIRQNOTIFY_TBWC10 GTM0CMPIRQNOTIFY_BASE.BIT._TBWC10
#define GTM0CMPIRQNOTIFY_TBWC11 GTM0CMPIRQNOTIFY_BASE.BIT._TBWC11
#define GTM0CMPIRQEN GTM0CMPIRQEN_BASE.UINT32
#define GTM0CMPIRQEN_ABWC0_EN_IRQ GTM0CMPIRQEN_BASE.BIT._ABWC0_EN_IRQ
#define GTM0CMPIRQEN_ABWC1_EN_IRQ GTM0CMPIRQEN_BASE.BIT._ABWC1_EN_IRQ
#define GTM0CMPIRQEN_ABWC2_EN_IRQ GTM0CMPIRQEN_BASE.BIT._ABWC2_EN_IRQ
#define GTM0CMPIRQEN_ABWC3_EN_IRQ GTM0CMPIRQEN_BASE.BIT._ABWC3_EN_IRQ
#define GTM0CMPIRQEN_ABWC4_EN_IRQ GTM0CMPIRQEN_BASE.BIT._ABWC4_EN_IRQ
#define GTM0CMPIRQEN_ABWC5_EN_IRQ GTM0CMPIRQEN_BASE.BIT._ABWC5_EN_IRQ
#define GTM0CMPIRQEN_ABWC6_EN_IRQ GTM0CMPIRQEN_BASE.BIT._ABWC6_EN_IRQ
#define GTM0CMPIRQEN_ABWC7_EN_IRQ GTM0CMPIRQEN_BASE.BIT._ABWC7_EN_IRQ
#define GTM0CMPIRQEN_ABWC8_EN_IRQ GTM0CMPIRQEN_BASE.BIT._ABWC8_EN_IRQ
#define GTM0CMPIRQEN_ABWC9_EN_IRQ GTM0CMPIRQEN_BASE.BIT._ABWC9_EN_IRQ
#define GTM0CMPIRQEN_ABWC10_EN_IRQ GTM0CMPIRQEN_BASE.BIT._ABWC10_EN_IRQ
#define GTM0CMPIRQEN_ABWC11_EN_IRQ GTM0CMPIRQEN_BASE.BIT._ABWC11_EN_IRQ
#define GTM0CMPIRQEN_TBWC0_EN_IRQ GTM0CMPIRQEN_BASE.BIT._TBWC0_EN_IRQ
#define GTM0CMPIRQEN_TBWC1_EN_IRQ GTM0CMPIRQEN_BASE.BIT._TBWC1_EN_IRQ
#define GTM0CMPIRQEN_TBWC2_EN_IRQ GTM0CMPIRQEN_BASE.BIT._TBWC2_EN_IRQ
#define GTM0CMPIRQEN_TBWC3_EN_IRQ GTM0CMPIRQEN_BASE.BIT._TBWC3_EN_IRQ
#define GTM0CMPIRQEN_TBWC4_EN_IRQ GTM0CMPIRQEN_BASE.BIT._TBWC4_EN_IRQ
#define GTM0CMPIRQEN_TBWC5_EN_IRQ GTM0CMPIRQEN_BASE.BIT._TBWC5_EN_IRQ
#define GTM0CMPIRQEN_TBWC6_EN_IRQ GTM0CMPIRQEN_BASE.BIT._TBWC6_EN_IRQ
#define GTM0CMPIRQEN_TBWC7_EN_IRQ GTM0CMPIRQEN_BASE.BIT._TBWC7_EN_IRQ
#define GTM0CMPIRQEN_TBWC8_EN_IRQ GTM0CMPIRQEN_BASE.BIT._TBWC8_EN_IRQ
#define GTM0CMPIRQEN_TBWC9_EN_IRQ GTM0CMPIRQEN_BASE.BIT._TBWC9_EN_IRQ
#define GTM0CMPIRQEN_TBWC10_EN_IRQ GTM0CMPIRQEN_BASE.BIT._TBWC10_EN_IRQ
#define GTM0CMPIRQEN_TBWC11_EN_IRQ GTM0CMPIRQEN_BASE.BIT._TBWC11_EN_IRQ
#define GTM0CMPIRQFORCINT GTM0CMPIRQFORCINT_BASE.UINT32
#define GTM0CMPIRQFORCINT_TRG_ABWC0 GTM0CMPIRQFORCINT_BASE.BIT._TRG_ABWC0
#define GTM0CMPIRQFORCINT_TRG_ABWC1 GTM0CMPIRQFORCINT_BASE.BIT._TRG_ABWC1
#define GTM0CMPIRQFORCINT_TRG_ABWC2 GTM0CMPIRQFORCINT_BASE.BIT._TRG_ABWC2
#define GTM0CMPIRQFORCINT_TRG_ABWC3 GTM0CMPIRQFORCINT_BASE.BIT._TRG_ABWC3
#define GTM0CMPIRQFORCINT_TRG_ABWC4 GTM0CMPIRQFORCINT_BASE.BIT._TRG_ABWC4
#define GTM0CMPIRQFORCINT_TRG_ABWC5 GTM0CMPIRQFORCINT_BASE.BIT._TRG_ABWC5
#define GTM0CMPIRQFORCINT_TRG_ABWC6 GTM0CMPIRQFORCINT_BASE.BIT._TRG_ABWC6
#define GTM0CMPIRQFORCINT_TRG_ABWC7 GTM0CMPIRQFORCINT_BASE.BIT._TRG_ABWC7
#define GTM0CMPIRQFORCINT_TRG_ABWC8 GTM0CMPIRQFORCINT_BASE.BIT._TRG_ABWC8
#define GTM0CMPIRQFORCINT_TRG_ABWC9 GTM0CMPIRQFORCINT_BASE.BIT._TRG_ABWC9
#define GTM0CMPIRQFORCINT_TRG_ABWC10 GTM0CMPIRQFORCINT_BASE.BIT._TRG_ABWC10
#define GTM0CMPIRQFORCINT_TRG_ABWC11 GTM0CMPIRQFORCINT_BASE.BIT._TRG_ABWC11
#define GTM0CMPIRQFORCINT_TRG_TBWC0 GTM0CMPIRQFORCINT_BASE.BIT._TRG_TBWC0
#define GTM0CMPIRQFORCINT_TRG_TBWC1 GTM0CMPIRQFORCINT_BASE.BIT._TRG_TBWC1
#define GTM0CMPIRQFORCINT_TRG_TBWC2 GTM0CMPIRQFORCINT_BASE.BIT._TRG_TBWC2
#define GTM0CMPIRQFORCINT_TRG_TBWC3 GTM0CMPIRQFORCINT_BASE.BIT._TRG_TBWC3
#define GTM0CMPIRQFORCINT_TRG_TBWC4 GTM0CMPIRQFORCINT_BASE.BIT._TRG_TBWC4
#define GTM0CMPIRQFORCINT_TRG_TBWC5 GTM0CMPIRQFORCINT_BASE.BIT._TRG_TBWC5
#define GTM0CMPIRQFORCINT_TRG_TBWC6 GTM0CMPIRQFORCINT_BASE.BIT._TRG_TBWC6
#define GTM0CMPIRQFORCINT_TRG_TBWC7 GTM0CMPIRQFORCINT_BASE.BIT._TRG_TBWC7
#define GTM0CMPIRQFORCINT_TRG_TBWC8 GTM0CMPIRQFORCINT_BASE.BIT._TRG_TBWC8
#define GTM0CMPIRQFORCINT_TRG_TBWC9 GTM0CMPIRQFORCINT_BASE.BIT._TRG_TBWC9
#define GTM0CMPIRQFORCINT_TRG_TBWC10 GTM0CMPIRQFORCINT_BASE.BIT._TRG_TBWC10
#define GTM0CMPIRQFORCINT_TRG_TBWC11 GTM0CMPIRQFORCINT_BASE.BIT._TRG_TBWC11
#define GTM0CMPIRQMODE GTM0CMPIRQMODE_BASE.UINT32
#define GTM0CMPIRQMODE_IRQ_MODE GTM0CMPIRQMODE_BASE.BIT._IRQ_MODE
#define GTM0CMPEIRQEN GTM0CMPEIRQEN_BASE.UINT32
#define GTM0CMPEIRQEN_ABWC0_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._ABWC0_EN_EIRQ
#define GTM0CMPEIRQEN_ABWC1_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._ABWC1_EN_EIRQ
#define GTM0CMPEIRQEN_ABWC2_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._ABWC2_EN_EIRQ
#define GTM0CMPEIRQEN_ABWC3_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._ABWC3_EN_EIRQ
#define GTM0CMPEIRQEN_ABWC4_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._ABWC4_EN_EIRQ
#define GTM0CMPEIRQEN_ABWC5_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._ABWC5_EN_EIRQ
#define GTM0CMPEIRQEN_ABWC6_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._ABWC6_EN_EIRQ
#define GTM0CMPEIRQEN_ABWC7_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._ABWC7_EN_EIRQ
#define GTM0CMPEIRQEN_ABWC8_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._ABWC8_EN_EIRQ
#define GTM0CMPEIRQEN_ABWC9_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._ABWC9_EN_EIRQ
#define GTM0CMPEIRQEN_ABWC10_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._ABWC10_EN_EIRQ
#define GTM0CMPEIRQEN_ABWC11_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._ABWC11_EN_EIRQ
#define GTM0CMPEIRQEN_TBWC0_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._TBWC0_EN_EIRQ
#define GTM0CMPEIRQEN_TBWC1_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._TBWC1_EN_EIRQ
#define GTM0CMPEIRQEN_TBWC2_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._TBWC2_EN_EIRQ
#define GTM0CMPEIRQEN_TBWC3_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._TBWC3_EN_EIRQ
#define GTM0CMPEIRQEN_TBWC4_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._TBWC4_EN_EIRQ
#define GTM0CMPEIRQEN_TBWC5_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._TBWC5_EN_EIRQ
#define GTM0CMPEIRQEN_TBWC6_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._TBWC6_EN_EIRQ
#define GTM0CMPEIRQEN_TBWC7_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._TBWC7_EN_EIRQ
#define GTM0CMPEIRQEN_TBWC8_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._TBWC8_EN_EIRQ
#define GTM0CMPEIRQEN_TBWC9_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._TBWC9_EN_EIRQ
#define GTM0CMPEIRQEN_TBWC10_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._TBWC10_EN_EIRQ
#define GTM0CMPEIRQEN_TBWC11_EN_EIRQ GTM0CMPEIRQEN_BASE.BIT._TBWC11_EN_EIRQ
#define GTM0ARUACCESS GTM0ARUACCESS_BASE.UINT32
#define GTM0ARUACCESS_ADDR GTM0ARUACCESS_BASE.BIT._ADDR
#define GTM0ARUACCESS_RREQ GTM0ARUACCESS_BASE.BIT._RREQ
#define GTM0ARUACCESS_WREQ GTM0ARUACCESS_BASE.BIT._WREQ
#define GTM0ARUDATAH GTM0ARUDATAH_BASE.UINT32
#define GTM0ARUDATAH_DATA GTM0ARUDATAH_BASE.BIT._DATA
#define GTM0ARUDATAL GTM0ARUDATAL_BASE.UINT32
#define GTM0ARUDATAL_DATA GTM0ARUDATAL_BASE.BIT._DATA
#define GTM0ARUDBGACCESS0 GTM0ARUDBGACCESS0_BASE.UINT32
#define GTM0ARUDBGACCESS0_ADDR GTM0ARUDBGACCESS0_BASE.BIT._ADDR
#define GTM0ARUDBGDATA0H GTM0ARUDBGDATA0H_BASE.UINT32
#define GTM0ARUDBGDATA0H_DATA GTM0ARUDBGDATA0H_BASE.BIT._DATA
#define GTM0ARUDBGDATA0L GTM0ARUDBGDATA0L_BASE.UINT32
#define GTM0ARUDBGDATA0L_DATA GTM0ARUDBGDATA0L_BASE.BIT._DATA
#define GTM0ARUDBGACCESS1 GTM0ARUDBGACCESS1_BASE.UINT32
#define GTM0ARUDBGACCESS1_ADDR GTM0ARUDBGACCESS1_BASE.BIT._ADDR
#define GTM0ARUDBGDATA1H GTM0ARUDBGDATA1H_BASE.UINT32
#define GTM0ARUDBGDATA1H_DATA GTM0ARUDBGDATA1H_BASE.BIT._DATA
#define GTM0ARUDBGDATA1L GTM0ARUDBGDATA1L_BASE.UINT32
#define GTM0ARUDBGDATA1L_DATA GTM0ARUDBGDATA1L_BASE.BIT._DATA
#define GTM0ARUIRQNOTIFY GTM0ARUIRQNOTIFY_BASE.UINT32
#define GTM0ARUIRQNOTIFY_NEW_DATA0 GTM0ARUIRQNOTIFY_BASE.BIT._NEW_DATA0
#define GTM0ARUIRQNOTIFY_NEW_DATA1 GTM0ARUIRQNOTIFY_BASE.BIT._NEW_DATA1
#define GTM0ARUIRQNOTIFY_ACC_ACK GTM0ARUIRQNOTIFY_BASE.BIT._ACC_ACK
#define GTM0ARUIRQEN GTM0ARUIRQEN_BASE.UINT32
#define GTM0ARUIRQEN_NEW_DATA0_IR GTM0ARUIRQEN_BASE.BIT._NEW_DATA0_IR
#define GTM0ARUIRQEN_NEW_DATA1_IR GTM0ARUIRQEN_BASE.BIT._NEW_DATA1_IR
#define GTM0ARUIRQEN_ACC_ACK_IRQ GTM0ARUIRQEN_BASE.BIT._ACC_ACK_IRQ
#define GTM0ARUIRQFORCINT GTM0ARUIRQFORCINT_BASE.UINT32
#define GTM0ARUIRQFORCINT_TRG_NEW_DATA0 GTM0ARUIRQFORCINT_BASE.BIT._TRG_NEW_DATA0
#define GTM0ARUIRQFORCINT_TRG_NEW_DATA1 GTM0ARUIRQFORCINT_BASE.BIT._TRG_NEW_DATA1
#define GTM0ARUIRQFORCINT_TRG_ACC_ACK GTM0ARUIRQFORCINT_BASE.BIT._TRG_ACC_ACK
#define GTM0ARUIRQMODE GTM0ARUIRQMODE_BASE.UINT32
#define GTM0ARUIRQMODE_IRQ_MODE GTM0ARUIRQMODE_BASE.BIT._IRQ_MODE
#define GTM0ARUCADDREND GTM0ARUCADDREND_BASE.UINT32
#define GTM0ARUCADDREND_CADDR_END GTM0ARUCADDREND_BASE.BIT._CADDR_END
#define GTM0CMUCLKEN GTM0CMUCLKEN_BASE.UINT32
#define GTM0CMUCLKEN_EN_CLK0 GTM0CMUCLKEN_BASE.BIT._EN_CLK0
#define GTM0CMUCLKEN_EN_CLK1 GTM0CMUCLKEN_BASE.BIT._EN_CLK1
#define GTM0CMUCLKEN_EN_CLK2 GTM0CMUCLKEN_BASE.BIT._EN_CLK2
#define GTM0CMUCLKEN_EN_CLK3 GTM0CMUCLKEN_BASE.BIT._EN_CLK3
#define GTM0CMUCLKEN_EN_CLK4 GTM0CMUCLKEN_BASE.BIT._EN_CLK4
#define GTM0CMUCLKEN_EN_CLK5 GTM0CMUCLKEN_BASE.BIT._EN_CLK5
#define GTM0CMUCLKEN_EN_CLK6 GTM0CMUCLKEN_BASE.BIT._EN_CLK6
#define GTM0CMUCLKEN_EN_CLK7 GTM0CMUCLKEN_BASE.BIT._EN_CLK7
#define GTM0CMUCLKEN_EN_ECLK0 GTM0CMUCLKEN_BASE.BIT._EN_ECLK0
#define GTM0CMUCLKEN_EN_ECLK1 GTM0CMUCLKEN_BASE.BIT._EN_ECLK1
#define GTM0CMUCLKEN_EN_ECLK2 GTM0CMUCLKEN_BASE.BIT._EN_ECLK2
#define GTM0CMUCLKEN_EN_ECLK3 GTM0CMUCLKEN_BASE.BIT._EN_ECLK3
#define GTM0CMUGCLKNUM GTM0CMUGCLKNUM_BASE.UINT32
#define GTM0CMUGCLKNUM_CMU_GCLK_NUM GTM0CMUGCLKNUM_BASE.BIT._CMU_GCLK_NUM
#define GTM0CMUGCLKDEN GTM0CMUGCLKDEN_BASE.UINT32
#define GTM0CMUGCLKDEN_GCLK_DEN GTM0CMUGCLKDEN_BASE.BIT._GCLK_DEN
#define GTM0CMUCLK0CTRL GTM0CMUCLK0CTRL_BASE.UINT32
#define GTM0CMUCLK0CTRL_CLK_CNT GTM0CMUCLK0CTRL_BASE.BIT._CLK_CNT
#define GTM0CMUCLK1CTRL GTM0CMUCLK1CTRL_BASE.UINT32
#define GTM0CMUCLK1CTRL_CLK_CNT GTM0CMUCLK1CTRL_BASE.BIT._CLK_CNT
#define GTM0CMUCLK2CTRL GTM0CMUCLK2CTRL_BASE.UINT32
#define GTM0CMUCLK2CTRL_CLK_CNT GTM0CMUCLK2CTRL_BASE.BIT._CLK_CNT
#define GTM0CMUCLK3CTRL GTM0CMUCLK3CTRL_BASE.UINT32
#define GTM0CMUCLK3CTRL_CLK_CNT GTM0CMUCLK3CTRL_BASE.BIT._CLK_CNT
#define GTM0CMUCLK4CTRL GTM0CMUCLK4CTRL_BASE.UINT32
#define GTM0CMUCLK4CTRL_CLK_CNT GTM0CMUCLK4CTRL_BASE.BIT._CLK_CNT
#define GTM0CMUCLK5CTRL GTM0CMUCLK5CTRL_BASE.UINT32
#define GTM0CMUCLK5CTRL_CLK_CNT GTM0CMUCLK5CTRL_BASE.BIT._CLK_CNT
#define GTM0CMUCLK6CTRL GTM0CMUCLK6CTRL_BASE.UINT32
#define GTM0CMUCLK6CTRL_CLK_CNT GTM0CMUCLK6CTRL_BASE.BIT._CLK_CNT
#define GTM0CMUCLK7CTRL GTM0CMUCLK7CTRL_BASE.UINT32
#define GTM0CMUCLK7CTRL_CLK_CNT GTM0CMUCLK7CTRL_BASE.BIT._CLK_CNT
#define GTM0CMUGLBCTRL GTM0CMUGLBCTRL_BASE.UINT32
#define GTM0CMUGLBCTRL_ARU_ADDR_RSTGLB GTM0CMUGLBCTRL_BASE.BIT._ARU_ADDR_RSTGLB
#define GTM0ICMIRQG0 GTM0ICMIRQG0_BASE.UINT32
#define GTM0ICMIRQG0_ARU_NEW_DATA0_IRQ GTM0ICMIRQG0_BASE.BIT._ARU_NEW_DATA0_IRQ
#define GTM0ICMIRQG0_ARU_NEW_DATA1_IRQ GTM0ICMIRQG0_BASE.BIT._ARU_NEW_DATA1_IRQ
#define GTM0ICMIRQG0_ARU_ACC_ACK_IRQ GTM0ICMIRQG0_BASE.BIT._ARU_ACC_ACK_IRQ
#define GTM0ICMIRQG0_AEI_IRQ GTM0ICMIRQG0_BASE.BIT._AEI_IRQ
#define GTM0ICMIRQG0_CMP_IRQ GTM0ICMIRQG0_BASE.BIT._CMP_IRQ
#define GTM0ICMIRQG2 GTM0ICMIRQG2_BASE.UINT32
#define GTM0ICMIRQG2_TIM0_CH0_IRQ GTM0ICMIRQG2_BASE.BIT._TIM0_CH0_IRQ
#define GTM0ICMIRQG2_TIM0_CH1_IRQ GTM0ICMIRQG2_BASE.BIT._TIM0_CH1_IRQ
#define GTM0ICMIRQG2_TIM0_CH2_IRQ GTM0ICMIRQG2_BASE.BIT._TIM0_CH2_IRQ
#define GTM0ICMIRQG2_TIM0_CH3_IRQ GTM0ICMIRQG2_BASE.BIT._TIM0_CH3_IRQ
#define GTM0ICMIRQG2_TIM0_CH4_IRQ GTM0ICMIRQG2_BASE.BIT._TIM0_CH4_IRQ
#define GTM0ICMIRQG2_TIM0_CH5_IRQ GTM0ICMIRQG2_BASE.BIT._TIM0_CH5_IRQ
#define GTM0ICMIRQG2_TIM0_CH6_IRQ GTM0ICMIRQG2_BASE.BIT._TIM0_CH6_IRQ
#define GTM0ICMIRQG2_TIM0_CH7_IRQ GTM0ICMIRQG2_BASE.BIT._TIM0_CH7_IRQ
#define GTM0ICMIRQG2_TIM1_CH0_IRQ GTM0ICMIRQG2_BASE.BIT._TIM1_CH0_IRQ
#define GTM0ICMIRQG2_TIM1_CH1_IRQ GTM0ICMIRQG2_BASE.BIT._TIM1_CH1_IRQ
#define GTM0ICMIRQG2_TIM1_CH2_IRQ GTM0ICMIRQG2_BASE.BIT._TIM1_CH2_IRQ
#define GTM0ICMIRQG2_TIM1_CH3_IRQ GTM0ICMIRQG2_BASE.BIT._TIM1_CH3_IRQ
#define GTM0ICMIRQG2_TIM1_CH4_IRQ GTM0ICMIRQG2_BASE.BIT._TIM1_CH4_IRQ
#define GTM0ICMIRQG2_TIM1_CH5_IRQ GTM0ICMIRQG2_BASE.BIT._TIM1_CH5_IRQ
#define GTM0ICMIRQG2_TIM1_CH6_IRQ GTM0ICMIRQG2_BASE.BIT._TIM1_CH6_IRQ
#define GTM0ICMIRQG2_TIM1_CH7_IRQ GTM0ICMIRQG2_BASE.BIT._TIM1_CH7_IRQ
#define GTM0ICMIRQG4 GTM0ICMIRQG4_BASE.UINT32
#define GTM0ICMIRQG4_MCS0_CH0_IRQ GTM0ICMIRQG4_BASE.BIT._MCS0_CH0_IRQ
#define GTM0ICMIRQG4_MCS0_CH1_IRQ GTM0ICMIRQG4_BASE.BIT._MCS0_CH1_IRQ
#define GTM0ICMIRQG4_MCS0_CH2_IRQ GTM0ICMIRQG4_BASE.BIT._MCS0_CH2_IRQ
#define GTM0ICMIRQG4_MCS0_CH3_IRQ GTM0ICMIRQG4_BASE.BIT._MCS0_CH3_IRQ
#define GTM0ICMIRQG4_MCS0_CH4_IRQ GTM0ICMIRQG4_BASE.BIT._MCS0_CH4_IRQ
#define GTM0ICMIRQG4_MCS0_CH5_IRQ GTM0ICMIRQG4_BASE.BIT._MCS0_CH5_IRQ
#define GTM0ICMIRQG4_MCS0_CH6_IRQ GTM0ICMIRQG4_BASE.BIT._MCS0_CH6_IRQ
#define GTM0ICMIRQG4_MCS0_CH7_IRQ GTM0ICMIRQG4_BASE.BIT._MCS0_CH7_IRQ
#define GTM0ICMIRQG4_MCS1_CH0_IRQ GTM0ICMIRQG4_BASE.BIT._MCS1_CH0_IRQ
#define GTM0ICMIRQG4_MCS1_CH1_IRQ GTM0ICMIRQG4_BASE.BIT._MCS1_CH1_IRQ
#define GTM0ICMIRQG4_MCS1_CH2_IRQ GTM0ICMIRQG4_BASE.BIT._MCS1_CH2_IRQ
#define GTM0ICMIRQG4_MCS1_CH3_IRQ GTM0ICMIRQG4_BASE.BIT._MCS1_CH3_IRQ
#define GTM0ICMIRQG4_MCS1_CH4_IRQ GTM0ICMIRQG4_BASE.BIT._MCS1_CH4_IRQ
#define GTM0ICMIRQG4_MCS1_CH5_IRQ GTM0ICMIRQG4_BASE.BIT._MCS1_CH5_IRQ
#define GTM0ICMIRQG4_MCS1_CH6_IRQ GTM0ICMIRQG4_BASE.BIT._MCS1_CH6_IRQ
#define GTM0ICMIRQG4_MCS1_CH7_IRQ GTM0ICMIRQG4_BASE.BIT._MCS1_CH7_IRQ
#define GTM0ICMIRQG9 GTM0ICMIRQG9_BASE.UINT32
#define GTM0ICMIRQG9_ATOM0_CH0_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM0_CH0_IRQ
#define GTM0ICMIRQG9_ATOM0_CH1_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM0_CH1_IRQ
#define GTM0ICMIRQG9_ATOM0_CH2_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM0_CH2_IRQ
#define GTM0ICMIRQG9_ATOM0_CH3_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM0_CH3_IRQ
#define GTM0ICMIRQG9_ATOM0_CH4_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM0_CH4_IRQ
#define GTM0ICMIRQG9_ATOM0_CH5_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM0_CH5_IRQ
#define GTM0ICMIRQG9_ATOM0_CH6_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM0_CH6_IRQ
#define GTM0ICMIRQG9_ATOM0_CH7_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM0_CH7_IRQ
#define GTM0ICMIRQG9_ATOM1_CH0_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM1_CH0_IRQ
#define GTM0ICMIRQG9_ATOM1_CH1_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM1_CH1_IRQ
#define GTM0ICMIRQG9_ATOM1_CH2_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM1_CH2_IRQ
#define GTM0ICMIRQG9_ATOM1_CH3_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM1_CH3_IRQ
#define GTM0ICMIRQG9_ATOM1_CH4_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM1_CH4_IRQ
#define GTM0ICMIRQG9_ATOM1_CH5_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM1_CH5_IRQ
#define GTM0ICMIRQG9_ATOM1_CH6_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM1_CH6_IRQ
#define GTM0ICMIRQG9_ATOM1_CH7_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM1_CH7_IRQ
#define GTM0ICMIRQG9_ATOM2_CH0_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM2_CH0_IRQ
#define GTM0ICMIRQG9_ATOM2_CH1_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM2_CH1_IRQ
#define GTM0ICMIRQG9_ATOM2_CH2_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM2_CH2_IRQ
#define GTM0ICMIRQG9_ATOM2_CH3_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM2_CH3_IRQ
#define GTM0ICMIRQG9_ATOM2_CH4_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM2_CH4_IRQ
#define GTM0ICMIRQG9_ATOM2_CH5_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM2_CH5_IRQ
#define GTM0ICMIRQG9_ATOM2_CH6_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM2_CH6_IRQ
#define GTM0ICMIRQG9_ATOM2_CH7_IRQ GTM0ICMIRQG9_BASE.BIT._ATOM2_CH7_IRQ
#define GTM0ICMIRQGMEI GTM0ICMIRQGMEI_BASE.UINT32
#define GTM0ICMIRQGMEI_GTM_EIRQ GTM0ICMIRQGMEI_BASE.BIT._GTM_EIRQ
#define GTM0ICMIRQGMEI_TIM0_EIRQ GTM0ICMIRQGMEI_BASE.BIT._TIM0_EIRQ
#define GTM0ICMIRQGMEI_TIM1_EIRQ GTM0ICMIRQGMEI_BASE.BIT._TIM1_EIRQ
#define GTM0ICMIRQGMEI_MCS0_EIRQ GTM0ICMIRQGMEI_BASE.BIT._MCS0_EIRQ
#define GTM0ICMIRQGMEI_MCS1_EIRQ GTM0ICMIRQGMEI_BASE.BIT._MCS1_EIRQ
#define GTM0ICMIRQGMEI_CMP_EIRQ GTM0ICMIRQGMEI_BASE.BIT._CMP_EIRQ
#define GTM0ICMIRQGCEI1 GTM0ICMIRQGCEI1_BASE.UINT32
#define GTM0ICMIRQGCEI1_TIM0_CH0_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM0_CH0_EIRQ
#define GTM0ICMIRQGCEI1_TIM0_CH1_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM0_CH1_EIRQ
#define GTM0ICMIRQGCEI1_TIM0_CH2_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM0_CH2_EIRQ
#define GTM0ICMIRQGCEI1_TIM0_CH3_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM0_CH3_EIRQ
#define GTM0ICMIRQGCEI1_TIM0_CH4_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM0_CH4_EIRQ
#define GTM0ICMIRQGCEI1_TIM0_CH5_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM0_CH5_EIRQ
#define GTM0ICMIRQGCEI1_TIM0_CH6_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM0_CH6_EIRQ
#define GTM0ICMIRQGCEI1_TIM0_CH7_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM0_CH7_EIRQ
#define GTM0ICMIRQGCEI1_TIM1_CH0_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM1_CH0_EIRQ
#define GTM0ICMIRQGCEI1_TIM1_CH1_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM1_CH1_EIRQ
#define GTM0ICMIRQGCEI1_TIM1_CH2_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM1_CH2_EIRQ
#define GTM0ICMIRQGCEI1_TIM1_CH3_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM1_CH3_EIRQ
#define GTM0ICMIRQGCEI1_TIM1_CH4_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM1_CH4_EIRQ
#define GTM0ICMIRQGCEI1_TIM1_CH5_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM1_CH5_EIRQ
#define GTM0ICMIRQGCEI1_TIM1_CH6_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM1_CH6_EIRQ
#define GTM0ICMIRQGCEI1_TIM1_CH7_EIRQ GTM0ICMIRQGCEI1_BASE.BIT._TIM1_CH7_EIRQ
#define GTM0ICMIRQGCEI3 GTM0ICMIRQGCEI3_BASE.UINT32
#define GTM0ICMIRQGCEI3_MCS0_CH0_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS0_CH0_EIRQ
#define GTM0ICMIRQGCEI3_MCS0_CH1_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS0_CH1_EIRQ
#define GTM0ICMIRQGCEI3_MCS0_CH2_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS0_CH2_EIRQ
#define GTM0ICMIRQGCEI3_MCS0_CH3_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS0_CH3_EIRQ
#define GTM0ICMIRQGCEI3_MCS0_CH4_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS0_CH4_EIRQ
#define GTM0ICMIRQGCEI3_MCS0_CH5_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS0_CH5_EIRQ
#define GTM0ICMIRQGCEI3_MCS0_CH6_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS0_CH6_EIRQ
#define GTM0ICMIRQGCEI3_MCS0_CH7_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS0_CH7_EIRQ
#define GTM0ICMIRQGCEI3_MCS1_CH0_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS1_CH0_EIRQ
#define GTM0ICMIRQGCEI3_MCS1_CH1_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS1_CH1_EIRQ
#define GTM0ICMIRQGCEI3_MCS1_CH2_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS1_CH2_EIRQ
#define GTM0ICMIRQGCEI3_MCS1_CH3_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS1_CH3_EIRQ
#define GTM0ICMIRQGCEI3_MCS1_CH4_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS1_CH4_EIRQ
#define GTM0ICMIRQGCEI3_MCS1_CH5_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS1_CH5_EIRQ
#define GTM0ICMIRQGCEI3_MCS1_CH6_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS1_CH6_EIRQ
#define GTM0ICMIRQGCEI3_MCS1_CH7_EIRQ GTM0ICMIRQGCEI3_BASE.BIT._MCS1_CH7_EIRQ
#define GTM0ICMIRQGMCS0CI GTM0ICMIRQGMCS0CI_BASE.UINT32
#define GTM0ICMIRQGMCS0CI_MCS0_CH0_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH0_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH1_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH1_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH2_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH2_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH3_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH3_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH4_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH4_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH5_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH5_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH6_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH6_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH7_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH7_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH8_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH8_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH9_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH9_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH10_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH10_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH11_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH11_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH12_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH12_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH13_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH13_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH14_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH14_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH15_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH15_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH16_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH16_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH17_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH17_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH18_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH18_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH19_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH19_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH20_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH20_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH21_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH21_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH22_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH22_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH23_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH23_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH24_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH24_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH25_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH25_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH26_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH26_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH27_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH27_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH28_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH28_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH29_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH29_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH30_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH30_IRQ
#define GTM0ICMIRQGMCS0CI_MCS0_CH31_IRQ GTM0ICMIRQGMCS0CI_BASE.BIT._MCS0_CH31_IRQ
#define GTM0ICMIRQGMCS0CEI GTM0ICMIRQGMCS0CEI_BASE.UINT32
#define GTM0ICMIRQGMCS0CEI_MCS0_CH0_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH0_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH1_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH1_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH2_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH2_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH3_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH3_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH4_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH4_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH5_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH5_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH6_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH6_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH7_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH7_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH8_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH8_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH9_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH9_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH10_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH10_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH11_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH11_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH12_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH12_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH13_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH13_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH14_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH14_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH15_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH15_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH16_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH16_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH17_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH17_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH18_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH18_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH19_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH19_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH20_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH20_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH21_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH21_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH22_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH22_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH23_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH23_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH24_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH24_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH25_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH25_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH26_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH26_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH27_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH27_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH28_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH28_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH29_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH29_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH30_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH30_IRQ
#define GTM0ICMIRQGMCS0CEI_MCS0_CH31_IRQ GTM0ICMIRQGMCS0CEI_BASE.BIT._MCS0_CH31_IRQ
#define GTM0TIM00GPR0 GTM0TIM00GPR0_BASE.UINT32
#define GTM0TIM00GPR0_GPR0 GTM0TIM00GPR0_BASE.BIT._GPR0
#define GTM0TIM00GPR0_ECNT GTM0TIM00GPR0_BASE.BIT._ECNT
#define GTM0TIM00GPR1 GTM0TIM00GPR1_BASE.UINT32
#define GTM0TIM00GPR1_GPR1 GTM0TIM00GPR1_BASE.BIT._GPR1
#define GTM0TIM00GPR1_ECNT GTM0TIM00GPR1_BASE.BIT._ECNT
#define GTM0TIM00CNT GTM0TIM00CNT_BASE.UINT32
#define GTM0TIM00CNT_CNT GTM0TIM00CNT_BASE.BIT._CNT
#define GTM0TIM00ECNT GTM0TIM00ECNT_BASE.UINT32
#define GTM0TIM00ECNT_ECNT GTM0TIM00ECNT_BASE.BIT._ECNT
#define GTM0TIM00CNTS GTM0TIM00CNTS_BASE.UINT32
#define GTM0TIM00CNTS_CNTS GTM0TIM00CNTS_BASE.BIT._CNTS
#define GTM0TIM00CNTS_ECNT GTM0TIM00CNTS_BASE.BIT._ECNT
#define GTM0TIM00TDUC GTM0TIM00TDUC_BASE.UINT32
#define GTM0TIM00TDUC_TO_CNT GTM0TIM00TDUC_BASE.BIT._TO_CNT
#define GTM0TIM00TDUV GTM0TIM00TDUV_BASE.UINT32
#define GTM0TIM00TDUV_TOV GTM0TIM00TDUV_BASE.BIT._TOV
#define GTM0TIM00TDUV_TCS GTM0TIM00TDUV_BASE.BIT._TCS
#define GTM0TIM00FLTRE GTM0TIM00FLTRE_BASE.UINT32
#define GTM0TIM00FLTRE_FLT_RE GTM0TIM00FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM00FLTFE GTM0TIM00FLTFE_BASE.UINT32
#define GTM0TIM00FLTFE_FLT_FE GTM0TIM00FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM00CTRL GTM0TIM00CTRL_BASE.UINT32
#define GTM0TIM00CTRL_TIM_EN GTM0TIM00CTRL_BASE.BIT._TIM_EN
#define GTM0TIM00CTRL_TIM_MODE GTM0TIM00CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM00CTRL_OSM GTM0TIM00CTRL_BASE.BIT._OSM
#define GTM0TIM00CTRL_ARU_EN GTM0TIM00CTRL_BASE.BIT._ARU_EN
#define GTM0TIM00CTRL_CICTRL GTM0TIM00CTRL_BASE.BIT._CICTRL
#define GTM0TIM00CTRL_TBU0_SEL GTM0TIM00CTRL_BASE.BIT._TBU0_SEL
#define GTM0TIM00CTRL_GPR0_SEL GTM0TIM00CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM00CTRL_GPR1_SEL GTM0TIM00CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM00CTRL_CNTS_SEL GTM0TIM00CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM00CTRL_DSL GTM0TIM00CTRL_BASE.BIT._DSL
#define GTM0TIM00CTRL_ISL GTM0TIM00CTRL_BASE.BIT._ISL
#define GTM0TIM00CTRL_ECNT_RESET GTM0TIM00CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM00CTRL_FLT_EN GTM0TIM00CTRL_BASE.BIT._FLT_EN
#define GTM0TIM00CTRL_FLT_CNT_FRQ GTM0TIM00CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM00CTRL_EXT_CAP_EN GTM0TIM00CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM00CTRL_FLT_MODE_RE GTM0TIM00CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM00CTRL_FLT_CTR_RE GTM0TIM00CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM00CTRL_FLT_MODE_FE GTM0TIM00CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM00CTRL_FLT_CTR_FE GTM0TIM00CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM00CTRL_CLK_SEL GTM0TIM00CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM00CTRL_FR_ECNT_OFL GTM0TIM00CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM00CTRL_EGPR0_SEL GTM0TIM00CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM00CTRL_EGPR1_SEL GTM0TIM00CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM00CTRL_TOCTRL GTM0TIM00CTRL_BASE.BIT._TOCTRL
#define GTM0TIM00ECTRL GTM0TIM00ECTRL_BASE.UINT32
#define GTM0TIM00ECTRL_EXT_CAP_SRC GTM0TIM00ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM00IRQNOTIFY GTM0TIM00IRQNOTIFY_BASE.UINT32
#define GTM0TIM00IRQNOTIFY_NEWVAL GTM0TIM00IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM00IRQNOTIFY_ECNTOFL GTM0TIM00IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM00IRQNOTIFY_CNTOFL GTM0TIM00IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM00IRQNOTIFY_GPROFL GTM0TIM00IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM00IRQNOTIFY_TODET GTM0TIM00IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM00IRQNOTIFY_GLITCHDET GTM0TIM00IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM00IRQEN GTM0TIM00IRQEN_BASE.UINT32
#define GTM0TIM00IRQEN_NEWVAL_IRQ_EN GTM0TIM00IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM00IRQEN_ECNTOFL_IRQ_EN GTM0TIM00IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM00IRQEN_CNTOFL_IRQ_EN GTM0TIM00IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM00IRQEN_GPROFL_IRQ_EN GTM0TIM00IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM00IRQEN_TODET_IRQ_EN GTM0TIM00IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM00IRQEN_GLITCHDET_IRQ_EN GTM0TIM00IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM00IRQFORCINT GTM0TIM00IRQFORCINT_BASE.UINT32
#define GTM0TIM00IRQFORCINT_TRG_NEWVAL GTM0TIM00IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM00IRQFORCINT_TRG_ECNTOFL GTM0TIM00IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM00IRQFORCINT_TRG_CNTOFL GTM0TIM00IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM00IRQFORCINT_TRG_GPROFL GTM0TIM00IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM00IRQFORCINT_TRG_TODET GTM0TIM00IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM00IRQFORCINT_TRG_GLITCHDET GTM0TIM00IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM00IRQMODE GTM0TIM00IRQMODE_BASE.UINT32
#define GTM0TIM00IRQMODE_IRQ_MODE GTM0TIM00IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM00EIRQEN GTM0TIM00EIRQEN_BASE.UINT32
#define GTM0TIM00EIRQEN_NEWVAL_EIRQ_EN GTM0TIM00EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM00EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM00EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM00EIRQEN_CNTOFL_EIRQ_EN GTM0TIM00EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM00EIRQEN_GPROFL_EIRQ_EN GTM0TIM00EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM00EIRQEN_TODET_IERQ_EN GTM0TIM00EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM00EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM00EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM0INPVAL GTM0TIM0INPVAL_BASE.UINT32
#define GTM0TIM0INPVAL_F_OUT GTM0TIM0INPVAL_BASE.BIT._F_OUT
#define GTM0TIM0INPVAL_F_IN GTM0TIM0INPVAL_BASE.BIT._F_IN
#define GTM0TIM0INPVAL_TIM_IN GTM0TIM0INPVAL_BASE.BIT._TIM_IN
#define GTM0TIM0INSRC GTM0TIM0INSRC_BASE.UINT32
#define GTM0TIM0INSRC_VAL_0 GTM0TIM0INSRC_BASE.BIT._VAL_0
#define GTM0TIM0INSRC_MODE_0 GTM0TIM0INSRC_BASE.BIT._MODE_0
#define GTM0TIM0INSRC_VAL_1 GTM0TIM0INSRC_BASE.BIT._VAL_1
#define GTM0TIM0INSRC_MODE_1 GTM0TIM0INSRC_BASE.BIT._MODE_1
#define GTM0TIM0INSRC_VAL_2 GTM0TIM0INSRC_BASE.BIT._VAL_2
#define GTM0TIM0INSRC_MODE_2 GTM0TIM0INSRC_BASE.BIT._MODE_2
#define GTM0TIM0INSRC_VAL_3 GTM0TIM0INSRC_BASE.BIT._VAL_3
#define GTM0TIM0INSRC_MODE_3 GTM0TIM0INSRC_BASE.BIT._MODE_3
#define GTM0TIM0INSRC_VAL_4 GTM0TIM0INSRC_BASE.BIT._VAL_4
#define GTM0TIM0INSRC_MODE_4 GTM0TIM0INSRC_BASE.BIT._MODE_4
#define GTM0TIM0INSRC_VAL_5 GTM0TIM0INSRC_BASE.BIT._VAL_5
#define GTM0TIM0INSRC_MODE_5 GTM0TIM0INSRC_BASE.BIT._MODE_5
#define GTM0TIM0INSRC_VAL_6 GTM0TIM0INSRC_BASE.BIT._VAL_6
#define GTM0TIM0INSRC_MODE_6 GTM0TIM0INSRC_BASE.BIT._MODE_6
#define GTM0TIM0INSRC_VAL_7 GTM0TIM0INSRC_BASE.BIT._VAL_7
#define GTM0TIM0INSRC_MODE_7 GTM0TIM0INSRC_BASE.BIT._MODE_7
#define GTM0TIM0RST GTM0TIM0RST_BASE.UINT32
#define GTM0TIM0RST_RST_CH0 GTM0TIM0RST_BASE.BIT._RST_CH0
#define GTM0TIM0RST_RST_CH1 GTM0TIM0RST_BASE.BIT._RST_CH1
#define GTM0TIM0RST_RST_CH2 GTM0TIM0RST_BASE.BIT._RST_CH2
#define GTM0TIM0RST_RST_CH3 GTM0TIM0RST_BASE.BIT._RST_CH3
#define GTM0TIM0RST_RST_CH4 GTM0TIM0RST_BASE.BIT._RST_CH4
#define GTM0TIM0RST_RST_CH5 GTM0TIM0RST_BASE.BIT._RST_CH5
#define GTM0TIM0RST_RST_CH6 GTM0TIM0RST_BASE.BIT._RST_CH6
#define GTM0TIM0RST_RST_CH7 GTM0TIM0RST_BASE.BIT._RST_CH7
#define GTM0TIM01GPR0 GTM0TIM01GPR0_BASE.UINT32
#define GTM0TIM01GPR0_GPR0 GTM0TIM01GPR0_BASE.BIT._GPR0
#define GTM0TIM01GPR0_ECNT GTM0TIM01GPR0_BASE.BIT._ECNT
#define GTM0TIM01GPR1 GTM0TIM01GPR1_BASE.UINT32
#define GTM0TIM01GPR1_GPR1 GTM0TIM01GPR1_BASE.BIT._GPR1
#define GTM0TIM01GPR1_ECNT GTM0TIM01GPR1_BASE.BIT._ECNT
#define GTM0TIM01CNT GTM0TIM01CNT_BASE.UINT32
#define GTM0TIM01CNT_CNT GTM0TIM01CNT_BASE.BIT._CNT
#define GTM0TIM01ECNT GTM0TIM01ECNT_BASE.UINT32
#define GTM0TIM01ECNT_ECNT GTM0TIM01ECNT_BASE.BIT._ECNT
#define GTM0TIM01CNTS GTM0TIM01CNTS_BASE.UINT32
#define GTM0TIM01CNTS_CNTS GTM0TIM01CNTS_BASE.BIT._CNTS
#define GTM0TIM01CNTS_ECNT GTM0TIM01CNTS_BASE.BIT._ECNT
#define GTM0TIM01TDUC GTM0TIM01TDUC_BASE.UINT32
#define GTM0TIM01TDUC_TO_CNT GTM0TIM01TDUC_BASE.BIT._TO_CNT
#define GTM0TIM01TDUV GTM0TIM01TDUV_BASE.UINT32
#define GTM0TIM01TDUV_TOV GTM0TIM01TDUV_BASE.BIT._TOV
#define GTM0TIM01TDUV_TCS GTM0TIM01TDUV_BASE.BIT._TCS
#define GTM0TIM01FLTRE GTM0TIM01FLTRE_BASE.UINT32
#define GTM0TIM01FLTRE_FLT_RE GTM0TIM01FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM01FLTFE GTM0TIM01FLTFE_BASE.UINT32
#define GTM0TIM01FLTFE_FLT_FE GTM0TIM01FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM01CTRL GTM0TIM01CTRL_BASE.UINT32
#define GTM0TIM01CTRL_TIM_EN GTM0TIM01CTRL_BASE.BIT._TIM_EN
#define GTM0TIM01CTRL_TIM_MODE GTM0TIM01CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM01CTRL_OSM GTM0TIM01CTRL_BASE.BIT._OSM
#define GTM0TIM01CTRL_ARU_EN GTM0TIM01CTRL_BASE.BIT._ARU_EN
#define GTM0TIM01CTRL_CICTRL GTM0TIM01CTRL_BASE.BIT._CICTRL
#define GTM0TIM01CTRL_TBU0_SEL GTM0TIM01CTRL_BASE.BIT._TBU0_SEL
#define GTM0TIM01CTRL_GPR0_SEL GTM0TIM01CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM01CTRL_GPR1_SEL GTM0TIM01CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM01CTRL_CNTS_SEL GTM0TIM01CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM01CTRL_DSL GTM0TIM01CTRL_BASE.BIT._DSL
#define GTM0TIM01CTRL_ISL GTM0TIM01CTRL_BASE.BIT._ISL
#define GTM0TIM01CTRL_ECNT_RESET GTM0TIM01CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM01CTRL_FLT_EN GTM0TIM01CTRL_BASE.BIT._FLT_EN
#define GTM0TIM01CTRL_FLT_CNT_FRQ GTM0TIM01CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM01CTRL_EXT_CAP_EN GTM0TIM01CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM01CTRL_FLT_MODE_RE GTM0TIM01CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM01CTRL_FLT_CTR_RE GTM0TIM01CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM01CTRL_FLT_MODE_FE GTM0TIM01CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM01CTRL_FLT_CTR_FE GTM0TIM01CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM01CTRL_CLK_SEL GTM0TIM01CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM01CTRL_FR_ECNT_OFL GTM0TIM01CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM01CTRL_EGPR0_SEL GTM0TIM01CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM01CTRL_EGPR1_SEL GTM0TIM01CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM01CTRL_TOCTRL GTM0TIM01CTRL_BASE.BIT._TOCTRL
#define GTM0TIM01ECTRL GTM0TIM01ECTRL_BASE.UINT32
#define GTM0TIM01ECTRL_EXT_CAP_SRC GTM0TIM01ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM01IRQNOTIFY GTM0TIM01IRQNOTIFY_BASE.UINT32
#define GTM0TIM01IRQNOTIFY_NEWVAL GTM0TIM01IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM01IRQNOTIFY_ECNTOFL GTM0TIM01IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM01IRQNOTIFY_CNTOFL GTM0TIM01IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM01IRQNOTIFY_GPROFL GTM0TIM01IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM01IRQNOTIFY_TODET GTM0TIM01IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM01IRQNOTIFY_GLITCHDET GTM0TIM01IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM01IRQEN GTM0TIM01IRQEN_BASE.UINT32
#define GTM0TIM01IRQEN_NEWVAL_IRQ_EN GTM0TIM01IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM01IRQEN_ECNTOFL_IRQ_EN GTM0TIM01IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM01IRQEN_CNTOFL_IRQ_EN GTM0TIM01IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM01IRQEN_GPROFL_IRQ_EN GTM0TIM01IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM01IRQEN_TODET_IRQ_EN GTM0TIM01IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM01IRQEN_GLITCHDET_IRQ_EN GTM0TIM01IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM01IRQFORCINT GTM0TIM01IRQFORCINT_BASE.UINT32
#define GTM0TIM01IRQFORCINT_TRG_NEWVAL GTM0TIM01IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM01IRQFORCINT_TRG_ECNTOFL GTM0TIM01IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM01IRQFORCINT_TRG_CNTOFL GTM0TIM01IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM01IRQFORCINT_TRG_GPROFL GTM0TIM01IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM01IRQFORCINT_TRG_TODET GTM0TIM01IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM01IRQFORCINT_TRG_GLITCHDET GTM0TIM01IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM01IRQMODE GTM0TIM01IRQMODE_BASE.UINT32
#define GTM0TIM01IRQMODE_IRQ_MODE GTM0TIM01IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM01EIRQEN GTM0TIM01EIRQEN_BASE.UINT32
#define GTM0TIM01EIRQEN_NEWVAL_EIRQ_EN GTM0TIM01EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM01EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM01EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM01EIRQEN_CNTOFL_EIRQ_EN GTM0TIM01EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM01EIRQEN_GPROFL_EIRQ_EN GTM0TIM01EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM01EIRQEN_TODET_IERQ_EN GTM0TIM01EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM01EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM01EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM02GPR0 GTM0TIM02GPR0_BASE.UINT32
#define GTM0TIM02GPR0_GPR0 GTM0TIM02GPR0_BASE.BIT._GPR0
#define GTM0TIM02GPR0_ECNT GTM0TIM02GPR0_BASE.BIT._ECNT
#define GTM0TIM02GPR1 GTM0TIM02GPR1_BASE.UINT32
#define GTM0TIM02GPR1_GPR1 GTM0TIM02GPR1_BASE.BIT._GPR1
#define GTM0TIM02GPR1_ECNT GTM0TIM02GPR1_BASE.BIT._ECNT
#define GTM0TIM02CNT GTM0TIM02CNT_BASE.UINT32
#define GTM0TIM02CNT_CNT GTM0TIM02CNT_BASE.BIT._CNT
#define GTM0TIM02ECNT GTM0TIM02ECNT_BASE.UINT32
#define GTM0TIM02ECNT_ECNT GTM0TIM02ECNT_BASE.BIT._ECNT
#define GTM0TIM02CNTS GTM0TIM02CNTS_BASE.UINT32
#define GTM0TIM02CNTS_CNTS GTM0TIM02CNTS_BASE.BIT._CNTS
#define GTM0TIM02CNTS_ECNT GTM0TIM02CNTS_BASE.BIT._ECNT
#define GTM0TIM02TDUC GTM0TIM02TDUC_BASE.UINT32
#define GTM0TIM02TDUC_TO_CNT GTM0TIM02TDUC_BASE.BIT._TO_CNT
#define GTM0TIM02TDUV GTM0TIM02TDUV_BASE.UINT32
#define GTM0TIM02TDUV_TOV GTM0TIM02TDUV_BASE.BIT._TOV
#define GTM0TIM02TDUV_TCS GTM0TIM02TDUV_BASE.BIT._TCS
#define GTM0TIM02FLTRE GTM0TIM02FLTRE_BASE.UINT32
#define GTM0TIM02FLTRE_FLT_RE GTM0TIM02FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM02FLTFE GTM0TIM02FLTFE_BASE.UINT32
#define GTM0TIM02FLTFE_FLT_FE GTM0TIM02FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM02CTRL GTM0TIM02CTRL_BASE.UINT32
#define GTM0TIM02CTRL_TIM_EN GTM0TIM02CTRL_BASE.BIT._TIM_EN
#define GTM0TIM02CTRL_TIM_MODE GTM0TIM02CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM02CTRL_OSM GTM0TIM02CTRL_BASE.BIT._OSM
#define GTM0TIM02CTRL_ARU_EN GTM0TIM02CTRL_BASE.BIT._ARU_EN
#define GTM0TIM02CTRL_CICTRL GTM0TIM02CTRL_BASE.BIT._CICTRL
#define GTM0TIM02CTRL_TBU0_SEL GTM0TIM02CTRL_BASE.BIT._TBU0_SEL
#define GTM0TIM02CTRL_GPR0_SEL GTM0TIM02CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM02CTRL_GPR1_SEL GTM0TIM02CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM02CTRL_CNTS_SEL GTM0TIM02CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM02CTRL_DSL GTM0TIM02CTRL_BASE.BIT._DSL
#define GTM0TIM02CTRL_ISL GTM0TIM02CTRL_BASE.BIT._ISL
#define GTM0TIM02CTRL_ECNT_RESET GTM0TIM02CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM02CTRL_FLT_EN GTM0TIM02CTRL_BASE.BIT._FLT_EN
#define GTM0TIM02CTRL_FLT_CNT_FRQ GTM0TIM02CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM02CTRL_EXT_CAP_EN GTM0TIM02CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM02CTRL_FLT_MODE_RE GTM0TIM02CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM02CTRL_FLT_CTR_RE GTM0TIM02CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM02CTRL_FLT_MODE_FE GTM0TIM02CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM02CTRL_FLT_CTR_FE GTM0TIM02CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM02CTRL_CLK_SEL GTM0TIM02CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM02CTRL_FR_ECNT_OFL GTM0TIM02CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM02CTRL_EGPR0_SEL GTM0TIM02CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM02CTRL_EGPR1_SEL GTM0TIM02CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM02CTRL_TOCTRL GTM0TIM02CTRL_BASE.BIT._TOCTRL
#define GTM0TIM02ECTRL GTM0TIM02ECTRL_BASE.UINT32
#define GTM0TIM02ECTRL_EXT_CAP_SRC GTM0TIM02ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM02IRQNOTIFY GTM0TIM02IRQNOTIFY_BASE.UINT32
#define GTM0TIM02IRQNOTIFY_NEWVAL GTM0TIM02IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM02IRQNOTIFY_ECNTOFL GTM0TIM02IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM02IRQNOTIFY_CNTOFL GTM0TIM02IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM02IRQNOTIFY_GPROFL GTM0TIM02IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM02IRQNOTIFY_TODET GTM0TIM02IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM02IRQNOTIFY_GLITCHDET GTM0TIM02IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM02IRQEN GTM0TIM02IRQEN_BASE.UINT32
#define GTM0TIM02IRQEN_NEWVAL_IRQ_EN GTM0TIM02IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM02IRQEN_ECNTOFL_IRQ_EN GTM0TIM02IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM02IRQEN_CNTOFL_IRQ_EN GTM0TIM02IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM02IRQEN_GPROFL_IRQ_EN GTM0TIM02IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM02IRQEN_TODET_IRQ_EN GTM0TIM02IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM02IRQEN_GLITCHDET_IRQ_EN GTM0TIM02IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM02IRQFORCINT GTM0TIM02IRQFORCINT_BASE.UINT32
#define GTM0TIM02IRQFORCINT_TRG_NEWVAL GTM0TIM02IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM02IRQFORCINT_TRG_ECNTOFL GTM0TIM02IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM02IRQFORCINT_TRG_CNTOFL GTM0TIM02IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM02IRQFORCINT_TRG_GPROFL GTM0TIM02IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM02IRQFORCINT_TRG_TODET GTM0TIM02IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM02IRQFORCINT_TRG_GLITCHDET GTM0TIM02IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM02IRQMODE GTM0TIM02IRQMODE_BASE.UINT32
#define GTM0TIM02IRQMODE_IRQ_MODE GTM0TIM02IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM02EIRQEN GTM0TIM02EIRQEN_BASE.UINT32
#define GTM0TIM02EIRQEN_NEWVAL_EIRQ_EN GTM0TIM02EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM02EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM02EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM02EIRQEN_CNTOFL_EIRQ_EN GTM0TIM02EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM02EIRQEN_GPROFL_EIRQ_EN GTM0TIM02EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM02EIRQEN_TODET_IERQ_EN GTM0TIM02EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM02EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM02EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM03GPR0 GTM0TIM03GPR0_BASE.UINT32
#define GTM0TIM03GPR0_GPR0 GTM0TIM03GPR0_BASE.BIT._GPR0
#define GTM0TIM03GPR0_ECNT GTM0TIM03GPR0_BASE.BIT._ECNT
#define GTM0TIM03GPR1 GTM0TIM03GPR1_BASE.UINT32
#define GTM0TIM03GPR1_GPR1 GTM0TIM03GPR1_BASE.BIT._GPR1
#define GTM0TIM03GPR1_ECNT GTM0TIM03GPR1_BASE.BIT._ECNT
#define GTM0TIM03CNT GTM0TIM03CNT_BASE.UINT32
#define GTM0TIM03CNT_CNT GTM0TIM03CNT_BASE.BIT._CNT
#define GTM0TIM03ECNT GTM0TIM03ECNT_BASE.UINT32
#define GTM0TIM03ECNT_ECNT GTM0TIM03ECNT_BASE.BIT._ECNT
#define GTM0TIM03CNTS GTM0TIM03CNTS_BASE.UINT32
#define GTM0TIM03CNTS_CNTS GTM0TIM03CNTS_BASE.BIT._CNTS
#define GTM0TIM03CNTS_ECNT GTM0TIM03CNTS_BASE.BIT._ECNT
#define GTM0TIM03TDUC GTM0TIM03TDUC_BASE.UINT32
#define GTM0TIM03TDUC_TO_CNT GTM0TIM03TDUC_BASE.BIT._TO_CNT
#define GTM0TIM03TDUV GTM0TIM03TDUV_BASE.UINT32
#define GTM0TIM03TDUV_TOV GTM0TIM03TDUV_BASE.BIT._TOV
#define GTM0TIM03TDUV_TCS GTM0TIM03TDUV_BASE.BIT._TCS
#define GTM0TIM03FLTRE GTM0TIM03FLTRE_BASE.UINT32
#define GTM0TIM03FLTRE_FLT_RE GTM0TIM03FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM03FLTFE GTM0TIM03FLTFE_BASE.UINT32
#define GTM0TIM03FLTFE_FLT_FE GTM0TIM03FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM03CTRL GTM0TIM03CTRL_BASE.UINT32
#define GTM0TIM03CTRL_TIM_EN GTM0TIM03CTRL_BASE.BIT._TIM_EN
#define GTM0TIM03CTRL_TIM_MODE GTM0TIM03CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM03CTRL_OSM GTM0TIM03CTRL_BASE.BIT._OSM
#define GTM0TIM03CTRL_ARU_EN GTM0TIM03CTRL_BASE.BIT._ARU_EN
#define GTM0TIM03CTRL_CICTRL GTM0TIM03CTRL_BASE.BIT._CICTRL
#define GTM0TIM03CTRL_TBU0_SEL GTM0TIM03CTRL_BASE.BIT._TBU0_SEL
#define GTM0TIM03CTRL_GPR0_SEL GTM0TIM03CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM03CTRL_GPR1_SEL GTM0TIM03CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM03CTRL_CNTS_SEL GTM0TIM03CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM03CTRL_DSL GTM0TIM03CTRL_BASE.BIT._DSL
#define GTM0TIM03CTRL_ISL GTM0TIM03CTRL_BASE.BIT._ISL
#define GTM0TIM03CTRL_ECNT_RESET GTM0TIM03CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM03CTRL_FLT_EN GTM0TIM03CTRL_BASE.BIT._FLT_EN
#define GTM0TIM03CTRL_FLT_CNT_FRQ GTM0TIM03CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM03CTRL_EXT_CAP_EN GTM0TIM03CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM03CTRL_FLT_MODE_RE GTM0TIM03CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM03CTRL_FLT_CTR_RE GTM0TIM03CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM03CTRL_FLT_MODE_FE GTM0TIM03CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM03CTRL_FLT_CTR_FE GTM0TIM03CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM03CTRL_CLK_SEL GTM0TIM03CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM03CTRL_FR_ECNT_OFL GTM0TIM03CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM03CTRL_EGPR0_SEL GTM0TIM03CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM03CTRL_EGPR1_SEL GTM0TIM03CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM03CTRL_TOCTRL GTM0TIM03CTRL_BASE.BIT._TOCTRL
#define GTM0TIM03ECTRL GTM0TIM03ECTRL_BASE.UINT32
#define GTM0TIM03ECTRL_EXT_CAP_SRC GTM0TIM03ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM03IRQNOTIFY GTM0TIM03IRQNOTIFY_BASE.UINT32
#define GTM0TIM03IRQNOTIFY_NEWVAL GTM0TIM03IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM03IRQNOTIFY_ECNTOFL GTM0TIM03IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM03IRQNOTIFY_CNTOFL GTM0TIM03IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM03IRQNOTIFY_GPROFL GTM0TIM03IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM03IRQNOTIFY_TODET GTM0TIM03IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM03IRQNOTIFY_GLITCHDET GTM0TIM03IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM03IRQEN GTM0TIM03IRQEN_BASE.UINT32
#define GTM0TIM03IRQEN_NEWVAL_IRQ_EN GTM0TIM03IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM03IRQEN_ECNTOFL_IRQ_EN GTM0TIM03IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM03IRQEN_CNTOFL_IRQ_EN GTM0TIM03IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM03IRQEN_GPROFL_IRQ_EN GTM0TIM03IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM03IRQEN_TODET_IRQ_EN GTM0TIM03IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM03IRQEN_GLITCHDET_IRQ_EN GTM0TIM03IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM03IRQFORCINT GTM0TIM03IRQFORCINT_BASE.UINT32
#define GTM0TIM03IRQFORCINT_TRG_NEWVAL GTM0TIM03IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM03IRQFORCINT_TRG_ECNTOFL GTM0TIM03IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM03IRQFORCINT_TRG_CNTOFL GTM0TIM03IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM03IRQFORCINT_TRG_GPROFL GTM0TIM03IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM03IRQFORCINT_TRG_TODET GTM0TIM03IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM03IRQFORCINT_TRG_GLITCHDET GTM0TIM03IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM03IRQMODE GTM0TIM03IRQMODE_BASE.UINT32
#define GTM0TIM03IRQMODE_IRQ_MODE GTM0TIM03IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM03EIRQEN GTM0TIM03EIRQEN_BASE.UINT32
#define GTM0TIM03EIRQEN_NEWVAL_EIRQ_EN GTM0TIM03EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM03EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM03EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM03EIRQEN_CNTOFL_EIRQ_EN GTM0TIM03EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM03EIRQEN_GPROFL_EIRQ_EN GTM0TIM03EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM03EIRQEN_TODET_IERQ_EN GTM0TIM03EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM03EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM03EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM04GPR0 GTM0TIM04GPR0_BASE.UINT32
#define GTM0TIM04GPR0_GPR0 GTM0TIM04GPR0_BASE.BIT._GPR0
#define GTM0TIM04GPR0_ECNT GTM0TIM04GPR0_BASE.BIT._ECNT
#define GTM0TIM04GPR1 GTM0TIM04GPR1_BASE.UINT32
#define GTM0TIM04GPR1_GPR1 GTM0TIM04GPR1_BASE.BIT._GPR1
#define GTM0TIM04GPR1_ECNT GTM0TIM04GPR1_BASE.BIT._ECNT
#define GTM0TIM04CNT GTM0TIM04CNT_BASE.UINT32
#define GTM0TIM04CNT_CNT GTM0TIM04CNT_BASE.BIT._CNT
#define GTM0TIM04ECNT GTM0TIM04ECNT_BASE.UINT32
#define GTM0TIM04ECNT_ECNT GTM0TIM04ECNT_BASE.BIT._ECNT
#define GTM0TIM04CNTS GTM0TIM04CNTS_BASE.UINT32
#define GTM0TIM04CNTS_CNTS GTM0TIM04CNTS_BASE.BIT._CNTS
#define GTM0TIM04CNTS_ECNT GTM0TIM04CNTS_BASE.BIT._ECNT
#define GTM0TIM04TDUC GTM0TIM04TDUC_BASE.UINT32
#define GTM0TIM04TDUC_TO_CNT GTM0TIM04TDUC_BASE.BIT._TO_CNT
#define GTM0TIM04TDUV GTM0TIM04TDUV_BASE.UINT32
#define GTM0TIM04TDUV_TOV GTM0TIM04TDUV_BASE.BIT._TOV
#define GTM0TIM04TDUV_TCS GTM0TIM04TDUV_BASE.BIT._TCS
#define GTM0TIM04FLTRE GTM0TIM04FLTRE_BASE.UINT32
#define GTM0TIM04FLTRE_FLT_RE GTM0TIM04FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM04FLTFE GTM0TIM04FLTFE_BASE.UINT32
#define GTM0TIM04FLTFE_FLT_FE GTM0TIM04FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM04CTRL GTM0TIM04CTRL_BASE.UINT32
#define GTM0TIM04CTRL_TIM_EN GTM0TIM04CTRL_BASE.BIT._TIM_EN
#define GTM0TIM04CTRL_TIM_MODE GTM0TIM04CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM04CTRL_OSM GTM0TIM04CTRL_BASE.BIT._OSM
#define GTM0TIM04CTRL_ARU_EN GTM0TIM04CTRL_BASE.BIT._ARU_EN
#define GTM0TIM04CTRL_CICTRL GTM0TIM04CTRL_BASE.BIT._CICTRL
#define GTM0TIM04CTRL_TBU0_SEL GTM0TIM04CTRL_BASE.BIT._TBU0_SEL
#define GTM0TIM04CTRL_GPR0_SEL GTM0TIM04CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM04CTRL_GPR1_SEL GTM0TIM04CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM04CTRL_CNTS_SEL GTM0TIM04CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM04CTRL_DSL GTM0TIM04CTRL_BASE.BIT._DSL
#define GTM0TIM04CTRL_ISL GTM0TIM04CTRL_BASE.BIT._ISL
#define GTM0TIM04CTRL_ECNT_RESET GTM0TIM04CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM04CTRL_FLT_EN GTM0TIM04CTRL_BASE.BIT._FLT_EN
#define GTM0TIM04CTRL_FLT_CNT_FRQ GTM0TIM04CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM04CTRL_EXT_CAP_EN GTM0TIM04CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM04CTRL_FLT_MODE_RE GTM0TIM04CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM04CTRL_FLT_CTR_RE GTM0TIM04CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM04CTRL_FLT_MODE_FE GTM0TIM04CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM04CTRL_FLT_CTR_FE GTM0TIM04CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM04CTRL_CLK_SEL GTM0TIM04CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM04CTRL_FR_ECNT_OFL GTM0TIM04CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM04CTRL_EGPR0_SEL GTM0TIM04CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM04CTRL_EGPR1_SEL GTM0TIM04CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM04CTRL_TOCTRL GTM0TIM04CTRL_BASE.BIT._TOCTRL
#define GTM0TIM04ECTRL GTM0TIM04ECTRL_BASE.UINT32
#define GTM0TIM04ECTRL_EXT_CAP_SRC GTM0TIM04ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM04IRQNOTIFY GTM0TIM04IRQNOTIFY_BASE.UINT32
#define GTM0TIM04IRQNOTIFY_NEWVAL GTM0TIM04IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM04IRQNOTIFY_ECNTOFL GTM0TIM04IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM04IRQNOTIFY_CNTOFL GTM0TIM04IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM04IRQNOTIFY_GPROFL GTM0TIM04IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM04IRQNOTIFY_TODET GTM0TIM04IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM04IRQNOTIFY_GLITCHDET GTM0TIM04IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM04IRQEN GTM0TIM04IRQEN_BASE.UINT32
#define GTM0TIM04IRQEN_NEWVAL_IRQ_EN GTM0TIM04IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM04IRQEN_ECNTOFL_IRQ_EN GTM0TIM04IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM04IRQEN_CNTOFL_IRQ_EN GTM0TIM04IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM04IRQEN_GPROFL_IRQ_EN GTM0TIM04IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM04IRQEN_TODET_IRQ_EN GTM0TIM04IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM04IRQEN_GLITCHDET_IRQ_EN GTM0TIM04IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM04IRQFORCINT GTM0TIM04IRQFORCINT_BASE.UINT32
#define GTM0TIM04IRQFORCINT_TRG_NEWVAL GTM0TIM04IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM04IRQFORCINT_TRG_ECNTOFL GTM0TIM04IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM04IRQFORCINT_TRG_CNTOFL GTM0TIM04IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM04IRQFORCINT_TRG_GPROFL GTM0TIM04IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM04IRQFORCINT_TRG_TODET GTM0TIM04IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM04IRQFORCINT_TRG_GLITCHDET GTM0TIM04IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM04IRQMODE GTM0TIM04IRQMODE_BASE.UINT32
#define GTM0TIM04IRQMODE_IRQ_MODE GTM0TIM04IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM04EIRQEN GTM0TIM04EIRQEN_BASE.UINT32
#define GTM0TIM04EIRQEN_NEWVAL_EIRQ_EN GTM0TIM04EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM04EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM04EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM04EIRQEN_CNTOFL_EIRQ_EN GTM0TIM04EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM04EIRQEN_GPROFL_EIRQ_EN GTM0TIM04EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM04EIRQEN_TODET_IERQ_EN GTM0TIM04EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM04EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM04EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM05GPR0 GTM0TIM05GPR0_BASE.UINT32
#define GTM0TIM05GPR0_GPR0 GTM0TIM05GPR0_BASE.BIT._GPR0
#define GTM0TIM05GPR0_ECNT GTM0TIM05GPR0_BASE.BIT._ECNT
#define GTM0TIM05GPR1 GTM0TIM05GPR1_BASE.UINT32
#define GTM0TIM05GPR1_GPR1 GTM0TIM05GPR1_BASE.BIT._GPR1
#define GTM0TIM05GPR1_ECNT GTM0TIM05GPR1_BASE.BIT._ECNT
#define GTM0TIM05CNT GTM0TIM05CNT_BASE.UINT32
#define GTM0TIM05CNT_CNT GTM0TIM05CNT_BASE.BIT._CNT
#define GTM0TIM05ECNT GTM0TIM05ECNT_BASE.UINT32
#define GTM0TIM05ECNT_ECNT GTM0TIM05ECNT_BASE.BIT._ECNT
#define GTM0TIM05CNTS GTM0TIM05CNTS_BASE.UINT32
#define GTM0TIM05CNTS_CNTS GTM0TIM05CNTS_BASE.BIT._CNTS
#define GTM0TIM05CNTS_ECNT GTM0TIM05CNTS_BASE.BIT._ECNT
#define GTM0TIM05TDUC GTM0TIM05TDUC_BASE.UINT32
#define GTM0TIM05TDUC_TO_CNT GTM0TIM05TDUC_BASE.BIT._TO_CNT
#define GTM0TIM05TDUV GTM0TIM05TDUV_BASE.UINT32
#define GTM0TIM05TDUV_TOV GTM0TIM05TDUV_BASE.BIT._TOV
#define GTM0TIM05TDUV_TCS GTM0TIM05TDUV_BASE.BIT._TCS
#define GTM0TIM05FLTRE GTM0TIM05FLTRE_BASE.UINT32
#define GTM0TIM05FLTRE_FLT_RE GTM0TIM05FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM05FLTFE GTM0TIM05FLTFE_BASE.UINT32
#define GTM0TIM05FLTFE_FLT_FE GTM0TIM05FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM05CTRL GTM0TIM05CTRL_BASE.UINT32
#define GTM0TIM05CTRL_TIM_EN GTM0TIM05CTRL_BASE.BIT._TIM_EN
#define GTM0TIM05CTRL_TIM_MODE GTM0TIM05CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM05CTRL_OSM GTM0TIM05CTRL_BASE.BIT._OSM
#define GTM0TIM05CTRL_ARU_EN GTM0TIM05CTRL_BASE.BIT._ARU_EN
#define GTM0TIM05CTRL_CICTRL GTM0TIM05CTRL_BASE.BIT._CICTRL
#define GTM0TIM05CTRL_TBU0_SEL GTM0TIM05CTRL_BASE.BIT._TBU0_SEL
#define GTM0TIM05CTRL_GPR0_SEL GTM0TIM05CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM05CTRL_GPR1_SEL GTM0TIM05CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM05CTRL_CNTS_SEL GTM0TIM05CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM05CTRL_DSL GTM0TIM05CTRL_BASE.BIT._DSL
#define GTM0TIM05CTRL_ISL GTM0TIM05CTRL_BASE.BIT._ISL
#define GTM0TIM05CTRL_ECNT_RESET GTM0TIM05CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM05CTRL_FLT_EN GTM0TIM05CTRL_BASE.BIT._FLT_EN
#define GTM0TIM05CTRL_FLT_CNT_FRQ GTM0TIM05CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM05CTRL_EXT_CAP_EN GTM0TIM05CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM05CTRL_FLT_MODE_RE GTM0TIM05CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM05CTRL_FLT_CTR_RE GTM0TIM05CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM05CTRL_FLT_MODE_FE GTM0TIM05CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM05CTRL_FLT_CTR_FE GTM0TIM05CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM05CTRL_CLK_SEL GTM0TIM05CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM05CTRL_FR_ECNT_OFL GTM0TIM05CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM05CTRL_EGPR0_SEL GTM0TIM05CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM05CTRL_EGPR1_SEL GTM0TIM05CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM05CTRL_TOCTRL GTM0TIM05CTRL_BASE.BIT._TOCTRL
#define GTM0TIM05ECTRL GTM0TIM05ECTRL_BASE.UINT32
#define GTM0TIM05ECTRL_EXT_CAP_SRC GTM0TIM05ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM05IRQNOTIFY GTM0TIM05IRQNOTIFY_BASE.UINT32
#define GTM0TIM05IRQNOTIFY_NEWVAL GTM0TIM05IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM05IRQNOTIFY_ECNTOFL GTM0TIM05IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM05IRQNOTIFY_CNTOFL GTM0TIM05IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM05IRQNOTIFY_GPROFL GTM0TIM05IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM05IRQNOTIFY_TODET GTM0TIM05IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM05IRQNOTIFY_GLITCHDET GTM0TIM05IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM05IRQEN GTM0TIM05IRQEN_BASE.UINT32
#define GTM0TIM05IRQEN_NEWVAL_IRQ_EN GTM0TIM05IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM05IRQEN_ECNTOFL_IRQ_EN GTM0TIM05IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM05IRQEN_CNTOFL_IRQ_EN GTM0TIM05IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM05IRQEN_GPROFL_IRQ_EN GTM0TIM05IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM05IRQEN_TODET_IRQ_EN GTM0TIM05IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM05IRQEN_GLITCHDET_IRQ_EN GTM0TIM05IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM05IRQFORCINT GTM0TIM05IRQFORCINT_BASE.UINT32
#define GTM0TIM05IRQFORCINT_TRG_NEWVAL GTM0TIM05IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM05IRQFORCINT_TRG_ECNTOFL GTM0TIM05IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM05IRQFORCINT_TRG_CNTOFL GTM0TIM05IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM05IRQFORCINT_TRG_GPROFL GTM0TIM05IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM05IRQFORCINT_TRG_TODET GTM0TIM05IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM05IRQFORCINT_TRG_GLITCHDET GTM0TIM05IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM05IRQMODE GTM0TIM05IRQMODE_BASE.UINT32
#define GTM0TIM05IRQMODE_IRQ_MODE GTM0TIM05IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM05EIRQEN GTM0TIM05EIRQEN_BASE.UINT32
#define GTM0TIM05EIRQEN_NEWVAL_EIRQ_EN GTM0TIM05EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM05EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM05EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM05EIRQEN_CNTOFL_EIRQ_EN GTM0TIM05EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM05EIRQEN_GPROFL_EIRQ_EN GTM0TIM05EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM05EIRQEN_TODET_IERQ_EN GTM0TIM05EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM05EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM05EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM06GPR0 GTM0TIM06GPR0_BASE.UINT32
#define GTM0TIM06GPR0_GPR0 GTM0TIM06GPR0_BASE.BIT._GPR0
#define GTM0TIM06GPR0_ECNT GTM0TIM06GPR0_BASE.BIT._ECNT
#define GTM0TIM06GPR1 GTM0TIM06GPR1_BASE.UINT32
#define GTM0TIM06GPR1_GPR1 GTM0TIM06GPR1_BASE.BIT._GPR1
#define GTM0TIM06GPR1_ECNT GTM0TIM06GPR1_BASE.BIT._ECNT
#define GTM0TIM06CNT GTM0TIM06CNT_BASE.UINT32
#define GTM0TIM06CNT_CNT GTM0TIM06CNT_BASE.BIT._CNT
#define GTM0TIM06ECNT GTM0TIM06ECNT_BASE.UINT32
#define GTM0TIM06ECNT_ECNT GTM0TIM06ECNT_BASE.BIT._ECNT
#define GTM0TIM06CNTS GTM0TIM06CNTS_BASE.UINT32
#define GTM0TIM06CNTS_CNTS GTM0TIM06CNTS_BASE.BIT._CNTS
#define GTM0TIM06CNTS_ECNT GTM0TIM06CNTS_BASE.BIT._ECNT
#define GTM0TIM06TDUC GTM0TIM06TDUC_BASE.UINT32
#define GTM0TIM06TDUC_TO_CNT GTM0TIM06TDUC_BASE.BIT._TO_CNT
#define GTM0TIM06TDUV GTM0TIM06TDUV_BASE.UINT32
#define GTM0TIM06TDUV_TOV GTM0TIM06TDUV_BASE.BIT._TOV
#define GTM0TIM06TDUV_TCS GTM0TIM06TDUV_BASE.BIT._TCS
#define GTM0TIM06FLTRE GTM0TIM06FLTRE_BASE.UINT32
#define GTM0TIM06FLTRE_FLT_RE GTM0TIM06FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM06FLTFE GTM0TIM06FLTFE_BASE.UINT32
#define GTM0TIM06FLTFE_FLT_FE GTM0TIM06FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM06CTRL GTM0TIM06CTRL_BASE.UINT32
#define GTM0TIM06CTRL_TIM_EN GTM0TIM06CTRL_BASE.BIT._TIM_EN
#define GTM0TIM06CTRL_TIM_MODE GTM0TIM06CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM06CTRL_OSM GTM0TIM06CTRL_BASE.BIT._OSM
#define GTM0TIM06CTRL_ARU_EN GTM0TIM06CTRL_BASE.BIT._ARU_EN
#define GTM0TIM06CTRL_CICTRL GTM0TIM06CTRL_BASE.BIT._CICTRL
#define GTM0TIM06CTRL_TBU0_SEL GTM0TIM06CTRL_BASE.BIT._TBU0_SEL
#define GTM0TIM06CTRL_GPR0_SEL GTM0TIM06CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM06CTRL_GPR1_SEL GTM0TIM06CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM06CTRL_CNTS_SEL GTM0TIM06CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM06CTRL_DSL GTM0TIM06CTRL_BASE.BIT._DSL
#define GTM0TIM06CTRL_ISL GTM0TIM06CTRL_BASE.BIT._ISL
#define GTM0TIM06CTRL_ECNT_RESET GTM0TIM06CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM06CTRL_FLT_EN GTM0TIM06CTRL_BASE.BIT._FLT_EN
#define GTM0TIM06CTRL_FLT_CNT_FRQ GTM0TIM06CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM06CTRL_EXT_CAP_EN GTM0TIM06CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM06CTRL_FLT_MODE_RE GTM0TIM06CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM06CTRL_FLT_CTR_RE GTM0TIM06CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM06CTRL_FLT_MODE_FE GTM0TIM06CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM06CTRL_FLT_CTR_FE GTM0TIM06CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM06CTRL_CLK_SEL GTM0TIM06CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM06CTRL_FR_ECNT_OFL GTM0TIM06CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM06CTRL_EGPR0_SEL GTM0TIM06CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM06CTRL_EGPR1_SEL GTM0TIM06CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM06CTRL_TOCTRL GTM0TIM06CTRL_BASE.BIT._TOCTRL
#define GTM0TIM06ECTRL GTM0TIM06ECTRL_BASE.UINT32
#define GTM0TIM06ECTRL_EXT_CAP_SRC GTM0TIM06ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM06IRQNOTIFY GTM0TIM06IRQNOTIFY_BASE.UINT32
#define GTM0TIM06IRQNOTIFY_NEWVAL GTM0TIM06IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM06IRQNOTIFY_ECNTOFL GTM0TIM06IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM06IRQNOTIFY_CNTOFL GTM0TIM06IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM06IRQNOTIFY_GPROFL GTM0TIM06IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM06IRQNOTIFY_TODET GTM0TIM06IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM06IRQNOTIFY_GLITCHDET GTM0TIM06IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM06IRQEN GTM0TIM06IRQEN_BASE.UINT32
#define GTM0TIM06IRQEN_NEWVAL_IRQ_EN GTM0TIM06IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM06IRQEN_ECNTOFL_IRQ_EN GTM0TIM06IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM06IRQEN_CNTOFL_IRQ_EN GTM0TIM06IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM06IRQEN_GPROFL_IRQ_EN GTM0TIM06IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM06IRQEN_TODET_IRQ_EN GTM0TIM06IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM06IRQEN_GLITCHDET_IRQ_EN GTM0TIM06IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM06IRQFORCINT GTM0TIM06IRQFORCINT_BASE.UINT32
#define GTM0TIM06IRQFORCINT_TRG_NEWVAL GTM0TIM06IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM06IRQFORCINT_TRG_ECNTOFL GTM0TIM06IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM06IRQFORCINT_TRG_CNTOFL GTM0TIM06IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM06IRQFORCINT_TRG_GPROFL GTM0TIM06IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM06IRQFORCINT_TRG_TODET GTM0TIM06IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM06IRQFORCINT_TRG_GLITCHDET GTM0TIM06IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM06IRQMODE GTM0TIM06IRQMODE_BASE.UINT32
#define GTM0TIM06IRQMODE_IRQ_MODE GTM0TIM06IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM06EIRQEN GTM0TIM06EIRQEN_BASE.UINT32
#define GTM0TIM06EIRQEN_NEWVAL_EIRQ_EN GTM0TIM06EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM06EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM06EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM06EIRQEN_CNTOFL_EIRQ_EN GTM0TIM06EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM06EIRQEN_GPROFL_EIRQ_EN GTM0TIM06EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM06EIRQEN_TODET_IERQ_EN GTM0TIM06EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM06EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM06EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM07GPR0 GTM0TIM07GPR0_BASE.UINT32
#define GTM0TIM07GPR0_GPR0 GTM0TIM07GPR0_BASE.BIT._GPR0
#define GTM0TIM07GPR0_ECNT GTM0TIM07GPR0_BASE.BIT._ECNT
#define GTM0TIM07GPR1 GTM0TIM07GPR1_BASE.UINT32
#define GTM0TIM07GPR1_GPR1 GTM0TIM07GPR1_BASE.BIT._GPR1
#define GTM0TIM07GPR1_ECNT GTM0TIM07GPR1_BASE.BIT._ECNT
#define GTM0TIM07CNT GTM0TIM07CNT_BASE.UINT32
#define GTM0TIM07CNT_CNT GTM0TIM07CNT_BASE.BIT._CNT
#define GTM0TIM07ECNT GTM0TIM07ECNT_BASE.UINT32
#define GTM0TIM07ECNT_ECNT GTM0TIM07ECNT_BASE.BIT._ECNT
#define GTM0TIM07CNTS GTM0TIM07CNTS_BASE.UINT32
#define GTM0TIM07CNTS_CNTS GTM0TIM07CNTS_BASE.BIT._CNTS
#define GTM0TIM07CNTS_ECNT GTM0TIM07CNTS_BASE.BIT._ECNT
#define GTM0TIM07TDUC GTM0TIM07TDUC_BASE.UINT32
#define GTM0TIM07TDUC_TO_CNT GTM0TIM07TDUC_BASE.BIT._TO_CNT
#define GTM0TIM07TDUV GTM0TIM07TDUV_BASE.UINT32
#define GTM0TIM07TDUV_TOV GTM0TIM07TDUV_BASE.BIT._TOV
#define GTM0TIM07TDUV_TCS GTM0TIM07TDUV_BASE.BIT._TCS
#define GTM0TIM07FLTRE GTM0TIM07FLTRE_BASE.UINT32
#define GTM0TIM07FLTRE_FLT_RE GTM0TIM07FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM07FLTFE GTM0TIM07FLTFE_BASE.UINT32
#define GTM0TIM07FLTFE_FLT_FE GTM0TIM07FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM07CTRL GTM0TIM07CTRL_BASE.UINT32
#define GTM0TIM07CTRL_TIM_EN GTM0TIM07CTRL_BASE.BIT._TIM_EN
#define GTM0TIM07CTRL_TIM_MODE GTM0TIM07CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM07CTRL_OSM GTM0TIM07CTRL_BASE.BIT._OSM
#define GTM0TIM07CTRL_ARU_EN GTM0TIM07CTRL_BASE.BIT._ARU_EN
#define GTM0TIM07CTRL_CICTRL GTM0TIM07CTRL_BASE.BIT._CICTRL
#define GTM0TIM07CTRL_TBU0_SEL GTM0TIM07CTRL_BASE.BIT._TBU0_SEL
#define GTM0TIM07CTRL_GPR0_SEL GTM0TIM07CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM07CTRL_GPR1_SEL GTM0TIM07CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM07CTRL_CNTS_SEL GTM0TIM07CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM07CTRL_DSL GTM0TIM07CTRL_BASE.BIT._DSL
#define GTM0TIM07CTRL_ISL GTM0TIM07CTRL_BASE.BIT._ISL
#define GTM0TIM07CTRL_ECNT_RESET GTM0TIM07CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM07CTRL_FLT_EN GTM0TIM07CTRL_BASE.BIT._FLT_EN
#define GTM0TIM07CTRL_FLT_CNT_FRQ GTM0TIM07CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM07CTRL_EXT_CAP_EN GTM0TIM07CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM07CTRL_FLT_MODE_RE GTM0TIM07CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM07CTRL_FLT_CTR_RE GTM0TIM07CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM07CTRL_FLT_MODE_FE GTM0TIM07CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM07CTRL_FLT_CTR_FE GTM0TIM07CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM07CTRL_CLK_SEL GTM0TIM07CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM07CTRL_FR_ECNT_OFL GTM0TIM07CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM07CTRL_EGPR0_SEL GTM0TIM07CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM07CTRL_EGPR1_SEL GTM0TIM07CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM07CTRL_TOCTRL GTM0TIM07CTRL_BASE.BIT._TOCTRL
#define GTM0TIM07ECTRL GTM0TIM07ECTRL_BASE.UINT32
#define GTM0TIM07ECTRL_EXT_CAP_SRC GTM0TIM07ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM07IRQNOTIFY GTM0TIM07IRQNOTIFY_BASE.UINT32
#define GTM0TIM07IRQNOTIFY_NEWVAL GTM0TIM07IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM07IRQNOTIFY_ECNTOFL GTM0TIM07IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM07IRQNOTIFY_CNTOFL GTM0TIM07IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM07IRQNOTIFY_GPROFL GTM0TIM07IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM07IRQNOTIFY_TODET GTM0TIM07IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM07IRQNOTIFY_GLITCHDET GTM0TIM07IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM07IRQEN GTM0TIM07IRQEN_BASE.UINT32
#define GTM0TIM07IRQEN_NEWVAL_IRQ_EN GTM0TIM07IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM07IRQEN_ECNTOFL_IRQ_EN GTM0TIM07IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM07IRQEN_CNTOFL_IRQ_EN GTM0TIM07IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM07IRQEN_GPROFL_IRQ_EN GTM0TIM07IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM07IRQEN_TODET_IRQ_EN GTM0TIM07IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM07IRQEN_GLITCHDET_IRQ_EN GTM0TIM07IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM07IRQFORCINT GTM0TIM07IRQFORCINT_BASE.UINT32
#define GTM0TIM07IRQFORCINT_TRG_NEWVAL GTM0TIM07IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM07IRQFORCINT_TRG_ECNTOFL GTM0TIM07IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM07IRQFORCINT_TRG_CNTOFL GTM0TIM07IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM07IRQFORCINT_TRG_GPROFL GTM0TIM07IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM07IRQFORCINT_TRG_TODET GTM0TIM07IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM07IRQFORCINT_TRG_GLITCHDET GTM0TIM07IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM07IRQMODE GTM0TIM07IRQMODE_BASE.UINT32
#define GTM0TIM07IRQMODE_IRQ_MODE GTM0TIM07IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM07EIRQEN GTM0TIM07EIRQEN_BASE.UINT32
#define GTM0TIM07EIRQEN_NEWVAL_EIRQ_EN GTM0TIM07EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM07EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM07EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM07EIRQEN_CNTOFL_EIRQ_EN GTM0TIM07EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM07EIRQEN_GPROFL_EIRQ_EN GTM0TIM07EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM07EIRQEN_TODET_IERQ_EN GTM0TIM07EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM07EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM07EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM10GPR0 GTM0TIM10GPR0_BASE.UINT32
#define GTM0TIM10GPR0_GPR0 GTM0TIM10GPR0_BASE.BIT._GPR0
#define GTM0TIM10GPR0_ECNT GTM0TIM10GPR0_BASE.BIT._ECNT
#define GTM0TIM10GPR1 GTM0TIM10GPR1_BASE.UINT32
#define GTM0TIM10GPR1_GPR1 GTM0TIM10GPR1_BASE.BIT._GPR1
#define GTM0TIM10GPR1_ECNT GTM0TIM10GPR1_BASE.BIT._ECNT
#define GTM0TIM10CNT GTM0TIM10CNT_BASE.UINT32
#define GTM0TIM10CNT_CNT GTM0TIM10CNT_BASE.BIT._CNT
#define GTM0TIM10ECNT GTM0TIM10ECNT_BASE.UINT32
#define GTM0TIM10ECNT_ECNT GTM0TIM10ECNT_BASE.BIT._ECNT
#define GTM0TIM10CNTS GTM0TIM10CNTS_BASE.UINT32
#define GTM0TIM10CNTS_CNTS GTM0TIM10CNTS_BASE.BIT._CNTS
#define GTM0TIM10CNTS_ECNT GTM0TIM10CNTS_BASE.BIT._ECNT
#define GTM0TIM10TDUC GTM0TIM10TDUC_BASE.UINT32
#define GTM0TIM10TDUC_TO_CNT GTM0TIM10TDUC_BASE.BIT._TO_CNT
#define GTM0TIM10TDUV GTM0TIM10TDUV_BASE.UINT32
#define GTM0TIM10TDUV_TOV GTM0TIM10TDUV_BASE.BIT._TOV
#define GTM0TIM10TDUV_TCS GTM0TIM10TDUV_BASE.BIT._TCS
#define GTM0TIM10FLTRE GTM0TIM10FLTRE_BASE.UINT32
#define GTM0TIM10FLTRE_FLT_RE GTM0TIM10FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM10FLTFE GTM0TIM10FLTFE_BASE.UINT32
#define GTM0TIM10FLTFE_FLT_FE GTM0TIM10FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM10CTRL GTM0TIM10CTRL_BASE.UINT32
#define GTM0TIM10CTRL_TIM_EN GTM0TIM10CTRL_BASE.BIT._TIM_EN
#define GTM0TIM10CTRL_TIM_MODE GTM0TIM10CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM10CTRL_OSM GTM0TIM10CTRL_BASE.BIT._OSM
#define GTM0TIM10CTRL_ARU_EN GTM0TIM10CTRL_BASE.BIT._ARU_EN
#define GTM0TIM10CTRL_CICTRL GTM0TIM10CTRL_BASE.BIT._CICTRL
#define GTM0TIM10CTRL_GPR0_SEL GTM0TIM10CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM10CTRL_GPR1_SEL GTM0TIM10CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM10CTRL_CNTS_SEL GTM0TIM10CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM10CTRL_DSL GTM0TIM10CTRL_BASE.BIT._DSL
#define GTM0TIM10CTRL_ISL GTM0TIM10CTRL_BASE.BIT._ISL
#define GTM0TIM10CTRL_ECNT_RESET GTM0TIM10CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM10CTRL_FLT_EN GTM0TIM10CTRL_BASE.BIT._FLT_EN
#define GTM0TIM10CTRL_FLT_CNT_FRQ GTM0TIM10CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM10CTRL_EXT_CAP_EN GTM0TIM10CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM10CTRL_FLT_MODE_RE GTM0TIM10CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM10CTRL_FLT_CTR_RE GTM0TIM10CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM10CTRL_FLT_MODE_FE GTM0TIM10CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM10CTRL_FLT_CTR_FE GTM0TIM10CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM10CTRL_CLK_SEL GTM0TIM10CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM10CTRL_FR_ECNT_OFL GTM0TIM10CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM10CTRL_EGPR0_SEL GTM0TIM10CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM10CTRL_EGPR1_SEL GTM0TIM10CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM10CTRL_TOCTRL GTM0TIM10CTRL_BASE.BIT._TOCTRL
#define GTM0TIM10ECTRL GTM0TIM10ECTRL_BASE.UINT32
#define GTM0TIM10ECTRL_EXT_CAP_SRC GTM0TIM10ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM10IRQNOTIFY GTM0TIM10IRQNOTIFY_BASE.UINT32
#define GTM0TIM10IRQNOTIFY_NEWVAL GTM0TIM10IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM10IRQNOTIFY_ECNTOFL GTM0TIM10IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM10IRQNOTIFY_CNTOFL GTM0TIM10IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM10IRQNOTIFY_GPROFL GTM0TIM10IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM10IRQNOTIFY_TODET GTM0TIM10IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM10IRQNOTIFY_GLITCHDET GTM0TIM10IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM10IRQEN GTM0TIM10IRQEN_BASE.UINT32
#define GTM0TIM10IRQEN_NEWVAL_IRQ_EN GTM0TIM10IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM10IRQEN_ECNTOFL_IRQ_EN GTM0TIM10IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM10IRQEN_CNTOFL_IRQ_EN GTM0TIM10IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM10IRQEN_GPROFL_IRQ_EN GTM0TIM10IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM10IRQEN_TODET_IRQ_EN GTM0TIM10IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM10IRQEN_GLITCHDET_IRQ_EN GTM0TIM10IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM10IRQFORCINT GTM0TIM10IRQFORCINT_BASE.UINT32
#define GTM0TIM10IRQFORCINT_TRG_NEWVAL GTM0TIM10IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM10IRQFORCINT_TRG_ECNTOFL GTM0TIM10IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM10IRQFORCINT_TRG_CNTOFL GTM0TIM10IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM10IRQFORCINT_TRG_GPROFL GTM0TIM10IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM10IRQFORCINT_TRG_TODET GTM0TIM10IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM10IRQFORCINT_TRG_GLITCHDET GTM0TIM10IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM10IRQMODE GTM0TIM10IRQMODE_BASE.UINT32
#define GTM0TIM10IRQMODE_IRQ_MODE GTM0TIM10IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM10EIRQEN GTM0TIM10EIRQEN_BASE.UINT32
#define GTM0TIM10EIRQEN_NEWVAL_EIRQ_EN GTM0TIM10EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM10EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM10EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM10EIRQEN_CNTOFL_EIRQ_EN GTM0TIM10EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM10EIRQEN_GPROFL_EIRQ_EN GTM0TIM10EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM10EIRQEN_TODET_IERQ_EN GTM0TIM10EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM10EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM10EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM1INPVAL GTM0TIM1INPVAL_BASE.UINT32
#define GTM0TIM1INPVAL_F_OUT GTM0TIM1INPVAL_BASE.BIT._F_OUT
#define GTM0TIM1INPVAL_F_IN GTM0TIM1INPVAL_BASE.BIT._F_IN
#define GTM0TIM1INPVAL_TIM_IN GTM0TIM1INPVAL_BASE.BIT._TIM_IN
#define GTM0TIM1INSRC GTM0TIM1INSRC_BASE.UINT32
#define GTM0TIM1INSRC_VAL_0 GTM0TIM1INSRC_BASE.BIT._VAL_0
#define GTM0TIM1INSRC_MODE_0 GTM0TIM1INSRC_BASE.BIT._MODE_0
#define GTM0TIM1INSRC_VAL_1 GTM0TIM1INSRC_BASE.BIT._VAL_1
#define GTM0TIM1INSRC_MODE_1 GTM0TIM1INSRC_BASE.BIT._MODE_1
#define GTM0TIM1INSRC_VAL_2 GTM0TIM1INSRC_BASE.BIT._VAL_2
#define GTM0TIM1INSRC_MODE_2 GTM0TIM1INSRC_BASE.BIT._MODE_2
#define GTM0TIM1INSRC_VAL_3 GTM0TIM1INSRC_BASE.BIT._VAL_3
#define GTM0TIM1INSRC_MODE_3 GTM0TIM1INSRC_BASE.BIT._MODE_3
#define GTM0TIM1INSRC_VAL_4 GTM0TIM1INSRC_BASE.BIT._VAL_4
#define GTM0TIM1INSRC_MODE_4 GTM0TIM1INSRC_BASE.BIT._MODE_4
#define GTM0TIM1INSRC_VAL_5 GTM0TIM1INSRC_BASE.BIT._VAL_5
#define GTM0TIM1INSRC_MODE_5 GTM0TIM1INSRC_BASE.BIT._MODE_5
#define GTM0TIM1INSRC_VAL_6 GTM0TIM1INSRC_BASE.BIT._VAL_6
#define GTM0TIM1INSRC_MODE_6 GTM0TIM1INSRC_BASE.BIT._MODE_6
#define GTM0TIM1INSRC_VAL_7 GTM0TIM1INSRC_BASE.BIT._VAL_7
#define GTM0TIM1INSRC_MODE_7 GTM0TIM1INSRC_BASE.BIT._MODE_7
#define GTM0TIM1RST GTM0TIM1RST_BASE.UINT32
#define GTM0TIM1RST_RST_CH0 GTM0TIM1RST_BASE.BIT._RST_CH0
#define GTM0TIM1RST_RST_CH1 GTM0TIM1RST_BASE.BIT._RST_CH1
#define GTM0TIM1RST_RST_CH2 GTM0TIM1RST_BASE.BIT._RST_CH2
#define GTM0TIM1RST_RST_CH3 GTM0TIM1RST_BASE.BIT._RST_CH3
#define GTM0TIM1RST_RST_CH4 GTM0TIM1RST_BASE.BIT._RST_CH4
#define GTM0TIM1RST_RST_CH5 GTM0TIM1RST_BASE.BIT._RST_CH5
#define GTM0TIM1RST_RST_CH6 GTM0TIM1RST_BASE.BIT._RST_CH6
#define GTM0TIM1RST_RST_CH7 GTM0TIM1RST_BASE.BIT._RST_CH7
#define GTM0TIM11GPR0 GTM0TIM11GPR0_BASE.UINT32
#define GTM0TIM11GPR0_GPR0 GTM0TIM11GPR0_BASE.BIT._GPR0
#define GTM0TIM11GPR0_ECNT GTM0TIM11GPR0_BASE.BIT._ECNT
#define GTM0TIM11GPR1 GTM0TIM11GPR1_BASE.UINT32
#define GTM0TIM11GPR1_GPR1 GTM0TIM11GPR1_BASE.BIT._GPR1
#define GTM0TIM11GPR1_ECNT GTM0TIM11GPR1_BASE.BIT._ECNT
#define GTM0TIM11CNT GTM0TIM11CNT_BASE.UINT32
#define GTM0TIM11CNT_CNT GTM0TIM11CNT_BASE.BIT._CNT
#define GTM0TIM11ECNT GTM0TIM11ECNT_BASE.UINT32
#define GTM0TIM11ECNT_ECNT GTM0TIM11ECNT_BASE.BIT._ECNT
#define GTM0TIM11CNTS GTM0TIM11CNTS_BASE.UINT32
#define GTM0TIM11CNTS_CNTS GTM0TIM11CNTS_BASE.BIT._CNTS
#define GTM0TIM11CNTS_ECNT GTM0TIM11CNTS_BASE.BIT._ECNT
#define GTM0TIM11TDUC GTM0TIM11TDUC_BASE.UINT32
#define GTM0TIM11TDUC_TO_CNT GTM0TIM11TDUC_BASE.BIT._TO_CNT
#define GTM0TIM11TDUV GTM0TIM11TDUV_BASE.UINT32
#define GTM0TIM11TDUV_TOV GTM0TIM11TDUV_BASE.BIT._TOV
#define GTM0TIM11TDUV_TCS GTM0TIM11TDUV_BASE.BIT._TCS
#define GTM0TIM11FLTRE GTM0TIM11FLTRE_BASE.UINT32
#define GTM0TIM11FLTRE_FLT_RE GTM0TIM11FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM11FLTFE GTM0TIM11FLTFE_BASE.UINT32
#define GTM0TIM11FLTFE_FLT_FE GTM0TIM11FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM11CTRL GTM0TIM11CTRL_BASE.UINT32
#define GTM0TIM11CTRL_TIM_EN GTM0TIM11CTRL_BASE.BIT._TIM_EN
#define GTM0TIM11CTRL_TIM_MODE GTM0TIM11CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM11CTRL_OSM GTM0TIM11CTRL_BASE.BIT._OSM
#define GTM0TIM11CTRL_ARU_EN GTM0TIM11CTRL_BASE.BIT._ARU_EN
#define GTM0TIM11CTRL_CICTRL GTM0TIM11CTRL_BASE.BIT._CICTRL
#define GTM0TIM11CTRL_GPR0_SEL GTM0TIM11CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM11CTRL_GPR1_SEL GTM0TIM11CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM11CTRL_CNTS_SEL GTM0TIM11CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM11CTRL_DSL GTM0TIM11CTRL_BASE.BIT._DSL
#define GTM0TIM11CTRL_ISL GTM0TIM11CTRL_BASE.BIT._ISL
#define GTM0TIM11CTRL_ECNT_RESET GTM0TIM11CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM11CTRL_FLT_EN GTM0TIM11CTRL_BASE.BIT._FLT_EN
#define GTM0TIM11CTRL_FLT_CNT_FRQ GTM0TIM11CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM11CTRL_EXT_CAP_EN GTM0TIM11CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM11CTRL_FLT_MODE_RE GTM0TIM11CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM11CTRL_FLT_CTR_RE GTM0TIM11CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM11CTRL_FLT_MODE_FE GTM0TIM11CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM11CTRL_FLT_CTR_FE GTM0TIM11CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM11CTRL_CLK_SEL GTM0TIM11CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM11CTRL_FR_ECNT_OFL GTM0TIM11CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM11CTRL_EGPR0_SEL GTM0TIM11CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM11CTRL_EGPR1_SEL GTM0TIM11CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM11CTRL_TOCTRL GTM0TIM11CTRL_BASE.BIT._TOCTRL
#define GTM0TIM11ECTRL GTM0TIM11ECTRL_BASE.UINT32
#define GTM0TIM11ECTRL_EXT_CAP_SRC GTM0TIM11ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM11IRQNOTIFY GTM0TIM11IRQNOTIFY_BASE.UINT32
#define GTM0TIM11IRQNOTIFY_NEWVAL GTM0TIM11IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM11IRQNOTIFY_ECNTOFL GTM0TIM11IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM11IRQNOTIFY_CNTOFL GTM0TIM11IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM11IRQNOTIFY_GPROFL GTM0TIM11IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM11IRQNOTIFY_TODET GTM0TIM11IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM11IRQNOTIFY_GLITCHDET GTM0TIM11IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM11IRQEN GTM0TIM11IRQEN_BASE.UINT32
#define GTM0TIM11IRQEN_NEWVAL_IRQ_EN GTM0TIM11IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM11IRQEN_ECNTOFL_IRQ_EN GTM0TIM11IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM11IRQEN_CNTOFL_IRQ_EN GTM0TIM11IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM11IRQEN_GPROFL_IRQ_EN GTM0TIM11IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM11IRQEN_TODET_IRQ_EN GTM0TIM11IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM11IRQEN_GLITCHDET_IRQ_EN GTM0TIM11IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM11IRQFORCINT GTM0TIM11IRQFORCINT_BASE.UINT32
#define GTM0TIM11IRQFORCINT_TRG_NEWVAL GTM0TIM11IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM11IRQFORCINT_TRG_ECNTOFL GTM0TIM11IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM11IRQFORCINT_TRG_CNTOFL GTM0TIM11IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM11IRQFORCINT_TRG_GPROFL GTM0TIM11IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM11IRQFORCINT_TRG_TODET GTM0TIM11IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM11IRQFORCINT_TRG_GLITCHDET GTM0TIM11IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM11IRQMODE GTM0TIM11IRQMODE_BASE.UINT32
#define GTM0TIM11IRQMODE_IRQ_MODE GTM0TIM11IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM11EIRQEN GTM0TIM11EIRQEN_BASE.UINT32
#define GTM0TIM11EIRQEN_NEWVAL_EIRQ_EN GTM0TIM11EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM11EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM11EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM11EIRQEN_CNTOFL_EIRQ_EN GTM0TIM11EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM11EIRQEN_GPROFL_EIRQ_EN GTM0TIM11EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM11EIRQEN_TODET_IERQ_EN GTM0TIM11EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM11EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM11EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM12GPR0 GTM0TIM12GPR0_BASE.UINT32
#define GTM0TIM12GPR0_GPR0 GTM0TIM12GPR0_BASE.BIT._GPR0
#define GTM0TIM12GPR0_ECNT GTM0TIM12GPR0_BASE.BIT._ECNT
#define GTM0TIM12GPR1 GTM0TIM12GPR1_BASE.UINT32
#define GTM0TIM12GPR1_GPR1 GTM0TIM12GPR1_BASE.BIT._GPR1
#define GTM0TIM12GPR1_ECNT GTM0TIM12GPR1_BASE.BIT._ECNT
#define GTM0TIM12CNT GTM0TIM12CNT_BASE.UINT32
#define GTM0TIM12CNT_CNT GTM0TIM12CNT_BASE.BIT._CNT
#define GTM0TIM12ECNT GTM0TIM12ECNT_BASE.UINT32
#define GTM0TIM12ECNT_ECNT GTM0TIM12ECNT_BASE.BIT._ECNT
#define GTM0TIM12CNTS GTM0TIM12CNTS_BASE.UINT32
#define GTM0TIM12CNTS_CNTS GTM0TIM12CNTS_BASE.BIT._CNTS
#define GTM0TIM12CNTS_ECNT GTM0TIM12CNTS_BASE.BIT._ECNT
#define GTM0TIM12TDUC GTM0TIM12TDUC_BASE.UINT32
#define GTM0TIM12TDUC_TO_CNT GTM0TIM12TDUC_BASE.BIT._TO_CNT
#define GTM0TIM12TDUV GTM0TIM12TDUV_BASE.UINT32
#define GTM0TIM12TDUV_TOV GTM0TIM12TDUV_BASE.BIT._TOV
#define GTM0TIM12TDUV_TCS GTM0TIM12TDUV_BASE.BIT._TCS
#define GTM0TIM12FLTRE GTM0TIM12FLTRE_BASE.UINT32
#define GTM0TIM12FLTRE_FLT_RE GTM0TIM12FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM12FLTFE GTM0TIM12FLTFE_BASE.UINT32
#define GTM0TIM12FLTFE_FLT_FE GTM0TIM12FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM12CTRL GTM0TIM12CTRL_BASE.UINT32
#define GTM0TIM12CTRL_TIM_EN GTM0TIM12CTRL_BASE.BIT._TIM_EN
#define GTM0TIM12CTRL_TIM_MODE GTM0TIM12CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM12CTRL_OSM GTM0TIM12CTRL_BASE.BIT._OSM
#define GTM0TIM12CTRL_ARU_EN GTM0TIM12CTRL_BASE.BIT._ARU_EN
#define GTM0TIM12CTRL_CICTRL GTM0TIM12CTRL_BASE.BIT._CICTRL
#define GTM0TIM12CTRL_GPR0_SEL GTM0TIM12CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM12CTRL_GPR1_SEL GTM0TIM12CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM12CTRL_CNTS_SEL GTM0TIM12CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM12CTRL_DSL GTM0TIM12CTRL_BASE.BIT._DSL
#define GTM0TIM12CTRL_ISL GTM0TIM12CTRL_BASE.BIT._ISL
#define GTM0TIM12CTRL_ECNT_RESET GTM0TIM12CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM12CTRL_FLT_EN GTM0TIM12CTRL_BASE.BIT._FLT_EN
#define GTM0TIM12CTRL_FLT_CNT_FRQ GTM0TIM12CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM12CTRL_EXT_CAP_EN GTM0TIM12CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM12CTRL_FLT_MODE_RE GTM0TIM12CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM12CTRL_FLT_CTR_RE GTM0TIM12CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM12CTRL_FLT_MODE_FE GTM0TIM12CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM12CTRL_FLT_CTR_FE GTM0TIM12CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM12CTRL_CLK_SEL GTM0TIM12CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM12CTRL_FR_ECNT_OFL GTM0TIM12CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM12CTRL_EGPR0_SEL GTM0TIM12CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM12CTRL_EGPR1_SEL GTM0TIM12CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM12CTRL_TOCTRL GTM0TIM12CTRL_BASE.BIT._TOCTRL
#define GTM0TIM12ECTRL GTM0TIM12ECTRL_BASE.UINT32
#define GTM0TIM12ECTRL_EXT_CAP_SRC GTM0TIM12ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM12IRQNOTIFY GTM0TIM12IRQNOTIFY_BASE.UINT32
#define GTM0TIM12IRQNOTIFY_NEWVAL GTM0TIM12IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM12IRQNOTIFY_ECNTOFL GTM0TIM12IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM12IRQNOTIFY_CNTOFL GTM0TIM12IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM12IRQNOTIFY_GPROFL GTM0TIM12IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM12IRQNOTIFY_TODET GTM0TIM12IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM12IRQNOTIFY_GLITCHDET GTM0TIM12IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM12IRQEN GTM0TIM12IRQEN_BASE.UINT32
#define GTM0TIM12IRQEN_NEWVAL_IRQ_EN GTM0TIM12IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM12IRQEN_ECNTOFL_IRQ_EN GTM0TIM12IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM12IRQEN_CNTOFL_IRQ_EN GTM0TIM12IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM12IRQEN_GPROFL_IRQ_EN GTM0TIM12IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM12IRQEN_TODET_IRQ_EN GTM0TIM12IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM12IRQEN_GLITCHDET_IRQ_EN GTM0TIM12IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM12IRQFORCINT GTM0TIM12IRQFORCINT_BASE.UINT32
#define GTM0TIM12IRQFORCINT_TRG_NEWVAL GTM0TIM12IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM12IRQFORCINT_TRG_ECNTOFL GTM0TIM12IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM12IRQFORCINT_TRG_CNTOFL GTM0TIM12IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM12IRQFORCINT_TRG_GPROFL GTM0TIM12IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM12IRQFORCINT_TRG_TODET GTM0TIM12IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM12IRQFORCINT_TRG_GLITCHDET GTM0TIM12IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM12IRQMODE GTM0TIM12IRQMODE_BASE.UINT32
#define GTM0TIM12IRQMODE_IRQ_MODE GTM0TIM12IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM12EIRQEN GTM0TIM12EIRQEN_BASE.UINT32
#define GTM0TIM12EIRQEN_NEWVAL_EIRQ_EN GTM0TIM12EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM12EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM12EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM12EIRQEN_CNTOFL_EIRQ_EN GTM0TIM12EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM12EIRQEN_GPROFL_EIRQ_EN GTM0TIM12EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM12EIRQEN_TODET_IERQ_EN GTM0TIM12EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM12EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM12EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM13GPR0 GTM0TIM13GPR0_BASE.UINT32
#define GTM0TIM13GPR0_GPR0 GTM0TIM13GPR0_BASE.BIT._GPR0
#define GTM0TIM13GPR0_ECNT GTM0TIM13GPR0_BASE.BIT._ECNT
#define GTM0TIM13GPR1 GTM0TIM13GPR1_BASE.UINT32
#define GTM0TIM13GPR1_GPR1 GTM0TIM13GPR1_BASE.BIT._GPR1
#define GTM0TIM13GPR1_ECNT GTM0TIM13GPR1_BASE.BIT._ECNT
#define GTM0TIM13CNT GTM0TIM13CNT_BASE.UINT32
#define GTM0TIM13CNT_CNT GTM0TIM13CNT_BASE.BIT._CNT
#define GTM0TIM13ECNT GTM0TIM13ECNT_BASE.UINT32
#define GTM0TIM13ECNT_ECNT GTM0TIM13ECNT_BASE.BIT._ECNT
#define GTM0TIM13CNTS GTM0TIM13CNTS_BASE.UINT32
#define GTM0TIM13CNTS_CNTS GTM0TIM13CNTS_BASE.BIT._CNTS
#define GTM0TIM13CNTS_ECNT GTM0TIM13CNTS_BASE.BIT._ECNT
#define GTM0TIM13TDUC GTM0TIM13TDUC_BASE.UINT32
#define GTM0TIM13TDUC_TO_CNT GTM0TIM13TDUC_BASE.BIT._TO_CNT
#define GTM0TIM13TDUV GTM0TIM13TDUV_BASE.UINT32
#define GTM0TIM13TDUV_TOV GTM0TIM13TDUV_BASE.BIT._TOV
#define GTM0TIM13TDUV_TCS GTM0TIM13TDUV_BASE.BIT._TCS
#define GTM0TIM13FLTRE GTM0TIM13FLTRE_BASE.UINT32
#define GTM0TIM13FLTRE_FLT_RE GTM0TIM13FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM13FLTFE GTM0TIM13FLTFE_BASE.UINT32
#define GTM0TIM13FLTFE_FLT_FE GTM0TIM13FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM13CTRL GTM0TIM13CTRL_BASE.UINT32
#define GTM0TIM13CTRL_TIM_EN GTM0TIM13CTRL_BASE.BIT._TIM_EN
#define GTM0TIM13CTRL_TIM_MODE GTM0TIM13CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM13CTRL_OSM GTM0TIM13CTRL_BASE.BIT._OSM
#define GTM0TIM13CTRL_ARU_EN GTM0TIM13CTRL_BASE.BIT._ARU_EN
#define GTM0TIM13CTRL_CICTRL GTM0TIM13CTRL_BASE.BIT._CICTRL
#define GTM0TIM13CTRL_GPR0_SEL GTM0TIM13CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM13CTRL_GPR1_SEL GTM0TIM13CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM13CTRL_CNTS_SEL GTM0TIM13CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM13CTRL_DSL GTM0TIM13CTRL_BASE.BIT._DSL
#define GTM0TIM13CTRL_ISL GTM0TIM13CTRL_BASE.BIT._ISL
#define GTM0TIM13CTRL_ECNT_RESET GTM0TIM13CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM13CTRL_FLT_EN GTM0TIM13CTRL_BASE.BIT._FLT_EN
#define GTM0TIM13CTRL_FLT_CNT_FRQ GTM0TIM13CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM13CTRL_EXT_CAP_EN GTM0TIM13CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM13CTRL_FLT_MODE_RE GTM0TIM13CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM13CTRL_FLT_CTR_RE GTM0TIM13CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM13CTRL_FLT_MODE_FE GTM0TIM13CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM13CTRL_FLT_CTR_FE GTM0TIM13CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM13CTRL_CLK_SEL GTM0TIM13CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM13CTRL_FR_ECNT_OFL GTM0TIM13CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM13CTRL_EGPR0_SEL GTM0TIM13CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM13CTRL_EGPR1_SEL GTM0TIM13CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM13CTRL_TOCTRL GTM0TIM13CTRL_BASE.BIT._TOCTRL
#define GTM0TIM13ECTRL GTM0TIM13ECTRL_BASE.UINT32
#define GTM0TIM13ECTRL_EXT_CAP_SRC GTM0TIM13ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM13IRQNOTIFY GTM0TIM13IRQNOTIFY_BASE.UINT32
#define GTM0TIM13IRQNOTIFY_NEWVAL GTM0TIM13IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM13IRQNOTIFY_ECNTOFL GTM0TIM13IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM13IRQNOTIFY_CNTOFL GTM0TIM13IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM13IRQNOTIFY_GPROFL GTM0TIM13IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM13IRQNOTIFY_TODET GTM0TIM13IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM13IRQNOTIFY_GLITCHDET GTM0TIM13IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM13IRQEN GTM0TIM13IRQEN_BASE.UINT32
#define GTM0TIM13IRQEN_NEWVAL_IRQ_EN GTM0TIM13IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM13IRQEN_ECNTOFL_IRQ_EN GTM0TIM13IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM13IRQEN_CNTOFL_IRQ_EN GTM0TIM13IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM13IRQEN_GPROFL_IRQ_EN GTM0TIM13IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM13IRQEN_TODET_IRQ_EN GTM0TIM13IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM13IRQEN_GLITCHDET_IRQ_EN GTM0TIM13IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM13IRQFORCINT GTM0TIM13IRQFORCINT_BASE.UINT32
#define GTM0TIM13IRQFORCINT_TRG_NEWVAL GTM0TIM13IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM13IRQFORCINT_TRG_ECNTOFL GTM0TIM13IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM13IRQFORCINT_TRG_CNTOFL GTM0TIM13IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM13IRQFORCINT_TRG_GPROFL GTM0TIM13IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM13IRQFORCINT_TRG_TODET GTM0TIM13IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM13IRQFORCINT_TRG_GLITCHDET GTM0TIM13IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM13IRQMODE GTM0TIM13IRQMODE_BASE.UINT32
#define GTM0TIM13IRQMODE_IRQ_MODE GTM0TIM13IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM13EIRQEN GTM0TIM13EIRQEN_BASE.UINT32
#define GTM0TIM13EIRQEN_NEWVAL_EIRQ_EN GTM0TIM13EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM13EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM13EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM13EIRQEN_CNTOFL_EIRQ_EN GTM0TIM13EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM13EIRQEN_GPROFL_EIRQ_EN GTM0TIM13EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM13EIRQEN_TODET_IERQ_EN GTM0TIM13EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM13EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM13EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM14GPR0 GTM0TIM14GPR0_BASE.UINT32
#define GTM0TIM14GPR0_GPR0 GTM0TIM14GPR0_BASE.BIT._GPR0
#define GTM0TIM14GPR0_ECNT GTM0TIM14GPR0_BASE.BIT._ECNT
#define GTM0TIM14GPR1 GTM0TIM14GPR1_BASE.UINT32
#define GTM0TIM14GPR1_GPR1 GTM0TIM14GPR1_BASE.BIT._GPR1
#define GTM0TIM14GPR1_ECNT GTM0TIM14GPR1_BASE.BIT._ECNT
#define GTM0TIM14CNT GTM0TIM14CNT_BASE.UINT32
#define GTM0TIM14CNT_CNT GTM0TIM14CNT_BASE.BIT._CNT
#define GTM0TIM14ECNT GTM0TIM14ECNT_BASE.UINT32
#define GTM0TIM14ECNT_ECNT GTM0TIM14ECNT_BASE.BIT._ECNT
#define GTM0TIM14CNTS GTM0TIM14CNTS_BASE.UINT32
#define GTM0TIM14CNTS_CNTS GTM0TIM14CNTS_BASE.BIT._CNTS
#define GTM0TIM14CNTS_ECNT GTM0TIM14CNTS_BASE.BIT._ECNT
#define GTM0TIM14TDUC GTM0TIM14TDUC_BASE.UINT32
#define GTM0TIM14TDUC_TO_CNT GTM0TIM14TDUC_BASE.BIT._TO_CNT
#define GTM0TIM14TDUV GTM0TIM14TDUV_BASE.UINT32
#define GTM0TIM14TDUV_TOV GTM0TIM14TDUV_BASE.BIT._TOV
#define GTM0TIM14TDUV_TCS GTM0TIM14TDUV_BASE.BIT._TCS
#define GTM0TIM14FLTRE GTM0TIM14FLTRE_BASE.UINT32
#define GTM0TIM14FLTRE_FLT_RE GTM0TIM14FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM14FLTFE GTM0TIM14FLTFE_BASE.UINT32
#define GTM0TIM14FLTFE_FLT_FE GTM0TIM14FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM14CTRL GTM0TIM14CTRL_BASE.UINT32
#define GTM0TIM14CTRL_TIM_EN GTM0TIM14CTRL_BASE.BIT._TIM_EN
#define GTM0TIM14CTRL_TIM_MODE GTM0TIM14CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM14CTRL_OSM GTM0TIM14CTRL_BASE.BIT._OSM
#define GTM0TIM14CTRL_ARU_EN GTM0TIM14CTRL_BASE.BIT._ARU_EN
#define GTM0TIM14CTRL_CICTRL GTM0TIM14CTRL_BASE.BIT._CICTRL
#define GTM0TIM14CTRL_GPR0_SEL GTM0TIM14CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM14CTRL_GPR1_SEL GTM0TIM14CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM14CTRL_CNTS_SEL GTM0TIM14CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM14CTRL_DSL GTM0TIM14CTRL_BASE.BIT._DSL
#define GTM0TIM14CTRL_ISL GTM0TIM14CTRL_BASE.BIT._ISL
#define GTM0TIM14CTRL_ECNT_RESET GTM0TIM14CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM14CTRL_FLT_EN GTM0TIM14CTRL_BASE.BIT._FLT_EN
#define GTM0TIM14CTRL_FLT_CNT_FRQ GTM0TIM14CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM14CTRL_EXT_CAP_EN GTM0TIM14CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM14CTRL_FLT_MODE_RE GTM0TIM14CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM14CTRL_FLT_CTR_RE GTM0TIM14CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM14CTRL_FLT_MODE_FE GTM0TIM14CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM14CTRL_FLT_CTR_FE GTM0TIM14CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM14CTRL_CLK_SEL GTM0TIM14CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM14CTRL_FR_ECNT_OFL GTM0TIM14CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM14CTRL_EGPR0_SEL GTM0TIM14CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM14CTRL_EGPR1_SEL GTM0TIM14CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM14CTRL_TOCTRL GTM0TIM14CTRL_BASE.BIT._TOCTRL
#define GTM0TIM14ECTRL GTM0TIM14ECTRL_BASE.UINT32
#define GTM0TIM14ECTRL_EXT_CAP_SRC GTM0TIM14ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM14IRQNOTIFY GTM0TIM14IRQNOTIFY_BASE.UINT32
#define GTM0TIM14IRQNOTIFY_NEWVAL GTM0TIM14IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM14IRQNOTIFY_ECNTOFL GTM0TIM14IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM14IRQNOTIFY_CNTOFL GTM0TIM14IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM14IRQNOTIFY_GPROFL GTM0TIM14IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM14IRQNOTIFY_TODET GTM0TIM14IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM14IRQNOTIFY_GLITCHDET GTM0TIM14IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM14IRQEN GTM0TIM14IRQEN_BASE.UINT32
#define GTM0TIM14IRQEN_NEWVAL_IRQ_EN GTM0TIM14IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM14IRQEN_ECNTOFL_IRQ_EN GTM0TIM14IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM14IRQEN_CNTOFL_IRQ_EN GTM0TIM14IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM14IRQEN_GPROFL_IRQ_EN GTM0TIM14IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM14IRQEN_TODET_IRQ_EN GTM0TIM14IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM14IRQEN_GLITCHDET_IRQ_EN GTM0TIM14IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM14IRQFORCINT GTM0TIM14IRQFORCINT_BASE.UINT32
#define GTM0TIM14IRQFORCINT_TRG_NEWVAL GTM0TIM14IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM14IRQFORCINT_TRG_ECNTOFL GTM0TIM14IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM14IRQFORCINT_TRG_CNTOFL GTM0TIM14IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM14IRQFORCINT_TRG_GPROFL GTM0TIM14IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM14IRQFORCINT_TRG_TODET GTM0TIM14IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM14IRQFORCINT_TRG_GLITCHDET GTM0TIM14IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM14IRQMODE GTM0TIM14IRQMODE_BASE.UINT32
#define GTM0TIM14IRQMODE_IRQ_MODE GTM0TIM14IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM14EIRQEN GTM0TIM14EIRQEN_BASE.UINT32
#define GTM0TIM14EIRQEN_NEWVAL_EIRQ_EN GTM0TIM14EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM14EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM14EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM14EIRQEN_CNTOFL_EIRQ_EN GTM0TIM14EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM14EIRQEN_GPROFL_EIRQ_EN GTM0TIM14EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM14EIRQEN_TODET_IERQ_EN GTM0TIM14EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM14EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM14EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM15GPR0 GTM0TIM15GPR0_BASE.UINT32
#define GTM0TIM15GPR0_GPR0 GTM0TIM15GPR0_BASE.BIT._GPR0
#define GTM0TIM15GPR0_ECNT GTM0TIM15GPR0_BASE.BIT._ECNT
#define GTM0TIM15GPR1 GTM0TIM15GPR1_BASE.UINT32
#define GTM0TIM15GPR1_GPR1 GTM0TIM15GPR1_BASE.BIT._GPR1
#define GTM0TIM15GPR1_ECNT GTM0TIM15GPR1_BASE.BIT._ECNT
#define GTM0TIM15CNT GTM0TIM15CNT_BASE.UINT32
#define GTM0TIM15CNT_CNT GTM0TIM15CNT_BASE.BIT._CNT
#define GTM0TIM15ECNT GTM0TIM15ECNT_BASE.UINT32
#define GTM0TIM15ECNT_ECNT GTM0TIM15ECNT_BASE.BIT._ECNT
#define GTM0TIM15CNTS GTM0TIM15CNTS_BASE.UINT32
#define GTM0TIM15CNTS_CNTS GTM0TIM15CNTS_BASE.BIT._CNTS
#define GTM0TIM15CNTS_ECNT GTM0TIM15CNTS_BASE.BIT._ECNT
#define GTM0TIM15TDUC GTM0TIM15TDUC_BASE.UINT32
#define GTM0TIM15TDUC_TO_CNT GTM0TIM15TDUC_BASE.BIT._TO_CNT
#define GTM0TIM15TDUV GTM0TIM15TDUV_BASE.UINT32
#define GTM0TIM15TDUV_TOV GTM0TIM15TDUV_BASE.BIT._TOV
#define GTM0TIM15TDUV_TCS GTM0TIM15TDUV_BASE.BIT._TCS
#define GTM0TIM15FLTRE GTM0TIM15FLTRE_BASE.UINT32
#define GTM0TIM15FLTRE_FLT_RE GTM0TIM15FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM15FLTFE GTM0TIM15FLTFE_BASE.UINT32
#define GTM0TIM15FLTFE_FLT_FE GTM0TIM15FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM15CTRL GTM0TIM15CTRL_BASE.UINT32
#define GTM0TIM15CTRL_TIM_EN GTM0TIM15CTRL_BASE.BIT._TIM_EN
#define GTM0TIM15CTRL_TIM_MODE GTM0TIM15CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM15CTRL_OSM GTM0TIM15CTRL_BASE.BIT._OSM
#define GTM0TIM15CTRL_ARU_EN GTM0TIM15CTRL_BASE.BIT._ARU_EN
#define GTM0TIM15CTRL_CICTRL GTM0TIM15CTRL_BASE.BIT._CICTRL
#define GTM0TIM15CTRL_GPR0_SEL GTM0TIM15CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM15CTRL_GPR1_SEL GTM0TIM15CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM15CTRL_CNTS_SEL GTM0TIM15CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM15CTRL_DSL GTM0TIM15CTRL_BASE.BIT._DSL
#define GTM0TIM15CTRL_ISL GTM0TIM15CTRL_BASE.BIT._ISL
#define GTM0TIM15CTRL_ECNT_RESET GTM0TIM15CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM15CTRL_FLT_EN GTM0TIM15CTRL_BASE.BIT._FLT_EN
#define GTM0TIM15CTRL_FLT_CNT_FRQ GTM0TIM15CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM15CTRL_EXT_CAP_EN GTM0TIM15CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM15CTRL_FLT_MODE_RE GTM0TIM15CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM15CTRL_FLT_CTR_RE GTM0TIM15CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM15CTRL_FLT_MODE_FE GTM0TIM15CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM15CTRL_FLT_CTR_FE GTM0TIM15CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM15CTRL_CLK_SEL GTM0TIM15CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM15CTRL_FR_ECNT_OFL GTM0TIM15CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM15CTRL_EGPR0_SEL GTM0TIM15CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM15CTRL_EGPR1_SEL GTM0TIM15CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM15CTRL_TOCTRL GTM0TIM15CTRL_BASE.BIT._TOCTRL
#define GTM0TIM15ECTRL GTM0TIM15ECTRL_BASE.UINT32
#define GTM0TIM15ECTRL_EXT_CAP_SRC GTM0TIM15ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM15IRQNOTIFY GTM0TIM15IRQNOTIFY_BASE.UINT32
#define GTM0TIM15IRQNOTIFY_NEWVAL GTM0TIM15IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM15IRQNOTIFY_ECNTOFL GTM0TIM15IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM15IRQNOTIFY_CNTOFL GTM0TIM15IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM15IRQNOTIFY_GPROFL GTM0TIM15IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM15IRQNOTIFY_TODET GTM0TIM15IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM15IRQNOTIFY_GLITCHDET GTM0TIM15IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM15IRQEN GTM0TIM15IRQEN_BASE.UINT32
#define GTM0TIM15IRQEN_NEWVAL_IRQ_EN GTM0TIM15IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM15IRQEN_ECNTOFL_IRQ_EN GTM0TIM15IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM15IRQEN_CNTOFL_IRQ_EN GTM0TIM15IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM15IRQEN_GPROFL_IRQ_EN GTM0TIM15IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM15IRQEN_TODET_IRQ_EN GTM0TIM15IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM15IRQEN_GLITCHDET_IRQ_EN GTM0TIM15IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM15IRQFORCINT GTM0TIM15IRQFORCINT_BASE.UINT32
#define GTM0TIM15IRQFORCINT_TRG_NEWVAL GTM0TIM15IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM15IRQFORCINT_TRG_ECNTOFL GTM0TIM15IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM15IRQFORCINT_TRG_CNTOFL GTM0TIM15IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM15IRQFORCINT_TRG_GPROFL GTM0TIM15IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM15IRQFORCINT_TRG_TODET GTM0TIM15IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM15IRQFORCINT_TRG_GLITCHDET GTM0TIM15IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM15IRQMODE GTM0TIM15IRQMODE_BASE.UINT32
#define GTM0TIM15IRQMODE_IRQ_MODE GTM0TIM15IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM15EIRQEN GTM0TIM15EIRQEN_BASE.UINT32
#define GTM0TIM15EIRQEN_NEWVAL_EIRQ_EN GTM0TIM15EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM15EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM15EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM15EIRQEN_CNTOFL_EIRQ_EN GTM0TIM15EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM15EIRQEN_GPROFL_EIRQ_EN GTM0TIM15EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM15EIRQEN_TODET_IERQ_EN GTM0TIM15EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM15EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM15EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM16GPR0 GTM0TIM16GPR0_BASE.UINT32
#define GTM0TIM16GPR0_GPR0 GTM0TIM16GPR0_BASE.BIT._GPR0
#define GTM0TIM16GPR0_ECNT GTM0TIM16GPR0_BASE.BIT._ECNT
#define GTM0TIM16GPR1 GTM0TIM16GPR1_BASE.UINT32
#define GTM0TIM16GPR1_GPR1 GTM0TIM16GPR1_BASE.BIT._GPR1
#define GTM0TIM16GPR1_ECNT GTM0TIM16GPR1_BASE.BIT._ECNT
#define GTM0TIM16CNT GTM0TIM16CNT_BASE.UINT32
#define GTM0TIM16CNT_CNT GTM0TIM16CNT_BASE.BIT._CNT
#define GTM0TIM16ECNT GTM0TIM16ECNT_BASE.UINT32
#define GTM0TIM16ECNT_ECNT GTM0TIM16ECNT_BASE.BIT._ECNT
#define GTM0TIM16CNTS GTM0TIM16CNTS_BASE.UINT32
#define GTM0TIM16CNTS_CNTS GTM0TIM16CNTS_BASE.BIT._CNTS
#define GTM0TIM16CNTS_ECNT GTM0TIM16CNTS_BASE.BIT._ECNT
#define GTM0TIM16TDUC GTM0TIM16TDUC_BASE.UINT32
#define GTM0TIM16TDUC_TO_CNT GTM0TIM16TDUC_BASE.BIT._TO_CNT
#define GTM0TIM16TDUV GTM0TIM16TDUV_BASE.UINT32
#define GTM0TIM16TDUV_TOV GTM0TIM16TDUV_BASE.BIT._TOV
#define GTM0TIM16TDUV_TCS GTM0TIM16TDUV_BASE.BIT._TCS
#define GTM0TIM16FLTRE GTM0TIM16FLTRE_BASE.UINT32
#define GTM0TIM16FLTRE_FLT_RE GTM0TIM16FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM16FLTFE GTM0TIM16FLTFE_BASE.UINT32
#define GTM0TIM16FLTFE_FLT_FE GTM0TIM16FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM16CTRL GTM0TIM16CTRL_BASE.UINT32
#define GTM0TIM16CTRL_TIM_EN GTM0TIM16CTRL_BASE.BIT._TIM_EN
#define GTM0TIM16CTRL_TIM_MODE GTM0TIM16CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM16CTRL_OSM GTM0TIM16CTRL_BASE.BIT._OSM
#define GTM0TIM16CTRL_ARU_EN GTM0TIM16CTRL_BASE.BIT._ARU_EN
#define GTM0TIM16CTRL_CICTRL GTM0TIM16CTRL_BASE.BIT._CICTRL
#define GTM0TIM16CTRL_GPR0_SEL GTM0TIM16CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM16CTRL_GPR1_SEL GTM0TIM16CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM16CTRL_CNTS_SEL GTM0TIM16CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM16CTRL_DSL GTM0TIM16CTRL_BASE.BIT._DSL
#define GTM0TIM16CTRL_ISL GTM0TIM16CTRL_BASE.BIT._ISL
#define GTM0TIM16CTRL_ECNT_RESET GTM0TIM16CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM16CTRL_FLT_EN GTM0TIM16CTRL_BASE.BIT._FLT_EN
#define GTM0TIM16CTRL_FLT_CNT_FRQ GTM0TIM16CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM16CTRL_EXT_CAP_EN GTM0TIM16CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM16CTRL_FLT_MODE_RE GTM0TIM16CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM16CTRL_FLT_CTR_RE GTM0TIM16CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM16CTRL_FLT_MODE_FE GTM0TIM16CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM16CTRL_FLT_CTR_FE GTM0TIM16CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM16CTRL_CLK_SEL GTM0TIM16CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM16CTRL_FR_ECNT_OFL GTM0TIM16CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM16CTRL_EGPR0_SEL GTM0TIM16CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM16CTRL_EGPR1_SEL GTM0TIM16CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM16CTRL_TOCTRL GTM0TIM16CTRL_BASE.BIT._TOCTRL
#define GTM0TIM16ECTRL GTM0TIM16ECTRL_BASE.UINT32
#define GTM0TIM16ECTRL_EXT_CAP_SRC GTM0TIM16ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM16IRQNOTIFY GTM0TIM16IRQNOTIFY_BASE.UINT32
#define GTM0TIM16IRQNOTIFY_NEWVAL GTM0TIM16IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM16IRQNOTIFY_ECNTOFL GTM0TIM16IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM16IRQNOTIFY_CNTOFL GTM0TIM16IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM16IRQNOTIFY_GPROFL GTM0TIM16IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM16IRQNOTIFY_TODET GTM0TIM16IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM16IRQNOTIFY_GLITCHDET GTM0TIM16IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM16IRQEN GTM0TIM16IRQEN_BASE.UINT32
#define GTM0TIM16IRQEN_NEWVAL_IRQ_EN GTM0TIM16IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM16IRQEN_ECNTOFL_IRQ_EN GTM0TIM16IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM16IRQEN_CNTOFL_IRQ_EN GTM0TIM16IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM16IRQEN_GPROFL_IRQ_EN GTM0TIM16IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM16IRQEN_TODET_IRQ_EN GTM0TIM16IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM16IRQEN_GLITCHDET_IRQ_EN GTM0TIM16IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM16IRQFORCINT GTM0TIM16IRQFORCINT_BASE.UINT32
#define GTM0TIM16IRQFORCINT_TRG_NEWVAL GTM0TIM16IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM16IRQFORCINT_TRG_ECNTOFL GTM0TIM16IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM16IRQFORCINT_TRG_CNTOFL GTM0TIM16IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM16IRQFORCINT_TRG_GPROFL GTM0TIM16IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM16IRQFORCINT_TRG_TODET GTM0TIM16IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM16IRQFORCINT_TRG_GLITCHDET GTM0TIM16IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM16IRQMODE GTM0TIM16IRQMODE_BASE.UINT32
#define GTM0TIM16IRQMODE_IRQ_MODE GTM0TIM16IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM16EIRQEN GTM0TIM16EIRQEN_BASE.UINT32
#define GTM0TIM16EIRQEN_NEWVAL_EIRQ_EN GTM0TIM16EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM16EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM16EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM16EIRQEN_CNTOFL_EIRQ_EN GTM0TIM16EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM16EIRQEN_GPROFL_EIRQ_EN GTM0TIM16EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM16EIRQEN_TODET_IERQ_EN GTM0TIM16EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM16EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM16EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0TIM17GPR0 GTM0TIM17GPR0_BASE.UINT32
#define GTM0TIM17GPR0_GPR0 GTM0TIM17GPR0_BASE.BIT._GPR0
#define GTM0TIM17GPR0_ECNT GTM0TIM17GPR0_BASE.BIT._ECNT
#define GTM0TIM17GPR1 GTM0TIM17GPR1_BASE.UINT32
#define GTM0TIM17GPR1_GPR1 GTM0TIM17GPR1_BASE.BIT._GPR1
#define GTM0TIM17GPR1_ECNT GTM0TIM17GPR1_BASE.BIT._ECNT
#define GTM0TIM17CNT GTM0TIM17CNT_BASE.UINT32
#define GTM0TIM17CNT_CNT GTM0TIM17CNT_BASE.BIT._CNT
#define GTM0TIM17ECNT GTM0TIM17ECNT_BASE.UINT32
#define GTM0TIM17ECNT_ECNT GTM0TIM17ECNT_BASE.BIT._ECNT
#define GTM0TIM17CNTS GTM0TIM17CNTS_BASE.UINT32
#define GTM0TIM17CNTS_CNTS GTM0TIM17CNTS_BASE.BIT._CNTS
#define GTM0TIM17CNTS_ECNT GTM0TIM17CNTS_BASE.BIT._ECNT
#define GTM0TIM17TDUC GTM0TIM17TDUC_BASE.UINT32
#define GTM0TIM17TDUC_TO_CNT GTM0TIM17TDUC_BASE.BIT._TO_CNT
#define GTM0TIM17TDUV GTM0TIM17TDUV_BASE.UINT32
#define GTM0TIM17TDUV_TOV GTM0TIM17TDUV_BASE.BIT._TOV
#define GTM0TIM17TDUV_TCS GTM0TIM17TDUV_BASE.BIT._TCS
#define GTM0TIM17FLTRE GTM0TIM17FLTRE_BASE.UINT32
#define GTM0TIM17FLTRE_FLT_RE GTM0TIM17FLTRE_BASE.BIT._FLT_RE
#define GTM0TIM17FLTFE GTM0TIM17FLTFE_BASE.UINT32
#define GTM0TIM17FLTFE_FLT_FE GTM0TIM17FLTFE_BASE.BIT._FLT_FE
#define GTM0TIM17CTRL GTM0TIM17CTRL_BASE.UINT32
#define GTM0TIM17CTRL_TIM_EN GTM0TIM17CTRL_BASE.BIT._TIM_EN
#define GTM0TIM17CTRL_TIM_MODE GTM0TIM17CTRL_BASE.BIT._TIM_MODE
#define GTM0TIM17CTRL_OSM GTM0TIM17CTRL_BASE.BIT._OSM
#define GTM0TIM17CTRL_ARU_EN GTM0TIM17CTRL_BASE.BIT._ARU_EN
#define GTM0TIM17CTRL_CICTRL GTM0TIM17CTRL_BASE.BIT._CICTRL
#define GTM0TIM17CTRL_GPR0_SEL GTM0TIM17CTRL_BASE.BIT._GPR0_SEL
#define GTM0TIM17CTRL_GPR1_SEL GTM0TIM17CTRL_BASE.BIT._GPR1_SEL
#define GTM0TIM17CTRL_CNTS_SEL GTM0TIM17CTRL_BASE.BIT._CNTS_SEL
#define GTM0TIM17CTRL_DSL GTM0TIM17CTRL_BASE.BIT._DSL
#define GTM0TIM17CTRL_ISL GTM0TIM17CTRL_BASE.BIT._ISL
#define GTM0TIM17CTRL_ECNT_RESET GTM0TIM17CTRL_BASE.BIT._ECNT_RESET
#define GTM0TIM17CTRL_FLT_EN GTM0TIM17CTRL_BASE.BIT._FLT_EN
#define GTM0TIM17CTRL_FLT_CNT_FRQ GTM0TIM17CTRL_BASE.BIT._FLT_CNT_FRQ
#define GTM0TIM17CTRL_EXT_CAP_EN GTM0TIM17CTRL_BASE.BIT._EXT_CAP_EN
#define GTM0TIM17CTRL_FLT_MODE_RE GTM0TIM17CTRL_BASE.BIT._FLT_MODE_RE
#define GTM0TIM17CTRL_FLT_CTR_RE GTM0TIM17CTRL_BASE.BIT._FLT_CTR_RE
#define GTM0TIM17CTRL_FLT_MODE_FE GTM0TIM17CTRL_BASE.BIT._FLT_MODE_FE
#define GTM0TIM17CTRL_FLT_CTR_FE GTM0TIM17CTRL_BASE.BIT._FLT_CTR_FE
#define GTM0TIM17CTRL_CLK_SEL GTM0TIM17CTRL_BASE.BIT._CLK_SEL
#define GTM0TIM17CTRL_FR_ECNT_OFL GTM0TIM17CTRL_BASE.BIT._FR_ECNT_OFL
#define GTM0TIM17CTRL_EGPR0_SEL GTM0TIM17CTRL_BASE.BIT._EGPR0_SEL
#define GTM0TIM17CTRL_EGPR1_SEL GTM0TIM17CTRL_BASE.BIT._EGPR1_SEL
#define GTM0TIM17CTRL_TOCTRL GTM0TIM17CTRL_BASE.BIT._TOCTRL
#define GTM0TIM17ECTRL GTM0TIM17ECTRL_BASE.UINT32
#define GTM0TIM17ECTRL_EXT_CAP_SRC GTM0TIM17ECTRL_BASE.BIT._EXT_CAP_SRC
#define GTM0TIM17IRQNOTIFY GTM0TIM17IRQNOTIFY_BASE.UINT32
#define GTM0TIM17IRQNOTIFY_NEWVAL GTM0TIM17IRQNOTIFY_BASE.BIT._NEWVAL
#define GTM0TIM17IRQNOTIFY_ECNTOFL GTM0TIM17IRQNOTIFY_BASE.BIT._ECNTOFL
#define GTM0TIM17IRQNOTIFY_CNTOFL GTM0TIM17IRQNOTIFY_BASE.BIT._CNTOFL
#define GTM0TIM17IRQNOTIFY_GPROFL GTM0TIM17IRQNOTIFY_BASE.BIT._GPROFL
#define GTM0TIM17IRQNOTIFY_TODET GTM0TIM17IRQNOTIFY_BASE.BIT._TODET
#define GTM0TIM17IRQNOTIFY_GLITCHDET GTM0TIM17IRQNOTIFY_BASE.BIT._GLITCHDET
#define GTM0TIM17IRQEN GTM0TIM17IRQEN_BASE.UINT32
#define GTM0TIM17IRQEN_NEWVAL_IRQ_EN GTM0TIM17IRQEN_BASE.BIT._NEWVAL_IRQ_EN
#define GTM0TIM17IRQEN_ECNTOFL_IRQ_EN GTM0TIM17IRQEN_BASE.BIT._ECNTOFL_IRQ_EN
#define GTM0TIM17IRQEN_CNTOFL_IRQ_EN GTM0TIM17IRQEN_BASE.BIT._CNTOFL_IRQ_EN
#define GTM0TIM17IRQEN_GPROFL_IRQ_EN GTM0TIM17IRQEN_BASE.BIT._GPROFL_IRQ_EN
#define GTM0TIM17IRQEN_TODET_IRQ_EN GTM0TIM17IRQEN_BASE.BIT._TODET_IRQ_EN
#define GTM0TIM17IRQEN_GLITCHDET_IRQ_EN GTM0TIM17IRQEN_BASE.BIT._GLITCHDET_IRQ_EN
#define GTM0TIM17IRQFORCINT GTM0TIM17IRQFORCINT_BASE.UINT32
#define GTM0TIM17IRQFORCINT_TRG_NEWVAL GTM0TIM17IRQFORCINT_BASE.BIT._TRG_NEWVAL
#define GTM0TIM17IRQFORCINT_TRG_ECNTOFL GTM0TIM17IRQFORCINT_BASE.BIT._TRG_ECNTOFL
#define GTM0TIM17IRQFORCINT_TRG_CNTOFL GTM0TIM17IRQFORCINT_BASE.BIT._TRG_CNTOFL
#define GTM0TIM17IRQFORCINT_TRG_GPROFL GTM0TIM17IRQFORCINT_BASE.BIT._TRG_GPROFL
#define GTM0TIM17IRQFORCINT_TRG_TODET GTM0TIM17IRQFORCINT_BASE.BIT._TRG_TODET
#define GTM0TIM17IRQFORCINT_TRG_GLITCHDET GTM0TIM17IRQFORCINT_BASE.BIT._TRG_GLITCHDET
#define GTM0TIM17IRQMODE GTM0TIM17IRQMODE_BASE.UINT32
#define GTM0TIM17IRQMODE_IRQ_MODE GTM0TIM17IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0TIM17EIRQEN GTM0TIM17EIRQEN_BASE.UINT32
#define GTM0TIM17EIRQEN_NEWVAL_EIRQ_EN GTM0TIM17EIRQEN_BASE.BIT._NEWVAL_EIRQ_EN
#define GTM0TIM17EIRQEN_ECNTOFL_EIRQ_EN GTM0TIM17EIRQEN_BASE.BIT._ECNTOFL_EIRQ_EN
#define GTM0TIM17EIRQEN_CNTOFL_EIRQ_EN GTM0TIM17EIRQEN_BASE.BIT._CNTOFL_EIRQ_EN
#define GTM0TIM17EIRQEN_GPROFL_EIRQ_EN GTM0TIM17EIRQEN_BASE.BIT._GPROFL_EIRQ_EN
#define GTM0TIM17EIRQEN_TODET_IERQ_EN GTM0TIM17EIRQEN_BASE.BIT._TODET_IERQ_EN
#define GTM0TIM17EIRQEN_GLITCHDET_EIRQ_EN GTM0TIM17EIRQEN_BASE.BIT._GLITCHDET_EIRQ_EN
#define GTM0ATOM00RDADDR GTM0ATOM00RDADDR_BASE.UINT32
#define GTM0ATOM00RDADDR_RDADDR0 GTM0ATOM00RDADDR_BASE.BIT._RDADDR0
#define GTM0ATOM00RDADDR_RDADDR1 GTM0ATOM00RDADDR_BASE.BIT._RDADDR1
#define GTM0ATOM00CTRL GTM0ATOM00CTRL_BASE.UINT32
#define GTM0ATOM00CTRL_MODE GTM0ATOM00CTRL_BASE.BIT._MODE
#define GTM0ATOM00CTRL_TB12_SEL GTM0ATOM00CTRL_BASE.BIT._TB12_SEL
#define GTM0ATOM00CTRL_ARU_EN GTM0ATOM00CTRL_BASE.BIT._ARU_EN
#define GTM0ATOM00CTRL_ACB GTM0ATOM00CTRL_BASE.BIT._ACB
#define GTM0ATOM00CTRL_CMP_CTRL GTM0ATOM00CTRL_BASE.BIT._CMP_CTRL
#define GTM0ATOM00CTRL_SL GTM0ATOM00CTRL_BASE.BIT._SL
#define GTM0ATOM00CTRL_CLK_SRC_SR GTM0ATOM00CTRL_BASE.BIT._CLK_SRC_SR
#define GTM0ATOM00CTRL_WR_REQ GTM0ATOM00CTRL_BASE.BIT._WR_REQ
#define GTM0ATOM00CTRL_RST_CCU0 GTM0ATOM00CTRL_BASE.BIT._RST_CCU0
#define GTM0ATOM00CTRL_OSM_TRIG GTM0ATOM00CTRL_BASE.BIT._OSM_TRIG
#define GTM0ATOM00CTRL_EXT_TRIG GTM0ATOM00CTRL_BASE.BIT._EXT_TRIG
#define GTM0ATOM00CTRL_EXTTRIGOUT GTM0ATOM00CTRL_BASE.BIT._EXTTRIGOUT
#define GTM0ATOM00CTRL_TRIGOUT GTM0ATOM00CTRL_BASE.BIT._TRIGOUT
#define GTM0ATOM00CTRL_SLA GTM0ATOM00CTRL_BASE.BIT._SLA
#define GTM0ATOM00CTRL_OSM GTM0ATOM00CTRL_BASE.BIT._OSM
#define GTM0ATOM00CTRL_ABM GTM0ATOM00CTRL_BASE.BIT._ABM
#define GTM0ATOM00CTRL_SOMB GTM0ATOM00CTRL_BASE.BIT._SOMB
#define GTM0ATOM00SR0 GTM0ATOM00SR0_BASE.UINT32
#define GTM0ATOM00SR0_SR0 GTM0ATOM00SR0_BASE.BIT._SR0
#define GTM0ATOM00SR1 GTM0ATOM00SR1_BASE.UINT32
#define GTM0ATOM00SR1_SR1 GTM0ATOM00SR1_BASE.BIT._SR1
#define GTM0ATOM00CM0 GTM0ATOM00CM0_BASE.UINT32
#define GTM0ATOM00CM0_CM0 GTM0ATOM00CM0_BASE.BIT._CM0
#define GTM0ATOM00CM1 GTM0ATOM00CM1_BASE.UINT32
#define GTM0ATOM00CM1_CM1 GTM0ATOM00CM1_BASE.BIT._CM1
#define GTM0ATOM00CN0 GTM0ATOM00CN0_BASE.UINT32
#define GTM0ATOM00CN0_CN0 GTM0ATOM00CN0_BASE.BIT._CN0
#define GTM0ATOM00STAT GTM0ATOM00STAT_BASE.UINT32
#define GTM0ATOM00STAT_OL GTM0ATOM00STAT_BASE.BIT._OL
#define GTM0ATOM00STAT_ACBI GTM0ATOM00STAT_BASE.BIT._ACBI
#define GTM0ATOM00STAT_DV GTM0ATOM00STAT_BASE.BIT._DV
#define GTM0ATOM00STAT_WRF GTM0ATOM00STAT_BASE.BIT._WRF
#define GTM0ATOM00STAT_ACBO GTM0ATOM00STAT_BASE.BIT._ACBO
#define GTM0ATOM00IRQNOTIFY GTM0ATOM00IRQNOTIFY_BASE.UINT32
#define GTM0ATOM00IRQNOTIFY_CCU0TC GTM0ATOM00IRQNOTIFY_BASE.BIT._CCU0TC
#define GTM0ATOM00IRQNOTIFY_CCU1TC GTM0ATOM00IRQNOTIFY_BASE.BIT._CCU1TC
#define GTM0ATOM00IRQEN GTM0ATOM00IRQEN_BASE.UINT32
#define GTM0ATOM00IRQEN_CCU0TC_IRQ_EN GTM0ATOM00IRQEN_BASE.BIT._CCU0TC_IRQ_EN
#define GTM0ATOM00IRQEN_CCU1TC_IRQ_EN GTM0ATOM00IRQEN_BASE.BIT._CCU1TC_IRQ_EN
#define GTM0ATOM00IRQFORCINT GTM0ATOM00IRQFORCINT_BASE.UINT32
#define GTM0ATOM00IRQFORCINT_TRG_CCU0TC GTM0ATOM00IRQFORCINT_BASE.BIT._TRG_CCU0TC
#define GTM0ATOM00IRQFORCINT_TRG_CCU1TC GTM0ATOM00IRQFORCINT_BASE.BIT._TRG_CCU1TC
#define GTM0ATOM00IRQMODE GTM0ATOM00IRQMODE_BASE.UINT32
#define GTM0ATOM00IRQMODE_IRQ_MODE GTM0ATOM00IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0ATOM0AGCGLBCTRL GTM0ATOM0AGCGLBCTRL_BASE.UINT32
#define GTM0ATOM0AGCGLBCTRL_HOST_TRIG GTM0ATOM0AGCGLBCTRL_BASE.BIT._HOST_TRIG
#define GTM0ATOM0AGCGLBCTRL_RST_CH0 GTM0ATOM0AGCGLBCTRL_BASE.BIT._RST_CH0
#define GTM0ATOM0AGCGLBCTRL_RST_CH1 GTM0ATOM0AGCGLBCTRL_BASE.BIT._RST_CH1
#define GTM0ATOM0AGCGLBCTRL_RST_CH2 GTM0ATOM0AGCGLBCTRL_BASE.BIT._RST_CH2
#define GTM0ATOM0AGCGLBCTRL_RST_CH3 GTM0ATOM0AGCGLBCTRL_BASE.BIT._RST_CH3
#define GTM0ATOM0AGCGLBCTRL_RST_CH4 GTM0ATOM0AGCGLBCTRL_BASE.BIT._RST_CH4
#define GTM0ATOM0AGCGLBCTRL_RST_CH5 GTM0ATOM0AGCGLBCTRL_BASE.BIT._RST_CH5
#define GTM0ATOM0AGCGLBCTRL_RST_CH6 GTM0ATOM0AGCGLBCTRL_BASE.BIT._RST_CH6
#define GTM0ATOM0AGCGLBCTRL_RST_CH7 GTM0ATOM0AGCGLBCTRL_BASE.BIT._RST_CH7
#define GTM0ATOM0AGCGLBCTRL_UPEN_CTRL0 GTM0ATOM0AGCGLBCTRL_BASE.BIT._UPEN_CTRL0
#define GTM0ATOM0AGCGLBCTRL_UPEN_CTRL1 GTM0ATOM0AGCGLBCTRL_BASE.BIT._UPEN_CTRL1
#define GTM0ATOM0AGCGLBCTRL_UPEN_CTRL2 GTM0ATOM0AGCGLBCTRL_BASE.BIT._UPEN_CTRL2
#define GTM0ATOM0AGCGLBCTRL_UPEN_CTRL3 GTM0ATOM0AGCGLBCTRL_BASE.BIT._UPEN_CTRL3
#define GTM0ATOM0AGCGLBCTRL_UPEN_CTRL4 GTM0ATOM0AGCGLBCTRL_BASE.BIT._UPEN_CTRL4
#define GTM0ATOM0AGCGLBCTRL_UPEN_CTRL5 GTM0ATOM0AGCGLBCTRL_BASE.BIT._UPEN_CTRL5
#define GTM0ATOM0AGCGLBCTRL_UPEN_CTRL6 GTM0ATOM0AGCGLBCTRL_BASE.BIT._UPEN_CTRL6
#define GTM0ATOM0AGCGLBCTRL_UPEN_CTRL7 GTM0ATOM0AGCGLBCTRL_BASE.BIT._UPEN_CTRL7
#define GTM0ATOM0AGCENDISCTRL GTM0ATOM0AGCENDISCTRL_BASE.UINT32
#define GTM0ATOM0AGCENDISCTRL_ENDIS_CTRL0 GTM0ATOM0AGCENDISCTRL_BASE.BIT._ENDIS_CTRL0
#define GTM0ATOM0AGCENDISCTRL_ENDIS_CTRL1 GTM0ATOM0AGCENDISCTRL_BASE.BIT._ENDIS_CTRL1
#define GTM0ATOM0AGCENDISCTRL_ENDIS_CTRL2 GTM0ATOM0AGCENDISCTRL_BASE.BIT._ENDIS_CTRL2
#define GTM0ATOM0AGCENDISCTRL_ENDIS_CTRL3 GTM0ATOM0AGCENDISCTRL_BASE.BIT._ENDIS_CTRL3
#define GTM0ATOM0AGCENDISCTRL_ENDIS_CTRL4 GTM0ATOM0AGCENDISCTRL_BASE.BIT._ENDIS_CTRL4
#define GTM0ATOM0AGCENDISCTRL_ENDIS_CTRL5 GTM0ATOM0AGCENDISCTRL_BASE.BIT._ENDIS_CTRL5
#define GTM0ATOM0AGCENDISCTRL_ENDIS_CTRL6 GTM0ATOM0AGCENDISCTRL_BASE.BIT._ENDIS_CTRL6
#define GTM0ATOM0AGCENDISCTRL_ENDIS_CTRL7 GTM0ATOM0AGCENDISCTRL_BASE.BIT._ENDIS_CTRL7
#define GTM0ATOM0AGCENDISSTAT GTM0ATOM0AGCENDISSTAT_BASE.UINT32
#define GTM0ATOM0AGCENDISSTAT_ENDIS_STAT0 GTM0ATOM0AGCENDISSTAT_BASE.BIT._ENDIS_STAT0
#define GTM0ATOM0AGCENDISSTAT_ENDIS_STAT1 GTM0ATOM0AGCENDISSTAT_BASE.BIT._ENDIS_STAT1
#define GTM0ATOM0AGCENDISSTAT_ENDIS_STAT2 GTM0ATOM0AGCENDISSTAT_BASE.BIT._ENDIS_STAT2
#define GTM0ATOM0AGCENDISSTAT_ENDIS_STAT3 GTM0ATOM0AGCENDISSTAT_BASE.BIT._ENDIS_STAT3
#define GTM0ATOM0AGCENDISSTAT_ENDIS_STAT4 GTM0ATOM0AGCENDISSTAT_BASE.BIT._ENDIS_STAT4
#define GTM0ATOM0AGCENDISSTAT_ENDIS_STAT5 GTM0ATOM0AGCENDISSTAT_BASE.BIT._ENDIS_STAT5
#define GTM0ATOM0AGCENDISSTAT_ENDIS_STAT6 GTM0ATOM0AGCENDISSTAT_BASE.BIT._ENDIS_STAT6
#define GTM0ATOM0AGCENDISSTAT_ENDIS_STAT7 GTM0ATOM0AGCENDISSTAT_BASE.BIT._ENDIS_STAT7
#define GTM0ATOM0AGCACTTB GTM0ATOM0AGCACTTB_BASE.UINT32
#define GTM0ATOM0AGCACTTB_ACT_TB GTM0ATOM0AGCACTTB_BASE.BIT._ACT_TB
#define GTM0ATOM0AGCACTTB_TB_TRIG GTM0ATOM0AGCACTTB_BASE.BIT._TB_TRIG
#define GTM0ATOM0AGCACTTB_TBU_SEL GTM0ATOM0AGCACTTB_BASE.BIT._TBU_SEL
#define GTM0ATOM0AGCOUTENCTRL GTM0ATOM0AGCOUTENCTRL_BASE.UINT32
#define GTM0ATOM0AGCOUTENCTRL_OUTEN_CTRL0 GTM0ATOM0AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL0
#define GTM0ATOM0AGCOUTENCTRL_OUTEN_CTRL1 GTM0ATOM0AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL1
#define GTM0ATOM0AGCOUTENCTRL_OUTEN_CTRL2 GTM0ATOM0AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL2
#define GTM0ATOM0AGCOUTENCTRL_OUTEN_CTRL3 GTM0ATOM0AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL3
#define GTM0ATOM0AGCOUTENCTRL_OUTEN_CTRL4 GTM0ATOM0AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL4
#define GTM0ATOM0AGCOUTENCTRL_OUTEN_CTRL5 GTM0ATOM0AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL5
#define GTM0ATOM0AGCOUTENCTRL_OUTEN_CTRL6 GTM0ATOM0AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL6
#define GTM0ATOM0AGCOUTENCTRL_OUTEN_CTRL7 GTM0ATOM0AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL7
#define GTM0ATOM0AGCOUTENSTAT GTM0ATOM0AGCOUTENSTAT_BASE.UINT32
#define GTM0ATOM0AGCOUTENSTAT_OUTEN_STAT0 GTM0ATOM0AGCOUTENSTAT_BASE.BIT._OUTEN_STAT0
#define GTM0ATOM0AGCOUTENSTAT_OUTEN_STAT1 GTM0ATOM0AGCOUTENSTAT_BASE.BIT._OUTEN_STAT1
#define GTM0ATOM0AGCOUTENSTAT_OUTEN_STAT2 GTM0ATOM0AGCOUTENSTAT_BASE.BIT._OUTEN_STAT2
#define GTM0ATOM0AGCOUTENSTAT_OUTEN_STAT3 GTM0ATOM0AGCOUTENSTAT_BASE.BIT._OUTEN_STAT3
#define GTM0ATOM0AGCOUTENSTAT_OUTEN_STAT4 GTM0ATOM0AGCOUTENSTAT_BASE.BIT._OUTEN_STAT4
#define GTM0ATOM0AGCOUTENSTAT_OUTEN_STAT5 GTM0ATOM0AGCOUTENSTAT_BASE.BIT._OUTEN_STAT5
#define GTM0ATOM0AGCOUTENSTAT_OUTEN_STAT6 GTM0ATOM0AGCOUTENSTAT_BASE.BIT._OUTEN_STAT6
#define GTM0ATOM0AGCOUTENSTAT_OUTEN_STAT7 GTM0ATOM0AGCOUTENSTAT_BASE.BIT._OUTEN_STAT7
#define GTM0ATOM0AGCFUPDCTRL GTM0ATOM0AGCFUPDCTRL_BASE.UINT32
#define GTM0ATOM0AGCFUPDCTRL_FUPD_CTRL0 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._FUPD_CTRL0
#define GTM0ATOM0AGCFUPDCTRL_FUPD_CTRL1 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._FUPD_CTRL1
#define GTM0ATOM0AGCFUPDCTRL_FUPD_CTRL2 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._FUPD_CTRL2
#define GTM0ATOM0AGCFUPDCTRL_FUPD_CTRL3 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._FUPD_CTRL3
#define GTM0ATOM0AGCFUPDCTRL_FUPD_CTRL4 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._FUPD_CTRL4
#define GTM0ATOM0AGCFUPDCTRL_FUPD_CTRL5 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._FUPD_CTRL5
#define GTM0ATOM0AGCFUPDCTRL_FUPD_CTRL6 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._FUPD_CTRL6
#define GTM0ATOM0AGCFUPDCTRL_FUPD_CTRL7 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._FUPD_CTRL7
#define GTM0ATOM0AGCFUPDCTRL_RSTCN0_CH0 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._RSTCN0_CH0
#define GTM0ATOM0AGCFUPDCTRL_RSTCN0_CH1 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._RSTCN0_CH1
#define GTM0ATOM0AGCFUPDCTRL_RSTCN0_CH2 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._RSTCN0_CH2
#define GTM0ATOM0AGCFUPDCTRL_RSTCN0_CH3 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._RSTCN0_CH3
#define GTM0ATOM0AGCFUPDCTRL_RSTCN0_CH4 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._RSTCN0_CH4
#define GTM0ATOM0AGCFUPDCTRL_RSTCN0_CH5 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._RSTCN0_CH5
#define GTM0ATOM0AGCFUPDCTRL_RSTCN0_CH6 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._RSTCN0_CH6
#define GTM0ATOM0AGCFUPDCTRL_RSTCN0_CH7 GTM0ATOM0AGCFUPDCTRL_BASE.BIT._RSTCN0_CH7
#define GTM0ATOM0AGCINTTRIG GTM0ATOM0AGCINTTRIG_BASE.UINT32
#define GTM0ATOM0AGCINTTRIG_INT_TRIG0 GTM0ATOM0AGCINTTRIG_BASE.BIT._INT_TRIG0
#define GTM0ATOM0AGCINTTRIG_INT_TRIG1 GTM0ATOM0AGCINTTRIG_BASE.BIT._INT_TRIG1
#define GTM0ATOM0AGCINTTRIG_INT_TRIG2 GTM0ATOM0AGCINTTRIG_BASE.BIT._INT_TRIG2
#define GTM0ATOM0AGCINTTRIG_INT_TRIG3 GTM0ATOM0AGCINTTRIG_BASE.BIT._INT_TRIG3
#define GTM0ATOM0AGCINTTRIG_INT_TRIG4 GTM0ATOM0AGCINTTRIG_BASE.BIT._INT_TRIG4
#define GTM0ATOM0AGCINTTRIG_INT_TRIG5 GTM0ATOM0AGCINTTRIG_BASE.BIT._INT_TRIG5
#define GTM0ATOM0AGCINTTRIG_INT_TRIG6 GTM0ATOM0AGCINTTRIG_BASE.BIT._INT_TRIG6
#define GTM0ATOM0AGCINTTRIG_INT_TRIG7 GTM0ATOM0AGCINTTRIG_BASE.BIT._INT_TRIG7
#define GTM0ATOM01RDADDR GTM0ATOM01RDADDR_BASE.UINT32
#define GTM0ATOM01RDADDR_RDADDR0 GTM0ATOM01RDADDR_BASE.BIT._RDADDR0
#define GTM0ATOM01RDADDR_RDADDR1 GTM0ATOM01RDADDR_BASE.BIT._RDADDR1
#define GTM0ATOM01CTRL GTM0ATOM01CTRL_BASE.UINT32
#define GTM0ATOM01CTRL_MODE GTM0ATOM01CTRL_BASE.BIT._MODE
#define GTM0ATOM01CTRL_TB12_SEL GTM0ATOM01CTRL_BASE.BIT._TB12_SEL
#define GTM0ATOM01CTRL_ARU_EN GTM0ATOM01CTRL_BASE.BIT._ARU_EN
#define GTM0ATOM01CTRL_ACB GTM0ATOM01CTRL_BASE.BIT._ACB
#define GTM0ATOM01CTRL_CMP_CTRL GTM0ATOM01CTRL_BASE.BIT._CMP_CTRL
#define GTM0ATOM01CTRL_SL GTM0ATOM01CTRL_BASE.BIT._SL
#define GTM0ATOM01CTRL_CLK_SRC_SR GTM0ATOM01CTRL_BASE.BIT._CLK_SRC_SR
#define GTM0ATOM01CTRL_WR_REQ GTM0ATOM01CTRL_BASE.BIT._WR_REQ
#define GTM0ATOM01CTRL_RST_CCU0 GTM0ATOM01CTRL_BASE.BIT._RST_CCU0
#define GTM0ATOM01CTRL_OSM_TRIG GTM0ATOM01CTRL_BASE.BIT._OSM_TRIG
#define GTM0ATOM01CTRL_EXT_TRIG GTM0ATOM01CTRL_BASE.BIT._EXT_TRIG
#define GTM0ATOM01CTRL_EXTTRIGOUT GTM0ATOM01CTRL_BASE.BIT._EXTTRIGOUT
#define GTM0ATOM01CTRL_TRIGOUT GTM0ATOM01CTRL_BASE.BIT._TRIGOUT
#define GTM0ATOM01CTRL_SLA GTM0ATOM01CTRL_BASE.BIT._SLA
#define GTM0ATOM01CTRL_OSM GTM0ATOM01CTRL_BASE.BIT._OSM
#define GTM0ATOM01CTRL_ABM GTM0ATOM01CTRL_BASE.BIT._ABM
#define GTM0ATOM01CTRL_SOMB GTM0ATOM01CTRL_BASE.BIT._SOMB
#define GTM0ATOM01SR0 GTM0ATOM01SR0_BASE.UINT32
#define GTM0ATOM01SR0_SR0 GTM0ATOM01SR0_BASE.BIT._SR0
#define GTM0ATOM01SR1 GTM0ATOM01SR1_BASE.UINT32
#define GTM0ATOM01SR1_SR1 GTM0ATOM01SR1_BASE.BIT._SR1
#define GTM0ATOM01CM0 GTM0ATOM01CM0_BASE.UINT32
#define GTM0ATOM01CM0_CM0 GTM0ATOM01CM0_BASE.BIT._CM0
#define GTM0ATOM01CM1 GTM0ATOM01CM1_BASE.UINT32
#define GTM0ATOM01CM1_CM1 GTM0ATOM01CM1_BASE.BIT._CM1
#define GTM0ATOM01CN0 GTM0ATOM01CN0_BASE.UINT32
#define GTM0ATOM01CN0_CN0 GTM0ATOM01CN0_BASE.BIT._CN0
#define GTM0ATOM01STAT GTM0ATOM01STAT_BASE.UINT32
#define GTM0ATOM01STAT_OL GTM0ATOM01STAT_BASE.BIT._OL
#define GTM0ATOM01STAT_ACBI GTM0ATOM01STAT_BASE.BIT._ACBI
#define GTM0ATOM01STAT_DV GTM0ATOM01STAT_BASE.BIT._DV
#define GTM0ATOM01STAT_WRF GTM0ATOM01STAT_BASE.BIT._WRF
#define GTM0ATOM01STAT_ACBO GTM0ATOM01STAT_BASE.BIT._ACBO
#define GTM0ATOM01IRQNOTIFY GTM0ATOM01IRQNOTIFY_BASE.UINT32
#define GTM0ATOM01IRQNOTIFY_CCU0TC GTM0ATOM01IRQNOTIFY_BASE.BIT._CCU0TC
#define GTM0ATOM01IRQNOTIFY_CCU1TC GTM0ATOM01IRQNOTIFY_BASE.BIT._CCU1TC
#define GTM0ATOM01IRQEN GTM0ATOM01IRQEN_BASE.UINT32
#define GTM0ATOM01IRQEN_CCU0TC_IRQ_EN GTM0ATOM01IRQEN_BASE.BIT._CCU0TC_IRQ_EN
#define GTM0ATOM01IRQEN_CCU1TC_IRQ_EN GTM0ATOM01IRQEN_BASE.BIT._CCU1TC_IRQ_EN
#define GTM0ATOM01IRQFORCINT GTM0ATOM01IRQFORCINT_BASE.UINT32
#define GTM0ATOM01IRQFORCINT_TRG_CCU0TC GTM0ATOM01IRQFORCINT_BASE.BIT._TRG_CCU0TC
#define GTM0ATOM01IRQFORCINT_TRG_CCU1TC GTM0ATOM01IRQFORCINT_BASE.BIT._TRG_CCU1TC
#define GTM0ATOM01IRQMODE GTM0ATOM01IRQMODE_BASE.UINT32
#define GTM0ATOM01IRQMODE_IRQ_MODE GTM0ATOM01IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0ATOM02RDADDR GTM0ATOM02RDADDR_BASE.UINT32
#define GTM0ATOM02RDADDR_RDADDR0 GTM0ATOM02RDADDR_BASE.BIT._RDADDR0
#define GTM0ATOM02RDADDR_RDADDR1 GTM0ATOM02RDADDR_BASE.BIT._RDADDR1
#define GTM0ATOM02CTRL GTM0ATOM02CTRL_BASE.UINT32
#define GTM0ATOM02CTRL_MODE GTM0ATOM02CTRL_BASE.BIT._MODE
#define GTM0ATOM02CTRL_TB12_SEL GTM0ATOM02CTRL_BASE.BIT._TB12_SEL
#define GTM0ATOM02CTRL_ARU_EN GTM0ATOM02CTRL_BASE.BIT._ARU_EN
#define GTM0ATOM02CTRL_ACB GTM0ATOM02CTRL_BASE.BIT._ACB
#define GTM0ATOM02CTRL_CMP_CTRL GTM0ATOM02CTRL_BASE.BIT._CMP_CTRL
#define GTM0ATOM02CTRL_SL GTM0ATOM02CTRL_BASE.BIT._SL
#define GTM0ATOM02CTRL_CLK_SRC_SR GTM0ATOM02CTRL_BASE.BIT._CLK_SRC_SR
#define GTM0ATOM02CTRL_WR_REQ GTM0ATOM02CTRL_BASE.BIT._WR_REQ
#define GTM0ATOM02CTRL_RST_CCU0 GTM0ATOM02CTRL_BASE.BIT._RST_CCU0
#define GTM0ATOM02CTRL_OSM_TRIG GTM0ATOM02CTRL_BASE.BIT._OSM_TRIG
#define GTM0ATOM02CTRL_EXT_TRIG GTM0ATOM02CTRL_BASE.BIT._EXT_TRIG
#define GTM0ATOM02CTRL_EXTTRIGOUT GTM0ATOM02CTRL_BASE.BIT._EXTTRIGOUT
#define GTM0ATOM02CTRL_TRIGOUT GTM0ATOM02CTRL_BASE.BIT._TRIGOUT
#define GTM0ATOM02CTRL_SLA GTM0ATOM02CTRL_BASE.BIT._SLA
#define GTM0ATOM02CTRL_OSM GTM0ATOM02CTRL_BASE.BIT._OSM
#define GTM0ATOM02CTRL_ABM GTM0ATOM02CTRL_BASE.BIT._ABM
#define GTM0ATOM02CTRL_SOMB GTM0ATOM02CTRL_BASE.BIT._SOMB
#define GTM0ATOM02SR0 GTM0ATOM02SR0_BASE.UINT32
#define GTM0ATOM02SR0_SR0 GTM0ATOM02SR0_BASE.BIT._SR0
#define GTM0ATOM02SR1 GTM0ATOM02SR1_BASE.UINT32
#define GTM0ATOM02SR1_SR1 GTM0ATOM02SR1_BASE.BIT._SR1
#define GTM0ATOM02CM0 GTM0ATOM02CM0_BASE.UINT32
#define GTM0ATOM02CM0_CM0 GTM0ATOM02CM0_BASE.BIT._CM0
#define GTM0ATOM02CM1 GTM0ATOM02CM1_BASE.UINT32
#define GTM0ATOM02CM1_CM1 GTM0ATOM02CM1_BASE.BIT._CM1
#define GTM0ATOM02CN0 GTM0ATOM02CN0_BASE.UINT32
#define GTM0ATOM02CN0_CN0 GTM0ATOM02CN0_BASE.BIT._CN0
#define GTM0ATOM02STAT GTM0ATOM02STAT_BASE.UINT32
#define GTM0ATOM02STAT_OL GTM0ATOM02STAT_BASE.BIT._OL
#define GTM0ATOM02STAT_ACBI GTM0ATOM02STAT_BASE.BIT._ACBI
#define GTM0ATOM02STAT_DV GTM0ATOM02STAT_BASE.BIT._DV
#define GTM0ATOM02STAT_WRF GTM0ATOM02STAT_BASE.BIT._WRF
#define GTM0ATOM02STAT_ACBO GTM0ATOM02STAT_BASE.BIT._ACBO
#define GTM0ATOM02IRQNOTIFY GTM0ATOM02IRQNOTIFY_BASE.UINT32
#define GTM0ATOM02IRQNOTIFY_CCU0TC GTM0ATOM02IRQNOTIFY_BASE.BIT._CCU0TC
#define GTM0ATOM02IRQNOTIFY_CCU1TC GTM0ATOM02IRQNOTIFY_BASE.BIT._CCU1TC
#define GTM0ATOM02IRQEN GTM0ATOM02IRQEN_BASE.UINT32
#define GTM0ATOM02IRQEN_CCU0TC_IRQ_EN GTM0ATOM02IRQEN_BASE.BIT._CCU0TC_IRQ_EN
#define GTM0ATOM02IRQEN_CCU1TC_IRQ_EN GTM0ATOM02IRQEN_BASE.BIT._CCU1TC_IRQ_EN
#define GTM0ATOM02IRQFORCINT GTM0ATOM02IRQFORCINT_BASE.UINT32
#define GTM0ATOM02IRQFORCINT_TRG_CCU0TC GTM0ATOM02IRQFORCINT_BASE.BIT._TRG_CCU0TC
#define GTM0ATOM02IRQFORCINT_TRG_CCU1TC GTM0ATOM02IRQFORCINT_BASE.BIT._TRG_CCU1TC
#define GTM0ATOM02IRQMODE GTM0ATOM02IRQMODE_BASE.UINT32
#define GTM0ATOM02IRQMODE_IRQ_MODE GTM0ATOM02IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0ATOM03RDADDR GTM0ATOM03RDADDR_BASE.UINT32
#define GTM0ATOM03RDADDR_RDADDR0 GTM0ATOM03RDADDR_BASE.BIT._RDADDR0
#define GTM0ATOM03RDADDR_RDADDR1 GTM0ATOM03RDADDR_BASE.BIT._RDADDR1
#define GTM0ATOM03CTRL GTM0ATOM03CTRL_BASE.UINT32
#define GTM0ATOM03CTRL_MODE GTM0ATOM03CTRL_BASE.BIT._MODE
#define GTM0ATOM03CTRL_TB12_SEL GTM0ATOM03CTRL_BASE.BIT._TB12_SEL
#define GTM0ATOM03CTRL_ARU_EN GTM0ATOM03CTRL_BASE.BIT._ARU_EN
#define GTM0ATOM03CTRL_ACB GTM0ATOM03CTRL_BASE.BIT._ACB
#define GTM0ATOM03CTRL_CMP_CTRL GTM0ATOM03CTRL_BASE.BIT._CMP_CTRL
#define GTM0ATOM03CTRL_SL GTM0ATOM03CTRL_BASE.BIT._SL
#define GTM0ATOM03CTRL_CLK_SRC_SR GTM0ATOM03CTRL_BASE.BIT._CLK_SRC_SR
#define GTM0ATOM03CTRL_WR_REQ GTM0ATOM03CTRL_BASE.BIT._WR_REQ
#define GTM0ATOM03CTRL_RST_CCU0 GTM0ATOM03CTRL_BASE.BIT._RST_CCU0
#define GTM0ATOM03CTRL_OSM_TRIG GTM0ATOM03CTRL_BASE.BIT._OSM_TRIG
#define GTM0ATOM03CTRL_EXT_TRIG GTM0ATOM03CTRL_BASE.BIT._EXT_TRIG
#define GTM0ATOM03CTRL_EXTTRIGOUT GTM0ATOM03CTRL_BASE.BIT._EXTTRIGOUT
#define GTM0ATOM03CTRL_TRIGOUT GTM0ATOM03CTRL_BASE.BIT._TRIGOUT
#define GTM0ATOM03CTRL_SLA GTM0ATOM03CTRL_BASE.BIT._SLA
#define GTM0ATOM03CTRL_OSM GTM0ATOM03CTRL_BASE.BIT._OSM
#define GTM0ATOM03CTRL_ABM GTM0ATOM03CTRL_BASE.BIT._ABM
#define GTM0ATOM03CTRL_SOMB GTM0ATOM03CTRL_BASE.BIT._SOMB
#define GTM0ATOM03SR0 GTM0ATOM03SR0_BASE.UINT32
#define GTM0ATOM03SR0_SR0 GTM0ATOM03SR0_BASE.BIT._SR0
#define GTM0ATOM03SR1 GTM0ATOM03SR1_BASE.UINT32
#define GTM0ATOM03SR1_SR1 GTM0ATOM03SR1_BASE.BIT._SR1
#define GTM0ATOM03CM0 GTM0ATOM03CM0_BASE.UINT32
#define GTM0ATOM03CM0_CM0 GTM0ATOM03CM0_BASE.BIT._CM0
#define GTM0ATOM03CM1 GTM0ATOM03CM1_BASE.UINT32
#define GTM0ATOM03CM1_CM1 GTM0ATOM03CM1_BASE.BIT._CM1
#define GTM0ATOM03CN0 GTM0ATOM03CN0_BASE.UINT32
#define GTM0ATOM03CN0_CN0 GTM0ATOM03CN0_BASE.BIT._CN0
#define GTM0ATOM03STAT GTM0ATOM03STAT_BASE.UINT32
#define GTM0ATOM03STAT_OL GTM0ATOM03STAT_BASE.BIT._OL
#define GTM0ATOM03STAT_ACBI GTM0ATOM03STAT_BASE.BIT._ACBI
#define GTM0ATOM03STAT_DV GTM0ATOM03STAT_BASE.BIT._DV
#define GTM0ATOM03STAT_WRF GTM0ATOM03STAT_BASE.BIT._WRF
#define GTM0ATOM03STAT_ACBO GTM0ATOM03STAT_BASE.BIT._ACBO
#define GTM0ATOM03IRQNOTIFY GTM0ATOM03IRQNOTIFY_BASE.UINT32
#define GTM0ATOM03IRQNOTIFY_CCU0TC GTM0ATOM03IRQNOTIFY_BASE.BIT._CCU0TC
#define GTM0ATOM03IRQNOTIFY_CCU1TC GTM0ATOM03IRQNOTIFY_BASE.BIT._CCU1TC
#define GTM0ATOM03IRQEN GTM0ATOM03IRQEN_BASE.UINT32
#define GTM0ATOM03IRQEN_CCU0TC_IRQ_EN GTM0ATOM03IRQEN_BASE.BIT._CCU0TC_IRQ_EN
#define GTM0ATOM03IRQEN_CCU1TC_IRQ_EN GTM0ATOM03IRQEN_BASE.BIT._CCU1TC_IRQ_EN
#define GTM0ATOM03IRQFORCINT GTM0ATOM03IRQFORCINT_BASE.UINT32
#define GTM0ATOM03IRQFORCINT_TRG_CCU0TC GTM0ATOM03IRQFORCINT_BASE.BIT._TRG_CCU0TC
#define GTM0ATOM03IRQFORCINT_TRG_CCU1TC GTM0ATOM03IRQFORCINT_BASE.BIT._TRG_CCU1TC
#define GTM0ATOM03IRQMODE GTM0ATOM03IRQMODE_BASE.UINT32
#define GTM0ATOM03IRQMODE_IRQ_MODE GTM0ATOM03IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0ATOM04RDADDR GTM0ATOM04RDADDR_BASE.UINT32
#define GTM0ATOM04RDADDR_RDADDR0 GTM0ATOM04RDADDR_BASE.BIT._RDADDR0
#define GTM0ATOM04RDADDR_RDADDR1 GTM0ATOM04RDADDR_BASE.BIT._RDADDR1
#define GTM0ATOM04CTRL GTM0ATOM04CTRL_BASE.UINT32
#define GTM0ATOM04CTRL_MODE GTM0ATOM04CTRL_BASE.BIT._MODE
#define GTM0ATOM04CTRL_TB12_SEL GTM0ATOM04CTRL_BASE.BIT._TB12_SEL
#define GTM0ATOM04CTRL_ARU_EN GTM0ATOM04CTRL_BASE.BIT._ARU_EN
#define GTM0ATOM04CTRL_ACB GTM0ATOM04CTRL_BASE.BIT._ACB
#define GTM0ATOM04CTRL_CMP_CTRL GTM0ATOM04CTRL_BASE.BIT._CMP_CTRL
#define GTM0ATOM04CTRL_SL GTM0ATOM04CTRL_BASE.BIT._SL
#define GTM0ATOM04CTRL_CLK_SRC_SR GTM0ATOM04CTRL_BASE.BIT._CLK_SRC_SR
#define GTM0ATOM04CTRL_WR_REQ GTM0ATOM04CTRL_BASE.BIT._WR_REQ
#define GTM0ATOM04CTRL_RST_CCU0 GTM0ATOM04CTRL_BASE.BIT._RST_CCU0
#define GTM0ATOM04CTRL_OSM_TRIG GTM0ATOM04CTRL_BASE.BIT._OSM_TRIG
#define GTM0ATOM04CTRL_EXT_TRIG GTM0ATOM04CTRL_BASE.BIT._EXT_TRIG
#define GTM0ATOM04CTRL_EXTTRIGOUT GTM0ATOM04CTRL_BASE.BIT._EXTTRIGOUT
#define GTM0ATOM04CTRL_TRIGOUT GTM0ATOM04CTRL_BASE.BIT._TRIGOUT
#define GTM0ATOM04CTRL_SLA GTM0ATOM04CTRL_BASE.BIT._SLA
#define GTM0ATOM04CTRL_OSM GTM0ATOM04CTRL_BASE.BIT._OSM
#define GTM0ATOM04CTRL_ABM GTM0ATOM04CTRL_BASE.BIT._ABM
#define GTM0ATOM04CTRL_SOMB GTM0ATOM04CTRL_BASE.BIT._SOMB
#define GTM0ATOM04SR0 GTM0ATOM04SR0_BASE.UINT32
#define GTM0ATOM04SR0_SR0 GTM0ATOM04SR0_BASE.BIT._SR0
#define GTM0ATOM04SR1 GTM0ATOM04SR1_BASE.UINT32
#define GTM0ATOM04SR1_SR1 GTM0ATOM04SR1_BASE.BIT._SR1
#define GTM0ATOM04CM0 GTM0ATOM04CM0_BASE.UINT32
#define GTM0ATOM04CM0_CM0 GTM0ATOM04CM0_BASE.BIT._CM0
#define GTM0ATOM04CM1 GTM0ATOM04CM1_BASE.UINT32
#define GTM0ATOM04CM1_CM1 GTM0ATOM04CM1_BASE.BIT._CM1
#define GTM0ATOM04CN0 GTM0ATOM04CN0_BASE.UINT32
#define GTM0ATOM04CN0_CN0 GTM0ATOM04CN0_BASE.BIT._CN0
#define GTM0ATOM04STAT GTM0ATOM04STAT_BASE.UINT32
#define GTM0ATOM04STAT_OL GTM0ATOM04STAT_BASE.BIT._OL
#define GTM0ATOM04STAT_ACBI GTM0ATOM04STAT_BASE.BIT._ACBI
#define GTM0ATOM04STAT_DV GTM0ATOM04STAT_BASE.BIT._DV
#define GTM0ATOM04STAT_WRF GTM0ATOM04STAT_BASE.BIT._WRF
#define GTM0ATOM04STAT_ACBO GTM0ATOM04STAT_BASE.BIT._ACBO
#define GTM0ATOM04IRQNOTIFY GTM0ATOM04IRQNOTIFY_BASE.UINT32
#define GTM0ATOM04IRQNOTIFY_CCU0TC GTM0ATOM04IRQNOTIFY_BASE.BIT._CCU0TC
#define GTM0ATOM04IRQNOTIFY_CCU1TC GTM0ATOM04IRQNOTIFY_BASE.BIT._CCU1TC
#define GTM0ATOM04IRQEN GTM0ATOM04IRQEN_BASE.UINT32
#define GTM0ATOM04IRQEN_CCU0TC_IRQ_EN GTM0ATOM04IRQEN_BASE.BIT._CCU0TC_IRQ_EN
#define GTM0ATOM04IRQEN_CCU1TC_IRQ_EN GTM0ATOM04IRQEN_BASE.BIT._CCU1TC_IRQ_EN
#define GTM0ATOM04IRQFORCINT GTM0ATOM04IRQFORCINT_BASE.UINT32
#define GTM0ATOM04IRQFORCINT_TRG_CCU0TC GTM0ATOM04IRQFORCINT_BASE.BIT._TRG_CCU0TC
#define GTM0ATOM04IRQFORCINT_TRG_CCU1TC GTM0ATOM04IRQFORCINT_BASE.BIT._TRG_CCU1TC
#define GTM0ATOM04IRQMODE GTM0ATOM04IRQMODE_BASE.UINT32
#define GTM0ATOM04IRQMODE_IRQ_MODE GTM0ATOM04IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0ATOM05RDADDR GTM0ATOM05RDADDR_BASE.UINT32
#define GTM0ATOM05RDADDR_RDADDR0 GTM0ATOM05RDADDR_BASE.BIT._RDADDR0
#define GTM0ATOM05RDADDR_RDADDR1 GTM0ATOM05RDADDR_BASE.BIT._RDADDR1
#define GTM0ATOM05CTRL GTM0ATOM05CTRL_BASE.UINT32
#define GTM0ATOM05CTRL_MODE GTM0ATOM05CTRL_BASE.BIT._MODE
#define GTM0ATOM05CTRL_TB12_SEL GTM0ATOM05CTRL_BASE.BIT._TB12_SEL
#define GTM0ATOM05CTRL_ARU_EN GTM0ATOM05CTRL_BASE.BIT._ARU_EN
#define GTM0ATOM05CTRL_ACB GTM0ATOM05CTRL_BASE.BIT._ACB
#define GTM0ATOM05CTRL_CMP_CTRL GTM0ATOM05CTRL_BASE.BIT._CMP_CTRL
#define GTM0ATOM05CTRL_SL GTM0ATOM05CTRL_BASE.BIT._SL
#define GTM0ATOM05CTRL_CLK_SRC_SR GTM0ATOM05CTRL_BASE.BIT._CLK_SRC_SR
#define GTM0ATOM05CTRL_WR_REQ GTM0ATOM05CTRL_BASE.BIT._WR_REQ
#define GTM0ATOM05CTRL_RST_CCU0 GTM0ATOM05CTRL_BASE.BIT._RST_CCU0
#define GTM0ATOM05CTRL_OSM_TRIG GTM0ATOM05CTRL_BASE.BIT._OSM_TRIG
#define GTM0ATOM05CTRL_EXT_TRIG GTM0ATOM05CTRL_BASE.BIT._EXT_TRIG
#define GTM0ATOM05CTRL_EXTTRIGOUT GTM0ATOM05CTRL_BASE.BIT._EXTTRIGOUT
#define GTM0ATOM05CTRL_TRIGOUT GTM0ATOM05CTRL_BASE.BIT._TRIGOUT
#define GTM0ATOM05CTRL_SLA GTM0ATOM05CTRL_BASE.BIT._SLA
#define GTM0ATOM05CTRL_OSM GTM0ATOM05CTRL_BASE.BIT._OSM
#define GTM0ATOM05CTRL_ABM GTM0ATOM05CTRL_BASE.BIT._ABM
#define GTM0ATOM05CTRL_SOMB GTM0ATOM05CTRL_BASE.BIT._SOMB
#define GTM0ATOM05SR0 GTM0ATOM05SR0_BASE.UINT32
#define GTM0ATOM05SR0_SR0 GTM0ATOM05SR0_BASE.BIT._SR0
#define GTM0ATOM05SR1 GTM0ATOM05SR1_BASE.UINT32
#define GTM0ATOM05SR1_SR1 GTM0ATOM05SR1_BASE.BIT._SR1
#define GTM0ATOM05CM0 GTM0ATOM05CM0_BASE.UINT32
#define GTM0ATOM05CM0_CM0 GTM0ATOM05CM0_BASE.BIT._CM0
#define GTM0ATOM05CM1 GTM0ATOM05CM1_BASE.UINT32
#define GTM0ATOM05CM1_CM1 GTM0ATOM05CM1_BASE.BIT._CM1
#define GTM0ATOM05CN0 GTM0ATOM05CN0_BASE.UINT32
#define GTM0ATOM05CN0_CN0 GTM0ATOM05CN0_BASE.BIT._CN0
#define GTM0ATOM05STAT GTM0ATOM05STAT_BASE.UINT32
#define GTM0ATOM05STAT_OL GTM0ATOM05STAT_BASE.BIT._OL
#define GTM0ATOM05STAT_ACBI GTM0ATOM05STAT_BASE.BIT._ACBI
#define GTM0ATOM05STAT_DV GTM0ATOM05STAT_BASE.BIT._DV
#define GTM0ATOM05STAT_WRF GTM0ATOM05STAT_BASE.BIT._WRF
#define GTM0ATOM05STAT_ACBO GTM0ATOM05STAT_BASE.BIT._ACBO
#define GTM0ATOM05IRQNOTIFY GTM0ATOM05IRQNOTIFY_BASE.UINT32
#define GTM0ATOM05IRQNOTIFY_CCU0TC GTM0ATOM05IRQNOTIFY_BASE.BIT._CCU0TC
#define GTM0ATOM05IRQNOTIFY_CCU1TC GTM0ATOM05IRQNOTIFY_BASE.BIT._CCU1TC
#define GTM0ATOM05IRQEN GTM0ATOM05IRQEN_BASE.UINT32
#define GTM0ATOM05IRQEN_CCU0TC_IRQ_EN GTM0ATOM05IRQEN_BASE.BIT._CCU0TC_IRQ_EN
#define GTM0ATOM05IRQEN_CCU1TC_IRQ_EN GTM0ATOM05IRQEN_BASE.BIT._CCU1TC_IRQ_EN
#define GTM0ATOM05IRQFORCINT GTM0ATOM05IRQFORCINT_BASE.UINT32
#define GTM0ATOM05IRQFORCINT_TRG_CCU0TC GTM0ATOM05IRQFORCINT_BASE.BIT._TRG_CCU0TC
#define GTM0ATOM05IRQFORCINT_TRG_CCU1TC GTM0ATOM05IRQFORCINT_BASE.BIT._TRG_CCU1TC
#define GTM0ATOM05IRQMODE GTM0ATOM05IRQMODE_BASE.UINT32
#define GTM0ATOM05IRQMODE_IRQ_MODE GTM0ATOM05IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0ATOM06RDADDR GTM0ATOM06RDADDR_BASE.UINT32
#define GTM0ATOM06RDADDR_RDADDR0 GTM0ATOM06RDADDR_BASE.BIT._RDADDR0
#define GTM0ATOM06RDADDR_RDADDR1 GTM0ATOM06RDADDR_BASE.BIT._RDADDR1
#define GTM0ATOM06CTRL GTM0ATOM06CTRL_BASE.UINT32
#define GTM0ATOM06CTRL_MODE GTM0ATOM06CTRL_BASE.BIT._MODE
#define GTM0ATOM06CTRL_TB12_SEL GTM0ATOM06CTRL_BASE.BIT._TB12_SEL
#define GTM0ATOM06CTRL_ARU_EN GTM0ATOM06CTRL_BASE.BIT._ARU_EN
#define GTM0ATOM06CTRL_ACB GTM0ATOM06CTRL_BASE.BIT._ACB
#define GTM0ATOM06CTRL_CMP_CTRL GTM0ATOM06CTRL_BASE.BIT._CMP_CTRL
#define GTM0ATOM06CTRL_SL GTM0ATOM06CTRL_BASE.BIT._SL
#define GTM0ATOM06CTRL_CLK_SRC_SR GTM0ATOM06CTRL_BASE.BIT._CLK_SRC_SR
#define GTM0ATOM06CTRL_WR_REQ GTM0ATOM06CTRL_BASE.BIT._WR_REQ
#define GTM0ATOM06CTRL_RST_CCU0 GTM0ATOM06CTRL_BASE.BIT._RST_CCU0
#define GTM0ATOM06CTRL_OSM_TRIG GTM0ATOM06CTRL_BASE.BIT._OSM_TRIG
#define GTM0ATOM06CTRL_EXT_TRIG GTM0ATOM06CTRL_BASE.BIT._EXT_TRIG
#define GTM0ATOM06CTRL_EXTTRIGOUT GTM0ATOM06CTRL_BASE.BIT._EXTTRIGOUT
#define GTM0ATOM06CTRL_TRIGOUT GTM0ATOM06CTRL_BASE.BIT._TRIGOUT
#define GTM0ATOM06CTRL_SLA GTM0ATOM06CTRL_BASE.BIT._SLA
#define GTM0ATOM06CTRL_OSM GTM0ATOM06CTRL_BASE.BIT._OSM
#define GTM0ATOM06CTRL_ABM GTM0ATOM06CTRL_BASE.BIT._ABM
#define GTM0ATOM06CTRL_SOMB GTM0ATOM06CTRL_BASE.BIT._SOMB
#define GTM0ATOM06SR0 GTM0ATOM06SR0_BASE.UINT32
#define GTM0ATOM06SR0_SR0 GTM0ATOM06SR0_BASE.BIT._SR0
#define GTM0ATOM06SR1 GTM0ATOM06SR1_BASE.UINT32
#define GTM0ATOM06SR1_SR1 GTM0ATOM06SR1_BASE.BIT._SR1
#define GTM0ATOM06CM0 GTM0ATOM06CM0_BASE.UINT32
#define GTM0ATOM06CM0_CM0 GTM0ATOM06CM0_BASE.BIT._CM0
#define GTM0ATOM06CM1 GTM0ATOM06CM1_BASE.UINT32
#define GTM0ATOM06CM1_CM1 GTM0ATOM06CM1_BASE.BIT._CM1
#define GTM0ATOM06CN0 GTM0ATOM06CN0_BASE.UINT32
#define GTM0ATOM06CN0_CN0 GTM0ATOM06CN0_BASE.BIT._CN0
#define GTM0ATOM06STAT GTM0ATOM06STAT_BASE.UINT32
#define GTM0ATOM06STAT_OL GTM0ATOM06STAT_BASE.BIT._OL
#define GTM0ATOM06STAT_ACBI GTM0ATOM06STAT_BASE.BIT._ACBI
#define GTM0ATOM06STAT_DV GTM0ATOM06STAT_BASE.BIT._DV
#define GTM0ATOM06STAT_WRF GTM0ATOM06STAT_BASE.BIT._WRF
#define GTM0ATOM06STAT_ACBO GTM0ATOM06STAT_BASE.BIT._ACBO
#define GTM0ATOM06IRQNOTIFY GTM0ATOM06IRQNOTIFY_BASE.UINT32
#define GTM0ATOM06IRQNOTIFY_CCU0TC GTM0ATOM06IRQNOTIFY_BASE.BIT._CCU0TC
#define GTM0ATOM06IRQNOTIFY_CCU1TC GTM0ATOM06IRQNOTIFY_BASE.BIT._CCU1TC
#define GTM0ATOM06IRQEN GTM0ATOM06IRQEN_BASE.UINT32
#define GTM0ATOM06IRQEN_CCU0TC_IRQ_EN GTM0ATOM06IRQEN_BASE.BIT._CCU0TC_IRQ_EN
#define GTM0ATOM06IRQEN_CCU1TC_IRQ_EN GTM0ATOM06IRQEN_BASE.BIT._CCU1TC_IRQ_EN
#define GTM0ATOM06IRQFORCINT GTM0ATOM06IRQFORCINT_BASE.UINT32
#define GTM0ATOM06IRQFORCINT_TRG_CCU0TC GTM0ATOM06IRQFORCINT_BASE.BIT._TRG_CCU0TC
#define GTM0ATOM06IRQFORCINT_TRG_CCU1TC GTM0ATOM06IRQFORCINT_BASE.BIT._TRG_CCU1TC
#define GTM0ATOM06IRQMODE GTM0ATOM06IRQMODE_BASE.UINT32
#define GTM0ATOM06IRQMODE_IRQ_MODE GTM0ATOM06IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0ATOM07RDADDR GTM0ATOM07RDADDR_BASE.UINT32
#define GTM0ATOM07RDADDR_RDADDR0 GTM0ATOM07RDADDR_BASE.BIT._RDADDR0
#define GTM0ATOM07RDADDR_RDADDR1 GTM0ATOM07RDADDR_BASE.BIT._RDADDR1
#define GTM0ATOM07CTRL GTM0ATOM07CTRL_BASE.UINT32
#define GTM0ATOM07CTRL_MODE GTM0ATOM07CTRL_BASE.BIT._MODE
#define GTM0ATOM07CTRL_TB12_SEL GTM0ATOM07CTRL_BASE.BIT._TB12_SEL
#define GTM0ATOM07CTRL_ARU_EN GTM0ATOM07CTRL_BASE.BIT._ARU_EN
#define GTM0ATOM07CTRL_ACB GTM0ATOM07CTRL_BASE.BIT._ACB
#define GTM0ATOM07CTRL_CMP_CTRL GTM0ATOM07CTRL_BASE.BIT._CMP_CTRL
#define GTM0ATOM07CTRL_SL GTM0ATOM07CTRL_BASE.BIT._SL
#define GTM0ATOM07CTRL_CLK_SRC_SR GTM0ATOM07CTRL_BASE.BIT._CLK_SRC_SR
#define GTM0ATOM07CTRL_WR_REQ GTM0ATOM07CTRL_BASE.BIT._WR_REQ
#define GTM0ATOM07CTRL_RST_CCU0 GTM0ATOM07CTRL_BASE.BIT._RST_CCU0
#define GTM0ATOM07CTRL_OSM_TRIG GTM0ATOM07CTRL_BASE.BIT._OSM_TRIG
#define GTM0ATOM07CTRL_EXT_TRIG GTM0ATOM07CTRL_BASE.BIT._EXT_TRIG
#define GTM0ATOM07CTRL_EXTTRIGOUT GTM0ATOM07CTRL_BASE.BIT._EXTTRIGOUT
#define GTM0ATOM07CTRL_TRIGOUT GTM0ATOM07CTRL_BASE.BIT._TRIGOUT
#define GTM0ATOM07CTRL_SLA GTM0ATOM07CTRL_BASE.BIT._SLA
#define GTM0ATOM07CTRL_OSM GTM0ATOM07CTRL_BASE.BIT._OSM
#define GTM0ATOM07CTRL_ABM GTM0ATOM07CTRL_BASE.BIT._ABM
#define GTM0ATOM07CTRL_SOMB GTM0ATOM07CTRL_BASE.BIT._SOMB
#define GTM0ATOM07SR0 GTM0ATOM07SR0_BASE.UINT32
#define GTM0ATOM07SR0_SR0 GTM0ATOM07SR0_BASE.BIT._SR0
#define GTM0ATOM07SR1 GTM0ATOM07SR1_BASE.UINT32
#define GTM0ATOM07SR1_SR1 GTM0ATOM07SR1_BASE.BIT._SR1
#define GTM0ATOM07CM0 GTM0ATOM07CM0_BASE.UINT32
#define GTM0ATOM07CM0_CM0 GTM0ATOM07CM0_BASE.BIT._CM0
#define GTM0ATOM07CM1 GTM0ATOM07CM1_BASE.UINT32
#define GTM0ATOM07CM1_CM1 GTM0ATOM07CM1_BASE.BIT._CM1
#define GTM0ATOM07CN0 GTM0ATOM07CN0_BASE.UINT32
#define GTM0ATOM07CN0_CN0 GTM0ATOM07CN0_BASE.BIT._CN0
#define GTM0ATOM07STAT GTM0ATOM07STAT_BASE.UINT32
#define GTM0ATOM07STAT_OL GTM0ATOM07STAT_BASE.BIT._OL
#define GTM0ATOM07STAT_ACBI GTM0ATOM07STAT_BASE.BIT._ACBI
#define GTM0ATOM07STAT_DV GTM0ATOM07STAT_BASE.BIT._DV
#define GTM0ATOM07STAT_WRF GTM0ATOM07STAT_BASE.BIT._WRF
#define GTM0ATOM07STAT_ACBO GTM0ATOM07STAT_BASE.BIT._ACBO
#define GTM0ATOM07IRQNOTIFY GTM0ATOM07IRQNOTIFY_BASE.UINT32
#define GTM0ATOM07IRQNOTIFY_CCU0TC GTM0ATOM07IRQNOTIFY_BASE.BIT._CCU0TC
#define GTM0ATOM07IRQNOTIFY_CCU1TC GTM0ATOM07IRQNOTIFY_BASE.BIT._CCU1TC
#define GTM0ATOM07IRQEN GTM0ATOM07IRQEN_BASE.UINT32
#define GTM0ATOM07IRQEN_CCU0TC_IRQ_EN GTM0ATOM07IRQEN_BASE.BIT._CCU0TC_IRQ_EN
#define GTM0ATOM07IRQEN_CCU1TC_IRQ_EN GTM0ATOM07IRQEN_BASE.BIT._CCU1TC_IRQ_EN
#define GTM0ATOM07IRQFORCINT GTM0ATOM07IRQFORCINT_BASE.UINT32
#define GTM0ATOM07IRQFORCINT_TRG_CCU0TC GTM0ATOM07IRQFORCINT_BASE.BIT._TRG_CCU0TC
#define GTM0ATOM07IRQFORCINT_TRG_CCU1TC GTM0ATOM07IRQFORCINT_BASE.BIT._TRG_CCU1TC
#define GTM0ATOM07IRQMODE GTM0ATOM07IRQMODE_BASE.UINT32
#define GTM0ATOM07IRQMODE_IRQ_MODE GTM0ATOM07IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0ATOM10RDADDR GTM0ATOM10RDADDR_BASE.UINT32
#define GTM0ATOM10RDADDR_RDADDR0 GTM0ATOM10RDADDR_BASE.BIT._RDADDR0
#define GTM0ATOM10RDADDR_RDADDR1 GTM0ATOM10RDADDR_BASE.BIT._RDADDR1
#define GTM0ATOM10CTRL GTM0ATOM10CTRL_BASE.UINT32
#define GTM0ATOM10CTRL_MODE GTM0ATOM10CTRL_BASE.BIT._MODE
#define GTM0ATOM10CTRL_TB12_SEL GTM0ATOM10CTRL_BASE.BIT._TB12_SEL
#define GTM0ATOM10CTRL_ARU_EN GTM0ATOM10CTRL_BASE.BIT._ARU_EN
#define GTM0ATOM10CTRL_ACB GTM0ATOM10CTRL_BASE.BIT._ACB
#define GTM0ATOM10CTRL_CMP_CTRL GTM0ATOM10CTRL_BASE.BIT._CMP_CTRL
#define GTM0ATOM10CTRL_SL GTM0ATOM10CTRL_BASE.BIT._SL
#define GTM0ATOM10CTRL_CLK_SRC_SR GTM0ATOM10CTRL_BASE.BIT._CLK_SRC_SR
#define GTM0ATOM10CTRL_WR_REQ GTM0ATOM10CTRL_BASE.BIT._WR_REQ
#define GTM0ATOM10CTRL_RST_CCU0 GTM0ATOM10CTRL_BASE.BIT._RST_CCU0
#define GTM0ATOM10CTRL_OSM_TRIG GTM0ATOM10CTRL_BASE.BIT._OSM_TRIG
#define GTM0ATOM10CTRL_EXT_TRIG GTM0ATOM10CTRL_BASE.BIT._EXT_TRIG
#define GTM0ATOM10CTRL_EXTTRIGOUT GTM0ATOM10CTRL_BASE.BIT._EXTTRIGOUT
#define GTM0ATOM10CTRL_TRIGOUT GTM0ATOM10CTRL_BASE.BIT._TRIGOUT
#define GTM0ATOM10CTRL_SLA GTM0ATOM10CTRL_BASE.BIT._SLA
#define GTM0ATOM10CTRL_OSM GTM0ATOM10CTRL_BASE.BIT._OSM
#define GTM0ATOM10CTRL_ABM GTM0ATOM10CTRL_BASE.BIT._ABM
#define GTM0ATOM10CTRL_SOMB GTM0ATOM10CTRL_BASE.BIT._SOMB
#define GTM0ATOM10SR0 GTM0ATOM10SR0_BASE.UINT32
#define GTM0ATOM10SR0_SR0 GTM0ATOM10SR0_BASE.BIT._SR0
#define GTM0ATOM10SR1 GTM0ATOM10SR1_BASE.UINT32
#define GTM0ATOM10SR1_SR1 GTM0ATOM10SR1_BASE.BIT._SR1
#define GTM0ATOM10CM0 GTM0ATOM10CM0_BASE.UINT32
#define GTM0ATOM10CM0_CM0 GTM0ATOM10CM0_BASE.BIT._CM0
#define GTM0ATOM10CM1 GTM0ATOM10CM1_BASE.UINT32
#define GTM0ATOM10CM1_CM1 GTM0ATOM10CM1_BASE.BIT._CM1
#define GTM0ATOM10CN0 GTM0ATOM10CN0_BASE.UINT32
#define GTM0ATOM10CN0_CN0 GTM0ATOM10CN0_BASE.BIT._CN0
#define GTM0ATOM10STAT GTM0ATOM10STAT_BASE.UINT32
#define GTM0ATOM10STAT_OL GTM0ATOM10STAT_BASE.BIT._OL
#define GTM0ATOM10STAT_ACBI GTM0ATOM10STAT_BASE.BIT._ACBI
#define GTM0ATOM10STAT_DV GTM0ATOM10STAT_BASE.BIT._DV
#define GTM0ATOM10STAT_WRF GTM0ATOM10STAT_BASE.BIT._WRF
#define GTM0ATOM10STAT_ACBO GTM0ATOM10STAT_BASE.BIT._ACBO
#define GTM0ATOM10IRQNOTIFY GTM0ATOM10IRQNOTIFY_BASE.UINT32
#define GTM0ATOM10IRQNOTIFY_CCU0TC GTM0ATOM10IRQNOTIFY_BASE.BIT._CCU0TC
#define GTM0ATOM10IRQNOTIFY_CCU1TC GTM0ATOM10IRQNOTIFY_BASE.BIT._CCU1TC
#define GTM0ATOM10IRQEN GTM0ATOM10IRQEN_BASE.UINT32
#define GTM0ATOM10IRQEN_CCU0TC_IRQ_EN GTM0ATOM10IRQEN_BASE.BIT._CCU0TC_IRQ_EN
#define GTM0ATOM10IRQEN_CCU1TC_IRQ_EN GTM0ATOM10IRQEN_BASE.BIT._CCU1TC_IRQ_EN
#define GTM0ATOM10IRQFORCINT GTM0ATOM10IRQFORCINT_BASE.UINT32
#define GTM0ATOM10IRQFORCINT_TRG_CCU0TC GTM0ATOM10IRQFORCINT_BASE.BIT._TRG_CCU0TC
#define GTM0ATOM10IRQFORCINT_TRG_CCU1TC GTM0ATOM10IRQFORCINT_BASE.BIT._TRG_CCU1TC
#define GTM0ATOM10IRQMODE GTM0ATOM10IRQMODE_BASE.UINT32
#define GTM0ATOM10IRQMODE_IRQ_MODE GTM0ATOM10IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0ATOM1AGCGLBCTRL GTM0ATOM1AGCGLBCTRL_BASE.UINT32
#define GTM0ATOM1AGCGLBCTRL_HOST_TRIG GTM0ATOM1AGCGLBCTRL_BASE.BIT._HOST_TRIG
#define GTM0ATOM1AGCGLBCTRL_RST_CH0 GTM0ATOM1AGCGLBCTRL_BASE.BIT._RST_CH0
#define GTM0ATOM1AGCGLBCTRL_RST_CH1 GTM0ATOM1AGCGLBCTRL_BASE.BIT._RST_CH1
#define GTM0ATOM1AGCGLBCTRL_RST_CH2 GTM0ATOM1AGCGLBCTRL_BASE.BIT._RST_CH2
#define GTM0ATOM1AGCGLBCTRL_RST_CH3 GTM0ATOM1AGCGLBCTRL_BASE.BIT._RST_CH3
#define GTM0ATOM1AGCGLBCTRL_RST_CH4 GTM0ATOM1AGCGLBCTRL_BASE.BIT._RST_CH4
#define GTM0ATOM1AGCGLBCTRL_RST_CH5 GTM0ATOM1AGCGLBCTRL_BASE.BIT._RST_CH5
#define GTM0ATOM1AGCGLBCTRL_RST_CH6 GTM0ATOM1AGCGLBCTRL_BASE.BIT._RST_CH6
#define GTM0ATOM1AGCGLBCTRL_RST_CH7 GTM0ATOM1AGCGLBCTRL_BASE.BIT._RST_CH7
#define GTM0ATOM1AGCGLBCTRL_UPEN_CTRL0 GTM0ATOM1AGCGLBCTRL_BASE.BIT._UPEN_CTRL0
#define GTM0ATOM1AGCGLBCTRL_UPEN_CTRL1 GTM0ATOM1AGCGLBCTRL_BASE.BIT._UPEN_CTRL1
#define GTM0ATOM1AGCGLBCTRL_UPEN_CTRL2 GTM0ATOM1AGCGLBCTRL_BASE.BIT._UPEN_CTRL2
#define GTM0ATOM1AGCGLBCTRL_UPEN_CTRL3 GTM0ATOM1AGCGLBCTRL_BASE.BIT._UPEN_CTRL3
#define GTM0ATOM1AGCGLBCTRL_UPEN_CTRL4 GTM0ATOM1AGCGLBCTRL_BASE.BIT._UPEN_CTRL4
#define GTM0ATOM1AGCGLBCTRL_UPEN_CTRL5 GTM0ATOM1AGCGLBCTRL_BASE.BIT._UPEN_CTRL5
#define GTM0ATOM1AGCGLBCTRL_UPEN_CTRL6 GTM0ATOM1AGCGLBCTRL_BASE.BIT._UPEN_CTRL6
#define GTM0ATOM1AGCGLBCTRL_UPEN_CTRL7 GTM0ATOM1AGCGLBCTRL_BASE.BIT._UPEN_CTRL7
#define GTM0ATOM1AGCENDISCTRL GTM0ATOM1AGCENDISCTRL_BASE.UINT32
#define GTM0ATOM1AGCENDISCTRL_ENDIS_CTRL0 GTM0ATOM1AGCENDISCTRL_BASE.BIT._ENDIS_CTRL0
#define GTM0ATOM1AGCENDISCTRL_ENDIS_CTRL1 GTM0ATOM1AGCENDISCTRL_BASE.BIT._ENDIS_CTRL1
#define GTM0ATOM1AGCENDISCTRL_ENDIS_CTRL2 GTM0ATOM1AGCENDISCTRL_BASE.BIT._ENDIS_CTRL2
#define GTM0ATOM1AGCENDISCTRL_ENDIS_CTRL3 GTM0ATOM1AGCENDISCTRL_BASE.BIT._ENDIS_CTRL3
#define GTM0ATOM1AGCENDISCTRL_ENDIS_CTRL4 GTM0ATOM1AGCENDISCTRL_BASE.BIT._ENDIS_CTRL4
#define GTM0ATOM1AGCENDISCTRL_ENDIS_CTRL5 GTM0ATOM1AGCENDISCTRL_BASE.BIT._ENDIS_CTRL5
#define GTM0ATOM1AGCENDISCTRL_ENDIS_CTRL6 GTM0ATOM1AGCENDISCTRL_BASE.BIT._ENDIS_CTRL6
#define GTM0ATOM1AGCENDISCTRL_ENDIS_CTRL7 GTM0ATOM1AGCENDISCTRL_BASE.BIT._ENDIS_CTRL7
#define GTM0ATOM1AGCENDISSTAT GTM0ATOM1AGCENDISSTAT_BASE.UINT32
#define GTM0ATOM1AGCENDISSTAT_ENDIS_STAT0 GTM0ATOM1AGCENDISSTAT_BASE.BIT._ENDIS_STAT0
#define GTM0ATOM1AGCENDISSTAT_ENDIS_STAT1 GTM0ATOM1AGCENDISSTAT_BASE.BIT._ENDIS_STAT1
#define GTM0ATOM1AGCENDISSTAT_ENDIS_STAT2 GTM0ATOM1AGCENDISSTAT_BASE.BIT._ENDIS_STAT2
#define GTM0ATOM1AGCENDISSTAT_ENDIS_STAT3 GTM0ATOM1AGCENDISSTAT_BASE.BIT._ENDIS_STAT3
#define GTM0ATOM1AGCENDISSTAT_ENDIS_STAT4 GTM0ATOM1AGCENDISSTAT_BASE.BIT._ENDIS_STAT4
#define GTM0ATOM1AGCENDISSTAT_ENDIS_STAT5 GTM0ATOM1AGCENDISSTAT_BASE.BIT._ENDIS_STAT5
#define GTM0ATOM1AGCENDISSTAT_ENDIS_STAT6 GTM0ATOM1AGCENDISSTAT_BASE.BIT._ENDIS_STAT6
#define GTM0ATOM1AGCENDISSTAT_ENDIS_STAT7 GTM0ATOM1AGCENDISSTAT_BASE.BIT._ENDIS_STAT7
#define GTM0ATOM1AGCACTTB GTM0ATOM1AGCACTTB_BASE.UINT32
#define GTM0ATOM1AGCACTTB_ACT_TB GTM0ATOM1AGCACTTB_BASE.BIT._ACT_TB
#define GTM0ATOM1AGCACTTB_TB_TRIG GTM0ATOM1AGCACTTB_BASE.BIT._TB_TRIG
#define GTM0ATOM1AGCACTTB_TBU_SEL GTM0ATOM1AGCACTTB_BASE.BIT._TBU_SEL
#define GTM0ATOM1AGCOUTENCTRL GTM0ATOM1AGCOUTENCTRL_BASE.UINT32
#define GTM0ATOM1AGCOUTENCTRL_OUTEN_CTRL0 GTM0ATOM1AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL0
#define GTM0ATOM1AGCOUTENCTRL_OUTEN_CTRL1 GTM0ATOM1AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL1
#define GTM0ATOM1AGCOUTENCTRL_OUTEN_CTRL2 GTM0ATOM1AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL2
#define GTM0ATOM1AGCOUTENCTRL_OUTEN_CTRL3 GTM0ATOM1AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL3
#define GTM0ATOM1AGCOUTENCTRL_OUTEN_CTRL4 GTM0ATOM1AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL4
#define GTM0ATOM1AGCOUTENCTRL_OUTEN_CTRL5 GTM0ATOM1AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL5
#define GTM0ATOM1AGCOUTENCTRL_OUTEN_CTRL6 GTM0ATOM1AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL6
#define GTM0ATOM1AGCOUTENCTRL_OUTEN_CTRL7 GTM0ATOM1AGCOUTENCTRL_BASE.BIT._OUTEN_CTRL7
#define GTM0ATOM1AGCOUTENSTAT GTM0ATOM1AGCOUTENSTAT_BASE.UINT32
#define GTM0ATOM1AGCOUTENSTAT_OUTEN_STAT0 GTM0ATOM1AGCOUTENSTAT_BASE.BIT._OUTEN_STAT0
#define GTM0ATOM1AGCOUTENSTAT_OUTEN_STAT1 GTM0ATOM1AGCOUTENSTAT_BASE.BIT._OUTEN_STAT1
#define GTM0ATOM1AGCOUTENSTAT_OUTEN_STAT2 GTM0ATOM1AGCOUTENSTAT_BASE.BIT._OUTEN_STAT2
#define GTM0ATOM1AGCOUTENSTAT_OUTEN_STAT3 GTM0ATOM1AGCOUTENSTAT_BASE.BIT._OUTEN_STAT3
#define GTM0ATOM1AGCOUTENSTAT_OUTEN_STAT4 GTM0ATOM1AGCOUTENSTAT_BASE.BIT._OUTEN_STAT4
#define GTM0ATOM1AGCOUTENSTAT_OUTEN_STAT5 GTM0ATOM1AGCOUTENSTAT_BASE.BIT._OUTEN_STAT5
#define GTM0ATOM1AGCOUTENSTAT_OUTEN_STAT6 GTM0ATOM1AGCOUTENSTAT_BASE.BIT._OUTEN_STAT6
#define GTM0ATOM1AGCOUTENSTAT_OUTEN_STAT7 GTM0ATOM1AGCOUTENSTAT_BASE.BIT._OUTEN_STAT7
#define GTM0ATOM1AGCFUPDCTRL GTM0ATOM1AGCFUPDCTRL_BASE.UINT32
#define GTM0ATOM1AGCFUPDCTRL_FUPD_CTRL0 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._FUPD_CTRL0
#define GTM0ATOM1AGCFUPDCTRL_FUPD_CTRL1 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._FUPD_CTRL1
#define GTM0ATOM1AGCFUPDCTRL_FUPD_CTRL2 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._FUPD_CTRL2
#define GTM0ATOM1AGCFUPDCTRL_FUPD_CTRL3 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._FUPD_CTRL3
#define GTM0ATOM1AGCFUPDCTRL_FUPD_CTRL4 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._FUPD_CTRL4
#define GTM0ATOM1AGCFUPDCTRL_FUPD_CTRL5 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._FUPD_CTRL5
#define GTM0ATOM1AGCFUPDCTRL_FUPD_CTRL6 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._FUPD_CTRL6
#define GTM0ATOM1AGCFUPDCTRL_FUPD_CTRL7 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._FUPD_CTRL7
#define GTM0ATOM1AGCFUPDCTRL_RSTCN0_CH0 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._RSTCN0_CH0
#define GTM0ATOM1AGCFUPDCTRL_RSTCN0_CH1 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._RSTCN0_CH1
#define GTM0ATOM1AGCFUPDCTRL_RSTCN0_CH2 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._RSTCN0_CH2
#define GTM0ATOM1AGCFUPDCTRL_RSTCN0_CH3 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._RSTCN0_CH3
#define GTM0ATOM1AGCFUPDCTRL_RSTCN0_CH4 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._RSTCN0_CH4
#define GTM0ATOM1AGCFUPDCTRL_RSTCN0_CH5 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._RSTCN0_CH5
#define GTM0ATOM1AGCFUPDCTRL_RSTCN0_CH6 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._RSTCN0_CH6
#define GTM0ATOM1AGCFUPDCTRL_RSTCN0_CH7 GTM0ATOM1AGCFUPDCTRL_BASE.BIT._RSTCN0_CH7
#define GTM0ATOM1AGCINTTRIG GTM0ATOM1AGCINTTRIG_BASE.UINT32
#define GTM0ATOM1AGCINTTRIG_INT_TRIG0 GTM0ATOM1AGCINTTRIG_BASE.BIT._INT_TRIG0
#define GTM0ATOM1AGCINTTRIG_INT_TRIG1 GTM0ATOM1AGCINTTRIG_BASE.BIT._INT_TRIG1
#define GTM0ATOM1AGCINTTRIG_INT_TRIG2 GTM0ATOM1AGCINTTRIG_BASE.BIT._INT_TRIG2
#define GTM0ATOM1AGCINTTRIG_INT_TRIG3 GTM0ATOM1AGCINTTRIG_BASE.BIT._INT_TRIG3
#define GTM0ATOM1AGCINTTRIG_INT_TRIG4 GTM0ATOM1AGCINTTRIG_BASE.BIT._INT_TRIG4
#define GTM0ATOM1AGCINTTRIG_INT_TRIG5 GTM0ATOM1AGCINTTRIG_BASE.BIT._INT_TRIG5
#define GTM0ATOM1AGCINTTRIG_INT_TRIG6 GTM0ATOM1AGCINTTRIG_BASE.BIT._INT_TRIG6
#define GTM0ATOM1AGCINTTRIG_INT_TRIG7 GTM0ATOM1AGCINTTRIG_BASE.BIT._INT_TRIG7
#define GTM0ATOM11RDADDR GTM0ATOM11RDADDR_BASE.UINT32
#define GTM0ATOM11RDADDR_RDADDR0 GTM0ATOM11RDADDR_BASE.BIT._RDADDR0
#define GTM0ATOM11RDADDR_RDADDR1 GTM0ATOM11RDADDR_BASE.BIT._RDADDR1
#define GTM0ATOM11CTRL GTM0ATOM11CTRL_BASE.UINT32
#define GTM0ATOM11CTRL_MODE GTM0ATOM11CTRL_BASE.BIT._MODE
#define GTM0ATOM11CTRL_TB12_SEL GTM0ATOM11CTRL_BASE.BIT._TB12_SEL
#define GTM0ATOM11CTRL_ARU_EN GTM0ATOM11CTRL_BASE.BIT._ARU_EN
#define GTM0ATOM11CTRL_ACB GTM0ATOM11CTRL_BASE.BIT._ACB
#define GTM0ATOM11CTRL_CMP_CTRL GTM0ATOM11CTRL_BASE.BIT._CMP_CTRL
#define GTM0ATOM11CTRL_SL GTM0ATOM11CTRL_BASE.BIT._SL
#define GTM0ATOM11CTRL_CLK_SRC_SR GTM0ATOM11CTRL_BASE.BIT._CLK_SRC_SR
#define GTM0ATOM11CTRL_WR_REQ GTM0ATOM11CTRL_BASE.BIT._WR_REQ
#define GTM0ATOM11CTRL_RST_CCU0 GTM0ATOM11CTRL_BASE.BIT._RST_CCU0
#define GTM0ATOM11CTRL_OSM_TRIG GTM0ATOM11CTRL_BASE.BIT._OSM_TRIG
#define GTM0ATOM11CTRL_EXT_TRIG GTM0ATOM11CTRL_BASE.BIT._EXT_TRIG
#define GTM0ATOM11CTRL_EXTTRIGOUT GTM0ATOM11CTRL_BASE.BIT._EXTTRIGOUT
#define GTM0ATOM11CTRL_TRIGOUT GTM0ATOM11CTRL_BASE.BIT._TRIGOUT
#define GTM0ATOM11CTRL_SLA GTM0ATOM11CTRL_BASE.BIT._SLA
#define GTM0ATOM11CTRL_OSM GTM0ATOM11CTRL_BASE.BIT._OSM
#define GTM0ATOM11CTRL_ABM GTM0ATOM11CTRL_BASE.BIT._ABM
#define GTM0ATOM11CTRL_SOMB GTM0ATOM11CTRL_BASE.BIT._SOMB
#define GTM0ATOM11SR0 GTM0ATOM11SR0_BASE.UINT32
#define GTM0ATOM11SR0_SR0 GTM0ATOM11SR0_BASE.BIT._SR0
#define GTM0ATOM11SR1 GTM0ATOM11SR1_BASE.UINT32
#define GTM0ATOM11SR1_SR1 GTM0ATOM11SR1_BASE.BIT._SR1
#define GTM0ATOM11CM0 GTM0ATOM11CM0_BASE.UINT32
#define GTM0ATOM11CM0_CM0 GTM0ATOM11CM0_BASE.BIT._CM0
#define GTM0ATOM11CM1 GTM0ATOM11CM1_BASE.UINT32
#define GTM0ATOM11CM1_CM1 GTM0ATOM11CM1_BASE.BIT._CM1
#define GTM0ATOM11CN0 GTM0ATOM11CN0_BASE.UINT32
#define GTM0ATOM11CN0_CN0 GTM0ATOM11CN0_BASE.BIT._CN0
#define GTM0ATOM11STAT GTM0ATOM11STAT_BASE.UINT32
#define GTM0ATOM11STAT_OL GTM0ATOM11STAT_BASE.BIT._OL
#define GTM0ATOM11STAT_ACBI GTM0ATOM11STAT_BASE.BIT._ACBI
#define GTM0ATOM11STAT_DV GTM0ATOM11STAT_BASE.BIT._DV
#define GTM0ATOM11STAT_WRF GTM0ATOM11STAT_BASE.BIT._WRF
#define GTM0ATOM11STAT_ACBO GTM0ATOM11STAT_BASE.BIT._ACBO
#define GTM0ATOM11IRQNOTIFY GTM0ATOM11IRQNOTIFY_BASE.UINT32
#define GTM0ATOM11IRQNOTIFY_CCU0TC GTM0ATOM11IRQNOTIFY_BASE.BIT._CCU0TC
#define GTM0ATOM11IRQNOTIFY_CCU1TC GTM0ATOM11IRQNOTIFY_BASE.BIT._CCU1TC
#define GTM0ATOM11IRQEN GTM0ATOM11IRQEN_BASE.UINT32
#define GTM0ATOM11IRQEN_CCU0TC_IRQ_EN GTM0ATOM11IRQEN_BASE.BIT._CCU0TC_IRQ_EN
#define GTM0ATOM11IRQEN_CCU1TC_IRQ_EN GTM0ATOM11IRQEN_BASE.BIT._CCU1TC_IRQ_EN
#define GTM0ATOM11IRQFORCINT GTM0ATOM11IRQFORCINT_BASE.UINT32
#define GTM0ATOM11IRQFORCINT_TRG_CCU0TC GTM0ATOM11IRQFORCINT_BASE.BIT._TRG_CCU0TC
#define GTM0ATOM11IRQFORCINT_TRG_CCU1TC GTM0ATOM11IRQFORCINT_BASE.BIT._TRG_CCU1TC
#define GTM0ATOM11IRQMODE GTM0ATOM11IRQMODE_BASE.UINT32
#define GTM0ATOM11IRQMODE_IRQ_MODE GTM0ATOM11IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0ATOM12RDADDR GTM0ATOM12RDADDR_BASE.UINT32
#define GTM0ATOM12RDADDR_RDADDR0 GTM0ATOM12RDADDR_BASE.BIT._RDADDR0
#define GTM0ATOM12RDADDR_RDADDR1 GTM0ATOM12RDADDR_BASE.BIT._RDADDR1
#define GTM0ATOM12CTRL GTM0ATOM12CTRL_BASE.UINT32
#define GTM0ATOM12CTRL_MODE GTM0ATOM12CTRL_BASE.BIT._MODE
#define GTM0ATOM12CTRL_TB12_SEL GTM0ATOM12CTRL_BASE.BIT._TB12_SEL
#define GTM0ATOM12CTRL_ARU_EN GTM0ATOM12CTRL_BASE.BIT._ARU_EN
#define GTM0ATOM12CTRL_ACB GTM0ATOM12CTRL_BASE.BIT._ACB
#define GTM0ATOM12CTRL_CMP_CTRL GTM0ATOM12CTRL_BASE.BIT._CMP_CTRL
#define GTM0ATOM12CTRL_SL GTM0ATOM12CTRL_BASE.BIT._SL
#define GTM0ATOM12CTRL_CLK_SRC_SR GTM0ATOM12CTRL_BASE.BIT._CLK_SRC_SR
#define GTM0ATOM12CTRL_WR_REQ GTM0ATOM12CTRL_BASE.BIT._WR_REQ
#define GTM0ATOM12CTRL_RST_CCU0 GTM0ATOM12CTRL_BASE.BIT._RST_CCU0
#define GTM0ATOM12CTRL_OSM_TRIG GTM0ATOM12CTRL_BASE.BIT._OSM_TRIG
#define GTM0ATOM12CTRL_EXT_TRIG GTM0ATOM12CTRL_BASE.BIT._EXT_TRIG
#define GTM0ATOM12CTRL_EXTTRIGOUT GTM0ATOM12CTRL_BASE.BIT._EXTTRIGOUT
#define GTM0ATOM12CTRL_TRIGOUT GTM0ATOM12CTRL_BASE.BIT._TRIGOUT
#define GTM0ATOM12CTRL_SLA GTM0ATOM12CTRL_BASE.BIT._SLA
#define GTM0ATOM12CTRL_OSM GTM0ATOM12CTRL_BASE.BIT._OSM
#define GTM0ATOM12CTRL_ABM GTM0ATOM12CTRL_BASE.BIT._ABM
#define GTM0ATOM12CTRL_SOMB GTM0ATOM12CTRL_BASE.BIT._SOMB
#define GTM0ATOM12SR0 GTM0ATOM12SR0_BASE.UINT32
#define GTM0ATOM12SR0_SR0 GTM0ATOM12SR0_BASE.BIT._SR0
#define GTM0ATOM12SR1 GTM0ATOM12SR1_BASE.UINT32
#define GTM0ATOM12SR1_SR1 GTM0ATOM12SR1_BASE.BIT._SR1
#define GTM0ATOM12CM0 GTM0ATOM12CM0_BASE.UINT32
#define GTM0ATOM12CM0_CM0 GTM0ATOM12CM0_BASE.BIT._CM0
#define GTM0ATOM12CM1 GTM0ATOM12CM1_BASE.UINT32
#define GTM0ATOM12CM1_CM1 GTM0ATOM12CM1_BASE.BIT._CM1
#define GTM0ATOM12CN0 GTM0ATOM12CN0_BASE.UINT32
#define GTM0ATOM12CN0_CN0 GTM0ATOM12CN0_BASE.BIT._CN0
#define GTM0ATOM12STAT GTM0ATOM12STAT_BASE.UINT32
#define GTM0ATOM12STAT_OL GTM0ATOM12STAT_BASE.BIT._OL
#define GTM0ATOM12STAT_ACBI GTM0ATOM12STAT_BASE.BIT._ACBI
#define GTM0ATOM12STAT_DV GTM0ATOM12STAT_BASE.BIT._DV
#define GTM0ATOM12STAT_WRF GTM0ATOM12STAT_BASE.BIT._WRF
#define GTM0ATOM12STAT_ACBO GTM0ATOM12STAT_BASE.BIT._ACBO
#define GTM0ATOM12IRQNOTIFY GTM0ATOM12IRQNOTIFY_BASE.UINT32
#define GTM0ATOM12IRQNOTIFY_CCU0TC GTM0ATOM12IRQNOTIFY_BASE.BIT._CCU0TC
#define GTM0ATOM12IRQNOTIFY_CCU1TC GTM0ATOM12IRQNOTIFY_BASE.BIT._CCU1TC
#define GTM0ATOM12IRQEN GTM0ATOM12IRQEN_BASE.UINT32
#define GTM0ATOM12IRQEN_CCU0TC_IRQ_EN GTM0ATOM12IRQEN_BASE.BIT._CCU0TC_IRQ_EN
#define GTM0ATOM12IRQEN_CCU1TC_IRQ_EN GTM0ATOM12IRQEN_BASE.BIT._CCU1TC_IRQ_EN
#define GTM0ATOM12IRQFORCINT GTM0ATOM12IRQFORCINT_BASE.UINT32
#define GTM0ATOM12IRQFORCINT_TRG_CCU0TC GTM0ATOM12IRQFORCINT_BASE.BIT._TRG_CCU0TC
#define GTM0ATOM12IRQFORCINT_TRG_CCU1TC GTM0ATOM12IRQFORCINT_BASE.BIT._TRG_CCU1TC
#define GTM0ATOM12IRQMODE GTM0ATOM12IRQMODE_BASE.UINT32
#define GTM0ATOM12IRQMODE_IRQ_MODE GTM0ATOM12IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0ATOM13RDADDR GTM0ATOM13RDADDR_BASE.UINT32
#define GTM0ATOM13RDADDR_RDADDR0 GTM0ATOM13RDADDR_BASE.BIT._RDADDR0
#define GTM0ATOM13RDADDR_RDADDR1 GTM0ATOM13RDADDR_BASE.BIT._RDADDR1
#define GTM0ATOM13CTRL GTM0ATOM13CTRL_BASE.UINT32
#define GTM0ATOM13CTRL_MODE GTM0ATOM13CTRL_BASE.BIT._MODE
#define GTM0ATOM13CTRL_TB12_SEL GTM0ATOM13CTRL_BASE.BIT._TB12_SEL
#define GTM0ATOM13CTRL_ARU_EN GTM0ATOM13CTRL_BASE.BIT._ARU_EN
#define GTM0ATOM13CTRL_ACB GTM0ATOM13CTRL_BASE.BIT._ACB
#define GTM0ATOM13CTRL_CMP_CTRL GTM0ATOM13CTRL_BASE.BIT._CMP_CTRL
#define GTM0ATOM13CTRL_SL GTM0ATOM13CTRL_BASE.BIT._SL
#define GTM0ATOM13CTRL_CLK_SRC_SR GTM0ATOM13CTRL_BASE.BIT._CLK_SRC_SR
#define GTM0ATOM13CTRL_WR_REQ GTM0ATOM13CTRL_BASE.BIT._WR_REQ
#define GTM0ATOM13CTRL_RST_CCU0 GTM0ATOM13CTRL_BASE.BIT._RST_CCU0
#define GTM0ATOM13CTRL_OSM_TRIG GTM0ATOM13CTRL_BASE.BIT._OSM_TRIG
#define GTM0ATOM13CTRL_EXT_TRIG GTM0ATOM13CTRL_BASE.BIT._EXT_TRIG
#define GTM0ATOM13CTRL_EXTTRIGOUT GTM0ATOM13CTRL_BASE.BIT._EXTTRIGOUT
#define GTM0ATOM13CTRL_TRIGOUT GTM0ATOM13CTRL_BASE.BIT._TRIGOUT
#define GTM0ATOM13CTRL_SLA GTM0ATOM13CTRL_BASE.BIT._SLA
#define GTM0ATOM13CTRL_OSM GTM0ATOM13CTRL_BASE.BIT._OSM
#define GTM0ATOM13CTRL_ABM GTM0ATOM13CTRL_BASE.BIT._ABM
#define GTM0ATOM13CTRL_SOMB GTM0ATOM13CTRL_BASE.BIT._SOMB
#define GTM0ATOM13SR0 GTM0ATOM13SR0_BASE.UINT32
#define GTM0ATOM13SR0_SR0 GTM0ATOM13SR0_BASE.BIT._SR0
#define GTM0ATOM13SR1 GTM0ATOM13SR1_BASE.UINT32
#define GTM0ATOM13SR1_SR1 GTM0ATOM13SR1_BASE.BIT._SR1
#define GTM0ATOM13CM0 GTM0ATOM13CM0_BASE.UINT32
#define GTM0ATOM13CM0_CM0 GTM0ATOM13CM0_BASE.BIT._CM0
#define GTM0ATOM13CM1 GTM0ATOM13CM1_BASE.UINT32
#define GTM0ATOM13CM1_CM1 GTM0ATOM13CM1_BASE.BIT._CM1
#define GTM0ATOM13CN0 GTM0ATOM13CN0_BASE.UINT32
#define GTM0ATOM13CN0_CN0 GTM0ATOM13CN0_BASE.BIT._CN0
#define GTM0ATOM13STAT GTM0ATOM13STAT_BASE.UINT32
#define GTM0ATOM13STAT_OL GTM0ATOM13STAT_BASE.BIT._OL
#define GTM0ATOM13STAT_ACBI GTM0ATOM13STAT_BASE.BIT._ACBI
#define GTM0ATOM13STAT_DV GTM0ATOM13STAT_BASE.BIT._DV
#define GTM0ATOM13STAT_WRF GTM0ATOM13STAT_BASE.BIT._WRF
#define GTM0ATOM13STAT_ACBO GTM0ATOM13STAT_BASE.BIT._ACBO
#define GTM0ATOM13IRQNOTIFY GTM0ATOM13IRQNOTIFY_BASE.UINT32
#define GTM0ATOM13IRQNOTIFY_CCU0TC GTM0ATOM13IRQNOTIFY_BASE.BIT._CCU0TC
#define GTM0ATOM13IRQNOTIFY_CCU1TC GTM0ATOM13IRQNOTIFY_BASE.BIT._CCU1TC
#define GTM0ATOM13IRQEN GTM0ATOM13IRQEN_BASE.UINT32
#define GTM0ATOM13IRQEN_CCU0TC_IRQ_EN GTM0ATOM13IRQEN_BASE.BIT._CCU0TC_IRQ_EN
#define GTM0ATOM13IRQEN_CCU1TC_IRQ_EN GTM0ATOM13IRQEN_BASE.BIT._CCU1TC_IRQ_EN
#define GTM0ATOM13IRQFORCINT GTM0ATOM13IRQFORCINT_BASE.UINT32
#define GTM0ATOM13IRQFORCINT_TRG_CCU0TC GTM0ATOM13IRQFORCINT_BASE.BIT._TRG_CCU0TC
#define GTM0ATOM13IRQFORCINT_TRG_CCU1TC GTM0ATOM13IRQFORCINT_BASE.BIT._TRG_CCU1TC
#define GTM0ATOM13IRQMODE GTM0ATOM13IRQMODE_BASE.UINT32
#define GTM0ATOM13IRQMODE_IRQ_MODE GTM0ATOM13IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0DTM24CTRL GTM0DTM24CTRL_BASE.UINT32
#define GTM0DTM24CTRL_CLK_SEL GTM0DTM24CTRL_BASE.BIT._CLK_SEL
#define GTM0DTM24CTRL_DTM_SEL GTM0DTM24CTRL_BASE.BIT._DTM_SEL
#define GTM0DTM24CTRL_UPD_MODE GTM0DTM24CTRL_BASE.BIT._UPD_MODE
#define GTM0DTM24CTRL_SR_UPD_EN GTM0DTM24CTRL_BASE.BIT._SR_UPD_EN
#define GTM0DTM24CTRL_SHUT_OFF_RST GTM0DTM24CTRL_BASE.BIT._SHUT_OFF_RST
#define GTM0DTM24CHCTRL1 GTM0DTM24CHCTRL1_BASE.UINT32
#define GTM0DTM24CHCTRL1_O1SEL_0 GTM0DTM24CHCTRL1_BASE.BIT._O1SEL_0
#define GTM0DTM24CHCTRL1_SWAP_0 GTM0DTM24CHCTRL1_BASE.BIT._SWAP_0
#define GTM0DTM24CHCTRL1_O1F_0 GTM0DTM24CHCTRL1_BASE.BIT._O1F_0
#define GTM0DTM24CHCTRL1_XDT_EN_0_1 GTM0DTM24CHCTRL1_BASE.BIT._XDT_EN_0_1
#define GTM0DTM24CHCTRL1_O1SEL_1 GTM0DTM24CHCTRL1_BASE.BIT._O1SEL_1
#define GTM0DTM24CHCTRL1_I1SEL_1 GTM0DTM24CHCTRL1_BASE.BIT._I1SEL_1
#define GTM0DTM24CHCTRL1_SH_EN_1 GTM0DTM24CHCTRL1_BASE.BIT._SH_EN_1
#define GTM0DTM24CHCTRL1_SWAP_1 GTM0DTM24CHCTRL1_BASE.BIT._SWAP_1
#define GTM0DTM24CHCTRL1_O1F_1 GTM0DTM24CHCTRL1_BASE.BIT._O1F_1
#define GTM0DTM24CHCTRL1_O1SEL_2 GTM0DTM24CHCTRL1_BASE.BIT._O1SEL_2
#define GTM0DTM24CHCTRL1_I1SEL_2 GTM0DTM24CHCTRL1_BASE.BIT._I1SEL_2
#define GTM0DTM24CHCTRL1_SH_EN_2 GTM0DTM24CHCTRL1_BASE.BIT._SH_EN_2
#define GTM0DTM24CHCTRL1_SWAP_2 GTM0DTM24CHCTRL1_BASE.BIT._SWAP_2
#define GTM0DTM24CHCTRL1_O1F_2 GTM0DTM24CHCTRL1_BASE.BIT._O1F_2
#define GTM0DTM24CHCTRL1_XDT_EN_2_3 GTM0DTM24CHCTRL1_BASE.BIT._XDT_EN_2_3
#define GTM0DTM24CHCTRL1_O1SEL_3 GTM0DTM24CHCTRL1_BASE.BIT._O1SEL_3
#define GTM0DTM24CHCTRL1_I1SEL_3 GTM0DTM24CHCTRL1_BASE.BIT._I1SEL_3
#define GTM0DTM24CHCTRL1_SH_EN_3 GTM0DTM24CHCTRL1_BASE.BIT._SH_EN_3
#define GTM0DTM24CHCTRL1_SWAP_3 GTM0DTM24CHCTRL1_BASE.BIT._SWAP_3
#define GTM0DTM24CHCTRL1_O1F_3 GTM0DTM24CHCTRL1_BASE.BIT._O1F_3
#define GTM0DTM24CHCTRL2 GTM0DTM24CHCTRL2_BASE.UINT32
#define GTM0DTM24CHCTRL2_POL0_0 GTM0DTM24CHCTRL2_BASE.BIT._POL0_0
#define GTM0DTM24CHCTRL2_OC0_0 GTM0DTM24CHCTRL2_BASE.BIT._OC0_0
#define GTM0DTM24CHCTRL2_SL0_0 GTM0DTM24CHCTRL2_BASE.BIT._SL0_0
#define GTM0DTM24CHCTRL2_DT0_0 GTM0DTM24CHCTRL2_BASE.BIT._DT0_0
#define GTM0DTM24CHCTRL2_POL1_0 GTM0DTM24CHCTRL2_BASE.BIT._POL1_0
#define GTM0DTM24CHCTRL2_OC1_0 GTM0DTM24CHCTRL2_BASE.BIT._OC1_0
#define GTM0DTM24CHCTRL2_SL1_0 GTM0DTM24CHCTRL2_BASE.BIT._SL1_0
#define GTM0DTM24CHCTRL2_DT1_0 GTM0DTM24CHCTRL2_BASE.BIT._DT1_0
#define GTM0DTM24CHCTRL2_POL0_1 GTM0DTM24CHCTRL2_BASE.BIT._POL0_1
#define GTM0DTM24CHCTRL2_OC0_1 GTM0DTM24CHCTRL2_BASE.BIT._OC0_1
#define GTM0DTM24CHCTRL2_SL0_1 GTM0DTM24CHCTRL2_BASE.BIT._SL0_1
#define GTM0DTM24CHCTRL2_DT0_1 GTM0DTM24CHCTRL2_BASE.BIT._DT0_1
#define GTM0DTM24CHCTRL2_POL1_1 GTM0DTM24CHCTRL2_BASE.BIT._POL1_1
#define GTM0DTM24CHCTRL2_OC1_1 GTM0DTM24CHCTRL2_BASE.BIT._OC1_1
#define GTM0DTM24CHCTRL2_SL1_1 GTM0DTM24CHCTRL2_BASE.BIT._SL1_1
#define GTM0DTM24CHCTRL2_DT1_1 GTM0DTM24CHCTRL2_BASE.BIT._DT1_1
#define GTM0DTM24CHCTRL2_POL0_2 GTM0DTM24CHCTRL2_BASE.BIT._POL0_2
#define GTM0DTM24CHCTRL2_OC0_2 GTM0DTM24CHCTRL2_BASE.BIT._OC0_2
#define GTM0DTM24CHCTRL2_SL0_2 GTM0DTM24CHCTRL2_BASE.BIT._SL0_2
#define GTM0DTM24CHCTRL2_DT0_2 GTM0DTM24CHCTRL2_BASE.BIT._DT0_2
#define GTM0DTM24CHCTRL2_POL1_2 GTM0DTM24CHCTRL2_BASE.BIT._POL1_2
#define GTM0DTM24CHCTRL2_OC1_2 GTM0DTM24CHCTRL2_BASE.BIT._OC1_2
#define GTM0DTM24CHCTRL2_SL1_2 GTM0DTM24CHCTRL2_BASE.BIT._SL1_2
#define GTM0DTM24CHCTRL2_DT1_2 GTM0DTM24CHCTRL2_BASE.BIT._DT1_2
#define GTM0DTM24CHCTRL2_POL0_3 GTM0DTM24CHCTRL2_BASE.BIT._POL0_3
#define GTM0DTM24CHCTRL2_OC0_3 GTM0DTM24CHCTRL2_BASE.BIT._OC0_3
#define GTM0DTM24CHCTRL2_SL0_3 GTM0DTM24CHCTRL2_BASE.BIT._SL0_3
#define GTM0DTM24CHCTRL2_DT0_3 GTM0DTM24CHCTRL2_BASE.BIT._DT0_3
#define GTM0DTM24CHCTRL2_POL1_3 GTM0DTM24CHCTRL2_BASE.BIT._POL1_3
#define GTM0DTM24CHCTRL2_OC1_3 GTM0DTM24CHCTRL2_BASE.BIT._OC1_3
#define GTM0DTM24CHCTRL2_SL1_3 GTM0DTM24CHCTRL2_BASE.BIT._SL1_3
#define GTM0DTM24CHCTRL2_DT1_3 GTM0DTM24CHCTRL2_BASE.BIT._DT1_3
#define GTM0DTM24CHCTRL2SR GTM0DTM24CHCTRL2SR_BASE.UINT32
#define GTM0DTM24CHCTRL2SR_POL0_0_SR GTM0DTM24CHCTRL2SR_BASE.BIT._POL0_0_SR
#define GTM0DTM24CHCTRL2SR_OC0_0_SR GTM0DTM24CHCTRL2SR_BASE.BIT._OC0_0_SR
#define GTM0DTM24CHCTRL2SR_SL0_0_SR GTM0DTM24CHCTRL2SR_BASE.BIT._SL0_0_SR
#define GTM0DTM24CHCTRL2SR_DT0_0_SR GTM0DTM24CHCTRL2SR_BASE.BIT._DT0_0_SR
#define GTM0DTM24CHCTRL2SR_POL1_0_SR GTM0DTM24CHCTRL2SR_BASE.BIT._POL1_0_SR
#define GTM0DTM24CHCTRL2SR_OC1_0_SR GTM0DTM24CHCTRL2SR_BASE.BIT._OC1_0_SR
#define GTM0DTM24CHCTRL2SR_SL1_0_SR GTM0DTM24CHCTRL2SR_BASE.BIT._SL1_0_SR
#define GTM0DTM24CHCTRL2SR_DT1_0_SR GTM0DTM24CHCTRL2SR_BASE.BIT._DT1_0_SR
#define GTM0DTM24CHCTRL2SR_POL0_1_SR GTM0DTM24CHCTRL2SR_BASE.BIT._POL0_1_SR
#define GTM0DTM24CHCTRL2SR_OC0_1_SR GTM0DTM24CHCTRL2SR_BASE.BIT._OC0_1_SR
#define GTM0DTM24CHCTRL2SR_SL0_1_SR GTM0DTM24CHCTRL2SR_BASE.BIT._SL0_1_SR
#define GTM0DTM24CHCTRL2SR_DT0_1_SR GTM0DTM24CHCTRL2SR_BASE.BIT._DT0_1_SR
#define GTM0DTM24CHCTRL2SR_POL1_1_SR GTM0DTM24CHCTRL2SR_BASE.BIT._POL1_1_SR
#define GTM0DTM24CHCTRL2SR_OC1_1_SR GTM0DTM24CHCTRL2SR_BASE.BIT._OC1_1_SR
#define GTM0DTM24CHCTRL2SR_SL1_1_SR GTM0DTM24CHCTRL2SR_BASE.BIT._SL1_1_SR
#define GTM0DTM24CHCTRL2SR_DT1_1_SR GTM0DTM24CHCTRL2SR_BASE.BIT._DT1_1_SR
#define GTM0DTM24CHCTRL2SR_POL0_2_SR GTM0DTM24CHCTRL2SR_BASE.BIT._POL0_2_SR
#define GTM0DTM24CHCTRL2SR_OC0_2_SR GTM0DTM24CHCTRL2SR_BASE.BIT._OC0_2_SR
#define GTM0DTM24CHCTRL2SR_SL0_2_SR GTM0DTM24CHCTRL2SR_BASE.BIT._SL0_2_SR
#define GTM0DTM24CHCTRL2SR_DT0_2_SR GTM0DTM24CHCTRL2SR_BASE.BIT._DT0_2_SR
#define GTM0DTM24CHCTRL2SR_POL1_2_SR GTM0DTM24CHCTRL2SR_BASE.BIT._POL1_2_SR
#define GTM0DTM24CHCTRL2SR_OC1_2_SR GTM0DTM24CHCTRL2SR_BASE.BIT._OC1_2_SR
#define GTM0DTM24CHCTRL2SR_SL1_2_SR GTM0DTM24CHCTRL2SR_BASE.BIT._SL1_2_SR
#define GTM0DTM24CHCTRL2SR_DT1_2_SR GTM0DTM24CHCTRL2SR_BASE.BIT._DT1_2_SR
#define GTM0DTM24CHCTRL2SR_POL0_3_SR GTM0DTM24CHCTRL2SR_BASE.BIT._POL0_3_SR
#define GTM0DTM24CHCTRL2SR_OC0_3_SR GTM0DTM24CHCTRL2SR_BASE.BIT._OC0_3_SR
#define GTM0DTM24CHCTRL2SR_SL0_3_SR GTM0DTM24CHCTRL2SR_BASE.BIT._SL0_3_SR
#define GTM0DTM24CHCTRL2SR_DT0_3_SR GTM0DTM24CHCTRL2SR_BASE.BIT._DT0_3_SR
#define GTM0DTM24CHCTRL2SR_POL1_3_SR GTM0DTM24CHCTRL2SR_BASE.BIT._POL1_3_SR
#define GTM0DTM24CHCTRL2SR_OC1_3_SR GTM0DTM24CHCTRL2SR_BASE.BIT._OC1_3_SR
#define GTM0DTM24CHCTRL2SR_SL1_3_SR GTM0DTM24CHCTRL2SR_BASE.BIT._SL1_3_SR
#define GTM0DTM24CHCTRL2SR_DT1_3_SR GTM0DTM24CHCTRL2SR_BASE.BIT._DT1_3_SR
#define GTM0DTM24PSCTRL GTM0DTM24PSCTRL_BASE.UINT32
#define GTM0DTM24PSCTRL_RELBLK GTM0DTM24PSCTRL_BASE.BIT._RELBLK
#define GTM0DTM24PSCTRL_PSU_IN_SEL GTM0DTM24PSCTRL_BASE.BIT._PSU_IN_SEL
#define GTM0DTM24PSCTRL_IN_POL GTM0DTM24PSCTRL_BASE.BIT._IN_POL
#define GTM0DTM24PSCTRL_SHIFT_SEL GTM0DTM24PSCTRL_BASE.BIT._SHIFT_SEL
#define GTM0DTM240DTV GTM0DTM240DTV_BASE.UINT32
#define GTM0DTM240DTV_RELRISE GTM0DTM240DTV_BASE.BIT._RELRISE
#define GTM0DTM240DTV_RELFALL GTM0DTM240DTV_BASE.BIT._RELFALL
#define GTM0DTM241DTV GTM0DTM241DTV_BASE.UINT32
#define GTM0DTM241DTV_RELRISE GTM0DTM241DTV_BASE.BIT._RELRISE
#define GTM0DTM241DTV_RELFALL GTM0DTM241DTV_BASE.BIT._RELFALL
#define GTM0DTM242DTV GTM0DTM242DTV_BASE.UINT32
#define GTM0DTM242DTV_RELRISE GTM0DTM242DTV_BASE.BIT._RELRISE
#define GTM0DTM242DTV_RELFALL GTM0DTM242DTV_BASE.BIT._RELFALL
#define GTM0DTM243DTV GTM0DTM243DTV_BASE.UINT32
#define GTM0DTM243DTV_RELRISE GTM0DTM243DTV_BASE.BIT._RELRISE
#define GTM0DTM243DTV_RELFALL GTM0DTM243DTV_BASE.BIT._RELFALL
#define GTM0DTM24CHSR GTM0DTM24CHSR_BASE.UINT32
#define GTM0DTM24CHSR_SL0_0_SR_SR GTM0DTM24CHSR_BASE.BIT._SL0_0_SR_SR
#define GTM0DTM24CHSR_SL1_0_SR_SR GTM0DTM24CHSR_BASE.BIT._SL1_0_SR_SR
#define GTM0DTM24CHSR_SL0_1_SR_SR GTM0DTM24CHSR_BASE.BIT._SL0_1_SR_SR
#define GTM0DTM24CHSR_SL1_1_SR_SR GTM0DTM24CHSR_BASE.BIT._SL1_1_SR_SR
#define GTM0DTM24CHSR_SL0_2_SR_SR GTM0DTM24CHSR_BASE.BIT._SL0_2_SR_SR
#define GTM0DTM24CHSR_SL1_2_SR_SR GTM0DTM24CHSR_BASE.BIT._SL1_2_SR_SR
#define GTM0DTM24CHSR_SL0_3_SR_SR GTM0DTM24CHSR_BASE.BIT._SL0_3_SR_SR
#define GTM0DTM24CHSR_SL1_3_SR_SR GTM0DTM24CHSR_BASE.BIT._SL1_3_SR_SR
#define GTM0DTM26CTRL GTM0DTM26CTRL_BASE.UINT32
#define GTM0DTM26CTRL_CLK_SEL GTM0DTM26CTRL_BASE.BIT._CLK_SEL
#define GTM0DTM26CTRL_DTM_SEL GTM0DTM26CTRL_BASE.BIT._DTM_SEL
#define GTM0DTM26CTRL_UPD_MODE GTM0DTM26CTRL_BASE.BIT._UPD_MODE
#define GTM0DTM26CTRL_SR_UPD_EN GTM0DTM26CTRL_BASE.BIT._SR_UPD_EN
#define GTM0DTM26CTRL_SHUT_OFF_RST GTM0DTM26CTRL_BASE.BIT._SHUT_OFF_RST
#define GTM0DTM26CHCTRL1 GTM0DTM26CHCTRL1_BASE.UINT32
#define GTM0DTM26CHCTRL1_O1SEL_0 GTM0DTM26CHCTRL1_BASE.BIT._O1SEL_0
#define GTM0DTM26CHCTRL1_SWAP_0 GTM0DTM26CHCTRL1_BASE.BIT._SWAP_0
#define GTM0DTM26CHCTRL1_O1F_0 GTM0DTM26CHCTRL1_BASE.BIT._O1F_0
#define GTM0DTM26CHCTRL1_XDT_EN_0_1 GTM0DTM26CHCTRL1_BASE.BIT._XDT_EN_0_1
#define GTM0DTM26CHCTRL1_O1SEL_1 GTM0DTM26CHCTRL1_BASE.BIT._O1SEL_1
#define GTM0DTM26CHCTRL1_I1SEL_1 GTM0DTM26CHCTRL1_BASE.BIT._I1SEL_1
#define GTM0DTM26CHCTRL1_SH_EN_1 GTM0DTM26CHCTRL1_BASE.BIT._SH_EN_1
#define GTM0DTM26CHCTRL1_SWAP_1 GTM0DTM26CHCTRL1_BASE.BIT._SWAP_1
#define GTM0DTM26CHCTRL1_O1F_1 GTM0DTM26CHCTRL1_BASE.BIT._O1F_1
#define GTM0DTM26CHCTRL1_O1SEL_2 GTM0DTM26CHCTRL1_BASE.BIT._O1SEL_2
#define GTM0DTM26CHCTRL1_I1SEL_2 GTM0DTM26CHCTRL1_BASE.BIT._I1SEL_2
#define GTM0DTM26CHCTRL1_SH_EN_2 GTM0DTM26CHCTRL1_BASE.BIT._SH_EN_2
#define GTM0DTM26CHCTRL1_SWAP_2 GTM0DTM26CHCTRL1_BASE.BIT._SWAP_2
#define GTM0DTM26CHCTRL1_O1F_2 GTM0DTM26CHCTRL1_BASE.BIT._O1F_2
#define GTM0DTM26CHCTRL1_XDT_EN_2_3 GTM0DTM26CHCTRL1_BASE.BIT._XDT_EN_2_3
#define GTM0DTM26CHCTRL1_O1SEL_3 GTM0DTM26CHCTRL1_BASE.BIT._O1SEL_3
#define GTM0DTM26CHCTRL1_I1SEL_3 GTM0DTM26CHCTRL1_BASE.BIT._I1SEL_3
#define GTM0DTM26CHCTRL1_SH_EN_3 GTM0DTM26CHCTRL1_BASE.BIT._SH_EN_3
#define GTM0DTM26CHCTRL1_SWAP_3 GTM0DTM26CHCTRL1_BASE.BIT._SWAP_3
#define GTM0DTM26CHCTRL1_O1F_3 GTM0DTM26CHCTRL1_BASE.BIT._O1F_3
#define GTM0DTM26CHCTRL2 GTM0DTM26CHCTRL2_BASE.UINT32
#define GTM0DTM26CHCTRL2_POL0_0 GTM0DTM26CHCTRL2_BASE.BIT._POL0_0
#define GTM0DTM26CHCTRL2_OC0_0 GTM0DTM26CHCTRL2_BASE.BIT._OC0_0
#define GTM0DTM26CHCTRL2_SL0_0 GTM0DTM26CHCTRL2_BASE.BIT._SL0_0
#define GTM0DTM26CHCTRL2_DT0_0 GTM0DTM26CHCTRL2_BASE.BIT._DT0_0
#define GTM0DTM26CHCTRL2_POL1_0 GTM0DTM26CHCTRL2_BASE.BIT._POL1_0
#define GTM0DTM26CHCTRL2_OC1_0 GTM0DTM26CHCTRL2_BASE.BIT._OC1_0
#define GTM0DTM26CHCTRL2_SL1_0 GTM0DTM26CHCTRL2_BASE.BIT._SL1_0
#define GTM0DTM26CHCTRL2_DT1_0 GTM0DTM26CHCTRL2_BASE.BIT._DT1_0
#define GTM0DTM26CHCTRL2_POL0_1 GTM0DTM26CHCTRL2_BASE.BIT._POL0_1
#define GTM0DTM26CHCTRL2_OC0_1 GTM0DTM26CHCTRL2_BASE.BIT._OC0_1
#define GTM0DTM26CHCTRL2_SL0_1 GTM0DTM26CHCTRL2_BASE.BIT._SL0_1
#define GTM0DTM26CHCTRL2_DT0_1 GTM0DTM26CHCTRL2_BASE.BIT._DT0_1
#define GTM0DTM26CHCTRL2_POL1_1 GTM0DTM26CHCTRL2_BASE.BIT._POL1_1
#define GTM0DTM26CHCTRL2_OC1_1 GTM0DTM26CHCTRL2_BASE.BIT._OC1_1
#define GTM0DTM26CHCTRL2_SL1_1 GTM0DTM26CHCTRL2_BASE.BIT._SL1_1
#define GTM0DTM26CHCTRL2_DT1_1 GTM0DTM26CHCTRL2_BASE.BIT._DT1_1
#define GTM0DTM26CHCTRL2_POL0_2 GTM0DTM26CHCTRL2_BASE.BIT._POL0_2
#define GTM0DTM26CHCTRL2_OC0_2 GTM0DTM26CHCTRL2_BASE.BIT._OC0_2
#define GTM0DTM26CHCTRL2_SL0_2 GTM0DTM26CHCTRL2_BASE.BIT._SL0_2
#define GTM0DTM26CHCTRL2_DT0_2 GTM0DTM26CHCTRL2_BASE.BIT._DT0_2
#define GTM0DTM26CHCTRL2_POL1_2 GTM0DTM26CHCTRL2_BASE.BIT._POL1_2
#define GTM0DTM26CHCTRL2_OC1_2 GTM0DTM26CHCTRL2_BASE.BIT._OC1_2
#define GTM0DTM26CHCTRL2_SL1_2 GTM0DTM26CHCTRL2_BASE.BIT._SL1_2
#define GTM0DTM26CHCTRL2_DT1_2 GTM0DTM26CHCTRL2_BASE.BIT._DT1_2
#define GTM0DTM26CHCTRL2_POL0_3 GTM0DTM26CHCTRL2_BASE.BIT._POL0_3
#define GTM0DTM26CHCTRL2_OC0_3 GTM0DTM26CHCTRL2_BASE.BIT._OC0_3
#define GTM0DTM26CHCTRL2_SL0_3 GTM0DTM26CHCTRL2_BASE.BIT._SL0_3
#define GTM0DTM26CHCTRL2_DT0_3 GTM0DTM26CHCTRL2_BASE.BIT._DT0_3
#define GTM0DTM26CHCTRL2_POL1_3 GTM0DTM26CHCTRL2_BASE.BIT._POL1_3
#define GTM0DTM26CHCTRL2_OC1_3 GTM0DTM26CHCTRL2_BASE.BIT._OC1_3
#define GTM0DTM26CHCTRL2_SL1_3 GTM0DTM26CHCTRL2_BASE.BIT._SL1_3
#define GTM0DTM26CHCTRL2_DT1_3 GTM0DTM26CHCTRL2_BASE.BIT._DT1_3
#define GTM0DTM26CHCTRL2SR GTM0DTM26CHCTRL2SR_BASE.UINT32
#define GTM0DTM26CHCTRL2SR_POL0_0_SR GTM0DTM26CHCTRL2SR_BASE.BIT._POL0_0_SR
#define GTM0DTM26CHCTRL2SR_OC0_0_SR GTM0DTM26CHCTRL2SR_BASE.BIT._OC0_0_SR
#define GTM0DTM26CHCTRL2SR_SL0_0_SR GTM0DTM26CHCTRL2SR_BASE.BIT._SL0_0_SR
#define GTM0DTM26CHCTRL2SR_DT0_0_SR GTM0DTM26CHCTRL2SR_BASE.BIT._DT0_0_SR
#define GTM0DTM26CHCTRL2SR_POL1_0_SR GTM0DTM26CHCTRL2SR_BASE.BIT._POL1_0_SR
#define GTM0DTM26CHCTRL2SR_OC1_0_SR GTM0DTM26CHCTRL2SR_BASE.BIT._OC1_0_SR
#define GTM0DTM26CHCTRL2SR_SL1_0_SR GTM0DTM26CHCTRL2SR_BASE.BIT._SL1_0_SR
#define GTM0DTM26CHCTRL2SR_DT1_0_SR GTM0DTM26CHCTRL2SR_BASE.BIT._DT1_0_SR
#define GTM0DTM26CHCTRL2SR_POL0_1_SR GTM0DTM26CHCTRL2SR_BASE.BIT._POL0_1_SR
#define GTM0DTM26CHCTRL2SR_OC0_1_SR GTM0DTM26CHCTRL2SR_BASE.BIT._OC0_1_SR
#define GTM0DTM26CHCTRL2SR_SL0_1_SR GTM0DTM26CHCTRL2SR_BASE.BIT._SL0_1_SR
#define GTM0DTM26CHCTRL2SR_DT0_1_SR GTM0DTM26CHCTRL2SR_BASE.BIT._DT0_1_SR
#define GTM0DTM26CHCTRL2SR_POL1_1_SR GTM0DTM26CHCTRL2SR_BASE.BIT._POL1_1_SR
#define GTM0DTM26CHCTRL2SR_OC1_1_SR GTM0DTM26CHCTRL2SR_BASE.BIT._OC1_1_SR
#define GTM0DTM26CHCTRL2SR_SL1_1_SR GTM0DTM26CHCTRL2SR_BASE.BIT._SL1_1_SR
#define GTM0DTM26CHCTRL2SR_DT1_1_SR GTM0DTM26CHCTRL2SR_BASE.BIT._DT1_1_SR
#define GTM0DTM26CHCTRL2SR_POL0_2_SR GTM0DTM26CHCTRL2SR_BASE.BIT._POL0_2_SR
#define GTM0DTM26CHCTRL2SR_OC0_2_SR GTM0DTM26CHCTRL2SR_BASE.BIT._OC0_2_SR
#define GTM0DTM26CHCTRL2SR_SL0_2_SR GTM0DTM26CHCTRL2SR_BASE.BIT._SL0_2_SR
#define GTM0DTM26CHCTRL2SR_DT0_2_SR GTM0DTM26CHCTRL2SR_BASE.BIT._DT0_2_SR
#define GTM0DTM26CHCTRL2SR_POL1_2_SR GTM0DTM26CHCTRL2SR_BASE.BIT._POL1_2_SR
#define GTM0DTM26CHCTRL2SR_OC1_2_SR GTM0DTM26CHCTRL2SR_BASE.BIT._OC1_2_SR
#define GTM0DTM26CHCTRL2SR_SL1_2_SR GTM0DTM26CHCTRL2SR_BASE.BIT._SL1_2_SR
#define GTM0DTM26CHCTRL2SR_DT1_2_SR GTM0DTM26CHCTRL2SR_BASE.BIT._DT1_2_SR
#define GTM0DTM26CHCTRL2SR_POL0_3_SR GTM0DTM26CHCTRL2SR_BASE.BIT._POL0_3_SR
#define GTM0DTM26CHCTRL2SR_OC0_3_SR GTM0DTM26CHCTRL2SR_BASE.BIT._OC0_3_SR
#define GTM0DTM26CHCTRL2SR_SL0_3_SR GTM0DTM26CHCTRL2SR_BASE.BIT._SL0_3_SR
#define GTM0DTM26CHCTRL2SR_DT0_3_SR GTM0DTM26CHCTRL2SR_BASE.BIT._DT0_3_SR
#define GTM0DTM26CHCTRL2SR_POL1_3_SR GTM0DTM26CHCTRL2SR_BASE.BIT._POL1_3_SR
#define GTM0DTM26CHCTRL2SR_OC1_3_SR GTM0DTM26CHCTRL2SR_BASE.BIT._OC1_3_SR
#define GTM0DTM26CHCTRL2SR_SL1_3_SR GTM0DTM26CHCTRL2SR_BASE.BIT._SL1_3_SR
#define GTM0DTM26CHCTRL2SR_DT1_3_SR GTM0DTM26CHCTRL2SR_BASE.BIT._DT1_3_SR
#define GTM0DTM26PSCTRL GTM0DTM26PSCTRL_BASE.UINT32
#define GTM0DTM26PSCTRL_RELBLK GTM0DTM26PSCTRL_BASE.BIT._RELBLK
#define GTM0DTM26PSCTRL_PSU_IN_SEL GTM0DTM26PSCTRL_BASE.BIT._PSU_IN_SEL
#define GTM0DTM26PSCTRL_IN_POL GTM0DTM26PSCTRL_BASE.BIT._IN_POL
#define GTM0DTM26PSCTRL_SHIFT_SEL GTM0DTM26PSCTRL_BASE.BIT._SHIFT_SEL
#define GTM0DTM260DTV GTM0DTM260DTV_BASE.UINT32
#define GTM0DTM260DTV_RELRISE GTM0DTM260DTV_BASE.BIT._RELRISE
#define GTM0DTM260DTV_RELFALL GTM0DTM260DTV_BASE.BIT._RELFALL
#define GTM0DTM261DTV GTM0DTM261DTV_BASE.UINT32
#define GTM0DTM261DTV_RELRISE GTM0DTM261DTV_BASE.BIT._RELRISE
#define GTM0DTM261DTV_RELFALL GTM0DTM261DTV_BASE.BIT._RELFALL
#define GTM0DTM262DTV GTM0DTM262DTV_BASE.UINT32
#define GTM0DTM262DTV_RELRISE GTM0DTM262DTV_BASE.BIT._RELRISE
#define GTM0DTM262DTV_RELFALL GTM0DTM262DTV_BASE.BIT._RELFALL
#define GTM0DTM263DTV GTM0DTM263DTV_BASE.UINT32
#define GTM0DTM263DTV_RELRISE GTM0DTM263DTV_BASE.BIT._RELRISE
#define GTM0DTM263DTV_RELFALL GTM0DTM263DTV_BASE.BIT._RELFALL
#define GTM0DTM26CHSR GTM0DTM26CHSR_BASE.UINT32
#define GTM0DTM26CHSR_SL0_0_SR_SR GTM0DTM26CHSR_BASE.BIT._SL0_0_SR_SR
#define GTM0DTM26CHSR_SL1_0_SR_SR GTM0DTM26CHSR_BASE.BIT._SL1_0_SR_SR
#define GTM0DTM26CHSR_SL0_1_SR_SR GTM0DTM26CHSR_BASE.BIT._SL0_1_SR_SR
#define GTM0DTM26CHSR_SL1_1_SR_SR GTM0DTM26CHSR_BASE.BIT._SL1_1_SR_SR
#define GTM0DTM26CHSR_SL0_2_SR_SR GTM0DTM26CHSR_BASE.BIT._SL0_2_SR_SR
#define GTM0DTM26CHSR_SL1_2_SR_SR GTM0DTM26CHSR_BASE.BIT._SL1_2_SR_SR
#define GTM0DTM26CHSR_SL0_3_SR_SR GTM0DTM26CHSR_BASE.BIT._SL0_3_SR_SR
#define GTM0DTM26CHSR_SL1_3_SR_SR GTM0DTM26CHSR_BASE.BIT._SL1_3_SR_SR
#define GTM0MCS00R0 GTM0MCS00R0_BASE.UINT32
#define GTM0MCS00R0_DATA GTM0MCS00R0_BASE.BIT._DATA
#define GTM0MCS00R1 GTM0MCS00R1_BASE.UINT32
#define GTM0MCS00R1_DATA GTM0MCS00R1_BASE.BIT._DATA
#define GTM0MCS00R2 GTM0MCS00R2_BASE.UINT32
#define GTM0MCS00R2_DATA GTM0MCS00R2_BASE.BIT._DATA
#define GTM0MCS00R3 GTM0MCS00R3_BASE.UINT32
#define GTM0MCS00R3_DATA GTM0MCS00R3_BASE.BIT._DATA
#define GTM0MCS00R4 GTM0MCS00R4_BASE.UINT32
#define GTM0MCS00R4_DATA GTM0MCS00R4_BASE.BIT._DATA
#define GTM0MCS00R5 GTM0MCS00R5_BASE.UINT32
#define GTM0MCS00R5_DATA GTM0MCS00R5_BASE.BIT._DATA
#define GTM0MCS00R6 GTM0MCS00R6_BASE.UINT32
#define GTM0MCS00R6_DATA GTM0MCS00R6_BASE.BIT._DATA
#define GTM0MCS00R7 GTM0MCS00R7_BASE.UINT32
#define GTM0MCS00R7_DATA GTM0MCS00R7_BASE.BIT._DATA
#define GTM0MCS00CTRL GTM0MCS00CTRL_BASE.UINT32
#define GTM0MCS00CTRL_EN GTM0MCS00CTRL_BASE.BIT._EN
#define GTM0MCS00CTRL_IRQ GTM0MCS00CTRL_BASE.BIT._IRQ
#define GTM0MCS00CTRL_ERR GTM0MCS00CTRL_BASE.BIT._ERR
#define GTM0MCS00CTRL_CY GTM0MCS00CTRL_BASE.BIT._CY
#define GTM0MCS00CTRL_Z GTM0MCS00CTRL_BASE.BIT._Z
#define GTM0MCS00CTRL_V GTM0MCS00CTRL_BASE.BIT._V
#define GTM0MCS00CTRL_N GTM0MCS00CTRL_BASE.BIT._N
#define GTM0MCS00CTRL_CAT GTM0MCS00CTRL_BASE.BIT._CAT
#define GTM0MCS00CTRL_CWT GTM0MCS00CTRL_BASE.BIT._CWT
#define GTM0MCS00CTRL_SAT GTM0MCS00CTRL_BASE.BIT._SAT
#define GTM0MCS00CTRL_SP_CNT GTM0MCS00CTRL_BASE.BIT._SP_CNT
#define GTM0MCS00ACB GTM0MCS00ACB_BASE.UINT32
#define GTM0MCS00ACB_ACB0 GTM0MCS00ACB_BASE.BIT._ACB0
#define GTM0MCS00ACB_ACB1 GTM0MCS00ACB_BASE.BIT._ACB1
#define GTM0MCS00ACB_ACB2 GTM0MCS00ACB_BASE.BIT._ACB2
#define GTM0MCS00ACB_ACB3 GTM0MCS00ACB_BASE.BIT._ACB3
#define GTM0MCS00ACB_ACB4 GTM0MCS00ACB_BASE.BIT._ACB4
#define GTM0MCS0CTRG GTM0MCS0CTRG_BASE.UINT32
#define GTM0MCS0CTRG_TRG0 GTM0MCS0CTRG_BASE.BIT._TRG0
#define GTM0MCS0CTRG_TRG1 GTM0MCS0CTRG_BASE.BIT._TRG1
#define GTM0MCS0CTRG_TRG2 GTM0MCS0CTRG_BASE.BIT._TRG2
#define GTM0MCS0CTRG_TRG3 GTM0MCS0CTRG_BASE.BIT._TRG3
#define GTM0MCS0CTRG_TRG4 GTM0MCS0CTRG_BASE.BIT._TRG4
#define GTM0MCS0CTRG_TRG5 GTM0MCS0CTRG_BASE.BIT._TRG5
#define GTM0MCS0CTRG_TRG6 GTM0MCS0CTRG_BASE.BIT._TRG6
#define GTM0MCS0CTRG_TRG7 GTM0MCS0CTRG_BASE.BIT._TRG7
#define GTM0MCS0CTRG_TRG8 GTM0MCS0CTRG_BASE.BIT._TRG8
#define GTM0MCS0CTRG_TRG9 GTM0MCS0CTRG_BASE.BIT._TRG9
#define GTM0MCS0CTRG_TRG10 GTM0MCS0CTRG_BASE.BIT._TRG10
#define GTM0MCS0CTRG_TRG11 GTM0MCS0CTRG_BASE.BIT._TRG11
#define GTM0MCS0CTRG_TRG12 GTM0MCS0CTRG_BASE.BIT._TRG12
#define GTM0MCS0CTRG_TRG13 GTM0MCS0CTRG_BASE.BIT._TRG13
#define GTM0MCS0CTRG_TRG14 GTM0MCS0CTRG_BASE.BIT._TRG14
#define GTM0MCS0CTRG_TRG15 GTM0MCS0CTRG_BASE.BIT._TRG15
#define GTM0MCS0STRG GTM0MCS0STRG_BASE.UINT32
#define GTM0MCS0STRG_TRG0 GTM0MCS0STRG_BASE.BIT._TRG0
#define GTM0MCS0STRG_TRG1 GTM0MCS0STRG_BASE.BIT._TRG1
#define GTM0MCS0STRG_TRG2 GTM0MCS0STRG_BASE.BIT._TRG2
#define GTM0MCS0STRG_TRG3 GTM0MCS0STRG_BASE.BIT._TRG3
#define GTM0MCS0STRG_TRG4 GTM0MCS0STRG_BASE.BIT._TRG4
#define GTM0MCS0STRG_TRG5 GTM0MCS0STRG_BASE.BIT._TRG5
#define GTM0MCS0STRG_TRG6 GTM0MCS0STRG_BASE.BIT._TRG6
#define GTM0MCS0STRG_TRG7 GTM0MCS0STRG_BASE.BIT._TRG7
#define GTM0MCS0STRG_TRG8 GTM0MCS0STRG_BASE.BIT._TRG8
#define GTM0MCS0STRG_TRG9 GTM0MCS0STRG_BASE.BIT._TRG9
#define GTM0MCS0STRG_TRG10 GTM0MCS0STRG_BASE.BIT._TRG10
#define GTM0MCS0STRG_TRG11 GTM0MCS0STRG_BASE.BIT._TRG11
#define GTM0MCS0STRG_TRG12 GTM0MCS0STRG_BASE.BIT._TRG12
#define GTM0MCS0STRG_TRG13 GTM0MCS0STRG_BASE.BIT._TRG13
#define GTM0MCS0STRG_TRG14 GTM0MCS0STRG_BASE.BIT._TRG14
#define GTM0MCS0STRG_TRG15 GTM0MCS0STRG_BASE.BIT._TRG15
#define GTM0MCS00MHB GTM0MCS00MHB_BASE.UINT32
#define GTM0MCS00MHB_DATA GTM0MCS00MHB_BASE.BIT._DATA
#define GTM0MCS00PC GTM0MCS00PC_BASE.UINT32
#define GTM0MCS00PC_PC GTM0MCS00PC_BASE.BIT._PC
#define GTM0MCS00IRQNOTIFY GTM0MCS00IRQNOTIFY_BASE.UINT32
#define GTM0MCS00IRQNOTIFY_MCS_IRQ GTM0MCS00IRQNOTIFY_BASE.BIT._MCS_IRQ
#define GTM0MCS00IRQNOTIFY_STK_ERR_IRQ GTM0MCS00IRQNOTIFY_BASE.BIT._STK_ERR_IRQ
#define GTM0MCS00IRQNOTIFY_ERR_IRQ GTM0MCS00IRQNOTIFY_BASE.BIT._ERR_IRQ
#define GTM0MCS00IRQEN GTM0MCS00IRQEN_BASE.UINT32
#define GTM0MCS00IRQEN_MCS_IRQ_EN GTM0MCS00IRQEN_BASE.BIT._MCS_IRQ_EN
#define GTM0MCS00IRQEN_STK_ERR_IRQ_ GTM0MCS00IRQEN_BASE.BIT._STK_ERR_IRQ_
#define GTM0MCS00IRQEN_ERR_IRQ_EN GTM0MCS00IRQEN_BASE.BIT._ERR_IRQ_EN
#define GTM0MCS00IRQFORCINT GTM0MCS00IRQFORCINT_BASE.UINT32
#define GTM0MCS00IRQFORCINT_TRG_MCS_IRQ GTM0MCS00IRQFORCINT_BASE.BIT._TRG_MCS_IRQ
#define GTM0MCS00IRQFORCINT_TRG_STK_ERRQ GTM0MCS00IRQFORCINT_BASE.BIT._TRG_STK_ERRQ
#define GTM0MCS00IRQFORCINT_TRG_ERR_IRQ GTM0MCS00IRQFORCINT_BASE.BIT._TRG_ERR_IRQ
#define GTM0MCS00IRQMODE GTM0MCS00IRQMODE_BASE.UINT32
#define GTM0MCS00IRQMODE_IRQ_MODE GTM0MCS00IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0MCS00EIRQEN GTM0MCS00EIRQEN_BASE.UINT32
#define GTM0MCS00EIRQEN_MCS_EIRQ_EN GTM0MCS00EIRQEN_BASE.BIT._MCS_EIRQ_EN
#define GTM0MCS00EIRQEN_STK_ERR_EIRQ_EN GTM0MCS00EIRQEN_BASE.BIT._STK_ERR_EIRQ_EN
#define GTM0MCS00EIRQEN_ERR_EIRQ_EN GTM0MCS00EIRQEN_BASE.BIT._ERR_EIRQ_EN
#define GTM0MCS0CTRLSTAT GTM0MCS0CTRLSTAT_BASE.UINT32
#define GTM0MCS0CTRLSTAT_SCD_MODE GTM0MCS0CTRLSTAT_BASE.BIT._SCD_MODE
#define GTM0MCS0CTRLSTAT_SCD_CH GTM0MCS0CTRLSTAT_BASE.BIT._SCD_CH
#define GTM0MCS0CTRLSTAT_RAM_RST GTM0MCS0CTRLSTAT_BASE.BIT._RAM_RST
#define GTM0MCS0CTRLSTAT_HLT_SP_OFL GTM0MCS0CTRLSTAT_BASE.BIT._HLT_SP_OFL
#define GTM0MCS0CTRLSTAT_ERR_SRC_ID GTM0MCS0CTRLSTAT_BASE.BIT._ERR_SRC_ID
#define GTM0MCS0CTRLSTAT_EN_TIM_FOUT GTM0MCS0CTRLSTAT_BASE.BIT._EN_TIM_FOUT
#define GTM0MCS0RESET GTM0MCS0RESET_BASE.UINT32
#define GTM0MCS0RESET_RST0 GTM0MCS0RESET_BASE.BIT._RST0
#define GTM0MCS0RESET_RST1 GTM0MCS0RESET_BASE.BIT._RST1
#define GTM0MCS0RESET_RST2 GTM0MCS0RESET_BASE.BIT._RST2
#define GTM0MCS0RESET_RST3 GTM0MCS0RESET_BASE.BIT._RST3
#define GTM0MCS0RESET_RST4 GTM0MCS0RESET_BASE.BIT._RST4
#define GTM0MCS0RESET_RST5 GTM0MCS0RESET_BASE.BIT._RST5
#define GTM0MCS0RESET_RST6 GTM0MCS0RESET_BASE.BIT._RST6
#define GTM0MCS0RESET_RST7 GTM0MCS0RESET_BASE.BIT._RST7
#define GTM0MCS0RESET_RST8 GTM0MCS0RESET_BASE.BIT._RST8
#define GTM0MCS0CAT GTM0MCS0CAT_BASE.UINT32
#define GTM0MCS0CAT_CAT0 GTM0MCS0CAT_BASE.BIT._CAT0
#define GTM0MCS0CAT_CAT1 GTM0MCS0CAT_BASE.BIT._CAT1
#define GTM0MCS0CAT_CAT2 GTM0MCS0CAT_BASE.BIT._CAT2
#define GTM0MCS0CAT_CAT3 GTM0MCS0CAT_BASE.BIT._CAT3
#define GTM0MCS0CAT_CAT4 GTM0MCS0CAT_BASE.BIT._CAT4
#define GTM0MCS0CAT_CAT5 GTM0MCS0CAT_BASE.BIT._CAT5
#define GTM0MCS0CAT_CAT6 GTM0MCS0CAT_BASE.BIT._CAT6
#define GTM0MCS0CAT_CAT7 GTM0MCS0CAT_BASE.BIT._CAT7
#define GTM0MCS0CAT_CAT8 GTM0MCS0CAT_BASE.BIT._CAT8
#define GTM0MCS0CWT GTM0MCS0CWT_BASE.UINT32
#define GTM0MCS0CWT_CWT0 GTM0MCS0CWT_BASE.BIT._CWT0
#define GTM0MCS0CWT_CWT1 GTM0MCS0CWT_BASE.BIT._CWT1
#define GTM0MCS0CWT_CWT2 GTM0MCS0CWT_BASE.BIT._CWT2
#define GTM0MCS0CWT_CWT3 GTM0MCS0CWT_BASE.BIT._CWT3
#define GTM0MCS0CWT_CWT4 GTM0MCS0CWT_BASE.BIT._CWT4
#define GTM0MCS0CWT_CWT5 GTM0MCS0CWT_BASE.BIT._CWT5
#define GTM0MCS0CWT_CWT6 GTM0MCS0CWT_BASE.BIT._CWT6
#define GTM0MCS0CWT_CWT7 GTM0MCS0CWT_BASE.BIT._CWT7
#define GTM0MCS0CWT_CWT8 GTM0MCS0CWT_BASE.BIT._CWT8
#define GTM0MCS0ERR GTM0MCS0ERR_BASE.UINT32
#define GTM0MCS0ERR_ERR0 GTM0MCS0ERR_BASE.BIT._ERR0
#define GTM0MCS0ERR_ERR1 GTM0MCS0ERR_BASE.BIT._ERR1
#define GTM0MCS0ERR_ERR2 GTM0MCS0ERR_BASE.BIT._ERR2
#define GTM0MCS0ERR_ERR3 GTM0MCS0ERR_BASE.BIT._ERR3
#define GTM0MCS0ERR_ERR4 GTM0MCS0ERR_BASE.BIT._ERR4
#define GTM0MCS0ERR_ERR5 GTM0MCS0ERR_BASE.BIT._ERR5
#define GTM0MCS0ERR_ERR6 GTM0MCS0ERR_BASE.BIT._ERR6
#define GTM0MCS0ERR_ERR7 GTM0MCS0ERR_BASE.BIT._ERR7
#define GTM0MCS0ERR_ERR8 GTM0MCS0ERR_BASE.BIT._ERR8
#define GTM0MCS01R0 GTM0MCS01R0_BASE.UINT32
#define GTM0MCS01R0_DATA GTM0MCS01R0_BASE.BIT._DATA
#define GTM0MCS01R1 GTM0MCS01R1_BASE.UINT32
#define GTM0MCS01R1_DATA GTM0MCS01R1_BASE.BIT._DATA
#define GTM0MCS01R2 GTM0MCS01R2_BASE.UINT32
#define GTM0MCS01R2_DATA GTM0MCS01R2_BASE.BIT._DATA
#define GTM0MCS01R3 GTM0MCS01R3_BASE.UINT32
#define GTM0MCS01R3_DATA GTM0MCS01R3_BASE.BIT._DATA
#define GTM0MCS01R4 GTM0MCS01R4_BASE.UINT32
#define GTM0MCS01R4_DATA GTM0MCS01R4_BASE.BIT._DATA
#define GTM0MCS01R5 GTM0MCS01R5_BASE.UINT32
#define GTM0MCS01R5_DATA GTM0MCS01R5_BASE.BIT._DATA
#define GTM0MCS01R6 GTM0MCS01R6_BASE.UINT32
#define GTM0MCS01R6_DATA GTM0MCS01R6_BASE.BIT._DATA
#define GTM0MCS01R7 GTM0MCS01R7_BASE.UINT32
#define GTM0MCS01R7_DATA GTM0MCS01R7_BASE.BIT._DATA
#define GTM0MCS01CTRL GTM0MCS01CTRL_BASE.UINT32
#define GTM0MCS01CTRL_EN GTM0MCS01CTRL_BASE.BIT._EN
#define GTM0MCS01CTRL_IRQ GTM0MCS01CTRL_BASE.BIT._IRQ
#define GTM0MCS01CTRL_ERR GTM0MCS01CTRL_BASE.BIT._ERR
#define GTM0MCS01CTRL_CY GTM0MCS01CTRL_BASE.BIT._CY
#define GTM0MCS01CTRL_Z GTM0MCS01CTRL_BASE.BIT._Z
#define GTM0MCS01CTRL_V GTM0MCS01CTRL_BASE.BIT._V
#define GTM0MCS01CTRL_N GTM0MCS01CTRL_BASE.BIT._N
#define GTM0MCS01CTRL_CAT GTM0MCS01CTRL_BASE.BIT._CAT
#define GTM0MCS01CTRL_CWT GTM0MCS01CTRL_BASE.BIT._CWT
#define GTM0MCS01CTRL_SAT GTM0MCS01CTRL_BASE.BIT._SAT
#define GTM0MCS01CTRL_SP_CNT GTM0MCS01CTRL_BASE.BIT._SP_CNT
#define GTM0MCS01ACB GTM0MCS01ACB_BASE.UINT32
#define GTM0MCS01ACB_ACB0 GTM0MCS01ACB_BASE.BIT._ACB0
#define GTM0MCS01ACB_ACB1 GTM0MCS01ACB_BASE.BIT._ACB1
#define GTM0MCS01ACB_ACB2 GTM0MCS01ACB_BASE.BIT._ACB2
#define GTM0MCS01ACB_ACB3 GTM0MCS01ACB_BASE.BIT._ACB3
#define GTM0MCS01ACB_ACB4 GTM0MCS01ACB_BASE.BIT._ACB4
#define GTM0MCS01MHB GTM0MCS01MHB_BASE.UINT32
#define GTM0MCS01MHB_DATA GTM0MCS01MHB_BASE.BIT._DATA
#define GTM0MCS01PC GTM0MCS01PC_BASE.UINT32
#define GTM0MCS01PC_PC GTM0MCS01PC_BASE.BIT._PC
#define GTM0MCS01IRQNOTIFY GTM0MCS01IRQNOTIFY_BASE.UINT32
#define GTM0MCS01IRQNOTIFY_MCS_IRQ GTM0MCS01IRQNOTIFY_BASE.BIT._MCS_IRQ
#define GTM0MCS01IRQNOTIFY_STK_ERR_IRQ GTM0MCS01IRQNOTIFY_BASE.BIT._STK_ERR_IRQ
#define GTM0MCS01IRQNOTIFY_ERR_IRQ GTM0MCS01IRQNOTIFY_BASE.BIT._ERR_IRQ
#define GTM0MCS01IRQEN GTM0MCS01IRQEN_BASE.UINT32
#define GTM0MCS01IRQEN_MCS_IRQ_EN GTM0MCS01IRQEN_BASE.BIT._MCS_IRQ_EN
#define GTM0MCS01IRQEN_STK_ERR_IRQ_ GTM0MCS01IRQEN_BASE.BIT._STK_ERR_IRQ_
#define GTM0MCS01IRQEN_ERR_IRQ_EN GTM0MCS01IRQEN_BASE.BIT._ERR_IRQ_EN
#define GTM0MCS01IRQFORCINT GTM0MCS01IRQFORCINT_BASE.UINT32
#define GTM0MCS01IRQFORCINT_TRG_MCS_IRQ GTM0MCS01IRQFORCINT_BASE.BIT._TRG_MCS_IRQ
#define GTM0MCS01IRQFORCINT_TRG_STK_ERRQ GTM0MCS01IRQFORCINT_BASE.BIT._TRG_STK_ERRQ
#define GTM0MCS01IRQFORCINT_TRG_ERR_IRQ GTM0MCS01IRQFORCINT_BASE.BIT._TRG_ERR_IRQ
#define GTM0MCS01IRQMODE GTM0MCS01IRQMODE_BASE.UINT32
#define GTM0MCS01IRQMODE_IRQ_MODE GTM0MCS01IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0MCS01EIRQEN GTM0MCS01EIRQEN_BASE.UINT32
#define GTM0MCS01EIRQEN_MCS_EIRQ_EN GTM0MCS01EIRQEN_BASE.BIT._MCS_EIRQ_EN
#define GTM0MCS01EIRQEN_STK_ERR_EIRQ_EN GTM0MCS01EIRQEN_BASE.BIT._STK_ERR_EIRQ_EN
#define GTM0MCS01EIRQEN_ERR_EIRQ_EN GTM0MCS01EIRQEN_BASE.BIT._ERR_EIRQ_EN
#define GTM0MCS02R0 GTM0MCS02R0_BASE.UINT32
#define GTM0MCS02R0_DATA GTM0MCS02R0_BASE.BIT._DATA
#define GTM0MCS02R1 GTM0MCS02R1_BASE.UINT32
#define GTM0MCS02R1_DATA GTM0MCS02R1_BASE.BIT._DATA
#define GTM0MCS02R2 GTM0MCS02R2_BASE.UINT32
#define GTM0MCS02R2_DATA GTM0MCS02R2_BASE.BIT._DATA
#define GTM0MCS02R3 GTM0MCS02R3_BASE.UINT32
#define GTM0MCS02R3_DATA GTM0MCS02R3_BASE.BIT._DATA
#define GTM0MCS02R4 GTM0MCS02R4_BASE.UINT32
#define GTM0MCS02R4_DATA GTM0MCS02R4_BASE.BIT._DATA
#define GTM0MCS02R5 GTM0MCS02R5_BASE.UINT32
#define GTM0MCS02R5_DATA GTM0MCS02R5_BASE.BIT._DATA
#define GTM0MCS02R6 GTM0MCS02R6_BASE.UINT32
#define GTM0MCS02R6_DATA GTM0MCS02R6_BASE.BIT._DATA
#define GTM0MCS02R7 GTM0MCS02R7_BASE.UINT32
#define GTM0MCS02R7_DATA GTM0MCS02R7_BASE.BIT._DATA
#define GTM0MCS02CTRL GTM0MCS02CTRL_BASE.UINT32
#define GTM0MCS02CTRL_EN GTM0MCS02CTRL_BASE.BIT._EN
#define GTM0MCS02CTRL_IRQ GTM0MCS02CTRL_BASE.BIT._IRQ
#define GTM0MCS02CTRL_ERR GTM0MCS02CTRL_BASE.BIT._ERR
#define GTM0MCS02CTRL_CY GTM0MCS02CTRL_BASE.BIT._CY
#define GTM0MCS02CTRL_Z GTM0MCS02CTRL_BASE.BIT._Z
#define GTM0MCS02CTRL_V GTM0MCS02CTRL_BASE.BIT._V
#define GTM0MCS02CTRL_N GTM0MCS02CTRL_BASE.BIT._N
#define GTM0MCS02CTRL_CAT GTM0MCS02CTRL_BASE.BIT._CAT
#define GTM0MCS02CTRL_CWT GTM0MCS02CTRL_BASE.BIT._CWT
#define GTM0MCS02CTRL_SAT GTM0MCS02CTRL_BASE.BIT._SAT
#define GTM0MCS02CTRL_SP_CNT GTM0MCS02CTRL_BASE.BIT._SP_CNT
#define GTM0MCS02ACB GTM0MCS02ACB_BASE.UINT32
#define GTM0MCS02ACB_ACB0 GTM0MCS02ACB_BASE.BIT._ACB0
#define GTM0MCS02ACB_ACB1 GTM0MCS02ACB_BASE.BIT._ACB1
#define GTM0MCS02ACB_ACB2 GTM0MCS02ACB_BASE.BIT._ACB2
#define GTM0MCS02ACB_ACB3 GTM0MCS02ACB_BASE.BIT._ACB3
#define GTM0MCS02ACB_ACB4 GTM0MCS02ACB_BASE.BIT._ACB4
#define GTM0MCS02MHB GTM0MCS02MHB_BASE.UINT32
#define GTM0MCS02MHB_DATA GTM0MCS02MHB_BASE.BIT._DATA
#define GTM0MCS02PC GTM0MCS02PC_BASE.UINT32
#define GTM0MCS02PC_PC GTM0MCS02PC_BASE.BIT._PC
#define GTM0MCS02IRQNOTIFY GTM0MCS02IRQNOTIFY_BASE.UINT32
#define GTM0MCS02IRQNOTIFY_MCS_IRQ GTM0MCS02IRQNOTIFY_BASE.BIT._MCS_IRQ
#define GTM0MCS02IRQNOTIFY_STK_ERR_IRQ GTM0MCS02IRQNOTIFY_BASE.BIT._STK_ERR_IRQ
#define GTM0MCS02IRQNOTIFY_ERR_IRQ GTM0MCS02IRQNOTIFY_BASE.BIT._ERR_IRQ
#define GTM0MCS02IRQEN GTM0MCS02IRQEN_BASE.UINT32
#define GTM0MCS02IRQEN_MCS_IRQ_EN GTM0MCS02IRQEN_BASE.BIT._MCS_IRQ_EN
#define GTM0MCS02IRQEN_STK_ERR_IRQ_ GTM0MCS02IRQEN_BASE.BIT._STK_ERR_IRQ_
#define GTM0MCS02IRQEN_ERR_IRQ_EN GTM0MCS02IRQEN_BASE.BIT._ERR_IRQ_EN
#define GTM0MCS02IRQFORCINT GTM0MCS02IRQFORCINT_BASE.UINT32
#define GTM0MCS02IRQFORCINT_TRG_MCS_IRQ GTM0MCS02IRQFORCINT_BASE.BIT._TRG_MCS_IRQ
#define GTM0MCS02IRQFORCINT_TRG_STK_ERRQ GTM0MCS02IRQFORCINT_BASE.BIT._TRG_STK_ERRQ
#define GTM0MCS02IRQFORCINT_TRG_ERR_IRQ GTM0MCS02IRQFORCINT_BASE.BIT._TRG_ERR_IRQ
#define GTM0MCS02IRQMODE GTM0MCS02IRQMODE_BASE.UINT32
#define GTM0MCS02IRQMODE_IRQ_MODE GTM0MCS02IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0MCS02EIRQEN GTM0MCS02EIRQEN_BASE.UINT32
#define GTM0MCS02EIRQEN_MCS_EIRQ_EN GTM0MCS02EIRQEN_BASE.BIT._MCS_EIRQ_EN
#define GTM0MCS02EIRQEN_STK_ERR_EIRQ_EN GTM0MCS02EIRQEN_BASE.BIT._STK_ERR_EIRQ_EN
#define GTM0MCS02EIRQEN_ERR_EIRQ_EN GTM0MCS02EIRQEN_BASE.BIT._ERR_EIRQ_EN
#define GTM0MCS03R0 GTM0MCS03R0_BASE.UINT32
#define GTM0MCS03R0_DATA GTM0MCS03R0_BASE.BIT._DATA
#define GTM0MCS03R1 GTM0MCS03R1_BASE.UINT32
#define GTM0MCS03R1_DATA GTM0MCS03R1_BASE.BIT._DATA
#define GTM0MCS03R2 GTM0MCS03R2_BASE.UINT32
#define GTM0MCS03R2_DATA GTM0MCS03R2_BASE.BIT._DATA
#define GTM0MCS03R3 GTM0MCS03R3_BASE.UINT32
#define GTM0MCS03R3_DATA GTM0MCS03R3_BASE.BIT._DATA
#define GTM0MCS03R4 GTM0MCS03R4_BASE.UINT32
#define GTM0MCS03R4_DATA GTM0MCS03R4_BASE.BIT._DATA
#define GTM0MCS03R5 GTM0MCS03R5_BASE.UINT32
#define GTM0MCS03R5_DATA GTM0MCS03R5_BASE.BIT._DATA
#define GTM0MCS03R6 GTM0MCS03R6_BASE.UINT32
#define GTM0MCS03R6_DATA GTM0MCS03R6_BASE.BIT._DATA
#define GTM0MCS03R7 GTM0MCS03R7_BASE.UINT32
#define GTM0MCS03R7_DATA GTM0MCS03R7_BASE.BIT._DATA
#define GTM0MCS03CTRL GTM0MCS03CTRL_BASE.UINT32
#define GTM0MCS03CTRL_EN GTM0MCS03CTRL_BASE.BIT._EN
#define GTM0MCS03CTRL_IRQ GTM0MCS03CTRL_BASE.BIT._IRQ
#define GTM0MCS03CTRL_ERR GTM0MCS03CTRL_BASE.BIT._ERR
#define GTM0MCS03CTRL_CY GTM0MCS03CTRL_BASE.BIT._CY
#define GTM0MCS03CTRL_Z GTM0MCS03CTRL_BASE.BIT._Z
#define GTM0MCS03CTRL_V GTM0MCS03CTRL_BASE.BIT._V
#define GTM0MCS03CTRL_N GTM0MCS03CTRL_BASE.BIT._N
#define GTM0MCS03CTRL_CAT GTM0MCS03CTRL_BASE.BIT._CAT
#define GTM0MCS03CTRL_CWT GTM0MCS03CTRL_BASE.BIT._CWT
#define GTM0MCS03CTRL_SAT GTM0MCS03CTRL_BASE.BIT._SAT
#define GTM0MCS03CTRL_SP_CNT GTM0MCS03CTRL_BASE.BIT._SP_CNT
#define GTM0MCS03ACB GTM0MCS03ACB_BASE.UINT32
#define GTM0MCS03ACB_ACB0 GTM0MCS03ACB_BASE.BIT._ACB0
#define GTM0MCS03ACB_ACB1 GTM0MCS03ACB_BASE.BIT._ACB1
#define GTM0MCS03ACB_ACB2 GTM0MCS03ACB_BASE.BIT._ACB2
#define GTM0MCS03ACB_ACB3 GTM0MCS03ACB_BASE.BIT._ACB3
#define GTM0MCS03ACB_ACB4 GTM0MCS03ACB_BASE.BIT._ACB4
#define GTM0MCS03MHB GTM0MCS03MHB_BASE.UINT32
#define GTM0MCS03MHB_DATA GTM0MCS03MHB_BASE.BIT._DATA
#define GTM0MCS03PC GTM0MCS03PC_BASE.UINT32
#define GTM0MCS03PC_PC GTM0MCS03PC_BASE.BIT._PC
#define GTM0MCS03IRQNOTIFY GTM0MCS03IRQNOTIFY_BASE.UINT32
#define GTM0MCS03IRQNOTIFY_MCS_IRQ GTM0MCS03IRQNOTIFY_BASE.BIT._MCS_IRQ
#define GTM0MCS03IRQNOTIFY_STK_ERR_IRQ GTM0MCS03IRQNOTIFY_BASE.BIT._STK_ERR_IRQ
#define GTM0MCS03IRQNOTIFY_ERR_IRQ GTM0MCS03IRQNOTIFY_BASE.BIT._ERR_IRQ
#define GTM0MCS03IRQEN GTM0MCS03IRQEN_BASE.UINT32
#define GTM0MCS03IRQEN_MCS_IRQ_EN GTM0MCS03IRQEN_BASE.BIT._MCS_IRQ_EN
#define GTM0MCS03IRQEN_STK_ERR_IRQ_ GTM0MCS03IRQEN_BASE.BIT._STK_ERR_IRQ_
#define GTM0MCS03IRQEN_ERR_IRQ_EN GTM0MCS03IRQEN_BASE.BIT._ERR_IRQ_EN
#define GTM0MCS03IRQFORCINT GTM0MCS03IRQFORCINT_BASE.UINT32
#define GTM0MCS03IRQFORCINT_TRG_MCS_IRQ GTM0MCS03IRQFORCINT_BASE.BIT._TRG_MCS_IRQ
#define GTM0MCS03IRQFORCINT_TRG_STK_ERRQ GTM0MCS03IRQFORCINT_BASE.BIT._TRG_STK_ERRQ
#define GTM0MCS03IRQFORCINT_TRG_ERR_IRQ GTM0MCS03IRQFORCINT_BASE.BIT._TRG_ERR_IRQ
#define GTM0MCS03IRQMODE GTM0MCS03IRQMODE_BASE.UINT32
#define GTM0MCS03IRQMODE_IRQ_MODE GTM0MCS03IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0MCS03EIRQEN GTM0MCS03EIRQEN_BASE.UINT32
#define GTM0MCS03EIRQEN_MCS_EIRQ_EN GTM0MCS03EIRQEN_BASE.BIT._MCS_EIRQ_EN
#define GTM0MCS03EIRQEN_STK_ERR_EIRQ_EN GTM0MCS03EIRQEN_BASE.BIT._STK_ERR_EIRQ_EN
#define GTM0MCS03EIRQEN_ERR_EIRQ_EN GTM0MCS03EIRQEN_BASE.BIT._ERR_EIRQ_EN
#define GTM0MCS04R0 GTM0MCS04R0_BASE.UINT32
#define GTM0MCS04R0_DATA GTM0MCS04R0_BASE.BIT._DATA
#define GTM0MCS04R1 GTM0MCS04R1_BASE.UINT32
#define GTM0MCS04R1_DATA GTM0MCS04R1_BASE.BIT._DATA
#define GTM0MCS04R2 GTM0MCS04R2_BASE.UINT32
#define GTM0MCS04R2_DATA GTM0MCS04R2_BASE.BIT._DATA
#define GTM0MCS04R3 GTM0MCS04R3_BASE.UINT32
#define GTM0MCS04R3_DATA GTM0MCS04R3_BASE.BIT._DATA
#define GTM0MCS04R4 GTM0MCS04R4_BASE.UINT32
#define GTM0MCS04R4_DATA GTM0MCS04R4_BASE.BIT._DATA
#define GTM0MCS04R5 GTM0MCS04R5_BASE.UINT32
#define GTM0MCS04R5_DATA GTM0MCS04R5_BASE.BIT._DATA
#define GTM0MCS04R6 GTM0MCS04R6_BASE.UINT32
#define GTM0MCS04R6_DATA GTM0MCS04R6_BASE.BIT._DATA
#define GTM0MCS04R7 GTM0MCS04R7_BASE.UINT32
#define GTM0MCS04R7_DATA GTM0MCS04R7_BASE.BIT._DATA
#define GTM0MCS04CTRL GTM0MCS04CTRL_BASE.UINT32
#define GTM0MCS04CTRL_EN GTM0MCS04CTRL_BASE.BIT._EN
#define GTM0MCS04CTRL_IRQ GTM0MCS04CTRL_BASE.BIT._IRQ
#define GTM0MCS04CTRL_ERR GTM0MCS04CTRL_BASE.BIT._ERR
#define GTM0MCS04CTRL_CY GTM0MCS04CTRL_BASE.BIT._CY
#define GTM0MCS04CTRL_Z GTM0MCS04CTRL_BASE.BIT._Z
#define GTM0MCS04CTRL_V GTM0MCS04CTRL_BASE.BIT._V
#define GTM0MCS04CTRL_N GTM0MCS04CTRL_BASE.BIT._N
#define GTM0MCS04CTRL_CAT GTM0MCS04CTRL_BASE.BIT._CAT
#define GTM0MCS04CTRL_CWT GTM0MCS04CTRL_BASE.BIT._CWT
#define GTM0MCS04CTRL_SAT GTM0MCS04CTRL_BASE.BIT._SAT
#define GTM0MCS04CTRL_SP_CNT GTM0MCS04CTRL_BASE.BIT._SP_CNT
#define GTM0MCS04ACB GTM0MCS04ACB_BASE.UINT32
#define GTM0MCS04ACB_ACB0 GTM0MCS04ACB_BASE.BIT._ACB0
#define GTM0MCS04ACB_ACB1 GTM0MCS04ACB_BASE.BIT._ACB1
#define GTM0MCS04ACB_ACB2 GTM0MCS04ACB_BASE.BIT._ACB2
#define GTM0MCS04ACB_ACB3 GTM0MCS04ACB_BASE.BIT._ACB3
#define GTM0MCS04ACB_ACB4 GTM0MCS04ACB_BASE.BIT._ACB4
#define GTM0MCS04MHB GTM0MCS04MHB_BASE.UINT32
#define GTM0MCS04MHB_DATA GTM0MCS04MHB_BASE.BIT._DATA
#define GTM0MCS04PC GTM0MCS04PC_BASE.UINT32
#define GTM0MCS04PC_PC GTM0MCS04PC_BASE.BIT._PC
#define GTM0MCS04IRQNOTIFY GTM0MCS04IRQNOTIFY_BASE.UINT32
#define GTM0MCS04IRQNOTIFY_MCS_IRQ GTM0MCS04IRQNOTIFY_BASE.BIT._MCS_IRQ
#define GTM0MCS04IRQNOTIFY_STK_ERR_IRQ GTM0MCS04IRQNOTIFY_BASE.BIT._STK_ERR_IRQ
#define GTM0MCS04IRQNOTIFY_ERR_IRQ GTM0MCS04IRQNOTIFY_BASE.BIT._ERR_IRQ
#define GTM0MCS04IRQEN GTM0MCS04IRQEN_BASE.UINT32
#define GTM0MCS04IRQEN_MCS_IRQ_EN GTM0MCS04IRQEN_BASE.BIT._MCS_IRQ_EN
#define GTM0MCS04IRQEN_STK_ERR_IRQ_ GTM0MCS04IRQEN_BASE.BIT._STK_ERR_IRQ_
#define GTM0MCS04IRQEN_ERR_IRQ_EN GTM0MCS04IRQEN_BASE.BIT._ERR_IRQ_EN
#define GTM0MCS04IRQFORCINT GTM0MCS04IRQFORCINT_BASE.UINT32
#define GTM0MCS04IRQFORCINT_TRG_MCS_IRQ GTM0MCS04IRQFORCINT_BASE.BIT._TRG_MCS_IRQ
#define GTM0MCS04IRQFORCINT_TRG_STK_ERRQ GTM0MCS04IRQFORCINT_BASE.BIT._TRG_STK_ERRQ
#define GTM0MCS04IRQFORCINT_TRG_ERR_IRQ GTM0MCS04IRQFORCINT_BASE.BIT._TRG_ERR_IRQ
#define GTM0MCS04IRQMODE GTM0MCS04IRQMODE_BASE.UINT32
#define GTM0MCS04IRQMODE_IRQ_MODE GTM0MCS04IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0MCS04EIRQEN GTM0MCS04EIRQEN_BASE.UINT32
#define GTM0MCS04EIRQEN_MCS_EIRQ_EN GTM0MCS04EIRQEN_BASE.BIT._MCS_EIRQ_EN
#define GTM0MCS04EIRQEN_STK_ERR_EIRQ_EN GTM0MCS04EIRQEN_BASE.BIT._STK_ERR_EIRQ_EN
#define GTM0MCS04EIRQEN_ERR_EIRQ_EN GTM0MCS04EIRQEN_BASE.BIT._ERR_EIRQ_EN
#define GTM0MCS05R0 GTM0MCS05R0_BASE.UINT32
#define GTM0MCS05R0_DATA GTM0MCS05R0_BASE.BIT._DATA
#define GTM0MCS05R1 GTM0MCS05R1_BASE.UINT32
#define GTM0MCS05R1_DATA GTM0MCS05R1_BASE.BIT._DATA
#define GTM0MCS05R2 GTM0MCS05R2_BASE.UINT32
#define GTM0MCS05R2_DATA GTM0MCS05R2_BASE.BIT._DATA
#define GTM0MCS05R3 GTM0MCS05R3_BASE.UINT32
#define GTM0MCS05R3_DATA GTM0MCS05R3_BASE.BIT._DATA
#define GTM0MCS05R4 GTM0MCS05R4_BASE.UINT32
#define GTM0MCS05R4_DATA GTM0MCS05R4_BASE.BIT._DATA
#define GTM0MCS05R5 GTM0MCS05R5_BASE.UINT32
#define GTM0MCS05R5_DATA GTM0MCS05R5_BASE.BIT._DATA
#define GTM0MCS05R6 GTM0MCS05R6_BASE.UINT32
#define GTM0MCS05R6_DATA GTM0MCS05R6_BASE.BIT._DATA
#define GTM0MCS05R7 GTM0MCS05R7_BASE.UINT32
#define GTM0MCS05R7_DATA GTM0MCS05R7_BASE.BIT._DATA
#define GTM0MCS05CTRL GTM0MCS05CTRL_BASE.UINT32
#define GTM0MCS05CTRL_EN GTM0MCS05CTRL_BASE.BIT._EN
#define GTM0MCS05CTRL_IRQ GTM0MCS05CTRL_BASE.BIT._IRQ
#define GTM0MCS05CTRL_ERR GTM0MCS05CTRL_BASE.BIT._ERR
#define GTM0MCS05CTRL_CY GTM0MCS05CTRL_BASE.BIT._CY
#define GTM0MCS05CTRL_Z GTM0MCS05CTRL_BASE.BIT._Z
#define GTM0MCS05CTRL_V GTM0MCS05CTRL_BASE.BIT._V
#define GTM0MCS05CTRL_N GTM0MCS05CTRL_BASE.BIT._N
#define GTM0MCS05CTRL_CAT GTM0MCS05CTRL_BASE.BIT._CAT
#define GTM0MCS05CTRL_CWT GTM0MCS05CTRL_BASE.BIT._CWT
#define GTM0MCS05CTRL_SAT GTM0MCS05CTRL_BASE.BIT._SAT
#define GTM0MCS05CTRL_SP_CNT GTM0MCS05CTRL_BASE.BIT._SP_CNT
#define GTM0MCS05ACB GTM0MCS05ACB_BASE.UINT32
#define GTM0MCS05ACB_ACB0 GTM0MCS05ACB_BASE.BIT._ACB0
#define GTM0MCS05ACB_ACB1 GTM0MCS05ACB_BASE.BIT._ACB1
#define GTM0MCS05ACB_ACB2 GTM0MCS05ACB_BASE.BIT._ACB2
#define GTM0MCS05ACB_ACB3 GTM0MCS05ACB_BASE.BIT._ACB3
#define GTM0MCS05ACB_ACB4 GTM0MCS05ACB_BASE.BIT._ACB4
#define GTM0MCS05MHB GTM0MCS05MHB_BASE.UINT32
#define GTM0MCS05MHB_DATA GTM0MCS05MHB_BASE.BIT._DATA
#define GTM0MCS05PC GTM0MCS05PC_BASE.UINT32
#define GTM0MCS05PC_PC GTM0MCS05PC_BASE.BIT._PC
#define GTM0MCS05IRQNOTIFY GTM0MCS05IRQNOTIFY_BASE.UINT32
#define GTM0MCS05IRQNOTIFY_MCS_IRQ GTM0MCS05IRQNOTIFY_BASE.BIT._MCS_IRQ
#define GTM0MCS05IRQNOTIFY_STK_ERR_IRQ GTM0MCS05IRQNOTIFY_BASE.BIT._STK_ERR_IRQ
#define GTM0MCS05IRQNOTIFY_ERR_IRQ GTM0MCS05IRQNOTIFY_BASE.BIT._ERR_IRQ
#define GTM0MCS05IRQEN GTM0MCS05IRQEN_BASE.UINT32
#define GTM0MCS05IRQEN_MCS_IRQ_EN GTM0MCS05IRQEN_BASE.BIT._MCS_IRQ_EN
#define GTM0MCS05IRQEN_STK_ERR_IRQ_ GTM0MCS05IRQEN_BASE.BIT._STK_ERR_IRQ_
#define GTM0MCS05IRQEN_ERR_IRQ_EN GTM0MCS05IRQEN_BASE.BIT._ERR_IRQ_EN
#define GTM0MCS05IRQFORCINT GTM0MCS05IRQFORCINT_BASE.UINT32
#define GTM0MCS05IRQFORCINT_TRG_MCS_IRQ GTM0MCS05IRQFORCINT_BASE.BIT._TRG_MCS_IRQ
#define GTM0MCS05IRQFORCINT_TRG_STK_ERRQ GTM0MCS05IRQFORCINT_BASE.BIT._TRG_STK_ERRQ
#define GTM0MCS05IRQFORCINT_TRG_ERR_IRQ GTM0MCS05IRQFORCINT_BASE.BIT._TRG_ERR_IRQ
#define GTM0MCS05IRQMODE GTM0MCS05IRQMODE_BASE.UINT32
#define GTM0MCS05IRQMODE_IRQ_MODE GTM0MCS05IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0MCS05EIRQEN GTM0MCS05EIRQEN_BASE.UINT32
#define GTM0MCS05EIRQEN_MCS_EIRQ_EN GTM0MCS05EIRQEN_BASE.BIT._MCS_EIRQ_EN
#define GTM0MCS05EIRQEN_STK_ERR_EIRQ_EN GTM0MCS05EIRQEN_BASE.BIT._STK_ERR_EIRQ_EN
#define GTM0MCS05EIRQEN_ERR_EIRQ_EN GTM0MCS05EIRQEN_BASE.BIT._ERR_EIRQ_EN
#define GTM0MCS06R0 GTM0MCS06R0_BASE.UINT32
#define GTM0MCS06R0_DATA GTM0MCS06R0_BASE.BIT._DATA
#define GTM0MCS06R1 GTM0MCS06R1_BASE.UINT32
#define GTM0MCS06R1_DATA GTM0MCS06R1_BASE.BIT._DATA
#define GTM0MCS06R2 GTM0MCS06R2_BASE.UINT32
#define GTM0MCS06R2_DATA GTM0MCS06R2_BASE.BIT._DATA
#define GTM0MCS06R3 GTM0MCS06R3_BASE.UINT32
#define GTM0MCS06R3_DATA GTM0MCS06R3_BASE.BIT._DATA
#define GTM0MCS06R4 GTM0MCS06R4_BASE.UINT32
#define GTM0MCS06R4_DATA GTM0MCS06R4_BASE.BIT._DATA
#define GTM0MCS06R5 GTM0MCS06R5_BASE.UINT32
#define GTM0MCS06R5_DATA GTM0MCS06R5_BASE.BIT._DATA
#define GTM0MCS06R6 GTM0MCS06R6_BASE.UINT32
#define GTM0MCS06R6_DATA GTM0MCS06R6_BASE.BIT._DATA
#define GTM0MCS06R7 GTM0MCS06R7_BASE.UINT32
#define GTM0MCS06R7_DATA GTM0MCS06R7_BASE.BIT._DATA
#define GTM0MCS06CTRL GTM0MCS06CTRL_BASE.UINT32
#define GTM0MCS06CTRL_EN GTM0MCS06CTRL_BASE.BIT._EN
#define GTM0MCS06CTRL_IRQ GTM0MCS06CTRL_BASE.BIT._IRQ
#define GTM0MCS06CTRL_ERR GTM0MCS06CTRL_BASE.BIT._ERR
#define GTM0MCS06CTRL_CY GTM0MCS06CTRL_BASE.BIT._CY
#define GTM0MCS06CTRL_Z GTM0MCS06CTRL_BASE.BIT._Z
#define GTM0MCS06CTRL_V GTM0MCS06CTRL_BASE.BIT._V
#define GTM0MCS06CTRL_N GTM0MCS06CTRL_BASE.BIT._N
#define GTM0MCS06CTRL_CAT GTM0MCS06CTRL_BASE.BIT._CAT
#define GTM0MCS06CTRL_CWT GTM0MCS06CTRL_BASE.BIT._CWT
#define GTM0MCS06CTRL_SAT GTM0MCS06CTRL_BASE.BIT._SAT
#define GTM0MCS06CTRL_SP_CNT GTM0MCS06CTRL_BASE.BIT._SP_CNT
#define GTM0MCS06ACB GTM0MCS06ACB_BASE.UINT32
#define GTM0MCS06ACB_ACB0 GTM0MCS06ACB_BASE.BIT._ACB0
#define GTM0MCS06ACB_ACB1 GTM0MCS06ACB_BASE.BIT._ACB1
#define GTM0MCS06ACB_ACB2 GTM0MCS06ACB_BASE.BIT._ACB2
#define GTM0MCS06ACB_ACB3 GTM0MCS06ACB_BASE.BIT._ACB3
#define GTM0MCS06ACB_ACB4 GTM0MCS06ACB_BASE.BIT._ACB4
#define GTM0MCS06MHB GTM0MCS06MHB_BASE.UINT32
#define GTM0MCS06MHB_DATA GTM0MCS06MHB_BASE.BIT._DATA
#define GTM0MCS06PC GTM0MCS06PC_BASE.UINT32
#define GTM0MCS06PC_PC GTM0MCS06PC_BASE.BIT._PC
#define GTM0MCS06IRQNOTIFY GTM0MCS06IRQNOTIFY_BASE.UINT32
#define GTM0MCS06IRQNOTIFY_MCS_IRQ GTM0MCS06IRQNOTIFY_BASE.BIT._MCS_IRQ
#define GTM0MCS06IRQNOTIFY_STK_ERR_IRQ GTM0MCS06IRQNOTIFY_BASE.BIT._STK_ERR_IRQ
#define GTM0MCS06IRQNOTIFY_ERR_IRQ GTM0MCS06IRQNOTIFY_BASE.BIT._ERR_IRQ
#define GTM0MCS06IRQEN GTM0MCS06IRQEN_BASE.UINT32
#define GTM0MCS06IRQEN_MCS_IRQ_EN GTM0MCS06IRQEN_BASE.BIT._MCS_IRQ_EN
#define GTM0MCS06IRQEN_STK_ERR_IRQ_ GTM0MCS06IRQEN_BASE.BIT._STK_ERR_IRQ_
#define GTM0MCS06IRQEN_ERR_IRQ_EN GTM0MCS06IRQEN_BASE.BIT._ERR_IRQ_EN
#define GTM0MCS06IRQFORCINT GTM0MCS06IRQFORCINT_BASE.UINT32
#define GTM0MCS06IRQFORCINT_TRG_MCS_IRQ GTM0MCS06IRQFORCINT_BASE.BIT._TRG_MCS_IRQ
#define GTM0MCS06IRQFORCINT_TRG_STK_ERRQ GTM0MCS06IRQFORCINT_BASE.BIT._TRG_STK_ERRQ
#define GTM0MCS06IRQFORCINT_TRG_ERR_IRQ GTM0MCS06IRQFORCINT_BASE.BIT._TRG_ERR_IRQ
#define GTM0MCS06IRQMODE GTM0MCS06IRQMODE_BASE.UINT32
#define GTM0MCS06IRQMODE_IRQ_MODE GTM0MCS06IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0MCS06EIRQEN GTM0MCS06EIRQEN_BASE.UINT32
#define GTM0MCS06EIRQEN_MCS_EIRQ_EN GTM0MCS06EIRQEN_BASE.BIT._MCS_EIRQ_EN
#define GTM0MCS06EIRQEN_STK_ERR_EIRQ_EN GTM0MCS06EIRQEN_BASE.BIT._STK_ERR_EIRQ_EN
#define GTM0MCS06EIRQEN_ERR_EIRQ_EN GTM0MCS06EIRQEN_BASE.BIT._ERR_EIRQ_EN
#define GTM0MCS07R0 GTM0MCS07R0_BASE.UINT32
#define GTM0MCS07R0_DATA GTM0MCS07R0_BASE.BIT._DATA
#define GTM0MCS07R1 GTM0MCS07R1_BASE.UINT32
#define GTM0MCS07R1_DATA GTM0MCS07R1_BASE.BIT._DATA
#define GTM0MCS07R2 GTM0MCS07R2_BASE.UINT32
#define GTM0MCS07R2_DATA GTM0MCS07R2_BASE.BIT._DATA
#define GTM0MCS07R3 GTM0MCS07R3_BASE.UINT32
#define GTM0MCS07R3_DATA GTM0MCS07R3_BASE.BIT._DATA
#define GTM0MCS07R4 GTM0MCS07R4_BASE.UINT32
#define GTM0MCS07R4_DATA GTM0MCS07R4_BASE.BIT._DATA
#define GTM0MCS07R5 GTM0MCS07R5_BASE.UINT32
#define GTM0MCS07R5_DATA GTM0MCS07R5_BASE.BIT._DATA
#define GTM0MCS07R6 GTM0MCS07R6_BASE.UINT32
#define GTM0MCS07R6_DATA GTM0MCS07R6_BASE.BIT._DATA
#define GTM0MCS07R7 GTM0MCS07R7_BASE.UINT32
#define GTM0MCS07R7_DATA GTM0MCS07R7_BASE.BIT._DATA
#define GTM0MCS07CTRL GTM0MCS07CTRL_BASE.UINT32
#define GTM0MCS07CTRL_EN GTM0MCS07CTRL_BASE.BIT._EN
#define GTM0MCS07CTRL_IRQ GTM0MCS07CTRL_BASE.BIT._IRQ
#define GTM0MCS07CTRL_ERR GTM0MCS07CTRL_BASE.BIT._ERR
#define GTM0MCS07CTRL_CY GTM0MCS07CTRL_BASE.BIT._CY
#define GTM0MCS07CTRL_Z GTM0MCS07CTRL_BASE.BIT._Z
#define GTM0MCS07CTRL_V GTM0MCS07CTRL_BASE.BIT._V
#define GTM0MCS07CTRL_N GTM0MCS07CTRL_BASE.BIT._N
#define GTM0MCS07CTRL_CAT GTM0MCS07CTRL_BASE.BIT._CAT
#define GTM0MCS07CTRL_CWT GTM0MCS07CTRL_BASE.BIT._CWT
#define GTM0MCS07CTRL_SAT GTM0MCS07CTRL_BASE.BIT._SAT
#define GTM0MCS07CTRL_SP_CNT GTM0MCS07CTRL_BASE.BIT._SP_CNT
#define GTM0MCS07ACB GTM0MCS07ACB_BASE.UINT32
#define GTM0MCS07ACB_ACB0 GTM0MCS07ACB_BASE.BIT._ACB0
#define GTM0MCS07ACB_ACB1 GTM0MCS07ACB_BASE.BIT._ACB1
#define GTM0MCS07ACB_ACB2 GTM0MCS07ACB_BASE.BIT._ACB2
#define GTM0MCS07ACB_ACB3 GTM0MCS07ACB_BASE.BIT._ACB3
#define GTM0MCS07ACB_ACB4 GTM0MCS07ACB_BASE.BIT._ACB4
#define GTM0MCS07MHB GTM0MCS07MHB_BASE.UINT32
#define GTM0MCS07MHB_DATA GTM0MCS07MHB_BASE.BIT._DATA
#define GTM0MCS07PC GTM0MCS07PC_BASE.UINT32
#define GTM0MCS07PC_PC GTM0MCS07PC_BASE.BIT._PC
#define GTM0MCS07IRQNOTIFY GTM0MCS07IRQNOTIFY_BASE.UINT32
#define GTM0MCS07IRQNOTIFY_MCS_IRQ GTM0MCS07IRQNOTIFY_BASE.BIT._MCS_IRQ
#define GTM0MCS07IRQNOTIFY_STK_ERR_IRQ GTM0MCS07IRQNOTIFY_BASE.BIT._STK_ERR_IRQ
#define GTM0MCS07IRQNOTIFY_ERR_IRQ GTM0MCS07IRQNOTIFY_BASE.BIT._ERR_IRQ
#define GTM0MCS07IRQEN GTM0MCS07IRQEN_BASE.UINT32
#define GTM0MCS07IRQEN_MCS_IRQ_EN GTM0MCS07IRQEN_BASE.BIT._MCS_IRQ_EN
#define GTM0MCS07IRQEN_STK_ERR_IRQ_ GTM0MCS07IRQEN_BASE.BIT._STK_ERR_IRQ_
#define GTM0MCS07IRQEN_ERR_IRQ_EN GTM0MCS07IRQEN_BASE.BIT._ERR_IRQ_EN
#define GTM0MCS07IRQFORCINT GTM0MCS07IRQFORCINT_BASE.UINT32
#define GTM0MCS07IRQFORCINT_TRG_MCS_IRQ GTM0MCS07IRQFORCINT_BASE.BIT._TRG_MCS_IRQ
#define GTM0MCS07IRQFORCINT_TRG_STK_ERRQ GTM0MCS07IRQFORCINT_BASE.BIT._TRG_STK_ERRQ
#define GTM0MCS07IRQFORCINT_TRG_ERR_IRQ GTM0MCS07IRQFORCINT_BASE.BIT._TRG_ERR_IRQ
#define GTM0MCS07IRQMODE GTM0MCS07IRQMODE_BASE.UINT32
#define GTM0MCS07IRQMODE_IRQ_MODE GTM0MCS07IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0MCS07EIRQEN GTM0MCS07EIRQEN_BASE.UINT32
#define GTM0MCS07EIRQEN_MCS_EIRQ_EN GTM0MCS07EIRQEN_BASE.BIT._MCS_EIRQ_EN
#define GTM0MCS07EIRQEN_STK_ERR_EIRQ_EN GTM0MCS07EIRQEN_BASE.BIT._STK_ERR_EIRQ_EN
#define GTM0MCS07EIRQEN_ERR_EIRQ_EN GTM0MCS07EIRQEN_BASE.BIT._ERR_EIRQ_EN
#define GTM0MCS08R0 GTM0MCS08R0_BASE.UINT32
#define GTM0MCS08R0_DATA GTM0MCS08R0_BASE.BIT._DATA
#define GTM0MCS08R1 GTM0MCS08R1_BASE.UINT32
#define GTM0MCS08R1_DATA GTM0MCS08R1_BASE.BIT._DATA
#define GTM0MCS08R2 GTM0MCS08R2_BASE.UINT32
#define GTM0MCS08R2_DATA GTM0MCS08R2_BASE.BIT._DATA
#define GTM0MCS08R3 GTM0MCS08R3_BASE.UINT32
#define GTM0MCS08R3_DATA GTM0MCS08R3_BASE.BIT._DATA
#define GTM0MCS08R4 GTM0MCS08R4_BASE.UINT32
#define GTM0MCS08R4_DATA GTM0MCS08R4_BASE.BIT._DATA
#define GTM0MCS08R5 GTM0MCS08R5_BASE.UINT32
#define GTM0MCS08R5_DATA GTM0MCS08R5_BASE.BIT._DATA
#define GTM0MCS08R6 GTM0MCS08R6_BASE.UINT32
#define GTM0MCS08R6_DATA GTM0MCS08R6_BASE.BIT._DATA
#define GTM0MCS08R7 GTM0MCS08R7_BASE.UINT32
#define GTM0MCS08R7_DATA GTM0MCS08R7_BASE.BIT._DATA
#define GTM0MCS08CTRL GTM0MCS08CTRL_BASE.UINT32
#define GTM0MCS08CTRL_EN GTM0MCS08CTRL_BASE.BIT._EN
#define GTM0MCS08CTRL_IRQ GTM0MCS08CTRL_BASE.BIT._IRQ
#define GTM0MCS08CTRL_ERR GTM0MCS08CTRL_BASE.BIT._ERR
#define GTM0MCS08CTRL_CY GTM0MCS08CTRL_BASE.BIT._CY
#define GTM0MCS08CTRL_Z GTM0MCS08CTRL_BASE.BIT._Z
#define GTM0MCS08CTRL_V GTM0MCS08CTRL_BASE.BIT._V
#define GTM0MCS08CTRL_N GTM0MCS08CTRL_BASE.BIT._N
#define GTM0MCS08CTRL_CAT GTM0MCS08CTRL_BASE.BIT._CAT
#define GTM0MCS08CTRL_CWT GTM0MCS08CTRL_BASE.BIT._CWT
#define GTM0MCS08CTRL_SAT GTM0MCS08CTRL_BASE.BIT._SAT
#define GTM0MCS08CTRL_SP_CNT GTM0MCS08CTRL_BASE.BIT._SP_CNT
#define GTM0MCS08ACB GTM0MCS08ACB_BASE.UINT32
#define GTM0MCS08ACB_ACB0 GTM0MCS08ACB_BASE.BIT._ACB0
#define GTM0MCS08ACB_ACB1 GTM0MCS08ACB_BASE.BIT._ACB1
#define GTM0MCS08ACB_ACB2 GTM0MCS08ACB_BASE.BIT._ACB2
#define GTM0MCS08ACB_ACB3 GTM0MCS08ACB_BASE.BIT._ACB3
#define GTM0MCS08ACB_ACB4 GTM0MCS08ACB_BASE.BIT._ACB4
#define GTM0MCS08MHB GTM0MCS08MHB_BASE.UINT32
#define GTM0MCS08MHB_DATA GTM0MCS08MHB_BASE.BIT._DATA
#define GTM0MCS08PC GTM0MCS08PC_BASE.UINT32
#define GTM0MCS08PC_PC GTM0MCS08PC_BASE.BIT._PC
#define GTM0MCS08IRQNOTIFY GTM0MCS08IRQNOTIFY_BASE.UINT32
#define GTM0MCS08IRQNOTIFY_MCS_IRQ GTM0MCS08IRQNOTIFY_BASE.BIT._MCS_IRQ
#define GTM0MCS08IRQNOTIFY_STK_ERR_IRQ GTM0MCS08IRQNOTIFY_BASE.BIT._STK_ERR_IRQ
#define GTM0MCS08IRQNOTIFY_ERR_IRQ GTM0MCS08IRQNOTIFY_BASE.BIT._ERR_IRQ
#define GTM0MCS08IRQEN GTM0MCS08IRQEN_BASE.UINT32
#define GTM0MCS08IRQEN_MCS_IRQ_EN GTM0MCS08IRQEN_BASE.BIT._MCS_IRQ_EN
#define GTM0MCS08IRQEN_STK_ERR_IRQ_ GTM0MCS08IRQEN_BASE.BIT._STK_ERR_IRQ_
#define GTM0MCS08IRQEN_ERR_IRQ_EN GTM0MCS08IRQEN_BASE.BIT._ERR_IRQ_EN
#define GTM0MCS08IRQFORCINT GTM0MCS08IRQFORCINT_BASE.UINT32
#define GTM0MCS08IRQFORCINT_TRG_MCS_IRQ GTM0MCS08IRQFORCINT_BASE.BIT._TRG_MCS_IRQ
#define GTM0MCS08IRQFORCINT_TRG_STK_ERRQ GTM0MCS08IRQFORCINT_BASE.BIT._TRG_STK_ERRQ
#define GTM0MCS08IRQFORCINT_TRG_ERR_IRQ GTM0MCS08IRQFORCINT_BASE.BIT._TRG_ERR_IRQ
#define GTM0MCS08IRQMODE GTM0MCS08IRQMODE_BASE.UINT32
#define GTM0MCS08IRQMODE_IRQ_MODE GTM0MCS08IRQMODE_BASE.BIT._IRQ_MODE
#define GTM0MCS08EIRQEN GTM0MCS08EIRQEN_BASE.UINT32
#define GTM0MCS08EIRQEN_MCS_EIRQ_EN GTM0MCS08EIRQEN_BASE.BIT._MCS_EIRQ_EN
#define GTM0MCS08EIRQEN_STK_ERR_EIRQ_EN GTM0MCS08EIRQEN_BASE.BIT._STK_ERR_EIRQ_EN
#define GTM0MCS08EIRQEN_ERR_EIRQ_EN GTM0MCS08EIRQEN_BASE.BIT._ERR_EIRQ_EN

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif