/* This demonstration program shows the debugging capabilities
   of MULTI for ThreadX.  */

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

/* If this file is being compiled with EventAnalyzer support... */
#ifdef TX_ENABLE_EVENT_LOGGING

/* then declare the linker-defined begin and end symbols for the .eventlog
   section.  */
extern char __ghsbegin_eventlog[];
extern char __ghsend_eventlog[];
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define THREAD_STACK_SIZE 1024

/* Define the thread object control blocks.  */

TX_THREAD   reader;
TX_THREAD   sorter;
TX_THREAD   writer;
TX_THREAD   thread_3;
TX_THREAD   thread_4;
TX_THREAD   thread_5;

/* Define the other ThreadX object control blocks.  */

TX_QUEUE                queue_read;
TX_QUEUE                queue_write;
TX_EVENT_FLAGS_GROUP    flags_1;
TX_BLOCK_POOL           blockpool_1;
TX_BYTE_POOL            bytepool_1;
TX_TIMER                app_timer_1;
TX_SEMAPHORE            sem_1;
TX_MUTEX                mutex_1;

/* Define thread and other function prototypes.  */
void reader_entry(ULONG input);
void sorter_entry(ULONG input);
void writer_entry(ULONG input);
void thread_3_entry(ULONG input);
void thread_4_entry(ULONG input);
void thread_5_entry(ULONG input);
void timer_expiration_callback(ULONG input);
void shellsort(void *v, int n, int(*comp)(const void *, const void *));

/* Define element structure.   */
struct element {
    char *name;
    unsigned int age:4;
    unsigned int gender:2;
    struct element *next;
};

