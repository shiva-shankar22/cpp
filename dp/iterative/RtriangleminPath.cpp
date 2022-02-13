#include<bits/stdc++.h>
using namespace std;


int solve(vector<vector<int>> &arr){
    int n=arr.size();
    vector<vector<int>> dp(n,vector<int>(n,0));


  /*
  if(i==n-1)return  arr[i][j];
   if(dp[i][j]!=-1)return dp[i][j];
     int left=INT_MAX,right=INT_MAX;
 
     left=util(arr,i+1,j,n,dp)+arr[i][j];
     right=util(arr,i+1,j+1,n,dp)+arr[i][j];

     return  dp[i][j]=min(left,right);
  */
  for(int j=0;j<n;j++)
     dp[n-1][j]=arr[n-1][j];

  for(int i=n-2;i>=0;i--){
      for(int j=i;j>=0;j--){
          int left=dp[i+1][j]+arr[i][j];
          int right=dp[i+1][j+1]+arr[i][j];
          dp[i][j]=min(left,right);
      }
  }

  return dp[0][0];
}


int main(){


     vector<vector<int>> arr={ {1},
                               {2,3},
                               {4,5,6}   ,
                                {7,8,9,10},
                                {11,12,13,14,15} };

        cout<<solve(arr);

    return 0;
}