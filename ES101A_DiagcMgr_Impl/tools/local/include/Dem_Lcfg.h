/*
 Dem_Lcfg.h - Stub Header File for DiagcMgr Contract folder
 *
 *  Created on: April 22, 2016
 *      Author: gzkys7
 */

/******************************************* Multiple Include Protection *********************************************/
#ifndef DEM_LCFG_H
#define DEM_LCFG_H
/******************************************* Multiple Include Protection *********************************************/
#include "Dem_Types.h"

#define DEM_C_DTCTABLE                                                STD_ON

 /*  Event IDs [symbolic name value] - sorted by name.
     See Dem_C_EventTable[] for this list sorted by Ids.  */ 
#define DemConf_DemEventParameter_TestEvent1                                3U 
#define DemConf_DemEventParameter_TestEvent2                                4U 
#define DemConf_DemEventParameter_TestEvent3                                5U 

/**   \brief  type used in Dem_C_UdsDtcOfDtcTable */
typedef uint32 Dem_C_UdsDtcOfDtcTableType;

/**   \brief  type used in Dem_C_DtcTable */
typedef struct sDem_C_DtcTableType
{
  Dem_C_UdsDtcOfDtcTableType UdsDtcOfDtcTable;
} Dem_C_DtcTableType;

extern CONST(Dem_C_DtcTableType, DEM_CONST) Dem_C_DtcTable[3];

#endif /* DEM_LCFG_H_ */

