#include<stdio.h>
int main()
{
    float num1;
    float num2;
    printf("Enter two integers:");
     fflush(stdin);
    fflush(stdout);
    scanf("%f %f",&num1,&num2);
    printf("sum:%.6f\n",num1*num2);
    return 0;
}
