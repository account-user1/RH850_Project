/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef __GH_VARARGS_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define __GH_VARARGS_H

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

#ifdef __ALT_VARARGS
#include <alt_varargs.h>
#endif

#if defined(__ghs_stdcall)
# if defined(__SoftwareFloat) || defined(__NoFloat)

#if defined (__FR20)
/* FR20 and V850 have 4-byte stack alignment, yet doubles 
 * are 8-byte aligned relative to the first argument.
 * Eventually, maybe we can use this for all ghs_stdcall chips.
 */

typedef struct { char *va_list; int va_stkmod7; } va_list;
#define va_dcl int va_alist;

#define va_start(ap) ((ap).va_list= (char *)(&va_alist+\
			(va_iargnum(va_alist)>4?4:\
			va_iargnum(va_alist))-1),\
			((ap).va_stkmod7 = (int)va_stkarg&7) )

#define va_arg(p, mode) (va_regtyp(mode) ? \
    /* for non-structs; double must be 8-byte aligned relative to 1st arg */ \
    ((mode *)((p).va_list = (char *) (((int)(p).va_list + \
    (sizeof(mode)>4?(((p).va_stkmod7 !=((int)(p).va_list&7))*4):0)+ 3) & ~3)+\
	    (sizeof(mode)<=4?4:8)))[-1] : \
    /* for a struct, deference it */ \
    *((mode **)((p).va_list = (char *)((int)(p).va_list+sizeof(mode *))))[-1])

#else /* not FR20 */
#ifdef __FireFly__
#error varargs.h not supported on this architecture
#endif
typedef char *va_list;
#if __REG_BIT != 64
#define va_dcl struct {int x;} va_alist;
#define va_start(ap) (ap) = (char *)(&va_alist+va_iargnum(va_alist)-1)
#define va_arg(list, mode) (va_regtyp(mode) ? ((mode *)(list = (char *)\
 ((va_align(mode)<=4)?((int)list + ((sizeof(mode)+3)&-4)): \
 ((((int)list + 7) & -8) + sizeof(mode)))))[-1] : \
 *((mode **)(list = (char *)((int)list+sizeof(mode *))))[-1])
#else /* 64 bit regs means 8 bytes for all args here */
#define va_dcl struct {long long x;} va_alist;
#define va_start(ap) (ap)=(char *)((long long *)&va_alist+va_iargnum(va_alist)-1)
#ifdef __BigEndian
#define va_arg(list, mode) (va_regtyp(mode) ? ((mode *)(list = (char *)\
 ((int)list + 8)))[-1] : \
 /* the 32 bit pointer to the struct is stored in the lower 32 bit word. */ \
 *((mode **)(list = (char *)((int)list+8)))[-1])
#else /* __LittleEndian */
#define va_arg(list, mode) (va_regtyp(mode) ? ((mode *)(list = (char *)\
 ((((int)list + 7) & -8) + (int)sizeof(mode))))[-1] :\
 *((mode **)(list = (char *)((((int)list + 7) & -8)+sizeof(mode *))))[-1])
#endif /* Endian */
#endif /* __REG_BIT != 64 */
#endif /* FR20 */

#define va_end(ap)

# else /* !defined (__SoftwareFloat) */

#if defined(__mips) && (__REG_BIT == 64)
     typedef long long __PTYP;
#    define NINTREGS 8
#    define NFLTREGS 8
#    define DSIZE    1		/* double occupies one register */
#else
     typedef int __PTYP;
#    define NINTREGS 8
#    define NFLTREGS 4
#    define DSIZE    2		/* double occupies two registers */
#endif

   typedef struct {__PTYP *reg_ptr,int_cnt,FP_cnt,mem_cnt;} va_list;

#define va_dcl struct {int x;} va_alist;
#	define va_start(p) \
	((p).reg_ptr=(__PTYP *)(&va_alist), \
 	(p).int_cnt= va_iargnum(va_alist)-1, \
 	(p).FP_cnt=  va_dargnum(va_alist), \
        (p).mem_cnt=(va_iargnum(va_alist)>NINTREGS? \
                        va_iargnum(va_alist)-NINTREGS : 0) + \
                     (va_dargnum(va_alist)>NFLTREGS? \
                        (va_dargnum(va_alist)-NFLTREGS)*DSIZE :0) )

#define va_end(p)
#define va_arg(p,mode) \
    (*(mode *)__gh_va_arg(&p, va_regtyp(mode), va_float(mode), sizeof(mode)))
