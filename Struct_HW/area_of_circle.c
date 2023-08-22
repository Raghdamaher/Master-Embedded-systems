#include<stdio.h>
#define PI 3.1415926
#define Area(r)(PI*r*r)
int main()
{
    int r;
    float area;
    printf("enter the radius:");
    scanf("%d",&r);
    area=Area(r);
    printf("%.2f",area);
      return 0;
}
