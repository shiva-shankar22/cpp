#include<bits/stdc++.h>
using namespace std;


bool isSafe(int i,int j,int n,int m,vector<vector<int>> &grid){
         
         if(i>=n || j>=m )return false;

         if(grid[i][j])return false;
    return true;     
}

int solve(vector<vector<int>> &g,int i,int j,int k,int n,int m){

       if(i==n-1 && j==m-1)return 0;

       if(i>=n|| j>=m)return 1e8;
         
         int ans=1e8;
        for(int l=1;l<=k;l++){

          for(int ll=1;ll<=k;ll++){
                
              if(isSafe(i+l,j+ll,n,m,g))  

              ans=min(ans, 1+ solve(g,i+l,j+ll,k,n,m));
          }

        }
    
   return ans;
} 

int getMinMoves(vector<vector<int>> &maze,int k){
       return solve(maze,0,0,maze.size(),maze.size(),k);    
}

int main(){

}