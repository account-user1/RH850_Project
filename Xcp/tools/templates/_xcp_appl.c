/*****************************************************************************
| Project Name:   XCP application callback function template
|    File Name:   _xcp_appl.c
|
|  Description: 
|    Template for the XCP application callback functions.
|    This is just an example and may be modified .
|
|  Contains:
|    - Examples for FLASH programming, EEPROM programming, CalPage switching
|
|-----------------------------------------------------------------------------
|               D E M O
|-----------------------------------------------------------------------------
|
|       Please note, that the demo and example programs 
|       only show special aspects of the software. 
|       With regard to the fact that these programs are meant 
|       for demonstration purposes only,
|       Vector Informatik's liability shall be expressly excluded in cases 
|       of ordinary negligence, to the extent admissible by law or statute.
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2013 by Vector Informatik GmbH.           All rights reserved.
|
|       This software is copyright protected and 
|       proporietary to Vector Informatik GmbH.
|       Vector Informatik GmbH grants to you only
|       those rights as set out in the license conditions.
|       All other rights remain with Vector Informatik GmbH.
| 
|       Diese Software ist urheberrechtlich geschuetzt. 
|       Vector Informatik GmbH raeumt Ihnen an dieser Software nur 
|       die in den Lizenzbedingungen ausdruecklich genannten Rechte ein.
|       Alle anderen Rechte verbleiben bei Vector Informatik GmbH.
|
|-----------------------------------------------------------------------------
|               A U T H O R   I D E N T I T Y
|-----------------------------------------------------------------------------
| Initials     Name                      Company
| --------     ---------------------     -------------------------------------
| Tri          Frank Triem               Vector Informatik GmbH
| Hr           Andreas Herkommer         Vector Informatik GmbH
| Svh          Sven Hesselmann           Vector Informatik GmbH
|-----------------------------------------------------------------------------
|               R E V I S I O N   H I S T O R Y
|-----------------------------------------------------------------------------
|  Date       Version  Author  Description
| ----------  -------  ------  -----------------------------------------------
| 2004-12-30  1.00.00   Tri    ESCAN00010708: Create template _xcp_appl.c
| 2005-02-21  1.01.00   Tri    Rename XcpApplInit to ApplXcpInitTemplate
| 2005-05-19  1.02.00   Tri    Support data paging on Star12X
| 2005-12-14  1.03.00   Tri    ESCAN00013899: Data acquisition not possible during cold start
| 2006-03-17  1.04.00   Tri    Compiler switch for paged memory model added
| 2006-05-30  1.05.00   Tri    Demo disclaimer added
| 2007-01-18  1.06.00   Tri    ESCAN00018808: Support data paging on Star12X / Cosmic
| 2007-07-09  1.06.01   Hr     Support AUTOSAR Memory Mapping
| 2008-04-03  1.07.00   Hr     ESCAN00025754: Missing function stubs
| 2008-07-21  1.08.00   Hr     Added new callbacks
| 2008-09-10  1.09.00   Svh    Added new callback XcpAppl_ReadChecksumValue
| 2010-03-24  1.10.00   Hr     Added new callback XcpAppl_CalibrationWrite/Read
| 2010-12-14  1.11.00   Hr     Added new callback XcpAppl_DaqTlResumeStore/XcpAppl_DaqTlResumeClear/XcpAppl_DaqTlResume
| 2012-02-17  1.11.01   Hr     ESCAN00055815: Write Protection example not detailed enough
| 2013-08-20  1.11.02   Hr     ESCAN00069456: Improve integration of CANoe Emu variant
| 2013-11-28  1.12.00   Hr     ESCAN00072326: Support Generic GET_ID
| 2015-01-27  1.13.00   Hr     Removed Virtual Measurement / Added Runtime Supervision
| 2015-05-12  1.14.00   Hr     Added type safe copy routines
| 2015-11-23  1.15.00   Hr     ESCAN00085930: FEAT-1486.36: Support for VTT in XcpAppl_GetPointer added
| 2016-09-21  1.15.01   Hr     ESCAN00091579: Compiler Warning: C++ Comment style used
|                              Introduced single channel API for several APIs
|***************************************************************************/

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/
#include "Xcp.h"

#if defined (V_COMP_ANSI) && defined (V_PROCESSOR_CANOEEMU)
    #define C_COMP_ANSI_CANOE
#endif

#if defined ( _MICROSOFT_C_VTT_ )
  #include "VttCntrl_Base.h"
#endif

/***************************************************************************/
/* Version check                                                           */
/***************************************************************************/
#if ( CP_XCP_VERSION < 0x0204u )
  #error "XCP Protocol Layer and XCP template are inconsistent!"
#endif

/***************************************************************************/
/* Defines                                                                 */
/***************************************************************************/
/* DAQ runtime supervision threshold value in timer ticks */
#define DAQ_RS_THRESHOLD 1234
/* macro which is used to return the current timer ticks from the hw timer */
#define HW_TIMER_TICKS 0

/*****************************************************************************/
/* Constants                                                                 */
/*****************************************************************************/

/*****************************************************************************/
/* Local data definitions                                                    */
/*****************************************************************************/
#define XCP_START_SEC_VAR_NOINIT_8BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if defined ( XCP_ENABLE_CALIBRATION_PAGE )
STATIC VAR(uint8, XCP_VAR_NOINIT) xcpCalPage[XCP_NUMBER_OF_CHANNELS]; /* 0-Ram,1-Flash */
#endif

#if defined ( XCP_ENABLE_SEED_KEY )
VAR(uint8, XCP_VAR_NOINIT) xcpResource[XCP_NUMBER_OF_CHANNELS];
#endif

#define XCP_STOP_SEC_VAR_NOINIT_8BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define XCP_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(tXcpData, XCP_VAR_NOINIT) xcp;

/* Variable used to store the intermdiate timer value */
#if defined ( XCP_ENABLE_DAQ_RUNTIME_SUPERVISION )
  VAR(uint16, XCP_VAR_NOINIT) runtimeSupervisionStart;
#endif

#define XCP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*****************************************************************************/
/*                                                                           */
/* Implementation                                                            */
/*                                                                           */
/*****************************************************************************/

#define XCP_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if defined ( XCP_ENABLE_SEED_KEY ) || defined ( XCP_ENABLE_CALIBRATION_PAGE )

