/*
			ISO C Runtime Library

	Copyright (c) 2003-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef __GHS_INTTYPES_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define __GHS_INTTYPES_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
/* C99 says the user must #include <stddef.h> to get wchar_t */
/* but the POSIX suite apparently does not bother to do that. */
/* I see little harm in forcing wchar_t to be declared here,  */
/* since it is used here, in the final two prototypes.  */
#include "ghs_wchar.h"		/* defines wchar_t */

#ifdef __VXWORKS
#  include <vxWorks.h>	/* vxWorks has its own idea about header files */
#endif

#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack (push, __ghs_max_pack_value)
#endif
typedef struct {
    intmax_t	quot;
    intmax_t	rem;
} imaxdiv_t;
#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack(pop)
#endif

#if (defined(__STDC__) || defined(__EDG__)) && (!defined(__cplusplus) || defined(__STDC_FORMAT_MACROS))

#if __CHAR_BIT == 8
#define __Prefix8	"hh"
#else
#define __Prefix8	
#endif

#if __SHRT_BIT == 16
#define __Prefix16	"h"
#else
#define __Prefix16	
#endif

#if __INT_BIT < 24
#define __Prefix24	"l"
#define __Prefix32	"l"
#elif __INT_BIT < 32
#define __Prefix32	"l"
#endif

#if defined(_WIN32)
#define __Prefix64	"I64"
#elif __LONG_BIT < 48
#define __Prefix48	"ll"
#define __Prefix64	"ll"
#elif __LONG_BIT < 64
#define __Prefix64	"ll"
#elif __LONG_BIT == 64
#define __Prefix64      "l"
#endif

#if defined(__EINT1_BIT) && __EINT1_BIT == 128
#define __Prefix128     "j"
#endif

#ifndef __Prefix24
#define __Prefix24
#endif
#ifndef __Prefix32
#define __Prefix32
#endif
#ifndef __Prefix48
#define __Prefix48
#endif
#ifndef __Prefix64
#define __Prefix64
#endif

#if   __PTR_BIT == 16
#define __PrefixPtr	
#elif   __PTR_BIT == 24
#define __PrefixPtr	__Prefix24
#elif __PTR_BIT == 32 || defined(__MCS__)
#define __PrefixPtr	__Prefix32
#elif __PTR_BIT == 48
#define __PrefixPtr	__Prefix48
#elif __PTR_BIT == 64
#define __PrefixPtr	__Prefix64
#else
#error	Unknown pointer length
#endif

#if defined(_WIN32)
#define __PrefixMax	"I64"
#elif defined(__EINT1_BIT) && __EINT1_BIT > __LLONG_BIT
#define	__PrefixMax	"j"
#elif defined(__LLONG_BIT) && __LLONG_BIT >= __LONG_BIT
#define	__PrefixMax	"ll"
#elif __LONG_BIT >= __INT_BIT
#define	__PrefixMax	"l"
#else
#define	__PrefixMax
#endif

#if defined(__REG_BIT) && (__REG_BIT == __INT_BIT)
#define __PreFst32
#elif defined(__REG_BIT) && (__REG_BIT == __LONG_BIT)
#define	__PreFst32	"l"
#elif defined(__REG_BIT) &&  defined(__LLONG_BIT) && (__REG_BIT == __LLONG_BIT)
#define	__PreFst32	"ll"
#elif (__INT_BIT < 32)
#define	__PreFst32	"l"
#else
#define	__PreFst32	
#endif

#define PRId8				"d"
#define PRId16				"d"
#define PRId24		__Prefix24	"d"
#define PRId32		__Prefix32	"d"
#define PRId48		__Prefix48	"d"
#define PRId64		__Prefix64	"d"

#define PRIdLEAST8			"d"
#define PRIdLEAST16			"d"
#define PRIdLEAST24	__Prefix24	"d"
#define PRIdLEAST32	__Prefix32	"d"
#define PRIdLEAST48	__Prefix48	"d"
#define PRIdLEAST64	__Prefix64	"d"

