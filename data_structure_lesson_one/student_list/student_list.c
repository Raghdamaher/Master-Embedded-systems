/*
 * student_list.c

 *
 *  Created on: Feb 18, 2024
 *      Author: Raghda
 */
#include"student_list.h"
struct SSstudent *gpfirststudent =NULL ;
void fill_the_record(struct SSstudent *pnewstudent)
{
	char data[40] ;
	printf(" enter the ID :");
	gets(data);
	pnewstudent->student.id =atoi(data);
	printf(" enter the Name :");
	gets( pnewstudent->student.name);
	printf(" enter the Height :");
	gets(data);
	pnewstudent->student.height=atof(data);
}
void add_student()
{
	struct SSstudent *pnewstudent=NULL ;
	struct SSstudent *plaststudent=NULL;

	if(gpfirststudent==NULL)
	{
		pnewstudent =(struct SSstudent*)malloc(sizeof(struct SSstudent)) ;
		gpfirststudent=pnewstudent ;
	}
	else
	{

		//navigate untill reach to last student
		plaststudent=gpfirststudent ;
		while(plaststudent->pnextstudent)
			plaststudent=plaststudent->pnextstudent ;
		// create new record and assign pnext to it
		pnewstudent =(struct SSstudent*)malloc(sizeof(struct SSstudent)) ;
		plaststudent->pnextstudent=	pnewstudent ;
	}
	// fill the record
	fill_the_record(pnewstudent);
	// set the next record to null
	pnewstudent->pnextstudent =NULL ;
}
int delete_record()
{
	char sel_temp[40]={0};
	unsigned int sel_id =0 ;
	struct SSstudent *pselectedstudent =  gpfirststudent;
	struct SSstudent *ppreviousstudent=NULL ;
	printf("Enter student id to be deleted\n");
	gets(sel_temp);
	sel_id=atoi(sel_temp);
	if(gpfirststudent)
	{
		while(pselectedstudent)
		{
			if(pselectedstudent->student.id==sel_id )
			{
				if(ppreviousstudent)
				{
					ppreviousstudent->pnextstudent=pselectedstudent->pnextstudent;
				}
				else
				{
					gpfirststudent=pselectedstudent->pnextstudent ;
				}
              free(pselectedstudent);
			}

			ppreviousstudent=pselectedstudent;
			pselectedstudent=pselectedstudent->pnextstudent ;

				return 1 ;
		}

	}
	printf("cannot find student ID !!\n") ;
	return 0 ; // cannot find id
}
void view_students ()
{
	int count =0;
	struct SSstudent *pcurrentstudent =gpfirststudent;
	if(gpfirststudent)
	{
		while(pcurrentstudent)
		{
			printf("Student ID is :%d\n",pcurrentstudent->student.id);
			printf("Student Name is :%s\n",pcurrentstudent->student.name);
			printf("Student Height is :%.2f\n",pcurrentstudent->student.height);
			printf("\n\n");
			pcurrentstudent=pcurrentstudent->pnextstudent;
			count++;
		}
	}
	else
		printf("Empty list \n") ;
}
void delete_all()
{
	struct SSstudent *pcurrentstudent =gpfirststudent;
	if (gpfirststudent)
	{
		struct SSstudent *ptempstudent = pcurrentstudent ;
		while(pcurrentstudent)
		{
			pcurrentstudent=pcurrentstudent->pnextstudent;
			ptempstudent=pcurrentstudent;
			free(ptempstudent);
		}
		gpfirststudent=NULL ;
	}
	else
		printf("Empty list \n") ;
}
void reverse()
{
	if(gpfirststudent)
	{
		struct SSstudent *pcurrentstudent =  gpfirststudent;
		struct SSstudent *ppreviousstudent=NULL;
		struct SSstudent *pnextstudent=NULL;
		while(pcurrentstudent)
		{
			pnextstudent=pcurrentstudent->pnextstudent ;
			pcurrentstudent->pnextstudent=ppreviousstudent ;
			ppreviousstudent=pcurrentstudent ;
			pcurrentstudent =pnextstudent;
		}

		gpfirststudent = ppreviousstudent ;

	}
	else
		printf("Empty list !\n");

}
void node_from_the_end()
{
	if(gpfirststudent)
	{
		unsigned int no_of_record ;
		char record[40] ;
		printf("enter the number of record :") ;
		gets(record) ;
		no_of_record=atoi(record);
		struct SSstudent *pmainstudent =  gpfirststudent;
		struct SSstudent *plengthstudent =  gpfirststudent;
		struct SSstudent *prefrencestudent = gpfirststudent ;
		unsigned int count =0;
		unsigned int length =0 ;
		while (plengthstudent)
		{
			length++;
			plengthstudent=plengthstudent->pnextstudent;
		}
		if(no_of_record>length)
			printf("number of wanted record  exceeds the length of linked list!!\n") ;
		else
		{
			while(count!= no_of_record)
			{
				prefrencestudent=prefrencestudent->pnextstudent;
				count++;
			}

			while(prefrencestudent)
			{
				prefrencestudent=prefrencestudent->pnextstudent;
				pmainstudent=pmainstudent->pnextstudent ;
			}

			printf("Student ID is :%d\n",pmainstudent->student.id);
			printf("Student Name is :%s\n",pmainstudent->student.name);
			printf("Student Height is :%.2f\n",pmainstudent->student.height);
		}
	}

	else
		printf("Empty list !\n");

}
void middle ()
{
	if(gpfirststudent)
	{
		struct SSstudent *pslowstudent = gpfirststudent;
		struct SSstudent *ppreslowstudent = gpfirststudent;
		struct SSstudent *pfaststudent = gpfirststudent;
		struct SSstudent *plengthstudent =  gpfirststudent;
		unsigned int length =0;
		while (plengthstudent)
		{
			length++;
			plengthstudent=plengthstudent->pnextstudent;
		}
		while (pfaststudent&&pfaststudent->pnextstudent)
		{
			ppreslowstudent=pslowstudent;
			pslowstudent=pslowstudent->pnextstudent;
			pfaststudent=pfaststudent->pnextstudent;
			pfaststudent=pfaststudent->pnextstudent;
		}
		if (length %2==0)
		{
			printf("Student(1) ID is :%d\n",ppreslowstudent->student.id);
			printf("Student Name (1) is :%s\n",ppreslowstudent->student.name);
			printf("Student Height (1) is :%.2f\n",ppreslowstudent->student.height);
			printf("=============\n");
			printf("Student(2) ID is :%d\n",pslowstudent->student.id);
			printf("Student Name (2) is :%s\n",pslowstudent->student.name);
			printf("Student Height (2) is :%.2f\n",pslowstudent->student.height);
		}
		else
		{
			printf("Student ID is :%d\n",pslowstudent->student.id);
			printf("Student Name is :%s\n",pslowstudent->student.name);
			printf("Student Height is :%.2f\n",pslowstudent->student.height);
			printf("=============\n");
		}

	}
	else
		printf("Empty list !\n");

}




