/*
			ISO C/C++ Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _STDARG_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _STDARG_H

#ifdef __MISRA_16_1
# if __MISRA_16_1 == 2
#  error "(Misra Rule 16.1): the header <stdarg.h> not allowed"
# elif __MISRA_16_1 == 1
#  warning "(Misra Rule 16.1): the header <stdarg.h> not allowed"
# endif
#endif /* __MISRA_16_1 */

#ifdef __MISRA_69
# if __MISRA_69 == 2
#  error "(Misra Rule 69): the header <stdarg.h> not allowed"
# elif __MISRA_69 == 1
#  warning "(Misra Rule 69): the header <stdarg.h> not allowed"
# endif
#endif /* __MISRA_69 */

#include "ghs_valist.h"

#if !defined(__va_list_defined)
#  define __va_list_defined
   typedef __gh_va_list va_list;
#endif

#ifdef __ALT_VARARGS
#include <alt_stdarg.h>
#endif

#ifdef __cplusplus
 extern "C" {
#endif

#if defined(__STDC__) || defined(__PROTOTYPES__)
# define __ARGS(x)		x
#else
# define __ARGS(x)		()
#endif

#ifndef __STDC__
  /* In K&R mode these have no __ prefix */
# define __va_align   va_align
# define __va_pointer va_pointer
# define __va_long    va_long
# define __va_intreg  va_intreg
# define __va_float   va_float
# define __va_regtyp  va_regtyp
# define __va_stkarg  va_stkarg
# define __va_iargnum va_iargnum
# define __va_dargnum va_dargnum
# define __va_aargnum va_aargnum
# define __va_vector  va_vector
#endif

/* ISO requires that va_start and va_end be macros which evaluate to void */
#define va_end(list)  ((void)0)
#ifndef __GHS_NO_VACOPY
# ifdef __va_copy_as_struct
#   define va_copy(dest, src) ((dest)[0] = (src)[0])
# else
#   define va_copy(dest, src) ((dest) = (src))
# endif
#endif /* __GHS_NO_VACOPY */

#if defined(__SoftwareFloat) || defined(__NoFloat) || defined(__FireFly__)
# define __FP_USES_IREGS
#endif

#if defined(__ghs_stdcall) && defined(__FP_USES_IREGS)

# if defined (__FR20)
    /* the FR20 has 4-byte stack alignment, yet doubles are 8-byte aligned
     * relative to the first argument, just like V850 and V830.
     */
#  define va_start(ap,va_alist) ((ap)._va_list= (char *)(&__va_ansiarg + \
	    (__va_iargnum(va_alist)>4? 4:\
	    __va_iargnum(va_alist))), \
	    ((ap)._va_stkmod7 = (int)__va_stkarg&7) )

#  define va_arg(p, mode) (__va_regtyp(mode) ? \
     /* for non-structs; double must be 8-byte aligned relative to 1st arg */ \
     ((mode *)(void*)((p)._va_list = (char *) (((int)(p)._va_list + \
     (sizeof(mode)>4?(((p)._va_stkmod7 !=((int)(p)._va_list&7))*4):0)+3)& ~3)+\
	    (sizeof(mode)<=4?4:8)))[-1] : \
     /* for a struct, dereference it */ \
     *((mode **)((p)._va_list = (char *)((int)(p)._va_list+sizeof(mode *))))[-1])

# elif defined(__FireFly__) 
#  define va_start(list,va_alist) list = (char *) (&__va_ansiarg)
#  if (__REG_BIT==32)
#    define va_arg(list,mode) (__va_regtyp(mode) ? ((mode *)(void*)(list =\
	(char *) ((((int)list + (sizeof(mode)<=4?3:7)) &\
	(sizeof(mode)<=4?~3:~7))+sizeof(mode))))[-1] : \
	*((mode **)(void*)(list = (char *)((((int)list+3)&~3)+sizeof(mode *))))[-1])
