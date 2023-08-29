#include<stdio.h>
int main()
{
    printf("how to handle the pointers in the program .\n ");

    int m=29;
    int *ab=NULL;
    printf("Address of m:0x%x\n",&m);
    printf("Value of m : %d\n",m);
    printf("\n\n");
    printf("now ab is assigned with the address of m.\n");
    ab=&m;
    printf("Address of pointer ab :0x%x\n",ab);
    printf("Value of pointer ab  : %d\n",*ab);
    printf("\n\n");
    printf("the value of m assigned to 34 now.\n");
    m=34;
    printf("Address of pointer ab :0x%x\n",ab);
    printf("Value of pointer ab  : %d\n",*ab);
    printf("\n\n");
    printf("the pointer variable ab is assigned with the value 7 now.\n");
    *ab=7;
    printf("Address of m:0x%x\n",&m);
    printf("Value of m : %d\n",m);
    return 0;
}
