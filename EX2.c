#include<stdio.h>
int main()
{

    char alph;
    printf("Enter an alphabet:");
    fflush(stdin);
    fflush(stdout);
    scanf("%c",&alph);
    if(alph==('a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U'))
        printf("%c is a vowel");
    else
         printf("%c is a consonant");
}