#  elif (__AREG_BIT==32)   
#    define va_arg(list,mode) (__va_regtyp(mode) ? ((mode *)(void*)(list =\
	(char *) ((((int)list + (sizeof(mode)<=8?7:15)) & (sizeof(mode)<=8?~7:~15))+(int)sizeof(mode))))[-1] : \
	*((mode **)(void*)(list = (char *)((((int)list+7)&~7)+sizeof(mode *))))[-1])
#  else
#    define va_arg(list,mode) (__va_regtyp(mode) ? ((mode *)(void*)(list =\
	(char *) ((((long)list + (sizeof(mode)<=8?7:15)) & (sizeof(mode)<=8?~7:~15))+(long)sizeof(mode))))[-1] : \
	*((mode **)(void*)(list = (char *)((((long)list+7)&~7)+sizeof(mode *))))[-1])
#  endif
# else /* !defined(__FR20) */

#  if __REG_BIT == 32
#   define va_start(list,va_alist) list = (char *) (&__va_ansiarg+__va_iargnum(va_alist))
#   ifdef __BigEndian
#    define va_arg(list,mode) (__va_regtyp(mode) ? ((mode *)(void*)(list =\
            (char *) ((((int)list + (__va_align(mode)<=4?3:7)) &\
            (__va_align(mode)<=4?~3:~7))+(sizeof(mode)<=4?4:8))))[-1] : \
            *((mode **)(void*)(list = (char *)((int)list+sizeof(mode *))))[-1])
#   else /* __LittleEndian */
#    define va_arg(list,mode) (__va_regtyp(mode) ? ((mode *)(void*)(list =\
	    (char *) ((((int)list + (__va_align(mode)<=4?3:7)) &\
	    (__va_align(mode)<=4?~3:~7))+sizeof(mode))))[-1] : \
	    *((mode **)(void*)(list = (char *)((((int)list+3)&~3)+sizeof(mode *))))[-1])
#   endif /* End of __LittleEndian */
#  else /* 64 bit regs means 8 bytes for all args here */
#   define va_start(list,va_alist) list = (char *)((long long *)(void *)&__va_ansiarg+ \
						__va_iargnum(va_alist))
#   ifdef __BigEndian
#    define va_arg(list,mode) (__va_regtyp(mode) ? ((mode *)(void*)(list =\
	    (char *) ((int)list + 8)))[-1] : \
     /*	the 32 bit pointer to mode is stored in the lower 32 bit word. */ \
	    *((mode **)(void*)(list = (char *)((int)list+8)))[-1])
#   else /* __LittleEndian */
#    define va_arg(list,mode) (__va_regtyp(mode) ? ((mode *)(void*)(list =\
	(char *) ((((int)list + 7) & ~7)+(int)sizeof(mode))))[-1] : \
	*((mode **)(void*)(list = (char *)((((int)list+7)&~7)+sizeof(mode *))))[-1])
#   endif /* Endian */
#  endif /* __REG_BIT == 32 */

# endif /* FR20 */
/* end of defined(__ghs_stdcall) && defined(__FP_USES_IREGS) */
#elif defined(__ghs_stdcall) 

#  if defined(__mips) && (__REG_BIT == 64)
#   define __GH_NUM_FLOAT_REGS 8
#   define __GH_DSIZE  1		/* double occupies one register */
#  elif defined(__mips) && defined(__FREG_BIT) && (__FREG_BIT == 64)
     /* MIPS: 32 bit mode with 64bit fpu */
#   define __GH_NUM_FLOAT_REGS 8
#   define __GH_DSIZE 2
#  else
#   define __GH_NUM_FLOAT_REGS 4
#   define __GH_DSIZE  2		/* double occupies two registers */
#  endif

#  define va_start(p,va_alist) \
	((p)._reg_ptr=(__PTYP *)(void *)(&__va_ansiarg), \
	 (p)._int_cnt= __va_iargnum(va_alist), \
	 (p)._FP_cnt=  __va_dargnum(va_alist), \
	 (p)._mem_cnt=(__va_iargnum(va_alist)>8? \
			__va_iargnum(va_alist)-8 : 0) + \
		     (__va_dargnum(va_alist)>__GH_NUM_FLOAT_REGS? \
                        (__va_dargnum(va_alist)-__GH_NUM_FLOAT_REGS)*__GH_DSIZE :0) ) 

