/*
 Dem_Types.h - Stub Header File for DiagcMgr Contract folder
 *
 *  Created on: April 22, 2016
 *      Author: gzkys7
 */

/******************************************* Multiple Include Protection *********************************************/
#ifndef DEM_TYPES_H
#define DEM_TYPES_H
/******************************************* Multiple Include Protection *********************************************/
#include "Std_Types.h"

typedef uint8                                    Dem_ReturnClearDTCType;
#define DEM_CLEAR_OK                             ((Dem_ReturnClearDTCType)(0x00U))
#define DEM_CLEAR_WRONG_DTC                      ((Dem_ReturnClearDTCType)(0x01U))
#define DEM_CLEAR_WRONG_DTCORIGIN                ((Dem_ReturnClearDTCType)(0x02U))
#define DEM_CLEAR_FAILED                         ((Dem_ReturnClearDTCType)(0x03U))
#define DEM_CLEAR_PENDING                        ((Dem_ReturnClearDTCType)(0x04U))
#define DEM_CLEAR_BUSY                           ((Dem_ReturnClearDTCType)(0x05U))
#define DEM_CLEAR_MEMORY_ERROR                   ((Dem_ReturnClearDTCType)(0x06U))

#endif /* DEM_TYPES_H */

