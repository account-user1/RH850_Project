/* This file contains only the definitions XcpIf requires to run QAC and Polyspace. */

/***** From xcp_par.h ***************************************************************/
#define XcpEventChannel_2ms_DAQ_2            0u

/***** From v_def.h *****************************************************************/
typedef unsigned char  vuint8;
typedef unsigned short vuint16;
typedef unsigned long  vuint32;

/***** From XcpProf.h ***************************************************************/
#define MEMORY_ROM
#define XCP_CMD_OK                  1
#define XCP_MEMORY_FAR /* left blank */
#define MTABYTEPTR vuint8 XCP_MEMORY_FAR *
#define DAQBYTEPTR vuint8 XCP_MEMORY_FAR *
#define BYTEPTR vuint8 *

  #define kXcpControl_Disable   0x00u
  #define kXcpControl_Enable    0x01u
  
  #define XCP_CMD_DENIED              0
  #define XCP_CMD_SYNTAX              3
  
  
  #define CAL_ECU                0x01
#define CAL_XCP                0x02
#define CAL_ALL                0x80        /* not supported */

#define CRC_PAGE_NOT_VALID      0x26
#define CRC_PAGE_MODE_NOT_VALID 0x27
#define CRC_SEGMENT_NOT_VALID   0x28

#define kXcpMaxSegment                       2u
#define kXcpMaxPages                         2u

#define RAM

#define CRM_BYTE(x)             (xcp.Crm.b[x])

/* Value should be modified to test all sizes - See MDD for more details */
#define kXcpDaqTimestampSize                 DAQ_TIMESTAMP_WORD 

#if ( kXcpDaqTimestampSize == DAQ_TIMESTAMP_BYTE )
  typedef vuint8 XcpDaqTimestampType;
  #define XcpDaqTimestampSize 1
#elif ( kXcpDaqTimestampSize == DAQ_TIMESTAMP_WORD )
  typedef vuint16 XcpDaqTimestampType;
  #define XcpDaqTimestampSize 2
#elif ( kXcpDaqTimestampSize == DAQ_TIMESTAMP_DWORD )
  typedef vuint32 XcpDaqTimestampType;
  #define XcpDaqTimestampSize 4
#else
  #error "kXcpDaqTimestampSize not defined. Please define a valid timestamp type!"
#endif

  #define kXcpMaxCTO 8
  #define kXcpMaxDTO 8

typedef union {
  /* There might be a loss of up to 3 bytes. */
  vuint8  b[ ((kXcpMaxCTO + 3) & 0xFFC)      ];
  vuint16 w[ ((kXcpMaxCTO + 3) & 0xFFC) / 2  ];
  vuint32 dw[ ((kXcpMaxCTO + 3) & 0xFFC) / 4 ];
} tXcpCto;


/* TODO: This needs to be properly defined for QAC analysis to properly run. However, since the variable it is being 
 * referred to is not used in this module, it has low impact to QAC analysis */
typedef struct {
  /* Crm has to be the first object of this structure !! (refer to XcpInit()) */

  tXcpCto Crm;                           /* RES,ERR Message buffer */
  vuint8  CrmLen;                        /* RES,ERR Message length */



} tXcpData;

extern vuint8 XcpEvent( vuint8 event );
extern FUNC(vuint8, CDD_XcpIf_CODE) ApplXcpCalibrationWrite(MTABYTEPTR addr, vuint8 size, const BYTEPTR data);
extern vuint8 ApplXcpCalibrationRead(uint8 addr[], vuint8 size, uint8 data[]);
extern XcpDaqTimestampType ApplXcpGetTimestamp( void );
extern MTABYTEPTR ApplXcpGetPointer( vuint8 addr_ext, vuint32 addr );