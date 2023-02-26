/* yvals.h values header for conforming compilers on various systems */
#ifndef _YVALS
#define _YVALS
#include <stdarg.h>

#if defined(__ghs)
 #define __GHS_PRAGMAS 1
#endif

#define _CPPLIB_VER	402
#if defined(__GHS_PRAGMAS)
#pragma ghs debugstring "datavisu.stl pjp_v402.mdv"
#endif

#if defined(__ghs)
# if defined (__LINUX)
#  include <features.h>	/* for __THROW.  features.h will be include'd eventually anyway. */
# endif
# if (defined(__sun) && (defined(__sysV4) || defined(SUNOS)) /* Solaris native */ \
	|| (defined(_WIN32) && defined(_MT))) /* Win32 */
#  include <stdio.h> /* needed for Solaris & Windows */
# elif defined(__VXWORKS) /* vxWorks */
#  include <vxWorks.h>
#  include <semLib.h>
#  include <stdio.h>
# endif
#endif /* defined(__ghs) */

#if defined(__ghs) || defined(__SC3__)
/* GHS moved _Uninitialized here from xstddef for use in _Mutex */
enum _Uninitialized
	{	// tag for suppressing initialization
	_Noinit};

enum _LockOverridden
{ /* tag for suppressing lock allocation/initialization */
  _InitWithoutLock
};
#endif /* __ghs */

/* You can predefine (on the compile command line, for example):

_ALT_NS=1 -- to use namespace _Dinkum_std for C++
_ALT_NS=2 -- to use namespace _Dinkum_std for C++ and C
_C_AS_CPP -- to compile C library as C++
_C_IN_NS -- to define C names in std/_Dinkum_std instead of global namespace
_C99 -- to turn ON C99 library support
_ABRCPP -- to turn ON Abridged C++ dialect (implies _ECPP)
_ECPP -- to turn ON Embedded C++ dialect
_NO_EX -- to turn OFF use of try/throw
_NO_MT -- to turn OFF thread synchronization
_NO_NS -- to turn OFF use of namespace declarations
_STL_DB (or _STLP_DEBUG) -- to turn ON iterator/range debugging
__NO_LONG_LONG -- to define _Longlong as long, not long long

You can change (in this header):

_ADDED_C_LIB -- from 1 to 0 to omit declarations for C extensions
_COMPILER_TLS -- from 0 to 1 if _TLS_QUAL is not nil
_EXFAIL -- from 1 to any nonzero value for EXIT_FAILURE
_FILE_OP_LOCKS -- from 0 to 1 for file atomic locks
_GLOBAL_LOCALE -- from 0 to 1 for shared locales instead of per-thread
_HAS_IMMUTABLE_SETS -- from 1 to 0 to permit alterable set elements
_HAS_STRICT_CONFORMANCE -- from 0 to 1 to disable nonconforming extensions
_HAS_TRADITIONAL_IOSTREAMS -- from 1 to 0 to omit old iostreams functions
_HAS_TRADITIONAL_ITERATORS -- from 0 to 1 for vector/string pointer iterators
_HAS_TRADITIONAL_POS_TYPE -- from 0 to 1 for streampos same as streamoff
_HAS_TRADITIONAL_STL -- from 1 to 0 to omit old STL functions
_IOSTREAM_OP_LOCKS -- from 0 to 1 for iostream atomic locks
_TLS_QUAL -- from nil to compiler TLS qualifier, such as __declspec(thread)
_USE_EXISTING_SYSTEM_NAMES -- from 1 to 0 to disable mappings (_Open to open)

Include directories needed to compile with Dinkum C:

C -- include/c
C99 -- include/c (define _C99)
Embedded C++ -- include/c include/embedded (define _ECPP)
Abridged C++ -- include/c include/embedded include (define _ABRCPP)
Standard C++ -- include/c include
Standard C++ with export -- include/c include/export include
	(--export --template_dir=lib/export)

Include directories needed to compile with native C:

C -- none
C99 -- N/A
Embedded C++ -- include/embedded (define _ECPP)
Abridged C++ -- include/embedded include (define _ABRCPP)
Standard C++ -- include
Standard C++ with export -- include/export include
	(--export --template_dir=lib/export)
 */

#if defined(__ghs) || defined(__SC3__)
/* Configure build/compile time macros */

 #if defined(__EXCEPTION_HANDLING)
  #define _HAS_EXCEPTIONS	1
 #else	/* __EXCEPTION_HANDLING */
  #define _HAS_EXCEPTIONS	0
 #endif	/* __EXCEPTION_HANDLING */

 #if defined(__NAMESPACES) && !defined(__EMBEDDED_CXX_HEADERS)
  #define _HAS_NAMESPACE	1
 #else	/* __NAMESPACES */
  #define _HAS_NAMESPACE	0
 #endif	/* __NAMESPACES */

 #define _HAS_STRICT_CONFORMANCE 1

#endif /* __ghs */


 #ifndef __STDC_HOSTED__
  #define __STDC_HOSTED__	1
 #endif /* __STDC_HOSTED__ */

 #ifndef __STDC_IEC_559__
  #define __STDC_IEC_559__	1
 #endif /* __STDC_IEC_559__ */

 #ifndef __STDC_IEC_559_COMPLEX__
  #define __STDC_IEC_559_COMPLEX__	1
 #endif /* __STDC_IEC_559_COMPLEX__ */

 #ifndef __STDC_ISO_10646__
  #define __STDC_ISO_10646__	200009L	/* match glibc */
 #endif /* __STDC_ISO_10646__ */

		/* DETERMINE MACHINE TYPE */

