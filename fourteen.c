#include<stdio.h>

int seqlen[1000000];

int seqfind(int num)
{
  if(num == 1)
    return 1;
  int c=0;
  while(num != 1)
  {
    if(num % 2 == 0)
    {
      c++;
      num/=2;
    }
    else
    {
      c++;
      num=num*3+1;
    }
    if(seqlen[num-1] != 0)
    {
      c+=seqlen[num-1];
      return c;
    }
  }
  return c;
}
int main()
{
  int num=1,max=0;
  while(num < 1000000)
  {
    if(seqlen[num-1] == 0)
    {
      seqlen[num-1]=seqfind(num);
    }

    if(seqlen[num-1] > max)
      max=seqlen[num-1];

    printf("%d  %d\n",num, seqlen[num-1]);
    num++;
    //if(num == 11)
      //break;
  }
  printf("%d\n", max);
  return 0;
}
