#include<bits/stdc++.h>
using namespace std;


int lcs(vector<int> &str,vector<int> &str2,int n,int m){
  
    
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

    

 vector<int> ans;
   bool flg=false;
      
      int i=n,j=m;
     // string ans="";
     while(i>0 &&j>0) {  
            
            if(str[i-1]==str2[j-1]){
                ans.push_back(str[i-1]);
                i--,j--;
            }
            else if(dp[i-1][j]>dp[i][j-1]){
                  i--;
            }
            else j--;
          
      }

      

     // if(flg)break;
  

  for(auto it :ans)cout<<it<<" ";
 cout<<endl;
  return dp[n][m];
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n),arr2(m);

    for(auto &it: arr)cin>>it;
    for(auto &it: arr2)cin>>it;
    
 // vector<vector<int>> dp(n,vector<int>(m,-1));
    cout<<lcs(arr,arr2,m,n)<<endl;
    return 0;
}