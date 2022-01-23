#include<vector>
#include<iostream>

using namespace std;

void addEdge(int x,int y,vector<int> adj[]){
    adj[x].push_back(y);
    adj[y].push_back(x);
}

int main(){
    int n; cin>>n;
    int m; cin>>m;

    vector<int> adj[n+1];

    for(int i=0;i<m;i++){
        int x, y;
        cin>>x>>y;
        addEdge(x,y,adj);
    }

    vector<bool> vis(n+1,false);

     
   for(int i=1;i<=n;i++){
     if(adj[i].size()>1)
    for(auto &it :adj[i])
        cout<<it<<" ";
        cout<<endl;
   }
    

 
}