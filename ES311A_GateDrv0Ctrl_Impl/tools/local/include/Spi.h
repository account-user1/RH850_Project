
/* This is just a stub header file for SPI driver functions */ 

#ifndef SPI_H  /* Multiple include preventer */
#define SPI_H

#include "Spi_Cfg.h"
#include "Os.h"

typedef uint8   Spi_ChannelType;
typedef uint16  Spi_DataType;     /* May be changed depending on the SPI driver configuration */
/* Definition of Sequence Result type */
typedef enum ETagSpi_SeqResultType
{
  SPI_SEQ_OK = 0,
  SPI_SEQ_PENDING,
  SPI_SEQ_FAILED,
  SPI_SEQ_CANCELLED
} Spi_SeqResultType;

/* Function prototypes */
extern FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_WriteIB
               (Spi_ChannelType Channel, P2CONST(Spi_DataType, AUTOMATIC,
                                             SPI_APPL_CONST) DataBufferPtr);
extern FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_ReadIB
               (Spi_ChannelType Channel, P2VAR(Spi_DataType, AUTOMATIC,
                                             SPI_APPL_DATA) DataBufferPointer);
									
extern FUNC(Spi_SeqResultType, SPI_PUBLIC_CODE)
                       Spi_GetSequenceResult(Spi_SequenceType Sequence);

#endif
