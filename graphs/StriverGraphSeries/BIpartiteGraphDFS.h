/*
   Bipartite Graph is a graph that can be colored exactly using not more than 2 colors 
   and Such that "No two adjacent nodes have colored with same color ".

  --> If a Graph has odd length cycle its not a bipartite Graph 
*/


#include<vector>
#include<iostream>
using namespace std;

bool isBipartite(vector<int> adj[],int s,int p,vector<int> &col){
       if(p==-1)col[s]=0; 
        for(auto &it : adj[s]){
           if(col[it]==-1){
             col[it]=1-col[s];
             if(!isBipartite(adj,it,s,col))return false; 
           }
           else if(col[it]==col[s])return false;
        }

        return true;
}