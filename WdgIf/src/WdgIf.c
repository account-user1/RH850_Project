/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/*!        \file  WdgIf.c
 *        \brief  WdgIf source file
 *
 *      \details  This is the implementation of the module WdgIf
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the VERSION CHECK below.
 *********************************************************************************************************************/

#define WDGIF_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "WdgIf.h"
#if (WDGIF_DEV_ERROR_DETECT == STD_ON)
# include "Appl_Det.h"
#endif /* (WDGIF_DEV_ERROR_DETECT == STD_ON) */

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/

#define WDGIF_SW_MAJOR_VERSION_SOURCE             (5u)
#define WDGIF_SW_MINOR_VERSION_SOURCE             (1u)
#define WDGIF_SW_PATCH_VERSION_SOURCE             (1u)

/* Protection against incorrect include file version (WdgIf.h) */
#if ( (WDGIF_SW_MAJOR_VERSION != WDGIF_SW_MAJOR_VERSION_SOURCE) \
   || (WDGIF_SW_MINOR_VERSION != WDGIF_SW_MINOR_VERSION_SOURCE) \
   || (WDGIF_SW_PATCH_VERSION != WDGIF_SW_PATCH_VERSION_SOURCE) )
# error "Version mismatch! Incorrect version of WdgIf.h"
#endif

#if (WDGIF_USE_STATECOMBINER == STD_ON)

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Status for the Watchdog Interface - StateCombiner */
# define WDGIF_STATECOMBINER_OK                   (0u)      /*!< StateCombiner status OK */
# define WDGIF_STATECOMBINER_NOT_OK               (1u)      /*!< StateCombiner status NOT OK */
# define WDGIF_STATECOMBINER_RESET                (2u)      /*!< StateCombiner status issue a RESET */

# define SYNC_COUNT_INIT_VAL                      (0xFFFFu) /*!< Invalid counter value */

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/* macro - return 1 for 0, otherwise return input val. */
# define IS_ZERO(_x)  (((_x) == 0u) ? 1u : (_x)) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/* floor() and ceiling() function/macros for positive values */
# define DIV_CEIL(_x, _y)   (((_x) / (_y)) + ((((_x) % (_y)) != 0u) ? 1u : 0u)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define DIV_FLOOR(_x, _y)  ((_x) / (_y)) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/* min and max value macros */
# define MIN(_x, _y)  (((_x) < (_y)) ? (_x) : (_y)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define MAX(_x, _y)  (((_x) > (_y)) ? (_x) : (_y)) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# if (WDGIF_STATECOMBINER_USE_OS_SPIN_LOCK == STD_ON)
#  define STATECOMBINER_GETSPINLOCK(_id) (void)GetSpinlock(_id) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define STATECOMBINER_RELEASESPINLOCK(_id) (void)ReleaseSpinlock(_id) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define STATECOMBINER_GETSPINLOCK(_id) (void)Appl_GetSpinlock(_id) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define STATECOMBINER_RELEASESPINLOCK(_id) (void)Appl_ReleaseSpinlock(_id) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* (WDGIF_STATECOMBINER_USE_OS_SPIN_LOCK == STD_ON) */

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

# if !defined (WDGIF_LOCAL) /* COV_WDGIF_COMPATIBILITY */
#  define WDGIF_LOCAL static
# endif

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

# define WDGIF_START_SEC_VAR_8BIT
# include "MemMap.h" /* PRQA S 5087  */ /* MD_MSR_19.1  */

/*! Global variable to save the current WindowStart of the Watchdog */
WDGIF_LOCAL VAR(uint8, WDGIF_VAR) g_wdgif_sc_status = WDGIF_STATECOMBINER_OK;

/*! Global variable to save the inverted value of the current WindowStart of the Watchdog */
WDGIF_LOCAL VAR(uint8, WDGIF_VAR) g_wdgif_sc_status_INV = (uint8)~WDGIF_STATECOMBINER_OK;

# define WDGIF_STOP_SEC_VAR_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define WDGIF_START_SEC_VAR_16BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON)

/*! Global variable to save the cycle counter of the master SC device */
WDGIF_LOCAL VAR(uint16, WDGIF_VAR) g_wdgif_sc_cycle_counter[WDGIF_MAX_SUPPORTED_CORES - 1] = /* PRQA S 3218 */ /* MD_WdgIf_3218 */
  { 0u, 0u, 0u };

/*! Global variable to save the inverted value of the cycle counter of the master SC device */
WDGIF_LOCAL VAR(uint16, WDGIF_VAR) g_wdgif_sc_cycle_counter_INV[WDGIF_MAX_SUPPORTED_CORES - 1] = /* PRQA S 3218 */ /* MD_WdgIf_3218 */
  { (uint16)~0u, (uint16)~0u, (uint16)~0u };
# endif /* (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON) */

/*! Global variable to save the synchronization cycle count */
WDGIF_LOCAL VAR(uint16, WDGIF_VAR) g_wdgif_sc_sync_count = SYNC_COUNT_INIT_VAL; /* PRQA S 3218 */ /* MD_WdgIf_3218 */

/*! Global variable to save the inverted value of the synchronization cycle count */
WDGIF_LOCAL VAR(uint16, WDGIF_VAR) g_wdgif_sc_sync_count_INV = (uint16)~SYNC_COUNT_INIT_VAL; /* PRQA S 3218 */ /* MD_WdgIf_3218 */

# define WDGIF_STOP_SEC_VAR_16BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF)
#  define WDGIF_START_SEC_VAR_32BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Global variable to save the sum of WS values of the master SC device */
WDGIF_LOCAL VAR(uint32, WDGIF_VAR) g_wdgif_sc_sum_ws[WDGIF_MAX_SUPPORTED_CORES - 1] = /* PRQA S 3218 */ /* MD_WdgIf_3218 */
  { 0u, 0u, 0u };

/*! Global variable to save inverted value of the sum of WS values of the master SC device */
WDGIF_LOCAL VAR(uint32, WDGIF_VAR) g_wdgif_sc_sum_ws_INV[WDGIF_MAX_SUPPORTED_CORES - 1] = /* PRQA S 3218 */ /* MD_WdgIf_3218 */
  { (uint32)~0u, (uint32)~0u, (uint32)~0u };

/*! Global variable to save the sum of TO values of the master SC device */
WDGIF_LOCAL VAR(uint32, WDGIF_VAR) g_wdgif_sc_sum_to[WDGIF_MAX_SUPPORTED_CORES - 1] = /* PRQA S 3218 */ /* MD_WdgIf_3218 */
  { 0u, 0u, 0u };

/*! Global variable to save inverted value of the sum of the TO values of the master SC device */
WDGIF_LOCAL VAR(uint32, WDGIF_VAR) g_wdgif_sc_sum_to_INV[WDGIF_MAX_SUPPORTED_CORES - 1] = /* PRQA S 3218 */ /* MD_WdgIf_3218 */
  { (uint32)~0u, (uint32)~0u, (uint32)~0u };

#  define WDGIF_STOP_SEC_VAR_32BIT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF) */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define WDGIF_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  wdgif_statecombiner_check_slave_timing()
 *********************************************************************************************************************/
