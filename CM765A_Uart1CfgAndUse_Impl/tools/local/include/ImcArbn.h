/**********************************************************************************************************************
 * Copyright 2017 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : ImcArbn.h
 * Module Description: IMC Arbitration Public Header file
 * Project           : CBD
 * Author            : Krzysztof Byrski
 **********************************************************************************************************************
 * Version Control:
 * %version:          1 %
 * %derived_by:       nz2999 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                             SCR #
 * --------  -------  --------  ----------------------------------------------------------------------------  ---------
 * 06/13/17  1        KByrski   Initial version                                                               EA4#12174
 *********************************************************************************************************************/

#ifndef IMCARBN_H
#define IMCARBN_H

/* Signal Group Frame Size */
#define IMCARBN_FRMSIZE_CNT_U08                  (8U)
/* Rate Group ID for 2ms Rate Group */
#define IMCARBN_RATEGROUPID2MILLISEC_CNT_U08     (0U)
/* Rate Group ID for 10ms Rate Group */
#define IMCARBN_RATEGROUPID10MILLISEC_CNT_U08    (1U)
/* Rate Group ID for 100ms Rate Group */
#define IMCARBN_RATEGROUPID100MILLISEC_CNT_U08   (2U)
/* Total number of Rate Groups */
#define IMCARBN_NROFRATEGROUP_CNT_U08 (3U)

/* Pattern values */
#define IMCARBN_PATIDN_CNT_U08                                (0xA0U)
#define IMCARBN_PATIDNIVS_CNT_U08                             (0x40U)
#define IMCARBN_PATIDMASKVAL_CNT_U08                          (0xE0U)

/* Values for ImcArbnRxDataSrc1 */
#define IMCARBNRXDATASRC_NOSRC                (0U)
#define IMCARBNRXDATASRC_PRIM                 (1U)
#define IMCARBNRXDATASRC_SECDRY               (2U)

/* Number of Signal Groups configured under 2ms Rate Group */
#define IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08  (3U)

/* Number of Signal Groups configured under 10ms Rate Group */
#define IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08  (1U)

/* Number of Signal Groups configured under 100ms Rate Group */
#define IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08  (1U)

#endif /* IMCARBN_H */
