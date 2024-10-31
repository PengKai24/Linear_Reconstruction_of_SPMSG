/*
 * File: TEST_IPM_2_0.c
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
#include "TEST_IPM_2_0_private.h"
#define TEST_IPM_2_0_IN_AD2S1210       (1U)
#define TEST_IPM_2_0_IN_ADC_Sample     (2U)
#define TEST_IPM_2_0_IN_BufferStore    (3U)
#define TEST_IPM_2_0_IN_DA_5742        (4U)
#define TEST_IPM_2_0_IN_Empty          (1U)
#define TEST_IPM_2_0_IN_Empty_o        (5U)
#define TEST_IPM_2_0_IN_Extra_Observer (6U)
#define TEST_IPM_2_0_IN_INIT_ConfigMode (2U)
#define TEST_IPM_2_0_IN_INIT_FINISH    (3U)
#define TEST_IPM_2_0_IN_Init           (7U)
#define TEST_IPM_2_0_IN_MOTORCONTROL   (8U)
#define TEST_IPM_2_0_IN_NO_ACTIVE_CHILD (0U)
#define TEST_IPM_2_0_IN_RESET_STEP1    (10U)
#define TEST_IPM_2_0_IN_RESET_STEP2    (11U)
#define TEST_IPM_2_0_IN_WRITE_FRQ_STEP1 (12U)
#define TEST_IPM_2_0_IN_WRITE_FRQ_STEP2 (13U)
#define TEST_IPM_2_0_IN_WRITE_FRQ_STEP4 (14U)
#define TEST_IPM_2_0_IN_WRITE_FRQ_STEP5 (15U)
#define TEST_IPM_2_0_IN_WRITE_RES_STEP1 (16U)
#define TEST_IPM_2_0_IN_WRITE_RES_STEP2 (17U)
#define TEST_IPM_2_0_IN_WRITE_RES_STEP3 (18U)
#define TEST_IPM_2_0_IN_WRITE_RES_STEP4 (19U)
#define TEST_IPM_2_0_IN_ePWM           (11U)
#define TEST_IPM_2_0_IN_end            (12U)
#define TEST_IPM_2_IN_System_InitADBias (10U)
#define TEST_IPM_2__IN_READ_FAULT_STEP1 (4U)
#define TEST_IPM_2__IN_READ_FAULT_STEP2 (5U)
#define TEST_IPM_2__IN_READ_FAULT_STEP3 (6U)
#define TEST_IPM_2__IN_READ_FAULT_STEP4 (7U)
#define TEST_IPM_2__IN_READ_FAULT_STEP5 (8U)
#define TEST_IPM_2__IN_READ_FAULT_STEP6 (9U)
#define TEST_IPM_IN_System_InitAD2S1210 (9U)
#define TEST_IPM_2_0_IN_Connected      (1U)
#define TEST_IPM_2_0_IN_Disconnected   (2U)
#define TEST_IPM_2_0_S_STATUS_QUALIFIER (0U)
#define TEST_IPM_2_IN_NO_ACTIVE_CHILD_h (0U)
#define TEST_IPM_2_PERMANENT_DISCONNECT (1U)
#define TEST_IPM_2_TEMPORARY_DISCONNECT (0U)
#define TEST_IPM__MTA_ADDRESS_EXTENSION (0U)
#define TEST_I_RESOURCE_PROTECTION_MASK (0U)
#define TEST_I_SLAVE_ID_LENGTH_NOT_USED (0U)
#define TEST_RESOURCE_AVAILABILITY_MASK (66U)
#define TES_IN_Temporarily_Disconnected (3U)
#define TES_SLAVE_ID_DATA_TYPE_NOT_USED (0U)

/* Exported block states */
real32_T MRAS_Rs;                      /* '<Root>/Data Store Memory' */
real32_T Tem_Dem;                      /* '<Root>/Data Store Memory100' */
real32_T Tem_Step;                     /* '<Root>/Data Store Memory101' */
real32_T DEKF_Rs;                      /* '<Root>/Data Store Memory102' */
real32_T DEKF_Ldd;                     /* '<Root>/Data Store Memory103' */
real32_T DEKF_Ldq;                     /* '<Root>/Data Store Memory104' */
real32_T DEKF_Lqq;                     /* '<Root>/Data Store Memory105' */
real32_T DEKF_IdhOb;                   /* '<Root>/Data Store Memory106' */
real32_T DEKF_IqhOb;                   /* '<Root>/Data Store Memory107' */
real32_T HFI_Imd;                      /* '<Root>/Data Store Memory109' */
real32_T HFI_Umd;                      /* '<Root>/Data Store Memory110' */
real32_T HFI_Umq;                      /* '<Root>/Data Store Memory111' */
real32_T HFI_FRQ;                      /* '<Root>/Data Store Memory112' */
real32_T HFI_Imq;                      /* '<Root>/Data Store Memory113' */
real32_T DEKF_R;                       /* '<Root>/Data Store Memory114' */
real32_T DEKF_Qx;                      /* '<Root>/Data Store Memory115' */
real32_T DEKF_QpRs;                    /* '<Root>/Data Store Memory116' */
real32_T DEKF_QpLdd;                   /* '<Root>/Data Store Memory117' */
real32_T DEKF_QpLdq;                   /* '<Root>/Data Store Memory118' */
real32_T DEKF_QpLqq;                   /* '<Root>/Data Store Memory119' */
real32_T DEKF_Phiq0;                   /* '<Root>/Data Store Memory123' */
real32_T Phi_dOb;                      /* '<Root>/Data Store Memory124' */
real32_T Phi_Rs;                       /* '<Root>/Data Store Memory125' */
real32_T Phi_qOb;                      /* '<Root>/Data Store Memory126' */
real32_T DEKF_Gamma;                   /* '<Root>/Data Store Memory127' */
real32_T DEKF_Udelay;                  /* '<Root>/Data Store Memory128' */
real32_T INITV_RS;                     /* '<Root>/Data Store Memory129' */
real32_T INITV_NDD;                    /* '<Root>/Data Store Memory130' */
real32_T INITV_NDQ;                    /* '<Root>/Data Store Memory131' */
real32_T INITV_NQQ;                    /* '<Root>/Data Store Memory132' */
real32_T Id_Filter;                    /* '<Root>/Data Store Memory133' */
real32_T Iq_Filter;                    /* '<Root>/Data Store Memory134' */
real32_T Tr_Phidm;                     /* '<Root>/Data Store Memory135' */
real32_T Tr_Lqap;                      /* '<Root>/Data Store Memory136' */
real32_T Tr_Lqinc;                     /* '<Root>/Data Store Memory137' */
real32_T Tr_Ldap;                      /* '<Root>/Data Store Memory138' */
real32_T Tr_Ldinc;                     /* '<Root>/Data Store Memory139' */
real32_T V_OFFSET;                     /* '<Root>/Data Store Memory14' */
real32_T Tr_Ldqinc;                    /* '<Root>/Data Store Memory140' */
real32_T Tr_Tem;                       /* '<Root>/Data Store Memory141' */
real32_T Tr_Ttotal;                    /* '<Root>/Data Store Memory142' */
real32_T MRAS_Ld;                      /* '<Root>/Data Store Memory143' */
real32_T MRAS_Lq;                      /* '<Root>/Data Store Memory144' */
real32_T MRAS_KR;                      /* '<Root>/Data Store Memory145' */
real32_T MRAS_KLd;                     /* '<Root>/Data Store Memory146' */
real32_T MRAS_KLq;                     /* '<Root>/Data Store Memory147' */
real32_T MRAS_Idh;                     /* '<Root>/Data Store Memory148' */
real32_T MRAS_Iqh;                     /* '<Root>/Data Store Memory149' */
real32_T PI_Multi;                     /* '<Root>/Data Store Memory150' */
real32_T THERMAL_Ud;                   /* '<Root>/Data Store Memory151' */
real32_T THERMAL_Uq;                   /* '<Root>/Data Store Memory152' */
real32_T THERMAL_IdRef;                /* '<Root>/Data Store Memory153' */
real32_T THERMAL_IqRef;                /* '<Root>/Data Store Memory154' */
real32_T THERMAL_IdFbk;                /* '<Root>/Data Store Memory155' */
real32_T THERMAL_IqFbk;                /* '<Root>/Data Store Memory156' */
real32_T THERMAL_N;                    /* '<Root>/Data Store Memory157' */
real32_T THERMAL_Pele;                 /* '<Root>/Data Store Memory158' */
real32_T Udc_Filter;                   /* '<Root>/Data Store Memory159' */
real32_T W_OFFSET;                     /* '<Root>/Data Store Memory16' */
real32_T Udc_REF;                      /* '<Root>/Data Store Memory160' */
real32_T Udc_FBK;                      /* '<Root>/Data Store Memory161' */
real32_T Udc_Kp;                       /* '<Root>/Data Store Memory162' */
real32_T Udc_Ki;                       /* '<Root>/Data Store Memory163' */
real32_T Udc_Integral;                 /* '<Root>/Data Store Memory164' */
real32_T Udc_Dem;                      /* '<Root>/Data Store Memory165' */
real32_T Udc_Step;                     /* '<Root>/Data Store Memory166' */
real32_T FbL_Ld;                       /* '<Root>/Data Store Memory167' */
real32_T FbL_Lq;                       /* '<Root>/Data Store Memory168' */
real32_T FbL_Phif;                     /* '<Root>/Data Store Memory169' */
real32_T FbL_Rs;                       /* '<Root>/Data Store Memory170' */
real32_T FbL_Cdc;                      /* '<Root>/Data Store Memory171' */
real32_T FbL_z1;                       /* '<Root>/Data Store Memory172' */
real32_T FbL_z2;                       /* '<Root>/Data Store Memory173' */
real32_T FbL_z3;                       /* '<Root>/Data Store Memory174' */
real32_T FbL_ud;                       /* '<Root>/Data Store Memory175' */
real32_T FbL_uq;                       /* '<Root>/Data Store Memory176' */
real32_T FbL_Rdc;                      /* '<Root>/Data Store Memory177' */
real32_T Ud_in;                        /* '<Root>/Data Store Memory178' */
real32_T Uq_in;                        /* '<Root>/Data Store Memory179' */
real32_T FbL_k0;                       /* '<Root>/Data Store Memory180' */
real32_T FbL_k1;                       /* '<Root>/Data Store Memory181' */
real32_T FbL_k2;                       /* '<Root>/Data Store Memory182' */
real32_T FbL_k4;                       /* '<Root>/Data Store Memory183' */
real32_T FbL_k5;                       /* '<Root>/Data Store Memory184' */
real32_T FbL_k3;                       /* '<Root>/Data Store Memory185' */
real32_T FbL_z1ref;                    /* '<Root>/Data Store Memory186' */
real32_T FbL_v1;                       /* '<Root>/Data Store Memory187' */
real32_T FbL_v2;                       /* '<Root>/Data Store Memory188' */
real32_T FbL_z1_Integral;              /* '<Root>/Data Store Memory189' */
real32_T FbL_z3_Integral;              /* '<Root>/Data Store Memory190' */
real32_T FbL_Udc_Integral;             /* '<Root>/Data Store Memory191' */
real32_T FbL_iqMuti;                   /* '<Root>/Data Store Memory192' */
real32_T FbL_Phif6Amp;                 /* '<Root>/Data Store Memory193' */
real32_T FbL_Phif6Pha;                 /* '<Root>/Data Store Memory194' */
real32_T FbL_Phif6wave;                /* '<Root>/Data Store Memory195' */
real32_T smc_c;                        /* '<Root>/Data Store Memory196' */
real32_T smc_r;                        /* '<Root>/Data Store Memory197' */
real32_T smc_b1;                       /* '<Root>/Data Store Memory198' */
real32_T smc_b2;                       /* '<Root>/Data Store Memory199' */
real32_T V_Current;                    /* '<Root>/Data Store Memory20' */
real32_T smc_uqset;                    /* '<Root>/Data Store Memory200' */
real32_T smc_x1_integral;              /* '<Root>/Data Store Memory201' */
real32_T smc_e1_integral;              /* '<Root>/Data Store Memory202' */
real32_T smc_z1_integral;              /* '<Root>/Data Store Memory203' */
real32_T smc_en;                       /* '<Root>/Data Store Memory204' */
real32_T smc_f;                        /* '<Root>/Data Store Memory205' */
real32_T FbL_smc_integral;             /* '<Root>/Data Store Memory206' */
real32_T FbL_smc_r1;                   /* '<Root>/Data Store Memory207' */
real32_T FbL_smc_r2;                   /* '<Root>/Data Store Memory208' */
real32_T W_Current;                    /* '<Root>/Data Store Memory21' */
real32_T U_Current;                    /* '<Root>/Data Store Memory22' */
real32_T Id_FBK;                       /* '<Root>/Data Store Memory23' */
real32_T Iq_FBK;                       /* '<Root>/Data Store Memory24' */
real32_T Id_REF;                       /* '<Root>/Data Store Memory25' */
real32_T Iq_REF;                       /* '<Root>/Data Store Memory26' */
real32_T Id_Kp;                        /* '<Root>/Data Store Memory27' */
real32_T Iq_Kp;                        /* '<Root>/Data Store Memory28' */
real32_T Id_Ki;                        /* '<Root>/Data Store Memory29' */
real32_T Iq_Ki;                        /* '<Root>/Data Store Memory30' */
real32_T ResloverAng;                  /* '<Root>/Data Store Memory31' */
real32_T N_FBK;                        /* '<Root>/Data Store Memory32' */
real32_T N_REF;                        /* '<Root>/Data Store Memory34' */
real32_T N_Filter;                     /* '<Root>/Data Store Memory35' */
real32_T N_Kp;                         /* '<Root>/Data Store Memory36' */
real32_T N_Ki;                         /* '<Root>/Data Store Memory38' */
real32_T ControlAng;                   /* '<Root>/Data Store Memory41' */
real32_T N_Integral;                   /* '<Root>/Data Store Memory42' */
real32_T Id_Integral;                  /* '<Root>/Data Store Memory43' */
real32_T Iq_Integral;                  /* '<Root>/Data Store Memory44' */
real32_T TempA;                        /* '<Root>/Data Store Memory46' */
real32_T TempB;                        /* '<Root>/Data Store Memory47' */
real32_T TempC;                        /* '<Root>/Data Store Memory48' */
real32_T UDC;                          /* '<Root>/Data Store Memory49' */
real32_T UDCPROTECT;                   /* '<Root>/Data Store Memory50' */
real32_T VF_Ud;                        /* '<Root>/Data Store Memory51' */
real32_T VF_Uq;                        /* '<Root>/Data Store Memory52' */
real32_T VF_F;                         /* '<Root>/Data Store Memory53' */
real32_T VF_F_Step;                    /* '<Root>/Data Store Memory54' */
real32_T IF_F;                         /* '<Root>/Data Store Memory55' */
real32_T IF_F_Step;                    /* '<Root>/Data Store Memory56' */
real32_T UDOUT;                        /* '<Root>/Data Store Memory57' */
real32_T UQOUT;                        /* '<Root>/Data Store Memory58' */
real32_T USOUT;                        /* '<Root>/Data Store Memory59' */
real32_T U_OFFSET;                     /* '<Root>/Data Store Memory6' */
real32_T N_Dem;                        /* '<Root>/Data Store Memory63' */
real32_T N_Step;                       /* '<Root>/Data Store Memory64' */
real32_T ArrayId_FBK;                  /* '<Root>/Data Store Memory65' */
real32_T ArrayIq_FBK;                  /* '<Root>/Data Store Memory66' */
real32_T ArrayTheta;                   /* '<Root>/Data Store Memory67' */
real32_T BufferOutId_FBK;              /* '<Root>/Data Store Memory68' */
real32_T BufferOutIq_FBK;              /* '<Root>/Data Store Memory69' */
real32_T BufferOutTheta;               /* '<Root>/Data Store Memory70' */
real32_T UDOUT_Comp;                   /* '<Root>/Data Store Memory71' */
real32_T UQOUT_Comp;                   /* '<Root>/Data Store Memory72' */
real32_T USOUT_Comp;                   /* '<Root>/Data Store Memory73' */
real32_T K;                            /* '<Root>/Data Store Memory74' */
real32_T Udelta;                       /* '<Root>/Data Store Memory75' */
real32_T ArrayId_REF;                  /* '<Root>/Data Store Memory76' */
real32_T ArrayIq_REF;                  /* '<Root>/Data Store Memory77' */
real32_T BufferOutId_REF;              /* '<Root>/Data Store Memory78' */
real32_T BufferOutIq_REF;              /* '<Root>/Data Store Memory79' */
real32_T ArrayUdComP;                  /* '<Root>/Data Store Memory80' */
real32_T ArrayUqComP;                  /* '<Root>/Data Store Memory81' */
real32_T BufferOutUdComP;              /* '<Root>/Data Store Memory82' */
real32_T BufferOutUqComP;              /* '<Root>/Data Store Memory83' */
real32_T UdComP_Filter;                /* '<Root>/Data Store Memory85' */
real32_T UqComP_Filter;                /* '<Root>/Data Store Memory86' */
real32_T UsComP_Filter;                /* '<Root>/Data Store Memory87' */
real32_T N_400Hz;                      /* '<Root>/Data Store Memory88' */
real32_T DEKF_Idh;                     /* '<Root>/Data Store Memory90' */
real32_T DEKF_Id0;                     /* '<Root>/Data Store Memory91' */
real32_T DEKF_Iqh;                     /* '<Root>/Data Store Memory92' */
real32_T DEKF_Iq0;                     /* '<Root>/Data Store Memory93' */
real32_T DEKF_Udh;                     /* '<Root>/Data Store Memory94' */
real32_T DEKF_Ud0;                     /* '<Root>/Data Store Memory95' */
real32_T DEKF_Uqh;                     /* '<Root>/Data Store Memory96' */
real32_T DEKF_Uq0;                     /* '<Root>/Data Store Memory97' */
real32_T DEKF_Phid0;                   /* '<Root>/Data Store Memory98' */
real32_T N_NOFILTER;                   /* '<Root>/Data Store Memory99' */
uint16_T STOP;                         /* '<Root>/Data Store Memory1' */
uint16_T ResloverA0;                   /* '<Root>/Data Store Memory10' */
uint16_T DEKF_FLAG;                    /* '<Root>/Data Store Memory108' */
uint16_T ResloverA1;                   /* '<Root>/Data Store Memory11' */
uint16_T ResloverSAMPLE;               /* '<Root>/Data Store Memory12' */
uint16_T DEKF_Clear;                   /* '<Root>/Data Store Memory120' */
uint16_T IGBT_Fault;                   /* '<Root>/Data Store Memory121' */
uint16_T REVERSE_FLAG;                 /* '<Root>/Data Store Memory122' */
uint16_T ResloverRESET;                /* '<Root>/Data Store Memory13' */
uint16_T ResloverFRQ;                  /* '<Root>/Data Store Memory15' */
uint16_T InitMode;                     /* '<Root>/Data Store Memory17' */
uint16_T ResloverRES;                  /* '<Root>/Data Store Memory19' */
uint16_T ChartFlag;                    /* '<Root>/Data Store Memory2' */
uint16_T U_AD;                         /* '<Root>/Data Store Memory3' */
uint16_T ResloverMid;                  /* '<Root>/Data Store Memory33' */
uint16_T ResloverFaultRead;            /* '<Root>/Data Store Memory37' */
uint16_T PROTECT;                      /* '<Root>/Data Store Memory39' */
uint16_T V_AD;                         /* '<Root>/Data Store Memory4' */
uint16_T ControlMode;                  /* '<Root>/Data Store Memory40' */
uint16_T FLAG_MTPA;                    /* '<Root>/Data Store Memory45' */
uint16_T W_AD;                         /* '<Root>/Data Store Memory5' */
uint16_T COMPARE_A;                    /* '<Root>/Data Store Memory60' */
uint16_T COMPARE_B;                    /* '<Root>/Data Store Memory61' */
uint16_T COMPARE_C;                    /* '<Root>/Data Store Memory62' */
uint16_T SPIC_Tx;                      /* '<Root>/Data Store Memory7' */
uint16_T SPIC_Rx;                      /* '<Root>/Data Store Memory8' */
uint16_T BufferFlag;                   /* '<Root>/Data Store Memory84' */
uint16_T FLAG_5742;                    /* '<Root>/Data Store Memory89' */
uint16_T ResloverWR;                   /* '<Root>/Data Store Memory9' */

/* Exported data definition */

/* ifdef logic applying pragma in appropriate C file */
/* Definition for custom storage class: CpuToCla1MsgRAM */
#ifdef PRAGMA_FLAG_CLA_Data

#pragma DATA_SECTION (CLA_Data, "CpuToCla1MsgRAM")

#else
#define PRAGMA_FLAG_CLA_Data
#endif

real32_T CLA_Data = 0.0F;              /* '<Root>/Data Store Memory18' */

/* Block signals (default storage) */
B_TEST_IPM_2_0_T TEST_IPM_2_0_B;

/* Block states (default storage) */
DW_TEST_IPM_2_0_T TEST_IPM_2_0_DW;

/* Real-time model */
RT_MODEL_TEST_IPM_2_0_T TEST_IPM_2_0_M_;
RT_MODEL_TEST_IPM_2_0_T *const TEST_IPM_2_0_M = &TEST_IPM_2_0_M_;

/* Forward declaration for local functions */
#pragma CODE_SECTION (TEST_IPM_2_0_SystemCore_release, "ramfuncs")

static void TEST_IPM_2_0_SystemCore_release(const
  codertarget_tic2000_blocks_SP_T *obj);

#pragma CODE_SECTION (TEST_IPM_2_0_SystemCore_delete, "ramfuncs")

static void TEST_IPM_2_0_SystemCore_delete(const codertarget_tic2000_blocks_SP_T
  *obj);

#pragma CODE_SECTION (matlabCodegenHandle_matlabCodeg, "ramfuncs")

static void matlabCodegenHandle_matlabCodeg(codertarget_tic2000_blocks_SP_T *obj);

/* Forward declaration for local functions */
#pragma CODE_SECTION (TEST_IPM_2_SystemCore_release_m, "ramfuncs")

static void TEST_IPM_2_SystemCore_release_m(const
  codertarget_tic2000_blocks_SP_T *obj);

#pragma CODE_SECTION (TEST_IPM_2__SystemCore_delete_a, "ramfuncs")

static void TEST_IPM_2__SystemCore_delete_a(const
  codertarget_tic2000_blocks_SP_T *obj);

#pragma CODE_SECTION (matlabCodegenHandle_matlabCod_g, "ramfuncs")

static void matlabCodegenHandle_matlabCod_g(codertarget_tic2000_blocks_SP_T *obj);

/* Forward declaration for local functions */
#pragma CODE_SECTION (TEST_IPM_2_0_mod, "ramfuncs")

static real32_T TEST_IPM_2_0_mod(real32_T x);

#pragma CODE_SECTION (TEST_IPM_2_SystemCore_release_a, "ramfuncs")

static void TEST_IPM_2_SystemCore_release_a(const
  codertarget_tic2000_blocks_SP_T *obj);

#pragma CODE_SECTION (TEST_IPM_2__SystemCore_delete_g, "ramfuncs")

static void TEST_IPM_2__SystemCore_delete_g(const
  codertarget_tic2000_blocks_SP_T *obj);

#pragma CODE_SECTION (matlabCodegenHandle_matlabCod_d, "ramfuncs")

static void matlabCodegenHandle_matlabCod_d(codertarget_tic2000_blocks_SP_T *obj);

/* Forward declaration for local functions */
#pragma CODE_SECTION (TEST_IPM_2_0_init, "ramfuncs")

static void TEST_IPM_2_0_init(void);

#pragma CODE_SECTION (TEST_IPM_2_0_get_mta0, "ramfuncs")

static void TEST_IPM_2_0_get_mta0(uint16_T first_byte);

#pragma CODE_SECTION (TEST_IPM_2_0_tx_dto, "ramfuncs")

static void TEST_IPM_2_0_tx_dto(uint16_T tx_comm_type);

#pragma CODE_SECTION (TEST_IPM_2_0_unhandled_command, "ramfuncs")

static void TEST_IPM_2_0_unhandled_command(void);

#pragma CODE_SECTION (TEST_IPM_2_0_write_daq, "ramfuncs")

static void TEST_IPM_2_0_write_daq(void);

#pragma CODE_SECTION (TEST_IPM_2_0_set_mta, "ramfuncs")

static void TEST_IPM_2_0_set_mta(void);
static void rate_scheduler(void);
uint16_T MW_adcBInitFlag = 0;
uint16_T MW_adcAInitFlag = 0;

/* S-Function Block: <S9>/Function Definition */
void exported_ccp_daq_trigger(uint8_T * msg_pointer)
{
  /* Output and update for function-call system: '<S9>/Send DAQ Message' */

  /* S-Function (sfun_get_expr): '<S11>/Input Driver' */
  {
    int_T i1;
    uint8_T *y0 = &TEST_IPM_2_0_B.InputDriver[0];
    for (i1=0; i1 < 8; i1++) {
      y0[i1] = (msg_pointer[i1]);
    }
  }

  /* S-Function (c280xcanxmt): '<S11>/eCAN Transmit' */
  {
    tCANMsgObject sTXCANMessage;
    unsigned char ucTXMsgData[8];
    ucTXMsgData[0] = (TEST_IPM_2_0_B.InputDriver[0]);
    ucTXMsgData[1] = (TEST_IPM_2_0_B.InputDriver[1]);
    ucTXMsgData[2] = (TEST_IPM_2_0_B.InputDriver[2]);
    ucTXMsgData[3] = (TEST_IPM_2_0_B.InputDriver[3]);
    ucTXMsgData[4] = (TEST_IPM_2_0_B.InputDriver[4]);
    ucTXMsgData[5] = (TEST_IPM_2_0_B.InputDriver[5]);
    ucTXMsgData[6] = (TEST_IPM_2_0_B.InputDriver[6]);
    ucTXMsgData[7] = (TEST_IPM_2_0_B.InputDriver[7]);
    sTXCANMessage.ui32MsgIDMask = 0;   // no mask needed for TX
    sTXCANMessage.ui32MsgLen = 8;      // size of message
    sTXCANMessage.ui32MsgID = 1787;    // CAN message ID - use 1
    sTXCANMessage.pucMsgData = ucTXMsgData;// ptr to message content
    sTXCANMessage.ui32Flags = MSG_OBJ_NO_FLAGS;
    while ((HWREG(CANA_BASE + CAN_O_TXRQ_21) & (2)) != 0) {
    }                                  /* check eCAN Transmit Request pending*/

    CANMessageSet(CANA_BASE, 2, &sTXCANMessage, MSG_OBJ_TYPE_TX);
  }
}

