#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> v;
int x;
    for(int i=0;i<n;i++){
       
       cin>>x;
       v.push_back(x); 
    }
 map<int,int,greater<int>> mp;//stores greater key first irrespective of their value 

  for(auto it:v)
    mp[it]++;
mp[x]=6;
  for(auto it:mp)
     cout<<it.first<<" "<<it.second<<endl;

int cnt=0;


    return 0;
}