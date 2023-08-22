#include<stdio.h>
struct add_distance
{
    int gfeet;
    float ginch;
};
int main()
{
 struct add_distance dis1;
   printf("enter information of 1st distance:\n");
   printf("enter feet:");
   scanf("%d",&dis1.gfeet);
    printf("enter inch:");
   scanf("%f",&dis1.ginch);
  struct add_distance dis2;
   printf("enter information of 2nd distance:\n");
   printf("enter feet:");
   scanf("%d",&dis2.gfeet);
    printf("enter inch:");
   scanf("%f",&dis2.ginch);
   int sum_feet=dis1.gfeet+dis2.gfeet;
   float sum_inch=dis1.ginch+dis2.ginch;
   if(sum_inch>12)
   {
       sum_inch-=12.0;
       sum_feet++;
   }
   printf("sum of distances=%d'-%.1f\"",sum_feet,sum_inch);
   return 0;
}

