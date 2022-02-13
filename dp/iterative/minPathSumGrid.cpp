#include<bits/stdc++.h>
using namespace std;


int solve(vector<vector<int>> &arr){
    int n=arr.size(),m=arr[0].size();
    vector<vector<int>> dp(n,vector<int>(m,0));

    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           
           if(i==0 && j==0)dp[i][j]=arr[i][j];
         
         
           else{
               int left=arr[i][j];
               int right=arr[i][j];
               if(i>0)
                  left+=dp[i-1][j];
             if(j>0)  right+=dp[i][j-1];
              dp[i][j]=min(left,right);
           }
       }
    }

    for(auto &it :dp){ 
       for(auto &i:it)
          cout<<i<<" ";
         cout<<endl;
    }

    return dp[n][m];
}

int main(){
    vector<vector<int>> arr{    {1,2,3},
                                {4,5,6},
                                {7,8,9} };
         vector<vector<int>> dp(4,vector<int>(4,-1));

     cout<<endl<<solve(arr)<<endl;
    
}