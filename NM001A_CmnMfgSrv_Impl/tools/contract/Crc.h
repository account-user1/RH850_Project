#ifndef CRC_H
#define CRC_H

typedef uint8* Crc_DataRefType;

FUNC(uint16, CRC_CODE) Crc_CalculateCRC16
                (
                     Crc_DataRefType Crc_DataPtr,
                     uint32 Crc_Length,
                     uint16 Crc_StartValue16,
                     boolean Crc_IsFirstCall
                );

FUNC(uint32, CRC_CODE) Crc_CalculateCRC32
                (
                     Crc_DataRefType Crc_DataPtr,
                     uint32 Crc_Length,
                     uint32 Crc_StartValue32,
                     boolean Crc_IsFirstCall 
                );

FUNC(uint8, CRC_CODE) Crc_CalculateCRC8
                (
                     Crc_DataRefType Crc_DataPtr,
                     uint32 Crc_Length,
                     uint8 Crc_StartValue8,
                     boolean Crc_IsFirstCall 
                );

#endif
