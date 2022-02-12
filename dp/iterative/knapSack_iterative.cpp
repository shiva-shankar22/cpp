#include<iostream>
#include<vector>
using namespace std;

int knapSack(int ar[],int val[],int W,int n,vector<vector<int>> &dp){

 for(int i=0;i<=n;i++){
     for(int j=0;j<=W;j++){
      if(i==0||j==0)dp[i][j]=0;

       else if(ar[i-1]<=j)
           dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-ar[i-1]]);
        else 
            dp[i][j]=dp[i-1][j];
     }
 }
     

    return dp[n][W];
}

int main(){
  
   int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int w= 50,n=3;
   
   vector<vector<int>> dp(n+1,vector<int> (w+1));

   
   
   cout<<endl<<knapSack(wt,val,w,n,dp)<<endl;

   for(auto it:dp){
       for(auto i : it)
          cout<<i<<" ";
       cout<<endl;
   }

    return 0;
}