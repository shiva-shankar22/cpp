#include<bits/stdc++.h>
using namespace std;


int solve(vector<vector<int>> &arr,int i,int j,vector<vector<int>> &dp){
   if(i==0 &&j==0)return arr[i][j];
   
   if(i<0 || j<0)return INT_MAX;
   int left=INT_MAX,right=INT_MAX;
 if(dp[i][j]!=-1)return dp[i][j];
   left=solve(arr,i-1,j,dp);
   right=solve(arr,i,j-1,dp);

 return dp[i][j]= min(left,right)+arr[i][j];
}

int main(){
       vector<vector<int>> arr{ {1,2,3},
                                {4,5,6},
                                {7,8,9} };
         vector<vector<int>> dp(4,vector<int>(4,-1));

     cout<<endl<<solve(arr,2,2,dp)<<endl;


      cout<<"dp array"<<endl;

  for(auto &it: dp){
      for(auto &i:it)
          cout<<i<<" ";
          cout<<endl;
  }
  

    return 0;
}