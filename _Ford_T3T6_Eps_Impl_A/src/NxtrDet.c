#include "NxtrDet.h"
#include "NxtrMcuSuprtLib.h"
#include "CDD_ExcpnHndlg.h"
#include "DiagcMgr.h"

#if (defined( DET_ENABLED ) && defined( DET_ENTRY_CALLOUT_ENABLED ))
	
#define P1MCDIAGC_DETRST 0xFFFF0001

typedef struct
{
	uint32 WhiteList;
	uint8 Mask;
} DetWhiteList_t;

CONST(uint32, DET_APPL_CODE) DetMask[3] =
{
	0xFFFFFFFF, 	/* Disable a DET with specific Module ID, Api ID and Error ID */
	0xFFFFFF00, 	/* Disable all DET with specific Module ID, Api ID */
	0xFFFF0000,		/* Disable all DET with specific Module ID */
};


/* change to PIM? */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT"
# pragma ghs section data = ".OS_GLOBALSHARED_VAR"
# pragma ghs section sbss = ".OS_GLOBALSHARED_VAR_FAST_NOINIT"
# pragma ghs section sdata = ".OS_GLOBALSHARED_VAR_FAST"
STATIC volatile VAR(uint32, AUTOMATIC) DetData0_Cnt_G_u32;
STATIC volatile VAR(uint32, AUTOMATIC) DetData1_Cnt_G_u32;
STATIC volatile VAR(uint32, AUTOMATIC) DetData2_Cnt_G_u32;
# pragma ghs section bss = default
# pragma ghs section data = default
# pragma ghs section sbss = default
# pragma ghs section sdata = default
/* change to PIM? */


/* to be generated */
#define WHITELISTNUM 8
CONST(DetWhiteList_t, DET_APPL_CODE) DetWhiteList[WHITELISTNUM] = 
{
	{0x003C0000, 2},	/* All CanIf DET */
	{0x00500000, 2},	/* All Can DET */
	{0x001F0000, 2},	/* All CanNm DET */
	{0x008C0000, 2},	/* All CanSM DET */
	{0x00230000, 2},	/* All CanTp DET */
	{0x000C0000, 2},	/* All ComM DET */
	{0x00320000, 2},	/* All Com DET */
	{0x00330000, 2},	/* All PduR DET */
};
/* to be generated */


/* change to cal */
#define WHITELISTALLDET TRUE
/* change to cal */



FUNC(boolean, DET_APPL_CODE) Appl_DetEntryCallout( uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId )
{
	VAR(uint8, AUTOMATIC) i;
	VAR(boolean, AUTOMATIC) Reset = TRUE;
	VAR(uint32, AUTOMATIC) DetData;
	
	DetData = (ModuleId << 16) | (ApiId << 8) | ErrorId;
	
	if (TRUE == WHITELISTALLDET)
	{
		Reset = FALSE;
	}
	else
	{
		for (i = 0;i < WHITELISTNUM; i++)
		{
			if ((DetData & DetMask[DetWhiteList[i].Mask]) == DetWhiteList[i].WhiteList)
			{
				Reset = FALSE;
				break;
			}
		}
	}

	
	if (TRUE == Reset)
	{
		NxtrSwRst(P1MCDIAGC_DETRST, DetData);
	}
	else
	{
		if ((DetData != DetData0_Cnt_G_u32) && (DetData != DetData1_Cnt_G_u32) && (DetData != DetData2_Cnt_G_u32))
		{
			DetData2_Cnt_G_u32 = DetData1_Cnt_G_u32;
			DetData1_Cnt_G_u32 = DetData0_Cnt_G_u32;
			DetData0_Cnt_G_u32 = DetData;
		}
		(void)SetNtcStsAndSnpshtData10_Oper( 0x031, 1, 1, 0U,  DetData0_Cnt_G_u32, DetData1_Cnt_G_u32, DetData2_Cnt_G_u32);
	}
	
	return TRUE;	/* Stop Vector DET processing */
}
#endif
