/**********************************************************************************************************************
 * Copyright 2017 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : CDD_Uart1CfgAndUse_private.h
 * Module Description: Uart1 Configuration And Use Private
 * Project           : CBD
 * Author            : Krzysztof Byrski
 **********************************************************************************************************************
 * Version Control:
 * %version:          1 %
 * %derived_by:       nz2999 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                             SCR #
 * --------  -------  --------  ----------------------------------------------------------------------------  ---------
 * 06/13/17  1        KByrski   Initial Version                                                               EA4#12174
 *********************************************************************************************************************/

#ifndef CDD_UART1CFGANDUSE_PRIVATE_H
#define CDD_UART1CFGANDUSE_PRIVATE_H

/***************************************************** Typedefs ******************************************************/
typedef enum
{
    OM0_LIN_RESET_MODE_IS_CAUSED                  = 0U,    /* LIN reset mode is caused. */
    OM0_LIN_RESET_MODE_IS_CANCELED                = 1U,    /* LIN reset mode is canceled. */
} RLN3nLCUC_OM0_Type;                                      /* OM0 - LIN Reset */

typedef enum
{
    LMD_LIN_MASTER_MODE                           = 0U,    /* LIN master mode */
    LMD_UART_MODE                                 = 1U,    /* UART mode */
} RLN3nLMD_LMD_Type;                                       /* LMD[1:0] - LIN/UART Mode Select */

typedef enum
{
    LRDNFS_THE_NOISE_FILTER_IS_ENABLED            = 0U,    /* The noise filter is enabled. */
    LRDNFS_THE_NOISE_FILTER_IS_DISABLED           = 1U,    /* The noise filter is disabled. */
} RLN3nLMD_LRDNFS_Type;                                    /* LRDNFS - LIN Reception Data Noise Filtering Disable */

typedef enum
{
    UTPS_TRANSMIT_DATA_NORMAL_OUTPUT              = 0U,    /* Transmit data normal output */
    UTPS_TRANSMIT_DATA_WITH_INVERSION_OUTPUT      = 1U,    /* Transmit data with inversion output */
} RLN3nLBFC_UTPS_Type;                                     /* UTPS - Output Polarity Switch */

typedef enum
{
    URPS_RECEPTION_DATA_NORMAL_OUTPUT             = 0U,    /* Reception data normal output */
    URPS_RECEPTION_DATA_WITH_INVERSION_OUTPUT     = 1U,    /* Reception data with inversion output */
} RLN3nLBFC_URPS_Type;                                     /* URPS - UART Input Polarity Switch */

typedef enum
{
    UPS_PARITY_PROHIBITED                         = 0U,    /* Parity prohibited */
    UPS_EVEN_PARITY                               = 1U,    /* Even Parity */
    UPS_0_PARITY                                  = 2U,    /* 0 Parity */
    UPS_ODD_PARITY                                = 3U,    /* Odd parity */
} RLN3nLBFC_UPS_Type;                                      /* UPS[1:0] - UART Parity Select */

typedef enum
{
    USBLS_STOP_BIT_1_BIT                          = 0U,    /* Stop bit:1 bit */
    USBLS_STOP_BIT_2_BITS                         = 1U,    /* Stop bit: 2 bits */
} RLN3nLBFC_USBLS_Type;                                    /* USBLS - UART Stop Bit length Select */

typedef enum
{
    UBOS_LSB_FIRST                                = 0U,    /* LSB First */
    UBOS_MSB_FIRST                                = 1U,    /* MSB First */
} RLN3nLBFC_UBOS_Type;                                     /* UBOS - UART Transfer Format Order Select */

typedef enum
{
    UBLS_UART_8_BITS_COMMUNICATION                = 0U,    /* UART 8 bits communication */
    UBLS_UART_7_BITS_COMMUNICATION                = 1U,    /* UART 7 bits communication */
} RLN3nLBFC_UBLS_Type;                                     /* UBLS - UART Character Length Select */

typedef enum
{
    UTIGTS_INTERRUPT_AT_THE_START                 = 0U,    /* Transmission interrupt is generated at the start of transmission. */
    UTIGTS_INTERRUPT_AT_THE_COMPLETION            = 1U,    /* Transmission interrupt is generated at the completion of transmission. */
} RLN3nLUOR1_UTIGTS_Type;                                  /* UTIGTS - Transmission Interrupt Generation Timing Select */

typedef enum
{
    FERE_DISABLES_FRAMING_ERROR_DETECTION         = 0U,    /* Disables framing error detection. */
    FERE_ENABLES_FRAMING_ERROR_DETECTION          = 1U,    /* Enables framing error detection. */
} RLN3nLEDE_FERE_Type;                                     /* FERE - Framing Error Detection Enable */

typedef enum
{
    OERE_DISABLES_OVERRUN_ERROR_DETECTION         = 0U,    /* Disables overrun error detection. */
    OERE_ENABLES_OVERRUN_ERROR_DETECTION          = 1U,    /* Enables overrun error detection. */
} RLN3nLEDE_OERE_Type;                                     /* OERE - Overrun Error Detection Enable */

