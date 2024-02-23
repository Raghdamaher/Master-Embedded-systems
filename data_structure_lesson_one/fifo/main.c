/*
 * main.c

 *
 *  Created on: Feb 15, 2024
 *      Author: Raghda
 */

#include"fofo.h"
void main ()
{
	fifo_buf_t fifo_uart;
	data_type temp=0 ,i ;
		if( fifo_init(&fifo_uart, uart_buff, 5)==fifo_no_error)
			printf("fifo init ==========done\n");
	for(i=0;i<7;i++)
	{
	    printf("FIFO Enqueuq(%d)\n",i);
		if( fifo_enqueue(&fifo_uart,i )==fifo_no_error)
			printf("\tfifo enqueue ==========done\n");
		else
			printf("\tfifo enqueue ==========failed\n");
	}
	printf("=======fifo_print========\n");
	fifo_print(& fifo_uart);

	if( fifo_dequeue(&fifo_uart,&temp )==fifo_no_error)
		printf("\tfifo dequeue %X==========done\n",temp);
	else
		printf("\tfifo dequeue %X ==========failed\n",temp);
		if( fifo_dequeue(&fifo_uart,&temp )==fifo_no_error)
		printf("\tfifo dequeue %X==========done\n",temp);
	else
		printf("\tfifo dequeue %X ==========failed\n",temp);
    printf("=======fifo_print========\n");

	fifo_print(& fifo_uart);

printf("=========");
}

