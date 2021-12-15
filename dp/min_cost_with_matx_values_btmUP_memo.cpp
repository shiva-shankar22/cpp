#include<vector>
#include<iostream>
using namespace std;

int minCost(vector<vector<int>> &mat,int i,int j,int n,int m,vector<vector<int>> &dp){
         
         if(i==n-1 && j==m-1) return mat[i][j];
        
         if(i>=n||j>=m) return 1000000;

         if(dp[i][j]!=-1)return dp[i][j];

         else 
            return dp[i][j]= min(mat[i][j]+minCost(mat,i+1,j,n,m,dp),mat[i][j]+minCost(mat,i,j+1,n,m,dp));
         
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
    cout<<endl<<minCost(mat,0,0,n,m,dp)<<endl;

    cout<<endl<<endl;

    for(auto &it : dp){ 
      for(auto &i : it)
          cout<<i<<" ";
         cout<<endl;
    }

    return 0;
}