#include<vector>
#include<iostream>
using namespace std;

int minCost(vector<vector<int>> &mat,int n,int m,vector<vector<int>> &dp){
     
     dp[0][0]=mat[0][0];
/*
     for(int i=1;i<=n;i++)
        dp[i][0]=dp[i-1][0]+mat[i][0];
     
    for(int j=1;j<=m;j++)
       dp[0][j]=dp[0][j-1]+mat[0][j];
*/
//dp[0][0]=mat[0][0];
    for(int i=1;i<=n;i++)
       dp[i][0]=dp[i-1][0]+mat[i][0];

   for(int i=1;i<=m;i++)
       dp[0][i]=dp[0][i-1]+mat[0][i];



    for(int i=0;i<=n;i++)
      for(int j=0;j<=m;j++)
           if(!(i==0 ||j==0)) 
              dp[i][j]=min(dp[i-1][j]+mat[i][j],dp[i][j-1]+mat[i][j]);    
  
      return dp[n][m];        
}

int main(){
     int n=3,m=3;
    // cin>>n>>m;
    
    vector<vector<int>> mat(n,vector<int> (m));
 /*  int cnt=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          mat[i][j]=cnt++;
        }
    }
   */ 
    vector<vector<int>> dp(n,vector<int> (m,-1));
    
    for(auto &it: mat)
      for(auto &i: it)
        cin>>i;
 ///   */
    cout<<endl<<minCost(mat,n-1,m-1,dp)<<endl;

    cout<<endl<<endl;

    for(auto &it : dp){ 
      for(auto &i : it)
          cout<<i<<" ";
         cout<<endl;
    }

    return 0;
}