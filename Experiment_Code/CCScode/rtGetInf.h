/*
 * File: rtGetInf.h
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

#ifndef RTW_HEADER_rtGetInf_h_
#define RTW_HEADER_rtGetInf_h_
#include <stddef.h>
#include "rtwtypes.h"
#include "rt_nonfinite.h"

#pragma CODE_SECTION (rtGetInf, "ramfuncs")

extern real_T rtGetInf(void);

#pragma CODE_SECTION (rtGetInfF, "ramfuncs")

extern real32_T rtGetInfF(void);

#pragma CODE_SECTION (rtGetMinusInf, "ramfuncs")

extern real_T rtGetMinusInf(void);

#pragma CODE_SECTION (rtGetMinusInfF, "ramfuncs")

extern real32_T rtGetMinusInfF(void);

#endif                                 /* RTW_HEADER_rtGetInf_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
