#include<stdio.h>
int main()
{
    float a;
    float b;
    float temp;
   printf("Enter value of a:");
    fflush(stdin);
    fflush(stdout);
   scanf("%f",&a);
   printf("Enter value of b:");
    fflush(stdin);
    fflush(stdout);
   scanf("%f",&b);
   temp=a;
   a=b;
   b=temp;
   printf("After swapping, Value of a =%.2f\n",a);
   printf("After swapping, Value of b =%.2f\n",b);
    return 0;
}
