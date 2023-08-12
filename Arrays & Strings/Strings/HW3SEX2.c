#include<stdio.h>
#include<string.h>
int main()
{
    char sen[1000];
    int i=0;
printf("enter a string:");
gets(sen);
 while(sen[i]!=0)
 {
     i++;
 }
  printf("length of string:%d",i);
return 0;
}