/* Hardware Interrupt Block: '<Root>/C28x Hardware Interrupt' */
void isr_int1pie2_task_fcn(void)
{
  /* Call the system: <Root>/INT */
  {
    /* S-Function (c28xisr_c2000): '<Root>/C28x Hardware Interrupt' */

    /* Output and update for function-call system: '<Root>/INT' */
    {
      /* local block i/o variables */
      uint16_T rtb_Add1_p;
      uint16_T rtb_Add2_n;
      uint16_T rtb_Add3_n;
      uint16_T rtb_Add1_mk;
      int16_T superStepCount;
      boolean_T isStable;
      uint16_T status;
      MW_SPI_Mode_type ClockModeValue;
      MW_SPI_FirstBitTransfer_Type MsbFirstTransferLoc;
      int16_T VecSector;
      real32_T rtb_Add8;
      real32_T rtb_Add7;
      real32_T rtb_Gain3_o;
      real32_T rtb_Sum3_l;
      real32_T rtb_Sin;
      real32_T rtb_Sin1;
      real32_T rtb_Gain3_h;
      real32_T rtb_Add4;
      real32_T rtb_Add2_k;
      real32_T rtb_Product_i;
      real32_T rtb_Gain_l;
      real32_T rtb_Gain2_p;
      real32_T rtb_Divide_idx_0;
      real32_T rtb_Divide_idx_1;
      real32_T g2_idx_2;

      /* DataStoreWrite: '<S3>/Data Store Write' incorporates:
       *  Constant: '<S3>/Constant'
       */
      ChartFlag = 0U;

      /* DataStoreWrite: '<S3>/Data Store Write1' incorporates:
       *  Constant: '<S3>/Constant'
       */
      FLAG_5742 = 0U;

      /* Chart: '<S3>/Chart' */
      superStepCount = 0;
      do {
        isStable = true;
        if (TEST_IPM_2_0_DW.is_active_c3_TEST_IPM_2_0 == 0U) {
          TEST_IPM_2_0_DW.is_active_c3_TEST_IPM_2_0 = 1U;
          isStable = false;
          TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 = TEST_IPM_2_0_IN_Empty_o;
        } else {
          switch (TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0) {
           case TEST_IPM_2_0_IN_AD2S1210:
            isStable = false;
            TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 = TEST_IPM_2_0_IN_MOTORCONTROL;
            TEST_IPM_2_0_MATLABFunction3(U_Current, K, Udelta, &rtb_Sin);
            TEST_IPM_2_0_MATLABFunction3(V_Current, K, Udelta, &rtb_Gain3_h);
            TEST_IPM_2_0_MATLABFunction3(W_Current, K, Udelta, &rtb_Sin1);
            rtb_Sin = ((rtb_Sin - 0.5F * rtb_Gain3_h) - 0.5F * rtb_Sin1) *
              0.666666687F;
            rtb_Add2_k = (real32_T)cos(ControlAng);
            rtb_Sin1 = (rtb_Gain3_h - rtb_Sin1) * 0.577350259F;
            rtb_Add4 = (real32_T)sin(ControlAng);
            TEST_IPM_2_0_MATLABFunction(UDCPROTECT, Ud_in + (rtb_Sin *
              rtb_Add2_k + rtb_Sin1 * rtb_Add4), &UDOUT);
            TEST_IPM_2_0_MATLABFunction(UDCPROTECT, Uq_in + (rtb_Sin1 *
              rtb_Add2_k - rtb_Sin * rtb_Add4), &rtb_Sin);
            USOUT = (real32_T)sqrt(UDOUT * UDOUT + rtb_Sin * rtb_Sin);
            if (USOUT > UDCPROTECT / 1.73205078F) {
              UDOUT *= UDOUT / USOUT;
              rtb_Sin *= rtb_Sin / USOUT;
            }

            if (ControlMode == 1U) {
              UDOUT = VF_Ud;
              UQOUT = VF_Uq;
            } else {
              UQOUT = rtb_Sin;
            }

            if (STOP != 0U) {
              UDOUT = 0.0F;
              UQOUT = 0.0F;
              USOUT = 0.0F;
            }

            rtb_Sin = 0.577350259F * Udc_FBK;
            if (rtb_Sin > 370.0F) {
              rtb_Sin = 370.0F;
            } else {
              if (rtb_Sin < 10.0F) {
                rtb_Sin = 10.0F;
              }
            }

            rtb_Divide_idx_0 = UDOUT / rtb_Sin;
            rtb_Divide_idx_1 = UQOUT / rtb_Sin;
            rtb_Gain3_h = 6.28318521E-5F * N_FBK + ControlAng;
            if ((rtb_Gain3_h > 6.28318548F) && ((ControlMode == 3U) ||
                 (ControlMode == 6U))) {
              rtb_Gain3_h -= 6.28318548F;
            }

            rtb_Sin = (real32_T)cos(rtb_Gain3_h);
            rtb_Gain2_p = rtb_Divide_idx_0 * rtb_Sin;
            rtb_Sin1 = (real32_T)sin(rtb_Gain3_h);
            rtb_Gain3_h = rtb_Divide_idx_1 * rtb_Sin1;
            rtb_Sin *= rtb_Divide_idx_1;
            rtb_Sin1 *= rtb_Divide_idx_0;
            rtb_Divide_idx_0 = rtb_Sin + rtb_Sin1;
            rtb_Gain2_p = (rtb_Gain2_p - rtb_Gain3_h) * 0.86603F + 0.5F *
              rtb_Divide_idx_0;
            rtb_Gain3_h = rtb_Gain2_p - rtb_Divide_idx_0;
            VecSector = 3;
            if (rtb_Gain2_p > 0.0F) {
              VecSector = 2;
            }

            if (rtb_Gain3_h > 0.0F) {
              VecSector--;
            }

            if (rtb_Divide_idx_0 < 0.0F) {
              VecSector = 7 - VecSector;
            }

            switch (VecSector) {
             case 1:
              rtb_Divide_idx_1 = rtb_Gain2_p;
              rtb_Gain3_h = rtb_Divide_idx_0 - rtb_Gain3_h;
              rtb_Divide_idx_0 = -rtb_Gain2_p;
              break;

             case 2:
              rtb_Divide_idx_1 = rtb_Gain3_h + rtb_Gain2_p;
              rtb_Gain3_h = rtb_Divide_idx_0;
              rtb_Divide_idx_0 = -rtb_Divide_idx_0;
              break;

             case 3:
              rtb_Divide_idx_1 = rtb_Gain3_h;
              rtb_Gain3_h = -rtb_Gain3_h;
              rtb_Divide_idx_0 = -(rtb_Divide_idx_0 + rtb_Gain2_p);
              break;

             case 4:
              rtb_Divide_idx_1 = rtb_Gain2_p;
              rtb_Gain3_h = rtb_Divide_idx_0 - rtb_Gain3_h;
              rtb_Divide_idx_0 = -rtb_Gain2_p;
              break;

             case 5:
              rtb_Divide_idx_1 = rtb_Gain3_h + rtb_Gain2_p;
              rtb_Gain3_h = rtb_Divide_idx_0;
              rtb_Divide_idx_0 = -rtb_Divide_idx_0;
              break;

             default:
              rtb_Divide_idx_1 = rtb_Gain3_h;
              rtb_Gain3_h = -rtb_Gain3_h;
              rtb_Divide_idx_0 = -(rtb_Divide_idx_0 + rtb_Gain2_p);
              break;
            }

            COMPARE_A = (uint16_T)(5000.0F - 5000.0F * rtb_Divide_idx_1);
            COMPARE_B = (uint16_T)(5000.0F - 5000.0F * rtb_Gain3_h);
            COMPARE_C = (uint16_T)(5000.0F - 5000.0F * rtb_Divide_idx_0);
            rtb_Gain3_h = (V_Current - W_Current) * 0.577350259F;
            rtb_Sin1 = rtb_Add2_k;
            rtb_Gain2_p = ((U_Current - 0.5F * V_Current) - 0.5F * W_Current) *
              0.666666687F;
            rtb_Sin = rtb_Add4;
            Iq_FBK = rtb_Gain3_h * rtb_Add2_k - rtb_Gain2_p * rtb_Add4;
            Id_FBK = rtb_Gain2_p * rtb_Add2_k + rtb_Gain3_h * rtb_Add4;
            switch ((int32_T)ControlMode) {
             case 0L:
              break;

             case 1L:
              TEST_IPM_2_0_MATLABFunction_o(VF_F, VF_F_Step,
                TEST_IPM_2_0_DW.UnitDelay_DSTATE_o,
                &TEST_IPM_2_0_DW.UnitDelay_DSTATE_o);
              TEST_IPM_2_0_MATLABFunction_n(TEST_IPM_2_0_DW.UnitDelay_DSTATE_o,
                TEST_IPM_2_0_DW.UnitDelay_DSTATE_l,
                &TEST_IPM_2_0_DW.UnitDelay_DSTATE_l);
              ControlAng = TEST_IPM_2_0_DW.UnitDelay_DSTATE_l;
              break;

             case 2L:
              TEST_IPM_2_0_MATLABFunction_o(IF_F, IF_F_Step,
                TEST_IPM_2_0_DW.UnitDelay_DSTATE_hz,
                &TEST_IPM_2_0_DW.UnitDelay_DSTATE_hz);
              TEST_IPM_2_0_MATLABFunction_n(TEST_IPM_2_0_DW.UnitDelay_DSTATE_hz,
                TEST_IPM_2_0_DW.UnitDelay_DSTATE_n,
                &TEST_IPM_2_0_DW.UnitDelay_DSTATE_n);
              ControlAng = TEST_IPM_2_0_DW.UnitDelay_DSTATE_n;
              break;

             case 3L:
              rtb_Add2_k = Udc_REF * Udc_REF;
              rtb_Add4 = Udc_FBK * Udc_FBK;
              if (STOP != 0U) {
                rtb_Divide_idx_0 = 0.0F;
                rtb_Divide_idx_1 = 0.0F;
              } else {
                rtb_Divide_idx_0 = rtb_Add2_k;
                rtb_Divide_idx_1 = rtb_Add4;
              }

              rtb_Gain2_p = rtb_Divide_idx_0 - rtb_Divide_idx_1;
              rtb_Divide_idx_1 = rtb_Gain2_p * Udc_Kp;
              rtb_Gain2_p = 0.0001F * Udc_Ki * rtb_Gain2_p + Udc_Integral;
              TEST_IPM_2_0_MATLABFunction_g(48.0F, rtb_Divide_idx_1 +
                rtb_Gain2_p, &rtb_Divide_idx_0);
              rtb_Add2_k -= rtb_Add4;
              smc_x1_integral += 0.0001F * smc_c * rtb_Add2_k;
              rtb_Gain3_h = smc_x1_integral + rtb_Add2_k;
              rtb_Divide_idx_1 = smc_r * rtb_Gain3_h;
              if (rtb_Gain3_h < 0.0F) {
                rtb_Sin = -1.0F;
              } else if (rtb_Gain3_h > 0.0F) {
                rtb_Sin = 1.0F;
              } else if (rtb_Gain3_h == 0.0F) {
                rtb_Sin = 0.0F;
              } else {
                rtb_Sin = (rtNaNF);
              }

              rtb_Gain3_h = smc_uqset / FbL_Cdc;
              rtb_Add2_k = (smc_f / rtb_Gain3_h - rtb_Divide_idx_1) - rtb_Add2_k
                * smc_c / rtb_Gain3_h * rtb_Sin;
              if (smc_en != 0.0F) {
                Iq_REF = rtb_Add2_k;
              } else {
                Iq_REF = -rtb_Divide_idx_0;
              }

              Id_REF = 0.0F;
              TEST_IPM_2_0_DW.HFI_COUNT += 0.000628318521F * HFI_FRQ;
              if (TEST_IPM_2_0_DW.HFI_COUNT >= 6.28318548F) {
                TEST_IPM_2_0_DW.HFI_COUNT -= 6.28318548F;
              }

              rtb_Add7 = HFI_Imd * (real32_T)sin(TEST_IPM_2_0_DW.HFI_COUNT) +
                Id_REF;
              if (STOP != 0U) {
                rtb_Divide_idx_0 = 0.0F;
                rtb_Divide_idx_1 = 0.0F;
              } else {
                rtb_Divide_idx_0 = rtb_Add7;
                rtb_Divide_idx_1 = Id_FBK;
              }

              THERMAL_IdRef = rtb_Divide_idx_0;
              THERMAL_IdFbk = rtb_Divide_idx_1;
              rtb_Add8 = HFI_Imq * (real32_T)cos(TEST_IPM_2_0_DW.HFI_COUNT) +
                Iq_REF;
              if (STOP != 0U) {
                rtb_Sin = 0.0F;
                rtb_Sin1 = 0.0F;
              } else {
                rtb_Sin = rtb_Add8;
                rtb_Sin1 = Iq_FBK;
              }

              THERMAL_IqRef = rtb_Sin;
              THERMAL_IqFbk = rtb_Sin1;
              rtb_Gain3_o = 0.00028F * rtb_Sin1;
              rtb_Gain_l = 0.418879032F * N_REF;
              rtb_Product_i = rtb_Gain3_o * rtb_Gain_l;
              rtb_Divide_idx_0 -= rtb_Divide_idx_1;
              rtb_Sum3_l = 0.0001F * Id_Ki * rtb_Divide_idx_0 + Id_Integral;
              TEST_IPM_2_0_MATLABFunction(UDCPROTECT, rtb_Sum3_l, &rtb_Gain3_o);
              Id_Integral = rtb_Gain3_o;
              Ud_in = (rtb_Divide_idx_0 * Id_Kp + rtb_Sum3_l) + -rtb_Product_i;
              rtb_Gain3_o = rtb_Sin - rtb_Sin1;
              rtb_Sin = 0.0001F * Iq_Ki * rtb_Gain3_o + Iq_Integral;
              TEST_IPM_2_0_MATLABFunction(UDCPROTECT, rtb_Gain3_o * Iq_Kp +
                rtb_Sin, &rtb_Divide_idx_0);
              TEST_IPM_2_0_MATLABFunction(UDCPROTECT, rtb_Sin, &rtb_Gain3_o);
              Iq_Integral = rtb_Gain3_o;
              Uq_in = (8.0E-5F * rtb_Divide_idx_1 + 0.054F) * rtb_Gain_l +
                rtb_Divide_idx_0;
              TEST_IPM_2_0_MATLABFunction6(rtb_Add7, Id_FBK);
              TEST_IPM_2_0_MATLABFunction6(rtb_Add8, Iq_FBK);
              rtb_Add4 -= smc_z1_integral;
              smc_f = 0.0001F * smc_b2 * rtb_Add4 + smc_e1_integral;
              smc_z1_integral += ((rtb_Add2_k * rtb_Gain3_h + smc_f) + rtb_Add4 *
                                  smc_b1) * TEST_IPM_2_0_ConstB.Gain_f;
              smc_e1_integral = smc_f;
              Udc_Integral = rtb_Gain2_p;
              ControlAng = ResloverAng;
              break;

             case 4L:
              Id_Kp = 0.527787626F * PI_Multi;
              Id_Ki = 26.3893814F * PI_Multi;
              Iq_Kp = 0.527787626F * PI_Multi;
              Iq_Ki = 26.3893814F * PI_Multi;
              ControlAng = ResloverAng;
              status = TEST_IPM_2_0_DW.count_f + /*MW:OvSatOk*/ 1U;
              if (status < TEST_IPM_2_0_DW.count_f) {
                status = MAX_uint16_T;
              }

              TEST_IPM_2_0_DW.count_f = status;
              if (TEST_IPM_2_0_DW.count_f == 10U) {
                TEST_IPM_2_0_DW.count_f = 0U;
                if (STOP != 0U) {
                  rtb_Divide_idx_0 = 0.0F;
                  rtb_Divide_idx_1 = 0.0F;
                } else {
                  rtb_Divide_idx_0 = N_REF;
                  rtb_Divide_idx_1 = N_FBK;
                }

                rtb_Divide_idx_0 -= rtb_Divide_idx_1;
                rtb_Divide_idx_1 = rtb_Divide_idx_0 * N_Kp;
                rtb_Divide_idx_0 = 0.001F * N_Ki * rtb_Divide_idx_0 + N_Integral;
                TEST_IPM_2_0_MATLABFunction_g(432.0F, rtb_Divide_idx_1 +
                  rtb_Divide_idx_0, &Iq_REF);
                N_Integral = rtb_Divide_idx_0;
                Id_REF = 0.0F;
              }
              break;

             case 5L:
              STOP = 1U;
              PROTECT = 0U;
              break;

             case 6L:
              if (STOP != 0U) {
                rtb_Sin = 0.0F;
                rtb_Sin1 = 0.0F;
                rtb_Divide_idx_0 = 0.0F;
              } else {
                rtb_Sin = Udc_REF;
                rtb_Sin1 = Udc_FBK;
                rtb_Divide_idx_0 = FbL_z3;
              }

              rtb_Divide_idx_1 = N_FBK * 2.0F * 3.14159274F / 60.0F * 4.0F *
                FbL_Phif;
              rtb_Divide_idx_1 = ((real32_T)sqrt(fabsf(rtb_Divide_idx_1 *
                rtb_Divide_idx_1 - 0.666666687F * Udc_REF * Udc_REF / FbL_Rdc *
                (4.0F * FbL_Rs))) + -rtb_Divide_idx_1) / 2.0F / FbL_Rs;
              FbL_Udc_Integral += 0.0001F * FbL_k3 * (rtb_Sin - rtb_Sin1);
              FbL_z1ref = (3.0F * FbL_Lq * rtb_Divide_idx_1 * rtb_Divide_idx_1 /
                           2.0F * FbL_iqMuti + FbL_Cdc * Udc_REF * Udc_REF) +
                FbL_Udc_Integral;
              if (STOP != 0U) {
                rtb_Sin = 0.0F;
                rtb_Sin1 = 0.0F;
              } else {
                rtb_Sin = FbL_z1;
                rtb_Sin1 = FbL_z1ref;
              }

              rtb_Add4 = rtb_Sin - rtb_Sin1;
              rtb_Gain2_p = TEST_IPM_2_0_ConstB.Gain * rtb_Add4 +
                FbL_smc_integral;
              FbL_smc_integral = rtb_Gain2_p;
              rtb_Gain2_p = (600.0F * rtb_Add4 + rtb_Gain2_p) + FbL_z2;
              if (rtb_Gain2_p < 0.0F) {
                rtb_Divide_idx_1 = -1.0F;
              } else if (rtb_Gain2_p > 0.0F) {
                rtb_Divide_idx_1 = 1.0F;
              } else if (rtb_Gain2_p == 0.0F) {
                rtb_Divide_idx_1 = 0.0F;
              } else {
                rtb_Divide_idx_1 = (rtNaNF);
              }

              rtb_Add2_k = -0.0001F * FbL_k0 * 0.0001F * rtb_Add4 +
                FbL_z1_Integral;
              FbL_z1_Integral = rtb_Add2_k;
              FbL_v1 = ((-0.0001F * FbL_k1 * rtb_Add4 + rtb_Add2_k) +
                        (rtb_Divide_idx_1 * FbL_smc_r2 + rtb_Gain2_p *
                         FbL_smc_r1)) + -0.0001F * FbL_k2 * FbL_z2;
              rtb_Gain2_p = Udc_FBK * Udc_FBK;
              rtb_Add4 = fabsf(N_FBK) * 2.0F * 3.14159274F / 60.0F;
              TEST_IPM_2_0_DW.t += (rtb_Add4 * 4.0F + 0.01F) * 6.0F * 0.0001F;
              if (TEST_IPM_2_0_DW.t >= 6.2831853071795862) {
                TEST_IPM_2_0_DW.t = 0.0F;
              }

              rtb_Gain3_h = (real32_T)sin(FbL_Phif6Pha / 180.0F * 3.14159274F +
                TEST_IPM_2_0_DW.t) * (FbL_Phif * FbL_Phif6Amp) + FbL_Phif;
              rtb_Add2_k = -0.0001F * FbL_k4 * 0.0001F * rtb_Divide_idx_0 +
                FbL_z3_Integral;
              FbL_z3_Integral = rtb_Add2_k;
              FbL_v2 = -0.0001F * FbL_k5 * rtb_Divide_idx_0 + rtb_Add2_k;
              rtb_Divide_idx_1 = rtb_Add4 * 4.0F;
              rtb_Sin1 = rtb_Add4 * 4.0F + 0.01F;
              rtb_Divide_idx_0 = (-FbL_Rs / FbL_Lq * Iq_FBK - (rtb_Divide_idx_1
                + 0.01F) * FbL_Ld / FbL_Lq * Id_FBK) - (rtb_Divide_idx_1 + 0.01F)
                * rtb_Gain3_h / FbL_Lq;
              rtb_Add2_k = (rtb_Divide_idx_1 + 0.01F) * FbL_Lq / FbL_Ld * Iq_FBK
                + -FbL_Rs / FbL_Ld * Id_FBK;
              rtb_Add4 = -2.0F / FbL_Cdc / FbL_Rdc * rtb_Gain2_p;
              rtb_Add8 = 1.0F / FbL_Lq;
              rtb_Gain3_o = -3.0F / FbL_Cdc * Iq_FBK;
              rtb_Add7 = 1.0F / FbL_Ld;
              g2_idx_2 = -3.0F / FbL_Cdc * Id_FBK;
              rtb_Sin = 3.0F * rtb_Sin1 * (FbL_Ld - FbL_Lq);
              rtb_Gain_l = (-6.0F * FbL_Rs * Iq_FBK - rtb_Sin * Id_FBK) - 3.0F *
                rtb_Sin1 * rtb_Gain3_h;
              rtb_Product_i = -6.0F * FbL_Rs * Id_FBK - rtb_Sin * Iq_FBK;
              rtb_Sum3_l = -2.0F / FbL_Rdc;
              rtb_Sin = ((rtb_Add8 * rtb_Gain_l + 0.0F * rtb_Product_i) +
                         rtb_Gain3_o * rtb_Sum3_l) * 0.0001F;
              rtb_Sin1 = ((0.0F * rtb_Gain_l + rtb_Add7 * rtb_Product_i) +
                          g2_idx_2 * rtb_Sum3_l) * 0.0001F;
              rtb_Add7 = (g2_idx_2 * 0.0F + rtb_Add7) * 0.0001F;
              rtb_Add8 = (rtb_Add8 * 0.0F + rtb_Gain3_o * 0.0F) * 0.0001F /
                rtb_Sin;
              rtb_Gain3_o = 1.0F / (rtb_Add7 - rtb_Add8 * rtb_Sin1);
              rtb_Gain_l = ((rtb_Divide_idx_0 * rtb_Gain_l + rtb_Add2_k *
                             rtb_Product_i) + rtb_Add4 * rtb_Sum3_l) * -0.0001F
                + FbL_v1;
              rtb_Divide_idx_0 = ((rtb_Divide_idx_0 * 0.0F + rtb_Add2_k) +
                                  rtb_Add4 * 0.0F) * -0.0001F + FbL_v2;
              FbL_z1 = (1.5F * FbL_Lq * Iq_FBK * Iq_FBK * FbL_iqMuti + 1.5F *
                        FbL_Ld * Id_FBK * Id_FBK) + FbL_Cdc * rtb_Gain2_p;
              FbL_z2 = (((Iq_FBK * Iq_FBK + Id_FBK * Id_FBK) * (-3.0F * FbL_Rs)
                         - (rtb_Divide_idx_1 + 0.01F) * 3.0F * (FbL_Ld - FbL_Lq)
                         * Iq_FBK * Id_FBK) - (rtb_Divide_idx_1 + 0.01F) * 3.0F *
                        rtb_Gain3_h * Iq_FBK) - 2.0F / FbL_Rdc * rtb_Gain2_p;
              FbL_z3 = Id_FBK;
              FbL_uq = rtb_Add7 / rtb_Sin * rtb_Gain3_o * rtb_Gain_l + -rtb_Sin1
                / rtb_Sin * rtb_Gain3_o * rtb_Divide_idx_0;
              Ud_in = -rtb_Add8 * rtb_Gain3_o * rtb_Gain_l + rtb_Gain3_o *
                rtb_Divide_idx_0;
              Uq_in = FbL_uq;
              FbL_ud = Ud_in;
              ControlAng = ResloverAng;
              break;

             default:
              STOP = 1U;
              PROTECT = 0U;
              break;
            }
            break;

           case TEST_IPM_2_0_IN_ADC_Sample:
            switch (InitMode) {
             case 0U:
              isStable = false;
              TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 = TEST_IPM_2_0_IN_AD2S1210;
              SPIC_Tx = 0U;
              ResloverSAMPLE = 1U;
              TEST_IPM_2_0_SPIMasterTransfer(SPIC_Tx,
                &TEST_IPM_2_0_B.SPIMasterTransfer_p,
                &TEST_IPM_2_0_DW.SPIMasterTransfer_p);
              rtb_Divide_idx_0 = (real32_T)((int32_T)
                TEST_IPM_2_0_B.SPIMasterTransfer_p.SPIMasterTransfer -
                ResloverMid);
              if (rtb_Divide_idx_0 < 0.0F) {
                rtb_Divide_idx_0 += 65535.0F;
              }

              rtb_Divide_idx_0 = rtb_Divide_idx_0 * 4.0F * 1.5259E-5F;
              rtb_Divide_idx_0 = TEST_IPM_2_0_mod(rtb_Divide_idx_0);
              ResloverAng = 6.28318548F * rtb_Divide_idx_0;
              status = TEST_IPM_2_0_DW.Tick + /*MW:OvSatOk*/ 1U;
              if (status < TEST_IPM_2_0_DW.Tick) {
                status = MAX_uint16_T;
              }

              TEST_IPM_2_0_DW.Tick = status;
              if (TEST_IPM_2_0_DW.Tick == 10U) {
                TEST_IPM_2_0_DW.Tick = 0U;
                rtb_Divide_idx_0 = ResloverAng -
                  TEST_IPM_2_0_DW.UnitDelay_DSTATE_m;
                if (rtb_Divide_idx_0 > 3.1415926535897931) {
                  rtb_Divide_idx_0 -= 6.28318548F;
                } else {
                  if (rtb_Divide_idx_0 < -3.1415926535897931) {
                    rtb_Divide_idx_0 += 6.28318548F;
                  }
                }

                TEST_IPM_2_0_B.Add3 = rtb_Divide_idx_0 / 0.001F * 9.54929638F *
                  0.25F * (0.00628318544F * N_Filter) +
                  TEST_IPM_2_0_DW.UnitDelay3_DSTATE;
                TEST_IPM_2_0_DW.UnitDelay3_DSTATE = (1.0F - 0.00628318544F *
                  N_Filter) * TEST_IPM_2_0_B.Add3;
                TEST_IPM_2_0_DW.UnitDelay_DSTATE_m = ResloverAng;
              }

              SPIC_Rx = TEST_IPM_2_0_B.SPIMasterTransfer_p.SPIMasterTransfer;
              MW_SPI_SetSlaveSelect(TEST_IPM_2_0_DW.obj.MW_SPI_HANDLE, 0U, true);
              ClockModeValue = MW_SPI_MODE_0;
              MsbFirstTransferLoc = MW_SPI_MOST_SIGNIFICANT_BIT_FIRST;
              status = MW_SPI_SetFormat(TEST_IPM_2_0_DW.obj.MW_SPI_HANDLE, 8U,
                ClockModeValue, MsbFirstTransferLoc);
              if (status == 0U) {
                MW_SPI_MasterWriteRead_8bits(TEST_IPM_2_0_DW.obj.MW_SPI_HANDLE,
                  &SPIC_Tx, &ResloverFaultRead, 1UL);
              }

              {
                if (1U)
                  GpioDataRegs.GPBSET.bit.GPIO53 = 1;
                else
                  GpioDataRegs.GPBCLEAR.bit.GPIO53 = 1;
              }

              {
                if (1U)
                  GpioDataRegs.GPBSET.bit.GPIO54 = 1;
                else
                  GpioDataRegs.GPBCLEAR.bit.GPIO54 = 1;
              }

              THERMAL_N = TEST_IPM_2_0_B.Add3;
              N_FBK = TEST_IPM_2_0_B.Add3;
              break;

             case 1U:
              isStable = false;
              TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 =
                TEST_IPM_IN_System_InitAD2S1210;
              STOP = 1U;
              if (TEST_IPM_2_0_DW.is_active_c1_TEST_IPM_2_0 == 0U) {
                TEST_IPM_2_0_DW.is_active_c1_TEST_IPM_2_0 = 1U;
                TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 = TEST_IPM_2_0_IN_Empty;
                TEST_IPM_2_0_DW.Wait_Count = 0.0;
              } else {
                switch (TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0) {
                 case TEST_IPM_2_0_IN_Empty:
                  if (InitMode == 1U) {
                    TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                      TEST_IPM_2_0_IN_RESET_STEP1;
                    TEST_IPM_2_0_DW.Wait_Count++;
                    ResloverRESET = 0U;
                    TEST_IPM__FunctionCallSubsystem();
                  }
                  break;

                 case TEST_IPM_2_0_IN_INIT_ConfigMode:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2_0_IN_WRITE_FRQ_STEP1;
                  ResloverWR = 1U;
                  TEST_IPM_FunctionCallSubsystem1();
                  break;

                 case TEST_IPM_2_0_IN_INIT_FINISH:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2_0_IN_RESET_STEP2;
                  ResloverRESET = 1U;
                  TEST_IPM__FunctionCallSubsystem();
                  break;

                 case TEST_IPM_2__IN_READ_FAULT_STEP1:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2__IN_READ_FAULT_STEP2;
                  ResloverWR = 0U;
                  SPIC_Tx = MAX_uint16_T;
                  TEST_IPM_FunctionCallSubsystem2();
                  break;

                 case TEST_IPM_2__IN_READ_FAULT_STEP2:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2__IN_READ_FAULT_STEP4;
                  ResloverWR = 1U;
                  TEST_IPM_FunctionCallSubsystem1();
                  break;

                 case TEST_IPM_2__IN_READ_FAULT_STEP3:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2__IN_READ_FAULT_STEP5;
                  ResloverWR = 1U;
                  TEST_IPM_FunctionCallSubsystem1();
                  break;

                 case TEST_IPM_2__IN_READ_FAULT_STEP4:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2__IN_READ_FAULT_STEP3;
                  ResloverWR = 0U;
                  SPIC_Tx = MAX_uint16_T;
                  TEST_IPM_FunctionCallSubsystem2();
                  break;

                 case TEST_IPM_2__IN_READ_FAULT_STEP5:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2__IN_READ_FAULT_STEP6;
                  ResloverWR = 0U;
                  SPIC_Tx = MAX_uint16_T;
                  TEST_IPM_FunctionCallSubsystem2();
                  break;

                 case TEST_IPM_2__IN_READ_FAULT_STEP6:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2_0_IN_INIT_FINISH;
                  ResloverWR = 0U;
                  ResloverA0 = 0U;
                  ResloverA1 = 0U;
                  InitMode = 2U;
                  TEST_IPM_2_0_B.DataStoreRead2 = ResloverA0;

                  {
                    if (TEST_IPM_2_0_B.DataStoreRead2)
                      GpioDataRegs.GPBSET.bit.GPIO58 = 1;
                    else
                      GpioDataRegs.GPBCLEAR.bit.GPIO58 = 1;
                  }

                  TEST_IPM_2_0_B.DataStoreRead2 = ResloverA1;

                  {
                    if (TEST_IPM_2_0_B.DataStoreRead2)
                      GpioDataRegs.GPBSET.bit.GPIO59 = 1;
                    else
                      GpioDataRegs.GPBCLEAR.bit.GPIO59 = 1;
                  }

                  TEST_IPM_2_0_B.DataStoreRead2 = ResloverWR;

                  {
                    if (TEST_IPM_2_0_B.DataStoreRead2)
                      GpioDataRegs.GPBSET.bit.GPIO53 = 1;
                    else
                      GpioDataRegs.GPBCLEAR.bit.GPIO53 = 1;
                  }
                  break;

                 case TEST_IPM_2_0_IN_RESET_STEP1:
                  if (TEST_IPM_2_0_DW.Wait_Count > 1000.0) {
                    TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                      TEST_IPM_2_0_IN_RESET_STEP2;
                    ResloverRESET = 1U;
                    TEST_IPM__FunctionCallSubsystem();
                  } else {
                    TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                      TEST_IPM_2_0_IN_RESET_STEP1;
                    TEST_IPM_2_0_DW.Wait_Count++;
                    ResloverRESET = 0U;
                    TEST_IPM__FunctionCallSubsystem();
                  }
                  break;

                 case TEST_IPM_2_0_IN_RESET_STEP2:
                  if (InitMode == 1U) {
                    TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                      TEST_IPM_2_0_IN_INIT_ConfigMode;
                    ResloverA0 = 1U;
                    ResloverA1 = 1U;
                    TEST_IPM_2_0_B.DataStoreRead1 = ResloverA0;

                    {
                      if (TEST_IPM_2_0_B.DataStoreRead1)
                        GpioDataRegs.GPBSET.bit.GPIO58 = 1;
                      else
                        GpioDataRegs.GPBCLEAR.bit.GPIO58 = 1;
                    }

                    TEST_IPM_2_0_B.DataStoreRead1 = ResloverA1;

                    {
                      if (TEST_IPM_2_0_B.DataStoreRead1)
                        GpioDataRegs.GPBSET.bit.GPIO59 = 1;
                      else
                        GpioDataRegs.GPBCLEAR.bit.GPIO59 = 1;
                    }
                  }
                  break;

                 case TEST_IPM_2_0_IN_WRITE_FRQ_STEP1:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2_0_IN_WRITE_FRQ_STEP2;
                  ResloverWR = 0U;
                  SPIC_Tx = 37265U;
                  TEST_IPM_FunctionCallSubsystem2();
                  break;

                 case TEST_IPM_2_0_IN_WRITE_FRQ_STEP2:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2_0_IN_WRITE_FRQ_STEP4;
                  ResloverWR = 1U;
                  TEST_IPM_FunctionCallSubsystem1();
                  break;

                 case TEST_IPM_2_0_IN_WRITE_FRQ_STEP4:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2_0_IN_WRITE_FRQ_STEP5;
                  ResloverWR = 0U;
                  if (ResloverFRQ > 255U) {
                    status = MAX_uint16_T;
                  } else {
                    status = ResloverFRQ << 8U;
                  }

                  SPIC_Tx = status + /*MW:OvSatOk*/ ResloverFRQ;
                  if (SPIC_Tx < status) {
                    SPIC_Tx = MAX_uint16_T;
                  }

                  TEST_IPM_FunctionCallSubsystem2();
                  break;

                 case TEST_IPM_2_0_IN_WRITE_FRQ_STEP5:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2_0_IN_WRITE_RES_STEP1;
                  ResloverWR = 1U;
                  TEST_IPM_FunctionCallSubsystem1();
                  break;

                 case TEST_IPM_2_0_IN_WRITE_RES_STEP1:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2_0_IN_WRITE_RES_STEP2;
                  ResloverWR = 0U;
                  SPIC_Tx = 37522U;
                  TEST_IPM_FunctionCallSubsystem2();
                  break;

                 case TEST_IPM_2_0_IN_WRITE_RES_STEP2:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2_0_IN_WRITE_RES_STEP3;
                  ResloverWR = 1U;
                  TEST_IPM_FunctionCallSubsystem1();
                  break;

                 case TEST_IPM_2_0_IN_WRITE_RES_STEP3:
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2_0_IN_WRITE_RES_STEP4;
                  ResloverWR = 0U;
                  if (ResloverRES > 255U) {
                    status = MAX_uint16_T;
                  } else {
                    status = ResloverRES << 8U;
                  }

                  SPIC_Tx = status + /*MW:OvSatOk*/ ResloverRES;
                  if (SPIC_Tx < status) {
                    SPIC_Tx = MAX_uint16_T;
                  }

                  TEST_IPM_FunctionCallSubsystem2();
                  break;

                 default:
                  /* case IN_WRITE_RES_STEP4: */
                  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 =
                    TEST_IPM_2__IN_READ_FAULT_STEP1;
                  ResloverWR = 1U;
                  TEST_IPM_FunctionCallSubsystem1();
                  break;
                }
              }
              break;

             case 2U:
              isStable = false;
              TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 =
                TEST_IPM_2_IN_System_InitADBias;
              STOP = 1U;
              V_OFFSET = 0.000628322363F * (real32_T)V_AD +
                TEST_IPM_2_0_DW.UnitDelay1_DSTATE;
              TEST_IPM_2_0_DW.UnitDelay1_DSTATE = 0.999371707F * V_OFFSET;
              W_OFFSET = 0.000628322363F * (real32_T)W_AD +
                TEST_IPM_2_0_DW.UnitDelay2_DSTATE;
              TEST_IPM_2_0_DW.UnitDelay2_DSTATE = 0.999371707F * W_OFFSET;
              U_OFFSET = 0.000628322363F * (real32_T)U_AD +
                TEST_IPM_2_0_DW.UnitDelay6_DSTATE;
              TEST_IPM_2_0_DW.UnitDelay6_DSTATE = 0.999371707F * U_OFFSET;
              status = TEST_IPM_2_0_DW.Tick_b + /*MW:OvSatOk*/ 1U;
              if (status < TEST_IPM_2_0_DW.Tick_b) {
                status = MAX_uint16_T;
              }

              TEST_IPM_2_0_DW.Tick_b = status;
              if (TEST_IPM_2_0_DW.Tick_b <= 50000U) {
                InitMode = 2U;
              } else {
                InitMode = 0U;
                TEST_IPM_2_0_DW.Tick_b = 0U;
              }
              break;
            }
            break;

           case TEST_IPM_2_0_IN_BufferStore:
            isStable = false;
            TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 = TEST_IPM_2_0_IN_DA_5742;
            status = TEST_IPM_2_0_DW.count + /*MW:OvSatOk*/ 1U;
            if (status < TEST_IPM_2_0_DW.count) {
              status = MAX_uint16_T;
            }

            TEST_IPM_2_0_DW.count = status;
            switch (TEST_IPM_2_0_DW.count) {
             case 1U:
              rtb_Divide_idx_0 = fabsf(Id_FBK + 30.0F) * 8.19F;
              if (rtb_Divide_idx_0 > 4095.0F) {
                rtb_Add1_mk = 4095U;
              } else {
                rtb_Add1_mk = (uint16_T)rtb_Divide_idx_0;
              }

              TEST_IPM_2_0_SPITransmit2(rtb_Add1_mk,
                &TEST_IPM_2_0_DW.SPITransmit2);
              break;

             case 2U:
              rtb_Divide_idx_0 = 68.25F * fabsf(Iq_FBK);
              if (rtb_Divide_idx_0 > 4095.0F) {
                rtb_Divide_idx_0 = 4095.0F;
              }

              rtb_Add3_n = (uint16_T)rtb_Divide_idx_0 + 4096U;
              TEST_IPM_2_0_SPITransmit2(rtb_Add3_n,
                &TEST_IPM_2_0_DW.SPITransmit3);
              break;

             case 3U:
              rtb_Divide_idx_0 = 2.0475F * N_FBK;
              if (rtb_Divide_idx_0 > 4095.0F) {
                rtb_Divide_idx_0 = 4095.0F;
              } else {
                if (rtb_Divide_idx_0 < 0.0F) {
                  rtb_Divide_idx_0 = 0.0F;
                }
              }

              rtb_Add2_n = (uint16_T)rtb_Divide_idx_0 + 8192U;
              TEST_IPM_2_0_SPITransmit2(rtb_Add2_n,
                &TEST_IPM_2_0_DW.SPITransmit3_p);
              break;

             default:
              TEST_IPM_2_0_DW.count = 0U;
              rtb_Divide_idx_0 = 51.1875F * Udc_FBK;
              if (rtb_Divide_idx_0 > 4095.0F) {
                rtb_Divide_idx_0 = 4095.0F;
              } else {
                if (rtb_Divide_idx_0 < 0.0F) {
                  rtb_Divide_idx_0 = 0.0F;
                }
              }

              rtb_Add1_p = (uint16_T)rtb_Divide_idx_0 + 12288U;
              TEST_IPM_2_0_SPITransmit2(rtb_Add1_p,
                &TEST_IPM_2_0_DW.SPITransmit1);
              break;
            }
            break;

           case TEST_IPM_2_0_IN_DA_5742:
            isStable = false;
            TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 = TEST_IPM_2_0_IN_end;

            {
              if (1U)
                GpioDataRegs.GPDSET.bit.GPIO113 = 1;
              else
                GpioDataRegs.GPDCLEAR.bit.GPIO113 = 1;
            }

            ChartFlag = 1U;
            break;

           case TEST_IPM_2_0_IN_Empty_o:
            if (ChartFlag == 0U) {
              isStable = false;
              TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 = TEST_IPM_2_0_IN_Init;

              {
                TEST_IPM_2_0_B.DigitalInput[0] = GpioDataRegs.GPBDAT.bit.GPIO40;
                TEST_IPM_2_0_B.DigitalInput[1] = GpioDataRegs.GPBDAT.bit.GPIO41;
                TEST_IPM_2_0_B.DigitalInput[2] = GpioDataRegs.GPBDAT.bit.GPIO44;
                TEST_IPM_2_0_B.DigitalInput[3] = GpioDataRegs.GPBDAT.bit.GPIO45;
                TEST_IPM_2_0_B.DigitalInput[4] = GpioDataRegs.GPBDAT.bit.GPIO46;
                TEST_IPM_2_0_B.DigitalInput[5] = GpioDataRegs.GPBDAT.bit.GPIO47;
              }

              IGBT_Fault = (((((TEST_IPM_2_0_B.DigitalInput[1] << 1U) +
                               TEST_IPM_2_0_B.DigitalInput[0]) +
                              (TEST_IPM_2_0_B.DigitalInput[2] << 2U)) +
                             (TEST_IPM_2_0_B.DigitalInput[3] << 3U)) +
                            (TEST_IPM_2_0_B.DigitalInput[4] << 4U)) +
                (TEST_IPM_2_0_B.DigitalInput[5] << 5U);
              if (IGBT_Fault != 63U) {
                STOP = 1U;
                PROTECT |= 32U;
              }

              {
                if (0U)
                  GpioDataRegs.GPDSET.bit.GPIO113 = 1;
                else
                  GpioDataRegs.GPDCLEAR.bit.GPIO113 = 1;
              }
            }
            break;

           case TEST_IPM_2_0_IN_Extra_Observer:
            isStable = false;
            TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 = TEST_IPM_2_0_IN_ePWM;
            TEST_IPM_2_0_ePWM();
            break;

           case TEST_IPM_2_0_IN_Init:
            isStable = false;
            TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 = TEST_IPM_2_0_IN_ADC_Sample;

            {
              if (0U)
                GpioDataRegs.GPBSET.bit.GPIO54 = 1;
              else
                GpioDataRegs.GPBCLEAR.bit.GPIO54 = 1;
            }

            {
              /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
              /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
              TEST_IPM_2_0_B.ADC_Wind1_U = (AdcbResultRegs.ADCRESULT0);
            }

            U_AD = TEST_IPM_2_0_B.ADC_Wind1_U;

            {
              /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
              /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
              TEST_IPM_2_0_B.ADC_Wind1_V = (AdcbResultRegs.ADCRESULT1);
            }

            V_AD = TEST_IPM_2_0_B.ADC_Wind1_V;

            {
              if (0U)
                GpioDataRegs.GPBSET.bit.GPIO53 = 1;
              else
                GpioDataRegs.GPBCLEAR.bit.GPIO53 = 1;
            }

            {
              /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
              /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
              TEST_IPM_2_0_B.ADC_Wind1_W = (AdcbResultRegs.ADCRESULT2);
            }

            W_AD = TEST_IPM_2_0_B.ADC_Wind1_W;
            rtb_Divide_idx_0 = ((real32_T)TEST_IPM_2_0_B.ADC_Wind1_U - U_OFFSET)
              * 0.0266373623F;
            rtb_Add2_k = ((real32_T)TEST_IPM_2_0_B.ADC_Wind1_V - V_OFFSET) *
              0.0266373623F;
            rtb_Add4 = ((real32_T)TEST_IPM_2_0_B.ADC_Wind1_W - W_OFFSET) *
              0.0266373623F;
            U_Current = rtb_Divide_idx_0;
            V_Current = rtb_Add2_k;
            W_Current = rtb_Add4;
            if ((rtb_Divide_idx_0 > 30.0F) || (rtb_Divide_idx_0 < -30.0F) ||
                (rtb_Add2_k > 30.0F) || (rtb_Add2_k < -30.0F) || (rtb_Add4 >
                 30.0F) || (rtb_Add4 < -30.0F)) {
              STOP = 1U;
              PROTECT |= 1U;
            }

            if (PROTECT != 0U) {
              STOP = 1U;
            }

            {
              /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
              /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
              AdcaRegs.ADCSOCFRC1.bit.SOC6 = 1;

              /* Wait for the period of Sampling window and EOC result to be latched after trigger */
              asm(" RPT #75 || NOP");
              TEST_IPM_2_0_B.ADC_Udc = (AdcaResultRegs.ADCRESULT6);
            }

            UDC = ((real32_T)TEST_IPM_2_0_B.ADC_Udc - 8.0F) * 0.147220477F +
              2.7F;
            Udc_FBK = 0.000628318521F * Udc_Filter * UDC +
              TEST_IPM_2_0_DW.UnitDelay3_DSTATE_n;
            TEST_IPM_2_0_DW.UnitDelay3_DSTATE_n = (1.0F - 0.000628318521F *
              Udc_Filter) * Udc_FBK;
            ResloverSAMPLE = 0U;
            break;

           case TEST_IPM_2_0_IN_MOTORCONTROL:
            if (DEKF_FLAG == 0U) {
              isStable = false;
              TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 = TEST_IPM_2_0_IN_ePWM;
              TEST_IPM_2_0_ePWM();
            } else {
              isStable = false;
              TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 =
                TEST_IPM_2_0_IN_Extra_Observer;
            }
            break;

           case TEST_IPM_IN_System_InitAD2S1210:
            isStable = false;
            TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 = TEST_IPM_2_0_IN_ePWM;
            TEST_IPM_2_0_ePWM();
            break;

           case TEST_IPM_2_IN_System_InitADBias:
            isStable = false;
            TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 = TEST_IPM_2_0_IN_ePWM;
            TEST_IPM_2_0_ePWM();
            break;

           case TEST_IPM_2_0_IN_ePWM:
            isStable = false;
            TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 = TEST_IPM_2_0_IN_BufferStore;
            break;

           default:
            /* case IN_end: */
            isStable = false;
            TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 = TEST_IPM_2_0_IN_Empty_o;
            break;
          }
        }

        superStepCount++;
      } while ((!isStable) && ((uint16_T)superStepCount <= 1000U));
    }

    /* End of Outputs for S-Function (c28xisr_c2000): '<Root>/C28x Hardware Interrupt' */
  }
}

