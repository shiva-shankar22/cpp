#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int rodC(int ar[],int n,int l,vector<int> &dp){
    if(dp[l]!=-1) return dp[l];
    if(l<=0)return 0;
    if(l==1)return dp[l]= ar[l-1];
    
}

int main(){

   int ar[]={12,3,4};
   vector<int> dp(4,-1);
    
    return 0;
}