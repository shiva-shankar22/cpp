#include<bits/stdc++.h>
using namespace std;

void solve(vector<string> &str,vector<string> &ds,int idx,int n,vector<vector<string>> &ans){
   if(idx==n){
       ans.push_back(ds);return;
   }
   ds.push_back(str[idx]);
   solve(str,ds,idx+1,n,ans);
   ds.pop_back();
   solve(str,ds,idx+1,n,ans);

}

int main(){
   vector<string> arr={"aa","bb","cc"},ds;
   vector<vector<string>> ans;

   solve(arr,ds,0,3,ans);

  for(auto &it :ans){ 
     for(auto &i :it)
          cout<<i;
     cout<<endl;
  }

}