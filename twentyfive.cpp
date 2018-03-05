#include<bits/stdc++.h>

using namespace std;

long fib[1000000];
int check(long n)
{
  long c=0;
  while(n>0)
  {
    c++;
    n/=10;
  }
  //cout << "\n" << c;
  if(c > 1000)
    return 1;
  return 0;
}
int main()
{
  fib[0]=fib[1]=1;
  long in=2;
  while(true)
  {
    fib[in]=fib[in-1]+fib[in-2];
    cout << "\n" << fib[in];

    if(check(fib[in]))
    {
      cout << in;
      return 0;
    }
    in++;
  }
}