char *__gh_va_arg();

# endif /* !defined (__SoftwareFloat */
#else /* !defined(__ghs_stdcall) */

#if defined(m88k) | defined(__m88k)

/* This structure must be the same as the structure in stdarg.h */
typedef struct _va_struct {int va_narg; int *va_stkaddr; int*va_iregs;} va_list;

/* [JY] Thu Aug 13 17:47:17 PDT 1992.  Experimental varargs.h for __STDC__    */
#ifdef __STDC__			/* You SHOULD be using stdarg.h NOT varargs.h */
#define va_alist __va_alist	/* in Ansi mode, compiler looks for __va_alist*/
#define va_dcl __va_type __va_alist;
#define va_start(p) \
((p).va_narg=(int *)&__va_alist-__va_stkarg, \
 (p).va_stkaddr=__va_stkarg, \
 (p).va_iregs=(int *)__va_intreg)
#define va_end(p)
#if defined(LittleEndian)
#define va_arg(p,mode) \
    (*(mode *)_gh_va_arg(&p, __va_align(mode), __va_regtyp(mode), sizeof(mode)))
#else
#define va_arg(p,mode) ( \
    (p).va_narg += ((p).va_narg & (__va_align(mode)==8)) + (sizeof(mode)+3)/4, \
    ((mode *)((__va_regtyp(mode)&&(p).va_narg<=8?(p).va_iregs:(p).va_stkaddr)+(p).va_narg))[-1])
#endif
#else	/* not __STDC__ */
#define va_dcl va_type va_alist;
#define va_start(p) \
((p).va_narg=(int *)&va_alist-va_stkarg, \
 (p).va_stkaddr=va_stkarg, \
 (p).va_iregs=(int *)va_intreg)
#define va_end(p)
#if defined(LittleEndian)
#define va_arg(p,mode) \
    (*(mode *)_gh_va_arg(&p, va_align(mode), va_regtyp(mode), sizeof(mode)))
#else
/* This version should work for small structs and also for char and short */
#define va_arg(p,mod)(*(mod*) \
      ((char*)((((p).va_narg+=((p).va_narg&(va_align(mod)==8))), \
	       (((p).va_narg+=(sizeof(mod)+3)/4)-(sizeof(mod)+3)/4)+ \
	       ((va_regtyp(mod)&&(p).va_narg<8)?(p).va_iregs:(p).va_stkaddr)))+\
	       (va_regtyp(mod)?((sizeof(mod)==1)?3:(sizeof(mod)==2)?2:0):0)))
#endif	/* LittleEndian */

#endif  /* __STDC__ */

#else	/* m88k */

#if defined(i860) | defined(__i860)
# ifndef nonABI

typedef struct {
	int va_iarg;
	int va_darg;
	char *va_stkaddr;
	int *va_iregs;
	double *va_dregs;
} va_list;

/*GWW: On the 860 va_type must not be a registerable datatype*/
#define va_dcl      va_type va_alist;

#define va_start(ap)  ( (ap).va_iarg=va_iargnum(va_alist), \
			    (ap).va_darg=va_dargnum(va_alist), \
			    (ap).va_stkaddr= (char*)&(va_alist), \
			    (ap).va_iregs = va_intreg-1, \
			    (ap).va_dregs = va_dblreg-1 )

/* Glaring assumption: all reg types are passed as either ints/doubles */
/* still true under ANSI for ... */
#define va_arg(ap,type)\
    ( ((va_regtyp(type)&&sizeof(type)==sizeof(int)&&(ap).va_iarg<12)? \
		    (++(ap).va_iarg, *((type*) ((ap).va_iregs+(ap).va_iarg))): \
	(va_regtyp(type)&&sizeof(type)==sizeof(double)&&(ap).va_darg<4)? \
		    (++(ap).va_darg, *((type*) ((ap).va_dregs+(ap).va_darg))): \
	    (((type *) ((ap).va_stkaddr= \
		((char*) (((int)(ap).va_stkaddr+va_align(type)-1)&-va_align(type))) \
		+ sizeof(type)))[-1]) \
    ))

#define va_end(ap)

# else			/* old calling convention */
typedef struct {
	int va_narg;
	char *va_stkaddr;
	int *va_iregs;
	double *va_dregs;
} va_list;

#define va_dcl      va_type va_alist;

