/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_FordMsg41EBusHiSpd_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <FordMsg41EBusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG41EBUSHISPD_TYPE_H
# define _RTE_FORDMSG41EBUSHISPD_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef Cx00_NormalMode
#   define Cx00_NormalMode (0U)
#  endif

#  ifndef Cx01_NormalAdaptiveMode
#   define Cx01_NormalAdaptiveMode (1U)
#  endif

#  ifndef Cx02_EconomyMode
#   define Cx02_EconomyMode (2U)
#  endif

#  ifndef Cx03_SportMode
#   define Cx03_SportMode (3U)
#  endif

#  ifndef Cx04_SportAdaptiveMode
#   define Cx04_SportAdaptiveMode (4U)
#  endif

#  ifndef Cx05_ComfortMode
#   define Cx05_ComfortMode (5U)
#  endif

#  ifndef Cx06_ComfortAdaptiveMode
#   define Cx06_ComfortAdaptiveMode (6U)
#  endif

#  ifndef Cx07_LowMuMode
#   define Cx07_LowMuMode (7U)
#  endif

#  ifndef Cx08_MudAndRutsMode
#   define Cx08_MudAndRutsMode (8U)
#  endif

#  ifndef Cx09_SandMode
#   define Cx09_SandMode (9U)
#  endif

#  ifndef Cx0A_RockCrawlMode
#   define Cx0A_RockCrawlMode (10U)
#  endif

#  ifndef Cx0B_TowHaulMode
#   define Cx0B_TowHaulMode (11U)
#  endif

#  ifndef Cx0C_HighSpeedDesertMode
#   define Cx0C_HighSpeedDesertMode (12U)
#  endif

#  ifndef Cx0D_TrackMode
#   define Cx0D_TrackMode (13U)
#  endif

#  ifndef Cx0E_RoughRoadMode
#   define Cx0E_RoughRoadMode (14U)
#  endif

#  ifndef Cx0F_NotUsed2
#   define Cx0F_NotUsed2 (15U)
#  endif

#  ifndef Cx10_NotUsed3
#   define Cx10_NotUsed3 (16U)
#  endif

#  ifndef Cx11_NotUsed4
#   define Cx11_NotUsed4 (17U)
#  endif

#  ifndef Cx12_NotUsed5
#   define Cx12_NotUsed5 (18U)
#  endif

#  ifndef Cx13_NotUsed6
#   define Cx13_NotUsed6 (19U)
#  endif

#  ifndef Cx14_NotUsed7
#   define Cx14_NotUsed7 (20U)
#  endif

#  ifndef Cx15_NotUsed8
#   define Cx15_NotUsed8 (21U)
#  endif

#  ifndef Cx16_NotUsed9
#   define Cx16_NotUsed9 (22U)
#  endif

#  ifndef Cx17_NotUsed10
#   define Cx17_NotUsed10 (23U)
#  endif

#  ifndef Cx18_NotUsed11
#   define Cx18_NotUsed11 (24U)
#  endif

#  ifndef Cx19_NotUsed12
#   define Cx19_NotUsed12 (25U)
#  endif

#  ifndef Cx1A_NotUsed13
#   define Cx1A_NotUsed13 (26U)
#  endif

#  ifndef Cx1B_NotUsed14
#   define Cx1B_NotUsed14 (27U)
#  endif

#  ifndef Cx1C_NotUsed15
#   define Cx1C_NotUsed15 (28U)
#  endif

#  ifndef Cx1D_NotUsed16
#   define Cx1D_NotUsed16 (29U)
#  endif

#  ifndef Cx1E_NotUsed17
#   define Cx1E_NotUsed17 (30U)
#  endif

#  ifndef Cx1F_Faulty
#   define Cx1F_Faulty (31U)
#  endif

#  ifndef NTCNR_0X001
#   define NTCNR_0X001 (1U)
#  endif

#  ifndef NTCNR_0X002
#   define NTCNR_0X002 (2U)
#  endif

#  ifndef NTCNR_0X003
#   define NTCNR_0X003 (3U)
#  endif

#  ifndef NTCNR_0X004
#   define NTCNR_0X004 (4U)
#  endif

#  ifndef NTCNR_0X005
#   define NTCNR_0X005 (5U)
#  endif

#  ifndef NTCNR_0X006
#   define NTCNR_0X006 (6U)
#  endif

#  ifndef NTCNR_0X007
#   define NTCNR_0X007 (7U)
#  endif

#  ifndef NTCNR_0X008
#   define NTCNR_0X008 (8U)
#  endif

#  ifndef NTCNR_0X009
#   define NTCNR_0X009 (9U)
#  endif

#  ifndef NTCNR_0X00A
#   define NTCNR_0X00A (10U)
#  endif

#  ifndef NTCNR_0X00B
#   define NTCNR_0X00B (11U)
#  endif

#  ifndef NTCNR_0X00C
#   define NTCNR_0X00C (12U)
#  endif

#  ifndef NTCNR_0X00D
#   define NTCNR_0X00D (13U)
#  endif

#  ifndef NTCNR_0X00E
#   define NTCNR_0X00E (14U)
#  endif

#  ifndef NTCNR_0X00F
#   define NTCNR_0X00F (15U)
#  endif

#  ifndef NTCNR_0X010
#   define NTCNR_0X010 (16U)
#  endif

#  ifndef NTCNR_0X011
#   define NTCNR_0X011 (17U)
#  endif

#  ifndef NTCNR_0X012
#   define NTCNR_0X012 (18U)
#  endif

#  ifndef NTCNR_0X013
#   define NTCNR_0X013 (19U)
#  endif

#  ifndef NTCNR_0X014
#   define NTCNR_0X014 (20U)
#  endif

#  ifndef NTCNR_0X015
#   define NTCNR_0X015 (21U)
#  endif

#  ifndef NTCNR_0X016
#   define NTCNR_0X016 (22U)
#  endif

#  ifndef NTCNR_0X017
#   define NTCNR_0X017 (23U)
#  endif

#  ifndef NTCNR_0X018
#   define NTCNR_0X018 (24U)
#  endif

#  ifndef NTCNR_0X019
#   define NTCNR_0X019 (25U)
#  endif

#  ifndef NTCNR_0X01A
#   define NTCNR_0X01A (26U)
#  endif

#  ifndef NTCNR_0X01B
#   define NTCNR_0X01B (27U)
#  endif

#  ifndef NTCNR_0X01C
#   define NTCNR_0X01C (28U)
#  endif

#  ifndef NTCNR_0X01D
#   define NTCNR_0X01D (29U)
#  endif

#  ifndef NTCNR_0X01E
#   define NTCNR_0X01E (30U)
#  endif

#  ifndef NTCNR_0X01F
#   define NTCNR_0X01F (31U)
#  endif

#  ifndef NTCNR_0X020
#   define NTCNR_0X020 (32U)
#  endif

#  ifndef NTCNR_0X021
#   define NTCNR_0X021 (33U)
#  endif

