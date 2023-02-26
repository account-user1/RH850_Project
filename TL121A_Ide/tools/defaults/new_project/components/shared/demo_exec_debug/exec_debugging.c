#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include "labels.h"

void DoChildStuff(void);
void DoParentStuff(void);

/* Return the directory of the full path given. */
char *get_dirname(const char * name)
{
    char *ret, *ptr, *lastslash = NULL;
    if (name == NULL)
	return NULL;

    ret = (char*)calloc(strlen(name)+1, sizeof(char));
    strcpy(ret, name);

    for (ptr=ret; *ptr; ptr++) {
	if (*ptr == '/')
	    lastslash = ptr;
    }

    if (lastslash == NULL) {
	free(ret);
	ret = NULL;
    } else {
	if(*lastslash != '\0') {
	    lastslash++;
	    *lastslash = '\0';
	}
    }

    return ret;
}

int main(int argc, char *argv[])
{
    const char * exec_argv[] = {"another_program", "argument_one", NULL};
    char * base_dirname = get_dirname(argv[0]);
    char * execute = NULL;
    if(base_dirname != NULL) {
	execute = (char*)calloc(strlen(exec_argv[0])+strlen(base_dirname)+1,
		sizeof(char));
	strcpy(execute, base_dirname);
	strcat(execute, exec_argv[0]);
	free(base_dirname);
	exec_argv[0] = execute;
    }

AboutToExec:
    printf("About to exec another process...\n");

    execv(execute, (char * const *)exec_argv);

FailedToExec:
    perror("execv failed");

    return 0;
}
