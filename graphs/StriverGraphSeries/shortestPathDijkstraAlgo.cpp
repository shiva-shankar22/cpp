#include<bits/stdc++.h>
using namespace std;

void dijkstra(vector<pair<int,int>>adj[],int src , int n){
    priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> dis(n+1,INT_MAX);
    vector<bool> vis(n+1,false); 
    dis[src]=0;
    pq.push({0,src});
    while(!pq.empty()){
         int node =pq.top().second;
         int d=pq.top().second;

         pq.pop();
         for(auto &it :adj[node])
             if(!vis[it.first]){
                 dis[it.first]=dis[node]+it.second;
                 vis[it.first]=true;
                  pq.push({dis[it.first],it.first});
             }
             else if(dis[it.first] > dis[node]+it.second){
                 dis[it.first]=dis[node]+it.second;
                 pq.push({dis[it.first],it.first});
             }
               
    }

    for(int i=0;i<=n;i++)cout<<dis[i]<<" is distance for node "<<i<<endl;
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<pair<int,int>> adj[n+1];

    for(int i=0;i<m;i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        adj[x].push_back({y,wt});
    }
    int src;
    cin>>src;
    dijkstra(adj,src,n);
 
}