#include<stdio.h>
struct students_info
{
    char gname[100];
    int  gmarks;
};

int main ()
{
    struct students_info stud[10];
    printf("enter information of students:\n");
    for(int i=0;i<10;i++)
    {
        printf("for roll number %d\nenter name:",i+1);
        scanf("%s",&stud[i].gname);
        printf("enter marks:");
           scanf("%d",&stud[i].gmarks);
           printf("\n\n");
    }
    printf("displaying information of students:\n");
     for(int i=0;i<10;i++)
    {
        printf("information for roll number %d\n name:%s\nmarks:%d",i+1,stud[i].gname,stud[i].gmarks);
          printf("\n\n");
    }
    return 0;
}