/* Idle Task Block: '<Root>/Idle Task' */
void idle_num1_task_fcn(void)
{
  /* Call the system: <Root>/BackgroundTask */
  TEST_IPM_2_0_ASYNC7(0);
}

/* Idle Task Block: '<Root>/Idle Task' */
void idle_num2_task_fcn(void)
{
  /* Call the system: <Root>/BackgroundTask */
  TEST_IPM_2_0_ASYNC7(1);
}

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
#pragma CODE_SECTION (rate_scheduler, "ramfuncs")

static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (TEST_IPM_2_0_M->Timing.TaskCounters.TID[1])++;
  if ((TEST_IPM_2_0_M->Timing.TaskCounters.TID[1]) > 19) {/* Sample time: [0.02s, 0.0s] */
    TEST_IPM_2_0_M->Timing.TaskCounters.TID[1] = 0;
  }
}

void TEST_IPM_2_0_ASYNC7(int controlPortIdx)
{
  /* S-Function (idletask): '<Root>/Idle Task' */
  TEST_IPM_2_0_BackgroundTask();

  /* End of Outputs for S-Function (idletask): '<Root>/Idle Task' */
}

/* Start for function-call system: '<S19>/Function-Call Subsystem' */
#pragma CODE_SECTION (TES_FunctionCallSubsystem_Start, "ramfuncs")

void TES_FunctionCallSubsystem_Start(void)
{
  /* Start for S-Function (c280xgpio_do): '<S32>/Digital Output' */
  EALLOW;
  GpioCtrlRegs.GPBMUX2.all &= 0xFFFF3FFF;
  GpioCtrlRegs.GPBDIR.all |= 0x800000;
  EDIS;
}

/* Output and update for function-call system: '<S19>/Function-Call Subsystem' */
#pragma CODE_SECTION (TEST_IPM__FunctionCallSubsystem, "ramfuncs")

void TEST_IPM__FunctionCallSubsystem(void)
{
  /* DataStoreRead: '<S32>/Data Store Read' */
  TEST_IPM_2_0_B.DataStoreRead_g = ResloverRESET;

  /* S-Function (c280xgpio_do): '<S32>/Digital Output' */
  {
    if (TEST_IPM_2_0_B.DataStoreRead_g)
      GpioDataRegs.GPBSET.bit.GPIO55 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO55 = 1;
  }
}

/* Start for function-call system: '<S19>/Function-Call Subsystem1' */
#pragma CODE_SECTION (TE_FunctionCallSubsystem1_Start, "ramfuncs")

void TE_FunctionCallSubsystem1_Start(void)
{
  /* Start for S-Function (c280xgpio_do): '<S33>/Digital Output' */
  EALLOW;
  GpioCtrlRegs.GPBMUX2.all &= 0xFFFFF3FF;
  GpioCtrlRegs.GPBDIR.all |= 0x200000;
  EDIS;
}

/* Output and update for function-call system: '<S19>/Function-Call Subsystem1' */
#pragma CODE_SECTION (TEST_IPM_FunctionCallSubsystem1, "ramfuncs")

void TEST_IPM_FunctionCallSubsystem1(void)
{
  /* DataStoreRead: '<S33>/Data Store Read' */
  TEST_IPM_2_0_B.DataStoreRead_f = ResloverWR;

  /* S-Function (c280xgpio_do): '<S33>/Digital Output' */
  {
    if (TEST_IPM_2_0_B.DataStoreRead_f)
      GpioDataRegs.GPBSET.bit.GPIO53 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO53 = 1;
  }
}

#pragma CODE_SECTION (TEST_IPM_2_0_SystemCore_release, "ramfuncs")

static void TEST_IPM_2_0_SystemCore_release(const
  codertarget_tic2000_blocks_SP_T *obj)
{
  uint32_T PinNameLoc;
  uint32_T SPIPinsLoc;
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    PinNameLoc = MW_UNDEFINED_VALUE;
    SPIPinsLoc = MW_UNDEFINED_VALUE;
    MW_SPI_Close(obj->MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc, SPIPinsLoc,
                 PinNameLoc);
  }
}

#pragma CODE_SECTION (TEST_IPM_2_0_SystemCore_delete, "ramfuncs")

static void TEST_IPM_2_0_SystemCore_delete(const codertarget_tic2000_blocks_SP_T
  *obj)
{
  TEST_IPM_2_0_SystemCore_release(obj);
}

#pragma CODE_SECTION (matlabCodegenHandle_matlabCodeg, "ramfuncs")

static void matlabCodegenHandle_matlabCodeg(codertarget_tic2000_blocks_SP_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    TEST_IPM_2_0_SystemCore_delete(obj);
  }
}

/*
 * Start for atomic system:
 *    synthesized block
 *    synthesized block
 */
#pragma CODE_SECTION (TEST_IP_SPIMasterTransfer_Start, "ramfuncs")

void TEST_IP_SPIMasterTransfer_Start(DW_SPIMasterTransfer_TEST_IPM_T *localDW)
{
  codertarget_tic2000_blocks_SP_T *obj;
  uint32_T SSPinNameLoc;
  uint32_T SPIPinsLoc;

  /* Start for MATLABSystem: '<S34>/SPI Master Transfer' */
  localDW->obj.matlabCodegenIsDeleted = true;
  localDW->obj.isInitialized = 0L;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  obj = &localDW->obj;
  localDW->obj.isSetupComplete = false;
  localDW->obj.isInitialized = 1L;
  SSPinNameLoc = MW_UNDEFINED_VALUE;
  SPIPinsLoc = MW_UNDEFINED_VALUE;
  obj->MW_SPI_HANDLE = MW_SPI_Open(2UL, SPIPinsLoc, SPIPinsLoc, SPIPinsLoc,
    SSPinNameLoc, true, 0U);
  localDW->obj.isSetupComplete = true;
}

