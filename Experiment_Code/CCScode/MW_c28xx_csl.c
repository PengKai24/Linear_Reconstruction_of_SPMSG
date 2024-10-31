#include "c2000BoardSupport.h"
#include "F2837xD_device.h"
#include "F2837xD_Examples.h"
#include "F2837xD_GlobalPrototypes.h"
#include "rtwtypes.h"
#include "TEST_IPM_2_0.h"
#include "TEST_IPM_2_0_private.h"

void enableExtInterrupt (void);
void disableWatchdog(void)
{
  int *WatchdogWDCR = (void *) 0x7029;
  asm(" EALLOW ");
  *WatchdogWDCR = 0x0068;
  asm(" EDIS ");
}

interrupt void ADCB1_INT_isr(void)
{
  isr_int1pie2_task_fcn();
  EALLOW;
  AdcbRegs.ADCINTFLGCLR.bit.ADCINT1 = 1;
  EDIS;
  PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
                                     /* Acknowledge to receive more interrupts*/
}

void idletask_num1(void)
{
  DINT;                                /* disable global interrupts*/
  idle_num1_task_fcn();
  EINT;                                /* reenable global interrupts*/
}

void idletask_num2(void)
{
  idle_num2_task_fcn();
}

void enable_interrupts()
{
  EALLOW;
  PieVectTable.ADCB1_INT = &ADCB1_INT_isr;/* Hook interrupt to the ISR*/
  EDIS;
  PieCtrlRegs.PIEIER1.bit.INTx2 = 1;   /* Enable interrupt ADCB1_INT*/
  IER |= M_INT1;

  /* Enable global Interrupts and higher priority real-time debug events:*/
  EINT;                                /* Enable Global interrupt INTM*/
  ERTM;                               /* Enable Global realtime interrupt DBGM*/
}

void configureGPIOExtInterrupt (void)
{
}

void enableExtInterrupt (void)
{
}
