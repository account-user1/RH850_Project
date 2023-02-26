/* Copyright 1999-2013 The MathWorks, Inc. */

/* 
   Polyspace standard declarations.

   polyspace__std_decls.h

   Include those declarations at the beginning of each preprocessed file.

   WARNING: the declarations below must refer only to standard types 
   as we do not want to include possibly useless standard include files.
   For example, we do not refer to size_t in declaration of malloc.
*/

#ifndef POLYSPACE_STD_DECLS
#define POLYSPACE_STD_DECLS

/* Include the macro for assert */
#include <assert.h>

/* stdarg.h */
/* Always include Polyspace stdarg.h to override specific OS stdarg.h */
#include <stdarg.h>

#ifndef __cplusplus


#define __PST_THROW

/* stdlib.h */
/* Those are necessary to prevent problems at the link */
extern void *malloc();
extern void *calloc();
extern void *realloc();
extern void *valloc();
extern void *alloca();
extern void *__builtin_alloca();


/*
 * KEIL & IAR DECLARATIONS :
 */

/* If NOEXTEND is used, there is no need to redefine Keil extensions because */
/* the Keil specifications indicate that they are deactivated.               */
#if defined (__PST_KEIL_COMPILER__) && !defined(__PST_NO_KEIL_DECLS__) && !defined(NO_EXTEND)

/* Those defines are set automatically by the Keil compiler               */
/* We can't know their exact value. So, the user should set them manually */
/* if they are used in the application.                                   */

//#define __C166__ 300
//#define __FLOAT64__ 0
//#define __MOD167__ 1
//#define __MODEL__ 6
//#define __STDC__ 1

#ifndef __PST_KEIL_NO_KEYWORDS__

/* Those defines are used to remove some non-standard keywords */
#define bdata
#define far
#define huge
#define idata
#define near
#define sdata
#define reentrant
#ifdef __C51__
#define large
#define code
#define data
#define xdata
#define pdata
#define xhuge
// #elif ! defined(__C51__) && ! defined(__C166__) && ! defined(__C167__)
// warning : __C51__, __C166__ and __C167__ undefined :
// warning   code, data, xdata and xhuge are not reserved keywords.
#endif

#define _interrupt interrupt
#define __interrupt interrupt
#define _interrupt_ interrupt
#define __interrupt__ interrupt
#define _using using
#define __using using
#define _using_ using
#define __using__ using

#endif /* __PST_KEIL_NO_KEYWORDS__ */

#endif /* __PST_KEIL_COMPILER__ */


#if defined (__PST_IAR_COMPILER__) && !defined(__PST_NO_IAR_DECLS__) && !defined(NO_EXTEND)

/* Those defines are set automatically by the IAR compiler                */
/* We can't know their exact value. So, the user should set them manually */
/* if they are used in the application.                                   */

#ifndef __PST_IAR_NO_FLAG__

#ifndef __IAR_SYSTEMS_ICC__
#define __IAR_SYSTEMS_ICC__ 1
#endif /* __IAR_SYSTEMS_ICC__ */

#ifndef __TID__
#define __TID__ 14
#endif /* __TID__ */

// #define __STDC__ 1
// #define __VER__ 334

#endif /* __PST_IAR_NO_FLAG__ */

#ifndef __PST_IAR_NO_KEYWORDS__

/* Those defines are used to remove some non-standard keywords */
#define __no_init no_init
#define saddr
#define reentrant
#define reentrant_idata
#define non_banked
#define plm
#define bdata
#define idata
#define pdata
#define __intrinsic
#if __TID__ == 14
#define code
#define data
#define xdata
#define xhuge
#elif ! defined(__TID__)
  // warning : __TID__ undefined :
  // warning   code, data, xdata and xhuge are not reserved keywords.
#endif

#define _interrupt interrupt
#define __interrupt interrupt
#define _interrupt_ interrupt
#define __interrupt__ interrupt
#define _using using
#define __using using
#define _using_ using
#define __using__ using
#define _monitor monitor
#define __monitor monitor
#define _monitor_ monitor
#define __monitor__ monitor

#endif /*__PST_IAR_NO_KEYWORDS__*/

#endif /* __PST_IAR_COMPILER__ */

#else /* if defined(__cplusplus) */

#ifndef __SIZE_TYPE__
# error Internal error __SIZE_TYPE__  should have been defined
#endif /* !defined(__SIZE_TYPE__) */

#ifndef __PTRDIFF_TYPE__
# error Internal error __PTRDIFF_TYPE__ should have been defined
#endif /* !defined(__PTRDIFF_TYPE__) */

#ifndef _WCHAR_T
   /* force definition of wchar_t type in case it is not a keyword */
   typedef __WCHAR_TYPE__ wchar_t ;
#endif

#define PST_LINK_C extern "C"

#ifdef PST_VISUAL
#  define PST_DECL_C    __cdecl
#  define PST_NO_RETURN __declspec(noreturn)
#else 
#  define PST_DECL_C
#  define PST_NO_RETURN
#endif

#ifdef PST_VISUAL
/* copied from stdlib.h */
#  ifdef  _DLL
#    define PST_IMPORT __declspec(dllimport)
#  else   /* ndef _DLL */
#    define PST_IMPORT
#  endif  /* _DLL */
#else
#  define PST_IMPORT
#endif

/* for definition : do not provide __declspec(dllimport/dllexport) 
    FE allows if declaration contains __declspec(dllimport) AND definition contains nothing
*/

