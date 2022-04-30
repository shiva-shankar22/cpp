#include<bits/stdc++.h>
using namespace std;


vector<int> operator+(vector<int> &a,vector<int> &aa){
       
       vector<int> ans;

       for(auto &it: a)ans.push_back(it);
       
       for(auto &it: aa)ans.push_back(it);

      return {};
}

int main(){

    vector<int> v={1,2};
    vector<int> v1={1,2};
    
    vector<int> vv=v+v1;

   
       for(auto &it: vv)cout<<it<<" ";
}