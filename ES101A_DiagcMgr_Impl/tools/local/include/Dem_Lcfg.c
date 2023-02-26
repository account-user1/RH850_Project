/*
 Dem_Lcfg.c - Stub Header File for DiagcMgr Contract folder
 *
 *  Created on: April 04, 2016
 *      Author: gzkys7
 */

/******************************************* Multiple Include Protection *********************************************/
#ifndef DEM_LCFG_C
#define DEM_LCFG_C
/******************************************* Multiple Include Protection *********************************************/

#include "Dem.h"


/**********************************************************************************************************************
  Dem_C_DtcTable
**********************************************************************************************************************/
/** 
  \var    Dem_C_DtcTable
  \details
  Element    Description
  UdsDtc 
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"    /* PRQA S 5087 */      /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_C_DtcTableType, DEM_CONST) Dem_C_DtcTable[3] = {
    /* Index    UdsDtc              Referrable Keys */
  { /*     0 */ 0x00FFFFFFUL },  /* [#NoUdsDtcConfigured, #NoObdDtcConfigured, #NoJ1939DtcConfigured] */
  { /*     1 */ 0x001234ABUL },  /* [TestDTC] */
  { /*     2 */ 0x00123456UL }   /* [TestDTC1] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"    /* PRQA S 5087 */      /* MD_MSR_19.1 */
/*lint -restore */

#endif /* DEM_LCFG_C */
