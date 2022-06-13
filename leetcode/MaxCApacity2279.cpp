#include<bits/stdc++.h>
using namespace std;

void initiate(vector<int> &cap,vector<int> &present){
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    int n=present.size();

    for(int i=0;i<n;i++){
        int val= cap[i]-present[i];
        pq.push({val,i});
    }       

    int available=100;
 
    int cnt=0;

    while(!pq.empty()){
        if(pq.top().first==0 )cnt++;
        else if(pq.top().first<=available){
            available-=pq.top().first;
            cnt++;
        }
        pq.pop();
    }
  cout<< cnt;
}


int main(){

  
 // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
 // priority_queue<int,vector<int> , greater<int>> pq;

  vector<int> pre={2,2,0},cap={10,2,2};
   
   initiate(cap,pre);

}