#include<bits/stdc++.h>
using namespace std;

void topoSort(vector<int> adj[],int s,vector<int> &vis){
    
  queue<int> q;
  int n=10;
  vector<int> inDegree(n+1,0);

  for(int i=0;i<=n;i++){
      for(auto &it :adj[i])
             inDegree[it]++;
  }

  for(int i=0;i<=n;i++)
     if(inDegree[i]==0)
        q.push(i);

  while(!q.empty()){
       int cur=q.front();
       q.pop();
       cout<<cur<<" ";
      
       for(auto &it :adj[cur]){
            inDegree[it]--;
            if(inDegree[it]==0)q.push(it);
       }

  }

}


int main(){

    return 0;
}