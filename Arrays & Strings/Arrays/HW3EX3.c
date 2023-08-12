#include<stdio.h>
int main()
{
    int row;
    int col;
    printf("enter rows and columns of matrix:");
    scanf("%d %d",&row,&col);
    int a[row][col];
     int transpose_matrix[col][row];
    printf("enter elements of matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf(" enter a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("entered matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n\n");
    }

     for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
           transpose_matrix[i][j]=a[j][i];
        }
    }
    printf("transpose of matrix :\n");
     for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d  ",transpose_matrix[i][j]);
        }
        printf("\n\n");
    }
 return 0;
}
