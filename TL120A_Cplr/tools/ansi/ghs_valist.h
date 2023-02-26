/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _GHS_VALIST_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _GHS_VALIST_H

#if !defined(_STDARG_H) && !defined(_STDIO_H) && !defined(_GHS_WCHAR_H)
# error	Please include <stdarg.h> instead of ghs_valist.h
#endif

#ifdef __cplusplus
 extern "C" {
#endif

#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value) && !defined(__GH_VA_ARG_FIX)
# define ___ghs_did_pack
# pragma pack (push, __ghs_max_pack_value) /* do not pack __gh_va_list  */
#endif

#if defined(__SoftwareFloat) || defined(__NoFloat) || defined(__FireFly__)
# define __FP_USES_IREGS
#endif

#if defined(__ghs_stdcall) && defined(__FP_USES_IREGS)

# if defined (__FR20)
   typedef struct _va_struct { char *_va_list; int _va_stkmod7; } __gh_va_list;

# else /* !defined(__FR20) */

   typedef char *__gh_va_list;

#endif

#elif defined(__ghs_stdcall)
   
#  if defined(__mips) && (__REG_BIT == 64)
    typedef long long __PTYP;
# define __GH_VARARG_PADDING	/* With long long __PTYP, and 32-bit
				 * pointer, packing can change the size
				 * of va_list.
				 */
#  elif defined(__mips) && defined(__FREG_BIT) && (__FREG_BIT == 64)
     /* MIPS: 32 bit mode with 64bit fpu */
    typedef int __PTYP;
#  else
    typedef int __PTYP;
#  endif
#  if defined (__GH_VARARG_PADDING) && (__PTR_BIT == 32)
    typedef struct _va_struct {__PTYP *_reg_ptr,*_dummy,_int_cnt,_FP_cnt,_mem_cnt;} __gh_va_list;
#  else
   typedef struct _va_struct {__PTYP *_reg_ptr,_int_cnt,_FP_cnt,_mem_cnt;} __gh_va_list;
#  endif

#elif defined(__ppc) && !defined(__Lynx) && !defined(__PPC64_ABI__)
    
  typedef struct _gh_va_struct {int *_oflo_ptr,*_reg_ptr,_int_cnt,_FP_cnt,_mem_cnt;} _gh_va_list;
  typedef struct _va_struct {char _gpr,_fpr,_pad1,_pad2;
#  ifdef __PPC64__
			     char _padding[4];
#  endif
			     char    *_overflow_arg_area,*_reg_save_area;} __gh_va_list[1];
# define __va_copy_as_struct

#elif defined(__ARM64__)

typedef struct _va_struct { void *__stack; void *__gr_top; void *__vr_top; int __gr_offs; int __vr_offs; } __gh_va_list;

#elif defined(__V850) || defined(__V830) || defined(__V830R)

typedef struct _va_struct {char *_va_list; int _va_stkmod7;} __gh_va_list;

#elif defined(__AMD64_ABI__) && defined(__x86_64__)

  typedef struct _va_struct {int gp_offs; int fp_offs; char* of_ptr; char* reg_ptr; } __gh_va_list[1];

# define __va_copy_as_struct
  
#elif  defined(__mips) || \
	defined(__V810) || \
	defined(__m68k) || \
	defined(__nCPU) || \
	defined(__i386) || defined(__x86_64__)  || \
	defined(__sparc) || \
	defined(__SH7000) || \
	defined(__FR20) || \
	defined(__Tricore) || \
	defined(__Javelin__) || \
	defined(__ARM) || \
        defined(__ADSPBLACKFIN__) || \
	(defined(__ppc) && (defined(__Lynx) || defined(__PPC64_ABI__))) || \
	defined(__M32R__) || \
	defined(__NDR) || \
	(defined(__StarCore__) || defined(__SC3__))
	
  typedef char *__gh_va_list;

#elif defined(__MCS__)
   /* MCS has only an assembler, not a compiler, so no stdarg support */
#else
   #error	  Unknown processor, please add a ghs_valist entry
#endif

#ifdef ___ghs_did_pack
#undef ___ghs_did_pack
#   pragma pack (pop)
#endif

#ifdef __cplusplus
    }
#endif

#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* _GHS_VALIST_H */