FUNC(void, XCP_CODE) XcpAppl_InitTemplate( void )
{
  uint8_least i;
  for(i=0; i<XCP_NUMBER_OF_CHANNELS; i++)
  {
    #if defined ( XCP_ENABLE_SEED_KEY )
     /* Part of the example implementation for Seed & Key. */
     xcpResource[i] = 0;
    #endif
    #if defined ( XCP_ENABLE_CALIBRATION_PAGE )
     /* Part of the example implementation for page switching */
     xcpCalPage[i] = 0;                         /* 0-Ram,1-Flash */
    #endif
  }
}

#endif

#if defined ( XCP_ENABLE_TYPESAVE_COPY ) \
|| (defined ( XCP_ENABLE_CALIBRATION_MEM_ACCESS_BY_APPL ) && !defined ( XCP_ENABLE_MEM_ACCESS_BY_APPL ))
/*****************************************************************************
| NAME:             XcpAppl_MeasurementRead
| CALLED BY:        XcpEvent, ReadMta
| PRECONDITIONS:    none
| INPUT PARAMETERS: dst  : pointer to destination address.
|                   src  : pointer to source address.
|                   len  : number of data bytes to copy.
| RETURN VALUES:    XCP_CMD_OK if operation was successful otherwise return error code
| DESCRIPTION:      Copy n bytes from src to dest with the largest possible 
|                   basic data type to ensure data consistency while reading. 
|                   A maximum of 255 Bytes can be copied at once.
|
|                   Optimizations are possible depending on the used platform:
|                   * XCP_PREVENT_SRC_READ_TRAP is necessary in case:
|                     - unaligned memory read access leads to traps or exceptions
|                     - the linker does not align the measured xcp data properly
|                   * XCP_PREVENT_DST_WRITE_TRAP is necessary in case:
|                     - unaligned memory write access to the XCP DAQ buffer leads 
|                       to traps or exceptions
******************************************************************************/
#if !defined ( XCP_PREVENT_SRC_READ_TRAP )
# define XCP_PREVENT_SRC_READ_TRAP STD_ON
#endif
#if !defined ( XCP_PREVENT_DST_WRITE_TRAP )
# define XCP_PREVENT_DST_WRITE_TRAP STD_ON
#endif

FUNC(uint8, XCP_CODE) XcpAppl_MeasurementRead(P2VAR(void, AUTOMATIC, XCP_APPL_DATA) dst, P2CONST(void, AUTOMATIC, XCP_APPL_DATA) src, uint8 len)
{
  uint8_least i;

  if( (len % sizeof(uint32) == 0)
#if ( XCP_PREVENT_SRC_READ_TRAP == STD_ON )
      && ((uint32)src % sizeof(uint32) == 0)
#endif
    ) 
  {
#if ( XCP_PREVENT_DST_WRITE_TRAP == STD_ON )
    P2VAR(uint8, AUTOMATIC, XCP_APPL_DATA) d = (P2VAR(uint8, AUTOMATIC, XCP_APPL_DATA))dst;
#else
    P2VAR(uint32, AUTOMATIC, XCP_APPL_DATA) d = (P2VAR(uint32, AUTOMATIC, XCP_APPL_DATA))dst;
#endif
    P2CONST(uint32, AUTOMATIC, XCP_APPL_DATA) s = (P2CONST(uint32, AUTOMATIC, XCP_APPL_DATA))src;
 
    for (i=0; i<len/sizeof(uint32); i++) 
    {
#if ( XCP_PREVENT_DST_WRITE_TRAP == STD_ON )
      uint32 srcData;
      srcData = s[i];
# if defined ( C_CPUTYPE_BIGENDIAN )
      d[(i<<2)+0] = (uint8)(srcData >> 24);
      d[(i<<2)+1] = (uint8)(srcData >> 16);
      d[(i<<2)+2] = (uint8)(srcData >>  8);
      d[(i<<2)+3] = (uint8)(srcData);
# else /* C_CPUTYPE_BIGENDIAN */
      d[(i<<2)+0] = (uint8)(srcData);
      d[(i<<2)+1] = (uint8)(srcData >>  8);
      d[(i<<2)+2] = (uint8)(srcData >> 16);
      d[(i<<2)+3] = (uint8)(srcData >> 24);
# endif /* C_CPUTYPE_BIGENDIAN */
#else  /* XCP_PREVENT_DST_WRITE_TRAP */
      d[i] = s[i];
#endif /* XCP_PREVENT_DST_WRITE_TRAP */
    }
  }
  else if ( (len % sizeof(uint16) == 0)
#if ( XCP_PREVENT_SRC_READ_TRAP == STD_ON )
            && ((uint32)src % sizeof(uint16) == 0)
#endif
          ) 
  {
#if ( XCP_PREVENT_DST_WRITE_TRAP == STD_ON )
    P2VAR(uint8, AUTOMATIC, XCP_APPL_DATA) d = (P2VAR(uint8, AUTOMATIC, XCP_APPL_DATA))dst;
#else
    P2VAR(uint16, AUTOMATIC, XCP_APPL_DATA) d = (P2VAR(uint16, AUTOMATIC, XCP_APPL_DATA))dst;
#endif
    P2CONST(uint16, AUTOMATIC, XCP_APPL_DATA) s = (P2CONST(uint16, AUTOMATIC, XCP_APPL_DATA))src;
 
    for (i=0; i<len/sizeof(uint16); i++) 
    {
#if ( XCP_PREVENT_DST_WRITE_TRAP == STD_ON )
      uint16 srcData;
      srcData = s[i];
# if defined ( C_CPUTYPE_BIGENDIAN )
      d[(i<<1)+0] = (uint8)(srcData >> 8);
      d[(i<<1)+1] = (uint8)(srcData);
# else  /* C_CPUTYPE_BIGENDIAN */
      d[(i<<1)+0] = (uint8)(srcData);      
      d[(i<<1)+1] = (uint8)(srcData >> 8);
# endif /* C_CPUTYPE_BIGENDIAN */
#else  /* XCP_PREVENT_DST_WRITE_TRAP */
      d[i] = s[i];
#endif /* XCP_PREVENT_DST_WRITE_TRAP */
    }
  }
  else 
  {
    P2VAR(uint8, AUTOMATIC, XCP_APPL_DATA) d = (P2VAR(uint8, AUTOMATIC, XCP_APPL_DATA))dst;
    P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA) s = (P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA))src;
 
    for (i=0; i<len; i++) 
    {
      d[i] = s[i];
    }
  }

  return (uint8)XCP_CMD_OK;
}

