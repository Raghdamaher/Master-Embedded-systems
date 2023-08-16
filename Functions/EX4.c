#include<stdio.h>
int res=1;
int power(int num,int pow);
int main()
{
    int base;
    unsigned int pow;
printf("enter base number:");
scanf("%d",&base);
printf("enter power number(positive number):");
scanf("%d",&pow);
printf("%d",power(base,pow));
 return 0;
}
int power(int num,int pow)
{

    res*=num;
    --pow;
    if(pow==0)
        return res;
    power( num, pow);
}
