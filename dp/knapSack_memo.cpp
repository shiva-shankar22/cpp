//top down  memoization

#include<iostream>
#include<vector>
using namespace std;


int knapSack(int ar[],int val[],int w,int n,vector<vector<int>> &dp){
    if(n<0 || w<=0)return 0;
    if(dp[n][w]!=-1)return dp[n][w];
   
   if(w-ar[n]>=0)
      return dp[n][w]=max(val[n]+knapSack(ar,val,w-ar[n],n-1,dp),knapSack(ar,val,w,n-1,dp));

  else 
       return dp[n][w]=knapSack(ar,val,w,n-1,dp);
}


int main(){
   
     int ar[]={1,2,3,4};
  int val[]={5,2,8,1};
 int n=4;
 int w=5;
  vector<vector<int>> dp(n+1,vector<int>(w+1,-1));

  

  knapSack(ar,val,w,n,dp);//<<endl;

 
   for(auto it:dp){
       for(auto i:it)
         cout<<i<<" ";
      cout<<endl;
   }
    

    return 0;
}