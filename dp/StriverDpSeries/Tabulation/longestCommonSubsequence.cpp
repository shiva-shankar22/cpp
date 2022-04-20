#include<bits/stdc++.h>
using namespace std;


int lcs(string &str,string &str2,int n,int m){
  
    
    vector<vector<int>> dp(n+1,vector<int> (m+1,0));

    for(int i=0;i<n+1;i++)dp[i][0]=0;
     for(int i=0;i<n+1;i++)dp[0][i]=0;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(str[i-1]==str2[j-1])dp[i][j]=1+dp[i-1][j-1];
            else{
                int l=0;
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    for(auto &it: dp){
        for(auto &i : it)
          cout<<i<<" ";
          cout<<endl;
    }



  string ans="";
   bool flg=false;
      
      int i=n,j=m;
     // string ans="";
     while(i>0 &&j>0) {  
            
            if(str[i-1]==str2[j-1]){
                ans+=str[i-1];
                i--,j--;
            }
            else if(dp[i-1][j]>dp[i][j-1]){
                  i--;
            }
            else j--;
          
      }

      

     // if(flg)break;
  

  cout<<ans<<endl;

  return dp[n][m];
}

int main(){
    
    string str2="xabcva",str="sivhsanr";
  int n=str.length(),m=str2.length();
 // vector<vector<int>> dp(n,vector<int>(m,-1));
    cout<<lcs(str,str2,m,n)<<endl;
    return 0;
}