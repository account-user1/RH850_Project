/*****************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: FltInj.h
* Module Description: Fault Injection definitions
* Project           : CBD
* Author            : Darryl Greathouse
*****************************************************************************
* Version Control:
* %version:           4 %
* %derived_by:        nz4qtt %
*------------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 08/07/15  1        DG       Initial version                                                                    EA4#952
* 03/11/16  2        KK       Implement design changes that added a new DataDict.Constant needed in SF043A       EA4#3117
* 06/22/16  3        KK       Added a new FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG (Implement FDD v2.2.0 changes)   EA4#6407
* 09/01/16  4        KK       Changed FLTINJ_HWAGARBN_HWAG to FLTINJ_HWAGSYSARBN_HWAG (Fix for anomaly EA4#6899) EA4#7009
*------------------------------------------------------------------------------------------------------------------------                                                            EA4#952
******************************************************************************/

#ifndef FLTINJ_H
#define FLTINJ_H

#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 8.8 [NXTRDEV 8.8.1]: Deviation allowed for functions required to be declared in two headers to be accessible via the RTE as well as outside of the RTE 
						  Function Names: FltInj_f32_Oper, FltInj_logl_Oper, FltInj_u08_Oper, FltInj_u0p16_Oper */
						  
/* Fault Injection Enable */
/* This is false for production builds.  It is set to true at compile time
   only for s/w special builds with fault injection active. */
#define FLTINJENA								   (STD_OFF)

/* Fault Injection Assist Command Base */
/* Output signal of Assist function. */
#define FLTINJ_ASSI_ASSICMDBAS					   (1U)

/* Fault Injection Current Measure Motor Current Corrected Acceleration */
/* Output signal of Current Measurement function. */
#define FLTINJ_CURRMEAS_MOTCURRCORRDA              (29U)

/* Fault Injection Current Measure Motor Current Corrected Acceleration */
/* Output signal of Current Measurement function. */
#define FLTINJ_CURRMEAS_MOTCURRCORRDD              (36U)

/* Fault Injection Current Measure Test OK */
/* Internal decision-making location of Current Measurement function.  Injecting
   True represents protocol fault. */
#define FLTINJ_CURRMEAS_TESTOK                     (30U)

/* Fault Injection Damping Command Base */
/* Output signal of Damping function. */
#define FLTINJ_DAMPG_DAMPGCMDBAS                   (3U)

/* Fault Injection Diagnostic Manager Diagnostic Status Inverter 1 Inactive */
/* Output signal of Diagnostics Manager */
#define FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV        (31U)

/* Fault Injection Diagnostic Manager Diagnostic Status Inverter 2 Inactive */
/* Output signal of Diagnostics Manager */
#define FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV        (32U)

/* End of Travel Damping Firewall End of Travel Damping Command */
/* Input signal of EOT Damping Firewall function. */
#define FLTINJ_EOTDAMPGFWL_EOTDAMPGCMD             (8U)

/* Fault Injection Handwheel Angle Zero Measured Handwheel Angle Zero */
/* Output signal of Handwheel Angle Zero function. */
#define FLTINJ_HWAG0MEAS_HWAG0                     (33U)

/* Fault Injection Handwheel Angle Zero Test OK */
/* Internal decision-making location of Handwheel Angle Zero function. Injecting True represents protocol fault. */
#define FLTINJ_HWAG0MEAS_TESTOK                    (34U)

/* Handwheel Angle Correlation Handhweel Angle Independent Signals */
/* Output signal of Handwheel Angle Correlation function. */
#define FLTINJ_HWAGCORRLN_HWAGIDPTSIG                    (35U)

/* Fault Injection Handwheel Angle Arbitration Handwheel Angle */
/* */
#define FLTINJ_HWAGSYSARBN_HWAG                     (23U)

/* Fault Injection Handwheel Angle Arbitration Serial Communication Handwheel Angle */
/* Output signal of Handwheel Angle Arbitration. */
#define FLTINJ_HWAGSYSARBN_SERLCOMHWAG              (37U)

/* Fault Injection Handwheel Torque 0 Measure Handwheel Torque 0 */
/* Output signal of Handwheel Torque Zero function. */
#define FLTINJ_HWTQ0MEAS_HWTQ0                     (24U)

/* Fault Injection Handwheel Torque 0 Measure Test OK 0 */
/* Internal decision-making location of Handwheel Torque Zero function. Injecting 
   True represents protocol fault. */
#define FLTINJ_HWTQ0MEAS_TESTOK0                   (25U)

/* Fault Injection Handwheel Torque 2 Measure Handwheel Torque 2 */
/* Output signal of Handwheel Torque Two Measure function. */
#define FLTINJ_HWTQ2MEAS_HWTQ2                     (26U)

/* Fault Injection Handwheel Torque Correlation Handwheel Torque Independent Signal */
/* Output signal of Handwheel Torque Correlation function. */
#define FLTINJ_HWTQCORRLN_HWTQIDPTSIG              (27U)

/* Fault Injection Hysteresis Compensation Hysteresis Compensation */
/* Output signal of Hysteresis Compensation function. */
#define FLTINJ_HYSCMP_HYSCMPCMD                    (5U)