/*
 * Output and update for atomic system:
 *    synthesized block
 *    synthesized block
 */
#pragma CODE_SECTION (TEST_IPM_2_0_SPIMasterTransfer, "ramfuncs")

void TEST_IPM_2_0_SPIMasterTransfer(uint16_T rtu_0,
  B_SPIMasterTransfer_TEST_IPM__T *localB, DW_SPIMasterTransfer_TEST_IPM_T
  *localDW)
{
  uint16_T status;
  MW_SPI_Mode_type ClockModeValue;
  MW_SPI_FirstBitTransfer_Type MsbFirstTransferLoc;

  /* MATLABSystem: '<S34>/SPI Master Transfer' */
  MW_SPI_SetSlaveSelect(localDW->obj.MW_SPI_HANDLE, 0U, true);
  ClockModeValue = MW_SPI_MODE_0;
  MsbFirstTransferLoc = MW_SPI_MOST_SIGNIFICANT_BIT_FIRST;
  status = MW_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 16U, ClockModeValue,
    MsbFirstTransferLoc);
  if (status == 0U) {
    MW_SPI_MasterWriteRead_8bits(localDW->obj.MW_SPI_HANDLE, &rtu_0,
      &localB->SPIMasterTransfer, 1UL);
  }

  /* End of MATLABSystem: '<S34>/SPI Master Transfer' */
}

/*
 * Termination for atomic system:
 *    synthesized block
 *    synthesized block
 */
#pragma CODE_SECTION (TEST_IPM_SPIMasterTransfer_Term, "ramfuncs")

void TEST_IPM_SPIMasterTransfer_Term(DW_SPIMasterTransfer_TEST_IPM_T *localDW)
{
  /* Terminate for MATLABSystem: '<S34>/SPI Master Transfer' */
  matlabCodegenHandle_matlabCodeg(&localDW->obj);
}

/* Start for function-call system: '<S19>/Function-Call Subsystem2' */
#pragma CODE_SECTION (TE_FunctionCallSubsystem2_Start, "ramfuncs")

void TE_FunctionCallSubsystem2_Start(void)
{
  /* Start for S-Function (c280xgpio_do): '<S34>/Digital Output' */
  EALLOW;
  GpioCtrlRegs.GPBMUX2.all &= 0xFFFFF3FF;
  GpioCtrlRegs.GPBDIR.all |= 0x200000;
  EDIS;

  /* DataStoreRead: '<S34>/Data Store Read1' */
  TEST_IP_SPIMasterTransfer_Start(&TEST_IPM_2_0_DW.SPIMasterTransfer);
}

/* Output and update for function-call system: '<S19>/Function-Call Subsystem2' */
#pragma CODE_SECTION (TEST_IPM_FunctionCallSubsystem2, "ramfuncs")

void TEST_IPM_FunctionCallSubsystem2(void)
{
  /* DataStoreRead: '<S34>/Data Store Read' */
  TEST_IPM_2_0_B.DataStoreRead = ResloverWR;

  /* S-Function (c280xgpio_do): '<S34>/Digital Output' */
  {
    if (TEST_IPM_2_0_B.DataStoreRead)
      GpioDataRegs.GPBSET.bit.GPIO53 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO53 = 1;
  }

  /* DataStoreRead: '<S34>/Data Store Read1' */
  TEST_IPM_2_0_SPIMasterTransfer(SPIC_Tx, &TEST_IPM_2_0_B.SPIMasterTransfer,
    &TEST_IPM_2_0_DW.SPIMasterTransfer);

  /* DataStoreWrite: '<S34>/Data Store Write' */
  SPIC_Rx = TEST_IPM_2_0_B.SPIMasterTransfer.SPIMasterTransfer;
}

/* Termination for function-call system: '<S19>/Function-Call Subsystem2' */
#pragma CODE_SECTION (TES_FunctionCallSubsystem2_Term, "ramfuncs")

void TES_FunctionCallSubsystem2_Term(void)
{
  TEST_IPM_SPIMasterTransfer_Term(&TEST_IPM_2_0_DW.SPIMasterTransfer);
}

/*
 * Output and update for atomic system:
 *    '<S49>/MATLAB Function'
 *    '<S49>/MATLAB Function2'
 *    '<S97>/MATLAB Function1'
 *    '<S98>/MATLAB Function'
 *    '<S98>/MATLAB Function1'
 */
#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction, "ramfuncs")

