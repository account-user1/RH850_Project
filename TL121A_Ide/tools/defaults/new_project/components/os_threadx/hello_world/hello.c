#ifdef TX_ENABLE_EVENT_LOGGING
/* For ThreadX V5 targets, assume event logging being enabled implies
 * performance info gathering and notify callbacks are also enabled.
 *
 * This is merely a guess and your specific ThreadX build may
 * differ.
 *
 * You may want to place these defines in a single place used for
 * building both the ThreadX library and your application.
 */
#define TX_THREAD_ENABLE_PERFORMANCE_INFO
#define TX_BLOCK_POOL_ENABLE_PERFORMANCE_INFO
#define TX_BYTE_POOL_ENABLE_PERFORMANCE_INFO
#define TX_EVENT_FLAGS_ENABLE_PERFORMANCE_INFO
#define TX_MUTEX_ENABLE_PERFORMANCE_INFO
#define TX_QUEUE_ENABLE_PERFORMANCE_INFO
#define TX_SEMAPHORE_ENABLE_PERFORMANCE_INFO
#define TX_TIMER_ENABLE_PERFORMANCE_INFO
#undef  TX_DISABLE_NOTIFY_CALLBACKS
#else
#undef  TX_THREAD_ENABLE_PERFORMANCE_INFO
#undef  TX_BLOCK_POOL_ENABLE_PERFORMANCE_INFO
#undef  TX_BYTE_POOL_ENABLE_PERFORMANCE_INFO
#undef  TX_EVENT_FLAGS_ENABLE_PERFORMANCE_INFO
#undef  TX_MUTEX_ENABLE_PERFORMANCE_INFO
#undef  TX_QUEUE_ENABLE_PERFORMANCE_INFO
#undef  TX_SEMAPHORE_ENABLE_PERFORMANCE_INFO
#undef  TX_TIMER_ENABLE_PERFORMANCE_INFO
#undef  TX_DISABLE_NOTIFY_CALLBACKS
#endif

#include "tx_api.h"

#include <stdlib.h>
#include <stdio.h>

#if (TX_MINIMUM_STACK <= 1024)
#define THREAD_STACK_SIZE 1024
#else
#define THREAD_STACK_SIZE TX_MINIMUM_STACK
#endif

TX_THREAD   thread_1;

void thread_1_entry(ULONG input);

/* Define main entry point.  */

int main(int argc, char **argv)
{
    puts("Hello, single-threaded world");    /* ThreadX not yet running */

    /* Start ThreadX.  This call never returns */
    tx_kernel_enter();

    return 0;    
}

/* Define what the initial system looks like.  */

void tx_application_define(void *threadx_avail_mem)
{
    char *free_mem = (char *)threadx_avail_mem;

    (void)tx_thread_create(&thread_1, "thread_1", thread_1_entry, 0,
            free_mem, THREAD_STACK_SIZE, 8, 8, 5, TX_AUTO_START);

    /* Advance the memory pointer past the thread's stack.  */
    free_mem += THREAD_STACK_SIZE;

    return;
}

/* Define the entry routine for thread_1 */

void thread_1_entry(ULONG input)
{
    while(1) {
        tx_thread_relinquish();
    }
}
