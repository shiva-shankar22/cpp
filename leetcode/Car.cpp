#include<bits/stdc++.h>
using namespace std;
  map<char,pair<int,int>> mp;

bool fun(int idx,int i,int j,string &str, map<char,pair<int,int>> &mp,int n,int m){
         if(i>=n || j>=m|| j<0 ||i<0)return false;

         if(idx==str.size())return true;

         char ch=str[idx];

         int curx=i+mp[ch].first;
         int cury =j+mp[ch].second;

     return fun(idx+1,curx,cury,str,mp,n,m);//){
}

int main(){
    int n,m;
    cin>>n>>m;

  
    mp['L']={0,-1};
    mp['R']={0,1};
    mp['F']={1,0};
    mp['B']={-1,0};
    string str;
    cin>>str;
   bool fg=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             if(fun(0,i,j,str,mp,n,m)){
                 fg=1;
                // cout<<i<<" "<<j<<endl;
                 break;
             }
        }
        if(fg)break;
    }
    
    if(fg)
       cout<<"Safe";
    else  
       cout<<"Unsafe";
}