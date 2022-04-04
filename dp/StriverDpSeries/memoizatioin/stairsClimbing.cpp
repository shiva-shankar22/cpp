/*
    Time Complexity : O(2^N)
    Space Complexity : O(N)
    
    Where ‘N’ is the number of stairs.
*/
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007



int solve(long long n,vector<int> &dp){
    if(n==0)return 1;
    
    if(n<0)return 0;
    
    if(dp[n]!=-1)return dp[n];
    return dp[n]=(solve(n-1,dp)+solve(n-2,dp))%MOD;
}

int countDistinctWayToClimbStair(long long nStairs)
{
   vector<int> dp(nStairs+1,-1);
    int totalWay = solve( nStairs,dp);

    return totalWay;
}

