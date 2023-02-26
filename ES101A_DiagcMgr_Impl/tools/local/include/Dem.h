/*
 Dem.h - Stub Header File for DiagcMgr Contract folder
 *
 *  Created on: April 04, 2016
 *      Author: gzkys7
 */

/******************************************* Multiple Include Protection *********************************************/
#ifndef DEM_H
#define DEM_H
/******************************************* Multiple Include Protection *********************************************/

#include "Dem_Lcfg.h"
#include "Dem_Types.h"
#include "Dem_Cdd_Types.h"

#define DEM_DTC_GROUP_ALL_DTCS                   ((Dem_DTCGroupType)(0x00ffffffU))  /*< predefined DTC group encoding 'All DTCs' */
extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetDTCOfEvent(Dem_EventIdType  EventId, Dem_DTCFormatType  DTCFormat,  P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA)  DTCOfEvent);/* PRQA S 1330 */ /* MD_DEM_16.4_rte */
extern FUNC(Dem_ReturnClearDTCType, DEM_CODE) Dem_ClearDTC(uint32  DTC, Dem_DTCFormatType  DTCFormat, Dem_DTCOriginType  DTCOrigin);
extern FUNC(Std_ReturnType, DEM_CODE) Dem_SetEventStatus(Dem_EventIdType  EventId, Dem_EventStatusType  EventStatus);

#endif /* DEM_H */
