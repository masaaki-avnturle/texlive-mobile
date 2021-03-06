/* AMD bd4 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 2019 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 64
#define GMP_LIMB_BYTES 8

/* 3800-4200 MHz Excavator/Bristol Ridge  */
/* FFT tuning limit = 461,179,335 */
/* Generated by tuneup.c, 2019-10-18, gcc 8.3 */

#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               0  /* always */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          6
#define MOD_1U_TO_MOD_1_1_THRESHOLD          5
#define MOD_1_1_TO_MOD_1_2_THRESHOLD        17
#define MOD_1_2_TO_MOD_1_4_THRESHOLD        52
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD     13
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_1_NORM_THRESHOLD              1
#define DIV_QR_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           25

#define DIV_1_VS_MUL_1_PERCENT             298

#define MUL_TOOM22_THRESHOLD                16
#define MUL_TOOM33_THRESHOLD                53
#define MUL_TOOM44_THRESHOLD               142
#define MUL_TOOM6H_THRESHOLD               206
#define MUL_TOOM8H_THRESHOLD               292

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      83
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     102
#define MUL_TOOM42_TO_TOOM53_THRESHOLD      97
#define MUL_TOOM42_TO_TOOM63_THRESHOLD      98
#define MUL_TOOM43_TO_TOOM54_THRESHOLD      82

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 20
#define SQR_TOOM3_THRESHOLD                 71
#define SQR_TOOM4_THRESHOLD                202
#define SQR_TOOM6_THRESHOLD                298
#define SQR_TOOM8_THRESHOLD                466

#define MULMID_TOOM42_THRESHOLD             20

#define MULMOD_BNM1_THRESHOLD               11
#define SQRMOD_BNM1_THRESHOLD               14

#define MUL_FFT_MODF_THRESHOLD             316  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    316, 5}, {     19, 6}, {     10, 5}, {     21, 6}, \
    {     21, 7}, {     11, 6}, {     23, 7}, {     12, 6}, \
    {     25, 7}, {     21, 8}, {     11, 7}, {     24, 8}, \
    {     13, 7}, {     28, 8}, {     15, 7}, {     31, 8}, \
    {     21, 9}, {     11, 8}, {     27, 9}, {     15, 8}, \
    {     33, 9}, {     19, 8}, {     41, 9}, {     23, 8}, \
    {     47, 9}, {     27,10}, {     15, 9}, {     39,10}, \
    {     23, 9}, {     51,11}, {     15,10}, {     31, 9}, \
    {     67,10}, {     39, 9}, {     83,10}, {     47, 9}, \
    {     99,10}, {     55,11}, {     31,10}, {     87,11}, \
    {     47,10}, {     95, 9}, {    191,10}, {    103,12}, \
    {     31,11}, {     63,10}, {    127, 9}, {    255,10}, \
    {    135, 9}, {    271, 5}, {   4351, 6}, {   2303, 7}, \
    {   1215, 8}, {    639,10}, {    175,11}, {     95,10}, \
    {    191, 9}, {    383,10}, {    207, 9}, {    415,11}, \
    {    111,12}, {     63,11}, {    127,10}, {    255, 9}, \
    {    511,10}, {    271, 9}, {    543,11}, {    143,10}, \
    {    287, 9}, {    575,10}, {    303,11}, {    159,10}, \
    {    319, 9}, {    639,11}, {    175,12}, {     95,11}, \
    {    191,10}, {    383,11}, {    207,10}, {    415, 9}, \
    {    831,13}, {     63,12}, {    127,11}, {    255,10}, \
    {    511,11}, {    271,10}, {    543,11}, {    287,10}, \
    {    575,11}, {    303,12}, {    159,11}, {    319,10}, \
    {    639,11}, {    351,12}, {    191,11}, {    383,10}, \
    {    767,11}, {    415,10}, {    831,12}, {    223,11}, \
    {    447,10}, {    895,11}, {    479,13}, {    127,12}, \
    {    255,11}, {    543,12}, {    287,11}, {    607,12}, \
    {    319,11}, {    639,12}, {    351,13}, {    191,12}, \
    {    383,11}, {    767,12}, {    415,11}, {    831,12}, \
    {    447,11}, {    895,12}, {    479,14}, {    127,13}, \
    {    255,12}, {    543,11}, {   1087,12}, {    607,13}, \
    {    319,12}, {    671,11}, {   1343,10}, {   2687,12}, \
    {    703,13}, {    383,12}, {    767,11}, {   1535,12}, \
    {    831,13}, {    447,12}, {    895,11}, {   1791,12}, \
    {    959,14}, {    255,13}, {    511,12}, {   1087,13}, \
    {    575,12}, {   1151,11}, {   2303,12}, {   1215,11}, \
    {   2431,13}, {    639,12}, {   1343,11}, {   2687,13}, \
    {    703,14}, {    383,13}, {    767,12}, {   1535,13}, \
    {    831,12}, {   1663,13}, {    959,15}, {    255,14}, \
    {    511,13}, {   1087,12}, {   2175,13}, {   1151,12}, \
    {   2303,13}, {   1215,12}, {   2431,14}, {    639,13}, \
    {   1343,12}, {   2687,13}, {   1407,12}, {   2815,13}, \
    {   1471,14}, {    767,13}, {   1535,12}, {   3071,13}, \
    {   1663,14}, {    895,13}, {   1791,12}, {   3583,13}, \
    {   1919,15}, {    511,14}, {   1023,13}, {   2175,14}, \
    {   1151,13}, {   2303,12}, {   4607,13}, {   2431,12}, \
    {   4863,14}, {   1279,13}, {   2687,14}, {   1407,13}, \
    {   2815,15}, {    767,14}, {   1535,13}, {   3071,14}, \
    {   1663,13}, {   3455,12}, {   6911,14}, {   1791,13}, \
    {   3583,14}, {   1919,16}, {    511,15}, {   1023,14}, \
    {   2303,13}, {   4607,14}, {   2431,13}, {   4863,15}, \
    {   1279,14}, {   2943,13}, {   5887,15}, {   1535,14}, \
    {   3455,13}, {   6911,15}, {   1791,14}, {   3839,13}, \
    {   7679,16}, {   1023,15}, {   2047,14}, {   4351,15}, \
    {   2303,14}, {   4863,15}, {   2815,14}, {   5887,16}, \
    {   1535,15}, {   3071,14}, {   6143,15}, {   3327,14}, \
    {   6911,15}, {   3839,14}, {   7679,17}, {   1023,16}, \
    {   2047,15}, {   4863,16}, {   2559,15}, {   5887,14}, \
    {  11775,16}, {   3071,15}, {   6911,16}, {   3583,15}, \
    {   7679,17}, {   2047,16}, {   4095,15}, {   8191,16}, \
    {   4607,15}, {   9983,16}, {   5631,15}, {  11775,17}, \
    {   3071,16}, {  65536,17}, { 131072,18}, { 262144,19}, \
    { 524288,20}, {1048576,21}, {2097152,22}, {4194304,23}, \
    {8388608,24} }
