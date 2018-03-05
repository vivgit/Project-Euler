#include<bits/stdc++.h>

using namespace std;
int quo[1000];
void reset()
{
  for(int i=0;i<1000;i++)
    quo[i]=0;
}


int check(int ind, int q)
{
  for(int i=ind+1;i<=999;i++)
  {
    if(quo[i] == q)
    {
      return (i - ind);
    }
  }
  return 0;
}
int main()
{
  int q,x,ind,l,max=0,maxn;
  for(int i=999;i>0;i--)
  {
    cout << i << " " << max;
    reset();
    ind=999;
    x=10;
    while(1)
    {
      while(x<i)
      {
        x=x*10;
        quo[ind]=0;
        ind--;
      }

      q=x/i;          //get the quotient
      x=x-i*q;
      quo[ind]=q;     //store it in array
      int l=check(ind, q);
      if(l)
      {
        if(l > max)
        {
          max=l;
          maxn=i;
        }
        break;
      }
      ind--;
    }
  }
  cout << max << " " << maxn;
  return 0;
}
