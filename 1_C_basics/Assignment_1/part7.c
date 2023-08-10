#include<stdio.h>
int main()
{
    int a;
    int b;
     printf("Enter value of a:");
      fflush(stdin);
    fflush(stdout);
   scanf("%d",&a);
   printf("Enter value of b:");
    fflush(stdin);
    fflush(stdout);
   scanf("%d",&b);
    a^=b;
    b^=a;
    a^=b;
     printf("After swapping, Value of a =%d\n",a);
   printf("After swapping, Value of b =%d\n",b);
    return 0;
}

