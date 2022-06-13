#include<bits/stdc++.h>
using namespace std;

struct node{
    int x,y;
    node(int i,int j){
        x=i,y=j;
    }
};

bool comp(node &p1, node &p2){

return true;
}

int main(){
   
 priority_queue<node,vector<node>,std:: function<bool(node,node)>> pq(comp);  
 //  priority_queue<pair<int,int> ,vector<pair<int,int>>,std::function<bool(pair<int,int>,pair<int,int>)>> pq(comp);

    return 0;
}