void TEST_IPM_2_0_MATLABFunction(real32_T rtu_Udc, real32_T rtu_Input, real32_T *
  rty_Output)
{
  real32_T tmp;
  if (rtu_Input >= rtu_Udc / 1.73205078F) {
    *rty_Output = rtu_Udc / 1.73205078F;
  } else {
    tmp = -rtu_Udc / 1.73205078F;
    if (rtu_Input <= tmp) {
      *rty_Output = tmp;
    } else {
      *rty_Output = rtu_Input;
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S62>/MATLAB Function3'
 *    '<S62>/MATLAB Function5'
 *    '<S62>/MATLAB Function6'
 */
#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction3, "ramfuncs")

void TEST_IPM_2_0_MATLABFunction3(real32_T rtu_I, real32_T rtu_K, real32_T
  rtu_Udead, real32_T *rty_Uerror)
{
  *rty_Uerror = (real32_T)atan(rtu_I * rtu_K) * rtu_Udead / 1.57079637F;
}

/*
 * Output and update for atomic system:
 *    '<S109>/MATLAB Function'
 *    '<S79>/MATLAB Function'
 */
#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction_o, "ramfuncs")

void TEST_IPM_2_0_MATLABFunction_o(real32_T rtu_Target, real32_T rtu_Step,
  real32_T rtu_LastOutput, real32_T *rty_Output)
{
  real32_T Temp;
  if (rtu_LastOutput <= rtu_Target) {
    Temp = rtu_LastOutput + rtu_Step;
  } else {
    Temp = rtu_LastOutput - rtu_Step;
  }

  if (fabsf(Temp - rtu_Target) <= rtu_Step * 2.0F) {
    Temp = rtu_Target;
  }

  *rty_Output = Temp;
}

/*
 * Output and update for atomic system:
 *    '<S110>/MATLAB Function'
 *    '<S80>/MATLAB Function'
 */
#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction_n, "ramfuncs")

void TEST_IPM_2_0_MATLABFunction_n(real32_T rtu_FRQ, real32_T rtu_LastAng,
  real32_T *rty_Ang)
{
  real32_T Temp;
  Temp = rtu_FRQ * 0.000628318521F + rtu_LastAng;
  if (Temp > 6.28318548F) {
    Temp -= 6.28318548F;
  }

  *rty_Ang = Temp;
}

/*
 * Output and update for atomic system:
 *    '<S91>/MATLAB Function6'
 *    '<S91>/MATLAB Function7'
 */
#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction6, "ramfuncs")

void TEST_IPM_2_0_MATLABFunction6(real32_T rtu_IRef, real32_T rtu_IFbk)
{
  if (fabsf(rtu_IRef - rtu_IFbk) >= 150.0F) {
    STOP = 1U;
    PROTECT |= 16U;
  }

  if (PROTECT != 0U) {
    STOP = 1U;
  }
}

/*
 * Output and update for atomic system:
 *    '<S92>/MATLAB Function'
 *    '<S88>/MATLAB Function'
 */
#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction_g, "ramfuncs")

void TEST_IPM_2_0_MATLABFunction_g(real32_T rtu_Limit, real32_T rtu_Input,
  real32_T *rty_Output)
{
  if (rtu_Input >= rtu_Limit) {
    *rty_Output = rtu_Limit;
  } else if (rtu_Input <= -rtu_Limit) {
    *rty_Output = -rtu_Limit;
  } else {
    *rty_Output = rtu_Input;
  }
}

/* Start for function-call system: '<S3>/ePWM' */
#pragma CODE_SECTION (TEST_IPM_2_0_ePWM_Start, "ramfuncs")

void TEST_IPM_2_0_ePWM_Start(void)
{
  /* Start for S-Function (c2802xpwm): '<S30>/ePWM' */
  EALLOW;
  CpuSysRegs.PCLKCR2.bit.EPWM1 = 1;
  CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 0;
  EDIS;

  /*** Initialize ePWM1 modules ***/
  {
    /*  // Time Base Control Register
       EPwm1Regs.TBCTL.bit.CTRMODE              = 2;          // Counter Mode
       EPwm1Regs.TBCTL.bit.SYNCOSEL             = 1;          // Sync Output Select

       EPwm1Regs.TBCTL.bit.PRDLD                = 0;          // Shadow select
       EPwm1Regs.TBCTL.bit.PHSEN                = 0;          // Phase Load Enable
       EPwm1Regs.TBCTL.bit.PHSDIR               = 0;          // Phase Direction Bit
       EPwm1Regs.TBCTL.bit.HSPCLKDIV            = 0;          // High Speed TBCLK Pre-scaler
       EPwm1Regs.TBCTL.bit.CLKDIV               = 0;          // Time Base Clock Pre-scaler
       EPwm1Regs.TBCTL.bit.SWFSYNC              = 0;          // Software Force Sync Pulse
     */
    EPwm1Regs.TBCTL.all = (EPwm1Regs.TBCTL.all & ~0x3FFF) | 0x12;

    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm1Regs.TBPRD = 10000;           // Time Base Period Register

    /* // Time-Base Phase Register
       EPwm1Regs.TBPHS.bit.TBPHS               = 0;          // Phase offset register
     */
    EPwm1Regs.TBPHS.all = (EPwm1Regs.TBPHS.all & ~0xFFFF0000) | 0x0;

    // Time Base Counter Register
    EPwm1Regs.TBCTR = 0x0000;          /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register
       EPwm1Regs.CMPCTL.bit.SHDWAMODE           = 0;  // Compare A Register Block Operating Mode
       EPwm1Regs.CMPCTL.bit.SHDWBMODE           = 0;  // Compare B Register Block Operating Mode
       EPwm1Regs.CMPCTL.bit.LOADAMODE           = 0;          // Active Compare A Load
       EPwm1Regs.CMPCTL.bit.LOADBMODE           = 0;          // Active Compare B Load
     */
    EPwm1Regs.CMPCTL.all = (EPwm1Regs.CMPCTL.all & ~0x5F) | 0x0;

    /* EPwm1Regs.CMPCTL2.bit.SHDWCMODE           = 0;  // Compare C Register Block Operating Mode

       EPwm1Regs.CMPCTL2.bit.SHDWDMODE           = 0;  // Compare D Register Block Operating Mode
     */
    EPwm1Regs.CMPCTL2.all = (EPwm1Regs.CMPCTL2.all & ~0x50) | 0x0;
    EPwm1Regs.CMPA.bit.CMPA = 5000;    // Counter Compare A Register
    EPwm1Regs.CMPB.bit.CMPB = 5000;    // Counter Compare B Register
    EPwm1Regs.CMPC = 32000;            // Counter Compare C Register
    EPwm1Regs.CMPD = 32000;            // Counter Compare D Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm1Regs.AQCTLA.all = 144;// Action Qualifier Control Register For Output A
    EPwm1Regs.AQCTLB.all = 144;// Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm1Regs.AQSFRC.bit.RLDCSF              = 3;          // Reload from Shadow Options
     */
    EPwm1Regs.AQSFRC.all = (EPwm1Regs.AQSFRC.all & ~0xC0) | 0xC0;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm1Regs.AQCSFRC.bit.CSFA               = 0;          // Continuous Software Force on output A
       EPwm1Regs.AQCSFRC.bit.CSFB               = 0;          // Continuous Software Force on output B
     */
    EPwm1Regs.AQCSFRC.all = (EPwm1Regs.AQCSFRC.all & ~0xF) | 0x0;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm1Regs.DBCTL.bit.OUT_MODE             = 3;          // Dead Band Output Mode Control
       EPwm1Regs.DBCTL.bit.IN_MODE              = 2;          // Dead Band Input Select Mode Control
       EPwm1Regs.DBCTL.bit.POLSEL               = 2;          // Polarity Select Control
       EPwm1Regs.DBCTL.bit.HALFCYCLE            = 0;          // Half Cycle Clocking Enable
     */
    EPwm1Regs.DBCTL.all = (EPwm1Regs.DBCTL.all & ~0x803F) | 0x2B;
    EPwm1Regs.DBRED.bit.DBRED = 200;
                         // Dead-Band Generator Rising Edge Delay Count Register
    EPwm1Regs.DBFED.bit.DBFED = 200;
                        // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm1Regs.ETSEL.bit.SOCAEN               = 1;          // Start of Conversion A Enable
       EPwm1Regs.ETSEL.bit.SOCASELCMP = 0;
       EPwm1Regs.ETSEL.bit.SOCASEL              = 1 ;          // Start of Conversion A Select
       EPwm1Regs.ETPS.bit.SOCAPRD               = 1;          // EPWM1SOCA Period Select

       EPwm1Regs.ETSEL.bit.SOCBEN               = 0;          // Start of Conversion B Enable

       EPwm1Regs.ETSEL.bit.SOCBSELCMP = 0;
       EPwm1Regs.ETSEL.bit.SOCBSEL              = 1;          // Start of Conversion A Select
       EPwm1Regs.ETPS.bit.SOCBPRD               = 1;          // EPWM1SOCB Period Select
       EPwm1Regs.ETSEL.bit.INTEN                = 0;          // EPWM1INTn Enable
       EPwm1Regs.ETSEL.bit.INTSELCMP = 0;
       EPwm1Regs.ETSEL.bit.INTSEL              = 2;          // Start of Conversion A Select

       EPwm1Regs.ETPS.bit.INTPRD                = 1;          // EPWM1INTn Period Select
     */
    EPwm1Regs.ETSEL.all = (EPwm1Regs.ETSEL.all & ~0xFF7F) | 0x1902;
    EPwm1Regs.ETPS.all = (EPwm1Regs.ETPS.all & ~0x3303) | 0x1101;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm1Regs.PCCTL.bit.CHPEN                = 0;          // PWM chopping enable
       EPwm1Regs.PCCTL.bit.CHPFREQ              = 0;          // Chopping clock frequency
       EPwm1Regs.PCCTL.bit.OSHTWTH              = 0;          // One-shot pulse width
       EPwm1Regs.PCCTL.bit.CHPDUTY              = 0;          // Chopping clock Duty cycle
     */
    EPwm1Regs.PCCTL.all = (EPwm1Regs.PCCTL.all & ~0x7FF) | 0x0;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm1Regs.TZSEL.all = 0;           // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm1Regs.TZCTL.bit.TZA                  = 2;          // TZ1 to TZ6 Trip Action On EPWM1A
       EPwm1Regs.TZCTL.bit.TZB                  = 2;          // TZ1 to TZ6 Trip Action On EPWM1B
       EPwm1Regs.TZCTL.bit.DCAEVT1              = 3;          // EPWM1A action on DCAEVT1
       EPwm1Regs.TZCTL.bit.DCAEVT2              = 3;          // EPWM1A action on DCAEVT2
       EPwm1Regs.TZCTL.bit.DCBEVT1              = 3;          // EPWM1B action on DCBEVT1
       EPwm1Regs.TZCTL.bit.DCBEVT2              = 3;          // EPWM1B action on DCBEVT2
     */
    EPwm1Regs.TZCTL.all = (EPwm1Regs.TZCTL.all & ~0xFFF) | 0xFFA;

    /*	// Trip Zone Enable Interrupt Register
       EPwm1Regs.TZEINT.bit.OST                 = 1;          // Trip Zones One Shot Int Enable
       EPwm1Regs.TZEINT.bit.CBC                 = 0;          // Trip Zones Cycle By Cycle Int Enable
       EPwm1Regs.TZEINT.bit.DCAEVT1             = 0;          // Digital Compare A Event 1 Int Enable
       EPwm1Regs.TZEINT.bit.DCAEVT2             = 0;          // Digital Compare A Event 2 Int Enable
       EPwm1Regs.TZEINT.bit.DCBEVT1             = 0;          // Digital Compare B Event 1 Int Enable
       EPwm1Regs.TZEINT.bit.DCBEVT2             = 0;          // Digital Compare B Event 2 Int Enable
     */
    EPwm1Regs.TZEINT.all = (EPwm1Regs.TZEINT.all & ~0x7E) | 0x4;

    /*	// Digital Compare A Control Register
       EPwm1Regs.DCACTL.bit.EVT1SYNCE           = 0;          // DCAEVT1 SYNC Enable
       EPwm1Regs.DCACTL.bit.EVT1SOCE            = 1;          // DCAEVT1 SOC Enable
       EPwm1Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0;          // DCAEVT1 Force Sync Signal
       EPwm1Regs.DCACTL.bit.EVT1SRCSEL          = 0;          // DCAEVT1 Source Signal
       EPwm1Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0;          // DCAEVT2 Force Sync Signal
       EPwm1Regs.DCACTL.bit.EVT2SRCSEL          = 0;          // DCAEVT2 Source Signal
     */
    EPwm1Regs.DCACTL.all = (EPwm1Regs.DCACTL.all & ~0x30F) | 0x4;

    /*	// Digital Compare B Control Register
       EPwm1Regs.DCBCTL.bit.EVT1SYNCE           = 0;          // DCBEVT1 SYNC Enable
       EPwm1Regs.DCBCTL.bit.EVT1SOCE            = 0;          // DCBEVT1 SOC Enable
       EPwm1Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0;          // DCBEVT1 Force Sync Signal
       EPwm1Regs.DCBCTL.bit.EVT1SRCSEL          = 0;          // DCBEVT1 Source Signal
       EPwm1Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0;          // DCBEVT2 Force Sync Signal
       EPwm1Regs.DCBCTL.bit.EVT2SRCSEL          = 0;          // DCBEVT2 Source Signal
     */
    EPwm1Regs.DCBCTL.all = (EPwm1Regs.DCBCTL.all & ~0x30F) | 0x0;

    /*	// Digital Compare Trip Select Register
       EPwm1Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0;          // Digital Compare A High COMP Input Select

       EPwm1Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 1;          // Digital Compare A Low COMP Input Select
       EPwm1Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0;          // Digital Compare B High COMP Input Select
       EPwm1Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 1;          // Digital Compare B Low COMP Input Select





     */
    EPwm1Regs.DCTRIPSEL.all = (EPwm1Regs.DCTRIPSEL.all & ~ 0xFFFF) | 0x1010;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm1Regs.TZDCSEL.bit.DCAEVT1            = 0;          // Digital Compare Output A Event 1
       EPwm1Regs.TZDCSEL.bit.DCAEVT2            = 0;          // Digital Compare Output A Event 2
       EPwm1Regs.TZDCSEL.bit.DCBEVT1            = 0;          // Digital Compare Output B Event 1
       EPwm1Regs.TZDCSEL.bit.DCBEVT2            = 0;          // Digital Compare Output B Event 2
     */
    EPwm1Regs.TZDCSEL.all = (EPwm1Regs.TZDCSEL.all & ~0xFFF) | 0x0;

    /*	// Digital Compare Filter Control Register
       EPwm1Regs.DCFCTL.bit.BLANKE              = 0;          // Blanking Enable/Disable
       EPwm1Regs.DCFCTL.bit.PULSESEL            = 1;          // Pulse Select for Blanking & Capture Alignment
       EPwm1Regs.DCFCTL.bit.BLANKINV            = 0;          // Blanking Window Inversion
       EPwm1Regs.DCFCTL.bit.SRCSEL              = 0;          // Filter Block Signal Source Select
     */
    EPwm1Regs.DCFCTL.all = (EPwm1Regs.DCFCTL.all & ~0x3F) | 0x10;
    EPwm1Regs.DCFOFFSET = 0;           // Digital Compare Filter Offset Register
    EPwm1Regs.DCFWINDOW = 0;           // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm1Regs.DCCAPCTL.bit.CAPE              = 0;          // Counter Capture Enable
     */
    EPwm1Regs.DCCAPCTL.all = (EPwm1Regs.DCCAPCTL.all & ~0x1) | 0x0;

    /*	// HRPWM Configuration Register
       EPwm1Regs.HRCNFG.bit.SWAPAB              = 0;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm1Regs.HRCNFG.bit.SELOUTB             = 0;          // EPWMB Output Selection Bit
     */
    EPwm1Regs.HRCNFG.all = (EPwm1Regs.HRCNFG.all & ~0xA0) | 0x0;

    /* Update the Link Registers with the link value for all the Compare values and TBPRD */
    /* No error is thrown if the ePWM register exists in the model or not */
    EPwm1Regs.EPWMXLINK.bit.TBPRDLINK = 0;
    EPwm1Regs.EPWMXLINK.bit.CMPALINK = 0;
    EPwm1Regs.EPWMXLINK.bit.CMPBLINK = 0;
    EPwm1Regs.EPWMXLINK.bit.CMPCLINK = 0;
    EPwm1Regs.EPWMXLINK.bit.CMPDLINK = 0;
    EDIS;
    EALLOW;
    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1;
    EDIS;
  }

  /* Start for S-Function (c2802xpwm): '<S30>/ePWM1' */
  EALLOW;
  CpuSysRegs.PCLKCR2.bit.EPWM2 = 1;
  CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 0;
  EDIS;

  /*** Initialize ePWM2 modules ***/
  {
    /*  // Time Base Control Register
       EPwm2Regs.TBCTL.bit.CTRMODE              = 2;          // Counter Mode
       EPwm2Regs.TBCTL.bit.SYNCOSEL             = 3;          // Sync Output Select

       EPwm2Regs.TBCTL.bit.PRDLD                = 0;          // Shadow select
       EPwm2Regs.TBCTL.bit.PHSEN                = 1;          // Phase Load Enable
       EPwm2Regs.TBCTL.bit.PHSDIR               = 0;          // Phase Direction Bit
       EPwm2Regs.TBCTL.bit.HSPCLKDIV            = 0;          // High Speed TBCLK Pre-scaler
       EPwm2Regs.TBCTL.bit.CLKDIV               = 0;          // Time Base Clock Pre-scaler
       EPwm2Regs.TBCTL.bit.SWFSYNC              = 0;          // Software Force Sync Pulse
     */
    EPwm2Regs.TBCTL.all = (EPwm2Regs.TBCTL.all & ~0x3FFF) | 0x36;

    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm2Regs.TBPRD = 10000;           // Time Base Period Register

    /* // Time-Base Phase Register
       EPwm2Regs.TBPHS.bit.TBPHS               = 0;          // Phase offset register
     */
    EPwm2Regs.TBPHS.all = (EPwm2Regs.TBPHS.all & ~0xFFFF0000) | 0x0;

    // Time Base Counter Register
    EPwm2Regs.TBCTR = 0x0000;          /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register
       EPwm2Regs.CMPCTL.bit.SHDWAMODE           = 0;  // Compare A Register Block Operating Mode
       EPwm2Regs.CMPCTL.bit.SHDWBMODE           = 0;  // Compare B Register Block Operating Mode
       EPwm2Regs.CMPCTL.bit.LOADAMODE           = 0;          // Active Compare A Load
       EPwm2Regs.CMPCTL.bit.LOADBMODE           = 0;          // Active Compare B Load
     */
    EPwm2Regs.CMPCTL.all = (EPwm2Regs.CMPCTL.all & ~0x5F) | 0x0;

    /* EPwm2Regs.CMPCTL2.bit.SHDWCMODE           = 0;  // Compare C Register Block Operating Mode

       EPwm2Regs.CMPCTL2.bit.SHDWDMODE           = 0;  // Compare D Register Block Operating Mode
     */
    EPwm2Regs.CMPCTL2.all = (EPwm2Regs.CMPCTL2.all & ~0x50) | 0x0;
    EPwm2Regs.CMPA.bit.CMPA = 5000;    // Counter Compare A Register
    EPwm2Regs.CMPB.bit.CMPB = 5000;    // Counter Compare B Register
    EPwm2Regs.CMPC = 32000;            // Counter Compare C Register
    EPwm2Regs.CMPD = 32000;            // Counter Compare D Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm2Regs.AQCTLA.all = 144;// Action Qualifier Control Register For Output A
    EPwm2Regs.AQCTLB.all = 144;// Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm2Regs.AQSFRC.bit.RLDCSF              = 3;          // Reload from Shadow Options
     */
    EPwm2Regs.AQSFRC.all = (EPwm2Regs.AQSFRC.all & ~0xC0) | 0xC0;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm2Regs.AQCSFRC.bit.CSFA               = 0;          // Continuous Software Force on output A
       EPwm2Regs.AQCSFRC.bit.CSFB               = 0;          // Continuous Software Force on output B
     */
    EPwm2Regs.AQCSFRC.all = (EPwm2Regs.AQCSFRC.all & ~0xF) | 0x0;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm2Regs.DBCTL.bit.OUT_MODE             = 3;          // Dead Band Output Mode Control
       EPwm2Regs.DBCTL.bit.IN_MODE              = 2;          // Dead Band Input Select Mode Control
       EPwm2Regs.DBCTL.bit.POLSEL               = 2;          // Polarity Select Control
       EPwm2Regs.DBCTL.bit.HALFCYCLE            = 0;          // Half Cycle Clocking Enable
     */
    EPwm2Regs.DBCTL.all = (EPwm2Regs.DBCTL.all & ~0x803F) | 0x2B;
    EPwm2Regs.DBRED.bit.DBRED = 200;
                         // Dead-Band Generator Rising Edge Delay Count Register
    EPwm2Regs.DBFED.bit.DBFED = 200;
                        // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm2Regs.ETSEL.bit.SOCAEN               = 0;          // Start of Conversion A Enable
       EPwm2Regs.ETSEL.bit.SOCASELCMP = 0;
       EPwm2Regs.ETSEL.bit.SOCASEL              = 2 ;          // Start of Conversion A Select
       EPwm2Regs.ETPS.bit.SOCAPRD               = 1;          // EPWM2SOCA Period Select

       EPwm2Regs.ETSEL.bit.SOCBEN               = 0;          // Start of Conversion B Enable

       EPwm2Regs.ETSEL.bit.SOCBSELCMP = 0;
       EPwm2Regs.ETSEL.bit.SOCBSEL              = 1;          // Start of Conversion A Select
       EPwm2Regs.ETPS.bit.SOCBPRD               = 1;          // EPWM2SOCB Period Select
       EPwm2Regs.ETSEL.bit.INTEN                = 0;          // EPWM2INTn Enable
       EPwm2Regs.ETSEL.bit.INTSELCMP = 0;
       EPwm2Regs.ETSEL.bit.INTSEL              = 2;          // Start of Conversion A Select

       EPwm2Regs.ETPS.bit.INTPRD                = 1;          // EPWM2INTn Period Select
     */
    EPwm2Regs.ETSEL.all = (EPwm2Regs.ETSEL.all & ~0xFF7F) | 0x1202;
    EPwm2Regs.ETPS.all = (EPwm2Regs.ETPS.all & ~0x3303) | 0x1101;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm2Regs.PCCTL.bit.CHPEN                = 0;          // PWM chopping enable
       EPwm2Regs.PCCTL.bit.CHPFREQ              = 0;          // Chopping clock frequency
       EPwm2Regs.PCCTL.bit.OSHTWTH              = 0;          // One-shot pulse width
       EPwm2Regs.PCCTL.bit.CHPDUTY              = 0;          // Chopping clock Duty cycle
     */
    EPwm2Regs.PCCTL.all = (EPwm2Regs.PCCTL.all & ~0x7FF) | 0x0;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm2Regs.TZSEL.all = 0;           // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm2Regs.TZCTL.bit.TZA                  = 2;          // TZ1 to TZ6 Trip Action On EPWM2A
       EPwm2Regs.TZCTL.bit.TZB                  = 2;          // TZ1 to TZ6 Trip Action On EPWM2B
       EPwm2Regs.TZCTL.bit.DCAEVT1              = 3;          // EPWM2A action on DCAEVT1
       EPwm2Regs.TZCTL.bit.DCAEVT2              = 3;          // EPWM2A action on DCAEVT2
       EPwm2Regs.TZCTL.bit.DCBEVT1              = 3;          // EPWM2B action on DCBEVT1
       EPwm2Regs.TZCTL.bit.DCBEVT2              = 3;          // EPWM2B action on DCBEVT2
     */
    EPwm2Regs.TZCTL.all = (EPwm2Regs.TZCTL.all & ~0xFFF) | 0xFFA;

    /*	// Trip Zone Enable Interrupt Register
       EPwm2Regs.TZEINT.bit.OST                 = 1;          // Trip Zones One Shot Int Enable
       EPwm2Regs.TZEINT.bit.CBC                 = 0;          // Trip Zones Cycle By Cycle Int Enable
       EPwm2Regs.TZEINT.bit.DCAEVT1             = 0;          // Digital Compare A Event 1 Int Enable
       EPwm2Regs.TZEINT.bit.DCAEVT2             = 0;          // Digital Compare A Event 2 Int Enable
       EPwm2Regs.TZEINT.bit.DCBEVT1             = 0;          // Digital Compare B Event 1 Int Enable
       EPwm2Regs.TZEINT.bit.DCBEVT2             = 0;          // Digital Compare B Event 2 Int Enable
     */
    EPwm2Regs.TZEINT.all = (EPwm2Regs.TZEINT.all & ~0x7E) | 0x4;

    /*	// Digital Compare A Control Register
       EPwm2Regs.DCACTL.bit.EVT1SYNCE           = 0;          // DCAEVT1 SYNC Enable
       EPwm2Regs.DCACTL.bit.EVT1SOCE            = 1;          // DCAEVT1 SOC Enable
       EPwm2Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0;          // DCAEVT1 Force Sync Signal
       EPwm2Regs.DCACTL.bit.EVT1SRCSEL          = 0;          // DCAEVT1 Source Signal
       EPwm2Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0;          // DCAEVT2 Force Sync Signal
       EPwm2Regs.DCACTL.bit.EVT2SRCSEL          = 0;          // DCAEVT2 Source Signal
     */
    EPwm2Regs.DCACTL.all = (EPwm2Regs.DCACTL.all & ~0x30F) | 0x4;

    /*	// Digital Compare B Control Register
       EPwm2Regs.DCBCTL.bit.EVT1SYNCE           = 0;          // DCBEVT1 SYNC Enable
       EPwm2Regs.DCBCTL.bit.EVT1SOCE            = 0;          // DCBEVT1 SOC Enable
       EPwm2Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0;          // DCBEVT1 Force Sync Signal
       EPwm2Regs.DCBCTL.bit.EVT1SRCSEL          = 0;          // DCBEVT1 Source Signal
       EPwm2Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0;          // DCBEVT2 Force Sync Signal
       EPwm2Regs.DCBCTL.bit.EVT2SRCSEL          = 0;          // DCBEVT2 Source Signal
     */
    EPwm2Regs.DCBCTL.all = (EPwm2Regs.DCBCTL.all & ~0x30F) | 0x0;

    /*	// Digital Compare Trip Select Register
       EPwm2Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0;          // Digital Compare A High COMP Input Select

       EPwm2Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 1;          // Digital Compare A Low COMP Input Select
       EPwm2Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0;          // Digital Compare B High COMP Input Select
       EPwm2Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 1;          // Digital Compare B Low COMP Input Select





     */
    EPwm2Regs.DCTRIPSEL.all = (EPwm2Regs.DCTRIPSEL.all & ~ 0xFFFF) | 0x1010;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm2Regs.TZDCSEL.bit.DCAEVT1            = 0;          // Digital Compare Output A Event 1
       EPwm2Regs.TZDCSEL.bit.DCAEVT2            = 0;          // Digital Compare Output A Event 2
       EPwm2Regs.TZDCSEL.bit.DCBEVT1            = 0;          // Digital Compare Output B Event 1
       EPwm2Regs.TZDCSEL.bit.DCBEVT2            = 0;          // Digital Compare Output B Event 2
     */
    EPwm2Regs.TZDCSEL.all = (EPwm2Regs.TZDCSEL.all & ~0xFFF) | 0x0;

    /*	// Digital Compare Filter Control Register
       EPwm2Regs.DCFCTL.bit.BLANKE              = 0;          // Blanking Enable/Disable
       EPwm2Regs.DCFCTL.bit.PULSESEL            = 1;          // Pulse Select for Blanking & Capture Alignment
       EPwm2Regs.DCFCTL.bit.BLANKINV            = 0;          // Blanking Window Inversion
       EPwm2Regs.DCFCTL.bit.SRCSEL              = 0;          // Filter Block Signal Source Select
     */
    EPwm2Regs.DCFCTL.all = (EPwm2Regs.DCFCTL.all & ~0x3F) | 0x10;
    EPwm2Regs.DCFOFFSET = 0;           // Digital Compare Filter Offset Register
    EPwm2Regs.DCFWINDOW = 0;           // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm2Regs.DCCAPCTL.bit.CAPE              = 0;          // Counter Capture Enable
     */
    EPwm2Regs.DCCAPCTL.all = (EPwm2Regs.DCCAPCTL.all & ~0x1) | 0x0;

    /*	// HRPWM Configuration Register
       EPwm2Regs.HRCNFG.bit.SWAPAB              = 0;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm2Regs.HRCNFG.bit.SELOUTB             = 0;          // EPWMB Output Selection Bit
     */
    EPwm2Regs.HRCNFG.all = (EPwm2Regs.HRCNFG.all & ~0xA0) | 0x0;

    /* Update the Link Registers with the link value for all the Compare values and TBPRD */
    /* No error is thrown if the ePWM register exists in the model or not */
    EPwm2Regs.EPWMXLINK.bit.TBPRDLINK = 1;
    EPwm2Regs.EPWMXLINK.bit.CMPALINK = 1;
    EPwm2Regs.EPWMXLINK.bit.CMPBLINK = 1;
    EPwm2Regs.EPWMXLINK.bit.CMPCLINK = 1;
    EPwm2Regs.EPWMXLINK.bit.CMPDLINK = 1;
    EDIS;
    EALLOW;
    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1;
    EDIS;
  }

  /* Start for S-Function (c2802xpwm): '<S30>/ePWM2' */
  EALLOW;
  CpuSysRegs.PCLKCR2.bit.EPWM3 = 1;
  CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 0;
  EDIS;

  /*** Initialize ePWM3 modules ***/
  {
    /*  // Time Base Control Register
       EPwm3Regs.TBCTL.bit.CTRMODE              = 2;          // Counter Mode
       EPwm3Regs.TBCTL.bit.SYNCOSEL             = 3;          // Sync Output Select

       EPwm3Regs.TBCTL.bit.PRDLD                = 0;          // Shadow select
       EPwm3Regs.TBCTL.bit.PHSEN                = 1;          // Phase Load Enable
       EPwm3Regs.TBCTL.bit.PHSDIR               = 0;          // Phase Direction Bit
       EPwm3Regs.TBCTL.bit.HSPCLKDIV            = 0;          // High Speed TBCLK Pre-scaler
       EPwm3Regs.TBCTL.bit.CLKDIV               = 0;          // Time Base Clock Pre-scaler
       EPwm3Regs.TBCTL.bit.SWFSYNC              = 0;          // Software Force Sync Pulse
     */
    EPwm3Regs.TBCTL.all = (EPwm3Regs.TBCTL.all & ~0x3FFF) | 0x36;

    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm3Regs.TBPRD = 10000;           // Time Base Period Register

    /* // Time-Base Phase Register
       EPwm3Regs.TBPHS.bit.TBPHS               = 0;          // Phase offset register
     */
    EPwm3Regs.TBPHS.all = (EPwm3Regs.TBPHS.all & ~0xFFFF0000) | 0x0;

    // Time Base Counter Register
    EPwm3Regs.TBCTR = 0x0000;          /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register
       EPwm3Regs.CMPCTL.bit.SHDWAMODE           = 0;  // Compare A Register Block Operating Mode
       EPwm3Regs.CMPCTL.bit.SHDWBMODE           = 0;  // Compare B Register Block Operating Mode
       EPwm3Regs.CMPCTL.bit.LOADAMODE           = 0;          // Active Compare A Load
       EPwm3Regs.CMPCTL.bit.LOADBMODE           = 0;          // Active Compare B Load
     */
    EPwm3Regs.CMPCTL.all = (EPwm3Regs.CMPCTL.all & ~0x5F) | 0x0;

    /* EPwm3Regs.CMPCTL2.bit.SHDWCMODE           = 0;  // Compare C Register Block Operating Mode

       EPwm3Regs.CMPCTL2.bit.SHDWDMODE           = 0;  // Compare D Register Block Operating Mode
     */
    EPwm3Regs.CMPCTL2.all = (EPwm3Regs.CMPCTL2.all & ~0x50) | 0x0;
    EPwm3Regs.CMPA.bit.CMPA = 5000;    // Counter Compare A Register
    EPwm3Regs.CMPB.bit.CMPB = 5000;    // Counter Compare B Register
    EPwm3Regs.CMPC = 32000;            // Counter Compare C Register
    EPwm3Regs.CMPD = 32000;            // Counter Compare D Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm3Regs.AQCTLA.all = 144;// Action Qualifier Control Register For Output A
    EPwm3Regs.AQCTLB.all = 144;// Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm3Regs.AQSFRC.bit.RLDCSF              = 3;          // Reload from Shadow Options
     */
    EPwm3Regs.AQSFRC.all = (EPwm3Regs.AQSFRC.all & ~0xC0) | 0xC0;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm3Regs.AQCSFRC.bit.CSFA               = 0;          // Continuous Software Force on output A
       EPwm3Regs.AQCSFRC.bit.CSFB               = 0;          // Continuous Software Force on output B
     */
    EPwm3Regs.AQCSFRC.all = (EPwm3Regs.AQCSFRC.all & ~0xF) | 0x0;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm3Regs.DBCTL.bit.OUT_MODE             = 3;          // Dead Band Output Mode Control
       EPwm3Regs.DBCTL.bit.IN_MODE              = 2;          // Dead Band Input Select Mode Control
       EPwm3Regs.DBCTL.bit.POLSEL               = 2;          // Polarity Select Control
       EPwm3Regs.DBCTL.bit.HALFCYCLE            = 0;          // Half Cycle Clocking Enable
     */
    EPwm3Regs.DBCTL.all = (EPwm3Regs.DBCTL.all & ~0x803F) | 0x2B;
    EPwm3Regs.DBRED.bit.DBRED = 200;
                         // Dead-Band Generator Rising Edge Delay Count Register
    EPwm3Regs.DBFED.bit.DBFED = 200;
                        // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm3Regs.ETSEL.bit.SOCAEN               = 0;          // Start of Conversion A Enable
       EPwm3Regs.ETSEL.bit.SOCASELCMP = 0;
       EPwm3Regs.ETSEL.bit.SOCASEL              = 1 ;          // Start of Conversion A Select
       EPwm3Regs.ETPS.bit.SOCAPRD               = 1;          // EPWM3SOCA Period Select

       EPwm3Regs.ETSEL.bit.SOCBEN               = 0;          // Start of Conversion B Enable

       EPwm3Regs.ETSEL.bit.SOCBSELCMP = 0;
       EPwm3Regs.ETSEL.bit.SOCBSEL              = 1;          // Start of Conversion A Select
       EPwm3Regs.ETPS.bit.SOCBPRD               = 1;          // EPWM3SOCB Period Select
       EPwm3Regs.ETSEL.bit.INTEN                = 0;          // EPWM3INTn Enable
       EPwm3Regs.ETSEL.bit.INTSELCMP = 0;
       EPwm3Regs.ETSEL.bit.INTSEL              = 2;          // Start of Conversion A Select

       EPwm3Regs.ETPS.bit.INTPRD                = 1;          // EPWM3INTn Period Select
     */
    EPwm3Regs.ETSEL.all = (EPwm3Regs.ETSEL.all & ~0xFF7F) | 0x1102;
    EPwm3Regs.ETPS.all = (EPwm3Regs.ETPS.all & ~0x3303) | 0x1101;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm3Regs.PCCTL.bit.CHPEN                = 0;          // PWM chopping enable
       EPwm3Regs.PCCTL.bit.CHPFREQ              = 0;          // Chopping clock frequency
       EPwm3Regs.PCCTL.bit.OSHTWTH              = 0;          // One-shot pulse width
       EPwm3Regs.PCCTL.bit.CHPDUTY              = 0;          // Chopping clock Duty cycle
     */
    EPwm3Regs.PCCTL.all = (EPwm3Regs.PCCTL.all & ~0x7FF) | 0x0;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm3Regs.TZSEL.all = 0;           // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm3Regs.TZCTL.bit.TZA                  = 2;          // TZ1 to TZ6 Trip Action On EPWM3A
       EPwm3Regs.TZCTL.bit.TZB                  = 2;          // TZ1 to TZ6 Trip Action On EPWM3B
       EPwm3Regs.TZCTL.bit.DCAEVT1              = 3;          // EPWM3A action on DCAEVT1
       EPwm3Regs.TZCTL.bit.DCAEVT2              = 3;          // EPWM3A action on DCAEVT2
       EPwm3Regs.TZCTL.bit.DCBEVT1              = 3;          // EPWM3B action on DCBEVT1
       EPwm3Regs.TZCTL.bit.DCBEVT2              = 3;          // EPWM3B action on DCBEVT2
     */
    EPwm3Regs.TZCTL.all = (EPwm3Regs.TZCTL.all & ~0xFFF) | 0xFFA;

    /*	// Trip Zone Enable Interrupt Register
       EPwm3Regs.TZEINT.bit.OST                 = 1;          // Trip Zones One Shot Int Enable
       EPwm3Regs.TZEINT.bit.CBC                 = 0;          // Trip Zones Cycle By Cycle Int Enable
       EPwm3Regs.TZEINT.bit.DCAEVT1             = 0;          // Digital Compare A Event 1 Int Enable
       EPwm3Regs.TZEINT.bit.DCAEVT2             = 0;          // Digital Compare A Event 2 Int Enable
       EPwm3Regs.TZEINT.bit.DCBEVT1             = 0;          // Digital Compare B Event 1 Int Enable
       EPwm3Regs.TZEINT.bit.DCBEVT2             = 0;          // Digital Compare B Event 2 Int Enable
     */
    EPwm3Regs.TZEINT.all = (EPwm3Regs.TZEINT.all & ~0x7E) | 0x4;

    /*	// Digital Compare A Control Register
       EPwm3Regs.DCACTL.bit.EVT1SYNCE           = 0;          // DCAEVT1 SYNC Enable
       EPwm3Regs.DCACTL.bit.EVT1SOCE            = 1;          // DCAEVT1 SOC Enable
       EPwm3Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0;          // DCAEVT1 Force Sync Signal
       EPwm3Regs.DCACTL.bit.EVT1SRCSEL          = 0;          // DCAEVT1 Source Signal
       EPwm3Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0;          // DCAEVT2 Force Sync Signal
       EPwm3Regs.DCACTL.bit.EVT2SRCSEL          = 0;          // DCAEVT2 Source Signal
     */
    EPwm3Regs.DCACTL.all = (EPwm3Regs.DCACTL.all & ~0x30F) | 0x4;

    /*	// Digital Compare B Control Register
       EPwm3Regs.DCBCTL.bit.EVT1SYNCE           = 0;          // DCBEVT1 SYNC Enable
       EPwm3Regs.DCBCTL.bit.EVT1SOCE            = 0;          // DCBEVT1 SOC Enable
       EPwm3Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0;          // DCBEVT1 Force Sync Signal
       EPwm3Regs.DCBCTL.bit.EVT1SRCSEL          = 0;          // DCBEVT1 Source Signal
       EPwm3Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0;          // DCBEVT2 Force Sync Signal
       EPwm3Regs.DCBCTL.bit.EVT2SRCSEL          = 0;          // DCBEVT2 Source Signal
     */
    EPwm3Regs.DCBCTL.all = (EPwm3Regs.DCBCTL.all & ~0x30F) | 0x0;

    /*	// Digital Compare Trip Select Register
       EPwm3Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0;          // Digital Compare A High COMP Input Select

       EPwm3Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 1;          // Digital Compare A Low COMP Input Select
       EPwm3Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0;          // Digital Compare B High COMP Input Select
       EPwm3Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 1;          // Digital Compare B Low COMP Input Select





     */
    EPwm3Regs.DCTRIPSEL.all = (EPwm3Regs.DCTRIPSEL.all & ~ 0xFFFF) | 0x1010;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm3Regs.TZDCSEL.bit.DCAEVT1            = 0;          // Digital Compare Output A Event 1
       EPwm3Regs.TZDCSEL.bit.DCAEVT2            = 0;          // Digital Compare Output A Event 2
       EPwm3Regs.TZDCSEL.bit.DCBEVT1            = 0;          // Digital Compare Output B Event 1
       EPwm3Regs.TZDCSEL.bit.DCBEVT2            = 0;          // Digital Compare Output B Event 2
     */
    EPwm3Regs.TZDCSEL.all = (EPwm3Regs.TZDCSEL.all & ~0xFFF) | 0x0;

    /*	// Digital Compare Filter Control Register
       EPwm3Regs.DCFCTL.bit.BLANKE              = 0;          // Blanking Enable/Disable
       EPwm3Regs.DCFCTL.bit.PULSESEL            = 1;          // Pulse Select for Blanking & Capture Alignment
       EPwm3Regs.DCFCTL.bit.BLANKINV            = 0;          // Blanking Window Inversion
       EPwm3Regs.DCFCTL.bit.SRCSEL              = 0;          // Filter Block Signal Source Select
     */
    EPwm3Regs.DCFCTL.all = (EPwm3Regs.DCFCTL.all & ~0x3F) | 0x10;
    EPwm3Regs.DCFOFFSET = 0;           // Digital Compare Filter Offset Register
    EPwm3Regs.DCFWINDOW = 0;           // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm3Regs.DCCAPCTL.bit.CAPE              = 0;          // Counter Capture Enable
     */
    EPwm3Regs.DCCAPCTL.all = (EPwm3Regs.DCCAPCTL.all & ~0x1) | 0x0;

    /*	// HRPWM Configuration Register
       EPwm3Regs.HRCNFG.bit.SWAPAB              = 0;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm3Regs.HRCNFG.bit.SELOUTB             = 0;          // EPWMB Output Selection Bit
     */
    EPwm3Regs.HRCNFG.all = (EPwm3Regs.HRCNFG.all & ~0xA0) | 0x0;

    /* Update the Link Registers with the link value for all the Compare values and TBPRD */
    /* No error is thrown if the ePWM register exists in the model or not */
    EPwm3Regs.EPWMXLINK.bit.TBPRDLINK = 2;
    EPwm3Regs.EPWMXLINK.bit.CMPALINK = 2;
    EPwm3Regs.EPWMXLINK.bit.CMPBLINK = 2;
    EPwm3Regs.EPWMXLINK.bit.CMPCLINK = 2;
    EPwm3Regs.EPWMXLINK.bit.CMPDLINK = 2;
    EDIS;
    EALLOW;
    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1;
    EDIS;
  }
}

/* Output and update for function-call system: '<S3>/ePWM' */
#pragma CODE_SECTION (TEST_IPM_2_0_ePWM, "ramfuncs")

void TEST_IPM_2_0_ePWM(void)
{
  /* local block i/o variables */
  uint16_T rtb_Switch[2];
  uint16_T rtb_DataStoreRead7;

  /* Switch: '<S30>/Switch' incorporates:
   *  DataStoreRead: '<S30>/Data Store Read1'
   */
  if (STOP != 0U) {
    rtb_Switch[0] = 1U;
    rtb_Switch[1] = 2U;
  } else {
    rtb_Switch[0] = 0U;
    rtb_Switch[1] = 0U;
  }

  /* End of Switch: '<S30>/Switch' */

  /* DataStoreRead: '<S30>/Data Store Read3' */
  rtb_DataStoreRead7 = COMPARE_A;

  /* S-Function (c2802xpwm): '<S30>/ePWM' */

  /*-- Update CMPA value for ePWM1 --*/
  {
    EPwm1Regs.CMPA.bit.CMPA = (uint16_T)(rtb_DataStoreRead7);
  }

  EPwm1Regs.AQCSFRC.bit.CSFA = rtb_Switch[0];
  EPwm1Regs.AQCSFRC.bit.CSFB = rtb_Switch[1];

  /* DataStoreRead: '<S30>/Data Store Read4' */
  rtb_DataStoreRead7 = COMPARE_B;

  /* S-Function (c2802xpwm): '<S30>/ePWM1' */

  /*-- Update CMPA value for ePWM2 --*/
  {
    EPwm2Regs.CMPA.bit.CMPA = (uint16_T)(rtb_DataStoreRead7);
  }

  EPwm2Regs.AQCSFRC.bit.CSFA = rtb_Switch[0];
  EPwm2Regs.AQCSFRC.bit.CSFB = rtb_Switch[1];

  /* DataStoreRead: '<S30>/Data Store Read7' */
  rtb_DataStoreRead7 = COMPARE_C;

  /* S-Function (c2802xpwm): '<S30>/ePWM2' */

  /*-- Update CMPA value for ePWM3 --*/
  {
    EPwm3Regs.CMPA.bit.CMPA = (uint16_T)(rtb_DataStoreRead7);
  }

  EPwm3Regs.AQCSFRC.bit.CSFA = rtb_Switch[0];
  EPwm3Regs.AQCSFRC.bit.CSFB = rtb_Switch[1];

  /* If: '<S30>/If' incorporates:
   *  DataStoreRead: '<S30>/Data Store Read1'
   */
  if (STOP == 1U) {
    /* Outputs for IfAction SubSystem: '<S30>/If Action Subsystem' incorporates:
     *  ActionPort: '<S118>/Action Port'
     */
    /* DataStoreWrite: '<S118>/Data Store Write' incorporates:
     *  Constant: '<S118>/Constant'
     */
    N_Integral = 0.0F;

    /* DataStoreWrite: '<S118>/Data Store Write1' incorporates:
     *  Constant: '<S118>/Constant'
     */
    Iq_Integral = 0.0F;

    /* DataStoreWrite: '<S118>/Data Store Write10' incorporates:
     *  Constant: '<S118>/Constant'
     */
    FbL_z1_Integral = 0.0F;

    /* DataStoreWrite: '<S118>/Data Store Write12' incorporates:
     *  Constant: '<S118>/Constant'
     */
    FbL_Udc_Integral = 0.0F;

    /* DataStoreWrite: '<S118>/Data Store Write2' incorporates:
     *  Constant: '<S118>/Constant'
     */
    Id_Integral = 0.0F;

    /* DataStoreWrite: '<S118>/Data Store Write3' incorporates:
     *  Constant: '<S118>/Constant'
     */
    Udc_Integral = 0.0F;

    /* DataStoreWrite: '<S118>/Data Store Write4' incorporates:
     *  Constant: '<S118>/Constant'
     */
    smc_x1_integral = 0.0F;

    /* DataStoreWrite: '<S118>/Data Store Write5' incorporates:
     *  Constant: '<S118>/Constant'
     */
    smc_e1_integral = 0.0F;

    /* DataStoreWrite: '<S118>/Data Store Write6' incorporates:
     *  Constant: '<S118>/Constant'
     */
    smc_z1_integral = 0.0F;

    /* DataStoreWrite: '<S118>/Data Store Write7' incorporates:
     *  Constant: '<S118>/Constant'
     */
    FbL_smc_integral = 0.0F;

    /* DataStoreWrite: '<S118>/Data Store Write9' incorporates:
     *  Constant: '<S118>/Constant'
     */
    FbL_z3_Integral = 0.0F;

    /* End of Outputs for SubSystem: '<S30>/If Action Subsystem' */
  }

  /* End of If: '<S30>/If' */
}

#pragma CODE_SECTION (TEST_IPM_2_SystemCore_release_m, "ramfuncs")

static void TEST_IPM_2_SystemCore_release_m(const
  codertarget_tic2000_blocks_SP_T *obj)
{
  uint32_T PinNameLoc;
  uint32_T SPIPinsLoc;
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    PinNameLoc = MW_UNDEFINED_VALUE;
    SPIPinsLoc = MW_UNDEFINED_VALUE;
    MW_SPI_Close(obj->MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc, SPIPinsLoc,
                 PinNameLoc);
  }
}

#pragma CODE_SECTION (TEST_IPM_2__SystemCore_delete_a, "ramfuncs")

static void TEST_IPM_2__SystemCore_delete_a(const
  codertarget_tic2000_blocks_SP_T *obj)
{
  TEST_IPM_2_SystemCore_release_m(obj);
}

#pragma CODE_SECTION (matlabCodegenHandle_matlabCod_g, "ramfuncs")

static void matlabCodegenHandle_matlabCod_g(codertarget_tic2000_blocks_SP_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    TEST_IPM_2__SystemCore_delete_a(obj);
  }
}

/*
 * Start for atomic system:
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 */
#pragma CODE_SECTION (TEST_IPM_2_0_SPITransmit2_Start, "ramfuncs")

void TEST_IPM_2_0_SPITransmit2_Start(DW_SPITransmit2_TEST_IPM_2_0_T *localDW)
{
  codertarget_tic2000_blocks_SP_T *obj;
  uint32_T SSPinNameLoc;
  uint32_T SPIPinsLoc;

  /* Start for MATLABSystem: '<S43>/SPI Transmit2' */
  localDW->obj.matlabCodegenIsDeleted = true;
  localDW->obj.isInitialized = 0L;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  obj = &localDW->obj;
  localDW->obj.isSetupComplete = false;
  localDW->obj.isInitialized = 1L;
  SSPinNameLoc = MW_UNDEFINED_VALUE;
  SPIPinsLoc = MW_UNDEFINED_VALUE;
  obj->MW_SPI_HANDLE = MW_SPI_Open(1UL, SPIPinsLoc, SPIPinsLoc, SPIPinsLoc,
    SSPinNameLoc, true, 0U);
  localDW->obj.isSetupComplete = true;
}

/*
 * Output and update for atomic system:
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 */
#pragma CODE_SECTION (TEST_IPM_2_0_SPITransmit2, "ramfuncs")

void TEST_IPM_2_0_SPITransmit2(uint16_T rtu_0, DW_SPITransmit2_TEST_IPM_2_0_T
  *localDW)
{
  uint16_T status;
  MW_SPI_Mode_type ClockModeValue;
  MW_SPI_FirstBitTransfer_Type MsbFirstTransferLoc;

  /* MATLABSystem: '<S43>/SPI Transmit2' */
  MW_SPI_SetSlaveSelect(localDW->obj.MW_SPI_HANDLE, 0U, true);
  ClockModeValue = MW_SPI_MODE_0;
  MsbFirstTransferLoc = MW_SPI_MOST_SIGNIFICANT_BIT_FIRST;
  status = MW_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 16U, ClockModeValue,
    MsbFirstTransferLoc);
  if (status == 0U) {
    MW_SPI_Write_16bits(localDW->obj.MW_SPI_HANDLE, &rtu_0, 1UL, 0U);
  }

  /* End of MATLABSystem: '<S43>/SPI Transmit2' */
}

