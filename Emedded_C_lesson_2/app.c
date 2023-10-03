#include"uart.h"
unsigned char string[100]="learn-in-depth:<raghda  maher>" ;
void main (void) 
{
UART_SEND_STRING(string);
}