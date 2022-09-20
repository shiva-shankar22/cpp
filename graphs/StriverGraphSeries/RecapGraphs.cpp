/*Prims
  Krushkal
  DisjointSet
  KosaRaju
  BellmenFord
  dikstra
  Bridges
  Articulation Point
  */

#include<bits/stdc++.h>
using namespace std;

vector<int> adj[];
int n;
vector<bool>vis(n+1);

void dikstra(int src){
   priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;

   pq.push({0,src});
   
   vis[src]=0;
   vector<int> dis(n+1,1e8);
   
   while(!pq.empty()){
       auto &it =pq.top();
       pq.pop();
       int cur=it.second,d=it.first;
       for(auto &i: adj[cur])
         if(!vis[i] or dis[i]>dis[cur]+1){
             dis[i]=dis[cur]+1;
             vis[i]=true;
             pq.push(make_pair(dis[i],i));
         }

   }

  for(int i=0;i<=n;i++)
     cout<<i<<"  "<<dis[i]<<endl;

}


bool comp(vector<int> &ar,vector<int> &ar2){
  return ar[2]<ar[0];
}

void primsMST(){

  vector<vector<int>> edges;
  sort(edges.begin(),edges.end(),comp);

  
  int n;
  vector<int> mst(n+1,0);
  int cst=0;

  for(int i=0;i<n-1;i++){
     
       

  }
 
}








int main(){

}