#include<stdio.h>
int max_number_of_ones(int x);
int main()
{int n;
    scanf("%d",&n);
    printf("%d\n", max_number_of_ones(n));
    int n1;
    scanf("%d",&n1);
    printf("%d", max_number_of_ones(n1));
 return 0;
}
int max_number_of_ones(int x)
{
    int max=0;
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
     {
      counter++;
        if(counter>max)
        max=counter;
     } else
     counter=0;}
  return max;
}

