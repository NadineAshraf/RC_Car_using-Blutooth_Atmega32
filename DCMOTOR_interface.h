/*************************************************************/
/*************************************************************/
/**************   Author : Nadine Ashraf Adeeb   *************/
/**************             Layer:HAL            *************/
/**************            SWC:DCMOTOR           *************/
/**************            Version:v2.0          *************/
/**************     Date: 11 OCTOBER,2022        *************/
/*************************************************************/
/*************************************************************/
#ifndef DCMOTOR_INTERFACE_H
#define DCMOTOR_INTERFACE_H

void DCMOTOR_voidInit(void);

void DCMOTOR_voidStopMotor(void);
void DCMOTOR_voidCounterClockWise(void);
void DCMOTOR_voidClockWise(void);
void DCMOTOR_voidRightClockWise(void);
void DCMOTOR_voidRightCounterClockWise(void);
void DCMOTOR_voidLeftClockWise(void);
void DCMOTOR_voidLeftCounterClockWise(void);
#endif
