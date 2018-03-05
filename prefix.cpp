#include<bits/stdc++.h>
#include<unistd.h>
//shared memory -> shmget()
#include<sys/ipc.h>
#include<sys/shm.h>
// -> shmat()
#include<sys/types.h>

using namespace std;

int main()
{

  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
  int ps[4][4], x=0,sum=0;

  for(int i=0;i<4;i++){
    sum=0;
    for(int j=0;j<4;j++){
      sum=sum+arr[x++];
      ps[i][j]=sum;
      //ps[i][j]=arr[x++];
    }
  }
  int id=fork();

  if(id == 0)       //child process
  {
    for(int i=1;i<4;i++)
    {
      ps[i][3]+=ps[i-1][3];
    }
  }
  else            //parent process
  {
      for(int i=1;i<4;i++)
      {
        for(int j=0;j<3;j++)
        {
          ps[i][j]+=ps[i-1][3];
        }
      }
  }
  cout << "\t";
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      cout << ps[i][j] << " ";
    }
    cout << "\t";
  }
  return 0;

}