#define PRIdFAST8	__PreFst32	"d"
#define PRIdFAST16	__PreFst32	"d"
#define PRIdFAST24	__PreFst32	"d"
#define PRIdFAST32	__PreFst32	"d"
#define PRIdFAST48	__Prefix48	"d"
#define PRIdFAST64	__Prefix64	"d"

#ifdef __Prefix128
#define PRId128		__Prefix128	"d"
#define PRIdLEAST128	__Prefix128	"d"
#define PRIdFAST128	__Prefix128	"d"
#endif

#define PRIdMAX		__PrefixMax	"d"
#define PRIdPTR		__PrefixPtr	"d"

#define PRIi8				"i"
#define PRIi16				"i"
#define PRIi24		__Prefix24	"i"
#define PRIi32		__Prefix32	"i"
#define PRIi48		__Prefix48	"i"
#define PRIi64		__Prefix64	"i"

#define PRIiLEAST8			"i"
#define PRIiLEAST16			"i"
#define PRIiLEAST24	__Prefix24	"i"
#define PRIiLEAST32	__Prefix32	"i"
#define PRIiLEAST48	__Prefix48	"i"
#define PRIiLEAST64	__Prefix64	"i"

#define PRIiFAST8	__PreFst32	"i"
#define PRIiFAST16	__PreFst32	"i"
#define PRIiFAST24	__PreFst32	"i"
#define PRIiFAST32	__PreFst32	"i"
#define PRIiFAST48	__Prefix48	"i"
#define PRIiFAST64	__Prefix64	"i"

#ifdef __Prefix128
#define PRIi128		__Prefix128	"i"
#define PRIiLEAST128	__Prefix128	"i"
#define PRIiFAST128	__Prefix128	"i"
#endif

#define PRIiMAX		__PrefixMax	"i"
#define PRIiPTR		__PrefixPtr	"i"

#define PRIo8				"o"
#define PRIo16				"o"
#define PRIo24		__Prefix24	"o"
#define PRIo32		__Prefix32	"o"
#define PRIo48		__Prefix48	"o"
#define PRIo64		__Prefix64	"o"

#define PRIoLEAST8			"o"
#define PRIoLEAST16			"o"
#define PRIoLEAST24	__Prefix24	"o"
#define PRIoLEAST32	__Prefix32	"o"
#define PRIoLEAST48	__Prefix48	"o"
#define PRIoLEAST64	__Prefix64	"o"

#define PRIoFAST8	__PreFst32	"o"
#define PRIoFAST16	__PreFst32	"o"
#define PRIoFAST24	__PreFst32	"o"
#define PRIoFAST32	__PreFst32	"o"
#define PRIoFAST48	__Prefix48	"o"
#define PRIoFAST64	__Prefix64	"o"

#ifdef __Prefix128
#define PRIo128		__Prefix128	"o"
#define PRIoLEAST128	__Prefix128	"o"
#define PRIoFAST128	__Prefix128	"o"
#endif

#define PRIoMAX		__PrefixMax	"o"
#define PRIoPTR		__PrefixPtr	"o"

#define PRIu8				"u"
#define PRIu16				"u"
#define PRIu24		__Prefix24	"u"
#define PRIu32		__Prefix32	"u"
#define PRIu48		__Prefix48	"u"
#define PRIu64		__Prefix64	"u"

#define PRIuLEAST8			"u"
#define PRIuLEAST16			"u"
#define PRIuLEAST24	__Prefix24	"u"
#define PRIuLEAST32	__Prefix32	"u"
#define PRIuLEAST48	__Prefix48	"u"
#define PRIuLEAST64	__Prefix64	"u"