#define MUL_FFT_TABLE3_SIZE 253
#define MUL_FFT_THRESHOLD                 4224

#define SQR_FFT_MODF_THRESHOLD             300  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    300, 5}, {     19, 6}, {     10, 5}, {     21, 6}, \
    {     23, 7}, {     12, 6}, {     25, 7}, {     21, 8}, \
    {     11, 7}, {     25, 8}, {     13, 7}, {     27, 8}, \
    {     15, 7}, {     31, 8}, {     21, 9}, {     11, 8}, \
    {     27, 9}, {     15, 8}, {     35, 9}, {     19, 8}, \
    {     39, 9}, {     23, 8}, {     47, 9}, {     27,10}, \
    {     15, 9}, {     39,10}, {     23, 9}, {     51,11}, \
    {     15,10}, {     31, 9}, {     63,10}, {     39, 9}, \
    {     79,10}, {     47, 9}, {     95,10}, {     55,11}, \
    {     31,10}, {     79,11}, {     47,10}, {     95, 9}, \
    {    191, 8}, {    383,10}, {    103,12}, {     31,11}, \
    {     63,10}, {    127, 9}, {    255, 8}, {    511, 9}, \
    {    271, 8}, {    543,11}, {     79,10}, {    159, 9}, \
    {    319, 8}, {    639,10}, {    175,11}, {     95,10}, \
    {    191, 9}, {    383, 5}, {   6399, 6}, {   3327, 7}, \
    {   1727, 6}, {   3455, 7}, {   1791,11}, {    127,10}, \
    {    255, 9}, {    511,10}, {    271, 9}, {    543,10}, \
    {    287, 9}, {    575,10}, {    303,11}, {    159,10}, \
    {    319, 9}, {    639,11}, {    175,10}, {    351,12}, \
    {     95,11}, {    191,10}, {    383,11}, {    207,10}, \
    {    415, 9}, {    831,13}, {     63,11}, {    255,10}, \
    {    511,11}, {    271,10}, {    543,11}, {    287,10}, \
    {    575,11}, {    303,10}, {    607,12}, {    159,11}, \
    {    319,10}, {    639,11}, {    351,10}, {    703,12}, \
    {    191,11}, {    383,10}, {    767,11}, {    415,10}, \
    {    831,12}, {    223,11}, {    447,10}, {    895,11}, \
    {    479,12}, {    255,11}, {    511,10}, {   1023,11}, \
    {    543,12}, {    287,11}, {    575,10}, {   1151,11}, \
    {    607,12}, {    319,11}, {    639,12}, {    351,11}, \
    {    703,13}, {    191,12}, {    383,11}, {    767,12}, \
    {    415,11}, {    831,12}, {    447,11}, {    895,12}, \
    {    479,13}, {    255,12}, {    511,11}, {   1023,12}, \
    {    543,11}, {   1087,12}, {    575,11}, {   1151,12}, \
    {    607,13}, {    319,12}, {    639,11}, {   1279,12}, \
    {    671,11}, {   1343,12}, {    703,13}, {    383,12}, \
    {    767,11}, {   1535,12}, {    831,11}, {   1663,13}, \
    {    447,12}, {    959,14}, {    255,13}, {    511,12}, \
    {   1087,13}, {    575,12}, {   1151,11}, {   2303,12}, \
    {   1215,11}, {   2431,13}, {    639,12}, {   1343,13}, \
    {    703,14}, {    383,13}, {    767,12}, {   1535,13}, \
    {    831,12}, {   1663,13}, {    895,12}, {   1791,13}, \
    {    959,15}, {    255,14}, {    511,13}, {   1023,12}, \
    {   2047,13}, {   1087,12}, {   2175,13}, {   1151,12}, \
    {   2303,13}, {   1215,12}, {   2431,14}, {    639,13}, \
    {   1343,12}, {   2687,13}, {   1407,12}, {   2815,13}, \
    {   1471,14}, {    767,13}, {   1599,12}, {   3199,13}, \
    {   1663,14}, {    895,13}, {   1791,12}, {   3583,15}, \
    {    511,14}, {   1023,13}, {   2175,14}, {   1151,13}, \
    {   2303,12}, {   4607,13}, {   2431,12}, {   4863,14}, \
    {   1279,13}, {   2687,14}, {   1407,13}, {   2815,15}, \
    {    767,14}, {   1535,13}, {   3199,14}, {   1663,13}, \
    {   3455,14}, {   1791,13}, {   3583,14}, {   1919,16}, \
    {    511,15}, {   1023,14}, {   2303,13}, {   4607,14}, \
    {   2431,13}, {   4863,15}, {   1279,14}, {   2815,13}, \
    {   5631,14}, {   2943,13}, {   5887,15}, {   1535,14}, \
    {   3455,15}, {   1791,14}, {   3583,13}, {   7167,14}, \
    {   3839,13}, {   7679,16}, {   1023,15}, {   2047,14}, \
    {   4223,15}, {   2303,14}, {   4863,15}, {   2815,14}, \
    {   5887,16}, {   1535,15}, {   3071,14}, {   6143,15}, \
    {   3327,14}, {   6911,15}, {   3583,14}, {   7167,15}, \
    {   3839,14}, {   7679,17}, {   1023,16}, {   2047,15}, \
    {   4095,14}, {   8191,15}, {   4863,16}, {   2559,15}, \
    {   5887,14}, {  11775,16}, {   3071,15}, {   6911,16}, \
    {   3583,15}, {   7679,14}, {  15359,17}, {   2047,16}, \
    {   4095,15}, {   8447,16}, {   4607,15}, {   9983,16}, \
    {   5119,15}, {  10239,16}, {   5631,15}, {  11775,17}, \
    {   3071,16}, {  65536,17}, { 131072,18}, { 262144,19}, \
    { 524288,20}, {1048576,21}, {2097152,22}, {4194304,23}, \
    {8388608,24} }
