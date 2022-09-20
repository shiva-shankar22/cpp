#include<bits/stdc++.h>
using namespace std;

void dfs(int node,int parent,vector<vector<int>> &adj,int timer,vector<int> &vis,vector<int> &low,vector<int> &tin){
       
     //  cout<<"rr"<<endl;
       low[node]=tin[node]=++timer;
            //   for(int i: low)
            //       cout<<i<<" ";
     //  cout<<timer<<endl;
    
       vis[node]=1;
// cout<<node<<endl;

       for(int i: adj[node]){
        if(i==parent)continue;
       // cout<<i<<endl;
             if(vis[i]!=0){
                 
                 dfs(i,node,adj,timer,vis,low,tin);
                 cout<<"dfs done"<<endl;
                low[node]=min(low[node],low[i]);
                cout<<vis[i]<<" "<<i<<" "<<low[i]<<" "<<tin[i]<<" "<<endl;
                if(low[i]>tin[node])
                   cout<<"bridge b/w" <<node<<"--"<<i<<endl;
                
             }
             else if(i !=parent){
                   low[node]=min(low[node],tin[i]);
             }
       }       
}


int main(){int 2m;
      
      // vector<vector<int>> edges={{}, {2,3}};//,{3,1},{1,2,4},{3,5,6},{4,7},{4,8,10},{5,8,9},{7,6}};
      // vector<int> tim(4,1e6),low(4,1e6),vis(4,0);
      // int time=0;

      // dfs(1,-1,edges,time,vis,low,tim);

      // multiset<int> st;
      // st.insert()
    return 0;
}