#if !(defined(__ghs) || defined(__SC3__))
 #if defined(i386) || defined(__i386) \
	|| defined(__i386__) || defined(_M_IX86)	/* Pentium */
  #define _D0		3	/* 0: big endian, 3: little endian floating-point */

  #if defined(__BORLANDC__) && !__EDG__
   #pragma warn -inl
   #define _DLONG	1	/* 0: 64, 1: 80, 2: 128 long double bits */
   #define _LBIAS	0x3ffe	/* 80/128 long double bits */
   #define _LOFF	15	/* 64 long double bits */

  #elif defined(__MINGW32__)
   #define _DLONG	1	/* 0: 64, 1: 80, 2: 128 long double bits */
   #define _LBIAS	0x3ffe	/* 80/128 long double bits */
   #define _LOFF	15	/* 64 long double bits */

  #elif defined(_M_IX86)
   #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
   #define _LBIAS	0x3fe	/* 64 long double bits */
   #define _LOFF	4	/* 64 long double bits */

  #else /* defined(_M_IX86) */
   #define _DLONG	1	/* 0: 64, 1: 80, 2: 128 long double bits */
   #define _LBIAS	0x3ffe	/* 80/128 long double bits */
   #define _LOFF	15	/* 80/128 long double bits */
  #endif /* defined(_M_IX86) */

  #define _FPP_TYPE	_FPP_X86	/* Pentium FPP */

 #elif defined(sparc) || defined(__sparc)	/* SPARC */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	2	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3ffe	/* 80/128 long double bits */
  #define _LOFF		15	/* 80/128 long double bits */
  #define _FPP_TYPE	_FPP_SPARC	/* SPARC FPP */

  #if defined(__arch64__)
   #define _MACH_PDT	long
   #define _MACH_SZT	unsigned long
  #endif /* defined(__arch64__) */

 #elif defined(_MIPS) || defined(_MIPS_) || defined(_M_MRX000)		/* MIPS */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_MIPS	/* MIPS FPP */

  #define _MACH_PDT	long
  #define _MACH_SZT	unsigned long

 #elif defined(__s390__)	/* IBM S/390 */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_S390	/* S/390 FPP */

  #define _MACH_PDT	long
  #define _MACH_SZT	unsigned long

 #elif defined(__ppc__) || defined(_POWER) || defined(_M_PPC)	/* PowerPC */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_PPC	/* PowerPC FPP */

  #if defined(__APPLE__)
   #define _MACH_I32	int
   #define _MACH_PDT	int
   #define _MACH_SZT	unsigned long
  #endif /* defined(__APPLE__) */

 #elif defined(__hppa)	/* HP PA-RISC */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	2	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3ffe	/* 80/128 long double bits */
  #define _LOFF		15	/* 80/128 long double bits */
  #define _FPP_TYPE	_FPP_HPPA	/* Hewlett-Packard PA-RISC FPP */

 #elif defined(_M_ALPHA)	/* Alpha */
  #define _D0		3	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_ALPHA	/* Compaq Alpha */

 #elif defined(_ARM_)	/* ARM */
  #define _D0		3	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_ARM	/* ARM ARM FPP */

 #elif defined(_M68K)	/* Motorola 68K */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	1	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3ffe	/* 80/128 long double bits */
  #define _LOFF		15	/* 80/128 long double bits */
  #define _FPP_TYPE	_FPP_M68K	/* Motorola 68xxx FPP */

 #elif defined(_SH4_)	/* SH4 */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_SH4	/* Hitachi SH4 FPP */

 #elif defined(_M_IA64)	/* IA64 */
  #define _D0		3	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
  #define _FPP_TYPE	_FPP_IA64	/* Intel IA64 FPP */

 #else /* system detector */
/* #error unknown compilation environment, guess big-endian */
  #define _D0		0	/* 0: big endian, 3: little endian floating-point */
  #define _DLONG	0	/* 0: 64, 1: 80, 2: 128 long double bits */
  #define _LBIAS	0x3fe	/* 64 long double bits */
  #define _LOFF		4	/* 64 long double bits */
 #endif /* system detector */
#endif /* __ghs */

		/* DETERMINE _Ptrdifft AND _Sizet FROM MACHINE TYPE */

 #if defined(_MACH_I32)
typedef _MACH_I32 _Int32t;
typedef unsigned _MACH_I32 _Uint32t;

 #else /* defined(_MACH_I32) */
typedef long _Int32t;
typedef unsigned long _Uint32t;
 #endif /* defined(_MACH_I32) */

 #if defined(_MACH_PDT)
typedef _MACH_PDT _Ptrdifft;
 #elif defined(__ghs) && defined(_MC_EXEC)
/* nothing */
 #else /* defined(_MACH_PDT) */
typedef int _Ptrdifft;
 #endif /* defined(_MACH_PDT) */

 #if defined(_MACH_SZT)
typedef _MACH_SZT _Sizet;
 #elif defined(_WIN64)
typedef unsigned long long _Sizet;
 #elif defined(__ghs) && defined(_MC_EXEC)
/* nothing */
 #else /* defined(_MACH_SZT) */
