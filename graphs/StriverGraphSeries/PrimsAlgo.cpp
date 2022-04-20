#include<bits/stdc++.h>
using namespace std;


void primsMst(){
       
       int n,m;
       cin>>n>>m;
       vector<pair<int,int>>adj[n];
       for(int i=0;i<m;i++){
           int x,y,wt;
           cin>>x>>y>>wt;
           adj[x].push_back({y,wt});
       }

       vector<int> key(n,1e8),par(n,-1);
       vector<bool> mst(n,false);
       

       key[0]=0;
       par[0]=-1;
      for(int count=0;count<n-1;count++){
           
            int mini=1e8,u;
              for(int i=0;i<n;i++){
                  if(!mst[i] && key[i]<mini)
                     mini=key[i],u=i;
               }
        mst[u]=true;
      //  mini=1e8;
        for(auto &it :adj[u]){
            int v=it.first;
            int wet=it.second;
            if(!mst[v] && wet<key[v])
                key[v]=wet,par[v]=u;         
        }

      }
}


int main(){
     
  
   primsMst();


    return 0;
}