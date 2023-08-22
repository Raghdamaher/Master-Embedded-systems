#include<stdio.h>
int main()
{

   int n1,n2;
    scanf("%d",&n1);
    printf("%d\n",sum(n1));
    scanf("%d",&n2);
     printf("%d\n",sum(n2));

 return 0;
}
int sum (int n)
{     int x;
 int sum=0;
     while(n!=0)
    {
       x=n%10;
       n=n/10;
       sum+=x;
    }
    return sum;
}
