#include<stdio.h>
struct student_info
{
    char gname[100];
    int groll;
    float gmarks;
};
int main()
{
    struct student_info student1;
   printf("enter information of students:\n");
   printf("enter name:");
   scanf("%s",&student1.gname);
    printf("enter roll number:");
   scanf("%d",&student1.groll);
    printf("enter marks:");
   scanf("%f",&student1.gmarks);
   printf("displaying information\n");
   printf("name:%s\nroll:%d\nmarks:%.2f\n",student1.gname,student1.groll,student1.gmarks);
   return 0;
}

