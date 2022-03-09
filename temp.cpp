#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;

   int l=str.length();
   int ans=0;
   if(l==n){
    map<char,int> mp;int maxi=INT_MIN;
    for(int i=0;i<l;i++)mp[str[i]]++;
    for(auto &it :mp)maxi=max(maxi,it.second);
    ans=l-maxi;
   }
   else if(l>n){
    
   }
   else if(l<n){

   }

    return 0;
}