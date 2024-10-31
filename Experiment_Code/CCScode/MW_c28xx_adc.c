#include "c2000BoardSupport.h"
#include "F2837xD_device.h"
#include "F2837xD_Examples.h"
#include "F2837xD_GlobalPrototypes.h"
#include "rtwtypes.h"
#include "TEST_IPM_2_0.h"
#include "TEST_IPM_2_0_private.h"

void config_ADCA_SOC6()
{
  EALLOW;
  AdcaRegs.ADCSOC6CTL.bit.CHSEL = 4;   /* Set SOC6 channel select to ADCIN4*/
  AdcaRegs.ADCSOC6CTL.bit.TRIGSEL = 0;
  AdcaRegs.ADCSOC6CTL.bit.ACQPS = 14;
                                 /* Set SOC6 S/H Window to 15 ADC Clock Cycles*/
  AdcaRegs.ADCINTSOCSEL1.bit.SOC6 = 0;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdcaRegs.ADCOFFTRIM.bit.OFFTRIM = AdcaRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdcaRegs.ADCCTL1.bit.INTPULSEPOS = 1;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdcaRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 0;/* All in round robin mode SOC Priority*/
  EDIS;
}

void config_ADCB_SOC0()
{
  EALLOW;
  AdcbRegs.ADCSOC0CTL.bit.CHSEL = 0;   /* Set SOC0 channel select to ADCIN0*/
  AdcbRegs.ADCSOC0CTL.bit.TRIGSEL = 5;
  AdcbRegs.ADCSOC0CTL.bit.ACQPS = 6;
                                  /* Set SOC0 S/H Window to 7 ADC Clock Cycles*/
  AdcbRegs.ADCINTSOCSEL1.bit.SOC0 = 0;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdcbRegs.ADCOFFTRIM.bit.OFFTRIM = AdcbRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdcbRegs.ADCCTL1.bit.INTPULSEPOS = 1;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdcbRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 1;/* SOC0 is high priority SOC Priority*/
  EDIS;
}

void config_ADCB_SOC1()
{
  EALLOW;
  AdcbRegs.ADCSOC1CTL.bit.CHSEL = 1;   /* Set SOC1 channel select to ADCIN1*/
  AdcbRegs.ADCSOC1CTL.bit.TRIGSEL = 5;
  AdcbRegs.ADCSOC1CTL.bit.ACQPS = 6;
                                  /* Set SOC1 S/H Window to 7 ADC Clock Cycles*/
  AdcbRegs.ADCINTSOCSEL1.bit.SOC1 = 0;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdcbRegs.ADCOFFTRIM.bit.OFFTRIM = AdcbRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdcbRegs.ADCCTL1.bit.INTPULSEPOS = 1;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdcbRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 1;/* SOC0 is high priority SOC Priority*/
  EDIS;
}

void config_ADCB_SOC2()
{
  EALLOW;
  AdcbRegs.ADCSOC2CTL.bit.CHSEL = 2;   /* Set SOC2 channel select to ADCIN2*/
  AdcbRegs.ADCSOC2CTL.bit.TRIGSEL = 5;
  AdcbRegs.ADCSOC2CTL.bit.ACQPS = 6;
                                  /* Set SOC2 S/H Window to 7 ADC Clock Cycles*/
  AdcbRegs.ADCINTSEL1N2.bit.INT1E = 1; /* Enabled/Disable ADCINT1 interrupt*/
  AdcbRegs.ADCINTSEL1N2.bit.INT1SEL = 2;/* Setup EOC2 to trigger ADCINT1*/
  AdcbRegs.ADCINTSEL1N2.bit.INT1CONT = 0;
                                     /* Enable/Disable ADCINT1 Continuous mode*/
  AdcbRegs.ADCINTSOCSEL1.bit.SOC2 = 0;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdcbRegs.ADCOFFTRIM.bit.OFFTRIM = AdcbRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdcbRegs.ADCCTL1.bit.INTPULSEPOS = 1;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdcbRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 1;/* SOC0 is high priority SOC Priority*/
  EDIS;
}

void config_ADCA_SOC3()
{
  EALLOW;
  AdcaRegs.ADCSOC3CTL.bit.CHSEL = 3;   /* Set SOC3 channel select to ADCIN3*/
  AdcaRegs.ADCSOC3CTL.bit.TRIGSEL = 0;
  AdcaRegs.ADCSOC3CTL.bit.ACQPS = 14;
                                 /* Set SOC3 S/H Window to 15 ADC Clock Cycles*/
  AdcaRegs.ADCINTSOCSEL1.bit.SOC3 = 0;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdcaRegs.ADCOFFTRIM.bit.OFFTRIM = AdcaRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdcaRegs.ADCCTL1.bit.INTPULSEPOS = 1;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdcaRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 0;/* All in round robin mode SOC Priority*/
  EDIS;
}

void config_ADCA_SOC4()
{
  EALLOW;
  AdcaRegs.ADCSOC4CTL.bit.CHSEL = 1;   /* Set SOC4 channel select to ADCIN1*/
  AdcaRegs.ADCSOC4CTL.bit.TRIGSEL = 0;
  AdcaRegs.ADCSOC4CTL.bit.ACQPS = 14;
                                 /* Set SOC4 S/H Window to 15 ADC Clock Cycles*/
  AdcaRegs.ADCINTSOCSEL1.bit.SOC4 = 0;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdcaRegs.ADCOFFTRIM.bit.OFFTRIM = AdcaRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdcaRegs.ADCCTL1.bit.INTPULSEPOS = 1;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdcaRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 0;/* All in round robin mode SOC Priority*/
  EDIS;
}

void config_ADCA_SOC5()
{
  EALLOW;
  AdcaRegs.ADCSOC5CTL.bit.CHSEL = 2;   /* Set SOC5 channel select to ADCIN2*/
  AdcaRegs.ADCSOC5CTL.bit.TRIGSEL = 0;
  AdcaRegs.ADCSOC5CTL.bit.ACQPS = 14;
                                 /* Set SOC5 S/H Window to 15 ADC Clock Cycles*/
  AdcaRegs.ADCINTSOCSEL1.bit.SOC5 = 0;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdcaRegs.ADCOFFTRIM.bit.OFFTRIM = AdcaRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdcaRegs.ADCCTL1.bit.INTPULSEPOS = 1;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdcaRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 0;/* All in round robin mode SOC Priority*/
  EDIS;
}

void InitAdcA()
{
  EALLOW;
  CpuSysRegs.PCLKCR13.bit.ADC_A = 1;
  AdcaRegs.ADCCTL2.bit.PRESCALE = 8;
  AdcSetMode(ADC_ADCA, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);

  //power up the ADC
  AdcaRegs.ADCCTL1.bit.ADCPWDNZ = 1;

  //delay for 1ms to allow ADC time to power up
  DELAY_US(1000);
  EDIS;
}

void InitAdcB()
{
  EALLOW;
  CpuSysRegs.PCLKCR13.bit.ADC_B = 1;
  AdcbRegs.ADCCTL2.bit.PRESCALE = 3;
  AdcSetMode(ADC_ADCB, ADC_RESOLUTION_12BIT, ADC_SIGNALMODE_SINGLE);

  //power up the ADC
  AdcbRegs.ADCCTL1.bit.ADCPWDNZ = 1;

  //delay for 1ms to allow ADC time to power up
  DELAY_US(1000);
  EDIS;
}
