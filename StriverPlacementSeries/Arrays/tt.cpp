#include<bits/stdc++.h>
using namespace std;

vector<int> res;

bool subset2(vector<int> &ar,int idx,int sum,bool &fg2){
    if(sum==0){
        fg2=1;
        return true; 
    }
    if(idx==ar.size())return false;

       bool ans=false;
    if(sum>=ar[idx] && res[idx]!=0){
       res[idx]=1;
       ans = ans || subset2(ar,idx+1,sum-ar[idx],fg2);
       if(!fg2)
          res[idx]=2;
    } 
      
    if(!fg2)
    ans=ans || subset2(ar,idx+1,sum,fg2);
}


bool subset(vector<int> &ar,int idx,int sum,bool &fg){
    
    if(sum==0){
        fg=1;
        return true; 
    }
    
    if(idx==ar.size())return false;

       bool ans=false;
    if(sum-ar[idx]>=0){
       res[idx]=0;
       ans = ans || subset(ar,idx+1,sum-ar[idx],fg);
       if(!fg)
          res[idx]=2;
    } 
      
    if(!fg)
    ans=ans || subset(ar,idx+1,sum,fg);

    return ans;
}

int main(){
    int n,k;
    cin>>n>>k; bool fg=false;
    vector<int> ar(n);
    res.resize(n);
    for(int i=0;i<n;i++){
        res[i]=2;
        ar[i]=i+1;
    }
   
     bool fg2=false;

     if(subset(ar,0,k,fg)){ 
       cout<<"possible "<<endl;
       for(int i: res)cout<<i<<" ";

     }
     else cout<<"not"<<endl;
}