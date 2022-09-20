#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
}

int solve(int node,vector<int> adj[],vector<int> &path,vector<int> &vis,int cur,int *maxi){
    if(vis[node] && path[node])return 0;
    int ans=0;
    path[node]=1;vis[node]=1;

    for(int i: adj[node]){
         if(vis[i] && path[node]){ 
                *maxi=max(*maxi,cur);
                 cout<<"cycle detected"<<endl;
         }
         else{
            vis[i]=1;
            solve(i,adj,path,vis,cur+1,maxi);
            // maxi=maxi=max(maxi,cur);
         }
    }
    path[node]=0;
    return *maxi;
}

int longestCycle(vector<int> adj[],int n){
    vector<int> path(n+1,0),vis(n+1,0);
    int maxi=0;
     solve(0,adj,path,vis,0,&maxi);
     return maxi;
}

int main(){
     int n,m;
     cin>>n>>m; vector<int>adj[n+1];
     for(int i=0;i<m;i++){
         int x,y;
         cin>>x>>y;
        addEdge(adj,x,y);
     }
    for(int i=0;i<=n;i++){
        cout<<i<<"->";
        for(int it: adj[i])
          cout<<it<<" ";
          cout<<endl;
    }
     
    cout<<longestCycle(adj,n);
     
}