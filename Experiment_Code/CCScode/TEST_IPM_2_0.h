/*
 * File: TEST_IPM_2_0.h
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

#ifndef RTW_HEADER_TEST_IPM_2_0_h_
#define RTW_HEADER_TEST_IPM_2_0_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef TEST_IPM_2_0_COMMON_INCLUDES_
# define TEST_IPM_2_0_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "F2837xD_device.h"
#include "F2837xD_gpio.h"
#include "F2837xD_Examples.h"
#include "IQmathLib.h"
#include "can_message.h"
#include "F2837xD_Cla_defines.h"
#include "MW_SPI.h"
#include "MW_c2000SPI.h"
#endif                                 /* TEST_IPM_2_0_COMMON_INCLUDES_ */

#include "TEST_IPM_2_0_types.h"
#include "MW_target_hardware_resources.h"

/* Includes for objects with custom storage classes. */
#include "cla_header.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

extern void init_eCAN_A ( uint16_T bitRatePrescaler, uint16_T timeSeg1, uint16_T
  timeSeg2, uint16_T sbg, uint16_T sjw, uint16_T sam);
extern void config_ePWM_GPIO (void);

/* user code (top of export header file) */
#include "can_message.h"
#include "can_message.h"

/* Block signals for system '<S34>/SPI Master Transfer' */
typedef struct {
  uint16_T SPIMasterTransfer;          /* '<S34>/SPI Master Transfer' */
} B_SPIMasterTransfer_TEST_IPM__T;

/* Block states (default storage) for system '<S34>/SPI Master Transfer' */
typedef struct {
  codertarget_tic2000_blocks_SP_T obj; /* '<S34>/SPI Master Transfer' */
  boolean_T objisempty;                /* '<S34>/SPI Master Transfer' */
} DW_SPIMasterTransfer_TEST_IPM_T;

/* Block states (default storage) for system '<S43>/SPI Transmit2' */
typedef struct {
  codertarget_tic2000_blocks_SP_T obj; /* '<S43>/SPI Transmit2' */
  boolean_T objisempty;                /* '<S43>/SPI Transmit2' */
} DW_SPITransmit2_TEST_IPM_2_0_T;

