#ifndef __V800_IS
#define __V800_IS
#if defined(__V850E3__) && defined(__V850_SIMD)
#pragma ghs rh850 stopsimd
#endif
#if defined(__V850E3__) && defined(__RH850_FPSIMD) 
#pragma ghs rh850 stopfpsimd
#endif

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__ATTRIBUTES)
#define __ATTRIBUTE(x) __attribute__(x)
#else
#define __ATTRIBUTE(x) 
#endif

extern const char _ep[];
extern const char _tp[];
extern const char _gp[];

/* Disable or enable interrupts */
void __DI(void);
void __EI(void);

/* Get or set value of Program Status Word */
unsigned int __GETSR(void);
void __SETSR(unsigned int);

/* Disable maskable interrupts, and return a key for use with __RIR */
unsigned int __DIR(void);

/* Enable maskable interrupts, and return a key for use with __RIR */
unsigned int __EIR(void);

/* Restore maskable interrupts to their state prior to a call to __DIR or __EIR
   using the key returned by that call */
void __RIR(unsigned int);

/* "const" = doesn't read or write global memory */
/* "pure" = doesn't write global memory */

unsigned int __SCH0R(unsigned int val) __ATTRIBUTE((const,pure));
unsigned int __SCH0L(unsigned int val) __ATTRIBUTE((const,pure));
unsigned int __SCH1L(unsigned int val) __ATTRIBUTE((const,pure));
unsigned int __SCH1R(unsigned int val) __ATTRIBUTE((const,pure));
unsigned int __CLZ32(unsigned int val) __ATTRIBUTE((const,pure));

signed int __MULSH(signed int a, signed int b) __ATTRIBUTE((const,pure));
unsigned int __MULUH(unsigned int a, unsigned int b) __ATTRIBUTE((const,pure));

#if defined(__V850E2R__) || defined(__V850E2V3__) || defined( __V850E2V4__)
int __CAXI(int *addr, int cmp, int val);
int __CAXI2(int *addr, int cmp, int val);
int __CAXI3(int *addr, int cmp, int val, int *oldval);
int __CAXIv(volatile int *addr, int cmp, int val);
int __CAXI2v(volatile int *addr, int cmp, int val);
int __CAXI3v(volatile int *addr, int cmp, int val, int *oldval);
#endif

/* Saturated Add and saturated Subtract */
#define __ADD_SAT(a,b) ADD_SAT(a,b)
#define __SUB_SAT(a,b) SUB_SAT(a,b)
int ADD_SAT(int a, int b);
int SUB_SAT(int a, int b);

/* __builtin_return_address : return return-address of current function
                              "level" argument is ignored. */
void *__builtin_return_address(unsigned int level);

/*
 * For V800E2R and later cores only!
 * The following intrinsics are provided for generating perfect code for the
 * following function types:
 *
 * unsigned long interlocked_OR( volatile unsigned long *Address, unsigned long v)
 * {
 *    unsigned long t;
 *    do {
 *        t = *Address;
 *        v |= t;
 *    } while ((v = __CAXI((int *)Address, t, v)) != 0);
 *    return t;
 * }
 */
#if defined(__V850E2R__) || defined(__V850E2V3__) || defined( __V850E2V4__)
unsigned long __INTERLOCKED_OR(volatile unsigned long *addr, unsigned long val);
unsigned long __INTERLOCKED_AND(volatile unsigned long *addr, unsigned long val);
unsigned long __INTERLOCKED_XOR(volatile unsigned long *addr, unsigned long val);
unsigned long __INTERLOCKED_NOT(volatile unsigned long *addr, unsigned long val);
unsigned long __INTERLOCKED_MOV(volatile unsigned long *addr, unsigned long val);
unsigned long __INTERLOCKED_ANDOR(volatile unsigned long *addr, unsigned long mask, unsigned long val);
#endif

#ifndef __EDG__
typedef int __ghs_c_int__;  /* const int argument only */
#endif

#if defined(__V850E2V3__) || defined( __V850E2V4__) || \
    defined(__V850E2__) || defined( __V850E2R__) || \
    defined(__V850E__) || defined( __V850F__)
void __SET1(volatile char *addr, __ghs_c_int__ bitnum);
void __CLR1(volatile char *addr, __ghs_c_int__ bitnum);
void __NOT1(volatile char *addr, __ghs_c_int__ bitnum);
int  __TST1(volatile char *addr, __ghs_c_int__ bitnum);
#endif

#if defined(__CORE_V850E3V5__)
void __LDSR(__ghs_c_int__ regID, __ghs_c_int__ selID, unsigned int val);
unsigned int __STSR(__ghs_c_int__ regID, __ghs_c_int__ selID);
#else
void __LDSR(__ghs_c_int__ regID, unsigned int val);
unsigned int __STSR(__ghs_c_int__ regID);
#endif

#if defined(__CORE_V850E3V5__)
void __SNOOZE(void);
void __SYNCE(void);
void __SYNCI(void);
void __SYNCM(void);
void __SYNCP(void);
int __STC_W(int d, int *p);
int __LDL_W(int *p);
void __CLL(void);
#if !defined(__SoftwareFloat__) && !defined(__NoFloat__)
float __CVTF_HS(short);
unsigned short __CVTF_SH(float);
#endif
void __DBCP(void);
void __DBTAG(__ghs_c_int__ tag);
void __DBPUSH(__ghs_c_int__ rh, __ghs_c_int__ rt);
#endif

#ifdef __GNU_ASM_SUPPORT__ 
static inline void __NOP(void)
{
    asm ("nop");
}
static inline void __HALT(void)
{
    asm ("halt");
}
#define __GETSP_macro() asm ("mov sp, %0" : "=r" (result));
static inline void * __GETSP(void)
{
    void *result;
    __GETSP_macro();
    return result;
}
#endif


#ifdef __cplusplus
}
#endif

#if defined(__CORE_V850E3V5__) && defined(__V850_SIMD)
#pragma ghs rh850 resetsimd
#endif
#if defined(__CORE_V850E3V5__) && defined(__RH850_FPSIMD)
#pragma ghs rh850 resetfpsimd
#endif
#if defined(__CORE_V850E3V5__) && defined(__RH850_SIMD_TYPES__)
#include <v800_simd.h>
#endif
#if defined(__CORE_V850E3V5__) && defined(__RH850_FPSIMD_TYPES__)
#include <v800_fpsimd.h>
#endif
#endif
