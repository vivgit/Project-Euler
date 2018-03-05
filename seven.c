#include<stdio.h>
//#include<stdlib.h>
#include<math.h>

int check(long num)
{
  for(int i=2;i<=sqrt(num);i++)
  {
    if(num%i==0)
      return 0;
  }
  return 1;
}
int main()
{
  int count=0,n=2;
  while(1)
  {
    if(check(n))
    {
      count++;
      if(count == 10001)
        break;
    }
    n++;
  }
  printf("%d",n);

  return 0;
}