#define PRIuFAST8	__PreFst32	"u"
#define PRIuFAST16	__PreFst32	"u"
#define PRIuFAST24	__PreFst32	"u"
#define PRIuFAST32	__PreFst32	"u"
#define PRIuFAST48	__Prefix48	"u"
#define PRIuFAST64	__Prefix64	"u"

#ifdef __Prefix128
#define PRIu128		__Prefix128	"u"
#define PRIuLEAST128	__Prefix128	"u"
#define PRIuFAST128	__Prefix128	"u"
#endif

#define PRIuMAX		__PrefixMax	"u"
#define PRIuPTR		__PrefixPtr	"u"

#define PRIx8				"x"
#define PRIx16				"x"
#define PRIx24		__Prefix24	"x"
#define PRIx32		__Prefix32	"x"
#define PRIx48		__Prefix48	"x"
#define PRIx64		__Prefix64	"x"

#define PRIxLEAST8			"x"
#define PRIxLEAST16			"x"
#define PRIxLEAST24	__Prefix24	"x"
#define PRIxLEAST32	__Prefix32	"x"
#define PRIxLEAST48	__Prefix48	"x"
#define PRIxLEAST64	__Prefix64	"x"

#define PRIxFAST8	__PreFst32	"x"
#define PRIxFAST16	__PreFst32	"x"
#define PRIxFAST24	__PreFst32	"x"
#define PRIxFAST32	__PreFst32	"x"
#define PRIxFAST48	__Prefix48	"x"
#define PRIxFAST64	__Prefix64	"x"

#ifdef __Prefix128
#define PRIx128		__Prefix128	"x"
#define PRIxLEAST128	__Prefix128	"x"
#define PRIxFAST128	__Prefix128	"x"
#endif

#define PRIxMAX		__PrefixMax	"x"
#define PRIxPTR		__PrefixPtr	"x"

#define PRIX8				"X"
#define PRIX16				"X"
#define PRIX24		__Prefix24	"X"
#define PRIX32		__Prefix32	"X"
#define PRIX48		__Prefix48	"X"
#define PRIX64		__Prefix64	"X"

#define PRIXLEAST8			"X"
#define PRIXLEAST16			"X"
#define PRIXLEAST24	__Prefix24	"X"
#define PRIXLEAST32	__Prefix32	"X"
#define PRIXLEAST48	__Prefix48	"X"
#define PRIXLEAST64	__Prefix64	"X"

#define PRIXFAST8	__PreFst32	"X"
#define PRIXFAST16	__PreFst32	"X"
#define PRIXFAST24	__PreFst32	"X"
#define PRIXFAST32	__PreFst32	"X"
#define PRIXFAST48	__Prefix48	"X"
#define PRIXFAST64	__Prefix64	"X"

#ifdef __Prefix128
#define PRIX128		__Prefix128	"X"
#define PRIXLEAST128	__Prefix128	"X"
#define PRIXFAST128	__Prefix128	"X"
#endif

#define PRIXMAX		__PrefixMax	"X"
#define PRIXPTR		__PrefixPtr	"X"

#define SCNd8		__Prefix8	"d"
#define SCNd16		__Prefix16	"d"
#define SCNd24		__Prefix24	"d"
#define SCNd32		__Prefix32	"d"
#define SCNd48		__Prefix48	"d"
#define SCNd64		__Prefix64	"d"

#define SCNdLEAST8	__Prefix8	"d"
#define SCNdLEAST16	__Prefix16	"d"
#define SCNdLEAST24	__Prefix24	"d"
#define SCNdLEAST32	__Prefix32	"d"
#define SCNdLEAST48	__Prefix48	"d"
#define SCNdLEAST64	__Prefix64	"d"

#define SCNdFAST8	__PreFst32	"d"
#define SCNdFAST16	__PreFst32	"d"
#define SCNdFAST24	__PreFst32	"d"
#define SCNdFAST32	__PreFst32	"d"
#define SCNdFAST48	__Prefix48	"d"
#define SCNdFAST64	__Prefix64	"d"