#  ifndef NTCNR_0X022
#   define NTCNR_0X022 (34U)
#  endif

#  ifndef NTCNR_0X023
#   define NTCNR_0X023 (35U)
#  endif

#  ifndef NTCNR_0X024
#   define NTCNR_0X024 (36U)
#  endif

#  ifndef NTCNR_0X025
#   define NTCNR_0X025 (37U)
#  endif

#  ifndef NTCNR_0X026
#   define NTCNR_0X026 (38U)
#  endif

#  ifndef NTCNR_0X027
#   define NTCNR_0X027 (39U)
#  endif

#  ifndef NTCNR_0X028
#   define NTCNR_0X028 (40U)
#  endif

#  ifndef NTCNR_0X029
#   define NTCNR_0X029 (41U)
#  endif

#  ifndef NTCNR_0X02A
#   define NTCNR_0X02A (42U)
#  endif

#  ifndef NTCNR_0X02B
#   define NTCNR_0X02B (43U)
#  endif

#  ifndef NTCNR_0X02C
#   define NTCNR_0X02C (44U)
#  endif

#  ifndef NTCNR_0X02D
#   define NTCNR_0X02D (45U)
#  endif

#  ifndef NTCNR_0X02E
#   define NTCNR_0X02E (46U)
#  endif

#  ifndef NTCNR_0X02F
#   define NTCNR_0X02F (47U)
#  endif

#  ifndef NTCNR_0X030
#   define NTCNR_0X030 (48U)
#  endif

#  ifndef NTCNR_0X031
#   define NTCNR_0X031 (49U)
#  endif

#  ifndef NTCNR_0X032
#   define NTCNR_0X032 (50U)
#  endif

#  ifndef NTCNR_0X033
#   define NTCNR_0X033 (51U)
#  endif

#  ifndef NTCNR_0X034
#   define NTCNR_0X034 (52U)
#  endif

#  ifndef NTCNR_0X035
#   define NTCNR_0X035 (53U)
#  endif

#  ifndef NTCNR_0X036
#   define NTCNR_0X036 (54U)
#  endif

#  ifndef NTCNR_0X037
#   define NTCNR_0X037 (55U)
#  endif

#  ifndef NTCNR_0X038
#   define NTCNR_0X038 (56U)
#  endif

#  ifndef NTCNR_0X039
#   define NTCNR_0X039 (57U)
#  endif

#  ifndef NTCNR_0X03A
#   define NTCNR_0X03A (58U)
#  endif

#  ifndef NTCNR_0X03B
#   define NTCNR_0X03B (59U)
#  endif

#  ifndef NTCNR_0X03C
#   define NTCNR_0X03C (60U)
#  endif

#  ifndef NTCNR_0X03D
#   define NTCNR_0X03D (61U)
#  endif

#  ifndef NTCNR_0X03E
#   define NTCNR_0X03E (62U)
#  endif

#  ifndef NTCNR_0X03F
#   define NTCNR_0X03F (63U)
#  endif

#  ifndef NTCNR_0X040
#   define NTCNR_0X040 (64U)
#  endif

#  ifndef NTCNR_0X041
#   define NTCNR_0X041 (65U)
#  endif

#  ifndef NTCNR_0X042
#   define NTCNR_0X042 (66U)
#  endif

#  ifndef NTCNR_0X043
#   define NTCNR_0X043 (67U)
#  endif

#  ifndef NTCNR_0X044
#   define NTCNR_0X044 (68U)
#  endif

#  ifndef NTCNR_0X045
#   define NTCNR_0X045 (69U)
#  endif

#  ifndef NTCNR_0X046
#   define NTCNR_0X046 (70U)
#  endif

#  ifndef NTCNR_0X047
#   define NTCNR_0X047 (71U)
#  endif

#  ifndef NTCNR_0X048
#   define NTCNR_0X048 (72U)
#  endif

#  ifndef NTCNR_0X049
#   define NTCNR_0X049 (73U)
#  endif

#  ifndef NTCNR_0X04A
#   define NTCNR_0X04A (74U)
#  endif

#  ifndef NTCNR_0X04B
#   define NTCNR_0X04B (75U)
#  endif

#  ifndef NTCNR_0X04C
#   define NTCNR_0X04C (76U)
#  endif

#  ifndef NTCNR_0X04D
#   define NTCNR_0X04D (77U)
#  endif

#  ifndef NTCNR_0X04E
#   define NTCNR_0X04E (78U)
#  endif

#  ifndef NTCNR_0X04F
#   define NTCNR_0X04F (79U)
#  endif

#  ifndef NTCNR_0X050
#   define NTCNR_0X050 (80U)
#  endif

#  ifndef NTCNR_0X051
#   define NTCNR_0X051 (81U)
#  endif

#  ifndef NTCNR_0X052
#   define NTCNR_0X052 (82U)
#  endif

#  ifndef NTCNR_0X053
#   define NTCNR_0X053 (83U)
#  endif

#  ifndef NTCNR_0X054
#   define NTCNR_0X054 (84U)
#  endif

#  ifndef NTCNR_0X055
#   define NTCNR_0X055 (85U)
#  endif

#  ifndef NTCNR_0X056
#   define NTCNR_0X056 (86U)
#  endif

#  ifndef NTCNR_0X057
#   define NTCNR_0X057 (87U)
#  endif

#  ifndef NTCNR_0X058
#   define NTCNR_0X058 (88U)
#  endif

#  ifndef NTCNR_0X059
#   define NTCNR_0X059 (89U)
#  endif

#  ifndef NTCNR_0X05A
#   define NTCNR_0X05A (90U)
#  endif

#  ifndef NTCNR_0X05B
#   define NTCNR_0X05B (91U)
#  endif

#  ifndef NTCNR_0X05C
#   define NTCNR_0X05C (92U)
#  endif

#  ifndef NTCNR_0X05D
#   define NTCNR_0X05D (93U)
#  endif

#  ifndef NTCNR_0X05E
#   define NTCNR_0X05E (94U)
#  endif

#  ifndef NTCNR_0X05F
#   define NTCNR_0X05F (95U)
#  endif

#  ifndef NTCNR_0X060
#   define NTCNR_0X060 (96U)
#  endif

#  ifndef NTCNR_0X061
#   define NTCNR_0X061 (97U)
#  endif

#  ifndef NTCNR_0X062
#   define NTCNR_0X062 (98U)
#  endif

#  ifndef NTCNR_0X063
#   define NTCNR_0X063 (99U)
#  endif

#  ifndef NTCNR_0X064
#   define NTCNR_0X064 (100U)
#  endif

#  ifndef NTCNR_0X065
#   define NTCNR_0X065 (101U)
#  endif

#  ifndef NTCNR_0X066
#   define NTCNR_0X066 (102U)
#  endif

#  ifndef NTCNR_0X067
#   define NTCNR_0X067 (103U)
#  endif

#  ifndef NTCNR_0X068
#   define NTCNR_0X068 (104U)
#  endif

#  ifndef NTCNR_0X069
#   define NTCNR_0X069 (105U)
#  endif

