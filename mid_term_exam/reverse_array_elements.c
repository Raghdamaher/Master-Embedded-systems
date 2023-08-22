#include <stdio.h>
void reverse_array_element(int n,int arr[])
{
    for(int j=n-1;j>=0;j--)
        {
            printf("%d ",arr[j]);
        }
}
int main() {
   int n;
  scanf("%d",&n);
  int arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
 reverse_array_element(n,arr);
 return 0;
}