/*****************************************************************************
| NAME:             XcpAppl_CalibrationWrite
| CALLED BY:        XcpEvent, WriteMta
| PRECONDITIONS:    none
| INPUT PARAMETERS: dst  : pointer to destination address.
|                   src  : pointer to source address.
|                   len  : number of data bytes to copy.
| RETURN VALUES:    XCP_CMD_OK if operation was successful otherwise return error code
| DESCRIPTION:      Copy n bytes from src to dest with the largest possible 
|                   basic data type to ensure data consistency while writing. 
|                   A maximum of 255 Bytes can be copied at once.
|
|                   Optimizations are possible depending on the used platform:
|                   * XCP_PREVENT_SRC_READ_TRAP is necessary in case:
|                     - unaligned memory read access leads to traps or exceptions
|                     - the linker does not align the measured xcp data properly
|                   * XCP_PREVENT_DST_WRITE_TRAP is necessary in case:
|                     - unaligned memory write access to the XCP DAQ buffer leads 
|                       to traps or exceptions
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_CalibrationWrite(P2VAR(void, AUTOMATIC, XCP_APPL_DATA) dst, P2CONST(void, AUTOMATIC, XCP_APPL_DATA) src, uint8 len)
{
  uint8_least i;
 
  if( (len % sizeof(uint32) == 0)
#if ( XCP_PREVENT_DST_WRITE_TRAP == STD_ON )
      && ((uint32)dst % sizeof(uint32) == 0)
#endif
    ) 
  {
#if ( XCP_PREVENT_SRC_READ_TRAP == STD_ON )
    P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA) s = (P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA))src;
#else
    P2CONST(uint32, AUTOMATIC, XCP_APPL_DATA) s = (P2CONST(uint32, AUTOMATIC, XCP_APPL_DATA))src;
#endif
    P2VAR(uint32, AUTOMATIC, XCP_APPL_DATA) d = (P2VAR(uint32, AUTOMATIC, XCP_APPL_DATA))dst;
 
    for (i=0; i<len/sizeof(uint32); i++) 
    {
#if ( XCP_PREVENT_SRC_READ_TRAP == STD_ON )
# if defined ( C_CPUTYPE_BIGENDIAN )
       d[i] = (s[(i*4)+0] << 24
            |  s[(i*4)+1] << 16
            |  s[(i*4)+2] <<  8
            |  s[(i*4)+3]);
# else /* C_CPUTYPE_BIGENDIAN */
       d[i] = (s[(i*4)+0]
            |  s[(i*4)+1] <<  8
            |  s[(i*4)+2] << 16
            |  s[(i*4)+3] << 24);
# endif /* C_CPUTYPE_BIGENDIAN */
#else  /* XCP_PREVENT_DST_WRITE_TRAP */
      d[i] = s[i];
#endif /* XCP_PREVENT_DST_WRITE_TRAP */
    }
  }
  else if ( (len % sizeof(uint16) == 0)
#if (XCP_PREVENT_SRC_READ_TRAP == STD_ON )
            && ((uint32)src % sizeof(uint16) == 0)
#endif
          ) 
  {
#if ( XCP_PREVENT_SRC_READ_TRAP == STD_ON )
    P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA) s = (P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA))src;
#else
    P2CONST(uint16, AUTOMATIC, XCP_APPL_DATA) s = (P2CONST(uint16, AUTOMATIC, XCP_APPL_DATA))src;
#endif
    P2VAR(uint16, AUTOMATIC, XCP_APPL_DATA) d = (P2VAR(uint16, AUTOMATIC, XCP_APPL_DATA))dst;
 
    for (i=0; i<len/sizeof(uint16); i++) 
    {
#if ( XCP_PREVENT_DST_WRITE_TRAP == STD_ON )
# if defined ( C_CPUTYPE_BIGENDIAN )
       d[i] = (s[(i*2)+0] << 8
            |  s[(i*2)+1] );
# else /* C_CPUTYPE_BIGENDIAN */
       d[i] = (s[(i*2)+0]
            |  s[(i*2)+1] << 8);
# endif /* C_CPUTYPE_BIGENDIAN */
#else  /* XCP_PREVENT_DST_WRITE_TRAP */
      d[i] = s[i];
#endif /* XCP_PREVENT_DST_WRITE_TRAP */
    }
  }
  else 
  {
    P2VAR(uint8, AUTOMATIC, XCP_APPL_DATA) d = (P2VAR(uint8, AUTOMATIC, XCP_APPL_DATA))dst;
    P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA) s = (P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA))src;
 
    for (i=0; i<len; i++) 
    {
      d[i] = s[i];
    }
  }

  return (uint8)XCP_CMD_OK;
}
#endif

#if defined (XCP_ENABLE_DAQ)

  #if defined (XCP_ENABLE_DAQ_RESUME)
/*****************************************************************************/
/* DAQ list resume feature                                                   */
/*****************************************************************************/
/*****************************************************************************
| NAME:             XcpAppl_DaqResumeStore
| CALLED BY:        Xcp_MainFunction
| PRECONDITIONS:    -
| INPUT PARAMETERS: XCP_CHANNEL_IDX: related Xcp channel
|                   daq: Pointer to daq list
|                   size: Size of daq list in bytes
|                   measurementStart: Flag whether measurement shall be startet after reset
| RETURN VALUES:    -
| DESCRIPTION:      Store daq list in NV memory
******************************************************************************/
FUNC(void, XCP_CODE) XcpAppl_DaqResumeStore( XCP_CHANNEL_SYSTEMTYPE_ONLY, P2CONST(tXcpDaq, AUTOMATIC, XCP_APPL_DATA) daq, uint16 size, uint8 measurementStart )
{
  if( 0 != measurementStart )
  {
    /* Store flag whether DAQ list shall be started */
  }
  /* Store DAQ configuration data to non volatile memory */
}

