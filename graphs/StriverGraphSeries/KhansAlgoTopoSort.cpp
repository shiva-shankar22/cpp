#include<bits/stdc++.h>
using namespace std;

bool isBipartite(vector<int> adj[],int n){

   vector<int> indegree(n+1,0);

   for(int i=0;i<=n;i++){
       auto it= adj[i];
       for(auto &ii : it)
            indegree[ii]++;
   }
   queue<int> q;

   for(int i=0;i<=n;i++)
       if(indegree[i]==0)
          q.push(i);
   int cnt=0;
   while(!q.empty()){
       int cur=q.front();
       q.pop();cnt++;
       cout<<cur<<" "<<endl;
       for(auto &it :adj[cur]){
           indegree[it]--;
           if(indegree[it]==0)
              q.push(it);
       }
          
   }      

  return (cnt==n);  
}

int main(){
    return 0;
}