#include<stdio.h>
int prime(int number);
int main()
{
    int num1,num2,prim;
   scanf("%d%d",&num1,&num2);
   int count =num2-num1;
for(int i=1;i<count+1;i++)
{
    if(num2==num1)
        break;

    prim=prime(num1);
    if(prim!=0)
    printf("%d ",prim);
    num1++;
}

return 0;
}
int prime(int number)
{
    int flag=0;
    if(number==0)
       flag=1;
    else
    {
        for(int i=2;i<number/2;i++)
        {
            if(number%i==0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
        return number;
    else
        return 0;
}