/*****************************************************************************
| NAME:             XcpAppl_DaqResumeClear
| CALLED BY:        Xcp_MainFunction
| PRECONDITIONS:    -
| INPUT PARAMETERS: XCP_CHANNEL_IDX: related Xcp channel
| RETURN VALUES:    -
| DESCRIPTION:      Clear daq list from NV memory
******************************************************************************/
FUNC(void, XCP_CODE) XcpAppl_DaqResumeClear( uint8 Xcp_Channel )
{
  /* Clear DAQ configuration data in non volatile memory */
}

/*****************************************************************************
| NAME:             XcpAppl_DaqResume
| CALLED BY:        Xcp_MainFunction
| PRECONDITIONS:    -
| INPUT PARAMETERS: XCP_CHANNEL_IDX: related Xcp channel
|                   daq: Pointer to daq list
| RETURN VALUES:    Flag wheter valid daq list was restored
| DESCRIPTION:      Restore daq list from NV memory
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_DaqResume( XCP_CHANNEL_SYSTEMTYPE_ONLY, P2VAR(tXcpDaq, AUTOMATIC, XCP_APPL_DATA) daq )
{
  /* Restore DAQ configuration data from non volatile memory */
  return (uint8)0u;
}

/*****************************************************************************
| NAME:             XcpAppl_CalResumeStore
| CALLED BY:        Xcp_MainFunction
| PRECONDITIONS:    -
| INPUT PARAMETERS: XCP_CHANNEL_IDX: related Xcp channel
| RETURN VALUES:    Flag wheter calibration data was succesfully stored
| DESCRIPTION:      Store calibration data
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_CalResumeStore( uint8 Xcp_Channel )
{
  /* something has to be done here */
  return (uint8)XCP_RESUME_NONE;
  /* return (uint8)XCP_RESUME_ACTIVE; */
}

#if defined ( XCP_TRANSPORT_LAYER_TYPE_FLEXRAY_ASR )
/*****************************************************************************/
/* DAQ list resume feature for FlexRay                                       */
/*****************************************************************************/

/*****************************************************************************
| NAME:             XcpAppl_DaqTlResumeStore
| CALLED BY:        Xcp_MainFunction
| PRECONDITIONS:    -
| INPUT PARAMETERS: rtConfigPt: Pointer to FrXcp configuration data
| RETURN VALUES:    -
| DESCRIPTION:      Store FrXcp configuration data in NV memory
******************************************************************************/
FUNC(void, FRXCP_CODE) XcpAppl_DaqTlResumeStore( P2CONST(tXcpDaqTl, AUTOMATIC, FRXCP_APPL_DATA) rtConfigPt )
{
  /* something has to be done here */
}

/*****************************************************************************
| NAME:             XcpAppl_DaqTlResumeClear
| CALLED BY:        Xcp_MainFunction
| PRECONDITIONS:    -
| INPUT PARAMETERS: -
| RETURN VALUES:    -
| DESCRIPTION:      Clear FrXcp configuration data from NV memory
******************************************************************************/
FUNC(void, FRXCP_CODE) XcpAppl_DaqTlResumeClear( void )
{
  /* something has to be done here */
}

/*****************************************************************************
| NAME:             XcpAppl_DaqTlResume
| CALLED BY:        Xcp_MainFunction
| PRECONDITIONS:    -
| INPUT PARAMETERS: rtConfigPt: Pointer to FrXcp configuration data
| RETURN VALUES:    -
| DESCRIPTION:      Restore FrXcp configuration data in NV memory
******************************************************************************/
FUNC(uint8, FRXCP_CODE) XcpAppl_DaqTlResume( P2VAR(tXcpDaqTl, AUTOMATIC, FRXCP_APPL_DATA) rtConfigPt )
{
  /* something has to be done here */
  return (uint8)0u;
}
#endif

  #endif /* XCP_ENABLE_DAQ_RESUME */

  #if defined ( XCP_ENABLE_DAQ_TIMESTAMP )
/****************************************************************************/
/* DAQ Timestamp                                                            */
/****************************************************************************/
/*****************************************************************************
| NAME:             XcpAppl_GetTimestamp
| CALLED BY:        Xcp_Event
| PRECONDITIONS:    -
| INPUT PARAMETERS: -
| RETURN VALUES:    Timestamp
| DESCRIPTION:      Returns the timestamp
******************************************************************************/
FUNC(XcpDaqTimestampType, XCP_CODE) XcpAppl_GetTimestamp( void )
{
  /* Adapt this function to return a valid timestamp and remove the error message */
  #error "The function XcpAppl_GetTimestamp must return a valid timestamp"
  return (XcpDaqTimestampType)0u;
}
  #endif /* XCP_ENABLE_DAQ_TIMESTAMP */

#endif /* XCP_ENABLE_DAQ */

#if defined ( XCP_ENABLE_CALIBRATION_PAGE )

/*****************************************************************************/
/* Page switching                                                            */
/*****************************************************************************/

/*****************************************************************************
| NAME:             XcpAppl_GetCalPage
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    RAM / ROM switching enabled
| INPUT PARAMETERS: XCP_CHANNEL_IDX : related Xcp channel
|                   segment : 
|                   mode    : 
| RETURN VALUES:    
| DESCRIPTION:      
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_GetCalPage( XCP_CHANNEL_SYSTEMTYPE_ONLY, uint8 segment, uint8 mode )
{
  return (uint8)xcpCalPage[XCP_CHANNEL_IDX];
}

/*****************************************************************************
| NAME:             XcpAppl_SetCalPage
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    RAM / ROM switching enabled
| INPUT PARAMETERS: XCP_CHANNEL_IDX : related Xcp channel
|                   segment : 
|                   page    :
|                   mode    : CAL_ECU and/or CAL_XCP or CAL_ALL
| RETURN VALUES:    XCP_CMD_OK: Operation completed successfully
|                   XCP_CMD_PENDING: Command execution is pending, call XcpSendCrm() when it is finished
|                   CRC_OUT_OF_RANGE: Segment check failed
|                   CRC_PAGE_NOT_VALID: Page check failed
|                   CRC_PAGE_MODE_NOT_VALID: Mode check failed
| DESCRIPTION:      Switch pages, e.g. from reference page to working page
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_SetCalPage( XCP_CHANNEL_SYSTEMTYPE_ONLY, uint8 segment, uint8 page, uint8 mode)
{
  if (segment!=0)
  {
    return CRC_OUT_OF_RANGE; /* Only one segment supported */
  }
  if (page>1)
  {
    return CRC_PAGE_NOT_VALID; 
  }
  if ((mode&0x03)!=0x03)
  {
    return CRC_PAGE_MODE_NOT_VALID; /* Only one segment supported */
  }
  xcpCalPage[XCP_CHANNEL_IDX] = page;

  return (uint8)XCP_CMD_OK;
}

  #if defined ( XCP_ENABLE_PAGE_COPY )
