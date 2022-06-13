#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums,int idx,int n,vector<int> &dp){
        if(idx>=n-1)return 0;
        if(dp[idx]!=-1)return dp[idx];
        int val=nums[idx];
        if(val==0)return 1e8;
        int mini=1e8;
        for(int i=1;i<=val;i++)
           
            mini=min(mini,1+solve(nums,idx+i,n,dp));
        
        return dp[idx]= mini;
    }
    
    int jump(vector<int>& nums) {
     int n=nums.size();
          vector<int> dp(n,0);
          dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            int mini=1e8;

            for(int j=1;j<=nums[i] && j+i<n;j++)
                 mini=min(mini,dp[j+i]);
            dp[i]=mini+1;
        }
        return dp[0];
   }




int main(){

}
