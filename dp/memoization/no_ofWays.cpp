#include<bits/stdc++.h>
using namespace std;


int solve(int i,int j,vector<vector<int>> &dp){

    if(i==0 && j==0)return 1;
    
    if(i<0 || j<0)return 0;
      if(dp[i][j]!=-1)return dp[i][j];
    int left=solve(i-1,j,dp);
    int right=solve(i,j-1,dp);
  
  return dp[i][j]=(left+right);
}



int main(){
    int n=3,m=3;
     vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    cout<<solve(n,m,dp)<<endl;
cout<<"dp array"<<endl;

  for(auto &it: dp){
      for(auto &i:it)
          cout<<i<<" ";
          cout<<endl;
  }
    cout<<"ans"<<endl;
    cout<<dp[n][m];


    return 0;

}