typedef unsigned int _Sizet;
 #endif /* defined(_MACH_SZT) */

 #if defined(__linux)
  #define _LINUX_C_LIB	1	/* Linux-specific conventions */
 #endif /* defined(__linux) */

 #if defined(_M_IX86) || defined(_M_MRX000) || defined(_M_PPC) \
	|| defined(_M_ALPHA) || defined(_M_IA64) || defined(_WIN32_WCE) \
	|| defined(_M_AMD64)
  #define _WIN32_C_LIB	1	/* use Windows32 conventions */

 #elif defined(__ghs) || defined(__SC3__)
   /* do nothing */

 #else /* defined(_M_*) */
  #define _POSIX_C_LIB	1	/* use common Unix/Linux conventions */
 #endif /* defined(_M_*) */

 #if !defined(_HAS_C9X) && defined(_C99)
  #define _HAS_C9X	1
 #endif /* !defined(_HAS_C9X) etc. */

 #define _HAS_C9X_IMAGINARY_TYPE	(_HAS_C9X && __EDG__ \
	&& !defined(__cplusplus))

 #if defined(__ghs) || defined(__SC3__)
  #if !defined(_ABRCPP) && defined(__EXTENDED_EMBEDDED_CXX_HEADERS)
   #define _ABRCPP
  #endif

  #if !defined(_ECPP) && defined(__EMBEDDED_CXX_HEADERS)
   #define _ECPP
  #endif
 #endif /* __ghs */

 #if !defined(_ECPP) && defined(_ABRCPP)
  #define _ECPP
 #endif /* !defined(_ECPP) && defined(_ABRCPP) */

 #if !defined(_IS_EMBEDDED) && defined(_ECPP)
  #define _IS_EMBEDDED	1	/* 1 for Embedded C++ */
 #endif /* _IS_EMBEDDED */

		/* EXCEPTION CONTROL */
 #ifndef _HAS_EXCEPTIONS
  #ifndef _NO_EX	/* don't simplify */
   #define _HAS_EXCEPTIONS	1	/* 1 for try/throw logic */

  #else	/* _NO_EX */
   #define _HAS_EXCEPTIONS	0
  #endif /* _NO_EX */

 #endif /* _HAS_EXCEPTIONS */

		/* NAMING PROPERTIES */
/* #define _STD_LINKAGE	defines C names as extern "C++" */
/* #define _STD_USING	defines C names in namespace std or _Dinkum_std */

 #ifndef _HAS_NAMESPACE
  #ifndef _NO_NS	/* don't simplify */
   #define _HAS_NAMESPACE	1	/* 1 for C++ names in std */

  #else	/* _NO_NS */
   #define _HAS_NAMESPACE	0
  #endif /* _NO_NS */

 #endif /* _HAS_NAMESPACE */

 #if !defined(_STD_USING) && defined(__cplusplus) \
	&& (defined(_C_IN_NS) || 1 < _ALT_NS)
  #define _STD_USING	/* exports C names to global, else reversed */

 #elif defined(_STD_USING) && !defined(__cplusplus)
  #undef _STD_USING	/* define only for C++ */
 #endif /* !defined(_STD_USING) */

 #if !defined(_HAS_STRICT_LINKAGE) \
	&& __EDG__ && !defined(_WIN32_C_LIB)
  #define _HAS_STRICT_LINKAGE	1	/* extern "C" in function type */
 #endif /* !defined(_HAS_STRICT_LINKAGE) */

		/* THREAD AND LOCALE CONTROL */
#if defined(__ghs) || defined(__SC3__)
#define _MULTI_THREAD           1
#endif /* __ghs */

 #ifndef _MULTI_THREAD

  #ifdef __CYGWIN__
   #define _MULTI_THREAD	0	/* Cygwin has dummy thread library */

  #else /* __CYGWIN__ */
   #ifndef _NO_MT
    #define _MULTI_THREAD	1	/* 0 for no thread locks */

   #else
    #define _MULTI_THREAD	0
   #endif	/* _NO_MT */

  #endif /* __CYGWIN__ */
 #endif /* _MULTI_THREAD */

#if defined(__ghs) || defined(__SC3__)
#define _GLOBAL_LOCALE  1
#else
#define _GLOBAL_LOCALE	0	/* 0 for per-thread locales, 1 for shared */
#endif

#if !defined(__ghs) && !defined(__SC3__)
#define _FILE_OP_LOCKS	0	/* 0 for no FILE locks, 1 for atomic */
#endif /* !__ghs */

#if defined(__ghs) || defined(__SC3__)
#define _IOSTREAM_OP_LOCKS      1
#else /* !__ghs */
#define _IOSTREAM_OP_LOCKS	0	/* 0 for no iostream locks, 1 for atomic */
#endif /* !__ghs */

		/* THREAD-LOCAL STORAGE */
#define _COMPILER_TLS	0	/* 1 if compiler supports TLS directly */
#define _TLS_QUAL	/* TLS qualifier, such as __declspec(thread), if any */

/* [nikola] Thu May 13 11:17:36 PDT 2004
   Make set iterators mutable */
#if defined(__ghs) || defined(__SC3__)
 #define _HAS_IMMUTABLE_SETS	0
#else
 #define _HAS_IMMUTABLE_SETS	1
