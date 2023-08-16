#include<stdio.h>
int res=1;
int fac(int num);
int main()
{
    int num;
printf("enter an positive integer:");
scanf("%d",&num);
printf("factorial of %d:%d",num,fac(num));

}
int fac(int num)
{
    if(num==0)
        return res;
    res*=num;
    fac(--num);


}
