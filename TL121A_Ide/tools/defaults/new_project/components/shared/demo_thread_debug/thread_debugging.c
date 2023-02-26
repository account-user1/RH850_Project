#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>

/* Note: If your Linux system uses NPTL rather than LinuxThreads then
 * the getpid call will return the same pid in each thread.  To get the
 * actual thread id in a NPTL system use the gettid system call.  This
 * call may not be implemented in your libc, in which case you could do
 * something like this: */
int my_gettid()
{
#if defined(SYS_gettid)
#  define SYSCALL_NUM_FOR_gettid SYS_gettid
#elif defined(__sparc) || defined(__sparc__)
#  define SYSCALL_NUM_FOR_gettid 143
#elif defined(__mips) || defined(__mips__)
#  define SYSCALL_NUM_FOR_gettid 178
#  if defined(_MIPS_SIM) && defined(_MIPS_SIM_ABI32)
#    if _MIPS_SIM == _MIPS_SIM_ABI32
#      undef SYSCALL_NUM_FOR_gettid
#      define SYSCALL_NUM_FOR_gettid 222
#    endif
#  endif
#elif defined(__V850) || defined(__v850) || defined(__v850__)
#  define SYSCALL_NUM_FOR_gettid 201
#elif defined(__ppc) || defined(__ppc__)
#  define SYSCALL_NUM_FOR_gettid 207
#elif defined(__m68k) || defined(__m68k__) || defined(__mc68000) || \
	defined(__MC68000) || defined(__m68000)
#  define SYSCALL_NUM_FOR_gettid 221
#elif defined(__ARM) || defined(__arm__) || \
	defined(__i386) || defined(__i386__) || defined(__80386__) || \
	defined(__M32R__) || \
	defined(__SH7000)
#  define SYSCALL_NUM_FOR_gettid 224
#else
#  warning gettid syscall number not set, falling back on getpid()
#endif

#if defined(SYSCALL_NUM_FOR_gettid)
    static int has_gettid = 1;
    if(has_gettid) {
	int ret;
        errno = 0;
        ret = syscall(SYSCALL_NUM_FOR_gettid, 0, 0);
        if(errno != ENOSYS) {
            return ret;
        }
        has_gettid = 0;
    }
#endif

    return getpid();
}

void sighandler(int arg)
{
    printf("[sighandler]Called with arg: %d\n", arg);
}

void *thread_func1(void *arg)
{
    while(1) {
	printf("[thread_func1:%d]Running...\n", my_gettid());
	sleep(1);
    }
}

void *thread_func2(void *arg)
{
    while(1) {
	printf("[thread_func2:%d]Running...\n", my_gettid());
	sleep(1);
    }
}

int main()
{
    int counter = 0;
    pthread_t *p;

    printf("[main]Main PID is: %d\n", my_gettid());

    p = (pthread_t*)malloc(sizeof(pthread_t));
    pthread_create(p, NULL, thread_func1, (int*)counter++);
    free(p);

    thread_func2((int*)counter++);

    return 0;
}