#define va_start(ap)  ( (ap).va_narg=va_argnum(va_alist), \
			    (ap).va_stkaddr= (char*)&(va_alist), \
			    (ap).va_iregs = va_intreg-1, \
			    (ap).va_dregs = va_dblreg-1 )

/* Glaring assumption: all reg types are passed as either ints/doubles */
/* still true under ANSI for ... */
#define va_arg(ap,type)\
    ( ++(ap).va_narg, \
	((va_regtyp(type)&&sizeof(type)==sizeof(int)&&(ap).va_narg<=13)? \
		    *((type*) ((ap).va_iregs+(ap).va_narg)): \
	(va_regtyp(type)&&(ap).va_narg<=6)? \
		    *((type*) ((ap).va_dregs+(ap).va_narg)): \
	    (((type *) ((ap).va_stkaddr= \
		((char*) (((int)(ap).va_stkaddr+va_align(type)-1)&-va_align(type))) \
		+ sizeof(type)))[-1]) \
    ))

#define va_end(list)
# endif		/* ABI/old i860 calling conventions */
#else	/* i860 */

#if defined(ns32000) | defined(__ns32000)

#define va_alist va_arg0,va_arg1,va_arg2

#define va_dcl va_type va_alist;

typedef struct {
	char *va_adr[5];
	int va_narg;
} va_list;

#define va_start(list)\
( \
	(list).va_adr[0] = (char *)&va_stkarg(va_arg0,va_arg1,va_arg2), \
	(list).va_adr[1] = (char *)&va_intreg0, \
	(list).va_adr[2] = (char *)&va_dblreg0, \
	(list).va_adr[3] = (char *)&va_intreg1, \
	(list).va_adr[4] = (char *)&va_dblreg1, \
	(list).va_narg = va_argnum(va_arg0) \
)

#define va_end(list)

#define va_arg(list,mode)\
((list).va_narg++ < 2 && va_regtyp(mode) ?\
  ((mode *)((list).va_adr[2*(list).va_narg+(sizeof(mode))/8-1]))[0]:\
  ((mode *)((list).va_adr[0] = (char *)(((int)(list).va_adr[0]+va_align(mode)-1\
			    & -va_align(mode)) + sizeof(mode))))[-1]\
)

#else	/* ns32000 */

#if defined(clipper) | defined(__clipper)

#define va_alist va_arg0,va_arg1,va_arg2
#define va_dcl va_type va_alist;
typedef struct {char *va_adr[5]; int va_narg;} va_list;

#define va_start(list) (\
 (list).va_adr[0] = (char *)&va_stkarg(va_arg0,va_arg1,va_arg2),\
 (list).va_adr[1] = (char *)&va_intreg0, \
 (list).va_adr[2] = (char *)&va_dblreg0, \
 (list).va_adr[3] = (char *)&va_intreg1, \
 (list).va_adr[4] = (char *)&va_dblreg1, \
 (list).va_narg = va_argnum(va_arg0)  \
)

#define va_end(list)

#define va_arg(list,mode) (\
 (list).va_narg++ < 2 && va_regtyp(mode) \
  ?((mode *)((list).va_adr[2*((list).va_narg-1)+va_align(mode)/4]))[0] \
  :((mode *)((list).va_adr[0]=(char *)(((int)(list).va_adr[0]+va_align(mode)-1 \
					&-va_align(mode))+sizeof(mode))))[-1] \
)

#else	/* clipper */

#if defined(acp) | defined(__acp)

#define va_alist va_arg0,va_arg1,va_arg2,va_arg3,va_arg4

#define va_dcl va_type va_alist;

typedef struct {
	char *va_adr[9];
	int va_narg;
} va_list;

#define va_start(list)\
( \
	(list).va_adr[0] = (char *)&va_stkarg(va_arg0,va_arg1,va_arg2,va_arg3,va_arg4), \
	(list).va_adr[1] = (char *)&va_intreg0, \
	(list).va_adr[2] = (char *)&va_dblreg0, \
	(list).va_adr[3] = (char *)&va_intreg1, \
	(list).va_adr[4] = (char *)&va_dblreg1, \
	(list).va_adr[5] = (char *)&va_intreg2, \
	(list).va_adr[6] = (char *)&va_dblreg2, \
	(list).va_adr[7] = (char *)&va_intreg3, \
	(list).va_adr[8] = (char *)&va_dblreg3, \
	(list).va_narg = va_argnum(va_arg0) \
)

