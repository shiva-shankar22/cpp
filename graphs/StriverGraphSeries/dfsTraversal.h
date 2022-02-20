#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// DFS is Traversal Technique used to traverse Graph and visit the nodes exactly once

void dfs(vector<int> adj[],int s,vector<bool> &vis){
    
    vis[s]=true;
    cout<<s<<" ";
    for(auto &it : adj[s])
          if(!vis[it]){
              vis[it]=true;
              dfs(adj,it,vis);
          }
              
}
