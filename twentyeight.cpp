#include<bits/stdc++.h>

using namespace std;

int main()
{
  long val=2,sum=1,c=0,x=1;

  while(x<1001*1001)
  {
    while(c<4)
    {
      x=x+val;
      cout << x << " " << c << "\n";
      sum+=x;
      c++;
    }
    c=0;
    val+=2;
  }

  cout << sum;

  return 0;
}
