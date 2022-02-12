#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void addEdge(int x,int y,vector<int> adj[]){
     adj[x].push_back(y);
     adj[y].push_back(x);
}

void bfs(vector<int> adj[],int src,int n){
       vector<bool> vis(n+1);
       vis[src]=true;
       queue<int> q;
       q.push(src);

       while(!q.empty()){
            int node = q.front();
            q.pop();
               cout<<node<<" ";
            for(auto &it : adj[node]){
                 if(!vis[it]){
                      vis[it]=true;
                      q.push(it);
                 }
            }
       }
}

int main(){
    
    
    int n;
    cin>>n;

    vector<int> adj[n+1];

    int m; cin>>m;

    for(int i=0;i<m;i++){
         int x,y;
         cin>>x>>y;
         addEdge(x,y,adj);
    }
 for (int v = 0; v < n+1; ++v) {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }

}