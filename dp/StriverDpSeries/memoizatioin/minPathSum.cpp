#include<bits/stdc++.h>
using namespace std;

int fun(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &dp,vector<int> &ds){
        if(i==0 && j==0){
            
            for(int it: ds)
                 cout<<it<<" ";
           cout<<endl;
            
            return grid[i][j];
        }
        if(i<0 || j<0)return 1e8;
        //if(dp[i][j]!=-1)
        //      return dp[i][j];
       // return dp[i][j]= (grid[i][j] + min(  fun(i-1,j,grid,dp) ,fun(i,j-1,grid,dp) ));
          
        ds.push_back(grid[i][j]);
        int l=fun(i-1,j,grid,dp,ds);
        ds.pop_back();
        ds.push_back(grid[i][j]);
        int r =fun(i,j-1,grid,dp,ds);
         ds.pop_back();
    }
    int minPathSum(vector<vector<int>>& grid) {
        
        int n=grid.size(),m=grid.size();
        vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
        vector<int> ds;
        return fun(n-1,m-1,grid,dp,ds);
    }

int main(){
    vector<vector<int>> g={{1,2,3},{4,5,6}};

    cout<<minPathSum(g)<<endl;
}