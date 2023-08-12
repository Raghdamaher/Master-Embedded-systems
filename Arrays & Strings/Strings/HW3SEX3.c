#include<stdio.h>
#include<string.h>
int main()
{
char sen[1000];
char rev_sen[1000];
printf("enter the string :");
fflush(stdin);
fflush(stdout);
gets(sen);
int j=strlen(sen);
char temp;
for(int i=0;i<strlen(sen);i++)
{
    rev_sen[j-1]=sen[i];
    j--;
}
printf("reverse string is :%s",rev_sen);
return 0;
}
