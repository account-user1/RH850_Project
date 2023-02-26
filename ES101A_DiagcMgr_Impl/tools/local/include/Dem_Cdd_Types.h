/*
 Dem_Cdd_Types.h - Stub Header File for DiagcMgr Contract folder
 *
 *  Created on: April 22, 2016
 *      Author: gzkys7
 */

/******************************************* Multiple Include Protection *********************************************/
#ifndef DEM_CDD_TYPES_H
#define DEM_CDD_TYPES_H
/******************************************* Multiple Include Protection *********************************************/

#if !defined (Rte_TypeDef_Dem_EventStatusType)
typedef uint8                                    Dem_EventStatusType;
#endif
#if !defined (DEM_EVENT_STATUS_PASSED)
# define DEM_EVENT_STATUS_PASSED                 (0x00U)
#endif
#if !defined (DEM_EVENT_STATUS_FAILED)
# define DEM_EVENT_STATUS_FAILED                 (0x01U)
#endif
#if !defined (DEM_EVENT_STATUS_PREPASSED)
# define DEM_EVENT_STATUS_PREPASSED              (0x02U)
#endif
#if !defined (DEM_EVENT_STATUS_PREFAILED)
# define DEM_EVENT_STATUS_PREFAILED              (0x03U)
#endif

#if !defined (Rte_TypeDef_Dem_EventIdType)
typedef uint16                                   Dem_EventIdType;
#endif

#if !defined (Rte_TypeDef_Dem_DTCOriginType)
typedef uint8                                    Dem_DTCOriginType;
#endif
#if !defined (DEM_DTC_ORIGIN_PRIMARY_MEMORY)
# define DEM_DTC_ORIGIN_PRIMARY_MEMORY           (0x01U)
#endif
#if !defined (DEM_DTC_ORIGIN_MIRROR_MEMORY)
# define DEM_DTC_ORIGIN_MIRROR_MEMORY            (0x02U)
#endif
#if !defined (DEM_DTC_ORIGIN_PERMANENT_MEMORY)
# define DEM_DTC_ORIGIN_PERMANENT_MEMORY         (0x03U)
#endif
#if !defined (DEM_DTC_ORIGIN_SECONDARY_MEMORY)
# define DEM_DTC_ORIGIN_SECONDARY_MEMORY         (0x04U)
#endif

#if !defined (Rte_TypeDef_Dem_DTCGroupType)
typedef uint32                                   Dem_DTCGroupType;
#endif

#if !defined (Rte_TypeDef_Dem_DTCFormatType)
typedef uint8                                    Dem_DTCFormatType;
#endif
#if !defined (DEM_DTC_FORMAT_OBD)
# define DEM_DTC_FORMAT_OBD                      (0x00U)
#endif
#if !defined (DEM_DTC_FORMAT_UDS)
# define DEM_DTC_FORMAT_UDS                      (0x01U)
#endif
#if !defined (DEM_DTC_FORMAT_J1939)
# define DEM_DTC_FORMAT_J1939                    (0x02U)
#endif

#endif /* DEM_CDD_TYPES_H */


