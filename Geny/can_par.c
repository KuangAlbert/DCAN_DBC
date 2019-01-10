/* -----------------------------------------------------------------------------
  Filename:    can_par.c
  Description: Toolversion: 02.03.18.01.80.00.17.01.00.00
               
               Serial Number: CBD1800017
               Customer Info: Huizhou Desay SV Automotive Co., Ltd.
                              Package: CBD_Vector_SLP2
                              Micro: TDA2XXHG
                              Compiler: Texas Instruments 16.9.2
               
               
               Generator Fwk   : GENy 
               Generator Module: DrvCan__base
               
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

#define C_DRV_INTERNAL
#include "can_inc.h"
#include "can_par.h"
#include "v_inc.h"

/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 tCanTxId0 V_MEMROM2 CanTxId0[kCanNumberOfTxObjects] = 
{
  MK_STDID0(0x77Bu) /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  MK_STDID0(0x77Au) /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  MK_STDID0(0x779u) /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  MK_STDID0(0x778u) /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  MK_STDID0(0x777u) /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  MK_STDID0(0x776u) /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  MK_STDID0(0x775u) /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  MK_STDID0(0x774u) /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  MK_STDID0(0x773u) /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  MK_STDID0(0x772u) /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  MK_STDID0(0x771u) /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  MK_STDID0(0x770u) /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  MK_STDID0(0x76Fu) /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  MK_STDID0(0x76Eu) /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  MK_STDID0(0x76Du) /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  MK_STDID0(0x76Cu) /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  MK_STDID0(0x76Bu) /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  MK_STDID0(0x76Au) /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  MK_STDID0(0x769u) /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  MK_STDID0(0x768u) /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  MK_STDID0(0x767u) /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  MK_STDID0(0x766u) /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  MK_STDID0(0x760u) /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  MK_STDID0(0x750u) /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  MK_STDID0(0x74Fu) /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  MK_STDID0(0x74Eu) /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  MK_STDID0(0x74Du) /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  MK_STDID0(0x74Cu) /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  MK_STDID0(0x74Bu) /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  MK_STDID0(0x74Au) /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  MK_STDID0(0x749u) /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  MK_STDID0(0x748u) /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  MK_STDID0(0x747u) /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  MK_STDID0(0x746u) /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  MK_STDID0(0x745u) /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  MK_STDID0(0x744u) /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  MK_STDID0(0x743u) /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  MK_STDID0(0x742u) /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  MK_STDID0(0x741u) /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  MK_STDID0(0x740u) /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  MK_STDID0(0x73Fu) /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  MK_STDID0(0x73Eu) /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  MK_STDID0(0x73Du) /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  MK_STDID0(0x73Cu) /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  MK_STDID0(0x73Bu) /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  MK_STDID0(0x73Au) /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  MK_STDID0(0x739u) /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  MK_STDID0(0x738u) /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  MK_STDID0(0x737u) /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  MK_STDID0(0x729u) /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  MK_STDID0(0x728u) /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  MK_STDID0(0x727u) /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  MK_STDID0(0x726u) /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  MK_STDID0(0x725u) /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  MK_STDID0(0x724u) /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  MK_STDID0(0x723u) /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  MK_STDID0(0x722u) /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  MK_STDID0(0x721u) /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  MK_STDID0(0x720u) /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  MK_STDID0(0x700u) /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  MK_STDID0(0x669u) /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  MK_STDID0(0x650u) /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  MK_STDID0(0x333u) /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanTxDLC[kCanNumberOfTxObjects] = 
{
  MK_TX_DLC(4) /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  MK_TX_DLC(4) /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  MK_TX_DLC(4) /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  MK_TX_DLC(4) /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  MK_TX_DLC(4) /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  MK_TX_DLC(4) /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  MK_TX_DLC(4) /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  MK_TX_DLC(4) /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  MK_TX_DLC(1) /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  MK_TX_DLC(4) /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  MK_TX_DLC(4) /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  MK_TX_DLC(8) /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  MK_TX_DLC(6) /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  MK_TX_DLC(7) /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  MK_TX_DLC(3) /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  MK_TX_DLC(6) /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  MK_TX_DLC(6) /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  MK_TX_DLC(6) /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  MK_TX_DLC(6) /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  MK_TX_DLC(6) /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  MK_TX_DLC(6) /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  MK_TX_DLC(6) /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  MK_TX_DLC(8) /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
/* ROM CATEGORY 1 END */


