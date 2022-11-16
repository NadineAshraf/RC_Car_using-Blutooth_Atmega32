/************************************************************/
/* Author : Nadine Ashraf Adeeb                             */
/* Description: File that holds all configuration for       */
/*                 USART                                    */
/* Version :v1.0                                            */
/* Date : 15 APRIL, 2022                                    */
/************************************************************/
#ifndef USART_PRIVATE_H
#define USART_PRIVATE_H

#define UDR     *((volatile u8*)0x2C)     // USART Data Register

#define UCSRA   *((volatile u8*)0x2B)     // USART Control and Status Register A
#define UCSRA_MPCM  0                     // Multi-processor Communication Mode
#define UCSRA_U2X   1                     // Double the USART Transmission Speed
#define UCSRA_PE    2                     // USART Parity Error
#define UCSRA_DOR   3                     // USART Data OverRun
#define UCSRA_FE    4                     // USART Frame Error
#define UCSRA_UDRE  5                     // USART Data Register Empty
#define UCSRA_TXC   6                     // USART Transmit Complete
#define UCSRA_RXC   7                     // USART Receive Complete

#define UCSRB   *((volatile u8*)0x2A)     // USART Control and Status Register B
#define UCSRB_TXB8  0                     // USART Transmit Data Bit 8
#define UCSRB_RXB8  1                     // USART Receive Data Bit 8
#define UCSRB_UCSZ2 2                     // USART Character Size
#define UCSRB_TXEN  3                     // USART Transmitter Enable
#define UCSRB_RXEN  4                     // USART Receiver Enable
#define UCSRB_UDRIE 5                     // USART Data Register Empty Interrupt Enable
#define UCSRB_TXCIE 6                     // USART TX Complete Interrupt Enable
#define UCSRB_RXCIE 7                     // USART RX Complete Interrupt Enable

#define UCSRC   *((volatile u8*)0x40)     // USART Control and Status Register C
#define UCSRC_UCPOL 0                     // USART Clock Polarity
#define UCSRC_UCSZ0 1                     // USART Character Size
#define UCSRC_UCSZ1 2    
#define UCSRC_UCSBS 3                     // USART Stop Bit Select
#define UCSRC_UPM0  4                     // USART Parity Mode
#define UCSRC_UPM1  5
#define UCSRC_UMSEL 6                     // USART Mode Select
#define UCSRC_URSEL 7                     // USART Register Select

#define UBRRL *((volatile u8*)0x29)       // USART Baud Rate Registers

#define UBRRH *((volatile u8*)0x40)
#endif
