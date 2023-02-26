/*	
        Linked List Example

            This very simple example will add names and information to a linked
        list and then print the contents of the linked list to standard out.  Its
        purpose is to demonstrate simple debugging in the MULTI IDE.
            This file is accompanied with a Script file linked_list.rc.  This 
        script will set break-points and display messages in the debbuggers commande 
        pane.  To run the demo, follow the directions printed at the command pane.

*/

/* Include Green Hills Host I/0 Library to allow us to print to standard out */
#include <stdio.h>
#include <string.h>
#include "labels.h"

#define ELEMENTSOF(x) (sizeof(x)/sizeof(x[0]))

enum gender {female, male};

struct information {
    int age : 8;
    enum gender gender : 8;
};
struct list {
    struct list *next;
    char name[8];
    struct information information;
};

struct list *list;
long counter;
int a[25];
struct element {
    char name[8];
    struct information info;
} table[] = {
    "Steve",	{ 47, male,	},
    "Mary",	{ 28, female,	},
    "Pat",	{ 49, female,	},
    "Ellen",	{ 33, female,	},
    "Bob",	{ 22, male,	},
    "Max",	{ 59, male,	},
    "Marcus",	{ 33, male,	},
    "Richard",	{ 53, male,	},
    "Melanie",	{ 44, female,	},
    "Diane",	{ 22, female,	},
};


/* MULTI allows the evaluation of #defines */
#define COUNT ELEMENTSOF(table)

/* This function prints all the records of the global list */
void print_global_list()
{
    struct list *temp = list;

    printf("Global List of Names:\n");

ViewList:
    while(temp != NULL){
        printf("Name: %8s Age: %3d, Gender: ",temp->name,temp->information.age);
        if(temp->information.gender == female)
            printf("female\n");
        else
            printf("male\n");
        temp = temp->next;
    }
    return;
}

/* This function adds a record to the global list */
void add_to_list(char *name, int age, enum gender gender)
{
    static struct list x[COUNT];
    static int count = 0;
    struct list *temp = &x[count++];

    memcpy(temp->name, name, 8);
    temp->information.age = age;
    temp->information.gender = gender;
    temp->next = list;
    list = temp;
}

void increment_counter (void)
{
    counter++;
}

long fact (long n)
{
    if (n == 1)
    ViewCallStack:
        return 1;
    else {
        long fact_n_minus_1 = fact(n-1);	
        return n * fact_n_minus_1;
    }
}

void do_loop (void)
{
    short i = ELEMENTSOF(a);

    while (i--)
        a[i] = 1;
}

int main (void)
{
    int i;
    short count;

/* Print Hello */
PrintHello:
    printf("Hello World!\n");
InitializeCounter:
    counter = 0;

/* First let us create a list of names */
    for (i = 0; i < COUNT; i++)
    InForLoop:
        add_to_list(table[i].name, table[i].info.age,
		(enum gender) table[i].info.gender);

/* Now let us print out the global list */
    print_global_list();

/* Just doing a little extra work to make it more interesting */
    for (count = 0; count < 500; count++)
        increment_counter();

    fact(10);
    do_loop();

Done:
    return 0;
}

