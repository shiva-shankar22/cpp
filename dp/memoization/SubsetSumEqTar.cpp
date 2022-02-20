#include<bits/stdc++.h>
using namespace std;


bool util(vector<int> &arr,int i,int tar,vector<vector<int>> &dp){
    if(dp[i][tar]!=-1)return dp[i][tar];
    if(i==0){
        if((tar-arr[0]==0) || tar==0)return 1;
        return 0;
    }
    if(tar==0)return 1;
   bool fg1=0,fg2=0;
   
   if(tar-arr[i]>=0)
      fg1= util(arr,i-1,tar-arr[i],dp);
    
    fg2=util(arr,i-1,tar,dp);
   
   return dp[i][tar]=max(fg1 , fg2);
}


bool solve(vector<int> &arr,int tar){
         int n=arr.size();
         vector<vector<int>> dp(n+1,vector<int>(tar+1,-1));
         return util(arr,n-1,tar,dp);
}


int main(){
     
 vector<int> arr={1,2,3,4,5,6,7,8,9,10};

 if(solve(arr,25))
     cout<<"helo"<<endl;
    else cout<<"hola";

    return 0;
}