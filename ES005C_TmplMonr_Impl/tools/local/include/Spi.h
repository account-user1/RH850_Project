/* Header file for contract folder of ES005C */
/* This is just a stub header file for SPI driver functions */ 

#ifndef SPI_H  /* Multiple include preventer */
#define SPI_H

#define SPI_SEQ_OK			(0U)
#define SPI_SEQ_PENDING		(1U)
#define SPI_SEQ_FAILED		(2U)
#define SPI_SEQ_CANCELED	(3U)
#include "Spi_Cfg.h"
#include "Os.h"

typedef uint16  Spi_ChannelType;
typedef uint16  Spi_DataType;     /* Can be changed depending on the SPI driver configuration */


/* Function prototypes */
extern FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_WriteIB
               (Spi_ChannelType Channel, P2CONST(Spi_DataType, AUTOMATIC,
                                             SPI_APPL_CONST) DataBufferPtr);
extern FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_ReadIB
               (Spi_ChannelType Channel, P2VAR(Spi_DataType, AUTOMATIC,
                                             SPI_APPL_DATA) DataBufferPointer);
									

extern FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_GetSequenceResult(Spi_SequenceType os_arg_Sequence);

											 
											 
#endif