#  ifndef NTCNR_0X06A
#   define NTCNR_0X06A (106U)
#  endif

#  ifndef NTCNR_0X06B
#   define NTCNR_0X06B (107U)
#  endif

#  ifndef NTCNR_0X06C
#   define NTCNR_0X06C (108U)
#  endif

#  ifndef NTCNR_0X06D
#   define NTCNR_0X06D (109U)
#  endif

#  ifndef NTCNR_0X06E
#   define NTCNR_0X06E (110U)
#  endif

#  ifndef NTCNR_0X06F
#   define NTCNR_0X06F (111U)
#  endif

#  ifndef NTCNR_0X070
#   define NTCNR_0X070 (112U)
#  endif

#  ifndef NTCNR_0X071
#   define NTCNR_0X071 (113U)
#  endif

#  ifndef NTCNR_0X072
#   define NTCNR_0X072 (114U)
#  endif

#  ifndef NTCNR_0X073
#   define NTCNR_0X073 (115U)
#  endif

#  ifndef NTCNR_0X074
#   define NTCNR_0X074 (116U)
#  endif

#  ifndef NTCNR_0X075
#   define NTCNR_0X075 (117U)
#  endif

#  ifndef NTCNR_0X076
#   define NTCNR_0X076 (118U)
#  endif

#  ifndef NTCNR_0X077
#   define NTCNR_0X077 (119U)
#  endif

#  ifndef NTCNR_0X078
#   define NTCNR_0X078 (120U)
#  endif

#  ifndef NTCNR_0X079
#   define NTCNR_0X079 (121U)
#  endif

#  ifndef NTCNR_0X07A
#   define NTCNR_0X07A (122U)
#  endif

#  ifndef NTCNR_0X07B
#   define NTCNR_0X07B (123U)
#  endif

#  ifndef NTCNR_0X07C
#   define NTCNR_0X07C (124U)
#  endif

#  ifndef NTCNR_0X07D
#   define NTCNR_0X07D (125U)
#  endif

#  ifndef NTCNR_0X07E
#   define NTCNR_0X07E (126U)
#  endif

#  ifndef NTCNR_0X07F
#   define NTCNR_0X07F (127U)
#  endif

#  ifndef NTCNR_0X080
#   define NTCNR_0X080 (128U)
#  endif

#  ifndef NTCNR_0X081
#   define NTCNR_0X081 (129U)
#  endif

#  ifndef NTCNR_0X082
#   define NTCNR_0X082 (130U)
#  endif

#  ifndef NTCNR_0X083
#   define NTCNR_0X083 (131U)
#  endif

#  ifndef NTCNR_0X084
#   define NTCNR_0X084 (132U)
#  endif

#  ifndef NTCNR_0X085
#   define NTCNR_0X085 (133U)
#  endif

#  ifndef NTCNR_0X086
#   define NTCNR_0X086 (134U)
#  endif

#  ifndef NTCNR_0X087
#   define NTCNR_0X087 (135U)
#  endif

#  ifndef NTCNR_0X088
#   define NTCNR_0X088 (136U)
#  endif

#  ifndef NTCNR_0X089
#   define NTCNR_0X089 (137U)
#  endif

#  ifndef NTCNR_0X08A
#   define NTCNR_0X08A (138U)
#  endif

#  ifndef NTCNR_0X08B
#   define NTCNR_0X08B (139U)
#  endif

#  ifndef NTCNR_0X08C
#   define NTCNR_0X08C (140U)
#  endif

#  ifndef NTCNR_0X08D
#   define NTCNR_0X08D (141U)
#  endif

#  ifndef NTCNR_0X08E
#   define NTCNR_0X08E (142U)
#  endif

#  ifndef NTCNR_0X08F
#   define NTCNR_0X08F (143U)
#  endif

#  ifndef NTCNR_0X090
#   define NTCNR_0X090 (144U)
#  endif

#  ifndef NTCNR_0X091
#   define NTCNR_0X091 (145U)
#  endif

#  ifndef NTCNR_0X092
#   define NTCNR_0X092 (146U)
#  endif

#  ifndef NTCNR_0X093
#   define NTCNR_0X093 (147U)
#  endif

#  ifndef NTCNR_0X094
#   define NTCNR_0X094 (148U)
#  endif

#  ifndef NTCNR_0X095
#   define NTCNR_0X095 (149U)
#  endif

#  ifndef NTCNR_0X096
#   define NTCNR_0X096 (150U)
#  endif

#  ifndef NTCNR_0X097
#   define NTCNR_0X097 (151U)
#  endif

#  ifndef NTCNR_0X098
#   define NTCNR_0X098 (152U)
#  endif

#  ifndef NTCNR_0X099
#   define NTCNR_0X099 (153U)
#  endif

#  ifndef NTCNR_0X09A
#   define NTCNR_0X09A (154U)
#  endif

#  ifndef NTCNR_0X09B
#   define NTCNR_0X09B (155U)
#  endif

#  ifndef NTCNR_0X09C
#   define NTCNR_0X09C (156U)
#  endif

#  ifndef NTCNR_0X09D
#   define NTCNR_0X09D (157U)
#  endif

#  ifndef NTCNR_0X09E
#   define NTCNR_0X09E (158U)
#  endif

#  ifndef NTCNR_0X09F
#   define NTCNR_0X09F (159U)
#  endif

#  ifndef NTCNR_0X0A0
#   define NTCNR_0X0A0 (160U)
#  endif

#  ifndef NTCNR_0X0A1
#   define NTCNR_0X0A1 (161U)
#  endif

#  ifndef NTCNR_0X0A2
#   define NTCNR_0X0A2 (162U)
#  endif

#  ifndef NTCNR_0X0A3
#   define NTCNR_0X0A3 (163U)
#  endif

#  ifndef NTCNR_0X0A4
#   define NTCNR_0X0A4 (164U)
#  endif

#  ifndef NTCNR_0X0A5
#   define NTCNR_0X0A5 (165U)
#  endif

#  ifndef NTCNR_0X0A6
#   define NTCNR_0X0A6 (166U)
#  endif

#  ifndef NTCNR_0X0A7
#   define NTCNR_0X0A7 (167U)
#  endif

#  ifndef NTCNR_0X0A8
#   define NTCNR_0X0A8 (168U)
#  endif

#  ifndef NTCNR_0X0A9
#   define NTCNR_0X0A9 (169U)
#  endif

#  ifndef NTCNR_0X0AA
#   define NTCNR_0X0AA (170U)
#  endif

#  ifndef NTCNR_0X0AB
#   define NTCNR_0X0AB (171U)
#  endif

#  ifndef NTCNR_0X0AC
#   define NTCNR_0X0AC (172U)
#  endif

#  ifndef NTCNR_0X0AD
#   define NTCNR_0X0AD (173U)
#  endif

#  ifndef NTCNR_0X0AE
#   define NTCNR_0X0AE (174U)
#  endif

