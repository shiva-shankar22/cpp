
//bottom up memoization

#include<iostream>
#include<vector>
using namespace std;

int knapSack(int ar[],int val[],int w,int i,int n,vector<vector<int>> &dp){

    if(i==n or w<=0)return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    if(w-ar[i]>=0)
      return dp[i][w]=max(val[i]+knapSack(ar,val,w-ar[i],i+1,n,dp),knapSack(ar,val,w,i+1,n,dp));

    else
          return dp[i][w]=knapSack(ar,val,w,i+1,n,dp);

}

int main(){
    int ar[]={1,2,3,5};
    int val[]={5,4,8,7};
    int n=4,w=5;

    vector<vector<int>> dp(n+1,vector<int>(w+1,-1));
   
    cout<<knapSack(ar,val,w,0,n,dp)<<endl;
    
    for(auto it:dp){
       for(auto i:it)
         cout<<i<<" ";
      cout<<endl;
   }
    


    return 0;
}