/*! \brief        Checks the slave timing in case of enabled state combiner
 *  \details      wdgif_check_slave_timing monitors the timing of the configured slave State Combiner instance(s)
 *                execution and reports its state to the upper layer.
 *  \param[in]    ConfigPtr     Pointer to the WdgIf configuration
 *  \param[in]    WindowStart   Value of the window start in milliseconds which is being requested
 *  \param[in]    Timeout       Value of the timeout in milliseconds which is being requested
 *  \return       WDGIF_STATECOMBINER_OK      State Combiner function executed successfully
 *  \return       WDGIF_STATECOMBINER_NOT_OK  Timing error for slave(s) detected
 *  \return       WDGIF_STATECOMBINER_RESET   Unrecoverable error detected, reset issued
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGIF_USE_STATECOMBINER is STD_ON
 *  \trace        DSGN-WdgIf22756, DSGN-WdgIf22804, DSGN-WdgIf22805
 */
# if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF)
WDGIF_LOCAL FUNC(uint8, WDGIF_CODE) wdgif_statecombiner_check_slave_timing(
  P2CONST(WdgIf_StateCombinerCommonConfigType, AUTOMATIC, WDGIF_APPL_CONST) ConfigPtr,
  VAR(uint16, AUTOMATIC) WindowStart,
  VAR(uint16, AUTOMATIC) Timeout
  );
# else /* if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON) */
WDGIF_LOCAL FUNC(uint8, WDGIF_CODE) wdgif_statecombiner_check_slave_timing(
  P2CONST(WdgIf_StateCombinerCommonConfigType, AUTOMATIC, WDGIF_APPL_CONST) ConfigPtr
  );
# endif

/**********************************************************************************************************************
 *  wdgif_statecombiner_setmode()
 *********************************************************************************************************************/
/*! \brief        Sets the watchdog mode in case of enabled state combiner
 *  \details      wdgif_statecombiner_setmode switches the watchdog mode of the corresponding State Combiner instance
 *                according to the parameter DeviceIndex.
 *  \param[in]    WdgInstance   Index of the State Combiner instance for which the function is called
 *  \param[in]    Mode          Watchdog mode which is being requested
 *  \return       E_OK      State Combiner function invoked and executed successfully
 *  \return       E_NOT_OK  Error detected or driver function returned an error
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGIF_USE_STATECOMBINER is STD_ON
 *  \trace        DSGN-WdgIf22749
 */
WDGIF_LOCAL FUNC(Std_ReturnType, WDGIF_CODE) wdgif_statecombiner_setmode(
  VAR(uint8, AUTOMATIC) WdgInstance,
  VAR(WdgIf_ModeType, AUTOMATIC) Mode
  );

/**********************************************************************************************************************
 *  wdgif_statecombiner_settriggerwindow()
 *********************************************************************************************************************/
/*! \brief        Sets the trigger window in case of enabled state combiner
 *  \details      wdgif_statecombiner_settriggerwindow sets a new timeout and new window start and services the
 *                corresponding State Combiner instance according to the parameter DeviceIndex.\n
 *                It sets a new timeout and new window start for the watchdog unit.
 *  \param[in]    WdgInstance
 *  \param[in]    WindowStart
 *  \param[in]    Timeout
 *  \return       E_OK      State Combiner function invoked and executed successfully
 *  \return       E_NOT_OK  Error detected or driver function returned an error
 *  \pre          -
 *  \context      TASK
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *  \config       WDGIF_USE_STATECOMBINER is STD_ON
 *  \trace        DSGN-WdgIf22756, DSGN-WdgIf22804, DSGN-WdgIf22805
 */
# if ((WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF) || (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF)) /* COV_WDGIF_USE_AUTOSAR_DRV_API */
WDGIF_LOCAL FUNC(Std_ReturnType, WDGIF_CODE) wdgif_statecombiner_settriggerwindow(
  VAR(uint8, AUTOMATIC) WdgInstance,
  VAR(uint16, AUTOMATIC) WindowStart,
  VAR(uint16, AUTOMATIC) Timeout
  );
# else
WDGIF_LOCAL FUNC(Std_ReturnType, WDGIF_CODE) wdgif_statecombiner_settriggerwindow(
  VAR(uint8, AUTOMATIC) WdgInstance,
  VAR(uint16, AUTOMATIC) Timeout
  );
# endif

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  wdgif_statecombiner_check_slave_timing()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
# if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF)
WDGIF_LOCAL FUNC(uint8, WDGIF_CODE) wdgif_statecombiner_check_slave_timing(
  P2CONST(WdgIf_StateCombinerCommonConfigType, AUTOMATIC, WDGIF_APPL_CONST) ConfigPtr,
  VAR(uint16, AUTOMATIC) WindowStart,
  VAR(uint16, AUTOMATIC) Timeout
  )
# else /* if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON) */
WDGIF_LOCAL FUNC(uint8, WDGIF_CODE) wdgif_statecombiner_check_slave_timing(
  P2CONST(WdgIf_StateCombinerCommonConfigType, AUTOMATIC, WDGIF_APPL_CONST) ConfigPtr
  )
