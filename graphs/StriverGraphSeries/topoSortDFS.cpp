#include<bits/stdc++.h>
using namespace std;

void topoSort(vector<int> adj[],int s,vector<int> &vis,stack<int> &ans){
    vis[s]=1;
    //nodePath[s]=1;
    
    for(auto &it :adj[s])
         if(!vis[it]){
             topoSort(adj,it,vis,ans);
             vis[it]=1;
         }
        // else if(nodePath[it])
             
   ans.push(s);
}

int main(){
 
   stack<int> ans;int n=10;
   vector<int> adj[n+1],vis(n+1,0);
   topoSort(adj,0,vis,ans);
    
   

    return 0;
}