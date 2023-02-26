typedef unsigned int pt_time_msec_t;

void pt_resetClock(void);
const pt_time_msec_t pt_readClock(void);
void pt_sleep(pt_time_msec_t time);
