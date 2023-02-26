/* TODO stub file, remove this file and Per3 from RTE when CM410 is integrated */

#include "Rte_CDD_HwTq8Meas.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */

#include "rsent_regs.h"
#include "ElecGlbPrm.h"
#include "NxtrMath.h"
#include "FltInj.h"
#include "CDD_HwTq8Meas_Cfg.h"
#include "CDD_HwTq8Meas.h"
#include <v800_ghs.h>

#define EOTIDTWO_CNT_U08              	2U
#define EOTIDTHREE_CNT_U08            	3U
#define EOTIDFOUR_CNT_U08             	4U
#define  TQDATAMASK_CNT_U32				0x00000FFFUL
#define  SENTSYNCTRIG_CNT_U32			16UL
#define  REGCFGWAITTI_CNT_U32			2UL
#define  RACKLIMRCCWEOTSCA_ULS_F32		(-0.1953F)
#define  RACKLIMRCWEOTSCA_ULS_F32		(0.1953F)
#define  RACKLIMREOTSIGHILIM_HWDEG_F32	(800.0F)  
#define  RACKLIMREOTSIGLOLIM_HWDEG_F32	(-800.0F)  
#define  FRSMASK_CNT_U32				0x00000001UL
#define  CSMASK_CNT_U32					0x000000FEUL 
#define  FCCNMASK_CNT_U32				0x30000000UL
#define  SLOWMSGDATAMASK_CNT_U32		0x80000000UL
#define  EOTCSMASK_ULS_U32				0x00000700UL
#define  EOTMSGIDMASK_CNT_U32			0x00000F00UL
#define  EOTMSGDATAMASK_CNT_U32			0x000000FFUL

#define CDD_HwTq8Meas_START_SEC_CODE
#include "CDD_HwTq8Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, CDD_HwTq8Meas_CODE) HwTq8MeasPer3Stub(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

    VAR(uint32, AUTOMATIC) RefTmr_Cnt_T_u32; 
    VAR(uint32, AUTOMATIC) TiSpan_Cnt_T_u32; 


    RSENT4CSC = 2046U;
    RSENT4SPCT = SENTSYNCTRIG_CNT_U32; 
    __SYNCM();
    if(RSENT4NRS == 1U)
    {
	RSENT4NRC = 1U;
	(void)Rte_Call_GetRefTmr1MicroSec32bit_Oper(&RefTmr_Cnt_T_u32);
	/* Wait for 2 micro secs */
	do
	{   
	    (void)Rte_Call_GetTiSpan1MicroSec32bit_Oper(RefTmr_Cnt_T_u32, &TiSpan_Cnt_T_u32);
	} 
	while (TiSpan_Cnt_T_u32 < REGCFGWAITTI_CNT_U32); 
	RSENT4SPCT = SENTSYNCTRIG_CNT_U32; 
    }

}

#define CDD_HwTq8Meas_STOP_SEC_CODE
#include "CDD_HwTq8Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

