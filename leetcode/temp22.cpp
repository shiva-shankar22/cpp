#include<bits/stdc++.h>
using namespace std;


int main(){ 
   
   vector<int> v={1,1,1,1,2,2,2,3,3,4,45,6,5};

 //map<int,int> mp;

 map<int,int,greater<int>>mp;
   for(auto &it :v)mp[it]++;

   for(auto &it: mp)cout<<it.first<<endl;

    return 0;
}