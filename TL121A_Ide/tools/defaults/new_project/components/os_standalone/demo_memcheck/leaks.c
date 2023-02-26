#include <stdlib.h>
#include "labels.h"

typedef struct node {
    int x;
    int y;
    struct node * next;
} NODE;

void function_a (int, int, int);
void function_b (int, int, int);
void function_c (int, int, int);
void function_d (int, int, int);
void function_e (int, int, int);

void clear_stack(int, int, int);

int main () {
    int i=1, j=2, k=3;

    function_a (i, j, k);

    /* some useless math */
    i = j + k;
    k = j * 7;
    j = k + 2;

    function_a (i, j, k);
    function_e (i-1, j+1, k);

    clear_stack(i, j, k);
    
CheckForLeaks:
    return i+j+k;
}

void function_a(int x, int y, int z)
{
    if(x > y)
        function_b(x, y, z);
    else
        function_c(x,y,z);
}

void function_b (int x, int y, int z)
{
    function_c(x, y, z);
}

void function_c (int x, int y, int z)
{
    function_d(x, y, z);
}

void function_d (int x, int y, int z)
{
    function_e(x, y, z);
}

void function_e (int x, int y, int z)
{
    int i;
    NODE *leaker = NULL;
    NODE *temp = NULL;
    for (i=1;i<3;i++) {
        temp = (NODE *) malloc (sizeof (NODE));
        temp->x = temp->y = x+y+z;
        temp->next = leaker;
        leaker = temp;
    }
    /* we forgot to free the NODEs which we just allocated */
}

void clear_stack(int x, int y, int z)
{
    int i;
    NODE *temp = NULL;
    NODE *next = NULL;
    for (i=1;i<10;i++) {
        temp = (NODE *) malloc (sizeof (NODE));
        temp->x = temp->y = x+y+z;
        temp->next = next;
        next = temp;
    }
    while (next != NULL){
	temp = next->next;
	free(next);
	next = temp;
    }
}

