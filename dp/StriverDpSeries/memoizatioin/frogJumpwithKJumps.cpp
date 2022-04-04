#include<bits/stdc++.h>
using namespace std;


int solve(int n,int k,vector<int> &arr,vector<int> &dp){
     
     int ans=1e8;
    
    if(n==0)return 0;
    if(n<0)return 1e8;

    if(dp[n]!=-1)return dp[n];

   for(int j=1;j<=k;j++){
     if(n-j>=0)  ans=min(ans,solve(n-j,k,arr,dp)+abs(arr[n]-arr[n-j]));
     else break;
   }

    return dp[n]=ans;
}
