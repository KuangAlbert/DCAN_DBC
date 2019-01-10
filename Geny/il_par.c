/* -----------------------------------------------------------------------------
  Filename:    il_par.c
  Description: Toolversion: 02.03.18.01.80.00.17.01.00.00
               
               Serial Number: CBD1800017
               Customer Info: Huizhou Desay SV Automotive Co., Ltd.
                              Package: CBD_Vector_SLP2
                              Micro: TDA2XXHG
                              Compiler: Texas Instruments 16.9.2
               
               
               Generator Fwk   : GENy 
               Generator Module: Il_Vector
               
               Configuration   : D:\code\SocCode\linux\gen2\AF01A_DCAN.gny
               
               ECU: 
                       TargetSystem: Hw_Tms320ArmCpu
                       Compiler:     TI
                       Derivates:    Tms320_TDA2X
               
               Channel "Channel0":
                       Databasefile: D:\code\SocCode\linux\gen2\AF01A_DCAN.dbc
                       Bussystem:    CAN
                       Manufacturer: GAC
                       Node:         AF01A

 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2015 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    &&&~ Misra  justifications
 ----------------------------------------------------------------------------- */

/* PRQA S 3458 EOF *//* MD_CBD_19.4 */
/* PRQA S 3408 EOF *//* MD_Il_8.8 */
/* PRQA S 3460 EOF *//* MD_CBD_19.4 */
/* PRQA S 3412 EOF *//* MD_CBD_19.4 */
/* PRQA S 3453 EOF *//* MD_CBD_19.7 */
/* PRQA S 2006 EOF *//* MD_CBD_14.7 */
/* PRQA S 0777 EOF *//* MD_Il_0777 */
/* PRQA S 0778 EOF *//* MD_Il_0778 */
/* PRQA S 0779 EOF *//* MD_Il_0779 */
/* PRQA S 3673 EOF *//* MD_Il_3673 */
/* PRQA S 0310 EOF *//* MD_Il_0310 */
/* PRQA S 0312 EOF *//* MD_Il_0312 */
/* PRQA S 0635 EOF *//* MD_Il_0635 */
/* PRQA S 0781 EOF *//* MD_Il_0781 */
/* PRQA S 3410 EOF *//* MD_Il_3410 */
/* PRQA S 1330 EOF *//* MD_Il_1330 */
/* PRQA S 0342 EOF *//* MD_Il_0342 */
/* PRQA S 0857 EOF *//* MD_CBD_1.1 */
/* PRQA S 3109 EOF *//* MD_CBD_14.3 */
/* PRQA S 0883 EOF *//* */


#include "il_inc.h"

/* -----------------------------------------------------------------------------
    &&&~ local variables
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_CYCLIC_EVENT)
#endif



/* -----------------------------------------------------------------------------
    &&&~ Local function prototypes
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    &&&~ IL internal rx message timeout indication functions
 ----------------------------------------------------------------------------- */

static void IlMsgESR_Track64TimeoutIndication(void);
static void IlMsgESR_Track63TimeoutIndication(void);
static void IlMsgESR_Track62TimeoutIndication(void);
static void IlMsgESR_Track61TimeoutIndication(void);
static void IlMsgESR_Track60TimeoutIndication(void);
static void IlMsgESR_Track59TimeoutIndication(void);
static void IlMsgESR_Track58TimeoutIndication(void);
static void IlMsgESR_Track57TimeoutIndication(void);
static void IlMsgESR_Track56TimeoutIndication(void);
static void IlMsgESR_Track55TimeoutIndication(void);
static void IlMsgESR_Track54TimeoutIndication(void);
static void IlMsgESR_Track53TimeoutIndication(void);
static void IlMsgESR_Track52TimeoutIndication(void);
static void IlMsgESR_Track51TimeoutIndication(void);
static void IlMsgESR_Track50TimeoutIndication(void);
static void IlMsgESR_Track49TimeoutIndication(void);
static void IlMsgESR_Track48TimeoutIndication(void);
static void IlMsgESR_Track47TimeoutIndication(void);
static void IlMsgESR_Track46TimeoutIndication(void);
static void IlMsgESR_Track45TimeoutIndication(void);
static void IlMsgESR_Track44TimeoutIndication(void);
static void IlMsgESR_Track43TimeoutIndication(void);
static void IlMsgESR_Track42TimeoutIndication(void);
static void IlMsgESR_Track41TimeoutIndication(void);
static void IlMsgESR_Track40TimeoutIndication(void);
static void IlMsgESR_Track39TimeoutIndication(void);
static void IlMsgESR_Track38TimeoutIndication(void);
static void IlMsgESR_Track37TimeoutIndication(void);
static void IlMsgESR_Track36TimeoutIndication(void);
static void IlMsgESR_Track35TimeoutIndication(void);
static void IlMsgESR_Track34TimeoutIndication(void);
static void IlMsgESR_Track33TimeoutIndication(void);
static void IlMsgESR_Track32TimeoutIndication(void);
static void IlMsgESR_Track31TimeoutIndication(void);
static void IlMsgESR_Track30TimeoutIndication(void);
static void IlMsgESR_Track29TimeoutIndication(void);
static void IlMsgESR_Track28TimeoutIndication(void);
static void IlMsgESR_Track27TimeoutIndication(void);
static void IlMsgESR_Track26TimeoutIndication(void);
static void IlMsgESR_Track25TimeoutIndication(void);
static void IlMsgESR_Track24TimeoutIndication(void);
static void IlMsgESR_Track23TimeoutIndication(void);
static void IlMsgESR_Track22TimeoutIndication(void);
static void IlMsgESR_Track21TimeoutIndication(void);
static void IlMsgESR_Track20TimeoutIndication(void);
static void IlMsgESR_Track19TimeoutIndication(void);
static void IlMsgESR_Track18TimeoutIndication(void);
static void IlMsgESR_Track17TimeoutIndication(void);
static void IlMsgESR_Track16TimeoutIndication(void);
static void IlMsgESR_Track15TimeoutIndication(void);
static void IlMsgESR_Track14TimeoutIndication(void);
static void IlMsgESR_Track13TimeoutIndication(void);
static void IlMsgESR_Track12TimeoutIndication(void);
static void IlMsgESR_Track11TimeoutIndication(void);
static void IlMsgESR_Track10TimeoutIndication(void);
static void IlMsgESR_Track09TimeoutIndication(void);
static void IlMsgESR_Track08TimeoutIndication(void);
static void IlMsgESR_Track07TimeoutIndication(void);
static void IlMsgESR_Track06TimeoutIndication(void);
static void IlMsgESR_Track05TimeoutIndication(void);
static void IlMsgESR_Track04TimeoutIndication(void);
static void IlMsgESR_Track03TimeoutIndication(void);
static void IlMsgESR_Track02TimeoutIndication(void);
static void IlMsgESR_Track01TimeoutIndication(void);




/* -----------------------------------------------------------------------------
    &&&~ Internal Timer Handles
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT)
#define IlParHndRxESR_Track64                0
#define IlParHndRxESR_Track63                1
#define IlParHndRxESR_Track62                2
#define IlParHndRxESR_Track61                3
#define IlParHndRxESR_Track60                4
#define IlParHndRxESR_Track59                5
#define IlParHndRxESR_Track58                6
#define IlParHndRxESR_Track57                7
#define IlParHndRxESR_Track56                8
#define IlParHndRxESR_Track55                9
#define IlParHndRxESR_Track54                10
#define IlParHndRxESR_Track53                11
#define IlParHndRxESR_Track52                12
#define IlParHndRxESR_Track51                13
#define IlParHndRxESR_Track50                14
#define IlParHndRxESR_Track49                15
#define IlParHndRxESR_Track48                16
#define IlParHndRxESR_Track47                17
#define IlParHndRxESR_Track46                18
#define IlParHndRxESR_Track45                19
#define IlParHndRxESR_Track44                20
#define IlParHndRxESR_Track43                21
#define IlParHndRxESR_Track42                22
#define IlParHndRxESR_Track41                23
#define IlParHndRxESR_Track40                24
#define IlParHndRxESR_Track39                25
#define IlParHndRxESR_Track38                26
#define IlParHndRxESR_Track37                27
#define IlParHndRxESR_Track36                28
#define IlParHndRxESR_Track35                29
#define IlParHndRxESR_Track34                30
#define IlParHndRxESR_Track33                31
#define IlParHndRxESR_Track32                32
#define IlParHndRxESR_Track31                33
#define IlParHndRxESR_Track30                34
#define IlParHndRxESR_Track29                35
#define IlParHndRxESR_Track28                36
#define IlParHndRxESR_Track27                37
#define IlParHndRxESR_Track26                38
#define IlParHndRxESR_Track25                39
#define IlParHndRxESR_Track24                40
#define IlParHndRxESR_Track23                41
#define IlParHndRxESR_Track22                42
#define IlParHndRxESR_Track21                43
#define IlParHndRxESR_Track20                44
#define IlParHndRxESR_Track19                45
#define IlParHndRxESR_Track18                46
#define IlParHndRxESR_Track17                47
#define IlParHndRxESR_Track16                48
#define IlParHndRxESR_Track15                49
#define IlParHndRxESR_Track14                50
#define IlParHndRxESR_Track13                51
#define IlParHndRxESR_Track12                52
#define IlParHndRxESR_Track11                53
#define IlParHndRxESR_Track10                54
#define IlParHndRxESR_Track09                55
#define IlParHndRxESR_Track08                56
#define IlParHndRxESR_Track07                57
#define IlParHndRxESR_Track06                58
#define IlParHndRxESR_Track05                59
#define IlParHndRxESR_Track04                60
#define IlParHndRxESR_Track03                61
#define IlParHndRxESR_Track02                62
#define IlParHndRxESR_Track01                63
#endif



#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_TIMEOUT)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlTxTimeoutIndirection[kIlNumberOfTxObjects] = 
{
  kIlNoTxToutIndirection /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  kIlNoTxToutIndirection /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_FAST_ON_START)
V_MEMROM0 V_MEMROM1 IltTxCounter V_MEMROM2 IlTxFastOnStartDuration[kIlNumberOfTxObjects] = 
{
  kIlNoFastOnStartDuration /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  kIlNoFastOnStartDuration /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_FAST_ON_START) && defined(IL_ENABLE_TX_MODE_SIGNALS)
V_MEMROM0 V_MEMROM1 IltTxCounter V_MEMROM2 IlTxFastOnStartMuxDelay[kIlNumberOfTxObjects] = 
{
  0 /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  0 /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  0 /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  0 /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  0 /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  0 /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  0 /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  0 /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  0 /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  0 /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  0 /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  0 /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  0 /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  0 /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  0 /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  0 /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  0 /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  0 /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  0 /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  0 /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  0 /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  0 /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  0 /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  0 /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  0 /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  0 /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  0 /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  0 /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  0 /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  0 /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  0 /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  0 /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  0 /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  0 /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  0 /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  0 /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  0 /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  0 /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  0 /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  0 /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  0 /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  0 /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  0 /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  0 /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  0 /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  0 /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  0 /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  0 /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  0 /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  0 /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  0 /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  0 /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  0 /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  0 /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  0 /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  0 /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  0 /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  0 /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  0 /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  0 /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  0 /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  0 /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  0 /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
#endif


#if defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 IltTxCounter V_MEMROM2 IlTxStartCycles[kIlNumberOfTxObjects] = 
{
  kIlNoCycleTime /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  kIlNoCycleTime /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  kIlNoCycleTime /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  kIlNoCycleTime /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  kIlNoCycleTime /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  kIlNoCycleTime /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  kIlNoCycleTime /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  kIlNoCycleTime /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  kIlNoCycleTime /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  kIlNoCycleTime /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  kIlNoCycleTime /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  kIlNoCycleTime /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  kIlNoCycleTime /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  kIlNoCycleTime /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  kIlNoCycleTime /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  kIlNoCycleTime /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  kIlNoCycleTime /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  kIlNoCycleTime /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  kIlNoCycleTime /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  kIlNoCycleTime /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  kIlNoCycleTime /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  kIlNoCycleTime /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  kIlNoCycleTime /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  kIlNoCycleTime /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  kIlNoCycleTime /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  kIlNoCycleTime /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  kIlNoCycleTime /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  kIlNoCycleTime /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  kIlNoCycleTime /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  kIlNoCycleTime /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  kIlNoCycleTime /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  kIlNoCycleTime /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  kIlNoCycleTime /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  kIlNoCycleTime /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  kIlNoCycleTime /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  kIlNoCycleTime /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  kIlNoCycleTime /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  kIlNoCycleTime /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  kIlNoCycleTime /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  kIlNoCycleTime /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  kIlNoCycleTime /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  kIlNoCycleTime /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  kIlNoCycleTime /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  kIlNoCycleTime /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  kIlNoCycleTime /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  kIlNoCycleTime /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  kIlNoCycleTime /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  kIlNoCycleTime /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  kIlNoCycleTime /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  kIlNoCycleTime /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  kIlNoCycleTime /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  kIlNoCycleTime /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  kIlNoCycleTime /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  kIlNoCycleTime /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  kIlNoCycleTime /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  kIlNoCycleTime /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  kIlNoCycleTime /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  kIlNoCycleTime /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  kIlNoCycleTime /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  kIlNoCycleTime /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  kIlNoCycleTime /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  kIlNoCycleTime /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  kIlNoCycleTime /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
#endif


#if defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 IltTxUpdateCounter V_MEMROM2 IlTxUpdateCycles[kIlNumberOfTxObjects] = 
{
  kIlNoDelayTime /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  kIlNoDelayTime /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  kIlNoDelayTime /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  kIlNoDelayTime /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  kIlNoDelayTime /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  kIlNoDelayTime /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  kIlNoDelayTime /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  kIlNoDelayTime /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  kIlNoDelayTime /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  kIlNoDelayTime /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  kIlNoDelayTime /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  kIlNoDelayTime /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  kIlNoDelayTime /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  kIlNoDelayTime /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  kIlNoDelayTime /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  kIlNoDelayTime /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  kIlNoDelayTime /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  kIlNoDelayTime /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  kIlNoDelayTime /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  kIlNoDelayTime /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  kIlNoDelayTime /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  kIlNoDelayTime /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  kIlNoDelayTime /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  kIlNoDelayTime /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  kIlNoDelayTime /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  kIlNoDelayTime /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  kIlNoDelayTime /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  kIlNoDelayTime /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  kIlNoDelayTime /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  kIlNoDelayTime /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  kIlNoDelayTime /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  kIlNoDelayTime /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  kIlNoDelayTime /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  kIlNoDelayTime /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  kIlNoDelayTime /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  kIlNoDelayTime /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  kIlNoDelayTime /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  kIlNoDelayTime /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  kIlNoDelayTime /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  kIlNoDelayTime /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  kIlNoDelayTime /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  kIlNoDelayTime /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  kIlNoDelayTime /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  kIlNoDelayTime /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  kIlNoDelayTime /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  kIlNoDelayTime /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  kIlNoDelayTime /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  kIlNoDelayTime /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  kIlNoDelayTime /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  kIlNoDelayTime /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  kIlNoDelayTime /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  kIlNoDelayTime /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  kIlNoDelayTime /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  kIlNoDelayTime /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  kIlNoDelayTime /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  kIlNoDelayTime /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  kIlNoDelayTime /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  kIlNoDelayTime /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  kIlNoDelayTime /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  kIlNoDelayTime /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  kIlNoDelayTime /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  kIlNoDelayTime /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  kIlNoDelayTime /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
#endif


#if defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 IltTxCounter V_MEMROM2 IlTxCyclicCycles[kIlNumberOfTxObjects] = 
{
  10 /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  10 /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  10 /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  10 /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  10 /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  10 /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  10 /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  10 /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  10 /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  10 /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  10 /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  10 /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  10 /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  10 /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  10 /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  10 /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  10 /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  10 /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  10 /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  10 /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  10 /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  10 /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  10 /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  10 /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  10 /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  10 /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  10 /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  10 /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  10 /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  10 /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  10 /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  10 /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  10 /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  10 /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  10 /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  10 /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  10 /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  10 /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  10 /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  10 /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  10 /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  10 /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  10 /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  10 /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  10 /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  10 /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  10 /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  10 /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  10 /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  10 /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  10 /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  10 /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  10 /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  10 /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  10 /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  10 /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  10 /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  10 /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  10 /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  10 /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  10 /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  10 /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  10 /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
#endif


#if defined(IL_ENABLE_TX) && (defined(IL_ENABLE_TX_CYCLIC_EVENT) || defined(IL_ENABLE_TX_SECURE_EVENT) || defined(IL_ENABLE_TX_FAST_ON_START))
V_MEMROM0 V_MEMROM1 IltTxCounter V_MEMROM2 IlTxEventCycles[kIlNumberOfTxObjects] = 
{
  kIlNoCycleTimeFast /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  kIlNoCycleTimeFast /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_POLLING)
V_MEMROM0 V_MEMROM1 IlConfirmationFct V_MEMROM2 IlTxConfirmationFctPtr[kIlNumberOfTxObjects] = 
{
  V_NULL /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  V_NULL /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  V_NULL /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  V_NULL /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  V_NULL /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  V_NULL /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  V_NULL /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  V_NULL /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  V_NULL /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  V_NULL /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  V_NULL /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  V_NULL /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  V_NULL /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  V_NULL /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  V_NULL /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  V_NULL /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  V_NULL /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  V_NULL /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  V_NULL /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  V_NULL /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  V_NULL /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  V_NULL /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  V_NULL /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  V_NULL /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  V_NULL /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  V_NULL /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  V_NULL /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  V_NULL /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  V_NULL /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  V_NULL /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  V_NULL /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  V_NULL /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  V_NULL /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  V_NULL /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  V_NULL /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  V_NULL /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  V_NULL /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  V_NULL /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  V_NULL /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  V_NULL /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  V_NULL /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  V_NULL /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  V_NULL /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  V_NULL /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  V_NULL /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  V_NULL /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  V_NULL /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  V_NULL /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  V_NULL /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  V_NULL /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  V_NULL /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  V_NULL /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  V_NULL /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  V_NULL /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  V_NULL /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  V_NULL /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  V_NULL /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  V_NULL /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  V_NULL /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  V_NULL /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  V_NULL /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  V_NULL /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  V_NULL /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_TIMEOUT) && defined(C_MULTIPLE_RECEIVE_CHANNEL) && defined(IL_ENABLE_TX_VARYING_TIMEOUT) && (kIlNumberOfChannels > 1)
V_MEMROM0 V_MEMROM1 IltTxTimeoutCounter V_MEMROM2 IlTxTimeout[kIlNumberOfChannels] = 
{
  5
};
#endif


#if defined(IL_ENABLE_TX) && defined(IL_ENABLE_TX_SECURE_EVENT) && defined(IL_ENABLE_TX_VARYING_REPETITION) && (kIlNumberOfTxObjects > 1)
V_MEMROM0 V_MEMROM1 IltTxRepetitionCounter V_MEMROM2 IlTxRepetitionCounters[kIlNumberOfTxObjects] = 
{
  0 /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  0 /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  0 /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  0 /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  0 /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  0 /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  0 /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  0 /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  0 /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  0 /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  0 /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  0 /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  0 /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  0 /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  0 /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  0 /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  0 /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  0 /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  0 /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  0 /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  0 /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  0 /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  0 /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  0 /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  0 /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  0 /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  0 /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  0 /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  0 /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  0 /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  0 /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  0 /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  0 /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  0 /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  0 /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  0 /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  0 /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  0 /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  0 /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  0 /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  0 /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  0 /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  0 /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  0 /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  0 /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  0 /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  0 /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  0 /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  0 /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  0 /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  0 /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  0 /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  0 /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  0 /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  0 /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  0 /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  0 /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  0 /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  0 /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  0 /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  0 /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  0 /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  0 /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
#endif


/* -----------------------------------------------------------------------------
    &&&~ Rx Timeout Table
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT)
V_MEMROM0 V_MEMROM1 IltRxTimeoutCounter V_MEMROM2 IlRxTimeoutTbl[kIlNumberOfRxTimeoutCounters] = 
{
  6 /* ID: 0x0000053f, ESR_Track64 [FC] */, 
  6 /* ID: 0x0000053e, ESR_Track63 [FC] */, 
  6 /* ID: 0x0000053d, ESR_Track62 [FC] */, 
  6 /* ID: 0x0000053c, ESR_Track61 [FC] */, 
  6 /* ID: 0x0000053b, ESR_Track60 [FC] */, 
  6 /* ID: 0x0000053a, ESR_Track59 [FC] */, 
  6 /* ID: 0x00000539, ESR_Track58 [FC] */, 
  6 /* ID: 0x00000538, ESR_Track57 [FC] */, 
  6 /* ID: 0x00000537, ESR_Track56 [FC] */, 
  6 /* ID: 0x00000536, ESR_Track55 [FC] */, 
  6 /* ID: 0x00000535, ESR_Track54 [FC] */, 
  6 /* ID: 0x00000534, ESR_Track53 [FC] */, 
  6 /* ID: 0x00000533, ESR_Track52 [FC] */, 
  6 /* ID: 0x00000532, ESR_Track51 [FC] */, 
  6 /* ID: 0x00000531, ESR_Track50 [FC] */, 
  6 /* ID: 0x00000530, ESR_Track49 [FC] */, 
  6 /* ID: 0x0000052f, ESR_Track48 [FC] */, 
  6 /* ID: 0x0000052e, ESR_Track47 [FC] */, 
  6 /* ID: 0x0000052d, ESR_Track46 [FC] */, 
  6 /* ID: 0x0000052c, ESR_Track45 [FC] */, 
  6 /* ID: 0x0000052b, ESR_Track44 [FC] */, 
  6 /* ID: 0x0000052a, ESR_Track43 [FC] */, 
  6 /* ID: 0x00000529, ESR_Track42 [FC] */, 
  6 /* ID: 0x00000528, ESR_Track41 [FC] */, 
  6 /* ID: 0x00000527, ESR_Track40 [FC] */, 
  6 /* ID: 0x00000526, ESR_Track39 [FC] */, 
  6 /* ID: 0x00000525, ESR_Track38 [FC] */, 
  6 /* ID: 0x00000524, ESR_Track37 [FC] */, 
  6 /* ID: 0x00000523, ESR_Track36 [FC] */, 
  6 /* ID: 0x00000522, ESR_Track35 [FC] */, 
  6 /* ID: 0x00000521, ESR_Track34 [FC] */, 
  6 /* ID: 0x00000520, ESR_Track33 [FC] */, 
  6 /* ID: 0x0000051f, ESR_Track32 [FC] */, 
  6 /* ID: 0x0000051e, ESR_Track31 [FC] */, 
  6 /* ID: 0x0000051d, ESR_Track30 [FC] */, 
  6 /* ID: 0x0000051c, ESR_Track29 [FC] */, 
  6 /* ID: 0x0000051b, ESR_Track28 [FC] */, 
  6 /* ID: 0x0000051a, ESR_Track27 [FC] */, 
  6 /* ID: 0x00000519, ESR_Track26 [FC] */, 
  6 /* ID: 0x00000518, ESR_Track25 [FC] */, 
  6 /* ID: 0x00000517, ESR_Track24 [FC] */, 
  6 /* ID: 0x00000516, ESR_Track23 [FC] */, 
  6 /* ID: 0x00000515, ESR_Track22 [FC] */, 
  6 /* ID: 0x00000514, ESR_Track21 [FC] */, 
  6 /* ID: 0x00000513, ESR_Track20 [FC] */, 
  6 /* ID: 0x00000512, ESR_Track19 [FC] */, 
  6 /* ID: 0x00000511, ESR_Track18 [FC] */, 
  6 /* ID: 0x00000510, ESR_Track17 [FC] */, 
  6 /* ID: 0x0000050f, ESR_Track16 [FC] */, 
  6 /* ID: 0x0000050e, ESR_Track15 [FC] */, 
  6 /* ID: 0x0000050d, ESR_Track14 [FC] */, 
  6 /* ID: 0x0000050c, ESR_Track13 [FC] */, 
  6 /* ID: 0x0000050b, ESR_Track12 [FC] */, 
  6 /* ID: 0x0000050a, ESR_Track11 [FC] */, 
  6 /* ID: 0x00000509, ESR_Track10 [FC] */, 
  6 /* ID: 0x00000508, ESR_Track09 [BC] */, 
  6 /* ID: 0x00000507, ESR_Track08 [BC] */, 
  6 /* ID: 0x00000506, ESR_Track07 [BC] */, 
  6 /* ID: 0x00000505, ESR_Track06 [BC] */, 
  6 /* ID: 0x00000504, ESR_Track05 [BC] */, 
  6 /* ID: 0x00000503, ESR_Track04 [BC] */, 
  6 /* ID: 0x00000502, ESR_Track03 [BC] */, 
  6 /* ID: 0x00000501, ESR_Track02 [BC] */, 
  6 /* ID: 0x00000500, ESR_Track01 [BC] */
};
#endif