# endif
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(uint8, AUTOMATIC) status_sc;
  VAR(uint8, AUTOMATIC) ret_sc;
  VAR(uint8, AUTOMATIC) i;
  VAR(uint16, AUTOMATIC) slave_window_start;
  VAR(uint16, AUTOMATIC) slave_timeout;
  VAR(uint32, AUTOMATIC) slave_counter_value;
  VAR(uint32, AUTOMATIC) min_increments;
  VAR(uint32, AUTOMATIC) max_increments;
  P2VAR(WdgIf_StateCombinerSharedMemory, AUTOMATIC, WDGIF_APPL_DATA) cfg_sdata;
  P2VAR(WdgIf_StateCombinerSharedMemory, AUTOMATIC, WDGIF_APPL_DATA) slave_sdata;

  /* ----- Implementation ----------------------------------------------- */
  cfg_sdata = ConfigPtr->WdgIfStateCombinerSData;

  /* #10 Check if global variables are valid (bit flipping) */
  if ( ((uint8)~g_wdgif_sc_status != g_wdgif_sc_status_INV)
    || ((uint16)~g_wdgif_sc_sync_count != g_wdgif_sc_sync_count_INV)
     )
  {
    /* #11 Aborted and return WDGIF_STATECOMBINER_RESET */
    ret_sc = WDGIF_STATECOMBINER_RESET;
  }
  else
  {
    /* #20 Check if global variable for storing the synchronization start-up cycles is set to its initial value */
    if (g_wdgif_sc_sync_count == SYNC_COUNT_INIT_VAL)
    {
      /* #21 Global variable for storing the synchronization start-up cycles is set to value
       *     WdgIfStateCombinerStartUpSyncCycles specified in the configuration structure */
      g_wdgif_sc_sync_count = ConfigPtr->WdgIfStateCombinerStartUpSyncCycles + 1u;
      g_wdgif_sc_sync_count_INV = (uint16)~(g_wdgif_sc_sync_count);
    }

    /* #30 Check if the global variable for storing the synchronization start-up cycles is greater than zero */
    if (g_wdgif_sc_sync_count > 0u)
    {
      /* #31 Decrement global variable for storing the synchronization start-up cycles */
      g_wdgif_sc_sync_count--;
      g_wdgif_sc_sync_count_INV = (uint16)~(g_wdgif_sc_sync_count);
    }
    
    /* #40 Repeat the following steps for all slave devices */
    status_sc = WDGIF_STATECOMBINER_OK;
    ret_sc = g_wdgif_sc_status;
    i = 0u;
    
    do
    {
      slave_sdata = (&cfg_sdata[i]);
      /* #50 Get the spin lock */
      STATECOMBINER_GETSPINLOCK (ConfigPtr->WdgIfStateCombinerSpinlockId);
      
      /* #60 Read the State Combiner Shared Memory Data */
      slave_window_start = slave_sdata->SlaveWindowStart;
      slave_timeout = slave_sdata->SlaveTimeout;
      slave_counter_value = slave_sdata->SlaveCounterValue;
      
      /* #70 Check if global shared variable values are corrupted */
# if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON)
      if ( ((uint16)~g_wdgif_sc_cycle_counter[i] != g_wdgif_sc_cycle_counter_INV[i])
# else /* if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF) */
      if ( ((uint32)~g_wdgif_sc_sum_ws[i] != g_wdgif_sc_sum_ws_INV[i])
        || ((uint32)~g_wdgif_sc_sum_to[i] != g_wdgif_sc_sum_to_INV[i])
# endif /* (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON) */
        || ((uint16)~slave_window_start != slave_sdata->SlaveWindowStart_INV)
        || ((uint16)~slave_timeout != slave_sdata->SlaveTimeout_INV)
        || ((uint32)~slave_counter_value != slave_sdata->SlaveCounterValue_INV)
         )
      {
        /* #71 Release the spinlock */
        STATECOMBINER_RELEASESPINLOCK (ConfigPtr->WdgIfStateCombinerSpinlockId);

        /* #72 Aborted and return WDGIF_STATECOMBINER_RESET */
        status_sc = WDGIF_STATECOMBINER_RESET;
      }
      /* #80 Check if global synchronization start-up cycles counter is greater than zero */
      else if (g_wdgif_sc_sync_count > 0u)
      {
        /* #81 Reset value of the slave instance trigger counter to zero */
        slave_sdata->SlaveCounterValue = 0u; /* SBSW_WDGIF_002 */
        slave_sdata->SlaveCounterValue_INV = (uint32)~0u; /* SBSW_WDGIF_002 */

        /* #82 Release the spinlock */
        STATECOMBINER_RELEASESPINLOCK (ConfigPtr->WdgIfStateCombinerSpinlockId);
      }
      /* #90 Check if WDGIF_STATECOMBINER_MANUAL_MODE is set to STD_OFF */
# if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF)
      /* #91 Check if the timeout value (from the shared memory) of the slave instance equals zero */
      else if (slave_timeout == 0u)
      {
        /* #92 Release the spinlock */
        STATECOMBINER_RELEASESPINLOCK (ConfigPtr->WdgIfStateCombinerSpinlockId);

        /* #93 Set the State Combiner status to WDGIF_STATECOMBINER_NOT_OK */
        status_sc = WDGIF_STATECOMBINER_NOT_OK;
      }
# endif /* (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF) */
      /* #100 Do the following in all other cases */
      else
      {
        /* #110 Release the spinlock */
        STATECOMBINER_RELEASESPINLOCK (ConfigPtr->WdgIfStateCombinerSpinlockId);

        /* #120 Check if WDGIF_STATECOMBINER_MANUAL_MODE is set to STD_ON */
# if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON)
        /* #121 Increment the number of elapsed master cycles since the last timing check of the slave instance */
        g_wdgif_sc_cycle_counter[i]++; /* SBSW_WDGIF_003 */
        g_wdgif_sc_cycle_counter_INV[i] = (uint16)~g_wdgif_sc_cycle_counter[i]; /* SBSW_WDGIF_003 */

        /* #122 Check if counter is equal to the predefined State Combiner Reference Cycle of the particular slave */
        if (g_wdgif_sc_cycle_counter[i]
                                 == WdgIf_Interface.WdgIfStateCombinerConfigManual[i]->WdgIfStateCombinerReferenceCycle
           )
        {
          /* #123 Read the expected minimum / maximum State Combiner Slave Increments */
          min_increments = WdgIf_Interface.WdgIfStateCombinerConfigManual[i]->WdgIfStateCombinerSlaveIncrementsMin;
          max_increments = WdgIf_Interface.WdgIfStateCombinerConfigManual[i]->WdgIfStateCombinerSlaveIncrementsMax;
# else  /* #130 Check if WDGIF_STATECOMBINER_MANUAL_MODE is set to STD_OFF */
        /* #131 Calculates the sum of the WindowStart and Timeout values of the master State Combiner instance */
        g_wdgif_sc_sum_ws[i] += WindowStart; /* SBSW_WDGIF_003 */
        g_wdgif_sc_sum_ws_INV[i] = (uint32)~g_wdgif_sc_sum_ws[i]; /* SBSW_WDGIF_003 */

        g_wdgif_sc_sum_to[i] += Timeout; /* SBSW_WDGIF_003 */
        g_wdgif_sc_sum_to_INV[i] = (uint32)~g_wdgif_sc_sum_to[i]; /* SBSW_WDGIF_003 */

        /* #132 Checks if sum of the WindowStart values for the master State Combiner instance is greater or equal than
         *      timeout value (from the shared memory) of the slave instance */
        if (g_wdgif_sc_sum_ws[i] >= slave_timeout)
        {
          /* #133 Calculates the number of minimum increments the master expects: floor(sum(WSm)/maxTs) */
          min_increments = (uint32) DIV_FLOOR (((uint32)g_wdgif_sc_sum_ws[i]), ((uint32)slave_timeout));

          /* #134 Calculates the number of maximum increments the master expects: ceil(sum(Tm)/minWSs) */
          max_increments = (uint32) DIV_CEIL (((uint32)g_wdgif_sc_sum_to[i]), ((uint32)slave_window_start));
# endif /* (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON) */

          /* #140 Check if the trigger counter of slave State Combiner instance is inside of the min / max range of the
           *      allowed trigger number */
          if ( (slave_counter_value < min_increments)
            || (slave_counter_value > max_increments)
             )
          {
            /* #141 Set the State Combiner status to WDGIF_STATECOMBINER_NOT_OK if outside of the min / max range */
            status_sc = WDGIF_STATECOMBINER_NOT_OK;
          }
          else /* #142 Do the following if the trigger counter of slave State Combiner instance is inside of the
                *      min / max range */
          {
            /* #143 Get the spin lock */
            STATECOMBINER_GETSPINLOCK (ConfigPtr->WdgIfStateCombinerSpinlockId);

            /* #144 Reset slave trigger counter value to zero */
            slave_sdata->SlaveCounterValue = 0u; /* SBSW_WDGIF_002 */
            slave_sdata->SlaveCounterValue_INV = (uint32)~0u; /* SBSW_WDGIF_002 */

            /* #145 Release the spinlock */
            STATECOMBINER_RELEASESPINLOCK (ConfigPtr->WdgIfStateCombinerSpinlockId);

            /* #146 Reset counters / sum's for particular slave instance */
# if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON)
            g_wdgif_sc_cycle_counter[i] = 0u; /* SBSW_WDGIF_003 */
            g_wdgif_sc_cycle_counter_INV[i] = (uint16)~0u; /* SBSW_WDGIF_003 */
# else /* if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF) */
            g_wdgif_sc_sum_ws[i] = 0u; /* SBSW_WDGIF_003 */
            g_wdgif_sc_sum_ws_INV[i] = (uint32)~0u; /* SBSW_WDGIF_003 */

            g_wdgif_sc_sum_to[i] = 0u; /* SBSW_WDGIF_003 */
            g_wdgif_sc_sum_to_INV[i] = (uint32)~0u; /* SBSW_WDGIF_003 */
# endif /* (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON) */
          }
        }
      }

      /* check status (with priority), save it if higher than current */
      ret_sc = ((status_sc > ret_sc) ? status_sc : ret_sc);
      /* check next slave instance */
      i++;
    } while ( (i < ConfigPtr->WdgIfStateCombinerNumberOfSlaves) && (ret_sc != WDGIF_STATECOMBINER_RESET) );
  }

  /* #150 Return currently determined State Combiner status value */
  return ret_sc;
} /* PRQA S 6080 */ /* MD_MSR_STMIF  */

/**********************************************************************************************************************
 *  wdgif_statecombiner_setmode()
 *********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
WDGIF_LOCAL FUNC(Std_ReturnType, WDGIF_CODE) wdgif_statecombiner_setmode(
  VAR(uint8, AUTOMATIC) WdgInstance,
  VAR(WdgIf_ModeType, AUTOMATIC) Mode
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(Std_ReturnType, AUTOMATIC) ret;
  P2CONST(WdgIf_StateCombinerCommonConfigType, AUTOMATIC, WDGIF_APPL_CONST) config_ptr;

  /* ----- Implementation ----------------------------------------------- */
  ret = E_OK;
  config_ptr = WdgIf_Interface.WdgIfStateCombinerConfigCommon;
  /* #10 Check if WdgInstance is equal to zero (master State Combiner instance) */
  if (WdgInstance == 0u)
  {
    /* #11 Call the driver function for performing a mode change */
# if (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) /* COV_WDGIF_USE_AUTOSAR_DRV_API */
    ret = config_ptr->WdgIfStateCombinerFunctions->Wdg_SetMode (WdgInstance, Mode); /* SBSW_WDGIF_005 */
# else /* if (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) */
    ret = config_ptr->WdgIfStateCombinerFunctions->Wdg_SetMode_AR (Mode); /* SBSW_WDGIF_005 */
# endif /* (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) */
    /* #12 Return the return value provided by the driver */
  }
  /* #20 Check if WdgInstance is not equal to zero (slave State Combiner instance) */
  /* #21 Return E_OK */
  return ret;
}