/*
 * Termination for atomic system:
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 *    synthesized block
 */
#pragma CODE_SECTION (TEST_IPM_2_0_SPITransmit2_Term, "ramfuncs")

void TEST_IPM_2_0_SPITransmit2_Term(DW_SPITransmit2_TEST_IPM_2_0_T *localDW)
{
  /* Terminate for MATLABSystem: '<S43>/SPI Transmit2' */
  matlabCodegenHandle_matlabCod_g(&localDW->obj);
}

/* Function for MATLAB Function: '<S29>/RAW_DATA2Angle ' */
#pragma CODE_SECTION (TEST_IPM_2_0_mod, "ramfuncs")

static real32_T TEST_IPM_2_0_mod(real32_T x)
{
  real32_T r;
  if (rtIsNaNF(x)) {
    r = (rtNaNF);
  } else if (rtIsInfF(x)) {
    r = (rtNaNF);
  } else if (x == 0.0F) {
    r = 0.0F;
  } else {
    r = (real32_T)fmod(x, 1.0);
    if (r == 0.0F) {
      r = 0.0F;
    } else {
      if (x < 0.0F) {
        r++;
      }
    }
  }

  return r;
}

#pragma CODE_SECTION (TEST_IPM_2_SystemCore_release_a, "ramfuncs")

static void TEST_IPM_2_SystemCore_release_a(const
  codertarget_tic2000_blocks_SP_T *obj)
{
  uint32_T PinNameLoc;
  uint32_T SPIPinsLoc;
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    PinNameLoc = MW_UNDEFINED_VALUE;
    SPIPinsLoc = MW_UNDEFINED_VALUE;
    MW_SPI_Close(obj->MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc, SPIPinsLoc,
                 PinNameLoc);
  }
}

#pragma CODE_SECTION (TEST_IPM_2__SystemCore_delete_g, "ramfuncs")

static void TEST_IPM_2__SystemCore_delete_g(const
  codertarget_tic2000_blocks_SP_T *obj)
{
  TEST_IPM_2_SystemCore_release_a(obj);
}

#pragma CODE_SECTION (matlabCodegenHandle_matlabCod_d, "ramfuncs")

static void matlabCodegenHandle_matlabCod_d(codertarget_tic2000_blocks_SP_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    TEST_IPM_2__SystemCore_delete_g(obj);
  }
}

/* Function for Chart: '<S15>/CCP Stateflow ' */
#pragma CODE_SECTION (TEST_IPM_2_0_init, "ramfuncs")

static void TEST_IPM_2_0_init(void)
{
  setSlave_Version(0, 2);
  setSlave_Version(1, 1);
  setStation_Address(0, 1U);
  setStation_Address(1, 0U);
}

/* Function for Chart: '<S15>/CCP Stateflow ' */
#pragma CODE_SECTION (TEST_IPM_2_0_get_mta0, "ramfuncs")

static void TEST_IPM_2_0_get_mta0(uint16_T first_byte)
{
  c_getUINT32bytes(getMTAPtr(0), getDataPtr(first_byte));
}

/* Function for Chart: '<S15>/CCP Stateflow ' */
#pragma CODE_SECTION (TEST_IPM_2_0_tx_dto, "ramfuncs")

static void TEST_IPM_2_0_tx_dto(uint16_T tx_comm_type)
{
  uint32_T memptr;
  memptr = 0UL;
  setHandled(1);
  setData(0, CCP_DTO_ID);
  setData(1, CCP_CRC_OK);
  setData(2, TEST_IPM_2_0_DW.command_counter);
  if ((tx_comm_type == CCP_TEST) || (tx_comm_type == CCP_DISCONNECT) ||
      (tx_comm_type == CCP_CONNECT) || (tx_comm_type == CCP_SET_MTA) ||
      (tx_comm_type == CCP_SET_DAQ_PTR) || (tx_comm_type == CCP_WRITE_DAQ) ||
      (tx_comm_type == CCP_START_STOP) || (tx_comm_type == CCP_START_STOP_ALL) ||
      (tx_comm_type == CCP_SET_S_STATUS)) {
    setData(3, 0);
    setData(4, 0);
    setData(5, 0);
    setData(6, 0);
    setData(7, 0);
  } else if (tx_comm_type == CCP_GET_CCP_VERSION) {
    setData(3, getSlave_Version(0));
    setData(4, getSlave_Version(1));
  } else if (tx_comm_type == CCP_EXCHANGE_ID) {
    setData(3, TEST_I_SLAVE_ID_LENGTH_NOT_USED);
    setData(4, TES_SLAVE_ID_DATA_TYPE_NOT_USED);
    setData(5, TEST_RESOURCE_AVAILABILITY_MASK);
    setData(6, TEST_I_RESOURCE_PROTECTION_MASK);
  } else if ((tx_comm_type == CCP_DNLOAD) || (tx_comm_type == CCP_DNLOAD_6)) {
    setData(3, TEST_IPM__MTA_ADDRESS_EXTENSION);
    TEST_IPM_2_0_get_mta0(4U);
  } else if (tx_comm_type == CCP_SHORT_UPLOAD) {
    c_setUINT32bytes(&memptr, &TEST_IPM_2_0_B.eCANReceive_o2[4]);
    c_read_uint8s(getDataPtr(3), TEST_IPM_2_0_B.eCANReceive_o2[2], &memptr);
  } else if (tx_comm_type == CCP_UPLOAD) {
    c_read_uint8s(getDataPtr(3), TEST_IPM_2_0_B.eCANReceive_o2[2], getMTAPtr(0));
  } else if (tx_comm_type == CCP_GET_DAQ_SIZE) {
    c_init_daq_list(TEST_IPM_2_0_B.eCANReceive_o2[2]);
    setData(5, 0);
    setData(6, 0);
    setData(7, 0);
  } else {
    if (tx_comm_type == CCP_GET_S_STATUS) {
      setData(3, getS_Status());
      setData(4, TEST_IPM_2_0_S_STATUS_QUALIFIER);
    }
  }
}

/* Function for Chart: '<S15>/CCP Stateflow ' */
#pragma CODE_SECTION (TEST_IPM_2_0_unhandled_command, "ramfuncs")

static void TEST_IPM_2_0_unhandled_command(void)
{
  setHandled(0);
  setData(0, TEST_IPM_2_0_B.eCANReceive_o2[0]);
  setData(1, TEST_IPM_2_0_B.eCANReceive_o2[1]);
  setData(2, TEST_IPM_2_0_B.eCANReceive_o2[2]);
  setData(3, TEST_IPM_2_0_B.eCANReceive_o2[3]);
  setData(4, TEST_IPM_2_0_B.eCANReceive_o2[4]);
  setData(5, TEST_IPM_2_0_B.eCANReceive_o2[5]);
  setData(6, TEST_IPM_2_0_B.eCANReceive_o2[6]);
  setData(7, TEST_IPM_2_0_B.eCANReceive_o2[7]);
}

/* Function for Chart: '<S15>/CCP Stateflow ' */
#pragma CODE_SECTION (TEST_IPM_2_0_write_daq, "ramfuncs")

static void TEST_IPM_2_0_write_daq(void)
{
  uint32_T b_address;
  b_address = 0UL;
  c_setUINT32bytes(&b_address, &TEST_IPM_2_0_B.eCANReceive_o2[4]);
  c_write_daq(TEST_IPM_2_0_B.eCANReceive_o2[2], b_address);
}

/* Function for Chart: '<S15>/CCP Stateflow ' */
#pragma CODE_SECTION (TEST_IPM_2_0_set_mta, "ramfuncs")

static void TEST_IPM_2_0_set_mta(void)
{
  c_setUINT32bytes(getMTAPtr(TEST_IPM_2_0_B.eCANReceive_o2[2]),
                   &TEST_IPM_2_0_B.eCANReceive_o2[4]);
}

/* System initialize for function-call system: '<Root>/BackgroundTask' */
#pragma CODE_SECTION (TEST_IPM_2__BackgroundTask_Init, "ramfuncs")

void TEST_IPM_2__BackgroundTask_Init(void)
{
  /* SystemInitialize for S-Function (c280xcanrcv): '<S8>/eCAN Receive' incorporates:
   *  SubSystem: '<S8>/DTO Processing'
   */

  /* System initialize for function-call system: '<S8>/DTO Processing' */

  /* SystemInitialize for Chart: '<S10>/Chart' incorporates:
   *  SubSystem: '<S10>/CCP'
   */
  /* SystemInitialize for Chart: '<S15>/CCP Stateflow ' */
  TEST_IPM_2_0_DW.is_c28_canblocks_extras = TEST_IPM_2_IN_NO_ACTIVE_CHILD_h;
  TEST_IPM_2_0_DW.command_counter = 0U;

  /* Chart: '<S15>/CCP Stateflow ' */
  TEST_IPM_2_0_init();
  TEST_IPM_2_0_DW.is_c28_canblocks_extras = TEST_IPM_2_0_IN_Disconnected;
  setCurrent_State(CCP_DISCONNECTED_STATE);
  c_reset_all_DAQ_lists();

  /* End of SystemInitialize for S-Function (c280xcanrcv): '<S8>/eCAN Receive' */
}

/* System reset for function-call system: '<Root>/BackgroundTask' */
#pragma CODE_SECTION (TEST_IPM_2_BackgroundTask_Reset, "ramfuncs")

void TEST_IPM_2_BackgroundTask_Reset(void)
{
  /* SystemReset for S-Function (c280xcanrcv): '<S8>/eCAN Receive' incorporates:
   *  SubSystem: '<S8>/DTO Processing'
   */

  /* Reset conditions for function-call system: '<S8>/DTO Processing' */

  /* SystemReset for Chart: '<S10>/Chart' incorporates:
   *  SubSystem: '<S10>/CCP'
   */
  /* SystemReset for Chart: '<S15>/CCP Stateflow ' */
  TEST_IPM_2_0_DW.is_c28_canblocks_extras = TEST_IPM_2_IN_NO_ACTIVE_CHILD_h;
  TEST_IPM_2_0_DW.command_counter = 0U;

  /* Chart: '<S15>/CCP Stateflow ' */
  TEST_IPM_2_0_init();
  TEST_IPM_2_0_DW.is_c28_canblocks_extras = TEST_IPM_2_0_IN_Disconnected;
  setCurrent_State(CCP_DISCONNECTED_STATE);
  c_reset_all_DAQ_lists();

  /* End of SystemReset for S-Function (c280xcanrcv): '<S8>/eCAN Receive' */
}

/* Start for function-call system: '<Root>/BackgroundTask' */
#pragma CODE_SECTION (TEST_IPM_2_BackgroundTask_Start, "ramfuncs")

void TEST_IPM_2_BackgroundTask_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S8>/eCAN Receive' incorporates:
   *  SubSystem: '<S8>/DTO Processing'
   */

  /* Start for function-call system: '<S8>/DTO Processing' */

  /* Start for Chart: '<S10>/Chart' incorporates:
   *  SubSystem: '<S10>/CCP(Termination)'
   */
  /* Start for function-call system: '<S10>/CCP(Termination)' */

  /* Start for S-Function (sfun_ccp_termination): '<S13>/CAN Calibration Protocol (Termination)' incorporates:
   *  SubSystem: '<S13>/CAN Transmit'
   */

  /* Start for function-call system: '<S13>/CAN Transmit' */

  /* Start for S-Function (c280xcanxmt): '<S18>/eCAN Transmit' */
  {
  }

  /* End of Start for S-Function (sfun_ccp_termination): '<S13>/CAN Calibration Protocol (Termination)' */
  {
    tCANMsgObject sRXCANMessage;
    unsigned char ucRXMsgData[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    sRXCANMessage.ui32MsgID = 1786;    // CAN message ID
    sRXCANMessage.ui32MsgIDMask = 0;   // no mask needed for TX
    sRXCANMessage.ui32Flags = MSG_OBJ_NO_FLAGS;
    sRXCANMessage.ui32MsgLen = sizeof(ucRXMsgData);// size of message is 4
    sRXCANMessage.pucMsgData = ucRXMsgData;// ptr to message content

    // Setup the message object being used to receive messages
    CANMessageSet(CANA_BASE, 1, &sRXCANMessage, MSG_OBJ_TYPE_RX);
  }

  /* Initialize TEST_IPM_2_0_B.eCANReceive_o2[0] */
  {
    TEST_IPM_2_0_B.eCANReceive_o2[0] = (uint8_T)0.0;
    TEST_IPM_2_0_B.eCANReceive_o2[1] = (uint8_T)0.0;
    TEST_IPM_2_0_B.eCANReceive_o2[2] = (uint8_T)0.0;
    TEST_IPM_2_0_B.eCANReceive_o2[3] = (uint8_T)0.0;
    TEST_IPM_2_0_B.eCANReceive_o2[4] = (uint8_T)0.0;
    TEST_IPM_2_0_B.eCANReceive_o2[5] = (uint8_T)0.0;
    TEST_IPM_2_0_B.eCANReceive_o2[6] = (uint8_T)0.0;
    TEST_IPM_2_0_B.eCANReceive_o2[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S8>/eCAN Receive' */

  /* Start for S-Function (sfun_function_def): '<S9>/Function Definition' incorporates:
   *  SubSystem: '<S9>/Send DAQ Message'
   */

  /* Start for function-call system: '<S9>/Send DAQ Message' */

  /* Start for S-Function (c280xcanxmt): '<S11>/eCAN Transmit' */
  {
  }

  /* End of Start for S-Function (sfun_function_def): '<S9>/Function Definition' */
}

/* Output and update for function-call system: '<Root>/BackgroundTask' */
#pragma CODE_SECTION (TEST_IPM_2_0_BackgroundTask, "ramfuncs")

void TEST_IPM_2_0_BackgroundTask(void)
{
  /* S-Function (c280xcanrcv): '<S8>/eCAN Receive' */
  {
    tCANMsgObject sRXCANMessage;
    unsigned char ucRXMsgData[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    sRXCANMessage.ui32MsgID = 1786;    // CAN message ID
    sRXCANMessage.ui32MsgIDMask = 0;   // no mask needed for TX
    sRXCANMessage.ui32Flags = MSG_OBJ_NO_FLAGS;
    sRXCANMessage.ui32MsgLen = sizeof(ucRXMsgData);// size of message
    sRXCANMessage.pucMsgData = ucRXMsgData;// ptr to message content

    // Get the receive message
    CANMessageGet(CANA_BASE, 1, &sRXCANMessage, false);
    if (sRXCANMessage.ui32MsgLen > 0) {
      TEST_IPM_2_0_B.eCANReceive_o2[0] = ucRXMsgData[0];
      TEST_IPM_2_0_B.eCANReceive_o2[1] = ucRXMsgData[1];
      TEST_IPM_2_0_B.eCANReceive_o2[2] = ucRXMsgData[2];
      TEST_IPM_2_0_B.eCANReceive_o2[3] = ucRXMsgData[3];
      TEST_IPM_2_0_B.eCANReceive_o2[4] = ucRXMsgData[4];
      TEST_IPM_2_0_B.eCANReceive_o2[5] = ucRXMsgData[5];
      TEST_IPM_2_0_B.eCANReceive_o2[6] = ucRXMsgData[6];
      TEST_IPM_2_0_B.eCANReceive_o2[7] = ucRXMsgData[7];

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S8>/DTO Processing' */
      {
        boolean_T guard1 = false;

        /* Chart: '<S10>/Chart' incorporates:
         *  SubSystem: '<S10>/CCP'
         */
        /* Chart: '<S15>/CCP Stateflow ' */
        guard1 = false;
        switch (TEST_IPM_2_0_DW.is_c28_canblocks_extras) {
         case TEST_IPM_2_0_IN_Connected:
          TEST_IPM_2_0_DW.command_counter = TEST_IPM_2_0_B.eCANReceive_o2[1];
          if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_GET_CCP_VERSION) {
            setMaster_Version(0, TEST_IPM_2_0_B.eCANReceive_o2[2]);
            setMaster_Version(1, TEST_IPM_2_0_B.eCANReceive_o2[3]);
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_GET_CCP_VERSION);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_EXCHANGE_ID) {
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_EXCHANGE_ID);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_SET_MTA) {
            TEST_IPM_2_0_set_mta();
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_SET_MTA);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_DNLOAD) {
            c_write_uint8s(&TEST_IPM_2_0_B.eCANReceive_o2[3],
                           TEST_IPM_2_0_B.eCANReceive_o2[2], getMTAPtr(0));
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_DNLOAD);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_DNLOAD_6) {
            c_write_uint8s(&TEST_IPM_2_0_B.eCANReceive_o2[2], 6, getMTAPtr(0));
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_DNLOAD_6);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_SHORT_UPLOAD) {
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_SHORT_UPLOAD);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_UPLOAD) {
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_UPLOAD);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_GET_DAQ_SIZE) {
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_GET_DAQ_SIZE);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_SET_DAQ_PTR) {
            c_set_element_pointer(TEST_IPM_2_0_B.eCANReceive_o2[2],
                                  TEST_IPM_2_0_B.eCANReceive_o2[3],
                                  TEST_IPM_2_0_B.eCANReceive_o2[4]);
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_SET_DAQ_PTR);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_WRITE_DAQ) {
            TEST_IPM_2_0_write_daq();
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_WRITE_DAQ);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_START_STOP_ALL) {
            c_start_stop_all(TEST_IPM_2_0_B.eCANReceive_o2[2]);
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_START_STOP_ALL);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_START_STOP) {
            c_start_stop(TEST_IPM_2_0_B.eCANReceive_o2[2],
                         TEST_IPM_2_0_B.eCANReceive_o2[3],
                         TEST_IPM_2_0_B.eCANReceive_o2[4],
                         TEST_IPM_2_0_B.eCANReceive_o2[5], 1);
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_START_STOP);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_SET_S_STATUS) {
            setS_Status(TEST_IPM_2_0_B.eCANReceive_o2[2]);
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_SET_S_STATUS);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_GET_S_STATUS) {
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_GET_S_STATUS);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_TEST) {
            if ((TEST_IPM_2_0_B.eCANReceive_o2[2] == getStation_Address(0)) &&
                (TEST_IPM_2_0_B.eCANReceive_o2[3] == getStation_Address(1))) {
              TEST_IPM_2_0_tx_dto((uint16_T)CCP_TEST);
            } else {
              setHandled(0);
              guard1 = true;
            }
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_CONNECT) {
            if ((TEST_IPM_2_0_B.eCANReceive_o2[2] == getStation_Address(0)) &&
                (TEST_IPM_2_0_B.eCANReceive_o2[3] == getStation_Address(1))) {
              TEST_IPM_2_0_tx_dto((uint16_T)CCP_CONNECT);
            } else {
              setHandled(0);
              guard1 = true;
            }
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_DISCONNECT) {
            if ((int16_T)TEST_IPM_2_0_B.eCANReceive_o2[2] == (int16_T)
                TEST_IPM_2_PERMANENT_DISCONNECT) {
              TEST_IPM_2_0_tx_dto((uint16_T)CCP_DISCONNECT);
              TEST_IPM_2_0_DW.is_c28_canblocks_extras =
                TEST_IPM_2_0_IN_Disconnected;
              setCurrent_State(CCP_DISCONNECTED_STATE);
              c_reset_all_DAQ_lists();
            } else if ((int16_T)TEST_IPM_2_0_B.eCANReceive_o2[2] == (int16_T)
                       TEST_IPM_2_TEMPORARY_DISCONNECT) {
              TEST_IPM_2_0_tx_dto((uint16_T)CCP_DISCONNECT);
              guard1 = true;
            } else {
              TEST_IPM_2_0_unhandled_command();
            }
          } else {
            TEST_IPM_2_0_unhandled_command();
          }
          break;

         case TEST_IPM_2_0_IN_Disconnected:
          TEST_IPM_2_0_DW.command_counter = TEST_IPM_2_0_B.eCANReceive_o2[1];
          if ((TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_CONNECT) &&
              (TEST_IPM_2_0_B.eCANReceive_o2[2] == getStation_Address(0)) &&
              (TEST_IPM_2_0_B.eCANReceive_o2[3] == getStation_Address(1))) {
            TEST_IPM_2_0_DW.is_c28_canblocks_extras =
              TEST_IPM_2_IN_NO_ACTIVE_CHILD_h;
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_CONNECT);
            TEST_IPM_2_0_DW.is_c28_canblocks_extras = TEST_IPM_2_0_IN_Connected;
            setCurrent_State(CCP_CONNECTED_STATE);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_TEST) {
            if (TEST_IPM_2_0_B.eCANReceive_o2[2] == getStation_Address(0)) {
              if (TEST_IPM_2_0_B.eCANReceive_o2[3] == getStation_Address(1)) {
                TEST_IPM_2_0_tx_dto((uint16_T)CCP_TEST);
              } else {
                setHandled(0);
              }
            } else {
              setHandled(0);
            }
          } else {
            setHandled(0);
          }
          break;

         default:
          /* case IN_Temporarily_Disconnected: */
          TEST_IPM_2_0_DW.command_counter = TEST_IPM_2_0_B.eCANReceive_o2[1];
          if ((TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_TEST) &&
              (TEST_IPM_2_0_B.eCANReceive_o2[2] == getStation_Address(0)) &&
              (TEST_IPM_2_0_B.eCANReceive_o2[3] == getStation_Address(1))) {
            TEST_IPM_2_0_tx_dto((uint16_T)CCP_TEST);
          } else if (TEST_IPM_2_0_B.eCANReceive_o2[0] == CCP_CONNECT) {
            if (TEST_IPM_2_0_B.eCANReceive_o2[2] == getStation_Address(0)) {
              if (TEST_IPM_2_0_B.eCANReceive_o2[3] == getStation_Address(1)) {
                TEST_IPM_2_0_tx_dto((uint16_T)CCP_CONNECT);
                TEST_IPM_2_0_DW.is_c28_canblocks_extras =
                  TEST_IPM_2_0_IN_Connected;
                setCurrent_State(CCP_CONNECTED_STATE);
              } else {
                setHandled(0);
              }
            } else {
              setHandled(0);
            }
          } else {
            setHandled(0);
          }
          break;
        }

        if (guard1) {
          TEST_IPM_2_0_DW.is_c28_canblocks_extras =
            TES_IN_Temporarily_Disconnected;
          setCurrent_State(CCP_TEMPORARILY_DISCONNECTED_STATE);
        }

        /* End of Chart: '<S15>/CCP Stateflow ' */

        /* Chart: '<S10>/Chart' incorporates:
         *  SubSystem: '<S10>/CCP(Termination)'
         */
        /* Output and update for function-call system: '<S10>/CCP(Termination)' */

        /* S-Function (sfun_ccp_termination): '<S13>/CAN Calibration Protocol (Termination)' */

        /* Outputs for sfun_ccp_termination */
        if ((getHandled()==0) && (getCurrent_State()==CCP_CONNECTED_STATE)) {
          /* message is unhandled, but we are connected so we must output
           * the Unknown Command response */
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[0] = 0xFF;
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[1] = 0x30;
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[2] = getData(1);
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[3] = 0;
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[4] = 0;
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[5] = 0;
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[6] = 0;
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[7] = 0;
        } else if (getHandled()==1) {
          /* we have a valid response */
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[0] = getData(0);
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[1] = getData(1);
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[2] = getData(2);
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[3] = getData(3);
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[4] = getData(4);
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[5] = getData(5);
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[6] = getData(6);
          TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[7] = getData(7);
        }

        if ((getHandled()==1) || (getCurrent_State()==CCP_CONNECTED_STATE)) {
          /* We either handled the message and have a valid response,
           * or we have an unknown command response */

          /* Output and update for function-call system: '<S13>/CAN Transmit' */

          /* S-Function (c280xcanxmt): '<S18>/eCAN Transmit' */
          {
            tCANMsgObject sTXCANMessage;
            unsigned char ucTXMsgData[8];
            ucTXMsgData[0] = (TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[0]);
            ucTXMsgData[1] = (TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[1]);
            ucTXMsgData[2] = (TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[2]);
            ucTXMsgData[3] = (TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[3]);
            ucTXMsgData[4] = (TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[4]);
            ucTXMsgData[5] = (TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[5]);
            ucTXMsgData[6] = (TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[6]);
            ucTXMsgData[7] = (TEST_IPM_2_0_B.CANCalibrationProtocolTerminati[7]);
            sTXCANMessage.ui32MsgIDMask = 0;// no mask needed for TX
            sTXCANMessage.ui32MsgLen = 8;// size of message
            sTXCANMessage.ui32MsgID = 1787;// CAN message ID - use 1
            sTXCANMessage.pucMsgData = ucTXMsgData;// ptr to message content
            sTXCANMessage.ui32Flags = MSG_OBJ_NO_FLAGS;
            CANMessageSet(CANA_BASE, 3, &sTXCANMessage, MSG_OBJ_TYPE_TX);
          }
        }

        /* End of Outputs for S-Function (sfun_ccp_termination): '<S13>/CAN Calibration Protocol (Termination)' */
      }
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S8>/eCAN Receive' */
}

