#include<bits/stdc++.h>
using namespace std;

int util(vector<vector<int>> &arr,int i,int j,int n,vector<vector<int>> &dp){
     if(i==n-1)return  arr[i][j];
   if(dp[i][j]!=-1)return dp[i][j];
     int left=INT_MAX,right=INT_MAX;
 
     left=util(arr,i+1,j,n,dp)+arr[i][j];
     right=util(arr,i+1,j+1,n,dp)+arr[i][j];

     return  dp[i][j]=min(left,right);
}

int solve(vector<vector<int>> &arr){
    int n=arr.size();
         vector<vector<int>> dp(n,vector<int> (n,-1));
 

     return util(arr,0,0,n,dp);
}

int main(){
     
     vector<vector<int>> arr={ {1},
                               {2,3},
                               {4,5,6}   ,
                                {7,8,9,10},
                                {11,12,13,14,15} };

     cout<<endl<<solve(arr)<<endl;

    return 0;
}