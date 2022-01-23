#include<iostream>
#include<vector>

using namespace std;

int findMax(vector<int> &ar,int n,vector<int> &dp){
    if(n<0)return 0;

    if(dp[n]!=-1)return dp[n];

    return dp[n]=max(findMax(ar,n-2,dp)+ar[n],findMax(ar,n-1,dp));
}

int main(){
    
    vector<int> v={2,1,1,2};
     int n=4;
    vector<int> dp(n+1,-1);
    cout<<endl<<findMax(v,3,dp)<<endl;
 
    return 0;
}