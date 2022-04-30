#include<iostream>
#include<vector>
#define mod 1e9+7
using namespace std;


int solve(string str,int idx,int n,vector<int> &dp){
    
    if(idx>=n){
         // cout<<str<<endl;
        return 1;
     
    }
    if(dp[idx]!=-1)return dp[idx];
    int cnt=1,i;
    for( i=idx;i<n;i++){
        if(str[i]=='3' && i+1<n && str[i+1]=='3' ){
 
              cnt+=solve(str,i+2,n,dp);
        }
            
        else if(str[i]=='7' && i+1<n && str[i+1]=='7'){ 
             
              cnt+=solve(str,i+2,n,dp);
     }
            
    }
  return dp[i]=cnt;
}


int numberOfWays(string s){
   int n=s.length();
   vector<int> dp(n+1,-1);

    return solve(s,0,n,dp);
}


int main(){
   string str;
   cin>>str;
   int cnt ;//= stringUpdation(str);
   int n=str.length();
   vector<int> dp(n+1,-1);
   cnt=numberOfWays(str);
    cout<<cnt<<endl;
}