#include<stdio.h>
int main()
{
    char character;
    int x=0;
    printf("Enter a character:");
    scanf("%c",&character);
   int arr[55];
   int j=65;
   int p=97;
   for(int i=0;i<26;i++)
   {
       arr[i]=j;
       j++;
   }
   for(int i=26;i<52;i++)
   {
       arr[i]=p;
       p++;
   }
   for(int i=0;i<52;i++)
   {
       if(arr[i]==(int)character)
       {
          x=1;
           break;
       }
       else
       {

       }
   }
   if(x==1)
        printf("%c is an alphabet",character);
   else
        printf("%c is not an alphabet",character);
    return 0;
}