/* Block signals (default storage) */
typedef struct {
  real32_T Add3;                       /* '<S116>/Add3' */
  uint16_T ADC_TempA;                  /* '<S6>/ADC_TempA' */
  uint16_T ADC_TempB;                  /* '<S6>/ADC_TempB' */
  uint16_T ADC_TempC;                  /* '<S6>/ADC_TempC' */
  uint16_T ADC_Wind1_U;                /* '<S22>/ADC_Wind1_U' */
  uint16_T ADC_Wind1_V;                /* '<S22>/ADC_Wind1_V' */
  uint16_T ADC_Wind1_W;                /* '<S22>/ADC_Wind1_W' */
  uint16_T ADC_Udc;                    /* '<S22>/ADC_Udc' */
  uint16_T DigitalInput[6];            /* '<S26>/Digital Input' */
  uint16_T DataStoreRead;              /* '<S34>/Data Store Read' */
  uint16_T DataStoreRead_f;            /* '<S33>/Data Store Read' */
  uint16_T DataStoreRead_g;            /* '<S32>/Data Store Read' */
  uint16_T DataStoreRead1;             /* '<S35>/Data Store Read1' */
  uint16_T DataStoreRead2;             /* '<S36>/Data Store Read2' */
  uint16_T eCANReceive_o2[8];          /* '<S8>/eCAN Receive' */
  uint16_T CANCalibrationProtocolTerminati[8];
                            /* '<S13>/CAN Calibration Protocol (Termination)' */
  uint16_T InputDriver[8];             /* '<S11>/Input Driver' */
  B_SPIMasterTransfer_TEST_IPM__T SPIMasterTransfer_p;/* '<S34>/SPI Master Transfer' */
  B_SPIMasterTransfer_TEST_IPM__T SPIMasterTransfer;/* '<S34>/SPI Master Transfer' */
} B_TEST_IPM_2_0_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_tic2000_blocks_SP_T obj; /* '<S29>/SPI Master Transfer1' */
  real_T Wait_Count;                   /* '<S19>/AD2S1210' */
  real32_T Delay_x_DSTATE;             /* '<S133>/Delay_x' */
  real32_T Delay_x_DSTATE_a;           /* '<S134>/Delay_x' */
  real32_T Delay_x_DSTATE_c;           /* '<S135>/Delay_x' */
  real32_T Delay_x_DSTATE_h;           /* '<S139>/Delay_x' */
  real32_T Delay_x_DSTATE_e;           /* '<S140>/Delay_x' */
  real32_T Delay_x_DSTATE_f;           /* '<S136>/Delay_x' */
  real32_T Delay_x_DSTATE_g;           /* '<S137>/Delay_x' */
  real32_T Delay_x_DSTATE_gm;          /* '<S138>/Delay_x' */
  real32_T UnitDelay_DSTATE;           /* '<S141>/Unit Delay' */
  real32_T UnitDelay_DSTATE_h;         /* '<S119>/Unit Delay' */
  real32_T UnitDelay_DSTATE_hz;        /* '<S79>/Unit Delay' */
  real32_T UnitDelay_DSTATE_n;         /* '<S80>/Unit Delay' */
  real32_T UnitDelay_DSTATE_o;         /* '<S109>/Unit Delay' */
  real32_T UnitDelay_DSTATE_l;         /* '<S110>/Unit Delay' */
  real32_T UnitDelay_DSTATE_m;         /* '<S115>/Unit Delay' */
  real32_T UnitDelay3_DSTATE;          /* '<S116>/Unit Delay3' */
  real32_T UnitDelay1_DSTATE;          /* '<S21>/Unit Delay1' */
  real32_T UnitDelay2_DSTATE;          /* '<S21>/Unit Delay2' */
  real32_T UnitDelay6_DSTATE;          /* '<S21>/Unit Delay6' */
  real32_T UnitDelay3_DSTATE_n;        /* '<S38>/Unit Delay3' */
  real32_T t;                          /* '<S51>/MATLAB Function2' */
  real32_T HFI_COUNT;                  /* '<S91>/MATLAB Function5' */
  uint16_T count;                      /* '<S27>/MAX1' */
  uint16_T count_f;                    /* '<S55>/MATLAB Function' */
  uint16_T Tick;                       /* '<S29>/MATLAB Function' */
  uint16_T Tick_b;                     /* '<S21>/MATLAB Function' */
  uint16_T is_c28_canblocks_extras;    /* '<S15>/CCP Stateflow ' */
  uint16_T command_counter;            /* '<S15>/CCP Stateflow ' */
  uint16_T is_active_c3_TEST_IPM_2_0;  /* '<S3>/Chart' */
  uint16_T is_c3_TEST_IPM_2_0;         /* '<S3>/Chart' */
  uint16_T is_active_c1_TEST_IPM_2_0;  /* '<S19>/AD2S1210' */
  uint16_T is_c1_TEST_IPM_2_0;         /* '<S19>/AD2S1210' */
  DW_SPITransmit2_TEST_IPM_2_0_T SPITransmit;/* '<S43>/SPI Transmit2' */
  DW_SPITransmit2_TEST_IPM_2_0_T SPITransmit1;/* '<S43>/SPI Transmit2' */
  DW_SPITransmit2_TEST_IPM_2_0_T SPITransmit3_p;/* '<S43>/SPI Transmit2' */
  DW_SPITransmit2_TEST_IPM_2_0_T SPITransmit3;/* '<S43>/SPI Transmit2' */
  DW_SPITransmit2_TEST_IPM_2_0_T SPITransmit2;/* '<S43>/SPI Transmit2' */
  DW_SPIMasterTransfer_TEST_IPM_T SPIMasterTransfer_p;/* '<S34>/SPI Master Transfer' */
  DW_SPIMasterTransfer_TEST_IPM_T SPIMasterTransfer;/* '<S34>/SPI Master Transfer' */
} DW_TEST_IPM_2_0_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real32_T Gain;                 /* '<S78>/Gain' */
  const real32_T Gain_f;               /* '<S108>/Gain' */
} ConstB_TEST_IPM_2_0_T;

/* Real-time Model Data Structure */
struct tag_RTM_TEST_IPM_2_0_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
  } Timing;
};

/* Block signals (default storage) */
extern B_TEST_IPM_2_0_T TEST_IPM_2_0_B;

