#include<iostream>
#include<queue>
#include<vector>
using namespace std;

bool isCycle(vector<int> adj[],int s,int p,vector<bool> &vis){
   
    vis[s]=true;

   for(auto &it :adj[s]){
       if(vis[it]){
           if(it!=p)return true;
       }
       else{
           vis[it]=true;
           if(isCycle(adj,it,s,vis))return true;
       }
   }    

    return false;
}


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
      vector<bool> vis(n+1,false);
     if(isCycle(adj,1,-1,vis))
         cout<<" Cycle found";
     else cout<<" no cycle found ";
   
    return 0;
}

