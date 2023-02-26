#ifndef __V800_SIMD_H
#define __V800_SIMD_H

/* These intrinsics require the "long long" type be enabled */
#ifdef __LL_BIT

#ifdef __cplusplus
extern "C" {
#endif

typedef __ev64_opaque__ vec64;
typedef __ev128_opaque__ vec128;


/* CNVQ15Q30   vreg2, vreg3 */
vec64 __ev_cnvq15q30(vec64 vreg2);

/* CNVQ30Q15   vreg2, vreg3 */
vec64 __ev_cnvq30q15(vec64 vreg2, vec64 vreg3);

/* CNVQ31Q62   vreg2, vreg3 */
vec64 __ev_cnvq31q62(vec64 vreg2);

/* CNVQ62Q31   vreg2, vreg3 */
vec64 __ev_cnvq62q31(vec64 vreg2, vec64 vreg3);

vec64 __ev_dup_h(__ghs_c_int__ imm2, vec64 vreg2);

/* DUP.W       imm1, vreg2, vreg3 */
vec64 __ev_dup_w(__ghs_c_int__ imm1, vec64 vreg2);

/* EXPQ31      vreg2, reg3 */
int __ev_expq31(vec64 vreg2);

/* MODADD      reg2 */
int __ev_modadd(long long reg2);
#define __ev_modadd2(lo, hi) __ev_modadd((unsigned int)lo | ((unsigned long long)(unsigned int)hi<<32))

/* MOV.DW      vreg2, reg3 */
long long __ev_mov_dw_vi(vec64 vreg2);

/* MOV.DW      reg2, vreg3 */
vec64 __ev_mov_dw_iv(long long reg2);

/* MOV_H       imm2, vreg2, vreg3 */
vec64 __ev_mov_h(__ghs_c_int__ imm2, vec64 vreg2, vec64 vreg3);

/* MOV_W       imm1, vreg2, vreg3 */
vec64 __ev_mov_w_vv(__ghs_c_int__ imm1, vec64 vreg2, vec64 vreg3);

/* MOV_W       imm1, reg2, vreg3 */
vec64 __ev_mov_w_iv(__ghs_c_int__ imm1, int reg2, vec64 vreg3);

/* MOV_W       imm1, vreg2, reg3 */
int __ev_mov_w_vi(__ghs_c_int__ imm1, vec64 vreg2);

/* PKI16I32    vreg1, vreg2, vreg3 */
vec128 __ev_pki16i32(vec64 vreg1);

vec64 __ev_pki16ui8(vec64 vreg1, vec64 vreg2);

/* PKI32I16    vreg1, vreg2, vreg3 */
vec64 __ev_pki32i16(vec64 vreg1, vec64 vreg2);

/* PKI64I32    vreg1, vreg2, vreg3 */
vec64 __ev_pki64i32(vec64 vreg1, vec64 vreg2);

/* PKQ15Q31    vreg1, vreg2, vreg3 */
vec128 __ev_pkq15q31(vec64 vreg1);

/* PKQ30Q31    vreg1, vreg2, vreg3 */
vec64 __ev_pkq30q31(vec64 vreg1, vec64 vreg2);

/* PKQ31Q15    vreg1, vreg2, vreg3 */
vec64 __ev_pkq31q15(vec64 vreg1, vec64 vreg2);

/* PKUI8I16    vreg1, vreg2, vreg3 */
vec128 __ev_pkui8i16(vec64 vreg1);

/* VABS.H      vreg2, vreg3 */
vec64 __ev_vabs_h(vec64 vreg2);

/* VABS.W      vreg2, vreg3 */
vec64 __ev_vabs_w(vec64 vreg);

/* VADD.DW     vreg1, vreg2, vreg3 */
vec64 __ev_vadd_dw(vec64 vreg1, vec64 vreg2);

/* VADD.H      vreg1, vreg2, vreg3 */
vec64 __ev_vadd_h(vec64 vreg1, vec64 vreg2);

/* VADD.W      vreg1, vreg2, vreg3 */
vec64 __ev_vadd_w(vec64 vreg1, vec64 vreg2);

/* VADDS.H     vreg1, vreg2, vreg3 */
vec64 __ev_vadds_h(vec64 vreg1, vec64 vreg2);

/* VADDS.W     vreg1, vreg2, vreg3 */
vec64 __ev_vadds_w(vec64 vreg1, vec64 vreg2);

/* VADDSAT.H   vreg1, vreg2, vreg3 */
vec64 __ev_vaddsat_h(vec64 vreg1, vec64 vreg2);

/* VADDSAT.W   vreg1, vreg2, vreg3 */
vec64 __ev_vaddsat_w(vec64 vreg1, vec64 vreg2);

/* VAND        vreg1, vreg2, vreg3 */
vec64 __ev_vand(vec64 vreg1, vec64 vreg2);

/* VBIQ.H      vreg1, vreg2, vreg3 */
vec128 __ev_vbiq_h(vec64 vreg1, vec64 vreg2, vec64 vreg3);

/* VBSWAP.DW   vreg2, vreg3 */
vec64 __ev_vbswap_dw(vec64 vreg2);

/* VBSWAP.H    vreg2, vreg3 */
vec64 __ev_vbswap_h(vec64 vreg2);

/* VBSWAP.W    vreg2, vreg3 */
vec64 __ev_vbswap_w(vec64 vreg2);

/* VCALC.H     vreg4, vreg1, vreg2, vreg3 */
vec64 __ev_vcalc_h(vec64 vreg4, vec64 vreg1, vec64 vreg2);

/* VCALC.W     vreg4, vreg1, vreg2, vreg3 */
vec64 __ev_vcalc_w(vec64 reg4, vec64 reg1, vec64 reg2);

/* VCMOV       vreg4, vreg1, vreg2, vreg3 */
vec64 __ev_vcmov(vec64 reg4, vec64 reg1, vec64 reg2);

/* VCMPEQ.H    vreg1, vreg2, vreg3 */
vec64 __ev_vcmpeq_h(vec64 vreg1, vec64 vreg2);

/* VCMPEQ.W    vreg1, vreg2, vreg3 */
vec64 __ev_vcmpeq_w(vec64 vreg1, vec64 vreg2);

/* VCMPNE.H    vreg1, vreg2, vreg3 */
vec64 __ev_vcmpne_h(vec64 vreg1, vec64 vreg2);

/* VCMPNE.W    vreg1, vreg2, vreg3 */
vec64 __ev_vcmpne_w(vec64 vreg1, vec64 vreg2);

/* VCMPLT.H    vreg1, vreg2, vreg3 */
vec64 __ev_vcmplt_h(vec64 vreg1, vec64 vreg2);

/* VCMPLT.W    vreg1, vreg2, vreg3 */
vec64 __ev_vcmplt_w(vec64 vreg1, vec64 vreg2);

/* VCMPLE.H    vreg1, vreg2, vreg3 */
vec64 __ev_vcmple_h(vec64 vreg1, vec64 vreg2);

/* VCMPLE.W    vreg1, vreg2, vreg3 */
vec64 __ev_vcmple_w(vec64 vreg1, vec64 vreg2);

/* VCONCAT.B   reg4, vreg1, vreg2, vreg3 */
vec64 __ev_vconcat_b(int reg4, vec64 vreg1, vec64 vreg2);

/* VITLV.H     vreg2, vreg3 */
vec128 __ev_vitlv_h(vec64 vreg2, vec64 vreg3);

/* VITLV.W     vreg2, vreg3 */
vec128 __ev_vitlv_w(vec64 vreg2, vec64 vreg3);

/* VITLVHW.H   vreg2, vreg3 */
vec128 __ev_vitlvhw_h(vec64 vreg2, vec64 vreg3);

/* VITLVWH.H   vreg2, vreg3 */
vec128 __ev_vitlvwh_h(vec64 vreg2, vec64 vreg3);

/* VLD.B       [reg1]+, vreg3 */
/* VLD.B       [reg1]-, vreg3 */
/* VLD.B       [reg1]+, reg2, vreg3 */
/* VLD.B       [reg1]%, reg2, vreg3 */
vec64 __ev_vld_b(void *ptr, vec64 vreg3);
#ifdef __GNU_ASM_SUPPORT__ 
static inline vec64 __ev_vld_b_mod(void *ptr, vec64 vreg3, long long *ptreg2) 
{
    asm ("vld.b [%2]%, %0, %1" : "+R" (*ptreg2), "=v" (vreg3) : "r" (ptr), "v" (vreg3));
    return vreg3;
}
#endif

/* VLD.DW      [reg1]+, vreg3 */
/* VLD.DW      [reg1]-, vreg3 */
/* VLD.DW      [reg1]+, reg2, vreg3 */
/* VLD.DW      [reg1]%, reg2, vreg3 */
/* VLD.DW      disp8[reg1], vreg3 */
vec64 __ev_vld_dw(void *ptr);
#ifdef __GNU_ASM_SUPPORT__ 
static inline vec64 __ev_vld_dw_mod(void *ptr, long long *ptreg2) 
{
    vec64 vreg3;    
    asm ("vld.dw [%2]%, %0, %1" : "+R" (*ptreg2), "=v" (vreg3) : "r" (ptr));
    return vreg3;
}
#endif

/* VLD.H       [reg1]+, vreg3 */
/* VLD.H       [reg1]-, vreg3 */
/* VLD.H       [reg1]+, reg2, vreg3 */
/* VLD.H       [reg1]%, reg2, vreg3 */
vec64 __ev_vld_h(void *ptr, vec64 vreg3);
#ifdef __GNU_ASM_SUPPORT__ 
static inline vec64 __ev_vld_h_mod(void *ptr, vec64 vreg3, long long *ptreg2) 
{
    asm ("vld.h [%2]%, %0, %1" : "+R" (*ptreg2), "=v" (vreg3) : "r" (ptr), "v" (vreg3));
    return vreg3;
}
#endif

/* VLD.W       [reg1]+, vreg3 */
/* VLD.W       [reg1]-, vreg3 */
/* VLD.W       [reg1]+, reg2, vreg3 */
/* VLD.W       [reg1]%, reg2, vreg3 */
vec64 __ev_vld_w(void *ptr, vec64 vreg3);
#ifdef __GNU_ASM_SUPPORT__ 
static inline vec64 __ev_vld_w_mod(void *ptr, vec64 vreg3, long long *ptreg2) 
{
    asm ("vld.w [%2]%, %0, %1" : "+R" (*ptreg2), "=v" (vreg3) : "r" (ptr), "v" (vreg3));
    return vreg3;
}
#endif

/* VMADRN.H    vreg1, vreg2, vreg3 */
vec64 __ev_vmadrn_h(vec64 vreg1, vec64 vreg2, vec64 vreg3);

/* VMADRN.W    vreg1, vreg2, vreg3 */
vec64 __ev_vmadrn_w(vec64 vreg1, vec64 vreg2, vec64 vreg3);

/* VMADSAT.H   vreg1, vreg2, vreg3 */
vec64 __ev_vmadsat_h(vec64 vreg1, vec64 vreg2, vec64 vreg3);

/* VMADSAT.W   vreg1, vreg2, vreg3 */
vec64 __ev_vmadsat_w(vec64 vreg1, vec64 vreg2, vec64 vreg3);

/* VMAXGE.H    reg1, vreg2, vreg3
 * Note: this intrinsic does not update reg1.  Follow with 'reg1+=4' to
 * get the effect of the actual instruction */
vec128 __ev_vmaxge_h(int reg1, vec64 vreg2, vec128 vreg3);

/* VMAXGE.W    reg1, vreg2, vreg3
 * Note: this intrinsic does not update reg1.  Follow with 'reg1+=2' to
 * get the effect of the actual instruction */
vec128 __ev_vmaxge_w(int reg1, vec64 vreg2, vec128 vreg3);

/* VMAXGT.H    reg1, vreg2, vreg3
 * Note: this intrinsic does not update reg1.  Follow with 'reg1+=4' to
 * get the effect of the actual instruction */
vec128 __ev_vmaxgt_h(int reg1, vec64 vreg2, vec128 vreg3);

/* VMAXGT.W    reg1, vreg2, vreg3
 * Note: this intrinsic does not update reg1.  Follow with 'reg1+=2' to
 * get the effect of the actual instruction */
vec128 __ev_vmaxgt_w(int reg1, vec64 vreg2, vec128 vreg3);

/* VMINLE.H    reg1, vreg2, vreg3
 * Note: this intrinsic does not update reg1.  Follow with 'reg1+=4' to
 * get the effect of the actual instruction */
vec128 __ev_vminle_h(int reg1, vec64 vreg2, vec128 vreg3);

/* VMINLE.W    reg1, vreg2, vreg3
 * Note: this intrinsic does not update reg1.  Follow with 'reg1+=2' to
 * get the effect of the actual instruction */
vec128 __ev_vminle_w(int reg1, vec64 vreg2, vec128 vreg3);

/* VMINLT.H    reg1, vreg2, vreg3
 * Note: this intrinsic does not update reg1.  Follow with 'reg1+=4' to
 * get the effect of the actual instruction */
vec128 __ev_vminlt_h(int reg1, vec64 vreg2, vec128 vreg3);

/* VMINLT.W    reg1, vreg2, vreg3
 * Note: this intrinsic does not update reg1.  Follow with 'reg1+=2' to
 * get the effect of the actual instruction */
vec128 __ev_vminlt_w(int reg1, vec64 vreg2, vec128 vreg3);

/* VMSUM.H     vreg1, vreg2, vreg3 */
vec64 __ev_vmsum_h(vec64 vreg1, vec64 vreg2);

/* VMSUM.W     vreg1, vreg2, vreg3 */
vec64 __ev_vmsum_w(vec64 vreg1, vec64 vreg2);

/* VMSUMAD.H   vreg1, vreg2, vreg3 */
vec64 __ev_vmsumad_h(vec64 vreg1, vec64 vreg2, vec64 vreg3);

/* VMSUMAD.W   vreg1, vreg2, vreg3 */
vec64 __ev_vmsumad_w(vec64 vreg1, vec64 vreg2, vec64 vreg3);

/* VMSUMADIM.H vreg1, vreg2, vreg3 */
vec64 __ev_vmsumadim_h(vec64 vreg1, vec64 vreg2, vec64 vreg3);

/* VMSUMADIM.W vreg1, vreg2, vreg3 */
vec64 __ev_vmsumadim_w(vec64 vreg1, vec64 vreg2, vec64 vreg3);

/* VMSUMADRE.H vreg1, vreg2, vreg3 */
vec64 __ev_vmsumadre_h(vec64 vreg1, vec64 vreg2, vec64 vreg3);

/* VMSUMADRE.W vreg1, vreg2, vreg3 */
vec64 __ev_vmsumadre_w(vec64 vreg1, vec64 vreg2, vec64 vreg3);

/* VMSUMADRN.H vreg1, vreg2, vreg3 */
vec64 __ev_vmsumadrn_h(vec64 vreg1, vec64 vreg2, vec64 vreg3);

/* VMSUMADRN.W vreg1, vreg2, vreg3 */
vec64 __ev_vmsumadrn_w(vec64 vreg1, vec64 vreg2, vec64 vreg3);

/* VMUL.H      vreg1, vreg2, vreg3 */
vec64 __ev_vmul_h(vec64 vreg1, vec64 vreg2);

/* VMUL.W      vreg1, vreg2, vreg3 */
vec64 __ev_vmul_w(vec64 vreg1, vec64 vreg2);

/* VMULCX.H    vreg1, vreg2, vreg3 */
vec64 __ev_vmulcx_h(vec64 vreg1, vec64 vreg2);

/* VMULCX.W    vreg1, vreg2, vreg3 */
vec64 __ev_vmulcx_w(vec64 vreg1, vec64 vreg2);

/* VMULT.H     vreg1, vreg2, vreg3 */
vec64 __ev_vmult_h(vec64 vreg1, vec64 vreg2);

/* VMULT.W     vreg1, vreg2, vreg3 */
vec64 __ev_vmult_w(vec64 vreg1, vec64 vreg2);

/* VNEG.H      vreg1, vreg2 */
vec64 __ev_vneg_h(vec64 vreg1);

/* VNEG.W      vreg1, vreg2 */
vec64 __ev_vneg_w(vec64 vreg1);

/* VNNOT       vreg1, vreg2 */
vec64 __ev_vnot(vec64 vreg1);

/* VOR         vreg1, vreg2, vreg3 */
vec64 __ev_vor(vec64 vreg1, vec64 vreg2);

/* VSAR.DW     reg1, vreg2, vreg3 */
/* VSAR.DW     imm6, vreg2, vreg3 */
vec64 __ev_vsar_dw(int sh, vec64 vreg2);

/* VSAR.H      reg1, vreg2, vreg3 */
/* VSAR.H      imm4, vreg2, vreg3 */
vec64 __ev_vsar_h(int sh, vec64 vreg2);

/* VSAR.W      reg1, vreg2, vreg3 */
/* VSAR.W      imm5, vreg2, vreg3 */
vec64 __ev_vsar_w(int sh, vec64 vreg2);

/* VSHL.DW     reg1, vreg2, vreg3 */
/* VSHL.DW     imm6, vreg2, vreg3 */
vec64 __ev_vshl_dw(int sh, vec64 vreg2);

/* VSHL.H      reg1, vreg2, vreg3 */
/* VSHL.H      imm4, vreg2, vreg3 */
vec64 __ev_vshl_h(int sh, vec64 vreg2);

/* VSHL.W      reg1, vreg2, vreg3 */
/* VSHL.W      imm5, vreg2, vreg3 */
vec64 __ev_vshl_w(int sh, vec64 vreg2);

/* VSHR.DW     reg1, vreg2, vreg3 */
/* VSHR.DW     imm6, vreg2, vreg3 */
vec64 __ev_vshr_dw(int sh, vec64 vreg2);

/* VSHR.H      reg1, vreg2, vreg3 */
/* VSHR.H      imm4, vreg2, vreg3 */
vec64 __ev_vshr_h(int sh, vec64 vreg2);

/* VSHR.W      reg1, vreg2, vreg3 */
/* VSHR.W      imm5, vreg2, vreg3 */
vec64 __ev_vshr_w(int sh, vec64 vreg2);

/* VSHUFL.B    reg1, vreg2, vreg3 */
vec64 __ev_vshufl_b(int reg1, vec64 vreg2);

/* VST.B       vreg3, [reg1]+ */
/* VST.B       vreg3, [reg1]- */
/* VST.B       vreg3, [reg1]+, reg2 */
/* VST.B       vreg3, [reg1]%, reg2 */
void __ev_vst_b(vec64 vreg3, void *ptr);
#ifdef __GNU_ASM_SUPPORT__ 
static inline void __ev_vst_b_mod(vec64 vreg3, void *ptr, long long *ptreg2)
{ 
    asm ("vst.b %2, [%3]%, %1" : "=m" (ptr), "+R"(*ptreg2):  "v"(vreg3), "r"(ptr));
}
#endif

/* VST.DW      vreg3, [reg1]+ */
/* VST.DW      vreg3, [reg1]- */
/* VST.DW      vreg3, [reg1]+, reg2 */
/* VST.DW      vreg3, [reg1]!, reg2 */
/* VST.DW      vreg3, [reg1]%, reg2 */
/* VST.DW      vreg3, disp8[reg1] */
void __ev_vst_dw(vec64 vreg3, void *ptr);
#ifdef __GNU_ASM_SUPPORT__ 
static inline void __ev_vst_dw_mod(vec64 vreg3, void *ptr, long long *ptreg2)
{ 
    asm ("vst.dw %2, [%3]%, %1" : "=m" (ptr), "+R"(*ptreg2):  "v"(vreg3), "r"(ptr));
}
static inline void __ev_vst_dw_brev(vec64 vreg3, void *ptr, int  *ptreg2)
{
    asm ("vst.dw %2, [%3]!, %1" : "=m" (ptr), "+R"(*ptreg2):  "v"(vreg3), "r"(ptr));
}
#endif

/* VST.H       vreg3, [reg1]+ */
/* VST.H       vreg3, [reg1]- */
/* VST.H       vreg3, [reg1]+, reg2 */
/* VST.H       vreg3, [reg1]!, reg2 */
/* VST.H       vreg3, [reg1]%, reg2 */
void __ev_vst_h(vec64 vreg3, void *ptr);
#ifdef __GNU_ASM_SUPPORT__ 
static inline void __ev_vst_h_mod(vec64 vreg3, void *ptr, long long *ptreg2)
{ 
    asm ("vst.h %2, [%3]%, %1" : "=m" (ptr), "+R"(*ptreg2):  "v"(vreg3), "r"(ptr));
}
static inline void __ev_vst_h_brev(vec64 vreg3, void *ptr, int  *ptreg2)
{
    asm ("vst.h %2, [%3]!, %1" : "=m" (ptr), "+R"(*ptreg2):  "v"(vreg3), "r"(ptr));
}
#endif

/* VST.W       vreg3, [reg1]+ */
/* VST.W       vreg3, [reg1]- */
/* VST.W       vreg3, [reg1]+, reg2 */
/* VST.W       vreg3, [reg1]!, reg2 */
/* VST.W       vreg3, [reg1]%, reg2 */
void __ev_vst_w(vec64 vreg3, void *ptr);
#ifdef __GNU_ASM_SUPPORT__ 
static inline void __ev_vst_w_mod(vec64 vreg3, void *ptr, long long *ptreg2)
{ 
    asm ("vst.w %2, [%3]%, %1" : "=m" (ptr), "+R"(*ptreg2):  "v"(vreg3), "r"(ptr));
}
static inline void __ev_vst_w_brev(vec64 vreg3, void *ptr, int  *ptreg2)
{
    asm ("vst.w %2, [%3]!, %1" : "=m" (ptr), "+R"(*ptreg2):  "v"(vreg3), "r"(ptr));
}
#endif

/* VSUB.DW     vreg1, vreg2, vreg3 */
vec64 __ev_vsub_dw(vec64 vreg2, vec64 vreg3);

/* VSUB.H      vreg1, vreg2, vreg3 */
vec64 __ev_vsub_h(vec64 vreg2, vec64 vreg3);

/* VSUB.W      vreg1, vreg2, vreg3 */
vec64 __ev_vsub_w(vec64 vreg2, vec64 vreg3);

/* VSUBS.H     vreg1, vreg2, vreg3 */
vec64 __ev_vsubs_h(vec64 vreg2, vec64 vreg3);

/* VSUBS.W     vreg1, vreg2, vreg3 */
vec64 __ev_vsubs_w(vec64 vreg2, vec64 vreg3);

/* VSUBSAT.H   vreg1, vreg2, vreg3 */
vec64 __ev_vsubsat_h(vec64 vreg2, vec64 vreg3);

/* VSUBSAT.W   vreg1, vreg2, vreg3 */
vec64 __ev_vsubsat_w(vec64 vreg2, vec64 vreg3);

/* VXOR        vreg1, vreg2, vreg3 */
vec64 __ev_vxor(vec64 vreg1, vec64 vreg2);

vec64 __ev_create_u32(unsigned int a, unsigned int b);
vec64 __ev_create_s32(int a, int b);
vec64 __ev_create_u16(unsigned short a, unsigned short b, unsigned short c, unsigned short d);
vec64 __ev_create_s16(short a, short b, short c, short d);
#define __ev_create_u64(i) __ev_mov_dw_iv(i)
#define __ev_create_s64(i) __ev_mov_dw_iv(i)
#define __ev_set_u64(i) __ev_mov_dw_iv(i)
#define __ev_set_s64(i) __ev_mov_dw_iv(i)
#define __ev_set_u32(v, i, p) __ev_mov_w_iv(p, i, v)
#define __ev_set_s32(v, i, p) __ev_mov_w_iv(p, i, v)
#define __ev_get_u32(v,p) __ev_mov_w_vi(p, v)
#define __ev_get_s32(v,p) __ev_mov_w_vi(p, v)
#define __ev_get_u64(v) __ev_mov_dw_vi(v)
#define __ev_get_s64(v) __ev_mov_dw_vi(v)
vec64 __ev_set_u16(vec64 a, unsigned short b, __ghs_c_int__ pos);
vec64 __ev_set_s16(vec64 a, short b, __ghs_c_int__ pos);
unsigned short __ev_get_u16(vec64 a, __ghs_c_int__ pos);
short __ev_get_s16(vec64 a, __ghs_c_int__ pos);

vec128 __ev_create_vec128(vec64 a, vec64 b);
vec64 __ev_get_vec64(vec128 a, __ghs_c_int__ pos);

#ifdef __cplusplus
}
#endif

#endif /* __LL_BIT */
#endif
