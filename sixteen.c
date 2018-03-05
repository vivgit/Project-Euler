#include<stdio.h>

long ans[600];

int main()
{
    long carry,temp,digit,sum=0;
    ans[599]=1;
    carry=0;
    for(int i=1;i<=1000;i++)
    {
      carry=0;
      for(int j=599;j>=0;j--)
      {
        temp=ans[j]*2+carry;
        carry=temp/10;
        digit=temp%10;

        ans[j]=digit;

    //    if(temp == 0)
      //    break;
      }

      for(int j=0;j<=599;j++)
      {
        printf("%ld ",ans[j]);
      }
      printf("\n");
    }

    for(int i=0;i<=599;i++)
      sum+=ans[i];
    printf("%ld\n", sum);

    return 0;
}