#  ifndef NTCNR_0X0AF
#   define NTCNR_0X0AF (175U)
#  endif

#  ifndef NTCNR_0X0B0
#   define NTCNR_0X0B0 (176U)
#  endif

#  ifndef NTCNR_0X0B1
#   define NTCNR_0X0B1 (177U)
#  endif

#  ifndef NTCNR_0X0B2
#   define NTCNR_0X0B2 (178U)
#  endif

#  ifndef NTCNR_0X0B3
#   define NTCNR_0X0B3 (179U)
#  endif

#  ifndef NTCNR_0X0B4
#   define NTCNR_0X0B4 (180U)
#  endif

#  ifndef NTCNR_0X0B5
#   define NTCNR_0X0B5 (181U)
#  endif

#  ifndef NTCNR_0X0B6
#   define NTCNR_0X0B6 (182U)
#  endif

#  ifndef NTCNR_0X0B7
#   define NTCNR_0X0B7 (183U)
#  endif

#  ifndef NTCNR_0X0B8
#   define NTCNR_0X0B8 (184U)
#  endif

#  ifndef NTCNR_0X0B9
#   define NTCNR_0X0B9 (185U)
#  endif

#  ifndef NTCNR_0X0BA
#   define NTCNR_0X0BA (186U)
#  endif

#  ifndef NTCNR_0X0BB
#   define NTCNR_0X0BB (187U)
#  endif

#  ifndef NTCNR_0X0BC
#   define NTCNR_0X0BC (188U)
#  endif

#  ifndef NTCNR_0X0BD
#   define NTCNR_0X0BD (189U)
#  endif

#  ifndef NTCNR_0X0BE
#   define NTCNR_0X0BE (190U)
#  endif

#  ifndef NTCNR_0X0BF
#   define NTCNR_0X0BF (191U)
#  endif

#  ifndef NTCNR_0X0C0
#   define NTCNR_0X0C0 (192U)
#  endif

#  ifndef NTCNR_0X0C1
#   define NTCNR_0X0C1 (193U)
#  endif

#  ifndef NTCNR_0X0C2
#   define NTCNR_0X0C2 (194U)
#  endif

#  ifndef NTCNR_0X0C3
#   define NTCNR_0X0C3 (195U)
#  endif

#  ifndef NTCNR_0X0C4
#   define NTCNR_0X0C4 (196U)
#  endif

#  ifndef NTCNR_0X0C5
#   define NTCNR_0X0C5 (197U)
#  endif

#  ifndef NTCNR_0X0C6
#   define NTCNR_0X0C6 (198U)
#  endif

#  ifndef NTCNR_0X0C7
#   define NTCNR_0X0C7 (199U)
#  endif

#  ifndef NTCNR_0X0C8
#   define NTCNR_0X0C8 (200U)
#  endif

#  ifndef NTCNR_0X0C9
#   define NTCNR_0X0C9 (201U)
#  endif

#  ifndef NTCNR_0X0CA
#   define NTCNR_0X0CA (202U)
#  endif

#  ifndef NTCNR_0X0CB
#   define NTCNR_0X0CB (203U)
#  endif

#  ifndef NTCNR_0X0CC
#   define NTCNR_0X0CC (204U)
#  endif

#  ifndef NTCNR_0X0CD
#   define NTCNR_0X0CD (205U)
#  endif

#  ifndef NTCNR_0X0CE
#   define NTCNR_0X0CE (206U)
#  endif

#  ifndef NTCNR_0X0CF
#   define NTCNR_0X0CF (207U)
#  endif

#  ifndef NTCNR_0X0D0
#   define NTCNR_0X0D0 (208U)
#  endif

#  ifndef NTCNR_0X0D1
#   define NTCNR_0X0D1 (209U)
#  endif

#  ifndef NTCNR_0X0D2
#   define NTCNR_0X0D2 (210U)
#  endif

#  ifndef NTCNR_0X0D3
#   define NTCNR_0X0D3 (211U)
#  endif

#  ifndef NTCNR_0X0D4
#   define NTCNR_0X0D4 (212U)
#  endif

#  ifndef NTCNR_0X0D5
#   define NTCNR_0X0D5 (213U)
#  endif

#  ifndef NTCNR_0X0D6
#   define NTCNR_0X0D6 (214U)
#  endif

#  ifndef NTCNR_0X0D7
#   define NTCNR_0X0D7 (215U)
#  endif

#  ifndef NTCNR_0X0D8
#   define NTCNR_0X0D8 (216U)
#  endif

#  ifndef NTCNR_0X0D9
#   define NTCNR_0X0D9 (217U)
#  endif

#  ifndef NTCNR_0X0DA
#   define NTCNR_0X0DA (218U)
#  endif

#  ifndef NTCNR_0X0DB
#   define NTCNR_0X0DB (219U)
#  endif

#  ifndef NTCNR_0X0DC
#   define NTCNR_0X0DC (220U)
#  endif

#  ifndef NTCNR_0X0DD
#   define NTCNR_0X0DD (221U)
#  endif

#  ifndef NTCNR_0X0DE
#   define NTCNR_0X0DE (222U)
#  endif

#  ifndef NTCNR_0X0DF
#   define NTCNR_0X0DF (223U)
#  endif

#  ifndef NTCNR_0X0E0
#   define NTCNR_0X0E0 (224U)
#  endif

#  ifndef NTCNR_0X0E1
#   define NTCNR_0X0E1 (225U)
#  endif

#  ifndef NTCNR_0X0E2
#   define NTCNR_0X0E2 (226U)
#  endif

#  ifndef NTCNR_0X0E3
#   define NTCNR_0X0E3 (227U)
#  endif

#  ifndef NTCNR_0X0E4
#   define NTCNR_0X0E4 (228U)
#  endif

#  ifndef NTCNR_0X0E5
#   define NTCNR_0X0E5 (229U)
#  endif

#  ifndef NTCNR_0X0E6
#   define NTCNR_0X0E6 (230U)
#  endif

#  ifndef NTCNR_0X0E7
#   define NTCNR_0X0E7 (231U)
#  endif

#  ifndef NTCNR_0X0E8
#   define NTCNR_0X0E8 (232U)
#  endif

#  ifndef NTCNR_0X0E9
#   define NTCNR_0X0E9 (233U)
#  endif

#  ifndef NTCNR_0X0EA
#   define NTCNR_0X0EA (234U)
#  endif

#  ifndef NTCNR_0X0EB
#   define NTCNR_0X0EB (235U)
#  endif

#  ifndef NTCNR_0X0EC
#   define NTCNR_0X0EC (236U)
#  endif

#  ifndef NTCNR_0X0ED
#   define NTCNR_0X0ED (237U)
#  endif

#  ifndef NTCNR_0X0EE
#   define NTCNR_0X0EE (238U)
#  endif

#  ifndef NTCNR_0X0EF
#   define NTCNR_0X0EF (239U)
#  endif

#  ifndef NTCNR_0X0F0
#   define NTCNR_0X0F0 (240U)
#  endif

