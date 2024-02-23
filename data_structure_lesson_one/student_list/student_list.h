/*
 * linked_list.h

 *
 *  Created on: Feb 18, 2024
 *      Author: Raghda
 */
 #ifndef STUDENT_LIST_H_
#define STUDENT_LIST_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include<conio.h>
struct Sdata{
	unsigned int id;
	char name[40];
	float height ;

};
struct SSstudent{
	struct  Sdata student;
	struct SSstudent *pnextstudent ;
};
void fill_the_record(struct SSstudent *pnewstudent) ;
void add_student();
int delete_record() ;
void view_students () ;
void delete_all();
void reverse();
void node_from_the_end();
void middle () ;
#endif // STUDENT_LIST_H_



