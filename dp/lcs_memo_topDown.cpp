#include<iostream>
#include<vector>
using namespace std;

int lcs(string str,string str2,int n,int m,vector<vector<int>> &dp){
     
     if(n==0||m==0)return 0;
     
   if(dp[n-1][m-1]!=-1)return dp[n-1][m-1];

     if(str[n-1]==str2[m-1])return dp[n-1][m-1]=1+lcs(str,str2,n-1,m-1,dp);
      
     else
         dp[n-1][m-1]=max( lcs(str,str2,n-1,m,dp),lcs(str,str2,n,m-1,dp));

      
    return dp[n-1][m-1];  
}


int main(){
    
      string str,str2;str="striver",str2="river";
      //cin>>str>>str2;
       int n=str.length(),m=str2.length();
      vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
        
    cout<<endl<<lcs(str,str2,n,m,dp)<<endl;

    return 0;
}