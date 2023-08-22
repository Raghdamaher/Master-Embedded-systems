#include<stdio.h>
float square_root(int x);
int main()
{
int n;
scanf("%d",&n);
printf("%.3f\n",square_root(n));
int n2;
scanf("%d",&n2);
printf("%.3f\n",square_root(n2));

return 0;
}
float square_root(int x)
{
    float i;
for(i=0.01;i*i<x;i+=0.0001);
return i;
}
