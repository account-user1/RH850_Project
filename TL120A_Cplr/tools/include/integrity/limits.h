#ifndef __include_integrity_limits_h
#pragma ghs startnomisra
#define __include_integrity_limits_h

#if defined(INT_178B_FULL)
# include <ghsposix/../../INTEGRITY-include-full/limits.h>
# undef        MB_LEN_MAX
# define       MB_LEN_MAX      6
#else
# include <INTEGRITY_version.h>
# if __INTEGRITY_MAJOR_VERSION < 5
#  include "../../ansi/limits.h"
# elif __INTEGRITY_MAJOR_VERSION <= 10
#  include <ghsposix/../../INTEGRITY-include/limits.h>
#  undef	MB_LEN_MAX
#  define	MB_LEN_MAX	6
# else
#  include <ghsposix/../../INTEGRITY-include/limits.h>
# endif
#endif /* defined(INT_178B_FULL) */

#pragma ghs endnomisra
#endif
