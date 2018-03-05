#include <stdio.h>
int main()
{
  long sum=0,a,temp;
  long one[]={3,3,5,4,4,3,5,5,4};         //upto nine
  long ten[]={3,6,6,5,5,5,7,6,6};         //upto ninety
  long aux[]={6,6,8,8,7,7,9,8,8};         // 11 to 19
  for(int i=1;i<=1000;i++)
  {
    temp=i;
    if(temp<10)
    {
      sum+=one[i-1];
    }
    else if(temp == 10)
    {
      sum+=3;
    }
    else if(temp <= 19)
    {
      sum+=aux[(temp%10)-1];
    }
    else if(temp>19 && temp<100)
    {
        a=temp%10;
        if(a!=0)
        {
          sum+=one[(temp%10)-1];
        }
        temp/=10;
        sum+=ten[(temp%10)-1];
    }
    else if(temp > 99)
    {
        while(temp>0)
        {
          if(temp%100 > 10 && temp%100 <20)
          {
              sum+=aux[(temp%10)-1];
              temp/=100;
          }
          else
          {
            a=temp%10;
            if(a!=0)
              sum+=one[(temp%10)-1];
            temp/=10;

            a=temp%10;
            if(a!=0)
              sum+=ten[(temp%10)-1];
            temp/=10;

          }
          a=temp%10;
          sum+=one[(temp%10)-1];
          sum+=10;
        }
    }
  }

  sum+=8;
  printf("%ld\n", sum);
  return 0;
}