#define SQR_FFT_TABLE3_SIZE 273
#define SQR_FFT_THRESHOLD                 2752

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  43
#define MULLO_MUL_N_THRESHOLD             8397
#define SQRLO_BASECASE_THRESHOLD             6
#define SQRLO_DC_THRESHOLD                  54
#define SQRLO_SQR_THRESHOLD               5397

#define DC_DIV_QR_THRESHOLD                 39
#define DC_DIVAPPR_Q_THRESHOLD             165
#define DC_BDIV_QR_THRESHOLD                39
#define DC_BDIV_Q_THRESHOLD                 76

#define INV_MULMOD_BNM1_THRESHOLD           30
#define INV_NEWTON_THRESHOLD               177
#define INV_APPR_THRESHOLD                 155

#define BINV_NEWTON_THRESHOLD              230
#define REDC_1_TO_REDC_2_THRESHOLD          28
#define REDC_2_TO_REDC_N_THRESHOLD          43

#define MU_DIV_QR_THRESHOLD               1142
#define MU_DIVAPPR_Q_THRESHOLD            1142
#define MUPI_DIV_QR_THRESHOLD               66
#define MU_BDIV_QR_THRESHOLD               998
#define MU_BDIV_Q_THRESHOLD               1142

#define POWM_SEC_TABLE  1,16,175,269,839,1420

#define GET_STR_DC_THRESHOLD                12
#define GET_STR_PRECOMPUTE_THRESHOLD        19
#define SET_STR_DC_THRESHOLD               552
#define SET_STR_PRECOMPUTE_THRESHOLD      1038

#define FAC_DSC_THRESHOLD                  151
#define FAC_ODD_THRESHOLD                   23

#define MATRIX22_STRASSEN_THRESHOLD         17
#define HGCD2_DIV1_METHOD                    1  /* 8.11% faster than 3 */
#define HGCD_THRESHOLD                      87
#define HGCD_APPR_THRESHOLD                 96
#define HGCD_REDUCE_THRESHOLD             2121
#define GCD_DC_THRESHOLD                   327
#define GCDEXT_DC_THRESHOLD                241
#define JACOBI_BASE_METHOD                   4  /* 21.40% faster than 1 */

/* Tuneup completed successfully, took 431056 seconds */
