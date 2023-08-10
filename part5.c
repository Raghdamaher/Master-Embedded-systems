#include<stdio.h>
int main()
{
    char character;
    printf("Enter a character:");
     fflush(stdin);
    fflush(stdout);
   scanf("%c",&character);
    printf("ASCII Value of %c =%d\n",character,character);
    return 0;
}
