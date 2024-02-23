/*
 * lifo.c

 *
 *  Created on: Feb 11, 2024
 *      Author: raghda
 */
#include"lifo.h"

LIFO_STATUS LIFO_ADD_ITEM (LIFO_BUF_T *lifo_buf, unsigned int item)
{
 //check if valid
 if(!lifo_buf->base|| !lifo_buf->head )
  return  lifo_null;

 //check if full
 if(lifo_buf->count==lifo_buf->length)
  return  lifo_full ;
 *(lifo_buf->head)=item ;
 lifo_buf->head++;
 lifo_buf->count++;
 return lifo_no_error ;
}
LIFO_STATUS LIFO_get_ITEM (LIFO_BUF_T *lifo_buf, unsigned int *item) //pop
{
  // check if valid
 if(!lifo_buf->base|| !lifo_buf->head )
  return  lifo_null;
 //check if empty
 if(lifo_buf->count==0)
  return lifo_empty;
 lifo_buf->head--; //  note -- first
 *item=*(lifo_buf->head);
 lifo_buf->count--;
 return lifo_no_error ;
}
LIFO_STATUS LIFO_init (LIFO_BUF_T *lifo_buf, unsigned int *buff,unsigned int length)
{
 if(buff==NULL)
  return lifo_null;
 lifo_buf->length=length;
 lifo_buf->base =buff;
 lifo_buf->head=buff;
 lifo_buf->count=0;
 return lifo_no_error ;


}