/* Define the function used in the sorter thread's call to shellsort. */
int xcmp(const void *p, const void *q)
{
    /* Compare element names.  */
    return(strcmp((*(struct element **)p)->name,
            (*(struct element **)q)->name));
}



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

    UINT status;

    /* Define pointers to the first available memory
       and the end of free memory.  */
    char *free_mem = (char *)threadx_avail_mem;
    char *end_of_free_mem = (char *)threadx_avail_mem;

    /* If the remaining portion of the free_mem section is
       very small or negative, assume that the user placed a small
       free_mem section at the end of the linked image intending
       that memory usage would extend past the end of the section.
       In that case, just use 0xffffffff as the end of memory.  */
    if((signed int)(end_of_free_mem - free_mem) < 256) {
        end_of_free_mem = (char *)0xffffffff;
    }

    /* Create all threads in the system.  */
    status = tx_thread_create(&sorter, "sorter", sorter_entry, 0,
            free_mem, THREAD_STACK_SIZE, 8, 8, 4, TX_AUTO_START);
    if (status != TX_SUCCESS)  goto tx_create_error;

    /* If no more memory is available, stop creating objects.  */
    if(((unsigned int)(free_mem + THREAD_STACK_SIZE) >
            (unsigned int)end_of_free_mem))
        goto tx_free_mem_exhausted;

    /* Advance the memory pointer past the thread's stack.  */
    free_mem += THREAD_STACK_SIZE;

    status = tx_thread_create(&reader, "reader", reader_entry, 0,
            free_mem, THREAD_STACK_SIZE, 8, 8, 5, TX_AUTO_START);
    if (status != TX_SUCCESS)  goto tx_create_error;

    /* If no more memory is available, stop creating objects.  */
    if(((unsigned int)(free_mem + THREAD_STACK_SIZE) >
            (unsigned int)end_of_free_mem))
        goto tx_free_mem_exhausted;

    /* Advance the memory pointer past the thread's stack.  */
    free_mem += THREAD_STACK_SIZE;

    status = tx_thread_create(&writer, "writer", writer_entry, 0,
            free_mem, THREAD_STACK_SIZE, 8, 8, 3, TX_AUTO_START);
    if (status != TX_SUCCESS)  goto tx_create_error;

    /* If no more memory is available, stop creating objects.  */
    if(((unsigned int)(free_mem + THREAD_STACK_SIZE) >
            (unsigned int)end_of_free_mem))
        goto tx_free_mem_exhausted;

    /* Advance the memory pointer past the thread's stack.  */
    free_mem += THREAD_STACK_SIZE;

    status = tx_thread_create(&thread_3, "thread_3", thread_3_entry, 0,
            free_mem, THREAD_STACK_SIZE, 16, 16, 1, TX_AUTO_START);
    if (status != TX_SUCCESS)  goto tx_create_error;

    /* If no more memory is available, stop creating objects.  */
    if(((unsigned int)(free_mem + THREAD_STACK_SIZE) >
            (unsigned int)end_of_free_mem))
        goto tx_free_mem_exhausted;

    /* Advance the memory pointer past the thread's stack.  */
    free_mem += THREAD_STACK_SIZE;

    status = tx_thread_create(&thread_4, "thread_4", thread_4_entry, 0,
            free_mem, THREAD_STACK_SIZE, 17, 16, 1, TX_AUTO_START);
    if (status != TX_SUCCESS)  goto tx_create_error;

    /* If no more memory is available, stop creating objects.  */
    if(((unsigned int)(free_mem + THREAD_STACK_SIZE) >
            (unsigned int)end_of_free_mem))
        goto tx_free_mem_exhausted;

    /* Advance the memory pointer past the thread's stack.  */
    free_mem += THREAD_STACK_SIZE;

    status = tx_thread_create(&thread_5, "thread_5", thread_5_entry, 0,
            free_mem, THREAD_STACK_SIZE, 18, 16, 1, TX_AUTO_START);
    if (status != TX_SUCCESS)  goto tx_create_error;

    /* If no more memory is available, stop creating objects.  */
    if(((unsigned int)(free_mem + THREAD_STACK_SIZE) >
            (unsigned int)end_of_free_mem))
        goto tx_free_mem_exhausted;

    /* Advance the memory pointer past the thread's stack.  */
    free_mem += THREAD_STACK_SIZE;

    /* Create a semaphore.  */
    status = tx_semaphore_create(&sem_1, "sem_1", 1);

    /* If any error happened, stop creating objects.  */
    if (status != TX_SUCCESS)
        goto tx_create_error;

    /* Create a mutex.  */
    status = tx_mutex_create(&mutex_1, "mutex_1", 0);

    /* If any error happened, stop creating objects.  */
    if (status != TX_SUCCESS)
        goto tx_create_error;

    /* If no more memory is available, stop creating objects.  */
    if(((unsigned int)(free_mem + 64) > (unsigned int)end_of_free_mem))
        goto tx_free_mem_exhausted;

    /* Create a queue from which the reader thread will send messages.  */
    status = tx_queue_create(&queue_read, "queue_read", TX_1_ULONG,
            free_mem, 32);

    /* If any error happened, stop creating objects.  */
    if (status != TX_SUCCESS)
        goto tx_create_error;

    /* Advance the memory pointer past the queue memory.  */
    free_mem += 32;

    /* Create a queue from which the writer thread will receive messages.  */
    status = tx_queue_create(&queue_write, "queue_write", TX_1_ULONG,
            free_mem, 32);

    /* If any error happened, stop creating objects.  */
    if (status != TX_SUCCESS)
        goto tx_create_error;

    /* Advance the memory pointer past the queue memory.  */
    free_mem += 32;

    /* Create an event flags group.  */
    status = tx_event_flags_create(&flags_1, "flags_1");

    /* If any error happened, stop creating objects.  */
    if (status != TX_SUCCESS)
        goto tx_create_error;

    /* If no more memory is available, stop creating objects.  */
    if(((unsigned int)(free_mem + 256) > (unsigned int)end_of_free_mem))
        goto tx_free_mem_exhausted;

    /* Create a block pool using tx_block_pool_create_array */
    status = tx_block_pool_create(&blockpool_1, "blockpool_1", 12,
            free_mem, 256);

    /* If any error happened, stop creating objects.  */
    if (status != TX_SUCCESS)
        goto tx_create_error;

    /* Advance the memory pointer past the block pool memory.  */
    free_mem += 256;

    /* If no more memory is available, stop creating objects.  */
    if(((unsigned int)(free_mem + 384) > (unsigned int)end_of_free_mem))
        goto tx_free_mem_exhausted;

    status = tx_byte_pool_create(&bytepool_1, "bytepool_1", free_mem,
            384);

    /* Advance the memory pointer past the byte pool memory.  */
    free_mem += 384;

    /* If any error happened, stop creating objects.  */
    if (status != TX_SUCCESS)
        goto tx_create_error;

    /* Create an application timer.  */
    status = tx_timer_create( &app_timer_1, "app_timer_1",
            timer_expiration_callback, 12345, 2, 5, TX_AUTO_ACTIVATE);

    /* If any error happened, report an error.  */
    if (status != TX_SUCCESS)
        goto tx_create_error;

    return;
tx_create_error:
    /* Report the error.  */
    puts("Error in tx_application_define: a tx_*_create function returned\n"
            " a value other than TX_SUCCESS.");

    return;
tx_free_mem_exhausted:

    /* Report the error.  */
    puts("Error in tx_application_define: no more memory available in "
            "free_mem section.  Check your linker file");

    return;
}