/*
 * Output and update for atomic system:
 *    '<S119>/MATLAB Function'
 *    '<S141>/MATLAB Function'
 */
#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction_k, "ramfuncs")

void TEST_IPM_2_0_MATLABFunction_k(real32_T rtu_Target, real32_T rtu_Step,
  real32_T rtu_LastOutput, real32_T *rty_Output)
{
  real32_T Temp;
  if (rtu_LastOutput <= rtu_Target) {
    Temp = rtu_LastOutput + rtu_Step;
  } else {
    Temp = rtu_LastOutput - rtu_Step;
  }

  if (fabsf(Temp - rtu_Target) <= rtu_Step * 2.0F) {
    Temp = rtu_Target;
  }

  if (STOP != 0U) {
    Temp = 0.0F;
  }

  *rty_Output = Temp;
}

/*
 * Output and update for atomic system:
 *    '<S6>/MATLAB Function1'
 *    '<S6>/MATLAB Function2'
 *    '<S6>/MATLAB Function4'
 */
#pragma CODE_SECTION (TEST_IPM_2_0_MATLABFunction1, "ramfuncs")

void TEST_IPM_2_0_MATLABFunction1(uint16_T rtu_input, real32_T *rty_Output)
{
  real32_T temp_voltage;
  temp_voltage = (real32_T)rtu_input * 0.00073242F;
  *rty_Output = ((126.3F - 198.8F * temp_voltage) + 133.3F * temp_voltage *
                 temp_voltage) - 33.83F * temp_voltage * temp_voltage *
    temp_voltage;
}

/* Model step function */
#pragma CODE_SECTION (TEST_IPM_2_0_step, "ramfuncs")

void TEST_IPM_2_0_step(void)
{
  real32_T rtb_Output_b;
  real32_T rtb_Output_be;
  real32_T rtb_Output_hh;
  real32_T y;
  if (TEST_IPM_2_0_M->Timing.TaskCounters.TID[1] == 0) {
    /* S-Function (c2802xadc): '<S6>/ADC_TempA' */
    {
      /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
      /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
      AdcaRegs.ADCSOCFRC1.bit.SOC3 = 1;

      /* Wait for the period of Sampling window and EOC result to be latched after trigger */
      asm(" RPT #75 || NOP");
      TEST_IPM_2_0_B.ADC_TempA = (AdcaResultRegs.ADCRESULT3);
    }

    /* MATLAB Function: '<S6>/MATLAB Function1' */
    TEST_IPM_2_0_MATLABFunction1(TEST_IPM_2_0_B.ADC_TempA, &rtb_Output_b);

    /* Sum: '<S133>/sum1' incorporates:
     *  DataStoreWrite: '<S6>/Data Store Write'
     *  Gain: '<S133>/C'
     *  Gain: '<S133>/D'
     *  UnitDelay: '<S133>/Delay_x'
     */
    TempA = 0.0911855921F * rtb_Output_b + 0.0181762874F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE;

    /* S-Function (c2802xadc): '<S6>/ADC_TempB' */
    {
      /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
      /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
      AdcaRegs.ADCSOCFRC1.bit.SOC4 = 1;

      /* Wait for the period of Sampling window and EOC result to be latched after trigger */
      asm(" RPT #75 || NOP");
      TEST_IPM_2_0_B.ADC_TempB = (AdcaResultRegs.ADCRESULT4);
    }

    /* MATLAB Function: '<S6>/MATLAB Function2' */
    TEST_IPM_2_0_MATLABFunction1(TEST_IPM_2_0_B.ADC_TempB, &rtb_Output_be);

    /* Sum: '<S134>/sum1' incorporates:
     *  DataStoreWrite: '<S6>/Data Store Write1'
     *  Gain: '<S134>/C'
     *  Gain: '<S134>/D'
     *  UnitDelay: '<S134>/Delay_x'
     */
    TempB = 0.0911855921F * rtb_Output_be + 0.0181762874F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE_a;

    /* S-Function (c2802xadc): '<S6>/ADC_TempC' */
    {
      /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
      /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
      AdcaRegs.ADCSOCFRC1.bit.SOC5 = 1;

      /* Wait for the period of Sampling window and EOC result to be latched after trigger */
      asm(" RPT #75 || NOP");
      TEST_IPM_2_0_B.ADC_TempC = (AdcaResultRegs.ADCRESULT5);
    }

    /* MATLAB Function: '<S6>/MATLAB Function4' */
    TEST_IPM_2_0_MATLABFunction1(TEST_IPM_2_0_B.ADC_TempC, &rtb_Output_hh);

    /* Sum: '<S135>/sum1' incorporates:
     *  DataStoreWrite: '<S6>/Data Store Write2'
     *  Gain: '<S135>/C'
     *  Gain: '<S135>/D'
     *  UnitDelay: '<S135>/Delay_x'
     */
    TempC = 0.0911855921F * rtb_Output_hh + 0.0181762874F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE_c;

    /* MinMax: '<S6>/Max' incorporates:
     *  DataStoreWrite: '<S6>/Data Store Write'
     *  DataStoreWrite: '<S6>/Data Store Write1'
     *  DataStoreWrite: '<S6>/Data Store Write2'
     */
    if ((TempA > TempB) || rtIsNaNF(TempB)) {
      y = TempA;
    } else {
      y = TempB;
    }

    if ((!(y > TempC)) && (!rtIsNaNF(TempC))) {
      y = TempC;
    }

    /* End of MinMax: '<S6>/Max' */

    /* MATLAB Function: '<S6>/MATLAB Function3' incorporates:
     *  DataStoreRead: '<S6>/Data Store Read'
     *  DataStoreRead: '<S6>/Data Store Read1'
     *  DataStoreRead: '<S6>/Data Store Read2'
     *  DataStoreRead: '<S6>/Data Store Read8'
     *  DataStoreRead: '<S6>/Data Store Read9'
     */
    if (y >= 95.0F) {
      PROTECT |= 4U;
      STOP = 1U;
    }

    if ((Udc_FBK >= UDCPROTECT + 15.0F) || (Udc_FBK <= UDCPROTECT - 45.0F)) {
      PROTECT |= 2U;
      STOP = 1U;
    }

    if (((N_FBK >= N_REF + 300.0F) || (N_FBK <= N_REF - 300.0F)) && (ControlMode
         == 4U)) {
      PROTECT |= 8U;
      STOP = 1U;
    }

    if (((Udc_FBK >= Udc_REF + 15.0F) || (Udc_FBK <= Udc_REF - 15.0F)) &&
        ((ControlMode == 3U) || (ControlMode == 6U))) {
      PROTECT |= 4U;
      STOP = 1U;
    }

    /* End of MATLAB Function: '<S6>/MATLAB Function3' */

    /* Sum: '<S135>/A*x(k) + B*u(k)' incorporates:
     *  Gain: '<S135>/A'
     *  Gain: '<S135>/B'
     *  UnitDelay: '<S135>/Delay_x'
     */
    TEST_IPM_2_0_DW.Delay_x_DSTATE_c = 0.817628801F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE_c + 9.11856F * rtb_Output_hh;

    /* Sum: '<S134>/A*x(k) + B*u(k)' incorporates:
     *  Gain: '<S134>/A'
     *  Gain: '<S134>/B'
     *  UnitDelay: '<S134>/Delay_x'
     */
    TEST_IPM_2_0_DW.Delay_x_DSTATE_a = 0.817628801F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE_a + 9.11856F * rtb_Output_be;

    /* Sum: '<S133>/A*x(k) + B*u(k)' incorporates:
     *  Gain: '<S133>/A'
     *  Gain: '<S133>/B'
     *  UnitDelay: '<S133>/Delay_x'
     */
    TEST_IPM_2_0_DW.Delay_x_DSTATE = 0.817628801F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE + 9.11856F * rtb_Output_b;

    /* Sum: '<S139>/sum1' incorporates:
     *  DataStoreRead: '<S6>/Data Store Read3'
     *  DataStoreWrite: '<S6>/Data Store Write7'
     *  Gain: '<S139>/C'
     *  Gain: '<S139>/D'
     *  UnitDelay: '<S139>/Delay_x'
     */
    Id_Filter = 0.00199601054F * Id_REF + 0.0199600793F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE_h;

    /* Sum: '<S139>/A*x(k) + B*u(k)' incorporates:
     *  DataStoreRead: '<S6>/Data Store Read3'
     *  Gain: '<S139>/A'
     *  Gain: '<S139>/B'
     *  UnitDelay: '<S139>/Delay_x'
     */
    TEST_IPM_2_0_DW.Delay_x_DSTATE_h = 0.996008F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE_h + 0.199601069F * Id_REF;

    /* Sum: '<S140>/sum1' incorporates:
     *  DataStoreRead: '<S6>/Data Store Read7'
     *  DataStoreWrite: '<S6>/Data Store Write8'
     *  Gain: '<S140>/C'
     *  Gain: '<S140>/D'
     *  UnitDelay: '<S140>/Delay_x'
     */
    Iq_Filter = 0.00199601054F * Iq_REF + 0.0199600793F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE_e;

    /* Sum: '<S140>/A*x(k) + B*u(k)' incorporates:
     *  DataStoreRead: '<S6>/Data Store Read7'
     *  Gain: '<S140>/A'
     *  Gain: '<S140>/B'
     *  UnitDelay: '<S140>/Delay_x'
     */
    TEST_IPM_2_0_DW.Delay_x_DSTATE_e = 0.996008F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE_e + 0.199601069F * Iq_REF;
  }

  /* Outputs for Atomic SubSystem: '<Root>/SpeedREF' */
  /* Saturate: '<S5>/Saturation' incorporates:
   *  DataStoreRead: '<S5>/Data Store Read'
   */
  if (N_Dem > 6000.0F) {
    rtb_Output_b = 6000.0F;
  } else if (N_Dem < -6000.0F) {
    rtb_Output_b = -6000.0F;
  } else {
    rtb_Output_b = N_Dem;
  }

  /* End of Saturate: '<S5>/Saturation' */

  /* MATLAB Function: '<S119>/MATLAB Function' incorporates:
   *  DataStoreRead: '<S5>/Data Store Read2'
   *  UnitDelay: '<S119>/Unit Delay'
   */
  TEST_IPM_2_0_MATLABFunction_k(rtb_Output_b, N_Step,
    TEST_IPM_2_0_DW.UnitDelay_DSTATE_h, &TEST_IPM_2_0_DW.UnitDelay_DSTATE_h);

  /* Saturate: '<S5>/Saturation1' incorporates:
   *  UnitDelay: '<S119>/Unit Delay'
   */
  if (TEST_IPM_2_0_DW.UnitDelay_DSTATE_h > 6000.0F) {
    N_REF = 6000.0F;
  } else if (TEST_IPM_2_0_DW.UnitDelay_DSTATE_h < -6000.0F) {
    N_REF = -6000.0F;
  } else {
    N_REF = TEST_IPM_2_0_DW.UnitDelay_DSTATE_h;
  }

  /* End of Saturate: '<S5>/Saturation1' */
  /* End of Outputs for SubSystem: '<Root>/SpeedREF' */

  /* Outputs for Atomic SubSystem: '<Root>/UdcREF' */
  /* Saturate: '<S7>/Saturation' incorporates:
   *  DataStoreRead: '<S7>/Data Store Read1'
   */
  if (Udc_Dem > 50.0F) {
    rtb_Output_b = 50.0F;
  } else if (Udc_Dem < 0.0F) {
    rtb_Output_b = 0.0F;
  } else {
    rtb_Output_b = Udc_Dem;
  }

  /* End of Saturate: '<S7>/Saturation' */

  /* MATLAB Function: '<S141>/MATLAB Function' incorporates:
   *  DataStoreRead: '<S7>/Data Store Read3'
   *  UnitDelay: '<S141>/Unit Delay'
   */
  TEST_IPM_2_0_MATLABFunction_k(rtb_Output_b, Udc_Step,
    TEST_IPM_2_0_DW.UnitDelay_DSTATE, &TEST_IPM_2_0_DW.UnitDelay_DSTATE);

  /* Saturate: '<S7>/Saturation1' incorporates:
   *  UnitDelay: '<S141>/Unit Delay'
   */
  if (TEST_IPM_2_0_DW.UnitDelay_DSTATE > 50.0F) {
    Udc_REF = 50.0F;
  } else if (TEST_IPM_2_0_DW.UnitDelay_DSTATE < 0.0F) {
    Udc_REF = 0.0F;
  } else {
    Udc_REF = TEST_IPM_2_0_DW.UnitDelay_DSTATE;
  }

  /* End of Saturate: '<S7>/Saturation1' */
  /* End of Outputs for SubSystem: '<Root>/UdcREF' */
  if (TEST_IPM_2_0_M->Timing.TaskCounters.TID[1] == 0) {
    /* Sum: '<S136>/sum1' incorporates:
     *  DataStoreRead: '<S6>/Data Store Read4'
     *  DataStoreWrite: '<S6>/Data Store Write4'
     *  Gain: '<S136>/C'
     *  Gain: '<S136>/D'
     *  UnitDelay: '<S136>/Delay_x'
     */
    UdComP_Filter = 0.00199601054F * UDOUT_Comp + 0.0199600793F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE_f;

    /* Sum: '<S136>/A*x(k) + B*u(k)' incorporates:
     *  DataStoreRead: '<S6>/Data Store Read4'
     *  Gain: '<S136>/A'
     *  Gain: '<S136>/B'
     *  UnitDelay: '<S136>/Delay_x'
     */
    TEST_IPM_2_0_DW.Delay_x_DSTATE_f = 0.996008F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE_f + 0.199601069F * UDOUT_Comp;

    /* Sum: '<S137>/sum1' incorporates:
     *  DataStoreRead: '<S6>/Data Store Read5'
     *  DataStoreWrite: '<S6>/Data Store Write5'
     *  Gain: '<S137>/C'
     *  Gain: '<S137>/D'
     *  UnitDelay: '<S137>/Delay_x'
     */
    UqComP_Filter = 0.00199601054F * UQOUT_Comp + 0.0199600793F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE_g;

    /* Sum: '<S137>/A*x(k) + B*u(k)' incorporates:
     *  DataStoreRead: '<S6>/Data Store Read5'
     *  Gain: '<S137>/A'
     *  Gain: '<S137>/B'
     *  UnitDelay: '<S137>/Delay_x'
     */
    TEST_IPM_2_0_DW.Delay_x_DSTATE_g = 0.996008F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE_g + 0.199601069F * UQOUT_Comp;

    /* Sum: '<S138>/sum1' incorporates:
     *  DataStoreRead: '<S6>/Data Store Read6'
     *  DataStoreWrite: '<S6>/Data Store Write6'
     *  Gain: '<S138>/C'
     *  Gain: '<S138>/D'
     *  UnitDelay: '<S138>/Delay_x'
     */
    UsComP_Filter = 0.00199601054F * USOUT_Comp + 0.0199600793F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE_gm;

    /* Sum: '<S138>/A*x(k) + B*u(k)' incorporates:
     *  DataStoreRead: '<S6>/Data Store Read6'
     *  Gain: '<S138>/A'
     *  Gain: '<S138>/B'
     *  UnitDelay: '<S138>/Delay_x'
     */
    TEST_IPM_2_0_DW.Delay_x_DSTATE_gm = 0.996008F *
      TEST_IPM_2_0_DW.Delay_x_DSTATE_gm + 0.199601069F * USOUT_Comp;
  }

  rate_scheduler();
}

/* Model initialize function */
#pragma CODE_SECTION (TEST_IPM_2_0_initialize, "ramfuncs")

