#include<stdio.h>
int number_of_ones(int x);
int main()
{int n,n1;
    scanf("%d",&n);
    printf("%d\n",number_of_ones(n));
    scanf("%d",&n1);
    printf("%d",number_of_ones(n1));
 return 0;
}
int number_of_ones(int x)
{
    int arr[32],i=0,counter=0;
  while(x!=0)
  {
      arr[i]=x%2;
      x=x/2;
      i++;
  }
  for(int j=0;j<i;j++)
  {
     if(arr[j]==1)
     counter++;
  }
  return counter;
}
