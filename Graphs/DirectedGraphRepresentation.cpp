#include<vector>
#include<iostream>
using namespace std;

void addEdge(int x,int y,int wt,vector<pair<int,int>> adj[]){
       adj[x].push_back({y,wt});
}

int main(){
      
      int n,m;
      cin>>n>>m;
      vector<pair<int,int>> adj[n+1];

      for(int i=0;i<m;i++){
          int x,y,wt;
          cin>>x>>y>>wt;
          addEdge(x,y,wt,adj);
      }

      for(int i=0;i<n+1;i++){
          cout<<" from node "<<i<<" ->";
          for(auto &it:adj[i]){

              cout<<"{ "<<it.first<<","<<it.second<<" }  -->";
          }
      }

    return 0;
}