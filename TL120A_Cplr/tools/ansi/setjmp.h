/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/


#ifndef _SETJMP_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _SETJMP_H

#if defined(__MISRA_20_7) && (__MISRA_20_7 == 2)
#  error "(Misra Rule 20.7): the header <setjmp.h> not allowed"
#elif defined(__MISRA_20_7) && (__MISRA_20_7 == 1)
#  warning "(Misra Rule 20.7): the header <setjmp.h> not allowed"
#endif

#if defined(__MISRA_122) && (__MISRA_122 == 2)
#  error "(Misra Rule 122): the header <setjmp.h> not allowed"
#elif defined(__MISRA_122) && (__MISRA_122 == 1)
#  warning "(Misra Rule 122): the header <setjmp.h> not allowed"
#endif

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__NoFloat) || defined(__FloatSingle) || defined(__NoDouble)
# if defined(__LLONG_BIT) && (__LLONG_BIT == 64)
#   define __SJDB long long
# elif defined(__LONG_BIT) && (__LONG_BIT == 64)
#   define __SJDB long
# elif !defined(__CHAR_BIT) || (__CHAR_BIT != 8)
#   error unable to make a 64-bit type in setjmp.h
# else
#   if defined(__ghs_max_pack_value)
#     pragma pack(push, __ghs_max_pack_value)
#   endif
#   if defined(__ghs_alignment) && (__ghs_alignment>1) && (__ghs_alignment<=8)
#     pragma ghs struct_min_alignment(__ghs_alignment)
#   else
#     pragma ghs struct_min_alignment(8)
#   endif
    typedef struct { char jmp[8]; } __SJDB;
#   pragma ghs struct_min_alignment()
#   if defined(__ghs_max_pack_value)
#     pragma pack(pop)
#   endif
# endif
#else
# define __SJDB double
#endif

#if defined(__ns32000)
  typedef int jmp_buf[12];
#elif defined(__AMD64_ABI__) && defined(__ghs_fee_jmpbuf)
  typedef int jmp_buf[22];
#elif defined(__AMD64_ABI__)
  typedef int jmp_buf[18];
#elif defined(__x86_64__)
    /* x86-64 has 10: SVR3's six plus %r12-%r15. Each is 64 bits wide.
     * Plus sizeof(void *) bytes for INTEGRITY interrupt mask. */
  typedef int jmp_buf[22];
#elif defined(__i386) && defined(__ghs_fee_jmpbuf)
  typedef int jmp_buf[11];	/* SVR3 has 6, Solaris 386 has 10 */
#elif defined(__i386)
  typedef int jmp_buf[10];	/* SVR3 has 6, Solaris 386 has 10 */
#elif defined(__m68k) && defined(__sun)
  typedef int jmp_buf[58];
#elif defined(__m68k) && defined(__unix)
  typedef int jmp_buf[13];	/* does not save any fp registers */
#elif defined(__m68k)
    /* 16*4 bytes for integer registers,
       6*12 bytes for 68k fp registers  OR
       6*8 bytes for coldfire fp registers + 4 bytes for integrity interrupt mask
       */
  typedef int jmp_buf[34];	
#elif defined(__V800)
  typedef int jmp_buf[18];
#elif defined(__i860)
  typedef __SJDB jmp_buf[15];
#elif defined(__m88k)
  typedef int jmp_buf[40];		/* from Unix, we only use 20 ints */
#elif defined(__clipper)
  typedef int jmp_buf[20];
#elif defined(__FR20)
  typedef int jmp_buf[8];
#elif defined(__gmicro)
  typedef __SJDB jmp_buf[32];
#elif defined(__mips) || defined(__nCPU)
  typedef __SJDB jmp_buf[32];	/* probably should be 18 __SJDBs */
#elif defined(__PPC64__) && defined(__ALTIVEC__) && defined(__ghs_fee_jmpbuf)
  typedef long jmp_buf[68];
#elif defined(__PPC64__) && defined(__ALTIVEC__)
  typedef long jmp_buf[66];
#elif defined(__PPC64__) && defined(__ghs_fee_jmpbuf)
  typedef long jmp_buf[43];
#elif defined(__PPC64__)
  typedef long jmp_buf[40];
#elif defined(__ALTIVEC__)  && defined(__ghs_fee_jmpbuf)
  typedef __SJDB jmp_buf[57];
#elif defined(__ALTIVEC__)  
/* AltiVec mode - we'd like to force 16 byte alignment, but just do 8 byte 
 * alignment for now */
  typedef __SJDB jmp_buf[56];
/*  typedef __vector unsigned char jmp_buf[28]; */
#elif defined(__ppc)
  typedef __SJDB jmp_buf[32];	 /* probably should be 24 __SJDBs */
#elif defined(__SH7000)
#if defined(__SoftwareFloat)
  typedef int jmp_buf[13];	
#else
  /* save 2 more pairs of floating point regs */
  typedef int jmp_buf[17];
#endif
#elif defined(__sparc)
  typedef int jmp_buf[12];	/* SunOS has 9, Solaris has 12 */
#elif defined(__ARM) && defined(__ARMVE)
/* ARMVE needs to save the vector registers also. */
  typedef int jmp_buf[16 /* ints */ + 4 * 6 /*  6 Vector regs */];
#elif defined(__ARM) 
  typedef int jmp_buf[16 /* ints */ + 3 * 8 /* FP regs */];
#elif defined(__ARM64__) && defined(__ghs_fee_jmpbuf)
  typedef long jmp_buf[14 /* ints */ + 8 /* vector regs (lower 64-bits) */ + 2];
#elif defined(__ARM64__)
  typedef long jmp_buf[14 /* ints */ + 8 /* vector regs (lower 64-bits) */];
#elif defined(__Tricore)
  typedef int jmp_buf[18];
#elif defined(__StarCore__) || defined(__SC3__)
  typedef int jmp_buf[7];
#elif defined(__NDR)
  typedef int jmp_buf[8];
#elif defined(__FirePath__) 
  typedef __SJDB jmp_buf[33];
#elif defined(__MAX__)
  typedef int jmp_buf[11];
#elif defined(__ADSPBLACKFIN__)
  typedef int jmp_buf[41];
#elif defined(__M32R__)
  typedef int jmp_buf[10];
#elif defined(__FireFly__)
# if (__DREG_BIT==64)
#   if (__AREG_BIT==64)
  typedef long jmp_buf[16];
#   else
  typedef long jmp_buf[11];
#   endif
# else
  typedef __SJDB jmp_buf[8];
# endif
#else
  typedef __SJDB jmp_buf[32];
#endif

#undef __SJDB

int  setjmp (jmp_buf __JBF);
void longjmp(jmp_buf __JBF, int __RET_VAL);

#if defined(__STDC__) || defined(__cplusplus)
#define setjmp(env)	(setjmp(env))	    /* Standard says it's a macro */
#endif

#ifdef __cplusplus
}
#endif
#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif
