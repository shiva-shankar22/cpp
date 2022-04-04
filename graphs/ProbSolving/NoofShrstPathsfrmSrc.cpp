#include<bits/stdc++.h>
using namespace std;

int findWays(vector<pair<int,int>>adj[],int n,int src,int des){
    vector<int> dis(n+1,INT_MAX);
    vector<int> ans(n+1,0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    
    pq.push({0,src});

    while(!pq.empty()){
        int cur=pq.top().second;
        int d=pq.top().first;

        for(auto &it :adj[cur]){
            if(dis[it.first]==INT_MAX){
                dis[it.first]=dis[cur]+it.second;
               pq.push({dis[it.first],it.first});
            }
            else if(dis[it.first]==dis[cur]+it.second){
                ans[it.first]++;
            }
        }
    }

    return ans[des];
}

int main(){



    return 0;
}