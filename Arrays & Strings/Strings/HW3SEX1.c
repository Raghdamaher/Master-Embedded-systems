#include<stdio.h>
#include<string.h>
int main()
{
    char sen[200];
    char character;
    int count=0;
  printf("enter a string:");
  gets(sen);
  fflush(stdin);
  fflush(stdout);
  printf("enter a character to find frequency:");
   scanf("%c",&character);
   for(int i=0;i<strlen(sen);i++)
   {
       if(sen[i]==character)
        count++;
   }
   printf("frequency of %c=%d",character,count);
  return 0;
}