/* Block states (default storage) */
extern DW_TEST_IPM_2_0_T TEST_IPM_2_0_DW;
extern const ConstB_TEST_IPM_2_0_T TEST_IPM_2_0_ConstB;/* constant block i/o */

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern real32_T MRAS_Rs;               /* '<Root>/Data Store Memory' */
extern real32_T Tem_Dem;               /* '<Root>/Data Store Memory100' */
extern real32_T Tem_Step;              /* '<Root>/Data Store Memory101' */
extern real32_T DEKF_Rs;               /* '<Root>/Data Store Memory102' */
extern real32_T DEKF_Ldd;              /* '<Root>/Data Store Memory103' */
extern real32_T DEKF_Ldq;              /* '<Root>/Data Store Memory104' */
extern real32_T DEKF_Lqq;              /* '<Root>/Data Store Memory105' */
extern real32_T DEKF_IdhOb;            /* '<Root>/Data Store Memory106' */
extern real32_T DEKF_IqhOb;            /* '<Root>/Data Store Memory107' */
extern real32_T HFI_Imd;               /* '<Root>/Data Store Memory109' */
extern real32_T HFI_Umd;               /* '<Root>/Data Store Memory110' */
extern real32_T HFI_Umq;               /* '<Root>/Data Store Memory111' */
extern real32_T HFI_FRQ;               /* '<Root>/Data Store Memory112' */
extern real32_T HFI_Imq;               /* '<Root>/Data Store Memory113' */
extern real32_T DEKF_R;                /* '<Root>/Data Store Memory114' */
extern real32_T DEKF_Qx;               /* '<Root>/Data Store Memory115' */
extern real32_T DEKF_QpRs;             /* '<Root>/Data Store Memory116' */
extern real32_T DEKF_QpLdd;            /* '<Root>/Data Store Memory117' */
extern real32_T DEKF_QpLdq;            /* '<Root>/Data Store Memory118' */
extern real32_T DEKF_QpLqq;            /* '<Root>/Data Store Memory119' */
extern real32_T DEKF_Phiq0;            /* '<Root>/Data Store Memory123' */
extern real32_T Phi_dOb;               /* '<Root>/Data Store Memory124' */
extern real32_T Phi_Rs;                /* '<Root>/Data Store Memory125' */
extern real32_T Phi_qOb;               /* '<Root>/Data Store Memory126' */
extern real32_T DEKF_Gamma;            /* '<Root>/Data Store Memory127' */
extern real32_T DEKF_Udelay;           /* '<Root>/Data Store Memory128' */
extern real32_T INITV_RS;              /* '<Root>/Data Store Memory129' */
extern real32_T INITV_NDD;             /* '<Root>/Data Store Memory130' */
extern real32_T INITV_NDQ;             /* '<Root>/Data Store Memory131' */
extern real32_T INITV_NQQ;             /* '<Root>/Data Store Memory132' */
extern real32_T Id_Filter;             /* '<Root>/Data Store Memory133' */
extern real32_T Iq_Filter;             /* '<Root>/Data Store Memory134' */
extern real32_T Tr_Phidm;              /* '<Root>/Data Store Memory135' */
extern real32_T Tr_Lqap;               /* '<Root>/Data Store Memory136' */
extern real32_T Tr_Lqinc;              /* '<Root>/Data Store Memory137' */
extern real32_T Tr_Ldap;               /* '<Root>/Data Store Memory138' */
extern real32_T Tr_Ldinc;              /* '<Root>/Data Store Memory139' */
extern real32_T V_OFFSET;              /* '<Root>/Data Store Memory14' */
extern real32_T Tr_Ldqinc;             /* '<Root>/Data Store Memory140' */
extern real32_T Tr_Tem;                /* '<Root>/Data Store Memory141' */
extern real32_T Tr_Ttotal;             /* '<Root>/Data Store Memory142' */
extern real32_T MRAS_Ld;               /* '<Root>/Data Store Memory143' */
extern real32_T MRAS_Lq;               /* '<Root>/Data Store Memory144' */
extern real32_T MRAS_KR;               /* '<Root>/Data Store Memory145' */
extern real32_T MRAS_KLd;              /* '<Root>/Data Store Memory146' */
extern real32_T MRAS_KLq;              /* '<Root>/Data Store Memory147' */
extern real32_T MRAS_Idh;              /* '<Root>/Data Store Memory148' */
extern real32_T MRAS_Iqh;              /* '<Root>/Data Store Memory149' */
extern real32_T PI_Multi;              /* '<Root>/Data Store Memory150' */
extern real32_T THERMAL_Ud;            /* '<Root>/Data Store Memory151' */
extern real32_T THERMAL_Uq;            /* '<Root>/Data Store Memory152' */
extern real32_T THERMAL_IdRef;         /* '<Root>/Data Store Memory153' */
extern real32_T THERMAL_IqRef;         /* '<Root>/Data Store Memory154' */
extern real32_T THERMAL_IdFbk;         /* '<Root>/Data Store Memory155' */
extern real32_T THERMAL_IqFbk;         /* '<Root>/Data Store Memory156' */
extern real32_T THERMAL_N;             /* '<Root>/Data Store Memory157' */
extern real32_T THERMAL_Pele;          /* '<Root>/Data Store Memory158' */
extern real32_T Udc_Filter;            /* '<Root>/Data Store Memory159' */
extern real32_T W_OFFSET;              /* '<Root>/Data Store Memory16' */
extern real32_T Udc_REF;               /* '<Root>/Data Store Memory160' */
extern real32_T Udc_FBK;               /* '<Root>/Data Store Memory161' */
extern real32_T Udc_Kp;                /* '<Root>/Data Store Memory162' */
extern real32_T Udc_Ki;                /* '<Root>/Data Store Memory163' */
extern real32_T Udc_Integral;          /* '<Root>/Data Store Memory164' */
extern real32_T Udc_Dem;               /* '<Root>/Data Store Memory165' */
extern real32_T Udc_Step;              /* '<Root>/Data Store Memory166' */
extern real32_T FbL_Ld;                /* '<Root>/Data Store Memory167' */
extern real32_T FbL_Lq;                /* '<Root>/Data Store Memory168' */
extern real32_T FbL_Phif;              /* '<Root>/Data Store Memory169' */
extern real32_T FbL_Rs;                /* '<Root>/Data Store Memory170' */
extern real32_T FbL_Cdc;               /* '<Root>/Data Store Memory171' */
extern real32_T FbL_z1;                /* '<Root>/Data Store Memory172' */
extern real32_T FbL_z2;                /* '<Root>/Data Store Memory173' */
extern real32_T FbL_z3;                /* '<Root>/Data Store Memory174' */
extern real32_T FbL_ud;                /* '<Root>/Data Store Memory175' */
extern real32_T FbL_uq;                /* '<Root>/Data Store Memory176' */
extern real32_T FbL_Rdc;               /* '<Root>/Data Store Memory177' */
extern real32_T Ud_in;                 /* '<Root>/Data Store Memory178' */
extern real32_T Uq_in;                 /* '<Root>/Data Store Memory179' */
extern real32_T FbL_k0;                /* '<Root>/Data Store Memory180' */
extern real32_T FbL_k1;                /* '<Root>/Data Store Memory181' */
extern real32_T FbL_k2;                /* '<Root>/Data Store Memory182' */
extern real32_T FbL_k4;                /* '<Root>/Data Store Memory183' */
extern real32_T FbL_k5;                /* '<Root>/Data Store Memory184' */
extern real32_T FbL_k3;                /* '<Root>/Data Store Memory185' */
extern real32_T FbL_z1ref;             /* '<Root>/Data Store Memory186' */
extern real32_T FbL_v1;                /* '<Root>/Data Store Memory187' */
extern real32_T FbL_v2;                /* '<Root>/Data Store Memory188' */
extern real32_T FbL_z1_Integral;       /* '<Root>/Data Store Memory189' */
extern real32_T FbL_z3_Integral;       /* '<Root>/Data Store Memory190' */
extern real32_T FbL_Udc_Integral;      /* '<Root>/Data Store Memory191' */
extern real32_T FbL_iqMuti;            /* '<Root>/Data Store Memory192' */
extern real32_T FbL_Phif6Amp;          /* '<Root>/Data Store Memory193' */
extern real32_T FbL_Phif6Pha;          /* '<Root>/Data Store Memory194' */
extern real32_T FbL_Phif6wave;         /* '<Root>/Data Store Memory195' */
extern real32_T smc_c;                 /* '<Root>/Data Store Memory196' */
extern real32_T smc_r;                 /* '<Root>/Data Store Memory197' */
extern real32_T smc_b1;                /* '<Root>/Data Store Memory198' */
extern real32_T smc_b2;                /* '<Root>/Data Store Memory199' */
extern real32_T V_Current;             /* '<Root>/Data Store Memory20' */
extern real32_T smc_uqset;             /* '<Root>/Data Store Memory200' */
extern real32_T smc_x1_integral;       /* '<Root>/Data Store Memory201' */
extern real32_T smc_e1_integral;       /* '<Root>/Data Store Memory202' */
extern real32_T smc_z1_integral;       /* '<Root>/Data Store Memory203' */
extern real32_T smc_en;                /* '<Root>/Data Store Memory204' */
extern real32_T smc_f;                 /* '<Root>/Data Store Memory205' */
extern real32_T FbL_smc_integral;      /* '<Root>/Data Store Memory206' */
extern real32_T FbL_smc_r1;            /* '<Root>/Data Store Memory207' */
extern real32_T FbL_smc_r2;            /* '<Root>/Data Store Memory208' */
extern real32_T W_Current;             /* '<Root>/Data Store Memory21' */
extern real32_T U_Current;             /* '<Root>/Data Store Memory22' */
extern real32_T Id_FBK;                /* '<Root>/Data Store Memory23' */
extern real32_T Iq_FBK;                /* '<Root>/Data Store Memory24' */
extern real32_T Id_REF;                /* '<Root>/Data Store Memory25' */
extern real32_T Iq_REF;                /* '<Root>/Data Store Memory26' */
extern real32_T Id_Kp;                 /* '<Root>/Data Store Memory27' */
extern real32_T Iq_Kp;                 /* '<Root>/Data Store Memory28' */
extern real32_T Id_Ki;                 /* '<Root>/Data Store Memory29' */
extern real32_T Iq_Ki;                 /* '<Root>/Data Store Memory30' */
extern real32_T ResloverAng;           /* '<Root>/Data Store Memory31' */
extern real32_T N_FBK;                 /* '<Root>/Data Store Memory32' */
extern real32_T N_REF;                 /* '<Root>/Data Store Memory34' */
extern real32_T N_Filter;              /* '<Root>/Data Store Memory35' */
extern real32_T N_Kp;                  /* '<Root>/Data Store Memory36' */
extern real32_T N_Ki;                  /* '<Root>/Data Store Memory38' */
extern real32_T ControlAng;            /* '<Root>/Data Store Memory41' */
extern real32_T N_Integral;            /* '<Root>/Data Store Memory42' */
extern real32_T Id_Integral;           /* '<Root>/Data Store Memory43' */
extern real32_T Iq_Integral;           /* '<Root>/Data Store Memory44' */
extern real32_T TempA;                 /* '<Root>/Data Store Memory46' */
extern real32_T TempB;                 /* '<Root>/Data Store Memory47' */
extern real32_T TempC;                 /* '<Root>/Data Store Memory48' */
extern real32_T UDC;                   /* '<Root>/Data Store Memory49' */
extern real32_T UDCPROTECT;            /* '<Root>/Data Store Memory50' */
extern real32_T VF_Ud;                 /* '<Root>/Data Store Memory51' */
extern real32_T VF_Uq;                 /* '<Root>/Data Store Memory52' */
extern real32_T VF_F;                  /* '<Root>/Data Store Memory53' */
extern real32_T VF_F_Step;             /* '<Root>/Data Store Memory54' */
extern real32_T IF_F;                  /* '<Root>/Data Store Memory55' */
extern real32_T IF_F_Step;             /* '<Root>/Data Store Memory56' */
extern real32_T UDOUT;                 /* '<Root>/Data Store Memory57' */
extern real32_T UQOUT;                 /* '<Root>/Data Store Memory58' */
extern real32_T USOUT;                 /* '<Root>/Data Store Memory59' */
extern real32_T U_OFFSET;              /* '<Root>/Data Store Memory6' */
extern real32_T N_Dem;                 /* '<Root>/Data Store Memory63' */
extern real32_T N_Step;                /* '<Root>/Data Store Memory64' */
extern real32_T ArrayId_FBK;           /* '<Root>/Data Store Memory65' */
extern real32_T ArrayIq_FBK;           /* '<Root>/Data Store Memory66' */
extern real32_T ArrayTheta;            /* '<Root>/Data Store Memory67' */
extern real32_T BufferOutId_FBK;       /* '<Root>/Data Store Memory68' */
extern real32_T BufferOutIq_FBK;       /* '<Root>/Data Store Memory69' */
extern real32_T BufferOutTheta;        /* '<Root>/Data Store Memory70' */
extern real32_T UDOUT_Comp;            /* '<Root>/Data Store Memory71' */
extern real32_T UQOUT_Comp;            /* '<Root>/Data Store Memory72' */
extern real32_T USOUT_Comp;            /* '<Root>/Data Store Memory73' */
extern real32_T K;                     /* '<Root>/Data Store Memory74' */
extern real32_T Udelta;                /* '<Root>/Data Store Memory75' */
extern real32_T ArrayId_REF;           /* '<Root>/Data Store Memory76' */
extern real32_T ArrayIq_REF;           /* '<Root>/Data Store Memory77' */
extern real32_T BufferOutId_REF;       /* '<Root>/Data Store Memory78' */
extern real32_T BufferOutIq_REF;       /* '<Root>/Data Store Memory79' */
extern real32_T ArrayUdComP;           /* '<Root>/Data Store Memory80' */
extern real32_T ArrayUqComP;           /* '<Root>/Data Store Memory81' */
extern real32_T BufferOutUdComP;       /* '<Root>/Data Store Memory82' */
extern real32_T BufferOutUqComP;       /* '<Root>/Data Store Memory83' */
extern real32_T UdComP_Filter;         /* '<Root>/Data Store Memory85' */
extern real32_T UqComP_Filter;         /* '<Root>/Data Store Memory86' */
extern real32_T UsComP_Filter;         /* '<Root>/Data Store Memory87' */
extern real32_T N_400Hz;               /* '<Root>/Data Store Memory88' */
extern real32_T DEKF_Idh;              /* '<Root>/Data Store Memory90' */
extern real32_T DEKF_Id0;              /* '<Root>/Data Store Memory91' */
extern real32_T DEKF_Iqh;              /* '<Root>/Data Store Memory92' */
extern real32_T DEKF_Iq0;              /* '<Root>/Data Store Memory93' */
extern real32_T DEKF_Udh;              /* '<Root>/Data Store Memory94' */
extern real32_T DEKF_Ud0;              /* '<Root>/Data Store Memory95' */
extern real32_T DEKF_Uqh;              /* '<Root>/Data Store Memory96' */
extern real32_T DEKF_Uq0;              /* '<Root>/Data Store Memory97' */
extern real32_T DEKF_Phid0;            /* '<Root>/Data Store Memory98' */
extern real32_T N_NOFILTER;            /* '<Root>/Data Store Memory99' */
extern uint16_T STOP;                  /* '<Root>/Data Store Memory1' */
extern uint16_T ResloverA0;            /* '<Root>/Data Store Memory10' */
extern uint16_T DEKF_FLAG;             /* '<Root>/Data Store Memory108' */
extern uint16_T ResloverA1;            /* '<Root>/Data Store Memory11' */
extern uint16_T ResloverSAMPLE;        /* '<Root>/Data Store Memory12' */
extern uint16_T DEKF_Clear;            /* '<Root>/Data Store Memory120' */
extern uint16_T IGBT_Fault;            /* '<Root>/Data Store Memory121' */
extern uint16_T REVERSE_FLAG;          /* '<Root>/Data Store Memory122' */
extern uint16_T ResloverRESET;         /* '<Root>/Data Store Memory13' */
extern uint16_T ResloverFRQ;           /* '<Root>/Data Store Memory15' */
extern uint16_T InitMode;              /* '<Root>/Data Store Memory17' */
extern uint16_T ResloverRES;           /* '<Root>/Data Store Memory19' */
extern uint16_T ChartFlag;             /* '<Root>/Data Store Memory2' */
extern uint16_T U_AD;                  /* '<Root>/Data Store Memory3' */
extern uint16_T ResloverMid;           /* '<Root>/Data Store Memory33' */
extern uint16_T ResloverFaultRead;     /* '<Root>/Data Store Memory37' */
extern uint16_T PROTECT;               /* '<Root>/Data Store Memory39' */
extern uint16_T V_AD;                  /* '<Root>/Data Store Memory4' */
extern uint16_T ControlMode;           /* '<Root>/Data Store Memory40' */
extern uint16_T FLAG_MTPA;             /* '<Root>/Data Store Memory45' */
extern uint16_T W_AD;                  /* '<Root>/Data Store Memory5' */
extern uint16_T COMPARE_A;             /* '<Root>/Data Store Memory60' */
extern uint16_T COMPARE_B;             /* '<Root>/Data Store Memory61' */
extern uint16_T COMPARE_C;             /* '<Root>/Data Store Memory62' */
extern uint16_T SPIC_Tx;               /* '<Root>/Data Store Memory7' */
extern uint16_T SPIC_Rx;               /* '<Root>/Data Store Memory8' */
extern uint16_T BufferFlag;            /* '<Root>/Data Store Memory84' */
extern uint16_T FLAG_5742;             /* '<Root>/Data Store Memory89' */
extern uint16_T ResloverWR;            /* '<Root>/Data Store Memory9' */

