#include <stdio.h>
#include <stdlib.h>
void __malloc_findleaks(void); /* prototype for internal malloc call */

struct foo {
    int data1;
    struct foo * next;
    int  val;
    int data2;
};

struct foo * ptr;

struct foo * alloc_list(int length)
{
    struct foo * ret = NULL;
    struct foo * last = NULL;

    while(--length>=0) {
	struct foo * elem = NULL;
	elem = (struct foo *)malloc(sizeof(struct foo));

	elem->data1 = length;
	elem->data2 = length;
	elem->val = length;

	if(last) {
	    last->next = elem;
	    last = elem; 
	} else {
	    ret = last = elem;
	}
    }

    if(last)
	last->next = NULL;
    
    return ret;
}

struct foo * free_list(struct foo * list)
{
    /* oops, we forgot to free the list */
    list = NULL;
    return list;
}

const char * before = "Let's allocate some memory...";
const char * after = "Now let's leak it all...";

int main(void)
{
    printf("%s\n", before);
    ptr = alloc_list(8);

    printf("%s\n", after);
    ptr = free_list(ptr);

    /* Uncomment the next line to have the program print to standard error
     * all memory leaks at run time without a debugger attached. */
    /* __malloc_findleaks(); */

    return 0;
}

