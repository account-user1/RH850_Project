/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_FordMsg3CCBusHiSpd.h
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM533A_FordMsg3CCBusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg3CCBusHiSpd
 *  Generated at:  Thu Apr 26 15:57:21 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg3CCBusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG3CCBUSHISPD_H
# define _RTE_FORDMSG3CCBUSHISPD_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_FordMsg3CCBusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg3CCBusHiSpd
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg3CCBusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg3CCBusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg3CCBusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_FordVehLaneAssiAvl_Val (0U)
# define Rte_InitValue_FordVehLaneAssiHandsOff_Val (1U)
# define Rte_InitValue_FordVehLaneAssiRejctn_Val (0U)
# define Rte_InitValue_FordVehLoSpdMtnCtrlBrkDecelEna_Val (0U)
# define Rte_InitValue_FordVehLoSpdMtnCtrlBrkTqReq_Val (0.0F)
# define Rte_InitValue_FordVehTrfcJamAvdHandsOnConf_Val (0U)
# define Rte_InitValue_FordVehTrlrAgTarCalcn_Val (0U)
# define Rte_InitValue_Ford_LaActAvail_D_Actl_Ford_LaActAvail_D_Actl (0U)
# define Rte_InitValue_Ford_LaActDeny_B_Actl_Ford_LaActDeny_B_Actl (FALSE)
# define Rte_InitValue_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl (TRUE)
# define Rte_InitValue_Ford_LsmcBrkDecelEnbl_D_Rq_Ford_LsmcBrkDecelEnbl_D_Rq (0U)
# define Rte_InitValue_Ford_LsmcBrk_Tq_Rq_Ford_LsmcBrk_Tq_Rq (0U)
# define Rte_InitValue_Ford_TjaHandsOnCnfdnc_B_Est_Ford_TjaHandsOnCnfdnc_B_Est (FALSE)
# define Rte_InitValue_Ford_TrlrAn_An_TrgtCalc_Ford_TrlrAn_An_TrgtCalc (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CCBusHiSpd_FordVehLaneAssiAvl_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CCBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CCBusHiSpd_FordVehLaneAssiHandsOff_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CCBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CCBusHiSpd_FordVehLaneAssiRejctn_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CCBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CCBusHiSpd_FordVehLoSpdMtnCtrlBrkDecelEna_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CCBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CCBusHiSpd_FordVehLoSpdMtnCtrlBrkTqReq_Val(P2VAR(float32, AUTOMATIC, RTE_FORDMSG3CCBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CCBusHiSpd_FordVehTrfcJamAvdHandsOnConf_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CCBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CCBusHiSpd_FordVehTrlrAgTarCalcn_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CCBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LaActAvail_D_Actl_Ford_LaActAvail_D_Actl(Ford_LaActAvail_D_Actl data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LaActDeny_B_Actl_Ford_LaActDeny_B_Actl(Ford_LaActDeny_B_Actl data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl(Ford_LaHandsOff_B_Actl data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LsmcBrkDecelEnbl_D_Rq_Ford_LsmcBrkDecelEnbl_D_Rq(Ford_LsmcBrkDecelEnbl_D_Rq data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LsmcBrk_Tq_Rq_Ford_LsmcBrk_Tq_Rq(Ford_LsmcBrk_Tq_Rq data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_TjaHandsOnCnfdnc_B_Est_Ford_TjaHandsOnCnfdnc_B_Est(Ford_TjaHandsOnCnfdnc_B_Est data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_TrlrAn_An_TrgtCalc_Ford_TrlrAn_An_TrgtCalc(Ford_TrlrAn_An_TrgtCalc data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_FordVehLaneAssiAvl_Val Rte_Read_FordMsg3CCBusHiSpd_FordVehLaneAssiAvl_Val
# define Rte_Read_FordVehLaneAssiHandsOff_Val Rte_Read_FordMsg3CCBusHiSpd_FordVehLaneAssiHandsOff_Val
# define Rte_Read_FordVehLaneAssiRejctn_Val Rte_Read_FordMsg3CCBusHiSpd_FordVehLaneAssiRejctn_Val
# define Rte_Read_FordVehLoSpdMtnCtrlBrkDecelEna_Val Rte_Read_FordMsg3CCBusHiSpd_FordVehLoSpdMtnCtrlBrkDecelEna_Val
# define Rte_Read_FordVehLoSpdMtnCtrlBrkTqReq_Val Rte_Read_FordMsg3CCBusHiSpd_FordVehLoSpdMtnCtrlBrkTqReq_Val
# define Rte_Read_FordVehTrfcJamAvdHandsOnConf_Val Rte_Read_FordMsg3CCBusHiSpd_FordVehTrfcJamAvdHandsOnConf_Val
# define Rte_Read_FordVehTrlrAgTarCalcn_Val Rte_Read_FordMsg3CCBusHiSpd_FordVehTrlrAgTarCalcn_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_Ford_LaActAvail_D_Actl_Ford_LaActAvail_D_Actl Rte_Write_FordMsg3CCBusHiSpd_Ford_LaActAvail_D_Actl_Ford_LaActAvail_D_Actl
# define Rte_Write_Ford_LaActDeny_B_Actl_Ford_LaActDeny_B_Actl Rte_Write_FordMsg3CCBusHiSpd_Ford_LaActDeny_B_Actl_Ford_LaActDeny_B_Actl
# define Rte_Write_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl Rte_Write_FordMsg3CCBusHiSpd_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl
# define Rte_Write_Ford_LsmcBrkDecelEnbl_D_Rq_Ford_LsmcBrkDecelEnbl_D_Rq Rte_Write_FordMsg3CCBusHiSpd_Ford_LsmcBrkDecelEnbl_D_Rq_Ford_LsmcBrkDecelEnbl_D_Rq
# define Rte_Write_Ford_LsmcBrk_Tq_Rq_Ford_LsmcBrk_Tq_Rq Rte_Write_FordMsg3CCBusHiSpd_Ford_LsmcBrk_Tq_Rq_Ford_LsmcBrk_Tq_Rq
# define Rte_Write_Ford_TjaHandsOnCnfdnc_B_Est_Ford_TjaHandsOnCnfdnc_B_Est Rte_Write_FordMsg3CCBusHiSpd_Ford_TjaHandsOnCnfdnc_B_Est_Ford_TjaHandsOnCnfdnc_B_Est
# define Rte_Write_Ford_TrlrAn_An_TrgtCalc_Ford_TrlrAn_An_TrgtCalc Rte_Write_FordMsg3CCBusHiSpd_Ford_TrlrAn_An_TrgtCalc_Ford_TrlrAn_An_TrgtCalc




