// Read directions.txt to start this demo.

#include "demo.h"

//***************************************************
//** Example #1
//**   This code had been in the application for
//**   years before it started causing hard to track
//**   down memory corruptions.  Its your standard
//**   array overrun.  If DoubleCheck was used the
//**   problem could have been fixed before the code
//**   was ever added to the application.
//***************************************************

void example_func1()
{
    bool some_value1;

    some_value1 = some_func1(false);
    for (int i = 0; i <= formattablesize; i++) {
	formattable[i] = NULL;
    }

    //
    // ...lots of code deleted...
    //
    some_func1(some_value1);
}

//***************************************************
//** Example #2
//**   This bug was fortunately caught by DoubleCheck
//**   before the code was released.  Its worked
//**   most of the time making it seem correct but
//**   certain return paths in example_func2a()
//**   don't set need_sched so an uninitialized
//**   value is used from the stack.
//***************************************************

A_ERROR example_func2(A_TASK *task_ptr, A_VALUE new_priority)
{    
    A_ERROR ret;
    A_VALUE old_state = some_func2();
    A_BOOL need_sched;

    ret = example_func2a(task_ptr,
	    (A_MAX_PRIORITIES-1)-new_priority, &need_sched);
    
    some_func3(old_state, need_sched);
    return ret;
}

A_ERROR example_func2a(A_TASK *task_ptr,
    A_VALUE new_priority, A_BOOL *need_sched)
{
    A_WAIT_LIST_MASK_TYPE open_index_mask;

    if (new_priority == task_ptr->static_priority)
       // No change to make 
       return A_SUCCESS;
    
    // Find open slot in the global array 
    open_index_mask = A_WAIT_LIST_PRIORITY_OPEN_INDEX_MASK(
           a_kernel_sched_info.static_task_mask, new_priority);
    if (!open_index_mask) {
       // No more room at the designated priority level
       return A_ERROR_PRIORITY_LEVEL_FULL;
    }

    // ...lots of code deleted...
    *need_sched = A_FALSE;
    return A_SUCCESS;
}    

//***************************************************
//** Example #3
//**   In this example the user forgot to set "tmp"
//**   once a match had been found.  The code would
//**   end up reading free'd memory causing problems
//**   when another thread allocated the free'd
//**   memory by chance.
//***************************************************

void example_func3(struct3 *prev, struct3 *tmp, const char *name)
{
    int del_cnt = 0;
    
    
    while ( tmp )
    {
	if ( strcmp(tmp->p_data->name, name) == 0 ) 
	{
	    /* match found */
	    prev->next=tmp->next;
	    V3_FREE(tmp->p_data);
	    V3_FREE(tmp);
	    del_cnt++;
	}
	else
	{
	    prev=tmp;
	    tmp=tmp->next;
	}
    };

    //
    // ...lots of code deleted...
    //    
}

//***************************************************
//** Example #4
//**   This code existed in an application for
//**   several months before DoubleCheck was used.
//**   The author obviously forgot to put in break
//**   statements.
//***************************************************

void example_func4(void *addr64, int size, mem_value *rvalue)
{
    int rv = 0;
    
    switch (size) {
	case MSIZE_UINT8:
	    rv = mem64_kernel_get_block (addr64, size, 1,
                    (uint8 *)&rvalue->val.vUint8);
	case MSIZE_UINT16:
	    rv = mem64_kernel_get_block (addr64, size, 1,
                    (uint8 *)&rvalue->val.vUint16);
	case MSIZE_UINT32:
	    rv = mem64_kernel_get_block (addr64, size, 1,
		    (uint8 *)&rvalue->val.vUint32);
	case MSIZE_UINT64:
	    rv = mem64_kernel_get_block (addr64, size, 1,
                    (uint8 *)&rvalue->val.vUint64);
    }

    //
    // ...lots of code deleted...
    //    
    some_func4(rv);
}

//***************************************************
//** Example #5
//**   This code failed sporadically depending on
//**   whether other functions modified the
//**   deallocated stack memory this function
//**   returned pointers to.
//***************************************************

const char *example_func5(form opc)
{
    char buf[1000];
    
    buf[0] = '\0';
    for (const inst_desc *desc = instructions[opc]; desc; desc = desc->next) {
        /* CODE: handle embedded operands; maybe show first operand */
        check(desc->name);
        check(strlen(buf) + 1 + strlen(desc->name) < sizeof(buf));
	strcat(buf, ",");
        strcat(buf, desc->name);
    }
    if (!buf[0])
        return "(NULL)";
    return buf + 1;  // skip the initial comma
}

//***************************************************
//** Example #6
//**   The destructors for ResponseListener were not
//**   properly getting called in this example until
//**   DoubleCheck pointed out the problem.  This
//**   was a hidden resource leak.
//***************************************************

void example_func6(int count, IDListenersTable * table,
	const MsgHeader2 & key, STPIMsg * rsp,
	bool exclusive)
{
    ResponseListener * rlist = new ResponseListener[count];

    //
    // Hundreds of lines of code deleted...
    //
    
    delete rlist;
}