#endif /* __ghs */
 #define _HAS_TRADITIONAL_IOSTREAMS	1
 #define _HAS_TRADITIONAL_ITERATORS	0
 #define _HAS_TRADITIONAL_POS_TYPE	0
 #define _HAS_TRADITIONAL_STL	1

 #define _ADDED_C_LIB	1
 #define _USE_EXISTING_SYSTEM_NAMES	1 /* _Open => open etc. */

 #if !defined(_HAS_STRICT_CONFORMANCE)
  #define _HAS_STRICT_CONFORMANCE	0	/* enable nonconforming extensions */
 #endif /* !defined(_HAS_STRICT_CONFORMANCE) */

 #if !defined(_HAS_ITERATOR_DEBUGGING) \
	&& (defined(_STL_DB) || defined(_STLP_DEBUG))
  #define _HAS_ITERATOR_DEBUGGING	1	/* for range checks, etc. */
 #endif /* define _HAS_ITERATOR_DEBUGGING */

		/* NAMESPACE CONTROL */

 #if defined(__cplusplus)

 #if _HAS_NAMESPACE
namespace std {}

 #if defined(_C_AS_CPP)
  #define _NO_CPP_INLINES	/* just for compiling C library as C++ */
 #endif /* _C_AS_CPP */

 #if 0 < _ALT_NS

  #if defined(_C_AS_CPP)	/* define library in _Dinkum_std */
   #define _STD_BEGIN	namespace _Dinkum_std {_C_LIB_DECL
   #define _STD_END		_END_C_LIB_DECL }

  #else /* _C_AS_CPP */
   #define _STD_BEGIN	namespace _Dinkum_std {
   #define _STD_END		}
  #endif /* _C_AS_CPP */

  #if _ALT_NS == 1	/* define C library in global namespace */
    #define _C_STD_BEGIN
    #define _C_STD_END
    #define _CSTD		::
    #define _STD			::_Dinkum_std::

  #else	/* define both C and C++ in namespace _Dinkum_std */
    #define _C_STD_BEGIN	namespace _Dinkum_std {
    #define _C_STD_END	}
    #define _CSTD		::_Dinkum_std::
    #define _STD			::_Dinkum_std::
  #endif /* _ALT_NS */

namespace _Dinkum_std {}
namespace std {
	using namespace _Dinkum_std;
		}

 #elif defined(_STD_USING)

  #if defined(_C_AS_CPP)	/* define library in std */
   #define _STD_BEGIN	namespace std {_C_LIB_DECL
   #define _STD_END		_END_C_LIB_DECL }

  #else /* _C_AS_CPP */
   #define _STD_BEGIN	namespace std {
   #define _STD_END		}
  #endif /* _C_AS_CPP */

   #define _C_STD_BEGIN	namespace std {
   #define _C_STD_END	}
   #define _CSTD		::std::
   #define _STD			::std::

 #else /* _ALT_NS == 0 && !defined(_STD_USING) */

  #if defined(_C_AS_CPP)	/* define C++ library in std, C in global */
   #define _STD_BEGIN	_C_LIB_DECL
   #define _STD_END		_END_C_LIB_DECL

  #else /* _C_AS_CPP */
   #define _STD_BEGIN	namespace std {
   #define _STD_END		}
  #endif /* _C_AS_CPP */

   #define _C_STD_BEGIN	
   #define _C_STD_END	
   #define _CSTD		::
   #define _STD			::std::
 #endif /* _ALT_NS etc */

  #define _X_STD_BEGIN	namespace std {
  #define _X_STD_END	}
  #define _XSTD			::std::

  #if defined(_STD_USING)
   #undef _GLOBAL_USING		/* c* in std namespace, *.h imports to global */

  #elif !defined(_MSC_VER) || 1300 <= _MSC_VER
   #define _GLOBAL_USING	/* *.h in global namespace, c* imports to std */
  #endif /* defined(_STD_USING) */

  #if defined(_STD_LINKAGE)
   #define _C_LIB_DECL		extern "C++" {	/* C has extern "C++" linkage */

  #else /* defined(_STD_LINKAGE) */
   #define _C_LIB_DECL		extern "C" {	/* C has extern "C" linkage */
  #endif /* defined(_STD_LINKAGE) */

  #define _END_C_LIB_DECL	}
  #define _EXTERN_C			extern "C" {
  #define _END_EXTERN_C		}

 #else /* _HAS_NAMESPACE */
  #define _STD_BEGIN
  #define _STD_END
  #define _STD	::

  #define _X_STD_BEGIN
  #define _X_STD_END
  #define _XSTD	::

  #define _C_STD_BEGIN
  #define _C_STD_END
  #define _CSTD	::

  #define _C_LIB_DECL		extern "C" {
  #define _END_C_LIB_DECL	}
  #define _EXTERN_C			extern "C" {
  #define _END_EXTERN_C		}
 #endif /* _HAS_NAMESPACE */

 #else /* __cplusplus */
  #define _STD_BEGIN
  #define _STD_END
  #define _STD

  #define _X_STD_BEGIN
  #define _X_STD_END
  #define _XSTD

  #define _C_STD_BEGIN
  #define _C_STD_END
  #define _CSTD

  #define _C_LIB_DECL
  #define _END_C_LIB_DECL
  #define _EXTERN_C
  #define _END_EXTERN_C
 #endif /* __cplusplus */

 #if 199901L <= __STDC_VERSION__

 #if defined(__GNUC__) || defined(__cplusplus)
  #define _Restrict

 #else /* defined(__GNUC__) || defined(__cplusplus) */
  #define _Restrict restrict
 #endif /* defined(__GNUC__) || defined(__cplusplus) */

 #if defined(__GNUC__) && defined(__cplusplus)
  #define _C99_float_complex	float __complex__
  #define _C99_double_complex	double __complex__
  #define _C99_ldouble_complex	long double __complex__
 #endif /* defined(__GNUC__) && defined(__cplusplus) */

 #else /* 199901L <= __STDC_VERSION__ */
 #define _Restrict
 #endif /* 199901L <= __STDC_VERSION__ */