#ifdef __Prefix128
#define SCNd128		__Prefix128	"d"
#define SCNdLEAST128	__Prefix128	"d"
#define SCNdFAST128	__Prefix128	"d"
#endif

#define SCNdMAX		__PrefixMax	"d"
#define SCNdPTR		__PrefixPtr	"d"

#define SCNi8		__Prefix8	"i"
#define SCNi16		__Prefix16	"i"
#define SCNi24		__Prefix24	"i"
#define SCNi32		__Prefix32	"i"
#define SCNi48		__Prefix48	"i"
#define SCNi64		__Prefix64	"i"

#define SCNiLEAST8	__Prefix8	"i"
#define SCNiLEAST16	__Prefix16	"i"
#define SCNiLEAST24	__Prefix24	"i"
#define SCNiLEAST32	__Prefix32	"i"
#define SCNiLEAST48	__Prefix48	"i"
#define SCNiLEAST64	__Prefix64	"i"

#define SCNiFAST8	__PreFst32	"i"
#define SCNiFAST16	__PreFst32	"i"
#define SCNiFAST24	__PreFst24	"i"
#define SCNiFAST32	__PreFst32	"i"
#define SCNiFAST48	__Prefix48	"i"
#define SCNiFAST64	__Prefix64	"i"

#ifdef __Prefix128
#define SCNi128		__Prefix128	"i"
#define SCNiLEAST128	__Prefix128	"i"
#define SCNiFAST128	__Prefix128	"i"
#endif

#define SCNiMAX		__PrefixMax	"i"
#define SCNiPTR		__PrefixPtr	"i"

#define SCNo8		__Prefix8	"o"
#define SCNo16		__Prefix16	"o"
#define SCNo24		__Prefix24	"o"
#define SCNo32		__Prefix32	"o"
#define SCNo48		__Prefix48	"o"
#define SCNo64		__Prefix64	"o"

#define SCNoLEAST8	__Prefix8	"o"
#define SCNoLEAST16	__Prefix16	"o"
#define SCNoLEAST24	__Prefix24	"o"
#define SCNoLEAST32	__Prefix32	"o"
#define SCNoLEAST48	__Prefix48	"o"
#define SCNoLEAST64	__Prefix64	"o"

#define SCNoFAST8	__PreFst32	"o"
#define SCNoFAST16	__PreFst32	"o"
#define SCNoFAST24	__PreFst32	"o"
#define SCNoFAST32	__PreFst32	"o"
#define SCNoFAST48	__Prefix48	"o"
#define SCNoFAST64	__Prefix64	"o"

#ifdef __Prefix128
#define SCNo128		__Prefix128	"o"
#define SCNoLEAST128	__Prefix128	"o"
#define SCNoFAST128	__Prefix128	"o"
#endif

#define SCNoMAX		__PrefixMax	"o"
#define SCNoPTR		__PrefixPtr	"o"

#define SCNu8		__Prefix8	"u"
#define SCNu16		__Prefix16	"u"
#define SCNu24		__Prefix24	"u"
#define SCNu32		__Prefix32	"u"
#define SCNu48		__Prefix48	"u"
#define SCNu64		__Prefix64	"u"

#define SCNuLEAST8	__Prefix8	"u"
#define SCNuLEAST16	__Prefix16	"u"
#define SCNuLEAST24	__Prefix24	"u"
#define SCNuLEAST32	__Prefix32	"u"
#define SCNuLEAST48	__Prefix48	"u"
#define SCNuLEAST64	__Prefix64	"u"

#define SCNuFAST8	__PreFst32	"u"
#define SCNuFAST16	__PreFst32	"u"
#define SCNuFAST24	__PreFst32	"u"
#define SCNuFAST32	__PreFst32	"u"
#define SCNuFAST48	__Prefix48	"u"
#define SCNuFAST64	__Prefix64	"u"

