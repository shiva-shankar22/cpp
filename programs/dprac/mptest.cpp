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

int cnt=0;


    return 0;
}