/*****************************************************************************
| NAME:             XcpAppl_CopyCalPage
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    RAM / ROM switching enabled
| INPUT PARAMETERS: XCP_CHANNEL_IDX : related Xcp channel
|                   srcSeg   : 
|                   srcPage  :
|                   destSeg  : 
|                   destPage :
| RETURN VALUES:    XCP_CMD_OK: Operation completed successfully
|                   XCP_CMD_PENDING: Command execution is pending, call XcpSendCrm() when it is finished
|                   CRC_PAGE_NOT_VALID: Page check failed
|                   CRC_SEGMENT_NOT_VALID: Segment check failed
|                   CRC_WRITE_PROTECTED: destination page is write protected
| DESCRIPTION:      Copy a page from srcSeg:srcPage to destSeg:destPage
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_CopyCalPage( XCP_CHANNEL_SYSTEMTYPE_ONLY, uint8 srcSeg, uint8 srcPage, uint8 destSeg, uint8 destPage )
{
  /* Copy a page from srcSeg:srcPage to destSeg:destPage */
  /* Check Segments and Pages for validity first */

  return (uint8)XCP_CMD_OK;
}
  #endif

#endif /* XCP_ENABLE_CALIBRATION_PAGE */

#if defined ( XCP_ENABLE_PAGE_FREEZE )
/*****************************************************************************
| NAME:             XcpAppl_SetFreezeMode
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    RAM / ROM switching enabled
| INPUT PARAMETERS: segment : 
|                   mode    :
| RETURN VALUES:    
| DESCRIPTION:      
******************************************************************************/
FUNC(void, XCP_CODE) XcpAppl_SetFreezeMode( uint8 segment, uint8 mode )
{
  /* something has to be done here */
}

/*****************************************************************************
| NAME:             XcpAppl_GetFreezeMode
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    RAM / ROM switching enabled
| INPUT PARAMETERS: segment : 
| RETURN VALUES: mode    
| DESCRIPTION:      
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_GetFreezeMode( uint8 segment )
{
  /* something has to be done here */

  return (uint8)0u;
}
#endif /* XCP_ENABLE_PAGE_FREEZE */

#if defined ( XCP_ENABLE_PROGRAM )
/*****************************************************************************/
/* Flash Programming                                                         */
/*****************************************************************************/

/*****************************************************************************
| NAME:             XcpAppl_ProgramStart
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    flash programming required
| INPUT PARAMETERS: none
| RETURN VALUES:    XCP_CMD_OK or XCP_CMD_ERROR
| DESCRIPTION:      Prepare for Flash programming
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_ProgramStart( void )
{
  /* something has to be done here */

  return (uint8)XCP_CMD_OK;
}

/*****************************************************************************
| NAME:             XcpAppl_FlashClear
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    flash programming required
| INPUT PARAMETERS: address : pointer to memory address
|                   size    : memory size
| RETURN VALUES:    XCP_CMD_OK or XCP_CMD_ERROR
| DESCRIPTION:      Clear a flash are specified by the address and size.
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_FlashClear( MTABYTEPTR address, uint32 size )
{
  /* something has to be done here */

  return (uint8)XCP_CMD_OK;
}

/*****************************************************************************
| NAME:             XcpAppl_FlashProgram
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    flash programming required
| INPUT PARAMETERS: data    : pointer to data
|                   address : pointer to memory address
|                   size    : memory size
| RETURN VALUES:    XCP_CMD_OK or XCP_CMD_ERROR
| DESCRIPTION:      Program a flash area specified by address and size with data.
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_FlashProgram( ROMBYTEPTR data, MTABYTEPTR address, uint8 size )
{
  /* something has to be done here */

  return (uint8)XCP_CMD_OK;
}

/*****************************************************************************
| NAME:             XcpAppl_Reset
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    flash programming required
| INPUT PARAMETERS: none
| RETURN VALUES:    none
| DESCRIPTION:      
******************************************************************************/
FUNC(void, XCP_CODE) XcpAppl_Reset( void )
{
  /* something has to be done here */
}
#endif /* XCP_ENABLE_PROGRAM */

/*****************************************************************************/
/* Platform and implementation specific functions for XCP                    */
/*****************************************************************************/

/*****************************************************************************
| NAME:             XcpAppl_GetPointer
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    none
| INPUT PARAMETERS: addr_ext : 8  bit address extension
|                   addr     : 32 bit address
| RETURN VALUES:    Pointer to the address specified by the parameters. 
| DESCRIPTION:      Convert a memory address from XCP format 8/32bit into a C pointer.
|                   Used for memory transfers like DOWNLOAD, UPLOAD (MTA)
******************************************************************************/

#if defined ( XcpAppl_GetPointer )
 /* defined as macro */
#else
FUNC(MTABYTEPTR, XCP_CODE) XcpAppl_GetPointer( uint8 addr_ext, uint32 addr )
{
# if defined ( _MICROSOFT_C_VTT_ )
  addr += VttCntrl_Base_GetBaseAddressOfDll();
# endif

  #if defined ( V_ENABLE_USE_DUMMY_STATEMENT )
  /* avoid compiler warning due to unused parameters */
  addr_ext = addr_ext;
  #endif

  return (MTABYTEPTR) addr;
}
#endif /* XcpAppl_GetPointer */

#if defined ( XCP_ENABLE_MEM_ACCESS_BY_APPL )
/*****************************************************************************
| NAME:             XcpAppl_Read
| CALLED BY:        XCP Protocol Layer
| PRECONDITIONS:    none
| INPUT PARAMETERS: addr : 32 bit address
| RETURN VALUES:    Value specified by the address parameters. 
| DESCRIPTION:      Read a single byte from the memory.
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_Read( uint32 addr )
{
  return *((uint8*)addr);
}  

/*****************************************************************************
| NAME:             XcpAppl_Write
| CALLED BY:        XCP Protocol Layer
| PRECONDITIONS:    none
| INPUT PARAMETERS: addr : 32 bit address
|                   data : data to be written to memory
| RETURN VALUES:    none
| DESCRIPTION:      Write a single byte to RAM.
******************************************************************************/
FUNC(void, XCP_CODE) XcpAppl_Write( uint32 addr, uint8 data )
{
  *((uint8*)addr) = data;
}
#endif

