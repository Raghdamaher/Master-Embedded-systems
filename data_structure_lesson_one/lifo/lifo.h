
/*
 * lifo.h

 *
 *  Created on: Feb 11, 2024
 *      Author: raghda
 */
#include"stdio.h"
#include "stdlib.h"
#ifndef LIFO_H_
#define LIFO_H_
// type definitions
typedef struct {
 unsigned int length ;
 unsigned int *base  ;
 unsigned int *head ;
 unsigned int count  ;

} LIFO_BUF_T;

typedef enum{
 lifo_no_error,
 lifo_full,
 lifo_empty,
 lifo_null
}LIFO_STATUS;
//APIS
LIFO_STATUS LIFO_ADD_ITEM (LIFO_BUF_T *lifo_buf, unsigned int item);
LIFO_STATUS LIFO_get_ITEM (LIFO_BUF_T *lifo_buf, unsigned int *item);
LIFO_STATUS LIFO_init (LIFO_BUF_T *lifo_buf, unsigned int *buff,unsigned int length);


#endif