#  ifndef NTCNR_0X0F1
#   define NTCNR_0X0F1 (241U)
#  endif

#  ifndef NTCNR_0X0F2
#   define NTCNR_0X0F2 (242U)
#  endif

#  ifndef NTCNR_0X0F3
#   define NTCNR_0X0F3 (243U)
#  endif

#  ifndef NTCNR_0X0F4
#   define NTCNR_0X0F4 (244U)
#  endif

#  ifndef NTCNR_0X0F5
#   define NTCNR_0X0F5 (245U)
#  endif

#  ifndef NTCNR_0X0F6
#   define NTCNR_0X0F6 (246U)
#  endif

#  ifndef NTCNR_0X0F7
#   define NTCNR_0X0F7 (247U)
#  endif

#  ifndef NTCNR_0X0F8
#   define NTCNR_0X0F8 (248U)
#  endif

#  ifndef NTCNR_0X0F9
#   define NTCNR_0X0F9 (249U)
#  endif

#  ifndef NTCNR_0X0FA
#   define NTCNR_0X0FA (250U)
#  endif

#  ifndef NTCNR_0X0FB
#   define NTCNR_0X0FB (251U)
#  endif

#  ifndef NTCNR_0X0FC
#   define NTCNR_0X0FC (252U)
#  endif

#  ifndef NTCNR_0X0FD
#   define NTCNR_0X0FD (253U)
#  endif

#  ifndef NTCNR_0X0FE
#   define NTCNR_0X0FE (254U)
#  endif

#  ifndef NTCNR_0X0FF
#   define NTCNR_0X0FF (255U)
#  endif

#  ifndef NTCNR_0X100
#   define NTCNR_0X100 (256U)
#  endif

#  ifndef NTCNR_0X101
#   define NTCNR_0X101 (257U)
#  endif

#  ifndef NTCNR_0X102
#   define NTCNR_0X102 (258U)
#  endif

#  ifndef NTCNR_0X103
#   define NTCNR_0X103 (259U)
#  endif

#  ifndef NTCNR_0X104
#   define NTCNR_0X104 (260U)
#  endif

#  ifndef NTCNR_0X105
#   define NTCNR_0X105 (261U)
#  endif

#  ifndef NTCNR_0X106
#   define NTCNR_0X106 (262U)
#  endif

#  ifndef NTCNR_0X107
#   define NTCNR_0X107 (263U)
#  endif

#  ifndef NTCNR_0X108
#   define NTCNR_0X108 (264U)
#  endif

#  ifndef NTCNR_0X109
#   define NTCNR_0X109 (265U)
#  endif

#  ifndef NTCNR_0X10A
#   define NTCNR_0X10A (266U)
#  endif

#  ifndef NTCNR_0X10B
#   define NTCNR_0X10B (267U)
#  endif

#  ifndef NTCNR_0X10C
#   define NTCNR_0X10C (268U)
#  endif

#  ifndef NTCNR_0X10D
#   define NTCNR_0X10D (269U)
#  endif

#  ifndef NTCNR_0X10E
#   define NTCNR_0X10E (270U)
#  endif

#  ifndef NTCNR_0X10F
#   define NTCNR_0X10F (271U)
#  endif

#  ifndef NTCNR_0X110
#   define NTCNR_0X110 (272U)
#  endif

#  ifndef NTCNR_0X111
#   define NTCNR_0X111 (273U)
#  endif

#  ifndef NTCNR_0X112
#   define NTCNR_0X112 (274U)
#  endif

#  ifndef NTCNR_0X113
#   define NTCNR_0X113 (275U)
#  endif

#  ifndef NTCNR_0X114
#   define NTCNR_0X114 (276U)
#  endif

#  ifndef NTCNR_0X115
#   define NTCNR_0X115 (277U)
#  endif

#  ifndef NTCNR_0X116
#   define NTCNR_0X116 (278U)
#  endif

#  ifndef NTCNR_0X117
#   define NTCNR_0X117 (279U)
#  endif

#  ifndef NTCNR_0X118
#   define NTCNR_0X118 (280U)
#  endif

#  ifndef NTCNR_0X119
#   define NTCNR_0X119 (281U)
#  endif

#  ifndef NTCNR_0X11A
#   define NTCNR_0X11A (282U)
#  endif

#  ifndef NTCNR_0X11B
#   define NTCNR_0X11B (283U)
#  endif

#  ifndef NTCNR_0X11C
#   define NTCNR_0X11C (284U)
#  endif

#  ifndef NTCNR_0X11D
#   define NTCNR_0X11D (285U)
#  endif

#  ifndef NTCNR_0X11E
#   define NTCNR_0X11E (286U)
#  endif

#  ifndef NTCNR_0X11F
#   define NTCNR_0X11F (287U)
#  endif

#  ifndef NTCNR_0X120
#   define NTCNR_0X120 (288U)
#  endif

#  ifndef NTCNR_0X121
#   define NTCNR_0X121 (289U)
#  endif

#  ifndef NTCNR_0X122
#   define NTCNR_0X122 (290U)
#  endif

#  ifndef NTCNR_0X123
#   define NTCNR_0X123 (291U)
#  endif

#  ifndef NTCNR_0X124
#   define NTCNR_0X124 (292U)
#  endif

#  ifndef NTCNR_0X125
#   define NTCNR_0X125 (293U)
#  endif

#  ifndef NTCNR_0X126
#   define NTCNR_0X126 (294U)
#  endif

#  ifndef NTCNR_0X127
#   define NTCNR_0X127 (295U)
#  endif

#  ifndef NTCNR_0X128
#   define NTCNR_0X128 (296U)
#  endif

#  ifndef NTCNR_0X129
#   define NTCNR_0X129 (297U)
#  endif

#  ifndef NTCNR_0X12A
#   define NTCNR_0X12A (298U)
#  endif

#  ifndef NTCNR_0X12B
#   define NTCNR_0X12B (299U)
#  endif

#  ifndef NTCNR_0X12C
#   define NTCNR_0X12C (300U)
#  endif

#  ifndef NTCNR_0X12D
#   define NTCNR_0X12D (301U)
#  endif

#  ifndef NTCNR_0X12E
#   define NTCNR_0X12E (302U)
#  endif

#  ifndef NTCNR_0X12F
#   define NTCNR_0X12F (303U)
#  endif

#  ifndef NTCNR_0X130
#   define NTCNR_0X130 (304U)
#  endif

#  ifndef NTCNR_0X131
#   define NTCNR_0X131 (305U)
#  endif

#  ifndef NTCNR_0X132
#   define NTCNR_0X132 (306U)
#  endif

#  ifndef NTCNR_0X133
#   define NTCNR_0X133 (307U)
#  endif

#  ifndef NTCNR_0X134
#   define NTCNR_0X134 (308U)
#  endif

#  ifndef NTCNR_0X135
#   define NTCNR_0X135 (309U)
#  endif

#  ifndef NTCNR_0X136
#   define NTCNR_0X136 (310U)
#  endif