#define MAXN 1024

void reader_entry(ULONG input)
{

    FILE *fp;
    int age,slen;
    static char name[256],linebuf[256], buf[BUFSIZ];
    struct element *pthis;

    /* open file containing data records (format: "name age\n") */
    {
        const char *basename = "roster.txt";
        const char *curfname = __FULL_FILE__;
        const char *curbname = __BASE__;
        char *filename = (char *)malloc(strlen(curfname)+1+strlen(basename));

        strcpy(filename, curfname);
        strcpy(strstr(filename, curbname), basename);

        fp = fopen(filename,"r");

        /* If the file couldn't be opened, return immediately.  This thread
           transitions to the completed state.  */
        if (fp == 0) {
            printf("couldn't open file %s\n",filename);

            free(filename);
            return;
        }
        free(filename);
    }

    /* Set stream buffering for the file.  */
    setbuf(fp, buf);

    /* read in records and pass them to sort thread */
    while (1) {

        /* Read in one line from the file.  */
        if (fgets(linebuf, sizeof(linebuf), fp) == NULL)
            break;

        /* Read name and age fields from line.  */
        if (sscanf(linebuf,"%255s %d",name,&age)!=2)
            break;

        /* Allocate space to hold the element data structure.  */
        tx_byte_allocate(&bytepool_1, (void *)&pthis, sizeof(struct element),
                TX_WAIT_FOREVER);

        /* Compute the space needed to hold the name and terminating \0.  */
        slen = strlen(name) + 1;

        /* Allocate space to hold the name string.  */
        tx_byte_allocate(&bytepool_1, (void *)&pthis->name, slen,
                TX_WAIT_FOREVER);

        /* Copy the name and age values into the allocated space.  */
        strcpy(pthis->name, name);
        pthis->age = age;

        /* Send the pointer to the sorter thread using a message queue.  */
        tx_queue_send(&queue_read, (VOID *)&pthis, TX_WAIT_FOREVER);
    }

    /* Send a null pointer to indicate no more data.  */
    pthis = NULL;
    tx_queue_send(&queue_read, (VOID *)&pthis, TX_WAIT_FOREVER);
}

void sorter_entry(ULONG input)
{
    struct element *pfirst = 0;
    struct element *pprev,*pthis;
    struct element **parray = 0, **pitem;
    int cnt;
    UINT retval;

    /* Place data records into a linked list */
    for (cnt = 0; cnt < MAXN; ++cnt) {

        /* Receive data structure pointer from queue.  */
        retval = tx_queue_receive(&queue_read, &pthis,
                100);

        /* If the thread timed out, return and transition to completed
           state.  */
        if(retval == TX_QUEUE_EMPTY) {
            /* Failed to receive message from reader thread.  */
            return;
        }

        if(pfirst == 0) {
            /* Assign the pointer to the first element.  */
            pfirst=pthis;
        } else {
           /* Assign the next pointer in the previous element.  */
            pprev->next=pthis;
        }

        /* If the received data structure was a null pointer,
           terminate the loop.  */
        if(pthis==NULL)
            break;

        /* Assign the pointer to the previous element for use in the
           next loop iteration.  */
        pprev=pthis;

    }

    /* make an array of ptrs to structs.  */
    tx_byte_allocate(&bytepool_1, (void *)&parray, cnt*sizeof(struct element *),
            TX_WAIT_FOREVER);

    /* Copy the array pointer into a temporary.  */
    pitem = parray;

    /* Fill the array of pointers.  */
    for(pthis = pfirst; pthis; pthis = pthis->next) {
        *pitem = pthis;
        pitem++;
    }

    /* Sort an array of pointers to the list */
    shellsort((void *)parray, cnt, xcmp);

    /* Transmit the records to the write thread */
    for(pitem = parray; cnt; --cnt) {
        tx_queue_send(&queue_write, (VOID *)&pitem, TX_WAIT_FOREVER);
        pitem++;
    }

    /* Send a null pointer to indicate no more data */
    pitem = 0;
    tx_queue_send(&queue_write, (VOID *)&pitem, TX_WAIT_FOREVER);
}

void writer_entry(ULONG input)
{
    struct element **pitem;
    struct element **parray = 0;

    /* Obtain first entry in array */
    tx_queue_receive(&queue_write, (VOID *)&pitem, TX_WAIT_FOREVER);

    /* Copy the first entry because it also points to allocated memory.  */
    parray = pitem;

    while(1) {
        printf("%s %d\n",(*pitem)->name, (*pitem)->age);

        /* Release the data element pointed to by pitem.  */
        /* Notice that we forget to release pitem->name.  */
        tx_byte_release((void *) (*pitem));

        /* Obtain the next entry in the array.  */
        tx_queue_receive(&queue_write, (VOID *)&pitem, TX_WAIT_FOREVER);

        /* A null pointer indicates the end of the list.  */
        if (pitem == 0) break;
    }

    /* Clean up remaining allocated memory.  Note that the second call
       will return TX_PTR_ERROR (0x03) if ThreadX error checking is used.  */
    tx_byte_release((void *)parray);
    tx_byte_release((void *)pitem);
}