#define va_end(list)

#define va_arg(list,mode)\
((list).va_narg++ < 4 && va_regtyp(mode) ?\
  ((mode *)((list).va_adr[2*((list).va_narg-1)+va_align(mode)/4]))[0]:\
  ((mode *)((list).va_adr[0] = (char *)(((int)(list).va_adr[0]+va_align(mode)-1\
			    & -va_align(mode)) + sizeof(mode))))[-1]\
)

#else	/* acp */

#if defined(__i386) || defined(i386)

#define va_dcl int va_alist;
typedef char *va_list;
#define va_start(ap) (ap) = (char *)(&va_alist)
#define va_arg(list,mode) ((mode *)(list =\
	    (char *) ((((int)list + 3) & -4)+ sizeof(mode))))[-1]
#define va_end(ap)

#else /* 386 */

#if	((defined(m68k) || defined(__m68k)) && (defined(__VXWORKS)))
     typedef char *va_list;
#    define va_arg(list, type)	((type *)(list += sizeof(type)))[-1]
#    define va_start(list, last_arg)	(list = (va_list)(&last_arg + 1))
#else /* 68k vxWorks */
		
#if 0 && (defined(ARM) || defined(__ARM)) && !(defined(__VXWORKS) && defined(__SoftwareFloat))

/* Fri Jul 13 16:43:56 PDT 2001, ARM has changed their calling convention
   for hardware floating point such that they should be passed in integer
   registers for any varargs call.  We will no longer need this specialized
   varargs handling. */
		
/* [TRZ] Fri Sep  4 00:55:25 1998 */
/* For VxWorks and software float, use the default implementation */
/* which is va_list compatible with the GNU implementation */
/* The K+R version requires the following kludge lines */
#define __va_dargnum va_dargnum
#define va_dcl int va_alist;
/* End kludge lines */

#define va_end(ap)

    /* Remember to keep varargs.h and stdargs.h synchronized */

    typedef struct __greg_va_struct {
	int va_darg; /* the number of arguments in the fregs so far */
	int va_pos; /* the offset in the stack array */
	char *va_addr; /* the stack array */
    } va_list[1];
    
#define va_start(ap          ) ((ap)[0].va_darg = __va_dargnum(va_alist), \
				(ap)[0].va_pos = 0, \
				(ap)[0].va_addr = (char*)&va_alist)

/* the floating point register size */
#ifdef __ARMVE
#	define FR_SIZE	16
#else
#	define FR_SIZE  8
#endif

#define va_arg(p,mode) ( \
 ((p)[0].va_darg += __va_float(mode) ? 1 : 0), \
 ((p)[0].va_pos += (__va_float(mode) && ((p)[0].va_darg <= 4)) ? \
                   0 : ((sizeof(mode)+3)&~3)), \
 ((mode *)((p)[0].va_addr + \
           ((__va_float(mode) && ((p)[0].va_darg <= 4)) ? \
    /* Code for if it's from a float register */         \
    /* Remember we added one already */                  \
    	      (FR_SIZE * ((p)[0].va_darg - 5)) : \
    /* Code for if it's in the main stack area */        \
              ((p)[0].va_pos - ((sizeof(mode)+3)&~3)) \
          )) \
 )[0]      \
)

#elif (defined(ARM) || defined(__ARM)) /*&& (defined(__VXWORKS) && defined(__SoftwareFloat))*/

/* [TRZ] Fri Sep  4 00:55:25 1998 */
/* For VxWorks and software float, use the default implementation */
/* which is va_list compatible with the GNU implementation */

#define va_dcl int va_alist;
typedef char *va_list;
#define va_start(ap) (ap) = (char *)(&va_alist)
#define va_arg(list, mode) ((mode *)(list = (char *) \
	(((va_align(mode)<=4) ? (((int)list+3)&~3) : (((int)list+7)&~7)) \
		+ sizeof(mode))))[-1]
#define va_end(ap)

#else /* ARM */

#if defined(sparc) || defined(__sparc)
typedef char *va_list;
#define va_alist __builtin_va_alist
#define va_dcl int va_alist;
#define va_start(ap) (ap) = (char *)(&va_alist)

/* DAVEK: fixed to do what Sun does: see /usr/include/varargs.h on a Sparc */
#if defined(__BUILTIN_VA_ARG_INCR)
#define va_arg(ap,mode)	((mode*)__builtin_va_arg_incr((mode *)ap))[0]
#else
#define va_arg(ap,mode)	*((mode *)(ap))++
#endif