/* Fault Injection Inertia Compensation Torque Assist High Frequency Command */
/* Output signal of Inertia Compensation - Torque function. */
#define FLTINJ_INERTIACMPTQ_ASSIHIFRQCMD           (9U)

/* Fault Injection Inertia Compensation Velocity Inertia Compensation Command */
/* Output signal of Inertia Compensation - Velocity function */
#define FLTINJ_INERTIACMPVEL_INERTIACMPCMD         (6U)

/* Fault Injection Limit Resistance Conditioning End of Travel Gain */
/* Input signal of Limiter Conditioning function. */
#define FLTINJ_LIMRCDNG_EOTGAIN                    (20U)

/* Fault Injection Limit Resistance Conditioning End of Travel Limit */
/* Input signal of Limiter Conditioning function. */
#define FLTINJ_LIMRCDNG_EOTLIM                     (21U)

/* Fault Injection Limit Resistance Conditioning System Motor Torque Command Scale */
/* Input signal of Limiter Conditioning function. */
#define FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA             (19U)

/* Mechanical Motor Angle 0 */
/* Output signal from MotAg0Meas, digital motor position */
#define FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL             (38U)

/* Test OK */
/* Boolean decision point that decides whether to set NTC to PreFaild */
#define FLTINJ_MOTAG0MEAS_TESTOK             (39U)

/* Mechanical Motor Angle 2 */
/* Output signal from MotAg2Meas, analog motor position */
#define FLTINJ_MOTAG2MEAS_MOTAG2MECL             (40U)


/* Fault Injection Motor Angle Correlation Motor Angle Independent Signal */
/* Output signal of Motor Angle Correlation function. */
#define FLTINJ_MOTAGCORRLN_MOTAGIDPTSIG            (28U)

/* Fault Injection Motor Torque EOL Scaling Motor Torque Command MRF Scaled */
#define FLTINJ_MOTTQEOLSCAG_MOTTQCMDMRFSCAD        (22U)

/* Fault Injection Return Command */
/* Output signal of Return function. */
#define FLTINJ_RTN_RTNCMD                          (2U)

/* Fault Injection Stability Compensation Assist Command */
/* Output signal of Stability Compensation function. */
#define FLTINJ_STABYCMP_ASSICMD                    (7U)

/* Fault Injection System Friction Learning System Friction Offset */
/* Internal signal of Average Friction Learning function.  Located prior 
   to signal saturation and defeat. */
#define FLTINJ_SYSFRICLRNG_SYSFRICOFFS             (4U)

/* Fault Injection Vehicle Signal Conditioning Serial Communication Vehical Latitude Acceleration */
/* Input signal of Vehicle Signal Conditioning function. */
#define FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA           (14U)

/* Fault Injection Vehicle Signal Conditioning Serial Communication Vehical Logitude Acceleration */
/* Input signal of Vehicle Signal Conditioning function. */
#define FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA           (13U)

/* Fault Injection Vehicle Signal Conditioning Serial Communication Vehical Speed */
/* Input signal of Vehicle Signal Conditioning function. */
#define FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD            (12U)

/* Fault Injection Vehicle Signal Conditioning Serial Communication Vehical Speed Valid */
/* Input signal of Vehicle Signal Conditioning function. */
#define FLTINJ_VEHSIGCDNG_SERLCOMVEHSPDVLD         (11U)

/* Fault Injection Damping Command Base Constant */
/* Input signal of Vehicle Signal Conditioning function. */
#define FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE        (10U)

/* Fault Injection Vehicle Signal Conditioning Vehical Latitude Acceleration */
/* Output signal of Vehicle Signal Conditioning function. */
#define FLTINJ_VEHSIGCDNG_VEHLATA                  (18U)

/* Fault Injection Vehicle Signal Conditioning Vehical Logitude Acceleration */
/* Output signal of Vehicle Signal Conditioning function. */
#define FLTINJ_VEHSIGCDNG_VEHLGTA                  (17U)

/* Fault Injection Vehicle Signal Conditioning Vehicle Speed */
/* Output signal of Vehicle Signal Conditioning function. */
#define FLTINJ_VEHSIGCDNG_VEHSPD                   (16U)

/* Fault Injection Vehicle Signal Conditioning Vehicle Yaw Rate */
/* Output signal of Vehicle Signal Conditioning function. */
#define FLTINJ_VEHSIGCDNG_VEHYAWRATE               (15U)

/* Fault Injection Torque Oscillation Pre Final Command */
/* Output signal of Torque Oscillation function. */
#define FLTINJ_TQOSCN_PREFINALCMD                  (41U)

/* Fault Injection Current Measure Correlation Current Measure Independent Signal */
#define FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG      (42U)

extern FUNC(void, FltInj_CODE) FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg);
extern FUNC(void, FltInj_CODE) FltInj_logl_Oper(P2VAR(boolean, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg);
extern FUNC(void, FltInj_CODE) FltInj_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg);
extern FUNC(void, FltInj_CODE) FltInj_u0p16_Oper(P2VAR(u0p16, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg);

#endif
