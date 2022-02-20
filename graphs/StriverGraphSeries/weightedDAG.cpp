#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<pair<int,int>>> &adj,int u,int v,int w){
    adj[u].push_back({v,w});
}

int main(){
   int n,m;
   cin>>n>>m;
  vector<vector<pair<int,int>>> adj(n+1);
   for(int i=0;i<m;i++){
       int x,y,w;
       cin>>x>>y>>w;
       addEdge(adj,x,y,w);
   }
   
   cout<<" Graph Adjacency List is "<<endl;

   for(int i=0;i<=n;i++){
       cout<<i<<" ->";
       for(auto &it :adj[i])
             cout<<"{ "<<it.first<<","<<it.second<<" } ";
          cout<<endl;
   }

   return 0;
}