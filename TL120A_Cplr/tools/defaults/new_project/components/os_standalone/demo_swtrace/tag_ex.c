#include <stdio.h>

/*  NOTE:  The default behavior is for all logging tags to default to on, but
 *  this can be changed by defining EAGLE_CONFIG_LOGGING, as desribed in
 *  rh850_eagle.h.  Setting it to 3, below, configures it such that all tags
 *  must be explicitly defined.
 */
#define EAGLE_CONFIG_LOGGING 3
#include <rh850_eagle.h>
#include "labels.h"

/* ------------------------------------------------------------------------- 
 * Define each tag that we use, setting it to 1 (enabled) or 0 (disabled)
 */

#define EAGLE_TAG_var1		1
#define EAGLE_TAG_var2		0
#define EAGLE_TAG_verbose	1

/* ------------------------------------------------------------------------- */

unsigned int var1=0x10000000, var2=0x20000000;
void log_globals(const char *msg)
{
    EAGLE_LogPrint(verbose, "Logging global values");
    EAGLE_LogPrint(verbose, msg);
    EAGLE_LogU32(var1, var1);
    EAGLE_LogU32(var2, var2);
}

void do_tag_test()
{
    /* Log the initial state of the globals */
    log_globals("Initial state");

    var1 += 0x1111;
    var2 += 0x2222;
    
    /* Log the globals again */
    log_globals("After increments");
}
