#include<stdio.h>
int main()
{
    int num;
    int ele;
    int loc;
   printf("enter no of elements:");
    scanf("%d",&num);
int arr[num+1];
 for(int i=0;i<num;i++)
        scanf("%d",&arr[i]);
  arr[num]=0;
 printf("enter the element to be inserted:");
 scanf("%d",&ele);
 printf("enter the location:");
 scanf("%d",&loc);
 for(int i=num;i>loc;i--)
 {
    arr[i]=arr[i-1];
 }
 arr[loc-1]=ele;
 for(int i=0;i<num+1;i++)
 {
   printf("%d ",arr[i]);
 }
    return 0;
}
