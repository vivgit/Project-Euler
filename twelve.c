#include<stdio.h>
#include<math.h>

int main()
{
  long num,c,n=1,val;
  while(1)
  {
    num=n*(n+1)*0.5;

    printf("%ld ",num);
    val=0;
    for(int i=1;i<=sqrt(num);i++)
    {
      if(num%i == 0)
      {
        if(num/i == i)
          val++;
        else
          val+=2;
      }

    }
    printf("%ld\n", val);
    if(val > 500)
      break;
    n++;
  }

  printf("%ld\n", num);
  return 0;
}
