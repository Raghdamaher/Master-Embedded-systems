#include<stdio.h>
int main()
{
  int  alpha =65;
  int  *ptr=&alpha;
  for(int i=0;i<26;i++)
  {
      printf("%c  ", (*ptr)++);

  }
}

