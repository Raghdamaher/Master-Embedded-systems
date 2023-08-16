#include<stdio.h>
#include<string.h>
void rev();
int main()
{
    printf("enter the sentence:");
    rev();
    return 0;
}
void rev()
{
    char c;
   scanf("%c",&c);
    if(c!='\n')
    {
       rev();
       printf("%c",c);
    }

}
