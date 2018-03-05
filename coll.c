#include<stdio.h>
#include<time.h>

int main()
{
  clock_t beg=clock();
  long n=999999,max=0,nn,c,nm;

  while(n != 0)
  {
    c=1;
    nn=n;
    while(nn != 1)
    {
      if(nn%2 == 0)
        nn/=2;
      else
        nn=nn*3+1;
      c++;
    }

    if(c > max)
    {
      max=c;
      nm=n;
    }


    //printf("%ld\n", n);
    n--;
  }

  printf("%ld\n", nm);

  clock_t end=clock();
  printf("%f\n", (double)((end-beg)/CLOCKS_PER_SEC));
  return 0;
}
