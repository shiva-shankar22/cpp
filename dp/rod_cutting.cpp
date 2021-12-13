#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int rodC(int ar[],int n,int l,vector<int> &dp){
    if(dp[l]!=-1) return dp[l];
    if(l<=0)return 0;
    //if(l==1)return dp[l]= ar[l-1];

    int ans=INT_MIN;

    for(int i=1;i<=n;i++){
        if(l-i>=0)
         ans=max(ans,ar[i-1]+rodC(ar,n,l-i,dp));
    }
    
    return dp[l]=ans;
}

int main(){

   int ar[]={12,3,4};
   vector<int> dp(4,-1);

   cout<<rodC(ar,3,3,dp)<<endl;
    
    return 0;
}