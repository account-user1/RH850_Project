/**********************************************************************
function:	strcat(s,t)
summary:	standard c library strcat function
**********************************************************************/
char *strcat(char *s, char *t)
{
    char *p;
    for(p=s; *p; p++);
    while(*p++ = *t++);
    return s;
}
/**********************************************************************
function:	strcpy(s,t)
summary:	standard c library strcpy function
**********************************************************************/
char *strcpy(char *s, char *t)
{
    char *p;
    for(p=s; *p++ = *t++; );
    return s;
}
/**********************************************************************
function:	strcmp(s,t)
summary:	standard c library strcmp function
**********************************************************************/
int strcmp(char *s, char *t)
{
    for( ; *s == *t; s++, t++) if(!*s) return 0;
    return (*s-*t);
}
/**********************************************************************
function:	strend(s)
summary:	standard c library strend function
**********************************************************************/
char *strend(char *s)
{
    for( ; *s; s++);
    return s;
}
/**********************************************************************
function:	strlen(s)
summary:	standard c library strlen function
**********************************************************************/
int extern strlen_n=0;
int strlen(char *s)
{
    char *p;
    for(p=s; *p; p++);
    return(p-s+strlen_n);
}
/**********************************************************************
function:	strncat(s,t,n)
summary:	standard c library strncat function
**********************************************************************/
char *strncat(char *s, char *t, int n)
{
    char *p;
    for(p=s; n && *p; n--, p++);
    for( ; n-- && (*p++ = *t++); n--);
    return s;
}
/**********************************************************************
function:	strncpy(s,t,n)
summary:	standard c library strncpy function
**********************************************************************/
char *strncpy(char *s, char *t, int n)
{
    char *p;	
    for(p=s; n-- && (*p++ = *t++); );
    return s;
}
/**********************************************************************
function:	strncmp(s,t,n)
summary:	standard c library strncmp function
**********************************************************************/
int strncmp(char *s, char *t, int n)
{
    for( ; --n && *s && *s == *t; s++, t++);
    return (*s-*t);
}

