#include<stdio.h>
#include<time.h>

int len[999999];

void show()
{
  printf("\n");
  for(int i=0;i<10;i++)
    printf("%d ", len[i]);
}
int main()
{
  clock_t beg=clock();
  long n=1,max=0,nn,c,nm;

  while(n <= 999999)
  {
      c=1;
      nn=n;


      while(nn != 1)
      {
        if(nn%2 == 0)
          nn/=2;
        else
          nn=nn*3+1;
        if(nn <= 999999)
        {
          if(len[nn-1] != 0)
          {
            c+=len[nn-1];
            break;
          }
        }
        c++;
  //      printf("\n%ld %ld", nn, c  );
    //    show();
      }

      len[n-1]=c;
      if(c > max)
      {
        max=c;
        nm=n;
      }

  //    printf("\n%ld %d\n", n, len[n-1]);
      n++;
    //  printf("\n");
    }
    printf("%ld\n", nm);
    clock_t end=clock();
    printf("%f\n", (double)((end-beg)/CLOCKS_PER_SEC));
    return 0;
}
