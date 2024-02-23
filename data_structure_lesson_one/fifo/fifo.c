/*
 * fifo.c

 *
 *  Created on: Feb 15, 2024
 *      Author: Raghda
 */
#include"fofo.h"
fifo_status fifo_init(fifo_buf_t *fifo_buf_t, data_type *buff,data_type length)
{
	if(buff==NULL)
		return fifo_null ;
	fifo_buf_t->base=buff;
	fifo_buf_t->tail=buff;
	fifo_buf_t->head=buff;
	fifo_buf_t->length=length;
	fifo_buf_t->count=0;
	return fifo_no_error ;
}


fifo_status fifo_enqueue( fifo_buf_t *fifo_buf_t,data_type item)
{
	if(!fifo_buf_t->base||!fifo_buf_t->head||!fifo_buf_t->tail)
			return fifo_null ;
	//fifo_full
	if(fifo_is_full(fifo_buf_t)==fifo_full)
		return fifo_full;
	 *(fifo_buf_t->head)=item;
	 fifo_buf_t->count++;
 printf("%d\n",fifo_buf_t->count);
	 //circular_fifo
	 if(fifo_buf_t->head==(fifo_buf_t->base+(fifo_buf_t->length*sizeof(data_type))))
	 fifo_buf_t->head=fifo_buf_t->base;
	 else
	 fifo_buf_t->head++;
	 return fifo_no_error;
}
fifo_status fifo_dequeue( fifo_buf_t *fifo_buf_t,data_type *temp )
{
	if(!fifo_buf_t->base||!fifo_buf_t->head||!fifo_buf_t->tail)
				return fifo_null ;
	if(fifo_buf_t->count==0)
	return fifo_empty ;
	*temp=*(fifo_buf_t->tail) ;
	fifo_buf_t->count-- ;
	if(fifo_buf_t->tail==(fifo_buf_t->base+(fifo_buf_t->length*sizeof(data_type))))
		fifo_buf_t->tail=fifo_buf_t->base;
	else
		 fifo_buf_t->tail++;
	 return fifo_no_error;

}
fifo_status fifo_is_full( fifo_buf_t *fifo_buf_t)
{
	if(!fifo_buf_t->base||!fifo_buf_t->head||!fifo_buf_t->tail)
					return fifo_null ;
	if(fifo_buf_t->count==fifo_buf_t->length)
		return fifo_full;
   return fifo_no_error ;
}
fifo_status fifo_print( fifo_buf_t *fifo_buf_t)
{
	data_type *temp=fifo_buf_t->tail;
	if(fifo_buf_t->count==0)
		printf("fifo is empty\n");
	for(int i=0;i<fifo_buf_t->count;i++)
	{
		printf("------------%x---------\n",*temp);
		temp++;
	}
	return fifo_no_error ;

}

