#include<stdio.h>
struct add_complex_numbers
{
    float real_num1;
    float imag_num2;
};

int main()
{
    struct add_complex_numbers num1;
    struct add_complex_numbers num2;

    printf("for 1st complex number\nenter real and imaginary respectively:");
    scanf("%f %f",&num1.real_num1,&num1.imag_num2);
      printf("for 2nd complex number\nenter real and imaginary respectively:");
    scanf("%f %f",&num2.real_num1,&num2.imag_num2);
    printf("sum=%.1f+%.1fi",num1.real_num1+num2.real_num1,num1.imag_num2+num2.imag_num2);
    return 0;
}