# define FordMsg3CCBusHiSpd_START_SEC_CODE
# include "FordMsg3CCBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3CCBusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl(Ford_LaHandsOff_B_Actl data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg3CCBusHiSpdInit1 FordMsg3CCBusHiSpdInit1
FUNC(void, FordMsg3CCBusHiSpd_CODE) FordMsg3CCBusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3CCBusHiSpdPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_FordVehLaneAssiAvl_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLaneAssiHandsOff_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLaneAssiRejctn_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLoSpdMtnCtrlBrkDecelEna_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLoSpdMtnCtrlBrkTqReq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehTrfcJamAvdHandsOnConf_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAgTarCalcn_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Ford_LaActAvail_D_Actl_Ford_LaActAvail_D_Actl(Ford_LaActAvail_D_Actl data)
 *   Std_ReturnType Rte_Write_Ford_LaActDeny_B_Actl_Ford_LaActDeny_B_Actl(Ford_LaActDeny_B_Actl data)
 *   Std_ReturnType Rte_Write_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl(Ford_LaHandsOff_B_Actl data)
 *   Std_ReturnType Rte_Write_Ford_LsmcBrkDecelEnbl_D_Rq_Ford_LsmcBrkDecelEnbl_D_Rq(Ford_LsmcBrkDecelEnbl_D_Rq data)
 *   Std_ReturnType Rte_Write_Ford_LsmcBrk_Tq_Rq_Ford_LsmcBrk_Tq_Rq(Ford_LsmcBrk_Tq_Rq data)
 *   Std_ReturnType Rte_Write_Ford_TjaHandsOnCnfdnc_B_Est_Ford_TjaHandsOnCnfdnc_B_Est(Ford_TjaHandsOnCnfdnc_B_Est data)
 *   Std_ReturnType Rte_Write_Ford_TrlrAn_An_TrgtCalc_Ford_TrlrAn_An_TrgtCalc(Ford_TrlrAn_An_TrgtCalc data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg3CCBusHiSpdPer1 FordMsg3CCBusHiSpdPer1
FUNC(void, FordMsg3CCBusHiSpd_CODE) FordMsg3CCBusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg3CCBusHiSpd_STOP_SEC_CODE
# include "FordMsg3CCBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG3CCBUSHISPD_H */
