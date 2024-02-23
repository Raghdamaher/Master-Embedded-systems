/*
 * fifo.h

 *
 *  Created on: Feb 15, 2024
 *      Author:Raghda
 */

#ifndef FIFO_H_
#define FIFO_H_

#include"stdint.h"
#include"stdio.h"
//select the data type from(uint8_t , uint27_t , uint32_t ...)
#define data_type uint8_t
#define width 5
data_type uart_buff[width] ;
//type definitions
typedef struct{
	data_type length;
	data_type count ;
	data_type *base ;
	data_type *head ;
	data_type *tail ;
}fifo_buf_t;
typedef enum {
	fifo_empty ,
	fifo_full ,
	fifo_no_error ,
	fifo_null
}fifo_status;

//APIS
fifo_status fifo_init(fifo_buf_t *fifo_buf_t, data_type *buff,data_type length);
fifo_status fifo_enqueue( fifo_buf_t *fifo_buf_t,data_type item);
fifo_status fifo_dequeue( fifo_buf_t *fifo_buf_t,data_type *temp );
fifo_status fifo_is_full( fifo_buf_t *fifo_buf_t);
fifo_status fifo_print( fifo_buf_t *fifo_buf_t);

#endif /* FIFO_H_ */