#  ifndef NTCNR_0X137
#   define NTCNR_0X137 (311U)
#  endif

#  ifndef NTCNR_0X138
#   define NTCNR_0X138 (312U)
#  endif

#  ifndef NTCNR_0X139
#   define NTCNR_0X139 (313U)
#  endif

#  ifndef NTCNR_0X13A
#   define NTCNR_0X13A (314U)
#  endif

#  ifndef NTCNR_0X13B
#   define NTCNR_0X13B (315U)
#  endif

#  ifndef NTCNR_0X13C
#   define NTCNR_0X13C (316U)
#  endif

#  ifndef NTCNR_0X13D
#   define NTCNR_0X13D (317U)
#  endif

#  ifndef NTCNR_0X13E
#   define NTCNR_0X13E (318U)
#  endif

#  ifndef NTCNR_0X13F
#   define NTCNR_0X13F (319U)
#  endif

#  ifndef NTCNR_0X140
#   define NTCNR_0X140 (320U)
#  endif

#  ifndef NTCNR_0X141
#   define NTCNR_0X141 (321U)
#  endif

#  ifndef NTCNR_0X142
#   define NTCNR_0X142 (322U)
#  endif

#  ifndef NTCNR_0X143
#   define NTCNR_0X143 (323U)
#  endif

#  ifndef NTCNR_0X144
#   define NTCNR_0X144 (324U)
#  endif

#  ifndef NTCNR_0X145
#   define NTCNR_0X145 (325U)
#  endif

#  ifndef NTCNR_0X146
#   define NTCNR_0X146 (326U)
#  endif

#  ifndef NTCNR_0X147
#   define NTCNR_0X147 (327U)
#  endif

#  ifndef NTCNR_0X148
#   define NTCNR_0X148 (328U)
#  endif

#  ifndef NTCNR_0X149
#   define NTCNR_0X149 (329U)
#  endif

#  ifndef NTCNR_0X14A
#   define NTCNR_0X14A (330U)
#  endif

#  ifndef NTCNR_0X14B
#   define NTCNR_0X14B (331U)
#  endif

#  ifndef NTCNR_0X14C
#   define NTCNR_0X14C (332U)
#  endif

#  ifndef NTCNR_0X14D
#   define NTCNR_0X14D (333U)
#  endif

#  ifndef NTCNR_0X14E
#   define NTCNR_0X14E (334U)
#  endif

#  ifndef NTCNR_0X14F
#   define NTCNR_0X14F (335U)
#  endif

#  ifndef NTCNR_0X150
#   define NTCNR_0X150 (336U)
#  endif

#  ifndef NTCNR_0X151
#   define NTCNR_0X151 (337U)
#  endif

#  ifndef NTCNR_0X152
#   define NTCNR_0X152 (338U)
#  endif

#  ifndef NTCNR_0X153
#   define NTCNR_0X153 (339U)
#  endif

#  ifndef NTCNR_0X154
#   define NTCNR_0X154 (340U)
#  endif

#  ifndef NTCNR_0X155
#   define NTCNR_0X155 (341U)
#  endif

#  ifndef NTCNR_0X156
#   define NTCNR_0X156 (342U)
#  endif

#  ifndef NTCNR_0X157
#   define NTCNR_0X157 (343U)
#  endif

#  ifndef NTCNR_0X158
#   define NTCNR_0X158 (344U)
#  endif

#  ifndef NTCNR_0X159
#   define NTCNR_0X159 (345U)
#  endif

#  ifndef NTCNR_0X15A
#   define NTCNR_0X15A (346U)
#  endif

#  ifndef NTCNR_0X15B
#   define NTCNR_0X15B (347U)
#  endif

#  ifndef NTCNR_0X15C
#   define NTCNR_0X15C (348U)
#  endif

#  ifndef NTCNR_0X15D
#   define NTCNR_0X15D (349U)
#  endif

#  ifndef NTCNR_0X15E
#   define NTCNR_0X15E (350U)
#  endif

#  ifndef NTCNR_0X15F
#   define NTCNR_0X15F (351U)
#  endif

#  ifndef NTCNR_0X160
#   define NTCNR_0X160 (352U)
#  endif

#  ifndef NTCNR_0X161
#   define NTCNR_0X161 (353U)
#  endif

#  ifndef NTCNR_0X162
#   define NTCNR_0X162 (354U)
#  endif

#  ifndef NTCNR_0X163
#   define NTCNR_0X163 (355U)
#  endif

#  ifndef NTCNR_0X164
#   define NTCNR_0X164 (356U)
#  endif

#  ifndef NTCNR_0X165
#   define NTCNR_0X165 (357U)
#  endif

#  ifndef NTCNR_0X166
#   define NTCNR_0X166 (358U)
#  endif

#  ifndef NTCNR_0X167
#   define NTCNR_0X167 (359U)
#  endif

#  ifndef NTCNR_0X168
#   define NTCNR_0X168 (360U)
#  endif

#  ifndef NTCNR_0X169
#   define NTCNR_0X169 (361U)
#  endif

#  ifndef NTCNR_0X16A
#   define NTCNR_0X16A (362U)
#  endif

#  ifndef NTCNR_0X16B
#   define NTCNR_0X16B (363U)
#  endif

#  ifndef NTCNR_0X16C
#   define NTCNR_0X16C (364U)
#  endif

#  ifndef NTCNR_0X16D
#   define NTCNR_0X16D (365U)
#  endif

#  ifndef NTCNR_0X16E
#   define NTCNR_0X16E (366U)
#  endif

#  ifndef NTCNR_0X16F
#   define NTCNR_0X16F (367U)
#  endif

#  ifndef NTCNR_0X170
#   define NTCNR_0X170 (368U)
#  endif

#  ifndef NTCNR_0X171
#   define NTCNR_0X171 (369U)
#  endif

#  ifndef NTCNR_0X172
#   define NTCNR_0X172 (370U)
#  endif

#  ifndef NTCNR_0X173
#   define NTCNR_0X173 (371U)
#  endif

#  ifndef NTCNR_0X174
#   define NTCNR_0X174 (372U)
#  endif

#  ifndef NTCNR_0X175
#   define NTCNR_0X175 (373U)
#  endif

#  ifndef NTCNR_0X176
#   define NTCNR_0X176 (374U)
#  endif

#  ifndef NTCNR_0X177
#   define NTCNR_0X177 (375U)
#  endif

#  ifndef NTCNR_0X178
#   define NTCNR_0X178 (376U)
#  endif

#  ifndef NTCNR_0X179
#   define NTCNR_0X179 (377U)
#  endif

#  ifndef NTCNR_0X17A
#   define NTCNR_0X17A (378U)
#  endif

#  ifndef NTCNR_0X17B
#   define NTCNR_0X17B (379U)
#  endif

#  ifndef NTCNR_0X17C
#   define NTCNR_0X17C (380U)
#  endif

#  ifndef NTCNR_0X17D
#   define NTCNR_0X17D (381U)
#  endif

