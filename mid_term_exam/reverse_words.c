#include<stdio.h>
#include<string.h>
void reverse_words(char string[])
{
    int n=0;
    int c,i=0;
    for( i=strlen(string)-1;i>0;i--)
    {
        if(string[i]==' ')
            {
                printf("%s ",&string[i+1]);
               break;
            }
    }
for(int j=0;j<=i;j++)
{
    printf("%c",string[j]);
}
}
int main()
{
    int n=20;
    char sen[1000];
    gets(sen);
    reverse_words(sen);
    return 0;
}
