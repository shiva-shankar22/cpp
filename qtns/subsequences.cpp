#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int solve(vector<int> &arr,vector<int> &ds,int k,int idx,vector<vector<int>> &ans){
    if(idx==k+1){
      ans.push_back(ds);
      return 0;}
    ds.push_back(arr[idx]);
  int l=  solve(arr,ds,k,idx+1,ans);
  ds.pop_back();
  int r=solve(arr,ds,k,idx+1,ans);
  
  return (l+r);
}

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> arr(n);
    for(auto &it :arr)
       cin>>it;
       cout<<endl; int cnt=0;
     vector<int> ds;vector<vector<int>> ans;
   
   solve(arr,ds,n-1,0,ans);
   
     for(auto it:ans)
        if(it.size()==k)cnt++;
   
   cout<<cnt;
}