#  define va_arg(list,mode) \
	(*(mode *)(void*)__gh_va_arg(&list, __va_regtyp(mode), __va_float(mode), sizeof(mode)))
   char *__gh_va_arg __ARGS((va_list *, int, int, int));

/* end of __ghs_stdcall */
#elif defined(__ppc) && !defined(__Lynx) && !defined(__PPC64_ABI__)

  char *__gh_va_arg __ARGS((_gh_va_list *, int, int, int));
  void *__va_arg    __ARGS((va_list, int));

# if defined(__EDG__)
#  ifdef __FloatSingle
#   define __greg_va_type(mod) \
       (__va_regtyp(mod)? \
	/* 1 or 2 for int or long long int */ \
	  ((sizeof(mod) > 4) ? 2 : 1) : \
	/* if not a register type, then pass a 0 */ \
	0)
#  else /* __FloatSingle */
#   define __greg_va_type(mod) \
       (__va_regtyp(mod)? \
	/* if a register type, is it a double - then 3.  */ \
	/* 1 or 2 for int or long long int */ \
	/* 4 will be taken to mean a long double */ \
	/* 5 will be taken to mean an AltiVec vector */ \
	(__va_float(mod) ? (sizeof(mod) == 16 ? 4 : 3) : \
	 (__va_vector(mod) ? 5 :     \
	  ((sizeof(mod) > 4) ? 2 : 1))) : \
	/* if not a register type, then pass a 0 */ \
	0)
#  endif /* __FloatSingle */
# else /* if !EDG */
#  define __greg_va_type(mod) \
       (__va_regtyp(mod)? \
	/* if a register type, is it a double - then 3.  */ \
	/* appears 4 means float (ppc602 lunacy) */ \
	/* 1 or 2 for int or long long int */ \
	/* 5 will be taken to mean an AltiVec vector */ \
	(__va_float(mod) ? 3 : \
	 ((sizeof(mod) == 16) ? 5 :       \
	  ((sizeof(mod) > 4) ? 2 : 1))) : \
	/* if not a register type, then pass a 0 */ \
	0)
# endif
	
# if defined(__BigEndian)
#      define va_arg(list,mod) \
        /* small ints (chars, shorts) need this shift - this is actually */ \
	/* not even required by ansi */ \
       (((sizeof(mod) >= 3) || (__greg_va_type(mod) != 1)) ? \
	(*(mod*)(void*)__va_arg(list,__greg_va_type(mod))) : \
        (*(mod*)(void*)((char*)__va_arg(list,__greg_va_type(mod)) \
						       - (sizeof(mod)-4u))))
# else /* little endian */
#      define va_arg(list,mod) \
	(*(mod*)(void*)__va_arg(list,__greg_va_type(mod)))
# endif /* #ifdef __BigEndian */

#    define va_start(p,va_alist) \
	((p)->_overflow_arg_area=(char *)(&__va_ansiarg), \
	 (p)->_reg_save_area=(char *)__va_intreg, \
	 (p)->_gpr= __va_iargnum(va_alist), \
	 (p)->_fpr=  __va_dargnum(va_alist))

#elif  defined(__mips) || \
	defined(__V810) || \
	defined(__nCPU)
    /* Like standard case except for va_arg 8 byte stack alignment */

# define va_start(list,lstprm) list = (char *) (&__va_ansiarg)

# if (__REG_BIT == 32)
#   define va_arg(list,mode) ((mode *)(void*)(list =\
	    (char *) ((((int)list + (__va_align(mode)<=4?3:7)) &\
	    (__va_align(mode)<=4?~3:~7))+sizeof(mode))))[-1]
