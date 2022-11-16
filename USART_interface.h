/************************************************************/
/* Author : Nadine Ashraf Adeeb                             */
/* Description: File that holds all configuration for       */
/*                 USART                                    */
/* Version :v1.0                                            */
/* Date : 15 APRIL, 2022                                    */
/************************************************************/
#ifndef USART_INTERFACE_H
#define USART_INTERFACE_H

void USART_voidInit(void);
void USART_voidTransmitData(u8 Copy_u8Data);
u8 USART_u8ReceiveData(void);


#endif
