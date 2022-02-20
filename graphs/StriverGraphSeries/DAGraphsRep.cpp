#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
}


int main(){
     int n,m;
     cin>>n>>m; vector<int>adj[n+1];
     for(int i=0;i<m;i++){
         int x,y;
         cin>>x>>y;
        addEdge(adj,x,y);
     }

     
}