#if defined(__GHS_PRAGMAS)
#pragma ghs startdata
#endif
#if defined(__ghs) && defined(__ghs_max_pack_value)
#pragma pack (push, __ghs_max_pack_value)
#endif
 #ifdef __cplusplus
_STD_BEGIN
typedef bool _Bool;
_STD_END
 #endif /* __cplusplus */

		/* VC++ COMPILER PARAMETERS */
#if defined(__ghs)
 #ifndef _CRTIMP
  #ifdef  _DLL
   #define _CRTIMP __declspec(dllimport)
  #else   /* ndef _DLL */
   #define _CRTIMP
 #endif  /* _DLL */
#endif  /* _CRTIMP */
#else
 #define _CRTIMP
#endif
 #define _CDECL

 #if defined(_WIN32_C_LIB)
  #ifndef _VA_LIST_DEFINED

   #if defined(__BORLANDC__)

   #elif defined(_M_ALPHA)
typedef struct
	{	/* define va_list for Alpha */
	char *a0;
	int offset;
	} va_list;

   #else /* defined(_M_ALPHA) */
typedef char *va_list;
   #endif /* defined(_M_ALPHA) */

   #define _VA_LIST_DEFINED
  #endif /* _VA_LIST_DEFINED */

 #endif /* defined(_WIN32_C_LIB) */

#if defined(__ghs) || defined(__SC3__)
 #if defined(__LLONG_BIT) && !defined(__GHS_NO_CPP_LIB_LONG_LONG_SUPPORT)
  #define _LONGLONG      long long
  #define _ULONGLONG     unsigned long long
  #define _LLONG_MIN     (-1LL << ((__LLONG_BIT)-1))
  #define _LLONG_MAX     ((((1LL << ((__LLONG_BIT)-2))-1)<<1)+1)
  #define _ULLONG_MAX    ((((1ULL << ((__LLONG_BIT)-2))-1)<<2)+3)
 #endif /* __LLONG_BIT */
#else /* __ghs */
 #ifdef __NO_LONG_LONG

 #elif defined(_MSC_VER)
  #define _LONGLONG	__int64
  #define _ULONGLONG	unsigned __int64
  #define _LLONG_MAX	0x7fffffffffffffff
  #define _ULLONG_MAX	0xffffffffffffffff

 #else /* defined(__NO_LONG_LONG) && !defined (_MSC_VER) */
  #define _LONGLONG	long long
  #define _ULONGLONG	unsigned long long
  #define _LLONG_MAX	0x7fffffffffffffffLL
  #define _ULLONG_MAX	0xffffffffffffffffULL
 #endif /* __NO_LONG_LONG */
#endif /* __ghs */

		/* MAKE MINGW LOOK LIKE WIN32 HEREAFTER */

 #if defined(__MINGW32__)
  #define _WIN32_C_LIB	1
 #endif /* defined(__MINGW32__) */

 #if _WIN32_C_LIB && !defined(__BORLANDC__)
  #undef _POSIX_C_LIB

  #if !defined(_SIZE_T) && !defined(_SIZET) \
	&& !defined(_BSD_SIZE_T_DEFINED_) \
	&& !defined(_SIZE_T_DEFINED)
   #define _SIZE_T
   #define _SIZET
   #define _BSD_SIZE_T_DEFINED_
   #define _STD_USING_SIZE_T
   #define _SIZE_T_DEFINED

typedef _Sizet size_t;
  #endif /* !defined(_SIZE_T) etc. */

  #if !defined(_WCHAR_T_DEFINED)
   #define _WCHAR_T_DEFINED
   #define _WCHAR_T_
   #undef __need_wchar_t

   #ifndef __cplusplus
typedef unsigned short wchar_t;
   #endif /* __cplusplus */

  #endif /* !defined(_WCHAR_T) etc. */
 #endif /* _WIN32_C_LIB */

_C_STD_BEGIN
#if !defined(__ghs) && !defined(__SC3__)
/* [nikola] Wed Jun  2 11:52:16 PDT 1999 - These are defined in 'xmath.h' */
		/* FLOATING-POINT PROPERTIES */
#define _DBIAS	0x3fe	/* IEEE format double and float */
#define _DOFF	4
#define _FBIAS	0x7e
#define _FOFF	7
#define _FRND	1
#endif /* !defined(__ghs) */

#if defined(__ghs) || defined(__SC3__)
/* define the macro _DUMMY_ENUM_MAX which should be used in all named 'enum'
   types to guarantee the size. Without it, when compiled in -shortenum vs.
   -noshortenum modes, the resulting class layouts can be different, leading
   to errors.  This is identical to INT_MAX from limits.h */
# define _DUMMY_ENUM_MAX   ((((1 << ((__INT_BIT)-2))-1)<<1)+1)
#endif /* __ghs */

		/* INTEGER PROPERTIES */
