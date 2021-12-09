#include<iostream>
#include<map>
#include<iterator>
#include<bits/stdc++.h>
using namespace std;

int main(){

  map<int,int> mp;
   
   for(int i=0;i<10;i++)
         mp[i]++;
    auto it=mp.find(100);
  if((it)==mp.end())
    cout<<"working out"<<endl;
    else
     cout<<"fucked up"<<endl;

for(auto i : mp)
   cout<<endl<<i.first<<" "<<i.second;

    return 0;
}