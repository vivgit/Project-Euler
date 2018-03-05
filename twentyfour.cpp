#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;

  int l=s.length();
  char fc,cc,temp;

  sort(s.begin(),s.end());
  string des=s;
  sort(des.begin(), des.end(), greater<int>());

  long count=1;

  while(s != des)
  {
    int last=l-1;
    while( s[last-1] >= s[last] && last >=0 )
    {
      last--;
    }
    fc=s[last-1];           //get fc
    int fcin=last-1,ccin;              //store the index of fc


    //get ceiling character
    char min=s[last];
    for(int i=fcin+1;i<l;i++)
    {
      if(s[i] > fc && s[i] <= min)
      {
        min=s[i];
        ccin=i;
      }
    }
    cc=min;               //get cc

    //swapping
    s[fcin]=cc;
    s[ccin]=fc;


    sort(s.begin()+fcin+1,s.end());
    count++;
    if(count == 1000000)
      cout << "\n" << s;
  }

  return 0;
}