#if defined ( XCP_ENABLE_CALIBRATION_MEM_ACCESS_BY_APPL ) || defined ( XCP_ENABLE_MEM_ACCESS_BY_APPL )
  #if defined ( XCP_ENABLE_CHECKSUM )
     #if ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD22 ) || \
         ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD24 ) || \
         ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD44 ) || \
         defined ( XCP_ENABLE_CALIBRATION_MEM_ACCESS_BY_APPL )
/*****************************************************************************
| NAME:             XcpAppl_ReadChecksumValue
| CALLED BY:        XCP Protocol Layer
| PRECONDITIONS:    none
| INPUT PARAMETERS: addr : 32 bit address
| RETURN VALUES:    Pointer to the address specified by the parameters. 
| DESCRIPTION:      Read and return memory with size of tXcpChecksumAddType.
******************************************************************************/
FUNC(tXcpChecksumAddType, XCP_CODE) XcpAppl_ReadChecksumValue( uint32 addr )
{
  return *((tXcpChecksumAddType*)addr);
}
    #endif
  #endif
#endif

#if defined ( XCP_ENABLE_CHECKSUM ) && defined ( XCP_ENABLE_CUSTOM_CRC )
/*****************************************************************************
| NAME:             XcpAppl_CalculateChecksum
| CALLED BY:        XCP Protocol Layer
| PRECONDITIONS:    none
| INPUT PARAMETERS: XCP_CHANNEL_IDX : related Xcp channel
|                   pMemArea : Pointer to memory area for checksum calculation
|                   pRes : Pointer to resulting XCP response string
|                   length : Length of memory area
| RETURN VALUES:    XCP_CMD_OK: CRC calculation performed, value stored in pRes
|                   XCP_CMD_PENDING: Pending response, triggered by call of Xcp_SendCrm
|                   XCP_CMD_DENIED: CRC calculation not possible
| DESCRIPTION:      
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_CalculateChecksum( XCP_CHANNEL_SYSTEMTYPE_ONLY, ROMBYTEPTR pMemArea, BYTEPTR pRes, uint32 length )
{
  /* Calculate CRC synchronously and return XCP_CMD_OK, keep runtime and possible timeouts in mind! */
  /* or */
  /* Trigger calculation of CRC asynchronously and trigger response by call of Xcp_SendCrm after calculation */
  uint32 crc;
  /* crc = Crc_CalculateCRC32(pMemArea, length, 0x00); */	
  pRes[0] = 0xFF; /* Positive Response */
  pRes[1] = XCP_CHECKSUM_TYPE_CRC32;
  pRes[2] = 0x00; /* Reserved */
  pRes[3] = 0x00; /* Reserved */
  /* Consider endianess, this is little endian architecture */
  pRes[4] = (uint8)crc;
  pRes[5] = (uint8)(crc >> 8);
  pRes[6] = (uint8)(crc >> 16);
  pRes[7] = (uint8)(crc >> 24);
  return(XCP_CMD_DENIED);
  /* return(XCP_CMD_OK); */
}
#endif

#if defined ( XCP_ENABLE_WRITE_PROTECTION )
/*****************************************************************************
| NAME:             XcpAppl_CheckWriteAccess
| CALLED BY:        Xcp_WriteMta
| PRECONDITIONS:    none
| INPUT PARAMETERS: address : address
|                   size    : size of memory area
| RETURN VALUES:    XCP_CMD_DENIED : if access is denied
|                   XCP_CMD_OK     : if access is granted
| DESCRIPTION:      Check addresses for valid write access
|                   Used only, if write protection of memory areas is required
******************************************************************************/
  #if defined ( XcpAppl_CheckWriteAccess ) /* defined as macro */
  #else
FUNC(uint8, XCP_CODE) XcpAppl_CheckWriteAccess( ROMMTABYTEPTR address, uint8 size )
{
  /* Protect xcp own memory from being accessed */
  if (address+size>=(MTABYTEPTR)&xcp && address<(MTABYTEPTR)&xcp+sizeof(xcp))
  {
    return (uint8)XCP_CMD_DENIED;
  }
  return (uint8)XCP_CMD_OK;
}
  #endif  /* XcpAppl_CheckWriteAccess */

#endif /* XCP_ENABLE_WRITE_PROTECTION */

#if defined ( XCP_ENABLE_READ_PROTECTION )
/*****************************************************************************
| NAME:             XcpAppl_CheckReadAccess
| CALLED BY:        Xcp_ReadMta
| PRECONDITIONS:    none
| INPUT PARAMETERS: address : address
|                   size    : size of memroy area
| RETURN VALUES:    XCP_CMD_DENIED : if access is denied
|                   XCP_CMD_OK     : if access is granted
| DESCRIPTION:      Check addresses for valid write access
|                   Used only, if write protection of memory areas is required
******************************************************************************/
  #if defined ( XcpAppl_CheckReadAccess ) /* defined as macro */
  #else
FUNC(uint8, XCP_CODE) XcpAppl_CheckReadAccess( ROMMTABYTEPTR address, uint32 size )
{
  /* Protect xcp own memory from being accessed */
  if (address+size>(MTABYTEPTR)&xcp && address<(MTABYTEPTR)&xcp+sizeof(xcp))
  {
    return (uint8)XCP_CMD_DENIED;
  }
  return (uint8)XCP_CMD_OK;
}
  #endif  /* XcpAppl_CheckReadAccess */
#endif /* XCP_ENABLE_READ_PROTECTION */

#if defined ( XCP_ENABLE_DAQ )
  #if defined ( XCP_ENABLE_READ_PROTECTION ) || defined ( XCP_ENABLE_WRITE_PROTECTION )