#define va_end(ap)
#else	/* sparc */

#if defined(mips) || defined(__mips) || defined(__nCPU) 
typedef char *va_list;
#define va_dcl int va_alist;
#define va_start(ap) (ap) = (char *)(&va_alist)
#if __REG_BIT != 64
#define va_arg(list, mode) ((mode *)(list = (char *)\
 ((va_align(mode)<=4)?((int)list + ((sizeof(mode)+3)&-4)): \
 ((((int)list + 7) & -8) + sizeof(mode)))))[-1]
#else /* 64 bit regs means 8 bytes for all args here */
#ifdef __BigEndian
#define va_arg(list, mode) ((mode *)(list = (va_regtyp(mode) ? \
 (char *) ((((int)list + 7) & -8) + 8) : \
 (char *) ((((int)list + 7) & -8) + (int)sizeof(mode)))))[-1]
#else /* __LittleEndian */
#define va_arg(list, mode) ((mode *)(list = (char *)\
 ((((int)list + 7) & -8) + (int)sizeof(mode))))[-1]
#endif /* Endian */
#endif	/*  __REG_BIT != 64 */
#define va_end(ap)
#else	/* mips */

#if defined(V810) || defined(__V810)
typedef char *va_list;
#define va_dcl int va_alist;
#define va_start(ap) (ap) = (char *)(&va_alist)
#define va_arg(list, mode) ((mode *)(list =\
 (char *) ((((int)list + (va_align(mode)<=4?3:7)) &\
 (va_align(mode)<=4?-4:-8))+sizeof(mode))))[-1]
#define va_end(ap)
#else /* V810 */

#if defined(V850) || defined(__V850) || defined(V830) || defined(__V830) \
	|| defined(V830R) || defined(__V830R)

/* [edlee] Wed Jul  6 10:51:13 PDT 1994. V850 and V830: align stack only
 * to 4-byte boundary instead of 8, without changing the calling convention:
 * "double"s are still "aligned" to a multiple of 8 bytes from the 1st arg.
 * For varargs, va_stkmod7 remembers if va_stkarg for the original "..."
 * was 8-byte aligned or not ("va_stkarg&7").
 * Update va_list for the current argument.  If va_align(current argument) > 4,
 * meaning it's a double, we check the current argument's address (va_list's
 * value) with the orginal "..." va_stkarg's alignment (va_stkmod7).  If
 * they're not both 8-byte aligned from "...", then add 4 bytes to va_list.
 * Otherwise, don't do anything.  Then we align va_list to 4-bytes.
 */
typedef struct { char *va_list; int va_stkmod7; } va_list;
#define va_dcl int va_alist;

#define va_start(ap) ((ap).va_list= (char *)&va_alist, \
			((ap).va_stkmod7 = (int)va_stkarg&7) )

#define va_arg(p, mode) ((mode *)((p).va_list = (char *) (((int)(p).va_list + \
(va_align(mode)>4?(((p).va_stkmod7 !=((int)(p).va_list&7))*4):0)+ 3) & ~3) + \
sizeof(mode)))[-1]

#define va_end(ap)

#else  /* V850 || V830 || V830R */

#if (defined(ppc) || defined(__ppc)) & !defined(__Lynx) && !defined(__PPC64_ABI__)
#ifdef __COFF /* Use stdarg.h instead.  Warn for COFF customer.  */
#error varargs.h is not supported for coffppc.  Use stdarg.h instead.
#endif
#ifndef __EABI10
typedef struct {int *oflo_ptr,*reg_ptr,int_cnt,FP_cnt,mem_cnt;} va_list;
#define va_dcl struct {int x;} va_alist;
#define va_start(p) \
((p).oflo_ptr=(int *)(&va_alist), \
 (p).reg_ptr=(int *)va_intreg, \
 (p).int_cnt= va_iargnum(va_alist)-1, \
 (p).FP_cnt=  va_dargnum(va_alist), \
 (p).mem_cnt=0)
#define va_end(p)
#define va_arg(p,mode) \
    (*(mode *)__gh_va_arg(&p, va_regtyp(mode), va_float(mode), sizeof(mode)))
