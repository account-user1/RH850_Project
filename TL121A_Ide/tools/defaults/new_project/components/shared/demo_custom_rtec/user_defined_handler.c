#include <stdio.h>
#include "labels.h"
int __re_extra, __re_pid;

/* The "_rnerr" funcion will be called whenever a run-time error has occurred
 * and runtime error checking is enabled.  It will, in turn, call the handler
 * I wrote.
 */

void MyRuntimeErrorHandler(int code, int line, const char *filename, void *ptr) {
/*
 * code:       error type  
 * line:       line in the source code which fails  
 * filename:   name of the source file which fails  
 *          
 * Valid error types:  
 * 0:  UNUSED  
 * 1:  array index  
 * 2:  variant  
 * 3:  nil pointer  
 * 4:  switch out of bounds  
 * 5:  uninitialized variable  
 * 6:  assignment out of bounds  
 * 7:  division by zero  
 * 8:  value out of bounds (pred,succ)  
 * 9:  free of something not malloced  
 * 10: free of something already free  
 * 11: free list corrupted  
 * 12: reference to bad data  
 * 13: unreferenced memory  
 * 14: overflow  
 * 15: Error limit exceeded  
 * 16: Watchpoint  
 * 17: Return of nothing from non-void procedure  
 * 18: Ambiguous virtual function called  
 * 19: Attempt to free NULL  
 * 20: Heap max exceeded  
 * 21: Stack max exceeded
 *
 * >= 0x100: customized runtime errror
 */

#if 1
    if(code >= 0x100) {
        char addr_str[18];
        addr_str[0] = '\0';
        if(filename) {
            sprintf(addr_str, "0x%8.8x", filename);
        }
        printf((const char *)ptr, addr_str);
        return;
    }
    switch(code)  {

        case 1:
        OutOfBounds:
            printf("Runtime error: Array index out of bounds in file = %s, line = %d\n", filename, line);
            break;
        case 3:
        NullDereference:
            printf("Runtime error: NULL pointer dereference in file = %s, line = %d\n", filename, line);
            break;
        case 4:
        SwitchFallThrough:
            printf("Runtime error: Case/Switch has no match in file = %s, line = %d\n", filename, line);
            break;
        case 7:
        DivideByZero:
            printf("Runtime error: Divide by zero!!! in file = %s, line = %d\n", filename, line);
            break;
        case 9:
        AttemptToFree:
            printf("Runtime error: Attempt to free unallocated memory in file = %s, line = %d\n", filename, line);
            break;
        case 19:
        AttemptToFree2:
            printf("Runtime error: Attempt to free memory not allocated in file = %s, line = %d\n", filename, line);
            break;
        default:
        Error:
            printf("Error code = %d, file = %s, line = %d\n", code, filename, line);
    }
#endif
    return;
}

void _rnerr(int code, int line, const char *filename, void *ptr)
{
    if (filename == NULL)
	filename = "(null)";
    MyRuntimeErrorHandler(code, line, filename, ptr);
}