#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_TIMEOUT)
V_MEMROM0 V_MEMROM1 IlTimeoutIndicationFct V_MEMROM2 IlRxTimeoutFctPtr[kIlNumberOfRxTimeoutCounters] = 
{
  IlMsgESR_Track64TimeoutIndication /* ID: 0x0000053f, ESR_Track64 [FC] */, 
  IlMsgESR_Track63TimeoutIndication /* ID: 0x0000053e, ESR_Track63 [FC] */, 
  IlMsgESR_Track62TimeoutIndication /* ID: 0x0000053d, ESR_Track62 [FC] */, 
  IlMsgESR_Track61TimeoutIndication /* ID: 0x0000053c, ESR_Track61 [FC] */, 
  IlMsgESR_Track60TimeoutIndication /* ID: 0x0000053b, ESR_Track60 [FC] */, 
  IlMsgESR_Track59TimeoutIndication /* ID: 0x0000053a, ESR_Track59 [FC] */, 
  IlMsgESR_Track58TimeoutIndication /* ID: 0x00000539, ESR_Track58 [FC] */, 
  IlMsgESR_Track57TimeoutIndication /* ID: 0x00000538, ESR_Track57 [FC] */, 
  IlMsgESR_Track56TimeoutIndication /* ID: 0x00000537, ESR_Track56 [FC] */, 
  IlMsgESR_Track55TimeoutIndication /* ID: 0x00000536, ESR_Track55 [FC] */, 
  IlMsgESR_Track54TimeoutIndication /* ID: 0x00000535, ESR_Track54 [FC] */, 
  IlMsgESR_Track53TimeoutIndication /* ID: 0x00000534, ESR_Track53 [FC] */, 
  IlMsgESR_Track52TimeoutIndication /* ID: 0x00000533, ESR_Track52 [FC] */, 
  IlMsgESR_Track51TimeoutIndication /* ID: 0x00000532, ESR_Track51 [FC] */, 
  IlMsgESR_Track50TimeoutIndication /* ID: 0x00000531, ESR_Track50 [FC] */, 
  IlMsgESR_Track49TimeoutIndication /* ID: 0x00000530, ESR_Track49 [FC] */, 
  IlMsgESR_Track48TimeoutIndication /* ID: 0x0000052f, ESR_Track48 [FC] */, 
  IlMsgESR_Track47TimeoutIndication /* ID: 0x0000052e, ESR_Track47 [FC] */, 
  IlMsgESR_Track46TimeoutIndication /* ID: 0x0000052d, ESR_Track46 [FC] */, 
  IlMsgESR_Track45TimeoutIndication /* ID: 0x0000052c, ESR_Track45 [FC] */, 
  IlMsgESR_Track44TimeoutIndication /* ID: 0x0000052b, ESR_Track44 [FC] */, 
  IlMsgESR_Track43TimeoutIndication /* ID: 0x0000052a, ESR_Track43 [FC] */, 
  IlMsgESR_Track42TimeoutIndication /* ID: 0x00000529, ESR_Track42 [FC] */, 
  IlMsgESR_Track41TimeoutIndication /* ID: 0x00000528, ESR_Track41 [FC] */, 
  IlMsgESR_Track40TimeoutIndication /* ID: 0x00000527, ESR_Track40 [FC] */, 
  IlMsgESR_Track39TimeoutIndication /* ID: 0x00000526, ESR_Track39 [FC] */, 
  IlMsgESR_Track38TimeoutIndication /* ID: 0x00000525, ESR_Track38 [FC] */, 
  IlMsgESR_Track37TimeoutIndication /* ID: 0x00000524, ESR_Track37 [FC] */, 
  IlMsgESR_Track36TimeoutIndication /* ID: 0x00000523, ESR_Track36 [FC] */, 
  IlMsgESR_Track35TimeoutIndication /* ID: 0x00000522, ESR_Track35 [FC] */, 
  IlMsgESR_Track34TimeoutIndication /* ID: 0x00000521, ESR_Track34 [FC] */, 
  IlMsgESR_Track33TimeoutIndication /* ID: 0x00000520, ESR_Track33 [FC] */, 
  IlMsgESR_Track32TimeoutIndication /* ID: 0x0000051f, ESR_Track32 [FC] */, 
  IlMsgESR_Track31TimeoutIndication /* ID: 0x0000051e, ESR_Track31 [FC] */, 
  IlMsgESR_Track30TimeoutIndication /* ID: 0x0000051d, ESR_Track30 [FC] */, 
  IlMsgESR_Track29TimeoutIndication /* ID: 0x0000051c, ESR_Track29 [FC] */, 
  IlMsgESR_Track28TimeoutIndication /* ID: 0x0000051b, ESR_Track28 [FC] */, 
  IlMsgESR_Track27TimeoutIndication /* ID: 0x0000051a, ESR_Track27 [FC] */, 
  IlMsgESR_Track26TimeoutIndication /* ID: 0x00000519, ESR_Track26 [FC] */, 
  IlMsgESR_Track25TimeoutIndication /* ID: 0x00000518, ESR_Track25 [FC] */, 
  IlMsgESR_Track24TimeoutIndication /* ID: 0x00000517, ESR_Track24 [FC] */, 
  IlMsgESR_Track23TimeoutIndication /* ID: 0x00000516, ESR_Track23 [FC] */, 
  IlMsgESR_Track22TimeoutIndication /* ID: 0x00000515, ESR_Track22 [FC] */, 
  IlMsgESR_Track21TimeoutIndication /* ID: 0x00000514, ESR_Track21 [FC] */, 
  IlMsgESR_Track20TimeoutIndication /* ID: 0x00000513, ESR_Track20 [FC] */, 
  IlMsgESR_Track19TimeoutIndication /* ID: 0x00000512, ESR_Track19 [FC] */, 
  IlMsgESR_Track18TimeoutIndication /* ID: 0x00000511, ESR_Track18 [FC] */, 
  IlMsgESR_Track17TimeoutIndication /* ID: 0x00000510, ESR_Track17 [FC] */, 
  IlMsgESR_Track16TimeoutIndication /* ID: 0x0000050f, ESR_Track16 [FC] */, 
  IlMsgESR_Track15TimeoutIndication /* ID: 0x0000050e, ESR_Track15 [FC] */, 
  IlMsgESR_Track14TimeoutIndication /* ID: 0x0000050d, ESR_Track14 [FC] */, 
  IlMsgESR_Track13TimeoutIndication /* ID: 0x0000050c, ESR_Track13 [FC] */, 
  IlMsgESR_Track12TimeoutIndication /* ID: 0x0000050b, ESR_Track12 [FC] */, 
  IlMsgESR_Track11TimeoutIndication /* ID: 0x0000050a, ESR_Track11 [FC] */, 
  IlMsgESR_Track10TimeoutIndication /* ID: 0x00000509, ESR_Track10 [FC] */, 
  IlMsgESR_Track09TimeoutIndication /* ID: 0x00000508, ESR_Track09 [BC] */, 
  IlMsgESR_Track08TimeoutIndication /* ID: 0x00000507, ESR_Track08 [BC] */, 
  IlMsgESR_Track07TimeoutIndication /* ID: 0x00000506, ESR_Track07 [BC] */, 
  IlMsgESR_Track06TimeoutIndication /* ID: 0x00000505, ESR_Track06 [BC] */, 
  IlMsgESR_Track05TimeoutIndication /* ID: 0x00000504, ESR_Track05 [BC] */, 
  IlMsgESR_Track04TimeoutIndication /* ID: 0x00000503, ESR_Track04 [BC] */, 
  IlMsgESR_Track03TimeoutIndication /* ID: 0x00000502, ESR_Track03 [BC] */, 
  IlMsgESR_Track02TimeoutIndication /* ID: 0x00000501, ESR_Track02 [BC] */, 
  IlMsgESR_Track01TimeoutIndication /* ID: 0x00000500, ESR_Track01 [BC] */
};
#endif


#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_POLLING)
V_MEMROM0 V_MEMROM1 IlIndicationFct V_MEMROM2 IlCanRxIndicationFctPtr[kIlCanNumberOfRxObjects] = 
{
  V_NULL /* ID: 0x000005e8, Handle: 0, ESR_Status9 [FC] */, 
  V_NULL /* ID: 0x000005e7, Handle: 1, ESR_Status8 [FC] */, 
  V_NULL /* ID: 0x000005e6, Handle: 2, ESR_Status7 [FC] */, 
  V_NULL /* ID: 0x000005e5, Handle: 3, ESR_Status6 [FC] */, 
  V_NULL /* ID: 0x000005e4, Handle: 4, ESR_Status5 [FC] */, 
  V_NULL /* ID: 0x0000053f, Handle: 5, ESR_Track64 [FC] */, 
  V_NULL /* ID: 0x0000053e, Handle: 6, ESR_Track63 [FC] */, 
  V_NULL /* ID: 0x0000053d, Handle: 7, ESR_Track62 [FC] */, 
  V_NULL /* ID: 0x0000053c, Handle: 8, ESR_Track61 [FC] */, 
  V_NULL /* ID: 0x0000053b, Handle: 9, ESR_Track60 [FC] */, 
  V_NULL /* ID: 0x0000053a, Handle: 10, ESR_Track59 [FC] */, 
  V_NULL /* ID: 0x00000539, Handle: 11, ESR_Track58 [FC] */, 
  V_NULL /* ID: 0x00000538, Handle: 12, ESR_Track57 [FC] */, 
  V_NULL /* ID: 0x00000537, Handle: 13, ESR_Track56 [FC] */, 
  V_NULL /* ID: 0x00000536, Handle: 14, ESR_Track55 [FC] */, 
  V_NULL /* ID: 0x00000535, Handle: 15, ESR_Track54 [FC] */, 
  V_NULL /* ID: 0x00000534, Handle: 16, ESR_Track53 [FC] */, 
  V_NULL /* ID: 0x00000533, Handle: 17, ESR_Track52 [FC] */, 
  V_NULL /* ID: 0x00000532, Handle: 18, ESR_Track51 [FC] */, 
  V_NULL /* ID: 0x00000531, Handle: 19, ESR_Track50 [FC] */, 
  V_NULL /* ID: 0x00000530, Handle: 20, ESR_Track49 [FC] */, 
  V_NULL /* ID: 0x0000052f, Handle: 21, ESR_Track48 [FC] */, 
  V_NULL /* ID: 0x0000052e, Handle: 22, ESR_Track47 [FC] */, 
  V_NULL /* ID: 0x0000052d, Handle: 23, ESR_Track46 [FC] */, 
  V_NULL /* ID: 0x0000052c, Handle: 24, ESR_Track45 [FC] */, 
  V_NULL /* ID: 0x0000052b, Handle: 25, ESR_Track44 [FC] */, 
  V_NULL /* ID: 0x0000052a, Handle: 26, ESR_Track43 [FC] */, 
  V_NULL /* ID: 0x00000529, Handle: 27, ESR_Track42 [FC] */, 
  V_NULL /* ID: 0x00000528, Handle: 28, ESR_Track41 [FC] */, 
  V_NULL /* ID: 0x00000527, Handle: 29, ESR_Track40 [FC] */, 
  V_NULL /* ID: 0x00000526, Handle: 30, ESR_Track39 [FC] */, 
  V_NULL /* ID: 0x00000525, Handle: 31, ESR_Track38 [FC] */, 
  V_NULL /* ID: 0x00000524, Handle: 32, ESR_Track37 [FC] */, 
  V_NULL /* ID: 0x00000523, Handle: 33, ESR_Track36 [FC] */, 
  V_NULL /* ID: 0x00000522, Handle: 34, ESR_Track35 [FC] */, 
  V_NULL /* ID: 0x00000521, Handle: 35, ESR_Track34 [FC] */, 
  V_NULL /* ID: 0x00000520, Handle: 36, ESR_Track33 [FC] */, 
  V_NULL /* ID: 0x0000051f, Handle: 37, ESR_Track32 [FC] */, 
  V_NULL /* ID: 0x0000051e, Handle: 38, ESR_Track31 [FC] */, 
  V_NULL /* ID: 0x0000051d, Handle: 39, ESR_Track30 [FC] */, 
  V_NULL /* ID: 0x0000051c, Handle: 40, ESR_Track29 [FC] */, 
  V_NULL /* ID: 0x0000051b, Handle: 41, ESR_Track28 [FC] */, 
  V_NULL /* ID: 0x0000051a, Handle: 42, ESR_Track27 [FC] */, 
  V_NULL /* ID: 0x00000519, Handle: 43, ESR_Track26 [FC] */, 
  V_NULL /* ID: 0x00000518, Handle: 44, ESR_Track25 [FC] */, 
  V_NULL /* ID: 0x00000517, Handle: 45, ESR_Track24 [FC] */, 
  V_NULL /* ID: 0x00000516, Handle: 46, ESR_Track23 [FC] */, 
  V_NULL /* ID: 0x00000515, Handle: 47, ESR_Track22 [FC] */, 
  V_NULL /* ID: 0x00000514, Handle: 48, ESR_Track21 [FC] */, 
  V_NULL /* ID: 0x00000513, Handle: 49, ESR_Track20 [FC] */, 
  V_NULL /* ID: 0x00000512, Handle: 50, ESR_Track19 [FC] */, 
  V_NULL /* ID: 0x00000511, Handle: 51, ESR_Track18 [FC] */, 
  V_NULL /* ID: 0x00000510, Handle: 52, ESR_Track17 [FC] */, 
  V_NULL /* ID: 0x0000050f, Handle: 53, ESR_Track16 [FC] */, 
  V_NULL /* ID: 0x0000050e, Handle: 54, ESR_Track15 [FC] */, 
  V_NULL /* ID: 0x0000050d, Handle: 55, ESR_Track14 [FC] */, 
  V_NULL /* ID: 0x0000050c, Handle: 56, ESR_Track13 [FC] */, 
  V_NULL /* ID: 0x0000050b, Handle: 57, ESR_Track12 [FC] */, 
  V_NULL /* ID: 0x0000050a, Handle: 58, ESR_Track11 [FC] */, 
  V_NULL /* ID: 0x00000509, Handle: 59, ESR_Track10 [FC] */, 
  V_NULL /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  V_NULL /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  V_NULL /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  V_NULL /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  V_NULL /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  V_NULL /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  V_NULL /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  V_NULL /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  V_NULL /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  V_NULL /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  V_NULL /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  V_NULL /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  V_NULL /* ID: 0x000004e0, Handle: 72, ESR_Status1 [FC] */, 
  V_NULL /* ID: 0x00000111, Handle: 73, FUNCTION_Switch [BC] */
};
#endif


/* -----------------------------------------------------------------------------
    &&&~ RxDefaultInitValue Message Tables
 ----------------------------------------------------------------------------- */

V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track64IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track63IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track62IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track61IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track60IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track59IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track58IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track57IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track56IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track55IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track54IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track53IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track52IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track51IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track50IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track49IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track48IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track47IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track46IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track45IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track44IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track43IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track42IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track41IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track40IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track39IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track38IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track37IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track36IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track35IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track34IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track33IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track32IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track31IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track30IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track29IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track28IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track27IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track26IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track25IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track24IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track23IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track22IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track21IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track20IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track19IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track18IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track17IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track16IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track15IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track14IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track13IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track12IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track11IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track10IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track09IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track08IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track07IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track06IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track05IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track04IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track03IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track02IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track01IlRxDefaultInitValue[8] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x1F, 
  0xFF
};


/* -----------------------------------------------------------------------------
    &&&~ RxDefaultStartMask Message Tables
 ----------------------------------------------------------------------------- */

V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track64IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track63IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track62IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track61IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track60IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track59IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track58IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track57IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track56IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track55IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track54IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track53IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track52IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track51IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track50IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track49IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track48IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track47IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track46IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track45IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track44IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track43IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track42IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track41IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track40IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track39IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track38IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track37IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track36IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track35IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track34IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track33IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track32IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track31IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track30IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track29IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track28IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track27IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track26IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track25IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track24IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track23IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track22IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track21IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track20IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track19IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track18IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track17IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track16IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track15IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track14IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track13IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track12IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track11IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track10IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track09IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track08IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track07IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track06IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track05IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track04IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track03IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track02IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track01IlRxDefaultStartMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};


/* -----------------------------------------------------------------------------
    &&&~ RxDefaultStopMask Message Tables
 ----------------------------------------------------------------------------- */

V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track64IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track63IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track62IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track61IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track60IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track59IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track58IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track57IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track56IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track55IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track54IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track53IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track52IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track51IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track50IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track49IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track48IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track47IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track46IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track45IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track44IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track43IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track42IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track41IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track40IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track39IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track38IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track37IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track36IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track35IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track34IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track33IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track32IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track31IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track30IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track29IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track28IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track27IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track26IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track25IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track24IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track23IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track22IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track21IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track20IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track19IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track18IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track17IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track16IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track15IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track14IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track13IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track12IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track11IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track10IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track09IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track08IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track07IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track06IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track05IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track04IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track03IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track02IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};
V_MEMROM0 V_MEMROM1 static vuint8 V_MEMROM2 ESR_Track01IlRxDefaultStopMask[8] = 
{
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF, 
  0xFF
};


/* -----------------------------------------------------------------------------
    &&&~ RxDefaultInitValue
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_DEFAULTVALUE)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 V_MEMROM3* V_MEMROM1 V_MEMROM2 IlRxDefaultInitValue[kIlNumberOfRxObjects] = 
{
  V_NULL, 
  V_NULL, 
  V_NULL, 
  V_NULL, 
  V_NULL, 
  ESR_Track64IlRxDefaultInitValue, 
  ESR_Track63IlRxDefaultInitValue, 
  ESR_Track62IlRxDefaultInitValue, 
  ESR_Track61IlRxDefaultInitValue, 
  ESR_Track60IlRxDefaultInitValue, 
  ESR_Track59IlRxDefaultInitValue, 
  ESR_Track58IlRxDefaultInitValue, 
  ESR_Track57IlRxDefaultInitValue, 
  ESR_Track56IlRxDefaultInitValue, 
  ESR_Track55IlRxDefaultInitValue, 
  ESR_Track54IlRxDefaultInitValue, 
  ESR_Track53IlRxDefaultInitValue, 
  ESR_Track52IlRxDefaultInitValue, 
  ESR_Track51IlRxDefaultInitValue, 
  ESR_Track50IlRxDefaultInitValue, 
  ESR_Track49IlRxDefaultInitValue, 
  ESR_Track48IlRxDefaultInitValue, 
  ESR_Track47IlRxDefaultInitValue, 
  ESR_Track46IlRxDefaultInitValue, 
  ESR_Track45IlRxDefaultInitValue, 
  ESR_Track44IlRxDefaultInitValue, 
  ESR_Track43IlRxDefaultInitValue, 
  ESR_Track42IlRxDefaultInitValue, 
  ESR_Track41IlRxDefaultInitValue, 
  ESR_Track40IlRxDefaultInitValue, 
  ESR_Track39IlRxDefaultInitValue, 
  ESR_Track38IlRxDefaultInitValue, 
  ESR_Track37IlRxDefaultInitValue, 
  ESR_Track36IlRxDefaultInitValue, 
  ESR_Track35IlRxDefaultInitValue, 
  ESR_Track34IlRxDefaultInitValue, 
  ESR_Track33IlRxDefaultInitValue, 
  ESR_Track32IlRxDefaultInitValue, 
  ESR_Track31IlRxDefaultInitValue, 
  ESR_Track30IlRxDefaultInitValue, 
  ESR_Track29IlRxDefaultInitValue, 
  ESR_Track28IlRxDefaultInitValue, 
  ESR_Track27IlRxDefaultInitValue, 
  ESR_Track26IlRxDefaultInitValue, 
  ESR_Track25IlRxDefaultInitValue, 
  ESR_Track24IlRxDefaultInitValue, 
  ESR_Track23IlRxDefaultInitValue, 
  ESR_Track22IlRxDefaultInitValue, 
  ESR_Track21IlRxDefaultInitValue, 
  ESR_Track20IlRxDefaultInitValue, 
  ESR_Track19IlRxDefaultInitValue, 
  ESR_Track18IlRxDefaultInitValue, 
  ESR_Track17IlRxDefaultInitValue, 
  ESR_Track16IlRxDefaultInitValue, 
  ESR_Track15IlRxDefaultInitValue, 
  ESR_Track14IlRxDefaultInitValue, 
  ESR_Track13IlRxDefaultInitValue, 
  ESR_Track12IlRxDefaultInitValue, 
  ESR_Track11IlRxDefaultInitValue, 
  ESR_Track10IlRxDefaultInitValue, 
  ESR_Track09IlRxDefaultInitValue, 
  ESR_Track08IlRxDefaultInitValue, 
  ESR_Track07IlRxDefaultInitValue, 
  ESR_Track06IlRxDefaultInitValue, 
  ESR_Track05IlRxDefaultInitValue, 
  ESR_Track04IlRxDefaultInitValue, 
  ESR_Track03IlRxDefaultInitValue, 
  ESR_Track02IlRxDefaultInitValue, 
  ESR_Track01IlRxDefaultInitValue, 
  V_NULL, 
  V_NULL, 
  V_NULL, 
  V_NULL, 
  V_NULL
};
#endif



/* -----------------------------------------------------------------------------
    &&&~ RxDefaultStartMask
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_DEFAULTVALUE) && defined(IL_ENABLE_RX_START_DEFAULTVALUE)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 V_MEMROM3* V_MEMROM1 V_MEMROM2 IlRxDefaultStartMask[kIlNumberOfRxObjects] = 
{
  V_NULL, 
  V_NULL, 
  V_NULL, 
  V_NULL, 
  V_NULL, 
  ESR_Track64IlRxDefaultStartMask, 
  ESR_Track63IlRxDefaultStartMask, 
  ESR_Track62IlRxDefaultStartMask, 
  ESR_Track61IlRxDefaultStartMask, 
  ESR_Track60IlRxDefaultStartMask, 
  ESR_Track59IlRxDefaultStartMask, 
  ESR_Track58IlRxDefaultStartMask, 
  ESR_Track57IlRxDefaultStartMask, 
  ESR_Track56IlRxDefaultStartMask, 
  ESR_Track55IlRxDefaultStartMask, 
  ESR_Track54IlRxDefaultStartMask, 
  ESR_Track53IlRxDefaultStartMask, 
  ESR_Track52IlRxDefaultStartMask, 
  ESR_Track51IlRxDefaultStartMask, 
  ESR_Track50IlRxDefaultStartMask, 
  ESR_Track49IlRxDefaultStartMask, 
  ESR_Track48IlRxDefaultStartMask, 
  ESR_Track47IlRxDefaultStartMask, 
  ESR_Track46IlRxDefaultStartMask, 
  ESR_Track45IlRxDefaultStartMask, 
  ESR_Track44IlRxDefaultStartMask, 
  ESR_Track43IlRxDefaultStartMask, 
  ESR_Track42IlRxDefaultStartMask, 
  ESR_Track41IlRxDefaultStartMask, 
  ESR_Track40IlRxDefaultStartMask, 
  ESR_Track39IlRxDefaultStartMask, 
  ESR_Track38IlRxDefaultStartMask, 
  ESR_Track37IlRxDefaultStartMask, 
  ESR_Track36IlRxDefaultStartMask, 
  ESR_Track35IlRxDefaultStartMask, 
  ESR_Track34IlRxDefaultStartMask, 
  ESR_Track33IlRxDefaultStartMask, 
  ESR_Track32IlRxDefaultStartMask, 
  ESR_Track31IlRxDefaultStartMask, 
  ESR_Track30IlRxDefaultStartMask, 
  ESR_Track29IlRxDefaultStartMask, 
  ESR_Track28IlRxDefaultStartMask, 
  ESR_Track27IlRxDefaultStartMask, 
  ESR_Track26IlRxDefaultStartMask, 
  ESR_Track25IlRxDefaultStartMask, 
  ESR_Track24IlRxDefaultStartMask, 
  ESR_Track23IlRxDefaultStartMask, 
  ESR_Track22IlRxDefaultStartMask, 
  ESR_Track21IlRxDefaultStartMask, 
  ESR_Track20IlRxDefaultStartMask, 
  ESR_Track19IlRxDefaultStartMask, 
  ESR_Track18IlRxDefaultStartMask, 
  ESR_Track17IlRxDefaultStartMask, 
  ESR_Track16IlRxDefaultStartMask, 
  ESR_Track15IlRxDefaultStartMask, 
  ESR_Track14IlRxDefaultStartMask, 
  ESR_Track13IlRxDefaultStartMask, 
  ESR_Track12IlRxDefaultStartMask, 
  ESR_Track11IlRxDefaultStartMask, 
  ESR_Track10IlRxDefaultStartMask, 
  ESR_Track09IlRxDefaultStartMask, 
  ESR_Track08IlRxDefaultStartMask, 
  ESR_Track07IlRxDefaultStartMask, 
  ESR_Track06IlRxDefaultStartMask, 
  ESR_Track05IlRxDefaultStartMask, 
  ESR_Track04IlRxDefaultStartMask, 
  ESR_Track03IlRxDefaultStartMask, 
  ESR_Track02IlRxDefaultStartMask, 
  ESR_Track01IlRxDefaultStartMask, 
  V_NULL, 
  V_NULL, 
  V_NULL, 
  V_NULL, 
  V_NULL
};
#endif



/* -----------------------------------------------------------------------------
    &&&~ RxDefaultStopMask
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_DEFAULTVALUE) && defined(IL_ENABLE_RX_STOP_DEFAULTVALUE)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 V_MEMROM3* V_MEMROM1 V_MEMROM2 IlRxDefaultStopMask[kIlNumberOfRxObjects] = 
{
  V_NULL, 
  V_NULL, 
  V_NULL, 
  V_NULL, 
  V_NULL, 
  ESR_Track64IlRxDefaultStopMask, 
  ESR_Track63IlRxDefaultStopMask, 
  ESR_Track62IlRxDefaultStopMask, 
  ESR_Track61IlRxDefaultStopMask, 
  ESR_Track60IlRxDefaultStopMask, 
  ESR_Track59IlRxDefaultStopMask, 
  ESR_Track58IlRxDefaultStopMask, 
  ESR_Track57IlRxDefaultStopMask, 
  ESR_Track56IlRxDefaultStopMask, 
  ESR_Track55IlRxDefaultStopMask, 
  ESR_Track54IlRxDefaultStopMask, 
  ESR_Track53IlRxDefaultStopMask, 
  ESR_Track52IlRxDefaultStopMask, 
  ESR_Track51IlRxDefaultStopMask, 
  ESR_Track50IlRxDefaultStopMask, 
  ESR_Track49IlRxDefaultStopMask, 
  ESR_Track48IlRxDefaultStopMask, 
  ESR_Track47IlRxDefaultStopMask, 
  ESR_Track46IlRxDefaultStopMask, 
  ESR_Track45IlRxDefaultStopMask, 
  ESR_Track44IlRxDefaultStopMask, 
  ESR_Track43IlRxDefaultStopMask, 
  ESR_Track42IlRxDefaultStopMask, 
  ESR_Track41IlRxDefaultStopMask, 
  ESR_Track40IlRxDefaultStopMask, 
  ESR_Track39IlRxDefaultStopMask, 
  ESR_Track38IlRxDefaultStopMask, 
  ESR_Track37IlRxDefaultStopMask, 
  ESR_Track36IlRxDefaultStopMask, 
  ESR_Track35IlRxDefaultStopMask, 
  ESR_Track34IlRxDefaultStopMask, 
  ESR_Track33IlRxDefaultStopMask, 
  ESR_Track32IlRxDefaultStopMask, 
  ESR_Track31IlRxDefaultStopMask, 
  ESR_Track30IlRxDefaultStopMask, 
  ESR_Track29IlRxDefaultStopMask, 
  ESR_Track28IlRxDefaultStopMask, 
  ESR_Track27IlRxDefaultStopMask, 
  ESR_Track26IlRxDefaultStopMask, 
  ESR_Track25IlRxDefaultStopMask, 
  ESR_Track24IlRxDefaultStopMask, 
  ESR_Track23IlRxDefaultStopMask, 
  ESR_Track22IlRxDefaultStopMask, 
  ESR_Track21IlRxDefaultStopMask, 
  ESR_Track20IlRxDefaultStopMask, 
  ESR_Track19IlRxDefaultStopMask, 
  ESR_Track18IlRxDefaultStopMask, 
  ESR_Track17IlRxDefaultStopMask, 
  ESR_Track16IlRxDefaultStopMask, 
  ESR_Track15IlRxDefaultStopMask, 
  ESR_Track14IlRxDefaultStopMask, 
  ESR_Track13IlRxDefaultStopMask, 
  ESR_Track12IlRxDefaultStopMask, 
  ESR_Track11IlRxDefaultStopMask, 
  ESR_Track10IlRxDefaultStopMask, 
  ESR_Track09IlRxDefaultStopMask, 
  ESR_Track08IlRxDefaultStopMask, 
  ESR_Track07IlRxDefaultStopMask, 
  ESR_Track06IlRxDefaultStopMask, 
  ESR_Track05IlRxDefaultStopMask, 
  ESR_Track04IlRxDefaultStopMask, 
  ESR_Track03IlRxDefaultStopMask, 
  ESR_Track02IlRxDefaultStopMask, 
  ESR_Track01IlRxDefaultStopMask, 
  V_NULL, 
  V_NULL, 
  V_NULL, 
  V_NULL, 
  V_NULL
};
#endif



/* -----------------------------------------------------------------------------
    &&&~ Implementation of Precopy Functions
 ----------------------------------------------------------------------------- */

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track64PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x01;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track63PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x02;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track62PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x04;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track61PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x08;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track60PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x10;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track59PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x20;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track58PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x40;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track57PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[0] |= (vuint8) 0x80;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track56PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[1] |= (vuint8) 0x01;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track55PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[1] |= (vuint8) 0x02;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track54PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[1] |= (vuint8) 0x04;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track53PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[1] |= (vuint8) 0x08;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track52PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[1] |= (vuint8) 0x10;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track51PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[1] |= (vuint8) 0x20;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track50PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[1] |= (vuint8) 0x40;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track49PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[1] |= (vuint8) 0x80;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track48PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[2] |= (vuint8) 0x01;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track47PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[2] |= (vuint8) 0x02;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track46PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[2] |= (vuint8) 0x04;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track45PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[2] |= (vuint8) 0x08;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track44PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[2] |= (vuint8) 0x10;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track43PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[2] |= (vuint8) 0x20;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track42PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[2] |= (vuint8) 0x40;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track41PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[2] |= (vuint8) 0x80;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track40PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[3] |= (vuint8) 0x01;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track39PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[3] |= (vuint8) 0x02;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track38PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[3] |= (vuint8) 0x04;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track37PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[3] |= (vuint8) 0x08;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track36PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[3] |= (vuint8) 0x10;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track35PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[3] |= (vuint8) 0x20;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track34PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[3] |= (vuint8) 0x40;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track33PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[3] |= (vuint8) 0x80;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track32PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[4] |= (vuint8) 0x01;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track31PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[4] |= (vuint8) 0x02;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track30PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[4] |= (vuint8) 0x04;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track29PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[4] |= (vuint8) 0x08;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track28PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[4] |= (vuint8) 0x10;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track27PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[4] |= (vuint8) 0x20;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track26PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[4] |= (vuint8) 0x40;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track25PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[4] |= (vuint8) 0x80;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track24PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[5] |= (vuint8) 0x01;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track23PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[5] |= (vuint8) 0x02;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track22PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[5] |= (vuint8) 0x04;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track21PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[5] |= (vuint8) 0x08;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track20PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[5] |= (vuint8) 0x10;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track19PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[5] |= (vuint8) 0x20;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track18PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[5] |= (vuint8) 0x40;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track17PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[5] |= (vuint8) 0x80;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track16PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[6] |= (vuint8) 0x01;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track15PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[6] |= (vuint8) 0x02;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track14PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[6] |= (vuint8) 0x04;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track13PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[6] |= (vuint8) 0x08;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track12PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[6] |= (vuint8) 0x10;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track11PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[6] |= (vuint8) 0x20;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track10PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[6] |= (vuint8) 0x40;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track09PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[6] |= (vuint8) 0x80;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track08PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[7] |= (vuint8) 0x01;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track07PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[7] |= (vuint8) 0x02;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track06PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[7] |= (vuint8) 0x04;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track05PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[7] |= (vuint8) 0x08;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track04PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[7] |= (vuint8) 0x10;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track03PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[7] |= (vuint8) 0x20;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track02PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[7] |= (vuint8) 0x40;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif

