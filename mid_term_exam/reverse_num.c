#include<stdio.h>
void rev (int x);
int main()
{  int n1;
    scanf("%d",&n1);
     rev(n1);
     printf("\n");
      int n2;
    scanf("%d",&n2);
    rev(n2);
 return 0;
}
void rev (int n)
{
    int x,i,j;
    int c=n;
    int a=0;
    while(c!=0)
    {
       x=c%10;
       c=c/10;
       a++;
    }
    int arr[a];
    j=0;
     while(n!=0)
    {
       i=n%10;
       n=n/10;
      arr[j]=i;
      j++;
    }
    for(int r=0;r<a;r++)
    {
         printf("%d",arr[r]);
    }
}