//***************************************************
//** Example #7
//**   This code looked reasonable until DoubleCheck
//**   noticed something was awry.  The user meant
//**   to check *mutex to see if it was NULL.  If
//**   global_alloc() had returned NULL the code
//**   would later have crashed when **mutex was
//**   accessed.
//***************************************************

err_code example_func7(PB_Mutex *mutex, const char *name, int priority_inherit)
{
    *mutex = global_alloc(sizeof(struct PB_SemaphoreStruct));
    if(mutex == NULL) {
        return ERR_NO_MEMORY;
    }

    //
    // ...lots of code deleted...
    //
    return ERR_NONE;    
}

//***************************************************
//** Example #8
//**   This code caused intermittent failures
//**   because with certain #define's set it used an
//**   uninitialized variable's value.  This example
//**   shows why its a good idea to have DoubleCheck
//**   on at all times.
//***************************************************

err_code example_func8(void *msg, COM_DEV *dev, int flags, int new_pc)
{
    err_code e;
    TARGET_DEF *trg;
    trg = &targets[prt_hdr_get_core(msg)];
    char *regname;

    //
    // ...lots of code deleted...
    //
    
#ifdef IS_PHW_SWING
    e = test_error(trg_property_get_string(trg, "pc_register",
	    regname, 128, NULL));
#else
    regname = trg->pc_reg;
    if(regname == NULL)
	e = ERR_NO_MATCH;
#endif
#if INCLUDE_NEW_REGISTER_SYSTEM
    if (e == ERR_NONE) {
	e = test_error(ind_trg_get_reg_info_str(trg, NULL, regname));
	if (e == ERR_NONE)
	    e = ind_trg_write_register(trg, new_pc);
    }
#endif

    // ...lots of code deleted...
    return e;
}

//***************************************************
//** Example #9
//**   In this example of a typical cut-and-paste
//**   mistake a file would get closed twice leading
//**   to problems.  As the code was executed more
//**   and more the qflFile handles would be left
//**   open until the O/S ran out of handles.  This
//**   plagued customers who were never able to come
//**   up with a reproducible example of the
//**   application failing, until DoubleCheck spotted
//**   what was wrong.
//***************************************************

void example_func9(char *xmFileName, char *qflFileName)
{
    FILE *xmFile;
    //
    // ...lots of code deleted...
    //

    xmFile = gen_safe_fopen(xmFileName, "xlist", READ_TEXT);
    
    Xm_ReadLines(xmFile);
    
    if(Xm_PeekLine()==NULL)
	gen_errorexit(1, "xlist file empty");
    
    gen_fclose(xmFile);
    
    if(qflFileName) {
	FILE * qflFile = gen_safe_fopen(qflFileName, "change function list",
		READ_TEXT);
	
	Qfl_ReadLines(qflFile);
	
	gen_fclose(xmFile);
    }
}

//***************************************************
//** Example #10
//**   At first glance one might think ret was
//**   always properly set but when len == 0 this
//**   function returned garbage.
//***************************************************

int example_func10(int dest/*fd*/, unsigned int srcAddr, unsigned int len)
{
    unsigned char *buf = (unsigned char *)srcAddr;
    int ret;
    
    while (len > 0 && (ret = my_write(dest, buf, len)) > 0) {
	buf += ret;
	len -= ret;
    }
    
    return ret;
}

//***************************************************
//** Example #11
//**   Here DoubleCheck identified a hard to spot
//**   resource leak that only occurred under
//**   particular circumstances (when CreateANSICTask
//**   failed).
//***************************************************

Error example_func11(char *cmd, char *argv, int argc, char *name, int task,
	int priority, int cmd_entry)
{
    arg_type *args;
    Error e;
    
    args = (arg_type*)malloc(sizeof(*args));
    if (!args)
	return MemoryAllocationFailed;
    
    args->cmd = cmd;
    args->argc = argc;
    args->argv = argv;
    
    e = CreateANSICTask(priority, (Address)cmd_entry,
	    (Address)CMD_STACK_SIZE, name, task);
    if (e != Success)
	return e;
    
    CheckSuccess(SetTaskIdentification(*task, (Address)args));
    CheckSuccess(RunTask(*task));

    free(args);
    return Success;
}

//***************************************************
//** Example #12
//**   This code had existed for a long time in a
//**   correct state until one day someone added the
//**   "i >= val->lm_size" check in the wrong place.
//**   It provides an example of why DoubleCheck
//**   is valuable in all stages of the software
//**   developement cycle, including code maintenance
//**   where in this case it helped keep the code
//**   functioning correctly.
//***************************************************

uint8 example_func12(const pb_value *val, int indx, int i)
{
    uint8 *val_data;
    
    if (i >= val->lm_size || val == NULL)
	return 0;
    
    val_data = (uint8 *) (val + 1) + val->lm_size * indx;

    // ...lots of code deleted...
    return *val_data;
}
