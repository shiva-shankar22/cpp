#include<iostream>
#include<climits>
#include<vector>
using namespace std;



int solve(int ar[],int idx,int n,vector<int> &dp){
    
    if(idx>=n-1)return 0;
    if(dp[idx]!=-1)return dp[idx];
    int val=ar[idx];
    
    if(ar[idx]==0)return INT_MAX;
    int ans=INT_MAX;
    for(int i=1;i<=val;i++){
        int temp=solve(ar,idx+i,n,dp);
      if(temp!=INT_MAX)
        ans=min(ans,temp+1);
      
    }
    
    return dp[idx]=ans;
    
}


int minJumps(int ar[],int n){
    vector<int> dp(n+1,-1);
    
    return solve(ar,0,n,dp);
}


int main(){
    
  int  arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    
    cout<<minJumps(arr,10)<<endl;;
    
    return 0;
}