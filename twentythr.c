#include<stdio.h>

int num[28123];
int ab[28123];
int final[28123];

int check(int nn)
{
  long sum=0;
  for(int i=1;i<nn;i++)
  {
    if(nn%i == 0)
      sum+=i;
  }

  if(sum > nn)
    return 1;
  return 0;
}
int main()
{
  long sum=0,ans;

  for(int i=0;i<28123;i++)
  {
    ab[i]=0;
    final[i]=0;
  }

  for(int i=0;i<28123;i++)
  {
    num[i]=i+1;

    int ans=check(num[i]);
    if(ans)
    {
        ab[i]=999;          //set abdundant number
    }
    else
    {
      ab[i]=0;
    }
    //printf("%d ", ab[i]);
  }

  for(int i=0;i<28123;i++)
    final[i]=0;

  for(int i=0;i<28123;i++)
  {
    for(int j=i;j<28123;j++)
    {
      if(ab[i] == 999 && ab[j] == 999)
      {
        sum=i+j+2;
        if(sum<=28123)
          final[sum-1]=999;
      }
    }
  }

  sum=0;
  for(int i=0;i<28123;i++)
  {

    if(final[i] == 999)
      continue;

    sum+=i+1;
  }

  printf("\n%ld", sum);

  return 0;
}