#  ifndef NTCNR_0X17E
#   define NTCNR_0X17E (382U)
#  endif

#  ifndef NTCNR_0X17F
#   define NTCNR_0X17F (383U)
#  endif

#  ifndef NTCNR_0X180
#   define NTCNR_0X180 (384U)
#  endif

#  ifndef NTCNR_0X181
#   define NTCNR_0X181 (385U)
#  endif

#  ifndef NTCNR_0X182
#   define NTCNR_0X182 (386U)
#  endif

#  ifndef NTCNR_0X183
#   define NTCNR_0X183 (387U)
#  endif

#  ifndef NTCNR_0X184
#   define NTCNR_0X184 (388U)
#  endif

#  ifndef NTCNR_0X185
#   define NTCNR_0X185 (389U)
#  endif

#  ifndef NTCNR_0X186
#   define NTCNR_0X186 (390U)
#  endif

#  ifndef NTCNR_0X187
#   define NTCNR_0X187 (391U)
#  endif

#  ifndef NTCNR_0X188
#   define NTCNR_0X188 (392U)
#  endif

#  ifndef NTCNR_0X189
#   define NTCNR_0X189 (393U)
#  endif

#  ifndef NTCNR_0X18A
#   define NTCNR_0X18A (394U)
#  endif

#  ifndef NTCNR_0X18B
#   define NTCNR_0X18B (395U)
#  endif

#  ifndef NTCNR_0X18C
#   define NTCNR_0X18C (396U)
#  endif

#  ifndef NTCNR_0X18D
#   define NTCNR_0X18D (397U)
#  endif

#  ifndef NTCNR_0X18E
#   define NTCNR_0X18E (398U)
#  endif

#  ifndef NTCNR_0X18F
#   define NTCNR_0X18F (399U)
#  endif

#  ifndef NTCNR_0X190
#   define NTCNR_0X190 (400U)
#  endif

#  ifndef NTCNR_0X191
#   define NTCNR_0X191 (401U)
#  endif

#  ifndef NTCNR_0X192
#   define NTCNR_0X192 (402U)
#  endif

#  ifndef NTCNR_0X193
#   define NTCNR_0X193 (403U)
#  endif

#  ifndef NTCNR_0X194
#   define NTCNR_0X194 (404U)
#  endif

#  ifndef NTCNR_0X195
#   define NTCNR_0X195 (405U)
#  endif

#  ifndef NTCNR_0X196
#   define NTCNR_0X196 (406U)
#  endif

#  ifndef NTCNR_0X197
#   define NTCNR_0X197 (407U)
#  endif

#  ifndef NTCNR_0X198
#   define NTCNR_0X198 (408U)
#  endif

#  ifndef NTCNR_0X199
#   define NTCNR_0X199 (409U)
#  endif

#  ifndef NTCNR_0X19A
#   define NTCNR_0X19A (410U)
#  endif

#  ifndef NTCNR_0X19B
#   define NTCNR_0X19B (411U)
#  endif

#  ifndef NTCNR_0X19C
#   define NTCNR_0X19C (412U)
#  endif

#  ifndef NTCNR_0X19D
#   define NTCNR_0X19D (413U)
#  endif

#  ifndef NTCNR_0X19E
#   define NTCNR_0X19E (414U)
#  endif

#  ifndef NTCNR_0X19F
#   define NTCNR_0X19F (415U)
#  endif

#  ifndef NTCNR_0X1A0
#   define NTCNR_0X1A0 (416U)
#  endif

#  ifndef NTCNR_0X1A1
#   define NTCNR_0X1A1 (417U)
#  endif

#  ifndef NTCNR_0X1A2
#   define NTCNR_0X1A2 (418U)
#  endif

#  ifndef NTCNR_0X1A3
#   define NTCNR_0X1A3 (419U)
#  endif

#  ifndef NTCNR_0X1A4
#   define NTCNR_0X1A4 (420U)
#  endif

#  ifndef NTCNR_0X1A5
#   define NTCNR_0X1A5 (421U)
#  endif

#  ifndef NTCNR_0X1A6
#   define NTCNR_0X1A6 (422U)
#  endif

#  ifndef NTCNR_0X1A7
#   define NTCNR_0X1A7 (423U)
#  endif

#  ifndef NTCNR_0X1A8
#   define NTCNR_0X1A8 (424U)
#  endif

#  ifndef NTCNR_0X1A9
#   define NTCNR_0X1A9 (425U)
#  endif

#  ifndef NTCNR_0X1AA
#   define NTCNR_0X1AA (426U)
#  endif

#  ifndef NTCNR_0X1AB
#   define NTCNR_0X1AB (427U)
#  endif

#  ifndef NTCNR_0X1AC
#   define NTCNR_0X1AC (428U)
#  endif

#  ifndef NTCNR_0X1AD
#   define NTCNR_0X1AD (429U)
#  endif

#  ifndef NTCNR_0X1AE
#   define NTCNR_0X1AE (430U)
#  endif

#  ifndef NTCNR_0X1AF
#   define NTCNR_0X1AF (431U)
#  endif

#  ifndef NTCNR_0X1B0
#   define NTCNR_0X1B0 (432U)
#  endif

#  ifndef NTCNR_0X1B1
#   define NTCNR_0X1B1 (433U)
#  endif

#  ifndef NTCNR_0X1B2
#   define NTCNR_0X1B2 (434U)
#  endif

#  ifndef NTCNR_0X1B3
#   define NTCNR_0X1B3 (435U)
#  endif

#  ifndef NTCNR_0X1B4
#   define NTCNR_0X1B4 (436U)
#  endif

#  ifndef NTCNR_0X1B5
#   define NTCNR_0X1B5 (437U)
#  endif

#  ifndef NTCNR_0X1B6
#   define NTCNR_0X1B6 (438U)
#  endif

#  ifndef NTCNR_0X1B7
#   define NTCNR_0X1B7 (439U)
#  endif

#  ifndef NTCNR_0X1B8
#   define NTCNR_0X1B8 (440U)
#  endif

#  ifndef NTCNR_0X1B9
#   define NTCNR_0X1B9 (441U)
#  endif

#  ifndef NTCNR_0X1BA
#   define NTCNR_0X1BA (442U)
#  endif

#  ifndef NTCNR_0X1BB
#   define NTCNR_0X1BB (443U)
#  endif

#  ifndef NTCNR_0X1BC
#   define NTCNR_0X1BC (444U)
#  endif

#  ifndef NTCNR_0X1BD
#   define NTCNR_0X1BD (445U)
#  endif

#  ifndef NTCNR_0X1BE
#   define NTCNR_0X1BE (446U)
#  endif

#  ifndef NTCNR_0X1BF
#   define NTCNR_0X1BF (447U)
#  endif

#  ifndef NTCNR_0X1C0
#   define NTCNR_0X1C0 (448U)
#  endif

#  ifndef NTCNR_0X1C1
#   define NTCNR_0X1C1 (449U)
#  endif

#  ifndef NTCNR_0X1C2
#   define NTCNR_0X1C2 (450U)
#  endif

