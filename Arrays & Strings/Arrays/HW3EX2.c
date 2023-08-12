#include<stdio.h>
int main()
{
    int num;
    float sum=0;
    float average;
 printf("enter the number of data:");
 scanf("%d",&num);
 float arr[num];
for(int i=0;i<num;i++)
{
    printf("enter number:");
    scanf("%f",&arr[i]);
}
for(int i=0;i<num;i++)
{
    sum+=arr[i];
}
average=sum/num;
printf(" Average=%.2f",average);
return 0;
}
