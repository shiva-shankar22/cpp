#include<iostream>
#include<vector>
using namespace std;

int lcs(string str,string str2,int n,int m,vector<vector<int>> &dp){

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0)dp[i][j]=0;
            else if(str[i-1]==str2[j-1])
              dp[i][j]=1+dp[i-1][j-1];
            else
               dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }


    return dp[n][m];
}


void minOperations(string str,string str2){
    int n=str.length(),m=str2.length();
    
    vector<vector<int>> dp(n+1,vector<int> (m+1));

    int l=lcs(str,str2,n,m,dp);
   
    cout<<"no of deletions : "<<n-l<<"\nno of insertions  : "<<m-l<<endl;

}


int main(){

   minOperations("sss","shh");
    return 0;
}