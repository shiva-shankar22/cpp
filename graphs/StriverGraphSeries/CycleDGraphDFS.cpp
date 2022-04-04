#include<bits/stdc++.h>
using namespace std;

int n=10;
vector<int> vis(n,0),nodePath(n,0);
//  Cycle Detection using DFS in Directed Graph
// intution is checking whether a visted node is visted again in same path 
// then we conclude there exists a cycle
 
bool isCycle(int n,vector<int> adj[],int s){
    
    vis[s]=1;
    nodePath[s]=1;
    for(auto &it :adj[s])
        if(vis[it] && nodePath[it])return true;
        else if(!vis[it]){
            vis[it]=1;
            if(isCycle(n,adj,s))return true;
        }
    
    nodePath[s]=0;

 return false;
}