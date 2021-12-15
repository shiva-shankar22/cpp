#include<iostream>
#include<vector>
using namespace std;



int lcs(string str,string str2){
    int n=str.length(),m=str2.length();
    vector<vector<int>> dp(n+1,vector<int> (m+1));

  for(int i=0;i<=n;i++){
      for(int j=0;j<=m;j++){
          if(i==0||j==0) 
            dp[i][j]=0; 

        else if(str[i-1]==str2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
        else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
      }
  }

  
  

  return dp[n][m];
}

int main(){
  
   cout<<endl<<lcs("svp","sspp")<<endl;
   return 0;
}