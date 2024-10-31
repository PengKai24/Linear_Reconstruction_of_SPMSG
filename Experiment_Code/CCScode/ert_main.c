/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'TEST_IPM_2_0'.
 *
 * Model version                  : 1.179
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Thu Oct 31 09:33:51 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 *    3. ROM efficiency
 * Validation result: Not run
 */

#include "TEST_IPM_2_0.h"
#include "rtwtypes.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

  enableTimer0Interrupt();
  TEST_IPM_2_0_step();

  /* Get model outputs here */
  disableTimer0Interrupt();
  OverrunFlag--;
}

volatile boolean_T stopRequested = false;
volatile boolean_T runModel = false;
int main(void)
{
  float modelBaseRate = 0.001;
  float systemClock = 200;

  /* Initialize variables */
  stopRequested = false;
  runModel = false;
  c2000_flash_init();
  init_board();

#ifdef MW_EXEC_PROFILER_ON

  config_profilerTimer();

#endif

  ;
  rtmSetErrorStatus(TEST_IPM_2_0_M, 0);
  TEST_IPM_2_0_initialize();
  configureTimer0(modelBaseRate, systemClock);
  runModel =
    rtmGetErrorStatus(TEST_IPM_2_0_M) == (NULL);
  enableTimer0Interrupt();
  enable_interrupts();
  globalInterruptEnable();
  while (runModel) {
    stopRequested = !(
                      rtmGetErrorStatus(TEST_IPM_2_0_M) == (NULL));
    idletask_num1();
    idletask_num2();
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  TEST_IPM_2_0_terminate();
  globalInterruptDisable();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
