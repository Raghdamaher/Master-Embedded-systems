/*
 * main.c

 *
 *  Created on: Feb 11, 2024
 *      Author: raghda
 */
#include "lifo.h"
unsigned int buffer1[5];
int main ()
{
 int i,temp=0;
 LIFO_BUF_T uart_lifo,I2C_lifo;
 unsigned int *buffer2 = (unsigned int*) malloc (5*sizeof(unsigned int)); //dynamic allocation size=5*4=20
 LIFO_init(&uart_lifo,buffer1,5);
 LIFO_init(&I2C_lifo,buffer2,5);
 for(i=0;i<8;i++)
 {
  if( LIFO_ADD_ITEM(&uart_lifo,i)==lifo_no_error)
   printf("UART_LIFO add:%d\n",i);
 }
 for(i=0;i<7;i++)
  {
  if( LIFO_get_ITEM(&uart_lifo,&temp)==lifo_no_error)
     printf("UART_LIFO get :%d\n",temp);
  }


}
