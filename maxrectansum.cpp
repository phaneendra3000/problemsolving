#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int arr[4][5] ;
    int n = 4,m=5;
    for(int i =0; i<n ;i++)
    {
        for(int j = 0; j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
	int a[n][m+1];
    int maxs= INT_MIN;
    for(int i = 0 ;i<n;i++)
    {
        a[i][0]= 0;
        a[i][1]= arr[i][0];
    }
    for(int i = 0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            a[i][j+1]=a[i][j]+ arr[i][j];
        }
    }
     for(int i =0; i<n ;i++)
    {
        for(int j = 0; j<=m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
   for(int left =0; left < m ; left++)
  {
      for(int right = left+1 ; right <m ;right ++)
      {
          int sum = 0;
          for(int k = 0; k < n;k++)
          {
              sum = sum + a[k][right] - a[k][left];
              maxs = max(maxs,sum);
              if(sum<0)
              {
                  sum = 0;
              }
          }
      }
  }
  cout<<maxs;
}
