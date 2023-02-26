#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// for example #1
extern bool some_func1(bool);
const int formattablesize = 255;
typedef struct formatrec *formatptr;
formatptr formattable[formattablesize];

// for example #2
#define A_VALUE int
#define A_BOOL bool
#define A_FALSE false
struct A_TASK {
    A_VALUE static_priority;
};
enum A_ERROR {
    A_SUCCESS,
    A_ERROR_PRIORITY_LEVEL_FULL
};
extern A_VALUE some_func2();
#define A_MAX_PRIORITIES 255
extern void some_func3(A_VALUE, A_BOOL);
A_ERROR example_func2a(A_TASK *task_ptr,
	A_VALUE new_priority, A_BOOL *need_sched);
#define A_WAIT_LIST_MASK_TYPE int
#define A_WAIT_LIST_PRIORITY_OPEN_INDEX_MASK(a, b) 0

// for example #3
struct struct3 {
    struct {
	const char *name;
    } *p_data;
    struct struct3 *next;
};
#pragma double_check frees 1 V3_FREE
extern void V3_FREE(void *p);

// for example #4
typedef unsigned char uint8;
enum {
    MSIZE_UINT8,
    MSIZE_UINT16,
    MSIZE_UINT32,
    MSIZE_UINT64
};
struct mem_value {
    struct {
	unsigned char vUint8;
	unsigned short vUint16;
	unsigned int vUint32;
	unsigned long long vUint64;
    } val;
};
extern int mem64_kernel_get_block(void*,int,int,uint8*);
extern void some_func4(int);
    
// for example #5
#define check(a)
struct inst_desc {
    const char *name;
    inst_desc *next;
} *instructions[10];
typedef int form;

// for example #6
struct STPIMsg;
struct ResponseListener {
    ResponseListener() { }
};
struct IDListenersTable;
struct MsgHeader2;

// for example #7
enum err_code {
    ERR_NO_MEMORY,
    ERR_NO_MATCH,
    ERR_NONE
};
typedef struct PB_SemaphoreStruct {
    int junk;
} *PB_Mutex;
#pragma double_check needs_null_check 0 global_alloc
extern PB_Mutex global_alloc(int);

// for example #8
struct COM_DEV;
struct prt_trg_stat;
struct TARGET_DEF {
    char *pc_reg;
} targets[10];
#define PRT_RUN_USE_PC 1
extern int prt_hdr_get_core(void*);
#define INCLUDE_NEW_REGISTER_SYSTEM 1
extern int trg_property_get_string(TARGET_DEF *,char*,char*,int,char*);
extern int ind_trg_get_reg_info_str(TARGET_DEF *,char*,char*);
extern err_code test_error(int);
extern err_code ind_trg_write_register(TARGET_DEF*,int);

// for example #9
#define READ_TEXT 0
extern FILE* gen_safe_fopen(char*,char*,int);
extern void Xm_ReadLines(FILE*);
extern void*Xm_PeekLine();
extern void gen_errorexit(int,char*);
extern void Qfl_ReadLines(FILE*);
#pragma double_check frees 1 gen_fclose
extern void gen_fclose(FILE *);

// for example #10
extern int my_write(int,void*,unsigned);

// for example #11
struct arg_type {
    char *cmd, *argv;
    int argc;
};
enum Error {
    MemoryAllocationFailed,
    Success
};
#define Address int
#define CheckSuccess(a)
extern Error CreateANSICTask(int,Address,Address,char*,int);
#define CMD_STACK_SIZE 128

// for example #12
struct pb_value {
    int lm_size;
};