#ifdef C_ENABLE_COPY_TX_DATA
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 TxDataPtr V_MEMROM2 CanTxDataPtr[kCanNumberOfTxObjects] = 
{
  (TxDataPtr) Next_lane_Right_P._c /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  (TxDataPtr) Next_lane_Right_O._c /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  (TxDataPtr) Next_lane_Left_N._c /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  (TxDataPtr) Next_lane_Left_M._c /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  (TxDataPtr) Next_lane_Right_L._c /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  (TxDataPtr) Next_lane_Right_K._c /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  (TxDataPtr) Next_lane_Left_J._c /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  (TxDataPtr) Next_lane_Left_I._c /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  (TxDataPtr) Next_lane_Right_H._c /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  (TxDataPtr) Next_lane_Right_G._c /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  (TxDataPtr) Next_lane_Left_F._c /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  (TxDataPtr) Next_lane_Left_E._c /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  (TxDataPtr) Next_lane_Right_D._c /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  (TxDataPtr) Next_lane_Right_C._c /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  (TxDataPtr) Next_lane_Left_B._c /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  (TxDataPtr) Next_lane_Left_A._c /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  (TxDataPtr) Numebr_of_next_lane._c /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  (TxDataPtr) Reference_points._c /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  (TxDataPtr) LKA_right_lane_B._c /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  (TxDataPtr) LKA_right_lane_A._c /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  (TxDataPtr) LKA_left_lane_B._c /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  (TxDataPtr) LKA_left_lane_A._c /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  (TxDataPtr) Car_Info._c /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  (TxDataPtr) Obstacle_Data_X._c /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  (TxDataPtr) Obstacle_Data_W._c /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  (TxDataPtr) Obstacle_Data_V._c /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  (TxDataPtr) Obstacle_Data_U._c /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  (TxDataPtr) Obstacle_Data_T._c /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  (TxDataPtr) Obstacle_Data_S._c /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  (TxDataPtr) Obstacle_Data_R._c /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  (TxDataPtr) Obstacle_Data_Q._c /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  (TxDataPtr) Obstacle_Data_P._c /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  (TxDataPtr) Obstacle_Data_O._c /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  (TxDataPtr) Obstacle_Data_N._c /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  (TxDataPtr) Obstacle_Data_M._c /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  (TxDataPtr) Obstacle_Data_L._c /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  (TxDataPtr) Obstacle_Data_K._c /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  (TxDataPtr) Obstacle_Data_J._c /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  (TxDataPtr) Obstacle_Data_I._c /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  (TxDataPtr) Obstacle_Data_H._c /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  (TxDataPtr) Obstacle_Data_G._c /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  (TxDataPtr) Obstacle_Data_F._c /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  (TxDataPtr) Obstacle_Data_E._c /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  (TxDataPtr) Obstacle_Data_D._c /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  (TxDataPtr) Obstacle_Data_C._c /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  (TxDataPtr) Obstacle_Data_B._c /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  (TxDataPtr) Obstacle_Data_A._c /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  (TxDataPtr) Obstacle_Status._c /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  (TxDataPtr) Lane._c /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  (TxDataPtr) AHBC_Gradual._c /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  (TxDataPtr) AHBC_high_low_beam._c /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  (TxDataPtr) Sign_Type._c /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  (TxDataPtr) TSR_message_G._c /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  (TxDataPtr) TSR_message_F._c /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  (TxDataPtr) TSR_message_E._c /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  (TxDataPtr) TSR_message_D._c /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  (TxDataPtr) TSR_message_C._c /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  (TxDataPtr) TSR_message_B._c /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  (TxDataPtr) TSR_message_A._c /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  (TxDataPtr) C2_Display_and_warning._c /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  (TxDataPtr) Detils_Lane._c /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  (TxDataPtr) Fixed_FOE._c /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  (TxDataPtr) TIMESTAMP._c /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_PRETRANSMIT_FCT
/* ROM CATEGORY 1 START */
/* PRQA  S 1334 QAC_Can_1334 */ /* MD_Can_1334 */
V_MEMROM0 V_MEMROM1 ApplPreTransmitFct V_MEMROM2 CanTxApplPreTransmitPtr[kCanNumberOfTxObjects] = 
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
/* PRQA  L:QAC_Can_1334 */

/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_CONFIRMATION_FCT
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 ApplConfirmationFct V_MEMROM2 CanTxApplConfirmationPtr[kCanNumberOfTxObjects] = 
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
/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_PART_OFFLINE
/* ROM CATEGORY 2 START */

V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanTxSendMask[kCanNumberOfTxObjects] = 
{
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  (vuint8) C_SEND_GRP_NONE /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};

/* ROM CATEGORY 2 END */

#endif


#ifdef C_ENABLE_CONFIRMATION_FLAG
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanConfirmationOffset[kCanNumberOfTxObjects] = 
{
  0 /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  0 /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  0 /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  0 /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  0 /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  0 /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  0 /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  0 /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  1 /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  1 /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  1 /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  1 /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  1 /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  1 /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  1 /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  1 /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  2 /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  2 /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  2 /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  2 /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  2 /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  2 /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  2 /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  2 /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  3 /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  3 /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  3 /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  3 /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  3 /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  3 /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  3 /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  3 /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  4 /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  4 /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  4 /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  4 /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  4 /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  4 /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  4 /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  4 /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  5 /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  5 /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  5 /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  5 /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  5 /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  5 /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  5 /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  5 /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  6 /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  6 /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  6 /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  6 /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  6 /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  6 /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  6 /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  6 /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  7 /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  7 /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  7 /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  7 /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  7 /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  7 /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  7 /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanConfirmationMask[kCanNumberOfTxObjects] = 
{
  0x01u /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  0x02u /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  0x04u /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  0x08u /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  0x10u /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  0x20u /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  0x40u /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  0x80u /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  0x01u /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  0x02u /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  0x04u /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  0x08u /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  0x10u /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  0x20u /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  0x40u /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  0x80u /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  0x01u /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  0x02u /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  0x04u /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  0x08u /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  0x10u /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  0x20u /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  0x40u /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  0x80u /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  0x01u /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  0x02u /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  0x04u /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  0x08u /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  0x10u /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  0x20u /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  0x40u /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  0x80u /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  0x01u /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  0x02u /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  0x04u /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  0x08u /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  0x10u /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  0x20u /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  0x40u /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  0x80u /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  0x01u /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  0x02u /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  0x04u /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  0x08u /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  0x10u /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  0x20u /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  0x40u /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  0x80u /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  0x01u /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  0x02u /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  0x04u /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  0x08u /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  0x10u /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  0x20u /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  0x40u /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  0x80u /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  0x01u /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  0x02u /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  0x04u /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  0x08u /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  0x10u /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  0x20u /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  0x40u /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
/* ROM CATEGORY 1 END */


#endif




/* Id table depending on search algorithm */
/* Linear search */
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 tCanRxId0 V_MEMROM2 CanRxId0[kCanNumberOfRxObjects] = 
{
  MK_STDID0(0x508u) /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  MK_STDID0(0x507u) /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  MK_STDID0(0x506u) /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  MK_STDID0(0x505u) /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  MK_STDID0(0x504u) /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  MK_STDID0(0x503u) /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  MK_STDID0(0x502u) /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  MK_STDID0(0x501u) /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  MK_STDID0(0x500u) /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  MK_STDID0(0x4E3u) /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  MK_STDID0(0x4E2u) /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  MK_STDID0(0x4E1u) /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  MK_STDID0(0x111u) /* ID: 0x00000111, Handle: 73, FUNCTION_Switch [BC] */, 
  MK_STDID0(0x5E8u) /* ID: 0x000005e8, Handle: 0, ESR_Status9 [FC] */, 
  MK_STDID0(0x5E7u) /* ID: 0x000005e7, Handle: 1, ESR_Status8 [FC] */, 
  MK_STDID0(0x5E6u) /* ID: 0x000005e6, Handle: 2, ESR_Status7 [FC] */, 
  MK_STDID0(0x5E5u) /* ID: 0x000005e5, Handle: 3, ESR_Status6 [FC] */, 
  MK_STDID0(0x5E4u) /* ID: 0x000005e4, Handle: 4, ESR_Status5 [FC] */, 
  MK_STDID0(0x53Fu) /* ID: 0x0000053f, Handle: 5, ESR_Track64 [FC] */, 
  MK_STDID0(0x53Eu) /* ID: 0x0000053e, Handle: 6, ESR_Track63 [FC] */, 
  MK_STDID0(0x53Du) /* ID: 0x0000053d, Handle: 7, ESR_Track62 [FC] */, 
  MK_STDID0(0x53Cu) /* ID: 0x0000053c, Handle: 8, ESR_Track61 [FC] */, 
  MK_STDID0(0x53Bu) /* ID: 0x0000053b, Handle: 9, ESR_Track60 [FC] */, 
  MK_STDID0(0x53Au) /* ID: 0x0000053a, Handle: 10, ESR_Track59 [FC] */, 
  MK_STDID0(0x539u) /* ID: 0x00000539, Handle: 11, ESR_Track58 [FC] */, 
  MK_STDID0(0x538u) /* ID: 0x00000538, Handle: 12, ESR_Track57 [FC] */, 
  MK_STDID0(0x537u) /* ID: 0x00000537, Handle: 13, ESR_Track56 [FC] */, 
  MK_STDID0(0x536u) /* ID: 0x00000536, Handle: 14, ESR_Track55 [FC] */, 
  MK_STDID0(0x535u) /* ID: 0x00000535, Handle: 15, ESR_Track54 [FC] */, 
  MK_STDID0(0x534u) /* ID: 0x00000534, Handle: 16, ESR_Track53 [FC] */, 
  MK_STDID0(0x533u) /* ID: 0x00000533, Handle: 17, ESR_Track52 [FC] */, 
  MK_STDID0(0x532u) /* ID: 0x00000532, Handle: 18, ESR_Track51 [FC] */, 
  MK_STDID0(0x531u) /* ID: 0x00000531, Handle: 19, ESR_Track50 [FC] */, 
  MK_STDID0(0x530u) /* ID: 0x00000530, Handle: 20, ESR_Track49 [FC] */, 
  MK_STDID0(0x52Fu) /* ID: 0x0000052f, Handle: 21, ESR_Track48 [FC] */, 
  MK_STDID0(0x52Eu) /* ID: 0x0000052e, Handle: 22, ESR_Track47 [FC] */, 
  MK_STDID0(0x52Du) /* ID: 0x0000052d, Handle: 23, ESR_Track46 [FC] */, 
  MK_STDID0(0x52Cu) /* ID: 0x0000052c, Handle: 24, ESR_Track45 [FC] */, 
  MK_STDID0(0x52Bu) /* ID: 0x0000052b, Handle: 25, ESR_Track44 [FC] */, 
  MK_STDID0(0x52Au) /* ID: 0x0000052a, Handle: 26, ESR_Track43 [FC] */, 
  MK_STDID0(0x529u) /* ID: 0x00000529, Handle: 27, ESR_Track42 [FC] */, 
  MK_STDID0(0x528u) /* ID: 0x00000528, Handle: 28, ESR_Track41 [FC] */, 
  MK_STDID0(0x527u) /* ID: 0x00000527, Handle: 29, ESR_Track40 [FC] */, 
  MK_STDID0(0x526u) /* ID: 0x00000526, Handle: 30, ESR_Track39 [FC] */, 
  MK_STDID0(0x525u) /* ID: 0x00000525, Handle: 31, ESR_Track38 [FC] */, 
  MK_STDID0(0x524u) /* ID: 0x00000524, Handle: 32, ESR_Track37 [FC] */, 
  MK_STDID0(0x523u) /* ID: 0x00000523, Handle: 33, ESR_Track36 [FC] */, 
  MK_STDID0(0x522u) /* ID: 0x00000522, Handle: 34, ESR_Track35 [FC] */, 
  MK_STDID0(0x521u) /* ID: 0x00000521, Handle: 35, ESR_Track34 [FC] */, 
  MK_STDID0(0x520u) /* ID: 0x00000520, Handle: 36, ESR_Track33 [FC] */, 
  MK_STDID0(0x51Fu) /* ID: 0x0000051f, Handle: 37, ESR_Track32 [FC] */, 
  MK_STDID0(0x51Eu) /* ID: 0x0000051e, Handle: 38, ESR_Track31 [FC] */, 
  MK_STDID0(0x51Du) /* ID: 0x0000051d, Handle: 39, ESR_Track30 [FC] */, 
  MK_STDID0(0x51Cu) /* ID: 0x0000051c, Handle: 40, ESR_Track29 [FC] */, 
  MK_STDID0(0x51Bu) /* ID: 0x0000051b, Handle: 41, ESR_Track28 [FC] */, 
  MK_STDID0(0x51Au) /* ID: 0x0000051a, Handle: 42, ESR_Track27 [FC] */, 
  MK_STDID0(0x519u) /* ID: 0x00000519, Handle: 43, ESR_Track26 [FC] */, 
  MK_STDID0(0x518u) /* ID: 0x00000518, Handle: 44, ESR_Track25 [FC] */, 
  MK_STDID0(0x517u) /* ID: 0x00000517, Handle: 45, ESR_Track24 [FC] */, 
  MK_STDID0(0x516u) /* ID: 0x00000516, Handle: 46, ESR_Track23 [FC] */, 
  MK_STDID0(0x515u) /* ID: 0x00000515, Handle: 47, ESR_Track22 [FC] */, 
  MK_STDID0(0x514u) /* ID: 0x00000514, Handle: 48, ESR_Track21 [FC] */, 
  MK_STDID0(0x513u) /* ID: 0x00000513, Handle: 49, ESR_Track20 [FC] */, 
  MK_STDID0(0x512u) /* ID: 0x00000512, Handle: 50, ESR_Track19 [FC] */, 
  MK_STDID0(0x511u) /* ID: 0x00000511, Handle: 51, ESR_Track18 [FC] */, 
  MK_STDID0(0x510u) /* ID: 0x00000510, Handle: 52, ESR_Track17 [FC] */, 
  MK_STDID0(0x50Fu) /* ID: 0x0000050f, Handle: 53, ESR_Track16 [FC] */, 
  MK_STDID0(0x50Eu) /* ID: 0x0000050e, Handle: 54, ESR_Track15 [FC] */, 
  MK_STDID0(0x50Du) /* ID: 0x0000050d, Handle: 55, ESR_Track14 [FC] */, 
  MK_STDID0(0x50Cu) /* ID: 0x0000050c, Handle: 56, ESR_Track13 [FC] */, 
  MK_STDID0(0x50Bu) /* ID: 0x0000050b, Handle: 57, ESR_Track12 [FC] */, 
  MK_STDID0(0x50Au) /* ID: 0x0000050a, Handle: 58, ESR_Track11 [FC] */, 
  MK_STDID0(0x509u) /* ID: 0x00000509, Handle: 59, ESR_Track10 [FC] */, 
  MK_STDID0(0x4E0u) /* ID: 0x000004e0, Handle: 72, ESR_Status1 [FC] */
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 CanReceiveHandle V_MEMROM2 CanRxMsgIndirection[kCanNumberOfRxObjects] = 
{
  60 /* ID: 0x00000508, Handle: 60, ESR_Track09 */, 
  61 /* ID: 0x00000507, Handle: 61, ESR_Track08 */, 
  62 /* ID: 0x00000506, Handle: 62, ESR_Track07 */, 
  63 /* ID: 0x00000505, Handle: 63, ESR_Track06 */, 
  64 /* ID: 0x00000504, Handle: 64, ESR_Track05 */, 
  65 /* ID: 0x00000503, Handle: 65, ESR_Track04 */, 
  66 /* ID: 0x00000502, Handle: 66, ESR_Track03 */, 
  67 /* ID: 0x00000501, Handle: 67, ESR_Track02 */, 
  68 /* ID: 0x00000500, Handle: 68, ESR_Track01 */, 
  69 /* ID: 0x000004e3, Handle: 69, ESR_Status4 */, 
  70 /* ID: 0x000004e2, Handle: 70, ESR_Status3 */, 
  71 /* ID: 0x000004e1, Handle: 71, ESR_Status2 */, 
  73 /* ID: 0x00000111, Handle: 73, FUNCTION_Switch */, 
  0 /* ID: 0x000005e8, Handle: 0, ESR_Status9 */, 
  1 /* ID: 0x000005e7, Handle: 1, ESR_Status8 */, 
  2 /* ID: 0x000005e6, Handle: 2, ESR_Status7 */, 
  3 /* ID: 0x000005e5, Handle: 3, ESR_Status6 */, 
  4 /* ID: 0x000005e4, Handle: 4, ESR_Status5 */, 
  5 /* ID: 0x0000053f, Handle: 5, ESR_Track64 */, 
  6 /* ID: 0x0000053e, Handle: 6, ESR_Track63 */, 
  7 /* ID: 0x0000053d, Handle: 7, ESR_Track62 */, 
  8 /* ID: 0x0000053c, Handle: 8, ESR_Track61 */, 
  9 /* ID: 0x0000053b, Handle: 9, ESR_Track60 */, 
  10 /* ID: 0x0000053a, Handle: 10, ESR_Track59 */, 
  11 /* ID: 0x00000539, Handle: 11, ESR_Track58 */, 
  12 /* ID: 0x00000538, Handle: 12, ESR_Track57 */, 
  13 /* ID: 0x00000537, Handle: 13, ESR_Track56 */, 
  14 /* ID: 0x00000536, Handle: 14, ESR_Track55 */, 
  15 /* ID: 0x00000535, Handle: 15, ESR_Track54 */, 
  16 /* ID: 0x00000534, Handle: 16, ESR_Track53 */, 
  17 /* ID: 0x00000533, Handle: 17, ESR_Track52 */, 
  18 /* ID: 0x00000532, Handle: 18, ESR_Track51 */, 
  19 /* ID: 0x00000531, Handle: 19, ESR_Track50 */, 
  20 /* ID: 0x00000530, Handle: 20, ESR_Track49 */, 
  21 /* ID: 0x0000052f, Handle: 21, ESR_Track48 */, 
  22 /* ID: 0x0000052e, Handle: 22, ESR_Track47 */, 
  23 /* ID: 0x0000052d, Handle: 23, ESR_Track46 */, 
  24 /* ID: 0x0000052c, Handle: 24, ESR_Track45 */, 
  25 /* ID: 0x0000052b, Handle: 25, ESR_Track44 */, 
  26 /* ID: 0x0000052a, Handle: 26, ESR_Track43 */, 
  27 /* ID: 0x00000529, Handle: 27, ESR_Track42 */, 
  28 /* ID: 0x00000528, Handle: 28, ESR_Track41 */, 
  29 /* ID: 0x00000527, Handle: 29, ESR_Track40 */, 
  30 /* ID: 0x00000526, Handle: 30, ESR_Track39 */, 
  31 /* ID: 0x00000525, Handle: 31, ESR_Track38 */, 
  32 /* ID: 0x00000524, Handle: 32, ESR_Track37 */, 
  33 /* ID: 0x00000523, Handle: 33, ESR_Track36 */, 
  34 /* ID: 0x00000522, Handle: 34, ESR_Track35 */, 
  35 /* ID: 0x00000521, Handle: 35, ESR_Track34 */, 
  36 /* ID: 0x00000520, Handle: 36, ESR_Track33 */, 
  37 /* ID: 0x0000051f, Handle: 37, ESR_Track32 */, 
  38 /* ID: 0x0000051e, Handle: 38, ESR_Track31 */, 
  39 /* ID: 0x0000051d, Handle: 39, ESR_Track30 */, 
  40 /* ID: 0x0000051c, Handle: 40, ESR_Track29 */, 
  41 /* ID: 0x0000051b, Handle: 41, ESR_Track28 */, 
  42 /* ID: 0x0000051a, Handle: 42, ESR_Track27 */, 
  43 /* ID: 0x00000519, Handle: 43, ESR_Track26 */, 
  44 /* ID: 0x00000518, Handle: 44, ESR_Track25 */, 
  45 /* ID: 0x00000517, Handle: 45, ESR_Track24 */, 
  46 /* ID: 0x00000516, Handle: 46, ESR_Track23 */, 
  47 /* ID: 0x00000515, Handle: 47, ESR_Track22 */, 
  48 /* ID: 0x00000514, Handle: 48, ESR_Track21 */, 
  49 /* ID: 0x00000513, Handle: 49, ESR_Track20 */, 
  50 /* ID: 0x00000512, Handle: 50, ESR_Track19 */, 
  51 /* ID: 0x00000511, Handle: 51, ESR_Track18 */, 
  52 /* ID: 0x00000510, Handle: 52, ESR_Track17 */, 
  53 /* ID: 0x0000050f, Handle: 53, ESR_Track16 */, 
  54 /* ID: 0x0000050e, Handle: 54, ESR_Track15 */, 
  55 /* ID: 0x0000050d, Handle: 55, ESR_Track14 */, 
  56 /* ID: 0x0000050c, Handle: 56, ESR_Track13 */, 
  57 /* ID: 0x0000050b, Handle: 57, ESR_Track12 */, 
  58 /* ID: 0x0000050a, Handle: 58, ESR_Track11 */, 
  59 /* ID: 0x00000509, Handle: 59, ESR_Track10 */, 
  72 /* ID: 0x000004e0, Handle: 72, ESR_Status1 */
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanRxDataLen[kCanNumberOfRxObjects] = 
{
  8 /* ID: 0x000005e8, Handle: 0, ESR_Status9 [FC] */, 
  8 /* ID: 0x000005e7, Handle: 1, ESR_Status8 [FC] */, 
  8 /* ID: 0x000005e6, Handle: 2, ESR_Status7 [FC] */, 
  8 /* ID: 0x000005e5, Handle: 3, ESR_Status6 [FC] */, 
  8 /* ID: 0x000005e4, Handle: 4, ESR_Status5 [FC] */, 
  8 /* ID: 0x0000053f, Handle: 5, ESR_Track64 [FC] */, 
  8 /* ID: 0x0000053e, Handle: 6, ESR_Track63 [FC] */, 
  8 /* ID: 0x0000053d, Handle: 7, ESR_Track62 [FC] */, 
  8 /* ID: 0x0000053c, Handle: 8, ESR_Track61 [FC] */, 
  8 /* ID: 0x0000053b, Handle: 9, ESR_Track60 [FC] */, 
  8 /* ID: 0x0000053a, Handle: 10, ESR_Track59 [FC] */, 
  8 /* ID: 0x00000539, Handle: 11, ESR_Track58 [FC] */, 
  8 /* ID: 0x00000538, Handle: 12, ESR_Track57 [FC] */, 
  8 /* ID: 0x00000537, Handle: 13, ESR_Track56 [FC] */, 
  8 /* ID: 0x00000536, Handle: 14, ESR_Track55 [FC] */, 
  8 /* ID: 0x00000535, Handle: 15, ESR_Track54 [FC] */, 
  8 /* ID: 0x00000534, Handle: 16, ESR_Track53 [FC] */, 
  8 /* ID: 0x00000533, Handle: 17, ESR_Track52 [FC] */, 
  8 /* ID: 0x00000532, Handle: 18, ESR_Track51 [FC] */, 
  8 /* ID: 0x00000531, Handle: 19, ESR_Track50 [FC] */, 
  8 /* ID: 0x00000530, Handle: 20, ESR_Track49 [FC] */, 
  8 /* ID: 0x0000052f, Handle: 21, ESR_Track48 [FC] */, 
  8 /* ID: 0x0000052e, Handle: 22, ESR_Track47 [FC] */, 
  8 /* ID: 0x0000052d, Handle: 23, ESR_Track46 [FC] */, 
  8 /* ID: 0x0000052c, Handle: 24, ESR_Track45 [FC] */, 
  8 /* ID: 0x0000052b, Handle: 25, ESR_Track44 [FC] */, 
  8 /* ID: 0x0000052a, Handle: 26, ESR_Track43 [FC] */, 
  8 /* ID: 0x00000529, Handle: 27, ESR_Track42 [FC] */, 
  8 /* ID: 0x00000528, Handle: 28, ESR_Track41 [FC] */, 
  8 /* ID: 0x00000527, Handle: 29, ESR_Track40 [FC] */, 
  8 /* ID: 0x00000526, Handle: 30, ESR_Track39 [FC] */, 
  8 /* ID: 0x00000525, Handle: 31, ESR_Track38 [FC] */, 
  8 /* ID: 0x00000524, Handle: 32, ESR_Track37 [FC] */, 
  8 /* ID: 0x00000523, Handle: 33, ESR_Track36 [FC] */, 
  8 /* ID: 0x00000522, Handle: 34, ESR_Track35 [FC] */, 
  8 /* ID: 0x00000521, Handle: 35, ESR_Track34 [FC] */, 
  8 /* ID: 0x00000520, Handle: 36, ESR_Track33 [FC] */, 
  8 /* ID: 0x0000051f, Handle: 37, ESR_Track32 [FC] */, 
  8 /* ID: 0x0000051e, Handle: 38, ESR_Track31 [FC] */, 
  8 /* ID: 0x0000051d, Handle: 39, ESR_Track30 [FC] */, 
  8 /* ID: 0x0000051c, Handle: 40, ESR_Track29 [FC] */, 
  8 /* ID: 0x0000051b, Handle: 41, ESR_Track28 [FC] */, 
  8 /* ID: 0x0000051a, Handle: 42, ESR_Track27 [FC] */, 
  8 /* ID: 0x00000519, Handle: 43, ESR_Track26 [FC] */, 
  8 /* ID: 0x00000518, Handle: 44, ESR_Track25 [FC] */, 
  8 /* ID: 0x00000517, Handle: 45, ESR_Track24 [FC] */, 
  8 /* ID: 0x00000516, Handle: 46, ESR_Track23 [FC] */, 
  8 /* ID: 0x00000515, Handle: 47, ESR_Track22 [FC] */, 
  8 /* ID: 0x00000514, Handle: 48, ESR_Track21 [FC] */, 
  8 /* ID: 0x00000513, Handle: 49, ESR_Track20 [FC] */, 
  8 /* ID: 0x00000512, Handle: 50, ESR_Track19 [FC] */, 
  8 /* ID: 0x00000511, Handle: 51, ESR_Track18 [FC] */, 
  8 /* ID: 0x00000510, Handle: 52, ESR_Track17 [FC] */, 
  8 /* ID: 0x0000050f, Handle: 53, ESR_Track16 [FC] */, 
  8 /* ID: 0x0000050e, Handle: 54, ESR_Track15 [FC] */, 
  8 /* ID: 0x0000050d, Handle: 55, ESR_Track14 [FC] */, 
  8 /* ID: 0x0000050c, Handle: 56, ESR_Track13 [FC] */, 
  8 /* ID: 0x0000050b, Handle: 57, ESR_Track12 [FC] */, 
  8 /* ID: 0x0000050a, Handle: 58, ESR_Track11 [FC] */, 
  8 /* ID: 0x00000509, Handle: 59, ESR_Track10 [FC] */, 
  8 /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  8 /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  8 /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  8 /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  8 /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  8 /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  8 /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  8 /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  8 /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  8 /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  8 /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  8 /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  8 /* ID: 0x000004e0, Handle: 72, ESR_Status1 [FC] */, 
  2 /* ID: 0x00000111, Handle: 73, FUNCTION_Switch [BC] */
};
/* ROM CATEGORY 1 END */


#ifdef C_ENABLE_COPY_RX_DATA
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 RxDataPtr V_MEMROM2 CanRxDataPtr[kCanNumberOfRxObjects] = 
{
  (RxDataPtr) ESR_Status9._c /* ID: 0x000005e8, Handle: 0, ESR_Status9 [FC] */, 
  (RxDataPtr) ESR_Status8._c /* ID: 0x000005e7, Handle: 1, ESR_Status8 [FC] */, 
  (RxDataPtr) ESR_Status7._c /* ID: 0x000005e6, Handle: 2, ESR_Status7 [FC] */, 
  (RxDataPtr) ESR_Status6._c /* ID: 0x000005e5, Handle: 3, ESR_Status6 [FC] */, 
  (RxDataPtr) ESR_Status5._c /* ID: 0x000005e4, Handle: 4, ESR_Status5 [FC] */, 
  (RxDataPtr) ESR_Track64._c /* ID: 0x0000053f, Handle: 5, ESR_Track64 [FC] */, 
  (RxDataPtr) ESR_Track63._c /* ID: 0x0000053e, Handle: 6, ESR_Track63 [FC] */, 
  (RxDataPtr) ESR_Track62._c /* ID: 0x0000053d, Handle: 7, ESR_Track62 [FC] */, 
  (RxDataPtr) ESR_Track61._c /* ID: 0x0000053c, Handle: 8, ESR_Track61 [FC] */, 
  (RxDataPtr) ESR_Track60._c /* ID: 0x0000053b, Handle: 9, ESR_Track60 [FC] */, 
  (RxDataPtr) ESR_Track59._c /* ID: 0x0000053a, Handle: 10, ESR_Track59 [FC] */, 
  (RxDataPtr) ESR_Track58._c /* ID: 0x00000539, Handle: 11, ESR_Track58 [FC] */, 
  (RxDataPtr) ESR_Track57._c /* ID: 0x00000538, Handle: 12, ESR_Track57 [FC] */, 
  (RxDataPtr) ESR_Track56._c /* ID: 0x00000537, Handle: 13, ESR_Track56 [FC] */, 
  (RxDataPtr) ESR_Track55._c /* ID: 0x00000536, Handle: 14, ESR_Track55 [FC] */, 
  (RxDataPtr) ESR_Track54._c /* ID: 0x00000535, Handle: 15, ESR_Track54 [FC] */, 
  (RxDataPtr) ESR_Track53._c /* ID: 0x00000534, Handle: 16, ESR_Track53 [FC] */, 
  (RxDataPtr) ESR_Track52._c /* ID: 0x00000533, Handle: 17, ESR_Track52 [FC] */, 
  (RxDataPtr) ESR_Track51._c /* ID: 0x00000532, Handle: 18, ESR_Track51 [FC] */, 
  (RxDataPtr) ESR_Track50._c /* ID: 0x00000531, Handle: 19, ESR_Track50 [FC] */, 
  (RxDataPtr) ESR_Track49._c /* ID: 0x00000530, Handle: 20, ESR_Track49 [FC] */, 
  (RxDataPtr) ESR_Track48._c /* ID: 0x0000052f, Handle: 21, ESR_Track48 [FC] */, 
  (RxDataPtr) ESR_Track47._c /* ID: 0x0000052e, Handle: 22, ESR_Track47 [FC] */, 
  (RxDataPtr) ESR_Track46._c /* ID: 0x0000052d, Handle: 23, ESR_Track46 [FC] */, 
  (RxDataPtr) ESR_Track45._c /* ID: 0x0000052c, Handle: 24, ESR_Track45 [FC] */, 
  (RxDataPtr) ESR_Track44._c /* ID: 0x0000052b, Handle: 25, ESR_Track44 [FC] */, 
  (RxDataPtr) ESR_Track43._c /* ID: 0x0000052a, Handle: 26, ESR_Track43 [FC] */, 
  (RxDataPtr) ESR_Track42._c /* ID: 0x00000529, Handle: 27, ESR_Track42 [FC] */, 
  (RxDataPtr) ESR_Track41._c /* ID: 0x00000528, Handle: 28, ESR_Track41 [FC] */, 
  (RxDataPtr) ESR_Track40._c /* ID: 0x00000527, Handle: 29, ESR_Track40 [FC] */, 
  (RxDataPtr) ESR_Track39._c /* ID: 0x00000526, Handle: 30, ESR_Track39 [FC] */, 
  (RxDataPtr) ESR_Track38._c /* ID: 0x00000525, Handle: 31, ESR_Track38 [FC] */, 
  (RxDataPtr) ESR_Track37._c /* ID: 0x00000524, Handle: 32, ESR_Track37 [FC] */, 
  (RxDataPtr) ESR_Track36._c /* ID: 0x00000523, Handle: 33, ESR_Track36 [FC] */, 
  (RxDataPtr) ESR_Track35._c /* ID: 0x00000522, Handle: 34, ESR_Track35 [FC] */, 
  (RxDataPtr) ESR_Track34._c /* ID: 0x00000521, Handle: 35, ESR_Track34 [FC] */, 
  (RxDataPtr) ESR_Track33._c /* ID: 0x00000520, Handle: 36, ESR_Track33 [FC] */, 
  (RxDataPtr) ESR_Track32._c /* ID: 0x0000051f, Handle: 37, ESR_Track32 [FC] */, 
  (RxDataPtr) ESR_Track31._c /* ID: 0x0000051e, Handle: 38, ESR_Track31 [FC] */, 
  (RxDataPtr) ESR_Track30._c /* ID: 0x0000051d, Handle: 39, ESR_Track30 [FC] */, 
  (RxDataPtr) ESR_Track29._c /* ID: 0x0000051c, Handle: 40, ESR_Track29 [FC] */, 
  (RxDataPtr) ESR_Track28._c /* ID: 0x0000051b, Handle: 41, ESR_Track28 [FC] */, 
  (RxDataPtr) ESR_Track27._c /* ID: 0x0000051a, Handle: 42, ESR_Track27 [FC] */, 
  (RxDataPtr) ESR_Track26._c /* ID: 0x00000519, Handle: 43, ESR_Track26 [FC] */, 
  (RxDataPtr) ESR_Track25._c /* ID: 0x00000518, Handle: 44, ESR_Track25 [FC] */, 
  (RxDataPtr) ESR_Track24._c /* ID: 0x00000517, Handle: 45, ESR_Track24 [FC] */, 
  (RxDataPtr) ESR_Track23._c /* ID: 0x00000516, Handle: 46, ESR_Track23 [FC] */, 
  (RxDataPtr) ESR_Track22._c /* ID: 0x00000515, Handle: 47, ESR_Track22 [FC] */, 
  (RxDataPtr) ESR_Track21._c /* ID: 0x00000514, Handle: 48, ESR_Track21 [FC] */, 
  (RxDataPtr) ESR_Track20._c /* ID: 0x00000513, Handle: 49, ESR_Track20 [FC] */, 
  (RxDataPtr) ESR_Track19._c /* ID: 0x00000512, Handle: 50, ESR_Track19 [FC] */, 
  (RxDataPtr) ESR_Track18._c /* ID: 0x00000511, Handle: 51, ESR_Track18 [FC] */, 
  (RxDataPtr) ESR_Track17._c /* ID: 0x00000510, Handle: 52, ESR_Track17 [FC] */, 
  (RxDataPtr) ESR_Track16._c /* ID: 0x0000050f, Handle: 53, ESR_Track16 [FC] */, 
  (RxDataPtr) ESR_Track15._c /* ID: 0x0000050e, Handle: 54, ESR_Track15 [FC] */, 
  (RxDataPtr) ESR_Track14._c /* ID: 0x0000050d, Handle: 55, ESR_Track14 [FC] */, 
  (RxDataPtr) ESR_Track13._c /* ID: 0x0000050c, Handle: 56, ESR_Track13 [FC] */, 
  (RxDataPtr) ESR_Track12._c /* ID: 0x0000050b, Handle: 57, ESR_Track12 [FC] */, 
  (RxDataPtr) ESR_Track11._c /* ID: 0x0000050a, Handle: 58, ESR_Track11 [FC] */, 
  (RxDataPtr) ESR_Track10._c /* ID: 0x00000509, Handle: 59, ESR_Track10 [FC] */, 
  (RxDataPtr) ESR_Track09._c /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  (RxDataPtr) ESR_Track08._c /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  (RxDataPtr) ESR_Track07._c /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  (RxDataPtr) ESR_Track06._c /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  (RxDataPtr) ESR_Track05._c /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  (RxDataPtr) ESR_Track04._c /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  (RxDataPtr) ESR_Track03._c /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  (RxDataPtr) ESR_Track02._c /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  (RxDataPtr) ESR_Track01._c /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  (RxDataPtr) ESR_Status4._c /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  (RxDataPtr) ESR_Status3._c /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  (RxDataPtr) ESR_Status2._c /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  (RxDataPtr) ESR_Status1._c /* ID: 0x000004e0, Handle: 72, ESR_Status1 [FC] */, 
  (RxDataPtr) FUNCTION_Switch._c /* ID: 0x00000111, Handle: 73, FUNCTION_Switch [BC] */
};
/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_PRECOPY_FCT
/* CODE CATEGORY 1 START */
/* CODE CATEGORY 1 END */

/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 ApplPrecopyFct V_MEMROM2 CanRxApplPrecopyPtr[kCanNumberOfRxObjects] = 
{
  V_NULL /* ID: 0x000005e8, Handle: 0, ESR_Status9 [FC] */, 
  V_NULL /* ID: 0x000005e7, Handle: 1, ESR_Status8 [FC] */, 
  V_NULL /* ID: 0x000005e6, Handle: 2, ESR_Status7 [FC] */, 
  V_NULL /* ID: 0x000005e5, Handle: 3, ESR_Status6 [FC] */, 
  V_NULL /* ID: 0x000005e4, Handle: 4, ESR_Status5 [FC] */, 
  IlMsgESR_Track64PreCopy /* ID: 0x0000053f, Handle: 5, ESR_Track64 [FC] */, 
  IlMsgESR_Track63PreCopy /* ID: 0x0000053e, Handle: 6, ESR_Track63 [FC] */, 
  IlMsgESR_Track62PreCopy /* ID: 0x0000053d, Handle: 7, ESR_Track62 [FC] */, 
  IlMsgESR_Track61PreCopy /* ID: 0x0000053c, Handle: 8, ESR_Track61 [FC] */, 
  IlMsgESR_Track60PreCopy /* ID: 0x0000053b, Handle: 9, ESR_Track60 [FC] */, 
  IlMsgESR_Track59PreCopy /* ID: 0x0000053a, Handle: 10, ESR_Track59 [FC] */, 
  IlMsgESR_Track58PreCopy /* ID: 0x00000539, Handle: 11, ESR_Track58 [FC] */, 
  IlMsgESR_Track57PreCopy /* ID: 0x00000538, Handle: 12, ESR_Track57 [FC] */, 
  IlMsgESR_Track56PreCopy /* ID: 0x00000537, Handle: 13, ESR_Track56 [FC] */, 
  IlMsgESR_Track55PreCopy /* ID: 0x00000536, Handle: 14, ESR_Track55 [FC] */, 
  IlMsgESR_Track54PreCopy /* ID: 0x00000535, Handle: 15, ESR_Track54 [FC] */, 
  IlMsgESR_Track53PreCopy /* ID: 0x00000534, Handle: 16, ESR_Track53 [FC] */, 
  IlMsgESR_Track52PreCopy /* ID: 0x00000533, Handle: 17, ESR_Track52 [FC] */, 
  IlMsgESR_Track51PreCopy /* ID: 0x00000532, Handle: 18, ESR_Track51 [FC] */, 
  IlMsgESR_Track50PreCopy /* ID: 0x00000531, Handle: 19, ESR_Track50 [FC] */, 
  IlMsgESR_Track49PreCopy /* ID: 0x00000530, Handle: 20, ESR_Track49 [FC] */, 
  IlMsgESR_Track48PreCopy /* ID: 0x0000052f, Handle: 21, ESR_Track48 [FC] */, 
  IlMsgESR_Track47PreCopy /* ID: 0x0000052e, Handle: 22, ESR_Track47 [FC] */, 
  IlMsgESR_Track46PreCopy /* ID: 0x0000052d, Handle: 23, ESR_Track46 [FC] */, 
  IlMsgESR_Track45PreCopy /* ID: 0x0000052c, Handle: 24, ESR_Track45 [FC] */, 
  IlMsgESR_Track44PreCopy /* ID: 0x0000052b, Handle: 25, ESR_Track44 [FC] */, 
  IlMsgESR_Track43PreCopy /* ID: 0x0000052a, Handle: 26, ESR_Track43 [FC] */, 
  IlMsgESR_Track42PreCopy /* ID: 0x00000529, Handle: 27, ESR_Track42 [FC] */, 
  IlMsgESR_Track41PreCopy /* ID: 0x00000528, Handle: 28, ESR_Track41 [FC] */, 
  IlMsgESR_Track40PreCopy /* ID: 0x00000527, Handle: 29, ESR_Track40 [FC] */, 
  IlMsgESR_Track39PreCopy /* ID: 0x00000526, Handle: 30, ESR_Track39 [FC] */, 
  IlMsgESR_Track38PreCopy /* ID: 0x00000525, Handle: 31, ESR_Track38 [FC] */, 
  IlMsgESR_Track37PreCopy /* ID: 0x00000524, Handle: 32, ESR_Track37 [FC] */, 
  IlMsgESR_Track36PreCopy /* ID: 0x00000523, Handle: 33, ESR_Track36 [FC] */, 
  IlMsgESR_Track35PreCopy /* ID: 0x00000522, Handle: 34, ESR_Track35 [FC] */, 
  IlMsgESR_Track34PreCopy /* ID: 0x00000521, Handle: 35, ESR_Track34 [FC] */, 
  IlMsgESR_Track33PreCopy /* ID: 0x00000520, Handle: 36, ESR_Track33 [FC] */, 
  IlMsgESR_Track32PreCopy /* ID: 0x0000051f, Handle: 37, ESR_Track32 [FC] */, 
  IlMsgESR_Track31PreCopy /* ID: 0x0000051e, Handle: 38, ESR_Track31 [FC] */, 
  IlMsgESR_Track30PreCopy /* ID: 0x0000051d, Handle: 39, ESR_Track30 [FC] */, 
  IlMsgESR_Track29PreCopy /* ID: 0x0000051c, Handle: 40, ESR_Track29 [FC] */, 
  IlMsgESR_Track28PreCopy /* ID: 0x0000051b, Handle: 41, ESR_Track28 [FC] */, 
  IlMsgESR_Track27PreCopy /* ID: 0x0000051a, Handle: 42, ESR_Track27 [FC] */, 
  IlMsgESR_Track26PreCopy /* ID: 0x00000519, Handle: 43, ESR_Track26 [FC] */, 
  IlMsgESR_Track25PreCopy /* ID: 0x00000518, Handle: 44, ESR_Track25 [FC] */, 
  IlMsgESR_Track24PreCopy /* ID: 0x00000517, Handle: 45, ESR_Track24 [FC] */, 
  IlMsgESR_Track23PreCopy /* ID: 0x00000516, Handle: 46, ESR_Track23 [FC] */, 
  IlMsgESR_Track22PreCopy /* ID: 0x00000515, Handle: 47, ESR_Track22 [FC] */, 
  IlMsgESR_Track21PreCopy /* ID: 0x00000514, Handle: 48, ESR_Track21 [FC] */, 
  IlMsgESR_Track20PreCopy /* ID: 0x00000513, Handle: 49, ESR_Track20 [FC] */, 
  IlMsgESR_Track19PreCopy /* ID: 0x00000512, Handle: 50, ESR_Track19 [FC] */, 
  IlMsgESR_Track18PreCopy /* ID: 0x00000511, Handle: 51, ESR_Track18 [FC] */, 
  IlMsgESR_Track17PreCopy /* ID: 0x00000510, Handle: 52, ESR_Track17 [FC] */, 
  IlMsgESR_Track16PreCopy /* ID: 0x0000050f, Handle: 53, ESR_Track16 [FC] */, 
  IlMsgESR_Track15PreCopy /* ID: 0x0000050e, Handle: 54, ESR_Track15 [FC] */, 
  IlMsgESR_Track14PreCopy /* ID: 0x0000050d, Handle: 55, ESR_Track14 [FC] */, 
  IlMsgESR_Track13PreCopy /* ID: 0x0000050c, Handle: 56, ESR_Track13 [FC] */, 
  IlMsgESR_Track12PreCopy /* ID: 0x0000050b, Handle: 57, ESR_Track12 [FC] */, 
  IlMsgESR_Track11PreCopy /* ID: 0x0000050a, Handle: 58, ESR_Track11 [FC] */, 
  IlMsgESR_Track10PreCopy /* ID: 0x00000509, Handle: 59, ESR_Track10 [FC] */, 
  IlMsgESR_Track09PreCopy /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  IlMsgESR_Track08PreCopy /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  IlMsgESR_Track07PreCopy /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  IlMsgESR_Track06PreCopy /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  IlMsgESR_Track05PreCopy /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  IlMsgESR_Track04PreCopy /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  IlMsgESR_Track03PreCopy /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  IlMsgESR_Track02PreCopy /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  IlMsgESR_Track01PreCopy /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  V_NULL /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  V_NULL /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  V_NULL /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  V_NULL /* ID: 0x000004e0, Handle: 72, ESR_Status1 [FC] */, 
  V_NULL /* ID: 0x00000111, Handle: 73, FUNCTION_Switch [BC] */
};
/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_INDICATION_FCT
/* ROM CATEGORY 1 START */
/* PRQA  S 1334 QAC_Can_1334 */ /* MD_Can_1334 */
V_MEMROM0 V_MEMROM1 ApplIndicationFct V_MEMROM2 CanRxApplIndicationPtr[kCanNumberOfRxObjects] = 
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
/* PRQA  L:QAC_Can_1334 */

/* ROM CATEGORY 1 END */

#endif


#ifdef C_ENABLE_INDICATION_FLAG
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanIndicationOffset[kCanNumberOfRxObjects] = 
{
  0 /* ID: 0x000005e8, Handle: 0, ESR_Status9 [FC] */, 
  0 /* ID: 0x000005e7, Handle: 1, ESR_Status8 [FC] */, 
  0 /* ID: 0x000005e6, Handle: 2, ESR_Status7 [FC] */, 
  0 /* ID: 0x000005e5, Handle: 3, ESR_Status6 [FC] */, 
  0 /* ID: 0x000005e4, Handle: 4, ESR_Status5 [FC] */, 
  0 /* ID: 0x0000053f, Handle: 5, ESR_Track64 [FC] */, 
  0 /* ID: 0x0000053e, Handle: 6, ESR_Track63 [FC] */, 
  0 /* ID: 0x0000053d, Handle: 7, ESR_Track62 [FC] */, 
  0 /* ID: 0x0000053c, Handle: 8, ESR_Track61 [FC] */, 
  0 /* ID: 0x0000053b, Handle: 9, ESR_Track60 [FC] */, 
  0 /* ID: 0x0000053a, Handle: 10, ESR_Track59 [FC] */, 
  0 /* ID: 0x00000539, Handle: 11, ESR_Track58 [FC] */, 
  0 /* ID: 0x00000538, Handle: 12, ESR_Track57 [FC] */, 
  0 /* ID: 0x00000537, Handle: 13, ESR_Track56 [FC] */, 
  0 /* ID: 0x00000536, Handle: 14, ESR_Track55 [FC] */, 
  0 /* ID: 0x00000535, Handle: 15, ESR_Track54 [FC] */, 
  0 /* ID: 0x00000534, Handle: 16, ESR_Track53 [FC] */, 
  0 /* ID: 0x00000533, Handle: 17, ESR_Track52 [FC] */, 
  0 /* ID: 0x00000532, Handle: 18, ESR_Track51 [FC] */, 
  0 /* ID: 0x00000531, Handle: 19, ESR_Track50 [FC] */, 
  0 /* ID: 0x00000530, Handle: 20, ESR_Track49 [FC] */, 
  0 /* ID: 0x0000052f, Handle: 21, ESR_Track48 [FC] */, 
  0 /* ID: 0x0000052e, Handle: 22, ESR_Track47 [FC] */, 
  0 /* ID: 0x0000052d, Handle: 23, ESR_Track46 [FC] */, 
  0 /* ID: 0x0000052c, Handle: 24, ESR_Track45 [FC] */, 
  0 /* ID: 0x0000052b, Handle: 25, ESR_Track44 [FC] */, 
  0 /* ID: 0x0000052a, Handle: 26, ESR_Track43 [FC] */, 
  0 /* ID: 0x00000529, Handle: 27, ESR_Track42 [FC] */, 
  0 /* ID: 0x00000528, Handle: 28, ESR_Track41 [FC] */, 
  0 /* ID: 0x00000527, Handle: 29, ESR_Track40 [FC] */, 
  0 /* ID: 0x00000526, Handle: 30, ESR_Track39 [FC] */, 
  0 /* ID: 0x00000525, Handle: 31, ESR_Track38 [FC] */, 
  0 /* ID: 0x00000524, Handle: 32, ESR_Track37 [FC] */, 
  0 /* ID: 0x00000523, Handle: 33, ESR_Track36 [FC] */, 
  0 /* ID: 0x00000522, Handle: 34, ESR_Track35 [FC] */, 
  0 /* ID: 0x00000521, Handle: 35, ESR_Track34 [FC] */, 
  0 /* ID: 0x00000520, Handle: 36, ESR_Track33 [FC] */, 
  0 /* ID: 0x0000051f, Handle: 37, ESR_Track32 [FC] */, 
  0 /* ID: 0x0000051e, Handle: 38, ESR_Track31 [FC] */, 
  0 /* ID: 0x0000051d, Handle: 39, ESR_Track30 [FC] */, 
  0 /* ID: 0x0000051c, Handle: 40, ESR_Track29 [FC] */, 
  0 /* ID: 0x0000051b, Handle: 41, ESR_Track28 [FC] */, 
  0 /* ID: 0x0000051a, Handle: 42, ESR_Track27 [FC] */, 
  0 /* ID: 0x00000519, Handle: 43, ESR_Track26 [FC] */, 
  0 /* ID: 0x00000518, Handle: 44, ESR_Track25 [FC] */, 
  0 /* ID: 0x00000517, Handle: 45, ESR_Track24 [FC] */, 
  0 /* ID: 0x00000516, Handle: 46, ESR_Track23 [FC] */, 
  0 /* ID: 0x00000515, Handle: 47, ESR_Track22 [FC] */, 
  0 /* ID: 0x00000514, Handle: 48, ESR_Track21 [FC] */, 
  0 /* ID: 0x00000513, Handle: 49, ESR_Track20 [FC] */, 
  0 /* ID: 0x00000512, Handle: 50, ESR_Track19 [FC] */, 
  0 /* ID: 0x00000511, Handle: 51, ESR_Track18 [FC] */, 
  0 /* ID: 0x00000510, Handle: 52, ESR_Track17 [FC] */, 
  0 /* ID: 0x0000050f, Handle: 53, ESR_Track16 [FC] */, 
  0 /* ID: 0x0000050e, Handle: 54, ESR_Track15 [FC] */, 
  0 /* ID: 0x0000050d, Handle: 55, ESR_Track14 [FC] */, 
  0 /* ID: 0x0000050c, Handle: 56, ESR_Track13 [FC] */, 
  0 /* ID: 0x0000050b, Handle: 57, ESR_Track12 [FC] */, 
  0 /* ID: 0x0000050a, Handle: 58, ESR_Track11 [FC] */, 
  0 /* ID: 0x00000509, Handle: 59, ESR_Track10 [FC] */, 
  0 /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  0 /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  0 /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  0 /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  0 /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  0 /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  0 /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  0 /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  0 /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  0 /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  0 /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  0 /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  0 /* ID: 0x000004e0, Handle: 72, ESR_Status1 [FC] */, 
  0 /* ID: 0x00000111, Handle: 73, FUNCTION_Switch [BC] */
};
/* ROM CATEGORY 1 END */


/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanIndicationMask[kCanNumberOfRxObjects] = 
{
  0x00u /* ID: 0x000005e8, Handle: 0, ESR_Status9 [FC] */, 
  0x00u /* ID: 0x000005e7, Handle: 1, ESR_Status8 [FC] */, 
  0x00u /* ID: 0x000005e6, Handle: 2, ESR_Status7 [FC] */, 
  0x00u /* ID: 0x000005e5, Handle: 3, ESR_Status6 [FC] */, 
  0x00u /* ID: 0x000005e4, Handle: 4, ESR_Status5 [FC] */, 
  0x00u /* ID: 0x0000053f, Handle: 5, ESR_Track64 [FC] */, 
  0x00u /* ID: 0x0000053e, Handle: 6, ESR_Track63 [FC] */, 
  0x00u /* ID: 0x0000053d, Handle: 7, ESR_Track62 [FC] */, 
  0x00u /* ID: 0x0000053c, Handle: 8, ESR_Track61 [FC] */, 
  0x00u /* ID: 0x0000053b, Handle: 9, ESR_Track60 [FC] */, 
  0x00u /* ID: 0x0000053a, Handle: 10, ESR_Track59 [FC] */, 
  0x00u /* ID: 0x00000539, Handle: 11, ESR_Track58 [FC] */, 
  0x00u /* ID: 0x00000538, Handle: 12, ESR_Track57 [FC] */, 
  0x00u /* ID: 0x00000537, Handle: 13, ESR_Track56 [FC] */, 
  0x00u /* ID: 0x00000536, Handle: 14, ESR_Track55 [FC] */, 
  0x00u /* ID: 0x00000535, Handle: 15, ESR_Track54 [FC] */, 
  0x00u /* ID: 0x00000534, Handle: 16, ESR_Track53 [FC] */, 
  0x00u /* ID: 0x00000533, Handle: 17, ESR_Track52 [FC] */, 
  0x00u /* ID: 0x00000532, Handle: 18, ESR_Track51 [FC] */, 
  0x00u /* ID: 0x00000531, Handle: 19, ESR_Track50 [FC] */, 
  0x00u /* ID: 0x00000530, Handle: 20, ESR_Track49 [FC] */, 
  0x00u /* ID: 0x0000052f, Handle: 21, ESR_Track48 [FC] */, 
  0x00u /* ID: 0x0000052e, Handle: 22, ESR_Track47 [FC] */, 
  0x00u /* ID: 0x0000052d, Handle: 23, ESR_Track46 [FC] */, 
  0x00u /* ID: 0x0000052c, Handle: 24, ESR_Track45 [FC] */, 
  0x00u /* ID: 0x0000052b, Handle: 25, ESR_Track44 [FC] */, 
  0x00u /* ID: 0x0000052a, Handle: 26, ESR_Track43 [FC] */, 
  0x00u /* ID: 0x00000529, Handle: 27, ESR_Track42 [FC] */, 
  0x00u /* ID: 0x00000528, Handle: 28, ESR_Track41 [FC] */, 
  0x00u /* ID: 0x00000527, Handle: 29, ESR_Track40 [FC] */, 
  0x00u /* ID: 0x00000526, Handle: 30, ESR_Track39 [FC] */, 
  0x00u /* ID: 0x00000525, Handle: 31, ESR_Track38 [FC] */, 
  0x00u /* ID: 0x00000524, Handle: 32, ESR_Track37 [FC] */, 
  0x00u /* ID: 0x00000523, Handle: 33, ESR_Track36 [FC] */, 
  0x00u /* ID: 0x00000522, Handle: 34, ESR_Track35 [FC] */, 
  0x00u /* ID: 0x00000521, Handle: 35, ESR_Track34 [FC] */, 
  0x00u /* ID: 0x00000520, Handle: 36, ESR_Track33 [FC] */, 
  0x00u /* ID: 0x0000051f, Handle: 37, ESR_Track32 [FC] */, 
  0x00u /* ID: 0x0000051e, Handle: 38, ESR_Track31 [FC] */, 
  0x00u /* ID: 0x0000051d, Handle: 39, ESR_Track30 [FC] */, 
  0x00u /* ID: 0x0000051c, Handle: 40, ESR_Track29 [FC] */, 
  0x00u /* ID: 0x0000051b, Handle: 41, ESR_Track28 [FC] */, 
  0x00u /* ID: 0x0000051a, Handle: 42, ESR_Track27 [FC] */, 
  0x00u /* ID: 0x00000519, Handle: 43, ESR_Track26 [FC] */, 
  0x00u /* ID: 0x00000518, Handle: 44, ESR_Track25 [FC] */, 
  0x00u /* ID: 0x00000517, Handle: 45, ESR_Track24 [FC] */, 
  0x00u /* ID: 0x00000516, Handle: 46, ESR_Track23 [FC] */, 
  0x00u /* ID: 0x00000515, Handle: 47, ESR_Track22 [FC] */, 
  0x00u /* ID: 0x00000514, Handle: 48, ESR_Track21 [FC] */, 
  0x00u /* ID: 0x00000513, Handle: 49, ESR_Track20 [FC] */, 
  0x00u /* ID: 0x00000512, Handle: 50, ESR_Track19 [FC] */, 
  0x00u /* ID: 0x00000511, Handle: 51, ESR_Track18 [FC] */, 
  0x00u /* ID: 0x00000510, Handle: 52, ESR_Track17 [FC] */, 
  0x00u /* ID: 0x0000050f, Handle: 53, ESR_Track16 [FC] */, 
  0x00u /* ID: 0x0000050e, Handle: 54, ESR_Track15 [FC] */, 
  0x00u /* ID: 0x0000050d, Handle: 55, ESR_Track14 [FC] */, 
  0x00u /* ID: 0x0000050c, Handle: 56, ESR_Track13 [FC] */, 
  0x00u /* ID: 0x0000050b, Handle: 57, ESR_Track12 [FC] */, 
  0x00u /* ID: 0x0000050a, Handle: 58, ESR_Track11 [FC] */, 
  0x00u /* ID: 0x00000509, Handle: 59, ESR_Track10 [FC] */, 
  0x00u /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  0x00u /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  0x00u /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  0x00u /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  0x00u /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  0x00u /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  0x00u /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  0x00u /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  0x00u /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  0x00u /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  0x00u /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  0x00u /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  0x00u /* ID: 0x000004e0, Handle: 72, ESR_Status1 [FC] */, 
  0x00u /* ID: 0x00000111, Handle: 73, FUNCTION_Switch [BC] */
};
/* ROM CATEGORY 1 END */


#endif




/* -----------------------------------------------------------------------------
    &&&~ Init structures
 ----------------------------------------------------------------------------- */

/* ROM CATEGORY 4 START */
/* PRQA S 3408 1 */ /* MD_Can_3408_extLinkage */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanInitObjectStartIndex[2] = 
{
  0, 
  1
};

/* ROM CATEGORY 4 END */

/* ROM CATEGORY 4 START */
V_MEMROM0 V_MEMROM1 vuint32 V_MEMROM2 CanInitBitTiming[1] = 
{
  0x00004D01u
};
V_MEMROM0 V_MEMROM1 vuint32 V_MEMROM2 CanInitBasicMsk[1][1] = 
{
  
  {
    0xE8000000u
  }
};
V_MEMROM0 V_MEMROM1 vuint32 V_MEMROM2 CanInitBasicCode[1][1] = 
{
  
  {
    0x00000000u
  }
};
/* ROM CATEGORY 4 END */



#if defined(C_ENABLE_MULTI_ECU_CONFIG)
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanPhysToLogChannel[kVNumberOfIdentities][kCanNumberOfPhysChannels] = 
{
  
  {
    0
  }
};
/* ROM CATEGORY 1 END */

#endif

#if defined(C_ENABLE_MULTI_ECU_CONFIG)
/* ROM CATEGORY 2 START */

V_MEMROM0 V_MEMROM1 tVIdentityMsk V_MEMROM2 CanChannelIdentityAssignment[kCanNumberOfChannels] = 
{
  0x01u
};

/* ROM CATEGORY 2 END */

#endif

#if defined(C_ENABLE_MULTI_ECU_PHYS)
/* ROM CATEGORY 1 START */
V_MEMROM0 V_MEMROM1 tVIdentityMsk V_MEMROM2 CanRxIdentityAssignment[kCanNumberOfRxObjects] = 
{
  0x01u /* ID: 0x000005e8, Handle: 0, ESR_Status9 [FC] */, 
  0x01u /* ID: 0x000005e7, Handle: 1, ESR_Status8 [FC] */, 
  0x01u /* ID: 0x000005e6, Handle: 2, ESR_Status7 [FC] */, 
  0x01u /* ID: 0x000005e5, Handle: 3, ESR_Status6 [FC] */, 
  0x01u /* ID: 0x000005e4, Handle: 4, ESR_Status5 [FC] */, 
  0x01u /* ID: 0x0000053f, Handle: 5, ESR_Track64 [FC] */, 
  0x01u /* ID: 0x0000053e, Handle: 6, ESR_Track63 [FC] */, 
  0x01u /* ID: 0x0000053d, Handle: 7, ESR_Track62 [FC] */, 
  0x01u /* ID: 0x0000053c, Handle: 8, ESR_Track61 [FC] */, 
  0x01u /* ID: 0x0000053b, Handle: 9, ESR_Track60 [FC] */, 
  0x01u /* ID: 0x0000053a, Handle: 10, ESR_Track59 [FC] */, 
  0x01u /* ID: 0x00000539, Handle: 11, ESR_Track58 [FC] */, 
  0x01u /* ID: 0x00000538, Handle: 12, ESR_Track57 [FC] */, 
  0x01u /* ID: 0x00000537, Handle: 13, ESR_Track56 [FC] */, 
  0x01u /* ID: 0x00000536, Handle: 14, ESR_Track55 [FC] */, 
  0x01u /* ID: 0x00000535, Handle: 15, ESR_Track54 [FC] */, 
  0x01u /* ID: 0x00000534, Handle: 16, ESR_Track53 [FC] */, 
  0x01u /* ID: 0x00000533, Handle: 17, ESR_Track52 [FC] */, 
  0x01u /* ID: 0x00000532, Handle: 18, ESR_Track51 [FC] */, 
  0x01u /* ID: 0x00000531, Handle: 19, ESR_Track50 [FC] */, 
  0x01u /* ID: 0x00000530, Handle: 20, ESR_Track49 [FC] */, 
  0x01u /* ID: 0x0000052f, Handle: 21, ESR_Track48 [FC] */, 
  0x01u /* ID: 0x0000052e, Handle: 22, ESR_Track47 [FC] */, 
  0x01u /* ID: 0x0000052d, Handle: 23, ESR_Track46 [FC] */, 
  0x01u /* ID: 0x0000052c, Handle: 24, ESR_Track45 [FC] */, 
  0x01u /* ID: 0x0000052b, Handle: 25, ESR_Track44 [FC] */, 
  0x01u /* ID: 0x0000052a, Handle: 26, ESR_Track43 [FC] */, 
  0x01u /* ID: 0x00000529, Handle: 27, ESR_Track42 [FC] */, 
  0x01u /* ID: 0x00000528, Handle: 28, ESR_Track41 [FC] */, 
  0x01u /* ID: 0x00000527, Handle: 29, ESR_Track40 [FC] */, 
  0x01u /* ID: 0x00000526, Handle: 30, ESR_Track39 [FC] */, 
  0x01u /* ID: 0x00000525, Handle: 31, ESR_Track38 [FC] */, 
  0x01u /* ID: 0x00000524, Handle: 32, ESR_Track37 [FC] */, 
  0x01u /* ID: 0x00000523, Handle: 33, ESR_Track36 [FC] */, 
  0x01u /* ID: 0x00000522, Handle: 34, ESR_Track35 [FC] */, 
  0x01u /* ID: 0x00000521, Handle: 35, ESR_Track34 [FC] */, 
  0x01u /* ID: 0x00000520, Handle: 36, ESR_Track33 [FC] */, 
  0x01u /* ID: 0x0000051f, Handle: 37, ESR_Track32 [FC] */, 
  0x01u /* ID: 0x0000051e, Handle: 38, ESR_Track31 [FC] */, 
  0x01u /* ID: 0x0000051d, Handle: 39, ESR_Track30 [FC] */, 
  0x01u /* ID: 0x0000051c, Handle: 40, ESR_Track29 [FC] */, 
  0x01u /* ID: 0x0000051b, Handle: 41, ESR_Track28 [FC] */, 
  0x01u /* ID: 0x0000051a, Handle: 42, ESR_Track27 [FC] */, 
  0x01u /* ID: 0x00000519, Handle: 43, ESR_Track26 [FC] */, 
  0x01u /* ID: 0x00000518, Handle: 44, ESR_Track25 [FC] */, 
  0x01u /* ID: 0x00000517, Handle: 45, ESR_Track24 [FC] */, 
  0x01u /* ID: 0x00000516, Handle: 46, ESR_Track23 [FC] */, 
  0x01u /* ID: 0x00000515, Handle: 47, ESR_Track22 [FC] */, 
  0x01u /* ID: 0x00000514, Handle: 48, ESR_Track21 [FC] */, 
  0x01u /* ID: 0x00000513, Handle: 49, ESR_Track20 [FC] */, 
  0x01u /* ID: 0x00000512, Handle: 50, ESR_Track19 [FC] */, 
  0x01u /* ID: 0x00000511, Handle: 51, ESR_Track18 [FC] */, 
  0x01u /* ID: 0x00000510, Handle: 52, ESR_Track17 [FC] */, 
  0x01u /* ID: 0x0000050f, Handle: 53, ESR_Track16 [FC] */, 
  0x01u /* ID: 0x0000050e, Handle: 54, ESR_Track15 [FC] */, 
  0x01u /* ID: 0x0000050d, Handle: 55, ESR_Track14 [FC] */, 
  0x01u /* ID: 0x0000050c, Handle: 56, ESR_Track13 [FC] */, 
  0x01u /* ID: 0x0000050b, Handle: 57, ESR_Track12 [FC] */, 
  0x01u /* ID: 0x0000050a, Handle: 58, ESR_Track11 [FC] */, 
  0x01u /* ID: 0x00000509, Handle: 59, ESR_Track10 [FC] */, 
  0x01u /* ID: 0x00000508, Handle: 60, ESR_Track09 [BC] */, 
  0x01u /* ID: 0x00000507, Handle: 61, ESR_Track08 [BC] */, 
  0x01u /* ID: 0x00000506, Handle: 62, ESR_Track07 [BC] */, 
  0x01u /* ID: 0x00000505, Handle: 63, ESR_Track06 [BC] */, 
  0x01u /* ID: 0x00000504, Handle: 64, ESR_Track05 [BC] */, 
  0x01u /* ID: 0x00000503, Handle: 65, ESR_Track04 [BC] */, 
  0x01u /* ID: 0x00000502, Handle: 66, ESR_Track03 [BC] */, 
  0x01u /* ID: 0x00000501, Handle: 67, ESR_Track02 [BC] */, 
  0x01u /* ID: 0x00000500, Handle: 68, ESR_Track01 [BC] */, 
  0x01u /* ID: 0x000004e3, Handle: 69, ESR_Status4 [BC] */, 
  0x01u /* ID: 0x000004e2, Handle: 70, ESR_Status3 [BC] */, 
  0x01u /* ID: 0x000004e1, Handle: 71, ESR_Status2 [BC] */, 
  0x01u /* ID: 0x000004e0, Handle: 72, ESR_Status1 [FC] */, 
  0x01u /* ID: 0x00000111, Handle: 73, FUNCTION_Switch [BC] */
};
/* ROM CATEGORY 1 END */

/* ROM CATEGORY 4 START */
V_MEMROM0 V_MEMROM1 tVIdentityMsk V_MEMROM2 CanTxIdentityAssignment[kCanNumberOfTxObjects] = 
{
  0x01u /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  0x01u /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  0x01u /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  0x01u /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  0x01u /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  0x01u /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  0x01u /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  0x01u /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  0x01u /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  0x01u /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  0x01u /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  0x01u /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  0x01u /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  0x01u /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  0x01u /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  0x01u /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  0x01u /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  0x01u /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  0x01u /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  0x01u /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  0x01u /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  0x01u /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  0x01u /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  0x01u /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  0x01u /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  0x01u /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  0x01u /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  0x01u /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  0x01u /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  0x01u /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  0x01u /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  0x01u /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  0x01u /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  0x01u /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  0x01u /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  0x01u /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  0x01u /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  0x01u /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  0x01u /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  0x01u /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  0x01u /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  0x01u /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  0x01u /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  0x01u /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  0x01u /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  0x01u /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  0x01u /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  0x01u /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  0x01u /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  0x01u /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  0x01u /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  0x01u /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  0x01u /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  0x01u /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  0x01u /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  0x01u /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  0x01u /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  0x01u /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  0x01u /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  0x01u /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  0x01u /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  0x01u /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  0x01u /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
/* ROM CATEGORY 4 END */

#endif


#ifdef C_ENABLE_TX_FULLCAN_OBJECTS
/* ROM CATEGORY 2 START */
#ifdef C_ENABLE_HW_OBJ_EXCEED_255_DRV
V_MEMROM0 V_MEMROM1 CanObjectHandle V_MEMROM2 CanTxHwObj[kCanNumberOfTxObjects] = 
{
  0x00u /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  0x00u /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  0x00u /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  0x00u /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  0x00u /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  0x00u /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  0x00u /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  0x00u /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  0x00u /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  0x00u /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  0x00u /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  0x00u /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  0x00u /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  0x00u /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  0x00u /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  0x00u /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  0x00u /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  0x00u /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  0x00u /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  0x00u /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  0x00u /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  0x00u /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  0x00u /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  0x00u /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  0x00u /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  0x00u /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  0x00u /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  0x00u /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  0x00u /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  0x00u /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  0x00u /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  0x00u /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  0x00u /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  0x00u /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  0x00u /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  0x00u /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  0x00u /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  0x00u /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  0x00u /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  0x00u /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  0x00u /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  0x00u /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  0x00u /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  0x00u /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  0x00u /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  0x00u /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  0x00u /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  0x00u /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  0x00u /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  0x00u /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  0x00u /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  0x00u /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  0x00u /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  0x00u /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  0x00u /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  0x00u /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  0x00u /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  0x00u /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  0x00u /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  0x00u /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  0x00u /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  0x00u /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  0x00u /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
#else
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanTxHwObj[kCanNumberOfTxObjects] = 
{
  0x00u /* ID: 0x0000077b, Handle: 0, Next_lane_Right_P [BC] */, 
  0x00u /* ID: 0x0000077a, Handle: 1, Next_lane_Right_O [BC] */, 
  0x00u /* ID: 0x00000779, Handle: 2, Next_lane_Left_N [BC] */, 
  0x00u /* ID: 0x00000778, Handle: 3, Next_lane_Left_M [BC] */, 
  0x00u /* ID: 0x00000777, Handle: 4, Next_lane_Right_L [BC] */, 
  0x00u /* ID: 0x00000776, Handle: 5, Next_lane_Right_K [BC] */, 
  0x00u /* ID: 0x00000775, Handle: 6, Next_lane_Left_J [BC] */, 
  0x00u /* ID: 0x00000774, Handle: 7, Next_lane_Left_I [BC] */, 
  0x00u /* ID: 0x00000773, Handle: 8, Next_lane_Right_H [BC] */, 
  0x00u /* ID: 0x00000772, Handle: 9, Next_lane_Right_G [BC] */, 
  0x00u /* ID: 0x00000771, Handle: 10, Next_lane_Left_F [BC] */, 
  0x00u /* ID: 0x00000770, Handle: 11, Next_lane_Left_E [BC] */, 
  0x00u /* ID: 0x0000076f, Handle: 12, Next_lane_Right_D [BC] */, 
  0x00u /* ID: 0x0000076e, Handle: 13, Next_lane_Right_C [BC] */, 
  0x00u /* ID: 0x0000076d, Handle: 14, Next_lane_Left_B [BC] */, 
  0x00u /* ID: 0x0000076c, Handle: 15, Next_lane_Left_A [BC] */, 
  0x00u /* ID: 0x0000076b, Handle: 16, Numebr_of_next_lane [BC] */, 
  0x00u /* ID: 0x0000076a, Handle: 17, Reference_points [BC] */, 
  0x00u /* ID: 0x00000769, Handle: 18, LKA_right_lane_B [BC] */, 
  0x00u /* ID: 0x00000768, Handle: 19, LKA_right_lane_A [BC] */, 
  0x00u /* ID: 0x00000767, Handle: 20, LKA_left_lane_B [BC] */, 
  0x00u /* ID: 0x00000766, Handle: 21, LKA_left_lane_A [BC] */, 
  0x00u /* ID: 0x00000760, Handle: 22, Car_Info [BC] */, 
  0x00u /* ID: 0x00000750, Handle: 23, Obstacle_Data_X [BC] */, 
  0x00u /* ID: 0x0000074f, Handle: 24, Obstacle_Data_W [BC] */, 
  0x00u /* ID: 0x0000074e, Handle: 25, Obstacle_Data_V [BC] */, 
  0x00u /* ID: 0x0000074d, Handle: 26, Obstacle_Data_U [BC] */, 
  0x00u /* ID: 0x0000074c, Handle: 27, Obstacle_Data_T [BC] */, 
  0x00u /* ID: 0x0000074b, Handle: 28, Obstacle_Data_S [BC] */, 
  0x00u /* ID: 0x0000074a, Handle: 29, Obstacle_Data_R [BC] */, 
  0x00u /* ID: 0x00000749, Handle: 30, Obstacle_Data_Q [BC] */, 
  0x00u /* ID: 0x00000748, Handle: 31, Obstacle_Data_P [BC] */, 
  0x00u /* ID: 0x00000747, Handle: 32, Obstacle_Data_O [BC] */, 
  0x00u /* ID: 0x00000746, Handle: 33, Obstacle_Data_N [BC] */, 
  0x00u /* ID: 0x00000745, Handle: 34, Obstacle_Data_M [BC] */, 
  0x00u /* ID: 0x00000744, Handle: 35, Obstacle_Data_L [BC] */, 
  0x00u /* ID: 0x00000743, Handle: 36, Obstacle_Data_K [BC] */, 
  0x00u /* ID: 0x00000742, Handle: 37, Obstacle_Data_J [BC] */, 
  0x00u /* ID: 0x00000741, Handle: 38, Obstacle_Data_I [BC] */, 
  0x00u /* ID: 0x00000740, Handle: 39, Obstacle_Data_H [BC] */, 
  0x00u /* ID: 0x0000073f, Handle: 40, Obstacle_Data_G [BC] */, 
  0x00u /* ID: 0x0000073e, Handle: 41, Obstacle_Data_F [BC] */, 
  0x00u /* ID: 0x0000073d, Handle: 42, Obstacle_Data_E [BC] */, 
  0x00u /* ID: 0x0000073c, Handle: 43, Obstacle_Data_D [BC] */, 
  0x00u /* ID: 0x0000073b, Handle: 44, Obstacle_Data_C [BC] */, 
  0x00u /* ID: 0x0000073a, Handle: 45, Obstacle_Data_B [BC] */, 
  0x00u /* ID: 0x00000739, Handle: 46, Obstacle_Data_A [BC] */, 
  0x00u /* ID: 0x00000738, Handle: 47, Obstacle_Status [BC] */, 
  0x00u /* ID: 0x00000737, Handle: 48, Lane [BC] */, 
  0x00u /* ID: 0x00000729, Handle: 49, AHBC_Gradual [BC] */, 
  0x00u /* ID: 0x00000728, Handle: 50, AHBC_high_low_beam [BC] */, 
  0x00u /* ID: 0x00000727, Handle: 51, Sign_Type [BC] */, 
  0x00u /* ID: 0x00000726, Handle: 52, TSR_message_G [BC] */, 
  0x00u /* ID: 0x00000725, Handle: 53, TSR_message_F [BC] */, 
  0x00u /* ID: 0x00000724, Handle: 54, TSR_message_E [BC] */, 
  0x00u /* ID: 0x00000723, Handle: 55, TSR_message_D [BC] */, 
  0x00u /* ID: 0x00000722, Handle: 56, TSR_message_C [BC] */, 
  0x00u /* ID: 0x00000721, Handle: 57, TSR_message_B [BC] */, 
  0x00u /* ID: 0x00000720, Handle: 58, TSR_message_A [BC] */, 
  0x00u /* ID: 0x00000700, Handle: 59, C2_Display_and_warning [BC] */, 
  0x00u /* ID: 0x00000669, Handle: 60, Detils_Lane [BC] */, 
  0x00u /* ID: 0x00000650, Handle: 61, Fixed_FOE [BC] */, 
  0x00u /* ID: 0x00000333, Handle: 62, TIMESTAMP [BC] */
};
#endif

/* ROM CATEGORY 2 END */

#endif





/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 304262406
      #error "The magic number of the generated file <D:\code\SocCode\linux\gen2\Geny\can_par.c> is different. Please check time and date of generated files!"
  #endif
#else
  #error "The magic number is not defined in the generated file <D:\code\SocCode\linux\gen2\Geny\can_par.c> "

#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

