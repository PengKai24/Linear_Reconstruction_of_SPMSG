/*
 * File: TEST_IPM_2_0_types.h
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

#ifndef RTW_HEADER_TEST_IPM_2_0_types_h_
#define RTW_HEADER_TEST_IPM_2_0_types_h_
#include "rtwtypes.h"

/* Custom Type definition for MATLABSystem: '<S34>/SPI Master Transfer' */
#include "MW_SVD.h"
#ifndef typedef_codertarget_tic2000_blocks_SP_T
#define typedef_codertarget_tic2000_blocks_SP_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_SPI_HANDLE;
} codertarget_tic2000_blocks_SP_T;

#endif                               /*typedef_codertarget_tic2000_blocks_SP_T*/

/* Forward declaration for rtModel */
typedef struct tag_RTM_TEST_IPM_2_0_T RT_MODEL_TEST_IPM_2_0_T;

#endif                                 /* RTW_HEADER_TEST_IPM_2_0_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
