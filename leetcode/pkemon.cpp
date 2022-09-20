#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin>>str;
  

  map<char,int>mp;
  int n=str.size();
  for(int i=0;i<n;i++)
    if(mp.find(str[i])==mp.end()) 
     mp[str[i]]=i;

  int i=0;
  for( i=0;i<n;){
     char ch=str[i];

     if(mp.find(char(ch+1))!=mp.end() && mp[char(ch+1) ] >i){
         i=mp[char(ch+1)];
     }
     else break;
     cout<<"loop "<<i<<endl;
  }

  cout<<i;

}