/*Contract File for AR202A */
#ifndef OS_H
#define OS_H

typedef uint32 P1mcDiagc1;

extern void SuspendOSInterrupts(void);
extern void ResumeOSInterrupts(void);
extern void SuspendAllInterrupts(void);
extern void ResumeAllInterrupts(void);

#endif