/**********************************************************************************************************************
 *  wdgif_statecombiner_settriggerwindow()
 *********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
# if ((WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF) || (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF)) /* COV_WDGIF_USE_AUTOSAR_DRV_API */
WDGIF_LOCAL FUNC(Std_ReturnType, WDGIF_CODE) wdgif_statecombiner_settriggerwindow(
  VAR(uint8, AUTOMATIC) WdgInstance,
  VAR(uint16, AUTOMATIC) WindowStart,
  VAR(uint16, AUTOMATIC) Timeout
  )
# else
WDGIF_LOCAL FUNC(Std_ReturnType, WDGIF_CODE) wdgif_statecombiner_settriggerwindow(
  VAR(uint8, AUTOMATIC) WdgInstance,
  VAR(uint16, AUTOMATIC) Timeout
  )
# endif
{
  /* ----- Local Variables ---------------------------------------------- */
  P2VAR(WdgIf_StateCombinerSharedMemory, AUTOMATIC, WDGIF_APPL_DATA) slave_sdata;
  P2CONST(WdgIf_StateCombinerCommonConfigType, AUTOMATIC, WDGIF_APPL_CONST) config_ptr;
  VAR(Std_ReturnType, AUTOMATIC) ret;
  VAR(uint8, AUTOMATIC) ret_sc;
# if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF)
  VAR(uint16, AUTOMATIC) window_start = IS_ZERO (WindowStart);
# endif /* (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF) */
  
  /* ----- Implementation ----------------------------------------------- */
  config_ptr = WdgIf_Interface.WdgIfStateCombinerConfigCommon;
  /* #10 Check if WdgInstance is not equal to zero (slave State Combiner instance) */
  if (WdgInstance != 0u)   /* not SC master instance */
  {
    /* #20 Read the address of the appropriate slave State Combiner shared data */
    slave_sdata = &(config_ptr->WdgIfStateCombinerSData[WdgInstance - 1u]);
    /* #30 Get the spinlock */
    STATECOMBINER_GETSPINLOCK (config_ptr->WdgIfStateCombinerSpinlockId);

    /* #40 Check if Timeout is equal to zero (immediate reset), or shared memory corruption occurred */
    if ( (Timeout == 0u)
      || ((uint16)~slave_sdata->SlaveWindowStart != slave_sdata->SlaveWindowStart_INV)
      || ((uint16)~slave_sdata->SlaveTimeout != slave_sdata->SlaveTimeout_INV)
      || ((uint32)~slave_sdata->SlaveCounterValue != slave_sdata->SlaveCounterValue_INV)
       )
    {
      /* #41 Corrupt slave timeout value (request for the master to issue a reset) */
      slave_sdata->SlaveCounterValue = 0u; /* SBSW_WDGIF_002 */
      slave_sdata->SlaveCounterValue_INV = 0u; /* SBSW_WDGIF_002 */
    }
    /* #50 Check if Timeout is not equal to zero and no shared memory corruption occurred */
    else
    {
      /* #51 Check if WDGIF_STATECOMBINER_MANUAL_MODE is set to STD_OFF */
# if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF)
      /* #52 Check if current slave trigger counter value is equal to zero */
      if (slave_sdata->SlaveCounterValue == 0u)
      {
        /* #53 Store the given parameters in shared memory section (WindowStart and Timeout) */
        slave_sdata->SlaveWindowStart = window_start; /* SBSW_WDGIF_002 */
        slave_sdata->SlaveTimeout = Timeout; /* SBSW_WDGIF_002 */
      }
      /* #54 Check if current slave trigger counter value is not equal to zero */
      else
      {
        /* #55 Find minimum value of WindowStart and maximum value of Timeout for current check period */
        slave_sdata->SlaveWindowStart = MIN(slave_sdata->SlaveWindowStart, window_start); /* SBSW_WDGIF_002 */
        slave_sdata->SlaveTimeout = MAX(slave_sdata->SlaveTimeout, Timeout); /* SBSW_WDGIF_002 */
      }
      slave_sdata->SlaveWindowStart_INV = (uint16)~slave_sdata->SlaveWindowStart; /* SBSW_WDGIF_002 */
      slave_sdata->SlaveTimeout_INV = (uint16)~slave_sdata->SlaveTimeout; /* SBSW_WDGIF_002 */
# endif /* (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF) */

      /* #56 Increment current slaves trigger counter value */
      slave_sdata->SlaveCounterValue++; /* SBSW_WDGIF_002 */
      slave_sdata->SlaveCounterValue_INV = (uint32)~slave_sdata->SlaveCounterValue; /* SBSW_WDGIF_002 */
    }
    ret = E_OK;

    /* #60 Release the spinlock */
    STATECOMBINER_RELEASESPINLOCK (config_ptr->WdgIfStateCombinerSpinlockId);
  }
  /* #70 Check if WdgInstance is equal to zero (master State Combiner instance) */
  else /* (WdgInstance == 0u) */
  {
    /* #80 Check the timing of all slave devices */
# if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF)
    ret_sc = wdgif_statecombiner_check_slave_timing (config_ptr, window_start, Timeout); /* SBSW_WDGIF_001 */
# else /* if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON) */
    ret_sc = wdgif_statecombiner_check_slave_timing (config_ptr); /* SBSW_WDGIF_001 */
# endif /* (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF) */

    /* #90 Check if timeout is equal to zero (immediate reset) or State Combiner status is WDGIF_STATECOMBINER_RESET */
    if ( (Timeout == 0u)
      || (ret_sc == WDGIF_STATECOMBINER_RESET)
       )
    {
      /* #91 Call the "master" wdg function with zero values - "immediate reset" */
# if (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) /* COV_WDGIF_USE_AUTOSAR_DRV_API */
      ret = config_ptr->WdgIfStateCombinerFunctions->Wdg_SetTriggerWindow (0u, 0u, 0u); /* SBSW_WDGIF_005 */
# else /* if (WDG_USE_AUTOSAR_DRV_API == STD_ON) */
      ret = E_OK;
      config_ptr->WdgIfStateCombinerFunctions->Wdg_SetTriggerCondition_AR (0u); /* SBSW_WDGIF_005 */
# endif /* (WDG_USE_AUTOSAR_DRV_API == STD_OFF) */
      /* #92 Set the State Combiner status to WDGIF_STATECOMBINER_NOT_OK */
      ret_sc = WDGIF_STATECOMBINER_NOT_OK;
    }
    /* #100 Check if State Combiner status is WDGIF_STATECOMBINER_OK */
    else if (ret_sc == WDGIF_STATECOMBINER_OK)
    {
      /* #101 Call the "master" wdg function - service wdg */
# if (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) /* COV_WDGIF_USE_AUTOSAR_DRV_API */
      ret = config_ptr->WdgIfStateCombinerFunctions->Wdg_SetTriggerWindow (0u, WindowStart, Timeout); /* SBSW_WDGIF_005 */
# else /* if (WDG_USE_AUTOSAR_DRV_API == STD_ON) */
      ret = E_OK;
      config_ptr->WdgIfStateCombinerFunctions->Wdg_SetTriggerCondition_AR (Timeout); /* SBSW_WDGIF_005 */
# endif /* (WDG_USE_AUTOSAR_DRV_API == STD_OFF) */
    }
    /* #110 Check if State Combiner status is WDGIF_STATECOMBINER_NOT_OK */
    else
    {
      /* #111 Skip wdg servicing and return E_OK */
      ret = E_OK;
    }

    /* #120 Update global State Combiner status */
    g_wdgif_sc_status = ret_sc;
    g_wdgif_sc_status_INV = (uint8)~ret_sc; /* PRQA S 0291 */ /* MD_WdgIf_0291 */
  }

  /* #130 Return the value of the wdg servicing */
  return ret;
}

