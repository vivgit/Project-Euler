#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  long grid[n+1][n+1];

  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=n;j++)
    {
      grid[i][j]=0;
    }
  }
  //Initialize the number of ways possible from boundary points i.e. 1 because left and right is not allowed

  for(int i=0;i<n+1;i++)
  {
    grid[i][n]=1;
    grid[n][i]=1;
  }

  for(int i=n-1;i>=0;i--)
  {
    for(int j=n-1;j>=0;j--)
    {
        grid[i][j]+=grid[i][j+1]+grid[i+1][j];
    }
  }
/*
  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=n;j++)
    {
      printf("%ld ", grid[i][j]);
    }
    printf("\n");
  }
  */
  printf("%ld\n", grid[0][0]);

  return 0;
}