typedef enum
{
    BERE_DISABLES_BIT_ERROR_DETECTION             = 0U,    /* Disables bit error detection. */
    BERE_ENABLES_BIT_ERROR_DETECTION              = 1U,    /* Enables bit error detection. */
} RLN3nLEDE_BERE_Type;                                     /* BERE - Bit Error Detection Enable */

typedef enum
{
    MDL_9_DATA_0                                  = 0U,    /* 9 data */
    MDL_1_DATA                                    = 1U,    /* 1 data */
    MDL_2_DATA                                    = 2U,    /* 2 data */
    MDL_3_DATA                                    = 3U,    /* 3 data */
    MDL_4_DATA                                    = 4U,    /* 4 data */
    MDL_5_DATA                                    = 5U,    /* 5 data */
    MDL_6_DATA                                    = 6U,    /* 6 data */
    MDL_7_DATA                                    = 7U,    /* 7 data */
    MDL_8_DATA                                    = 8U,    /* 8 data */
    MDL_9_DATA                                    = 9U,    /* 9 data */
} RLN3nLDFC_MDL_Type;                                      /* MDL[3:0] - UART Buffer Data Length Select */

typedef enum
{
    NSPB_16_SAMPLING_0                            = 0U,    /* 16 sampling */
    NSPB_6_SAMPLING                               = 5U,    /* 6 sampling */
    NSPB_7_SAMPLING                               = 6U,    /* 7 sampling */
    NSPB_8_SAMPLING                               = 7U,    /* 8 sampling */
    NSPB_9_SAMPLING                               = 8U,    /* 9 sampling */
    NSPB_10_SAMPLING                              = 9U,    /* 10 sampling */
    NSPB_11_SAMPLING                              = 10U,   /* 11 sampling */
    NSPB_12_SAMPLING                              = 11U,   /* 12 sampling */
    NSPB_13_SAMPLING                              = 12U,   /* 13 sampling */
    NSPB_14_SAMPLING                              = 13U,   /* 14 sampling */
    NSPB_15_SAMPLING                              = 14U,   /* 15 sampling */
    NSPB_16_SAMPLING                              = 15U,   /* 16 sampling */
} RLN3nLWBR_NSPB_Type;                                     /* NSPB[3:0] - Bit Sampling Count Select  */

typedef enum
{
    LPRS_1_1                                      = 0U,    /* 1/1 */
    LPRS_1_2                                      = 1U,    /* 1/2 */
    LPRS_1_4                                      = 2U,    /* 1/4 */
    LPRS_1_8                                      = 3U,    /* 1/8 */
    LPRS_1_16                                     = 4U,    /* 1/16 */
    LPRS_1_32                                     = 5U,    /* 1/32 */
    LPRS_1_64                                     = 6U,    /* 1/64 */
    LPRS_1_128                                    = 7U,    /* 1/128 */
} RLN3nLWBR_LPRS_Type;                                     /* LPRS[2:0] - Prescaler Clock Select */

typedef enum
{
    UROE_DISABLES_RECEPTION                       = 0U,    /* Disables reception. */
    UROE_ENABLES_RECEPTION                        = 1U,    /* Enables reception. */
} RLN3nLUOER_UROE_Type;                                    /* UROE - Reception Enable */

typedef enum
{
    UTOE_DISABLES_TRANSMISSION                    = 0U,    /* Disables transmission. */
    UTOE_ENABLES_TRANSMISSION                     = 1U,    /* Enables transmission. */
} RLN3nLUOER_UTOE_Type;                                    /* UTOE - Transmission Enable */

typedef enum
{
    REQEN_REQUEST_NOT_USED                        = 0U,    /* A DMA transfer request from this channel is not used as a candidate in DTS channel arbitration. */
    REQEN_REQUEST_USED                            = 1U,    /* A DMA transfer request from this channel is used as a candidate in DTS channel arbitration. */
} DTFSLnnn_REQEN_Type;                                     /* REQEN - DMA transfer request enable */

typedef enum
{
    DRQC_TRANSFER_REQUEST_CLEAR                   = 1U,    /* A user can clear the DTFSTnnn.DRQ bit by writing 1 to this bit. */
} DTFSCnnn_DRQC_Type;                                      /* DRQC - DMA transfer request clear */

typedef enum
{
    DRQS_TRANSFER_REQUEST_SET                     = 1U,    /* A user can set the DTFSTnnn.DRQ bit by writing 1 to this bit. */
} DTFSSnnn_DRQS_Type;                                      /* DRQS - DMA transfer request set */

typedef enum
{
    MS_LM11_RLIN3_IS_OPERATING                    = 0U,    /* RLIN3 is operating. */
    MS_LM11_CLOCK_SUPPLY_TO_RLIN3_IS_STOPPED      = 1U,    /* Clock supply to RLIN3 is stopped. */
} MSR_LM11_MS_LM11_Type;                                   /* MS_LM11 - Setting this bit to 1 stops clock supply to RLIN3 */

#endif /* CDD_UART1CFGANDUSE_PRIVATE_H */
