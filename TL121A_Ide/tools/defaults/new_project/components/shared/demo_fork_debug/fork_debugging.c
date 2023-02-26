#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include "labels.h"

void DoChildStuff(void);
void DoParentStuff(void);

int main(void)
{
    int pid;

 AboutToDoFork:
    pid = fork();

    if(pid < 0) {
	printf("Fork call failed, exiting.\n");
	exit(1);
    } else if (pid == 0) {
	/* We are in the child. */
	DoChildStuff();
	printf("Exiting the child.\n");
	exit(0);
    } else {
	/* We are in the parent. */
	DoParentStuff();
	exit(0);
    }

    return 0;
}

void DoChildStuff(void)
{
    printf(__FUNCTION__ ": Doing something...\n");
    sleep(2);
}

void DoParentStuff(void)
{
    printf(__FUNCTION__ ": Doing something...\n");
    sleep(4);
}
