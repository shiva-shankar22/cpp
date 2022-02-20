#include<iostream>
#include<queue>
#include<vector>
using namespace std;

bool isCycle(vector<int> adj[],int s,int n){
    vector<bool> vis(n+1,false);
    vis[s]=true;
    queue<pair<int,int>> q;
    q.push({s,-1});
    while(!q.empty()){
        auto p=q.front();
        q.pop();
        int node=p.first,par=p.second;
        for(auto &it : adj[node]){
            if(vis[it]){
                 if(it!=par)return true;
            }
            else{
                q.push({it,node});
                vis[it]=true;
            }
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
     
     if(isCycle(adj,1,n))
         cout<<" Cycle found";
     else cout<<" no cycle found ";
   
    return 0;
}

