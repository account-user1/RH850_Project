

/* From xcp_cfg.h */
#define kXcpMaxSegment 3U
#define kXcpMaxPages   2U

/* From xcpProf.h */
#define CAL_ECU 1U
#define CAL_XCP 2U

#define XCP_CMD_OK                  1
#define XCP_CMD_SYNTAX              3
#define CRC_OUT_OF_RANGE        0x22


#define CRC_PAGE_MODE_NOT_VALID 0x27
#define CRC_SEGMENT_NOT_VALID   0x28

/* From Rte_Type.h */
typedef P2CONST(void, TYPEDEF, RTE_CONST) Rte_ParameterRefType;
typedef Rte_ParameterRefType Rte_ParameterRefTabType[36];
typedef P2CONST(Rte_ParameterRefType, TYPEDEF, RTE_CONST) Rte_ParameterBaseType;
extern VAR(Rte_ParameterBaseType, RTE_VAR_NOINIT) RteParameterBase;

/* From CDD_XcpIf.h */
#define XCPIF_FLSPAGE_CNT_U08   0U
#define XCPIF_RAMPAGE_CNT_U08   1U

#define XCPIF_MAXCALSEG_CNT_U08         kXcpMaxSegment
#define XCPIF_MAXCALPAGE_CNT_U08        kXcpMaxPages
#define XCPIF_ONLINECALNOACS_CNT_U08        0U
#define XCPIF_ONLINECALECUACS_CNT_U08       CAL_ECU
#define XCPIF_ONLINECALXCPACS_CNT_U08       CAL_XCP
#define XCPIF_ONLINECALXCPANDECUACS_CNT_U08 (CAL_XCP | CAL_ECU)
/* XCP Error Abstraction */
#define XCPIF_XCPCMDOK_CNT_U08          XCP_CMD_OK
#define XCPIF_XCPCMDSYNTAX_CNT_U08      XCP_CMD_SYNTAX

#define XCPIF_CRCPAGEMODNOTVLD_CNT_U08  CRC_PAGE_MODE_NOT_VALID
#define XCPIF_SEGNOTVLD_CNT_U08         CRC_SEGMENT_NOT_VALID
#define XCPIF_OUTOFRNG_CNT_U08          CRC_OUT_OF_RANGE
#define XCPIF_MAXFLSADR_CNT_U32         0x001FFFFFUL
