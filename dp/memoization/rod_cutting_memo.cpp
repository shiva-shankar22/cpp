#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int findMax(int n,int ar[],vector<int> &dp){
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];
    int res=INT_MIN;
    
    for(int i=1;i<=n;i++)
       res=max(res,findMax(n-i,ar,dp)+ar[i-1]);
       
    return dp[n]=res;
}

int main(){
    int ar[]={3,14,2,1,5,32,1,6,4,3,9,5,8};
    int l=sizeof(ar)/sizeof(ar[0]);
    vector<int> dp(l+1,-1);
    cout<<endl<<findMax(l,ar,dp)<<endl;
    
    return 0;
}