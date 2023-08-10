#include<stdio.h>
int main()
{
    float num1;
    float num2;
    float num3;
    printf("Enter three numbers:");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f %f",&num1,&num2,&num3);
    float max =num1;
    if (max<num2)
        max=num2;
    if (max<num3)
        max=num3;
        printf("Largest number=%.2f",max);

}
