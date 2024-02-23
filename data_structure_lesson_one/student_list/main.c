/*
 * main.c

 *
 *  Created on: Feb 18, 2024
 *      Author: Raghda
 */
#include"student_list.h"
void main ()
{
	char temp[40];
	while(1)
	{
		printf("=================\n");
		printf("\t Choose one of the following options \n") ;
		printf("1:Add Student\n");
		printf("2:Delete Student\n");
		printf("3:View Student\n");
		printf("4:Delete All Students\n");
		printf("5:Reverse The Linked List\n");
		printf("6:N'th Node From The End Of Liked List \n");
		printf("7:Middle Of Linked List\n");
		printf("Enter Option Number : ");
		gets(temp);
		printf("=================\n");
		switch(atoi(temp))
		{
		case 1 :
			add_student();
			break ;
		case 2 :
			delete_record() ;
			break ;
		case 3 :
			view_students () ;
			break ;
		case 4 :
			delete_all() ;
			break ;
		case 5 :
			reverse() ;
			break ;
		case 6 :
			node_from_the_end() ;
			break ;
		case 7 :
			middle () ;
			break ;
		default :
			printf("wrong option !\n") ;

		}
	}
}