#define PST_STUB_C_DEF(func_return,func_name,func_args)           \
      extern     func_return PST_DECL_C __pst_profile__##func_name func_args  ;    \
      PST_LINK_C func_return PST_DECL_C                  func_name func_args

/* for declaration : provide a __declspec(dllimport) if visual does it
     FE give an error if first declaration does not use dllimport and a later re-declaration use it 
 */

#define PST_STUB_C_DECL(func_return,func_name,func_args)                                   \
      extern     PST_IMPORT func_return PST_DECL_C  __pst_profile__##func_name func_args;  \
      PST_LINK_C PST_IMPORT func_return PST_DECL_C func_name                   func_args

/* function that are declared with declspec(noreturn) in visual : abort, exit */

#define PST_STUB_C_DEF_NO_RETURN(func_return,func_name,func_args)                             \
     extern     PST_NO_RETURN func_return PST_DECL_C  __pst_profile__##func_name func_args ;  \
     PST_LINK_C PST_NO_RETURN func_return PST_DECL_C func_name                   func_args

#define PST_STUB_C_MACRO_REPLACEMENT_FUNC_DEF(func_return,func_name,func_args) \
    PST_LINK_C func_return __polyspace_macro_##func_name func_args

#ifdef PST_EMBEDDED 
#undef PST_HAS_NAMESPACE
#undef PST_HAS_EXCEPTION
#endif

/* Predeclare errno. Macros that would define errno will be deactivated */
extern "C" int errno;

/* 
   C++Prover has full built-in support for stdarg.h.
   We give here definition of va_list to get location in case of conflicting declarations
   We give #define that avoid get another definition for various target supported
   
*/

#ifndef _STDARG_H

#define _STDARG_H_
#define _SYS_VA_LIST_H
#define _ANSI_STDARG_H_
#define __GNUC_VA_LIST
#define __INCstdargh
#define _STDARG_INCLUDED

#define _VA_LIST
#define _VA_LIST_DEFINED

#if (defined PST_VISUAL) && (_MSC_VER>=1400)
  /* Visual 2005 defines va_list stuff in vadefs.h, bypass it */
# define _crt_va_end va_end
# define _crt_va_arg va_arg
# define _crt_va_start va_start
# define _INC_VADEFS
#endif

typedef void *__va_list;
typedef __va_list __gnuc_va_list;


#ifdef PST_GNU
typedef      __va_list va_list;

/* emulation of gnu builtin */

typedef __va_list __builtin_va_list ;

#define __builtin_stdarg_start va_start
#define __builtin_va_start     va_start
#define __builtin_va_arg       va_arg
#define __builtin_va_copy      va_copy
#define __builtin_va_end       va_end

#endif /* PST_GNU */

#endif /* _STDARG_H */


/* stdlib.h */

#if defined(PST_HAS_STD_DEF) && \
    (defined(__OS_SOLARIS) || defined(__OS_LINUX) || defined(__OS_VXWORKS) || defined(__OS_VISUAL) || defined(PST_GNU))

/* We have some standard includes in -I,
   so we can force include of stddef.h for complete declarations of malloc and Cie */

#include <stddef.h>

#if (defined(PST_HAS_SYS_CDEFS) && ((__GNUC__ > 2) || (__GNUC__ == 2 && __GNUC_MINOR__ >= 8))) && (! defined(POLYSPACE_LIBC_NO_THROW))
# define __PST_THROW throw ()
#else
# define __PST_THROW
#endif

#if defined(PST_VISUAL) && (_MSC_VER >= 1400)
# define __PST_CRTNOALIAS __declspec(noalias)
#else
# define __PST_CRTNOALIAS
#endif

/* extern "C" is taken into account in PST_STUB_C_DECL */

PST_STUB_C_DECL(void *, malloc,  (size_t)) __PST_THROW;
PST_STUB_C_DECL(void *, calloc,  (size_t, size_t)) __PST_THROW;
PST_STUB_C_DECL(void *, realloc, (void *, size_t)) __PST_THROW;
PST_STUB_C_DECL(void *, valloc,  (size_t)) __PST_THROW;
PST_STUB_C_DECL(void *, alloca,  (size_t)) __PST_THROW;
#ifndef PST_GNU
PST_STUB_C_DECL(void *,__builtin_alloca, (size_t)) __PST_THROW;
#endif
PST_STUB_C_DECL(__PST_CRTNOALIAS void,free,(void *)) __PST_THROW;

#else
# define __PST_THROW
#endif

#ifndef PST_NO_DECLARE_FD_MACROS_AS_FUNCTION

PST_STUB_C_MACRO_REPLACEMENT_FUNC_DEF(int, FD_ISSET, (int fd, const void *fdset)) ;
PST_STUB_C_MACRO_REPLACEMENT_FUNC_DEF(void, FD_SET, (int fd, void *fdset)) ;
PST_STUB_C_MACRO_REPLACEMENT_FUNC_DEF(void, FD_ZERO, (void *fdset)) ;
PST_STUB_C_MACRO_REPLACEMENT_FUNC_DEF(void, FD_CLR, (int fd, void *fdset)) ;

#endif /* PST_NO_DECLARE_FD_MACROS_AS_FUNCTION */

#ifndef PST_NO_DECLARE_HUGE_VAL_MACROS

PST_LINK_C volatile      double HUGE_VAL ;
PST_LINK_C volatile float       HUGE_VALF ;
PST_LINK_C volatile long double HUGE_VALL ;

#endif /* PST_NO_DECLARE_HUGE_VAL_MACROS */

#endif /* __cplusplus */

#endif
