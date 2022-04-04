#include<bits/stdc++.h>
using namespace std;


//min energy required to reach nth stair

int solve(int n,vector<int> &arr,vector<int> &dp){
    if(n==0)return 0;
    if(n<0)return 1e8;
 if(dp[n]!=-1)return dp[n];
    int ans=1e8;

    ans=min(ans,solve(n-1,arr,dp)+abs(arr[n]-arr[n-1]));
    ans=min(ans,solve(n-2,arr,dp)+abs(arr[n]-arr[n-2]));

    return dp[ans]=ans;
}