#else /* if (WDGIF_USE_STATECOMBINER == STD_OFF) */

# define WDGIF_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* (WDGIF_USE_STATECOMBINER == STD_ON) */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  WdgIf_SetMode()
 *********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
FUNC(Std_ReturnType, WDGIF_CODE) WdgIf_SetMode(
  VAR(uint8, AUTOMATIC) DeviceIndex,
  VAR(WdgIf_ModeType, AUTOMATIC) WdgMode
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(Std_ReturnType, AUTOMATIC) ret;
#if (WDGIF_USE_STATECOMBINER == STD_ON)
  P2CONST(WdgIf_InterfaceFunctionsType, AUTOMATIC, WDGIF_APPL_CONST) wdg_function_address;
#endif /* (WDGIF_USE_STATECOMBINER == STD_ON) */

#if (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) /* COV_WDGIF_USE_AUTOSAR_DRV_API */
  VAR(uint8, AUTOMATIC) wdg_instance;
#endif /* (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if the configuration is invalid (whether the array with function pointers per driver is a NULL_PTR) or
   *     if the parameter DeviceIndex is not plausible or
   *     if the function pointer for the selected driver is a NULL_PTR */
  if ( (WdgIf_Interface.WdgFunctionsPerDevice == NULL_PTR)
    || (DeviceIndex >= WdgIf_Interface.NumOfWdgs)
#if (WDGIF_USE_STATECOMBINER == STD_OFF)
    || (WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgFunctions == NULL_PTR)
#else /* if (WDGIF_USE_STATECOMBINER == STD_ON) */
    || (WdgIf_Interface.WdgIfStateCombinerConfigCommon == NULL_PTR)
# if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON)
    || (WdgIf_Interface.WdgIfStateCombinerConfigManual == NULL_PTR)
# endif /* (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON) */
#endif /* (WDGIF_USE_STATECOMBINER == STD_OFF) */
     )
  {
    /* #11 Check if WDGIF_DEV_ERROR_DETECT is set to STD_ON */
#if (WDGIF_DEV_ERROR_DETECT == STD_ON)
    /* #12 Raise the development error with error code WDGIF_E_PARAM_DEVICE */
    Appl_Det_ReportError (WDGIF_MODULE_ID, WDGIF_VENDOR_ID, API_ID_WdgIf_SetMode, WDGIF_E_PARAM_DEVICE);
#endif /* WDGIF_DEV_ERROR_DETECT == STD_ON */
    /* #13 Abort and return E_NOT_OK */
    ret = E_NOT_OK;
  }
  /* #20 Check if the configuration is valid */
  else
  {
    /* #21 Check if WDGIF_USE_STATECOMBINER is set to STD_ON */
#if (WDGIF_USE_STATECOMBINER == STD_ON)
    wdg_function_address = WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgFunctions;

    /* #22 Check if the function pointer for the selected driver is invalid (NULL_PTR) - WdgIf instance has its own
     *     underlying Wdg */
    if (wdg_function_address == NULL_PTR)
    {
      /* #23 Perform mode change for the addressed State Combiner instance with input parameter values */
      ret = wdgif_statecombiner_setmode (WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgInstance, WdgMode);
    }
    /* #24 Check if the function pointer for the selected driver is a valid function address */
    else
    {
#endif /* (WDGIF_USE_STATECOMBINER == STD_ON) */
      /* #25 Call the corresponding platform-specific implementation */
#if (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) /* COV_WDGIF_USE_AUTOSAR_DRV_API */
      /* Identify watchdog instance, if more than one of the same type */
      wdg_instance = WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgInstance;

      ret = WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgFunctions->Wdg_SetMode (wdg_instance, WdgMode); /* SBSW_WDGIF_005 */
#else
      ret = WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgFunctions->Wdg_SetMode_AR (WdgMode); /* SBSW_WDGIF_005 */
#endif /* (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) */
#if (WDGIF_USE_STATECOMBINER == STD_ON)
    }
#endif /* (WDGIF_USE_STATECOMBINER == STD_ON) */
  }

  /* #26 Return the value of the wdg servicing */
  return ret;
}

