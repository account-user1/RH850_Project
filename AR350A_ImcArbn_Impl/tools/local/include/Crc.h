#ifndef CRC_H
#define CRC_H

typedef uint8* Crc_DataRefType;
/* Function prototypes */					  
extern FUNC(uint8, CRC_CODE) Crc_CalculateCRC8(Crc_DataRefType Crc_DataPtr, uint32 Crc_Length, uint8 Crc_StartValue8, boolean Crc_IsFirstCall);



#endif  /* CRC_H */



