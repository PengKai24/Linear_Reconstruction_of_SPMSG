/*
 * File: TEST_IPM_2_0_private.h
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

#ifndef RTW_HEADER_TEST_IPM_2_0_private_h_
#define RTW_HEADER_TEST_IPM_2_0_private_h_
#include "ccp_utils.h"
#include "ccp_defines.h"
#include "rtwtypes.h"
#include "can_message.h"
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "inc/hw_can.h"
#include "driverlib/can.h"
#include "can_message.h"
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "inc/hw_can.h"
#include "driverlib/can.h"
#include "TEST_IPM_2_0.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFFFU) ) || ( SCHAR_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFU) ) || ( INT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFUL) ) || ( LONG_MAX != (0x7FFFFFFFL) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

void InitAdcB (void);
void config_ADCB_SOC0 (void);
void config_ADCB_SOC1 (void);
void config_ADCB_SOC2 (void);
void InitAdcA (void);
void config_ADCA_SOC6 (void);
void config_ADCA_SOC3 (void);
void config_ADCA_SOC4 (void);
void config_ADCA_SOC5 (void);
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern Uint16 Cla1Prog_Start;
extern uint16_T MW_adcBInitFlag;
extern uint16_T MW_adcAInitFlag;

/* S-Function Block: <S9>/Function Definition */
void exported_ccp_daq_trigger(uint8_T * msg_pointer);
void idle_num1_task_fcn(void);
void idle_num2_task_fcn(void);
void isr_int1pie2_task_fcn(void);
extern void configureGPIOExtInterrupt(void);
__interrupt void Cla1Task1();

#pragma CODE_SECTION (TEST_IP_SPIMasterTransfer_Start, "ramfuncs")

extern void TEST_IP_SPIMasterTransfer_Start(DW_SPIMasterTransfer_TEST_IPM_T
  *localDW);

#pragma CODE_SECTION (TEST_IPM_2_0_SPIMasterTransfer, "ramfuncs")

extern void TEST_IPM_2_0_SPIMasterTransfer(uint16_T rtu_0,
  B_SPIMasterTransfer_TEST_IPM__T *localB, DW_SPIMasterTransfer_TEST_IPM_T
  *localDW);

#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction, "ramfuncs")

extern void TEST_IPM_2_0_MATLABFunction(real32_T rtu_Udc, real32_T rtu_Input,
  real32_T *rty_Output);

#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction3, "ramfuncs")

extern void TEST_IPM_2_0_MATLABFunction3(real32_T rtu_I, real32_T rtu_K,
  real32_T rtu_Udead, real32_T *rty_Uerror);

#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction_o, "ramfuncs")

extern void TEST_IPM_2_0_MATLABFunction_o(real32_T rtu_Target, real32_T rtu_Step,
  real32_T rtu_LastOutput, real32_T *rty_Output);

#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction_n, "ramfuncs")

extern void TEST_IPM_2_0_MATLABFunction_n(real32_T rtu_FRQ, real32_T rtu_LastAng,
  real32_T *rty_Ang);

#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction6, "ramfuncs")

extern void TEST_IPM_2_0_MATLABFunction6(real32_T rtu_IRef, real32_T rtu_IFbk);

#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction_g, "ramfuncs")

extern void TEST_IPM_2_0_MATLABFunction_g(real32_T rtu_Limit, real32_T rtu_Input,
  real32_T *rty_Output);

#pragma CODE_SECTION (TEST_IPM_2_0_SPITransmit2_Start, "ramfuncs")

extern void TEST_IPM_2_0_SPITransmit2_Start(DW_SPITransmit2_TEST_IPM_2_0_T
  *localDW);

#pragma CODE_SECTION (TEST_IPM_2_0_SPITransmit2, "ramfuncs")

extern void TEST_IPM_2_0_SPITransmit2(uint16_T rtu_0,
  DW_SPITransmit2_TEST_IPM_2_0_T *localDW);

#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction_k, "ramfuncs")

extern void TEST_IPM_2_0_MATLABFunction_k(real32_T rtu_Target, real32_T rtu_Step,
  real32_T rtu_LastOutput, real32_T *rty_Output);

#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction1, "ramfuncs")

extern void TEST_IPM_2_0_MATLABFunction1(uint16_T rtu_input, real32_T
  *rty_Output);

#pragma CODE_SECTION (TES_FunctionCallSubsystem_Start, "ramfuncs")

extern void TES_FunctionCallSubsystem_Start(void);

#pragma CODE_SECTION (TEST_IPM__FunctionCallSubsystem, "ramfuncs")

extern void TEST_IPM__FunctionCallSubsystem(void);

#pragma CODE_SECTION (TE_FunctionCallSubsystem1_Start, "ramfuncs")

extern void TE_FunctionCallSubsystem1_Start(void);

#pragma CODE_SECTION (TEST_IPM_FunctionCallSubsystem1, "ramfuncs")

extern void TEST_IPM_FunctionCallSubsystem1(void);

#pragma CODE_SECTION (TE_FunctionCallSubsystem2_Start, "ramfuncs")

extern void TE_FunctionCallSubsystem2_Start(void);

#pragma CODE_SECTION (TEST_IPM_FunctionCallSubsystem2, "ramfuncs")

extern void TEST_IPM_FunctionCallSubsystem2(void);

#pragma CODE_SECTION (TEST_IPM_2_0_ePWM_Start, "ramfuncs")

extern void TEST_IPM_2_0_ePWM_Start(void);

#pragma CODE_SECTION (TEST_IPM_2_0_ePWM, "ramfuncs")

extern void TEST_IPM_2_0_ePWM(void);

#pragma CODE_SECTION (TEST_IPM_2__BackgroundTask_Init, "ramfuncs")

extern void TEST_IPM_2__BackgroundTask_Init(void);

#pragma CODE_SECTION (TEST_IPM_2_BackgroundTask_Reset, "ramfuncs")

extern void TEST_IPM_2_BackgroundTask_Reset(void);

#pragma CODE_SECTION (TEST_IPM_2_BackgroundTask_Start, "ramfuncs")

extern void TEST_IPM_2_BackgroundTask_Start(void);

#pragma CODE_SECTION (TEST_IPM_2_0_BackgroundTask, "ramfuncs")

extern void TEST_IPM_2_0_BackgroundTask(void);

#pragma CODE_SECTION (TEST_IPM_SPIMasterTransfer_Term, "ramfuncs")

extern void TEST_IPM_SPIMasterTransfer_Term(DW_SPIMasterTransfer_TEST_IPM_T
  *localDW);

#pragma CODE_SECTION (TES_FunctionCallSubsystem2_Term, "ramfuncs")

extern void TES_FunctionCallSubsystem2_Term(void);

#pragma CODE_SECTION (TEST_IPM_2_0_SPITransmit2_Term, "ramfuncs")

extern void TEST_IPM_2_0_SPITransmit2_Term(DW_SPITransmit2_TEST_IPM_2_0_T
  *localDW);
void isr_int1pie2_task_fcn(void);
void TEST_IPM_2_0_ASYNC7(int controlPortIdx);

#endif                                 /* RTW_HEADER_TEST_IPM_2_0_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
