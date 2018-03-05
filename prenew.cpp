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
  int ps[16],x=0,sum=0;
  int *p= arr;         //pointer to the array

  for(int i=0;i<16;i++){
    sum=0;
    for(int j=0;j<4;j++){
      //sum=sum+*(p+(4*i)+j);
      sum+=p[i*4+j];

      //*(p+(4*i)+j)=sum;
      p[4*i+j]=sum;
    }
  }
  int id=fork();

  if(id == 0)       //child process
  {
    for(int i=1;i<4;i++)
    {
      //*(p+(4*i)+3)+=*(p+(4*i)+3-4);
      p[4*i+3]+=p[4*i-4+3];
    }
  }
  else            //parent process
  {
      for(int i=1;i<4;i++)
      {
        for(int j=0;j<3;j++)
        {
          //*(p+(4*i)+j)+=*(p+(4*i)+3-4);
          p[4*i+j]+=p[4*i-4+3];
        }
      }
  }
  cout << "\t";
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      //cout << *(p+(4*i)+j) << " ";
      cout << p[4*i+j] << " ";
    }
    cout << "\t";
  }
  return 0;

}
