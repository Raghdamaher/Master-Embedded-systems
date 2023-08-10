#include<stdio.h>
int main()
{
    unsigned int num;
    printf("Enter an integer:");
    fflush(stdin);
    fflush(stdout);
    scanf("%u",&num);
    unsigned int arr[num+1];
    unsigned int sum=0;
     for(int i=1;i<=num;i++)
     {
         arr[i-1]=i;
     }
    for(int i=0;i<num;i++)
    {
         sum+=arr[i];
    }
printf("sum =%u",sum);

}