#define _BITS_BYTE	8
#define _C2			1	/* 0 if not 2's complement */
#define _MBMAX		8	/* MB_LEN_MAX */
#define _ILONG		1	/* 0 if 16-bit int */

 #if defined(__s390__) || defined(__CHAR_UNSIGNED__)  \
	|| defined(_CHAR_UNSIGNED)
  #define _CSIGN	0	/* 0 if char is not signed */

 #else /* defined(__s390__) etc */
  #define _CSIGN	1
 #endif /* defined(__s390__) etc */

#define _MAX_EXP_DIG	8	/* for parsing numerics */
#define _MAX_INT_DIG	32
#define _MAX_SIG_DIG	36


 #if defined(_LONGLONG)
typedef _LONGLONG _Longlong;
typedef _ULONGLONG _ULonglong;

 #else /* defined(_LONGLONG) */
typedef long _Longlong;
typedef unsigned long _ULonglong;
 #define _LLONG_MAX	0x7fffffffL
 #define _ULLONG_MAX	0xffffffffUL
 #endif /* defined(_LONGLONG) */

		/* wchar_t AND wint_t PROPERTIES */

 #if defined(_WCHAR_T) || defined(_WCHAR_T_DEFINED) \
	|| defined (_MSL_WCHAR_T_TYPE)
  #define _WCHART
 #endif /* defined(_WCHAR_T) || defined(_WCHAR_T_DEFINED) */

 #if defined(_WINT_T)
  #define _WINTT
 #endif /* _WINT_T */

 #ifdef __cplusplus
  #define _WCHART
#if defined(__ghs) && defined(_MC_EXEC)
	     /* typedef unsigned short _Wchart; */
#else
typedef wchar_t _Wchart;
#endif
typedef wchar_t _Wintt;
 #endif /* __cplusplus */

 #if defined(_MSL_WCHAR_T_TYPE)
  #define _WCMIN	0
  #define _WCMAX	0xffff

  #ifndef __cplusplus
typedef wchar_t _Wchart;
typedef wint_t _Wintt;
  #endif /* __cplusplus */

  #define mbstate_t	_DNK_mbstate_t
  #define wctype_t	_DNK_wctype_t
  #define wint_t	_DNK_wint_t
  #define _MSC_VER	1

 #elif defined(_WIN32_C_LIB)
  #define _WCMIN	0
  #define _WCMAX	0xffff

  #ifndef __cplusplus
typedef unsigned short _Wchart;
typedef unsigned short _Wintt;
  #endif /* __cplusplus */

 #elif defined(__CYGWIN__)
  #define _WCMIN	(-_WCMAX - _C2)
  #define _WCMAX	0x7fff

  #ifndef __cplusplus
typedef short _Wchart;
typedef short _Wintt;
  #endif /* __cplusplus */

 #elif defined(__WCHAR_TYPE__)

#if defined(__ghs)
  #if defined(__WCHAR_BIT) && __WCHAR_BIT == 16 && defined(__WChar_Is_Unsigned__)
   #define _WCMIN 0
   #define _WCMAX 0xffff
  #else
   #define _WCMIN (-_WCMAX - _C2)
   #define _WCMAX 0x7fffffff
  #endif
#else
  #define _WCMIN	(-_WCMAX - _C2)
  #define _WCMAX	0x7fffffff	/* assume signed 32-bit wchar_t */
#endif /* __ghs */

  #ifndef __cplusplus
typedef __WCHAR_TYPE__ _Wchart;
typedef __WCHAR_TYPE__ _Wintt;
  #endif /* __cplusplus */

 #else /* default wchar_t/wint_t */

#if defined(__ghs)
  #if defined(__WCHAR_BIT) && __WCHAR_BIT == 16 && defined(__WChar_Is_Unsigned__)
   #define _WCMIN 0
   #define _WCMAX 0xffff
  #else
   #define _WCMIN (-_WCMAX - _C2)
   #define _WCMAX 0x7fffffff
  #endif
#else
  #define _WCMIN	(-_WCMAX - _C2)
  #define _WCMAX	0x7fffffff
#endif /* __ghs */

  #ifndef __cplusplus
#if defined(__ghs) && defined(_MC_EXEC)
	     /* typedef unsigned short _Wchart; */
#else
typedef long _Wchart;
#endif
typedef long _Wintt;
  #endif /* __cplusplus */

 #endif /* compiler/library type */

		/* POINTER PROPERTIES */
#if defined(__ghs) && defined(_MC_EXEC)
/* nothing */
#else
#define _NULL		0	/* 0L if pointer same as long */
#endif

		/* signal PROPERTIES */

 #if defined(_WIN32_C_LIB)
#define _SIGABRT	22
#define _SIGMAX		32

 #elif defined(__ghs) || defined(__SC3__)
   /* already defined in <signal.h> */ 

 #else /* defined(_WIN32_C_LIB) */
#define _SIGABRT	6
#define _SIGMAX		44
 #endif /* defined(_WIN32_C_LIB) */

		/* stdarg PROPERTIES */
typedef va_list _Va_list;

 #if _HAS_C9X

 #if __EDG__
  #undef va_copy
 #endif /* __EDG__ */

 #ifndef va_copy
_EXTERN_C
void _Vacopy(va_list *, va_list);
_END_EXTERN_C
  #define va_copy(apd, aps)	_Vacopy(&(apd), aps)
 #endif /* va_copy */

 #endif /* _IS_C9X */

		/* stdlib PROPERTIES */
#define _EXFAIL	1	/* EXIT_FAILURE */

#if defined(__ghs) || defined(__SC3__)
 #define _Atexit(fn)  atexit(fn)
