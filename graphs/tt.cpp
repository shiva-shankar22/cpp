#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
vector<int> ds;
int solve(int idx,int n,vector<int> &ar,int val,vector<vector<int>> &dp){
    if(val==0){
       return 0;
    }
    if(val<0 || idx>=n)return 1e8;

    if(dp[idx][val]!=-1)return dp[idx][val];
    int ans=0;

       ans=1+solve(idx+1,n,ar,val-ar[idx],dp);
     
    ans=min(ans,solve(idx+1,n,ar,val,dp));
    
    return dp[idx][val]= ans;
}

int main(){
    

    int cnt=0;
    vector<int> arr;
    
    int val;
    cin >> val;
    
    for(int i=1;(i*(i+1))/2 <=val ;i++){ 
         arr.push_back((i*(i+1))/2);
        cnt++;
    }
    
    
    for(auto &it : arr)cout<<it << " ";
    
    cout<<endl;
    vector<vector<int>> dp(cnt+1,vector<int> (val+1,-1));
 //  cout<<cnt<<" cnt "<<endl;
   cout<< solve(0,cnt,arr,val,dp);
  
  
    
    
    /*for(auto &it : ans){ 
       for(int i: it)
            cout<<i<<" ";
     cout<<endl;
        
    }
    */
    
    return 0;
}