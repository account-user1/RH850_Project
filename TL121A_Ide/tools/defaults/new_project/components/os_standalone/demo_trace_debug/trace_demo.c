#include <stdio.h>
#include <stdlib.h>
#include "labels.h"

static int num_maintenance = 0;
static int num_ticks = 0;

void fatal_abort(const char *msg) {
    printf("%s\n", msg);
    exit(0);
}   

void perform_maintenance(int tick) {
    int i, val=1;
    
    printf("Performing maintenance at time %d...", tick);
    
    for(i = 0; i < tick*2; ++i) {
	val<<=1;
	if(val==0)
	    val=1;
	val<<=1;
	if(val==0)
	    val=1;
	val<<=1;
	if(val==0)
	    val=1;
	val<<=1;
	if(val==0)
	    val=1;
    }

    printf("done!\n");
}

void do_tick(int tick) {
    static int last_tick = 0;
    static char message_buf[64];

    if(tick > last_tick + 1) {
	fatal_abort("Unexpected tick value.");  /* not executed */
    }
    if(tick % 10 == 0) {
	perform_maintenance(tick);
	++num_maintenance;
    }
    last_tick = tick;  /* update the last_tick value */
    ++num_ticks;
    sprintf(message_buf, "tick %d\n", tick);
}

int main(int argc, char **argv)
{
    int i;

    for(i = 0; i < 50; ++i)
	do_tick(i);

BeforeReturn:
    return 0;
End: ;
}