#  ifndef NTCNR_0X1C3
#   define NTCNR_0X1C3 (451U)
#  endif

#  ifndef NTCNR_0X1C4
#   define NTCNR_0X1C4 (452U)
#  endif

#  ifndef NTCNR_0X1C5
#   define NTCNR_0X1C5 (453U)
#  endif

#  ifndef NTCNR_0X1C6
#   define NTCNR_0X1C6 (454U)
#  endif

#  ifndef NTCNR_0X1C7
#   define NTCNR_0X1C7 (455U)
#  endif

#  ifndef NTCNR_0X1C8
#   define NTCNR_0X1C8 (456U)
#  endif

#  ifndef NTCNR_0X1C9
#   define NTCNR_0X1C9 (457U)
#  endif

#  ifndef NTCNR_0X1CA
#   define NTCNR_0X1CA (458U)
#  endif

#  ifndef NTCNR_0X1CB
#   define NTCNR_0X1CB (459U)
#  endif

#  ifndef NTCNR_0X1CC
#   define NTCNR_0X1CC (460U)
#  endif

#  ifndef NTCNR_0X1CD
#   define NTCNR_0X1CD (461U)
#  endif

#  ifndef NTCNR_0X1CE
#   define NTCNR_0X1CE (462U)
#  endif

#  ifndef NTCNR_0X1CF
#   define NTCNR_0X1CF (463U)
#  endif

#  ifndef NTCNR_0X1D0
#   define NTCNR_0X1D0 (464U)
#  endif

#  ifndef NTCNR_0X1D1
#   define NTCNR_0X1D1 (465U)
#  endif

#  ifndef NTCNR_0X1D2
#   define NTCNR_0X1D2 (466U)
#  endif

#  ifndef NTCNR_0X1D3
#   define NTCNR_0X1D3 (467U)
#  endif

#  ifndef NTCNR_0X1D4
#   define NTCNR_0X1D4 (468U)
#  endif

#  ifndef NTCNR_0X1D5
#   define NTCNR_0X1D5 (469U)
#  endif

#  ifndef NTCNR_0X1D6
#   define NTCNR_0X1D6 (470U)
#  endif

#  ifndef NTCNR_0X1D7
#   define NTCNR_0X1D7 (471U)
#  endif

#  ifndef NTCNR_0X1D8
#   define NTCNR_0X1D8 (472U)
#  endif

#  ifndef NTCNR_0X1D9
#   define NTCNR_0X1D9 (473U)
#  endif

#  ifndef NTCNR_0X1DA
#   define NTCNR_0X1DA (474U)
#  endif

#  ifndef NTCNR_0X1DB
#   define NTCNR_0X1DB (475U)
#  endif

#  ifndef NTCNR_0X1DC
#   define NTCNR_0X1DC (476U)
#  endif

#  ifndef NTCNR_0X1DD
#   define NTCNR_0X1DD (477U)
#  endif

#  ifndef NTCNR_0X1DE
#   define NTCNR_0X1DE (478U)
#  endif

#  ifndef NTCNR_0X1DF
#   define NTCNR_0X1DF (479U)
#  endif

#  ifndef NTCNR_0X1E0
#   define NTCNR_0X1E0 (480U)
#  endif

#  ifndef NTCNR_0X1E1
#   define NTCNR_0X1E1 (481U)
#  endif

#  ifndef NTCNR_0X1E2
#   define NTCNR_0X1E2 (482U)
#  endif

#  ifndef NTCNR_0X1E3
#   define NTCNR_0X1E3 (483U)
#  endif

#  ifndef NTCNR_0X1E4
#   define NTCNR_0X1E4 (484U)
#  endif

#  ifndef NTCNR_0X1E5
#   define NTCNR_0X1E5 (485U)
#  endif

#  ifndef NTCNR_0X1E6
#   define NTCNR_0X1E6 (486U)
#  endif

#  ifndef NTCNR_0X1E7
#   define NTCNR_0X1E7 (487U)
#  endif

#  ifndef NTCNR_0X1E8
#   define NTCNR_0X1E8 (488U)
#  endif

#  ifndef NTCNR_0X1E9
#   define NTCNR_0X1E9 (489U)
#  endif

#  ifndef NTCNR_0X1EA
#   define NTCNR_0X1EA (490U)
#  endif

#  ifndef NTCNR_0X1EB
#   define NTCNR_0X1EB (491U)
#  endif

#  ifndef NTCNR_0X1EC
#   define NTCNR_0X1EC (492U)
#  endif

#  ifndef NTCNR_0X1ED
#   define NTCNR_0X1ED (493U)
#  endif

#  ifndef NTCNR_0X1EE
#   define NTCNR_0X1EE (494U)
#  endif

#  ifndef NTCNR_0X1EF
#   define NTCNR_0X1EF (495U)
#  endif

#  ifndef NTCNR_0X1F0
#   define NTCNR_0X1F0 (496U)
#  endif

#  ifndef NTCNR_0X1F1
#   define NTCNR_0X1F1 (497U)
#  endif

#  ifndef NTCNR_0X1F2
#   define NTCNR_0X1F2 (498U)
#  endif

#  ifndef NTCNR_0X1F3
#   define NTCNR_0X1F3 (499U)
#  endif

#  ifndef NTCNR_0X1F4
#   define NTCNR_0X1F4 (500U)
#  endif

#  ifndef NTCNR_0X1F5
#   define NTCNR_0X1F5 (501U)
#  endif

#  ifndef NTCNR_0X1F6
#   define NTCNR_0X1F6 (502U)
#  endif

#  ifndef NTCNR_0X1F7
#   define NTCNR_0X1F7 (503U)
#  endif

#  ifndef NTCNR_0X1F8
#   define NTCNR_0X1F8 (504U)
#  endif

#  ifndef NTCNR_0X1F9
#   define NTCNR_0X1F9 (505U)
#  endif

#  ifndef NTCNR_0X1FA
#   define NTCNR_0X1FA (506U)
#  endif

#  ifndef NTCNR_0X1FB
#   define NTCNR_0X1FB (507U)
#  endif

#  ifndef NTCNR_0X1FC
#   define NTCNR_0X1FC (508U)
#  endif

#  ifndef NTCNR_0X1FD
#   define NTCNR_0X1FD (509U)
#  endif

#  ifndef NTCNR_0X1FE
#   define NTCNR_0X1FE (510U)
#  endif

#  ifndef NTCNR_0X1FF
#   define NTCNR_0X1FF (511U)
#  endif

#  ifndef NTCSTS_PASSD
#   define NTCSTS_PASSD (0U)
#  endif

#  ifndef NTCSTS_FAILD
#   define NTCSTS_FAILD (1U)
#  endif

#  ifndef NTCSTS_PREPASSD
#   define NTCSTS_PREPASSD (2U)
#  endif

#  ifndef NTCSTS_PREFAILD
#   define NTCSTS_PREFAILD (3U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG41EBUSHISPD_TYPE_H */
