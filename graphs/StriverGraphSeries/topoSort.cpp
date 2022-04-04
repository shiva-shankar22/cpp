#include<bits/stdc++.h>
using namespace std;


void topoSort(vector<int> adj[],int n,int src,vector<bool> &vis){
    vis[src]=true;

    stack<int> st,ans;
    st.push(src);

    while(!st.empty()){
        int cur=st.top();
         st.pop();
         for(auto &it:adj[src])
           if(!vis[it]){ 
              st.push(it);
              vis[it]=true;
           }
        ans.push(cur);
    }

    while(!ans.empty()){
        cout<<ans.top()<<" ";ans.pop();
    }
}

int main(){
 
    return 0;
}