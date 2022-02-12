#include<vector>
#include<iostream>
using namespace std;

int minCost(vector<vector<int>> &mat,int n,int m,vector<vector<int>> &dp){
         
    if(n==0 && m==0)return mat[n][m];

    if(n<0 || m<0)return 1000000;

    if(dp[n][m]!=-1)return dp[n][m];
    
    return dp[n][m]=min(mat[n][m]+minCost(mat,n-1,m,dp),mat[n][m]+minCost(mat,n,m-1,dp));
}

int main(){
     int n=3,m=3;
   //  cin>>n>>m;
    
    vector<vector<int>> mat(n,vector<int> (m));
   int cnt=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          mat[i][j]=cnt++;
        }
    }
    
    vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
    
 /*   for(auto &it: mat)
      for(auto &i: it)
        cin>>i;
    */
    cout<<endl<<minCost(mat,n-1,m-1,dp)<<endl;

    cout<<endl<<endl;

    for(auto &it : dp){ 
      for(auto &i : it)
          cout<<i<<" ";
         cout<<endl;
    }

    return 0;
}