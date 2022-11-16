/*************************************************************/
/*************************************************************/
/**************   Author : Nadine Ashraf Adeeb   *************/
/**************             Layer:HAL            *************/
/**************            SWC:DCMOTOR           *************/
/**************            Version:v2.0          *************/
/**************     Date: 11 OCTOBER,2022        *************/
/*************************************************************/
/*************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_Interface.h"

#include "DCMOTOR_interface.h"
#include "DCMOTOR_private.h"
#include "DCMOTOR_config.h"                                                                                                                                                            #define F_CPU 8000000UL


void DCMOTOR_voidInit(void)
{
	DIO_u8SetPinDirection( Transistor_Port, Transistor_B1_B2,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection( Transistor_Port, Transistor_B0_B3,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection( Transistor_Port, Transistor_B4_B7,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection( Transistor_Port, Transistor_B5_B6,DIO_u8PIN_OUTPUT);
}

void DCMOTOR_voidClockWise(void)
{         
	DIO_u8SetPinValue (Transistor_Port,Transistor_B0_B3 , DIO_u8PIN_HIGH);
	DIO_u8SetPinValue(Transistor_Port,Transistor_B1_B2 , DIO_u8PIN_LOW);
	DIO_u8SetPinValue (Transistor_Port,Transistor_B4_B7 , DIO_u8PIN_LOW);
	DIO_u8SetPinValue(Transistor_Port,Transistor_B5_B6 , DIO_u8PIN_HIGH);

}
void DCMOTOR_voidStopMotor(void)
{
	DIO_u8SetPinValue (Transistor_Port,Transistor_B0_B3 , DIO_u8PIN_LOW);
	DIO_u8SetPinValue (Transistor_Port,Transistor_B1_B2, DIO_u8PIN_LOW);
	DIO_u8SetPinValue (Transistor_Port,Transistor_B4_B7 , DIO_u8PIN_LOW);
	DIO_u8SetPinValue (Transistor_Port,Transistor_B5_B6, DIO_u8PIN_LOW);
}
void DCMOTOR_voidCounterClockWise(void)
{

	DIO_u8SetPinValue (Transistor_Port,Transistor_B0_B3 , DIO_u8PIN_LOW);
	DIO_u8SetPinValue (Transistor_Port,Transistor_B1_B2 , DIO_u8PIN_HIGH);
	DIO_u8SetPinValue (Transistor_Port,Transistor_B4_B7 , DIO_u8PIN_HIGH);
	DIO_u8SetPinValue (Transistor_Port,Transistor_B5_B6 , DIO_u8PIN_LOW);
}
void DCMOTOR_voidRightClockWise(void)
{
	DIO_u8SetPinValue (Transistor_Port,Transistor_B0_B3 , DIO_u8PIN_HIGH);
	DIO_u8SetPinValue (Transistor_Port,Transistor_B1_B2 , DIO_u8PIN_LOW);
	DIO_u8SetPinValue (Transistor_Port,Transistor_B4_B7 , DIO_u8PIN_LOW);
	DIO_u8SetPinValue (Transistor_Port,Transistor_B5_B6 , DIO_u8PIN_LOW);
}
void DCMOTOR_voidRightCounterClockWise(void)
{
	    DIO_u8SetPinValue (Transistor_Port,Transistor_B0_B3 , DIO_u8PIN_LOW);
		DIO_u8SetPinValue (Transistor_Port,Transistor_B1_B2 , DIO_u8PIN_HIGH);
		DIO_u8SetPinValue (Transistor_Port,Transistor_B4_B7 , DIO_u8PIN_LOW);
		DIO_u8SetPinValue (Transistor_Port,Transistor_B5_B6 , DIO_u8PIN_LOW);
}
void DCMOTOR_voidLeftClockWise(void)
{
	        DIO_u8SetPinValue (Transistor_Port,Transistor_B0_B3 , DIO_u8PIN_LOW);
			DIO_u8SetPinValue (Transistor_Port,Transistor_B1_B2 , DIO_u8PIN_LOW);
			DIO_u8SetPinValue (Transistor_Port,Transistor_B4_B7 , DIO_u8PIN_LOW);
			DIO_u8SetPinValue (Transistor_Port,Transistor_B5_B6 , DIO_u8PIN_HIGH);
}
void DCMOTOR_voidLeftCounterClockWise(void)
{
    DIO_u8SetPinValue (Transistor_Port,Transistor_B0_B3 , DIO_u8PIN_LOW);
	DIO_u8SetPinValue (Transistor_Port,Transistor_B1_B2 , DIO_u8PIN_LOW);
	DIO_u8SetPinValue (Transistor_Port,Transistor_B4_B7 , DIO_u8PIN_HIGH);
	DIO_u8SetPinValue (Transistor_Port,Transistor_B5_B6 , DIO_u8PIN_LOW);
}
