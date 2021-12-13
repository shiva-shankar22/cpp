#include<iostream>
#include<vector>
using namespace std;


bool subsetSum(int ar[],int s,int n, vector<vector<bool>> &dp){
    if(n<=0){
        if(s==0)return true;
        return false;
    }
    
    if(s-ar[n-1]>=0)
      return (subsetSum(ar,s-ar[n-1],n-1,dp) or subsetSum(ar,s,n-1,dp));
    else
        return subsetSum(ar,s,n-1,dp);
}

int main(){

      int ar[]={2,5,1,7};
    int n=4;
    int s=5;
      vector<vector<bool>> dp(n+1,vector<bool>(s+1));

      for(int i=0;i<=n;i++)
          dp[i][0]=true;
      
      for(int j=0;j<=s;j++)
          dp[0][j]=false;

      if(subsetSum(ar,s,n,dp))
         cout<<" found a subset"<<endl;
      else 
         cout<<" not found "<<endl;

    return 0;
}