_EXTERN_C
#if defined(__ghs)
#ifndef __ATEXIT_FNC
typedef	__attribute__((strong_fptr("relax"))) void (*__ATEXIT_FNC)(void);
#endif
#if defined (__LINUX) && defined (__THROW)
int atexit(__ATEXIT_FNC __FNC) __THROW;
#else
int atexit(__ATEXIT_FNC __FNC);
#endif
#else
#if defined (__LINUX) && defined (__THROW)
int atexit(void (*)(void)) __THROW;
#else
int atexit(void (*)(void));
#endif
#endif /* __ghs */
_END_EXTERN_C

#else /* !__ghs */
_EXTERN_C
void _Atexit(void (*)(void));
_END_EXTERN_C

#endif /* !__ghs */

		/* stdio PROPERTIES */
#if !(defined(__ghs) && defined(_MC_EXEC))
#define _FNAMAX	260
#define _FOPMAX	20
#define _TNAMAX	16
#endif

 #define _FD_TYPE	signed char
  #define _FD_NO(str) ((str)->_Handle)
 #define _FD_VALID(fd)	(0 <= (fd))	/* fd is signed integer */
 #define _FD_INVALID	(-1)
 #define _SYSCH(x)	x
typedef char _Sysch_t;

		/* STORAGE ALIGNMENT PROPERTIES */
#define _MEMBND	3U /* eight-byte boundaries (2^^3) */

		/* time PROPERTIES */
#define _CPS	1
#define _TBIAS	((70 * 365LU + 17) * 86400)
_C_STD_END

		/* MULTITHREAD PROPERTIES */
#if defined(__ghs) || defined(__SC3__)
#if defined(__sun) && (defined(__sysV4) || defined(SUNOS))	
     /* Solaris native */
   #define  _FILE_OP_LOCKS   1
/* [haitsuka] Sun Sep 30 21:40:51 PDT 2001
   The Solaris header files require certain symbols like _REENTRANT to be
   defined to include f(un)lockfile, so we will prototype them rather than
   define symbols which might break the library build. */
   _EXTERN_C
    extern void flockfile(FILE *);
    extern void funlockfile(FILE *);
   _END_EXTERN_C
   #define _Lockfile(fp)   flockfile(fp)
   #define _Unlockfile(fp) funlockfile(fp)

#elif defined(__ghs) && defined(__VXWORKS) /* vxWorks */
   #define  _FILE_OP_LOCKS   1
   #define _Lockfile(fp)   __ghsLockFile(fp)
   #define _Unlockfile(fp) __ghsUnlockFile(fp)

#elif defined(__ghs) && defined(_WIN32)    /* Win32 */
/* [haitsuka] Using undocumented Windows function equivalent to flockfile.
   Use _MT to create separate Win32 lib. */
   #if defined(_MT)
    _EXTERN_C
      extern void _lock_file(FILE *);
      extern void _unlock_file(FILE *);
    _END_EXTERN_C
    #define  _FILE_OP_LOCKS   1
/* [haitsuka] The fp parameter cannot be NULL!  We can't check in the macro,
   but the Plauger code checks for us in [i/o]stream when calling _Lock(). */
    #define _Lockfile(fp)   _lock_file(fp)
    #define _Unlockfile(fp) _unlock_file(fp)
   #endif /* _MT */

#elif defined(__ghs) && defined(__LYNX)  /* LynxOS */

#elif defined(__ghs) && defined(__LINUX) /* Linux */
   #define  _FILE_OP_LOCKS   1
   #define _Lockfile(fp)   flockfile(fp)
   #define _Unlockfile(fp) funlockfile(fp)

#elif defined(__ghs) && defined(__OSE)    /* OSE */

#elif defined(__ghs) && defined(_MC_EXEC)
   #define _FILE_OP_LOCKS   1
   #define _Lockfile(fp)   flockfile(fp)
   #define _Unlockfile(fp) funlockfile(fp)

#else /* defined(__ghs) */
   #define  _FILE_OP_LOCKS   1
   #define _Lockfile(fp)   flockfile(fp)
   #define _Unlockfile(fp) funlockfile(fp)

#endif
#endif /* __ghs */

 #if _MULTI_THREAD
_EXTERN_C
void _Locksyslock(int);
void _Unlocksyslock(int);
_END_EXTERN_C

 #else /* _MULTI_THREAD */
  #define _Locksyslock(x)	(void)0
  #define _Unlocksyslock(x)	(void)0
 #endif /* _MULTI_THREAD */

		/* LOCK MACROS */
 #define _LOCK_LOCALE	0
 #define _LOCK_MALLOC	1
 #define _LOCK_STREAM	2
 #define _LOCK_DEBUG	3
 #define _MAX_LOCK		4	/* one more than highest lock number */

 #if _IOSTREAM_OP_LOCKS
  #define _MAYBE_LOCK

 #else /* _IOSTREAM_OP_LOCKS */
  #define _MAYBE_LOCK	\
	if (_Locktype == _LOCK_MALLOC || _Locktype == _LOCK_DEBUG)
 #endif /* _IOSTREAM_OP_LOCKS */

#if defined(__ghs) && defined(__VXWORKS)
_EXTERN_C 
  void __ghsLockFile(FILE *);
  void __ghsUnlockFile(FILE *);
_END_EXTERN_C
#elif defined(__ghs) || defined(__SC3__)
_EXTERN_C
  void __ghsLockCpp(int);
  void __ghsUnlockCpp(int);
