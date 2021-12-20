#include<deque>
#include<iostream>
#include<vector>
using namespace std;

struct p{
    int val,pos;
    p(int x,int y){
        val=x;
        pos=y;
    }
};

int main(){

    int n;cin>>n;int k;cin>>k;
    vector<int> arr(n);
    for(auto &it:arr)
        cin>>it;
    
    deque<p> dq;
    for(int i=0;i<n;i++)
         dq.push_back(p(arr[i],i+1));
    
    while(dq.size()>1){
       p node=dq.front();
       dq.pop_front();
       node.val-=k;
       if(node.val>0)
       dq.push_back(p(node.val,node.pos));

    }

    cout<<dq.front().pos<<endl;
}