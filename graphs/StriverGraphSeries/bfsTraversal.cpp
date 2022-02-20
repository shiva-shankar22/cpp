#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// BFS is Traversal Technique used to traverse Graph and visit the nodes exactly once

void bfs(vector<int> adj[],int s,int n){
   vector<bool> vis(n,false);
   queue<int> q;
   q.push(s);
   vis[s]=true;
   while(!q.empty()){
       int node =q.front(); q.pop();
       cout<<node<<" ";
       for(auto &it :adj[node])
              if(!vis[it]){
                  q.push(it);
                  vis[it]=true;
              }
   }
}