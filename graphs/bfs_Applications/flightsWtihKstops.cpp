#include<bits/stdc++.h>
#define tup tuple<int,int,int>
using namespace std;

bool comp(tuple<int,int,int> t1,tuple<int,int,int> t2){
  
   int x,y,z,x1,y1,z1;

   tie(x,y,z)=t1;
   tie(x1,y1,z1)=t2;
   
  if(x==x1)
     return y<y1;
  
  return x<x1;

}

int bfs(vector<vector<pair<int,int>>> &adj,int src,int des,int k){
     priority_queue<tup,vector<tup> ,std::function<bool(tup,tup)>> pq(comp);   

     pq.push({0,0,src});
     int n=adj.size();
     vector<bool> vis(n+1,false);vector<int>dis(n+1,1e8),cost(n+1);
     vis[src]=true;
     dis[src]=-1;
     while(!pq.empty()){
         int fl,ct,node;
         tie(fl,ct,node)=pq.top();
         pq.pop();
         if(node==des)return ct;
         
         for(auto it : adj[node]){
              if(dis[node]+1<=k){
              }
         }

     }

     return -1;                                                                 
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int>>> adj(n+1);
    
    for(int i=0;i<m;i++){
        int x,y,wt;
        cin>>x>>y>>wt;
         adj[x].push_back({y,wt});
    }

    int src,des,k;
    cin>>src>>des>>k;
   
   cout<<bfs(adj,src,des,k)<<endl;

}