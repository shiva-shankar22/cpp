#include<iostream>
#include<vector>
using namespace std;


int lcs(string s,string str,int i,int j,vector<vector<int>> &dp){
    if(i==s.size()||str.size()==j)
       return 0;
 
    if(dp[i][j]!=-1)
       return dp[i][j];
    
    if(s[i]==str[j])
         dp[i][j]=1+lcs(s,str,i+1,j+1,dp);
    else 
      dp[i][j]=max(lcs(s,str,i+1,j,dp),lcs(s,str,i,j+1,dp));

    return dp[i][j];
}

int main(){

    int n,m;
    string str,str2;
    cin>>str>>str2;

    n=str.length(),m=str2.length();
  
    vector<vector<int>> dp(n+1,vector<int> (m+1,-1));

    cout<<endl<<lcs(str,str2,0,0,dp)<<endl;
    
    return 0;
}