/* header file for contract folder of CM111A */

#ifndef OS_H
#define OS_H


#define Call_CritRegPerChk     CritRegPerChk
#define Call_CritRegInitChk    CritRegInitChk

extern void SuspendAllInterrupts(void);
extern void ResumeAllInterrupts(void);
extern void SuspendOSInterrupts(void);
extern void ResumeOSInterrupts(void);

extern void osSetIMRmEI(uint16);

#endif

