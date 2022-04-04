#include<bits/stdc++.h>
using namespace std;

bool isBipartite(vector<int> adj[],int s){
    queue<int> q; int n=10;//no of nodes
   vector<int> col(n),vis(n,0);
   col[s]=0;vis[s]=1;

  q.push(s);
   while(!q.empty()){
       int node=q.front();
  q.pop();
       for(auto it : adj[node])
             if(!vis[it]){
                vis[it]=1;
                col[it]=!col[node];
                q.push(it);
             }
             else if(col[it]==col[node])return false;
   }

  return true;
}