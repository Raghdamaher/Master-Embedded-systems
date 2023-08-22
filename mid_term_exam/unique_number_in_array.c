#include<stdio.h>
int unique_number(int n,int a[]);
int main()
{int n;
  scanf("%d",&n);
  int arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int z=unique_number(n,arr);
printf("%d\n",z);
int n1;
  scanf("%d",&n1);
  int arr1[n1];
for(int i=0;i<n1;i++)
{
    scanf("%d",&arr1[i]);
}
int o=unique_number(n1,arr1);
printf("%d",o);
return 0;
}
int unique_number(int n,int a[])
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==i)
                continue;
            else
            {if(a[j]==a[i])
                {
                    flag=0;
                     break;
                }
                 else
                 {
                     flag=1;
            }}}
        if(flag==1)
            return a[i];
    }
}
