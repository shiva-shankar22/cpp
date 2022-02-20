#include<vector>
#include<iostream>
#include"dfsTraversal.h"
#include "BIpartiteGraphDFS.h"
using namespace std;


void addEdge(int u,int v, vector<int> adj[]){
    adj[u].push_back(v);
    adj[v].push_back(u);
}


int main(){

   int n,m;
   cin>>n>>m;
   vector<int> adj[n+1];

   for(int i=0;i<m;i++){
       int x,y;
       cin>>x>>y;
       addEdge(x,y,adj);
   }

   for(int i=0;i<n+1;i++){
      cout<<"node "<<i<<" to ->";
      for(auto it: adj[i])
          cout<<it<<" -";
          cout<<endl;
   }
  // vector<bool> vis(n+1,false);
    vector<int> col(n+1,-1);
    if(isBipartite(adj,1,-1,col))
     cout<<"Graph is Bipartite "<<endl;
     else cout<<"Not a Bipartite Graph "<<endl;
 
    return 0;
}