/************************************************************/
/* Author : Nadine Ashraf Adeeb                             */
/* Description: File that holds all configuration for       */
/*                 USART                                    */
/* Version :v1.0                                            */
/* Date : 15 APRIL, 2022                                    */
/************************************************************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "USART_interface.h"
#include "USART_private.h"
#include "USART_config.h"
/***
Note that the UCSRC Register has some restrictions, we can NOT
access this register bit by bit. Therefore, we will declare a
variable and change its bits using BIT_MATH function like macros
then assign this variable to the register.
***/
void USART_voidInit(void)
{   u8 Local_u8UCSRCValue = 0;
    SET_BIT(Local_u8UCSRCValue ,UCSRC_URSEL);   // Use UCSRRC
	SET_BIT(Local_u8UCSRCValue , UCSRC_UCSZ1);
	SET_BIT(Local_u8UCSRCValue , UCSRC_UCSZ0);
	UCSRC = Local_u8UCSRCValue;
	UBRRL= 51;                      // Baud Rate = 9600 bit/sec
	SET_BIT(UCSRB , UCSRB_TXEN);    // Transmitter Enable
	SET_BIT(UCSRB , UCSRB_RXEN);    //Receiver Enable
}
void USART_voidTransmitData(u8 Copy_u8Data)
{
	while(GET_BIT(UCSRA , UCSRA_UDRE)== 0); //Polling , Wait until transmit buffer is empty
	UDR = Copy_u8Data;
}
u8 USART_u8ReceiveData(void)
{
	while(GET_BIT(UCSRA , UCSRA_RXC)== 0); // Polling 
	return UDR;
}
