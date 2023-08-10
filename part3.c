#include<stdio.h>
int main()
{
    int num1;
    int num2;
    printf("Enter two integers:");
    fflush(stdin);
    fflush(stdout);
    scanf("%d %d",&num1,&num2);
    printf("sum:%d\n",num1+num2);
    return 0;
}
