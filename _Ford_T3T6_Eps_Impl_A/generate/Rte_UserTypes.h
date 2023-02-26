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
 *          File:  Rte_UserTypes.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  User Types header file
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_USERTYPES_H
# define _RTE_USERTYPES_H

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

# include "NxtrFil.h"
# include "CDD_EcmOutpAndDiagc.h"
# include "ComStack_Types.h"
# include "CDD_NvMProxy_Cfg.h"
# include "DiagcMgr_Cfg.h"
# include "TunSelnMngt.h"
# include "ImcArbn_Private_Cfg.h"
# include "CDD_Uart0CfgAndUse.h"
# include "CDD_Uart1CfgAndUse.h"


//////  LWW Update
//#define Call_Spi_AsyncTransmit	Spi_AsyncTransmit
#define Os_MCU_ECM_EIC_CAT2_ISR
#define Os_SPI_CSIH0_TIC_CAT2_ISR
//#define Os_SPI_CSIH0_TIJC_CAT2_ISR
#define Os_SPI_CSIH0_TIRE_CAT2_ISR
#define Os_SPI_CSIH0_TIR_CAT2_ISR
#define Os_SPI_CSIH2_TIC_CAT2_ISR
//#define Os_SPI_CSIH2_TIJC_CAT2_ISR
#define Os_SPI_CSIH2_TIR_CAT2_ISR
#define Os_SPI_CSIH2_TIRE_CAT2_ISR


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


#endif /* _RTE_USERTYPES_H */
