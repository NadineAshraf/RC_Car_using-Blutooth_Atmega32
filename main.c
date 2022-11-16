/*
 * main.c
 *
 *  Created on: Nov 10, 2022
 *      Author: nadin
 */
#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "DIO_Interface.h"
#include "USART_interface.h"
#include "DCMOTOR_interface.h"
#include "HBRIDGE_interface.h"

void main (void)
{
	USART_voidInit();
	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN0,DIO_u8PIN_INPUT); //RX
	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN1,DIO_u8PIN_OUTPUT); //TX
	DCMOTOR_voidInit();

   u8 Local_u8ReceivedData;

   while(1)
   {
	   Local_u8ReceivedData = USART_u8ReceiveData();


	            if(Local_u8ReceivedData == 'F')       // Move Forward
	      		{
	       	   HBRIDGE_voidControl(HBRIDGE_BOTH_FORWARD);
	      		}

	      		else if(Local_u8ReceivedData == 'B') // Move Backward
	      		{
	      			HBRIDGE_voidControl(HBRIDE_BOTH_BACKWARD);
	      		}
	      		else if(Local_u8ReceivedData == 'S') // Stop
	      		{
	      			HBRIDGE_voidControl(HBRIDGE_BOTH_STOP);
	      		}
	      		else if(Local_u8ReceivedData == 'I') // Move Right Forward
	      		{
	      			HBRIDGE_voidControl(HBRIDGE_RIGHT_FORWARD);
	      		}
	      		else if(Local_u8ReceivedData == 'J') // Move Right Backward
	      		{
	      			HBRIDGE_voidControl(HBRIDGE_RIGHT_BACKWARD);
	      		}
	      		else if(Local_u8ReceivedData == 'G') // Move Left Forward
	      		{
	      			HBRIDGE_voidControl(HBRIDGE_LEFT_FORWARD);
	      		}
	      		else if(Local_u8ReceivedData == 'H') // Move Left Backward
	      		{
	      		    HBRIDGE_voidControl(HBRIDGE_LEFT_BACKWARD);
	      		 }





   }
}
