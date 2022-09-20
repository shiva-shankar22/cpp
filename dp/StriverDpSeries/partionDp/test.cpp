#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &ar,int n,int len,int idx,int i,map<int,int> &mp){
     if((mp.size()==1 && len==2) || (len==3 && mp.size()==1))return true;

     for(int j=idx;j<=i;i++)
        if(j+1<n && ar[j]==ar[j+1]+1)continue;
        else return false;
    return true;
}

bool isvalid(vector<int> &ar,int n,int idx){
    if(idx==n|| idx+1==n)return true;
    // if(idx+2==n){
    //     return ar[idx]==ar[idx+1];
    // }
    // if(idx+3==n){

    //     return ar[idx]==ar[idx+1]==ar[idx+2];
    // }

    if(idx+1==n)return false;
    int len=0;
    map<int,int>mp;
    bool fg=false;
    for(int i=idx;i<n;i++){
        ++len;
       if((len==2 || len==3) && check(ar,n,len,idx,i,mp) )
            fg=fg || isvalid(ar,n,i+1);
       mp[ar[i]]++;      
    }
  return fg;
}


int main(){
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
   
   cout<<isvalid(ar,n,0)<<endl;
}