#ifdef IL_ENABLE_RX
vuint8 IlMsgESR_Track01PreCopy(CanRxInfoStructPtr rxStruct)
{
  rxStruct = rxStruct;
  IlEnterCriticalFlagAccess();
  ilRxTimerFlags[7] |= (vuint8) 0x80;
  IlLeaveCriticalFlagAccess();
  return kCanCopyData;
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Implementation Rx Timeout Indication Functions
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track64TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track64._c[0] = (vuint8) 0x00;
  ESR_Track64._c[1] = (vuint8) 0x00;
  ESR_Track64._c[2] = (vuint8) 0x00;
  ESR_Track64._c[3] = (vuint8) 0x00;
  ESR_Track64._c[4] = (vuint8) 0x00;
  ESR_Track64._c[5] = (vuint8) 0x00;
  ESR_Track64._c[6] = (vuint8) 0x1F;
  ESR_Track64._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track63TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track63._c[0] = (vuint8) 0x00;
  ESR_Track63._c[1] = (vuint8) 0x00;
  ESR_Track63._c[2] = (vuint8) 0x00;
  ESR_Track63._c[3] = (vuint8) 0x00;
  ESR_Track63._c[4] = (vuint8) 0x00;
  ESR_Track63._c[5] = (vuint8) 0x00;
  ESR_Track63._c[6] = (vuint8) 0x1F;
  ESR_Track63._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track62TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track62._c[0] = (vuint8) 0x00;
  ESR_Track62._c[1] = (vuint8) 0x00;
  ESR_Track62._c[2] = (vuint8) 0x00;
  ESR_Track62._c[3] = (vuint8) 0x00;
  ESR_Track62._c[4] = (vuint8) 0x00;
  ESR_Track62._c[5] = (vuint8) 0x00;
  ESR_Track62._c[6] = (vuint8) 0x1F;
  ESR_Track62._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track61TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track61._c[0] = (vuint8) 0x00;
  ESR_Track61._c[1] = (vuint8) 0x00;
  ESR_Track61._c[2] = (vuint8) 0x00;
  ESR_Track61._c[3] = (vuint8) 0x00;
  ESR_Track61._c[4] = (vuint8) 0x00;
  ESR_Track61._c[5] = (vuint8) 0x00;
  ESR_Track61._c[6] = (vuint8) 0x1F;
  ESR_Track61._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track60TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track60._c[0] = (vuint8) 0x00;
  ESR_Track60._c[1] = (vuint8) 0x00;
  ESR_Track60._c[2] = (vuint8) 0x00;
  ESR_Track60._c[3] = (vuint8) 0x00;
  ESR_Track60._c[4] = (vuint8) 0x00;
  ESR_Track60._c[5] = (vuint8) 0x00;
  ESR_Track60._c[6] = (vuint8) 0x1F;
  ESR_Track60._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track59TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track59._c[0] = (vuint8) 0x00;
  ESR_Track59._c[1] = (vuint8) 0x00;
  ESR_Track59._c[2] = (vuint8) 0x00;
  ESR_Track59._c[3] = (vuint8) 0x00;
  ESR_Track59._c[4] = (vuint8) 0x00;
  ESR_Track59._c[5] = (vuint8) 0x00;
  ESR_Track59._c[6] = (vuint8) 0x1F;
  ESR_Track59._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track58TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track58._c[0] = (vuint8) 0x00;
  ESR_Track58._c[1] = (vuint8) 0x00;
  ESR_Track58._c[2] = (vuint8) 0x00;
  ESR_Track58._c[3] = (vuint8) 0x00;
  ESR_Track58._c[4] = (vuint8) 0x00;
  ESR_Track58._c[5] = (vuint8) 0x00;
  ESR_Track58._c[6] = (vuint8) 0x1F;
  ESR_Track58._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track57TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track57._c[0] = (vuint8) 0x00;
  ESR_Track57._c[1] = (vuint8) 0x00;
  ESR_Track57._c[2] = (vuint8) 0x00;
  ESR_Track57._c[3] = (vuint8) 0x00;
  ESR_Track57._c[4] = (vuint8) 0x00;
  ESR_Track57._c[5] = (vuint8) 0x00;
  ESR_Track57._c[6] = (vuint8) 0x1F;
  ESR_Track57._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track56TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track56._c[0] = (vuint8) 0x00;
  ESR_Track56._c[1] = (vuint8) 0x00;
  ESR_Track56._c[2] = (vuint8) 0x00;
  ESR_Track56._c[3] = (vuint8) 0x00;
  ESR_Track56._c[4] = (vuint8) 0x00;
  ESR_Track56._c[5] = (vuint8) 0x00;
  ESR_Track56._c[6] = (vuint8) 0x1F;
  ESR_Track56._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track55TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track55._c[0] = (vuint8) 0x00;
  ESR_Track55._c[1] = (vuint8) 0x00;
  ESR_Track55._c[2] = (vuint8) 0x00;
  ESR_Track55._c[3] = (vuint8) 0x00;
  ESR_Track55._c[4] = (vuint8) 0x00;
  ESR_Track55._c[5] = (vuint8) 0x00;
  ESR_Track55._c[6] = (vuint8) 0x1F;
  ESR_Track55._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track54TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track54._c[0] = (vuint8) 0x00;
  ESR_Track54._c[1] = (vuint8) 0x00;
  ESR_Track54._c[2] = (vuint8) 0x00;
  ESR_Track54._c[3] = (vuint8) 0x00;
  ESR_Track54._c[4] = (vuint8) 0x00;
  ESR_Track54._c[5] = (vuint8) 0x00;
  ESR_Track54._c[6] = (vuint8) 0x1F;
  ESR_Track54._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track53TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track53._c[0] = (vuint8) 0x00;
  ESR_Track53._c[1] = (vuint8) 0x00;
  ESR_Track53._c[2] = (vuint8) 0x00;
  ESR_Track53._c[3] = (vuint8) 0x00;
  ESR_Track53._c[4] = (vuint8) 0x00;
  ESR_Track53._c[5] = (vuint8) 0x00;
  ESR_Track53._c[6] = (vuint8) 0x1F;
  ESR_Track53._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track52TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track52._c[0] = (vuint8) 0x00;
  ESR_Track52._c[1] = (vuint8) 0x00;
  ESR_Track52._c[2] = (vuint8) 0x00;
  ESR_Track52._c[3] = (vuint8) 0x00;
  ESR_Track52._c[4] = (vuint8) 0x00;
  ESR_Track52._c[5] = (vuint8) 0x00;
  ESR_Track52._c[6] = (vuint8) 0x1F;
  ESR_Track52._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track51TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track51._c[0] = (vuint8) 0x00;
  ESR_Track51._c[1] = (vuint8) 0x00;
  ESR_Track51._c[2] = (vuint8) 0x00;
  ESR_Track51._c[3] = (vuint8) 0x00;
  ESR_Track51._c[4] = (vuint8) 0x00;
  ESR_Track51._c[5] = (vuint8) 0x00;
  ESR_Track51._c[6] = (vuint8) 0x1F;
  ESR_Track51._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track50TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track50._c[0] = (vuint8) 0x00;
  ESR_Track50._c[1] = (vuint8) 0x00;
  ESR_Track50._c[2] = (vuint8) 0x00;
  ESR_Track50._c[3] = (vuint8) 0x00;
  ESR_Track50._c[4] = (vuint8) 0x00;
  ESR_Track50._c[5] = (vuint8) 0x00;
  ESR_Track50._c[6] = (vuint8) 0x1F;
  ESR_Track50._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track49TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track49._c[0] = (vuint8) 0x00;
  ESR_Track49._c[1] = (vuint8) 0x00;
  ESR_Track49._c[2] = (vuint8) 0x00;
  ESR_Track49._c[3] = (vuint8) 0x00;
  ESR_Track49._c[4] = (vuint8) 0x00;
  ESR_Track49._c[5] = (vuint8) 0x00;
  ESR_Track49._c[6] = (vuint8) 0x1F;
  ESR_Track49._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track48TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track48._c[0] = (vuint8) 0x00;
  ESR_Track48._c[1] = (vuint8) 0x00;
  ESR_Track48._c[2] = (vuint8) 0x00;
  ESR_Track48._c[3] = (vuint8) 0x00;
  ESR_Track48._c[4] = (vuint8) 0x00;
  ESR_Track48._c[5] = (vuint8) 0x00;
  ESR_Track48._c[6] = (vuint8) 0x1F;
  ESR_Track48._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track47TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track47._c[0] = (vuint8) 0x00;
  ESR_Track47._c[1] = (vuint8) 0x00;
  ESR_Track47._c[2] = (vuint8) 0x00;
  ESR_Track47._c[3] = (vuint8) 0x00;
  ESR_Track47._c[4] = (vuint8) 0x00;
  ESR_Track47._c[5] = (vuint8) 0x00;
  ESR_Track47._c[6] = (vuint8) 0x1F;
  ESR_Track47._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track46TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track46._c[0] = (vuint8) 0x00;
  ESR_Track46._c[1] = (vuint8) 0x00;
  ESR_Track46._c[2] = (vuint8) 0x00;
  ESR_Track46._c[3] = (vuint8) 0x00;
  ESR_Track46._c[4] = (vuint8) 0x00;
  ESR_Track46._c[5] = (vuint8) 0x00;
  ESR_Track46._c[6] = (vuint8) 0x1F;
  ESR_Track46._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track45TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track45._c[0] = (vuint8) 0x00;
  ESR_Track45._c[1] = (vuint8) 0x00;
  ESR_Track45._c[2] = (vuint8) 0x00;
  ESR_Track45._c[3] = (vuint8) 0x00;
  ESR_Track45._c[4] = (vuint8) 0x00;
  ESR_Track45._c[5] = (vuint8) 0x00;
  ESR_Track45._c[6] = (vuint8) 0x1F;
  ESR_Track45._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track44TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track44._c[0] = (vuint8) 0x00;
  ESR_Track44._c[1] = (vuint8) 0x00;
  ESR_Track44._c[2] = (vuint8) 0x00;
  ESR_Track44._c[3] = (vuint8) 0x00;
  ESR_Track44._c[4] = (vuint8) 0x00;
  ESR_Track44._c[5] = (vuint8) 0x00;
  ESR_Track44._c[6] = (vuint8) 0x1F;
  ESR_Track44._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track43TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track43._c[0] = (vuint8) 0x00;
  ESR_Track43._c[1] = (vuint8) 0x00;
  ESR_Track43._c[2] = (vuint8) 0x00;
  ESR_Track43._c[3] = (vuint8) 0x00;
  ESR_Track43._c[4] = (vuint8) 0x00;
  ESR_Track43._c[5] = (vuint8) 0x00;
  ESR_Track43._c[6] = (vuint8) 0x1F;
  ESR_Track43._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track42TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track42._c[0] = (vuint8) 0x00;
  ESR_Track42._c[1] = (vuint8) 0x00;
  ESR_Track42._c[2] = (vuint8) 0x00;
  ESR_Track42._c[3] = (vuint8) 0x00;
  ESR_Track42._c[4] = (vuint8) 0x00;
  ESR_Track42._c[5] = (vuint8) 0x00;
  ESR_Track42._c[6] = (vuint8) 0x1F;
  ESR_Track42._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track41TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track41._c[0] = (vuint8) 0x00;
  ESR_Track41._c[1] = (vuint8) 0x00;
  ESR_Track41._c[2] = (vuint8) 0x00;
  ESR_Track41._c[3] = (vuint8) 0x00;
  ESR_Track41._c[4] = (vuint8) 0x00;
  ESR_Track41._c[5] = (vuint8) 0x00;
  ESR_Track41._c[6] = (vuint8) 0x1F;
  ESR_Track41._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track40TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track40._c[0] = (vuint8) 0x00;
  ESR_Track40._c[1] = (vuint8) 0x00;
  ESR_Track40._c[2] = (vuint8) 0x00;
  ESR_Track40._c[3] = (vuint8) 0x00;
  ESR_Track40._c[4] = (vuint8) 0x00;
  ESR_Track40._c[5] = (vuint8) 0x00;
  ESR_Track40._c[6] = (vuint8) 0x1F;
  ESR_Track40._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track39TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track39._c[0] = (vuint8) 0x00;
  ESR_Track39._c[1] = (vuint8) 0x00;
  ESR_Track39._c[2] = (vuint8) 0x00;
  ESR_Track39._c[3] = (vuint8) 0x00;
  ESR_Track39._c[4] = (vuint8) 0x00;
  ESR_Track39._c[5] = (vuint8) 0x00;
  ESR_Track39._c[6] = (vuint8) 0x1F;
  ESR_Track39._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track38TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track38._c[0] = (vuint8) 0x00;
  ESR_Track38._c[1] = (vuint8) 0x00;
  ESR_Track38._c[2] = (vuint8) 0x00;
  ESR_Track38._c[3] = (vuint8) 0x00;
  ESR_Track38._c[4] = (vuint8) 0x00;
  ESR_Track38._c[5] = (vuint8) 0x00;
  ESR_Track38._c[6] = (vuint8) 0x1F;
  ESR_Track38._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track37TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track37._c[0] = (vuint8) 0x00;
  ESR_Track37._c[1] = (vuint8) 0x00;
  ESR_Track37._c[2] = (vuint8) 0x00;
  ESR_Track37._c[3] = (vuint8) 0x00;
  ESR_Track37._c[4] = (vuint8) 0x00;
  ESR_Track37._c[5] = (vuint8) 0x00;
  ESR_Track37._c[6] = (vuint8) 0x1F;
  ESR_Track37._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track36TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track36._c[0] = (vuint8) 0x00;
  ESR_Track36._c[1] = (vuint8) 0x00;
  ESR_Track36._c[2] = (vuint8) 0x00;
  ESR_Track36._c[3] = (vuint8) 0x00;
  ESR_Track36._c[4] = (vuint8) 0x00;
  ESR_Track36._c[5] = (vuint8) 0x00;
  ESR_Track36._c[6] = (vuint8) 0x1F;
  ESR_Track36._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track35TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track35._c[0] = (vuint8) 0x00;
  ESR_Track35._c[1] = (vuint8) 0x00;
  ESR_Track35._c[2] = (vuint8) 0x00;
  ESR_Track35._c[3] = (vuint8) 0x00;
  ESR_Track35._c[4] = (vuint8) 0x00;
  ESR_Track35._c[5] = (vuint8) 0x00;
  ESR_Track35._c[6] = (vuint8) 0x1F;
  ESR_Track35._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track34TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track34._c[0] = (vuint8) 0x00;
  ESR_Track34._c[1] = (vuint8) 0x00;
  ESR_Track34._c[2] = (vuint8) 0x00;
  ESR_Track34._c[3] = (vuint8) 0x00;
  ESR_Track34._c[4] = (vuint8) 0x00;
  ESR_Track34._c[5] = (vuint8) 0x00;
  ESR_Track34._c[6] = (vuint8) 0x1F;
  ESR_Track34._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track33TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track33._c[0] = (vuint8) 0x00;
  ESR_Track33._c[1] = (vuint8) 0x00;
  ESR_Track33._c[2] = (vuint8) 0x00;
  ESR_Track33._c[3] = (vuint8) 0x00;
  ESR_Track33._c[4] = (vuint8) 0x00;
  ESR_Track33._c[5] = (vuint8) 0x00;
  ESR_Track33._c[6] = (vuint8) 0x1F;
  ESR_Track33._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track32TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track32._c[0] = (vuint8) 0x00;
  ESR_Track32._c[1] = (vuint8) 0x00;
  ESR_Track32._c[2] = (vuint8) 0x00;
  ESR_Track32._c[3] = (vuint8) 0x00;
  ESR_Track32._c[4] = (vuint8) 0x00;
  ESR_Track32._c[5] = (vuint8) 0x00;
  ESR_Track32._c[6] = (vuint8) 0x1F;
  ESR_Track32._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track31TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track31._c[0] = (vuint8) 0x00;
  ESR_Track31._c[1] = (vuint8) 0x00;
  ESR_Track31._c[2] = (vuint8) 0x00;
  ESR_Track31._c[3] = (vuint8) 0x00;
  ESR_Track31._c[4] = (vuint8) 0x00;
  ESR_Track31._c[5] = (vuint8) 0x00;
  ESR_Track31._c[6] = (vuint8) 0x1F;
  ESR_Track31._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track30TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track30._c[0] = (vuint8) 0x00;
  ESR_Track30._c[1] = (vuint8) 0x00;
  ESR_Track30._c[2] = (vuint8) 0x00;
  ESR_Track30._c[3] = (vuint8) 0x00;
  ESR_Track30._c[4] = (vuint8) 0x00;
  ESR_Track30._c[5] = (vuint8) 0x00;
  ESR_Track30._c[6] = (vuint8) 0x1F;
  ESR_Track30._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track29TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track29._c[0] = (vuint8) 0x00;
  ESR_Track29._c[1] = (vuint8) 0x00;
  ESR_Track29._c[2] = (vuint8) 0x00;
  ESR_Track29._c[3] = (vuint8) 0x00;
  ESR_Track29._c[4] = (vuint8) 0x00;
  ESR_Track29._c[5] = (vuint8) 0x00;
  ESR_Track29._c[6] = (vuint8) 0x1F;
  ESR_Track29._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track28TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track28._c[0] = (vuint8) 0x00;
  ESR_Track28._c[1] = (vuint8) 0x00;
  ESR_Track28._c[2] = (vuint8) 0x00;
  ESR_Track28._c[3] = (vuint8) 0x00;
  ESR_Track28._c[4] = (vuint8) 0x00;
  ESR_Track28._c[5] = (vuint8) 0x00;
  ESR_Track28._c[6] = (vuint8) 0x1F;
  ESR_Track28._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track27TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track27._c[0] = (vuint8) 0x00;
  ESR_Track27._c[1] = (vuint8) 0x00;
  ESR_Track27._c[2] = (vuint8) 0x00;
  ESR_Track27._c[3] = (vuint8) 0x00;
  ESR_Track27._c[4] = (vuint8) 0x00;
  ESR_Track27._c[5] = (vuint8) 0x00;
  ESR_Track27._c[6] = (vuint8) 0x1F;
  ESR_Track27._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track26TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track26._c[0] = (vuint8) 0x00;
  ESR_Track26._c[1] = (vuint8) 0x00;
  ESR_Track26._c[2] = (vuint8) 0x00;
  ESR_Track26._c[3] = (vuint8) 0x00;
  ESR_Track26._c[4] = (vuint8) 0x00;
  ESR_Track26._c[5] = (vuint8) 0x00;
  ESR_Track26._c[6] = (vuint8) 0x1F;
  ESR_Track26._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track25TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track25._c[0] = (vuint8) 0x00;
  ESR_Track25._c[1] = (vuint8) 0x00;
  ESR_Track25._c[2] = (vuint8) 0x00;
  ESR_Track25._c[3] = (vuint8) 0x00;
  ESR_Track25._c[4] = (vuint8) 0x00;
  ESR_Track25._c[5] = (vuint8) 0x00;
  ESR_Track25._c[6] = (vuint8) 0x1F;
  ESR_Track25._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track24TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track24._c[0] = (vuint8) 0x00;
  ESR_Track24._c[1] = (vuint8) 0x00;
  ESR_Track24._c[2] = (vuint8) 0x00;
  ESR_Track24._c[3] = (vuint8) 0x00;
  ESR_Track24._c[4] = (vuint8) 0x00;
  ESR_Track24._c[5] = (vuint8) 0x00;
  ESR_Track24._c[6] = (vuint8) 0x1F;
  ESR_Track24._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track23TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track23._c[0] = (vuint8) 0x00;
  ESR_Track23._c[1] = (vuint8) 0x00;
  ESR_Track23._c[2] = (vuint8) 0x00;
  ESR_Track23._c[3] = (vuint8) 0x00;
  ESR_Track23._c[4] = (vuint8) 0x00;
  ESR_Track23._c[5] = (vuint8) 0x00;
  ESR_Track23._c[6] = (vuint8) 0x1F;
  ESR_Track23._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track22TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track22._c[0] = (vuint8) 0x00;
  ESR_Track22._c[1] = (vuint8) 0x00;
  ESR_Track22._c[2] = (vuint8) 0x00;
  ESR_Track22._c[3] = (vuint8) 0x00;
  ESR_Track22._c[4] = (vuint8) 0x00;
  ESR_Track22._c[5] = (vuint8) 0x00;
  ESR_Track22._c[6] = (vuint8) 0x1F;
  ESR_Track22._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track21TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track21._c[0] = (vuint8) 0x00;
  ESR_Track21._c[1] = (vuint8) 0x00;
  ESR_Track21._c[2] = (vuint8) 0x00;
  ESR_Track21._c[3] = (vuint8) 0x00;
  ESR_Track21._c[4] = (vuint8) 0x00;
  ESR_Track21._c[5] = (vuint8) 0x00;
  ESR_Track21._c[6] = (vuint8) 0x1F;
  ESR_Track21._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track20TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track20._c[0] = (vuint8) 0x00;
  ESR_Track20._c[1] = (vuint8) 0x00;
  ESR_Track20._c[2] = (vuint8) 0x00;
  ESR_Track20._c[3] = (vuint8) 0x00;
  ESR_Track20._c[4] = (vuint8) 0x00;
  ESR_Track20._c[5] = (vuint8) 0x00;
  ESR_Track20._c[6] = (vuint8) 0x1F;
  ESR_Track20._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track19TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track19._c[0] = (vuint8) 0x00;
  ESR_Track19._c[1] = (vuint8) 0x00;
  ESR_Track19._c[2] = (vuint8) 0x00;
  ESR_Track19._c[3] = (vuint8) 0x00;
  ESR_Track19._c[4] = (vuint8) 0x00;
  ESR_Track19._c[5] = (vuint8) 0x00;
  ESR_Track19._c[6] = (vuint8) 0x1F;
  ESR_Track19._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track18TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track18._c[0] = (vuint8) 0x00;
  ESR_Track18._c[1] = (vuint8) 0x00;
  ESR_Track18._c[2] = (vuint8) 0x00;
  ESR_Track18._c[3] = (vuint8) 0x00;
  ESR_Track18._c[4] = (vuint8) 0x00;
  ESR_Track18._c[5] = (vuint8) 0x00;
  ESR_Track18._c[6] = (vuint8) 0x1F;
  ESR_Track18._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track17TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track17._c[0] = (vuint8) 0x00;
  ESR_Track17._c[1] = (vuint8) 0x00;
  ESR_Track17._c[2] = (vuint8) 0x00;
  ESR_Track17._c[3] = (vuint8) 0x00;
  ESR_Track17._c[4] = (vuint8) 0x00;
  ESR_Track17._c[5] = (vuint8) 0x00;
  ESR_Track17._c[6] = (vuint8) 0x1F;
  ESR_Track17._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track16TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track16._c[0] = (vuint8) 0x00;
  ESR_Track16._c[1] = (vuint8) 0x00;
  ESR_Track16._c[2] = (vuint8) 0x00;
  ESR_Track16._c[3] = (vuint8) 0x00;
  ESR_Track16._c[4] = (vuint8) 0x00;
  ESR_Track16._c[5] = (vuint8) 0x00;
  ESR_Track16._c[6] = (vuint8) 0x1F;
  ESR_Track16._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track15TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track15._c[0] = (vuint8) 0x00;
  ESR_Track15._c[1] = (vuint8) 0x00;
  ESR_Track15._c[2] = (vuint8) 0x00;
  ESR_Track15._c[3] = (vuint8) 0x00;
  ESR_Track15._c[4] = (vuint8) 0x00;
  ESR_Track15._c[5] = (vuint8) 0x00;
  ESR_Track15._c[6] = (vuint8) 0x1F;
  ESR_Track15._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track14TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track14._c[0] = (vuint8) 0x00;
  ESR_Track14._c[1] = (vuint8) 0x00;
  ESR_Track14._c[2] = (vuint8) 0x00;
  ESR_Track14._c[3] = (vuint8) 0x00;
  ESR_Track14._c[4] = (vuint8) 0x00;
  ESR_Track14._c[5] = (vuint8) 0x00;
  ESR_Track14._c[6] = (vuint8) 0x1F;
  ESR_Track14._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track13TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track13._c[0] = (vuint8) 0x00;
  ESR_Track13._c[1] = (vuint8) 0x00;
  ESR_Track13._c[2] = (vuint8) 0x00;
  ESR_Track13._c[3] = (vuint8) 0x00;
  ESR_Track13._c[4] = (vuint8) 0x00;
  ESR_Track13._c[5] = (vuint8) 0x00;
  ESR_Track13._c[6] = (vuint8) 0x1F;
  ESR_Track13._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track12TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track12._c[0] = (vuint8) 0x00;
  ESR_Track12._c[1] = (vuint8) 0x00;
  ESR_Track12._c[2] = (vuint8) 0x00;
  ESR_Track12._c[3] = (vuint8) 0x00;
  ESR_Track12._c[4] = (vuint8) 0x00;
  ESR_Track12._c[5] = (vuint8) 0x00;
  ESR_Track12._c[6] = (vuint8) 0x1F;
  ESR_Track12._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track11TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track11._c[0] = (vuint8) 0x00;
  ESR_Track11._c[1] = (vuint8) 0x00;
  ESR_Track11._c[2] = (vuint8) 0x00;
  ESR_Track11._c[3] = (vuint8) 0x00;
  ESR_Track11._c[4] = (vuint8) 0x00;
  ESR_Track11._c[5] = (vuint8) 0x00;
  ESR_Track11._c[6] = (vuint8) 0x1F;
  ESR_Track11._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track10TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track10._c[0] = (vuint8) 0x00;
  ESR_Track10._c[1] = (vuint8) 0x00;
  ESR_Track10._c[2] = (vuint8) 0x00;
  ESR_Track10._c[3] = (vuint8) 0x00;
  ESR_Track10._c[4] = (vuint8) 0x00;
  ESR_Track10._c[5] = (vuint8) 0x00;
  ESR_Track10._c[6] = (vuint8) 0x1F;
  ESR_Track10._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track09TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track09._c[0] = (vuint8) 0x00;
  ESR_Track09._c[1] = (vuint8) 0x00;
  ESR_Track09._c[2] = (vuint8) 0x00;
  ESR_Track09._c[3] = (vuint8) 0x00;
  ESR_Track09._c[4] = (vuint8) 0x00;
  ESR_Track09._c[5] = (vuint8) 0x00;
  ESR_Track09._c[6] = (vuint8) 0x1F;
  ESR_Track09._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track08TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track08._c[0] = (vuint8) 0x00;
  ESR_Track08._c[1] = (vuint8) 0x00;
  ESR_Track08._c[2] = (vuint8) 0x00;
  ESR_Track08._c[3] = (vuint8) 0x00;
  ESR_Track08._c[4] = (vuint8) 0x00;
  ESR_Track08._c[5] = (vuint8) 0x00;
  ESR_Track08._c[6] = (vuint8) 0x1F;
  ESR_Track08._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track07TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track07._c[0] = (vuint8) 0x00;
  ESR_Track07._c[1] = (vuint8) 0x00;
  ESR_Track07._c[2] = (vuint8) 0x00;
  ESR_Track07._c[3] = (vuint8) 0x00;
  ESR_Track07._c[4] = (vuint8) 0x00;
  ESR_Track07._c[5] = (vuint8) 0x00;
  ESR_Track07._c[6] = (vuint8) 0x1F;
  ESR_Track07._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track06TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track06._c[0] = (vuint8) 0x00;
  ESR_Track06._c[1] = (vuint8) 0x00;
  ESR_Track06._c[2] = (vuint8) 0x00;
  ESR_Track06._c[3] = (vuint8) 0x00;
  ESR_Track06._c[4] = (vuint8) 0x00;
  ESR_Track06._c[5] = (vuint8) 0x00;
  ESR_Track06._c[6] = (vuint8) 0x1F;
  ESR_Track06._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track05TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track05._c[0] = (vuint8) 0x00;
  ESR_Track05._c[1] = (vuint8) 0x00;
  ESR_Track05._c[2] = (vuint8) 0x00;
  ESR_Track05._c[3] = (vuint8) 0x00;
  ESR_Track05._c[4] = (vuint8) 0x00;
  ESR_Track05._c[5] = (vuint8) 0x00;
  ESR_Track05._c[6] = (vuint8) 0x1F;
  ESR_Track05._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track04TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track04._c[0] = (vuint8) 0x00;
  ESR_Track04._c[1] = (vuint8) 0x00;
  ESR_Track04._c[2] = (vuint8) 0x00;
  ESR_Track04._c[3] = (vuint8) 0x00;
  ESR_Track04._c[4] = (vuint8) 0x00;
  ESR_Track04._c[5] = (vuint8) 0x00;
  ESR_Track04._c[6] = (vuint8) 0x1F;
  ESR_Track04._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track03TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track03._c[0] = (vuint8) 0x00;
  ESR_Track03._c[1] = (vuint8) 0x00;
  ESR_Track03._c[2] = (vuint8) 0x00;
  ESR_Track03._c[3] = (vuint8) 0x00;
  ESR_Track03._c[4] = (vuint8) 0x00;
  ESR_Track03._c[5] = (vuint8) 0x00;
  ESR_Track03._c[6] = (vuint8) 0x1F;
  ESR_Track03._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track02TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track02._c[0] = (vuint8) 0x00;
  ESR_Track02._c[1] = (vuint8) 0x00;
  ESR_Track02._c[2] = (vuint8) 0x00;
  ESR_Track02._c[3] = (vuint8) 0x00;
  ESR_Track02._c[4] = (vuint8) 0x00;
  ESR_Track02._c[5] = (vuint8) 0x00;
  ESR_Track02._c[6] = (vuint8) 0x1F;
  ESR_Track02._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif

#if defined(IL_ENABLE_RX) && (defined(IL_ENABLE_RX_TIMEOUT) || defined(IL_ENABLE_RX_EXT_TIMEOUT))
static void IlMsgESR_Track01TimeoutIndication(void)
{
  CanGlobalInterruptDisable();
  ESR_Track01._c[0] = (vuint8) 0x00;
  ESR_Track01._c[1] = (vuint8) 0x00;
  ESR_Track01._c[2] = (vuint8) 0x00;
  ESR_Track01._c[3] = (vuint8) 0x00;
  ESR_Track01._c[4] = (vuint8) 0x00;
  ESR_Track01._c[5] = (vuint8) 0x00;
  ESR_Track01._c[6] = (vuint8) 0x1F;
  ESR_Track01._c[7] = (vuint8) 0xFF;
  CanGlobalInterruptRestore();
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Implementation of a function to check IfActive flags
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_SYS_TX_SIGNALS_ARE_ACTIVE_FCT)
Il_Boolean IlTxSignalsAreActive(void )
{
  return IL_FALSE;
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Implementation function to reset indication flags
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_RX) && defined(IL_ENABLE_RX_POLLING)
void IlResetCanIndicationFlags(void )
{
  CanGlobalInterruptDisable();
  CanGlobalInterruptRestore();
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Implementation function to reset confirmation flags
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX)
void IlResetCanConfirmationFlags(void )
{
  CanGlobalInterruptDisable();
  IlGetTxConfirmationFlags(0) &= (vuint8) 0x00;
  IlGetTxConfirmationFlags(1) &= (vuint8) 0x00;
  IlGetTxConfirmationFlags(2) &= (vuint8) 0x00;
  IlGetTxConfirmationFlags(3) &= (vuint8) 0x00;
  IlGetTxConfirmationFlags(4) &= (vuint8) 0x00;
  IlGetTxConfirmationFlags(5) &= (vuint8) 0x00;
  IlGetTxConfirmationFlags(6) &= (vuint8) 0x00;
  IlGetTxConfirmationFlags(7) &= (vuint8) 0x80;
  CanGlobalInterruptRestore();
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Get Rx Signal Access for signals greater 8bit and smaller or equal 32bit
 ----------------------------------------------------------------------------- */

/* Handle:    0,Name:          CAN_TX_AVG_PWR_CWBLKG,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_AVG_PWR_CWBLKG(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_AVG_PWR_CWBLKG();
  rc = ((vuint16) ESR_Status9.ESR_Status9.CAN_TX_AVG_PWR_CWBLKG_0);
  rc |= ((vuint16) ESR_Status9.ESR_Status9.CAN_TX_AVG_PWR_CWBLKG_1) << 4;
  IlLeaveCriticalCAN_TX_AVG_PWR_CWBLKG();
  return rc;
}


#endif

/* Handle:    1,Name:          CAN_TX_SIDESLIP_ANGLE,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_SIDESLIP_ANGLE(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_SIDESLIP_ANGLE();
  rc = ((vuint16) ESR_Status9.ESR_Status9.CAN_TX_SIDESLIP_ANGLE_0);
  rc |= ((vuint16) ESR_Status9.ESR_Status9.CAN_TX_SIDESLIP_ANGLE_1) << 8;
  IlLeaveCriticalCAN_TX_SIDESLIP_ANGLE();
  return rc;
}


#endif

/* Handle:    3,Name:  CAN_TX_FILTERED_XOHP_ACC_CIPV,Size:  9,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_FILTERED_XOHP_ACC_CIPV(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_FILTERED_XOHP_ACC_CIPV();
  rc = ((vuint16) ESR_Status9.ESR_Status9.CAN_TX_FILTERED_XOHP_ACC_CIPV_0);
  rc |= ((vuint16) ESR_Status9.ESR_Status9.CAN_TX_FILTERED_XOHP_ACC_CIPV_1) << 8;
  IlLeaveCriticalCAN_TX_FILTERED_XOHP_ACC_CIPV();
  return rc;
}


#endif

/* Handle:   47,Name:          CAN_TX_TRACK_ANGLE_64,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_64(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_64();
  rc = ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_ANGLE_64_0);
  rc |= ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_ANGLE_64_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_64();
  return rc;
}


#endif

/* Handle:   49,Name:          CAN_TX_TRACK_RANGE_64,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_64(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_64();
  rc = ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_RANGE_64_0);
  rc |= ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_RANGE_64_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_64();
  return rc;
}


#endif

/* Handle:   50,Name:    CAN_TX_TRACK_RANGE_ACCEL_64,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_64(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_64();
  rc = ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_RANGE_ACCEL_64_0);
  rc |= ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_RANGE_ACCEL_64_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_64();
  return rc;
}


#endif

/* Handle:   54,Name:     CAN_TX_TRACK_RANGE_RATE_64,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_64(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_64();
  rc = ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_RANGE_RATE_64_0);
  rc |= ((vuint16) ESR_Track64.ESR_Track64.CAN_TX_TRACK_RANGE_RATE_64_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_64();
  return rc;
}


#endif

/* Handle:   59,Name:          CAN_TX_TRACK_ANGLE_63,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_63(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_63();
  rc = ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_ANGLE_63_0);
  rc |= ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_ANGLE_63_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_63();
  return rc;
}


#endif

/* Handle:   61,Name:          CAN_TX_TRACK_RANGE_63,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_63(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_63();
  rc = ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_RANGE_63_0);
  rc |= ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_RANGE_63_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_63();
  return rc;
}


#endif

/* Handle:   62,Name:    CAN_TX_TRACK_RANGE_ACCEL_63,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_63(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_63();
  rc = ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_RANGE_ACCEL_63_0);
  rc |= ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_RANGE_ACCEL_63_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_63();
  return rc;
}


#endif

/* Handle:   66,Name:     CAN_TX_TRACK_RANGE_RATE_63,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_63(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_63();
  rc = ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_RANGE_RATE_63_0);
  rc |= ((vuint16) ESR_Track63.ESR_Track63.CAN_TX_TRACK_RANGE_RATE_63_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_63();
  return rc;
}


#endif

/* Handle:   71,Name:          CAN_TX_TRACK_ANGLE_62,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_62(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_62();
  rc = ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_ANGLE_62_0);
  rc |= ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_ANGLE_62_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_62();
  return rc;
}


#endif

/* Handle:   73,Name:          CAN_TX_TRACK_RANGE_62,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_62(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_62();
  rc = ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_RANGE_62_0);
  rc |= ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_RANGE_62_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_62();
  return rc;
}


#endif

/* Handle:   74,Name:    CAN_TX_TRACK_RANGE_ACCEL_62,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_62(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_62();
  rc = ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_RANGE_ACCEL_62_0);
  rc |= ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_RANGE_ACCEL_62_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_62();
  return rc;
}


#endif

/* Handle:   78,Name:     CAN_TX_TRACK_RANGE_RATE_62,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_62(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_62();
  rc = ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_RANGE_RATE_62_0);
  rc |= ((vuint16) ESR_Track62.ESR_Track62.CAN_TX_TRACK_RANGE_RATE_62_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_62();
  return rc;
}


#endif

/* Handle:   83,Name:          CAN_TX_TRACK_ANGLE_61,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_61(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_61();
  rc = ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_ANGLE_61_0);
  rc |= ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_ANGLE_61_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_61();
  return rc;
}


#endif

/* Handle:   85,Name:          CAN_TX_TRACK_RANGE_61,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_61(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_61();
  rc = ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_RANGE_61_0);
  rc |= ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_RANGE_61_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_61();
  return rc;
}


#endif

/* Handle:   86,Name:    CAN_TX_TRACK_RANGE_ACCEL_61,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_61(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_61();
  rc = ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_RANGE_ACCEL_61_0);
  rc |= ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_RANGE_ACCEL_61_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_61();
  return rc;
}


#endif

/* Handle:   90,Name:     CAN_TX_TRACK_RANGE_RATE_61,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_61(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_61();
  rc = ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_RANGE_RATE_61_0);
  rc |= ((vuint16) ESR_Track61.ESR_Track61.CAN_TX_TRACK_RANGE_RATE_61_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_61();
  return rc;
}


#endif

/* Handle:   95,Name:          CAN_TX_TRACK_ANGLE_60,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_60(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_60();
  rc = ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_ANGLE_60_0);
  rc |= ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_ANGLE_60_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_60();
  return rc;
}


#endif

/* Handle:   97,Name:          CAN_TX_TRACK_RANGE_60,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_60(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_60();
  rc = ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_RANGE_60_0);
  rc |= ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_RANGE_60_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_60();
  return rc;
}


#endif

/* Handle:   98,Name:    CAN_TX_TRACK_RANGE_ACCEL_60,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_60(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_60();
  rc = ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_RANGE_ACCEL_60_0);
  rc |= ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_RANGE_ACCEL_60_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_60();
  return rc;
}


#endif

/* Handle:  102,Name:     CAN_TX_TRACK_RANGE_RATE_60,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_60(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_60();
  rc = ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_RANGE_RATE_60_0);
  rc |= ((vuint16) ESR_Track60.ESR_Track60.CAN_TX_TRACK_RANGE_RATE_60_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_60();
  return rc;
}


#endif

/* Handle:  107,Name:          CAN_TX_TRACK_ANGLE_59,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_59(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_59();
  rc = ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_ANGLE_59_0);
  rc |= ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_ANGLE_59_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_59();
  return rc;
}


#endif

/* Handle:  109,Name:          CAN_TX_TRACK_RANGE_59,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_59(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_59();
  rc = ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_RANGE_59_0);
  rc |= ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_RANGE_59_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_59();
  return rc;
}


#endif

/* Handle:  110,Name:    CAN_TX_TRACK_RANGE_ACCEL_59,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_59(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_59();
  rc = ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_RANGE_ACCEL_59_0);
  rc |= ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_RANGE_ACCEL_59_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_59();
  return rc;
}


#endif

/* Handle:  114,Name:     CAN_TX_TRACK_RANGE_RATE_59,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_59(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_59();
  rc = ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_RANGE_RATE_59_0);
  rc |= ((vuint16) ESR_Track59.ESR_Track59.CAN_TX_TRACK_RANGE_RATE_59_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_59();
  return rc;
}


#endif

/* Handle:  119,Name:          CAN_TX_TRACK_ANGLE_58,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_58(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_58();
  rc = ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_ANGLE_58_0);
  rc |= ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_ANGLE_58_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_58();
  return rc;
}


#endif

/* Handle:  121,Name:          CAN_TX_TRACK_RANGE_58,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_58(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_58();
  rc = ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_RANGE_58_0);
  rc |= ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_RANGE_58_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_58();
  return rc;
}


#endif

/* Handle:  122,Name:    CAN_TX_TRACK_RANGE_ACCEL_58,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_58(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_58();
  rc = ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_RANGE_ACCEL_58_0);
  rc |= ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_RANGE_ACCEL_58_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_58();
  return rc;
}


#endif

/* Handle:  126,Name:     CAN_TX_TRACK_RANGE_RATE_58,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_58(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_58();
  rc = ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_RANGE_RATE_58_0);
  rc |= ((vuint16) ESR_Track58.ESR_Track58.CAN_TX_TRACK_RANGE_RATE_58_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_58();
  return rc;
}


#endif

/* Handle:  131,Name:          CAN_TX_TRACK_ANGLE_57,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_57(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_57();
  rc = ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_ANGLE_57_0);
  rc |= ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_ANGLE_57_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_57();
  return rc;
}


#endif

/* Handle:  133,Name:          CAN_TX_TRACK_RANGE_57,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_57(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_57();
  rc = ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_RANGE_57_0);
  rc |= ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_RANGE_57_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_57();
  return rc;
}


#endif

/* Handle:  134,Name:    CAN_TX_TRACK_RANGE_ACCEL_57,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_57(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_57();
  rc = ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_RANGE_ACCEL_57_0);
  rc |= ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_RANGE_ACCEL_57_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_57();
  return rc;
}


#endif

/* Handle:  138,Name:     CAN_TX_TRACK_RANGE_RATE_57,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_57(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_57();
  rc = ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_RANGE_RATE_57_0);
  rc |= ((vuint16) ESR_Track57.ESR_Track57.CAN_TX_TRACK_RANGE_RATE_57_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_57();
  return rc;
}


#endif

/* Handle:  143,Name:          CAN_TX_TRACK_ANGLE_56,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_56(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_56();
  rc = ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_ANGLE_56_0);
  rc |= ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_ANGLE_56_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_56();
  return rc;
}


#endif

/* Handle:  145,Name:          CAN_TX_TRACK_RANGE_56,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_56(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_56();
  rc = ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_RANGE_56_0);
  rc |= ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_RANGE_56_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_56();
  return rc;
}


#endif

/* Handle:  146,Name:    CAN_TX_TRACK_RANGE_ACCEL_56,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_56(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_56();
  rc = ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_RANGE_ACCEL_56_0);
  rc |= ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_RANGE_ACCEL_56_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_56();
  return rc;
}


#endif

/* Handle:  150,Name:     CAN_TX_TRACK_RANGE_RATE_56,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_56(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_56();
  rc = ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_RANGE_RATE_56_0);
  rc |= ((vuint16) ESR_Track56.ESR_Track56.CAN_TX_TRACK_RANGE_RATE_56_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_56();
  return rc;
}


#endif

/* Handle:  155,Name:          CAN_TX_TRACK_ANGLE_55,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_55(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_55();
  rc = ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_ANGLE_55_0);
  rc |= ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_ANGLE_55_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_55();
  return rc;
}


#endif

/* Handle:  157,Name:          CAN_TX_TRACK_RANGE_55,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_55(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_55();
  rc = ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_RANGE_55_0);
  rc |= ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_RANGE_55_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_55();
  return rc;
}


#endif

/* Handle:  158,Name:    CAN_TX_TRACK_RANGE_ACCEL_55,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_55(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_55();
  rc = ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_RANGE_ACCEL_55_0);
  rc |= ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_RANGE_ACCEL_55_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_55();
  return rc;
}


#endif

/* Handle:  162,Name:     CAN_TX_TRACK_RANGE_RATE_55,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_55(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_55();
  rc = ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_RANGE_RATE_55_0);
  rc |= ((vuint16) ESR_Track55.ESR_Track55.CAN_TX_TRACK_RANGE_RATE_55_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_55();
  return rc;
}


#endif

/* Handle:  167,Name:          CAN_TX_TRACK_ANGLE_54,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_54(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_54();
  rc = ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_ANGLE_54_0);
  rc |= ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_ANGLE_54_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_54();
  return rc;
}


#endif

/* Handle:  169,Name:          CAN_TX_TRACK_RANGE_54,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_54(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_54();
  rc = ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_RANGE_54_0);
  rc |= ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_RANGE_54_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_54();
  return rc;
}


#endif

/* Handle:  170,Name:    CAN_TX_TRACK_RANGE_ACCEL_54,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_54(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_54();
  rc = ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_RANGE_ACCEL_54_0);
  rc |= ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_RANGE_ACCEL_54_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_54();
  return rc;
}


#endif

/* Handle:  174,Name:     CAN_TX_TRACK_RANGE_RATE_54,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_54(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_54();
  rc = ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_RANGE_RATE_54_0);
  rc |= ((vuint16) ESR_Track54.ESR_Track54.CAN_TX_TRACK_RANGE_RATE_54_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_54();
  return rc;
}


#endif

/* Handle:  179,Name:          CAN_TX_TRACK_ANGLE_53,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_53(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_53();
  rc = ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_ANGLE_53_0);
  rc |= ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_ANGLE_53_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_53();
  return rc;
}


#endif

/* Handle:  181,Name:          CAN_TX_TRACK_RANGE_53,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_53(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_53();
  rc = ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_RANGE_53_0);
  rc |= ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_RANGE_53_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_53();
  return rc;
}


#endif

/* Handle:  182,Name:    CAN_TX_TRACK_RANGE_ACCEL_53,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_53(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_53();
  rc = ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_RANGE_ACCEL_53_0);
  rc |= ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_RANGE_ACCEL_53_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_53();
  return rc;
}


#endif

/* Handle:  186,Name:     CAN_TX_TRACK_RANGE_RATE_53,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_53(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_53();
  rc = ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_RANGE_RATE_53_0);
  rc |= ((vuint16) ESR_Track53.ESR_Track53.CAN_TX_TRACK_RANGE_RATE_53_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_53();
  return rc;
}


#endif

/* Handle:  191,Name:          CAN_TX_TRACK_ANGLE_52,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_52(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_52();
  rc = ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_ANGLE_52_0);
  rc |= ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_ANGLE_52_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_52();
  return rc;
}


#endif

/* Handle:  193,Name:          CAN_TX_TRACK_RANGE_52,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_52(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_52();
  rc = ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_RANGE_52_0);
  rc |= ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_RANGE_52_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_52();
  return rc;
}


#endif

/* Handle:  194,Name:    CAN_TX_TRACK_RANGE_ACCEL_52,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_52(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_52();
  rc = ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_RANGE_ACCEL_52_0);
  rc |= ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_RANGE_ACCEL_52_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_52();
  return rc;
}


#endif

/* Handle:  198,Name:     CAN_TX_TRACK_RANGE_RATE_52,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_52(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_52();
  rc = ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_RANGE_RATE_52_0);
  rc |= ((vuint16) ESR_Track52.ESR_Track52.CAN_TX_TRACK_RANGE_RATE_52_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_52();
  return rc;
}


#endif

/* Handle:  203,Name:          CAN_TX_TRACK_ANGLE_51,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_51(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_51();
  rc = ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_ANGLE_51_0);
  rc |= ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_ANGLE_51_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_51();
  return rc;
}


#endif

/* Handle:  205,Name:          CAN_TX_TRACK_RANGE_51,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_51(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_51();
  rc = ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_RANGE_51_0);
  rc |= ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_RANGE_51_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_51();
  return rc;
}


#endif

/* Handle:  206,Name:    CAN_TX_TRACK_RANGE_ACCEL_51,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_51(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_51();
  rc = ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_RANGE_ACCEL_51_0);
  rc |= ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_RANGE_ACCEL_51_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_51();
  return rc;
}


#endif

/* Handle:  210,Name:     CAN_TX_TRACK_RANGE_RATE_51,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_51(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_51();
  rc = ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_RANGE_RATE_51_0);
  rc |= ((vuint16) ESR_Track51.ESR_Track51.CAN_TX_TRACK_RANGE_RATE_51_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_51();
  return rc;
}


#endif

/* Handle:  215,Name:          CAN_TX_TRACK_ANGLE_50,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_50(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_50();
  rc = ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_ANGLE_50_0);
  rc |= ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_ANGLE_50_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_50();
  return rc;
}


#endif

/* Handle:  217,Name:          CAN_TX_TRACK_RANGE_50,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_50(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_50();
  rc = ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_RANGE_50_0);
  rc |= ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_RANGE_50_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_50();
  return rc;
}


#endif

/* Handle:  218,Name:    CAN_TX_TRACK_RANGE_ACCEL_50,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_50(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_50();
  rc = ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_RANGE_ACCEL_50_0);
  rc |= ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_RANGE_ACCEL_50_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_50();
  return rc;
}


#endif

/* Handle:  222,Name:     CAN_TX_TRACK_RANGE_RATE_50,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_50(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_50();
  rc = ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_RANGE_RATE_50_0);
  rc |= ((vuint16) ESR_Track50.ESR_Track50.CAN_TX_TRACK_RANGE_RATE_50_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_50();
  return rc;
}


#endif

/* Handle:  227,Name:          CAN_TX_TRACK_ANGLE_49,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_49(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_49();
  rc = ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_ANGLE_49_0);
  rc |= ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_ANGLE_49_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_49();
  return rc;
}


#endif

/* Handle:  229,Name:          CAN_TX_TRACK_RANGE_49,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_49(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_49();
  rc = ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_RANGE_49_0);
  rc |= ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_RANGE_49_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_49();
  return rc;
}


#endif

/* Handle:  230,Name:    CAN_TX_TRACK_RANGE_ACCEL_49,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_49(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_49();
  rc = ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_RANGE_ACCEL_49_0);
  rc |= ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_RANGE_ACCEL_49_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_49();
  return rc;
}


#endif

/* Handle:  234,Name:     CAN_TX_TRACK_RANGE_RATE_49,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_49(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_49();
  rc = ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_RANGE_RATE_49_0);
  rc |= ((vuint16) ESR_Track49.ESR_Track49.CAN_TX_TRACK_RANGE_RATE_49_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_49();
  return rc;
}


#endif

/* Handle:  239,Name:          CAN_TX_TRACK_ANGLE_48,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_48(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_48();
  rc = ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_ANGLE_48_0);
  rc |= ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_ANGLE_48_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_48();
  return rc;
}


#endif

/* Handle:  241,Name:          CAN_TX_TRACK_RANGE_48,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_48(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_48();
  rc = ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_RANGE_48_0);
  rc |= ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_RANGE_48_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_48();
  return rc;
}


#endif

/* Handle:  242,Name:    CAN_TX_TRACK_RANGE_ACCEL_48,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_48(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_48();
  rc = ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_RANGE_ACCEL_48_0);
  rc |= ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_RANGE_ACCEL_48_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_48();
  return rc;
}


#endif

/* Handle:  246,Name:     CAN_TX_TRACK_RANGE_RATE_48,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_48(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_48();
  rc = ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_RANGE_RATE_48_0);
  rc |= ((vuint16) ESR_Track48.ESR_Track48.CAN_TX_TRACK_RANGE_RATE_48_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_48();
  return rc;
}


#endif

/* Handle:  251,Name:          CAN_TX_TRACK_ANGLE_47,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_47(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_47();
  rc = ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_ANGLE_47_0);
  rc |= ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_ANGLE_47_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_47();
  return rc;
}


#endif

/* Handle:  253,Name:          CAN_TX_TRACK_RANGE_47,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_47(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_47();
  rc = ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_RANGE_47_0);
  rc |= ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_RANGE_47_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_47();
  return rc;
}


#endif

/* Handle:  254,Name:    CAN_TX_TRACK_RANGE_ACCEL_47,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_47(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_47();
  rc = ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_RANGE_ACCEL_47_0);
  rc |= ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_RANGE_ACCEL_47_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_47();
  return rc;
}


#endif

/* Handle:  258,Name:     CAN_TX_TRACK_RANGE_RATE_47,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_47(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_47();
  rc = ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_RANGE_RATE_47_0);
  rc |= ((vuint16) ESR_Track47.ESR_Track47.CAN_TX_TRACK_RANGE_RATE_47_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_47();
  return rc;
}


#endif

/* Handle:  263,Name:          CAN_TX_TRACK_ANGLE_46,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_46(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_46();
  rc = ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_ANGLE_46_0);
  rc |= ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_ANGLE_46_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_46();
  return rc;
}


#endif

/* Handle:  265,Name:          CAN_TX_TRACK_RANGE_46,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_46(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_46();
  rc = ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_RANGE_46_0);
  rc |= ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_RANGE_46_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_46();
  return rc;
}


#endif

/* Handle:  266,Name:    CAN_TX_TRACK_RANGE_ACCEL_46,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_46(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_46();
  rc = ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_RANGE_ACCEL_46_0);
  rc |= ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_RANGE_ACCEL_46_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_46();
  return rc;
}


#endif

/* Handle:  270,Name:     CAN_TX_TRACK_RANGE_RATE_46,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_46(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_46();
  rc = ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_RANGE_RATE_46_0);
  rc |= ((vuint16) ESR_Track46.ESR_Track46.CAN_TX_TRACK_RANGE_RATE_46_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_46();
  return rc;
}


#endif

/* Handle:  275,Name:          CAN_TX_TRACK_ANGLE_45,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_45(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_45();
  rc = ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_ANGLE_45_0);
  rc |= ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_ANGLE_45_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_45();
  return rc;
}


#endif

/* Handle:  277,Name:          CAN_TX_TRACK_RANGE_45,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_45(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_45();
  rc = ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_RANGE_45_0);
  rc |= ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_RANGE_45_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_45();
  return rc;
}


#endif

/* Handle:  278,Name:    CAN_TX_TRACK_RANGE_ACCEL_45,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_45(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_45();
  rc = ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_RANGE_ACCEL_45_0);
  rc |= ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_RANGE_ACCEL_45_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_45();
  return rc;
}


#endif

/* Handle:  282,Name:     CAN_TX_TRACK_RANGE_RATE_45,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_45(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_45();
  rc = ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_RANGE_RATE_45_0);
  rc |= ((vuint16) ESR_Track45.ESR_Track45.CAN_TX_TRACK_RANGE_RATE_45_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_45();
  return rc;
}


#endif

/* Handle:  287,Name:          CAN_TX_TRACK_ANGLE_44,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_44(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_44();
  rc = ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_ANGLE_44_0);
  rc |= ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_ANGLE_44_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_44();
  return rc;
}


#endif

/* Handle:  289,Name:          CAN_TX_TRACK_RANGE_44,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_44(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_44();
  rc = ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_RANGE_44_0);
  rc |= ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_RANGE_44_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_44();
  return rc;
}


#endif

/* Handle:  290,Name:    CAN_TX_TRACK_RANGE_ACCEL_44,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_44(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_44();
  rc = ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_RANGE_ACCEL_44_0);
  rc |= ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_RANGE_ACCEL_44_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_44();
  return rc;
}


#endif

/* Handle:  294,Name:     CAN_TX_TRACK_RANGE_RATE_44,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_44(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_44();
  rc = ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_RANGE_RATE_44_0);
  rc |= ((vuint16) ESR_Track44.ESR_Track44.CAN_TX_TRACK_RANGE_RATE_44_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_44();
  return rc;
}


#endif

/* Handle:  299,Name:          CAN_TX_TRACK_ANGLE_43,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_43(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_43();
  rc = ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_ANGLE_43_0);
  rc |= ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_ANGLE_43_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_43();
  return rc;
}


#endif

/* Handle:  301,Name:          CAN_TX_TRACK_RANGE_43,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_43(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_43();
  rc = ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_RANGE_43_0);
  rc |= ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_RANGE_43_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_43();
  return rc;
}


#endif

/* Handle:  302,Name:    CAN_TX_TRACK_RANGE_ACCEL_43,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_43(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_43();
  rc = ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_RANGE_ACCEL_43_0);
  rc |= ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_RANGE_ACCEL_43_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_43();
  return rc;
}


#endif

/* Handle:  306,Name:     CAN_TX_TRACK_RANGE_RATE_43,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_43(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_43();
  rc = ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_RANGE_RATE_43_0);
  rc |= ((vuint16) ESR_Track43.ESR_Track43.CAN_TX_TRACK_RANGE_RATE_43_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_43();
  return rc;
}


#endif

/* Handle:  311,Name:          CAN_TX_TRACK_ANGLE_42,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_42(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_42();
  rc = ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_ANGLE_42_0);
  rc |= ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_ANGLE_42_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_42();
  return rc;
}


#endif

/* Handle:  313,Name:          CAN_TX_TRACK_RANGE_42,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_42(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_42();
  rc = ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_RANGE_42_0);
  rc |= ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_RANGE_42_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_42();
  return rc;
}


#endif

/* Handle:  314,Name:    CAN_TX_TRACK_RANGE_ACCEL_42,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_42(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_42();
  rc = ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_RANGE_ACCEL_42_0);
  rc |= ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_RANGE_ACCEL_42_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_42();
  return rc;
}


#endif

/* Handle:  318,Name:     CAN_TX_TRACK_RANGE_RATE_42,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_42(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_42();
  rc = ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_RANGE_RATE_42_0);
  rc |= ((vuint16) ESR_Track42.ESR_Track42.CAN_TX_TRACK_RANGE_RATE_42_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_42();
  return rc;
}


#endif

/* Handle:  323,Name:          CAN_TX_TRACK_ANGLE_41,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_41(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_41();
  rc = ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_ANGLE_41_0);
  rc |= ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_ANGLE_41_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_41();
  return rc;
}


#endif

/* Handle:  325,Name:          CAN_TX_TRACK_RANGE_41,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_41(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_41();
  rc = ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_RANGE_41_0);
  rc |= ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_RANGE_41_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_41();
  return rc;
}


#endif

/* Handle:  326,Name:    CAN_TX_TRACK_RANGE_ACCEL_41,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_41(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_41();
  rc = ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_RANGE_ACCEL_41_0);
  rc |= ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_RANGE_ACCEL_41_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_41();
  return rc;
}


#endif

/* Handle:  330,Name:     CAN_TX_TRACK_RANGE_RATE_41,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_41(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_41();
  rc = ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_RANGE_RATE_41_0);
  rc |= ((vuint16) ESR_Track41.ESR_Track41.CAN_TX_TRACK_RANGE_RATE_41_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_41();
  return rc;
}


#endif

/* Handle:  335,Name:          CAN_TX_TRACK_ANGLE_40,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_40(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_40();
  rc = ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_ANGLE_40_0);
  rc |= ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_ANGLE_40_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_40();
  return rc;
}


#endif

/* Handle:  337,Name:          CAN_TX_TRACK_RANGE_40,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_40(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_40();
  rc = ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_RANGE_40_0);
  rc |= ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_RANGE_40_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_40();
  return rc;
}


#endif

/* Handle:  338,Name:    CAN_TX_TRACK_RANGE_ACCEL_40,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_40(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_40();
  rc = ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_RANGE_ACCEL_40_0);
  rc |= ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_RANGE_ACCEL_40_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_40();
  return rc;
}


#endif

/* Handle:  342,Name:     CAN_TX_TRACK_RANGE_RATE_40,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_40(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_40();
  rc = ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_RANGE_RATE_40_0);
  rc |= ((vuint16) ESR_Track40.ESR_Track40.CAN_TX_TRACK_RANGE_RATE_40_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_40();
  return rc;
}


#endif

/* Handle:  347,Name:          CAN_TX_TRACK_ANGLE_39,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_39(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_39();
  rc = ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_ANGLE_39_0);
  rc |= ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_ANGLE_39_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_39();
  return rc;
}


#endif

/* Handle:  349,Name:          CAN_TX_TRACK_RANGE_39,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_39(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_39();
  rc = ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_RANGE_39_0);
  rc |= ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_RANGE_39_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_39();
  return rc;
}


#endif

/* Handle:  350,Name:    CAN_TX_TRACK_RANGE_ACCEL_39,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_39(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_39();
  rc = ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_RANGE_ACCEL_39_0);
  rc |= ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_RANGE_ACCEL_39_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_39();
  return rc;
}


#endif

/* Handle:  354,Name:     CAN_TX_TRACK_RANGE_RATE_39,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_39(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_39();
  rc = ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_RANGE_RATE_39_0);
  rc |= ((vuint16) ESR_Track39.ESR_Track39.CAN_TX_TRACK_RANGE_RATE_39_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_39();
  return rc;
}


#endif

/* Handle:  359,Name:          CAN_TX_TRACK_ANGLE_38,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_38(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_38();
  rc = ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_ANGLE_38_0);
  rc |= ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_ANGLE_38_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_38();
  return rc;
}


#endif

/* Handle:  361,Name:          CAN_TX_TRACK_RANGE_38,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_38(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_38();
  rc = ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_RANGE_38_0);
  rc |= ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_RANGE_38_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_38();
  return rc;
}


#endif

/* Handle:  362,Name:    CAN_TX_TRACK_RANGE_ACCEL_38,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_38(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_38();
  rc = ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_RANGE_ACCEL_38_0);
  rc |= ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_RANGE_ACCEL_38_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_38();
  return rc;
}


#endif

/* Handle:  366,Name:     CAN_TX_TRACK_RANGE_RATE_38,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_38(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_38();
  rc = ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_RANGE_RATE_38_0);
  rc |= ((vuint16) ESR_Track38.ESR_Track38.CAN_TX_TRACK_RANGE_RATE_38_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_38();
  return rc;
}


#endif

/* Handle:  371,Name:          CAN_TX_TRACK_ANGLE_37,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_37(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_37();
  rc = ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_ANGLE_37_0);
  rc |= ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_ANGLE_37_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_37();
  return rc;
}


#endif

/* Handle:  373,Name:          CAN_TX_TRACK_RANGE_37,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_37(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_37();
  rc = ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_RANGE_37_0);
  rc |= ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_RANGE_37_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_37();
  return rc;
}


#endif

/* Handle:  374,Name:    CAN_TX_TRACK_RANGE_ACCEL_37,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_37(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_37();
  rc = ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_RANGE_ACCEL_37_0);
  rc |= ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_RANGE_ACCEL_37_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_37();
  return rc;
}


#endif

/* Handle:  378,Name:     CAN_TX_TRACK_RANGE_RATE_37,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_37(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_37();
  rc = ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_RANGE_RATE_37_0);
  rc |= ((vuint16) ESR_Track37.ESR_Track37.CAN_TX_TRACK_RANGE_RATE_37_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_37();
  return rc;
}


#endif

/* Handle:  383,Name:          CAN_TX_TRACK_ANGLE_36,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_36(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_36();
  rc = ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_ANGLE_36_0);
  rc |= ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_ANGLE_36_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_36();
  return rc;
}


#endif

/* Handle:  385,Name:          CAN_TX_TRACK_RANGE_36,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_36(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_36();
  rc = ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_RANGE_36_0);
  rc |= ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_RANGE_36_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_36();
  return rc;
}


#endif

/* Handle:  386,Name:    CAN_TX_TRACK_RANGE_ACCEL_36,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_36(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_36();
  rc = ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_RANGE_ACCEL_36_0);
  rc |= ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_RANGE_ACCEL_36_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_36();
  return rc;
}


#endif

/* Handle:  390,Name:     CAN_TX_TRACK_RANGE_RATE_36,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_36(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_36();
  rc = ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_RANGE_RATE_36_0);
  rc |= ((vuint16) ESR_Track36.ESR_Track36.CAN_TX_TRACK_RANGE_RATE_36_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_36();
  return rc;
}


#endif

/* Handle:  395,Name:          CAN_TX_TRACK_ANGLE_35,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_35(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_35();
  rc = ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_ANGLE_35_0);
  rc |= ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_ANGLE_35_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_35();
  return rc;
}


#endif

/* Handle:  397,Name:          CAN_TX_TRACK_RANGE_35,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_35(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_35();
  rc = ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_RANGE_35_0);
  rc |= ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_RANGE_35_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_35();
  return rc;
}


#endif

/* Handle:  398,Name:    CAN_TX_TRACK_RANGE_ACCEL_35,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_35(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_35();
  rc = ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_RANGE_ACCEL_35_0);
  rc |= ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_RANGE_ACCEL_35_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_35();
  return rc;
}


#endif

/* Handle:  402,Name:     CAN_TX_TRACK_RANGE_RATE_35,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_35(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_35();
  rc = ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_RANGE_RATE_35_0);
  rc |= ((vuint16) ESR_Track35.ESR_Track35.CAN_TX_TRACK_RANGE_RATE_35_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_35();
  return rc;
}


#endif

/* Handle:  407,Name:          CAN_TX_TRACK_ANGLE_34,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_34(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_34();
  rc = ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_ANGLE_34_0);
  rc |= ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_ANGLE_34_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_34();
  return rc;
}


#endif

/* Handle:  409,Name:          CAN_TX_TRACK_RANGE_34,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_34(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_34();
  rc = ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_RANGE_34_0);
  rc |= ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_RANGE_34_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_34();
  return rc;
}


#endif

/* Handle:  410,Name:    CAN_TX_TRACK_RANGE_ACCEL_34,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_34(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_34();
  rc = ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_RANGE_ACCEL_34_0);
  rc |= ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_RANGE_ACCEL_34_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_34();
  return rc;
}


#endif

/* Handle:  414,Name:     CAN_TX_TRACK_RANGE_RATE_34,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_34(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_34();
  rc = ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_RANGE_RATE_34_0);
  rc |= ((vuint16) ESR_Track34.ESR_Track34.CAN_TX_TRACK_RANGE_RATE_34_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_34();
  return rc;
}


#endif

/* Handle:  419,Name:          CAN_TX_TRACK_ANGLE_33,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_33(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_33();
  rc = ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_ANGLE_33_0);
  rc |= ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_ANGLE_33_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_33();
  return rc;
}


#endif

/* Handle:  421,Name:          CAN_TX_TRACK_RANGE_33,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_33(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_33();
  rc = ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_RANGE_33_0);
  rc |= ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_RANGE_33_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_33();
  return rc;
}


#endif

/* Handle:  422,Name:    CAN_TX_TRACK_RANGE_ACCEL_33,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_33(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_33();
  rc = ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_RANGE_ACCEL_33_0);
  rc |= ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_RANGE_ACCEL_33_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_33();
  return rc;
}


#endif

/* Handle:  426,Name:     CAN_TX_TRACK_RANGE_RATE_33,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_33(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_33();
  rc = ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_RANGE_RATE_33_0);
  rc |= ((vuint16) ESR_Track33.ESR_Track33.CAN_TX_TRACK_RANGE_RATE_33_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_33();
  return rc;
}


#endif

/* Handle:  431,Name:          CAN_TX_TRACK_ANGLE_32,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_32(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_32();
  rc = ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_ANGLE_32_0);
  rc |= ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_ANGLE_32_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_32();
  return rc;
}


#endif

/* Handle:  433,Name:          CAN_TX_TRACK_RANGE_32,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_32(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_32();
  rc = ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_RANGE_32_0);
  rc |= ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_RANGE_32_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_32();
  return rc;
}


#endif

/* Handle:  434,Name:    CAN_TX_TRACK_RANGE_ACCEL_32,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_32(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_32();
  rc = ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_RANGE_ACCEL_32_0);
  rc |= ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_RANGE_ACCEL_32_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_32();
  return rc;
}


#endif

/* Handle:  438,Name:     CAN_TX_TRACK_RANGE_RATE_32,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_32(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_32();
  rc = ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_RANGE_RATE_32_0);
  rc |= ((vuint16) ESR_Track32.ESR_Track32.CAN_TX_TRACK_RANGE_RATE_32_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_32();
  return rc;
}


#endif

/* Handle:  443,Name:          CAN_TX_TRACK_ANGLE_31,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_31(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_31();
  rc = ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_ANGLE_31_0);
  rc |= ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_ANGLE_31_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_31();
  return rc;
}


#endif

/* Handle:  445,Name:          CAN_TX_TRACK_RANGE_31,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_31(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_31();
  rc = ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_RANGE_31_0);
  rc |= ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_RANGE_31_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_31();
  return rc;
}


#endif

/* Handle:  446,Name:    CAN_TX_TRACK_RANGE_ACCEL_31,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_31(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_31();
  rc = ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_RANGE_ACCEL_31_0);
  rc |= ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_RANGE_ACCEL_31_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_31();
  return rc;
}


#endif

/* Handle:  450,Name:     CAN_TX_TRACK_RANGE_RATE_31,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_31(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_31();
  rc = ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_RANGE_RATE_31_0);
  rc |= ((vuint16) ESR_Track31.ESR_Track31.CAN_TX_TRACK_RANGE_RATE_31_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_31();
  return rc;
}


#endif

/* Handle:  455,Name:          CAN_TX_TRACK_ANGLE_30,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_30(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_30();
  rc = ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_ANGLE_30_0);
  rc |= ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_ANGLE_30_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_30();
  return rc;
}


#endif

/* Handle:  457,Name:          CAN_TX_TRACK_RANGE_30,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_30(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_30();
  rc = ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_RANGE_30_0);
  rc |= ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_RANGE_30_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_30();
  return rc;
}


#endif

/* Handle:  458,Name:    CAN_TX_TRACK_RANGE_ACCEL_30,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_30(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_30();
  rc = ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_RANGE_ACCEL_30_0);
  rc |= ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_RANGE_ACCEL_30_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_30();
  return rc;
}


#endif

/* Handle:  462,Name:     CAN_TX_TRACK_RANGE_RATE_30,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_30(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_30();
  rc = ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_RANGE_RATE_30_0);
  rc |= ((vuint16) ESR_Track30.ESR_Track30.CAN_TX_TRACK_RANGE_RATE_30_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_30();
  return rc;
}


#endif

/* Handle:  467,Name:          CAN_TX_TRACK_ANGLE_29,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_29(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_29();
  rc = ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_ANGLE_29_0);
  rc |= ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_ANGLE_29_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_29();
  return rc;
}


#endif

/* Handle:  469,Name:          CAN_TX_TRACK_RANGE_29,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_29(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_29();
  rc = ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_RANGE_29_0);
  rc |= ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_RANGE_29_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_29();
  return rc;
}


#endif

/* Handle:  470,Name:    CAN_TX_TRACK_RANGE_ACCEL_29,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_29(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_29();
  rc = ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_RANGE_ACCEL_29_0);
  rc |= ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_RANGE_ACCEL_29_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_29();
  return rc;
}


#endif

/* Handle:  474,Name:     CAN_TX_TRACK_RANGE_RATE_29,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_29(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_29();
  rc = ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_RANGE_RATE_29_0);
  rc |= ((vuint16) ESR_Track29.ESR_Track29.CAN_TX_TRACK_RANGE_RATE_29_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_29();
  return rc;
}


#endif

/* Handle:  479,Name:          CAN_TX_TRACK_ANGLE_28,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_28(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_28();
  rc = ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_ANGLE_28_0);
  rc |= ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_ANGLE_28_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_28();
  return rc;
}


#endif

/* Handle:  481,Name:          CAN_TX_TRACK_RANGE_28,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_28(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_28();
  rc = ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_RANGE_28_0);
  rc |= ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_RANGE_28_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_28();
  return rc;
}


#endif

/* Handle:  482,Name:    CAN_TX_TRACK_RANGE_ACCEL_28,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_28(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_28();
  rc = ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_RANGE_ACCEL_28_0);
  rc |= ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_RANGE_ACCEL_28_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_28();
  return rc;
}


#endif

/* Handle:  486,Name:     CAN_TX_TRACK_RANGE_RATE_28,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_28(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_28();
  rc = ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_RANGE_RATE_28_0);
  rc |= ((vuint16) ESR_Track28.ESR_Track28.CAN_TX_TRACK_RANGE_RATE_28_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_28();
  return rc;
}


#endif

/* Handle:  491,Name:          CAN_TX_TRACK_ANGLE_27,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_27(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_27();
  rc = ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_ANGLE_27_0);
  rc |= ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_ANGLE_27_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_27();
  return rc;
}


#endif

/* Handle:  493,Name:          CAN_TX_TRACK_RANGE_27,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_27(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_27();
  rc = ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_RANGE_27_0);
  rc |= ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_RANGE_27_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_27();
  return rc;
}


#endif

/* Handle:  494,Name:    CAN_TX_TRACK_RANGE_ACCEL_27,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_27(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_27();
  rc = ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_RANGE_ACCEL_27_0);
  rc |= ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_RANGE_ACCEL_27_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_27();
  return rc;
}


#endif

/* Handle:  498,Name:     CAN_TX_TRACK_RANGE_RATE_27,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_27(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_27();
  rc = ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_RANGE_RATE_27_0);
  rc |= ((vuint16) ESR_Track27.ESR_Track27.CAN_TX_TRACK_RANGE_RATE_27_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_27();
  return rc;
}


#endif

/* Handle:  503,Name:          CAN_TX_TRACK_ANGLE_26,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_26(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_26();
  rc = ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_ANGLE_26_0);
  rc |= ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_ANGLE_26_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_26();
  return rc;
}


#endif

/* Handle:  505,Name:          CAN_TX_TRACK_RANGE_26,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_26(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_26();
  rc = ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_RANGE_26_0);
  rc |= ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_RANGE_26_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_26();
  return rc;
}


#endif

/* Handle:  506,Name:    CAN_TX_TRACK_RANGE_ACCEL_26,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_26(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_26();
  rc = ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_RANGE_ACCEL_26_0);
  rc |= ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_RANGE_ACCEL_26_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_26();
  return rc;
}


#endif

/* Handle:  510,Name:     CAN_TX_TRACK_RANGE_RATE_26,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_26(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_26();
  rc = ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_RANGE_RATE_26_0);
  rc |= ((vuint16) ESR_Track26.ESR_Track26.CAN_TX_TRACK_RANGE_RATE_26_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_26();
  return rc;
}


#endif

/* Handle:  515,Name:          CAN_TX_TRACK_ANGLE_25,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_25(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_25();
  rc = ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_ANGLE_25_0);
  rc |= ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_ANGLE_25_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_25();
  return rc;
}


#endif

/* Handle:  517,Name:          CAN_TX_TRACK_RANGE_25,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_25(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_25();
  rc = ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_RANGE_25_0);
  rc |= ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_RANGE_25_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_25();
  return rc;
}


#endif

/* Handle:  518,Name:    CAN_TX_TRACK_RANGE_ACCEL_25,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_25(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_25();
  rc = ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_RANGE_ACCEL_25_0);
  rc |= ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_RANGE_ACCEL_25_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_25();
  return rc;
}


#endif

/* Handle:  522,Name:     CAN_TX_TRACK_RANGE_RATE_25,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_25(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_25();
  rc = ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_RANGE_RATE_25_0);
  rc |= ((vuint16) ESR_Track25.ESR_Track25.CAN_TX_TRACK_RANGE_RATE_25_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_25();
  return rc;
}


#endif

/* Handle:  527,Name:          CAN_TX_TRACK_ANGLE_24,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_24(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_24();
  rc = ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_ANGLE_24_0);
  rc |= ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_ANGLE_24_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_24();
  return rc;
}


#endif

/* Handle:  529,Name:          CAN_TX_TRACK_RANGE_24,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_24(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_24();
  rc = ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_RANGE_24_0);
  rc |= ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_RANGE_24_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_24();
  return rc;
}


#endif

/* Handle:  530,Name:    CAN_TX_TRACK_RANGE_ACCEL_24,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_24(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_24();
  rc = ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_RANGE_ACCEL_24_0);
  rc |= ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_RANGE_ACCEL_24_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_24();
  return rc;
}


#endif

/* Handle:  534,Name:     CAN_TX_TRACK_RANGE_RATE_24,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_24(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_24();
  rc = ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_RANGE_RATE_24_0);
  rc |= ((vuint16) ESR_Track24.ESR_Track24.CAN_TX_TRACK_RANGE_RATE_24_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_24();
  return rc;
}


#endif

/* Handle:  539,Name:          CAN_TX_TRACK_ANGLE_23,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_23(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_23();
  rc = ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_ANGLE_23_0);
  rc |= ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_ANGLE_23_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_23();
  return rc;
}


#endif

/* Handle:  541,Name:          CAN_TX_TRACK_RANGE_23,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_23(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_23();
  rc = ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_RANGE_23_0);
  rc |= ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_RANGE_23_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_23();
  return rc;
}


#endif

/* Handle:  542,Name:    CAN_TX_TRACK_RANGE_ACCEL_23,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_23(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_23();
  rc = ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_RANGE_ACCEL_23_0);
  rc |= ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_RANGE_ACCEL_23_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_23();
  return rc;
}


#endif

/* Handle:  546,Name:     CAN_TX_TRACK_RANGE_RATE_23,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_23(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_23();
  rc = ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_RANGE_RATE_23_0);
  rc |= ((vuint16) ESR_Track23.ESR_Track23.CAN_TX_TRACK_RANGE_RATE_23_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_23();
  return rc;
}


#endif

/* Handle:  551,Name:          CAN_TX_TRACK_ANGLE_22,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_22(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_22();
  rc = ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_ANGLE_22_0);
  rc |= ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_ANGLE_22_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_22();
  return rc;
}


#endif

/* Handle:  553,Name:          CAN_TX_TRACK_RANGE_22,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_22(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_22();
  rc = ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_RANGE_22_0);
  rc |= ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_RANGE_22_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_22();
  return rc;
}


#endif

/* Handle:  554,Name:    CAN_TX_TRACK_RANGE_ACCEL_22,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_22(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_22();
  rc = ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_RANGE_ACCEL_22_0);
  rc |= ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_RANGE_ACCEL_22_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_22();
  return rc;
}


#endif

/* Handle:  558,Name:     CAN_TX_TRACK_RANGE_RATE_22,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_22(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_22();
  rc = ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_RANGE_RATE_22_0);
  rc |= ((vuint16) ESR_Track22.ESR_Track22.CAN_TX_TRACK_RANGE_RATE_22_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_22();
  return rc;
}


#endif

/* Handle:  563,Name:          CAN_TX_TRACK_ANGLE_21,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_21(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_21();
  rc = ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_ANGLE_21_0);
  rc |= ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_ANGLE_21_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_21();
  return rc;
}


#endif

/* Handle:  565,Name:          CAN_TX_TRACK_RANGE_21,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_21(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_21();
  rc = ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_RANGE_21_0);
  rc |= ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_RANGE_21_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_21();
  return rc;
}


#endif

/* Handle:  566,Name:    CAN_TX_TRACK_RANGE_ACCEL_21,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_21(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_21();
  rc = ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_RANGE_ACCEL_21_0);
  rc |= ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_RANGE_ACCEL_21_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_21();
  return rc;
}


#endif

/* Handle:  570,Name:     CAN_TX_TRACK_RANGE_RATE_21,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_21(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_21();
  rc = ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_RANGE_RATE_21_0);
  rc |= ((vuint16) ESR_Track21.ESR_Track21.CAN_TX_TRACK_RANGE_RATE_21_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_21();
  return rc;
}


#endif

/* Handle:  575,Name:          CAN_TX_TRACK_ANGLE_20,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_20(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_20();
  rc = ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_ANGLE_20_0);
  rc |= ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_ANGLE_20_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_20();
  return rc;
}


#endif

/* Handle:  577,Name:          CAN_TX_TRACK_RANGE_20,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_20(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_20();
  rc = ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_RANGE_20_0);
  rc |= ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_RANGE_20_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_20();
  return rc;
}


#endif

/* Handle:  578,Name:    CAN_TX_TRACK_RANGE_ACCEL_20,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_20(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_20();
  rc = ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_RANGE_ACCEL_20_0);
  rc |= ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_RANGE_ACCEL_20_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_20();
  return rc;
}


#endif

/* Handle:  582,Name:     CAN_TX_TRACK_RANGE_RATE_20,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_20(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_20();
  rc = ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_RANGE_RATE_20_0);
  rc |= ((vuint16) ESR_Track20.ESR_Track20.CAN_TX_TRACK_RANGE_RATE_20_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_20();
  return rc;
}


#endif

/* Handle:  587,Name:          CAN_TX_TRACK_ANGLE_19,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_19(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_19();
  rc = ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_ANGLE_19_0);
  rc |= ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_ANGLE_19_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_19();
  return rc;
}


#endif

/* Handle:  589,Name:          CAN_TX_TRACK_RANGE_19,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_19(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_19();
  rc = ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_RANGE_19_0);
  rc |= ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_RANGE_19_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_19();
  return rc;
}


#endif

/* Handle:  590,Name:    CAN_TX_TRACK_RANGE_ACCEL_19,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_19(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_19();
  rc = ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_RANGE_ACCEL_19_0);
  rc |= ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_RANGE_ACCEL_19_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_19();
  return rc;
}


#endif

/* Handle:  594,Name:     CAN_TX_TRACK_RANGE_RATE_19,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_19(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_19();
  rc = ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_RANGE_RATE_19_0);
  rc |= ((vuint16) ESR_Track19.ESR_Track19.CAN_TX_TRACK_RANGE_RATE_19_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_19();
  return rc;
}


#endif

/* Handle:  599,Name:          CAN_TX_TRACK_ANGLE_18,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_18(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_18();
  rc = ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_ANGLE_18_0);
  rc |= ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_ANGLE_18_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_18();
  return rc;
}


#endif

/* Handle:  601,Name:          CAN_TX_TRACK_RANGE_18,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_18(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_18();
  rc = ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_RANGE_18_0);
  rc |= ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_RANGE_18_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_18();
  return rc;
}


#endif

/* Handle:  602,Name:    CAN_TX_TRACK_RANGE_ACCEL_18,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_18(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_18();
  rc = ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_RANGE_ACCEL_18_0);
  rc |= ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_RANGE_ACCEL_18_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_18();
  return rc;
}


#endif

/* Handle:  606,Name:     CAN_TX_TRACK_RANGE_RATE_18,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_18(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_18();
  rc = ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_RANGE_RATE_18_0);
  rc |= ((vuint16) ESR_Track18.ESR_Track18.CAN_TX_TRACK_RANGE_RATE_18_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_18();
  return rc;
}


#endif

/* Handle:  611,Name:          CAN_TX_TRACK_ANGLE_17,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_17(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_17();
  rc = ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_ANGLE_17_0);
  rc |= ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_ANGLE_17_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_17();
  return rc;
}


#endif

/* Handle:  613,Name:          CAN_TX_TRACK_RANGE_17,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_17(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_17();
  rc = ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_RANGE_17_0);
  rc |= ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_RANGE_17_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_17();
  return rc;
}


#endif

/* Handle:  614,Name:    CAN_TX_TRACK_RANGE_ACCEL_17,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_17(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_17();
  rc = ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_RANGE_ACCEL_17_0);
  rc |= ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_RANGE_ACCEL_17_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_17();
  return rc;
}


#endif

/* Handle:  618,Name:     CAN_TX_TRACK_RANGE_RATE_17,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_17(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_17();
  rc = ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_RANGE_RATE_17_0);
  rc |= ((vuint16) ESR_Track17.ESR_Track17.CAN_TX_TRACK_RANGE_RATE_17_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_17();
  return rc;
}


#endif

/* Handle:  623,Name:          CAN_TX_TRACK_ANGLE_16,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_16(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_16();
  rc = ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_ANGLE_16_0);
  rc |= ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_ANGLE_16_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_16();
  return rc;
}


#endif

/* Handle:  625,Name:          CAN_TX_TRACK_RANGE_16,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_16(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_16();
  rc = ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_RANGE_16_0);
  rc |= ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_RANGE_16_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_16();
  return rc;
}


#endif

/* Handle:  626,Name:    CAN_TX_TRACK_RANGE_ACCEL_16,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_16(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_16();
  rc = ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_RANGE_ACCEL_16_0);
  rc |= ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_RANGE_ACCEL_16_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_16();
  return rc;
}


#endif

/* Handle:  630,Name:     CAN_TX_TRACK_RANGE_RATE_16,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_16(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_16();
  rc = ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_RANGE_RATE_16_0);
  rc |= ((vuint16) ESR_Track16.ESR_Track16.CAN_TX_TRACK_RANGE_RATE_16_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_16();
  return rc;
}


#endif

/* Handle:  635,Name:          CAN_TX_TRACK_ANGLE_15,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_15(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_15();
  rc = ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_ANGLE_15_0);
  rc |= ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_ANGLE_15_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_15();
  return rc;
}


#endif

/* Handle:  637,Name:          CAN_TX_TRACK_RANGE_15,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_15(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_15();
  rc = ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_RANGE_15_0);
  rc |= ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_RANGE_15_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_15();
  return rc;
}


#endif

/* Handle:  638,Name:    CAN_TX_TRACK_RANGE_ACCEL_15,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_15(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_15();
  rc = ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_RANGE_ACCEL_15_0);
  rc |= ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_RANGE_ACCEL_15_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_15();
  return rc;
}


#endif

/* Handle:  642,Name:     CAN_TX_TRACK_RANGE_RATE_15,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_15(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_15();
  rc = ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_RANGE_RATE_15_0);
  rc |= ((vuint16) ESR_Track15.ESR_Track15.CAN_TX_TRACK_RANGE_RATE_15_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_15();
  return rc;
}


#endif

/* Handle:  647,Name:          CAN_TX_TRACK_ANGLE_14,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_14(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_14();
  rc = ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_ANGLE_14_0);
  rc |= ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_ANGLE_14_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_14();
  return rc;
}


#endif

/* Handle:  649,Name:          CAN_TX_TRACK_RANGE_14,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_14(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_14();
  rc = ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_RANGE_14_0);
  rc |= ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_RANGE_14_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_14();
  return rc;
}


#endif

/* Handle:  650,Name:    CAN_TX_TRACK_RANGE_ACCEL_14,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_14(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_14();
  rc = ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_RANGE_ACCEL_14_0);
  rc |= ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_RANGE_ACCEL_14_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_14();
  return rc;
}


#endif

/* Handle:  654,Name:     CAN_TX_TRACK_RANGE_RATE_14,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_14(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_14();
  rc = ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_RANGE_RATE_14_0);
  rc |= ((vuint16) ESR_Track14.ESR_Track14.CAN_TX_TRACK_RANGE_RATE_14_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_14();
  return rc;
}


#endif

/* Handle:  659,Name:          CAN_TX_TRACK_ANGLE_13,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_13(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_13();
  rc = ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_ANGLE_13_0);
  rc |= ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_ANGLE_13_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_13();
  return rc;
}


#endif

/* Handle:  661,Name:          CAN_TX_TRACK_RANGE_13,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_13(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_13();
  rc = ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_RANGE_13_0);
  rc |= ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_RANGE_13_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_13();
  return rc;
}


#endif

/* Handle:  662,Name:    CAN_TX_TRACK_RANGE_ACCEL_13,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_13(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_13();
  rc = ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_RANGE_ACCEL_13_0);
  rc |= ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_RANGE_ACCEL_13_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_13();
  return rc;
}


#endif

/* Handle:  666,Name:     CAN_TX_TRACK_RANGE_RATE_13,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_13(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_13();
  rc = ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_RANGE_RATE_13_0);
  rc |= ((vuint16) ESR_Track13.ESR_Track13.CAN_TX_TRACK_RANGE_RATE_13_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_13();
  return rc;
}


#endif

/* Handle:  671,Name:          CAN_TX_TRACK_ANGLE_12,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_12(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_12();
  rc = ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_ANGLE_12_0);
  rc |= ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_ANGLE_12_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_12();
  return rc;
}


#endif

/* Handle:  673,Name:          CAN_TX_TRACK_RANGE_12,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_12(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_12();
  rc = ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_RANGE_12_0);
  rc |= ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_RANGE_12_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_12();
  return rc;
}


#endif

/* Handle:  674,Name:    CAN_TX_TRACK_RANGE_ACCEL_12,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_12(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_12();
  rc = ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_RANGE_ACCEL_12_0);
  rc |= ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_RANGE_ACCEL_12_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_12();
  return rc;
}


#endif

/* Handle:  678,Name:     CAN_TX_TRACK_RANGE_RATE_12,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_12(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_12();
  rc = ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_RANGE_RATE_12_0);
  rc |= ((vuint16) ESR_Track12.ESR_Track12.CAN_TX_TRACK_RANGE_RATE_12_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_12();
  return rc;
}


#endif

/* Handle:  683,Name:          CAN_TX_TRACK_ANGLE_11,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_11(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_11();
  rc = ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_ANGLE_11_0);
  rc |= ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_ANGLE_11_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_11();
  return rc;
}


#endif

/* Handle:  685,Name:          CAN_TX_TRACK_RANGE_11,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_11(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_11();
  rc = ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_RANGE_11_0);
  rc |= ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_RANGE_11_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_11();
  return rc;
}


#endif

/* Handle:  686,Name:    CAN_TX_TRACK_RANGE_ACCEL_11,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_11(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_11();
  rc = ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_RANGE_ACCEL_11_0);
  rc |= ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_RANGE_ACCEL_11_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_11();
  return rc;
}


#endif

/* Handle:  690,Name:     CAN_TX_TRACK_RANGE_RATE_11,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_11(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_11();
  rc = ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_RANGE_RATE_11_0);
  rc |= ((vuint16) ESR_Track11.ESR_Track11.CAN_TX_TRACK_RANGE_RATE_11_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_11();
  return rc;
}


#endif

/* Handle:  695,Name:          CAN_TX_TRACK_ANGLE_10,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_10(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_10();
  rc = ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_ANGLE_10_0);
  rc |= ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_ANGLE_10_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_10();
  return rc;
}


#endif

/* Handle:  697,Name:          CAN_TX_TRACK_RANGE_10,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_10(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_10();
  rc = ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_RANGE_10_0);
  rc |= ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_RANGE_10_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_10();
  return rc;
}


#endif

/* Handle:  698,Name:    CAN_TX_TRACK_RANGE_ACCEL_10,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_10(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_10();
  rc = ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_RANGE_ACCEL_10_0);
  rc |= ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_RANGE_ACCEL_10_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_10();
  return rc;
}


#endif

/* Handle:  702,Name:     CAN_TX_TRACK_RANGE_RATE_10,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_10(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_10();
  rc = ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_RANGE_RATE_10_0);
  rc |= ((vuint16) ESR_Track10.ESR_Track10.CAN_TX_TRACK_RANGE_RATE_10_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_10();
  return rc;
}


#endif

/* Handle:  707,Name:          CAN_TX_TRACK_ANGLE_09,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_09(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_09();
  rc = ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_ANGLE_09_0);
  rc |= ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_ANGLE_09_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_09();
  return rc;
}


#endif

/* Handle:  709,Name:          CAN_TX_TRACK_RANGE_09,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_09(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_09();
  rc = ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_RANGE_09_0);
  rc |= ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_RANGE_09_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_09();
  return rc;
}


#endif

/* Handle:  710,Name:    CAN_TX_TRACK_RANGE_ACCEL_09,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_09(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_09();
  rc = ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_RANGE_ACCEL_09_0);
  rc |= ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_RANGE_ACCEL_09_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_09();
  return rc;
}


#endif

/* Handle:  714,Name:     CAN_TX_TRACK_RANGE_RATE_09,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_09(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_09();
  rc = ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_RANGE_RATE_09_0);
  rc |= ((vuint16) ESR_Track09.ESR_Track09.CAN_TX_TRACK_RANGE_RATE_09_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_09();
  return rc;
}


#endif

/* Handle:  719,Name:          CAN_TX_TRACK_ANGLE_08,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_08(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_08();
  rc = ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_ANGLE_08_0);
  rc |= ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_ANGLE_08_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_08();
  return rc;
}


#endif

/* Handle:  721,Name:          CAN_TX_TRACK_RANGE_08,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_08(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_08();
  rc = ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_RANGE_08_0);
  rc |= ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_RANGE_08_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_08();
  return rc;
}


#endif

/* Handle:  722,Name:    CAN_TX_TRACK_RANGE_ACCEL_08,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_08(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_08();
  rc = ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_RANGE_ACCEL_08_0);
  rc |= ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_RANGE_ACCEL_08_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_08();
  return rc;
}


#endif

/* Handle:  726,Name:     CAN_TX_TRACK_RANGE_RATE_08,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_08(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_08();
  rc = ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_RANGE_RATE_08_0);
  rc |= ((vuint16) ESR_Track08.ESR_Track08.CAN_TX_TRACK_RANGE_RATE_08_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_08();
  return rc;
}


#endif

/* Handle:  731,Name:          CAN_TX_TRACK_ANGLE_07,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_07(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_07();
  rc = ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_ANGLE_07_0);
  rc |= ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_ANGLE_07_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_07();
  return rc;
}


#endif

/* Handle:  733,Name:          CAN_TX_TRACK_RANGE_07,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_07(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_07();
  rc = ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_RANGE_07_0);
  rc |= ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_RANGE_07_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_07();
  return rc;
}


#endif

/* Handle:  734,Name:    CAN_TX_TRACK_RANGE_ACCEL_07,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_07(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_07();
  rc = ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_RANGE_ACCEL_07_0);
  rc |= ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_RANGE_ACCEL_07_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_07();
  return rc;
}


#endif

/* Handle:  738,Name:     CAN_TX_TRACK_RANGE_RATE_07,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_07(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_07();
  rc = ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_RANGE_RATE_07_0);
  rc |= ((vuint16) ESR_Track07.ESR_Track07.CAN_TX_TRACK_RANGE_RATE_07_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_07();
  return rc;
}


#endif

/* Handle:  743,Name:          CAN_TX_TRACK_ANGLE_06,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_06(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_06();
  rc = ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_ANGLE_06_0);
  rc |= ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_ANGLE_06_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_06();
  return rc;
}


#endif

/* Handle:  745,Name:          CAN_TX_TRACK_RANGE_06,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_06(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_06();
  rc = ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_RANGE_06_0);
  rc |= ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_RANGE_06_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_06();
  return rc;
}


#endif

/* Handle:  746,Name:    CAN_TX_TRACK_RANGE_ACCEL_06,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_06(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_06();
  rc = ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_RANGE_ACCEL_06_0);
  rc |= ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_RANGE_ACCEL_06_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_06();
  return rc;
}


#endif

/* Handle:  750,Name:     CAN_TX_TRACK_RANGE_RATE_06,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_06(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_06();
  rc = ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_RANGE_RATE_06_0);
  rc |= ((vuint16) ESR_Track06.ESR_Track06.CAN_TX_TRACK_RANGE_RATE_06_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_06();
  return rc;
}


#endif

/* Handle:  755,Name:          CAN_TX_TRACK_ANGLE_05,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_05(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_05();
  rc = ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_ANGLE_05_0);
  rc |= ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_ANGLE_05_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_05();
  return rc;
}


#endif

/* Handle:  757,Name:          CAN_TX_TRACK_RANGE_05,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_05(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_05();
  rc = ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_RANGE_05_0);
  rc |= ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_RANGE_05_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_05();
  return rc;
}


#endif

/* Handle:  758,Name:    CAN_TX_TRACK_RANGE_ACCEL_05,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_05(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_05();
  rc = ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_RANGE_ACCEL_05_0);
  rc |= ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_RANGE_ACCEL_05_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_05();
  return rc;
}


#endif

/* Handle:  762,Name:     CAN_TX_TRACK_RANGE_RATE_05,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_05(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_05();
  rc = ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_RANGE_RATE_05_0);
  rc |= ((vuint16) ESR_Track05.ESR_Track05.CAN_TX_TRACK_RANGE_RATE_05_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_05();
  return rc;
}


#endif

/* Handle:  767,Name:          CAN_TX_TRACK_ANGLE_04,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_04(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_04();
  rc = ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_ANGLE_04_0);
  rc |= ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_ANGLE_04_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_04();
  return rc;
}


#endif

/* Handle:  769,Name:          CAN_TX_TRACK_RANGE_04,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_04(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_04();
  rc = ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_RANGE_04_0);
  rc |= ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_RANGE_04_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_04();
  return rc;
}


#endif

/* Handle:  770,Name:    CAN_TX_TRACK_RANGE_ACCEL_04,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_04(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_04();
  rc = ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_RANGE_ACCEL_04_0);
  rc |= ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_RANGE_ACCEL_04_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_04();
  return rc;
}


#endif

/* Handle:  774,Name:     CAN_TX_TRACK_RANGE_RATE_04,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_04(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_04();
  rc = ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_RANGE_RATE_04_0);
  rc |= ((vuint16) ESR_Track04.ESR_Track04.CAN_TX_TRACK_RANGE_RATE_04_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_04();
  return rc;
}


#endif

/* Handle:  779,Name:          CAN_TX_TRACK_ANGLE_03,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_03(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_03();
  rc = ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_ANGLE_03_0);
  rc |= ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_ANGLE_03_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_03();
  return rc;
}


#endif

/* Handle:  781,Name:          CAN_TX_TRACK_RANGE_03,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_03(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_03();
  rc = ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_RANGE_03_0);
  rc |= ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_RANGE_03_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_03();
  return rc;
}


#endif

/* Handle:  782,Name:    CAN_TX_TRACK_RANGE_ACCEL_03,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_03(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_03();
  rc = ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_RANGE_ACCEL_03_0);
  rc |= ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_RANGE_ACCEL_03_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_03();
  return rc;
}


#endif

/* Handle:  786,Name:     CAN_TX_TRACK_RANGE_RATE_03,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_03(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_03();
  rc = ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_RANGE_RATE_03_0);
  rc |= ((vuint16) ESR_Track03.ESR_Track03.CAN_TX_TRACK_RANGE_RATE_03_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_03();
  return rc;
}


#endif

/* Handle:  791,Name:          CAN_TX_TRACK_ANGLE_02,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_02(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_02();
  rc = ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_ANGLE_02_0);
  rc |= ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_ANGLE_02_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_02();
  return rc;
}


#endif

/* Handle:  793,Name:          CAN_TX_TRACK_RANGE_02,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_02(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_02();
  rc = ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_RANGE_02_0);
  rc |= ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_RANGE_02_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_02();
  return rc;
}


#endif

/* Handle:  794,Name:    CAN_TX_TRACK_RANGE_ACCEL_02,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_02(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_02();
  rc = ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_RANGE_ACCEL_02_0);
  rc |= ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_RANGE_ACCEL_02_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_02();
  return rc;
}


#endif

/* Handle:  798,Name:     CAN_TX_TRACK_RANGE_RATE_02,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_02(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_02();
  rc = ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_RANGE_RATE_02_0);
  rc |= ((vuint16) ESR_Track02.ESR_Track02.CAN_TX_TRACK_RANGE_RATE_02_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_02();
  return rc;
}


#endif

/* Handle:  803,Name:          CAN_TX_TRACK_ANGLE_01,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_ANGLE_01(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_ANGLE_01();
  rc = ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_ANGLE_01_0);
  rc |= ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_ANGLE_01_1) << 5;
  IlLeaveCriticalCAN_TX_TRACK_ANGLE_01();
  return rc;
}


#endif

/* Handle:  805,Name:          CAN_TX_TRACK_RANGE_01,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_01(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_01();
  rc = ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_RANGE_01_0);
  rc |= ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_RANGE_01_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_01();
  return rc;
}


#endif

/* Handle:  806,Name:    CAN_TX_TRACK_RANGE_ACCEL_01,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_ACCEL_01(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_ACCEL_01();
  rc = ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_RANGE_ACCEL_01_0);
  rc |= ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_RANGE_ACCEL_01_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_ACCEL_01();
  return rc;
}


#endif

/* Handle:  810,Name:     CAN_TX_TRACK_RANGE_RATE_01,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_TRACK_RANGE_RATE_01(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_TRACK_RANGE_RATE_01();
  rc = ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_RANGE_RATE_01_0);
  rc |= ((vuint16) ESR_Track01.ESR_Track01.CAN_TX_TRACK_RANGE_RATE_01_1) << 8;
  IlLeaveCriticalCAN_TX_TRACK_RANGE_RATE_01();
  return rc;
}


#endif

/* Handle:  827,Name:         CAN_TX_SW_VERSION_HOST,Size: 24,UsedBytes:  3,SingleSignal */
#ifdef IL_ENABLE_RX
vuint32 IlGetRxCAN_TX_SW_VERSION_HOST(void)
{
  vuint32 rc;
  IlEnterCriticalCAN_TX_SW_VERSION_HOST();
  rc = ((vuint32) ESR_Status3.ESR_Status3.CAN_TX_SW_VERSION_HOST_0);
  rc |= ((vuint32) ESR_Status3.ESR_Status3.CAN_TX_SW_VERSION_HOST_1) << 8;
  rc |= ((vuint32) ESR_Status3.ESR_Status3.CAN_TX_SW_VERSION_HOST_2) << 16;
  IlLeaveCriticalCAN_TX_SW_VERSION_HOST();
  return rc;
}


#endif

/* Handle:  828,Name:              CAN_TX_SERIAL_NUM,Size: 24,UsedBytes:  3,SingleSignal */
#ifdef IL_ENABLE_RX
vuint32 IlGetRxCAN_TX_SERIAL_NUM(void)
{
  vuint32 rc;
  IlEnterCriticalCAN_TX_SERIAL_NUM();
  rc = ((vuint32) ESR_Status3.ESR_Status3.CAN_TX_SERIAL_NUM_0);
  rc |= ((vuint32) ESR_Status3.ESR_Status3.CAN_TX_SERIAL_NUM_1) << 8;
  rc |= ((vuint32) ESR_Status3.ESR_Status3.CAN_TX_SERIAL_NUM_2) << 16;
  IlLeaveCriticalCAN_TX_SERIAL_NUM();
  return rc;
}


#endif

/* Handle:  832,Name:      CAN_TX_STEERING_ANGLE_ACK,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_STEERING_ANGLE_ACK(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_STEERING_ANGLE_ACK();
  rc = ((vuint16) ESR_Status2.ESR_Status2.CAN_TX_STEERING_ANGLE_ACK_0);
  rc |= ((vuint16) ESR_Status2.ESR_Status2.CAN_TX_STEERING_ANGLE_ACK_1) << 8;
  IlLeaveCriticalCAN_TX_STEERING_ANGLE_ACK();
  return rc;
}


#endif

/* Handle:  842,Name:          CAN_TX_SW_VERSION_DSP,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_SW_VERSION_DSP(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_SW_VERSION_DSP();
  rc = ((vuint16) ESR_Status2.ESR_Status2.CAN_TX_SW_VERSION_DSP_0);
  rc |= ((vuint16) ESR_Status2.ESR_Status2.CAN_TX_SW_VERSION_DSP_1) << 8;
  IlLeaveCriticalCAN_TX_SW_VERSION_DSP();
  return rc;
}


#endif

/* Handle:  843,Name:           CAN_TX_DSP_TIMESTAMP,Size:  7,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint8 IlGetRxCAN_TX_DSP_TIMESTAMP(void)
{
  vuint8 rc;
  IlEnterCriticalCAN_TX_DSP_TIMESTAMP();
  rc = ((vuint8) ESR_Status1.ESR_Status1.CAN_TX_DSP_TIMESTAMP_0);
  rc |= ((vuint8) ESR_Status1.ESR_Status1.CAN_TX_DSP_TIMESTAMP_1) << 1;
  IlLeaveCriticalCAN_TX_DSP_TIMESTAMP();
  return rc;
}


#endif

/* Handle:  845,Name:   CAN_TX_RADIUS_CURVATURE_CALC,Size: 14,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_RADIUS_CURVATURE_CALC(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_RADIUS_CURVATURE_CALC();
  rc = ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_RADIUS_CURVATURE_CALC_0);
  rc |= ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_RADIUS_CURVATURE_CALC_1) << 8;
  IlLeaveCriticalCAN_TX_RADIUS_CURVATURE_CALC();
  return rc;
}


#endif

/* Handle:  847,Name:              CAN_TX_SCAN_INDEX,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_SCAN_INDEX(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_SCAN_INDEX();
  rc = ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_SCAN_INDEX_0);
  rc |= ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_SCAN_INDEX_1) << 8;
  IlLeaveCriticalCAN_TX_SCAN_INDEX();
  return rc;
}


#endif

/* Handle:  848,Name:           CAN_TX_YAW_RATE_CALC,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_YAW_RATE_CALC(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_YAW_RATE_CALC();
  rc = ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_YAW_RATE_CALC_0);
  rc |= ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_YAW_RATE_CALC_1) << 4;
  IlLeaveCriticalCAN_TX_YAW_RATE_CALC();
  return rc;
}


#endif

/* Handle:  849,Name:      CAN_TX_VEHICLE_SPEED_CALC,Size: 11,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_RX
vuint16 IlGetRxCAN_TX_VEHICLE_SPEED_CALC(void)
{
  vuint16 rc;
  IlEnterCriticalCAN_TX_VEHICLE_SPEED_CALC();
  rc = ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_VEHICLE_SPEED_CALC_0);
  rc |= ((vuint16) ESR_Status1.ESR_Status1.CAN_TX_VEHICLE_SPEED_CALC_1) << 8;
  IlLeaveCriticalCAN_TX_VEHICLE_SPEED_CALC();
  return rc;
}


#endif



/* -----------------------------------------------------------------------------
    &&&~ Set Tx Signal Access 
 ----------------------------------------------------------------------------- */

/* Handle:    0,Name: Heading_angle_Parameter_C1_0x77B,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x77B(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x77B();
  Next_lane_Right_P.Next_lane_Right_P.Heading_angle_Parameter_C1_0x77B_0 = ((vuint8) sigData);
  Next_lane_Right_P.Next_lane_Right_P.Heading_angle_Parameter_C1_0x77B_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x77B();
}


#endif

/* Handle:    1,Name:               View_range_0x77B,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x77B(vuint16 sigData)
{
  IlEnterCriticalView_range_0x77B();
  Next_lane_Right_P.Next_lane_Right_P.View_range_0x77B_0 = ((vuint8) sigData);
  Next_lane_Right_P.Next_lane_Right_P.View_range_0x77B_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x77B();
}


#endif

/* Handle:    6,Name:    Position_Parameter_C0_0x77A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x77A(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x77A();
  Next_lane_Right_O.Next_lane_Right_O.Position_Parameter_C0_0x77A_0 = ((vuint8) sigData);
  Next_lane_Right_O.Next_lane_Right_O.Position_Parameter_C0_0x77A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x77A();
}


#endif

/* Handle:    7,Name:   Curvature_Parameter_C2_0x77A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x77A(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x77A();
  Next_lane_Right_O.Next_lane_Right_O.Curvature_Parameter_C2_0x77A_0 = ((vuint8) sigData);
  Next_lane_Right_O.Next_lane_Right_O.Curvature_Parameter_C2_0x77A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x77A();
}


#endif

/* Handle:    8,Name:  Curvature_derivative_C3_0x77A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x77A(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x77A();
  Next_lane_Right_O.Next_lane_Right_O.Curvature_derivative_C3_0x77A_0 = ((vuint8) sigData);
  Next_lane_Right_O.Next_lane_Right_O.Curvature_derivative_C3_0x77A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x77A();
}


#endif

/* Handle:   10,Name: Heading_angle_Parameter_C1_0x779,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x779(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x779();
  Next_lane_Left_N.Next_lane_Left_N.Heading_angle_Parameter_C1_0x779_0 = ((vuint8) sigData);
  Next_lane_Left_N.Next_lane_Left_N.Heading_angle_Parameter_C1_0x779_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x779();
}


#endif

/* Handle:   11,Name:               View_range_0x779,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x779(vuint16 sigData)
{
  IlEnterCriticalView_range_0x779();
  Next_lane_Left_N.Next_lane_Left_N.View_range_0x779_0 = ((vuint8) sigData);
  Next_lane_Left_N.Next_lane_Left_N.View_range_0x779_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x779();
}


#endif

/* Handle:   16,Name:    Position_Parameter_C0_0x778,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x778(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x778();
  Next_lane_Left_M.Next_lane_Left_M.Position_Parameter_C0_0x778_0 = ((vuint8) sigData);
  Next_lane_Left_M.Next_lane_Left_M.Position_Parameter_C0_0x778_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x778();
}


#endif

/* Handle:   17,Name:   Curvature_Parameter_C2_0x778,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x778(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x778();
  Next_lane_Left_M.Next_lane_Left_M.Curvature_Parameter_C2_0x778_0 = ((vuint8) sigData);
  Next_lane_Left_M.Next_lane_Left_M.Curvature_Parameter_C2_0x778_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x778();
}


#endif

/* Handle:   18,Name:  Curvature_derivative_C3_0x778,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x778(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x778();
  Next_lane_Left_M.Next_lane_Left_M.Curvature_derivative_C3_0x778_0 = ((vuint8) sigData);
  Next_lane_Left_M.Next_lane_Left_M.Curvature_derivative_C3_0x778_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x778();
}


#endif

/* Handle:   20,Name: Heading_angle_Parameter_C1_0x777,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x777(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x777();
  Next_lane_Right_L.Next_lane_Right_L.Heading_angle_Parameter_C1_0x777_0 = ((vuint8) sigData);
  Next_lane_Right_L.Next_lane_Right_L.Heading_angle_Parameter_C1_0x777_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x777();
}


#endif

/* Handle:   21,Name:               View_range_0x777,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x777(vuint16 sigData)
{
  IlEnterCriticalView_range_0x777();
  Next_lane_Right_L.Next_lane_Right_L.View_range_0x777_0 = ((vuint8) sigData);
  Next_lane_Right_L.Next_lane_Right_L.View_range_0x777_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x777();
}


#endif

/* Handle:   26,Name:    Position_Parameter_C0_0x776,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x776(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x776();
  Next_lane_Right_K.Next_lane_Right_K.Position_Parameter_C0_0x776_0 = ((vuint8) sigData);
  Next_lane_Right_K.Next_lane_Right_K.Position_Parameter_C0_0x776_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x776();
}


#endif

/* Handle:   27,Name:   Curvature_Parameter_C2_0x776,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x776(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x776();
  Next_lane_Right_K.Next_lane_Right_K.Curvature_Parameter_C2_0x776_0 = ((vuint8) sigData);
  Next_lane_Right_K.Next_lane_Right_K.Curvature_Parameter_C2_0x776_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x776();
}


#endif

/* Handle:   28,Name:  Curvature_derivative_C3_0x776,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x776(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x776();
  Next_lane_Right_K.Next_lane_Right_K.Curvature_derivative_C3_0x776_0 = ((vuint8) sigData);
  Next_lane_Right_K.Next_lane_Right_K.Curvature_derivative_C3_0x776_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x776();
}


#endif

/* Handle:   30,Name: Heading_angle_Parameter_C1_0x775,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x775(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x775();
  Next_lane_Left_J.Next_lane_Left_J.Heading_angle_Parameter_C1_0x775_0 = ((vuint8) sigData);
  Next_lane_Left_J.Next_lane_Left_J.Heading_angle_Parameter_C1_0x775_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x775();
}


#endif

/* Handle:   31,Name:               View_range_0x775,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x775(vuint16 sigData)
{
  IlEnterCriticalView_range_0x775();
  Next_lane_Left_J.Next_lane_Left_J.View_range_0x775_0 = ((vuint8) sigData);
  Next_lane_Left_J.Next_lane_Left_J.View_range_0x775_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x775();
}


#endif

/* Handle:   36,Name:    Position_Parameter_C0_0x774,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x774(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x774();
  Next_lane_Left_I.Next_lane_Left_I.Position_Parameter_C0_0x774_0 = ((vuint8) sigData);
  Next_lane_Left_I.Next_lane_Left_I.Position_Parameter_C0_0x774_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x774();
}


#endif

/* Handle:   37,Name:   Curvature_Parameter_C2_0x774,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x774(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x774();
  Next_lane_Left_I.Next_lane_Left_I.Curvature_Parameter_C2_0x774_0 = ((vuint8) sigData);
  Next_lane_Left_I.Next_lane_Left_I.Curvature_Parameter_C2_0x774_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x774();
}


#endif

/* Handle:   38,Name:  Curvature_derivative_C3_0x774,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x774(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x774();
  Next_lane_Left_I.Next_lane_Left_I.Curvature_derivative_C3_0x774_0 = ((vuint8) sigData);
  Next_lane_Left_I.Next_lane_Left_I.Curvature_derivative_C3_0x774_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x774();
}


#endif

/* Handle:   40,Name: Heading_angle_Parameter_C1_0x773,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x773(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x773();
  Next_lane_Right_H.Next_lane_Right_H.Heading_angle_Parameter_C1_0x773_0 = ((vuint8) sigData);
  Next_lane_Right_H.Next_lane_Right_H.Heading_angle_Parameter_C1_0x773_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x773();
}


#endif

/* Handle:   41,Name:               View_range_0x773,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x773(vuint16 sigData)
{
  IlEnterCriticalView_range_0x773();
  Next_lane_Right_H.Next_lane_Right_H.View_range_0x773_0 = ((vuint8) sigData);
  Next_lane_Right_H.Next_lane_Right_H.View_range_0x773_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x773();
}


#endif

/* Handle:   46,Name:    Position_Parameter_C0_0x772,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x772(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x772();
  Next_lane_Right_G.Next_lane_Right_G.Position_Parameter_C0_0x772_0 = ((vuint8) sigData);
  Next_lane_Right_G.Next_lane_Right_G.Position_Parameter_C0_0x772_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x772();
}


#endif

/* Handle:   47,Name:   Curvature_Parameter_C2_0x772,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x772(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x772();
  Next_lane_Right_G.Next_lane_Right_G.Curvature_Parameter_C2_0x772_0 = ((vuint8) sigData);
  Next_lane_Right_G.Next_lane_Right_G.Curvature_Parameter_C2_0x772_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x772();
}


#endif

/* Handle:   48,Name:  Curvature_derivative_C3_0x772,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x772(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x772();
  Next_lane_Right_G.Next_lane_Right_G.Curvature_derivative_C3_0x772_0 = ((vuint8) sigData);
  Next_lane_Right_G.Next_lane_Right_G.Curvature_derivative_C3_0x772_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x772();
}


#endif

/* Handle:   50,Name: Heading_angle_Parameter_C1_0x771,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x771(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x771();
  Next_lane_Left_F.Next_lane_Left_F.Heading_angle_Parameter_C1_0x771_0 = ((vuint8) sigData);
  Next_lane_Left_F.Next_lane_Left_F.Heading_angle_Parameter_C1_0x771_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x771();
}


#endif

/* Handle:   51,Name:               View_range_0x771,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x771(vuint16 sigData)
{
  IlEnterCriticalView_range_0x771();
  Next_lane_Left_F.Next_lane_Left_F.View_range_0x771_0 = ((vuint8) sigData);
  Next_lane_Left_F.Next_lane_Left_F.View_range_0x771_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x771();
}


#endif

/* Handle:   56,Name:    Position_Parameter_C0_0x770,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x770(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x770();
  Next_lane_Left_E.Next_lane_Left_E.Position_Parameter_C0_0x770_0 = ((vuint8) sigData);
  Next_lane_Left_E.Next_lane_Left_E.Position_Parameter_C0_0x770_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x770();
}


#endif

/* Handle:   57,Name:   Curvature_Parameter_C2_0x770,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x770(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x770();
  Next_lane_Left_E.Next_lane_Left_E.Curvature_Parameter_C2_0x770_0 = ((vuint8) sigData);
  Next_lane_Left_E.Next_lane_Left_E.Curvature_Parameter_C2_0x770_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x770();
}


#endif

/* Handle:   58,Name:  Curvature_derivative_C3_0x770,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x770(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x770();
  Next_lane_Left_E.Next_lane_Left_E.Curvature_derivative_C3_0x770_0 = ((vuint8) sigData);
  Next_lane_Left_E.Next_lane_Left_E.Curvature_derivative_C3_0x770_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x770();
}


#endif

/* Handle:   60,Name: Heading_angle_Parameter_C1_0x76F,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x76F(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x76F();
  Next_lane_Right_D.Next_lane_Right_D.Heading_angle_Parameter_C1_0x76F_0 = ((vuint8) sigData);
  Next_lane_Right_D.Next_lane_Right_D.Heading_angle_Parameter_C1_0x76F_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x76F();
}


#endif

/* Handle:   61,Name:               View_range_0x76F,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x76F(vuint16 sigData)
{
  IlEnterCriticalView_range_0x76F();
  Next_lane_Right_D.Next_lane_Right_D.View_range_0x76F_0 = ((vuint8) sigData);
  Next_lane_Right_D.Next_lane_Right_D.View_range_0x76F_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x76F();
}


#endif

/* Handle:   66,Name:    Position_Parameter_C0_0x76E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x76E(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x76E();
  Next_lane_Right_C.Next_lane_Right_C.Position_Parameter_C0_0x76E_0 = ((vuint8) sigData);
  Next_lane_Right_C.Next_lane_Right_C.Position_Parameter_C0_0x76E_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x76E();
}


#endif

/* Handle:   67,Name:   Curvature_Parameter_C2_0x76E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x76E(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x76E();
  Next_lane_Right_C.Next_lane_Right_C.Curvature_Parameter_C2_0x76E_0 = ((vuint8) sigData);
  Next_lane_Right_C.Next_lane_Right_C.Curvature_Parameter_C2_0x76E_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x76E();
}


#endif

/* Handle:   68,Name:  Curvature_derivative_C3_0x76E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x76E(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x76E();
  Next_lane_Right_C.Next_lane_Right_C.Curvature_derivative_C3_0x76E_0 = ((vuint8) sigData);
  Next_lane_Right_C.Next_lane_Right_C.Curvature_derivative_C3_0x76E_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x76E();
}


#endif

/* Handle:   70,Name: Heading_angle_Parameter_C1_0x76D,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x76D(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x76D();
  Next_lane_Left_B.Next_lane_Left_B.Heading_angle_Parameter_C1_0x76D_0 = ((vuint8) sigData);
  Next_lane_Left_B.Next_lane_Left_B.Heading_angle_Parameter_C1_0x76D_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x76D();
}


#endif

/* Handle:   71,Name:               View_range_0x76D,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x76D(vuint16 sigData)
{
  IlEnterCriticalView_range_0x76D();
  Next_lane_Left_B.Next_lane_Left_B.View_range_0x76D_0 = ((vuint8) sigData);
  Next_lane_Left_B.Next_lane_Left_B.View_range_0x76D_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x76D();
}


#endif

/* Handle:   76,Name:    Position_Parameter_C0_0x76C,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x76C(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x76C();
  Next_lane_Left_A.Next_lane_Left_A.Position_Parameter_C0_0x76C_0 = ((vuint8) sigData);
  Next_lane_Left_A.Next_lane_Left_A.Position_Parameter_C0_0x76C_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x76C();
}


#endif

/* Handle:   77,Name:   Curvature_Parameter_C2_0x76C,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x76C(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x76C();
  Next_lane_Left_A.Next_lane_Left_A.Curvature_Parameter_C2_0x76C_0 = ((vuint8) sigData);
  Next_lane_Left_A.Next_lane_Left_A.Curvature_Parameter_C2_0x76C_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x76C();
}


#endif

/* Handle:   78,Name:  Curvature_derivative_C3_0x76C,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x76C(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x76C();
  Next_lane_Left_A.Next_lane_Left_A.Curvature_derivative_C3_0x76C_0 = ((vuint8) sigData);
  Next_lane_Left_A.Next_lane_Left_A.Curvature_derivative_C3_0x76C_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x76C();
}


#endif

/* Handle:   81,Name:     Ref_point_1_Position_0x76A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRef_point_1_Position_0x76A(vuint16 sigData)
{
  IlEnterCriticalRef_point_1_Position_0x76A();
  Reference_points.Reference_points.Ref_point_1_Position_0x76A_0 = ((vuint8) sigData);
  Reference_points.Reference_points.Ref_point_1_Position_0x76A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalRef_point_1_Position_0x76A();
}


#endif

/* Handle:   82,Name:     Ref_point_1_Distance_0x76A,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRef_point_1_Distance_0x76A(vuint16 sigData)
{
  IlEnterCriticalRef_point_1_Distance_0x76A();
  Reference_points.Reference_points.Ref_point_1_Distance_0x76A_0 = ((vuint8) sigData);
  Reference_points.Reference_points.Ref_point_1_Distance_0x76A_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalRef_point_1_Distance_0x76A();
}


#endif

/* Handle:   84,Name:     Ref_point_2_Position_0x76A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRef_point_2_Position_0x76A(vuint16 sigData)
{
  IlEnterCriticalRef_point_2_Position_0x76A();
  Reference_points.Reference_points.Ref_point_2_Position_0x76A_0 = ((vuint8) sigData);
  Reference_points.Reference_points.Ref_point_2_Position_0x76A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalRef_point_2_Position_0x76A();
}


#endif

/* Handle:   85,Name:     Ref_point_2_Distance_0x76A,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRef_point_2_Distance_0x76A(vuint16 sigData)
{
  IlEnterCriticalRef_point_2_Distance_0x76A();
  Reference_points.Reference_points.Ref_point_2_Distance_0x76A_0 = ((vuint8) sigData);
  Reference_points.Reference_points.Ref_point_2_Distance_0x76A_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalRef_point_2_Distance_0x76A();
}


#endif

/* Handle:   87,Name: Heading_angle_Parameter_C1_0x769,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x769(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x769();
  LKA_right_lane_B.LKA_right_lane_B.Heading_angle_Parameter_C1_0x769_0 = ((vuint8) sigData);
  LKA_right_lane_B.LKA_right_lane_B.Heading_angle_Parameter_C1_0x769_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x769();
}


#endif

/* Handle:   88,Name:               View_range_0x769,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x769(vuint16 sigData)
{
  IlEnterCriticalView_range_0x769();
  LKA_right_lane_B.LKA_right_lane_B.View_range_0x769_0 = ((vuint8) sigData);
  LKA_right_lane_B.LKA_right_lane_B.View_range_0x769_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x769();
}


#endif

/* Handle:   93,Name:    Position_Parameter_C0_0x768,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x768(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x768();
  LKA_right_lane_A.LKA_right_lane_A.Position_Parameter_C0_0x768_0 = ((vuint8) sigData);
  LKA_right_lane_A.LKA_right_lane_A.Position_Parameter_C0_0x768_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x768();
}


#endif

/* Handle:   94,Name:   Curvature_Parameter_C2_0x768,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x768(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x768();
  LKA_right_lane_A.LKA_right_lane_A.Curvature_Parameter_C2_0x768_0 = ((vuint8) sigData);
  LKA_right_lane_A.LKA_right_lane_A.Curvature_Parameter_C2_0x768_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x768();
}


#endif

/* Handle:   95,Name:  Curvature_derivative_C3_0x768,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x768(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x768();
  LKA_right_lane_A.LKA_right_lane_A.Curvature_derivative_C3_0x768_0 = ((vuint8) sigData);
  LKA_right_lane_A.LKA_right_lane_A.Curvature_derivative_C3_0x768_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x768();
}


#endif

/* Handle:   97,Name: Heading_angle_Parameter_C1_0x767,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxHeading_angle_Parameter_C1_0x767(vuint16 sigData)
{
  IlEnterCriticalHeading_angle_Parameter_C1_0x767();
  LKA_left_lane_B.LKA_left_lane_B.Heading_angle_Parameter_C1_0x767_0 = ((vuint8) sigData);
  LKA_left_lane_B.LKA_left_lane_B.Heading_angle_Parameter_C1_0x767_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalHeading_angle_Parameter_C1_0x767();
}


#endif

/* Handle:   98,Name:               View_range_0x767,Size: 15,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxView_range_0x767(vuint16 sigData)
{
  IlEnterCriticalView_range_0x767();
  LKA_left_lane_B.LKA_left_lane_B.View_range_0x767_0 = ((vuint8) sigData);
  LKA_left_lane_B.LKA_left_lane_B.View_range_0x767_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x7F));
  IlLeaveCriticalView_range_0x767();
}


#endif

/* Handle:  103,Name:    Position_Parameter_C0_0x766,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPosition_Parameter_C0_0x766(vuint16 sigData)
{
  IlEnterCriticalPosition_Parameter_C0_0x766();
  LKA_left_lane_A.LKA_left_lane_A.Position_Parameter_C0_0x766_0 = ((vuint8) sigData);
  LKA_left_lane_A.LKA_left_lane_A.Position_Parameter_C0_0x766_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPosition_Parameter_C0_0x766();
}


#endif

/* Handle:  104,Name:   Curvature_Parameter_C2_0x766,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_Parameter_C2_0x766(vuint16 sigData)
{
  IlEnterCriticalCurvature_Parameter_C2_0x766();
  LKA_left_lane_A.LKA_left_lane_A.Curvature_Parameter_C2_0x766_0 = ((vuint8) sigData);
  LKA_left_lane_A.LKA_left_lane_A.Curvature_Parameter_C2_0x766_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_Parameter_C2_0x766();
}


#endif

/* Handle:  105,Name:  Curvature_derivative_C3_0x766,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxCurvature_derivative_C3_0x766(vuint16 sigData)
{
  IlEnterCriticalCurvature_derivative_C3_0x766();
  LKA_left_lane_A.LKA_left_lane_A.Curvature_derivative_C3_0x766_0 = ((vuint8) sigData);
  LKA_left_lane_A.LKA_left_lane_A.Curvature_derivative_C3_0x766_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalCurvature_derivative_C3_0x766();
}


#endif

/* Handle:  118,Name:      Obstacle_Angle_Rate_0x750,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x750(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x750();
  Obstacle_Data_X.Obstacle_Data_X.Obstacle_Angle_Rate_0x750_0 = ((vuint8) sigData);
  Obstacle_Data_X.Obstacle_Data_X.Obstacle_Angle_Rate_0x750_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x750();
}


#endif

/* Handle:  119,Name:    Obstacle_Scale_Change_0x750,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x750(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x750();
  Obstacle_Data_X.Obstacle_Data_X.Obstacle_Scale_Change_0x750_0 = ((vuint8) sigData);
  Obstacle_Data_X.Obstacle_Data_X.Obstacle_Scale_Change_0x750_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x750();
}


#endif

/* Handle:  120,Name:           Object_Accel_X_0x750,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x750(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x750();
  Obstacle_Data_X.Obstacle_Data_X.Object_Accel_X_0x750_0 = ((vuint8) sigData);
  Obstacle_Data_X.Obstacle_Data_X.Object_Accel_X_0x750_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x750();
}


#endif

/* Handle:  122,Name:           Obstacle_Angle_0x750,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x750(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x750();
  Obstacle_Data_X.Obstacle_Data_X.Obstacle_Angle_0x750_0 = ((vuint8) sigData);
  Obstacle_Data_X.Obstacle_Data_X.Obstacle_Angle_0x750_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x750();
}


#endif

/* Handle:  128,Name:              Radar_Pos_X_0x74F,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x74F(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x74F();
  Obstacle_Data_W.Obstacle_Data_W.Radar_Pos_X_0x74F_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_W.Obstacle_Data_W.Radar_Pos_X_0x74F_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x74F();
}


#endif

/* Handle:  129,Name:              Radar_Vel_X_0x74F,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x74F(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x74F();
  Obstacle_Data_W.Obstacle_Data_W.Radar_Vel_X_0x74F_0 = ((vuint8) sigData);
  Obstacle_Data_W.Obstacle_Data_W.Radar_Vel_X_0x74F_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x74F();
}


#endif

/* Handle:  133,Name:           Obstacle_Pos_X_0x74E,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x74E(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x74E();
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Pos_X_0x74E_0 = ((vuint8) sigData);
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Pos_X_0x74E_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x74E();
}


#endif

/* Handle:  134,Name:           Obstacle_Pos_Y_0x74E,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x74E(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x74E();
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Pos_Y_0x74E_0 = ((vuint8) sigData);
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Pos_Y_0x74E_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x74E();
}


#endif

/* Handle:  137,Name:       Obstacle_Rel_Vel_X_0x74E,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x74E(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x74E();
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Rel_Vel_X_0x74E_0 = ((vuint8) sigData);
  Obstacle_Data_V.Obstacle_Data_V.Obstacle_Rel_Vel_X_0x74E_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x74E();
}


#endif

/* Handle:  142,Name:      Obstacle_Angle_Rate_0x74D,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x74D(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x74D();
  Obstacle_Data_U.Obstacle_Data_U.Obstacle_Angle_Rate_0x74D_0 = ((vuint8) sigData);
  Obstacle_Data_U.Obstacle_Data_U.Obstacle_Angle_Rate_0x74D_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x74D();
}


#endif

/* Handle:  143,Name:    Obstacle_Scale_Change_0x74D,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x74D(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x74D();
  Obstacle_Data_U.Obstacle_Data_U.Obstacle_Scale_Change_0x74D_0 = ((vuint8) sigData);
  Obstacle_Data_U.Obstacle_Data_U.Obstacle_Scale_Change_0x74D_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x74D();
}


#endif

/* Handle:  144,Name:           Object_Accel_X_0x74D,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x74D(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x74D();
  Obstacle_Data_U.Obstacle_Data_U.Object_Accel_X_0x74D_0 = ((vuint8) sigData);
  Obstacle_Data_U.Obstacle_Data_U.Object_Accel_X_0x74D_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x74D();
}


#endif

/* Handle:  146,Name:           Obstacle_Angle_0x74D,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x74D(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x74D();
  Obstacle_Data_U.Obstacle_Data_U.Obstacle_Angle_0x74D_0 = ((vuint8) sigData);
  Obstacle_Data_U.Obstacle_Data_U.Obstacle_Angle_0x74D_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x74D();
}


#endif

/* Handle:  152,Name:              Radar_Pos_X_0x74C,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x74C(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x74C();
  Obstacle_Data_T.Obstacle_Data_T.Radar_Pos_X_0x74C_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_T.Obstacle_Data_T.Radar_Pos_X_0x74C_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x74C();
}


#endif

/* Handle:  153,Name:              Radar_Vel_X_0x74C,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x74C(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x74C();
  Obstacle_Data_T.Obstacle_Data_T.Radar_Vel_X_0x74C_0 = ((vuint8) sigData);
  Obstacle_Data_T.Obstacle_Data_T.Radar_Vel_X_0x74C_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x74C();
}


#endif

/* Handle:  157,Name:           Obstacle_Pos_X_0x74B,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x74B(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x74B();
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Pos_X_0x74B_0 = ((vuint8) sigData);
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Pos_X_0x74B_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x74B();
}


#endif

/* Handle:  158,Name:           Obstacle_Pos_Y_0x74B,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x74B(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x74B();
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Pos_Y_0x74B_0 = ((vuint8) sigData);
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Pos_Y_0x74B_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x74B();
}


#endif

/* Handle:  161,Name:       Obstacle_Rel_Vel_X_0x74B,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x74B(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x74B();
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Rel_Vel_X_0x74B_0 = ((vuint8) sigData);
  Obstacle_Data_S.Obstacle_Data_S.Obstacle_Rel_Vel_X_0x74B_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x74B();
}


#endif

/* Handle:  166,Name:      Obstacle_Angle_Rate_0x74A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x74A(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x74A();
  Obstacle_Data_R.Obstacle_Data_R.Obstacle_Angle_Rate_0x74A_0 = ((vuint8) sigData);
  Obstacle_Data_R.Obstacle_Data_R.Obstacle_Angle_Rate_0x74A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x74A();
}


#endif

/* Handle:  167,Name:    Obstacle_Scale_Change_0x74A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x74A(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x74A();
  Obstacle_Data_R.Obstacle_Data_R.Obstacle_Scale_Change_0x74A_0 = ((vuint8) sigData);
  Obstacle_Data_R.Obstacle_Data_R.Obstacle_Scale_Change_0x74A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x74A();
}


#endif

/* Handle:  168,Name:           Object_Accel_X_0x74A,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x74A(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x74A();
  Obstacle_Data_R.Obstacle_Data_R.Object_Accel_X_0x74A_0 = ((vuint8) sigData);
  Obstacle_Data_R.Obstacle_Data_R.Object_Accel_X_0x74A_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x74A();
}


#endif

/* Handle:  170,Name:           Obstacle_Angle_0x74A,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x74A(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x74A();
  Obstacle_Data_R.Obstacle_Data_R.Obstacle_Angle_0x74A_0 = ((vuint8) sigData);
  Obstacle_Data_R.Obstacle_Data_R.Obstacle_Angle_0x74A_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x74A();
}


#endif

/* Handle:  176,Name:              Radar_Pos_X_0x749,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x749(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x749();
  Obstacle_Data_Q.Obstacle_Data_Q.Radar_Pos_X_0x749_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_Q.Obstacle_Data_Q.Radar_Pos_X_0x749_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x749();
}


#endif

/* Handle:  177,Name:              Radar_Vel_X_0x749,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x749(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x749();
  Obstacle_Data_Q.Obstacle_Data_Q.Radar_Vel_X_0x749_0 = ((vuint8) sigData);
  Obstacle_Data_Q.Obstacle_Data_Q.Radar_Vel_X_0x749_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x749();
}


#endif

/* Handle:  181,Name:           Obstacle_Pos_X_0x748,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x748(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x748();
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Pos_X_0x748_0 = ((vuint8) sigData);
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Pos_X_0x748_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x748();
}


#endif

/* Handle:  182,Name:           Obstacle_Pos_Y_0x748,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x748(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x748();
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Pos_Y_0x748_0 = ((vuint8) sigData);
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Pos_Y_0x748_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x748();
}


#endif

/* Handle:  185,Name:       Obstacle_Rel_Vel_X_0x748,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x748(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x748();
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Rel_Vel_X_0x748_0 = ((vuint8) sigData);
  Obstacle_Data_P.Obstacle_Data_P.Obstacle_Rel_Vel_X_0x748_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x748();
}


#endif

/* Handle:  190,Name:      Obstacle_Angle_Rate_0x747,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x747(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x747();
  Obstacle_Data_O.Obstacle_Data_O.Obstacle_Angle_Rate_0x747_0 = ((vuint8) sigData);
  Obstacle_Data_O.Obstacle_Data_O.Obstacle_Angle_Rate_0x747_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x747();
}


#endif

/* Handle:  191,Name:    Obstacle_Scale_Change_0x747,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x747(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x747();
  Obstacle_Data_O.Obstacle_Data_O.Obstacle_Scale_Change_0x747_0 = ((vuint8) sigData);
  Obstacle_Data_O.Obstacle_Data_O.Obstacle_Scale_Change_0x747_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x747();
}


#endif

/* Handle:  192,Name:           Object_Accel_X_0x747,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x747(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x747();
  Obstacle_Data_O.Obstacle_Data_O.Object_Accel_X_0x747_0 = ((vuint8) sigData);
  Obstacle_Data_O.Obstacle_Data_O.Object_Accel_X_0x747_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x747();
}


#endif

/* Handle:  194,Name:           Obstacle_Angle_0x747,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x747(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x747();
  Obstacle_Data_O.Obstacle_Data_O.Obstacle_Angle_0x747_0 = ((vuint8) sigData);
  Obstacle_Data_O.Obstacle_Data_O.Obstacle_Angle_0x747_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x747();
}


#endif

/* Handle:  200,Name:              Radar_Pos_X_0x746,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x746(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x746();
  Obstacle_Data_N.Obstacle_Data_N.Radar_Pos_X_0x746_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_N.Obstacle_Data_N.Radar_Pos_X_0x746_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x746();
}


#endif

/* Handle:  201,Name:              Radar_Vel_X_0x746,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x746(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x746();
  Obstacle_Data_N.Obstacle_Data_N.Radar_Vel_X_0x746_0 = ((vuint8) sigData);
  Obstacle_Data_N.Obstacle_Data_N.Radar_Vel_X_0x746_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x746();
}


#endif

/* Handle:  205,Name:           Obstacle_Pos_X_0x745,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x745(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x745();
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Pos_X_0x745_0 = ((vuint8) sigData);
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Pos_X_0x745_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x745();
}


#endif

/* Handle:  206,Name:           Obstacle_Pos_Y_0x745,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x745(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x745();
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Pos_Y_0x745_0 = ((vuint8) sigData);
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Pos_Y_0x745_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x745();
}


#endif

/* Handle:  209,Name:       Obstacle_Rel_Vel_X_0x745,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x745(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x745();
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Rel_Vel_X_0x745_0 = ((vuint8) sigData);
  Obstacle_Data_M.Obstacle_Data_M.Obstacle_Rel_Vel_X_0x745_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x745();
}


#endif

/* Handle:  214,Name:      Obstacle_Angle_Rate_0x744,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x744(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x744();
  Obstacle_Data_L.Obstacle_Data_L.Obstacle_Angle_Rate_0x744_0 = ((vuint8) sigData);
  Obstacle_Data_L.Obstacle_Data_L.Obstacle_Angle_Rate_0x744_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x744();
}


#endif

/* Handle:  215,Name:    Obstacle_Scale_Change_0x744,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x744(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x744();
  Obstacle_Data_L.Obstacle_Data_L.Obstacle_Scale_Change_0x744_0 = ((vuint8) sigData);
  Obstacle_Data_L.Obstacle_Data_L.Obstacle_Scale_Change_0x744_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x744();
}


#endif

/* Handle:  216,Name:           Object_Accel_X_0x744,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x744(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x744();
  Obstacle_Data_L.Obstacle_Data_L.Object_Accel_X_0x744_0 = ((vuint8) sigData);
  Obstacle_Data_L.Obstacle_Data_L.Object_Accel_X_0x744_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x744();
}


#endif

/* Handle:  218,Name:           Obstacle_Angle_0x744,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x744(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x744();
  Obstacle_Data_L.Obstacle_Data_L.Obstacle_Angle_0x744_0 = ((vuint8) sigData);
  Obstacle_Data_L.Obstacle_Data_L.Obstacle_Angle_0x744_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x744();
}


#endif

/* Handle:  224,Name:              Radar_Pos_X_0x743,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x743(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x743();
  Obstacle_Data_K.Obstacle_Data_K.Radar_Pos_X_0x743_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_K.Obstacle_Data_K.Radar_Pos_X_0x743_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x743();
}


#endif

/* Handle:  225,Name:              Radar_Vel_X_0x743,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x743(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x743();
  Obstacle_Data_K.Obstacle_Data_K.Radar_Vel_X_0x743_0 = ((vuint8) sigData);
  Obstacle_Data_K.Obstacle_Data_K.Radar_Vel_X_0x743_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x743();
}


#endif

/* Handle:  229,Name:           Obstacle_Pos_X_0x742,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x742(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x742();
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Pos_X_0x742_0 = ((vuint8) sigData);
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Pos_X_0x742_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x742();
}


#endif

/* Handle:  230,Name:           Obstacle_Pos_Y_0x742,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x742(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x742();
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Pos_Y_0x742_0 = ((vuint8) sigData);
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Pos_Y_0x742_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x742();
}


#endif

/* Handle:  233,Name:       Obstacle_Rel_Vel_X_0x742,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x742(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x742();
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Rel_Vel_X_0x742_0 = ((vuint8) sigData);
  Obstacle_Data_J.Obstacle_Data_J.Obstacle_Rel_Vel_X_0x742_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x742();
}


#endif

/* Handle:  238,Name:      Obstacle_Angle_Rate_0x741,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x741(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x741();
  Obstacle_Data_I.Obstacle_Data_I.Obstacle_Angle_Rate_0x741_0 = ((vuint8) sigData);
  Obstacle_Data_I.Obstacle_Data_I.Obstacle_Angle_Rate_0x741_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x741();
}


#endif

/* Handle:  239,Name:    Obstacle_Scale_Change_0x741,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x741(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x741();
  Obstacle_Data_I.Obstacle_Data_I.Obstacle_Scale_Change_0x741_0 = ((vuint8) sigData);
  Obstacle_Data_I.Obstacle_Data_I.Obstacle_Scale_Change_0x741_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x741();
}


#endif

/* Handle:  240,Name:           Object_Accel_X_0x741,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x741(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x741();
  Obstacle_Data_I.Obstacle_Data_I.Object_Accel_X_0x741_0 = ((vuint8) sigData);
  Obstacle_Data_I.Obstacle_Data_I.Object_Accel_X_0x741_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x741();
}


#endif

/* Handle:  242,Name:           Obstacle_Angle_0x741,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x741(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x741();
  Obstacle_Data_I.Obstacle_Data_I.Obstacle_Angle_0x741_0 = ((vuint8) sigData);
  Obstacle_Data_I.Obstacle_Data_I.Obstacle_Angle_0x741_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x741();
}


#endif

/* Handle:  248,Name:              Radar_Pos_X_0x740,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x740(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x740();
  Obstacle_Data_H.Obstacle_Data_H.Radar_Pos_X_0x740_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_H.Obstacle_Data_H.Radar_Pos_X_0x740_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x740();
}


#endif

/* Handle:  249,Name:              Radar_Vel_X_0x740,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x740(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x740();
  Obstacle_Data_H.Obstacle_Data_H.Radar_Vel_X_0x740_0 = ((vuint8) sigData);
  Obstacle_Data_H.Obstacle_Data_H.Radar_Vel_X_0x740_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x740();
}


#endif

/* Handle:  253,Name:           Obstacle_Pos_X_0x73F,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x73F(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x73F();
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Pos_X_0x73F_0 = ((vuint8) sigData);
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Pos_X_0x73F_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x73F();
}


#endif

/* Handle:  254,Name:           Obstacle_Pos_Y_0x73F,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x73F(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x73F();
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Pos_Y_0x73F_0 = ((vuint8) sigData);
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Pos_Y_0x73F_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x73F();
}


#endif

/* Handle:  257,Name:       Obstacle_Rel_Vel_X_0x73F,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x73F(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x73F();
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Rel_Vel_X_0x73F_0 = ((vuint8) sigData);
  Obstacle_Data_G.Obstacle_Data_G.Obstacle_Rel_Vel_X_0x73F_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x73F();
}


#endif

/* Handle:  262,Name:      Obstacle_Angle_Rate_0x73E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x73E(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x73E();
  Obstacle_Data_F.Obstacle_Data_F.Obstacle_Angle_Rate_0x73E_0 = ((vuint8) sigData);
  Obstacle_Data_F.Obstacle_Data_F.Obstacle_Angle_Rate_0x73E_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x73E();
}


#endif

/* Handle:  263,Name:    Obstacle_Scale_Change_0x73E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x73E(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x73E();
  Obstacle_Data_F.Obstacle_Data_F.Obstacle_Scale_Change_0x73E_0 = ((vuint8) sigData);
  Obstacle_Data_F.Obstacle_Data_F.Obstacle_Scale_Change_0x73E_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x73E();
}


#endif

/* Handle:  264,Name:           Object_Accel_X_0x73E,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x73E(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x73E();
  Obstacle_Data_F.Obstacle_Data_F.Object_Accel_X_0x73E_0 = ((vuint8) sigData);
  Obstacle_Data_F.Obstacle_Data_F.Object_Accel_X_0x73E_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x73E();
}


#endif

/* Handle:  266,Name:           Obstacle_Angle_0x73E,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x73E(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x73E();
  Obstacle_Data_F.Obstacle_Data_F.Obstacle_Angle_0x73E_0 = ((vuint8) sigData);
  Obstacle_Data_F.Obstacle_Data_F.Obstacle_Angle_0x73E_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x73E();
}


#endif

/* Handle:  272,Name:              Radar_Pos_X_0x73D,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x73D(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x73D();
  Obstacle_Data_E.Obstacle_Data_E.Radar_Pos_X_0x73D_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_E.Obstacle_Data_E.Radar_Pos_X_0x73D_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x73D();
}


#endif

/* Handle:  273,Name:              Radar_Vel_X_0x73D,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x73D(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x73D();
  Obstacle_Data_E.Obstacle_Data_E.Radar_Vel_X_0x73D_0 = ((vuint8) sigData);
  Obstacle_Data_E.Obstacle_Data_E.Radar_Vel_X_0x73D_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x73D();
}


#endif

/* Handle:  277,Name:           Obstacle_Pos_X_0x73C,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x73C(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x73C();
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Pos_X_0x73C_0 = ((vuint8) sigData);
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Pos_X_0x73C_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x73C();
}


#endif

/* Handle:  278,Name:           Obstacle_Pos_Y_0x73C,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x73C(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x73C();
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Pos_Y_0x73C_0 = ((vuint8) sigData);
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Pos_Y_0x73C_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x73C();
}


#endif

/* Handle:  281,Name:       Obstacle_Rel_Vel_X_0x73C,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x73C(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x73C();
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Rel_Vel_X_0x73C_0 = ((vuint8) sigData);
  Obstacle_Data_D.Obstacle_Data_D.Obstacle_Rel_Vel_X_0x73C_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x73C();
}


#endif

/* Handle:  286,Name:      Obstacle_Angle_Rate_0x73B,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_Rate_0x73B(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_Rate_0x73B();
  Obstacle_Data_C.Obstacle_Data_C.Obstacle_Angle_Rate_0x73B_0 = ((vuint8) sigData);
  Obstacle_Data_C.Obstacle_Data_C.Obstacle_Angle_Rate_0x73B_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_Rate_0x73B();
}


#endif

/* Handle:  287,Name:    Obstacle_Scale_Change_0x73B,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Scale_Change_0x73B(vuint16 sigData)
{
  IlEnterCriticalObstacle_Scale_Change_0x73B();
  Obstacle_Data_C.Obstacle_Data_C.Obstacle_Scale_Change_0x73B_0 = ((vuint8) sigData);
  Obstacle_Data_C.Obstacle_Data_C.Obstacle_Scale_Change_0x73B_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Scale_Change_0x73B();
}


#endif

/* Handle:  288,Name:           Object_Accel_X_0x73B,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObject_Accel_X_0x73B(vuint16 sigData)
{
  IlEnterCriticalObject_Accel_X_0x73B();
  Obstacle_Data_C.Obstacle_Data_C.Object_Accel_X_0x73B_0 = ((vuint8) sigData);
  Obstacle_Data_C.Obstacle_Data_C.Object_Accel_X_0x73B_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObject_Accel_X_0x73B();
}


#endif

/* Handle:  290,Name:           Obstacle_Angle_0x73B,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Angle_0x73B(vuint16 sigData)
{
  IlEnterCriticalObstacle_Angle_0x73B();
  Obstacle_Data_C.Obstacle_Data_C.Obstacle_Angle_0x73B_0 = ((vuint8) sigData);
  Obstacle_Data_C.Obstacle_Data_C.Obstacle_Angle_0x73B_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalObstacle_Angle_0x73B();
}


#endif

/* Handle:  296,Name:              Radar_Pos_X_0x73A,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Pos_X_0x73A(vuint16 sigData)
{
  IlEnterCriticalRadar_Pos_X_0x73A();
  Obstacle_Data_B.Obstacle_Data_B.Radar_Pos_X_0x73A_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Obstacle_Data_B.Obstacle_Data_B.Radar_Pos_X_0x73A_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalRadar_Pos_X_0x73A();
}


#endif

/* Handle:  297,Name:              Radar_Vel_X_0x73A,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxRadar_Vel_X_0x73A(vuint16 sigData)
{
  IlEnterCriticalRadar_Vel_X_0x73A();
  Obstacle_Data_B.Obstacle_Data_B.Radar_Vel_X_0x73A_0 = ((vuint8) sigData);
  Obstacle_Data_B.Obstacle_Data_B.Radar_Vel_X_0x73A_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalRadar_Vel_X_0x73A();
}


#endif

/* Handle:  301,Name:           Obstacle_Pos_X_0x739,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_X_0x739(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_X_0x739();
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Pos_X_0x739_0 = ((vuint8) sigData);
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Pos_X_0x739_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Pos_X_0x739();
}


#endif

/* Handle:  302,Name:           Obstacle_Pos_Y_0x739,Size: 10,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Pos_Y_0x739(vuint16 sigData)
{
  IlEnterCriticalObstacle_Pos_Y_0x739();
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Pos_Y_0x739_0 = ((vuint8) sigData);
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Pos_Y_0x739_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x03));
  IlLeaveCriticalObstacle_Pos_Y_0x739();
}


#endif

/* Handle:  305,Name:       Obstacle_Rel_Vel_X_0x739,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxObstacle_Rel_Vel_X_0x739(vuint16 sigData)
{
  IlEnterCriticalObstacle_Rel_Vel_X_0x739();
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Rel_Vel_X_0x739_0 = ((vuint8) sigData);
  Obstacle_Data_A.Obstacle_Data_A.Obstacle_Rel_Vel_X_0x739_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalObstacle_Rel_Vel_X_0x739();
}


#endif

/* Handle:  320,Name:           Lane_Curvature_0x737,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxLane_Curvature_0x737(vuint16 sigData)
{
  IlEnterCriticalLane_Curvature_0x737();
  Lane.Lane.Lane_Curvature_0x737_0 = ((vuint8) sigData);
  Lane.Lane.Lane_Curvature_0x737_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalLane_Curvature_0x737();
}


#endif

/* Handle:  321,Name:             Lane_Heading_0x737,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxLane_Heading_0x737(vuint16 sigData)
{
  IlEnterCriticalLane_Heading_0x737();
  Lane.Lane.Lane_Heading_0x737_0 = ((vuint8) sigData);
  Lane.Lane.Lane_Heading_0x737_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalLane_Heading_0x737();
}


#endif

/* Handle:  325,Name:                Yaw_Angle_0x737,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxYaw_Angle_0x737(vuint16 sigData)
{
  IlEnterCriticalYaw_Angle_0x737();
  Lane.Lane.Yaw_Angle_0x737_0 = ((vuint8) sigData);
  Lane.Lane.Yaw_Angle_0x737_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalYaw_Angle_0x737();
}


#endif

/* Handle:  326,Name:              Pitch_Angle_0x737,Size: 16,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxPitch_Angle_0x737(vuint16 sigData)
{
  IlEnterCriticalPitch_Angle_0x737();
  Lane.Lane.Pitch_Angle_0x737_0 = ((vuint8) sigData);
  Lane.Lane.Pitch_Angle_0x737_1 = ((vuint8) (sigData >> 8));
  IlLeaveCriticalPitch_Angle_0x737();
}


#endif

/* Handle:  328,Name:   Boundary_left_hand_HLB_0x729,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxBoundary_left_hand_HLB_0x729(vuint16 sigData)
{
  IlEnterCriticalBoundary_left_hand_HLB_0x729();
  AHBC_Gradual.AHBC_Gradual.Boundary_left_hand_HLB_0x729_0 = ((vuint8) sigData);
  AHBC_Gradual.AHBC_Gradual.Boundary_left_hand_HLB_0x729_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x0F));
  IlLeaveCriticalBoundary_left_hand_HLB_0x729();
}


#endif

/* Handle:  329,Name:  Boundary_right_hand_HLB_0x729,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxBoundary_right_hand_HLB_0x729(vuint16 sigData)
{
  IlEnterCriticalBoundary_right_hand_HLB_0x729();
  AHBC_Gradual.AHBC_Gradual.Boundary_right_hand_HLB_0x729_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  AHBC_Gradual.AHBC_Gradual.Boundary_right_hand_HLB_0x729_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalBoundary_right_hand_HLB_0x729();
}


#endif

/* Handle:  340,Name: Reasons_for_switch_to_low_beam_0x728,Size:  9,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxReasons_for_switch_to_low_beam_0x728(vuint16 sigData)
{
  IlEnterCriticalReasons_for_switch_to_low_beam_0x728();
  AHBC_high_low_beam.AHBC_high_low_beam.Reasons_for_switch_to_low_beam_0x728_0 = ((vuint8) sigData);
  AHBC_high_low_beam.AHBC_high_low_beam.Reasons_for_switch_to_low_beam_0x728_1 = ((vuint8) ((sigData >> 8) & (vuint8) 0x01));
  IlLeaveCriticalReasons_for_switch_to_low_beam_0x728();
}


#endif

/* Handle:  412,Name:    Distance_To_Left_Lane_0x669,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDistance_To_Left_Lane_0x669(vuint16 sigData)
{
  IlEnterCriticalDistance_To_Left_Lane_0x669();
  Detils_Lane.Detils_Lane.Distance_To_Left_Lane_0x669_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Detils_Lane.Detils_Lane.Distance_To_Left_Lane_0x669_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalDistance_To_Left_Lane_0x669();
}


#endif

/* Handle:  417,Name:   Distance_To_Right_Lane_0x669,Size: 12,UsedBytes:  2,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxDistance_To_Right_Lane_0x669(vuint16 sigData)
{
  IlEnterCriticalDistance_To_Right_Lane_0x669();
  Detils_Lane.Detils_Lane.Distance_To_Right_Lane_0x669_0 = ((vuint8) (sigData & (vuint8) 0x0F));
  Detils_Lane.Detils_Lane.Distance_To_Right_Lane_0x669_1 = ((vuint8) (sigData >> 4));
  IlLeaveCriticalDistance_To_Right_Lane_0x669();
}


#endif

/* Handle:  418,Name:                Fixed_Yaw_0x650,Size: 32,UsedBytes:  4,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxFixed_Yaw_0x650(vuint32 sigData)
{
  IlEnterCriticalFixed_Yaw_0x650();
  Fixed_FOE.Fixed_FOE.Fixed_Yaw_0x650_0 = ((vuint8) sigData);
  Fixed_FOE.Fixed_FOE.Fixed_Yaw_0x650_1 = ((vuint8) (sigData >> 8));
  Fixed_FOE.Fixed_FOE.Fixed_Yaw_0x650_2 = ((vuint8) (sigData >> 16));
  Fixed_FOE.Fixed_FOE.Fixed_Yaw_0x650_3 = ((vuint8) (sigData >> 24));
  IlLeaveCriticalFixed_Yaw_0x650();
}


#endif

/* Handle:  419,Name:            Fixed_Horizon_0x650,Size: 32,UsedBytes:  4,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxFixed_Horizon_0x650(vuint32 sigData)
{
  IlEnterCriticalFixed_Horizon_0x650();
  Fixed_FOE.Fixed_FOE.Fixed_Horizon_0x650_0 = ((vuint8) sigData);
  Fixed_FOE.Fixed_FOE.Fixed_Horizon_0x650_1 = ((vuint8) (sigData >> 8));
  Fixed_FOE.Fixed_FOE.Fixed_Horizon_0x650_2 = ((vuint8) (sigData >> 16));
  Fixed_FOE.Fixed_FOE.Fixed_Horizon_0x650_3 = ((vuint8) (sigData >> 24));
  IlLeaveCriticalFixed_Horizon_0x650();
}


#endif

/* Handle:  420,Name:                     TIME_STAMP,Size: 64,UsedBytes:  8,SingleSignal */
#ifdef IL_ENABLE_TX
void IlPutTxTIME_STAMP(vuint8* pData)
{
  IlEnterCriticalTIME_STAMP();
  TIMESTAMP.TIMESTAMP.TIME_STAMP_0 = pData[0];
  TIMESTAMP.TIMESTAMP.TIME_STAMP_1 = pData[1];
  TIMESTAMP.TIMESTAMP.TIME_STAMP_2 = pData[2];
  TIMESTAMP.TIMESTAMP.TIME_STAMP_3 = pData[3];
  TIMESTAMP.TIMESTAMP.TIME_STAMP_4 = pData[4];
  TIMESTAMP.TIMESTAMP.TIME_STAMP_5 = pData[5];
  TIMESTAMP.TIMESTAMP.TIME_STAMP_6 = pData[6];
  TIMESTAMP.TIMESTAMP.TIME_STAMP_7 = pData[7];
  IlLeaveCriticalTIME_STAMP();
}


#endif



#if defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 CanTransmitHandle V_MEMROM2 IlTxIndirection[kIlNumberOfTxObjects] = 
{
  0 /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  1 /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  2 /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  3 /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  4 /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  5 /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  6 /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  7 /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  8 /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  9 /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  10 /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  11 /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  12 /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  13 /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  14 /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  15 /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  16 /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  17 /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  18 /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  19 /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  20 /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  21 /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  22 /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  23 /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  24 /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  25 /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  26 /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  27 /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  28 /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  29 /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  30 /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  31 /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  32 /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  33 /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  34 /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  35 /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  36 /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  37 /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  38 /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  39 /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  40 /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  41 /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  42 /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  43 /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  44 /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  45 /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  46 /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  47 /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  48 /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  49 /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  50 /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  51 /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  52 /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  53 /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  54 /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  55 /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  56 /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  57 /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  58 /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  59 /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  60 /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  61 /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  62 /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
#endif


/* -----------------------------------------------------------------------------
    &&&~ CAN handle to Il start stop handle
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX) && defined(C_ENABLE_CAN_CANCEL_NOTIFICATION)
V_MEMROM0 V_MEMROM1 IlStartStopHnd V_MEMROM2 IlCanHndToIlHnd[kIlCanNumberOfTxObjects] = 
{
  { 0, 1 } /* start - stop  ID: 0x0000077b, Next_lane_Right_P [BC] */, 
  { 1, 2 } /* start - stop  ID: 0x0000077a, Next_lane_Right_O [BC] */, 
  { 2, 3 } /* start - stop  ID: 0x00000779, Next_lane_Left_N [BC] */, 
  { 3, 4 } /* start - stop  ID: 0x00000778, Next_lane_Left_M [BC] */, 
  { 4, 5 } /* start - stop  ID: 0x00000777, Next_lane_Right_L [BC] */, 
  { 5, 6 } /* start - stop  ID: 0x00000776, Next_lane_Right_K [BC] */, 
  { 6, 7 } /* start - stop  ID: 0x00000775, Next_lane_Left_J [BC] */, 
  { 7, 8 } /* start - stop  ID: 0x00000774, Next_lane_Left_I [BC] */, 
  { 8, 9 } /* start - stop  ID: 0x00000773, Next_lane_Right_H [BC] */, 
  { 9, 10 } /* start - stop  ID: 0x00000772, Next_lane_Right_G [BC] */, 
  { 10, 11 } /* start - stop  ID: 0x00000771, Next_lane_Left_F [BC] */, 
  { 11, 12 } /* start - stop  ID: 0x00000770, Next_lane_Left_E [BC] */, 
  { 12, 13 } /* start - stop  ID: 0x0000076f, Next_lane_Right_D [BC] */, 
  { 13, 14 } /* start - stop  ID: 0x0000076e, Next_lane_Right_C [BC] */, 
  { 14, 15 } /* start - stop  ID: 0x0000076d, Next_lane_Left_B [BC] */, 
  { 15, 16 } /* start - stop  ID: 0x0000076c, Next_lane_Left_A [BC] */, 
  { 16, 17 } /* start - stop  ID: 0x0000076b, Numebr_of_next_lane [BC] */, 
  { 17, 18 } /* start - stop  ID: 0x0000076a, Reference_points [BC] */, 
  { 18, 19 } /* start - stop  ID: 0x00000769, LKA_right_lane_B [BC] */, 
  { 19, 20 } /* start - stop  ID: 0x00000768, LKA_right_lane_A [BC] */, 
  { 20, 21 } /* start - stop  ID: 0x00000767, LKA_left_lane_B [BC] */, 
  { 21, 22 } /* start - stop  ID: 0x00000766, LKA_left_lane_A [BC] */, 
  { 22, 23 } /* start - stop  ID: 0x00000760, Car_Info [BC] */, 
  { 23, 24 } /* start - stop  ID: 0x00000750, Obstacle_Data_X [BC] */, 
  { 24, 25 } /* start - stop  ID: 0x0000074f, Obstacle_Data_W [BC] */, 
  { 25, 26 } /* start - stop  ID: 0x0000074e, Obstacle_Data_V [BC] */, 
  { 26, 27 } /* start - stop  ID: 0x0000074d, Obstacle_Data_U [BC] */, 
  { 27, 28 } /* start - stop  ID: 0x0000074c, Obstacle_Data_T [BC] */, 
  { 28, 29 } /* start - stop  ID: 0x0000074b, Obstacle_Data_S [BC] */, 
  { 29, 30 } /* start - stop  ID: 0x0000074a, Obstacle_Data_R [BC] */, 
  { 30, 31 } /* start - stop  ID: 0x00000749, Obstacle_Data_Q [BC] */, 
  { 31, 32 } /* start - stop  ID: 0x00000748, Obstacle_Data_P [BC] */, 
  { 32, 33 } /* start - stop  ID: 0x00000747, Obstacle_Data_O [BC] */, 
  { 33, 34 } /* start - stop  ID: 0x00000746, Obstacle_Data_N [BC] */, 
  { 34, 35 } /* start - stop  ID: 0x00000745, Obstacle_Data_M [BC] */, 
  { 35, 36 } /* start - stop  ID: 0x00000744, Obstacle_Data_L [BC] */, 
  { 36, 37 } /* start - stop  ID: 0x00000743, Obstacle_Data_K [BC] */, 
  { 37, 38 } /* start - stop  ID: 0x00000742, Obstacle_Data_J [BC] */, 
  { 38, 39 } /* start - stop  ID: 0x00000741, Obstacle_Data_I [BC] */, 
  { 39, 40 } /* start - stop  ID: 0x00000740, Obstacle_Data_H [BC] */, 
  { 40, 41 } /* start - stop  ID: 0x0000073f, Obstacle_Data_G [BC] */, 
  { 41, 42 } /* start - stop  ID: 0x0000073e, Obstacle_Data_F [BC] */, 
  { 42, 43 } /* start - stop  ID: 0x0000073d, Obstacle_Data_E [BC] */, 
  { 43, 44 } /* start - stop  ID: 0x0000073c, Obstacle_Data_D [BC] */, 
  { 44, 45 } /* start - stop  ID: 0x0000073b, Obstacle_Data_C [BC] */, 
  { 45, 46 } /* start - stop  ID: 0x0000073a, Obstacle_Data_B [BC] */, 
  { 46, 47 } /* start - stop  ID: 0x00000739, Obstacle_Data_A [BC] */, 
  { 47, 48 } /* start - stop  ID: 0x00000738, Obstacle_Status [BC] */, 
  { 48, 49 } /* start - stop  ID: 0x00000737, Lane [BC] */, 
  { 49, 50 } /* start - stop  ID: 0x00000729, AHBC_Gradual [BC] */, 
  { 50, 51 } /* start - stop  ID: 0x00000728, AHBC_high_low_beam [BC] */, 
  { 51, 52 } /* start - stop  ID: 0x00000727, Sign_Type [BC] */, 
  { 52, 53 } /* start - stop  ID: 0x00000726, TSR_message_G [BC] */, 
  { 53, 54 } /* start - stop  ID: 0x00000725, TSR_message_F [BC] */, 
  { 54, 55 } /* start - stop  ID: 0x00000724, TSR_message_E [BC] */, 
  { 55, 56 } /* start - stop  ID: 0x00000723, TSR_message_D [BC] */, 
  { 56, 57 } /* start - stop  ID: 0x00000722, TSR_message_C [BC] */, 
  { 57, 58 } /* start - stop  ID: 0x00000721, TSR_message_B [BC] */, 
  { 58, 59 } /* start - stop  ID: 0x00000720, TSR_message_A [BC] */, 
  { 59, 60 } /* start - stop  ID: 0x00000700, C2_Display_and_warning [BC] */, 
  { 60, 61 } /* start - stop  ID: 0x00000669, Detils_Lane [BC] */, 
  { 61, 62 } /* start - stop  ID: 0x00000650, Fixed_FOE [BC] */, 
  { 62, 63 } /* start - stop  ID: 0x00000333, TIMESTAMP [BC] */
};
#endif




/* -----------------------------------------------------------------------------
    &&&~ TxTypes for interaction layer tx messages 
 ----------------------------------------------------------------------------- */

#if defined(IL_ENABLE_TX)
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 IlTxType[kIlNumberOfTxObjects] = 
{
  kTxSendCyclic /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  kTxSendCyclic /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  kTxSendCyclic /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  kTxSendCyclic /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  kTxSendCyclic /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  kTxSendCyclic /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  kTxSendCyclic /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  kTxSendCyclic /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  kTxSendCyclic /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  kTxSendCyclic /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  kTxSendCyclic /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  kTxSendCyclic /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  kTxSendCyclic /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  kTxSendCyclic /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  kTxSendCyclic /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  kTxSendCyclic /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  kTxSendCyclic /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  kTxSendCyclic /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  kTxSendCyclic /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  kTxSendCyclic /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  kTxSendCyclic /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  kTxSendCyclic /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  kTxSendCyclic /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  kTxSendCyclic /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  kTxSendCyclic /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  kTxSendCyclic /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  kTxSendCyclic /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  kTxSendCyclic /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  kTxSendCyclic /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  kTxSendCyclic /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  kTxSendCyclic /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  kTxSendCyclic /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  kTxSendCyclic /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  kTxSendCyclic /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  kTxSendCyclic /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  kTxSendCyclic /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  kTxSendCyclic /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  kTxSendCyclic /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  kTxSendCyclic /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  kTxSendCyclic /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  kTxSendCyclic /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  kTxSendCyclic /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  kTxSendCyclic /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  kTxSendCyclic /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  kTxSendCyclic /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  kTxSendCyclic /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  kTxSendCyclic /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  kTxSendCyclic /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  kTxSendCyclic /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  kTxSendCyclic /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  kTxSendCyclic /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  kTxSendCyclic /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  kTxSendCyclic /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  kTxSendCyclic /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  kTxSendCyclic /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  kTxSendCyclic /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  kTxSendCyclic /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  kTxSendCyclic /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  kTxSendCyclic /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  kTxSendCyclic /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  kTxSendCyclic /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  kTxSendCyclic /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  kTxSendCyclic /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
#endif




/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 304262406
      #error "The magic number of the generated file <D:\code\SocCode\linux\gen2\Geny\il_par.c> is different. Please check time and date of generated files!"
  #endif
#else
  #error "The magic number is not defined in the generated file <D:\code\SocCode\linux\gen2\Geny\il_par.c> "

#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

