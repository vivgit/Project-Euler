#include<stdio.h>

int main()
{
  int a=1,b=1,c=1,sum;

  for(int a=1;a<=1000;a++)
  {
    for(int b=1;b<=1000;b++)
    {
      for(int c=1;c<=1000;c++)
      {
        sum=a+b+c;
        if(sum == 1000 && a*a+b*b == c*c)
        {
          printf("%d %d %d\n",a, b, c );
          break;
        }
      }
    }
  }

  return 0;
}