char *__gh_va_arg();
#else
typedef char *va_list;
#define va_dcl int va_alist;
#define va_start(ap) (ap) = (char *)(&va_alist)
#    define va_arg(list,mode) ((mode *)(list =\
	    (char *) ((((int)list + 3) & -4)+ sizeof(mode))))[-1]
#define va_end(ap)
#endif /* __EABI10 */
#else  /* ppc */

#if defined(SH7000) || defined(__SH7000)

typedef char *va_list;
#define va_dcl int va_alist;
#define va_start(ap) (ap) = (char *)(&va_alist)
#    define va_arg(list,mode) ((mode *)(list =\
	    (char *) ((((int)list + 3) & -4)+ sizeof(mode))))[-1]
#define va_end(ap)

#else	/* SH7000 */

#if defined(FR20) || defined(__FR20) || (defined(__ppc) && defined(__Lynx))

typedef char *va_list;

#define va_dcl int va_alist;
#define va_start(ap) (ap) = (char *)(&va_alist)
#define va_arg(ap,mode)	(!va_regtyp(mode) ? **(mode **)((ap += 4) - 4) :\
    *(mode *)((ap += (((int)sizeof(mode)+3)&~3)) - (((int)sizeof(mode)+3)&~3)))

#define va_end(ap)

#elif defined(__ppc) && defined(__PPC64_ABI__)

typedef char *va_list;
#define va_dcl int va_alist;
#define va_start(ap) (ap) = (char *)(&va_alist)
                                                                                       
#ifdef __BigEndian
#define va_arg(list, mode) ((mode *)(list = (va_regtyp(mode) ? \
 (char *) ((((long)list + (va_vector(mode)?15:7)) & (va_vector(mode)?-16:-8)) + (va_vector(mode)?16:8)) : \
 (char *) ((((long)list + (va_vector(mode)?15:7)) & (va_vector(mode)?-16:-8)) + (int)sizeof(mode)))))[-1]
#else /* __LittleEndian */
#define va_arg(list, mode) ((mode *)(list = (char *)\
 ((((long)list + (va_vector(mode)?15:7)) & (va_vector(mode)?-16:-8)) + (int)sizeof(mode))))[-1]
#endif
#define va_end(ap)

#elif defined(__NDR)

typedef char *va_list;
#define va_dcl int va_alist;
#define va_start(ap) (ap) = (char *)(&va_alist)
#define va_arg(list, mode) ((mode *)(list =\
 (char *) ((((int)list + (va_align(mode)<=4?3:7)) &\
 (va_align(mode)<=4?-4:-8))+sizeof(mode))))[-1]
#define va_end(ap)

#elif defined(__StarCore__) || defined(__SC3__)

typedef char *va_list;
#define va_dcl int va_alist;
#define va_start(ap) (ap) = (char *)(&va_alist)+4
#define va_arg(list,mode) ((list = (char *)(((int)list - ((sizeof(mode)+3) & -4)) \
				& (va_align(mode)<=4 ? -1 : -8)) ), \
	    (*(mode *)((char *)list)))

#else	/* FR20 */
/* Default case */
#ifdef __ARM64__
#error varargs.h not supported on this architecture
#endif
typedef char *va_list;
#define va_dcl int va_alist;
#define va_start(ap) (ap) = (char *)(&va_alist)
#define va_arg(ap,mode)	*((mode *)(ap))++
#if defined(ColdFire) || defined(__ColdFire) || ((defined(m68k) || defined(__m68k)) && (defined(__ELF) || defined(ELF)))
#undef va_arg
#if (__ghs_alignment == 4)
#define va_arg(list,mode) ((mode *)(list =\
	    (char *) ((((int)list + 3) & -4)+ sizeof(mode))))[-1]
#else
#define va_arg(list,mode) ((mode *)(list =\
	    (char *) ((((int)list + 1) & -2)+ sizeof(mode))))[-1]
#endif
#endif
#define va_end(ap)

#endif	/* FR20 */
#endif	/* SH7000 */
#endif  /* ppc */
#endif  /* V850 */
#endif	/* V810 */
#endif	/* mips */
#endif	/* sparc */
#endif  /* ARM */
#endif  /* 68k vxWorks */
#endif  /* 386 */
#endif	/* acp */
#endif	/* clipper */
#endif	/* ns32000 */
#endif	/* i860 */
#endif	/* m88k */
#endif	/* __ghs_stdcall */

#ifdef __ghs__
#pragma ghs endnomisra
#endif

#endif	/* __GH_VARARGS_H */

