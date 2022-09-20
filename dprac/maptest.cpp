#include<bits/stdc++.h>
using namespace std;


int main(){

 int n;
cin>>n;
 vector<int> v;

 for(int i=0;i<n;i++){
   int x;
   cin>>x;
   v.push_back(x);
 }

 map<int,int,greater<int>> mp;

 for(auto it:v)
   mp[it]++;

for(auto it:mp)
  cout<<it.first<<" "<<it.second<<endl;

auto it=mp.begin();
auto i=mp.begin();

if(it->first==i->first){
     if(it->second>i.second)
       cout<<i.second;
     else
        cout<<it.second;

}
else
  cout<<it.second;

return 0;

}
