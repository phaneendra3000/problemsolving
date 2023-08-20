#include <bits/stdc++.h>
 int solve(vector<int>&arr,int n ,int i,int asize,int bsize,int as,int bs)
 {
     int mina = INT_MAX;
     int minb = INT_MAX;
    if(i==n)
    {
        return abs(as- bs);
    }
    if( asize<(n/2+ n%2 ))
    {
        as = as + arr[i];
         mina = solve(arr,n,i+1,asize+1,bsize,as,bs);
        as = as - arr[i];
    }
    if( bsize< (n/2 ))
    {
        bs = bs + arr[i];
         minb = solve(arr,n,i+1,asize,bsize+1,as,bs);
    bs = bs - arr[i];
    }
   
   return min( minb,mina);
    
 }
int tugOfWar(vector<int> &arr, int n)
{
   return solve(arr,n,0,0,0,0,0) ; 
}
