#include<stdio.h>
int main()
{
    int num;
    unsigned int fac=1;
    printf("Enter an integer:");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&num);

  if(num<0)
        printf("Error!! Factorial of negative number does not exist ");
else if(num==0)
   {
        fac=1;
    printf("Factorial =%u",fac);
   }
else
{
    int arr[num+1];
    for(int i=1;i<=num;i++)
     {
         arr[i-1]=i;
     }
    for(int i=0;i<num;i++)
    {
         fac*=arr[i];
    }
    printf("Factorial =%u",fac);
}




}

