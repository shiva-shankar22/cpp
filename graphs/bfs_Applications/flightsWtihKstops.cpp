#include<bits/stdc++.h>
using namespace std;


struct node{
   int x,y;
   
};

int bfs(vector<vector<int>> adj,int src,int des,int k){

}

bool comp(tuple<int,int,int> t1,tuple<int,int,int> t2){
  
   int x,y,z,x1,y1,z1;

   tie(x,y,z)=t1;
   tie(x1,y1,z1)=t2;
   
  if(x==x1)
     return y<y1;
  
  return x<x1;

}


int main(){
    

   // priority_queue<node,vector<node,function<bool(node,node)>>>pq(comp);
   
   priority_queue<tuple<int,int,int> ,vector<tuple<int,int,int>>,  std:: function<bool(tuple<int,int,int>,tuple<int,int,int>)>> pq; 
    

   tuple<int,int,int> t;
   
   cout<<get<0>(t);

}