#ifndef __V800_FPSIMD_H
#define __V800_FPSIMD_H

#ifdef __cplusplus
extern "C" {
#endif

typedef __ev128_f32__ fpvec_typ;	/* type for fp vector */
typedef __ev256_f32__ fpvec_pair_typ;	/* type for a pair of fp vector */


/* ABSF.Sn wreg2, wreg3 */
fpvec_typ __ev128_absfsn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_absfs(x)	__ev128_absfsn(4, x)
#define __ev128_absfs_4(x)	__ev128_absfsn(4, x)
#define __ev128_absfs_2(x)	__ev128_absfsn(2, x)
#define __ev128_absfs_1(x)	__ev128_absfsn(1, x)

/* ADDF.sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_addfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_addfs(x, y)	__ev128_addfsn(4, x, y)
#define __ev128_addfs_4(x, y)	__ev128_addfsn(4, x, y)
#define __ev128_addfs_2(x, y)	__ev128_addfsn(2, x, y)
#define __ev128_addfs_1(x, y)	__ev128_addfsn(1, x, y)

/* ADDRF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_addrfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_addrfs(x, y)	__ev128_addrfsn(4, x, y)
#define __ev128_addrfs_4(x, y)	__ev128_addrfsn(4, x, y)
#define __ev128_addrfs_2(x, y)	__ev128_addrfsn(2, x, y)

/* ADDSUBF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_addsubfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_addsubfs(x, y) __ev128_addsubfsn(4, x, y)
#define __ev128_addsubfs_4(x, y) __ev128_addsubfsn(4, x, y)
#define __ev128_addsubfs_2(x, y) __ev128_addsubfsn(2, x, y)

/* ADDSUBNF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_addsubnfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_addsubnfs(x, y) __ev128_addsubnfsn(4, x, y)
#define __ev128_addsubnfs_4(x, y) __ev128_addsubnfsn(4, x, y)
#define __ev128_addsubnfs_2(x, y) __ev128_addsubnfsn(2, x, y)

/* ADDSUBNXF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_addsubnxfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_addsubnxfs(x, y) __ev128_addsubnxfsn(4, x, y)
#define __ev128_addsubnxfs_4(x, y) __ev128_addsubnxfsn(4, x, y)
#define __ev128_addsubnxfs_2(x, y) __ev128_addsubnxfsn(2, x, y)

/* ADDSUBXF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_addsubxfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_addsubxfs(x, y) __ev128_addsubxfsn(4, x, y)
#define __ev128_addsubxfs_4(x, y) __ev128_addsubxfsn(4, x, y)
#define __ev128_addsubxfs_2(x, y) __ev128_addsubxfsn(2, x, y)

/* ADDXF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_addxfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_addxfs(x, y) __ev128_addxfsn(4, x, y)
#define __ev128_addxfs_4(x, y) __ev128_addxfsn(4, x, y)
#define __ev128_addxfs_2(x, y) __ev128_addxfsn(2, x, y)

/* CEILF.SUWn wreg2, wreg3 */
fpvec_typ __ev128_ceilfsuwn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_ceilfsuw(x)	__ev128_ceilfsuwn(4, x)
#define __ev128_ceilfsuw_4(x)	__ev128_ceilfsuwn(4, x)
#define __ev128_ceilfsuw_2(x)	__ev128_ceilfsuwn(2, x)
#define __ev128_ceilfsuw_1(x)	__ev128_ceilfsuwn(1, x)

/* CEILF.SWn wreg2, wreg3 */
fpvec_typ __ev128_ceilfswn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_ceilfsw(x)	__ev128_ceilfswn(4, x)
#define __ev128_ceilfsw_4(x)	__ev128_ceilfswn(4, x)
#define __ev128_ceilfsw_2(x)	__ev128_ceilfswn(2, x)
#define __ev128_ceilfsw_1(x)	__ev128_ceilfswn(1, x)

/* CMOV.Wn wreg4, wreg1, wreg2, wreg3 */
fpvec_typ __ev128_cmovwn(__ghs_c_int__ n, fpvec_typ wreg4, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_cmovw(x, y, z) __ev128_cmovwn(4, x, y, z)
#define __ev128_cmovw_4(x, y, z) __ev128_cmovwn(4, x, y, z)
#define __ev128_cmovw_2(x, y, z) __ev128_cmovwn(2, x, y, z)
#define __ev128_cmovw_1(x, y, z) __ev128_cmovwn(1, x, y, z)

/* CMPF.Sn fcond, wreg1, wreg2, wreg3 */
fpvec_typ __ev128_cmpfsn(__ghs_c_int__ n, __ghs_c_int__ fcond, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_cmpfs(fcond, vec1, vec2)	__ev128_cmpfsn(4, fcond, vec1, vec2)
#define __ev128_cmpfs_4(fcond, vec1, vec2)	__ev128_cmpfsn(4, fcond, vec1, vec2)
#define __ev128_cmpfs_2(fcond, vec1, vec2)	__ev128_cmpfsn(2, fcond, vec1, vec2)
#define __ev128_cmpfs_1(fcond, vec1, vec2)	__ev128_cmpfsn(1, fcond, vec1, vec2)


/* CVTF.HSn wreg2, wreg3 */
fpvec_typ __ev128_cvtfhsn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_cvtfhs(x) 	__ev128_cvtfhsn(4, x)
#define __ev128_cvtfhs_4(x) 	__ev128_cvtfhsn(4, x)
#define __ev128_cvtfhs_2(x) 	__ev128_cvtfhsn(2, x)
#define __ev128_cvtfhs_1(x) 	__ev128_cvtfhsn(1, x)

/* CVTF.SHn wreg2, wreg3 */
fpvec_typ __ev128_cvtfshn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_cvtfsh(x) 	__ev128_cvtfshn(4, x)
#define __ev128_cvtfsh_4(x) 	__ev128_cvtfshn(4, x)
#define __ev128_cvtfsh_2(x) 	__ev128_cvtfshn(2, x)
#define __ev128_cvtfsh_1(x) 	__ev128_cvtfshn(1, x)

/* CVTF.SUWn wreg2, wreg3 */
fpvec_typ __ev128_cvtfsuwn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_cvtfsuw(x) 	__ev128_cvtfsuwn(4, x)
#define __ev128_cvtfsuw_4(x) 	__ev128_cvtfsuwn(4, x)
#define __ev128_cvtfsuw_2(x) 	__ev128_cvtfsuwn(2, x)
#define __ev128_cvtfsuw_1(x) 	__ev128_cvtfsuwn(1, x)

/* CVTF.SWn wreg2, wreg3 */
fpvec_typ __ev128_cvtfswn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_cvtfsw(x) 	__ev128_cvtfswn(4, x)
#define __ev128_cvtfsw_4(x) 	__ev128_cvtfswn(4, x)
#define __ev128_cvtfsw_2(x) 	__ev128_cvtfswn(2, x)
#define __ev128_cvtfsw_1(x) 	__ev128_cvtfswn(1, x)

/* CVTF.UWSn wreg2, wreg3 */
fpvec_typ __ev128_cvtfuwsn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_cvtfuws(x) 	__ev128_cvtfuwsn(4, x)
#define __ev128_cvtfuws_4(x) 	__ev128_cvtfuwsn(4, x)
#define __ev128_cvtfuws_2(x) 	__ev128_cvtfuwsn(2, x)
#define __ev128_cvtfuws_1(x) 	__ev128_cvtfuwsn(1, x)

/* CVTF.WSn wreg2, wreg3 */
fpvec_typ __ev128_cvtfwsn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_cvtfws(x) 	__ev128_cvtfwsn(4, x)
#define __ev128_cvtfws_4(x) 	__ev128_cvtfwsn(4, x)
#define __ev128_cvtfws_2(x) 	__ev128_cvtfwsn(2, x)
#define __ev128_cvtfws_1(x) 	__ev128_cvtfwsn(1, x)

/* DIVF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_divfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_divfs(x, y)	__ev128_divfsn(4, x, y)
#define __ev128_divfs_4(x, y)	__ev128_divfsn(4, x, y)
#define __ev128_divfs_2(x, y)	__ev128_divfsn(2, x, y)
#define __ev128_divfs_1(x, y)	__ev128_divfsn(1, x, y)

/* FLOORF.SUWn wreg2, wreg3 */
fpvec_typ __ev128_floorfsuwn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_floorfsuw(x) 	__ev128_floorfsuwn(4, x)
#define __ev128_floorfsuw_4(x) 	__ev128_floorfsuwn(4, x)
#define __ev128_floorfsuw_2(x) 	__ev128_floorfsuwn(2, x)
#define __ev128_floorfsuw_1(x) 	__ev128_floorfsuwn(1, x)

/* FLOORF.SWn wreg2, wreg3 */
fpvec_typ __ev128_floorfswn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_floorfsw(x) 	__ev128_floorfswn(4, x)
#define __ev128_floorfsw_4(x) 	__ev128_floorfswn(4, x)
#define __ev128_floorfsw_2(x) 	__ev128_floorfswn(2, x)
#define __ev128_floorfsw_1(x) 	__ev128_floorfswn(1, x)

/* FLPV.Sn imm2, wreg2, wreg3 */
fpvec_typ __ev128_flpvsn(__ghs_c_int__ n, __ghs_c_int__ imm2, fpvec_typ wreg2);
#define __ev128_flpvs(x, y)	__ev128_flpvsn(4, x, y)
#define __ev128_flpvs_4(x, y)	__ev128_flpvsn(4, x, y)
#define __ev128_flpvs_2(x, y)	__ev128_flpvsn(2, x, y)

/* FMAF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_fmafsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2, fpvec_typ wreg3);
#define __ev128_fmafs(x, y, z)  __ev128_fmafsn(4, x, y, z)
#define __ev128_fmafs_4(x, y, z)  __ev128_fmafsn(4, x, y, z)
#define __ev128_fmafs_2(x, y, z)  __ev128_fmafsn(2, x, y, z)
#define __ev128_fmafs_1(x, y, z)  __ev128_fmafsn(1, x, y, z)

/* FMSF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_fmsfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2, fpvec_typ wreg3);
#define __ev128_fmsfs(x, y, z)  __ev128_fmsfsn(4, x, y, z)
#define __ev128_fmsfs_4(x, y, z)  __ev128_fmsfsn(4, x, y, z)
#define __ev128_fmsfs_2(x, y, z)  __ev128_fmsfsn(2, x, y, z)
#define __ev128_fmsfs_1(x, y, z)  __ev128_fmsfsn(1, x, y, z)

/* FNMAF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_fnmafsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2, fpvec_typ wreg3);
#define __ev128_fnmafs(x, y, z)  __ev128_fnmafsn(4, x, y, z)
#define __ev128_fnmafs_4(x, y, z)  __ev128_fnmafsn(4, x, y, z)
#define __ev128_fnmafs_2(x, y, z)  __ev128_fnmafsn(2, x, y, z)
#define __ev128_fnmafs_1(x, y, z)  __ev128_fnmafsn(1, x, y, z)

/* FNMSF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_fnmsfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2, fpvec_typ wreg3);
#define __ev128_fnmsfs(x, y, z)  __ev128_fnmsfsn(4, x, y, z)
#define __ev128_fnmsfs_4(x, y, z)  __ev128_fnmsfsn(4, x, y, z)
#define __ev128_fnmsfs_2(x, y, z)  __ev128_fnmsfsn(2, x, y, z)
#define __ev128_fnmsfs_1(x, y, z)  __ev128_fnmsfsn(1, x, y, z)

/* LDV.W imm2, reg2[reg1], wreg3 */
/* LDV.W imm2, disp16[reg1], wreg3 */
/* LDV.W imm2, [reg1]+, wreg3 */
/* LDV.W imm2, [reg1]-, wreg3 */
fpvec_typ __ev128_ldvw(__ghs_c_int__ imm2, void *ptr, fpvec_typ wreg3);

/* LDV.DW imm1, reg2[reg1], wreg3 */
/* LDV.DW imm1, disp16[reg1], wreg3 */
/* LDV.DW imm1, [reg1]+, wreg3 */
/* LDV.DW imm1, [reg1]-, wreg3 */
fpvec_typ __ev128_ldvdw(__ghs_c_int__ imm1, void *ptr, fpvec_typ wreg3);


/* LDV.QW reg2[reg1], wreg3 */
/* LDV.QW disp16[reg1], wreg3 */
/* LDV.QW [reg1]+, wreg3 */
/* LDV.QW [reg1]-, wreg3 */
fpvec_typ __ev128_ldvqw(void *ptr);

/* LDVGTR2.W reg1, reg2, wreg3 */
fpvec_typ __ev128_ldvgtr2w(void *ptr, int index);
/* LDVGTR4.W reg1, reg2, wreg3 */
fpvec_typ __ev128_ldvgtr4w(void *ptr, int index);	
/* LDVPGTR2.W reg1, reg2, wreg3/wreg3+1 */
fpvec_pair_typ __ev128_ldvpgtr2w(void *ptr, int index);
/* LDVPGTR4.w reg1, reg2, wreg3/wreg3+1 */
fpvec_pair_typ __ev128_ldvpgtr4w(void *ptr, int index);

/* LDVZ.Hn reg2[reg1], wreg3 */
/* LDVZ.Hn disp16[reg1], wreg3 */
fpvec_typ __ev128_ldvzhn(__ghs_c_int__ n, void *ptr);
#define __ev128_ldvzh(x)	__ev128_ldvzhn(4, x)
#define __ev128_ldvzh_4(x)	__ev128_ldvzhn(4, x)
#define __ev128_ldvzh_2(x)	__ev128_ldvzhn(2, x)
#define __ev128_ldvzh_1(x)	__ev128_ldvzhn(1, x)

/* MAXF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_maxfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_maxfs(x, y)	__ev128_maxfsn(4, x, y)
#define __ev128_maxfs_4(x, y)	__ev128_maxfsn(4, x, y)
#define __ev128_maxfs_2(x, y)	__ev128_maxfsn(2, x, y)
#define __ev128_maxfs_1(x, y)	__ev128_maxfsn(1, x, y)

/* MAXRF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_maxrfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_maxrfs(x, y)	__ev128_maxrfsn(4, x, y)
#define __ev128_maxrfs_4(x, y)	__ev128_maxrfsn(4, x, y)
#define __ev128_maxrfs_2(x, y)	__ev128_maxrfsn(2, x, y)


/* MINF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_minfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_minfs(x, y)	__ev128_minfsn(4, x, y)
#define __ev128_minfs_4(x, y)	__ev128_minfsn(4, x, y)
#define __ev128_minfs_2(x, y)	__ev128_minfsn(2, x, y)
#define __ev128_minfs_1(x, y)	__ev128_minfsn(1, x, y)

/* MINRF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_minrfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_minrfs(x, y)	__ev128_minrfsn(4, x, y)
#define __ev128_minrfs_4(x, y)	__ev128_minrfsn(4, x, y)
#define __ev128_minrfs_2(x, y)	__ev128_minrfsn(2, x, y)

/* If 'f' is in register, this generates MOVGV.w imm4, reg2, wreg3 */
/* If 'f' is an float immediate, this generates MOVVI imm4, imm32, wreg1*/
fpvec_typ __ev128_movgvw(__ghs_c_int__ imm4/*mask*/, float f, 
			fpvec_typ wreg3);

/* Move from Vector to GPR: MOVVG.W imm2, wreg2, reg3 */
float __ev128_movvgw(__ghs_c_int__ imm2, fpvec_typ wreg2);

/* Move from Vector to Vector: MOVV.Wn wreg2, wreg3 */
fpvec_typ __ev128_movvwn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_movv(x)		__ev128_movvwn(4, x)
#define __ev128_movvw_4(x)	__ev128_movvwn(4, x)
#define __ev128_movvw_2(x)	__ev128_movvwn(2, x)


/* MULF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_mulfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_mulfs(x, y)	__ev128_mulfsn(4, x, y)
#define __ev128_mulfs_4(x, y)	__ev128_mulfsn(4, x, y)
#define __ev128_mulfs_2(x, y)	__ev128_mulfsn(2, x, y)
#define __ev128_mulfs_1(x, y)	__ev128_mulfsn(1, x, y)

/* MULRF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_mulrfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_mulrfs(x, y)	__ev128_mulrfsn(4, x, y)
#define __ev128_mulrfs_4(x, y)	__ev128_mulrfsn(4, x, y)
#define __ev128_mulrfs_2(x, y)	__ev128_mulrfsn(2, x, y)

/* MULXF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_mulxfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_mulxfs(x, y)	__ev128_mulxfsn(4, x, y)
#define __ev128_mulxfs_4(x, y)	__ev128_mulxfsn(4, x, y)
#define __ev128_mulxfs_2(x, y)	__ev128_mulxfsn(2, x, y)

/* NEGF.Sn wreg2, wreg3 */
fpvec_typ __ev128_negfsn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_negfs(x)	__ev128_negfsn(4, x)
#define __ev128_negfs_4(x)	__ev128_negfsn(4, x)
#define __ev128_negfs_2(x)	__ev128_negfsn(2, x)
#define __ev128_negfs_1(x)	__ev128_negfsn(1, x)

/* RECIPF.Sn wreg2, wreg3 */
fpvec_typ __ev128_recipfsn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_recipfs(x)	__ev128_recipfsn(4, x)
#define __ev128_recipfs_4(x)	__ev128_recipfsn(4, x)
#define __ev128_recipfs_2(x)	__ev128_recipfsn(2, x)
#define __ev128_recipfs_1(x)	__ev128_recipfsn(1, x)

/* ROUNDF.SUWn wreg2, wreg3 */
fpvec_typ __ev128_roundfsuwn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_roundfsuw(x)	__ev128_roundfsuwn(4, x)
#define __ev128_roundfsuw_4(x)	__ev128_roundfsuwn(4, x)
#define __ev128_roundfsuw_2(x)	__ev128_roundfsuwn(2, x)
#define __ev128_roundfsuw_1(x)	__ev128_roundfsuwn(1, x)

/* ROUNDF.SWn wreg2, wreg3 */
fpvec_typ __ev128_roundfswn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_roundfsw(x)	__ev128_roundfswn(4, x)
#define __ev128_roundfsw_4(x)	__ev128_roundfswn(4, x)
#define __ev128_roundfsw_2(x)	__ev128_roundfswn(2, x)
#define __ev128_roundfsw_1(x)	__ev128_roundfswn(1, x)

/* RSQRTF.Sn wreg2, wreg3 */
fpvec_typ __ev128_rsqrtfsn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_rsqrtfs(x)	__ev128_rsqrtfsn(4, x)
#define __ev128_rsqrtfs_4(x)	__ev128_rsqrtfsn(4, x)
#define __ev128_rsqrtfs_2(x)	__ev128_rsqrtfsn(2, x)
#define __ev128_rsqrtfs_1(x)	__ev128_rsqrtfsn(1, x)

/* SHFLV.Wn imm4, wreg1, wreg2, wreg3 */
/* SHFLV.Wn imm12, wreg2, wreg2, wreg3 */
fpvec_typ __ev128_shflvwn(__ghs_c_int__ n, __ghs_c_int__ imm, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_shflvw(x, y, z) __ev128_shflvwn(4, x, y, z)
#define __ev128_shflvw_4(x, y, z) __ev128_shflvwn(4, x, y, z)
#define __ev128_shflvw_2(x, y, z) __ev128_shflvwn(2, x, y, z)

/* SQRTF.Sn wreg2, wreg3 */
fpvec_typ __ev128_sqrtfsn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_sqrtfs(x)	__ev128_sqrtfsn(4, x)
#define __ev128_sqrtfs_4(x)	__ev128_sqrtfsn(4, x)
#define __ev128_sqrtfs_2(x)	__ev128_sqrtfsn(2, x)
#define __ev128_sqrtfs_1(x)	__ev128_sqrtfsn(1, x)

/* STV.DW imm1, wreg3, reg2[reg1] */
/* STV.DW imm1, wreg3, disp16[reg1] */
/* STV.DW imm1, wreg3, [reg1]+ */
/* STV.DW imm1, wreg3, [reg1]- */
void __ev128_stvdw(__ghs_c_int__ imm1, fpvec_typ wreg3, void *ptr);

/* STV.QW wreg3, reg2[reg1] */
/* STV.QW wreg2, disp16[reg1] */
/* STV.QW wreg3, [reg1]+ */
/* STV.QW wreg3, [reg1]- */
void __ev128_stvqw(fpvec_typ wreg3, void *ptr);

/* STV.W imm2, wreg3, reg2[reg1] */
/* STV.W imm2, wreg2, disp16[reg1] */
/* STV.W imm2, wreg3, [reg1]+ */
/* STV.W imm2, wreg3, [reg1]- */
void __ev128_stvw(__ghs_c_int__ imm2, fpvec_typ wreg3, void *ptr);

/* STVPSCT2.W wreg3, reg1, reg2 */
void __ev128_stvpsct2w(fpvec_pair_typ wreg3, void *ptr, int index);
/* STVPSCT4.W wreg3, reg1, reg2 */
void __ev128_stvpsct4w(fpvec_pair_typ wreg3, void *ptr, int index);
/* STVSCT2.W wreg3, reg1, reg2 */
void __ev128_stvsct2w(fpvec_typ wreg3, void *ptr, int index);
/* STVSCT4.W wreg3, reg1, reg2 */
void __ev128_stvsct4w(fpvec_typ wreg3, void *ptr, int index);

/* STVZ.Hn wreg3, reg2[reg1] */
/* STVZ.Hn wreg2, disp16[reg1] */
void __ev128_stvzhn(__ghs_c_int__ n, fpvec_typ wreg3, void *ptr);
#define __ev128_stvzh(wreg3, ptr)	__ev128_stvzhn(4, wreg3, ptr)
#define __ev128_stvzh_4(wreg3, ptr)	__ev128_stvzhn(4, wreg3, ptr)
#define __ev128_stvzh_2(wreg3, ptr)	__ev128_stvzhn(2, wreg3, ptr)
#define __ev128_stvzh_1(wreg3, ptr)	__ev128_stvzhn(1, wreg3, ptr)

/* SUBADDF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_subaddfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_subaddfs(x, y)	__ev128_subaddfsn(4, x, y)
#define __ev128_subaddfs_4(x, y)	__ev128_subaddfsn(4, x, y)
#define __ev128_subaddfs_2(x, y)	__ev128_subaddfsn(2, x, y)

/* SUBADDNF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_subaddnfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_subaddnfs(x, y)	__ev128_subaddnfsn(4, x, y)
#define __ev128_subaddnfs_4(x, y)	__ev128_subaddnfsn(4, x, y)
#define __ev128_subaddnfs_2(x, y)	__ev128_subaddnfsn(2, x, y)

/* SUBADDNXF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_subaddnxfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_subaddnxfs(x, y)	__ev128_subaddnxfsn(4, x, y)
#define __ev128_subaddnxfs_4(x, y)	__ev128_subaddnxfsn(4, x, y)
#define __ev128_subaddnxfs_2(x, y)	__ev128_subaddnxfsn(2, x, y)

/* SUBADDXF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_subaddxfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_subaddxfs(x, y)	__ev128_subaddxfsn(4, x, y)
#define __ev128_subaddxfs_4(x, y)	__ev128_subaddxfsn(4, x, y)
#define __ev128_subaddxfs_2(x, y)	__ev128_subaddxfsn(2, x, y)

/* SUBF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_subfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_subfs(x, y)	__ev128_subfsn(4, x, y)
#define __ev128_subfs_4(x, y)	__ev128_subfsn(4, x, y)
#define __ev128_subfs_2(x, y)	__ev128_subfsn(2, x, y)
#define __ev128_subfs_1(x, y)	__ev128_subfsn(1, x, y)

/* SUBRF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_subrfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_subrfs(x, y)	__ev128_subrfsn(4, x, y)
#define __ev128_subrfs_4(x, y)	__ev128_subrfsn(4, x, y)
#define __ev128_subrfs_2(x, y)	__ev128_subrfsn(2, x, y)

/* SUBXF.Sn wreg1, wreg2, wreg3 */
fpvec_typ __ev128_subxfsn(__ghs_c_int__ n, fpvec_typ wreg1, fpvec_typ wreg2);
#define __ev128_subxfs(x, y)	__ev128_subxfsn(4, x, y)
#define __ev128_subxfs_4(x, y)	__ev128_subxfsn(4, x, y)
#define __ev128_subxfs_2(x, y)	__ev128_subxfsn(2, x, y)

/* TRNCF.SUWn wreg2, wreg3 */
fpvec_typ __ev128_trncfsuwn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_trncfsuw(x)	__ev128_trncfsuwn(4, x)
#define __ev128_trncfsuw_4(x)	__ev128_trncfsuwn(4, x)
#define __ev128_trncfsuw_2(x)	__ev128_trncfsuwn(2, x)
#define __ev128_trncfsuw_1(x)	__ev128_trncfsuwn(1, x)

/* TRNCF.SWn wreg2, wreg3 */
fpvec_typ __ev128_trncfswn(__ghs_c_int__ n, fpvec_typ wreg2);
#define __ev128_trncfsw(x)	__ev128_trncfswn(4, x)
#define __ev128_trncfsw_4(x)	__ev128_trncfswn(4, x)
#define __ev128_trncfsw_2(x)	__ev128_trncfswn(2, x)
#define __ev128_trncfsw_1(x)	__ev128_trncfswn(1, x)

/* TRFSRV.Wn imm2, wreg2 */
/* Note: This intrinsic is not an exact 1-on-1 mapping to the trfsrv.wn 
 * instruction. In addition to generating the trfsrv.wn instruction to transfer
 * the specified vector to PSW.Z,  it also generates 'stsr' to extract and
 * return the PSW.Z flag. 
 */
unsigned int __ev128_trfsrvwn(__ghs_c_int__ n, __ghs_c_int__ imm2, fpvec_typ wreg2);
#define __ev128_trfsrvw_2_0(x)		__ev128_trfsrvwn(2, 0, x)
#define __ev128_trfsrvw_2_1(x)		__ev128_trfsrvwn(2, 1, x)
#define __ev128_trfsrvw_2_all(x)	__ev128_trfsrvwn(2, 2, x)
#define __ev128_trfsrvw_2_any(x)	__ev128_trfsrvwn(2, 3, x)
#define __ev128_trfsrvw_4_0(x)		__ev128_trfsrvwn(4, 0, x)
#define __ev128_trfsrvw_4_1(x)		__ev128_trfsrvwn(4, 1, x)
#define __ev128_trfsrvw_4_2(x)		__ev128_trfsrvwn(4, 2, x)
#define __ev128_trfsrvw_4_3(x)		__ev128_trfsrvwn(4, 3, x)
#define __ev128_trfsrvw_4_all(x)	__ev128_trfsrvwn(4, 4, x)
#define __ev128_trfsrvw_4_any(x)	__ev128_trfsrvwn(4, 5, x)


/* create 4-way fp vector with four floats */
fpvec_typ __ev128_create_f32_4(float e0, float e1, float e2, float e3);
/* create fp vector with four integers */
fpvec_typ __ev128_create_u32_4(unsigned int e0, unsigned int e1, unsigned int e2, unsigned int e3);

/* create 2-way fp vector with two floats */
fpvec_typ __ev128_create_f32_2(float e0, float e1);
/* create 2-way fp vector with two integers */
fpvec_typ __ev128_create_u32_2(unsigned int e0, unsigned int e1);

/* create 1-way fp vector with two floats */
fpvec_typ __ev128_create_f32_1(float e0);
/* create 1-way fp vector with two integers */
fpvec_typ __ev128_create_u32_1(unsigned int e0);


/* return the given element in 128-bit vector as single-precision float */
float __ev128_get_f32(fpvec_typ vec, int element_id);
/* return the given element in 128-bit vector as 32-bit unsigned integer */
unsigned int __ev128_get_u32(fpvec_typ vec, int element_id);

/* set the given element in 128-bit vector to the given float */
fpvec_typ __ev128_set_f32(fpvec_typ vec, float element, int element_id);
/* set the given element in 128-bit vector to the given unsigned 32-bit integer */
fpvec_typ __ev128_set_u32(fpvec_typ vec, unsigned int element, int element_id);


/* copy all elements of a 128-bit vector */
#define __ev128_copy(v)			__ev128_movvwn(4, v)
#define __ev128_copy_2(v)		__ev128_movvwn(2, v)
#define __ev128_create_f32(e0, e1, e2, e3)	__ev128_create_f32_4(e0, e1, e2, e3)
#define __ev128_create_u32(e0, e1, e2, e3)	__ev128_create_u32_4(e0, e1, e2, e3)

/* operations on a vector-pair */
fpvec_pair_typ __ev256_create_fv(fpvec_typ v0, fpvec_typ v1);
fpvec_typ __ev256_get_fv(fpvec_pair_typ pair, int element_id);
fpvec_pair_typ __ev256_set_fv(fpvec_pair_typ pair, fpvec_typ v, int element_id);

#ifdef __cplusplus
}
#endif

#endif