# else /* 64 bit regs means 8 bytes for all args here */
#  ifdef __BigEndian
#    define va_arg(list,mode) ((mode *)(void*)(list = (__va_regtyp(mode) ?\
	    (char *) ((((int)list + 7) & ~7) + 8) : \
	    (char *) ((((int)list + 7) & ~7) + (int)sizeof(mode)))))[-1]
#  else /* __LittleEndian */
#    define va_arg(list,mode) ((mode *)(void*)(list =\
	    (char *) ((((int)list + 7) & ~7)+(int)sizeof(mode))))[-1]
#  endif /* Endian */
# endif /* __REG_BIT==32 */

#elif defined(__ppc) && defined(__PPC64_ABI__)
    /* vectors are 16 byte aligned, all other reg types are 8 byte aligned on 
     * stack */
# define va_start(list,lstprm) list = (char *) (&__va_ansiarg)

#  ifdef __BigEndian
#    define va_arg(list,mode) ((mode *)(void*)(list = (__va_regtyp(mode) ?\
            (char *) ((((long)list + (__va_vector(mode)?15:7)) & (__va_vector(mode)?~15:~7)) + (__va_vector(mode)?16:8)) : \
	    (char *) ((((long)list + (__va_vector(mode)?15:7)) & (__va_vector(mode)?~15:~7)) + (sizeof(mode)>8?(int)sizeof(mode):8)))))[-1]
#  else /* __LittleEndian */
#    define va_arg(list,mode) ((mode *)(void*)(list =\
            (char *) ((((long)list + (__va_vector(mode)?15:7)) & (__va_vector(mode)?~15:~7))+(int)sizeof(mode))))[-1]
#  endif /* Endian */

#elif defined(__V850) || defined(__V830) || defined(__V830R)

# define va_start(ap,lstprm) ((ap)._va_list= (char *)&__va_ansiarg, \
				((ap)._va_stkmod7 = (int)__va_stkarg&7))
# if __PTR_BIT == __SHRT_BIT
#   define va_arg(p, mode) ((mode *)(void*)((p)._va_list = (char *)(short)(((int)(p)._va_list +\
    (__va_align(mode)>4?(((p)._va_stkmod7 ==(((int)(p)._va_list-1)&4))*4):0)+ 3) & ~3) + \
    sizeof(mode)))[-1]
# else
#   define va_arg(p, mode) ((mode *)(void*)((p)._va_list = (char *)(((int)(p)._va_list +\
    (__va_align(mode)>4?(((p)._va_stkmod7 ==(((int)(p)._va_list-1)&4))*4):0)+ 3) & ~3) + \
    sizeof(mode)))[-1]
# endif

#elif	defined(__m68k) && defined(__VXWORKS)

#    define va_arg(list, type)	((type *)(void*)(list += sizeof(type)))[-1]
#    define va_start(list, last_arg)	(list = (va_list)(&last_arg + 1))

#elif defined(__NDR)

  /* Use __va_align to deal with types and structures that are 8-byte aligned.
   * Assume list is 4-byte aligned to begin with. Only big endian is supported. */
# define va_start(list,lstprm) list = (char *) (&__va_ansiarg)
# define va_arg(list,mode)						      \
	((sizeof(mode) < 4)						      \
	  ? ((mode *)(void*)(list = (char *)((int)list + 4)))[-1]		      \
	  : ((mode *)(void*)(list = (char *)((((int)list + (__va_align(mode)<=4?3:7))\
			& (__va_align(mode)<=4?~3:~7))+sizeof(mode))))[-1]    \
	)

#elif defined(__StarCore__) || defined(__SC3__)
  /* Stack grows up on Star*Core */
# define va_start(list,lstprm) list = (char *) (&lstprm)
# define va_arg(list,mode) ((list = (char *)(((int)list - (int)((sizeof(mode)+3u) & ~3u)) \
				& (sizeof(mode)<8 ? ~0 : ~7)) ), \
	    (*(mode *)(void*)((char *)list)))

