#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr={1,3,9,2,8,2};
    map<int,int> mp;

    for(auto &it:arr)
          mp[it]++;
    int res=INT_MIN;
    for(auto &it: mp){
        int cnt=0,val=it.first;

        while(mp[val++])
             cnt++;
        
        res=max(res,cnt);
    }
         
  cout<<res<<endl;
    return 0;
}