/*****************************************************************************
| NAME:             XcpAppl_CheckDAQAccess
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    none
| INPUT PARAMETERS: address : address
|                   size    : size of memroy area
| RETURN VALUES:    XCP_CMD_DENIED : if access is denied
|                   XCP_CMD_OK     : if access is granted
| DESCRIPTION:      Check addresses for valid read or write access during DAQ or STIM
|                   Used only, if protection of memory areas is required
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_CheckDAQAccess(DAQBYTEPTR address, uint8 size)
{
  /* Protect xcp own memory from being accessed */
  if (address+size>=(MTABYTEPTR)&xcp && address<(MTABYTEPTR)&xcp+sizeof(xcp))
  {
    return (uint8)XCP_CMD_DENIED;
  }
  return (uint8)XCP_CMD_OK;
}
  #endif

  #if defined ( XCP_ENABLE_DAQ_RUNTIME_SUPERVISION )
/*****************************************************************************
| NAME:             XcpAppl_RtsStart
| CALLED BY:        Xcp_Event
| PRECONDITIONS:    none
| INPUT PARAMETERS: none
| RETURN VALUES:    none
| DESCRIPTION:      The runtime supervision start call back stores the current
|                   timer value for later use.
******************************************************************************/
FUNC(void, XCP_CODE) XcpAppl_RtsStart(void)
{
  /* Store hw timer start value as reference for runtime supervision */
  runtimeSupervisionStart = HW_TIMER_TICKS;
}

/*****************************************************************************
| NAME:             XcpAppl_RtsSnapshot
| CALLED BY:        Xcp_Event
| PRECONDITIONS:    none
| INPUT PARAMETERS: none
| RETURN VALUES:    XCP_NOT_OK : runtime exceeded, Xcp_Event execution is terminated
|                   XCP_OK     : runtime within limits, continue
| DESCRIPTION:      Check runtime and return whether execution of Xcp_Event function
|                   shall be terminated. This function is time critical, please optimize.
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_RtsSnapshot(void)
{
  uint16 timerValue;

  /* Read current hw timer */
  timerValue = HW_TIMER_TICKS;
  /* Verify if max runtime has been exceeded */
  if(timerValue >= runtimeSupervisionStart)
  {
    if((timerValue - runtimeSupervisionStart) > DAQ_RS_THRESHOLD)
    { /* Max runtime has been exceeded */
      return(XCP_NOT_OK);
    }
  }
  else
  { /* Timer overflow */
    if(((0xffff - runtimeSupervisionStart) + timerValue) > DAQ_RS_THRESHOLD)
    { /* Max runtime has been exceeded */
      return(XCP_NOT_OK);
    }
  }

  /* No timeout occured, continue operation */
  return(XCP_OK);
}
  #endif

#endif

#if defined ( XCP_ENABLE_PROGRAMMING_WRITE_PROTECTION )
/*****************************************************************************
| NAME:             XcpAppl_CheckProgramAccess
| CALLED BY:        Xcp_WriteMta
| PRECONDITIONS:    none
| INPUT PARAMETERS: address : address
|                   size    : size of memory area
| RETURN VALUES:    XCP_CMD_DENIED : if access is denied
|                   XCP_CMD_OK     : if access is granted
| DESCRIPTION:      Check addresses for valid programming access
|                   Used only, if programming write protection of memory areas is required
******************************************************************************/
  #if defined ( XcpAppl_CheckProgramAccess ) /* defined as macro */
  #else
FUNC(uint8, XCP_CODE) XcpAppl_CheckProgramAccess( MTABYTEPTR address, uint32 size )
{
  /* something has to be done here */
  return (uint8)XCP_CMD_OK;
}
  #endif  /* XcpHal_CheckProgramAccess */
#endif /* XCP_ENABLE_PROGRAMMING_WRITE_PROTECTION */

#if defined ( XCP_ENABLE_BOOTLOADER_DOWNLOAD )

/*****************************************************************************
| NAME:             XcpAppl_DisableNormalOperation
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    none
| INPUT PARAMETERS: a    : address
|                   size : number of bytes
| RETURN VALUES:    XCP_CMD_OK or XCP_CMD_DENIED
| DESCRIPTION:      Initiate Flash Download
|                   Used only if Download of the Flash Kernel is required
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_DisableNormalOperation( MTABYTEPTR a, uint16 size )
{
  /*
    CANape attempts to download the flash kernel to XCP_RAM.
    Address is a
    Size is size bytes
  */

  /* ... */

  /* return XCP_CMD_DENIED;    Refused */
  return (uint8)XCP_CMD_OK;     /* Ok */
}

/*****************************************************************************
| NAME:             XcpAppl_StartBootLoader
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    none
| INPUT PARAMETERS: none
| RETURN VALUES:    XCP_CMD_DENIED
| DESCRIPTION:      Normally this function never returns
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_StartBootLoader( void )
{
  /* ... */

  return (uint8)XCP_CMD_DENIED;
}
#endif /* XCP_ENABLE_BOOTLOADER_DOWNLOAD */

#if defined ( XCP_ENABLE_WRITE_EEPROM )
/*****************************************************************************
| NAME:             XcpAppl_CheckWriteEEPROM
| CALLED BY:        Xcp_WriteMta
| PRECONDITIONS:    none
| INPUT PARAMETERS: XCP_CHANNEL_IDX : related Xcp channel
|                   addr : address
|                   size : number of bytes
|                   data : pointer to data
| RETURN VALUES:    XCP_CMD_OK      : EEPROM written
|                   XCP_CMD_DENIED  : This is not EEPROM
|                   XCP_CMD_PENDING : EEPROM write in progress, call Xcp_SendCrm when done
| DESCRIPTION:      EEPROM Programming
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_CheckWriteEEPROM( XCP_CHANNEL_SYSTEMTYPE_ONLY, MTABYTEPTR addr, uint8 size, ROMBYTEPTR data )
{
  /* something has to be done here */

  return (uint8)XCP_CMD_DENIED;
}
#endif

#if defined ( XCP_ENABLE_READ_EEPROM )
/*****************************************************************************
| NAME:             XcpAppl_CheckReadEEPROM
| CALLED BY:        Xcp_ReadMta
| PRECONDITIONS:    none
| INPUT PARAMETERS: addr : address
|                   size : number of bytes
|                   data : pointer to data
| RETURN VALUES:    XCP_CMD_DENIED : This is not EEPROM
|                   XCP_CMD_OK  : EEPROM read
| DESCRIPTION:      Read EEPROM
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_CheckReadEEPROM( MTABYTEPTR addr, uint8 size, BYTEPTR data )
{
  /* something has to be done here */

  return (uint8)XCP_CMD_DENIED;
}
#endif

