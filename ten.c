#include<stdio.h>
#include<math.h>

int check(long num)
{
  for(long i=2;i<=sqrt(num);i++)
  {
    if(num%i == 0)
      return 0;
  }
  return 1;
}
int main()
{
  long sum=0;
  for(long i=2;i<=2000000;i++)
  {
    if(check(i))
    {
      sum+=i;
    }
  }
  printf("%ld\n", sum);
}