#define LOOP_ITERATIONS 3

void thread_3_entry(ULONG input)
{

    /* Define variables used by tx_mutex_info_get.  */
    CHAR *name;
    ULONG count, suspended_count;
    TX_THREAD *owner, *this_thread, *first_suspended;
    TX_MUTEX *next_mutex;

    /* Define other local variables.  */
    int i;
    ULONG actual_flags;

    /* Get the current thread pointer.  */
    this_thread = tx_thread_identify();

    /* Get the mutex before entering the loop.  */
    tx_mutex_get(&mutex_1, TX_WAIT_FOREVER);

    for(i=LOOP_ITERATIONS; i; --i) {

        /* Wait until both bits 4 and 8 are available and consume them. */
        tx_event_flags_get(&flags_1, 0x110, TX_AND_CLEAR,
                &actual_flags, TX_WAIT_FOREVER);

        /* Determine mutex owner.  */
        tx_mutex_info_get(&mutex_1, &name, &count, &owner, &first_suspended,
                &suspended_count, &next_mutex);

        /* If we don't already own this mutex, get it.  */
        if(owner != this_thread)
            tx_mutex_get(&mutex_1, TX_WAIT_FOREVER);

        /* Put the semaphore for thread 5 */
        tx_semaphore_put(&sem_1);

        /* Put the mutex.  */
        tx_mutex_put(&mutex_1);
    }

    /* Put the mutex.  */
    tx_mutex_put(&mutex_1);

    /* Transition to completed state */
    return;
}

int common_routine(int i, int j);

void thread_4_entry(ULONG input)
{
    int i;
    ULONG actual_flags;

    /* Get one of the event flags from the flags_1 group.  */
    tx_event_flags_get(&flags_1, 0x01, TX_OR_CLEAR,
            &actual_flags, TX_WAIT_FOREVER);

    for(i=LOOP_ITERATIONS; i; --i) {
        /* Set bit 5 of event_flags.  */
        tx_event_flags_set(&flags_1, 0x100, TX_OR);

        /* Get the mutex.  */
        tx_mutex_get(&mutex_1, TX_WAIT_FOREVER);

        /* Execute some code shared by multiple threads.  */
        common_routine(i, 2+i);
        common_routine(i, 2+i);
        common_routine(i, 2+i);
        common_routine(i, 2+i);
        common_routine(i, 2+i);

        /* Put the mutex.  */
        tx_mutex_put(&mutex_1);
    }
}

void thread_5_entry(ULONG input)
{
    int i; UINT old_priority;
    void *block0, *block1, *bytes0;

    tx_thread_priority_change(&thread_5, 31, &old_priority);
    for(i=LOOP_ITERATIONS;  i; --i) {

        /* Allocate two blocks from blockpool_1.  */
        tx_block_allocate(&blockpool_1, &block0, TX_WAIT_FOREVER);
        tx_block_allocate(&blockpool_1, &block1, TX_WAIT_FOREVER);

        /* Release one of the blocks.  The other will be leaked
           when the loop body executes again.  */
        tx_block_release(block0);

        /* Set bit 0 of event_flags */
        tx_event_flags_set(&flags_1, 0x1, TX_OR);

        /* Execute some code shared by multiple threads.  */
        common_routine(i, 2+i);

        /* Set bit 4 of event_flags */
        tx_event_flags_set(&flags_1, 0x10, TX_OR);

        /* Get the semaphore.  */
        tx_semaphore_get(&sem_1, TX_WAIT_FOREVER);
    }

    /* Attempt to allocate 80 bytes from the byte pool.  If this
       request succeeds, the thread immediately leaks the memory
       by returning from its entry function.  */
    tx_byte_allocate(&bytepool_1, &bytes0, 80, TX_WAIT_FOREVER);

}


/* Define a global variable used by the application timer.  */
int timer_expiration_count;


/* Timer expiration callback function.  */
void timer_expiration_callback(ULONG input)
{
    /* Increment a global variable.  */
    ++timer_expiration_count;
}

int common_routine(int i, int j)
{

    /* Perform some processing in a function called by multiple threads.  */
    return i + j<<2;
}