/*****************************************************************************/
/* Seed & Key                                                                */
/* This is just an example how seed & key could be implemented.              */
/*****************************************************************************/
#if defined ( XCP_ENABLE_SEED_KEY )
/*****************************************************************************
| NAME:             XcpAppl_GetSeed
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    none
| INPUT PARAMETERS: XCP_CHANNEL_IDX  : related Xcp channel
|                   resource : resource
|                              (either RM_CAL_PAG or RM_DAQ or RM_STIM or RM_PGM)
|                   seed     : pointer to the generated seed.
| RETURN VALUES:    the length of the seed.
| DESCRIPTION:      Generates a seed.
|                   Attention: The seed has a maximum length of MAX_CTO-2 bytes.
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_GetSeed( XCP_CHANNEL_SYSTEMTYPE_ONLY, const uint8 resource, P2VAR(uint8, AUTOMATIC, XCP_APPL_DATA) seed )
{
  /* Store resource mask */
  xcpResource[XCP_CHANNEL_IDX] = resource;

  /* Generate a seed */
  seed[0] = 0;
  seed[1] = 1;
  seed[2] = 2;
  seed[3] = 3;
  seed[4] = 4;
  seed[5] = 5;

  return (uint8)6u;
}

/*****************************************************************************
| NAME:             XcpAppl_Unlock
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    none
| INPUT PARAMETERS: XCP_CHANNEL_IDX: related Xcp channel
|                   key    : pointer to the key 
|                   length : length of the key
| RETURN VALUES:    0 : if the key is not valid
|                   RM_CAL_PAG, RM_DAQ, RM_STIM, RM_PGM : for valid keys
| DESCRIPTION:      Check key and return the resource that has to be unlocked.
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_Unlock( XCP_CHANNEL_SYSTEMTYPE_ONLY, P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA) key, const uint8 length )
{
  /*
    Ckeck the key
    key[0],key[1],key[2],key[3],key[4],key[5]
  */

  return xcpResource[XCP_CHANNEL_IDX];
}
#endif /* XCP_ENABLE_SEED_KEY */

/****************************************************************************/
/* GET_ID service                                                           */
/****************************************************************************/
#if defined ( XCP_ENABLE_GET_ID_GENERIC )
/*****************************************************************************
| NAME:             XcpAppl_GetIdData
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    none
| INPUT PARAMETERS: pData : pointer to id related information
|                   id: Identifier of requested information
| RETURN VALUES:    length of the id related information
| DESCRIPTION:      Returns a pointer to the id specific information
******************************************************************************/
FUNC(uint32, XCP_CODE) XcpAppl_GetIdData( MTABYTEPTR *pData, uint8 id )
{
  switch( id )
  { /* Example code, fit to your needs */
    case IDT_ASCII: *pData = (MTABYTEPTR)&asciiString; /* Handle ASCII text */
                    return (uint32)sizeof(asciiString)-1;
                    break;
    case IDT_ASAM_NAME: *pData = (MTABYTEPTR)&asamName; /* Handle ASAM-MC2 filename without path and extension */
                        return (uint32)sizeof(asamName)-1;
                        break;
    case IDT_ASAM_PATH: *pData = (MTABYTEPTR)&asamPath; /* Handle ASAM-MC2 filename with path and extension */
                        return (uint32)sizeof(asamPath)-1;
                        break;
    case IDT_VECTOR_MAPNAMES: *pData = (MTABYTEPTR)&mapName; /* Handle map file name */
                              return (uint32)sizeof(mapName)-1;
                              break;
    default:
      return (uint32)0u; /* Id not available */
  }
}
#endif /* XCP_ENABLE_GET_ID_GENERIC */

/****************************************************************************/
/* User defined service                                                     */
/****************************************************************************/
#if defined ( XCP_ENABLE_USER_COMMAND )
/*****************************************************************************
| NAME:             XcpAppl_UserService
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    none
| INPUT PARAMETERS: XCP_CHANNEL_IDX : related Xcp channel
|                   pCmd : pointer to command string
| RETURN VALUES:    XCP_CMD_OK      : command ok
|                   XCP_CMD_SYNTAX  : command not accepted
|                   XCP_CMD_PENDING : command in progress, call Xcp_SendCrm when done
| DESCRIPTION:      Implemented user command
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_UserService( XCP_CHANNEL_SYSTEMTYPE_ONLY, ROMBYTEPTR pCmd )
{
  /* something has to be done here */

  return (uint8)XCP_CMD_OK;
}
#endif

/****************************************************************************/
/* Open Command Interface                                                   */
/****************************************************************************/
#if defined ( XCP_ENABLE_OPENCMDIF )
/*****************************************************************************
| NAME:             XcpAppl_OpenCmdIf
| CALLED BY:        Xcp_Command
| PRECONDITIONS:    none
| INPUT PARAMETERS: XCP_CHANNEL_IDX : related Xcp channel
|                   pCmd : pointer to command string
| RETURN VALUES:    XCP_CMD_OK      : command ok
|                   XCP_CMD_UNKNOWN : command not accepted
|                   XCP_CMD_PENDING : command in progress, call Xcp_SendCrm when done
| DESCRIPTION:      Implemented user specific command
******************************************************************************/
FUNC(uint8, XCP_CODE) XcpAppl_OpenCmdIf( XCP_CHANNEL_SYSTEMTYPE_ONLY, ROMBYTEPTR pCmd, BYTEPTR pRes, BYTEPTR pLength )
{
  if(0xC1 == pCmd[0])
  {
    /* Implementation for XCP command 0xC1 has to be done here */
    pRes[1]  = 0x11; /* Set response */
    pRes[2]  = 0x22;
    *pLength = 3; /* Set response length */
    return (uint8)XCP_CMD_OK;
  }
  return (uint8)XCP_CMD_UNKNOWN;
}
#endif

/****************************************************************************/
/* XcpAppl_SendStall                                                        */
/****************************************************************************/

#if defined ( XCP_ENABLE_SEND_EVENT ) || defined ( XCP_ENABLE_SERV_TEXT_PUTCHAR )
  #if defined ( XcpAppl_SendStall )
 /* XcpAppl_SendStall is already defined or a macro */
  #else
FUNC(uint8, XCP_CODE) XcpAppl_SendStall( void )
{
  /* something has to be done here */

  return( (uint8) 1u );
}
  #endif
#endif

#define XCP_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

