#include<stdio.h>
int main()
{
    float a[2][2];
    float b[2][2];
    float sum[2][2];
    printf("enter the elements of 1st matrix\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf(" enter a%d%d:",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }
     printf("enter the elements of 2nd matrix\n");
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
             printf(" enter b%d%d:",i+1,j+1);
            scanf("%f",&b[i][j]);
        }
    }
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
           sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of matrix :\n");
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
         printf("%.1f\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