/**********************************************************************************************************************
 *  WdgIf_SetTriggerCondition()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
FUNC(Std_ReturnType, WDGIF_CODE) WdgIf_SetTriggerCondition(
  VAR(uint8, AUTOMATIC) DeviceIndex,
  VAR(uint16, AUTOMATIC) Timeout
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(Std_ReturnType, AUTOMATIC) ret;
#if (WDGIF_USE_STATECOMBINER == STD_ON)
  P2CONST(WdgIf_InterfaceFunctionsType, AUTOMATIC, WDGIF_APPL_CONST) wdg_function_address;
#endif /* (WDGIF_USE_STATECOMBINER == STD_ON) */

#if (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) /* COV_WDGIF_USE_AUTOSAR_DRV_API */
  VAR(uint8, AUTOMATIC) wdg_instance;
#endif /* (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) */
    
  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if the configuration is invalid (whether the array with function pointers per driver is a NULL_PTR) or
   *     if the parameter DeviceIndex is not plausible or
   *     if the function pointer for the selected driver is a NULL_PTR */
  if ( (WdgIf_Interface.WdgFunctionsPerDevice == NULL_PTR)
    || (DeviceIndex >= WdgIf_Interface.NumOfWdgs)
#if (WDGIF_USE_STATECOMBINER == STD_OFF)
    || (WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgFunctions == NULL_PTR)
#else /* if (WDGIF_USE_STATECOMBINER == STD_ON) */
    || (WdgIf_Interface.WdgIfStateCombinerConfigCommon == NULL_PTR)
# if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON)
    || (WdgIf_Interface.WdgIfStateCombinerConfigManual == NULL_PTR)
# endif /* (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON) */
#endif /* (WDGIF_USE_STATECOMBINER == STD_OFF) */
     )
  {
    /* #11 Check if WDGIF_DEV_ERROR_DETECT is set to STD_ON */
#if (WDGIF_DEV_ERROR_DETECT == STD_ON)
    /* #12 Raise the development error with error code WDGIF_E_PARAM_DEVICE */
    Appl_Det_ReportError (WDGIF_MODULE_ID, WDGIF_VENDOR_ID, API_ID_WdgIf_SetTriggerCondition, WDGIF_E_PARAM_DEVICE);
#endif /* WDGIF_DEV_ERROR_DETECT == STD_ON */
    /* #13 Abort and return E_NOT_OK */
    ret = E_NOT_OK;
  }
  /* #20 Check if the configuration is valid */
  else
  {
    /* #21 Check if WDGIF_USE_STATECOMBINER is set to STD_ON */
#if (WDGIF_USE_STATECOMBINER == STD_ON)
    wdg_function_address = WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgFunctions;

    /* #22 Check if the function pointer for the selected driver is invalid (NULL_PTR) - WdgIf instance has its own
     *     underlying Wdg */
    if (wdg_function_address == NULL_PTR)
    {
      /* #23 Set the new trigger window for the addressed State Combiner instance */
# if ( (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF) || (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) ) /* COV_WDGIF_USE_AUTOSAR_DRV_API */
      ret = wdgif_statecombiner_settriggerwindow( WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgInstance,
                                                  0u,
                                                  Timeout
                                                );
# else
      ret = wdgif_statecombiner_settriggerwindow( WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgInstance,
                                                  Timeout
                                                );
# endif
    }
    /* #24 Check if the function pointer for the selected driver is a valid function address */
    else
    {
#endif /* (WDGIF_USE_STATECOMBINER == STD_ON) */
      /* #25 Call the corresponding platform-specific implementation with input parameter values */
#if (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) /* COV_WDGIF_USE_AUTOSAR_DRV_API */
      /* Identify watchdog instance, if more than one of the same type */
      wdg_instance = WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgInstance;

      ret = WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgFunctions->Wdg_SetTriggerWindow( wdg_instance, /* SBSW_WDGIF_005 */
                                                                                                   0u,
                                                                                                   Timeout
                                                                                                 );
#else /* if (WDGIF_USE_AUTOSAR_DRV_API == STD_ON) */
      ret = E_OK;
      WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgFunctions->Wdg_SetTriggerCondition_AR (Timeout); /* SBSW_WDGIF_005 */
#endif /* (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) */

#if (WDGIF_USE_STATECOMBINER == STD_ON)
    }
#endif /* (WDGIF_USE_STATECOMBINER == STD_ON) */
  }

  /* #30 Return the value of the wdg servicing */
  return ret;
}

/**********************************************************************************************************************
 *  WdgIf_SetTriggerWindow()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
FUNC(Std_ReturnType, WDGIF_CODE) WdgIf_SetTriggerWindow(
  VAR(uint8, AUTOMATIC) DeviceIndex,
  VAR(uint16, AUTOMATIC) WindowStart,
  VAR(uint16, AUTOMATIC) Timeout
  )
{
  /* ----- Local Variables ---------------------------------------------- */
  VAR(Std_ReturnType, AUTOMATIC) ret;
#if (WDGIF_USE_STATECOMBINER == STD_ON)
  P2CONST(WdgIf_InterfaceFunctionsType, AUTOMATIC, WDGIF_APPL_CONST) wdg_function_address;
#endif /* (WDGIF_USE_STATECOMBINER == STD_ON) */

#if (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) /* COV_WDGIF_USE_AUTOSAR_DRV_API */
  VAR(uint8, AUTOMATIC) wdg_instance;
