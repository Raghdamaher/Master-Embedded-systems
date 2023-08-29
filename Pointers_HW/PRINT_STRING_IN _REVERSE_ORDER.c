#include<stdio.h>
#include<string.h>
int main()
{
    int num;
  printf("input the number of elements to store in the array(max 15):");
  scanf("%d",&num);
  int arr[num];
  printf("input %d number of elements in the array:\n",num);
  for(int i=0;i<num;i++)
  {
      printf("element -%d:",i+1);
      scanf("%d",&arr[i]);
  }
  printf("\n\n");
  printf("the elements of array in reverse order are :\n");
  int *ptr=&arr[num-1];
   for(int i=num;i>0;i--)
  {
      printf("element -%d:%d\n",i,*ptr);
      ptr--;
  }
return 0;
}

