/* header file for contract folder of CM102A */

#ifndef OS_H
#define OS_H

#define Call_DtsInin DtsInin
#define Call_DtsClnUp DtsClnUp

extern void SuspendAllInterrupts(void);
extern void ResumeAllInterrupts(void);
extern void SuspendOSInterrupts(void);
extern void ResumeOSInterrupts(void);

#endif