#endif /* (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Check if the configuration is invalid (whether the array with function pointers per driver is a NULL_PTR) or
   *     if the parameter DeviceIndex is not plausible or
   *     if the function pointer for the selected driver is a NULL_PTR */
  if ( (WdgIf_Interface.WdgFunctionsPerDevice == NULL_PTR)
    || (DeviceIndex >= WdgIf_Interface.NumOfWdgs)
#if (WDGIF_USE_STATECOMBINER == STD_OFF)
    || (WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgFunctions == NULL_PTR)
#else /* if (WDGIF_USE_STATECOMBINER == STD_ON) */
    || (WdgIf_Interface.WdgIfStateCombinerConfigCommon == NULL_PTR)
# if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON)
    || (WdgIf_Interface.WdgIfStateCombinerConfigManual == NULL_PTR)
# endif /* (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON) */
#endif /* (WDGIF_USE_STATECOMBINER == STD_OFF) */
     )
  {
    /* #11 Check if WDGIF_DEV_ERROR_DETECT is set to STD_ON */
#if (WDGIF_DEV_ERROR_DETECT == STD_ON)
    /* #12 Raise the development error with error code WDGIF_E_PARAM_DEVICE */
    Appl_Det_ReportError (WDGIF_MODULE_ID, WDGIF_VENDOR_ID, API_ID_WdgIf_SetTriggerWindow, WDGIF_E_PARAM_DEVICE);
#endif /* WDGIF_DEV_ERROR_DETECT == STD_ON */
    /* #13 Abort and return E_NOT_OK */
    ret = E_NOT_OK;
  }
  /* #20 Check if the configuration is valid */
  else
  {
    /* #21 Check if WDGIF_USE_STATECOMBINER is set to STD_ON */
#if (WDGIF_USE_STATECOMBINER == STD_ON)
    wdg_function_address = WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgFunctions;

    /* #22 Check if the function pointer for the selected driver is invalid (NULL_PTR) - WdgIf instance has its own
     *     underlying Wdg */
    if (wdg_function_address == NULL_PTR)
    {
      /* #23 Set the new trigger window for the addressed State Combiner instance */
# if ( (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF) || (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) ) /* COV_WDGIF_USE_AUTOSAR_DRV_API */
      ret = wdgif_statecombiner_settriggerwindow( WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgInstance,
                                                  WindowStart,
                                                  Timeout
                                                );
# else
      ret = wdgif_statecombiner_settriggerwindow( WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgInstance,
                                                  Timeout
                                                );
# endif
    }
    /* #24 Check if the function pointer for the selected driver is a valid function address */
    else
    {
#endif /* (WDGIF_USE_STATECOMBINER == STD_ON) */
      /* #25 Call the corresponding platform-specific implementation with input parameter values */
#if (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) /* COV_WDGIF_USE_AUTOSAR_DRV_API */
      /* Identify watchdog instance, if more than one of the same type */
      wdg_instance = WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgInstance;

      ret = WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgFunctions->Wdg_SetTriggerWindow( wdg_instance, /* SBSW_WDGIF_005 */
                                                                                                   WindowStart,
                                                                                                   Timeout
                                                                                                 );
#else /* if (WDGIF_USE_AUTOSAR_DRV_API == STD_ON) */
      /* Note: in this case the parameter WindowStart is ignored. */
      ret = E_OK;
      WindowStart = WindowStart; /* PRQA S 3199 */ /* MD_WdgIf_3199 */
      WdgIf_Interface.WdgFunctionsPerDevice[DeviceIndex].WdgFunctions->Wdg_SetTriggerCondition_AR (Timeout); /* SBSW_WDGIF_005 */
#endif /* (WDGIF_USE_AUTOSAR_DRV_API == STD_OFF) */

#if (WDGIF_USE_STATECOMBINER == STD_ON)
    }
#endif /* (WDGIF_USE_STATECOMBINER == STD_ON) */
  }

  /* #30 Return the value of the wdg servicing */
  return ret;
}

#if (WDGIF_INTERNAL_TICK_COUNTER == STD_ON) /* COV_WDGIF_INTERNAL_TICK_COUNTER */
/**********************************************************************************************************************
 *  WdgIf_GetTickCounter()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(uint32, WDGIF_CODE) WdgIf_GetTickCounter (void)
{
  /* ----- Implementation ----------------------------------------------- */
  /* #10 Return the value provided by the watchdog driver. */
  return WdgIf_Interface.Wdg_GetTickCounter(); /* SBSW_WDGIF_005 */
}
#endif /* WDGIF_INTERNAL_TICK_COUNTER == STD_ON */

#if (WDGIF_VERSION_INFO_API == STD_ON)
/**********************************************************************************************************************
 *  WdgIf_GetVersionInfo()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
FUNC(void, WDGIF_CODE) WdgIf_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, WDGIF_APPL_DATA) versioninfo)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check if out parameter is a NULL_PTR */
  if (versioninfo == NULL_PTR)
  {
    /* #11 Check if WDGIF_DEV_ERROR_DETECT is set to STD_ON */
#if (WDGIF_DEV_ERROR_DETECT == STD_ON)
    /* #12 Raise the development error with error code WDGIF_E_INV_POINTER */
    Appl_Det_ReportError (WDGIF_MODULE_ID, WDGIF_VENDOR_ID, API_ID_WdgIf_GetVersionInfo, WDGIF_E_INV_POINTER);
#endif /* WDGIF_DEV_ERROR_DETECT == STD_ON */
  }
  /* #20 Check if out parameter is a valid pointer (not equal to NULL_PTR) */
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #21 Store the version info in the memory cell referenced by the out parameter */
    versioninfo->vendorID = (WDGIF_VENDOR_ID); /* SBSW_WDGIF_004 */
    versioninfo->moduleID = (WDGIF_MODULE_ID); /* SBSW_WDGIF_004 */
    versioninfo->sw_major_version = (WDGIF_SW_MAJOR_VERSION); /* SBSW_WDGIF_004 */
    versioninfo->sw_minor_version = (WDGIF_SW_MINOR_VERSION); /* SBSW_WDGIF_004 */
    versioninfo->sw_patch_version = (WDGIF_SW_PATCH_VERSION); /* SBSW_WDGIF_004 */
  }
  return;
}
#endif /* WDGIF_VERSION_INFO_API == STD_ON */

#define WDGIF_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Testing Functions
 *********************************************************************************************************************/
#if defined (WDGIF_UNIT_TESTS) /* COV_WDGIF_TESTCONFIG */
# if (WDGIF_UNIT_TESTS == 1) /* COV_WDGIF_TESTCONFIG */
#  if (WDGIF_USE_STATECOMBINER == STD_ON) /* COV_WDGIF_TESTCONFIG */

void tc_wdgif_deinit (void)
{
#   if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON)
  g_wdgif_sc_cycle_counter[0] = 0u;
  g_wdgif_sc_cycle_counter[1] = 0u;
  g_wdgif_sc_cycle_counter[2] = 0u;
  g_wdgif_sc_cycle_counter_INV[0] = (uint16)~0u;
  g_wdgif_sc_cycle_counter_INV[1] = (uint16)~0u;
  g_wdgif_sc_cycle_counter_INV[2] = (uint16)~0u;
#   else /* if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF) */
  g_wdgif_sc_sum_ws[0] = 0u;
  g_wdgif_sc_sum_ws[1] = 0u;
  g_wdgif_sc_sum_ws[2] = 0u;
  g_wdgif_sc_sum_to[0] = 0u;
  g_wdgif_sc_sum_to[1] = 0u;
  g_wdgif_sc_sum_to[2] = 0u;
  g_wdgif_sc_sum_ws_INV[0] = (uint32)~0u;
  g_wdgif_sc_sum_ws_INV[1] = (uint32)~0u;
  g_wdgif_sc_sum_ws_INV[2] = (uint32)~0u;
  g_wdgif_sc_sum_to_INV[0] = (uint32)~0u;
  g_wdgif_sc_sum_to_INV[1] = (uint32)~0u;
  g_wdgif_sc_sum_to_INV[2] = (uint32)~0u;
#   endif /* (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON) */
  g_wdgif_sc_sync_count = SYNC_COUNT_INIT_VAL;
  g_wdgif_sc_sync_count_INV = (uint16)~SYNC_COUNT_INIT_VAL;
  g_wdgif_sc_status = WDGIF_STATECOMBINER_OK;
  g_wdgif_sc_status_INV = (uint8)~WDGIF_STATECOMBINER_OK;
}

void tc_wdgif_deinit_shared_mem (void)
{
  uint32 i;
  uint32 numOfSlaves;
  WdgIf_StateCombinerSharedMemory* sdata;

  numOfSlaves = WdgIf_Interface.WdgIfStateCombinerConfigCommon->
                  WdgIfStateCombinerNumberOfSlaves;

  sdata = WdgIf_Interface.WdgIfStateCombinerConfigCommon->WdgIfStateCombinerSData;
  /* reset counters */
  sdata->SlaveCounterValue = 0u;
  sdata->SlaveCounterValue_INV = (uint32)~0u;
  sdata->SlaveTimeout = 0u;
  sdata->SlaveTimeout_INV = (uint16)~0u;
  sdata->SlaveWindowStart = 0u;
  sdata->SlaveWindowStart_INV = (uint16)~0u;
}

