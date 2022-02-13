#include<bits/stdc++.h>
using namespace std;


int main(){

  int n=3,m=3;
  vector<vector<int>> dp(n+1,vector<int> (m+1,0));

   cout<<"dp array"<<endl;

  for(auto &it: dp){
      for(auto &i:it)
          cout<<i<<" ";
          cout<<endl;
  }

  for(int i=0;i<n+1;i++){
      for(int j=0;j<m+1;j++){
          if(i==0 &&j==0)dp[i][j]=1;
         else{ 
          int left=0;
           int right=0;
           if(i>0)
               left=dp[i-1][j];
            if(j>0)   right=dp[i][j-1];
           
          dp[i][j]=(left+right);
          }
      }
  }

  cout<<"dp array"<<endl;

  for(auto &it: dp){
      for(auto &i:it)
          cout<<i<<" ";
          cout<<endl;
  }
    cout<<"ans"<<endl;
    cout<<dp[n][m];
}