void TEST_IPM_2_0_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)TEST_IPM_2_0_M, 0,
                sizeof(RT_MODEL_TEST_IPM_2_0_T));

  /* block I/O */
  (void) memset(((void *) &TEST_IPM_2_0_B), 0,
                sizeof(B_TEST_IPM_2_0_T));

  /* states (dwork) */
  (void) memset((void *)&TEST_IPM_2_0_DW, 0,
                sizeof(DW_TEST_IPM_2_0_T));

  /* exported global states */
  MRAS_Rs = 0.0F;
  Tem_Dem = 0.0F;
  Tem_Step = 0.0F;
  DEKF_Rs = 0.0F;
  DEKF_Ldd = 0.0F;
  DEKF_Ldq = 0.0F;
  DEKF_Lqq = 0.0F;
  DEKF_IdhOb = 0.0F;
  DEKF_IqhOb = 0.0F;
  HFI_Imd = 0.0F;
  HFI_Umd = 0.0F;
  HFI_Umq = 0.0F;
  HFI_FRQ = 0.0F;
  HFI_Imq = 0.0F;
  DEKF_R = 0.0F;
  DEKF_Qx = 0.0F;
  DEKF_QpRs = 0.0F;
  DEKF_QpLdd = 0.0F;
  DEKF_QpLdq = 0.0F;
  DEKF_QpLqq = 0.0F;
  DEKF_Phiq0 = 0.0F;
  Phi_dOb = 0.0F;
  Phi_Rs = 0.0F;
  Phi_qOb = 0.0F;
  DEKF_Gamma = 0.0F;
  DEKF_Udelay = 0.0F;
  INITV_RS = 0.0F;
  INITV_NDD = 0.0F;
  INITV_NDQ = 0.0F;
  INITV_NQQ = 0.0F;
  Id_Filter = 0.0F;
  Iq_Filter = 0.0F;
  Tr_Phidm = 0.0F;
  Tr_Lqap = 0.0F;
  Tr_Lqinc = 0.0F;
  Tr_Ldap = 0.0F;
  Tr_Ldinc = 0.0F;
  V_OFFSET = 0.0F;
  Tr_Ldqinc = 0.0F;
  Tr_Tem = 0.0F;
  Tr_Ttotal = 0.0F;
  MRAS_Ld = 0.0F;
  MRAS_Lq = 0.0F;
  MRAS_KR = 0.0F;
  MRAS_KLd = 0.0F;
  MRAS_KLq = 0.0F;
  MRAS_Idh = 0.0F;
  MRAS_Iqh = 0.0F;
  PI_Multi = 0.0F;
  THERMAL_Ud = 0.0F;
  THERMAL_Uq = 0.0F;
  THERMAL_IdRef = 0.0F;
  THERMAL_IqRef = 0.0F;
  THERMAL_IdFbk = 0.0F;
  THERMAL_IqFbk = 0.0F;
  THERMAL_N = 0.0F;
  THERMAL_Pele = 0.0F;
  Udc_Filter = 0.0F;
  W_OFFSET = 0.0F;
  Udc_REF = 0.0F;
  Udc_FBK = 0.0F;
  Udc_Kp = 0.0F;
  Udc_Ki = 0.0F;
  Udc_Integral = 0.0F;
  Udc_Dem = 0.0F;
  Udc_Step = 0.0F;
  FbL_Ld = 0.0F;
  FbL_Lq = 0.0F;
  FbL_Phif = 0.0F;
  FbL_Rs = 0.0F;
  FbL_Cdc = 0.0F;
  FbL_z1 = 0.0F;
  FbL_z2 = 0.0F;
  FbL_z3 = 0.0F;
  FbL_ud = 0.0F;
  FbL_uq = 0.0F;
  FbL_Rdc = 0.0F;
  Ud_in = 0.0F;
  Uq_in = 0.0F;
  FbL_k0 = 0.0F;
  FbL_k1 = 0.0F;
  FbL_k2 = 0.0F;
  FbL_k4 = 0.0F;
  FbL_k5 = 0.0F;
  FbL_k3 = 0.0F;
  FbL_z1ref = 0.0F;
  FbL_v1 = 0.0F;
  FbL_v2 = 0.0F;
  FbL_z1_Integral = 0.0F;
  FbL_z3_Integral = 0.0F;
  FbL_Udc_Integral = 0.0F;
  FbL_iqMuti = 0.0F;
  FbL_Phif6Amp = 0.0F;
  FbL_Phif6Pha = 0.0F;
  FbL_Phif6wave = 0.0F;
  smc_c = 0.0F;
  smc_r = 0.0F;
  smc_b1 = 0.0F;
  smc_b2 = 0.0F;
  V_Current = 0.0F;
  smc_uqset = 0.0F;
  smc_x1_integral = 0.0F;
  smc_e1_integral = 0.0F;
  smc_z1_integral = 0.0F;
  smc_en = 0.0F;
  smc_f = 0.0F;
  FbL_smc_integral = 0.0F;
  FbL_smc_r1 = 0.0F;
  FbL_smc_r2 = 0.0F;
  W_Current = 0.0F;
  U_Current = 0.0F;
  Id_FBK = 0.0F;
  Iq_FBK = 0.0F;
  Id_REF = 0.0F;
  Iq_REF = 0.0F;
  Id_Kp = 0.0F;
  Iq_Kp = 0.0F;
  Id_Ki = 0.0F;
  Iq_Ki = 0.0F;
  ResloverAng = 0.0F;
  N_FBK = 0.0F;
  N_REF = 0.0F;
  N_Filter = 0.0F;
  N_Kp = 0.0F;
  N_Ki = 0.0F;
  ControlAng = 0.0F;
  N_Integral = 0.0F;
  Id_Integral = 0.0F;
  Iq_Integral = 0.0F;
  TempA = 0.0F;
  TempB = 0.0F;
  TempC = 0.0F;
  UDC = 0.0F;
  UDCPROTECT = 0.0F;
  VF_Ud = 0.0F;
  VF_Uq = 0.0F;
  VF_F = 0.0F;
  VF_F_Step = 0.0F;
  IF_F = 0.0F;
  IF_F_Step = 0.0F;
  UDOUT = 0.0F;
  UQOUT = 0.0F;
  USOUT = 0.0F;
  U_OFFSET = 0.0F;
  N_Dem = 0.0F;
  N_Step = 0.0F;
  ArrayId_FBK = 0.0F;
  ArrayIq_FBK = 0.0F;
  ArrayTheta = 0.0F;
  BufferOutId_FBK = 0.0F;
  BufferOutIq_FBK = 0.0F;
  BufferOutTheta = 0.0F;
  UDOUT_Comp = 0.0F;
  UQOUT_Comp = 0.0F;
  USOUT_Comp = 0.0F;
  K = 0.0F;
  Udelta = 0.0F;
  ArrayId_REF = 0.0F;
  ArrayIq_REF = 0.0F;
  BufferOutId_REF = 0.0F;
  BufferOutIq_REF = 0.0F;
  ArrayUdComP = 0.0F;
  ArrayUqComP = 0.0F;
  BufferOutUdComP = 0.0F;
  BufferOutUqComP = 0.0F;
  UdComP_Filter = 0.0F;
  UqComP_Filter = 0.0F;
  UsComP_Filter = 0.0F;
  N_400Hz = 0.0F;
  DEKF_Idh = 0.0F;
  DEKF_Id0 = 0.0F;
  DEKF_Iqh = 0.0F;
  DEKF_Iq0 = 0.0F;
  DEKF_Udh = 0.0F;
  DEKF_Ud0 = 0.0F;
  DEKF_Uqh = 0.0F;
  DEKF_Uq0 = 0.0F;
  DEKF_Phid0 = 0.0F;
  N_NOFILTER = 0.0F;
  STOP = 0U;
  ResloverA0 = 0U;
  DEKF_FLAG = 0U;
  ResloverA1 = 0U;
  ResloverSAMPLE = 0U;
  DEKF_Clear = 0U;
  IGBT_Fault = 0U;
  REVERSE_FLAG = 0U;
  ResloverRESET = 0U;
  ResloverFRQ = 0U;
  InitMode = 0U;
  ResloverRES = 0U;
  ChartFlag = 0U;
  U_AD = 0U;
  ResloverMid = 0U;
  ResloverFaultRead = 0U;
  PROTECT = 0U;
  V_AD = 0U;
  ControlMode = 0U;
  FLAG_MTPA = 0U;
  W_AD = 0U;
  COMPARE_A = 0U;
  COMPARE_B = 0U;
  COMPARE_C = 0U;
  SPIC_Tx = 0U;
  SPIC_Rx = 0U;
  BufferFlag = 0U;
  FLAG_5742 = 0U;
  ResloverWR = 0U;

  /* Start for S-Function (c2802xadc): '<S6>/ADC_TempA' */
  if (MW_adcAInitFlag == 0) {
    InitAdcA();
    MW_adcAInitFlag = 1;
  }

  config_ADCA_SOC3 ();

  /* Start for S-Function (c2802xadc): '<S6>/ADC_TempB' */
  if (MW_adcAInitFlag == 0) {
    InitAdcA();
    MW_adcAInitFlag = 1;
  }

  config_ADCA_SOC4 ();

  /* Start for S-Function (c2802xadc): '<S6>/ADC_TempC' */
  if (MW_adcAInitFlag == 0) {
    InitAdcA();
    MW_adcAInitFlag = 1;
  }

  config_ADCA_SOC5 ();

  /* Start for S-Function (idletask): '<Root>/Idle Task' incorporates:
   *  SubSystem: '<Root>/BackgroundTask'
   */
  TEST_IPM_2_BackgroundTask_Start();

  /* End of Start for S-Function (idletask): '<Root>/Idle Task' */

  /* Start for S-Function (c28xisr_c2000): '<Root>/C28x Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/INT'
   */

  /* Start for function-call system: '<Root>/INT' */
  {
    codertarget_tic2000_blocks_SP_T *obj;
    uint32_T SSPinNameLoc;
    uint32_T SPIPinsLoc;

    /* Start for Chart: '<S3>/Chart' incorporates:
     *  SubSystem: '<S3>/GPIO UP'
     */
    /* Start for S-Function (c280xgpio_di): '<S26>/Digital Input' */
    EALLOW;
    GpioCtrlRegs.GPBMUX1.all &= 0xF0FFFF;
    GpioCtrlRegs.GPBDIR.all &= 0xFFFF0CFF;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S26>/Digital Output' incorporates:
     *  Constant: '<S26>/Constant'
     */
    EALLOW;
    GpioCtrlRegs.GPDMUX2.all &= 0xFFFFFFF3;
    GpioCtrlRegs.GPDDIR.all |= 0x20000;
    EDIS;

    /* Start for Chart: '<S3>/Chart' incorporates:
     *  SubSystem: '<S3>/Current Sampling'
     */
    /* Start for S-Function (c280xgpio_do): '<S22>/Digital Output1' incorporates:
     *  Constant: '<S22>/ResloverSAMPLE'
     */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFFFCFFF;
    GpioCtrlRegs.GPBDIR.all |= 0x400000;
    EDIS;

    /* Start for S-Function (c2802xadc): '<S22>/ADC_Wind1_U' */
    if (MW_adcBInitFlag == 0) {
      InitAdcB();
      MW_adcBInitFlag = 1;
    }

    config_ADCB_SOC0 ();

    /* Start for S-Function (c2802xadc): '<S22>/ADC_Wind1_V' */
    if (MW_adcBInitFlag == 0) {
      InitAdcB();
      MW_adcBInitFlag = 1;
    }

    config_ADCB_SOC1 ();

    /* Start for S-Function (c280xgpio_do): '<S22>/Digital Output2' incorporates:
     *  Constant: '<S22>/ResloverSAMPLE1'
     */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFFFF3FF;
    GpioCtrlRegs.GPBDIR.all |= 0x200000;
    EDIS;

    /* Start for S-Function (c2802xadc): '<S22>/ADC_Wind1_W' */
    if (MW_adcBInitFlag == 0) {
      InitAdcB();
      MW_adcBInitFlag = 1;
    }

    config_ADCB_SOC2 ();

    /* Start for S-Function (c2802xadc): '<S22>/ADC_Udc' */
    if (MW_adcAInitFlag == 0) {
      InitAdcA();
      MW_adcAInitFlag = 1;
    }

    config_ADCA_SOC6 ();

    /* Start for Chart: '<S3>/Chart' incorporates:
     *  SubSystem: '<S3>/AD2S1210 Init'
     */
    /* Start for Chart: '<S19>/AD2S1210' incorporates:
     *  SubSystem: '<S19>/Function-Call Subsystem'
     */
    TES_FunctionCallSubsystem_Start();

    /* Start for Chart: '<S19>/AD2S1210' incorporates:
     *  SubSystem: '<S19>/Function-Call Subsystem3'
     */
    /* Start for S-Function (c280xgpio_do): '<S35>/Digital Output' */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFCFFFFF;
    GpioCtrlRegs.GPBDIR.all |= 0x4000000;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S35>/Digital Output1' */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFF3FFFFF;
    GpioCtrlRegs.GPBDIR.all |= 0x8000000;
    EDIS;

    /* Start for Chart: '<S19>/AD2S1210' incorporates:
     *  SubSystem: '<S19>/Function-Call Subsystem1'
     */
    TE_FunctionCallSubsystem1_Start();

    /* Start for Chart: '<S19>/AD2S1210' incorporates:
     *  SubSystem: '<S19>/Function-Call Subsystem2'
     */
    TE_FunctionCallSubsystem2_Start();

    /* Start for Chart: '<S19>/AD2S1210' incorporates:
     *  SubSystem: '<S19>/Function-Call Subsystem4'
     */
    /* Start for S-Function (c280xgpio_do): '<S36>/Digital Output' */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFCFFFFF;
    GpioCtrlRegs.GPBDIR.all |= 0x4000000;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S36>/Digital Output1' */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFF3FFFFF;
    GpioCtrlRegs.GPBDIR.all |= 0x8000000;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S36>/Digital Output2' */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFFFF3FF;
    GpioCtrlRegs.GPBDIR.all |= 0x200000;
    EDIS;

    /* Start for Chart: '<S3>/Chart' incorporates:
     *  SubSystem: '<S3>/Read Rotor Position'
     */
    /* DataStoreRead: '<S29>/Data Store Read' */
    TEST_IP_SPIMasterTransfer_Start(&TEST_IPM_2_0_DW.SPIMasterTransfer_p);

    /* Start for MATLABSystem: '<S29>/SPI Master Transfer1' */
    TEST_IPM_2_0_DW.obj.matlabCodegenIsDeleted = true;
    TEST_IPM_2_0_DW.obj.isInitialized = 0L;
    TEST_IPM_2_0_DW.obj.matlabCodegenIsDeleted = false;
    obj = &TEST_IPM_2_0_DW.obj;
    TEST_IPM_2_0_DW.obj.isSetupComplete = false;
    TEST_IPM_2_0_DW.obj.isInitialized = 1L;
    SSPinNameLoc = MW_UNDEFINED_VALUE;
    SPIPinsLoc = MW_UNDEFINED_VALUE;
    obj->MW_SPI_HANDLE = MW_SPI_Open(2UL, SPIPinsLoc, SPIPinsLoc, SPIPinsLoc,
      SSPinNameLoc, true, 0U);
    TEST_IPM_2_0_DW.obj.isSetupComplete = true;

    /* Start for S-Function (c280xgpio_do): '<S29>/Digital Output1' incorporates:
     *  Constant: '<S29>/ResloverWR1'
     */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFFFF3FF;
    GpioCtrlRegs.GPBDIR.all |= 0x200000;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S29>/Digital Output2' incorporates:
     *  Constant: '<S29>/ResloverWR2'
     */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFFFCFFF;
    GpioCtrlRegs.GPBDIR.all |= 0x400000;
    EDIS;

    /* Start for Chart: '<S3>/Chart' incorporates:
     *  SubSystem: '<S3>/ePWM'
     */
    TEST_IPM_2_0_ePWM_Start();

    /* Start for Chart: '<S3>/Chart' incorporates:
     *  SubSystem: '<S3>/MAX5742'
     */
    /* Start for MATLAB Function: '<S27>/MAX1' incorporates:
     *  SubSystem: '<S27>/Subsystem'
     */
    TEST_IPM_2_0_SPITransmit2_Start(&TEST_IPM_2_0_DW.SPITransmit2);

    /* Start for MATLAB Function: '<S27>/MAX1' incorporates:
     *  SubSystem: '<S27>/Subsystem1'
     */
    TEST_IPM_2_0_SPITransmit2_Start(&TEST_IPM_2_0_DW.SPITransmit3);

    /* Start for MATLAB Function: '<S27>/MAX1' incorporates:
     *  SubSystem: '<S27>/Subsystem2'
     */
    TEST_IPM_2_0_SPITransmit2_Start(&TEST_IPM_2_0_DW.SPITransmit3_p);

    /* Start for MATLAB Function: '<S27>/MAX1' incorporates:
     *  SubSystem: '<S27>/Subsystem3'
     */
    TEST_IPM_2_0_SPITransmit2_Start(&TEST_IPM_2_0_DW.SPITransmit1);

    /* Start for Chart: '<S3>/Chart' incorporates:
     *  SubSystem: '<S3>/GPIO Down'
     */
    /* Start for S-Function (c280xgpio_do): '<S25>/Digital Output' incorporates:
     *  Constant: '<S25>/Constant'
     */
    EALLOW;
    GpioCtrlRegs.GPDMUX2.all &= 0xFFFFFFF3;
    GpioCtrlRegs.GPDDIR.all |= 0x20000;
    EDIS;
  }

  /* End of Start for S-Function (c28xisr_c2000): '<Root>/C28x Hardware Interrupt' */

  /* Start for S-Function (c2000cla): '<Root>/CLA Task' */

  /*  CLA Initialize*/
  EALLOW;

  /* Enable CLA */
  CpuSysRegs.PCLKCR0.bit.CLA1 = 1;

  /* Initialize and wait for CLA1ToCPUMsgRAM */
  MemCfgRegs.MSGxINIT.bit.INIT_CLA1TOCPU = 1;
  while (MemCfgRegs.MSGxINITDONE.bit.INITDONE_CLA1TOCPU != 1) {
  }

  ;

  /* Initialize and wait for CPUToCLA1MsgRAM */
  MemCfgRegs.MSGxINIT.bit.INIT_CPUTOCLA1 = 1;
  while (MemCfgRegs.MSGxINITDONE.bit.INITDONE_CPUTOCLA1 != 1) {
  }

  ;
  MemCfgRegs.LSxMSEL.all = 0x555;
  MemCfgRegs.LSxCLAPGM.bit.CLAPGM_LS5 = 1;
  MemCfgRegs.LSxCLAPGM.bit.CLAPGM_LS0 = 0;
  MemCfgRegs.LSxCLAPGM.bit.CLAPGM_LS1 = 0;
  Cla1Regs.MCTL.bit.IACKE = 1;
  EDIS;
  EALLOW;
  Cla1Regs.MVECT1 = (Uint16)(&Cla1Task1);
  DmaClaSrcSelRegs.CLA1TASKSRCSEL1.bit.TASK1 = CLA_TRIG_ADCAINT1;
  Cla1Regs.MIER.bit.INT1 = 1;
  EDIS;

  /* End of Start for S-Function (c2000cla): '<Root>/CLA Task' */

  /* Start for DataStoreMemory: '<Root>/Data Store Memory112' */
  HFI_FRQ = 10.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory125' */
  Phi_Rs = 0.02F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory127' */
  DEKF_Gamma = -0.01255F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory128' */
  DEKF_Udelay = 1.5F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory129' */
  INITV_RS = 0.01F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory130' */
  INITV_NDD = 35874.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory131' */
  INITV_NDQ = -4548.43066F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory132' */
  INITV_NQQ = 52556.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory135' */
  Tr_Phidm = 0.02F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory136' */
  Tr_Lqap = 0.02F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory137' */
  Tr_Lqinc = 0.02F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory138' */
  Tr_Ldap = 0.02F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory139' */
  Tr_Ldinc = 0.02F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory14' */
  V_OFFSET = 2048.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory140' */
  Tr_Ldqinc = 0.02F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory141' */
  Tr_Tem = 0.02F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory142' */
  Tr_Ttotal = 0.02F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory15' */
  ResloverFRQ = 20U;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory150' */
  PI_Multi = 0.5F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory16' */
  W_OFFSET = 2048.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory19' */
  ResloverRES = 125U;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory33' */
  ResloverMid = 20U;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory6' */
  U_OFFSET = 2048.0F;

  /* Start for Atomic SubSystem: '<Root>/Initialize Function' */

  /* Start for S-Function (c280xgpio_do): '<S4>/Digital Output' incorporates:
   *  Constant: '<S4>/Buzzer'
   */
  EALLOW;
  GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
  GpioCtrlRegs.GPBDIR.all |= 0x4;
  EDIS;

  /* Constant: '<S4>/Constant11' */
  TEST_IPM_2_0_SPITransmit2_Start(&TEST_IPM_2_0_DW.SPITransmit);

  /* End of Start for SubSystem: '<Root>/Initialize Function' */

  /* SystemInitialize for S-Function (idletask): '<Root>/Idle Task' incorporates:
   *  SubSystem: '<Root>/BackgroundTask'
   */
  TEST_IPM_2__BackgroundTask_Init();

  /* End of SystemInitialize for S-Function (idletask): '<Root>/Idle Task' */

  /* SystemInitialize for S-Function (c28xisr_c2000): '<Root>/C28x Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/INT'
   */

  /* System initialize for function-call system: '<Root>/INT' */
  TEST_IPM_2_0_DW.is_active_c3_TEST_IPM_2_0 = 0U;
  TEST_IPM_2_0_DW.is_c3_TEST_IPM_2_0 = TEST_IPM_2_0_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S3>/AD2S1210 Init'
   */
  /* SystemInitialize for Chart: '<S19>/AD2S1210' */
  TEST_IPM_2_0_DW.is_active_c1_TEST_IPM_2_0 = 0U;
  TEST_IPM_2_0_DW.is_c1_TEST_IPM_2_0 = TEST_IPM_2_0_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S3>/Current Bias Init'
   */
  /* SystemInitialize for MATLAB Function: '<S21>/MATLAB Function' */
  TEST_IPM_2_0_DW.Tick_b = 0U;

  /* SystemInitialize for Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S3>/Read Rotor Position'
   */
  /* SystemInitialize for MATLAB Function: '<S29>/MATLAB Function' */
  TEST_IPM_2_0_DW.Tick = 0U;

  /* SystemInitialize for Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S3>/Motor Control'
   */
  /* SystemInitialize for IfAction SubSystem: '<S28>/TorqueMode' */
  /* SystemInitialize for Atomic SubSystem: '<S57>/Current_PI1' */
  /* SystemInitialize for MATLAB Function: '<S91>/MATLAB Function5' */
  TEST_IPM_2_0_DW.HFI_COUNT = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S57>/Current_PI1' */
  /* End of SystemInitialize for SubSystem: '<S28>/TorqueMode' */

  /* SystemInitialize for IfAction SubSystem: '<S28>/SpeedMode' */
  /* SystemInitialize for MATLAB Function: '<S55>/MATLAB Function' */
  TEST_IPM_2_0_DW.count_f = 0U;

  /* End of SystemInitialize for SubSystem: '<S28>/SpeedMode' */

  /* SystemInitialize for IfAction SubSystem: '<S28>/FbLMode' */
  /* SystemInitialize for MATLAB Function: '<S51>/MATLAB Function2' */
  TEST_IPM_2_0_DW.t = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S28>/FbLMode' */

  /* SystemInitialize for Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S3>/MAX5742'
   */
  /* SystemInitialize for MATLAB Function: '<S27>/MAX1' */
  TEST_IPM_2_0_DW.count = 1U;

  /* End of SystemInitialize for S-Function (c28xisr_c2000): '<Root>/C28x Hardware Interrupt' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Initialize Function' */
  /* S-Function (User_Defined_Code): '<S4>/S-Function' */
  /*CCCCC */
  /*  */
  DELAY_US(5000L);

  /* S-Function (User_Defined_Code): '<S4>/S-Function1' */
  /*CCCCC */
  /*  */
  __asm(" MSETFLG RNDF32=1");

  /* S-Function (c280xgpio_do): '<S4>/Digital Output' incorporates:
   *  Constant: '<S4>/Buzzer'
   */
  {
    if (0U)
      GpioDataRegs.GPBSET.bit.GPIO34 = 1;
    else
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;
  }

  /* Constant: '<S4>/Constant11' */
  TEST_IPM_2_0_SPITransmit2(65296U, &TEST_IPM_2_0_DW.SPITransmit);

  /* DataStoreWrite: '<S4>/Data Store Write' incorporates:
   *  Constant: '<S4>/Constant'
   */
  InitMode = 1U;

  /* DataStoreWrite: '<S4>/Data Store Write2' incorporates:
   *  Constant: '<S4>/Constant1'
   */
  ResloverFRQ = 40U;

  /* DataStoreWrite: '<S4>/Data Store Write10' incorporates:
   *  Constant: '<S4>/Constant10'
   */
  N_Filter = 5.0F;

  /* DataStoreWrite: '<S4>/Data Store Write12' incorporates:
   *  Constant: '<S4>/Constant12'
   */
  ResloverMid = 7556U;

  /* DataStoreWrite: '<S4>/Data Store Write14' incorporates:
   *  Constant: '<S4>/Constant13'
   */
  K = 0.25F;

  /* DataStoreWrite: '<S4>/Data Store Write15' incorporates:
   *  Constant: '<S4>/Constant15'
   */
  N_Step = 0.3F;

  /* DataStoreWrite: '<S4>/Data Store Write11' incorporates:
   *  Constant: '<S4>/Constant16'
   */
  HFI_Umd = 0.0F;

  /* DataStoreWrite: '<S4>/Data Store Write16' incorporates:
   *  Constant: '<S4>/Constant17'
   */
  HFI_Umq = 0.0F;

  /* DataStoreWrite: '<S4>/Data Store Write17' incorporates:
   *  Constant: '<S4>/Constant18'
   */
  HFI_FRQ = 400.0F;

  /* DataStoreWrite: '<S4>/Data Store Write27' incorporates:
   *  Constant: '<S4>/Constant19'
   */
  Tr_Ldqinc = -8.0E-6F;

  /* DataStoreWrite: '<S4>/Data Store Write1' incorporates:
   *  Constant: '<S4>/Constant2'
   */
  ResloverRES = 125U;

  /* DataStoreWrite: '<S4>/Data Store Write19' incorporates:
   *  Constant: '<S4>/Constant20'
   */
  DEKF_R = 5000.0F;

  /* DataStoreWrite: '<S4>/Data Store Write20' incorporates:
   *  Constant: '<S4>/Constant21'
   */
  DEKF_Qx = 1.0F;

  /* DataStoreWrite: '<S4>/Data Store Write23' incorporates:
   *  Constant: '<S4>/Constant22'
   */
  DEKF_QpRs = 2.0E-6F;

  /* DataStoreWrite: '<S4>/Data Store Write22' incorporates:
   *  Constant: '<S4>/Constant23'
   */
  DEKF_QpLdd = 3.587F;

  /* DataStoreWrite: '<S4>/Data Store Write21' incorporates:
   *  Constant: '<S4>/Constant24'
   */
  DEKF_QpLdq = 0.448F;

  /* DataStoreWrite: '<S4>/Data Store Write24' incorporates:
   *  Constant: '<S4>/Constant25'
   */
  DEKF_QpLqq = 12.556F;

  /* DataStoreWrite: '<S4>/Data Store Write26' incorporates:
   *  Constant: '<S4>/Constant26'
   */
  Tr_Ldinc = 9.5E-5F;

  /* DataStoreWrite: '<S4>/Data Store Write28' incorporates:
   *  Constant: '<S4>/Constant27'
   */
  Tr_Lqinc = 0.00024F;

  /* DataStoreWrite: '<S4>/Data Store Write29' incorporates:
   *  Constant: '<S4>/Constant28'
   */
  Tr_Lqap = 0.00035F;

  /* DataStoreWrite: '<S4>/Data Store Write25' incorporates:
   *  Constant: '<S4>/Constant29'
   */
  Tr_Ldap = 9.7E-5F;

  /* DataStoreWrite: '<S4>/Data Store Write18' incorporates:
   *  Constant: '<S4>/Constant30'
   */
  Tr_Phidm = 0.057F;

  /* DataStoreWrite: '<S4>/Data Store Write30' incorporates:
   *  Constant: '<S4>/Constant31'
   */
  Udc_Filter = 50.0F;

  /* DataStoreWrite: '<S4>/Data Store Write31' incorporates:
   *  Constant: '<S4>/Constant32'
   */
  Udc_Step = 10.0F;

  /* DataStoreWrite: '<S4>/Data Store Write32' incorporates:
   *  Constant: '<S4>/Constant33'
   */
  Udc_Kp = 0.01F;

  /* DataStoreWrite: '<S4>/Data Store Write33' incorporates:
   *  Constant: '<S4>/Constant34'
   */
  Udc_Ki = 0.6F;

  /* DataStoreWrite: '<S4>/Data Store Write34' incorporates:
   *  Constant: '<S4>/Constant35'
   */
  FbL_Ld = 4.4E-5F;

  /* DataStoreWrite: '<S4>/Data Store Write35' incorporates:
   *  Constant: '<S4>/Constant36'
   */
  FbL_Lq = 6.0E-5F;

  /* DataStoreWrite: '<S4>/Data Store Write36' incorporates:
   *  Constant: '<S4>/Constant37'
   */
  FbL_Phif = 0.0243F;

  /* DataStoreWrite: '<S4>/Data Store Write37' incorporates:
   *  Constant: '<S4>/Constant38'
   */
  FbL_Rs = 0.1087F;

  /* DataStoreWrite: '<S4>/Data Store Write38' incorporates:
   *  Constant: '<S4>/Constant39'
   */
  FbL_Cdc = 0.0008F;

  /* DataStoreWrite: '<S4>/Data Store Write39' incorporates:
   *  Constant: '<S4>/Constant40'
   */
  FbL_k0 = 1.35E+8F;

  /* DataStoreWrite: '<S4>/Data Store Write40' incorporates:
   *  Constant: '<S4>/Constant41'
   */
  FbL_k1 = 990000.0F;

  /* DataStoreWrite: '<S4>/Data Store Write41' incorporates:
   *  Constant: '<S4>/Constant42'
   */
  FbL_k2 = 5000.0F;

  /* DataStoreWrite: '<S4>/Data Store Write42' incorporates:
   *  Constant: '<S4>/Constant43'
   */
  FbL_k4 = 160000.0F;

  /* DataStoreWrite: '<S4>/Data Store Write43' incorporates:
   *  Constant: '<S4>/Constant44'
   */
  FbL_k5 = 800.0F;

  /* DataStoreWrite: '<S4>/Data Store Write44' incorporates:
   *  Constant: '<S4>/Constant45'
   */
  FbL_k3 = 0.005F;

  /* DataStoreWrite: '<S4>/Data Store Write45' incorporates:
   *  Constant: '<S4>/Constant46'
   */
  FbL_Rdc = 30.0F;

  /* DataStoreWrite: '<S4>/Data Store Write4' incorporates:
   *  Constant: '<S4>/Constant47'
   */
  Id_Kp = 0.075F;

  /* DataStoreWrite: '<S4>/Data Store Write3' incorporates:
   *  Constant: '<S4>/Constant48'
   */
  Id_Ki = 100.0F;

  /* DataStoreWrite: '<S4>/Data Store Write6' incorporates:
   *  Constant: '<S4>/Constant49'
   */
  Iq_Kp = 0.075F;

  /* DataStoreWrite: '<S4>/Data Store Write5' incorporates:
   *  Constant: '<S4>/Constant50'
   */
  Iq_Ki = 100.0F;

  /* DataStoreWrite: '<S4>/Data Store Write46' incorporates:
   *  Constant: '<S4>/Constant51'
   */
  FbL_iqMuti = 1.0F;

  /* DataStoreWrite: '<S4>/Data Store Write13' incorporates:
   *  Constant: '<S4>/Constant52'
   */
  Udelta = 0.0F;

  /* DataStoreWrite: '<S4>/Data Store Write47' incorporates:
   *  Constant: '<S4>/Constant53'
   */
  smc_uqset = 30.0F;

  /* DataStoreWrite: '<S4>/Data Store Write48' incorporates:
   *  Constant: '<S4>/Constant54'
   */
  smc_b2 = 2.25E+6F;

  /* DataStoreWrite: '<S4>/Data Store Write49' incorporates:
   *  Constant: '<S4>/Constant55'
   */
  smc_b1 = 3000.0F;

  /* DataStoreWrite: '<S4>/Data Store Write50' incorporates:
   *  Constant: '<S4>/Constant56'
   */
  smc_r = 0.03F;

  /* DataStoreWrite: '<S4>/Data Store Write51' incorporates:
   *  Constant: '<S4>/Constant57'
   */
  smc_c = 100.0F;

  /* DataStoreWrite: '<S4>/Data Store Write52' incorporates:
   *  Constant: '<S4>/Constant58'
   */
  smc_en = 0.0F;

  /* DataStoreWrite: '<S4>/Data Store Write53' incorporates:
   *  Constant: '<S4>/Constant59'
   */
  FbL_smc_r1 = -0.05F;

  /* DataStoreWrite: '<S4>/Data Store Write54' incorporates:
   *  Constant: '<S4>/Constant60'
   */
  FbL_smc_r2 = -1.0F;

  /* DataStoreWrite: '<S4>/Data Store Write8' incorporates:
   *  Constant: '<S4>/Constant7'
   */
  N_Kp = 0.78330195F;

  /* DataStoreWrite: '<S4>/Data Store Write7' incorporates:
   *  Constant: '<S4>/Constant8'
   */
  N_Ki = 2.46081567F;

  /* DataStoreWrite: '<S4>/Data Store Write9' incorporates:
   *  Constant: '<S4>/Constant9'
   */
  ControlMode = 5U;

  /* End of SystemInitialize for SubSystem: '<Root>/Initialize Function' */
}

/* Model terminate function */
#pragma CODE_SECTION (TEST_IPM_2_0_terminate, "ramfuncs")

void TEST_IPM_2_0_terminate(void)
{
  /* Terminate for S-Function (c28xisr_c2000): '<Root>/C28x Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/INT'
   */

  /* Termination for function-call system: '<Root>/INT' */

  /* Terminate for Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S3>/AD2S1210 Init'
   */
  /* Terminate for Chart: '<S19>/AD2S1210' incorporates:
   *  SubSystem: '<S19>/Function-Call Subsystem2'
   */
  TES_FunctionCallSubsystem2_Term();

  /* Terminate for Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S3>/Read Rotor Position'
   */
  TEST_IPM_SPIMasterTransfer_Term(&TEST_IPM_2_0_DW.SPIMasterTransfer_p);

  /* Terminate for MATLABSystem: '<S29>/SPI Master Transfer1' */
  matlabCodegenHandle_matlabCod_d(&TEST_IPM_2_0_DW.obj);

  /* Terminate for Chart: '<S3>/Chart' incorporates:
   *  SubSystem: '<S3>/MAX5742'
   */
  /* Terminate for MATLAB Function: '<S27>/MAX1' incorporates:
   *  SubSystem: '<S27>/Subsystem'
   */
  TEST_IPM_2_0_SPITransmit2_Term(&TEST_IPM_2_0_DW.SPITransmit2);

  /* Terminate for MATLAB Function: '<S27>/MAX1' incorporates:
   *  SubSystem: '<S27>/Subsystem1'
   */
  TEST_IPM_2_0_SPITransmit2_Term(&TEST_IPM_2_0_DW.SPITransmit3);

  /* Terminate for MATLAB Function: '<S27>/MAX1' incorporates:
   *  SubSystem: '<S27>/Subsystem2'
   */
  TEST_IPM_2_0_SPITransmit2_Term(&TEST_IPM_2_0_DW.SPITransmit3_p);

  /* Terminate for MATLAB Function: '<S27>/MAX1' incorporates:
   *  SubSystem: '<S27>/Subsystem3'
   */
  TEST_IPM_2_0_SPITransmit2_Term(&TEST_IPM_2_0_DW.SPITransmit1);

  /* End of Terminate for S-Function (c28xisr_c2000): '<Root>/C28x Hardware Interrupt' */

  /* Terminate for Atomic SubSystem: '<Root>/Initialize Function' */
  TEST_IPM_2_0_SPITransmit2_Term(&TEST_IPM_2_0_DW.SPITransmit);

  /* End of Terminate for SubSystem: '<Root>/Initialize Function' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