/* Model entry point functions */
#pragma CODE_SECTION (TEST_IPM_2_0_initialize, "ramfuncs")

extern void TEST_IPM_2_0_initialize(void);

#pragma CODE_SECTION (TEST_IPM_2_0_step, "ramfuncs")

extern void TEST_IPM_2_0_step(void);

#pragma CODE_SECTION (TEST_IPM_2_0_terminate, "ramfuncs")

extern void TEST_IPM_2_0_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TEST_IPM_2_0_T *const TEST_IPM_2_0_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S4>/Constant14' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TEST_IPM_2_0'
 * '<S1>'   : 'TEST_IPM_2_0/BackgroundTask'
 * '<S2>'   : 'TEST_IPM_2_0/CLATask'
 * '<S3>'   : 'TEST_IPM_2_0/INT'
 * '<S4>'   : 'TEST_IPM_2_0/Initialize Function'
 * '<S5>'   : 'TEST_IPM_2_0/SpeedREF'
 * '<S6>'   : 'TEST_IPM_2_0/Temperature&DCBUS'
 * '<S7>'   : 'TEST_IPM_2_0/UdcREF'
 * '<S8>'   : 'TEST_IPM_2_0/BackgroundTask/CAN Calibration Protocol'
 * '<S9>'   : 'TEST_IPM_2_0/BackgroundTask/CAN Calibration Protocol/DAQ Processing'
 * '<S10>'  : 'TEST_IPM_2_0/BackgroundTask/CAN Calibration Protocol/DTO Processing'
 * '<S11>'  : 'TEST_IPM_2_0/BackgroundTask/CAN Calibration Protocol/DAQ Processing/Send DAQ Message'
 * '<S12>'  : 'TEST_IPM_2_0/BackgroundTask/CAN Calibration Protocol/DTO Processing/CCP'
 * '<S13>'  : 'TEST_IPM_2_0/BackgroundTask/CAN Calibration Protocol/DTO Processing/CCP(Termination)'
 * '<S14>'  : 'TEST_IPM_2_0/BackgroundTask/CAN Calibration Protocol/DTO Processing/Chart'
 * '<S15>'  : 'TEST_IPM_2_0/BackgroundTask/CAN Calibration Protocol/DTO Processing/CCP/CAN Calibration Protocol'
 * '<S16>'  : 'TEST_IPM_2_0/BackgroundTask/CAN Calibration Protocol/DTO Processing/CCP/CAN Calibration Protocol/CCP Stateflow '
 * '<S17>'  : 'TEST_IPM_2_0/BackgroundTask/CAN Calibration Protocol/DTO Processing/CCP/CAN Calibration Protocol/Interpret Data'
 * '<S18>'  : 'TEST_IPM_2_0/BackgroundTask/CAN Calibration Protocol/DTO Processing/CCP(Termination)/CAN Transmit'
 * '<S19>'  : 'TEST_IPM_2_0/INT/AD2S1210 Init'
 * '<S20>'  : 'TEST_IPM_2_0/INT/Chart'
 * '<S21>'  : 'TEST_IPM_2_0/INT/Current Bias Init'
 * '<S22>'  : 'TEST_IPM_2_0/INT/Current Sampling'
 * '<S23>'  : 'TEST_IPM_2_0/INT/Data Buffer'
 * '<S24>'  : 'TEST_IPM_2_0/INT/Extra Observer'
 * '<S25>'  : 'TEST_IPM_2_0/INT/GPIO Down'
 * '<S26>'  : 'TEST_IPM_2_0/INT/GPIO UP'
 * '<S27>'  : 'TEST_IPM_2_0/INT/MAX5742'
 * '<S28>'  : 'TEST_IPM_2_0/INT/Motor Control'
 * '<S29>'  : 'TEST_IPM_2_0/INT/Read Rotor Position'
 * '<S30>'  : 'TEST_IPM_2_0/INT/ePWM'
 * '<S31>'  : 'TEST_IPM_2_0/INT/AD2S1210 Init/AD2S1210'
 * '<S32>'  : 'TEST_IPM_2_0/INT/AD2S1210 Init/Function-Call Subsystem'
 * '<S33>'  : 'TEST_IPM_2_0/INT/AD2S1210 Init/Function-Call Subsystem1'
 * '<S34>'  : 'TEST_IPM_2_0/INT/AD2S1210 Init/Function-Call Subsystem2'
 * '<S35>'  : 'TEST_IPM_2_0/INT/AD2S1210 Init/Function-Call Subsystem3'
 * '<S36>'  : 'TEST_IPM_2_0/INT/AD2S1210 Init/Function-Call Subsystem4'
 * '<S37>'  : 'TEST_IPM_2_0/INT/Current Bias Init/MATLAB Function'
 * '<S38>'  : 'TEST_IPM_2_0/INT/Current Sampling/First Order Filter '
 * '<S39>'  : 'TEST_IPM_2_0/INT/Current Sampling/MATLAB Function'
 * '<S40>'  : 'TEST_IPM_2_0/INT/Current Sampling/MATLAB Function1'
 * '<S41>'  : 'TEST_IPM_2_0/INT/GPIO UP/MATLAB Function2'
 * '<S42>'  : 'TEST_IPM_2_0/INT/MAX5742/MAX1'
 * '<S43>'  : 'TEST_IPM_2_0/INT/MAX5742/Subsystem'
 * '<S44>'  : 'TEST_IPM_2_0/INT/MAX5742/Subsystem1'
 * '<S45>'  : 'TEST_IPM_2_0/INT/MAX5742/Subsystem2'
 * '<S46>'  : 'TEST_IPM_2_0/INT/MAX5742/Subsystem3'
 * '<S47>'  : 'TEST_IPM_2_0/INT/Motor Control/Adjusting Mode'
 * '<S48>'  : 'TEST_IPM_2_0/INT/Motor Control/Clark Transformation'
 * '<S49>'  : 'TEST_IPM_2_0/INT/Motor Control/Current_PI'
 * '<S50>'  : 'TEST_IPM_2_0/INT/Motor Control/Error'
 * '<S51>'  : 'TEST_IPM_2_0/INT/Motor Control/FbLMode'
 * '<S52>'  : 'TEST_IPM_2_0/INT/Motor Control/IF'
 * '<S53>'  : 'TEST_IPM_2_0/INT/Motor Control/Park Transformation'
 * '<S54>'  : 'TEST_IPM_2_0/INT/Motor Control/SVPWM'
 * '<S55>'  : 'TEST_IPM_2_0/INT/Motor Control/SpeedMode'
 * '<S56>'  : 'TEST_IPM_2_0/INT/Motor Control/Stop '
 * '<S57>'  : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode'
 * '<S58>'  : 'TEST_IPM_2_0/INT/Motor Control/VF'
 * '<S59>'  : 'TEST_IPM_2_0/INT/Motor Control/Current_PI/MATLAB Function'
 * '<S60>'  : 'TEST_IPM_2_0/INT/Motor Control/Current_PI/MATLAB Function1'
 * '<S61>'  : 'TEST_IPM_2_0/INT/Motor Control/Current_PI/MATLAB Function2'
 * '<S62>'  : 'TEST_IPM_2_0/INT/Motor Control/Current_PI/deadzone compesation'
 * '<S63>'  : 'TEST_IPM_2_0/INT/Motor Control/Current_PI/deadzone compesation/Clark Transformation'
 * '<S64>'  : 'TEST_IPM_2_0/INT/Motor Control/Current_PI/deadzone compesation/MATLAB Function3'
 * '<S65>'  : 'TEST_IPM_2_0/INT/Motor Control/Current_PI/deadzone compesation/MATLAB Function5'
 * '<S66>'  : 'TEST_IPM_2_0/INT/Motor Control/Current_PI/deadzone compesation/MATLAB Function6'
 * '<S67>'  : 'TEST_IPM_2_0/INT/Motor Control/Current_PI/deadzone compesation/Park Transformation'
 * '<S68>'  : 'TEST_IPM_2_0/INT/Motor Control/FbLMode/MATLAB Function'
 * '<S69>'  : 'TEST_IPM_2_0/INT/Motor Control/FbLMode/MATLAB Function1'
 * '<S70>'  : 'TEST_IPM_2_0/INT/Motor Control/FbLMode/MATLAB Function2'
 * '<S71>'  : 'TEST_IPM_2_0/INT/Motor Control/FbLMode/Subsystem'
 * '<S72>'  : 'TEST_IPM_2_0/INT/Motor Control/FbLMode/Subsystem1'
 * '<S73>'  : 'TEST_IPM_2_0/INT/Motor Control/FbLMode/Subsystem/PID_z1 '
 * '<S74>'  : 'TEST_IPM_2_0/INT/Motor Control/FbLMode/Subsystem/PID_z3'
 * '<S75>'  : 'TEST_IPM_2_0/INT/Motor Control/FbLMode/Subsystem/Subsystem'
 * '<S76>'  : 'TEST_IPM_2_0/INT/Motor Control/FbLMode/Subsystem/PID_z1 /Subsystem'
 * '<S77>'  : 'TEST_IPM_2_0/INT/Motor Control/FbLMode/Subsystem/PID_z3/Subsystem'
 * '<S78>'  : 'TEST_IPM_2_0/INT/Motor Control/FbLMode/Subsystem/Subsystem/Subsystem'
 * '<S79>'  : 'TEST_IPM_2_0/INT/Motor Control/IF/Subsystem1'
 * '<S80>'  : 'TEST_IPM_2_0/INT/Motor Control/IF/Subsystem2'
 * '<S81>'  : 'TEST_IPM_2_0/INT/Motor Control/IF/Subsystem1/MATLAB Function'
 * '<S82>'  : 'TEST_IPM_2_0/INT/Motor Control/IF/Subsystem2/MATLAB Function'
 * '<S83>'  : 'TEST_IPM_2_0/INT/Motor Control/SVPWM/Inverse Park Transformation'
 * '<S84>'  : 'TEST_IPM_2_0/INT/Motor Control/SVPWM/MATLAB Function'
 * '<S85>'  : 'TEST_IPM_2_0/INT/Motor Control/SVPWM/MATLAB Function1'
 * '<S86>'  : 'TEST_IPM_2_0/INT/Motor Control/SpeedMode/Function-Call Subsystem'
 * '<S87>'  : 'TEST_IPM_2_0/INT/Motor Control/SpeedMode/MATLAB Function'
 * '<S88>'  : 'TEST_IPM_2_0/INT/Motor Control/SpeedMode/Function-Call Subsystem/PID_n '
 * '<S89>'  : 'TEST_IPM_2_0/INT/Motor Control/SpeedMode/Function-Call Subsystem/PID_n /MATLAB Function'
 * '<S90>'  : 'TEST_IPM_2_0/INT/Motor Control/SpeedMode/Function-Call Subsystem/PID_n /Subsystem'
 * '<S91>'  : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Current_PI1'
 * '<S92>'  : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/PID_n '
 * '<S93>'  : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Subsystem'
 * '<S94>'  : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Current_PI1/MATLAB Function5'
 * '<S95>'  : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Current_PI1/MATLAB Function6'
 * '<S96>'  : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Current_PI1/MATLAB Function7'
 * '<S97>'  : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Current_PI1/PID_Id '
 * '<S98>'  : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Current_PI1/PID_Iq'
 * '<S99>'  : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Current_PI1/PID_Id /MATLAB Function1'
 * '<S100>' : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Current_PI1/PID_Id /Subsystem'
 * '<S101>' : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Current_PI1/PID_Iq/MATLAB Function'
 * '<S102>' : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Current_PI1/PID_Iq/MATLAB Function1'
 * '<S103>' : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Current_PI1/PID_Iq/Subsystem'
 * '<S104>' : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/PID_n /MATLAB Function'
 * '<S105>' : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/PID_n /Subsystem'
 * '<S106>' : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Subsystem/Subsystem'
 * '<S107>' : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Subsystem/Subsystem1'
 * '<S108>' : 'TEST_IPM_2_0/INT/Motor Control/TorqueMode/Subsystem/Subsystem2'
 * '<S109>' : 'TEST_IPM_2_0/INT/Motor Control/VF/Subsystem1'
 * '<S110>' : 'TEST_IPM_2_0/INT/Motor Control/VF/Subsystem2'
 * '<S111>' : 'TEST_IPM_2_0/INT/Motor Control/VF/Subsystem1/MATLAB Function'
 * '<S112>' : 'TEST_IPM_2_0/INT/Motor Control/VF/Subsystem2/MATLAB Function'
 * '<S113>' : 'TEST_IPM_2_0/INT/Read Rotor Position/MATLAB Function'
 * '<S114>' : 'TEST_IPM_2_0/INT/Read Rotor Position/RAW_DATA2Angle '
 * '<S115>' : 'TEST_IPM_2_0/INT/Read Rotor Position/SpeedCal'
 * '<S116>' : 'TEST_IPM_2_0/INT/Read Rotor Position/SpeedCal/First Order Filter '
 * '<S117>' : 'TEST_IPM_2_0/INT/Read Rotor Position/SpeedCal/MATLAB Function1'
 * '<S118>' : 'TEST_IPM_2_0/INT/ePWM/If Action Subsystem'
 * '<S119>' : 'TEST_IPM_2_0/SpeedREF/Subsystem1'
 * '<S120>' : 'TEST_IPM_2_0/SpeedREF/Subsystem1/MATLAB Function'
 * '<S121>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter'
 * '<S122>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter1'
 * '<S123>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter2'
 * '<S124>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter4'
 * '<S125>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter5'
 * '<S126>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter6'
 * '<S127>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter7'
 * '<S128>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter8'
 * '<S129>' : 'TEST_IPM_2_0/Temperature&DCBUS/MATLAB Function1'
 * '<S130>' : 'TEST_IPM_2_0/Temperature&DCBUS/MATLAB Function2'
 * '<S131>' : 'TEST_IPM_2_0/Temperature&DCBUS/MATLAB Function3'
 * '<S132>' : 'TEST_IPM_2_0/Temperature&DCBUS/MATLAB Function4'
 * '<S133>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter/Model'
 * '<S134>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter1/Model'
 * '<S135>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter2/Model'
 * '<S136>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter4/Model'
 * '<S137>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter5/Model'
 * '<S138>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter6/Model'
 * '<S139>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter7/Model'
 * '<S140>' : 'TEST_IPM_2_0/Temperature&DCBUS/First-Order Filter8/Model'
 * '<S141>' : 'TEST_IPM_2_0/UdcREF/Subsystem1'
 * '<S142>' : 'TEST_IPM_2_0/UdcREF/Subsystem1/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_TEST_IPM_2_0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
