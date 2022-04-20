#include<bits/stdc++.h>
using namespace std;


int lcs(string &str,string &str2,int i,int j, vector<vector<int>> &dp){
      if(i==0 || j==0)return 0;
      
      if(dp[i-1][j-1]!=-1)return dp[i-1][j-1];
 int len=0;
     if(str[i-1]==str2[j-1])return 1+lcs(str,str2,i-1,j-1,dp);
     
     else len=max(lcs(str,str2,i-1,j,dp),lcs(str,str2,i,j-1,dp));
return dp[i-1][j-1]=len;
}

int main(){
    
    string str="xabcva",str2="sivhsanr";
  int n=str.length(),m=str2.length();
  vector<vector<int>> dp(n,vector<int>(m,-1));
    cout<<lcs(str,str2,n,m,dp)<<endl;
    return 0;
}

//s
//s