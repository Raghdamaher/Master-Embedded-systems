#include<stdio.h>
int main()
{
    int state=0;
    int num;
    int num1;
    int i=0;
  printf("enter no of elements:");
 scanf("%d",&num);
 int arr[num];
 for(int j=0;j<num;j++)
 {
     scanf("%d",&arr[j]);
 }
 printf("enter the elements to be searched:");
 scanf("%d",&num1);
 for( i=0;i<num;i++)
 {
     if(num1==arr[i])
     {
         state=1;
         break;
     }

 }
 if(state==1)
 printf("number found at the location=%d",i+1);
 else
    printf("number not found at the array ");
    return 0;
}
