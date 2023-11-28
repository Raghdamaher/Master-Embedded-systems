#include"uart.h"
unsigned char string[100]="learn-in-depth:<raghda  maher>" ;
unsigned char string2[100]="learn_in_depth:raghda  maher" ;
unsigned char string3[100]="learn-in-depth:raghda  maher" ;
unsigned char string4[100]="learn-in-depth:raghda  maher" ;
void main (void) 
{
UART_SEND_STRING(string);
}