#ifdef __Prefix128
#define SCNu128		__Prefix128	"u"
#define SCNuLEAST128	__Prefix128	"u"
#define SCNuFAST128	__Prefix128	"u"
#endif

#define SCNuMAX		__PrefixMax	"u"
#define SCNuPTR		__PrefixPtr	"u"

#define SCNx8		__Prefix8	"x"
#define SCNx16		__Prefix16	"x"
#define SCNx24		__Prefix24	"x"
#define SCNx32		__Prefix32	"x"
#define SCNx48		__Prefix48	"x"
#define SCNx64		__Prefix64	"x"

#define SCNxLEAST8	__Prefix8	"x"
#define SCNxLEAST16	__Prefix16	"x"
#define SCNxLEAST24	__Prefix24	"x"
#define SCNxLEAST32	__Prefix32	"x"
#define SCNxLEAST48	__Prefix48	"x"
#define SCNxLEAST64	__Prefix64	"x"

#define SCNxFAST8	__PreFst32	"x"
#define SCNxFAST16	__PreFst32	"x"
#define SCNxFAST24	__PreFst32	"x"
#define SCNxFAST32	__PreFst32	"x"
#define SCNxFAST48	__Prefix48	"x"
#define SCNxFAST64	__Prefix64	"x"

#ifdef __Prefix128
#define SCNx128		__Prefix128	"x"
#define SCNxLEAST128	__Prefix128	"x"
#define SCNxFAST128	__Prefix128	"x"
#endif

#define SCNxMAX		__PrefixMax	"x"
#define SCNxPTR		__PrefixPtr	"x"
/* These are purposely omitted from the standard because they are redundant.
#define SCNX8		__Prefix8	"X"
#define SCNX16		__Prefix16	"X"
#define SCNX24		__Prefix24	"X"
#define SCNX32		__Prefix32	"X"
#define SCNX48		__Prefix48	"X"
#define SCNX64		__Prefix64	"X"

#define SCNXLEAST8	__Prefix8	"X"
#define SCNXLEAST16	__Prefix16	"X"
#define SCNXLEAST24	__Prefix24	"X"
#define SCNXLEAST32	__Prefix32	"X"
#define SCNXLEAST48	__Prefix48	"x"
#define SCNXLEAST64	__Prefix64	"X"

#define SCNXFAST8	__PreFst32	"X"
#define SCNXFAST16	__PreFst32	"x"
#define SCNXFAST24	__PreFst32	"X"
#define SCNXFAST32	__PreFst32	"X"
#define SCNXFAST48	__Prefix48	"X"
#define SCNXFAST64	__Prefix64	"X"

#define SCNXMAX		__PrefixMax	"X"
#define SCNXPTR		__PrefixPtr	"X"
*/
#endif /* !defined(__cplusplus) || defined(__STDC_FORMAT_MACROS) */

#if	defined(__STDC_VERSION__) && (__STDC_VERSION__>=199901L)
#define __Restrict	restrict
#else
#define __Restrict
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log push on
#endif

#if defined(__STDC__) || defined(__PROTOTYPES__)
 intmax_t imaxabs(intmax_t);
imaxdiv_t imaxdiv(intmax_t, intmax_t);
#else
 intmax_t imaxabs();
imaxdiv_t imaxdiv();
#endif

 intmax_t strtoimax(const char * __Restrict, char ** __Restrict, int);
uintmax_t strtoumax(const char * __Restrict, char ** __Restrict, int);
#if (defined(_WCHAR_T) || defined(_WCHAR_T_DEFINED))
 intmax_t wcstoimax (const wchar_t * __Restrict, wchar_t ** __Restrict, int);
uintmax_t wcstoumax (const wchar_t * __Restrict, wchar_t ** __Restrict, int);
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log pop
#endif

#undef __Restrict

#ifdef __cplusplus
}
#endif

#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* _GHS_INTTYPES_H */
