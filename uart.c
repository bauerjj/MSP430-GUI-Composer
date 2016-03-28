/*
 * uart.c
 *
 *  Created on: Mar 27, 2016
 *      Author: justin
 */
#include <msp430.h>

void uartTxByte(unsigned char byte)
{
    /* USCI_A0 TX buffer ready? */
    while (!(IFG2&UCA0TXIFG));
    /* transmite data */
    UCA0TXBUF = byte;
}
