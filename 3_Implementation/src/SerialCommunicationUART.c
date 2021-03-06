/**
 * @file SerialCommunicationUART.c
 * @author Atul Singh
 * @brief A file where serial communication functions are implemented
 * @date 16-04-2022
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#lude <avr/io.h>
#lude "SerialCommunicationUART.h"
/**
 * @brief A program to initialize the UART serial communication
 * 
 * @param ubrr_value 
 */
void UARTinit(uint16_t ubrr_value){

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0x00ff);
    UART_CHARACTER_SIZE; // 8 bit size of data
    UART_ENABLED; //enable rx and tx of uart with interrupts

}





/**
 * @brief A function to write characters to send it to other UART port
 * 
 * @param data 
 */
void UARTwritecharacter(char data){

while(UART_DATA_NOT_WRITTEN){

}

UDR0 = data;

}