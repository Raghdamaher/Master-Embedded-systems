#include<stdio.h>
int main()
{
    char oper;
    float num1;
    float num2;
   printf("Enter operator either + or - or * or divide: ");
     fflush(stdin);
    fflush(stdout);
   scanf("%c",&oper);
   printf("Enter a number:");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f",&num1,&num2);
    switch(oper){
    case '+':
    printf("%.1f + %.1f=%.1f",num1,num2,num1+num2);
    break;
    case '-':
   printf("%.1f - %.1f=%.1f",num1,num2,num1-num2);
    break;
    case '*':
    printf("%.1f * %.1f=%.1f",num1,num2,num1*num2);
    break;
    case '/':
  printf("%.1f / %.1f=%.1f",num1,num2,num1/num2);
    break;
    }

    return 0;
}
