#ifndef __include_integrity_time_h
#pragma ghs startnomisra
#define __include_integrity_time_h

#if defined(INT_178B_FULL)
# include <ghsposix/../../INTEGRITY-include-full/time.h>
#else
# include <INTEGRITY_version.h>
# if __INTEGRITY_MAJOR_VERSION > 4
#  include <ghsposix/../../INTEGRITY-include/time.h>
# else
#  include "../../ansi/time.h"
# endif /* __INTEGRITY_MAJOR_VERSION > 4 */
#endif /* defined(INT_178B_FULL) */

#pragma ghs endnomisra
#endif
