/*
 * identifica_ip02_data.c
 *
 * Real-Time Workshop code generation for Simulink model "identifica_ip02.mdl".
 *
 * Model Version              : 1.506
 * Real-Time Workshop version : 7.2  (R2008b)  04-Aug-2008
 * C source code generated on : Tue Dec 06 08:54:14 2022
 */

#include "identifica_ip02.h"
#include "identifica_ip02_private.h"

/* Block parameters (auto storage) */
Parameters_identifica_ip02 identifica_ip02_P = {
  0.0,                                 /* HILInitialize_OOStart : '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_OOEnter : '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_OOTerminate : '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_OOExit : '<S1>/HIL Initialize'
                                        */
  10.0,                                /* HILInitialize_AIHigh : '<S1>/HIL Initialize'
                                        */
  -10.0,                               /* HILInitialize_AILow : '<S1>/HIL Initialize'
                                        */
  10.0,                                /* HILInitialize_AOHigh : '<S1>/HIL Initialize'
                                        */
  -10.0,                               /* HILInitialize_AOLow : '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_AOInitial : '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_AOFinal : '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_AOWatchdog : '<S1>/HIL Initialize'
                                        */
  2.4305934065934067E+004,             /* HILInitialize_POFrequency : '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POLeading : '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POTrailing : '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POInitial : '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POFinal : '<S1>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POWatchdog : '<S1>/HIL Initialize'
                                        */
  2.2748544093178037E-005,             /* Conversiontom_Gain : '<S1>/Conversion to m'
                                        */
  1.0,                                 /* Constant_Value : '<S1>/Constant'
                                        */
  1.5339807878856412E-003,             /* Conversiontord_Gain : '<S1>/Conversion to rd'
                                        */
  5.7295779513082323E+001,             /* Gain_Gain : '<S5>/Gain'
                                        */
  1000.0,                              /* mtomm_Gain : '<S1>/m to mm'
                                        */
  3.0,                                 /* Definesinaldeentrada_Value : '<Root>/Define sinal de entrada'
                                        */
  1.0,                                 /* SquareWave_Amplitude : '<Root>/Square Wave'
                                        */
  0.66,                                /* SquareWave_Frequency : '<Root>/Square Wave'
                                        */

  /*  LookUpTable_XData : '<S3>/Look-Up Table'
   */
  { 0.0, 2.0, 2.0, 6.0, 6.0, 10.0 },

  /*  LookUpTable_YData : '<S3>/Look-Up Table'
   */
  { 0.0, 0.0, 1.0, 1.0, -1.0, -1.0 },
  7.5,                                 /* Amplitude_Gain : '<Root>/Amplitude'
                                        */
  500.0,                               /* RateLimiter_RisingLim : '<Root>/Rate Limiter'
                                        */
  -500.0,                              /* RateLimiter_FallingLim : '<Root>/Rate Limiter'
                                        */
  0.0,                                 /* Step_Time : '<Root>/Step'
                                        */
  0.0,                                 /* Step_Y0 : '<Root>/Step'
                                        */
  1.0,                                 /* Step_YFinal : '<Root>/Step'
                                        */
  0.001,                               /* mmtom_Gain : '<Root>/mm to m'
                                        */
  420.0,                               /* Kp_Gain : '<Root>/Kp'
                                        */
  12.0,                                /* AmplifierVoltageLimit_UpperSat : '<Root>/Amplifier Voltage Limit'
                                        */
  -12.0,                               /* AmplifierVoltageLimit_LowerSat : '<Root>/Amplifier Voltage Limit'
                                        */
  1.0,                                 /* CableGainPreCompensation_Gain : '<S1>/Cable Gain Pre-Compensation'
                                        */
  10.0,                                /* DACLimit_UpperSat : '<S1>/DAC Limit'
                                        */
  -10.0,                               /* DACLimit_LowerSat : '<S1>/DAC Limit'
                                        */
  1.0,                                 /* CableGain_Gain : '<S1>/Cable Gain'
                                        */
  1000.0,                              /* mtomm_Gain_h : '<Root>/m to mm'
                                        */
  1000.0,                              /* mtomm_Gain_f : '<Root>/m to mm '
                                        */
  1.0,                                 /* IP02ModeloExperimental_A : '<Root>/IP02 Modelo Experimental'
                                        */
  1.0,                                 /* IP02ModeloExperimental_C : '<Root>/IP02 Modelo Experimental'
                                        */
  420.0,                               /* Kp1_Gain : '<Root>/Kp1'
                                        */
  12.0,                                /* AmplifierVoltageSaturation1_Upp : '<Root>/Amplifier Voltage Saturation1'
                                        */
  -12.0,                               /* AmplifierVoltageSaturation1_Low : '<Root>/Amplifier Voltage Saturation1'
                                        */
  15.0,                                /* StepAmplitude_Gain : '<Root>/Step Amplitude '
                                        */
  5.0,                                 /* StepAmplitude_Gain_f : '<Root>/Step Amplitude'
                                        */
  0.3,                                 /* XMAX_Value : '<S4>/X MAX'
                                        */
  -0.3,                                /* XIN_Value : '<S4>/X IN'
                                        */

  /*  HILInitialize_CKChannels : '<S1>/HIL Initialize'
   */
  { 0, 1, 2 },
  0,                                   /* HILInitialize_DOWatchdog : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_EIInitial : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POModes : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POConfiguration : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POAlignment : '<S1>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_POPolarity : '<S1>/HIL Initialize'
                                        */
  0,                                   /* EncoderInput0CartPositionEncode : '<S1>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle'
                                        */

  /*  HILInitialize_AIChannels : '<S1>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  HILInitialize_AOChannels : '<S1>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  HILInitialize_DOChannels : '<S1>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  HILInitialize_EIChannels : '<S1>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },
  4U,                                  /* HILInitialize_EIQuadrature : '<S1>/HIL Initialize'
                                        */

  /*  HILInitialize_POChannels : '<S1>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  EncoderInput0CartPositionEnco_l : '<S1>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle'
   */
  { 0U, 1U },
  1000U,                               /* EncoderInput0CartPositionEnco_a : '<S1>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle'
                                        */
  0U,                                  /* AnalogOutput0ToAmplifierDriving : '<S1>/Analog Output #0: To Amplifier Driving the Motor'
                                        */
  1,                                   /* ShowMessageonHost_MsgIcon : '<S6>/Show Message on Host'
                                        */
  1,                                   /* ShowMessageonHost_MsgIcon_b : '<S7>/Show Message on Host'
                                        */
  1U,                                  /* Constant_Value_p : '<S2>/Constant'
                                        */
  1U,                                  /* SwitchControl_Threshold : '<S2>/SwitchControl'
                                        */
  0,                                   /* HILInitialize_Active : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_CKPStart : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_CKPEnter : '<S1>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_AIPStart : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AIPEnter : '<S1>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_AOPStart : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AOPEnter : '<S1>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_AOStart : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AOEnter : '<S1>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_AOTerminate : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AOExit : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AOReset : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOPStart : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOPEnter : '<S1>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_DOStart : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOEnter : '<S1>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_DOTerminate : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOExit : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOReset : '<S1>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_EIPStart : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_EIPEnter : '<S1>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_EIStart : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_EIEnter : '<S1>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_POPStart : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POPEnter : '<S1>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_POStart : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POEnter : '<S1>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_POTerminate : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POExit : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POReset : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_OOReset : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOInitial : '<S1>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOFinal : '<S1>/HIL Initialize'
                                        */
  1,                                   /* EncoderInput0CartPositionEnco_f : '<S1>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle'
                                        */
  1                                    /* AnalogOutput0ToAmplifierDrivi_m : '<S1>/Analog Output #0: To Amplifier Driving the Motor'
                                        */
};