_END_EXTERN_C
#endif /* __ghs */

 #ifdef __cplusplus
_STD_BEGIN

extern "C++" {	// in case of _C_AS_CPP
		// CLASS _Lockit
class _Lockit
	{	// lock while object in existence -- MUST NEST
public:

  #if !_MULTI_THREAD
   #define _LOCKIT(x)

	explicit _Lockit()
		{	// do nothing
		}

	explicit _Lockit(int)
		{	// do nothing
		}

	~_Lockit()
		{	// do nothing
		}

  #elif defined(__ghs) && defined(__VXWORKS)
public:
	explicit _Lockit(int i = 0);	// set the lock
	~_Lockit();              	// clear the lock
	static void InitLocks();

private:
	static SEM_ID theLock[3];
	int lock_num;
	static int is_init;

  #elif defined(__ghs) || defined(__SC3__)
	explicit _Lockit(int i = 0)
		: lock_num(i)
		{	// set the lock
		__ghsLockCpp(i); }

	~_Lockit()
		{	// clear the lock
		__ghsUnlockCpp(lock_num); }
private:
	int lock_num;
	
  #elif defined(_WIN32_WCE) || defined(_MSC_VER)
   #define _LOCKIT(x)	lockit x

	explicit _Lockit();		// set default lock
	explicit _Lockit(int);	// set the lock
	~_Lockit();	// clear the lock

private:
	int _Locktype;

  #else /* non-Windows multithreading */
   #define _LOCKIT(x)	lockit x

	explicit _Lockit()
		: _Locktype(_LOCK_MALLOC)
		{	// set default lock
		_MAYBE_LOCK
			_Locksyslock(_Locktype);
		}

	explicit _Lockit(int _Type)
		: _Locktype(_Type)
		{	// set the lock
		_MAYBE_LOCK
			_Locksyslock(_Locktype);
		}

	~_Lockit()
		{	// clear the lock
		_MAYBE_LOCK
			_Unlocksyslock(_Locktype);
		}

private:
	int _Locktype;
  #endif /* _MULTI_THREAD */

#if defined(__ghs) || defined(__SC3__)
        // _Lockit() must be accessible in _Locinfo's
	// copy constructor; see C++2003, clause 8.5.3/5
#else
private:
	_Lockit(const _Lockit&);			// not defined
	_Lockit& operator=(const _Lockit&);	// not defined
#endif /* __ghs */
	};

class _Mutex
	{	// lock under program control
public:

  #if !_MULTI_THREAD || !_IOSTREAM_OP_LOCKS
    void _Lock()
		{	// do nothing
		}

	void _Unlock()
		{	// do nothing
	}

  #else /* !_MULTI_THREAD || !_IOSTREAM_OP_LOCKS */
        // Default ctor; will allocate and initialize a new lock          
	_Mutex();
#if defined(__ghs) || defined(__SC3__)
        // The _Uninitialized ctor does not initialize anything; it leaves an
        // already initialized object unmodified.
	_Mutex(_Uninitialized) { }
        // The _LockOverridden ctor initializes the _Mutex, but explicitly
        // NULLs the internal pointer (it will be unused if constructed in
        // this way).
        _Mutex(_LockOverridden) : _Mtx(0) { }
#endif /* __ghs */
	~_Mutex();
	void _Lock();
	void _Unlock();

private:
	_Mutex(const _Mutex&);				// not defined
	_Mutex& operator=(const _Mutex&);	// not defined
	void *_Mtx;
  #endif /* !_MULTI_THREAD || !_IOSTREAM_OP_LOCKS */

	};
}	// extern "C++"
_STD_END
 #endif /* __cplusplus */

		/* MISCELLANEOUS MACROS */
#define _ATEXIT_T	void

#if defined(__ghs) || defined(__SC3__)
#define _MAX	(max)
#define _MIN	(min)
#else
#define _MAX	max
#define _MIN	min
#endif

#define _TEMPLATE_STAT

 #if 0 < __GNUC__
  #define _NO_RETURN(fun)	void fun __attribute__((__noreturn__))

 #elif 1200 <= _MSC_VER
  #define _NO_RETURN(fun)	__declspec(noreturn) void fun

 #else /* compiler selector */
  #define _NO_RETURN(fun)	void fun
 #endif /* compiler selector */

 #if _HAS_NAMESPACE

 #ifdef __cplusplus

  #if defined(_STD_USING)
_STD_BEGIN
using ::va_list;
_STD_END
  #endif /* !defined(_C_AS_CPP) && defined(_GLOBAL_USING) */

 #endif /* __cplusplus */
 #endif /* _HAS_NAMESPACE */

 #if (defined(__ghs) || defined(__SC3__)) && _HAS_NAMESPACE
 #if defined(__EDG_IMPLICIT_USING_STD)
using namespace std;
 #endif /* __EDG_IMPLICIT_USING_STD */
#endif /* __ghs && _HAS_NAMESPACE */


#if defined(__ghs) && defined(__ghs_max_pack_value)
#pragma pack(pop)
#endif
#if defined(__GHS_PRAGMAS)
#pragma ghs enddata
#endif

#if defined(__ghs) || defined(__SC3__)
 #if !defined(__cplusplus) || defined(__ONLY_STANDARD_KEYWORDS_IN_CXX)
#define __noinline
 #endif
#endif  /* __ghs */

#endif /* _YVALS */

/*
 * Copyright (c) 1992-2003 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V4.02:0324 */