/* For manipulating global variables */
#   if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON) /* COV_WDGIF_TESTCONFIG */

void tc_wdgif_manipulate_master_counts (void)
{
  g_wdgif_sc_cycle_counter[0] += 1u;
  g_wdgif_sc_cycle_counter[1] += 1u;
  g_wdgif_sc_cycle_counter[2] += 1u;
}

#   else /* if (WDGIF_STATECOMBINER_MANUAL_MODE == STD_OFF) */

void tc_wdgif_manipulate_master_sum_ws (void)
{
  g_wdgif_sc_sum_ws[0] += 1u;
  g_wdgif_sc_sum_ws[1] += 1u;
  g_wdgif_sc_sum_ws[2] += 1u;
}

void tc_wdgif_manipulate_master_sum_to (void)
{
  g_wdgif_sc_sum_to[0] += 1u;
  g_wdgif_sc_sum_to[1] += 1u;
  g_wdgif_sc_sum_to[2] += 1u;
}

#   endif /* (WDGIF_STATECOMBINER_MANUAL_MODE == STD_ON) */

void tc_wdgif_manipulate_sync_count (void)
{
  g_wdgif_sc_sync_count += 1u;
}

void tc_wdgif_manipulate_status (void)
{
  g_wdgif_sc_status += 1u;
}

void tc_wdgif_manipulate_slave_count (void)
{
  WdgIf_StateCombinerSharedMemory* sdata;

  sdata = WdgIf_Interface.WdgIfStateCombinerConfigCommon->WdgIfStateCombinerSData;
  sdata->SlaveCounterValue += 1u;
}

void tc_wdgif_manipulate_slave_to (void)
{
  WdgIf_StateCombinerSharedMemory* sdata;

  sdata = WdgIf_Interface.WdgIfStateCombinerConfigCommon->WdgIfStateCombinerSData;
  sdata->SlaveTimeout += 1u;
}

void tc_wdgif_manipulate_slave_ws (void)
{
  WdgIf_StateCombinerSharedMemory* sdata;

  sdata = WdgIf_Interface.WdgIfStateCombinerConfigCommon->WdgIfStateCombinerSData;
  sdata->SlaveWindowStart += 1u;
}
#  endif /* #if (WDGIF_USE_STATECOMBINER == STD_ON) */
# endif /* #if (WDGIF_UNIT_TESTS == 1) */
#endif /* defined(WDGIF_UNIT_TESTS) */

/* Justification for module-specific MISRA deviations:

  MD_WdgIf_0291: rule 21.1
    Reason:     This deviation is inherited by the migrated WdgM and cannot be changed currently.
    Risk:       None
    Prevention: None

  MD_WdgIf_3218: rule 8.7
    Reason:     This deviation is inherited by the migrated WdgIf and cannot be changed currently.
    Risk:       None
    Prevention: None

  MD_WdgIf_3199: rule
    Reason:     Variable 'WindowStart' is not used when preprocessor option 'WDGIF_USE_AUTOSAR_DRV_API' is 'STD_ON'.
                This statement is placed to avoid a compiler warning and explicitly mark that 'WindowStart' is not used
                on purpose.
    Risk:       None - see reason
    Prevention: None, because no risk
    
*/

/* SBSW_JUSTIFICATION_BEGIN

\ID SBSW_WDGIF_001
 \DESCRIPTION     Function call with config pointer as parameter
 \COUNTERMEASURE  \S The user has to validate the generated configuration as described in the Safety Manual.

\ID SBSW_WDGIF_002
 \DESCRIPTION     Pointer write access to target config pointer
 \COUNTERMEASURE  \S The user has to validate the generated configuration as described in the Safety Manual.

\ID SBSW_WDGIF_003
 \DESCRIPTION     Array write access
 \COUNTERMEASURE  \R The arrays g_wdgif_sc_cycle_counter, g_wdgif_sc_cycle_counter_INV, g_wdgif_sc_sum_ws,
                     g_wdgif_sc_sum_ws_INV, g_wdgif_sc_sum_to, g_wdgif_sc_sum_to_INV are global arrays with the same
                     length (WDGIF_MAX_SUPPORTED_CORES-1). This define is statically set to 4. A runtime check confirms
                     that only valid array elements of these arrays can be retrieved. The implementation accesses the
                     arrays with an index from 0 to a maximum WdgIfStateCombinerNumberOfSlaves - which is a generated
                     element within the configuration structure. The generator itself does not allow to configure more
                     than three slaves.
                  \S The Safety Manual also tells the user to check that the generated number
                     WdgIfStateCombinerNumberOfSlaves is correct.

\ID SBSW_WDGIF_004
 \DESCRIPTION     Pointer write access to target pointer given as parameter
 \COUNTERMEASURE  \N The given pointer must be valid. The user has to ensure that a valid pointer is given.
                     Additionally, the pointer versioninfo is checked if it is valid.

\ID SBSW_WDGIF_005
 \DESCRIPTION     Function Pointer Call to the underlying watchdog hardware
 \COUNTERMEASURE  \S The generated, configured function pointer must be valid. The user has to ensure that a valid
                     function pointer is generated.
                     The Safety Manual tells the user how to check that function pointers.

SBSW_JUSTIFICATION_END */

/*
\CM CM_WDGIF_001 The given config pointer must be valid. The user has to ensure that a valid pointer is given. The
                 pointer cannot be an arbitrary one, but a generated pointer. The user has to check the generated
                 configuration structure as described in the Safety Manual.
*/

/* COV_JUSTIFICATION_BEGIN

\ID COV_WDGIF_COMPATIBILITY
 \ACCEPT TX
 \REASON [COV_MSR_COMPATIBILITY]

\ID COV_WDGIF_NULL_PTR_DEFINE
 \ACCEPT XF
 \REASON If the NULL_PTR is not defined, the pointer is defined by the WdgIf itself. In all configs the NULL_PTR is
         already defined via Compiler.h.

\ID COV_WDGIF_TESTCONFIG
 \ACCEPT TX
 \ACCEPT XF
 \ACCEPT x
 \REASON WDGIF_UNIT_TESTS cannot be activated in normal use case. This switch is only used during test execution.

\ID COV_WDGIF_USE_AUTOSAR_DRV_API
 \ACCEPT XF
 \ACCEPT TF tf xf
 \REASON WDGIF_USE_AUTOSAR_DRV_API is statically generated as STD_ON. The WdgIf only supports AUTOSAR driver after
         generator update. Due to compatibility reasons the static code is not modified by now.

\ID COV_WDGIF_INTERNAL_TICK_COUNTER
 \ACCEPT XF
 \REASON WDGIF_INTERNAL_TICK_COUNTER is statically generated as STD_OFF. The WdgIf only supports AUTOSAR driver after
         generator update. Therefore this additional feature is not supported. Due to compatibility reasons the static
         code is not modified by now.

COV_JUSTIFICATION_END */

/**********************************************************************************************************************
 *  END OF FILE: WdgIf.c
 *********************************************************************************************************************/
