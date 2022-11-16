/*************************************************************/
/*************************************************************/
/**************   Author : Nadine Ashraf Adeeb   *************/
/**************             Layer:HAL            *************/
/**************            SWC:H-BRIDGE          *************/
/**************            Version:v2.0          *************/
/**************     Date: 11 OCTOBER,2022        *************/
/*************************************************************/
/*************************************************************/
#ifndef HBRIDGE_INTERFACE_H
#define HBRIDGE_INTERFACE_H

#define HBRIDGE_BOTH_FORWARD    0
#define HBRIDE_BOTH_BACKWARD    1
#define HBRIDGE_BOTH_STOP       2
#define HBRIDGE_RIGHT_FORWARD   3
#define HBRIDGE_RIGHT_BACKWARD  4
#define HBRIDGE_LEFT_FORWARD    5
#define HBRIDGE_LEFT_BACKWARD   6
void HBRIDGE_voidControl(u8 Copy_u8voidCommand);
#endif
