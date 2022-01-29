#include<iostream>
#include<vector>
using namespace std;

void fun(int idx,int n,vector<int> &arr,vector<bool> &vis,vector<vector<int>> &ans,vector<int> &ds){
         if(ds.size()==n){
             ans.push_back(ds);
             return;
         }

         for(int i=0;i<n;i++){
             
             if(!vis[i]){
                 vis[i]=true;
                 ds.push_back(arr[i]);
                 fun(idx+1,n,arr,vis,ans,ds);
                 ds.pop_back();
                 vis[i]=false;
             }

         }
}


void permute(vector<int> &arr){
    
    vector<int> ds;
    vector<vector<int>> ans;
    int n=arr.size();
    vector<bool> vis(n,false);
    fun(0,n,arr,vis,ans,ds);

    for(auto &it: ans){
        for(auto &i: it)
           cout<<i<<" ";
           cout<<endl;
    }
}

int main(){
    vector<int> arr={1,2,3};
    permute(arr);

    return 0;
}