#elif defined(__ARM64__)
    void * __gh_va_arg(va_list *list, ...);
    void __gh_va_start(va_list *list, char*);
#   define va_arg(list,typ) (*(typ *)(void*)__gh_va_arg(&list, (typ*)0))
#   define va_start(list, listparm) __gh_va_start(&list, (char *)(&__va_ansiarg))
# elif defined(__x86_64__)

   /* assume defined(__AMD64_ABI__) */

   void * __gh_va_arg(va_list list, ...);
   void __gh_va_start(va_list list);
   
#   define va_arg(list,typ) \
        (*(typ *)__gh_va_arg(list, (typ*)0))
#   define va_start(list, listparm) __gh_va_start(list)
   
#elif	defined(__m68k) && !defined(__VXWORKS) || \
	defined(__i386) || \
	defined(__sparc) || \
	defined(__SH7000) || \
	defined(__FR20) || \
	defined(__Tricore) || \
	defined(__Javelin__) || \
	defined(__ARM) || \
        defined(__ADSPBLACKFIN__) || \
	(defined(__ppc) && defined(__Lynx)) || \
	defined(__M32R__)
    /* do not add more processors here if they need more than two lines of
       special code below.  Instead, add them as a separate case above. */

    /*
    Trivial stdarg, assuming no register parameters.  4 byte align the stack 
    */
# define va_start(list,lstprm) list = (char *) (&__va_ansiarg)

# if defined(__sparc) && defined(__BUILTIN_VA_ARG_INCR)

#   define va_arg(list,mode) ((mode *)(void*)__builtin_va_arg_incr((mode *)list))[0]

# elif defined(__FR20) || (defined(__ppc) && (defined(__Lynx)||defined(__PPC64_ABI__)))

#   define va_arg(ap,mode) (!__va_regtyp(mode) ? **(mode **)(void*)((ap += 4) - 4) :\
    *(mode *)(void*)((ap += (((int)sizeof(mode)+3)&~3)) - (((int)sizeof(mode)+3)&~3)))

# elif defined(__Tricore)

#   define va_arg(list,mode) ((list = (char *)list + ((sizeof(mode)+3) & ~3u)), \
	    (*(mode *)(void*)((char *)list - ((sizeof(mode)+3)& ~3u))))

# elif defined(__m68k) && (__ghs_alignment == 2)

#  define va_arg(list,mode) \
	(*(mode *)(void*)((list += ((sizeof(mode)+1) & ~1u))-((sizeof(mode)+1u) & ~1u)))


# elif defined(__ARM)

#  define va_arg(list,typ) \
        (*((typ *)(void*)((list += ((__va_align(typ)<=4) ? 0 : (((int)list)&4)) \
		+ ((sizeof(typ)+3u) & ~3u))-((sizeof(typ)+3u) & ~3u))))

# elif defined(__BigEndian)

   /* 'list' may be 2 byte aligned, especially on 680[01]0 during an exception.
      Rather than rounding list up to a multiple of 4 (like many of the va_arg
      macros in this file), round up sizeof(mode).
      The __va_regtyp hack makes va_arg(ap, char) and va_arg(ap, short) work,
      even though it is illegal.  The hack only is necessary with bigendian.  */

#  define va_arg(list,typ) \
	(((sizeof(typ) < 4) && __va_regtyp(typ)) \
	?*((typ *)(void*)((list += 4)-4))                                       \
	:*((typ *)(void*)((list += ((sizeof(typ)+3u) & ~3u))-((sizeof(typ)+3u) & ~3u))))

# else

#  define va_arg(list,typ) \
	(*((typ *)(void*)((list += ((sizeof(typ)+3u) & ~3u))-((sizeof(typ)+3u) & ~3u))))

# endif

#elif defined(__MCS__)
   /* MCS has only an assembler, not a compiler, so no stdarg support */
#else
   #error	  Unknown processor, please add a stdargs entry
#endif

#undef __ARGS

#ifdef __cplusplus
    }
#endif
#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* _STDARG_H */
